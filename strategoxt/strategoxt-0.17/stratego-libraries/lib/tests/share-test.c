#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Let_3;
static Symbol sym_Var_1;
static Symbol sym_A_0;
static Symbol sym_F_2;
static Symbol sym__3;
static Symbol sym__2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym_Let_3 = ATmakeSymbol("Let", 3, ATfalse);
ATprotectSymbol(sym_Let_3);
sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
ATprotectSymbol(sym_Var_1);
sym_A_0 = ATmakeSymbol("A", 0, ATfalse);
ATprotectSymbol(sym_A_0);
sym_F_2 = ATmakeSymbol("F", 2, ATfalse);
ATprotectSymbol(sym_F_2);
sym__3 = ATmakeSymbol("", 3, ATfalse);
ATprotectSymbol(sym__3);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
static ATerm term45;
static ATerm term44;
static ATerm term43;
static ATerm term42;
static ATerm term41;
static ATerm term40;
static ATerm term39;
static ATerm term38;
static ATerm term37;
static ATerm term36;
static ATerm term35;
static ATerm term34;
static ATerm term33;
static ATerm term32;
static ATerm term31;
static ATerm term30;
static ATerm term29;
static ATerm term28;
static ATerm term27;
static ATerm term26;
static ATerm term25;
static ATerm term24;
static ATerm term23;
static ATerm term22;
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("share-test", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym_A_0);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(sym_F_2, term5, term5);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(sym_F_2, term7, term7);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym_F_2, term7, term9);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("test2", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("test3", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeInt(1077895264);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(sym_Var_1, term17);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(sym__2, term19, term5);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeInt(1076162872);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(sym_Var_1, term23);
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(sym_F_2, term19, term19);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(sym__2, term25, term27);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeInt(1076162888);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(sym_Var_1, term31);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(sym_F_2, term25, term25);
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(sym__2, term33, term35);
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeInt(1076162904);
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(sym_Var_1, term39);
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(sym_F_2, term25, term33);
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(sym__2, term41, term43);
ATprotect(&(term45));
term45 = term44;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm inline_graph_2_0 (StrSL sl, StrCL f_13, StrCL g_13, ATerm t);
ATerm graph_1_0 (StrSL sl, StrCL e_13, ATerm t);
ATerm share_3_0 (StrSL sl, StrCL z_12, StrCL a_13, StrCL b_13, ATerm t);
ATerm apply_and_check_4_0 (StrSL sl, StrCL z_2, StrCL a_3, StrCL b_3, StrCL c_3, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL q_2, StrCL r_2, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
ATerm test3_0_0 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
ATerm test2_0_0 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm test1_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm test3_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test3_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm r_0 = NULL,s_0 = NULL;
sl_init_var(0, r_0);
sl_init_var(1, s_0);
{
struct str_closure o_64 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(o_64);
struct str_closure p_64 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(p_64);
struct str_closure q_64 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(q_64);
struct str_closure r_64 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(r_64);
t = apply_and_check_4_0(sl, lifted14_cl, lifted15_cl, lifted18_cl, lifted19_cl, t);
if((t == NULL))
goto fail16 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Let_3))
{
ATerm trm34 = ATgetArgument(t, 0);
if(match_cons(trm34, sym_Var_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm34, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm34, 0)))
goto fail21 ;
}
else
goto fail21 ;
{
ATerm trm35 = ATgetArgument(t, 1);
if(!(match_cons(trm35, sym_A_0)))
goto fail21 ;
}
{
ATerm trm36 = ATgetArgument(t, 2);
if(match_cons(trm36, sym_Let_3))
{
ATerm trm37 = ATgetArgument(trm36, 0);
if(match_cons(trm37, sym_Var_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm37, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm37, 0)))
goto fail21 ;
}
else
goto fail21 ;
{
ATerm trm38 = ATgetArgument(trm36, 1);
if(match_cons(trm38, sym_F_2))
{
ATerm trm39 = ATgetArgument(trm38, 0);
if(match_cons(trm39, sym_Var_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm39, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm39, 0)))
goto fail21 ;
}
else
goto fail21 ;
{
ATerm trm40 = ATgetArgument(trm38, 1);
if(match_cons(trm40, sym_Var_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm40, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm40, 0)))
goto fail21 ;
}
else
goto fail21 ;
}
}
else
goto fail21 ;
}
{
ATerm trm41 = ATgetArgument(trm36, 2);
if(match_cons(trm41, sym_F_2))
{
ATerm trm42 = ATgetArgument(trm41, 0);
if(match_cons(trm42, sym_Var_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm42, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm42, 0)))
goto fail21 ;
}
else
goto fail21 ;
{
ATerm trm43 = ATgetArgument(trm41, 1);
if(match_cons(trm43, sym_F_2))
{
ATerm trm44 = ATgetArgument(trm43, 0);
if(match_cons(trm44, sym_Var_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm44, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm44, 0)))
goto fail21 ;
}
else
goto fail21 ;
{
ATerm trm45 = ATgetArgument(trm43, 1);
if(match_cons(trm45, sym_Var_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm45, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm45, 0)))
goto fail21 ;
}
else
goto fail21 ;
}
}
else
goto fail21 ;
}
}
else
goto fail21 ;
}
}
else
goto fail21 ;
}
}
else
goto fail21 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term21), term29), term37), term45);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_64 = { &(_Fail) , sl_up(sl) };
StrCL lifted16_cl = &(m_64);
struct str_closure n_64 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(n_64);
t = inline_graph_2_0(sl_up(sl), lifted16_cl, lifted17_cl, t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_0 = NULL,u_0 = NULL,v_0 = NULL;
if(match_cons(t, sym__3))
{
t_0 = ATgetArgument(t, 0);
u_0 = ATgetArgument(t, 1);
v_0 = ATgetArgument(t, 2);
}
else
goto fail19 ;
t = (ATerm) ATmakeAppl(sym_Let_3, t_0, u_0, v_0);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm test2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(4);
{
ATerm m_0 = NULL,n_0 = NULL,o_0 = NULL,p_0 = NULL;
sl_init_var(0, m_0);
sl_init_var(1, n_0);
sl_init_var(2, o_0);
sl_init_var(3, p_0);
{
struct str_closure i_64 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(i_64);
struct str_closure j_64 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(j_64);
struct str_closure k_64 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(k_64);
struct str_closure l_64 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(l_64);
t = apply_and_check_4_0(sl, lifted9_cl, lifted10_cl, lifted12_cl, lifted13_cl, t);
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
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm12 = ATgetFirst((ATermList) t);
if(match_cons(trm12, sym__2))
{
ATerm trm13 = ATgetArgument(trm12, 0);
if(match_cons(trm13, sym_Var_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm13, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm13, 0)))
goto fail15 ;
}
else
goto fail15 ;
{
ATerm trm14 = ATgetArgument(trm12, 1);
if(match_cons(trm14, sym_F_2))
{
ATerm trm15 = ATgetArgument(trm14, 0);
if(match_cons(trm15, sym_Var_1))
{
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = ATgetArgument(trm15, 0);
}
else
if((sl_readvar(2, sl) != ATgetArgument(trm15, 0)))
goto fail15 ;
}
else
goto fail15 ;
{
ATerm trm16 = ATgetArgument(trm14, 1);
if(match_cons(trm16, sym_Var_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm16, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm16, 0)))
goto fail15 ;
}
else
goto fail15 ;
}
}
else
goto fail15 ;
}
}
else
goto fail15 ;
{
ATerm trm17 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm17) == AT_LIST) && !(ATisEmpty(trm17))))
{
ATerm trm18 = ATgetFirst((ATermList) trm17);
if(match_cons(trm18, sym__2))
{
ATerm trm19 = ATgetArgument(trm18, 0);
if(match_cons(trm19, sym_Var_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm19, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm19, 0)))
goto fail15 ;
}
else
goto fail15 ;
{
ATerm trm20 = ATgetArgument(trm18, 1);
if(match_cons(trm20, sym_F_2))
{
ATerm trm21 = ATgetArgument(trm20, 0);
if(match_cons(trm21, sym_Var_1))
{
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = ATgetArgument(trm21, 0);
}
else
if((sl_readvar(2, sl) != ATgetArgument(trm21, 0)))
goto fail15 ;
}
else
goto fail15 ;
{
ATerm trm22 = ATgetArgument(trm20, 1);
if(match_cons(trm22, sym_Var_1))
{
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = ATgetArgument(trm22, 0);
}
else
if((sl_readvar(2, sl) != ATgetArgument(trm22, 0)))
goto fail15 ;
}
else
goto fail15 ;
}
}
else
goto fail15 ;
}
}
else
goto fail15 ;
{
ATerm trm23 = (ATerm) ATgetNext((ATermList) trm17);
if(((ATgetType(trm23) == AT_LIST) && !(ATisEmpty(trm23))))
{
ATerm trm24 = ATgetFirst((ATermList) trm23);
if(match_cons(trm24, sym__2))
{
ATerm trm25 = ATgetArgument(trm24, 0);
if(match_cons(trm25, sym_Var_1))
{
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = ATgetArgument(trm25, 0);
}
else
if((sl_readvar(2, sl) != ATgetArgument(trm25, 0)))
goto fail15 ;
}
else
goto fail15 ;
{
ATerm trm26 = ATgetArgument(trm24, 1);
if(match_cons(trm26, sym_F_2))
{
ATerm trm27 = ATgetArgument(trm26, 0);
if(match_cons(trm27, sym_Var_1))
{
if((sl_readvar(3, sl) == NULL))
{
sl_readvar(3, sl) = ATgetArgument(trm27, 0);
}
else
if((sl_readvar(3, sl) != ATgetArgument(trm27, 0)))
goto fail15 ;
}
else
goto fail15 ;
{
ATerm trm28 = ATgetArgument(trm26, 1);
if(match_cons(trm28, sym_Var_1))
{
if((sl_readvar(3, sl) == NULL))
{
sl_readvar(3, sl) = ATgetArgument(trm28, 0);
}
else
if((sl_readvar(3, sl) != ATgetArgument(trm28, 0)))
goto fail15 ;
}
else
goto fail15 ;
}
}
else
goto fail15 ;
}
}
else
goto fail15 ;
{
ATerm trm29 = (ATerm) ATgetNext((ATermList) trm23);
if(((ATgetType(trm29) == AT_LIST) && !(ATisEmpty(trm29))))
{
ATerm trm30 = ATgetFirst((ATermList) trm29);
if(match_cons(trm30, sym__2))
{
ATerm trm31 = ATgetArgument(trm30, 0);
if(match_cons(trm31, sym_Var_1))
{
if((sl_readvar(3, sl) == NULL))
{
sl_readvar(3, sl) = ATgetArgument(trm31, 0);
}
else
if((sl_readvar(3, sl) != ATgetArgument(trm31, 0)))
goto fail15 ;
}
else
goto fail15 ;
{
ATerm trm32 = ATgetArgument(trm30, 1);
if(!(match_cons(trm32, sym_A_0)))
goto fail15 ;
}
}
else
goto fail15 ;
{
ATerm trm33 = (ATerm) ATgetNext((ATermList) trm29);
if(!(((ATgetType(trm33) == AT_LIST) && ATisEmpty(trm33))))
goto fail15 ;
}
}
else
goto fail15 ;
}
}
else
goto fail15 ;
}
}
else
goto fail15 ;
}
}
else
goto fail15 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_64 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(h_64);
t = graph_1_0(sl_up(sl), lifted11_cl, t);
if((t == NULL))
goto fail12 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_0 = NULL;
q_0 = t;
t = (ATerm) ATmakeAppl(sym_Var_1, q_0);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm test1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm g_0 = NULL,h_0 = NULL;
sl_init_var(0, g_0);
sl_init_var(1, h_0);
{
struct str_closure d_64 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(d_64);
struct str_closure e_64 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(e_64);
struct str_closure f_64 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(f_64);
struct str_closure g_64 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(g_64);
t = apply_and_check_4_0(sl, lifted2_cl, lifted3_cl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail3 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Let_3))
{
ATerm trm0 = ATgetArgument(t, 0);
if(match_cons(trm0, sym_Var_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm0, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm0, 0)))
goto fail9 ;
}
else
goto fail9 ;
{
ATerm trm1 = ATgetArgument(t, 1);
if(!(match_cons(trm1, sym_A_0)))
goto fail9 ;
}
{
ATerm trm2 = ATgetArgument(t, 2);
if(match_cons(trm2, sym_Let_3))
{
ATerm trm3 = ATgetArgument(trm2, 0);
if(match_cons(trm3, sym_Var_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm3, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm3, 0)))
goto fail9 ;
}
else
goto fail9 ;
{
ATerm trm4 = ATgetArgument(trm2, 1);
if(match_cons(trm4, sym_F_2))
{
ATerm trm5 = ATgetArgument(trm4, 0);
if(match_cons(trm5, sym_Var_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm5, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm5, 0)))
goto fail9 ;
}
else
goto fail9 ;
{
ATerm trm6 = ATgetArgument(trm4, 1);
if(match_cons(trm6, sym_Var_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm6, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm6, 0)))
goto fail9 ;
}
else
goto fail9 ;
}
}
else
goto fail9 ;
}
{
ATerm trm7 = ATgetArgument(trm2, 2);
if(match_cons(trm7, sym_F_2))
{
ATerm trm8 = ATgetArgument(trm7, 0);
if(match_cons(trm8, sym_Var_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm8, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm8, 0)))
goto fail9 ;
}
else
goto fail9 ;
{
ATerm trm9 = ATgetArgument(trm7, 1);
if(match_cons(trm9, sym_F_2))
{
ATerm trm10 = ATgetArgument(trm9, 0);
if(match_cons(trm10, sym_Var_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm10, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm10, 0)))
goto fail9 ;
}
else
goto fail9 ;
{
ATerm trm11 = ATgetArgument(trm9, 1);
if(match_cons(trm11, sym_Var_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm11, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm11, 0)))
goto fail9 ;
}
else
goto fail9 ;
}
}
else
goto fail9 ;
}
}
else
goto fail9 ;
}
}
else
goto fail9 ;
}
}
else
goto fail9 ;
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
t = term11;
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
{
struct str_closure a_64 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(a_64);
struct str_closure b_64 = { &(_Fail) , sl_up(sl) };
StrCL lifted5_cl = &(b_64);
struct str_closure c_64 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(c_64);
t = share_3_0(sl_up(sl), lifted4_cl, lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_0 = NULL,k_0 = NULL,l_0 = NULL;
if(match_cons(t, sym__3))
{
j_0 = ATgetArgument(t, 0);
k_0 = ATgetArgument(t, 1);
l_0 = ATgetArgument(t, 2);
}
else
goto fail7 ;
t = (ATerm) ATmakeAppl(sym_Let_3, j_0, k_0, l_0);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_0 = NULL;
i_0 = t;
t = (ATerm) ATmakeAppl(sym_Var_1, i_0);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term3;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_63 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(y_63);
struct str_closure z_63 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(z_63);
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
t = test3_0_0(sl_up(sl), t);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 27));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(inline_graph_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("inline_graph_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(graph_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("graph_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(share_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("share_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_and_check_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_and_check_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_suite_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_suite_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test3_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test3_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test1_0_0", 0, ATtrue)), &(closures[closures_index]));
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
