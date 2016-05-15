#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Nil_0;
static Symbol sym_S_1;
static Symbol sym_H_2;
static Symbol sym_V_2;
static Symbol sym_HV_2;
static Symbol sym_ALT_2;
static Symbol sym_A_3;
static Symbol sym_R_2;
static Symbol sym_FBOX_2;
static Symbol sym_LBL_2;
static Symbol sym_REF_2;
static Symbol sym_C_2;
static Symbol sym_L_2;
static Symbol sym_SOpt_2;
static Symbol sym_VS_0;
static Symbol sym_HS_0;
static Symbol sym_IS_0;
static Symbol sym_AL_1;
static Symbol sym_AC_1;
static Symbol sym_AR_1;
static Symbol sym_AOPTIONS_1;
static Symbol sym_FNAT_2;
static Symbol sym_FFID_2;
static Symbol sym_F_1;
static Symbol sym_KW_0;
static Symbol sym_VAR_0;
static Symbol sym_NUM_0;
static Symbol sym_MATH_0;
static Symbol sym_FN_0;
static Symbol sym_FM_0;
static Symbol sym_SE_0;
static Symbol sym_SH_0;
static Symbol sym_SZ_0;
static Symbol sym_CL_0;
static void init_module_constructors (void)
{
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
ATprotectSymbol(sym_S_1);
sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
ATprotectSymbol(sym_H_2);
sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
ATprotectSymbol(sym_V_2);
sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
ATprotectSymbol(sym_HV_2);
sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
ATprotectSymbol(sym_ALT_2);
sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
ATprotectSymbol(sym_A_3);
sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
ATprotectSymbol(sym_R_2);
sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
ATprotectSymbol(sym_FBOX_2);
sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
ATprotectSymbol(sym_LBL_2);
sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
ATprotectSymbol(sym_REF_2);
sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
ATprotectSymbol(sym_C_2);
sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
ATprotectSymbol(sym_L_2);
sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
ATprotectSymbol(sym_SOpt_2);
sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
ATprotectSymbol(sym_VS_0);
sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
ATprotectSymbol(sym_HS_0);
sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
ATprotectSymbol(sym_IS_0);
sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
ATprotectSymbol(sym_AL_1);
sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
ATprotectSymbol(sym_AC_1);
sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
ATprotectSymbol(sym_AR_1);
sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
ATprotectSymbol(sym_AOPTIONS_1);
sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
ATprotectSymbol(sym_FNAT_2);
sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
ATprotectSymbol(sym_FFID_2);
sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
ATprotectSymbol(sym_F_1);
sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
ATprotectSymbol(sym_KW_0);
sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
ATprotectSymbol(sym_VAR_0);
sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
ATprotectSymbol(sym_NUM_0);
sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
ATprotectSymbol(sym_MATH_0);
sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
ATprotectSymbol(sym_FN_0);
sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
ATprotectSymbol(sym_FM_0);
sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
ATprotectSymbol(sym_SE_0);
sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
ATprotectSymbol(sym_SH_0);
sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
ATprotectSymbol(sym_SZ_0);
sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
ATprotectSymbol(sym_CL_0);
}
static ATerm term1;
static ATerm term0;
static void init_module_constant_terms (void)
{
ATprotect(&(term0));
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm list_1_0 (StrSL sl, StrCL y_43, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL g_16, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_1_0 (StrSL sl, StrCL q_10, ATerm t);
ATerm H_2_0 (StrSL sl, StrCL x_2, StrCL y_2, ATerm t);
ATerm V_2_0 (StrSL sl, StrCL v_2, StrCL w_2, ATerm t);
ATerm HV_2_0 (StrSL sl, StrCL t_2, StrCL u_2, ATerm t);
ATerm ALT_2_0 (StrSL sl, StrCL r_2, StrCL s_2, ATerm t);
ATerm A_3_0 (StrSL sl, StrCL o_2, StrCL p_2, StrCL q_2, ATerm t);
ATerm R_2_0 (StrSL sl, StrCL m_2, StrCL n_2, ATerm t);
ATerm FBOX_2_0 (StrSL sl, StrCL k_2, StrCL l_2, ATerm t);
ATerm LBL_2_0 (StrSL sl, StrCL i_2, StrCL j_2, ATerm t);
ATerm REF_2_0 (StrSL sl, StrCL g_2, StrCL h_2, ATerm t);
ATerm C_2_0 (StrSL sl, StrCL e_2, StrCL f_2, ATerm t);
ATerm L_2_0 (StrSL sl, StrCL c_2, StrCL d_2, ATerm t);
ATerm SOpt_2_0 (StrSL sl, StrCL y_1, StrCL z_1, ATerm t);
ATerm FNAT_2_0 (StrSL sl, StrCL q_1, StrCL r_1, ATerm t);
ATerm FFID_2_0 (StrSL sl, StrCL o_1, StrCL p_1, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
ATerm S_Option_0_0 (StrSL sl, ATerm t);
ATerm Font_Param_0_0 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm Box_0_0 (StrSL sl, ATerm t);
ATerm H_2_0 (StrSL sl, StrCL x_2, StrCL y_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "H_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_71 = NULL,n_71 = NULL,o_71 = NULL,r_71 = NULL,s_71 = NULL;
ATerm trm53;
trm53 = (ATerm) ATgetAnnotations(t);
if((trm53 == NULL))
trm53 = (ATerm) ATempty;
if(match_cons(t, sym_H_2))
{
n_71 = ATgetArgument(t, 0);
o_71 = ATgetArgument(t, 1);
}
else
goto fail38 ;
p_71 = trm53;
t = n_71;
t = cl_fun(x_2)(cl_sl(x_2), t);
if((t == NULL))
goto fail38 ;
r_71 = t;
t = o_71;
t = cl_fun(y_2)(cl_sl(y_2), t);
if((t == NULL))
goto fail38 ;
s_71 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_H_2, r_71, s_71), p_71);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
ATerm V_2_0 (StrSL sl, StrCL v_2, StrCL w_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "V_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_71 = NULL,h_71 = NULL,i_71 = NULL,l_71 = NULL,m_71 = NULL;
ATerm trm52;
trm52 = (ATerm) ATgetAnnotations(t);
if((trm52 == NULL))
trm52 = (ATerm) ATempty;
if(match_cons(t, sym_V_2))
{
h_71 = ATgetArgument(t, 0);
i_71 = ATgetArgument(t, 1);
}
else
goto fail37 ;
k_71 = trm52;
t = h_71;
t = cl_fun(v_2)(cl_sl(v_2), t);
if((t == NULL))
goto fail37 ;
l_71 = t;
t = i_71;
t = cl_fun(w_2)(cl_sl(w_2), t);
if((t == NULL))
goto fail37 ;
m_71 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_V_2, l_71, m_71), k_71);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
ATerm HV_2_0 (StrSL sl, StrCL t_2, StrCL u_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "HV_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_71 = NULL,b_71 = NULL,d_71 = NULL,f_71 = NULL,g_71 = NULL;
ATerm trm51;
trm51 = (ATerm) ATgetAnnotations(t);
if((trm51 == NULL))
trm51 = (ATerm) ATempty;
if(match_cons(t, sym_HV_2))
{
b_71 = ATgetArgument(t, 0);
d_71 = ATgetArgument(t, 1);
}
else
goto fail36 ;
e_71 = trm51;
t = b_71;
t = cl_fun(t_2)(cl_sl(t_2), t);
if((t == NULL))
goto fail36 ;
f_71 = t;
t = d_71;
t = cl_fun(u_2)(cl_sl(u_2), t);
if((t == NULL))
goto fail36 ;
g_71 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_HV_2, f_71, g_71), e_71);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
ATerm ALT_2_0 (StrSL sl, StrCL r_2, StrCL s_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ALT_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_70 = NULL,w_70 = NULL,x_70 = NULL,z_70 = NULL,a_71 = NULL;
ATerm trm50;
trm50 = (ATerm) ATgetAnnotations(t);
if((trm50 == NULL))
trm50 = (ATerm) ATempty;
if(match_cons(t, sym_ALT_2))
{
w_70 = ATgetArgument(t, 0);
x_70 = ATgetArgument(t, 1);
}
else
goto fail35 ;
y_70 = trm50;
t = w_70;
t = cl_fun(r_2)(cl_sl(r_2), t);
if((t == NULL))
goto fail35 ;
z_70 = t;
t = x_70;
t = cl_fun(s_2)(cl_sl(s_2), t);
if((t == NULL))
goto fail35 ;
a_71 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ALT_2, z_70, a_71), y_70);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm A_3_0 (StrSL sl, StrCL o_2, StrCL p_2, StrCL q_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "A_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL;
ATerm trm49;
trm49 = (ATerm) ATgetAnnotations(t);
if((trm49 == NULL))
trm49 = (ATerm) ATempty;
if(match_cons(t, sym_A_3))
{
o_70 = ATgetArgument(t, 0);
p_70 = ATgetArgument(t, 1);
q_70 = ATgetArgument(t, 2);
}
else
goto fail34 ;
r_70 = trm49;
t = o_70;
t = cl_fun(o_2)(cl_sl(o_2), t);
if((t == NULL))
goto fail34 ;
s_70 = t;
t = p_70;
t = cl_fun(p_2)(cl_sl(p_2), t);
if((t == NULL))
goto fail34 ;
t_70 = t;
t = q_70;
t = cl_fun(q_2)(cl_sl(q_2), t);
if((t == NULL))
goto fail34 ;
u_70 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_A_3, s_70, t_70, u_70), r_70);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
ATerm R_2_0 (StrSL sl, StrCL m_2, StrCL n_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "R_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_70 = NULL,j_70 = NULL,k_70 = NULL,m_70 = NULL,n_70 = NULL;
ATerm trm48;
trm48 = (ATerm) ATgetAnnotations(t);
if((trm48 == NULL))
trm48 = (ATerm) ATempty;
if(match_cons(t, sym_R_2))
{
j_70 = ATgetArgument(t, 0);
k_70 = ATgetArgument(t, 1);
}
else
goto fail33 ;
l_70 = trm48;
t = j_70;
t = cl_fun(m_2)(cl_sl(m_2), t);
if((t == NULL))
goto fail33 ;
m_70 = t;
t = k_70;
t = cl_fun(n_2)(cl_sl(n_2), t);
if((t == NULL))
goto fail33 ;
n_70 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_R_2, m_70, n_70), l_70);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm FBOX_2_0 (StrSL sl, StrCL k_2, StrCL l_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "FBOX_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_70 = NULL,e_70 = NULL,f_70 = NULL,h_70 = NULL,i_70 = NULL;
ATerm trm47;
trm47 = (ATerm) ATgetAnnotations(t);
if((trm47 == NULL))
trm47 = (ATerm) ATempty;
if(match_cons(t, sym_FBOX_2))
{
e_70 = ATgetArgument(t, 0);
f_70 = ATgetArgument(t, 1);
}
else
goto fail32 ;
g_70 = trm47;
t = e_70;
t = cl_fun(k_2)(cl_sl(k_2), t);
if((t == NULL))
goto fail32 ;
h_70 = t;
t = f_70;
t = cl_fun(l_2)(cl_sl(l_2), t);
if((t == NULL))
goto fail32 ;
i_70 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FBOX_2, h_70, i_70), g_70);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
ATerm LBL_2_0 (StrSL sl, StrCL i_2, StrCL j_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "LBL_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_70 = NULL,z_69 = NULL,a_70 = NULL,c_70 = NULL,d_70 = NULL;
ATerm trm46;
trm46 = (ATerm) ATgetAnnotations(t);
if((trm46 == NULL))
trm46 = (ATerm) ATempty;
if(match_cons(t, sym_LBL_2))
{
z_69 = ATgetArgument(t, 0);
a_70 = ATgetArgument(t, 1);
}
else
goto fail31 ;
b_70 = trm46;
t = z_69;
t = cl_fun(i_2)(cl_sl(i_2), t);
if((t == NULL))
goto fail31 ;
c_70 = t;
t = a_70;
t = cl_fun(j_2)(cl_sl(j_2), t);
if((t == NULL))
goto fail31 ;
d_70 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_LBL_2, c_70, d_70), b_70);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm REF_2_0 (StrSL sl, StrCL g_2, StrCL h_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "REF_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_69 = NULL,u_69 = NULL,v_69 = NULL,x_69 = NULL,y_69 = NULL;
ATerm trm45;
trm45 = (ATerm) ATgetAnnotations(t);
if((trm45 == NULL))
trm45 = (ATerm) ATempty;
if(match_cons(t, sym_REF_2))
{
u_69 = ATgetArgument(t, 0);
v_69 = ATgetArgument(t, 1);
}
else
goto fail30 ;
w_69 = trm45;
t = u_69;
t = cl_fun(g_2)(cl_sl(g_2), t);
if((t == NULL))
goto fail30 ;
x_69 = t;
t = v_69;
t = cl_fun(h_2)(cl_sl(h_2), t);
if((t == NULL))
goto fail30 ;
y_69 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_REF_2, x_69, y_69), w_69);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
ATerm C_2_0 (StrSL sl, StrCL e_2, StrCL f_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "C_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_69 = NULL,n_69 = NULL,o_69 = NULL,q_69 = NULL,t_69 = NULL;
ATerm trm44;
trm44 = (ATerm) ATgetAnnotations(t);
if((trm44 == NULL))
trm44 = (ATerm) ATempty;
if(match_cons(t, sym_C_2))
{
n_69 = ATgetArgument(t, 0);
o_69 = ATgetArgument(t, 1);
}
else
goto fail29 ;
p_69 = trm44;
t = n_69;
t = cl_fun(e_2)(cl_sl(e_2), t);
if((t == NULL))
goto fail29 ;
q_69 = t;
t = o_69;
t = cl_fun(f_2)(cl_sl(f_2), t);
if((t == NULL))
goto fail29 ;
t_69 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_C_2, q_69, t_69), p_69);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
ATerm L_2_0 (StrSL sl, StrCL c_2, StrCL d_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "L_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_69 = NULL,i_69 = NULL,j_69 = NULL,l_69 = NULL,m_69 = NULL;
ATerm trm43;
trm43 = (ATerm) ATgetAnnotations(t);
if((trm43 == NULL))
trm43 = (ATerm) ATempty;
if(match_cons(t, sym_L_2))
{
i_69 = ATgetArgument(t, 0);
j_69 = ATgetArgument(t, 1);
}
else
goto fail28 ;
k_69 = trm43;
t = i_69;
t = cl_fun(c_2)(cl_sl(c_2), t);
if((t == NULL))
goto fail28 ;
l_69 = t;
t = j_69;
t = cl_fun(d_2)(cl_sl(d_2), t);
if((t == NULL))
goto fail28 ;
m_69 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_L_2, l_69, m_69), k_69);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
ATerm SOpt_2_0 (StrSL sl, StrCL y_1, StrCL z_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "SOpt_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_68 = NULL,t_68 = NULL,u_68 = NULL,z_68 = NULL,a_69 = NULL;
ATerm trm42;
trm42 = (ATerm) ATgetAnnotations(t);
if((trm42 == NULL))
trm42 = (ATerm) ATempty;
if(match_cons(t, sym_SOpt_2))
{
t_68 = ATgetArgument(t, 0);
u_68 = ATgetArgument(t, 1);
}
else
goto fail27 ;
v_68 = trm42;
t = t_68;
t = cl_fun(y_1)(cl_sl(y_1), t);
if((t == NULL))
goto fail27 ;
z_68 = t;
t = u_68;
t = cl_fun(z_1)(cl_sl(z_1), t);
if((t == NULL))
goto fail27 ;
a_69 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, z_68, a_69), v_68);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
ATerm FNAT_2_0 (StrSL sl, StrCL q_1, StrCL r_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "FNAT_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_67 = NULL,q_67 = NULL,r_67 = NULL,t_67 = NULL,u_67 = NULL;
ATerm trm41;
trm41 = (ATerm) ATgetAnnotations(t);
if((trm41 == NULL))
trm41 = (ATerm) ATempty;
if(match_cons(t, sym_FNAT_2))
{
q_67 = ATgetArgument(t, 0);
r_67 = ATgetArgument(t, 1);
}
else
goto fail26 ;
s_67 = trm41;
t = q_67;
t = cl_fun(q_1)(cl_sl(q_1), t);
if((t == NULL))
goto fail26 ;
t_67 = t;
t = r_67;
t = cl_fun(r_1)(cl_sl(r_1), t);
if((t == NULL))
goto fail26 ;
u_67 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FNAT_2, t_67, u_67), s_67);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
ATerm FFID_2_0 (StrSL sl, StrCL o_1, StrCL p_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "FFID_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_67 = NULL,h_66 = NULL,f_67 = NULL,m_67 = NULL,n_67 = NULL;
ATerm trm40;
trm40 = (ATerm) ATgetAnnotations(t);
if((trm40 == NULL))
trm40 = (ATerm) ATempty;
if(match_cons(t, sym_FFID_2))
{
h_66 = ATgetArgument(t, 0);
f_67 = ATgetArgument(t, 1);
}
else
goto fail25 ;
g_67 = trm40;
t = h_66;
t = cl_fun(o_1)(cl_sl(o_1), t);
if((t == NULL))
goto fail25 ;
m_67 = t;
t = f_67;
t = cl_fun(p_1)(cl_sl(p_1), t);
if((t == NULL))
goto fail25 ;
n_67 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FFID_2, m_67, n_67), g_67);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_76 = { &(Box_0_0) , sl };
StrCL lifted49_cl = &(d_76);
t = io_wrap_1_0(sl, lifted49_cl, t);
if((t == NULL))
goto fail24 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
ATerm S_Option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "S_Option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_76 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(a_76);
struct str_closure c_76 = { &(is_string_0_0) , sl };
StrCL lifted48_cl = &(c_76);
t = SOpt_2_0(sl, lifted47_cl, lifted48_cl, t);
if((t == NULL))
goto fail22 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm38 = t;
if(!(match_cons(t, sym_VS_0)))
goto label40 ;
goto label39 ;
label40 :
t = trm38;
{
ATerm trm39 = t;
if(!(match_cons(t, sym_HS_0)))
goto label41 ;
goto label39 ;
label41 :
t = trm39;
if(match_cons(t, sym_IS_0))
{
goto label39 ;
}
else
goto fail23 ;
}
label39 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm Font_Param_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Font_Param_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm33 = t;
if(!(match_cons(t, sym_FN_0)))
goto label34 ;
goto label33 ;
label34 :
t = trm33;
{
ATerm trm34 = t;
if(!(match_cons(t, sym_FM_0)))
goto label35 ;
goto label33 ;
label35 :
t = trm34;
{
ATerm trm35 = t;
if(!(match_cons(t, sym_SE_0)))
goto label36 ;
goto label33 ;
label36 :
t = trm35;
{
ATerm trm36 = t;
if(!(match_cons(t, sym_SH_0)))
goto label37 ;
goto label33 ;
label37 :
t = trm36;
{
ATerm trm37 = t;
if(!(match_cons(t, sym_SZ_0)))
goto label38 ;
goto label33 ;
label38 :
t = trm37;
if(match_cons(t, sym_CL_0))
{
goto label33 ;
}
else
goto fail21 ;
}
}
}
}
label33 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm Box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
ATerm w_71 = NULL,y_71 = NULL,z_71 = NULL;
ATerm trm1;
trm1 = (ATerm) ATgetAnnotations(t);
if((trm1 == NULL))
trm1 = (ATerm) ATempty;
if(match_cons(t, sym_S_1))
{
y_71 = ATgetArgument(t, 0);
}
else
goto label1 ;
w_71 = trm1;
t = y_71;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label1 ;
z_71 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_S_1, z_71), w_71);
goto label0 ;
label1 :
t = trm0;
{
ATerm trm2 = t;
struct str_closure t_73 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(t_73);
struct str_closure u_73 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(u_73);
t = H_2_0(sl, lifted0_cl, lifted4_cl, t);
if((t == NULL))
goto label2 ;
goto label0 ;
label2 :
t = trm2;
{
ATerm trm5 = t;
struct str_closure x_73 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(x_73);
struct str_closure y_73 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(y_73);
t = V_2_0(sl, lifted6_cl, lifted8_cl, t);
if((t == NULL))
goto label6 ;
goto label0 ;
label6 :
t = trm5;
{
ATerm trm6 = t;
struct str_closure b_74 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(b_74);
struct str_closure c_74 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(c_74);
t = HV_2_0(sl, lifted10_cl, lifted12_cl, t);
if((t == NULL))
goto label7 ;
goto label0 ;
label7 :
t = trm6;
{
ATerm trm7 = t;
struct str_closure d_74 = { &(Box_0_0) , sl };
StrCL lifted14_cl = &(d_74);
struct str_closure e_74 = { &(Box_0_0) , sl };
StrCL lifted15_cl = &(e_74);
t = ALT_2_0(sl, lifted14_cl, lifted15_cl, t);
if((t == NULL))
goto label8 ;
goto label0 ;
label8 :
t = trm7;
{
ATerm trm8 = t;
struct str_closure n_74 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(n_74);
struct str_closure o_74 = { &(Box_0_0) , sl };
StrCL lifted22_cl = &(o_74);
t = FBOX_2_0(sl, lifted16_cl, lifted22_cl, t);
if((t == NULL))
goto label9 ;
goto label0 ;
label9 :
t = trm8;
{
ATerm trm20 = t;
struct str_closure z_74 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(z_74);
struct str_closure a_75 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(a_75);
struct str_closure c_75 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(c_75);
t = A_3_0(sl, lifted23_cl, lifted28_cl, lifted30_cl, t);
if((t == NULL))
goto label23 ;
goto label0 ;
label23 :
t = trm20;
{
ATerm trm27 = t;
struct str_closure g_75 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(g_75);
struct str_closure i_75 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(i_75);
t = R_2_0(sl, lifted32_cl, lifted34_cl, t);
if((t == NULL))
goto label27 ;
goto label0 ;
label27 :
t = trm27;
{
ATerm trm28 = t;
struct str_closure k_75 = { &(is_string_0_0) , sl };
StrCL lifted36_cl = &(k_75);
struct str_closure l_75 = { &(Box_0_0) , sl };
StrCL lifted37_cl = &(l_75);
t = LBL_2_0(sl, lifted36_cl, lifted37_cl, t);
if((t == NULL))
goto label28 ;
goto label0 ;
label28 :
t = trm28;
{
ATerm trm29 = t;
struct str_closure n_75 = { &(is_string_0_0) , sl };
StrCL lifted38_cl = &(n_75);
struct str_closure o_75 = { &(Box_0_0) , sl };
StrCL lifted39_cl = &(o_75);
t = REF_2_0(sl, lifted38_cl, lifted39_cl, t);
if((t == NULL))
goto label29 ;
goto label0 ;
label29 :
t = trm29;
{
ATerm trm30 = t;
struct str_closure t_75 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(t_75);
struct str_closure u_75 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(u_75);
t = C_2_0(sl, lifted40_cl, lifted42_cl, t);
if((t == NULL))
goto label30 ;
goto label0 ;
label30 :
t = trm30;
{
ATerm trm31 = t;
struct str_closure w_75 = { &(Box_0_0) , sl };
StrCL lifted44_cl = &(w_75);
struct str_closure x_75 = { &(Box_0_0) , sl };
StrCL lifted45_cl = &(x_75);
t = L_2_0(sl, lifted44_cl, lifted45_cl, t);
if((t == NULL))
goto label31 ;
goto label0 ;
label31 :
t = trm31;
{
ATerm trm32 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label32 ;
goto label0 ;
label32 :
t = trm32;
{
struct str_closure z_75 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(z_75);
t = debug_1_0(sl, lifted46_cl, t);
if((t == NULL))
goto fail0 ;
else
goto label0 ;
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
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term1;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_75 = { &(Box_0_0) , sl_up(sl) };
StrCL lifted43_cl = &(r_75);
t = list_1_0(sl_up(sl), lifted43_cl, t);
if((t == NULL))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_75 = { &(S_Option_0_0) , sl_up(sl) };
StrCL lifted41_cl = &(q_75);
t = list_1_0(sl_up(sl), lifted41_cl, t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_75 = { &(Box_0_0) , sl_up(sl) };
StrCL lifted35_cl = &(f_75);
t = list_1_0(sl_up(sl), lifted35_cl, t);
if((t == NULL))
goto fail17 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_75 = { &(S_Option_0_0) , sl_up(sl) };
StrCL lifted33_cl = &(d_75);
t = list_1_0(sl_up(sl), lifted33_cl, t);
if((t == NULL))
goto fail16 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_74 = { &(Box_0_0) , sl_up(sl) };
StrCL lifted31_cl = &(x_74);
t = list_1_0(sl_up(sl), lifted31_cl, t);
if((t == NULL))
goto fail15 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_74 = { &(S_Option_0_0) , sl_up(sl) };
StrCL lifted29_cl = &(w_74);
t = list_1_0(sl_up(sl), lifted29_cl, t);
if((t == NULL))
goto fail14 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_72 = NULL,i_72 = NULL,j_72 = NULL;
ATerm trm21;
trm21 = (ATerm) ATgetAnnotations(t);
if((trm21 == NULL))
trm21 = (ATerm) ATempty;
if(match_cons(t, sym_AOPTIONS_1))
{
i_72 = ATgetArgument(t, 0);
}
else
goto fail12 ;
g_72 = trm21;
t = i_72;
{
struct str_closure u_74 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(u_74);
t = list_1_0(sl_up(sl), lifted24_cl, t);
if((t == NULL))
goto fail12 ;
j_72 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_AOPTIONS_1, j_72), g_72);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm22 = t;
ATerm m_72 = NULL,o_72 = NULL,p_72 = NULL;
ATerm trm23;
trm23 = (ATerm) ATgetAnnotations(t);
if((trm23 == NULL))
trm23 = (ATerm) ATempty;
if(match_cons(t, sym_AL_1))
{
o_72 = ATgetArgument(t, 0);
}
else
goto label25 ;
m_72 = trm23;
t = o_72;
{
struct str_closure q_74 = { &(S_Option_0_0) , sl_up(sl_up(sl)) };
StrCL lifted25_cl = &(q_74);
t = list_1_0(sl_up(sl_up(sl)), lifted25_cl, t);
if((t == NULL))
goto label25 ;
p_72 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_AL_1, p_72), m_72);
}
goto label24 ;
label25 :
t = trm22;
{
ATerm trm24 = t;
ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL;
ATerm trm25;
trm25 = (ATerm) ATgetAnnotations(t);
if((trm25 == NULL))
trm25 = (ATerm) ATempty;
if(match_cons(t, sym_AC_1))
{
s_72 = ATgetArgument(t, 0);
}
else
goto label26 ;
r_72 = trm25;
t = s_72;
{
struct str_closure r_74 = { &(S_Option_0_0) , sl_up(sl_up(sl)) };
StrCL lifted26_cl = &(r_74);
t = list_1_0(sl_up(sl_up(sl)), lifted26_cl, t);
if((t == NULL))
goto label26 ;
t_72 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_AC_1, t_72), r_72);
}
goto label24 ;
label26 :
t = trm24;
{
ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL;
ATerm trm26;
trm26 = (ATerm) ATgetAnnotations(t);
if((trm26 == NULL))
trm26 = (ATerm) ATempty;
if(match_cons(t, sym_AR_1))
{
w_72 = ATgetArgument(t, 0);
}
else
goto fail13 ;
v_72 = trm26;
t = w_72;
{
struct str_closure t_74 = { &(S_Option_0_0) , sl_up(sl_up(sl)) };
StrCL lifted27_cl = &(t_74);
t = list_1_0(sl_up(sl_up(sl)), lifted27_cl, t);
if((t == NULL))
goto fail13 ;
x_72 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_AR_1, x_72), v_72);
goto label24 ;
}
}
}
label24 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm9 = t;
ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL;
ATerm trm10;
trm10 = (ATerm) ATgetAnnotations(t);
if((trm10 == NULL))
trm10 = (ATerm) ATempty;
if(match_cons(t, sym_F_1))
{
c_72 = ATgetArgument(t, 0);
}
else
goto label11 ;
b_72 = trm10;
t = c_72;
{
struct str_closure l_74 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(l_74);
t = list_1_0(sl_up(sl), lifted17_cl, t);
if((t == NULL))
goto label11 ;
d_72 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_F_1, d_72), b_72);
}
goto label10 ;
label11 :
t = trm9;
{
ATerm trm17 = t;
if(!(match_cons(t, sym_KW_0)))
goto label20 ;
goto label10 ;
label20 :
t = trm17;
{
ATerm trm18 = t;
if(!(match_cons(t, sym_VAR_0)))
goto label21 ;
goto label10 ;
label21 :
t = trm18;
{
ATerm trm19 = t;
if(!(match_cons(t, sym_NUM_0)))
goto label22 ;
goto label10 ;
label22 :
t = trm19;
if(match_cons(t, sym_MATH_0))
{
goto label10 ;
}
else
goto fail9 ;
}
}
}
label10 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm11 = t;
struct str_closure f_74 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(f_74);
struct str_closure g_74 = { &(is_string_0_0) , sl_up(sl_up(sl)) };
StrCL lifted19_cl = &(g_74);
t = FNAT_2_0(sl_up(sl_up(sl)), lifted18_cl, lifted19_cl, t);
if((t == NULL))
goto label13 ;
goto label12 ;
label13 :
t = trm11;
{
struct str_closure i_74 = { &(Font_Param_0_0) , sl_up(sl_up(sl)) };
StrCL lifted20_cl = &(i_74);
struct str_closure k_74 = { &(is_string_0_0) , sl_up(sl_up(sl)) };
StrCL lifted21_cl = &(k_74);
t = FFID_2_0(sl_up(sl_up(sl)), lifted20_cl, lifted21_cl, t);
if((t == NULL))
goto fail10 ;
else
goto label12 ;
}
label12 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm12 = t;
if(!(match_cons(t, sym_FN_0)))
goto label15 ;
goto label14 ;
label15 :
t = trm12;
{
ATerm trm13 = t;
if(!(match_cons(t, sym_FM_0)))
goto label16 ;
goto label14 ;
label16 :
t = trm13;
{
ATerm trm14 = t;
if(!(match_cons(t, sym_SE_0)))
goto label17 ;
goto label14 ;
label17 :
t = trm14;
{
ATerm trm15 = t;
if(!(match_cons(t, sym_SH_0)))
goto label18 ;
goto label14 ;
label18 :
t = trm15;
{
ATerm trm16 = t;
if(!(match_cons(t, sym_SZ_0)))
goto label19 ;
goto label14 ;
label19 :
t = trm16;
if(match_cons(t, sym_CL_0))
{
goto label14 ;
}
else
goto fail11 ;
}
}
}
}
label14 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_74 = { &(Box_0_0) , sl_up(sl) };
StrCL lifted13_cl = &(a_74);
t = list_1_0(sl_up(sl), lifted13_cl, t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_73 = { &(S_Option_0_0) , sl_up(sl) };
StrCL lifted11_cl = &(z_73);
t = list_1_0(sl_up(sl), lifted11_cl, t);
if((t == NULL))
goto fail7 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_73 = { &(Box_0_0) , sl_up(sl) };
StrCL lifted9_cl = &(w_73);
t = list_1_0(sl_up(sl), lifted9_cl, t);
if((t == NULL))
goto fail6 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_73 = { &(S_Option_0_0) , sl_up(sl) };
StrCL lifted7_cl = &(v_73);
t = list_1_0(sl_up(sl), lifted7_cl, t);
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
struct str_closure s_73 = { &(Box_0_0) , sl_up(sl) };
StrCL lifted5_cl = &(s_73);
t = list_1_0(sl_up(sl), lifted5_cl, t);
if((t == NULL))
goto fail4 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_73 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(r_73);
t = list_1_0(sl_up(sl), lifted1_cl, t);
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
struct str_closure p_73 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(p_73);
struct str_closure q_73 = { &(is_string_0_0) , sl_up(sl_up(sl)) };
StrCL lifted3_cl = &(q_73);
t = SOpt_2_0(sl_up(sl_up(sl)), lifted2_cl, lifted3_cl, t);
if((t == NULL))
goto fail2 ;
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
ATerm trm3 = t;
if(!(match_cons(t, sym_VS_0)))
goto label4 ;
goto label3 ;
label4 :
t = trm3;
{
ATerm trm4 = t;
if(!(match_cons(t, sym_HS_0)))
goto label5 ;
goto label3 ;
label5 :
t = trm4;
if(match_cons(t, sym_IS_0))
{
goto label3 ;
}
else
goto fail3 ;
}
label3 :
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 43));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(list_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("list_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(H_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("H_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(V_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("V_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(HV_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("HV_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ALT_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ALT_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(A_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("A_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(R_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("R_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(FBOX_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("FBOX_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(LBL_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("LBL_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(REF_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("REF_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(C_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("C_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(L_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("L_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(SOpt_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("SOpt_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(FNAT_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("FNAT_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(FFID_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("FFID_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(S_Option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("S_Option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Font_Param_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Font_Param_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted46);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted46", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted34);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted34", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted24);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted24", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(Box_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Box_0_0", 0, ATtrue)), &(closures[closures_index]));
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
