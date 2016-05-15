/**
 * See stratego_sglr_parse_table.c for information on the reasons for
 * using the "language" hacks.
 *
 * @author Martin Bravenboer
 * @author Karl Trygve Kalleberg
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <aterm2.h>
#include <srts/stratego.h>
#include <stratego-lib/stratego-lib-common.h>
#include <sglr.h>
#include <parse-table.h>
#include <rsrc-usage.h>
#include <MEPT-utils.h>

#include "stratego_sglr.h"
#include "stratego_sglr_internal.h"

/**
 * State
 */
static ATerm parse_error_term = NULL;
static ATerm none_term = NULL;
static ATerm *inactive_parse_tables;
static int num_inactive_parse_tables = 0;
static ATermList active_parse_tables = NULL;

/**
 * Prototypes
 */
static char* read_text_from_stream(FILE* stream);

/**
 * Parse tables must be killed using SG_DiscardParseTable. This must
 * be done after the last parse table blob has died, and cannot be
 * done when the parse table is closed (because dangling refs might
 * remain). This callback ensures that's done propely.
 */
ATbool parse_table_blob_destructor(ATermBlob t) {
  int i;
  for(i = 0; i < num_inactive_parse_tables; i++) {
    if(inactive_parse_tables[i] == (ATerm)t)
      break; 
  }
  if(i < num_inactive_parse_tables) {
    inactive_parse_tables[i] = inactive_parse_tables[num_inactive_parse_tables - 1];
    num_inactive_parse_tables--;
    SG_DiscardParseTable(parse_table_from_term((ATerm)t));
    return ATtrue;
  }
  return ATfalse;
}

/**
 * When a parse table is opened, we keep track of it as 'active'.
 */
ATerm activate_parse_table(ATerm t) {
  active_parse_tables = ATinsert(active_parse_tables, t);
  return t;
}

/**
 * When a parse table is closed again, we move it to an 'inactive' list.
 * Our blob_destructor() will only destruct inactive parse tables. 
 */
void inactivate_parse_table(ATerm t) {
  active_parse_tables = ATremoveElement(active_parse_tables,  t);
  assert(num_inactive_parse_tables < MAX_INACTIVE_PARSE_TABLES);
  inactive_parse_tables[num_inactive_parse_tables++] = t;
}

void STRSGLR_ensure_init(void)
{
  ATerm foo;

  static ATbool STRSGLR_init = ATfalse;
  if(STRSGLR_init)
    return;

  STRSGLR_init = ATtrue;

 
  ATregisterBlobDestructor(parse_table_blob_destructor);

  PT_initMEPTApi();
  PT_initAsFix2Api();
  initErrorApi();

  SG_TOOLBUS_OFF();
  SG_OUTPUT_ON();
  foo = STRSGLR_set_default_config();

  none_term = (ATerm) ATmakeAppl(ATmakeAFun("None", 0, ATfalse));
  active_parse_tables = ATmakeList(0);
  inactive_parse_tables = malloc(sizeof(ATerm*) * MAX_INACTIVE_PARSE_TABLES);
  num_inactive_parse_tables = 0;

  ATprotect(&none_term);
  ATprotect(&parse_error_term);
  ATprotectList(&active_parse_tables);
}

ATerm STRSGLR_set_default_config(void)
{
  STRSGLR_ensure_init();

  STRSGLR_set_default_filters();
  SG_ASFIX2_ON();
  SG_AMBIGUITY_ERROR_OFF();
  return (ATerm) ATempty;
}

static ATerm parse_string_pt(const char* string, ATerm tbl_term, ATerm start_term, ATerm path_term)
{
  ATerm result = NULL;
  parse_table* tbl = NULL;
  const char* start = NULL;
  const char* path = NULL;

  STRSGLR_ensure_init();
  STRSGLR_clear_parse_error();

  tbl = parse_table_from_term(tbl_term);
  if(tbl == NULL)
    return NULL; // @todo: set the error term.

  if(AT_isString(start_term))
  {
    start = AT_getString(start_term);
  }
  else
  {
    if(start_term != none_term)
      return NULL;  
  }

  if(AT_isString(path_term))
  {
    path = AT_getString(path_term);
  }
  else
  {
    return NULL;
  }

  result = SGparseString(string, (SGLR_ParseTable) tbl, start, path);

  if(result != NULL)
  {
    if(SGisParseError(result))
    {
      parse_error_term = result;
      result = NULL;
    }
  }

  return result;
}

