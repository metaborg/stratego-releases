#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_FooKill_2;
static Symbol sym_FooKill_1;
static Symbol sym_FooDef_2;
static Symbol sym_FooGen_3;
static Symbol sym_FooGen_2;
static Symbol sym_Bar_2;
static Symbol sym_Foo_2;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_DR__DUMMY_0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym_FooKill_2 = ATmakeSymbol("FooKill", 2, ATfalse);
ATprotectSymbol(sym_FooKill_2);
sym_FooKill_1 = ATmakeSymbol("FooKill", 1, ATfalse);
ATprotectSymbol(sym_FooKill_1);
sym_FooDef_2 = ATmakeSymbol("FooDef", 2, ATfalse);
ATprotectSymbol(sym_FooDef_2);
sym_FooGen_3 = ATmakeSymbol("FooGen", 3, ATfalse);
ATprotectSymbol(sym_FooGen_3);
sym_FooGen_2 = ATmakeSymbol("FooGen", 2, ATfalse);
ATprotectSymbol(sym_FooGen_2);
sym_Bar_2 = ATmakeSymbol("Bar", 2, ATfalse);
ATprotectSymbol(sym_Bar_2);
sym_Foo_2 = ATmakeSymbol("Foo", 2, ATfalse);
ATprotectSymbol(sym_Foo_2);
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
static ATerm term195;
static ATerm term194;
static ATerm term193;
static ATerm term192;
static ATerm term191;
static ATerm term190;
static ATerm term189;
static ATerm term188;
static ATerm term187;
static ATerm term186;
static ATerm term185;
static ATerm term184;
static ATerm term183;
static ATerm term182;
static ATerm term181;
static ATerm term180;
static ATerm term179;
static ATerm term178;
static ATerm term177;
static ATerm term176;
static ATerm term175;
static ATerm term174;
static ATerm term173;
static ATerm term172;
static ATerm term171;
static ATerm term170;
static ATerm term169;
static ATerm term168;
static ATerm term167;
static ATerm term166;
static ATerm term165;
static ATerm term164;
static ATerm term163;
static ATerm term162;
static ATerm term161;
static ATerm term160;
static ATerm term159;
static ATerm term158;
static ATerm term157;
static ATerm term156;
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("dynamic-rules-highlevel-test", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("A1", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("a1", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("test-plain-unscoped-1", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeInt(1);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeInt(7);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(sym_Foo_2, term9, term11);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeInt(6);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym_FooGen_2, term9, term15);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeInt(5);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(sym_Foo_2, term9, term19);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(sym_FooKill_1, term9);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeInt(2);
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(sym_Foo_2, term9, term25);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeInt(4);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(sym_FooGen_2, term9, term29);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(sym_Foo_2, term25, term25);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeInt(3);
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(sym_FooGen_2, term9, term35);
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(sym_Bar_2, term11, term15);
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(sym_Bar_2, term25, term29);
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(sym_Bar_2, term25, term35);
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("test-plain-1", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("A2", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("test-labeled-1", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("g", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(sym_FooKill_2, term53, term9);
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("f", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(sym_FooKill_2, term57, term9);
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(sym_FooGen_3, term53, term9, term15);
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeInt(0);
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(sym_FooDef_2, term53, term63);
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeInt(12);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(sym_Foo_2, term9, term67);
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(sym_FooDef_2, term57, term63);
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(sym_Bar_2, term19, term29);
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(sym_Bar_2, term67, term35);
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("A3", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("c", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("test-add-1", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeInt(9);
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(sym_Foo_2, term9, term83);
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("h", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(sym_FooKill_2, term87, term9);
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeInt(8);
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(sym_Foo_2, term9, term91);
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeInt(50);
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(sym_FooGen_3, term53, term9, term95);
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeInt(40);
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(sym_FooGen_3, term53, term9, term99);
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(sym_FooDef_2, term87, term63);
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeInt(27);
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(sym_Foo_2, term9, term105);
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeInt(26);
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(sym_FooGen_3, term53, term9, term109);
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeInt(28);
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(sym_FooGen_3, term53, term9, term113);
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeInt(30);
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(sym_FooGen_3, term53, term9, term117);
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeInt(21);
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(sym_Foo_2, term9, term121);
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(sym_FooGen_3, term57, term9, term121);
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeInt(20);
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(sym_FooGen_3, term57, term9, term127);
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(sym_Foo_2, term9, term35);
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeInt(10);
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(sym_FooGen_2, term9, term133);
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(sym_Bar_2, term105, term113);
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeAppl(sym_Bar_2, term11, term117);
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(sym_Bar_2, term19, term121);
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeAppl(sym_Bar_2, term25, term121);
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(sym_Bar_2, term35, term133);
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeAppl(sym_Bar_2, term25, term133);
ATprotect(&(term147));
term147 = term146;
ATprotect(&(term148));
term148 = (ATerm) ATmakeAppl(ATmakeSymbol("test-add-bagof", 0, ATtrue));
ATprotect(&(term149));
term149 = term148;
ATprotect(&(term150));
term150 = (ATerm) ATmakeAppl(sym_Foo_2, term25, term35);
ATprotect(&(term151));
term151 = term150;
ATprotect(&(term152));
term152 = (ATerm) ATmakeAppl(ATmakeSymbol("i", 0, ATtrue));
ATprotect(&(term153));
term153 = term152;
ATprotect(&(term154));
term154 = (ATerm) ATmakeInt(70);
ATprotect(&(term155));
term155 = term154;
ATprotect(&(term156));
term156 = (ATerm) ATmakeAppl(sym_FooGen_3, term153, term9, term155);
ATprotect(&(term157));
term157 = term156;
ATprotect(&(term158));
term158 = (ATerm) ATmakeAppl(sym_FooDef_2, term153, term63);
ATprotect(&(term159));
term159 = term158;
ATprotect(&(term160));
term160 = (ATerm) ATmakeInt(60);
ATprotect(&(term161));
term161 = term160;
ATprotect(&(term162));
term162 = (ATerm) ATmakeAppl(sym_FooGen_3, term87, term25, term161);
ATprotect(&(term163));
term163 = term162;
ATprotect(&(term164));
term164 = (ATerm) ATmakeAppl(sym_Bar_2, term35, term161);
ATprotect(&(term165));
term165 = term164;
ATprotect(&(term166));
term166 = (ATerm) ATmakeAppl(sym_Bar_2, term105, term117);
ATprotect(&(term167));
term167 = term166;
ATprotect(&(term168));
term168 = (ATerm) ATmakeAppl(sym_Bar_2, term19, term127);
ATprotect(&(term169));
term169 = term168;
ATprotect(&(term170));
term170 = (ATerm) ATmakeAppl(sym_Bar_2, term25, term127);
ATprotect(&(term171));
term171 = term170;
ATprotect(&(term172));
term172 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-fork-and-union2", 0, ATtrue));
ATprotect(&(term173));
term173 = term172;
ATprotect(&(term174));
term174 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term175));
term175 = term174;
ATprotect(&(term176));
term176 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
ATprotect(&(term177));
term177 = term176;
ATprotect(&(term178));
term178 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-fork-and-union1", 0, ATtrue));
ATprotect(&(term179));
term179 = term178;
ATprotect(&(term180));
term180 = (ATerm) ATmakeAppl(ATmakeSymbol("A", 0, ATtrue));
ATprotect(&(term181));
term181 = term180;
ATprotect(&(term182));
term182 = (ATerm) ATmakeAppl(sym_DR__DUMMY_0);
ATprotect(&(term183));
term183 = term182;
ATprotect(&(term184));
term184 = (ATerm) ATmakeAppl(ATmakeSymbol("efe156dc1f17d1a6bba0edf13d5fef91", 0, ATtrue));
ATprotect(&(term185));
term185 = term184;
ATprotect(&(term186));
term186 = (ATerm) ATmakeAppl(ATmakeSymbol("f319df0e061ccf1d6df60ba9004faa5d", 0, ATtrue));
ATprotect(&(term187));
term187 = term186;
ATprotect(&(term188));
term188 = (ATerm) ATmakeAppl(ATmakeSymbol("Ignore the state of a dynamic rule", 0, ATtrue));
ATprotect(&(term189));
term189 = term188;
ATprotect(&(term190));
term190 = (ATerm) ATmakeAppl(ATmakeSymbol("failed", 0, ATtrue));
ATprotect(&(term191));
term191 = term190;
ATprotect(&(term192));
term192 = (ATerm) ATmakeAppl(ATmakeSymbol("B", 0, ATtrue));
ATprotect(&(term193));
term193 = term192;
ATprotect(&(term194));
term194 = (ATerm) ATmakeAppl(ATmakeSymbol("bd3a67265c2c4b36db549463f699dbcb", 0, ATtrue));
ATprotect(&(term195));
term195 = term194;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm fetch_elem_1_0 (StrSL sl, StrCL o_63, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL m_62, ATerm t);
ATerm dr_fork_and_union_2_1 (StrSL sl, StrCL p_55, StrCL q_55, ATerm o_55, ATerm t);
ATerm dr_add_rule_0_4 (StrSL sl, ATerm x_47, ATerm y_47, ATerm z_47, ATerm a_48, ATerm t);
ATerm dr_add_rule_0_3 (StrSL sl, ATerm u_47, ATerm v_47, ATerm w_47, ATerm t);
ATerm dr_undefine_rule_0_3 (StrSL sl, ATerm o_47, ATerm p_47, ATerm q_47, ATerm t);
ATerm dr_undefine_rule_0_2 (StrSL sl, ATerm m_47, ATerm n_47, ATerm t);
ATerm dr_set_rule_0_4 (StrSL sl, ATerm a_47, ATerm b_47, ATerm c_47, ATerm d_47, ATerm t);
ATerm dr_set_rule_0_3 (StrSL sl, ATerm x_46, ATerm y_46, ATerm z_46, ATerm t);
ATerm dr_lookup_rule_0_2 (StrSL sl, ATerm q_46, ATerm r_46, ATerm t);
ATerm dr_ignore_states_1_1 (StrSL sl, StrCL p_46, ATerm o_46, ATerm t);
ATerm dr_ignore_state_1_1 (StrSL sl, StrCL n_46, ATerm m_46, ATerm t);
ATerm dr_label_scope_0_2 (StrSL sl, ATerm h_46, ATerm i_46, ATerm t);
ATerm dr_scope_1_1 (StrSL sl, StrCL x_45, ATerm w_45, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL m_43, ATerm t);
ATerm lt_0_0 (StrSL sl, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL o_22, StrCL p_22, StrCL q_22, StrCL r_22, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL m_22, StrCL n_22, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
ATerm B_0_0 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
ATerm A_0_0 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
ATerm bagof_A_0_0 (StrSL sl, ATerm t);
ATerm aux_A_0_1 (StrSL sl, ATerm x_20, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
ATerm test_dr_ignore_state_0_0 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
ATerm test_dr_fork_and_union_strategy2_0_0 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
ATerm test_dr_fork_and_union_strategy1_0_0 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
ATerm test_dr_fork_and_union_0_0 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
ATerm test_add_bagof_0_0 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
ATerm test_add_1_0_0 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
ATerm bagof_A3_0_0 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
ATerm A3_0_0 (StrSL sl, ATerm t);
ATerm A3_aux_0_2 (StrSL sl, ATerm i_7, ATerm j_7, ATerm t);
ATerm Hide3_0_0 (StrSL sl, ATerm t);
ATerm Gen3_0_0 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
ATerm Strategy3_bagof_0_0 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
ATerm Strategy3_0_0 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
ATerm test_labeled_1_0_0 (StrSL sl, ATerm t);
ATerm A2_0_0 (StrSL sl, ATerm t);
ATerm Hide2_0_0 (StrSL sl, ATerm t);
ATerm Gen2_0_0 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
ATerm Strategy2_0_0 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
ATerm test_plain_1_0_0 (StrSL sl, ATerm t);
ATerm A1_0_0 (StrSL sl, ATerm t);
ATerm Hide1_0_0 (StrSL sl, ATerm t);
ATerm Gen1_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
ATerm Strategy1_unscoped_0_0 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm Strategy1_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm B_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "B_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
sl_init_var(0, l_20);
{
struct str_closure j_96 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(j_96);
if((l_20 == NULL))
{
l_20 = t;
}
else
if((l_20 != t))
goto fail86 ;
n_20 = t;
q_20 = t;
t = term193;
o_20 = t;
t = q_20;
r_20 = t;
t = (ATerm) ATinsert(ATempty, term183);
p_20 = t;
t = r_20;
t = dr_lookup_rule_0_2(sl, o_20, p_20, t);
if((t == NULL))
goto fail86 ;
m_20 = t;
t = n_20;
t = m_20;
t = fetch_elem_1_0(sl, lifted66_cl, t);
if((t == NULL))
goto fail86 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_93 = NULL,f_93 = NULL,e_93 = NULL;
f_93 = t;
if((sl_readvar(0, sl) == NULL))
goto fail87 ;
else
{
t = sl_readvar(0, sl);
}
d_93 = t;
t = f_93;
if(!((ATgetSymbol(t) == ATmakeSymbol("bd3a67265c2c4b36db549463f699dbcb", 0, ATtrue))))
goto fail87 ;
e_93 = t;
t = d_93;
t = e_93;
t = term49;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
ATerm A_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "A_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
sl_init_var(0, h_16);
{
struct str_closure h_96 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(h_96);
if((h_16 == NULL))
{
h_16 = t;
}
else
if((h_16 != t))
goto fail84 ;
j_16 = t;
m_16 = t;
t = term181;
k_16 = t;
t = m_16;
n_16 = t;
t = (ATerm) ATinsert(ATempty, term183);
l_16 = t;
t = n_16;
t = dr_lookup_rule_0_2(sl, k_16, l_16, t);
if((t == NULL))
goto fail84 ;
i_16 = t;
t = j_16;
t = i_16;
t = fetch_elem_1_0(sl, lifted65_cl, t);
if((t == NULL))
goto fail84 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail85 ;
else
{
t = aux_A_0_1(sl_up(sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail85 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
ATerm bagof_A_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "bagof_A_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
sl_init_var(0, a_16);
{
struct str_closure f_96 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(f_96);
if((a_16 == NULL))
{
a_16 = t;
}
else
if((a_16 != t))
goto fail82 ;
c_16 = t;
{
ATerm trm48 = t;
ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
f_16 = t;
t = term181;
d_16 = t;
t = f_16;
g_16 = t;
t = (ATerm) ATinsert(ATempty, term183);
e_16 = t;
t = g_16;
t = dr_lookup_rule_0_2(sl, d_16, e_16, t);
if((t == NULL))
goto label48 ;
goto label47 ;
label48 :
t = trm48;
t = (ATerm) ATempty;
goto label47 ;
label47 :
;
b_16 = t;
t = c_16;
t = b_16;
t = filter_1_0(sl, lifted64_cl, t);
if((t == NULL))
goto fail82 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail83 ;
else
{
t = aux_A_0_1(sl_up(sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail83 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
ATerm aux_A_0_1 (StrSL sl, ATerm x_20, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aux_A_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm47 = t;
ATerm f_12 = NULL;
if(!((ATgetSymbol(t) == ATmakeSymbol("f319df0e061ccf1d6df60ba9004faa5d", 0, ATtrue))))
goto label46 ;
f_12 = t;
t = x_20;
t = f_12;
t = term177;
goto label45 ;
label46 :
t = trm47;
{
ATerm d_12 = NULL;
if(!((ATgetSymbol(t) == ATmakeSymbol("efe156dc1f17d1a6bba0edf13d5fef91", 0, ATtrue))))
goto fail81 ;
d_12 = t;
t = x_20;
t = d_12;
t = term49;
goto label45 ;
}
label45 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_dr_ignore_state_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_dr_ignore_state_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_10 = NULL,t_10 = NULL;
struct str_closure e_96 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(e_96);
t_10 = t;
t = term181;
s_10 = t;
t = t_10;
t = dr_scope_1_1(sl, lifted47_cl, s_10, t);
if((t == NULL))
goto fail63 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_10 = NULL,v_10 = NULL;
struct str_closure d_96 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(d_96);
v_10 = t;
t = term193;
u_10 = t;
t = v_10;
t = dr_scope_1_1(sl_up(sl), lifted48_cl, u_10, t);
if((t == NULL))
goto fail64 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,r_10 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
struct str_closure j_95 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(j_95);
struct str_closure k_95 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(k_95);
struct str_closure l_95 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(l_95);
struct str_closure m_95 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(m_95);
q_10 = t;
z_10 = t;
t = term181;
w_10 = t;
t = z_10;
a_11 = t;
t = (ATerm) ATinsert(ATempty, term183);
x_10 = t;
t = a_11;
b_11 = t;
t = term187;
y_10 = t;
t = b_11;
t = dr_set_rule_0_3(sl_up(sl_up(sl)), w_10, x_10, y_10, t);
if((t == NULL))
goto fail65 ;
t = q_10;
r_10 = t;
f_11 = t;
t = term193;
c_11 = t;
t = f_11;
g_11 = t;
t = (ATerm) ATinsert(ATempty, term183);
d_11 = t;
t = g_11;
h_11 = t;
t = term195;
e_11 = t;
t = h_11;
t = dr_set_rule_0_3(sl_up(sl_up(sl)), c_11, d_11, e_11, t);
if((t == NULL))
goto fail65 ;
t = r_10;
{
struct str_closure o_95 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(o_95);
struct str_closure p_95 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(p_95);
struct str_closure u_95 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(u_95);
struct str_closure v_95 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(v_95);
t = apply_test_4_0(sl_up(sl_up(sl)), lifted49_cl, lifted50_cl, lifted52_cl, lifted53_cl, t);
if((t == NULL))
goto fail65 ;
{
struct str_closure z_95 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(z_95);
struct str_closure a_96 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(a_96);
struct str_closure b_96 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(b_96);
struct str_closure c_96 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(c_96);
t = apply_test_4_0(sl_up(sl_up(sl)), lifted54_cl, lifted55_cl, lifted57_cl, lifted58_cl, t);
if((t == NULL))
goto fail65 ;
t = apply_test_4_0(sl_up(sl_up(sl)), lifted59_cl, lifted60_cl, lifted62_cl, lifted63_cl, t);
if((t == NULL))
goto fail65 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term177;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term175;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_11 = NULL,l_11 = NULL;
struct str_closure y_95 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(y_95);
l_11 = t;
t = term193;
k_11 = t;
t = l_11;
t = dr_ignore_state_1_1(sl_up(sl_up(sl_up(sl))), lifted56_cl, k_11, t);
if((t == NULL))
goto fail77 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm46 = t;
t = B_0_0(sl_up(sl_up(sl_up(sl_up(sl)))), t);
if((t == NULL))
goto label44 ;
goto label43 ;
label44 :
t = trm46;
t = A_0_0(sl_up(sl_up(sl_up(sl_up(sl)))), t);
if((t == NULL))
goto fail78 ;
else
goto label43 ;
label43 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term189;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term49;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term175;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_11 = NULL,j_11 = NULL;
struct str_closure n_95 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(n_95);
j_11 = t;
t = term181;
i_11 = t;
t = j_11;
t = dr_ignore_state_1_1(sl_up(sl_up(sl_up(sl))), lifted51_cl, i_11, t);
if((t == NULL))
goto fail72 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm45 = t;
t = A_0_0(sl_up(sl_up(sl_up(sl_up(sl)))), t);
if((t == NULL))
goto label42 ;
goto label41 ;
label42 :
t = trm45;
t = B_0_0(sl_up(sl_up(sl_up(sl_up(sl)))), t);
if((t == NULL))
goto fail73 ;
else
goto label41 ;
label41 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term189;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term191;
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
t = term175;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_11 = NULL,n_11 = NULL;
struct str_closure i_95 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(i_95);
n_11 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, term193), term181);
m_11 = t;
t = n_11;
t = dr_ignore_states_1_1(sl_up(sl_up(sl_up(sl))), lifted61_cl, m_11, t);
if((t == NULL))
goto fail67 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm43 = t;
t = B_0_0(sl_up(sl_up(sl_up(sl_up(sl)))), t);
if((t == NULL))
goto label39 ;
goto label38 ;
label39 :
t = trm43;
{
ATerm trm44 = t;
t = A_0_0(sl_up(sl_up(sl_up(sl_up(sl)))), t);
if((t == NULL))
goto label40 ;
goto label38 ;
label40 :
t = trm44;
t = term191;
goto label38 ;
}
label38 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term189;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_dr_fork_and_union_strategy2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_dr_fork_and_union_strategy2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_9 = NULL,z_9 = NULL;
struct str_closure h_95 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(h_95);
z_9 = t;
t = term181;
y_9 = t;
t = z_9;
t = dr_scope_1_1(sl, lifted44_cl, y_9, t);
if((t == NULL))
goto fail60 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
w_9 = t;
d_10 = t;
t = term181;
a_10 = t;
t = d_10;
e_10 = t;
t = (ATerm) ATinsert(ATempty, term183);
b_10 = t;
t = e_10;
f_10 = t;
t = term187;
c_10 = t;
t = f_10;
t = dr_set_rule_0_3(sl_up(sl), a_10, b_10, c_10, t);
if((t == NULL))
goto fail61 ;
t = w_9;
h_10 = t;
t = (ATerm) ATinsert(ATempty, term181);
g_10 = t;
t = h_10;
{
struct str_closure d_95 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(d_95);
struct str_closure g_95 = { &(_Id) , sl_up(sl) };
StrCL lifted46_cl = &(g_95);
t = dr_fork_and_union_2_1(sl_up(sl), lifted45_cl, lifted46_cl, g_10, t);
if((t == NULL))
goto fail61 ;
t = bagof_A_0_0(sl_up(sl), t);
if((t == NULL))
goto fail61 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_9 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
x_9 = t;
l_10 = t;
t = term181;
i_10 = t;
t = l_10;
m_10 = t;
t = (ATerm) ATinsert(ATempty, term183);
j_10 = t;
t = m_10;
n_10 = t;
t = term185;
k_10 = t;
t = n_10;
t = dr_set_rule_0_3(sl_up(sl_up(sl)), i_10, j_10, k_10, t);
if((t == NULL))
goto fail62 ;
t = x_9;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_dr_fork_and_union_strategy1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_dr_fork_and_union_strategy1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_9 = NULL,f_9 = NULL;
struct str_closure c_95 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(c_95);
f_9 = t;
t = term181;
e_9 = t;
t = f_9;
t = dr_scope_1_1(sl, lifted41_cl, e_9, t);
if((t == NULL))
goto fail56 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_9 = NULL,h_9 = NULL;
h_9 = t;
t = (ATerm) ATinsert(ATempty, term181);
g_9 = t;
t = h_9;
{
struct str_closure z_94 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(z_94);
struct str_closure a_95 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(a_95);
t = dr_fork_and_union_2_1(sl_up(sl), lifted42_cl, lifted43_cl, g_9, t);
if((t == NULL))
goto fail57 ;
t = bagof_A_0_0(sl_up(sl), t);
if((t == NULL))
goto fail57 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
d_9 = t;
r_9 = t;
t = term181;
o_9 = t;
t = r_9;
s_9 = t;
t = (ATerm) ATinsert(ATempty, term183);
p_9 = t;
t = s_9;
t_9 = t;
t = term187;
q_9 = t;
t = t_9;
t = dr_set_rule_0_3(sl_up(sl_up(sl)), o_9, p_9, q_9, t);
if((t == NULL))
goto fail59 ;
t = d_9;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
c_9 = t;
l_9 = t;
t = term181;
i_9 = t;
t = l_9;
m_9 = t;
t = (ATerm) ATinsert(ATempty, term183);
j_9 = t;
t = m_9;
n_9 = t;
t = term185;
k_9 = t;
t = n_9;
t = dr_set_rule_0_3(sl_up(sl_up(sl)), i_9, j_9, k_9, t);
if((t == NULL))
goto fail58 ;
t = c_9;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_dr_fork_and_union_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_dr_fork_and_union_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_94 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(q_94);
struct str_closure r_94 = { &(test_dr_fork_and_union_strategy2_0_0) , sl };
StrCL lifted38_cl = &(r_94);
struct str_closure s_94 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(s_94);
struct str_closure t_94 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(t_94);
struct str_closure u_94 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(u_94);
struct str_closure v_94 = { &(test_dr_fork_and_union_strategy1_0_0) , sl };
StrCL lifted34_cl = &(v_94);
struct str_closure w_94 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(w_94);
struct str_closure y_94 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(y_94);
t = apply_test_4_0(sl, lifted33_cl, lifted34_cl, lifted35_cl, lifted36_cl, t);
if((t == NULL))
goto fail49 ;
t = apply_test_4_0(sl, lifted37_cl, lifted38_cl, lifted39_cl, lifted40_cl, t);
if((t == NULL))
goto fail49 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term49), term177);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term175;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term179;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term49), term177);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term175;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term173;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_add_bagof_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_add_bagof_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_94 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(m_94);
struct str_closure n_94 = { &(Strategy3_bagof_0_0) , sl };
StrCL lifted30_cl = &(n_94);
struct str_closure o_94 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(o_94);
struct str_closure p_94 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(p_94);
t = apply_test_4_0(sl, lifted29_cl, lifted30_cl, lifted31_cl, lifted32_cl, t);
if((t == NULL))
goto fail45 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term165)), term157), term159), (ATerm) ATempty), term89), (ATerm) ATempty), term55), term97), term101), term163), term103), (ATerm) ATinsert(ATinsert(ATempty, term167), term137)), term111), term115), (ATerm) ATinsert(ATempty, term139)), term119), (ATerm) ATempty), (ATerm) ATinsert(ATinsert(ATempty, term169), term141)), term65), (ATerm) ATinsert(ATinsert(ATempty, term171), term143)), term125), term129), (ATerm) ATempty), (ATerm) ATinsert(ATempty, term145)), (ATerm) ATempty), term71), (ATerm) ATempty), (ATerm) ATinsert(ATempty, term147)), term135);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term151), term157), term159), term85), term89), term93), term55), term97), term101), term163), term103), term107), term111), term115), term13), term119), term123), term21), term65), term27), term125), term129), term69), term131), term33), term71), term69), term27), term135);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term149;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_add_1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_add_1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_94 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(i_94);
struct str_closure j_94 = { &(Strategy3_0_0) , sl };
StrCL lifted26_cl = &(j_94);
struct str_closure k_94 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(k_94);
struct str_closure l_94 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(l_94);
t = apply_test_4_0(sl, lifted25_cl, lifted26_cl, lifted27_cl, lifted28_cl, t);
if((t == NULL))
goto fail41 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term85), term89), term93), term55), term97), term101), term103), term137), term111), term115), term139), term119), term123), term141), term65), term143), term125), term129), term69), term145), term33), term71), term69), term147), term135);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term85), term89), term93), term55), term97), term101), term103), term107), term111), term115), term13), term119), term123), term21), term65), term27), term125), term129), term69), term131), term33), term71), term69), term27), term135);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term81;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
ATerm bagof_A3_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "bagof_A3_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
sl_init_var(0, u_7);
sl_init_var(1, v_7);
{
struct str_closure h_94 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(h_94);
if(match_cons(t, sym_Foo_2))
{
if((v_7 == NULL))
{
v_7 = ATgetArgument(t, 0);
}
else
if((v_7 != ATgetArgument(t, 0)))
goto fail39 ;
if((u_7 == NULL))
{
u_7 = ATgetArgument(t, 1);
}
else
if((u_7 != ATgetArgument(t, 1)))
goto fail39 ;
}
else
goto fail39 ;
x_7 = t;
{
ATerm trm42 = t;
ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL;
a_8 = t;
t = term77;
y_7 = t;
t = a_8;
b_8 = t;
if((v_7 == NULL))
goto label37 ;
else
{
t = (ATerm) ATmakeAppl(sym_Foo_2, v_7, (ATerm) ATempty);
}
z_7 = t;
t = b_8;
t = dr_lookup_rule_0_2(sl, y_7, z_7, t);
if((t == NULL))
goto label37 ;
goto label36 ;
label37 :
t = trm42;
t = (ATerm) ATempty;
goto label36 ;
label36 :
;
w_7 = t;
t = x_7;
t = w_7;
t = filter_1_0(sl, lifted24_cl, t);
if((t == NULL))
goto fail39 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(1, sl) == NULL) || (sl_readvar(0, sl) == NULL)))
goto fail40 ;
else
{
t = A3_aux_0_2(sl_up(sl), sl_readvar(1, sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail40 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
ATerm A3_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "A3_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
sl_init_var(0, m_7);
sl_init_var(1, n_7);
{
struct str_closure g_94 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(g_94);
if(match_cons(t, sym_Foo_2))
{
if((n_7 == NULL))
{
n_7 = ATgetArgument(t, 0);
}
else
if((n_7 != ATgetArgument(t, 0)))
goto fail37 ;
if((m_7 == NULL))
{
m_7 = ATgetArgument(t, 1);
}
else
if((m_7 != ATgetArgument(t, 1)))
goto fail37 ;
}
else
goto fail37 ;
p_7 = t;
s_7 = t;
t = term77;
q_7 = t;
t = s_7;
t_7 = t;
if((n_7 == NULL))
goto fail37 ;
else
{
t = (ATerm) ATmakeAppl(sym_Foo_2, n_7, (ATerm) ATempty);
}
r_7 = t;
t = t_7;
t = dr_lookup_rule_0_2(sl, q_7, r_7, t);
if((t == NULL))
goto fail37 ;
o_7 = t;
t = p_7;
t = o_7;
t = fetch_elem_1_0(sl, lifted23_cl, t);
if((t == NULL))
goto fail37 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(1, sl) == NULL) || (sl_readvar(0, sl) == NULL)))
goto fail38 ;
else
{
t = A3_aux_0_2(sl_up(sl), sl_readvar(1, sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail38 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
ATerm A3_aux_0_2 (StrSL sl, ATerm i_7, ATerm j_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "A3_aux_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_7 = NULL,l_7 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm41 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm41) == ATmakeSymbol("c", 0, ATtrue))))
goto fail36 ;
k_7 = ATgetArgument(t, 1);
}
else
goto fail36 ;
l_7 = t;
t = (ATerm) ATmakeAppl(sym__2, j_7, k_7);
t = lt_0_0(sl, t);
if((t == NULL))
goto fail36 ;
t = l_7;
t = (ATerm) ATmakeAppl(sym_Bar_2, j_7, k_7);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
ATerm Hide3_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Hide3_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm40 = t;
ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
if(match_cons(t, sym_FooKill_1))
{
d_7 = ATgetArgument(t, 0);
}
else
goto label35 ;
g_7 = t;
t = term77;
e_7 = t;
t = g_7;
h_7 = t;
t = (ATerm) ATmakeAppl(sym_Foo_2, d_7, (ATerm) ATempty);
f_7 = t;
t = h_7;
t = dr_undefine_rule_0_2(sl, e_7, f_7, t);
if((t == NULL))
goto label35 ;
goto label34 ;
label35 :
t = trm40;
{
ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL;
if(match_cons(t, sym_FooKill_2))
{
x_6 = ATgetArgument(t, 0);
y_6 = ATgetArgument(t, 1);
}
else
goto fail35 ;
b_7 = t;
t = term77;
z_6 = t;
t = b_7;
c_7 = t;
t = (ATerm) ATmakeAppl(sym_Foo_2, y_6, (ATerm) ATempty);
a_7 = t;
t = c_7;
t = dr_undefine_rule_0_3(sl, z_6, x_6, a_7, t);
if((t == NULL))
goto fail35 ;
else
goto label34 ;
}
label34 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm Gen3_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Gen3_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm39 = t;
ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL;
if(match_cons(t, sym_FooGen_2))
{
p_6 = ATgetArgument(t, 0);
q_6 = ATgetArgument(t, 1);
}
else
goto label33 ;
u_6 = t;
t = term77;
r_6 = t;
t = u_6;
v_6 = t;
t = (ATerm) ATmakeAppl(sym_Foo_2, p_6, (ATerm) ATempty);
s_6 = t;
t = v_6;
w_6 = t;
t = (ATerm) ATmakeAppl(sym__2, term79, q_6);
t_6 = t;
t = w_6;
t = dr_add_rule_0_3(sl, r_6, s_6, t_6, t);
if((t == NULL))
goto label33 ;
goto label32 ;
label33 :
t = trm39;
{
ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL;
if(match_cons(t, sym_FooGen_3))
{
g_6 = ATgetArgument(t, 0);
h_6 = ATgetArgument(t, 1);
i_6 = ATgetArgument(t, 2);
}
else
goto fail34 ;
m_6 = t;
t = term77;
j_6 = t;
t = m_6;
n_6 = t;
t = (ATerm) ATmakeAppl(sym_Foo_2, h_6, (ATerm) ATempty);
k_6 = t;
t = n_6;
o_6 = t;
t = (ATerm) ATmakeAppl(sym__2, term79, i_6);
l_6 = t;
t = o_6;
t = dr_add_rule_0_4(sl, j_6, g_6, k_6, l_6, t);
if((t == NULL))
goto fail34 ;
else
goto label32 ;
}
label32 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
ATerm Strategy3_bagof_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Strategy3_bagof_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_6 = NULL,c_6 = NULL;
struct str_closure f_94 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(f_94);
c_6 = t;
t = term77;
b_6 = t;
t = c_6;
t = dr_scope_1_1(sl, lifted21_cl, b_6, t);
if((t == NULL))
goto fail31 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm32 = t;
ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
ATerm trm33;
trm33 = (ATerm) ATgetAnnotations(t);
if((trm33 == NULL))
trm33 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
w_5 = ATgetFirst((ATermList) t);
x_5 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label27 ;
a_6 = trm33;
t = w_5;
{
struct str_closure e_94 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(e_94);
t = try_1_0(sl_up(sl), lifted22_cl, t);
if((t == NULL))
goto label27 ;
y_5 = t;
t = x_5;
t = Strategy3_bagof_0_0(sl_up(sl), t);
if((t == NULL))
goto label27 ;
z_5 = t;
{
ATerm trm38;
trm38 = CheckATermList(z_5);
if((trm38 == NULL))
goto label27 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm38, y_5), a_6);
}
}
goto label26 ;
label27 :
t = trm32;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label26 ;
else
goto fail32 ;
label26 :
;
}
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
{
ATerm trm34 = t;
ATerm u_92 = NULL,v_92 = NULL,w_92 = NULL;
if(match_cons(t, sym_FooDef_2))
{
u_92 = ATgetArgument(t, 0);
{
ATerm trm35 = ATgetArgument(t, 1);
}
}
else
goto label29 ;
w_92 = t;
t = term77;
v_92 = t;
t = w_92;
t = dr_label_scope_0_2(sl_up(sl_up(sl)), v_92, u_92, t);
if((t == NULL))
goto label29 ;
goto label28 ;
label29 :
t = trm34;
{
ATerm trm36 = t;
t = Gen3_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label30 ;
goto label28 ;
label30 :
t = trm36;
{
ATerm trm37 = t;
t = bagof_A3_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label31 ;
goto label28 ;
label31 :
t = trm37;
t = Hide3_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail33 ;
else
goto label28 ;
}
}
label28 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm Strategy3_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Strategy3_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_5 = NULL,v_5 = NULL;
struct str_closure d_94 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(d_94);
v_5 = t;
t = term77;
u_5 = t;
t = v_5;
t = dr_scope_1_1(sl, lifted19_cl, u_5, t);
if((t == NULL))
goto fail28 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm25 = t;
ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL;
ATerm trm26;
trm26 = (ATerm) ATgetAnnotations(t);
if((trm26 == NULL))
trm26 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
p_5 = ATgetFirst((ATermList) t);
q_5 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label21 ;
t_5 = trm26;
t = p_5;
{
struct str_closure c_94 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(c_94);
t = try_1_0(sl_up(sl), lifted20_cl, t);
if((t == NULL))
goto label21 ;
r_5 = t;
t = q_5;
t = Strategy3_0_0(sl_up(sl), t);
if((t == NULL))
goto label21 ;
s_5 = t;
{
ATerm trm31;
trm31 = CheckATermList(s_5);
if((trm31 == NULL))
goto label21 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm31, r_5), t_5);
}
}
goto label20 ;
label21 :
t = trm25;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label20 ;
else
goto fail29 ;
label20 :
;
}
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
{
ATerm trm27 = t;
ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL;
if(match_cons(t, sym_FooDef_2))
{
q_92 = ATgetArgument(t, 0);
{
ATerm trm28 = ATgetArgument(t, 1);
}
}
else
goto label23 ;
s_92 = t;
t = term77;
r_92 = t;
t = s_92;
t = dr_label_scope_0_2(sl_up(sl_up(sl)), r_92, q_92, t);
if((t == NULL))
goto label23 ;
goto label22 ;
label23 :
t = trm27;
{
ATerm trm29 = t;
t = Gen3_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label24 ;
goto label22 ;
label24 :
t = trm29;
{
ATerm trm30 = t;
t = A3_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label25 ;
goto label22 ;
label25 :
t = trm30;
t = Hide3_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail30 ;
else
goto label22 ;
}
}
label22 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_labeled_1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_labeled_1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_93 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(y_93);
struct str_closure z_93 = { &(Strategy2_0_0) , sl };
StrCL lifted16_cl = &(z_93);
struct str_closure a_94 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(a_94);
struct str_closure b_94 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(b_94);
t = apply_test_4_0(sl, lifted15_cl, lifted16_cl, lifted17_cl, lifted18_cl, t);
if((t == NULL))
goto fail24 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term55), term39), term59), term61), term73), term65), term41), term31), term75), term33), term71), term43), term37);
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term55), term13), term59), term61), term21), term65), term27), term31), term69), term33), term71), term27), term37);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
ATerm A2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "A2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
if(match_cons(t, sym_Foo_2))
{
i_5 = ATgetArgument(t, 0);
h_5 = ATgetArgument(t, 1);
}
else
goto fail23 ;
k_5 = t;
n_5 = t;
t = term47;
l_5 = t;
t = n_5;
o_5 = t;
t = (ATerm) ATmakeAppl(sym_Foo_2, i_5, (ATerm) ATempty);
m_5 = t;
t = o_5;
t = dr_lookup_rule_0_2(sl, l_5, m_5, t);
if((t == NULL))
goto fail23 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm22 = ATgetFirst((ATermList) t);
if(match_cons(trm22, sym__2))
{
ATerm trm23 = ATgetArgument(trm22, 0);
if(!((ATgetSymbol(trm23) == ATmakeSymbol("b", 0, ATtrue))))
goto fail23 ;
j_5 = ATgetArgument(trm22, 1);
}
else
goto fail23 ;
{
ATerm trm24 = (ATerm) ATgetNext((ATermList) t);
}
}
else
goto fail23 ;
t = k_5;
t = (ATerm) ATmakeAppl(sym_Bar_2, h_5, j_5);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm Hide2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Hide2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm21 = t;
ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
if(match_cons(t, sym_FooKill_1))
{
c_5 = ATgetArgument(t, 0);
}
else
goto label19 ;
f_5 = t;
t = term47;
d_5 = t;
t = f_5;
g_5 = t;
t = (ATerm) ATmakeAppl(sym_Foo_2, c_5, (ATerm) ATempty);
e_5 = t;
t = g_5;
t = dr_undefine_rule_0_2(sl, d_5, e_5, t);
if((t == NULL))
goto label19 ;
goto label18 ;
label19 :
t = trm21;
{
ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
if(match_cons(t, sym_FooKill_2))
{
w_4 = ATgetArgument(t, 0);
x_4 = ATgetArgument(t, 1);
}
else
goto fail22 ;
a_5 = t;
t = term47;
y_4 = t;
t = a_5;
b_5 = t;
t = (ATerm) ATmakeAppl(sym_Foo_2, x_4, (ATerm) ATempty);
z_4 = t;
t = b_5;
t = dr_undefine_rule_0_3(sl, y_4, w_4, z_4, t);
if((t == NULL))
goto fail22 ;
else
goto label18 ;
}
label18 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm Gen2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Gen2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm20 = t;
ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
if(match_cons(t, sym_FooGen_3))
{
n_4 = ATgetArgument(t, 0);
o_4 = ATgetArgument(t, 1);
p_4 = ATgetArgument(t, 2);
}
else
goto label17 ;
t_4 = t;
t = term47;
q_4 = t;
t = t_4;
u_4 = t;
t = (ATerm) ATmakeAppl(sym_Foo_2, o_4, (ATerm) ATempty);
r_4 = t;
t = u_4;
v_4 = t;
t = (ATerm) ATmakeAppl(sym__2, term49, p_4);
s_4 = t;
t = v_4;
t = dr_set_rule_0_4(sl, q_4, n_4, r_4, s_4, t);
if((t == NULL))
goto label17 ;
goto label16 ;
label17 :
t = trm20;
{
ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
if(match_cons(t, sym_FooGen_2))
{
f_4 = ATgetArgument(t, 0);
g_4 = ATgetArgument(t, 1);
}
else
goto fail21 ;
k_4 = t;
t = term47;
h_4 = t;
t = k_4;
l_4 = t;
t = (ATerm) ATmakeAppl(sym_Foo_2, f_4, (ATerm) ATempty);
i_4 = t;
t = l_4;
m_4 = t;
t = (ATerm) ATmakeAppl(sym__2, term49, g_4);
j_4 = t;
t = m_4;
t = dr_set_rule_0_3(sl, h_4, i_4, j_4, t);
if((t == NULL))
goto fail21 ;
else
goto label16 ;
}
label16 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm Strategy2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Strategy2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_4 = NULL,b_4 = NULL;
struct str_closure x_93 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(x_93);
b_4 = t;
t = term47;
a_4 = t;
t = b_4;
t = dr_scope_1_1(sl, lifted13_cl, a_4, t);
if((t == NULL))
goto fail18 ;
}
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
ATerm trm13 = t;
ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
ATerm trm14;
trm14 = (ATerm) ATgetAnnotations(t);
if((trm14 == NULL))
trm14 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
v_3 = ATgetFirst((ATermList) t);
w_3 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label11 ;
z_3 = trm14;
t = v_3;
{
struct str_closure w_93 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(w_93);
t = try_1_0(sl_up(sl), lifted14_cl, t);
if((t == NULL))
goto label11 ;
x_3 = t;
t = w_3;
t = Strategy2_0_0(sl_up(sl), t);
if((t == NULL))
goto label11 ;
y_3 = t;
{
ATerm trm19;
trm19 = CheckATermList(y_3);
if((trm19 == NULL))
goto label11 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm19, x_3), z_3);
}
}
goto label10 ;
label11 :
t = trm13;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label10 ;
else
goto fail19 ;
label10 :
;
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
{
ATerm trm15 = t;
ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL;
if(match_cons(t, sym_FooDef_2))
{
n_92 = ATgetArgument(t, 0);
{
ATerm trm16 = ATgetArgument(t, 1);
}
}
else
goto label13 ;
p_92 = t;
t = term47;
o_92 = t;
t = p_92;
t = dr_label_scope_0_2(sl_up(sl_up(sl)), o_92, n_92, t);
if((t == NULL))
goto label13 ;
goto label12 ;
label13 :
t = trm15;
{
ATerm trm17 = t;
t = Gen2_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label14 ;
goto label12 ;
label14 :
t = trm17;
{
ATerm trm18 = t;
t = Hide2_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label15 ;
goto label12 ;
label15 :
t = trm18;
t = A2_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail20 ;
else
goto label12 ;
}
}
label12 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_plain_1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_plain_1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_93 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(m_93);
struct str_closure o_93 = { &(Strategy1_unscoped_0_0) , sl };
StrCL lifted10_cl = &(o_93);
struct str_closure q_93 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(q_93);
struct str_closure r_93 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(r_93);
struct str_closure s_93 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(s_93);
struct str_closure t_93 = { &(Strategy1_0_0) , sl };
StrCL lifted6_cl = &(t_93);
struct str_closure u_93 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(u_93);
struct str_closure v_93 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(v_93);
t = apply_test_4_0(sl, lifted5_cl, lifted6_cl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail11 ;
t = apply_test_4_0(sl, lifted9_cl, lifted10_cl, lifted11_cl, lifted12_cl, t);
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term39), term17), term21), term23), term41), term31), term33), term43), term37);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term17), term21), term23), term27), term31), term33), term27), term37);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term45;
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term39), term17), term21), term23), term41), term31), term33), term43), term37);
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term17), term21), term23), term27), term31), term33), term27), term37);
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
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
ATerm A1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "A1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
if(match_cons(t, sym_Foo_2))
{
o_3 = ATgetArgument(t, 0);
n_3 = ATgetArgument(t, 1);
}
else
goto fail10 ;
q_3 = t;
t_3 = t;
t = term3;
r_3 = t;
t = t_3;
u_3 = t;
t = (ATerm) ATmakeAppl(sym_Foo_2, o_3, (ATerm) ATempty);
s_3 = t;
t = u_3;
t = dr_lookup_rule_0_2(sl, r_3, s_3, t);
if((t == NULL))
goto fail10 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm10 = ATgetFirst((ATermList) t);
if(match_cons(trm10, sym__2))
{
ATerm trm11 = ATgetArgument(trm10, 0);
if(!((ATgetSymbol(trm11) == ATmakeSymbol("a1", 0, ATtrue))))
goto fail10 ;
p_3 = ATgetArgument(trm10, 1);
}
else
goto fail10 ;
{
ATerm trm12 = (ATerm) ATgetNext((ATermList) t);
}
}
else
goto fail10 ;
t = q_3;
t = (ATerm) ATmakeAppl(sym_Bar_2, n_3, p_3);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm Hide1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Hide1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
if(match_cons(t, sym_FooKill_1))
{
i_3 = ATgetArgument(t, 0);
}
else
goto fail9 ;
l_3 = t;
t = term3;
j_3 = t;
t = l_3;
m_3 = t;
t = (ATerm) ATmakeAppl(sym_Foo_2, i_3, (ATerm) ATempty);
k_3 = t;
t = m_3;
t = dr_undefine_rule_0_2(sl, j_3, k_3, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm Gen1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Gen1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL;
if(match_cons(t, sym_FooGen_2))
{
a_3 = ATgetArgument(t, 0);
b_3 = ATgetArgument(t, 1);
}
else
goto fail8 ;
f_3 = t;
t = term3;
c_3 = t;
t = f_3;
g_3 = t;
t = (ATerm) ATmakeAppl(sym_Foo_2, a_3, (ATerm) ATempty);
d_3 = t;
t = g_3;
h_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term5, b_3);
e_3 = t;
t = h_3;
t = dr_set_rule_0_3(sl, c_3, d_3, e_3, t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm Strategy1_unscoped_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Strategy1_unscoped_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm5 = t;
ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
ATerm trm6;
trm6 = (ATerm) ATgetAnnotations(t);
if((trm6 == NULL))
trm6 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
v_2 = ATgetFirst((ATermList) t);
w_2 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label6 ;
z_2 = trm6;
t = v_2;
{
struct str_closure l_93 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(l_93);
t = try_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto label6 ;
x_2 = t;
t = w_2;
t = Strategy1_unscoped_0_0(sl, t);
if((t == NULL))
goto label6 ;
y_2 = t;
{
ATerm trm9;
trm9 = CheckATermList(y_2);
if((trm9 == NULL))
goto label6 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm9, x_2), z_2);
}
}
goto label5 ;
label6 :
t = trm5;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label5 ;
else
goto fail6 ;
label5 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm7 = t;
t = Gen1_0_0(sl_up(sl), t);
if((t == NULL))
goto label8 ;
goto label7 ;
label8 :
t = trm7;
{
ATerm trm8 = t;
t = Hide1_0_0(sl_up(sl), t);
if((t == NULL))
goto label9 ;
goto label7 ;
label9 :
t = trm8;
t = A1_0_0(sl_up(sl), t);
if((t == NULL))
goto fail7 ;
else
goto label7 ;
}
label7 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm Strategy1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Strategy1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_2 = NULL,u_2 = NULL;
struct str_closure k_93 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(k_93);
u_2 = t;
t = term3;
t_2 = t;
t = u_2;
t = dr_scope_1_1(sl, lifted2_cl, t_2, t);
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
ATerm trm0 = t;
ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
ATerm trm1;
trm1 = (ATerm) ATgetAnnotations(t);
if((trm1 == NULL))
trm1 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
o_2 = ATgetFirst((ATermList) t);
p_2 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label1 ;
s_2 = trm1;
t = o_2;
{
struct str_closure j_93 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(j_93);
t = try_1_0(sl_up(sl), lifted3_cl, t);
if((t == NULL))
goto label1 ;
q_2 = t;
t = p_2;
t = Strategy1_0_0(sl_up(sl), t);
if((t == NULL))
goto label1 ;
r_2 = t;
{
ATerm trm4;
trm4 = CheckATermList(r_2);
if((trm4 == NULL))
goto label1 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm4, q_2), s_2);
}
}
goto label0 ;
label1 :
t = trm0;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label0 ;
else
goto fail4 ;
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm2 = t;
t = Gen1_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label3 ;
goto label2 ;
label3 :
t = trm2;
{
ATerm trm3 = t;
t = Hide1_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label4 ;
goto label2 ;
label4 :
t = trm3;
t = A1_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail5 ;
else
goto label2 ;
}
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_93 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(h_93);
struct str_closure i_93 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(i_93);
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
t = test_plain_1_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_labeled_1_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_add_1_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_add_bagof_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_dr_fork_and_union_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_dr_ignore_state_0_0(sl_up(sl), t);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 106));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(fetch_elem_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_elem_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_fork_and_union_2_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_fork_and_union_2_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_add_rule_0_4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_add_rule_0_4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_add_rule_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_add_rule_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_undefine_rule_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_undefine_rule_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_undefine_rule_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_undefine_rule_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_set_rule_0_4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_set_rule_0_4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_set_rule_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_set_rule_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_lookup_rule_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_lookup_rule_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_ignore_states_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_ignore_states_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_ignore_state_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_ignore_state_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_label_scope_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_label_scope_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_scope_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_scope_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_test_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_test_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_suite_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_suite_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted66);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted66", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(B_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("B_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted65);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted65", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(A_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("A_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted64);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted64", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(bagof_A_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("bagof_A_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aux_A_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aux_A_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted58);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted58", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted57);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted57", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted48);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted48", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_dr_ignore_state_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_dr_ignore_state_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted45);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted45", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted44);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted44", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_dr_fork_and_union_strategy2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_dr_fork_and_union_strategy2_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(test_dr_fork_and_union_strategy1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_dr_fork_and_union_strategy1_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted33);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted33", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted39);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted39", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted37);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted37", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_dr_fork_and_union_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_dr_fork_and_union_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_add_bagof_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_add_bagof_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted25);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted25", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_add_1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_add_1_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted24);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted24", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(bagof_A3_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("bagof_A3_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(A3_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("A3_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(A3_aux_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("A3_aux_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Hide3_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Hide3_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Gen3_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Gen3_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted22", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Strategy3_bagof_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Strategy3_bagof_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Strategy3_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Strategy3_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(test_labeled_1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_labeled_1_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(A2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("A2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Hide2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Hide2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Gen2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Gen2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Strategy2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Strategy2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_plain_1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_plain_1_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(A1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("A1_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Hide1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Hide1_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Gen1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Gen1_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Strategy1_unscoped_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Strategy1_unscoped_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Strategy1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Strategy1_0_0", 0, ATtrue)), &(closures[closures_index]));
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
