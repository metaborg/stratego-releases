#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_IndexedSet_1;
static void init_module_constructors (void)
{
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_IndexedSet_1 = ATmakeSymbol("IndexedSet", 1, ATfalse);
ATprotectSymbol(sym_IndexedSet_1);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("Testsuite for IndexedSets", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("new iset", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("iset add two identical elements (2)", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeInt(1);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("iset add", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("iset two elements", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeInt(2);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("iset add two identical elements (1)", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("iset remove 2", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("iset remove", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("iset clear 2", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeInt(3);
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("iset clear 1", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("iset elements (2)", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeInt(4);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("iset elements (1)", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("iset-fixpoint 4", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeInt(5);
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("iset-fixpoint 1", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("iset-fixpoint 2", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("iset-fixpoint 3", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm qsort_1_0 (StrSL sl, StrCL e_43, ATerm t);
ATerm iset_fixpoint_1_0 (StrSL sl, StrCL t_41, ATerm t);
ATerm iset_elements_0_0 (StrSL sl, ATerm t);
ATerm iset_remove_0_1 (StrSL sl, ATerm o_41, ATerm t);
ATerm iset_contains_0_1 (StrSL sl, ATerm n_41, ATerm t);
ATerm iset_add_0_1 (StrSL sl, ATerm l_41, ATerm t);
ATerm iset_clear_0_0 (StrSL sl, ATerm t);
ATerm iset_destroy_0_0 (StrSL sl, ATerm t);
ATerm new_iset_0_0 (StrSL sl, ATerm t);
ATerm lt_0_0 (StrSL sl, ATerm t);
ATerm apply_and_check_4_0 (StrSL sl, StrCL j_6, StrCL k_6, StrCL l_6, StrCL m_6, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL c_6, StrCL d_6, StrCL e_6, StrCL f_6, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL a_6, StrCL b_6, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
ATerm iset_apply_test_3_1 (StrSL sl, StrCL j_4, StrCL k_4, StrCL l_4, ATerm f_4, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
ATerm iset_apply_and_check_4_0 (StrSL sl, StrCL y_3, StrCL z_3, StrCL a_4, StrCL b_4, ATerm t);
ATerm iset_apply_and_check_3_0 (StrSL sl, StrCL s_3, StrCL t_3, StrCL u_3, ATerm t);
ATerm FixPointHelper_0_0 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
ATerm test_fixpoint_0_0 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
ATerm test_elements_0_0 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm test_clear_0_0 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
ATerm test_remove_0_0 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
ATerm test_add_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm iset_apply_test_3_1 (StrSL sl, StrCL j_4, StrCL k_4, StrCL l_4, ATerm f_4, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iset_apply_test_3_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_vars(2);
sl_init_fun(0, l_4);
sl_init_var(0, f_4);
{
ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL;
sl_init_var(1, g_4);
h_4 = t;
t = new_iset_0_0(sl, t);
if((t == NULL))
goto fail57 ;
if((g_4 == NULL))
{
g_4 = t;
}
else
if((g_4 != t))
goto fail57 ;
t = h_4;
{
struct str_closure m_72 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(m_72);
struct str_closure o_72 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(o_72);
t = apply_test_4_0(sl, j_4, k_4, lifted59_cl, lifted60_cl, t);
if((t == NULL))
goto fail57 ;
i_4 = t;
if((g_4 == NULL))
goto fail57 ;
else
{
t = g_4;
}
t = iset_destroy_0_0(sl, t);
if((t == NULL))
goto fail57 ;
t = i_4;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail59 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail58 ;
else
{
t = sl_readvar(1, sl);
}
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail58 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
ATerm iset_apply_and_check_4_0 (StrSL sl, StrCL y_3, StrCL z_3, StrCL a_4, StrCL b_4, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iset_apply_and_check_4_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_vars(1);
sl_init_fun(0, a_4);
{
ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
sl_init_var(0, v_3);
w_3 = t;
t = new_iset_0_0(sl, t);
if((t == NULL))
goto fail55 ;
if((v_3 == NULL))
{
v_3 = t;
}
else
if((v_3 != t))
goto fail55 ;
t = w_3;
{
struct str_closure l_72 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(l_72);
t = apply_and_check_4_0(sl, y_3, z_3, lifted58_cl, b_4, t);
if((t == NULL))
goto fail55 ;
x_3 = t;
if((v_3 == NULL))
goto fail55 ;
else
{
t = v_3;
}
t = iset_destroy_0_0(sl, t);
if((t == NULL))
goto fail55 ;
t = x_3;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail56 ;
else
{
t = sl_readvar(0, sl);
}
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail56 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
ATerm iset_apply_and_check_3_0 (StrSL sl, StrCL s_3, StrCL t_3, StrCL u_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iset_apply_and_check_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_72 = { &(_Id) , sl };
StrCL lifted57_cl = &(j_72);
t = iset_apply_and_check_4_0(sl, s_3, lifted57_cl, t_3, u_3, t);
if((t == NULL))
goto fail54 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
ATerm FixPointHelper_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "FixPointHelper_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm3 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 1))))
goto label5 ;
t = (ATerm) ATinsert(ATinsert(ATempty, term25), term15);
goto label4 ;
label5 :
t = trm3;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 3))))
goto fail53 ;
t = (ATerm) ATinsert(ATempty, term31);
goto label4 ;
label4 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_fixpoint_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_fixpoint_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_2 = NULL,z_2 = NULL,c_3 = NULL,d_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
struct str_closure r_71 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(r_71);
struct str_closure s_71 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(s_71);
struct str_closure t_71 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(t_71);
z_2 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term31), term25), term15), term9);
y_2 = t;
t = z_2;
{
struct str_closure v_71 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(v_71);
struct str_closure w_71 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(w_71);
struct str_closure y_71 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(y_71);
t = iset_apply_test_3_1(sl, lifted41_cl, lifted42_cl, lifted44_cl, y_2, t);
if((t == NULL))
goto fail41 ;
d_3 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term31), term25), term15), term9);
c_3 = t;
t = d_3;
{
struct str_closure a_72 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(a_72);
struct str_closure b_72 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(b_72);
struct str_closure c_72 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(c_72);
t = iset_apply_test_3_1(sl, lifted45_cl, lifted46_cl, lifted48_cl, c_3, t);
if((t == NULL))
goto fail41 ;
n_3 = t;
t = (ATerm) ATempty;
m_3 = t;
t = n_3;
{
struct str_closure f_72 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(f_72);
struct str_closure g_72 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(g_72);
struct str_closure i_72 = { &(_Id) , sl };
StrCL lifted52_cl = &(i_72);
t = iset_apply_test_3_1(sl, lifted49_cl, lifted50_cl, lifted52_cl, m_3, t);
if((t == NULL))
goto fail41 ;
p_3 = t;
t = (ATerm) ATinsert(ATempty, term37);
o_3 = t;
t = p_3;
t = iset_apply_test_3_1(sl, lifted53_cl, lifted54_cl, lifted56_cl, o_3, t);
if((t == NULL))
goto fail41 ;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_72 = { &(FixPointHelper_0_0) , sl_up(sl) };
StrCL lifted51_cl = &(d_72);
t = iset_fixpoint_1_0(sl_up(sl), lifted51_cl, t);
if((t == NULL))
goto fail52 ;
t = iset_elements_0_0(sl_up(sl), t);
if((t == NULL))
goto fail52 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL;
f_3 = t;
t = term9;
e_3 = t;
t = f_3;
t = iset_add_0_1(sl_up(sl), e_3, t);
if((t == NULL))
goto fail50 ;
h_3 = t;
t = term15;
g_3 = t;
t = h_3;
t = iset_add_0_1(sl_up(sl), g_3, t);
if((t == NULL))
goto fail50 ;
j_3 = t;
t = term25;
i_3 = t;
t = j_3;
t = iset_add_0_1(sl_up(sl), i_3, t);
if((t == NULL))
goto fail50 ;
l_3 = t;
t = term31;
k_3 = t;
t = l_3;
t = iset_add_0_1(sl_up(sl), k_3, t);
if((t == NULL))
goto fail50 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_71 = { &(FixPointHelper_0_0) , sl_up(sl) };
StrCL lifted47_cl = &(z_71);
t = iset_fixpoint_1_0(sl_up(sl), lifted47_cl, t);
if((t == NULL))
goto fail49 ;
t = iset_elements_0_0(sl_up(sl), t);
if((t == NULL))
goto fail49 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_3 = NULL,b_3 = NULL;
b_3 = t;
t = term9;
a_3 = t;
t = b_3;
t = iset_add_0_1(sl_up(sl), a_3, t);
if((t == NULL))
goto fail47 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_71 = { &(FixPointHelper_0_0) , sl_up(sl) };
StrCL lifted43_cl = &(u_71);
t = iset_fixpoint_1_0(sl_up(sl), lifted43_cl, t);
if((t == NULL))
goto fail46 ;
t = iset_elements_0_0(sl_up(sl), t);
if((t == NULL))
goto fail46 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_3 = NULL,r_3 = NULL;
r_3 = t;
t = term37;
q_3 = t;
t = r_3;
t = iset_add_0_1(sl_up(sl), q_3, t);
if((t == NULL))
goto fail44 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_71 = { &(FixPointHelper_0_0) , sl_up(sl) };
StrCL lifted55_cl = &(p_71);
t = iset_fixpoint_1_0(sl_up(sl), lifted55_cl, t);
if((t == NULL))
goto fail43 ;
t = iset_elements_0_0(sl_up(sl), t);
if((t == NULL))
goto fail43 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term35;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_elements_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_elements_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_2 = NULL,h_2 = NULL,m_2 = NULL,n_2 = NULL;
struct str_closure h_71 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(h_71);
struct str_closure i_71 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(i_71);
struct str_closure k_71 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(k_71);
h_2 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, term15), term9);
g_2 = t;
t = h_2;
{
struct str_closure m_71 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(m_71);
struct str_closure n_71 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(n_71);
struct str_closure o_71 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(o_71);
t = iset_apply_test_3_1(sl, lifted33_cl, lifted34_cl, lifted36_cl, g_2, t);
if((t == NULL))
goto fail34 ;
n_2 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term31), term25), term9);
m_2 = t;
t = n_2;
t = iset_apply_test_3_1(sl, lifted37_cl, lifted38_cl, lifted40_cl, m_2, t);
if((t == NULL))
goto fail34 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
j_2 = t;
t = term9;
i_2 = t;
t = j_2;
t = iset_add_0_1(sl_up(sl), i_2, t);
if((t == NULL))
goto fail40 ;
l_2 = t;
t = term15;
k_2 = t;
t = l_2;
t = iset_add_0_1(sl_up(sl), k_2, t);
if((t == NULL))
goto fail40 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_71 = { &(lt_0_0) , sl_up(sl) };
StrCL lifted35_cl = &(l_71);
t = iset_elements_0_0(sl_up(sl), t);
if((t == NULL))
goto fail39 ;
t = qsort_1_0(sl_up(sl), lifted35_cl, t);
if((t == NULL))
goto fail39 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
p_2 = t;
t = term9;
o_2 = t;
t = p_2;
t = iset_add_0_1(sl_up(sl), o_2, t);
if((t == NULL))
goto fail37 ;
r_2 = t;
t = term15;
q_2 = t;
t = r_2;
t = iset_add_0_1(sl_up(sl), q_2, t);
if((t == NULL))
goto fail37 ;
t_2 = t;
t = term25;
s_2 = t;
t = t_2;
t = iset_add_0_1(sl_up(sl), s_2, t);
if((t == NULL))
goto fail37 ;
v_2 = t;
t = term15;
u_2 = t;
t = v_2;
t = iset_remove_0_1(sl_up(sl), u_2, t);
if((t == NULL))
goto fail37 ;
x_2 = t;
t = term31;
w_2 = t;
t = x_2;
t = iset_add_0_1(sl_up(sl), w_2, t);
if((t == NULL))
goto fail37 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_71 = { &(lt_0_0) , sl_up(sl) };
StrCL lifted39_cl = &(g_71);
t = iset_elements_0_0(sl_up(sl), t);
if((t == NULL))
goto fail36 ;
t = qsort_1_0(sl_up(sl), lifted39_cl, t);
if((t == NULL))
goto fail36 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_clear_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_clear_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_1 = NULL,t_1 = NULL,y_1 = NULL,z_1 = NULL;
struct str_closure z_70 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(z_70);
struct str_closure a_71 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(a_71);
struct str_closure b_71 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(b_71);
t_1 = t;
t = (ATerm) ATempty;
s_1 = t;
t = t_1;
{
struct str_closure d_71 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(d_71);
struct str_closure e_71 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(e_71);
struct str_closure f_71 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(f_71);
t = iset_apply_test_3_1(sl, lifted27_cl, lifted28_cl, lifted29_cl, s_1, t);
if((t == NULL))
goto fail27 ;
z_1 = t;
t = (ATerm) ATinsert(ATempty, term25);
y_1 = t;
t = z_1;
t = iset_apply_test_3_1(sl, lifted30_cl, lifted31_cl, lifted32_cl, y_1, t);
if((t == NULL))
goto fail27 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL;
v_1 = t;
t = term9;
u_1 = t;
t = v_1;
t = iset_add_0_1(sl_up(sl), u_1, t);
if((t == NULL))
goto fail33 ;
x_1 = t;
t = term15;
w_1 = t;
t = x_1;
t = iset_add_0_1(sl_up(sl), w_1, t);
if((t == NULL))
goto fail33 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = iset_clear_0_0(sl_up(sl), t);
if((t == NULL))
goto fail32 ;
t = iset_elements_0_0(sl_up(sl), t);
if((t == NULL))
goto fail32 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
d_2 = t;
t = term9;
c_2 = t;
t = d_2;
t = iset_add_0_1(sl_up(sl), c_2, t);
if((t == NULL))
goto fail30 ;
f_2 = t;
t = term15;
e_2 = t;
t = f_2;
t = iset_add_0_1(sl_up(sl), e_2, t);
if((t == NULL))
goto fail30 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_2 = NULL,b_2 = NULL;
t = iset_clear_0_0(sl_up(sl), t);
if((t == NULL))
goto fail29 ;
b_2 = t;
t = term25;
a_2 = t;
t = b_2;
t = iset_add_0_1(sl_up(sl), a_2, t);
if((t == NULL))
goto fail29 ;
t = iset_elements_0_0(sl_up(sl), t);
if((t == NULL))
goto fail29 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_remove_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_remove_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_70 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(q_70);
struct str_closure r_70 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(r_70);
struct str_closure s_70 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(s_70);
struct str_closure t_70 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(t_70);
struct str_closure u_70 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(u_70);
struct str_closure w_70 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(w_70);
struct str_closure x_70 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(x_70);
struct str_closure y_70 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(y_70);
t = iset_apply_and_check_4_0(sl, lifted19_cl, lifted20_cl, lifted21_cl, lifted22_cl, t);
if((t == NULL))
goto fail18 ;
t = iset_apply_and_check_4_0(sl, lifted23_cl, lifted24_cl, lifted25_cl, lifted26_cl, t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm2 = t;
ATerm g_1 = NULL,h_1 = NULL;
h_1 = t;
t = term9;
g_1 = t;
t = h_1;
t = iset_contains_0_1(sl_up(sl), g_1, t);
if((t == NULL))
goto label3 ;
goto fail26 ;
label3 :
t = trm2;
goto label2 ;
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_1 = NULL,f_1 = NULL;
f_1 = t;
t = term9;
e_1 = t;
t = f_1;
t = iset_add_0_1(sl_up(sl), e_1, t);
if((t == NULL))
goto fail25 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_1 = NULL,d_1 = NULL;
d_1 = t;
t = term9;
c_1 = t;
t = d_1;
t = iset_remove_0_1(sl_up(sl), c_1, t);
if((t == NULL))
goto fail24 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_1 = NULL,r_1 = NULL;
ATerm trm1 = t;
ATerm o_1 = NULL,p_1 = NULL;
p_1 = t;
t = term9;
o_1 = t;
t = p_1;
t = iset_contains_0_1(sl_up(sl), o_1, t);
if((t == NULL))
goto label1 ;
goto fail22 ;
label1 :
t = trm1;
goto label0 ;
label0 :
;
r_1 = t;
t = term15;
q_1 = t;
t = r_1;
t = iset_contains_0_1(sl_up(sl), q_1, t);
if((t == NULL))
goto fail22 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
l_1 = t;
t = term9;
k_1 = t;
t = l_1;
t = iset_add_0_1(sl_up(sl), k_1, t);
if((t == NULL))
goto fail21 ;
n_1 = t;
t = term15;
m_1 = t;
t = n_1;
t = iset_add_0_1(sl_up(sl), m_1, t);
if((t == NULL))
goto fail21 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_1 = NULL,j_1 = NULL;
j_1 = t;
t = term9;
i_1 = t;
t = j_1;
t = iset_remove_0_1(sl_up(sl), i_1, t);
if((t == NULL))
goto fail20 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_add_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_add_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_0 = NULL,x_0 = NULL,n_69 = NULL,w_69 = NULL;
struct str_closure d_70 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(d_70);
struct str_closure e_70 = { &(_Id) , sl };
StrCL lifted17_cl = &(e_70);
struct str_closure f_70 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(f_70);
struct str_closure g_70 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(g_70);
struct str_closure h_70 = { &(_Id) , sl };
StrCL lifted7_cl = &(h_70);
struct str_closure i_70 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(i_70);
struct str_closure j_70 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(j_70);
t = iset_apply_and_check_4_0(sl, lifted6_cl, lifted7_cl, lifted8_cl, lifted9_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure k_70 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(k_70);
struct str_closure l_70 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(l_70);
struct str_closure m_70 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(m_70);
t = iset_apply_and_check_3_0(sl, lifted10_cl, lifted11_cl, lifted12_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure n_70 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(n_70);
struct str_closure o_70 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(o_70);
struct str_closure p_70 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(p_70);
t = iset_apply_and_check_3_0(sl, lifted13_cl, lifted14_cl, lifted15_cl, t);
if((t == NULL))
goto fail6 ;
x_0 = t;
t = (ATerm) ATinsert(ATempty, term9);
w_0 = t;
t = x_0;
w_69 = t;
t = w_0;
n_69 = t;
t = w_69;
t = iset_apply_test_3_1(sl, lifted16_cl, lifted17_cl, lifted18_cl, n_69, t);
if((t == NULL))
goto fail6 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_0 = NULL,v_0 = NULL;
v_0 = t;
t = term9;
u_0 = t;
t = v_0;
t = iset_contains_0_1(sl_up(sl), u_0, t);
if((t == NULL))
goto fail17 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL;
r_0 = t;
t = term9;
q_0 = t;
t = r_0;
t = iset_add_0_1(sl_up(sl), q_0, t);
if((t == NULL))
goto fail16 ;
t_0 = t;
t = term9;
s_0 = t;
t = t_0;
t = iset_add_0_1(sl_up(sl), s_0, t);
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
t = term17;
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
{
ATerm m_0 = NULL,n_0 = NULL,o_0 = NULL,p_0 = NULL;
n_0 = t;
t = term9;
m_0 = t;
t = n_0;
t = iset_contains_0_1(sl_up(sl), m_0, t);
if((t == NULL))
goto fail14 ;
p_0 = t;
t = term15;
o_0 = t;
t = p_0;
t = iset_contains_0_1(sl_up(sl), o_0, t);
if((t == NULL))
goto fail14 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_0 = NULL,j_0 = NULL,k_0 = NULL,l_0 = NULL;
j_0 = t;
t = term9;
i_0 = t;
t = j_0;
t = iset_add_0_1(sl_up(sl), i_0, t);
if((t == NULL))
goto fail13 ;
l_0 = t;
t = term15;
k_0 = t;
t = l_0;
t = iset_add_0_1(sl_up(sl), k_0, t);
if((t == NULL))
goto fail13 ;
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
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_69 = NULL,m_69 = NULL;
m_69 = t;
t = term9;
l_69 = t;
t = m_69;
t = iset_contains_0_1(sl_up(sl), l_69, t);
if((t == NULL))
goto fail11 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_69 = NULL,k_69 = NULL;
k_69 = t;
t = term9;
j_69 = t;
t = k_69;
t = iset_add_0_1(sl_up(sl), j_69, t);
if((t == NULL))
goto fail10 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
t_69 = t;
t = term9;
q_69 = t;
t = t_69;
t = iset_add_0_1(sl_up(sl), q_69, t);
if((t == NULL))
goto fail8 ;
v_69 = t;
t = term9;
u_69 = t;
t = v_69;
t = iset_add_0_1(sl_up(sl), u_69, t);
if((t == NULL))
goto fail8 ;
t = iset_elements_0_0(sl_up(sl), t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_70 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(b_70);
struct str_closure c_70 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(c_70);
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
{
struct str_closure x_69 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(x_69);
struct str_closure y_69 = { &(new_iset_0_0) , sl_up(sl) };
StrCL lifted3_cl = &(y_69);
struct str_closure z_69 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(z_69);
struct str_closure a_70 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(a_70);
t = apply_and_check_4_0(sl_up(sl), lifted2_cl, lifted3_cl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto fail2 ;
t = test_add_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_remove_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_clear_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_elements_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_fixpoint_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_IndexedSet_1))
{
ATerm trm0 = ATgetArgument(t, 0);
}
else
goto fail5 ;
t = iset_destroy_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail5 ;
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
t = term5;
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
t = term3;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 73));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(qsort_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("qsort_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iset_fixpoint_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iset_fixpoint_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iset_elements_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iset_elements_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iset_remove_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iset_remove_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iset_contains_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iset_contains_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iset_add_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iset_add_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iset_clear_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iset_clear_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iset_destroy_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iset_destroy_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(new_iset_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("new_iset_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_and_check_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_and_check_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_test_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_test_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_suite_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_suite_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted59);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted59", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iset_apply_test_3_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iset_apply_test_3_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted58);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted58", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iset_apply_and_check_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iset_apply_and_check_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iset_apply_and_check_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iset_apply_and_check_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(FixPointHelper_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("FixPointHelper_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted50);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted50", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted49);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted49", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted48);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted48", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted46);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted46", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted45);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted45", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted44);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted44", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted56);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted56", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted54);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted54", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted53);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted53", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_fixpoint_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_fixpoint_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted34);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted34", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted33);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted33", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted38);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted38", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted37);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted37", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_elements_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_elements_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_clear_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_clear_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted22", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted26);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted26", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted25);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted25", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted24);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted24", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_remove_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_remove_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_add_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_add_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
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
