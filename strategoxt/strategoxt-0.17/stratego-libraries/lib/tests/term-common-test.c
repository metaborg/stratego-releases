#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_C_0;
static Symbol sym_B_1;
static Symbol sym_A_2;
static Symbol sym__2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym_C_0 = ATmakeSymbol("C", 0, ATfalse);
ATprotectSymbol(sym_C_0);
sym_B_1 = ATmakeSymbol("B", 1, ATfalse);
ATprotectSymbol(sym_B_1);
sym_A_2 = ATmakeSymbol("A", 2, ATfalse);
ATprotectSymbol(sym_A_2);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
static ATerm term53;
static ATerm term52;
static ATerm term51;
static ATerm term50;
static ATerm term49;
static ATerm term48;
static ATerm term47;
static ATerm term46;
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("term-common-test", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("get-constructor 3", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeInt(1);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeInt(2);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(sym_A_2, term5, term7);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("A", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("get-constructor 1", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(sym_C_0);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("C", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("get-constructor 2", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(sym_B_1, term5);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("B", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-arguments 3", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("get-arguments 1", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("get-arguments 2", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("get-appl-arguments 6", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeInt(3);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("get-appl-arguments 1", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("get-appl-arguments 2", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("get-appl-arguments 3", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("get-appl-arguments 4", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("get-appl-arguments 5", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("checksum 2", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(sym_B_1, term7);
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(sym__2, term21, term47);
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("checksum 1", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(sym__2, term15, term15);
ATprotect(&(term53));
term53 = term52;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm _2_0 (StrSL sl, StrCL c_50, StrCL d_50, ATerm t);
ATerm checksum_0_0 (StrSL sl, ATerm t);
ATerm get_appl_arguments_1_0 (StrSL sl, StrCL x_12, ATerm t);
ATerm get_appl_arguments_0_0 (StrSL sl, ATerm t);
ATerm get_arguments_0_0 (StrSL sl, ATerm t);
ATerm get_constructor_0_0 (StrSL sl, ATerm t);
ATerm inc_0_0 (StrSL sl, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL z_1, StrCL a_2, StrCL b_2, StrCL c_2, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL x_1, StrCL y_1, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
ATerm checksum_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
ATerm get_appl_arguments_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
ATerm get_arguments_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
ATerm get_constructor_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm checksum_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "checksum_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_65 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(d_65);
struct str_closure e_65 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(e_65);
struct str_closure j_65 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(j_65);
struct str_closure k_65 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(k_65);
struct str_closure u_65 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(u_65);
struct str_closure v_65 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(v_65);
struct str_closure g_66 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(g_66);
struct str_closure h_66 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(h_66);
t = apply_test_4_0(sl, lifted53_cl, lifted54_cl, lifted57_cl, lifted58_cl, t);
if((t == NULL))
goto fail45 ;
t = apply_test_4_0(sl, lifted59_cl, lifted60_cl, lifted63_cl, lifted64_cl, t);
if((t == NULL))
goto fail45 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_0 = NULL;
if(match_cons(t, sym__2))
{
d_0 = ATgetArgument(t, 0);
if(!((d_0 == ATgetArgument(t, 1))))
goto fail53 ;
}
else
goto fail53 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_65 = { &(checksum_0_0) , sl_up(sl) };
StrCL lifted55_cl = &(l_65);
struct str_closure m_65 = { &(checksum_0_0) , sl_up(sl) };
StrCL lifted56_cl = &(m_65);
t = _2_0(sl_up(sl), lifted55_cl, lifted56_cl, t);
if((t == NULL))
goto fail51 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_0 = NULL,f_0 = NULL;
if(match_cons(t, sym__2))
{
e_0 = ATgetArgument(t, 0);
f_0 = ATgetArgument(t, 1);
}
else
goto fail49 ;
{
ATerm trm0 = t;
t = e_0;
if(!((f_0 == t)))
goto label1 ;
goto fail49 ;
label1 :
t = trm0;
goto label0 ;
label0 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term49;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_64 = { &(checksum_0_0) , sl_up(sl) };
StrCL lifted61_cl = &(z_64);
struct str_closure a_65 = { &(checksum_0_0) , sl_up(sl) };
StrCL lifted62_cl = &(a_65);
t = _2_0(sl_up(sl), lifted61_cl, lifted62_cl, t);
if((t == NULL))
goto fail47 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term45;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_appl_arguments_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_appl_arguments_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_63 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(z_63);
struct str_closure a_64 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(a_64);
struct str_closure b_64 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(b_64);
struct str_closure c_64 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(c_64);
struct str_closure d_64 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(d_64);
struct str_closure e_64 = { &(get_appl_arguments_0_0) , sl };
StrCL lifted27_cl = &(e_64);
struct str_closure f_64 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(f_64);
struct str_closure g_64 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(g_64);
t = apply_test_4_0(sl, lifted26_cl, lifted27_cl, lifted28_cl, lifted29_cl, t);
if((t == NULL))
goto fail23 ;
{
struct str_closure h_64 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(h_64);
struct str_closure i_64 = { &(get_appl_arguments_0_0) , sl };
StrCL lifted31_cl = &(i_64);
struct str_closure j_64 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(j_64);
struct str_closure k_64 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(k_64);
t = apply_test_4_0(sl, lifted30_cl, lifted31_cl, lifted32_cl, lifted33_cl, t);
if((t == NULL))
goto fail23 ;
{
struct str_closure l_64 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(l_64);
struct str_closure m_64 = { &(get_appl_arguments_0_0) , sl };
StrCL lifted35_cl = &(m_64);
struct str_closure n_64 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(n_64);
struct str_closure o_64 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(o_64);
t = apply_test_4_0(sl, lifted34_cl, lifted35_cl, lifted36_cl, lifted37_cl, t);
if((t == NULL))
goto fail23 ;
{
struct str_closure q_64 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(q_64);
struct str_closure r_64 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(r_64);
struct str_closure s_64 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(s_64);
struct str_closure t_64 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(t_64);
t = apply_test_4_0(sl, lifted38_cl, lifted39_cl, lifted41_cl, lifted42_cl, t);
if((t == NULL))
goto fail23 ;
{
struct str_closure v_64 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(v_64);
struct str_closure w_64 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(w_64);
struct str_closure x_64 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(x_64);
struct str_closure y_64 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(y_64);
t = apply_test_4_0(sl, lifted43_cl, lifted44_cl, lifted46_cl, lifted47_cl, t);
if((t == NULL))
goto fail23 ;
t = apply_test_4_0(sl, lifted48_cl, lifted49_cl, lifted51_cl, lifted52_cl, t);
if((t == NULL))
goto fail23 ;
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_64 = { &(inc_0_0) , sl_up(sl) };
StrCL lifted45_cl = &(u_64);
t = get_appl_arguments_1_0(sl_up(sl), lifted45_cl, t);
if((t == NULL))
goto fail42 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_64 = { &(inc_0_0) , sl_up(sl) };
StrCL lifted40_cl = &(p_64);
t = get_appl_arguments_1_0(sl_up(sl), lifted40_cl, t);
if((t == NULL))
goto fail38 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term7), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term37;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term35;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term33), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_63 = { &(inc_0_0) , sl_up(sl) };
StrCL lifted50_cl = &(y_63);
t = get_appl_arguments_1_0(sl_up(sl), lifted50_cl, t);
if((t == NULL))
goto fail25 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_arguments_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_arguments_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_63 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(m_63);
struct str_closure n_63 = { &(get_arguments_0_0) , sl };
StrCL lifted23_cl = &(n_63);
struct str_closure o_63 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(o_63);
struct str_closure p_63 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(p_63);
struct str_closure q_63 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(q_63);
struct str_closure r_63 = { &(get_arguments_0_0) , sl };
StrCL lifted15_cl = &(r_63);
struct str_closure s_63 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(s_63);
struct str_closure t_63 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(t_63);
t = apply_test_4_0(sl, lifted14_cl, lifted15_cl, lifted16_cl, lifted17_cl, t);
if((t == NULL))
goto fail13 ;
{
struct str_closure u_63 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(u_63);
struct str_closure v_63 = { &(get_arguments_0_0) , sl };
StrCL lifted19_cl = &(v_63);
struct str_closure w_63 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(w_63);
struct str_closure x_63 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(x_63);
t = apply_test_4_0(sl, lifted18_cl, lifted19_cl, lifted20_cl, lifted21_cl, t);
if((t == NULL))
goto fail13 ;
t = apply_test_4_0(sl, lifted22_cl, lifted23_cl, lifted24_cl, lifted25_cl, t);
if((t == NULL))
goto fail13 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
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
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term7), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term25;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_constructor_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_constructor_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_63 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(a_63);
struct str_closure b_63 = { &(get_constructor_0_0) , sl };
StrCL lifted11_cl = &(b_63);
struct str_closure c_63 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(c_63);
struct str_closure d_63 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(d_63);
struct str_closure e_63 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(e_63);
struct str_closure f_63 = { &(get_constructor_0_0) , sl };
StrCL lifted3_cl = &(f_63);
struct str_closure g_63 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(g_63);
struct str_closure h_63 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(h_63);
t = apply_test_4_0(sl, lifted2_cl, lifted3_cl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure i_63 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(i_63);
struct str_closure j_63 = { &(get_constructor_0_0) , sl };
StrCL lifted7_cl = &(j_63);
struct str_closure k_63 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(k_63);
struct str_closure l_63 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(l_63);
t = apply_test_4_0(sl, lifted6_cl, lifted7_cl, lifted8_cl, lifted9_cl, t);
if((t == NULL))
goto fail3 ;
t = apply_test_4_0(sl, lifted10_cl, lifted11_cl, lifted12_cl, lifted13_cl, t);
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
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term17;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
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
struct str_closure x_62 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(x_62);
struct str_closure y_62 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(y_62);
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
t = get_constructor_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = get_arguments_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = get_appl_arguments_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = checksum_tests_0_0(sl_up(sl), t);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 63));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(checksum_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("checksum_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_appl_arguments_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_appl_arguments_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_appl_arguments_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_appl_arguments_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_arguments_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_arguments_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_constructor_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_constructor_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(inc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("inc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_test_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_test_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_suite_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_suite_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted58);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted58", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted57);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted57", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted54);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted54", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted53);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted53", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted64);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted64", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted63);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted63", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted59);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted59", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(checksum_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("checksum_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted46);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted46", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted44);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted44", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted43);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted43", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted39);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted39", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted38);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted38", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted37);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted37", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted26);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted26", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted52);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted52", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted51);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted51", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted49);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted49", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted48);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted48", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_appl_arguments_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_appl_arguments_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted25);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted25", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted24);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted24", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted22", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_arguments_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_arguments_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_constructor_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_constructor_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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