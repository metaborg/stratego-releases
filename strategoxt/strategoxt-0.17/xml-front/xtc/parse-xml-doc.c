#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
static ATerm term17;
static ATerm term16;
static ATerm term15;
static ATerm term14;
static ATerm term13;
static ATerm term12;
static ATerm term11;
static ATerm term10;
static ATerm term9;
static ATerm term8;
static ATerm term7;
static ATerm term6;
static ATerm term5;
static ATerm term4;
static ATerm term3;
static ATerm term2;
static ATerm term1;
static ATerm term0;
static void init_module_constant_terms (void)
{
ATprotect(&(term0));
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("xml.tbl", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("Document", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm if_verbose3_1_0 (StrSL sl, StrCL y_8, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_1_0 (StrSL sl, StrCL r_2, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL s_1, StrCL t_1, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm xtc_parse_xml_doc_0_0 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm pass_v_verbose_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm xtc_sglr_2_0 (StrSL sl, StrCL r_0, StrCL s_0, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_70 = { &(xtc_parse_xml_doc_0_0) , sl };
StrCL lifted7_cl = &(y_70);
t = xtc_io_wrap_1_0(sl, lifted7_cl, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_parse_xml_doc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_parse_xml_doc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_70 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(t_70);
struct str_closure u_70 = { &(pass_verbose_0_0) , sl };
StrCL lifted6_cl = &(u_70);
struct str_closure w_70 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(w_70);
struct str_closure x_70 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(x_70);
t = xtc_sglr_2_0(sl, lifted3_cl, lifted4_cl, t);
if((t == NULL))
goto fail5 ;
t = xtc_transform_2_0(sl, lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term17;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm pass_v_verbose_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pass_v_verbose_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_70 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(s_70);
t = (ATerm) ATempty;
t = if_verbose3_1_0(sl, lifted2_cl, t);
if((t == NULL))
goto fail3 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term11);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_sglr_2_0 (StrSL sl, StrCL r_0, StrCL s_0, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_sglr_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, r_0);
sl_init_fun(1, s_0);
{
struct str_closure q_70 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(q_70);
struct str_closure r_70 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(r_70);
t = xtc_transform_2_0(sl, lifted0_cl, lifted1_cl, t);
if((t == NULL))
goto fail0 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_0 = NULL,w_0 = NULL,u_0 = NULL,x_0 = NULL,v_0 = NULL,y_0 = NULL;
w_0 = t;
t = term3;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail2 ;
t = xtc_find_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t_0 = t;
t = w_0;
x_0 = t;
t = term3;
t = sl_fun(1, sl)(sl_fun_sl(1, sl), t);
if((t == NULL))
goto fail2 ;
u_0 = t;
t = x_0;
y_0 = t;
t = term3;
t = pass_v_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
v_0 = t;
t = y_0;
{
ATerm trm0;
trm0 = CheckATermList(v_0);
if((trm0 == NULL))
goto fail2 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm0, u_0), term5), t_0), term7), term9);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term1;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static void register_strategies (void)
{
int initial_size = 117;
int max_load = 75;
struct str_closure * closures;
int closures_index = 0;
if((strategy_table == NULL))
strategy_table = ATtableCreate(initial_size, max_load);
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 15));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(if_verbose3_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose3_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_find_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_find_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_parse_xml_doc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_parse_xml_doc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_v_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_v_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_sglr_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_sglr_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
}
int main (int argc, char * argv [])
{
ATerm out_term;
ATermList in_term;
int i;
ATinit(argc, argv, &(out_term));
init_constructors();
in_term = ATempty;
for ( i = (argc - 1) ; (i >= 0) ; i-- )
{
in_term = ATinsert(in_term, (ATerm) ATmakeAppl0(ATmakeSymbol(argv[i], 0, ATtrue)));
}
SRTS_stratego_initialize();
memset(__tracing_table, 0, (sizeof(unsigned short) * TRACING_TABLE_SIZE));
__tracing_table_counter = 0;
register_strategies();
out_term = main_0_0(NULL, (ATerm) in_term);
if((out_term != NULL))
{
ATfprintf(stdout, "%t\n", out_term);
exit(0);
}
else
{
ATfprintf(stderr, "%s: rewriting failed, trace:\n", argv[0]);
for ( i = 0 ; (__tracing_table[i] && (i < TRACING_TABLE_SIZE)) ; i++ )
ATfprintf(stderr, "\t%s\n", __tracing_table[i]);
exit(1);
}
}
