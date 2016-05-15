#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__3;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_DR__DUMMY_0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym__3 = ATmakeSymbol("", 3, ATfalse);
ATprotectSymbol(sym__3);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_DR__DUMMY_0 = ATmakeSymbol("DR_DUMMY", 0, ATfalse);
ATprotectSymbol(sym_DR__DUMMY_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
static ATerm term155;
static ATerm term154;
static ATerm term153;
static ATerm term152;
static ATerm term151;
static ATerm term150;
static ATerm term149;
static ATerm term148;
static ATerm term147;
static ATerm term146;
static ATerm term145;
static ATerm term144;
static ATerm term143;
static ATerm term142;
static ATerm term141;
static ATerm term140;
static ATerm term139;
static ATerm term138;
static ATerm term137;
static ATerm term136;
static ATerm term135;
static ATerm term134;
static ATerm term133;
static ATerm term132;
static ATerm term131;
static ATerm term130;
static ATerm term129;
static ATerm term128;
static ATerm term127;
static ATerm term126;
static ATerm term125;
static ATerm term124;
static ATerm term123;
static ATerm term122;
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("list-basic-test", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("map-test2", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeInt(3);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("map-test1", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeInt(7);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeInt(6);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeInt(5);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeInt(4);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeInt(2);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeInt(1);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("split-fetch-test", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("split-fetch-keep-test-4", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("split-fetch-keep-test-1", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeInt(0);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("split-fetch-keep-test-2", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("split-fetch-keep-test-3", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("upto-test1", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("upto-test2", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(sym__2, term27, term5);
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-test 4", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-test 1", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-test 2", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-test 3", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-elem-test", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("reverse-test", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("conc-test 5", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("conc-test 1", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("conc-test 2", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("conc-test 3", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("conc-test 4", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("concat-test 4", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("concat-test 1", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("concat-test 2", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("concat-test 3", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("split-init-last-test", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("for-each-pair-test2", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeInt(20);
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeInt(19);
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeInt(18);
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeInt(17);
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeInt(16);
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeInt(15);
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeInt(14);
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeInt(13);
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeInt(12);
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeInt(11);
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeInt(10);
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeInt(9);
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeInt(8);
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("for-each-pair-test1", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(sym__2, term5, term11);
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(sym__2, term5, term13);
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(sym__2, term5, term15);
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(sym__2, term17, term11);
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(sym__2, term17, term13);
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(sym__2, term17, term15);
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(sym__2, term19, term11);
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(sym__2, term19, term13);
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(sym__2, term19, term15);
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(ATmakeSymbol("ListLoopTest", 0, ATtrue));
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(sym_DR__DUMMY_0);
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(ATmakeSymbol("4e04810ef3cf83eab251ca34cf7d1ebc", 0, ATtrue));
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(ATmakeSymbol("list-loop", 0, ATtrue));
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(ATmakeSymbol("list-fold 5", 0, ATtrue));
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(ATmakeSymbol("list-fold 1", 0, ATtrue));
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(ATmakeSymbol("list-fold 2", 0, ATtrue));
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(ATmakeSymbol("list-fold 3", 0, ATtrue));
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(ATmakeSymbol("list-fold 4", 0, ATtrue));
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeInt(24);
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(ATmakeSymbol("list-combinations 1", 0, ATtrue));
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeAppl(ATmakeSymbol("list-combinations 2", 0, ATtrue));
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(ATmakeSymbol("list-combinations 3", 0, ATtrue));
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeAppl(ATmakeSymbol("list-combinations 4", 0, ATtrue));
ATprotect(&(term147));
term147 = term146;
ATprotect(&(term148));
term148 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
ATprotect(&(term149));
term149 = term148;
ATprotect(&(term150));
term150 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
ATprotect(&(term151));
term151 = term150;
ATprotect(&(term152));
term152 = (ATerm) ATmakeAppl(ATmakeSymbol("list-combinations 5", 0, ATtrue));
ATprotect(&(term153));
term153 = term152;
ATprotect(&(term154));
term154 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term155));
term155 = term154;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm list_combinations_0_0 (StrSL sl, ATerm t);
ATerm for_each_pair_1_0 (StrSL sl, StrCL v_49, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm upto_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm split_init_last_0_0 (StrSL sl, ATerm t);
ATerm split_fetch_keep_1_0 (StrSL sl, StrCL v_48, ATerm t);
ATerm split_fetch_1_0 (StrSL sl, StrCL u_48, ATerm t);
ATerm fetch_elem_1_0 (StrSL sl, StrCL t_48, ATerm t);
ATerm fetch_1_0 (StrSL sl, StrCL s_48, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL m_48, ATerm t);
ATerm list_fold_1_1 (StrSL sl, StrCL l_48, ATerm k_48, ATerm t);
ATerm list_loop_1_0 (StrSL sl, StrCL j_48, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL s_47, ATerm t);
ATerm set_eq_0_0 (StrSL sl, ATerm t);
ATerm dr_add_rule_0_3 (StrSL sl, ATerm n_34, ATerm o_34, ATerm p_34, ATerm t);
ATerm dr_lookup_rule_0_2 (StrSL sl, ATerm j_33, ATerm k_33, ATerm t);
ATerm dr_scope_1_1 (StrSL sl, StrCL q_32, ATerm p_32, ATerm t);
ATerm mul_0_0 (StrSL sl, ATerm t);
ATerm subt_0_0 (StrSL sl, ATerm t);
ATerm add_0_0 (StrSL sl, ATerm t);
ATerm apply_and_fail_3_0 (StrSL sl, StrCL s_9, StrCL t_9, StrCL u_9, ATerm t);
ATerm apply_and_check_4_0 (StrSL sl, StrCL o_9, StrCL p_9, StrCL q_9, StrCL r_9, ATerm t);
ATerm apply_test_3_0 (StrSL sl, StrCL l_9, StrCL m_9, StrCL n_9, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL h_9, StrCL i_9, StrCL j_9, StrCL k_9, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL f_9, StrCL g_9, ATerm t);
static ATerm lifted158 (StrSL sl, ATerm t);
ATerm bagof_ListLoopTest_0_0 (StrSL sl, ATerm t);
static ATerm lifted157 (StrSL sl, ATerm t);
static ATerm lifted156 (StrSL sl, ATerm t);
static ATerm lifted154 (StrSL sl, ATerm t);
ATerm list_combination_test_0_3 (StrSL sl, ATerm d_3, ATerm e_3, ATerm f_3, ATerm t);
static ATerm lifted153 (StrSL sl, ATerm t);
static ATerm lifted152 (StrSL sl, ATerm t);
static ATerm lifted150 (StrSL sl, ATerm t);
ATerm list_combinations_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted144 (StrSL sl, ATerm t);
static ATerm lifted143 (StrSL sl, ATerm t);
static ATerm lifted141 (StrSL sl, ATerm t);
static ATerm lifted140 (StrSL sl, ATerm t);
static ATerm lifted139 (StrSL sl, ATerm t);
static ATerm lifted138 (StrSL sl, ATerm t);
static ATerm lifted136 (StrSL sl, ATerm t);
static ATerm lifted135 (StrSL sl, ATerm t);
static ATerm lifted134 (StrSL sl, ATerm t);
static ATerm lifted133 (StrSL sl, ATerm t);
static ATerm lifted131 (StrSL sl, ATerm t);
static ATerm lifted130 (StrSL sl, ATerm t);
static ATerm lifted129 (StrSL sl, ATerm t);
static ATerm lifted128 (StrSL sl, ATerm t);
static ATerm lifted126 (StrSL sl, ATerm t);
static ATerm lifted125 (StrSL sl, ATerm t);
static ATerm lifted149 (StrSL sl, ATerm t);
static ATerm lifted148 (StrSL sl, ATerm t);
static ATerm lifted146 (StrSL sl, ATerm t);
static ATerm lifted145 (StrSL sl, ATerm t);
ATerm list_fold_tests_0_0 (StrSL sl, ATerm t);
static ATerm k_1 (StrSL sl, ATerm i_1, ATerm t);
static ATerm j_1 (StrSL sl, ATerm h_1, ATerm t);
static ATerm lifted124 (StrSL sl, ATerm t);
static ATerm lifted123 (StrSL sl, ATerm t);
static ATerm lifted121 (StrSL sl, ATerm t);
static ATerm lifted120 (StrSL sl, ATerm t);
static ATerm lifted119 (StrSL sl, ATerm t);
static ATerm q_0 (StrSL sl, ATerm o_0, ATerm t);
ATerm list_loop_tests_0_0 (StrSL sl, ATerm t);
static ATerm p_0 (StrSL sl, ATerm t);
static ATerm lifted114 (StrSL sl, ATerm t);
static ATerm lifted113 (StrSL sl, ATerm t);
static ATerm lifted111 (StrSL sl, ATerm t);
static ATerm lifted110 (StrSL sl, ATerm t);
static ATerm lifted118 (StrSL sl, ATerm t);
static ATerm lifted116 (StrSL sl, ATerm t);
static ATerm lifted115 (StrSL sl, ATerm t);
ATerm for_each_pair_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted109 (StrSL sl, ATerm t);
static ATerm lifted108 (StrSL sl, ATerm t);
static ATerm lifted106 (StrSL sl, ATerm t);
ATerm split_init_last_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted101 (StrSL sl, ATerm t);
static ATerm lifted100 (StrSL sl, ATerm t);
static ATerm lifted98 (StrSL sl, ATerm t);
static ATerm lifted97 (StrSL sl, ATerm t);
static ATerm lifted96 (StrSL sl, ATerm t);
static ATerm lifted94 (StrSL sl, ATerm t);
static ATerm lifted93 (StrSL sl, ATerm t);
static ATerm lifted92 (StrSL sl, ATerm t);
static ATerm lifted90 (StrSL sl, ATerm t);
static ATerm lifted105 (StrSL sl, ATerm t);
static ATerm lifted104 (StrSL sl, ATerm t);
static ATerm lifted102 (StrSL sl, ATerm t);
ATerm concat_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted85 (StrSL sl, ATerm t);
static ATerm lifted84 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted89 (StrSL sl, ATerm t);
static ATerm lifted88 (StrSL sl, ATerm t);
static ATerm lifted86 (StrSL sl, ATerm t);
ATerm conc_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
ATerm reverse_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
ATerm fetch_elem_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
ATerm fetch_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
ATerm upto_test2_0_0 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
ATerm upto_test1_0_0 (StrSL sl, ATerm t);
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
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
ATerm split_fetch_keep_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm split_fetch_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
ATerm map_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm bagof_ListLoopTest_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "bagof_ListLoopTest_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
sl_init_var(0, a_7);
{
struct str_closure t_80 = { &(lifted158) , &(frame) };
StrCL lifted158_cl = &(t_80);
if((a_7 == NULL))
{
a_7 = t;
}
else
if((a_7 != t))
goto fail156 ;
c_7 = t;
{
ATerm trm1 = t;
ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
f_7 = t;
t = term121;
d_7 = t;
t = f_7;
g_7 = t;
t = (ATerm) ATinsert(ATempty, term123);
e_7 = t;
t = g_7;
t = dr_lookup_rule_0_2(sl, d_7, e_7, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm1;
t = (ATerm) ATempty;
goto label0 ;
label0 :
;
b_7 = t;
t = c_7;
t = b_7;
t = filter_1_0(sl, lifted158_cl, t);
if((t == NULL))
goto fail156 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail156 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted158 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted158";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_73 = NULL,h_73 = NULL,f_73 = NULL,g_73 = NULL;
h_73 = t;
if((sl_readvar(0, sl) == NULL))
goto fail157 ;
else
{
t = sl_readvar(0, sl);
}
e_73 = t;
t = h_73;
if(match_cons(t, sym__2))
{
ATerm trm0 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm0) == ATmakeSymbol("4e04810ef3cf83eab251ca34cf7d1ebc", 0, ATtrue))))
goto fail157 ;
f_73 = ATgetArgument(t, 1);
}
else
goto fail157 ;
g_73 = t;
t = e_73;
t = g_73;
t = f_73;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail157 :
--__tracing_table_counter;
return(NULL);
}
ATerm list_combination_test_0_3 (StrSL sl, ATerm d_3, ATerm e_3, ATerm f_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "list_combination_test_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
sl_init_var(0, d_3);
sl_init_var(1, e_3);
sl_init_var(2, f_3);
{
struct str_closure p_80 = { &(lifted154) , &(frame) };
StrCL lifted154_cl = &(p_80);
struct str_closure q_80 = { &(list_combinations_0_0) , sl };
StrCL lifted155_cl = &(q_80);
struct str_closure r_80 = { &(lifted156) , &(frame) };
StrCL lifted156_cl = &(r_80);
struct str_closure s_80 = { &(lifted157) , &(frame) };
StrCL lifted157_cl = &(s_80);
t = apply_and_check_4_0(sl, lifted154_cl, lifted155_cl, lifted156_cl, lifted157_cl, t);
if((t == NULL))
goto fail152 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail152 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted157 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted157";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_3 = NULL,h_3 = NULL;
h_3 = t;
g_3 = t;
if((sl_readvar(2, sl) == NULL))
goto fail155 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, g_3, sl_readvar(2, sl));
}
t = set_eq_0_0(sl_up(sl), t);
if((t == NULL))
goto fail155 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail155 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted156 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted156";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail154 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail154 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted154 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted154";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail153 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail153 :
--__tracing_table_counter;
return(NULL);
}
ATerm list_combinations_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "list_combinations_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL;
sl_init_var(0, w_72);
sl_init_var(1, x_72);
sl_init_var(2, y_72);
c_2 = t;
t = term141;
z_1 = t;
t = c_2;
d_2 = t;
t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term17), term19));
a_2 = t;
t = d_2;
e_2 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term17)), (ATerm) ATinsert(ATempty, term19));
b_2 = t;
t = e_2;
{
struct str_closure l_80 = { &(lifted150) , &(frame) };
StrCL lifted150_cl = &(l_80);
struct str_closure m_80 = { &(list_combinations_0_0) , sl };
StrCL lifted151_cl = &(m_80);
struct str_closure n_80 = { &(lifted152) , &(frame) };
StrCL lifted152_cl = &(n_80);
struct str_closure o_80 = { &(lifted153) , &(frame) };
StrCL lifted153_cl = &(o_80);
b_73 = t;
t = z_1;
if((w_72 == NULL))
{
w_72 = t;
}
else
if((w_72 != t))
goto fail148 ;
t = b_73;
c_73 = t;
t = a_2;
if((x_72 == NULL))
{
x_72 = t;
}
else
if((x_72 != t))
goto fail148 ;
t = c_73;
d_73 = t;
t = b_2;
if((y_72 == NULL))
{
y_72 = t;
}
else
if((y_72 != t))
goto fail148 ;
t = d_73;
t = apply_and_check_4_0(sl, lifted150_cl, lifted151_cl, lifted152_cl, lifted153_cl, t);
if((t == NULL))
goto fail148 ;
i_2 = t;
t = term143;
f_2 = t;
t = i_2;
j_2 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATinsert(ATempty, term17), term19));
g_2 = t;
t = j_2;
k_2 = t;
t = (ATerm) ATempty;
h_2 = t;
t = k_2;
t = list_combination_test_0_3(sl, f_2, g_2, h_2, t);
if((t == NULL))
goto fail148 ;
o_2 = t;
t = term145;
l_2 = t;
t = o_2;
p_2 = t;
t = (ATerm) ATempty;
m_2 = t;
t = p_2;
q_2 = t;
t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
n_2 = t;
t = q_2;
t = list_combination_test_0_3(sl, l_2, m_2, n_2, t);
if((t == NULL))
goto fail148 ;
u_2 = t;
t = term147;
r_2 = t;
t = u_2;
v_2 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term149), term151)), (ATerm) ATinsert(ATinsert(ATempty, term17), term19));
s_2 = t;
t = v_2;
w_2 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term149), term17)), (ATerm) ATinsert(ATinsert(ATempty, term149), term19)), (ATerm) ATinsert(ATinsert(ATempty, term151), term17)), (ATerm) ATinsert(ATinsert(ATempty, term151), term19));
t_2 = t;
t = w_2;
t = list_combination_test_0_3(sl, r_2, s_2, t_2, t);
if((t == NULL))
goto fail148 ;
a_3 = t;
t = term153;
x_2 = t;
t = a_3;
b_3 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term155)), (ATerm) ATinsert(ATinsert(ATempty, term149), term151)), (ATerm) ATinsert(ATinsert(ATempty, term17), term19));
y_2 = t;
t = b_3;
c_3 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term155), term149), term17)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term155), term149), term19)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term155), term151), term17)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term155), term151), term19));
z_2 = t;
t = c_3;
t = list_combination_test_0_3(sl, x_2, y_2, z_2, t);
if((t == NULL))
goto fail148 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail148 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted153 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted153";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_72 = NULL,a_73 = NULL;
a_73 = t;
z_72 = t;
if((sl_readvar(2, sl) == NULL))
goto fail151 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, z_72, sl_readvar(2, sl));
}
t = set_eq_0_0(sl_up(sl), t);
if((t == NULL))
goto fail151 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail151 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted152 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted152";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail150 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail150 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted150 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted150";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail149 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail149 :
--__tracing_table_counter;
return(NULL);
}
ATerm list_fold_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "list_fold_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_79 = { &(lifted145) , &(frame) };
StrCL lifted145_cl = &(m_79);
struct str_closure n_79 = { &(lifted146) , &(frame) };
StrCL lifted146_cl = &(n_79);
struct str_closure o_79 = { &(lifted148) , &(frame) };
StrCL lifted148_cl = &(o_79);
struct str_closure p_79 = { &(lifted149) , &(frame) };
StrCL lifted149_cl = &(p_79);
struct str_closure s_79 = { &(lifted125) , &(frame) };
StrCL lifted125_cl = &(s_79);
struct str_closure t_79 = { &(lifted126) , &(frame) };
StrCL lifted126_cl = &(t_79);
struct str_closure u_79 = { &(lifted128) , &(frame) };
StrCL lifted128_cl = &(u_79);
struct str_closure v_79 = { &(lifted129) , &(frame) };
StrCL lifted129_cl = &(v_79);
t = apply_test_4_0(sl, lifted125_cl, lifted126_cl, lifted128_cl, lifted129_cl, t);
if((t == NULL))
goto fail127 ;
{
struct str_closure x_79 = { &(lifted130) , &(frame) };
StrCL lifted130_cl = &(x_79);
struct str_closure y_79 = { &(lifted131) , &(frame) };
StrCL lifted131_cl = &(y_79);
struct str_closure z_79 = { &(lifted133) , &(frame) };
StrCL lifted133_cl = &(z_79);
struct str_closure a_80 = { &(lifted134) , &(frame) };
StrCL lifted134_cl = &(a_80);
t = apply_test_4_0(sl, lifted130_cl, lifted131_cl, lifted133_cl, lifted134_cl, t);
if((t == NULL))
goto fail127 ;
{
struct str_closure c_80 = { &(lifted135) , &(frame) };
StrCL lifted135_cl = &(c_80);
struct str_closure d_80 = { &(lifted136) , &(frame) };
StrCL lifted136_cl = &(d_80);
struct str_closure e_80 = { &(lifted138) , &(frame) };
StrCL lifted138_cl = &(e_80);
struct str_closure f_80 = { &(lifted139) , &(frame) };
StrCL lifted139_cl = &(f_80);
t = apply_test_4_0(sl, lifted135_cl, lifted136_cl, lifted138_cl, lifted139_cl, t);
if((t == NULL))
goto fail127 ;
{
struct str_closure h_80 = { &(lifted140) , &(frame) };
StrCL lifted140_cl = &(h_80);
struct str_closure i_80 = { &(lifted141) , &(frame) };
StrCL lifted141_cl = &(i_80);
struct str_closure j_80 = { &(lifted143) , &(frame) };
StrCL lifted143_cl = &(j_80);
struct str_closure k_80 = { &(lifted144) , &(frame) };
StrCL lifted144_cl = &(k_80);
t = apply_test_4_0(sl, lifted140_cl, lifted141_cl, lifted143_cl, lifted144_cl, t);
if((t == NULL))
goto fail127 ;
t = apply_test_4_0(sl, lifted145_cl, lifted146_cl, lifted148_cl, lifted149_cl, t);
if((t == NULL))
goto fail127 ;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail127 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted144 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted144";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term139;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail147 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted143 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted143";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term15), term5), term17), term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail146 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted141 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted141";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_1 = NULL,w_1 = NULL;
struct str_closure g_80 = { &(k_1) , sl_up(sl) };
StrCL lifted142_cl = &(g_80);
w_1 = t;
t = term19;
v_1 = t;
t = w_1;
t = list_fold_1_1(sl_up(sl), lifted142_cl, v_1, t);
if((t == NULL))
goto fail145 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail145 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted140 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted140";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term137;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail144 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted139 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted139";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term95;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail143 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted138 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted138";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term15), term5), term17), term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail142 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted136 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted136";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_1 = NULL,u_1 = NULL;
struct str_closure b_80 = { &(j_1) , sl_up(sl) };
StrCL lifted137_cl = &(b_80);
u_1 = t;
t = term27;
t_1 = t;
t = u_1;
t = list_fold_1_1(sl_up(sl), lifted137_cl, t_1, t);
if((t == NULL))
goto fail141 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail141 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted135 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted135";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term135;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail140 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted134 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted134";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail139 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted133 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted133";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail138 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted131 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted131";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_1 = NULL,s_1 = NULL;
struct str_closure w_79 = { &(j_1) , sl_up(sl) };
StrCL lifted132_cl = &(w_79);
s_1 = t;
t = term27;
r_1 = t;
t = s_1;
t = list_fold_1_1(sl_up(sl), lifted132_cl, r_1, t);
if((t == NULL))
goto fail137 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail137 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted130 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted130";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term133;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail136 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted129 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted129";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail135 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted128 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted128";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail134 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted126 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted126";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_1 = NULL,q_1 = NULL;
struct str_closure q_79 = { &(j_1) , sl_up(sl) };
StrCL lifted127_cl = &(q_79);
q_1 = t;
t = term27;
p_1 = t;
t = q_1;
t = list_fold_1_1(sl_up(sl), lifted127_cl, p_1, t);
if((t == NULL))
goto fail133 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail133 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted125 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted125";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term131;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail132 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted149 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted149";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail131 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted148 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted148";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term15), term5), term17), term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail130 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted146 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted146";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_1 = NULL,y_1 = NULL;
struct str_closure l_79 = { &(k_1) , sl_up(sl) };
StrCL lifted147_cl = &(l_79);
y_1 = t;
t = term27;
x_1 = t;
t = y_1;
t = list_fold_1_1(sl_up(sl), lifted147_cl, x_1, t);
if((t == NULL))
goto fail129 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail129 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted145 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted145";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term129;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail128 :
--__tracing_table_counter;
return(NULL);
}
static ATerm k_1 (StrSL sl, ATerm i_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "k_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_1 = NULL,o_1 = NULL;
o_1 = t;
n_1 = t;
t = (ATerm) ATmakeAppl(sym__2, i_1, n_1);
t = mul_0_0(sl, t);
if((t == NULL))
goto fail126 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail126 :
--__tracing_table_counter;
return(NULL);
}
static ATerm j_1 (StrSL sl, ATerm h_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "j_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_1 = NULL,m_1 = NULL;
m_1 = t;
l_1 = t;
t = (ATerm) ATmakeAppl(sym__2, h_1, l_1);
t = add_0_0(sl, t);
if((t == NULL))
goto fail125 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail125 :
--__tracing_table_counter;
return(NULL);
}
ATerm list_loop_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "list_loop_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL;
a_1 = t;
t = (ATerm) ATempty;
z_0 = t;
t = a_1;
t = q_0(&(frame), z_0, t);
if((t == NULL))
goto fail118 ;
c_1 = t;
t = (ATerm) ATinsert(ATempty, term19);
b_1 = t;
t = c_1;
t = q_0(&(frame), b_1, t);
if((t == NULL))
goto fail118 ;
e_1 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term5), term17), term19);
d_1 = t;
t = e_1;
t = q_0(&(frame), d_1, t);
if((t == NULL))
goto fail118 ;
g_1 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term15), term5), term17), term19);
f_1 = t;
t = g_1;
t = q_0(&(frame), f_1, t);
if((t == NULL))
goto fail118 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail118 :
--__tracing_table_counter;
return(NULL);
}
static ATerm q_0 (StrSL sl, ATerm o_0, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "q_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, o_0);
{
ATerm x_0 = NULL,y_0 = NULL;
struct str_closure k_79 = { &(lifted119) , &(frame) };
StrCL lifted119_cl = &(k_79);
y_0 = t;
t = term121;
x_0 = t;
t = y_0;
t = dr_scope_1_1(sl_up(sl), lifted119_cl, x_0, t);
if((t == NULL))
goto fail119 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail119 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted119 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted119";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_79 = { &(lifted120) , &(frame) };
StrCL lifted120_cl = &(g_79);
struct str_closure h_79 = { &(lifted121) , &(frame) };
StrCL lifted121_cl = &(h_79);
struct str_closure i_79 = { &(lifted123) , &(frame) };
StrCL lifted123_cl = &(i_79);
struct str_closure j_79 = { &(lifted124) , &(frame) };
StrCL lifted124_cl = &(j_79);
t = apply_test_4_0(sl_up(sl_up(sl)), lifted120_cl, lifted121_cl, lifted123_cl, lifted124_cl, t);
if((t == NULL))
goto fail120 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail120 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted124 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted124";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail124 ;
else
{
t = sl_readvar(0, sl_up(sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail124 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted123 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted123";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail123 ;
else
{
t = sl_readvar(0, sl_up(sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail123 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted121 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted121";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_79 = { &(p_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted122_cl = &(f_79);
t = list_loop_1_0(sl_up(sl_up(sl_up(sl))), lifted122_cl, t);
if((t == NULL))
goto fail122 ;
t = bagof_ListLoopTest_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail122 ;
t = reverse_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail122 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail122 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted120 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted120";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term127;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail121 :
--__tracing_table_counter;
return(NULL);
}
static ATerm p_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "p_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_0 = NULL,n_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL;
m_0 = t;
n_0 = t;
u_0 = t;
t = term121;
r_0 = t;
t = u_0;
v_0 = t;
t = (ATerm) ATinsert(ATempty, term123);
s_0 = t;
t = v_0;
w_0 = t;
t = (ATerm) ATmakeAppl(sym__2, term125, m_0);
t_0 = t;
t = w_0;
t = dr_add_rule_0_3(sl, r_0, s_0, t_0, t);
if((t == NULL))
goto fail117 ;
t = n_0;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail117 :
--__tracing_table_counter;
return(NULL);
}
ATerm for_each_pair_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "for_each_pair_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_78 = { &(lifted115) , &(frame) };
StrCL lifted115_cl = &(t_78);
struct str_closure u_78 = { &(lifted116) , &(frame) };
StrCL lifted116_cl = &(u_78);
struct str_closure v_78 = { &(lifted118) , &(frame) };
StrCL lifted118_cl = &(v_78);
struct str_closure x_78 = { &(lifted110) , &(frame) };
StrCL lifted110_cl = &(x_78);
struct str_closure c_79 = { &(lifted111) , &(frame) };
StrCL lifted111_cl = &(c_79);
struct str_closure d_79 = { &(lifted113) , &(frame) };
StrCL lifted113_cl = &(d_79);
struct str_closure e_79 = { &(lifted114) , &(frame) };
StrCL lifted114_cl = &(e_79);
t = apply_test_4_0(sl, lifted110_cl, lifted111_cl, lifted113_cl, lifted114_cl, t);
if((t == NULL))
goto fail109 ;
t = apply_test_3_0(sl, lifted115_cl, lifted116_cl, lifted118_cl, t);
if((t == NULL))
goto fail109 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail109 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted114 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted114";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term103), term105), term107)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term109), term111), term113)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term115), term117), term119));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail116 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted113 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted113";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term5), term17), term19), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term11), term13), term15));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail115 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted111 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted111";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_78 = { &(_Id) , sl_up(sl) };
StrCL lifted112_cl = &(w_78);
t = for_each_pair_1_0(sl_up(sl), lifted112_cl, t);
if((t == NULL))
goto fail114 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail114 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted110 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted110";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term101;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail113 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted118 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted118";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term75), term77), term79), term81), term83), term85), term87), term89), term91), term93), term95), term97), term99), term9), term11), term13), term15), term5), term17), term19), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term75), term77), term79), term81), term83), term85), term87), term89), term91), term93), term95), term97), term99), term9), term11), term13), term15), term5), term17), term19));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail112 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted116 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted116";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_78 = { &(_Id) , sl_up(sl) };
StrCL lifted117_cl = &(s_78);
t = for_each_pair_1_0(sl_up(sl), lifted117_cl, t);
if((t == NULL))
goto fail111 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail111 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted115 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted115";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term73;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail110 :
--__tracing_table_counter;
return(NULL);
}
ATerm split_init_last_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "split_init_last_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_78 = { &(lifted106) , &(frame) };
StrCL lifted106_cl = &(o_78);
struct str_closure p_78 = { &(split_init_last_0_0) , sl };
StrCL lifted107_cl = &(p_78);
struct str_closure q_78 = { &(lifted108) , &(frame) };
StrCL lifted108_cl = &(q_78);
struct str_closure r_78 = { &(lifted109) , &(frame) };
StrCL lifted109_cl = &(r_78);
t = apply_test_4_0(sl, lifted106_cl, lifted107_cl, lifted108_cl, lifted109_cl, t);
if((t == NULL))
goto fail105 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail105 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted109 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted109";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term15), term5), term17), term19), term13);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail108 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted108 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted108";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail107 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted106 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted106";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term71;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail106 :
--__tracing_table_counter;
return(NULL);
}
ATerm concat_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "concat_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_77 = { &(lifted102) , &(frame) };
StrCL lifted102_cl = &(w_77);
struct str_closure x_77 = { &(concat_0_0) , sl };
StrCL lifted103_cl = &(x_77);
struct str_closure y_77 = { &(lifted104) , &(frame) };
StrCL lifted104_cl = &(y_77);
struct str_closure z_77 = { &(lifted105) , &(frame) };
StrCL lifted105_cl = &(z_77);
struct str_closure a_78 = { &(lifted90) , &(frame) };
StrCL lifted90_cl = &(a_78);
struct str_closure b_78 = { &(concat_0_0) , sl };
StrCL lifted91_cl = &(b_78);
struct str_closure c_78 = { &(lifted92) , &(frame) };
StrCL lifted92_cl = &(c_78);
struct str_closure d_78 = { &(lifted93) , &(frame) };
StrCL lifted93_cl = &(d_78);
t = apply_test_4_0(sl, lifted90_cl, lifted91_cl, lifted92_cl, lifted93_cl, t);
if((t == NULL))
goto fail92 ;
{
struct str_closure e_78 = { &(lifted94) , &(frame) };
StrCL lifted94_cl = &(e_78);
struct str_closure f_78 = { &(concat_0_0) , sl };
StrCL lifted95_cl = &(f_78);
struct str_closure g_78 = { &(lifted96) , &(frame) };
StrCL lifted96_cl = &(g_78);
struct str_closure h_78 = { &(lifted97) , &(frame) };
StrCL lifted97_cl = &(h_78);
t = apply_test_4_0(sl, lifted94_cl, lifted95_cl, lifted96_cl, lifted97_cl, t);
if((t == NULL))
goto fail92 ;
{
struct str_closure i_78 = { &(lifted98) , &(frame) };
StrCL lifted98_cl = &(i_78);
struct str_closure j_78 = { &(concat_0_0) , sl };
StrCL lifted99_cl = &(j_78);
struct str_closure m_78 = { &(lifted100) , &(frame) };
StrCL lifted100_cl = &(m_78);
struct str_closure n_78 = { &(lifted101) , &(frame) };
StrCL lifted101_cl = &(n_78);
t = apply_test_4_0(sl, lifted98_cl, lifted99_cl, lifted100_cl, lifted101_cl, t);
if((t == NULL))
goto fail92 ;
t = apply_test_4_0(sl, lifted102_cl, lifted103_cl, lifted104_cl, lifted105_cl, t);
if((t == NULL))
goto fail92 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted101 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted101";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail104 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted100 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted100";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted98 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted98";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term69;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted97 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted97";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted96 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted96";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19)), (ATerm) ATempty);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted94 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted94";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term67;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted93 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted93";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19), term13), term15), term5), term17), term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted92 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted92";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted90 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted90";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term65;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted105 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted105";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted104 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted104";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted102 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted102";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term63;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
ATerm conc_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "conc_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_76 = { &(lifted86) , &(frame) };
StrCL lifted86_cl = &(w_76);
struct str_closure x_76 = { &(conc_0_0) , sl };
StrCL lifted87_cl = &(x_76);
struct str_closure y_76 = { &(lifted88) , &(frame) };
StrCL lifted88_cl = &(y_76);
struct str_closure z_76 = { &(lifted89) , &(frame) };
StrCL lifted89_cl = &(z_76);
struct str_closure a_77 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(a_77);
struct str_closure b_77 = { &(conc_0_0) , sl };
StrCL lifted71_cl = &(b_77);
struct str_closure c_77 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(c_77);
struct str_closure d_77 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(d_77);
t = apply_test_4_0(sl, lifted70_cl, lifted71_cl, lifted72_cl, lifted73_cl, t);
if((t == NULL))
goto fail76 ;
{
struct str_closure e_77 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(e_77);
struct str_closure f_77 = { &(conc_0_0) , sl };
StrCL lifted75_cl = &(f_77);
struct str_closure h_77 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(h_77);
struct str_closure i_77 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(i_77);
t = apply_test_4_0(sl, lifted74_cl, lifted75_cl, lifted76_cl, lifted77_cl, t);
if((t == NULL))
goto fail76 ;
{
struct str_closure j_77 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(j_77);
struct str_closure l_77 = { &(conc_0_0) , sl };
StrCL lifted79_cl = &(l_77);
struct str_closure m_77 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(m_77);
struct str_closure p_77 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(p_77);
t = apply_test_4_0(sl, lifted78_cl, lifted79_cl, lifted80_cl, lifted81_cl, t);
if((t == NULL))
goto fail76 ;
{
struct str_closure q_77 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(q_77);
struct str_closure r_77 = { &(conc_0_0) , sl };
StrCL lifted83_cl = &(r_77);
struct str_closure s_77 = { &(lifted84) , &(frame) };
StrCL lifted84_cl = &(s_77);
struct str_closure v_77 = { &(lifted85) , &(frame) };
StrCL lifted85_cl = &(v_77);
t = apply_test_4_0(sl, lifted82_cl, lifted83_cl, lifted84_cl, lifted85_cl, t);
if((t == NULL))
goto fail76 ;
t = apply_test_4_0(sl, lifted86_cl, lifted87_cl, lifted88_cl, lifted89_cl, t);
if((t == NULL))
goto fail76 ;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted85 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted85";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted84 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted84";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term19));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted82 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted82";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term59;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19), term13), term15), term5), term17), term19), term13), term15), term5), term17), term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term55;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted73 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted73";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19), term13), term15), term5), term17), term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted89 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted89";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted88 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted88";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term19), (ATerm) ATempty);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted86 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted86";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
ATerm reverse_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "reverse_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_76 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(s_76);
struct str_closure t_76 = { &(reverse_0_0) , sl };
StrCL lifted67_cl = &(t_76);
struct str_closure u_76 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(u_76);
struct str_closure v_76 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(v_76);
t = apply_test_4_0(sl, lifted66_cl, lifted67_cl, lifted68_cl, lifted69_cl, t);
if((t == NULL))
goto fail72 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term19), term17), term5), term15), term13);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term49;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
ATerm fetch_elem_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fetch_elem_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_76 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(l_76);
struct str_closure m_76 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(m_76);
struct str_closure n_76 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(n_76);
struct str_closure r_76 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(r_76);
t = apply_test_4_0(sl, lifted61_cl, lifted62_cl, lifted64_cl, lifted65_cl, t);
if((t == NULL))
goto fail66 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_76 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(k_76);
t = fetch_elem_1_0(sl_up(sl), lifted63_cl, t);
if((t == NULL))
goto fail68 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 3))))
goto fail69 ;
t = term11;
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
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
ATerm fetch_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fetch_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_75 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(n_75);
struct str_closure o_75 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(o_75);
struct str_closure q_75 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(q_75);
struct str_closure t_75 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(t_75);
struct str_closure u_75 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(u_75);
struct str_closure w_75 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(w_75);
struct str_closure x_75 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(x_75);
t = apply_test_4_0(sl, lifted44_cl, lifted45_cl, lifted47_cl, lifted48_cl, t);
if((t == NULL))
goto fail48 ;
{
struct str_closure a_76 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(a_76);
struct str_closure c_76 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(c_76);
struct str_closure d_76 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(d_76);
t = apply_and_fail_3_0(sl, lifted49_cl, lifted50_cl, lifted52_cl, t);
if((t == NULL))
goto fail48 ;
{
struct str_closure g_76 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(g_76);
struct str_closure h_76 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(h_76);
struct str_closure j_76 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(j_76);
t = apply_and_fail_3_0(sl, lifted53_cl, lifted54_cl, lifted56_cl, t);
if((t == NULL))
goto fail48 ;
t = apply_and_fail_3_0(sl, lifted57_cl, lifted58_cl, lifted60_cl, t);
if((t == NULL))
goto fail48 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_76 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(f_76);
t = fetch_1_0(sl_up(sl), lifted55_cl, t);
if((t == NULL))
goto fail63 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 6))))
goto fail64 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term45;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_75 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(z_75);
t = fetch_1_0(sl_up(sl), lifted51_cl, t);
if((t == NULL))
goto fail59 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 6))))
goto fail60 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
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
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term11), term17), term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_75 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(r_75);
t = fetch_1_0(sl_up(sl), lifted46_cl, t);
if((t == NULL))
goto fail54 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 3))))
goto fail55 ;
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_75 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(l_75);
t = fetch_1_0(sl_up(sl), lifted59_cl, t);
if((t == NULL))
goto fail50 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 6))))
goto fail51 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
ATerm upto_test2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "upto_test2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_75 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(f_75);
struct str_closure g_75 = { &(upto_0_0) , sl };
StrCL lifted41_cl = &(g_75);
struct str_closure i_75 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(i_75);
struct str_closure k_75 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(k_75);
t = apply_test_4_0(sl, lifted40_cl, lifted41_cl, lifted42_cl, lifted43_cl, t);
if((t == NULL))
goto fail44 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
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
t = term37;
t = subt_0_0(sl_up(sl), t);
if((t == NULL))
goto fail46 ;
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
t = term35;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
ATerm upto_test1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "upto_test1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_74 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(z_74);
struct str_closure a_75 = { &(upto_0_0) , sl };
StrCL lifted37_cl = &(a_75);
struct str_closure c_75 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(c_75);
struct str_closure d_75 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(d_75);
t = apply_test_4_0(sl, lifted36_cl, lifted37_cl, lifted38_cl, lifted39_cl, t);
if((t == NULL))
goto fail40 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19), term27);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
ATerm split_fetch_keep_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "split_fetch_keep_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_74 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(a_74);
struct str_closure b_74 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(b_74);
struct str_closure c_74 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(c_74);
struct str_closure e_74 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(e_74);
struct str_closure f_74 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(f_74);
struct str_closure g_74 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(g_74);
struct str_closure i_74 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(i_74);
t = apply_test_4_0(sl, lifted17_cl, lifted18_cl, lifted20_cl, lifted21_cl, t);
if((t == NULL))
goto fail20 ;
{
struct str_closure l_74 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(l_74);
struct str_closure n_74 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(n_74);
struct str_closure o_74 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(o_74);
struct str_closure q_74 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(q_74);
t = apply_test_4_0(sl, lifted22_cl, lifted23_cl, lifted25_cl, lifted26_cl, t);
if((t == NULL))
goto fail20 ;
{
struct str_closure t_74 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(t_74);
struct str_closure u_74 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(u_74);
struct str_closure w_74 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(w_74);
struct str_closure x_74 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(x_74);
t = apply_test_4_0(sl, lifted27_cl, lifted28_cl, lifted30_cl, lifted31_cl, t);
if((t == NULL))
goto fail20 ;
t = apply_and_fail_3_0(sl, lifted32_cl, lifted33_cl, lifted35_cl, t);
if((t == NULL))
goto fail20 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATempty, term13), term5), term27, (ATerm) ATempty);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term27), term13), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_74 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(r_74);
t = split_fetch_keep_1_0(sl_up(sl), lifted29_cl, t);
if((t == NULL))
goto fail36 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto fail37 ;
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
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, term27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19), term27), term13), term5));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19), term27), term13), term5), term27);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_74 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(k_74);
t = split_fetch_keep_1_0(sl_up(sl), lifted24_cl, t);
if((t == NULL))
goto fail31 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto fail32 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATempty, term13), term5), term27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19), term27), term13), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_74 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(d_74);
t = split_fetch_keep_1_0(sl_up(sl), lifted19_cl, t);
if((t == NULL))
goto fail26 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto fail27 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term25;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term5), term17), term19);
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
{
struct str_closure z_73 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(z_73);
t = split_fetch_keep_1_0(sl_up(sl), lifted34_cl, t);
if((t == NULL))
goto fail22 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto fail23 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm split_fetch_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "split_fetch_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_73 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(v_73);
struct str_closure w_73 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(w_73);
struct str_closure x_73 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(x_73);
struct str_closure y_73 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(y_73);
t = apply_test_4_0(sl, lifted12_cl, lifted13_cl, lifted15_cl, lifted16_cl, t);
if((t == NULL))
goto fail14 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term5), term17), term19), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term9), term11), term13));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term9), term11), term13), term15), term5), term17), term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_73 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(u_73);
t = split_fetch_1_0(sl_up(sl), lifted14_cl, t);
if((t == NULL))
goto fail16 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 4))))
goto fail17 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm map_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "map_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_73 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(l_73);
struct str_closure m_73 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(m_73);
struct str_closure n_73 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(n_73);
struct str_closure o_73 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(o_73);
struct str_closure q_73 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(q_73);
struct str_closure r_73 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(r_73);
struct str_closure s_73 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(s_73);
struct str_closure t_73 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(t_73);
t = apply_test_4_0(sl, lifted2_cl, lifted3_cl, lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto fail3 ;
t = apply_test_4_0(sl, lifted7_cl, lifted8_cl, lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto fail3 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term5), term5), term5), term5), term5), term5), term5);
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term9), term11), term13), term15), term5), term17), term19);
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
struct str_closure p_73 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(p_73);
t = map_1_0(sl_up(sl), lifted4_cl, t);
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
t = term5;
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
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
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
t = (ATerm) ATempty;
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
struct str_closure k_73 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(k_73);
t = map_1_0(sl_up(sl), lifted9_cl, t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term5;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
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
struct str_closure i_73 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(i_73);
struct str_closure j_73 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(j_73);
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
t = map_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = split_fetch_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = split_fetch_keep_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = upto_test1_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = upto_test2_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = fetch_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = fetch_elem_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = reverse_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = conc_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = concat_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = split_init_last_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = for_each_pair_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = list_loop_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = list_fold_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = list_combinations_tests_0_0(sl_up(sl), t);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 185));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(list_combinations_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("list_combinations_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(for_each_pair_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("for_each_pair_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(upto_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("upto_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(reverse_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("reverse_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(split_init_last_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("split_init_last_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(split_fetch_keep_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("split_fetch_keep_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(split_fetch_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("split_fetch_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_elem_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_elem_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(list_fold_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("list_fold_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(list_loop_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("list_loop_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_eq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_eq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_add_rule_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_add_rule_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_lookup_rule_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_lookup_rule_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_scope_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_scope_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(mul_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("mul_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(subt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("subt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_and_fail_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_and_fail_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_and_check_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_and_check_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_test_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_test_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_test_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_test_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_suite_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_suite_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted158);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted158", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(bagof_ListLoopTest_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("bagof_ListLoopTest_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted157);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted157", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted156);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted156", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted154);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted154", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(list_combination_test_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("list_combination_test_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted153);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted153", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted152);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted152", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted150);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted150", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(list_combinations_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("list_combinations_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted144);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted144", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted143);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted143", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted141);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted141", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted140);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted140", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted139);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted139", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted138);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted138", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted136);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted136", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted135);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted135", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted134);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted134", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted133);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted133", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted131);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted131", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted130);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted130", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted129);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted129", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted128);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted128", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted126);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted126", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted125);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted125", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted149);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted149", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted148);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted148", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted146);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted146", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted145);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted145", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(list_fold_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("list_fold_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(k_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("k_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(j_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("j_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted124);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted124", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted123);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted123", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted121);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted121", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted120);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted120", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted119);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted119", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(q_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("q_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(list_loop_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("list_loop_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(p_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("p_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted114);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted114", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted113);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted113", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted111);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted111", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted110);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted110", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted118);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted118", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted116);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted116", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted115);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted115", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(for_each_pair_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("for_each_pair_test_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted109);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted109", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted108);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted108", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted106);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted106", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(split_init_last_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("split_init_last_test_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted101);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted101", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted100);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted100", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted98);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted98", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted97);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted97", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted96);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted96", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted94);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted94", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted93);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted93", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted92);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted92", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted90);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted90", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted105);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted105", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted104);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted104", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted102);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted102", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_test_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted85);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted85", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted84);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted84", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted82);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted82", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted81);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted81", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted80);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted80", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted78);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted78", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted77);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted77", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted76);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted76", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted89);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted89", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted88);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted88", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted86);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted86", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_test_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted69);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted69", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted68);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted68", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted66);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted66", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(reverse_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("reverse_test_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted65);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted65", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted64);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted64", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(fetch_elem_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_elem_test_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted51);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted51", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted57);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted57", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_test_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted43);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted43", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(upto_test2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("upto_test2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted39);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted39", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted38);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted38", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(upto_test1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("upto_test1_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(split_fetch_keep_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("split_fetch_keep_test_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(split_fetch_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("split_fetch_test_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(map_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_test_0_0", 0, ATtrue)), &(closures[closures_index]));
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
