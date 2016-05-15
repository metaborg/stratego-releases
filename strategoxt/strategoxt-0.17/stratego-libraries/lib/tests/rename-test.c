#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Fdec_3;
static Symbol sym_Letrec_2;
static Symbol sym_Var_2;
static Symbol sym_Abs_3;
static Symbol sym_App_2;
static Symbol sym_Var_1;
static Symbol sym_Abs_2;
static Symbol sym__2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym_Fdec_3 = ATmakeSymbol("Fdec", 3, ATfalse);
ATprotectSymbol(sym_Fdec_3);
sym_Letrec_2 = ATmakeSymbol("Letrec", 2, ATfalse);
ATprotectSymbol(sym_Letrec_2);
sym_Var_2 = ATmakeSymbol("Var", 2, ATfalse);
ATprotectSymbol(sym_Var_2);
sym_Abs_3 = ATmakeSymbol("Abs", 3, ATfalse);
ATprotectSymbol(sym_Abs_3);
sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
ATprotectSymbol(sym_App_2);
sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
ATprotectSymbol(sym_Var_1);
sym_Abs_2 = ATmakeSymbol("Abs", 2, ATfalse);
ATprotectSymbol(sym_Abs_2);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
static ATerm term21;
static ATerm term20;
static ATerm term19;
static ATerm term18;
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-test", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(sym_Var_1, term5);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(sym_Abs_2, term5, term7);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym_App_2, term9, term7);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("test2", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym_Var_2, term5, term15);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(sym_Abs_3, term5, term15, term17);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(sym_App_2, term19, term17);
ATprotect(&(term21));
term21 = term20;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm map_1_0 (StrSL sl, StrCL f_43, ATerm t);
ATerm Hd_0_0 (StrSL sl, ATerm t);
ATerm zip_1_0 (StrSL sl, StrCL b_40, ATerm t);
ATerm split_2_0 (StrSL sl, StrCL o_38, StrCL p_38, ATerm t);
ATerm eq_0_0 (StrSL sl, ATerm t);
ATerm rename_4_0 (StrSL sl, StrCL s_23, StrCL t_23, StrCL u_23, StrCL v_23, ATerm t);
ATerm debug_0_0 (StrSL sl, ATerm t);
ATerm apply_and_check_4_0 (StrSL sl, StrCL h_4, StrCL i_4, StrCL j_4, StrCL k_4, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL y_3, StrCL z_3, ATerm t);
ATerm Letrec_2_0 (StrSL sl, StrCL f_2, StrCL g_2, ATerm t);
ATerm Var_2_0 (StrSL sl, StrCL d_2, StrCL e_2, ATerm t);
ATerm Abs_3_0 (StrSL sl, StrCL a_2, StrCL b_2, StrCL c_2, ATerm t);
ATerm Abs_2_0 (StrSL sl, StrCL v_1, StrCL w_1, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
ATerm test2_0_0 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
ATerm TPaste_1_0 (StrSL sl, StrCL o_1, ATerm t);
ATerm TBoundIn_3_0 (StrSL sl, StrCL l_1, StrCL m_1, StrCL n_1, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
ATerm is_var_1_0 (StrSL sl, StrCL k_1, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm TBnd_0_0 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
ATerm test1_0_0 (StrSL sl, ATerm t);
ATerm EBoundIn_3_0 (StrSL sl, StrCL x_0, StrCL y_0, StrCL z_0, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm EPaste_1_0 (StrSL sl, StrCL w_0, ATerm t);
ATerm is_evar_1_0 (StrSL sl, StrCL v_0, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm Letrec_2_0 (StrSL sl, StrCL f_2, StrCL g_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Letrec_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_67 = NULL,r_67 = NULL,s_67 = NULL,u_67 = NULL,v_67 = NULL;
ATerm trm21;
trm21 = (ATerm) ATgetAnnotations(t);
if((trm21 == NULL))
trm21 = (ATerm) ATempty;
if(match_cons(t, sym_Letrec_2))
{
r_67 = ATgetArgument(t, 0);
s_67 = ATgetArgument(t, 1);
}
else
goto fail30 ;
t_67 = trm21;
t = r_67;
t = cl_fun(f_2)(cl_sl(f_2), t);
if((t == NULL))
goto fail30 ;
u_67 = t;
t = s_67;
t = cl_fun(g_2)(cl_sl(g_2), t);
if((t == NULL))
goto fail30 ;
v_67 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Letrec_2, u_67, v_67), t_67);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
ATerm Var_2_0 (StrSL sl, StrCL d_2, StrCL e_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Var_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_67 = NULL,f_67 = NULL,g_67 = NULL,n_67 = NULL,q_67 = NULL;
ATerm trm20;
trm20 = (ATerm) ATgetAnnotations(t);
if((trm20 == NULL))
trm20 = (ATerm) ATempty;
if(match_cons(t, sym_Var_2))
{
f_67 = ATgetArgument(t, 0);
g_67 = ATgetArgument(t, 1);
}
else
goto fail29 ;
m_67 = trm20;
t = f_67;
t = cl_fun(d_2)(cl_sl(d_2), t);
if((t == NULL))
goto fail29 ;
n_67 = t;
t = g_67;
t = cl_fun(e_2)(cl_sl(e_2), t);
if((t == NULL))
goto fail29 ;
q_67 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_2, n_67, q_67), m_67);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
ATerm Abs_3_0 (StrSL sl, StrCL a_2, StrCL b_2, StrCL c_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Abs_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,v_65 = NULL,g_66 = NULL,h_66 = NULL;
ATerm trm19;
trm19 = (ATerm) ATgetAnnotations(t);
if((trm19 == NULL))
trm19 = (ATerm) ATempty;
if(match_cons(t, sym_Abs_3))
{
k_65 = ATgetArgument(t, 0);
l_65 = ATgetArgument(t, 1);
m_65 = ATgetArgument(t, 2);
}
else
goto fail28 ;
u_65 = trm19;
t = k_65;
t = cl_fun(a_2)(cl_sl(a_2), t);
if((t == NULL))
goto fail28 ;
v_65 = t;
t = l_65;
t = cl_fun(b_2)(cl_sl(b_2), t);
if((t == NULL))
goto fail28 ;
g_66 = t;
t = m_65;
t = cl_fun(c_2)(cl_sl(c_2), t);
if((t == NULL))
goto fail28 ;
h_66 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Abs_3, v_65, g_66, h_66), u_65);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
ATerm Abs_2_0 (StrSL sl, StrCL v_1, StrCL w_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Abs_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_64 = NULL,r_64 = NULL,s_64 = NULL,u_64 = NULL,v_64 = NULL;
ATerm trm18;
trm18 = (ATerm) ATgetAnnotations(t);
if((trm18 == NULL))
trm18 = (ATerm) ATempty;
if(match_cons(t, sym_Abs_2))
{
r_64 = ATgetArgument(t, 0);
s_64 = ATgetArgument(t, 1);
}
else
goto fail27 ;
t_64 = trm18;
t = r_64;
t = cl_fun(v_1)(cl_sl(v_1), t);
if((t == NULL))
goto fail27 ;
u_64 = t;
t = s_64;
t = cl_fun(w_1)(cl_sl(w_1), t);
if((t == NULL))
goto fail27 ;
v_64 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Abs_2, u_64, v_64), t_64);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
ATerm test2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_71 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(g_71);
struct str_closure h_71 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(h_71);
struct str_closure i_71 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(i_71);
struct str_closure k_71 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(k_71);
t = apply_and_check_4_0(sl, lifted22_cl, lifted23_cl, lifted28_cl, lifted29_cl, t);
if((t == NULL))
goto fail22 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_1 = NULL,u_1 = NULL;
if(match_cons(t, sym_App_2))
{
ATerm trm10 = ATgetArgument(t, 0);
if(match_cons(trm10, sym_Abs_3))
{
t_1 = ATgetArgument(trm10, 0);
{
ATerm trm11 = ATgetArgument(trm10, 1);
if(!((ATgetSymbol(trm11) == ATmakeSymbol("a", 0, ATtrue))))
goto fail26 ;
}
{
ATerm trm12 = ATgetArgument(trm10, 2);
if(match_cons(trm12, sym_Var_2))
{
if(!((t_1 == ATgetArgument(trm12, 0))))
goto fail26 ;
{
ATerm trm13 = ATgetArgument(trm12, 1);
if(!((ATgetSymbol(trm13) == ATmakeSymbol("a", 0, ATtrue))))
goto fail26 ;
}
}
else
goto fail26 ;
}
}
else
goto fail26 ;
{
ATerm trm14 = ATgetArgument(t, 1);
if(match_cons(trm14, sym_Var_2))
{
ATerm trm15 = ATgetArgument(trm14, 0);
if(!((ATgetSymbol(trm15) == ATmakeSymbol("x", 0, ATtrue))))
goto fail26 ;
{
ATerm trm16 = ATgetArgument(trm14, 1);
if(!((ATgetSymbol(trm16) == ATmakeSymbol("a", 0, ATtrue))))
goto fail26 ;
}
}
else
goto fail26 ;
}
}
else
goto fail26 ;
u_1 = t;
t = (ATerm) ATmakeAppl(sym__2, t_1, term15);
{
ATerm trm17 = t;
t = eq_0_0(sl_up(sl), t);
if((t == NULL))
goto label9 ;
goto fail26 ;
label9 :
t = trm17;
goto label8 ;
label8 :
;
t = u_1;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_71 = { &(is_var_1_0) , sl_up(sl) };
StrCL lifted24_cl = &(b_71);
struct str_closure d_71 = { &(TBnd_0_0) , sl_up(sl) };
StrCL lifted25_cl = &(d_71);
struct str_closure e_71 = { &(TBoundIn_3_0) , sl_up(sl) };
StrCL lifted26_cl = &(e_71);
struct str_closure f_71 = { &(TPaste_1_0) , sl_up(sl) };
StrCL lifted27_cl = &(f_71);
t = rename_4_0(sl_up(sl), lifted24_cl, lifted25_cl, lifted26_cl, lifted27_cl, t);
if((t == NULL))
goto fail24 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm TPaste_1_0 (StrSL sl, StrCL o_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "TPaste_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, o_1);
t = debug_0_0(sl, t);
if((t == NULL))
goto fail18 ;
{
ATerm trm8 = t;
struct str_closure t_70 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(t_70);
struct str_closure u_70 = { &(_Id) , sl };
StrCL lifted16_cl = &(u_70);
struct str_closure w_70 = { &(_Id) , sl };
StrCL lifted17_cl = &(w_70);
t = Abs_3_0(sl, lifted15_cl, lifted16_cl, lifted17_cl, t);
if((t == NULL))
goto label7 ;
goto label6 ;
label7 :
t = trm8;
{
struct str_closure z_70 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(z_70);
struct str_closure a_71 = { &(_Id) , sl };
StrCL lifted21_cl = &(a_71);
t = Letrec_2_0(sl, lifted18_cl, lifted21_cl, t);
if((t == NULL))
goto fail18 ;
else
goto label6 ;
}
label6 :
;
t = debug_0_0(sl, t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_70 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(x_70);
struct str_closure y_70 = { &(_Id) , sl_up(sl) };
StrCL lifted19_cl = &(y_70);
t = split_2_0(sl_up(sl), lifted19_cl, sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail20 ;
t = zip_1_0(sl_up(sl), lifted20_cl, t);
if((t == NULL))
goto fail20 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm9 = ATgetArgument(t, 0);
if(match_cons(trm9, sym_Fdec_3))
{
q_69 = ATgetArgument(trm9, 0);
u_69 = ATgetArgument(trm9, 1);
v_69 = ATgetArgument(trm9, 2);
}
else
goto fail21 ;
t_69 = ATgetArgument(t, 1);
}
else
goto fail21 ;
t = (ATerm) ATmakeAppl(sym_Fdec_3, t_69, u_69, v_69);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail19 ;
t = Hd_0_0(sl_up(sl), t);
if((t == NULL))
goto fail19 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm TBoundIn_3_0 (StrSL sl, StrCL l_1, StrCL m_1, StrCL n_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "TBoundIn_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm7 = t;
t = Abs_3_0(sl, n_1, n_1, l_1, t);
if((t == NULL))
goto label5 ;
goto label4 ;
label5 :
t = trm7;
t = Letrec_2_0(sl, l_1, l_1, t);
if((t == NULL))
goto fail17 ;
else
goto label4 ;
label4 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_var_1_0 (StrSL sl, StrCL k_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_var_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, k_1);
{
struct str_closure r_70 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(r_70);
struct str_closure s_70 = { &(_Id) , sl };
StrCL lifted14_cl = &(s_70);
t = Var_2_0(sl, lifted13_cl, lifted14_cl, t);
if((t == NULL))
goto fail15 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = debug_0_0(sl_up(sl), t);
if((t == NULL))
goto fail16 ;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail16 ;
t = debug_0_0(sl_up(sl), t);
if((t == NULL))
goto fail16 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm TBnd_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "TBnd_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm6 = t;
ATerm e_1 = NULL,f_1 = NULL,g_1 = NULL;
if(match_cons(t, sym_Abs_3))
{
g_1 = ATgetArgument(t, 0);
e_1 = ATgetArgument(t, 1);
f_1 = ATgetArgument(t, 2);
}
else
goto label3 ;
t = (ATerm) ATinsert(ATempty, g_1);
goto label2 ;
label3 :
t = trm6;
{
ATerm c_1 = NULL,d_1 = NULL;
struct str_closure q_70 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(q_70);
if(match_cons(t, sym_Letrec_2))
{
d_1 = ATgetArgument(t, 0);
c_1 = ATgetArgument(t, 1);
}
else
goto fail13 ;
t = d_1;
t = map_1_0(sl, lifted12_cl, t);
if((t == NULL))
goto fail13 ;
else
goto label2 ;
}
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL;
if(match_cons(t, sym_Fdec_3))
{
p_69 = ATgetArgument(t, 0);
n_69 = ATgetArgument(t, 1);
o_69 = ATgetArgument(t, 2);
}
else
goto fail14 ;
t = p_69;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm test1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_70 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(m_70);
struct str_closure n_70 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(n_70);
struct str_closure o_70 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(o_70);
struct str_closure p_70 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(p_70);
t = apply_and_check_4_0(sl, lifted4_cl, lifted5_cl, lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto fail7 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_1 = NULL,b_1 = NULL;
if(match_cons(t, sym_App_2))
{
ATerm trm1 = ATgetArgument(t, 0);
if(match_cons(trm1, sym_Abs_2))
{
a_1 = ATgetArgument(trm1, 0);
{
ATerm trm2 = ATgetArgument(trm1, 1);
if(match_cons(trm2, sym_Var_1))
{
if(!((a_1 == ATgetArgument(trm2, 0))))
goto fail12 ;
}
else
goto fail12 ;
}
}
else
goto fail12 ;
{
ATerm trm3 = ATgetArgument(t, 1);
if(match_cons(trm3, sym_Var_1))
{
ATerm trm4 = ATgetArgument(trm3, 0);
if(!((ATgetSymbol(trm4) == ATmakeSymbol("x", 0, ATtrue))))
goto fail12 ;
}
else
goto fail12 ;
}
}
else
goto fail12 ;
b_1 = t;
t = (ATerm) ATmakeAppl(sym__2, a_1, term5);
{
ATerm trm5 = t;
t = eq_0_0(sl_up(sl), t);
if((t == NULL))
goto label1 ;
goto fail12 ;
label1 :
t = trm5;
goto label0 ;
label0 :
;
t = b_1;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_70 = { &(is_evar_1_0) , sl_up(sl) };
StrCL lifted6_cl = &(i_70);
struct str_closure j_70 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(j_70);
struct str_closure k_70 = { &(EBoundIn_3_0) , sl_up(sl) };
StrCL lifted8_cl = &(k_70);
struct str_closure l_70 = { &(EPaste_1_0) , sl_up(sl) };
StrCL lifted9_cl = &(l_70);
t = rename_4_0(sl_up(sl), lifted6_cl, lifted7_cl, lifted8_cl, lifted9_cl, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_69 = NULL,i_69 = NULL;
if(match_cons(t, sym_Abs_2))
{
i_69 = ATgetArgument(t, 0);
f_69 = ATgetArgument(t, 1);
}
else
goto fail10 ;
t = (ATerm) ATinsert(ATempty, i_69);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term3;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm EBoundIn_3_0 (StrSL sl, StrCL x_0, StrCL y_0, StrCL z_0, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "EBoundIn_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = Abs_2_0(sl, z_0, x_0, t);
if((t == NULL))
goto fail6 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm EPaste_1_0 (StrSL sl, StrCL w_0, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "EPaste_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, w_0);
{
struct str_closure g_70 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(g_70);
struct str_closure h_70 = { &(_Id) , sl };
StrCL lifted3_cl = &(h_70);
t = Abs_2_0(sl, lifted2_cl, lifted3_cl, t);
if((t == NULL))
goto fail4 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail5 ;
t = Hd_0_0(sl_up(sl), t);
if((t == NULL))
goto fail5 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_evar_1_0 (StrSL sl, StrCL v_0, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_evar_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL;
ATerm trm0;
trm0 = (ATerm) ATgetAnnotations(t);
if((trm0 == NULL))
trm0 = (ATerm) ATempty;
if(match_cons(t, sym_Var_1))
{
g_68 = ATgetArgument(t, 0);
}
else
goto fail3 ;
f_68 = trm0;
t = g_68;
t = cl_fun(v_0)(cl_sl(v_0), t);
if((t == NULL))
goto fail3 ;
h_68 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Var_1, h_68), f_68);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_70 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(e_70);
struct str_closure f_70 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(f_70);
t = test_suite_2_0(sl, lifted0_cl, lifted1_cl, t);
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
t = test1_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test2_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 40));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Hd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Hd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(zip_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("zip_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(split_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("split_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(eq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("eq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rename_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rename_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_and_check_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_and_check_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_suite_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_suite_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Letrec_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Letrec_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Var_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Var_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Abs_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Abs_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Abs_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Abs_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted22", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(TPaste_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("TPaste_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(TBoundIn_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("TBoundIn_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_var_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_var_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(TBnd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("TBnd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test1_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(EBoundIn_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("EBoundIn_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(EPaste_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("EPaste_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_evar_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_evar_1_0", 0, ATtrue)), &(closures[closures_index]));
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