/**
 * Parse a string.
 *
 * sort is allowed to be None.
 */
ATerm STRSGLR_parse_string_pt(StrCL onfail, ATerm string_term, ATerm tbl_term, ATerm start_term, ATerm path_term)
{
  ATerm result;

  if(!AT_isString(string_term)) {
    return NULL;
  }

  result = parse_string_pt(AT_getString(string_term), tbl_term, start_term, path_term);
  if(result == NULL)
  {
    cl_fun(onfail)(cl_sl(onfail), string_term);
  }
  return result;
}

/**
 * Parse a stream.
 *
 * sort is allowed to be None.
 */
ATerm STRSGLR_parse_stream_pt(StrCL onfail, ATerm stream_term, ATerm tbl_term, ATerm start_term, ATerm path_term)
{
  char* text;
  ATerm result;

  FILE* stream = stream_from_term(stream_term);
  if(stream == NULL)
    return NULL;

  text = read_text_from_stream(stream);
  if(text == NULL)
    return NULL;

  result = parse_string_pt(text, tbl_term, start_term, path_term);
  if(result == NULL)
  {
    cl_fun(onfail)(cl_sl(onfail), ATmakeString(text));
  }
  free(text);
  return result;
}

ATerm STRSGLR_get_parse_error(void)
{
  return parse_error_term;
}

ATerm STRSGLR_is_parse_tree(ATerm trm)
{
  if(SGisParseTree(trm))
  {
    return trm;
  }
  else
  {
    return NULL;
  }
}

ATerm STRSGLR_clear_parse_error(void)
{
  if(parse_error_term != NULL)
  {
    parse_error_term = NULL;
  }

  return (ATerm) ATempty;
}

ATerm STRSGLR_anno_position_info(ATerm pt_term, ATerm path_term)
{
  PT_ParseTree pt;
  const char* path;

  if(!AT_isString(path_term)) {
    return NULL;
  }

  path = AT_getString(path_term);
  pt = PT_ParseTreeFromTerm(pt_term);
  pt = PT_addParseTreePosInfoSome(path, pt, -1, ATfalse, ATfalse);

  return PT_ParseTreeToTerm(pt);
}

ATerm STRSGLR_implode_parsetree(ATerm t)
{
  return PT_implodeParseTree(
    PT_ParseTreeFromTerm(t),
    ATtrue, /* cons */
    ATtrue, /* layout */
    ATtrue, /* literals */
    ATtrue, /* injections */
    ATtrue, /* parsetree */
    ATtrue, /* implode lexicals */
    ATfalse, /* don't keep annotations */
    ATtrue, /* alt */
    ATtrue, /* seq */
    ATtrue, /* opt */
    ATfalse /* layout placeholder */
    );
}

static char* read_text_from_stream(FILE* stream)
{
  char* result;
  struct stat statbuf;
  int fd = fileno(stream);
  int c = 0;
  int position = 0;

  IF_STATISTICS(SG_Timer());

  if(fstat(fd, &statbuf) != 0)
    return NULL;

  if(S_ISREG(statbuf.st_mode))
  {
    size_t fsize = statbuf.st_size;
    result = malloc(fsize + 1);

    while((c = fgetc(stream)) != EOF)
    {
      result[position] = c;
      position++;
    }
  }
  else
  {
    int BUFSIZE = 65536;
    int bufsize = BUFSIZE;
    result = malloc(BUFSIZE);

    while((c = fgetc(stream)) != EOF)
    {
      if(position >= bufsize) {
        bufsize += BUFSIZE;
        result = realloc(result, bufsize);
      }

      result[position] = c;
      position++;
    }

    if(position >= bufsize)
      result = realloc(result, bufsize + 1);
  }

  result[position] = '\0';
  IF_STATISTICS(fprintf(SG_log(), "Reading stream of input: %.6f\n", SG_Timer()));

  return result;
}
