#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_term_1;
static Symbol sym_attrs_1;
static Symbol sym_no_attrs_0;
static Symbol sym_lit_1;
static Symbol sym_ci_lit_1;
static Symbol sym_default_1;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
ATprotectSymbol(sym_term_1);
sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
ATprotectSymbol(sym_attrs_1);
sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
ATprotectSymbol(sym_no_attrs_0);
sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
ATprotectSymbol(sym_lit_1);
sym_ci_lit_1 = ATmakeSymbol("ci-lit", 1, ATfalse);
ATprotectSymbol(sym_ci_lit_1);
sym_default_1 = ATmakeSymbol("default", 1, ATfalse);
ATprotectSymbol(sym_default_1);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
static ATerm term1;
static ATerm term0;
static void init_module_constant_terms (void)
{
ATprotect(&(term0));
term0 = (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATempty);
ATprotect(&(term1));
term1 = term0;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm try_1_0 (StrSL sl, StrCL p_34, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL d_31, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL x_27, ATerm t);
ATerm un_double_quote_0_0 (StrSL sl, ATerm t);
ATerm un_single_quote_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_1_0 (StrSL sl, StrCL r_19, ATerm t);
ATerm implode_aterm_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm DesugarOnce_0_0 (StrSL sl, ATerm t);
ATerm Desugar_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_96 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(o_96);
t = io_wrap_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail2 ;
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
{
struct str_closure m_96 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(m_96);
t = topdown_1_0(sl_up(sl), lifted1_cl, t);
if((t == NULL))
goto fail3 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_96 = { &(DesugarOnce_0_0) , sl_up(sl_up(sl)) };
StrCL lifted3_cl = &(j_96);
struct str_closure k_96 = { &(Desugar_0_0) , sl_up(sl_up(sl)) };
StrCL lifted2_cl = &(k_96);
t = repeat_1_0(sl_up(sl_up(sl)), lifted2_cl, t);
if((t == NULL))
goto fail4 ;
t = try_1_0(sl_up(sl_up(sl)), lifted3_cl, t);
if((t == NULL))
goto fail4 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm DesugarOnce_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "DesugarOnce_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm2 = t;
ATerm d_96 = NULL,e_96 = NULL,f_96 = NULL;
ATerm trm3;
trm3 = (ATerm) ATgetAnnotations(t);
if((trm3 == NULL))
trm3 = (ATerm) ATempty;
if(match_cons(t, sym_term_1))
{
e_96 = ATgetArgument(t, 0);
}
else
goto label3 ;
d_96 = trm3;
t = e_96;
t = implode_aterm_0_0(sl, t);
if((t == NULL))
goto label3 ;
f_96 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_term_1, f_96), d_96);
goto label2 ;
label3 :
t = trm2;
{
ATerm trm4 = t;
ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
if(match_cons(t, sym_lit_1))
{
u_5 = ATgetArgument(t, 0);
}
else
goto label4 ;
w_5 = t;
t = u_5;
t = un_double_quote_0_0(sl, t);
if((t == NULL))
goto label4 ;
v_5 = t;
t = w_5;
t = (ATerm) ATmakeAppl(sym_lit_1, v_5);
goto label2 ;
label4 :
t = trm4;
{
ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
if(match_cons(t, sym_ci_lit_1))
{
r_5 = ATgetArgument(t, 0);
}
else
goto fail1 ;
t_5 = t;
t = r_5;
t = un_single_quote_0_0(sl, t);
if((t == NULL))
goto fail1 ;
s_5 = t;
t = t_5;
t = (ATerm) ATmakeAppl(sym_ci_lit_1, s_5);
goto label2 ;
}
}
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
ATerm Desugar_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Desugar_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
if(!(match_cons(t, sym_no_attrs_0)))
goto label1 ;
t = term1;
goto label0 ;
label1 :
t = trm0;
{
ATerm q_5 = NULL;
if(match_cons(t, sym_term_1))
{
ATerm trm1 = ATgetArgument(t, 0);
if(match_cons(trm1, sym_default_1))
{
q_5 = ATgetArgument(trm1, 0);
}
else
goto fail0 ;
}
else
goto fail0 ;
t = (ATerm) ATmakeAppl(sym_term_1, q_5);
goto label0 ;
}
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 12));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(repeat_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repeat_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(un_double_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("un_double_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(un_single_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("un_single_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(implode_aterm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implode_aterm_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(DesugarOnce_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("DesugarOnce_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Desugar_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Desugar_0_0", 0, ATtrue)), &(closures[closures_index]));
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
