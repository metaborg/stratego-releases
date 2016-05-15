#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Var_1;
static Symbol sym_Plus_2;
static Symbol sym_Assign_2;
static Symbol sym_C_0;
static Symbol sym_B_0;
static Symbol sym_A_0;
static Symbol sym_I_1;
static Symbol sym_H_2;
static Symbol sym_G_2;
static Symbol sym_F_2;
static Symbol sym__2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
ATprotectSymbol(sym_Var_1);
sym_Plus_2 = ATmakeSymbol("Plus", 2, ATfalse);
ATprotectSymbol(sym_Plus_2);
sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
ATprotectSymbol(sym_Assign_2);
sym_C_0 = ATmakeSymbol("C", 0, ATfalse);
ATprotectSymbol(sym_C_0);
sym_B_0 = ATmakeSymbol("B", 0, ATfalse);
ATprotectSymbol(sym_B_0);
sym_A_0 = ATmakeSymbol("A", 0, ATfalse);
ATprotectSymbol(sym_A_0);
sym_I_1 = ATmakeSymbol("I", 1, ATfalse);
ATprotectSymbol(sym_I_1);
sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
ATprotectSymbol(sym_H_2);
sym_G_2 = ATmakeSymbol("G", 2, ATfalse);
ATprotectSymbol(sym_G_2);
sym_F_2 = ATmakeSymbol("F", 2, ATfalse);
ATprotectSymbol(sym_F_2);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
static ATerm term121;
static ATerm term120;
static ATerm term119;
static ATerm term118;
static ATerm term117;
static ATerm term116;
static ATerm term115;
static ATerm term114;
static ATerm term113;
static ATerm term112;
static ATerm term111;
static ATerm term110;
static ATerm term109;
static ATerm term108;
static ATerm term107;
static ATerm term106;
static ATerm term105;
static ATerm term104;
static ATerm term103;
static ATerm term102;
static ATerm term101;
static ATerm term100;
static ATerm term99;
static ATerm term98;
static ATerm term97;
static ATerm term96;
static ATerm term95;
static ATerm term94;
static ATerm term93;
static ATerm term92;
static ATerm term91;
static ATerm term90;
static ATerm term89;
static ATerm term88;
static ATerm term87;
static ATerm term86;
static ATerm term85;
static ATerm term84;
static ATerm term83;
static ATerm term82;
static ATerm term81;
static ATerm term80;
static ATerm term79;
static ATerm term78;
static ATerm term77;
static ATerm term76;
static ATerm term75;
static ATerm term74;
static ATerm term73;
static ATerm term72;
static ATerm term71;
static ATerm term70;
static ATerm term69;
static ATerm term68;
static ATerm term67;
static ATerm term66;
static ATerm term65;
static ATerm term64;
static ATerm term63;
static ATerm term62;
static ATerm term61;
static ATerm term60;
static ATerm term59;
static ATerm term58;
static ATerm term57;
static ATerm term56;
static ATerm term55;
static ATerm term54;
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("collect-test", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("occurences test 2", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("z", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(sym_Var_1, term5);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeInt(1);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("om occurences test 1", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(sym_Var_1, term13);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym_Var_1, term15);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(sym_Var_1, term17);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(sym_Plus_2, term19, term7);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeInt(2);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("om occurences test 2", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("occurences test 1", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeInt(4);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("collect split tests 3", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(sym_A_0);
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeReal(3.0);
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(sym_H_2, term35, term37);
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(sym_G_2, term33, term39);
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(sym_C_0);
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(sym_H_2, term9, term43);
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(sym_F_2, term41, term45);
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(sym_I_1, term35);
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(sym_G_2, term33, term49);
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(sym_I_1, term9);
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(sym_F_2, term51, term53);
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("collect split tests 1", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(sym_B_0);
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(sym_H_2, term35, term59);
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(sym_G_2, term35, term61);
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(sym_H_2, term59, term43);
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(sym_F_2, term63, term65);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(sym_G_2, term35, term49);
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(sym_I_1, term59);
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(sym_F_2, term69, term71);
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("collect split tests 2", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("Test1", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("Test2", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("collect-om test", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(sym_G_2, term35, term59);
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(sym_G_2, term35, term83);
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(sym_G_2, term59, term43);
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(sym_F_2, term85, term87);
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("collect-all skip test 3", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(sym_Var_1, term93);
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(sym_Assign_2, term15, term95);
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("collect-all test", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("collect-all skip test 1", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(sym_Plus_2, term95, term7);
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(sym_Assign_2, term15, term103);
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("collect-all skip test 2", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(sym_Plus_2, term7, term7);
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(sym_Assign_2, term15, term109);
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("crush test 2", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("crush test 1", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("collect test with skip argument", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(sym_F_2, term87, term83);
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(sym_H_2, term85, term119);
ATprotect(&(term121));
term121 = term120;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm union_0_0 (StrSL sl, ATerm t);
ATerm Snd_0_0 (StrSL sl, ATerm t);
ATerm Fst_0_0 (StrSL sl, ATerm t);
ATerm collect_2_0 (StrSL sl, StrCL g_26, StrCL h_26, ATerm t);
ATerm collect_split_2_0 (StrSL sl, StrCL u_25, StrCL v_25, ATerm t);
ATerm collect_om_1_0 (StrSL sl, StrCL n_25, ATerm t);
ATerm collect_all_3_0 (StrSL sl, StrCL k_25, StrCL l_25, StrCL m_25, ATerm t);
ATerm collect_all_1_0 (StrSL sl, StrCL h_25, ATerm t);
ATerm occurrences_1_0 (StrSL sl, StrCL w_14, ATerm t);
ATerm om_occurrences_1_0 (StrSL sl, StrCL v_14, ATerm t);
ATerm crush_3_0 (StrSL sl, StrCL q_14, StrCL r_14, StrCL s_14, ATerm t);
ATerm crush_2_0 (StrSL sl, StrCL o_14, StrCL p_14, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL o_3, StrCL p_3, StrCL q_3, StrCL r_3, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL m_3, StrCL n_3, ATerm t);
ATerm G_2_0 (StrSL sl, StrCL o_1, StrCL p_1, ATerm t);
ATerm F_2_0 (StrSL sl, StrCL m_1, StrCL n_1, ATerm t);
ATerm not_under_f_2_0 (StrSL sl, StrCL k_1, StrCL l_1, ATerm t);
static ATerm lifted94 (StrSL sl, ATerm t);
static ATerm lifted93 (StrSL sl, ATerm t);
static ATerm lifted89 (StrSL sl, ATerm t);
static ATerm lifted88 (StrSL sl, ATerm t);
static ATerm lifted87 (StrSL sl, ATerm t);
ATerm collect_legacy_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted79 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
static ATerm lifted86 (StrSL sl, ATerm t);
static ATerm lifted85 (StrSL sl, ATerm t);
static ATerm lifted84 (StrSL sl, ATerm t);
static ATerm b_1 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
ATerm crush_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
ATerm collect_all_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
ATerm collect_om_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
ATerm collect_split_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
ATerm occurrences_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm G_2_0 (StrSL sl, StrCL o_1, StrCL p_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "G_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_64 = NULL,k_64 = NULL,l_64 = NULL,n_64 = NULL,o_64 = NULL;
ATerm trm13;
trm13 = (ATerm) ATgetAnnotations(t);
if((trm13 == NULL))
trm13 = (ATerm) ATempty;
if(match_cons(t, sym_G_2))
{
k_64 = ATgetArgument(t, 0);
l_64 = ATgetArgument(t, 1);
}
else
goto fail93 ;
m_64 = trm13;
t = k_64;
t = cl_fun(o_1)(cl_sl(o_1), t);
if((t == NULL))
goto fail93 ;
n_64 = t;
t = l_64;
t = cl_fun(p_1)(cl_sl(p_1), t);
if((t == NULL))
goto fail93 ;
o_64 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_G_2, n_64, o_64), m_64);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
ATerm F_2_0 (StrSL sl, StrCL m_1, StrCL n_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "F_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_64 = NULL,f_64 = NULL,g_64 = NULL,i_64 = NULL,j_64 = NULL;
ATerm trm12;
trm12 = (ATerm) ATgetAnnotations(t);
if((trm12 == NULL))
trm12 = (ATerm) ATempty;
if(match_cons(t, sym_F_2))
{
f_64 = ATgetArgument(t, 0);
g_64 = ATgetArgument(t, 1);
}
else
goto fail92 ;
h_64 = trm12;
t = f_64;
t = cl_fun(m_1)(cl_sl(m_1), t);
if((t == NULL))
goto fail92 ;
i_64 = t;
t = g_64;
t = cl_fun(n_1)(cl_sl(n_1), t);
if((t == NULL))
goto fail92 ;
j_64 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_F_2, i_64, j_64), h_64);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
ATerm not_under_f_2_0 (StrSL sl, StrCL k_1, StrCL l_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "not_under_f_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = F_2_0(sl, l_1, k_1, t);
if((t == NULL))
goto fail91 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
ATerm collect_legacy_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "collect_legacy_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_71 = { &(lifted87) , &(frame) };
StrCL lifted87_cl = &(t_71);
struct str_closure u_71 = { &(lifted88) , &(frame) };
StrCL lifted88_cl = &(u_71);
struct str_closure v_71 = { &(lifted93) , &(frame) };
StrCL lifted93_cl = &(v_71);
struct str_closure w_71 = { &(lifted94) , &(frame) };
StrCL lifted94_cl = &(w_71);
t = apply_test_4_0(sl, lifted87_cl, lifted88_cl, lifted93_cl, lifted94_cl, t);
if((t == NULL))
goto fail85 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted94 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted94";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term83), term85);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted93 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted93";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term121;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted88 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted88";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_71 = { &(lifted89) , &(frame) };
StrCL lifted89_cl = &(r_71);
struct str_closure s_71 = { &(not_under_f_2_0) , sl_up(sl) };
StrCL lifted92_cl = &(s_71);
t = collect_2_0(sl_up(sl), lifted89_cl, lifted92_cl, t);
if((t == NULL))
goto fail87 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted89 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted89";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_71 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted90_cl = &(o_71);
struct str_closure p_71 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted91_cl = &(p_71);
t = G_2_0(sl_up(sl_up(sl)), lifted90_cl, lifted91_cl, t);
if((t == NULL))
goto fail88 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted87 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted87";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term117;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
ATerm crush_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "crush_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_71 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(d_71);
struct str_closure e_71 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(e_71);
struct str_closure f_71 = { &(lifted85) , &(frame) };
StrCL lifted85_cl = &(f_71);
struct str_closure g_71 = { &(lifted86) , &(frame) };
StrCL lifted86_cl = &(g_71);
struct str_closure k_71 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(k_71);
struct str_closure l_71 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(l_71);
struct str_closure m_71 = { &(lifted79) , &(frame) };
StrCL lifted79_cl = &(m_71);
struct str_closure n_71 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(n_71);
t = apply_test_4_0(sl, lifted75_cl, lifted76_cl, lifted79_cl, lifted80_cl, t);
if((t == NULL))
goto fail73 ;
t = apply_test_4_0(sl, lifted81_cl, lifted82_cl, lifted85_cl, lifted86_cl, t);
if((t == NULL))
goto fail73 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term87), term85);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted79 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted79";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_71 = { &(_Id) , sl_up(sl) };
StrCL lifted77_cl = &(h_71);
struct str_closure i_71 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(i_71);
t = crush_2_0(sl_up(sl), lifted77_cl, lifted78_cl, t);
if((t == NULL))
goto fail81 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_1 = NULL,e_1 = NULL,d_1 = NULL,f_1 = NULL;
e_1 = t;
t = Fst_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail82 ;
c_1 = t;
t = e_1;
f_1 = t;
t = Snd_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail82 ;
d_1 = t;
t = f_1;
{
ATerm trm11;
trm11 = CheckATermList(d_1);
if((trm11 == NULL))
goto fail82 ;
t = (ATerm) ATinsert((ATermList)trm11, c_1);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term115;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted86 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted86";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATempty)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATempty)), (ATerm) ATempty));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted85 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted85";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted82 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted82";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure b_71 = { &(b_1) , &(frame) };
StrCL b_1_cl = &(b_71);
sl_init_fun(0, b_1_cl);
t = b_1(&(frame), t);
if((t == NULL))
goto fail75 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm b_1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "b_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_70 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted83_cl = &(z_70);
struct str_closure a_71 = { &(lifted84) , &(frame) };
StrCL lifted84_cl = &(a_71);
t = crush_3_0(sl_up(sl_up(sl)), lifted83_cl, lifted84_cl, sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail76 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted84 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted84";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_1 = NULL,i_1 = NULL,h_1 = NULL,j_1 = NULL;
i_1 = t;
t = Fst_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail77 ;
g_1 = t;
t = i_1;
j_1 = t;
t = Snd_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail77 ;
h_1 = t;
t = j_1;
{
ATerm trm10;
trm10 = CheckATermList(h_1);
if((trm10 == NULL))
goto fail77 ;
t = (ATerm) ATinsert((ATermList)trm10, g_1);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term113;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
ATerm collect_all_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "collect_all_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_69 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(z_69);
struct str_closure a_70 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(a_70);
struct str_closure b_70 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(b_70);
struct str_closure c_70 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(c_70);
struct str_closure g_70 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(g_70);
struct str_closure h_70 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(h_70);
struct str_closure i_70 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(i_70);
struct str_closure j_70 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(j_70);
t = apply_test_4_0(sl, lifted47_cl, lifted48_cl, lifted52_cl, lifted53_cl, t);
if((t == NULL))
goto fail49 ;
{
struct str_closure n_70 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(n_70);
struct str_closure o_70 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(o_70);
struct str_closure p_70 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(p_70);
struct str_closure q_70 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(q_70);
t = apply_test_4_0(sl, lifted54_cl, lifted55_cl, lifted59_cl, lifted60_cl, t);
if((t == NULL))
goto fail49 ;
{
struct str_closure u_70 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(u_70);
struct str_closure w_70 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(w_70);
struct str_closure x_70 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(x_70);
struct str_closure y_70 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(y_70);
t = apply_test_4_0(sl, lifted61_cl, lifted62_cl, lifted66_cl, lifted67_cl, t);
if((t == NULL))
goto fail49 ;
t = apply_test_4_0(sl, lifted68_cl, lifted69_cl, lifted73_cl, lifted74_cl, t);
if((t == NULL))
goto fail49 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted67 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted67";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term111;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_70 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(r_70);
struct str_closure s_70 = { &(union_0_0) , sl_up(sl) };
StrCL lifted64_cl = &(s_70);
struct str_closure t_70 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(t_70);
t = collect_all_3_0(sl_up(sl), lifted63_cl, lifted64_cl, lifted65_cl, t);
if((t == NULL))
goto fail68 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_0 = NULL;
if(match_cons(t, sym_Assign_2))
{
ATerm trm9 = ATgetArgument(t, 0);
z_0 = ATgetArgument(t, 1);
}
else
goto fail70 ;
t = z_0;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Var_1))
{
ATerm trm8 = ATgetArgument(t, 0);
}
else
goto fail69 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term107;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term7), term95);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term105;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_70 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(k_70);
struct str_closure l_70 = { &(conc_0_0) , sl_up(sl) };
StrCL lifted57_cl = &(l_70);
struct str_closure m_70 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(m_70);
t = collect_all_3_0(sl_up(sl), lifted56_cl, lifted57_cl, lifted58_cl, t);
if((t == NULL))
goto fail62 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_0 = NULL;
if(match_cons(t, sym_Assign_2))
{
ATerm trm7 = ATgetArgument(t, 0);
y_0 = ATgetArgument(t, 1);
}
else
goto fail64 ;
t = y_0;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Var_1))
{
ATerm trm6 = ATgetArgument(t, 0);
}
else
goto fail63 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term101;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term87), term83), term85);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_70 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(f_70);
t = collect_all_1_0(sl_up(sl), lifted49_cl, t);
if((t == NULL))
goto fail57 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_70 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted50_cl = &(d_70);
struct str_closure e_70 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted51_cl = &(e_70);
t = G_2_0(sl_up(sl_up(sl)), lifted50_cl, lifted51_cl, t);
if((t == NULL))
goto fail58 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term99;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term95);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted73 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted73";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term97;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_69 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(w_69);
struct str_closure x_69 = { &(union_0_0) , sl_up(sl) };
StrCL lifted71_cl = &(x_69);
struct str_closure y_69 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(y_69);
t = collect_all_3_0(sl_up(sl), lifted70_cl, lifted71_cl, lifted72_cl, t);
if((t == NULL))
goto fail51 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_1 = NULL;
if(match_cons(t, sym_Assign_2))
{
ATerm trm5 = ATgetArgument(t, 0);
a_1 = ATgetArgument(t, 1);
}
else
goto fail53 ;
t = a_1;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Var_1))
{
ATerm trm4 = ATgetArgument(t, 0);
}
else
goto fail52 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term91;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
ATerm collect_om_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "collect_om_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_69 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(q_69);
struct str_closure t_69 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(t_69);
struct str_closure u_69 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(u_69);
struct str_closure v_69 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(v_69);
t = apply_test_4_0(sl, lifted40_cl, lifted41_cl, lifted45_cl, lifted46_cl, t);
if((t == NULL))
goto fail43 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term87), term85);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_69 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(p_69);
t = collect_om_1_0(sl_up(sl), lifted42_cl, t);
if((t == NULL))
goto fail45 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_69 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted43_cl = &(n_69);
struct str_closure o_69 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted44_cl = &(o_69);
t = G_2_0(sl_up(sl_up(sl)), lifted43_cl, lifted44_cl, t);
if((t == NULL))
goto fail46 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term81;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
ATerm collect_split_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "collect_split_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_68 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(s_68);
struct str_closure t_68 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(t_68);
struct str_closure u_68 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(u_68);
struct str_closure v_68 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(v_68);
struct str_closure b_69 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(b_69);
struct str_closure c_69 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(c_69);
struct str_closure d_69 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(d_69);
struct str_closure e_69 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(e_69);
t = apply_test_4_0(sl, lifted22_cl, lifted23_cl, lifted26_cl, lifted27_cl, t);
if((t == NULL))
goto fail24 ;
{
struct str_closure j_69 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(j_69);
struct str_closure k_69 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(k_69);
struct str_closure l_69 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(l_69);
struct str_closure m_69 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(m_69);
t = apply_test_4_0(sl, lifted28_cl, lifted29_cl, lifted32_cl, lifted33_cl, t);
if((t == NULL))
goto fail24 ;
t = apply_test_4_0(sl, lifted34_cl, lifted35_cl, lifted38_cl, lifted39_cl, t);
if((t == NULL))
goto fail24 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_F_2, (ATerm)SRTS_setAnnotations((ATerm)ATmakeAppl(sym_G_2, term35, (ATerm) ATmakeAppl(sym_I_1, (ATerm) SRTS_setAnnotations(term34, (ATerm) ATinsert(ATempty, term77)))), (ATerm) ATinsert(ATempty, term79)), term71), (ATerm) ATinsert(ATinsert(ATempty, term65), (ATerm) ATmakeAppl(sym_H_2, (ATerm)SRTS_setAnnotations(term34, (ATerm) ATinsert(ATempty, term77)), term59)));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym_F_2, (ATerm)SRTS_setAnnotations((ATerm)ATmakeAppl(sym_G_2, term35, (ATerm) ATmakeAppl(sym_H_2, (ATerm)SRTS_setAnnotations(term34, (ATerm) ATinsert(ATempty, term77)), term59)), (ATerm) ATinsert(ATempty, term79)), term65);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_69 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(f_69);
struct str_closure i_69 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(i_69);
t = collect_split_2_0(sl_up(sl), lifted30_cl, lifted31_cl, t);
if((t == NULL))
goto fail38 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_0 = NULL,t_0 = NULL;
if(match_cons(t, sym_H_2))
{
s_0 = ATgetArgument(t, 0);
t_0 = ATgetArgument(t, 1);
}
else
goto fail40 ;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, s_0, t_0));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_0 = NULL,r_0 = NULL;
if(match_cons(t, sym_H_2))
{
q_0 = ATgetArgument(t, 0);
r_0 = ATgetArgument(t, 1);
}
else
goto fail39 ;
t = (ATerm) ATmakeAppl(sym_I_1, q_0);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term75;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__2, term73, (ATerm) ATinsert(ATinsert(ATempty, term65), term61));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term67;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_68 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(z_68);
struct str_closure a_69 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(a_69);
t = collect_split_2_0(sl_up(sl), lifted24_cl, lifted25_cl, t);
if((t == NULL))
goto fail32 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_0 = NULL,p_0 = NULL;
if(match_cons(t, sym_H_2))
{
o_0 = ATgetArgument(t, 0);
p_0 = ATgetArgument(t, 1);
}
else
goto fail34 ;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, o_0, p_0));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_0 = NULL,n_0 = NULL;
if(match_cons(t, sym_H_2))
{
m_0 = ATgetArgument(t, 0);
n_0 = ATgetArgument(t, 1);
}
else
goto fail33 ;
t = (ATerm) ATmakeAppl(sym_I_1, m_0);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__2, term55, (ATerm) ATinsert(ATinsert(ATempty, term45), term39));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_68 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(n_68);
struct str_closure o_68 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(o_68);
t = collect_split_2_0(sl_up(sl), lifted36_cl, lifted37_cl, t);
if((t == NULL))
goto fail26 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_0 = NULL,x_0 = NULL;
if(match_cons(t, sym_H_2))
{
w_0 = ATgetArgument(t, 0);
x_0 = ATgetArgument(t, 1);
}
else
goto fail28 ;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, w_0, x_0));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_0 = NULL,v_0 = NULL;
if(match_cons(t, sym_H_2))
{
u_0 = ATgetArgument(t, 0);
v_0 = ATgetArgument(t, 1);
}
else
goto fail27 ;
t = (ATerm) ATmakeAppl(sym_I_1, u_0);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
ATerm occurrences_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "occurrences_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_67 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(q_67);
struct str_closure r_67 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(r_67);
struct str_closure s_67 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(s_67);
struct str_closure t_67 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(t_67);
struct str_closure v_67 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(v_67);
struct str_closure w_67 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(w_67);
struct str_closure x_67 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(x_67);
struct str_closure y_67 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(y_67);
t = apply_test_4_0(sl, lifted2_cl, lifted3_cl, lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure a_68 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(a_68);
struct str_closure d_68 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(d_68);
struct str_closure e_68 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(e_68);
struct str_closure f_68 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(f_68);
t = apply_test_4_0(sl, lifted7_cl, lifted8_cl, lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure h_68 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(h_68);
struct str_closure i_68 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(i_68);
struct str_closure j_68 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(j_68);
struct str_closure k_68 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(k_68);
t = apply_test_4_0(sl, lifted12_cl, lifted13_cl, lifted15_cl, lifted16_cl, t);
if((t == NULL))
goto fail3 ;
t = apply_test_4_0(sl, lifted17_cl, lifted18_cl, lifted20_cl, lifted21_cl, t);
if((t == NULL))
goto fail3 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_68 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(g_68);
t = occurrences_1_0(sl_up(sl), lifted14_cl, t);
if((t == NULL))
goto fail20 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Var_1))
{
ATerm trm3 = ATgetArgument(t, 0);
}
else
goto fail21 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_67 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(z_67);
t = om_occurrences_1_0(sl_up(sl), lifted9_cl, t);
if((t == NULL))
goto fail15 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Var_1))
{
ATerm trm2 = ATgetArgument(t, 0);
}
else
goto fail16 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term25;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_67 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(u_67);
t = om_occurrences_1_0(sl_up(sl), lifted4_cl, t);
if((t == NULL))
goto fail10 ;
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
if(match_cons(t, sym_Var_1))
{
ATerm trm1 = ATgetArgument(t, 0);
}
else
goto fail11 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_67 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(n_67);
t = occurrences_1_0(sl_up(sl), lifted19_cl, t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Var_1))
{
ATerm trm0 = ATgetArgument(t, 0);
}
else
goto fail6 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
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
struct str_closure g_67 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(g_67);
struct str_closure m_67 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(m_67);
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
t = collect_split_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = collect_om_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = collect_all_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = crush_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = collect_legacy_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = occurrences_tests_0_0(sl_up(sl), t);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 109));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(conc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(union_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("union_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Snd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Snd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Fst_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Fst_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_split_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_split_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_om_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_om_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_all_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_all_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_all_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_all_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(occurrences_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("occurrences_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(om_occurrences_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("om_occurrences_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(crush_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("crush_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(crush_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("crush_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_test_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_test_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_suite_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_suite_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(G_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("G_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(F_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("F_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(not_under_f_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("not_under_f_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted94);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted94", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted93);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted93", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted89);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted89", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted88);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted88", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted87);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted87", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_legacy_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_legacy_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted80);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted80", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted79);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted79", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted78);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted78", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted76);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted76", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted75);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted75", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted86);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted86", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted85);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted85", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted84);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted84", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(b_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("b_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted82);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted82", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted81);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted81", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(crush_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("crush_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted67);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted67", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted66);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted66", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted65);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted65", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted63);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted63", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted62);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted62", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted61);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted61", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted59);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted59", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted58);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted58", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted56);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted56", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted55);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted55", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted54);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted54", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted53);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted53", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted52);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted52", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted49);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted49", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted48);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted48", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted74);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted74", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted73);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted73", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted72);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted72", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted70);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted70", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted69);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted69", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted68);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted68", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_all_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_all_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted46);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted46", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted45);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted45", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_om_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_om_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted33);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted33", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted22", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted34);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted34", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_split_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_split_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(occurrences_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("occurrences_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
