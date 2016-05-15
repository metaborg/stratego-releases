#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_seq_lookahead_2;
static Symbol sym_seq_symbol_2;
static Symbol sym_term_1;
static Symbol sym_attrs_1;
static Symbol sym_no_attrs_0;
static Symbol sym_lit_1;
static Symbol sym_ci_lit_1;
static Symbol sym_seq_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym_seq_lookahead_2 = ATmakeSymbol("seq-lookahead", 2, ATfalse);
ATprotectSymbol(sym_seq_lookahead_2);
sym_seq_symbol_2 = ATmakeSymbol("seq-symbol", 2, ATfalse);
ATprotectSymbol(sym_seq_symbol_2);
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
sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
ATprotectSymbol(sym_seq_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
static ATerm term1;
static ATerm term0;
static void init_module_constant_terms (void)
{
ATprotect(&(term0));
term0 = (ATerm) ATmakeAppl(sym_no_attrs_0);
ATprotect(&(term1));
term1 = term0;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL c_35, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL q_31, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL k_28, ATerm t);
ATerm double_quote_0_0 (StrSL sl, ATerm t);
ATerm single_quote_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_1_0 (StrSL sl, StrCL e_20, ATerm t);
ATerm explode_aterm_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm EnsugarOnce_0_0 (StrSL sl, ATerm t);
ATerm Ensugar_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_97 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(m_97);
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
struct str_closure l_97 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(l_97);
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
struct str_closure j_97 = { &(EnsugarOnce_0_0) , sl_up(sl_up(sl)) };
StrCL lifted3_cl = &(j_97);
struct str_closure k_97 = { &(Ensugar_0_0) , sl_up(sl_up(sl)) };
StrCL lifted2_cl = &(k_97);
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
ATerm EnsugarOnce_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "EnsugarOnce_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm4 = t;
ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
if(match_cons(t, sym_lit_1))
{
g_6 = ATgetArgument(t, 0);
}
else
goto label6 ;
i_6 = t;
t = g_6;
t = double_quote_0_0(sl, t);
if((t == NULL))
goto label6 ;
h_6 = t;
t = i_6;
t = (ATerm) ATmakeAppl(sym_lit_1, h_6);
goto label5 ;
label6 :
t = trm4;
{
ATerm trm5 = t;
ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
if(match_cons(t, sym_ci_lit_1))
{
d_6 = ATgetArgument(t, 0);
}
else
goto label7 ;
f_6 = t;
t = d_6;
t = single_quote_0_0(sl, t);
if((t == NULL))
goto label7 ;
e_6 = t;
t = f_6;
t = (ATerm) ATmakeAppl(sym_ci_lit_1, e_6);
goto label5 ;
label7 :
t = trm5;
{
ATerm f_97 = NULL,g_97 = NULL,h_97 = NULL;
ATerm trm6;
trm6 = (ATerm) ATgetAnnotations(t);
if((trm6 == NULL))
trm6 = (ATerm) ATempty;
if(match_cons(t, sym_term_1))
{
g_97 = ATgetArgument(t, 0);
}
else
goto fail1 ;
f_97 = trm6;
t = g_97;
t = explode_aterm_0_0(sl, t);
if((t == NULL))
goto fail1 ;
h_97 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_term_1, h_97), f_97);
goto label5 ;
}
}
label5 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
ATerm Ensugar_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Ensugar_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
if(match_cons(t, sym_attrs_1))
{
ATerm trm1 = ATgetArgument(t, 0);
if(!(((ATgetType(trm1) == AT_LIST) && ATisEmpty(trm1))))
goto label1 ;
}
else
goto label1 ;
t = term1;
goto label0 ;
label1 :
t = trm0;
{
ATerm trm2 = t;
ATerm y_5 = NULL,z_5 = NULL,c_6 = NULL;
if(match_cons(t, sym_seq_2))
{
y_5 = ATgetArgument(t, 0);
z_5 = ATgetArgument(t, 1);
}
else
goto label2 ;
c_6 = t;
t = z_5;
{
ATerm trm3 = t;
t = is_list_0_0(sl, t);
if((t == NULL))
goto label4 ;
goto label2 ;
label4 :
t = trm3;
goto label3 ;
label3 :
;
t = c_6;
t = (ATerm) ATmakeAppl(sym_seq_lookahead_2, y_5, z_5);
}
goto label0 ;
label2 :
t = trm2;
{
ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
if(match_cons(t, sym_seq_2))
{
u_5 = ATgetArgument(t, 0);
v_5 = ATgetArgument(t, 1);
}
else
goto fail0 ;
w_5 = t;
t = v_5;
t = is_list_0_0(sl, t);
if((t == NULL))
goto fail0 ;
t = w_5;
t = (ATerm) ATmakeAppl(sym_seq_symbol_2, u_5, v_5);
goto label0 ;
}
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 13));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(is_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
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
closures[closures_index].fun = &(double_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("double_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(single_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("single_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(explode_aterm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("explode_aterm_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(EnsugarOnce_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("EnsugarOnce_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Ensugar_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Ensugar_0_0", 0, ATtrue)), &(closures[closures_index]));
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
