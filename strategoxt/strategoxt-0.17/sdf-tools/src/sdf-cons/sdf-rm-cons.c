#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_cons_1;
static Symbol sym_term_1;
static Symbol sym_attrs_1;
static void init_module_constructors (void)
{
sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
ATprotectSymbol(sym_cons_1);
sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
ATprotectSymbol(sym_term_1);
sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
ATprotectSymbol(sym_attrs_1);
}
static void init_module_constant_terms (void)
{
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm filter_1_0 (StrSL sl, StrCL c_50, ATerm t);
ATerm alltd_1_0 (StrSL sl, StrCL w_26, ATerm t);
ATerm io_wrap_1_0 (StrSL sl, StrCL m_17, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_94 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(f_94);
t = io_wrap_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_94 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(e_94);
t = alltd_1_0(sl_up(sl), lifted1_cl, t);
if((t == NULL))
goto fail1 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_93 = NULL,a_94 = NULL,b_94 = NULL;
ATerm trm0;
trm0 = (ATerm) ATgetAnnotations(t);
if((trm0 == NULL))
trm0 = (ATerm) ATempty;
if(match_cons(t, sym_attrs_1))
{
a_94 = ATgetArgument(t, 0);
}
else
goto fail2 ;
z_93 = trm0;
t = a_94;
{
struct str_closure d_94 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(d_94);
t = filter_1_0(sl_up(sl_up(sl)), lifted2_cl, t);
if((t == NULL))
goto fail2 ;
b_94 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_attrs_1, b_94), z_93);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
ATerm trm2 = t;
if(match_cons(t, sym_term_1))
{
ATerm trm3 = ATgetArgument(t, 0);
if(match_cons(trm3, sym_cons_1))
{
ATerm trm4 = ATgetArgument(trm3, 0);
}
else
goto label3 ;
}
else
goto label3 ;
goto label2 ;
label3 :
t = trm2;
if(match_cons(t, sym_cons_1))
{
ATerm trm5 = ATgetArgument(t, 0);
goto label2 ;
}
else
goto label1 ;
label2 :
;
goto fail3 ;
label1 :
t = trm1;
goto label0 ;
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 7));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(alltd_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("alltd_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
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
