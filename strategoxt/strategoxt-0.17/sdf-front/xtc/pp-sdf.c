#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("core-sdf-parenthesize", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm separate_by_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL b_47, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_1_0 (StrSL sl, StrCL e_3, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL e_2, StrCL f_2, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
ATerm xtc_pp_sdf2_0_0 (StrSL sl, ATerm t);
ATerm add_arg_flags_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm xtc_ast2abox_1_0 (StrSL sl, StrCL a_0, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_71 = { &(xtc_pp_sdf2_0_0) , sl };
StrCL lifted10_cl = &(p_71);
t = xtc_io_wrap_1_0(sl, lifted10_cl, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_pp_sdf2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_pp_sdf2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_71 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(h_71);
struct str_closure i_71 = { &(pass_verbose_0_0) , sl };
StrCL lifted9_cl = &(i_71);
struct str_closure k_71 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(k_71);
struct str_closure l_71 = { &(pass_verbose_0_0) , sl };
StrCL lifted4_cl = &(l_71);
t = xtc_transform_2_0(sl, lifted3_cl, lifted4_cl, t);
if((t == NULL))
goto fail4 ;
{
struct str_closure m_71 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(m_71);
struct str_closure n_71 = { &(pass_verbose_0_0) , sl };
StrCL lifted6_cl = &(n_71);
t = xtc_transform_2_0(sl, lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto fail4 ;
{
struct str_closure o_71 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(o_71);
t = xtc_ast2abox_1_0(sl, lifted7_cl, t);
if((t == NULL))
goto fail4 ;
t = xtc_transform_2_0(sl, lifted8_cl, lifted9_cl, t);
if((t == NULL))
goto fail4 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term13);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm add_arg_flags_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "add_arg_flags_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
if(match_cons(t, sym__2))
{
ATerm trm1 = ATgetArgument(t, 0);
ATerm trm2 = ATgetArgument(t, 1);
if(!(((ATgetType(trm2) == AT_LIST) && ATisEmpty(trm2))))
goto label1 ;
}
else
goto label1 ;
t = (ATerm) ATempty;
goto label0 ;
label1 :
t = trm0;
{
ATerm k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL;
if(match_cons(t, sym__2))
{
k_1 = ATgetArgument(t, 0);
l_1 = ATgetArgument(t, 1);
}
else
goto fail3 ;
n_1 = t;
t = l_1;
p_1 = t;
o_1 = t;
t = (ATerm) ATmakeAppl(sym__2, k_1, o_1);
t = separate_by_0_0(sl, t);
if((t == NULL))
goto fail3 ;
m_1 = t;
t = n_1;
{
ATerm trm3;
trm3 = CheckATermList(m_1);
if((trm3 == NULL))
goto fail3 ;
t = (ATerm) ATinsert((ATermList)trm3, k_1);
goto label0 ;
}
}
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_ast2abox_1_0 (StrSL sl, StrCL a_0, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_ast2abox_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, a_0);
{
struct str_closure f_71 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(f_71);
struct str_closure g_71 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(g_71);
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
ATerm b_0 = NULL,d_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL,g_0 = NULL;
d_0 = t;
t = term3;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
b_0 = t;
t = d_0;
e_0 = t;
t = term3;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail2 ;
{
struct str_closure e_71 = { &(xtc_find_0_0) , sl_up(sl) };
StrCL lifted2_cl = &(e_71);
t = map_1_0(sl_up(sl), lifted2_cl, t);
if((t == NULL))
goto fail2 ;
g_0 = t;
f_0 = t;
t = (ATerm) ATmakeAppl(sym__2, term5, f_0);
t = add_arg_flags_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
c_0 = t;
t = e_0;
t = (ATerm) ATmakeAppl(sym__2, b_0, c_0);
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 17));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(separate_by_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("separate_by_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_pp_sdf2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_pp_sdf2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_arg_flags_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_arg_flags_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_ast2abox_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_ast2abox_1_0", 0, ATtrue)), &(closures[closures_index]));
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
