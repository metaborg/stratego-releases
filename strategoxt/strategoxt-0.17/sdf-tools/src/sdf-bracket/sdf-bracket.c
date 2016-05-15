#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_bracket_symbol_1;
static Symbol sym_opt_1;
static Symbol sym_alt_2;
static Symbol sym_iter_1;
static Symbol sym_iter_star_1;
static Symbol sym_prod_3;
static Symbol sym_lit_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
ATprotectSymbol(sym_bracket_symbol_1);
sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
ATprotectSymbol(sym_opt_1);
sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
ATprotectSymbol(sym_alt_2);
sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
ATprotectSymbol(sym_iter_1);
sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
ATprotectSymbol(sym_iter_star_1);
sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
ATprotectSymbol(sym_prod_3);
sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
ATprotectSymbol(sym_lit_1);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: sdf-bracket [options]", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("Use this program before pretty-printing ASTs of SDF modules.\n", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("by inserting bracket symbols for SDF infix operators.\n", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("This program generates a disambiguated AST of SDF modules\n", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm map_1_0 (StrSL sl, StrCL n_52, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL w_33, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL e_27, ATerm t);
ATerm io_wrap_4_0 (StrSL sl, StrCL b_19, StrCL c_19, StrCL d_19, StrCL e_19, ATerm t);
ATerm default_system_usage_2_0 (StrSL sl, StrCL u_16, StrCL v_16, ATerm t);
ATerm system_about_0_0 (StrSL sl, ATerm t);
ATerm alt_2_0 (StrSL sl, StrCL n_7, StrCL o_7, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm DeBracket_0_0 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
ATerm Bracket_0_0 (StrSL sl, ATerm t);
ATerm infix_op_0_0 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
ATerm sdf_bracket_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm sdf_bracket_usage_0_0 (StrSL sl, ATerm t);
ATerm alt_2_0 (StrSL sl, StrCL n_7, StrCL o_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "alt_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_82 = NULL,z_81 = NULL,a_82 = NULL,d_82 = NULL,e_82 = NULL;
ATerm trm13;
trm13 = (ATerm) ATgetAnnotations(t);
if((trm13 == NULL))
trm13 = (ATerm) ATempty;
if(match_cons(t, sym_alt_2))
{
z_81 = ATgetArgument(t, 0);
a_82 = ATgetArgument(t, 1);
}
else
goto fail14 ;
c_82 = trm13;
t = z_81;
t = cl_fun(n_7)(cl_sl(n_7), t);
if((t == NULL))
goto fail14 ;
d_82 = t;
t = a_82;
t = cl_fun(o_7)(cl_sl(o_7), t);
if((t == NULL))
goto fail14 ;
e_82 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_alt_2, d_82, e_82), c_82);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_97 = { &(_Fail) , sl };
StrCL lifted16_cl = &(e_97);
struct str_closure f_97 = { &(sdf_bracket_usage_0_0) , sl };
StrCL lifted17_cl = &(f_97);
struct str_closure g_97 = { &(system_about_0_0) , sl };
StrCL lifted18_cl = &(g_97);
struct str_closure h_97 = { &(sdf_bracket_0_0) , sl };
StrCL lifted19_cl = &(h_97);
t = io_wrap_4_0(sl, lifted16_cl, lifted17_cl, lifted18_cl, lifted19_cl, t);
if((t == NULL))
goto fail13 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
ATerm DeBracket_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "DeBracket_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm7 = ATgetArgument(t, 0);
if(((ATgetType(trm7) == AT_LIST) && !(ATisEmpty(trm7))))
{
ATerm trm8 = ATgetFirst((ATermList) trm7);
if(match_cons(trm8, sym_lit_1))
{
x_5 = ATgetArgument(trm8, 0);
}
else
goto fail12 ;
{
ATerm trm9 = (ATerm) ATgetNext((ATermList) trm7);
if(((ATgetType(trm9) == AT_LIST) && !(ATisEmpty(trm9))))
{
ATerm trm10 = ATgetFirst((ATermList) trm9);
if(match_cons(trm10, sym_bracket_symbol_1))
{
ATerm trm11 = ATgetArgument(trm10, 0);
if(match_cons(trm11, sym_alt_2))
{
y_5 = ATgetArgument(trm11, 0);
z_5 = ATgetArgument(trm11, 1);
}
else
goto fail12 ;
}
else
goto fail12 ;
{
ATerm trm12 = (ATerm) ATgetNext((ATermList) trm9);
if(!(((ATgetType(trm12) == AT_LIST) && ATisEmpty(trm12))))
goto fail12 ;
}
}
else
goto fail12 ;
}
}
else
goto fail12 ;
a_6 = ATgetArgument(t, 1);
b_6 = ATgetArgument(t, 2);
}
else
goto fail12 ;
t = (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_alt_2, y_5, z_5)), (ATerm) ATmakeAppl(sym_lit_1, x_5)), a_6, b_6);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
ATerm Bracket_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Bracket_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm trm1 = t;
ATerm v_5 = NULL,w_5 = NULL;
if(match_cons(t, sym_iter_1))
{
v_5 = ATgetArgument(t, 0);
}
else
goto label3 ;
w_5 = t;
t = v_5;
{
ATerm trm2 = t;
struct str_closure w_96 = { &(_Id) , sl };
StrCL lifted8_cl = &(w_96);
struct str_closure x_96 = { &(_Id) , sl };
StrCL lifted9_cl = &(x_96);
t = alt_2_0(sl, lifted8_cl, lifted9_cl, t);
if((t == NULL))
goto label5 ;
goto label4 ;
label5 :
t = trm2;
t = is_list_0_0(sl, t);
if((t == NULL))
goto label3 ;
else
goto label4 ;
label4 :
;
t = w_5;
t = (ATerm) ATmakeAppl(sym_iter_1, (ATerm) ATmakeAppl(sym_bracket_symbol_1, v_5));
}
goto label2 ;
label3 :
t = trm1;
{
ATerm trm3 = t;
ATerm t_5 = NULL,u_5 = NULL;
if(match_cons(t, sym_iter_star_1))
{
t_5 = ATgetArgument(t, 0);
}
else
goto label6 ;
u_5 = t;
t = t_5;
t = infix_op_0_0(sl, t);
if((t == NULL))
goto label6 ;
t = u_5;
t = (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_bracket_symbol_1, t_5));
goto label2 ;
label6 :
t = trm3;
{
ATerm trm4 = t;
ATerm r_5 = NULL,s_5 = NULL;
if(match_cons(t, sym_opt_1))
{
r_5 = ATgetArgument(t, 0);
}
else
goto label7 ;
s_5 = t;
t = r_5;
t = infix_op_0_0(sl, t);
if((t == NULL))
goto label7 ;
t = s_5;
t = (ATerm) ATmakeAppl(sym_opt_1, (ATerm) ATmakeAppl(sym_bracket_symbol_1, r_5));
goto label2 ;
label7 :
t = trm4;
{
ATerm trm5 = t;
ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,o_5 = NULL,q_5 = NULL;
sl_init_var(0, l_5);
sl_init_var(1, m_5);
if(match_cons(t, sym_alt_2))
{
if((l_5 == NULL))
{
l_5 = ATgetArgument(t, 0);
}
else
if((l_5 != ATgetArgument(t, 0)))
goto label8 ;
if((m_5 == NULL))
{
m_5 = ATgetArgument(t, 1);
}
else
if((m_5 != ATgetArgument(t, 1)))
goto label8 ;
}
else
goto label8 ;
p_5 = t;
if((l_5 == NULL))
goto label8 ;
else
{
t = l_5;
}
{
struct str_closure y_96 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(y_96);
t = try_1_0(sl, lifted10_cl, t);
if((t == NULL))
goto label8 ;
n_5 = t;
t = p_5;
q_5 = t;
if((m_5 == NULL))
goto label8 ;
else
{
t = m_5;
}
{
struct str_closure b_97 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(b_97);
t = try_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto label8 ;
o_5 = t;
t = q_5;
t = (ATerm) ATmakeAppl(sym_alt_2, n_5, o_5);
}
}
goto label2 ;
label8 :
t = trm5;
{
ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL,k_5 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
g_5 = ATgetFirst((ATermList) t);
h_5 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail7 ;
k_5 = t;
{
struct str_closure d_97 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(d_97);
t = map_1_0(sl, lifted14_cl, t);
if((t == NULL))
goto fail7 ;
i_5 = t;
t = k_5;
t = i_5;
goto label2 ;
}
}
}
}
}
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm j_5 = NULL;
sl_init_var(0, j_5);
{
struct str_closure c_97 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(c_97);
if((j_5 == NULL))
{
j_5 = t;
}
else
if((j_5 != t))
goto fail10 ;
t = try_1_0(sl_up(sl), lifted15_cl, t);
if((t == NULL))
goto fail10 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = infix_op_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail11 ;
if((sl_readvar(0, sl) == NULL))
goto fail11 ;
else
{
t = (ATerm) ATmakeAppl(sym_bracket_symbol_1, sl_readvar(0, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm6 = t;
struct str_closure z_96 = { &(_Id) , sl_up(sl) };
StrCL lifted12_cl = &(z_96);
struct str_closure a_97 = { &(_Id) , sl_up(sl) };
StrCL lifted13_cl = &(a_97);
t = alt_2_0(sl_up(sl), lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto label10 ;
goto fail9 ;
label10 :
t = trm6;
goto label9 ;
label9 :
;
t = infix_op_0_0(sl_up(sl), t);
if((t == NULL))
goto fail9 ;
if((sl_readvar(1, sl) == NULL))
goto fail9 ;
else
{
t = (ATerm) ATmakeAppl(sym_bracket_symbol_1, sl_readvar(1, sl));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = infix_op_0_0(sl_up(sl), t);
if((t == NULL))
goto fail8 ;
if((sl_readvar(0, sl) == NULL))
goto fail8 ;
else
{
t = (ATerm) ATmakeAppl(sym_bracket_symbol_1, sl_readvar(0, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm infix_op_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "infix_op_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
struct str_closure u_96 = { &(_Id) , sl };
StrCL lifted6_cl = &(u_96);
struct str_closure v_96 = { &(_Id) , sl };
StrCL lifted7_cl = &(v_96);
t = alt_2_0(sl, lifted6_cl, lifted7_cl, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
t = is_list_0_0(sl, t);
if((t == NULL))
goto fail6 ;
else
goto label0 ;
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf_bracket_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf_bracket_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_96 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(r_96);
struct str_closure t_96 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(t_96);
t = topdown_1_0(sl, lifted2_cl, t);
if((t == NULL))
goto fail3 ;
t = topdown_1_0(sl, lifted4_cl, t);
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
{
struct str_closure s_96 = { &(Bracket_0_0) , sl_up(sl) };
StrCL lifted3_cl = &(s_96);
t = try_1_0(sl_up(sl), lifted3_cl, t);
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
{
struct str_closure p_96 = { &(DeBracket_0_0) , sl_up(sl) };
StrCL lifted5_cl = &(p_96);
t = try_1_0(sl_up(sl), lifted5_cl, t);
if((t == NULL))
goto fail4 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf_bracket_usage_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf_bracket_usage_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_96 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(m_96);
struct str_closure o_96 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(o_96);
t = default_system_usage_2_0(sl, lifted0_cl, lifted1_cl, t);
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term3), term5), term7);
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
t = (ATerm) ATinsert(ATempty, term1);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 22));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(default_system_usage_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("default_system_usage_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(system_about_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("system_about_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(alt_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("alt_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(DeBracket_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("DeBracket_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Bracket_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Bracket_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(infix_op_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("infix_op_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sdf_bracket_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf_bracket_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sdf_bracket_usage_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf_bracket_usage_0_0", 0, ATtrue)), &(closures[closures_index]));
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
