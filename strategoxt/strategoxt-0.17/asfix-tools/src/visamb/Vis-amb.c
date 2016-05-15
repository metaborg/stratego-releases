#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_N_2;
static Symbol sym_root_1;
static Symbol sym_lexical_1;
static Symbol sym_amb_abbr_2;
static Symbol sym_cf_1;
static Symbol sym_lex_1;
static Symbol sym_prod_3;
static Symbol sym_appl_2;
static Symbol sym_lit_1;
static Symbol sym_amb_1;
static Symbol sym_parsetree_2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym_N_2 = ATmakeSymbol("N", 2, ATfalse);
ATprotectSymbol(sym_N_2);
sym_root_1 = ATmakeSymbol("root", 1, ATfalse);
ATprotectSymbol(sym_root_1);
sym_lexical_1 = ATmakeSymbol("lexical", 1, ATfalse);
ATprotectSymbol(sym_lexical_1);
sym_amb_abbr_2 = ATmakeSymbol("amb-abbr", 2, ATfalse);
ATprotectSymbol(sym_amb_abbr_2);
sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
ATprotectSymbol(sym_cf_1);
sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
ATprotectSymbol(sym_lex_1);
sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
ATprotectSymbol(sym_prod_3);
sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
ATprotectSymbol(sym_appl_2);
sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
ATprotectSymbol(sym_lit_1);
sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
ATprotectSymbol(sym_amb_1);
sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
ATprotectSymbol(sym_parsetree_2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
static void init_module_constant_terms (void)
{
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL b_46, ATerm t);
ATerm Hd_0_0 (StrSL sl, ATerm t);
ATerm bu_collect_1_0 (StrSL sl, StrCL s_29, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm is_int_0_0 (StrSL sl, ATerm t);
ATerm implode_string_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_1_0 (StrSL sl, StrCL w_12, ATerm t);
ATerm prod_3_0 (StrSL sl, StrCL r_3, StrCL s_3, StrCL t_3, ATerm t);
ATerm appl_2_0 (StrSL sl, StrCL p_3, StrCL q_3, ATerm t);
ATerm parsetree_2_0 (StrSL sl, StrCL k_3, StrCL l_3, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
ATerm Lexical_0_0 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm e_3 (StrSL sl, ATerm t);
ATerm yield_0_0 (StrSL sl, ATerm t);
ATerm Nsplit_2_0 (StrSL sl, StrCL s_2, StrCL t_2, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm k_2 (StrSL sl, ATerm t);
ATerm abbrev_term_0_0 (StrSL sl, ATerm t);
ATerm abbrev_amb_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
ATerm abbrev_ambs_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm visamb_0_0 (StrSL sl, ATerm t);
ATerm prod_3_0 (StrSL sl, StrCL r_3, StrCL s_3, StrCL t_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prod_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,a_71 = NULL,b_71 = NULL,d_71 = NULL;
ATerm trm15;
trm15 = (ATerm) ATgetAnnotations(t);
if((trm15 == NULL))
trm15 = (ATerm) ATempty;
if(match_cons(t, sym_prod_3))
{
w_70 = ATgetArgument(t, 0);
x_70 = ATgetArgument(t, 1);
y_70 = ATgetArgument(t, 2);
}
else
goto fail24 ;
z_70 = trm15;
t = w_70;
t = cl_fun(r_3)(cl_sl(r_3), t);
if((t == NULL))
goto fail24 ;
a_71 = t;
t = x_70;
t = cl_fun(s_3)(cl_sl(s_3), t);
if((t == NULL))
goto fail24 ;
b_71 = t;
t = y_70;
t = cl_fun(t_3)(cl_sl(t_3), t);
if((t == NULL))
goto fail24 ;
d_71 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_prod_3, a_71, b_71, d_71), z_70);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
ATerm appl_2_0 (StrSL sl, StrCL p_3, StrCL q_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "appl_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_70 = NULL,q_70 = NULL,r_70 = NULL,t_70 = NULL,u_70 = NULL;
ATerm trm14;
trm14 = (ATerm) ATgetAnnotations(t);
if((trm14 == NULL))
trm14 = (ATerm) ATempty;
if(match_cons(t, sym_appl_2))
{
q_70 = ATgetArgument(t, 0);
r_70 = ATgetArgument(t, 1);
}
else
goto fail23 ;
s_70 = trm14;
t = q_70;
t = cl_fun(p_3)(cl_sl(p_3), t);
if((t == NULL))
goto fail23 ;
t_70 = t;
t = r_70;
t = cl_fun(q_3)(cl_sl(q_3), t);
if((t == NULL))
goto fail23 ;
u_70 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_appl_2, t_70, u_70), s_70);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm parsetree_2_0 (StrSL sl, StrCL k_3, StrCL l_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parsetree_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_70 = NULL,c_70 = NULL,d_70 = NULL,f_70 = NULL,g_70 = NULL;
ATerm trm13;
trm13 = (ATerm) ATgetAnnotations(t);
if((trm13 == NULL))
trm13 = (ATerm) ATempty;
if(match_cons(t, sym_parsetree_2))
{
c_70 = ATgetArgument(t, 0);
d_70 = ATgetArgument(t, 1);
}
else
goto fail22 ;
e_70 = trm13;
t = c_70;
t = cl_fun(k_3)(cl_sl(k_3), t);
if((t == NULL))
goto fail22 ;
f_70 = t;
t = d_70;
t = cl_fun(l_3)(cl_sl(l_3), t);
if((t == NULL))
goto fail22 ;
g_70 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, f_70, g_70), e_70);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_78 = { &(visamb_0_0) , sl };
StrCL lifted21_cl = &(s_78);
t = io_wrap_1_0(sl, lifted21_cl, t);
if((t == NULL))
goto fail21 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm Lexical_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Lexical_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm7 = t;
ATerm i_77 = NULL,j_77 = NULL;
struct str_closure j_78 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(j_78);
struct str_closure m_78 = { &(_Id) , sl };
StrCL lifted15_cl = &(m_78);
t = appl_2_0(sl, lifted11_cl, lifted15_cl, t);
if((t == NULL))
goto label9 ;
t = yield_0_0(sl, t);
if((t == NULL))
goto label9 ;
i_77 = t;
t = (ATerm) ATmakeAppl(sym_lexical_1, i_77);
j_77 = t;
t = (ATerm) ATinsert(ATempty, j_77);
goto label8 ;
label9 :
t = trm7;
{
struct str_closure q_78 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(q_78);
struct str_closure r_78 = { &(_Id) , sl };
StrCL lifted20_cl = &(r_78);
t = appl_2_0(sl, lifted16_cl, lifted20_cl, t);
if((t == NULL))
goto fail15 ;
t = (ATerm) ATempty;
goto label8 ;
}
label8 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_78 = { &(_Id) , sl_up(sl) };
StrCL lifted17_cl = &(n_78);
struct str_closure o_78 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(o_78);
struct str_closure p_78 = { &(_Id) , sl_up(sl) };
StrCL lifted19_cl = &(p_78);
t = prod_3_0(sl_up(sl), lifted17_cl, lifted18_cl, lifted19_cl, t);
if((t == NULL))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_77 = NULL,m_77 = NULL,p_77 = NULL;
ATerm trm12;
trm12 = (ATerm) ATgetAnnotations(t);
if((trm12 == NULL))
trm12 = (ATerm) ATempty;
if(match_cons(t, sym_lit_1))
{
m_77 = ATgetArgument(t, 0);
}
else
goto fail20 ;
l_77 = trm12;
t = m_77;
p_77 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lit_1, p_77), l_77);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_78 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(g_78);
struct str_closure h_78 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(h_78);
struct str_closure i_78 = { &(_Id) , sl_up(sl) };
StrCL lifted14_cl = &(i_78);
t = prod_3_0(sl_up(sl), lifted12_cl, lifted13_cl, lifted14_cl, t);
if((t == NULL))
goto fail16 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL;
ATerm trm11;
trm11 = (ATerm) ATgetAnnotations(t);
if((trm11 == NULL))
trm11 = (ATerm) ATempty;
if(match_cons(t, sym_cf_1))
{
e_77 = ATgetArgument(t, 0);
}
else
goto fail18 ;
d_77 = trm11;
t = e_77;
f_77 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cf_1, f_77), d_77);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL;
ATerm trm8;
trm8 = (ATerm) ATgetAnnotations(t);
if((trm8 == NULL))
trm8 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
f_3 = ATgetFirst((ATermList) t);
g_3 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail17 ;
j_3 = trm8;
t = f_3;
{
ATerm trm9;
trm9 = (ATerm) ATgetAnnotations(t);
if((trm9 == NULL))
trm9 = (ATerm) ATempty;
if(match_cons(t, sym_lex_1))
{
a_77 = ATgetArgument(t, 0);
}
else
goto fail17 ;
z_76 = trm9;
t = a_77;
b_77 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lex_1, b_77), z_76);
h_3 = t;
t = g_3;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail17 ;
i_3 = t;
{
ATerm trm10;
trm10 = CheckATermList(i_3);
if((trm10 == NULL))
goto fail17 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm10, h_3), j_3);
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm yield_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "yield_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure f_78 = { &(e_3) , &(frame) };
StrCL e_3_cl = &(f_78);
sl_init_fun(0, e_3_cl);
t = e_3(&(frame), t);
if((t == NULL))
goto fail12 ;
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail12 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm e_3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "e_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm6 = t;
ATerm w_76 = NULL,x_76 = NULL;
struct str_closure d_78 = { &(_Id) , sl_up(sl) };
StrCL lifted9_cl = &(d_78);
struct str_closure e_78 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(e_78);
t = appl_2_0(sl_up(sl), lifted9_cl, lifted10_cl, t);
if((t == NULL))
goto label7 ;
if(match_cons(t, sym_appl_2))
{
w_76 = ATgetArgument(t, 0);
x_76 = ATgetArgument(t, 1);
}
else
goto label7 ;
t = x_76;
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label7 ;
goto label6 ;
label7 :
t = trm6;
{
ATerm y_76 = NULL;
y_76 = t;
t = (ATerm) ATinsert(ATempty, y_76);
goto label6 ;
}
label6 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = map_1_0(sl_up(sl_up(sl)), sl_fun_cl(0, sl_up(sl)), t);
if((t == NULL))
goto fail14 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm Nsplit_2_0 (StrSL sl, StrCL s_2, StrCL t_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Nsplit_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_2 = NULL,u_2 = NULL,w_2 = NULL,v_2 = NULL,x_2 = NULL;
r_2 = t;
w_2 = t;
t = cl_fun(s_2)(cl_sl(s_2), t);
if((t == NULL))
goto fail11 ;
u_2 = t;
t = w_2;
x_2 = t;
t = r_2;
t = cl_fun(t_2)(cl_sl(t_2), t);
if((t == NULL))
goto fail11 ;
v_2 = t;
t = x_2;
t = (ATerm) ATmakeAppl(sym_N_2, u_2, v_2);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm abbrev_term_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "abbrev_term_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure c_78 = { &(k_2) , &(frame) };
StrCL k_2_cl = &(c_78);
sl_init_fun(0, k_2_cl);
t = k_2(&(frame), t);
if((t == NULL))
goto fail7 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm k_2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "k_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
ATerm trm2 = t;
t = is_int_0_0(sl_up(sl), t);
if((t == NULL))
goto label3 ;
goto label2 ;
label3 :
t = trm2;
{
ATerm l_76 = NULL,m_76 = NULL;
if(match_cons(t, sym_amb_1))
{
ATerm trm3 = ATgetArgument(t, 0);
if(((ATgetType(trm3) == AT_LIST) && !(ATisEmpty(trm3))))
{
m_76 = ATgetFirst((ATermList) trm3);
l_76 = (ATerm) ATgetNext((ATermList) trm3);
}
else
goto label1 ;
}
else
goto label1 ;
t = m_76;
goto label2 ;
}
label2 :
;
goto label0 ;
label1 :
t = trm1;
{
struct str_closure a_78 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(a_78);
struct str_closure b_78 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(b_78);
t = Nsplit_2_0(sl_up(sl), lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail8 ;
else
goto label0 ;
}
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm5 = t;
t = Lexical_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label5 ;
goto label4 ;
label5 :
t = trm5;
{
ATerm u_76 = NULL,v_76 = NULL;
if(match_cons(t, sym_appl_2))
{
u_76 = ATgetArgument(t, 0);
v_76 = ATgetArgument(t, 1);
}
else
goto fail10 ;
t = v_76;
t = map_1_0(sl_up(sl_up(sl)), sl_fun_cl(0, sl_up(sl)), t);
if((t == NULL))
goto fail10 ;
else
goto label4 ;
}
label4 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm4 = ATgetArgument(t, 0);
if(match_cons(trm4, sym_prod_3))
{
n_76 = ATgetArgument(trm4, 0);
t_76 = ATgetArgument(trm4, 1);
r_76 = ATgetArgument(trm4, 2);
}
else
goto fail9 ;
s_76 = ATgetArgument(t, 1);
}
else
goto fail9 ;
t = t_76;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm abbrev_amb_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "abbrev_amb_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_2 = NULL,g_2 = NULL,i_2 = NULL,h_2 = NULL,j_2 = NULL;
if(match_cons(t, sym_amb_1))
{
f_2 = ATgetArgument(t, 0);
}
else
goto fail6 ;
i_2 = t;
t = f_2;
t = Hd_0_0(sl, t);
if((t == NULL))
goto fail6 ;
t = yield_0_0(sl, t);
if((t == NULL))
goto fail6 ;
g_2 = t;
t = i_2;
j_2 = t;
t = f_2;
{
struct str_closure z_77 = { &(abbrev_term_0_0) , sl };
StrCL lifted6_cl = &(z_77);
t = map_1_0(sl, lifted6_cl, t);
if((t == NULL))
goto fail6 ;
h_2 = t;
t = j_2;
t = (ATerm) ATmakeAppl(sym_amb_abbr_2, g_2, h_2);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm abbrev_ambs_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "abbrev_ambs_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_77 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(x_77);
struct str_closure y_77 = { &(int_to_string_0_0) , sl };
StrCL lifted5_cl = &(y_77);
t = parsetree_2_0(sl, lifted3_cl, lifted5_cl, t);
if((t == NULL))
goto fail3 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_77 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(w_77);
t = map_1_0(sl_up(sl), lifted4_cl, t);
if((t == NULL))
goto fail4 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL;
c_2 = t;
e_2 = t;
t = abbrev_amb_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail5 ;
d_2 = t;
t = e_2;
t = (ATerm) ATmakeAppl(sym_root_1, d_2);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm visamb_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "visamb_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_77 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(s_77);
struct str_closure v_77 = { &(_Id) , sl };
StrCL lifted2_cl = &(v_77);
t = parsetree_2_0(sl, lifted0_cl, lifted2_cl, t);
if((t == NULL))
goto fail0 ;
t = abbrev_ambs_0_0(sl, t);
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
struct str_closure r_77 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(r_77);
t = bu_collect_1_0(sl_up(sl), lifted1_cl, t);
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
ATerm a_76 = NULL,c_76 = NULL,d_76 = NULL;
ATerm trm0;
trm0 = (ATerm) ATgetAnnotations(t);
if((trm0 == NULL))
trm0 = (ATerm) ATempty;
if(match_cons(t, sym_amb_1))
{
c_76 = ATgetArgument(t, 0);
}
else
goto fail2 ;
a_76 = trm0;
t = c_76;
d_76 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_amb_1, d_76), a_76);
}
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 33));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(concat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Hd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Hd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(bu_collect_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("bu_collect_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(implode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(prod_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("prod_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(appl_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("appl_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parsetree_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parsetree_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Lexical_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Lexical_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(e_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("e_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(yield_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("yield_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Nsplit_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Nsplit_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(k_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("k_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(abbrev_term_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("abbrev_term_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(abbrev_amb_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("abbrev_amb_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(abbrev_ambs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("abbrev_ambs_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(visamb_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("visamb_0_0", 0, ATtrue)), &(closures[closures_index]));
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
