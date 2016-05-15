#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Parenthetical_1;
static Symbol sym_Nil_0;
static Symbol sym_conc_grammars_2;
static Symbol sym_opt_1;
static Symbol sym_iter_1;
static Symbol sym_iter_star_1;
static Symbol sym_label_2;
static Symbol sym_with_arguments_2;
static Symbol sym_non_transitive_1;
static Symbol sym_conc_2;
static Symbol sym_comp_1;
static Symbol sym_diff_2;
static Symbol sym_isect_2;
static Symbol sym_union_2;
static Symbol sym_seq_2;
static Symbol sym_alt_2;
static void init_module_constructors (void)
{
sym_Parenthetical_1 = ATmakeSymbol("Parenthetical", 1, ATfalse);
ATprotectSymbol(sym_Parenthetical_1);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_conc_grammars_2 = ATmakeSymbol("conc-grammars", 2, ATfalse);
ATprotectSymbol(sym_conc_grammars_2);
sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
ATprotectSymbol(sym_opt_1);
sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
ATprotectSymbol(sym_iter_1);
sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
ATprotectSymbol(sym_iter_star_1);
sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
ATprotectSymbol(sym_label_2);
sym_with_arguments_2 = ATmakeSymbol("with-arguments", 2, ATfalse);
ATprotectSymbol(sym_with_arguments_2);
sym_non_transitive_1 = ATmakeSymbol("non-transitive", 1, ATfalse);
ATprotectSymbol(sym_non_transitive_1);
sym_conc_2 = ATmakeSymbol("conc", 2, ATfalse);
ATprotectSymbol(sym_conc_2);
sym_comp_1 = ATmakeSymbol("comp", 1, ATfalse);
ATprotectSymbol(sym_comp_1);
sym_diff_2 = ATmakeSymbol("diff", 2, ATfalse);
ATprotectSymbol(sym_diff_2);
sym_isect_2 = ATmakeSymbol("isect", 2, ATfalse);
ATprotectSymbol(sym_isect_2);
sym_union_2 = ATmakeSymbol("union", 2, ATfalse);
ATprotectSymbol(sym_union_2);
sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
ATprotectSymbol(sym_seq_2);
sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
ATprotectSymbol(sym_alt_2);
}
static void init_module_constant_terms (void)
{
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm io_wrap_1_0 (StrSL sl, StrCL l_19, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm d_100 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
static ATerm c_100 (StrSL sl, StrCL e_100, ATerm t);
ATerm parenthesize_Sdf2_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_100 = { &(parenthesize_Sdf2_0_0) , sl };
StrCL lifted1_cl = &(h_100);
t = io_wrap_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto fail4 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm parenthesize_Sdf2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parenthesize_Sdf2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure g_100 = { &(d_100) , &(frame) };
StrCL d_100_cl = &(g_100);
sl_init_fun(0, d_100_cl);
t = c_100(&(frame), d_100_cl, t);
if((t == NULL))
goto fail0 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm d_100 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "d_100";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
ATerm trm1 = t;
ATerm f_98 = NULL,g_98 = NULL;
if(match_cons(t, sym_comp_1))
{
f_98 = ATgetArgument(t, 0);
}
else
goto label3 ;
g_98 = t;
t = f_98;
{
ATerm trm2 = t;
if(match_cons(t, sym_union_2))
{
ATerm trm3 = ATgetArgument(t, 0);
ATerm trm4 = ATgetArgument(t, 1);
}
else
goto label5 ;
goto label4 ;
label5 :
t = trm2;
{
ATerm trm5 = t;
if(match_cons(t, sym_isect_2))
{
ATerm trm6 = ATgetArgument(t, 0);
ATerm trm7 = ATgetArgument(t, 1);
}
else
goto label6 ;
goto label4 ;
label6 :
t = trm5;
if(match_cons(t, sym_diff_2))
{
ATerm trm8 = ATgetArgument(t, 0);
ATerm trm9 = ATgetArgument(t, 1);
goto label4 ;
}
else
goto label3 ;
}
label4 :
;
t = g_98;
t = (ATerm) ATmakeAppl(sym_comp_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_98));
t = d_100(sl, t);
if((t == NULL))
goto label3 ;
}
goto label2 ;
label3 :
t = trm1;
{
ATerm trm10 = t;
ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL;
if(match_cons(t, sym_diff_2))
{
i_98 = ATgetArgument(t, 0);
h_98 = ATgetArgument(t, 1);
}
else
goto label7 ;
j_98 = t;
t = i_98;
{
ATerm trm11 = t;
if(match_cons(t, sym_union_2))
{
ATerm trm12 = ATgetArgument(t, 0);
ATerm trm13 = ATgetArgument(t, 1);
}
else
goto label9 ;
goto label8 ;
label9 :
t = trm11;
if(match_cons(t, sym_isect_2))
{
ATerm trm14 = ATgetArgument(t, 0);
ATerm trm15 = ATgetArgument(t, 1);
goto label8 ;
}
else
goto label7 ;
label8 :
;
t = j_98;
t = (ATerm) ATmakeAppl(sym_diff_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, i_98), h_98);
t = d_100(sl, t);
if((t == NULL))
goto label7 ;
}
goto label2 ;
label7 :
t = trm10;
{
ATerm trm16 = t;
ATerm k_98 = NULL,l_98 = NULL,m_98 = NULL;
if(match_cons(t, sym_diff_2))
{
k_98 = ATgetArgument(t, 0);
l_98 = ATgetArgument(t, 1);
}
else
goto label10 ;
m_98 = t;
t = l_98;
{
ATerm trm17 = t;
if(match_cons(t, sym_union_2))
{
ATerm trm18 = ATgetArgument(t, 0);
ATerm trm19 = ATgetArgument(t, 1);
}
else
goto label12 ;
goto label11 ;
label12 :
t = trm17;
{
ATerm trm20 = t;
if(match_cons(t, sym_isect_2))
{
ATerm trm21 = ATgetArgument(t, 0);
ATerm trm22 = ATgetArgument(t, 1);
}
else
goto label13 ;
goto label11 ;
label13 :
t = trm20;
if(match_cons(t, sym_diff_2))
{
ATerm trm23 = ATgetArgument(t, 0);
ATerm trm24 = ATgetArgument(t, 1);
goto label11 ;
}
else
goto label10 ;
}
label11 :
;
t = m_98;
t = (ATerm) ATmakeAppl(sym_diff_2, k_98, (ATerm) ATmakeAppl(sym_Parenthetical_1, l_98));
t = d_100(sl, t);
if((t == NULL))
goto label10 ;
}
goto label2 ;
label10 :
t = trm16;
{
ATerm trm25 = t;
ATerm n_98 = NULL,o_98 = NULL;
if(match_cons(t, sym_iter_1))
{
n_98 = ATgetArgument(t, 0);
}
else
goto label14 ;
o_98 = t;
t = n_98;
{
ATerm trm26 = t;
if(match_cons(t, sym_label_2))
{
ATerm trm27 = ATgetArgument(t, 0);
ATerm trm28 = ATgetArgument(t, 1);
}
else
goto label16 ;
goto label15 ;
label16 :
t = trm26;
if(match_cons(t, sym_alt_2))
{
ATerm trm29 = ATgetArgument(t, 0);
ATerm trm30 = ATgetArgument(t, 1);
goto label15 ;
}
else
goto label14 ;
label15 :
;
t = o_98;
t = (ATerm) ATmakeAppl(sym_iter_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, n_98));
t = d_100(sl, t);
if((t == NULL))
goto label14 ;
}
goto label2 ;
label14 :
t = trm25;
{
ATerm trm31 = t;
ATerm p_98 = NULL,q_98 = NULL;
if(match_cons(t, sym_iter_star_1))
{
p_98 = ATgetArgument(t, 0);
}
else
goto label17 ;
q_98 = t;
t = p_98;
{
ATerm trm32 = t;
if(match_cons(t, sym_label_2))
{
ATerm trm33 = ATgetArgument(t, 0);
ATerm trm34 = ATgetArgument(t, 1);
}
else
goto label19 ;
goto label18 ;
label19 :
t = trm32;
if(match_cons(t, sym_alt_2))
{
ATerm trm35 = ATgetArgument(t, 0);
ATerm trm36 = ATgetArgument(t, 1);
goto label18 ;
}
else
goto label17 ;
label18 :
;
t = q_98;
t = (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, p_98));
t = d_100(sl, t);
if((t == NULL))
goto label17 ;
}
goto label2 ;
label17 :
t = trm31;
{
ATerm trm37 = t;
ATerm r_98 = NULL,s_98 = NULL;
if(match_cons(t, sym_opt_1))
{
r_98 = ATgetArgument(t, 0);
}
else
goto label20 ;
s_98 = t;
t = r_98;
{
ATerm trm38 = t;
if(match_cons(t, sym_label_2))
{
ATerm trm39 = ATgetArgument(t, 0);
ATerm trm40 = ATgetArgument(t, 1);
}
else
goto label22 ;
goto label21 ;
label22 :
t = trm38;
if(match_cons(t, sym_alt_2))
{
ATerm trm41 = ATgetArgument(t, 0);
ATerm trm42 = ATgetArgument(t, 1);
goto label21 ;
}
else
goto label20 ;
label21 :
;
t = s_98;
t = (ATerm) ATmakeAppl(sym_opt_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, r_98));
t = d_100(sl, t);
if((t == NULL))
goto label20 ;
}
goto label2 ;
label20 :
t = trm37;
{
ATerm trm43 = t;
ATerm t_98 = NULL,u_98 = NULL,v_98 = NULL;
if(match_cons(t, sym_alt_2))
{
u_98 = ATgetArgument(t, 0);
t_98 = ATgetArgument(t, 1);
}
else
goto label23 ;
v_98 = t;
t = u_98;
{
ATerm trm44 = t;
if(match_cons(t, sym_label_2))
{
ATerm trm45 = ATgetArgument(t, 0);
ATerm trm46 = ATgetArgument(t, 1);
}
else
goto label25 ;
goto label24 ;
label25 :
t = trm44;
if(match_cons(t, sym_alt_2))
{
ATerm trm47 = ATgetArgument(t, 0);
ATerm trm48 = ATgetArgument(t, 1);
goto label24 ;
}
else
goto label23 ;
label24 :
;
t = v_98;
t = (ATerm) ATmakeAppl(sym_alt_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, u_98), t_98);
t = d_100(sl, t);
if((t == NULL))
goto label23 ;
}
goto label2 ;
label23 :
t = trm43;
{
ATerm trm49 = t;
ATerm w_98 = NULL,x_98 = NULL,y_98 = NULL;
if(match_cons(t, sym_alt_2))
{
w_98 = ATgetArgument(t, 0);
x_98 = ATgetArgument(t, 1);
}
else
goto label26 ;
y_98 = t;
t = x_98;
if(match_cons(t, sym_label_2))
{
ATerm trm50 = ATgetArgument(t, 0);
ATerm trm51 = ATgetArgument(t, 1);
}
else
goto label26 ;
t = y_98;
t = (ATerm) ATmakeAppl(sym_alt_2, w_98, (ATerm) ATmakeAppl(sym_Parenthetical_1, x_98));
t = d_100(sl, t);
if((t == NULL))
goto label26 ;
goto label2 ;
label26 :
t = trm49;
{
ATerm trm52 = t;
ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL;
if(match_cons(t, sym_seq_2))
{
a_99 = ATgetArgument(t, 0);
z_98 = ATgetArgument(t, 1);
}
else
goto label27 ;
b_99 = t;
t = a_99;
if(match_cons(t, sym_alt_2))
{
ATerm trm53 = ATgetArgument(t, 0);
ATerm trm54 = ATgetArgument(t, 1);
}
else
goto label27 ;
t = b_99;
t = (ATerm) ATmakeAppl(sym_seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_99), z_98);
t = d_100(sl, t);
if((t == NULL))
goto label27 ;
goto label2 ;
label27 :
t = trm52;
{
ATerm trm55 = t;
ATerm c_99 = NULL,d_99 = NULL,e_99 = NULL;
if(match_cons(t, sym_seq_2))
{
c_99 = ATgetArgument(t, 0);
d_99 = ATgetArgument(t, 1);
}
else
goto label28 ;
e_99 = t;
t = d_99;
if(match_cons(t, sym_alt_2))
{
ATerm trm56 = ATgetArgument(t, 0);
ATerm trm57 = ATgetArgument(t, 1);
}
else
goto label28 ;
t = e_99;
t = (ATerm) ATmakeAppl(sym_seq_2, c_99, (ATerm) ATmakeAppl(sym_Parenthetical_1, d_99));
t = d_100(sl, t);
if((t == NULL))
goto label28 ;
goto label2 ;
label28 :
t = trm55;
{
ATerm trm58 = t;
ATerm f_99 = NULL,g_99 = NULL,h_99 = NULL;
if(match_cons(t, sym_isect_2))
{
g_99 = ATgetArgument(t, 0);
f_99 = ATgetArgument(t, 1);
}
else
goto label29 ;
h_99 = t;
t = g_99;
if(match_cons(t, sym_union_2))
{
ATerm trm59 = ATgetArgument(t, 0);
ATerm trm60 = ATgetArgument(t, 1);
}
else
goto label29 ;
t = h_99;
t = (ATerm) ATmakeAppl(sym_isect_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, g_99), f_99);
t = d_100(sl, t);
if((t == NULL))
goto label29 ;
goto label2 ;
label29 :
t = trm58;
{
ATerm trm61 = t;
ATerm i_99 = NULL,j_99 = NULL,k_99 = NULL;
if(match_cons(t, sym_isect_2))
{
i_99 = ATgetArgument(t, 0);
j_99 = ATgetArgument(t, 1);
}
else
goto label30 ;
k_99 = t;
t = j_99;
{
ATerm trm62 = t;
if(match_cons(t, sym_union_2))
{
ATerm trm63 = ATgetArgument(t, 0);
ATerm trm64 = ATgetArgument(t, 1);
}
else
goto label32 ;
goto label31 ;
label32 :
t = trm62;
if(match_cons(t, sym_isect_2))
{
ATerm trm65 = ATgetArgument(t, 0);
ATerm trm66 = ATgetArgument(t, 1);
goto label31 ;
}
else
goto label30 ;
label31 :
;
t = k_99;
t = (ATerm) ATmakeAppl(sym_isect_2, i_99, (ATerm) ATmakeAppl(sym_Parenthetical_1, j_99));
t = d_100(sl, t);
if((t == NULL))
goto label30 ;
}
goto label2 ;
label30 :
t = trm61;
{
ATerm trm67 = t;
ATerm l_99 = NULL,m_99 = NULL;
if(match_cons(t, sym_non_transitive_1))
{
l_99 = ATgetArgument(t, 0);
}
else
goto label33 ;
m_99 = t;
t = l_99;
if(match_cons(t, sym_non_transitive_1))
{
ATerm trm68 = ATgetArgument(t, 0);
}
else
goto label33 ;
t = m_99;
t = (ATerm) ATmakeAppl(sym_non_transitive_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, l_99));
t = d_100(sl, t);
if((t == NULL))
goto label33 ;
goto label2 ;
label33 :
t = trm67;
{
ATerm trm69 = t;
ATerm n_99 = NULL,o_99 = NULL,p_99 = NULL;
if(match_cons(t, sym_union_2))
{
n_99 = ATgetArgument(t, 0);
o_99 = ATgetArgument(t, 1);
}
else
goto label34 ;
p_99 = t;
t = o_99;
if(match_cons(t, sym_union_2))
{
ATerm trm70 = ATgetArgument(t, 0);
ATerm trm71 = ATgetArgument(t, 1);
}
else
goto label34 ;
t = p_99;
t = (ATerm) ATmakeAppl(sym_union_2, n_99, (ATerm) ATmakeAppl(sym_Parenthetical_1, o_99));
t = d_100(sl, t);
if((t == NULL))
goto label34 ;
goto label2 ;
label34 :
t = trm69;
{
ATerm trm72 = t;
ATerm q_99 = NULL,r_99 = NULL,s_99 = NULL;
if(match_cons(t, sym_conc_2))
{
r_99 = ATgetArgument(t, 0);
q_99 = ATgetArgument(t, 1);
}
else
goto label35 ;
s_99 = t;
t = r_99;
if(match_cons(t, sym_conc_2))
{
ATerm trm73 = ATgetArgument(t, 0);
ATerm trm74 = ATgetArgument(t, 1);
}
else
goto label35 ;
t = s_99;
t = (ATerm) ATmakeAppl(sym_conc_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, r_99), q_99);
t = d_100(sl, t);
if((t == NULL))
goto label35 ;
goto label2 ;
label35 :
t = trm72;
{
ATerm trm75 = t;
ATerm t_99 = NULL,u_99 = NULL,v_99 = NULL;
if(match_cons(t, sym_with_arguments_2))
{
u_99 = ATgetArgument(t, 0);
t_99 = ATgetArgument(t, 1);
}
else
goto label36 ;
v_99 = t;
t = u_99;
if(match_cons(t, sym_with_arguments_2))
{
ATerm trm76 = ATgetArgument(t, 0);
ATerm trm77 = ATgetArgument(t, 1);
}
else
goto label36 ;
t = v_99;
t = (ATerm) ATmakeAppl(sym_with_arguments_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, u_99), t_99);
t = d_100(sl, t);
if((t == NULL))
goto label36 ;
goto label2 ;
label36 :
t = trm75;
{
ATerm trm78 = t;
ATerm w_99 = NULL,x_99 = NULL,y_99 = NULL;
if(match_cons(t, sym_with_arguments_2))
{
w_99 = ATgetArgument(t, 0);
x_99 = ATgetArgument(t, 1);
}
else
goto label37 ;
y_99 = t;
t = x_99;
if(match_cons(t, sym_with_arguments_2))
{
ATerm trm79 = ATgetArgument(t, 0);
ATerm trm80 = ATgetArgument(t, 1);
}
else
goto label37 ;
t = y_99;
t = (ATerm) ATmakeAppl(sym_with_arguments_2, w_99, (ATerm) ATmakeAppl(sym_Parenthetical_1, x_99));
t = d_100(sl, t);
if((t == NULL))
goto label37 ;
goto label2 ;
label37 :
t = trm78;
{
ATerm z_99 = NULL,a_100 = NULL,b_100 = NULL;
if(match_cons(t, sym_conc_grammars_2))
{
z_99 = ATgetArgument(t, 0);
a_100 = ATgetArgument(t, 1);
}
else
goto label1 ;
b_100 = t;
t = a_100;
if(match_cons(t, sym_conc_grammars_2))
{
ATerm trm81 = ATgetArgument(t, 0);
ATerm trm82 = ATgetArgument(t, 1);
}
else
goto label1 ;
t = b_100;
t = (ATerm) ATmakeAppl(sym_conc_grammars_2, z_99, (ATerm) ATmakeAppl(sym_Parenthetical_1, a_100));
t = d_100(sl, t);
if((t == NULL))
goto label1 ;
else
goto label2 ;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
label2 :
;
goto label0 ;
label1 :
t = trm0;
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
static ATerm c_100 (StrSL sl, StrCL e_100, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "c_100";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, e_100);
{
struct str_closure f_100 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(f_100);
t = SRTS_all(sl_up(sl), lifted0_cl, t);
if((t == NULL))
goto fail1 ;
t = cl_fun(e_100)(cl_sl(e_100), t);
if((t == NULL))
goto fail1 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = c_100(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail2 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 6));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(d_100);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("d_100", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(c_100);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("c_100", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parenthesize_Sdf2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parenthesize_Sdf2_0_0", 0, ATtrue)), &(closures[closures_index]));
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
