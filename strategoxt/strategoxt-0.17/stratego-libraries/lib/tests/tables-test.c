#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__3;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Hashtable_1;
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
sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
ATprotectSymbol(sym_Hashtable_1);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("tables-test", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("new-hashtable", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("legacy table_keys", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("blablabla", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("legacy table-put", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("bla", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("key", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("value", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(sym__3, term13, term15, term17);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(sym__2, term13, term15);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("legacy table-get", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("blabla", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(sym__2, term25, term15);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-put", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-get on not a hashtable", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(sym_Hashtable_1, term33);
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-remove", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-keys", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-fold-keys 1", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeInt(0);
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-fold-values 1", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-fold 1", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeInt(1);
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeInt(2);
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeInt(3);
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeInt(4);
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-fold-keys 2", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeInt(6);
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-fold-values 2", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeInt(9);
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-fold 2", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeInt(20);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-getlist-empty", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("key1", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("value1", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("key2", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("value2", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-getlist", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(sym__2, term75, term77);
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(sym__2, term71, term73);
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-putlist-empty", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-putlist", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-copy-empty", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-copy", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-push", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("keyA", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("value3", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("keyB", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("value4", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-peek-invalidstack", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("keyZ", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-peek", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-peek-again", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-peek-singleton", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-pop", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-peekpop", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-pop-empty", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-intersect setup1", 0, ATtrue));
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-intersect setup2", 0, ATtrue));
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(ATmakeSymbol("value5", 0, ATtrue));
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(ATmakeSymbol("keyC", 0, ATtrue));
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(ATmakeSymbol("value6", 0, ATtrue));
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-intersect test-tbl1 A", 0, ATtrue));
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-intersect test-tbl1 B", 0, ATtrue));
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-intersect test-tbl2 A", 0, ATtrue));
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-intersect test-tbl2 B", 0, ATtrue));
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-intersect test-tbl2 C", 0, ATtrue));
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-intersect", 0, ATtrue));
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-intersect test-tbl1 C", 0, ATtrue));
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-union setup1", 0, ATtrue));
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-union setup2", 0, ATtrue));
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-union test-tbl1 A", 0, ATtrue));
ATprotect(&(term147));
term147 = term146;
ATprotect(&(term148));
term148 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-union test-tbl1 B", 0, ATtrue));
ATprotect(&(term149));
term149 = term148;
ATprotect(&(term150));
term150 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-union test-tbl2 A", 0, ATtrue));
ATprotect(&(term151));
term151 = term150;
ATprotect(&(term152));
term152 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-union test-tbl2 B", 0, ATtrue));
ATprotect(&(term153));
term153 = term152;
ATprotect(&(term154));
term154 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-union test-tbl2 C", 0, ATtrue));
ATprotect(&(term155));
term155 = term154;
ATprotect(&(term156));
term156 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-union", 0, ATtrue));
ATprotect(&(term157));
term157 = term156;
ATprotect(&(term158));
term158 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-union test-tbl1 C", 0, ATtrue));
ATprotect(&(term159));
term159 = term158;
ATprotect(&(term160));
term160 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-eq both-empty", 0, ATtrue));
ATprotect(&(term161));
term161 = term160;
ATprotect(&(term162));
term162 = (ATerm) ATmakeAppl(ATmakeSymbol("KeyA", 0, ATtrue));
ATprotect(&(term163));
term163 = term162;
ATprotect(&(term164));
term164 = (ATerm) ATmakeAppl(ATmakeSymbol("ValueA", 0, ATtrue));
ATprotect(&(term165));
term165 = term164;
ATprotect(&(term166));
term166 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-eq 1st empty", 0, ATtrue));
ATprotect(&(term167));
term167 = term166;
ATprotect(&(term168));
term168 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-eq 2nd empty", 0, ATtrue));
ATprotect(&(term169));
term169 = term168;
ATprotect(&(term170));
term170 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-eq singletons", 0, ATtrue));
ATprotect(&(term171));
term171 = term170;
ATprotect(&(term172));
term172 = (ATerm) ATmakeAppl(ATmakeSymbol("KeyB", 0, ATtrue));
ATprotect(&(term173));
term173 = term172;
ATprotect(&(term174));
term174 = (ATerm) ATmakeAppl(ATmakeSymbol("ValueB", 0, ATtrue));
ATprotect(&(term175));
term175 = term174;
ATprotect(&(term176));
term176 = (ATerm) ATmakeAppl(ATmakeSymbol("KeyC", 0, ATtrue));
ATprotect(&(term177));
term177 = term176;
ATprotect(&(term178));
term178 = (ATerm) ATmakeAppl(ATmakeSymbol("ValueC", 0, ATtrue));
ATprotect(&(term179));
term179 = term178;
ATprotect(&(term180));
term180 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-eq keys inequal", 0, ATtrue));
ATprotect(&(term181));
term181 = term180;
ATprotect(&(term182));
term182 = (ATerm) ATmakeAppl(ATmakeSymbol("ValueC'", 0, ATtrue));
ATprotect(&(term183));
term183 = term182;
ATprotect(&(term184));
term184 = (ATerm) ATmakeAppl(ATmakeSymbol("ValueB'", 0, ATtrue));
ATprotect(&(term185));
term185 = term184;
ATprotect(&(term186));
term186 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-eq values inequal", 0, ATtrue));
ATprotect(&(term187));
term187 = term186;
ATprotect(&(term188));
term188 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-eq equal", 0, ATtrue));
ATprotect(&(term189));
term189 = term188;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm table_keys_0_0 (StrSL sl, ATerm t);
ATerm table_get_0_0 (StrSL sl, ATerm t);
ATerm table_put_0_0 (StrSL sl, ATerm t);
ATerm hashtable_eq_0_0 (StrSL sl, ATerm t);
ATerm hashtable_union_0_1 (StrSL sl, ATerm m_62, ATerm t);
ATerm hashtable_intersect_wempty_0_2 (StrSL sl, ATerm i_62, ATerm j_62, ATerm t);
ATerm hashtable_peekpop_0_1 (StrSL sl, ATerm f_61, ATerm t);
ATerm hashtable_peek_0_1 (StrSL sl, ATerm e_61, ATerm t);
ATerm hashtable_pop_0_1 (StrSL sl, ATerm d_61, ATerm t);
ATerm hashtable_push_0_2 (StrSL sl, ATerm v_60, ATerm y_60, ATerm t);
ATerm hashtable_copy_0_0 (StrSL sl, ATerm t);
ATerm hashtable_putlist_0_1 (StrSL sl, ATerm s_60, ATerm t);
ATerm hashtable_getlist_0_0 (StrSL sl, ATerm t);
ATerm hashtable_fold_values_1_1 (StrSL sl, StrCL r_60, ATerm q_60, ATerm t);
ATerm hashtable_fold_keys_1_1 (StrSL sl, StrCL p_60, ATerm o_60, ATerm t);
ATerm hashtable_fold_1_1 (StrSL sl, StrCL n_60, ATerm l_60, ATerm t);
ATerm hashtable_keys_0_0 (StrSL sl, ATerm t);
ATerm hashtable_remove_0_1 (StrSL sl, ATerm k_60, ATerm t);
ATerm hashtable_get_0_1 (StrSL sl, ATerm j_60, ATerm t);
ATerm hashtable_put_0_2 (StrSL sl, ATerm h_60, ATerm i_60, ATerm t);
ATerm hashtable_destroy_0_0 (StrSL sl, ATerm t);
ATerm new_hashtable_0_0 (StrSL sl, ATerm t);
ATerm set_eq_0_0 (StrSL sl, ATerm t);
ATerm eq_0_0 (StrSL sl, ATerm t);
ATerm mul_0_0 (StrSL sl, ATerm t);
ATerm int_add_0_1 (StrSL sl, ATerm h_26, ATerm t);
ATerm add_0_0 (StrSL sl, ATerm t);
ATerm apply_and_fail_3_0 (StrSL sl, StrCL c_16, StrCL d_16, StrCL e_16, ATerm t);
ATerm apply_and_check_4_0 (StrSL sl, StrCL y_15, StrCL z_15, StrCL a_16, StrCL b_16, ATerm t);
ATerm apply_test_3_0 (StrSL sl, StrCL v_15, StrCL w_15, StrCL x_15, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL r_15, StrCL s_15, StrCL t_15, StrCL u_15, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL p_15, StrCL q_15, ATerm t);
static ATerm lifted227 (StrSL sl, ATerm t);
static ATerm lifted225 (StrSL sl, ATerm t);
static ATerm lifted224 (StrSL sl, ATerm t);
static ATerm lifted222 (StrSL sl, ATerm t);
static ATerm lifted221 (StrSL sl, ATerm t);
static ATerm lifted219 (StrSL sl, ATerm t);
static ATerm lifted218 (StrSL sl, ATerm t);
static ATerm lifted216 (StrSL sl, ATerm t);
static ATerm lifted215 (StrSL sl, ATerm t);
static ATerm lifted213 (StrSL sl, ATerm t);
static ATerm lifted212 (StrSL sl, ATerm t);
static ATerm lifted210 (StrSL sl, ATerm t);
static ATerm lifted209 (StrSL sl, ATerm t);
static ATerm lifted207 (StrSL sl, ATerm t);
ATerm test_eq_0_0 (StrSL sl, ATerm t);
static ATerm lifted206 (StrSL sl, ATerm t);
static ATerm lifted205 (StrSL sl, ATerm t);
static ATerm lifted204 (StrSL sl, ATerm t);
static ATerm lifted203 (StrSL sl, ATerm t);
static ATerm lifted202 (StrSL sl, ATerm t);
static ATerm lifted201 (StrSL sl, ATerm t);
static ATerm lifted200 (StrSL sl, ATerm t);
static ATerm lifted199 (StrSL sl, ATerm t);
static ATerm lifted198 (StrSL sl, ATerm t);
static ATerm lifted197 (StrSL sl, ATerm t);
static ATerm lifted196 (StrSL sl, ATerm t);
static ATerm lifted195 (StrSL sl, ATerm t);
static ATerm lifted194 (StrSL sl, ATerm t);
static ATerm lifted193 (StrSL sl, ATerm t);
static ATerm lifted192 (StrSL sl, ATerm t);
static ATerm lifted191 (StrSL sl, ATerm t);
static ATerm lifted190 (StrSL sl, ATerm t);
static ATerm lifted189 (StrSL sl, ATerm t);
static ATerm lifted188 (StrSL sl, ATerm t);
static ATerm lifted187 (StrSL sl, ATerm t);
static ATerm lifted186 (StrSL sl, ATerm t);
static ATerm lifted185 (StrSL sl, ATerm t);
static ATerm lifted184 (StrSL sl, ATerm t);
static ATerm lifted183 (StrSL sl, ATerm t);
static ATerm lifted182 (StrSL sl, ATerm t);
static ATerm lifted181 (StrSL sl, ATerm t);
static ATerm lifted180 (StrSL sl, ATerm t);
static ATerm lifted179 (StrSL sl, ATerm t);
static ATerm lifted178 (StrSL sl, ATerm t);
static ATerm lifted177 (StrSL sl, ATerm t);
static ATerm lifted176 (StrSL sl, ATerm t);
static ATerm lifted175 (StrSL sl, ATerm t);
static ATerm lifted174 (StrSL sl, ATerm t);
static ATerm lifted173 (StrSL sl, ATerm t);
static ATerm lifted172 (StrSL sl, ATerm t);
static ATerm lifted171 (StrSL sl, ATerm t);
static ATerm lifted170 (StrSL sl, ATerm t);
static ATerm lifted169 (StrSL sl, ATerm t);
static ATerm lifted168 (StrSL sl, ATerm t);
static ATerm lifted167 (StrSL sl, ATerm t);
static ATerm lifted166 (StrSL sl, ATerm t);
static ATerm lifted165 (StrSL sl, ATerm t);
static ATerm lifted164 (StrSL sl, ATerm t);
ATerm test_union_0_0 (StrSL sl, ATerm t);
static ATerm lifted163 (StrSL sl, ATerm t);
static ATerm lifted162 (StrSL sl, ATerm t);
static ATerm lifted161 (StrSL sl, ATerm t);
static ATerm lifted160 (StrSL sl, ATerm t);
static ATerm lifted159 (StrSL sl, ATerm t);
static ATerm lifted158 (StrSL sl, ATerm t);
static ATerm lifted157 (StrSL sl, ATerm t);
static ATerm lifted156 (StrSL sl, ATerm t);
static ATerm lifted155 (StrSL sl, ATerm t);
static ATerm lifted154 (StrSL sl, ATerm t);
static ATerm lifted153 (StrSL sl, ATerm t);
static ATerm lifted152 (StrSL sl, ATerm t);
static ATerm lifted151 (StrSL sl, ATerm t);
static ATerm lifted150 (StrSL sl, ATerm t);
static ATerm lifted149 (StrSL sl, ATerm t);
static ATerm lifted148 (StrSL sl, ATerm t);
static ATerm lifted147 (StrSL sl, ATerm t);
static ATerm lifted146 (StrSL sl, ATerm t);
static ATerm lifted145 (StrSL sl, ATerm t);
static ATerm lifted144 (StrSL sl, ATerm t);
static ATerm lifted143 (StrSL sl, ATerm t);
static ATerm lifted142 (StrSL sl, ATerm t);
static ATerm lifted141 (StrSL sl, ATerm t);
static ATerm lifted140 (StrSL sl, ATerm t);
static ATerm lifted139 (StrSL sl, ATerm t);
static ATerm lifted138 (StrSL sl, ATerm t);
static ATerm lifted137 (StrSL sl, ATerm t);
static ATerm lifted136 (StrSL sl, ATerm t);
static ATerm lifted135 (StrSL sl, ATerm t);
static ATerm lifted134 (StrSL sl, ATerm t);
static ATerm lifted133 (StrSL sl, ATerm t);
static ATerm lifted132 (StrSL sl, ATerm t);
static ATerm lifted131 (StrSL sl, ATerm t);
static ATerm lifted130 (StrSL sl, ATerm t);
static ATerm lifted129 (StrSL sl, ATerm t);
static ATerm lifted128 (StrSL sl, ATerm t);
static ATerm lifted127 (StrSL sl, ATerm t);
static ATerm lifted126 (StrSL sl, ATerm t);
static ATerm lifted125 (StrSL sl, ATerm t);
static ATerm lifted124 (StrSL sl, ATerm t);
static ATerm lifted123 (StrSL sl, ATerm t);
static ATerm lifted122 (StrSL sl, ATerm t);
static ATerm lifted121 (StrSL sl, ATerm t);
ATerm test_intersect_0_0 (StrSL sl, ATerm t);
static ATerm lifted120 (StrSL sl, ATerm t);
static ATerm lifted119 (StrSL sl, ATerm t);
static ATerm lifted118 (StrSL sl, ATerm t);
static ATerm lifted117 (StrSL sl, ATerm t);
static ATerm lifted116 (StrSL sl, ATerm t);
static ATerm lifted115 (StrSL sl, ATerm t);
static ATerm lifted114 (StrSL sl, ATerm t);
static ATerm lifted113 (StrSL sl, ATerm t);
static ATerm lifted112 (StrSL sl, ATerm t);
static ATerm lifted111 (StrSL sl, ATerm t);
static ATerm lifted110 (StrSL sl, ATerm t);
static ATerm lifted109 (StrSL sl, ATerm t);
static ATerm lifted108 (StrSL sl, ATerm t);
static ATerm lifted107 (StrSL sl, ATerm t);
static ATerm lifted106 (StrSL sl, ATerm t);
static ATerm lifted105 (StrSL sl, ATerm t);
static ATerm lifted104 (StrSL sl, ATerm t);
static ATerm lifted103 (StrSL sl, ATerm t);
static ATerm lifted102 (StrSL sl, ATerm t);
static ATerm lifted101 (StrSL sl, ATerm t);
static ATerm lifted100 (StrSL sl, ATerm t);
static ATerm lifted99 (StrSL sl, ATerm t);
static ATerm lifted98 (StrSL sl, ATerm t);
static ATerm lifted97 (StrSL sl, ATerm t);
static ATerm lifted96 (StrSL sl, ATerm t);
static ATerm lifted95 (StrSL sl, ATerm t);
static ATerm lifted94 (StrSL sl, ATerm t);
static ATerm lifted93 (StrSL sl, ATerm t);
static ATerm lifted92 (StrSL sl, ATerm t);
static ATerm lifted91 (StrSL sl, ATerm t);
ATerm test_stack_0_0 (StrSL sl, ATerm t);
static ATerm lifted90 (StrSL sl, ATerm t);
static ATerm lifted89 (StrSL sl, ATerm t);
static ATerm lifted88 (StrSL sl, ATerm t);
static ATerm lifted87 (StrSL sl, ATerm t);
static ATerm lifted86 (StrSL sl, ATerm t);
static ATerm lifted85 (StrSL sl, ATerm t);
ATerm test_copy_0_0 (StrSL sl, ATerm t);
static ATerm lifted84 (StrSL sl, ATerm t);
static ATerm lifted83 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted79 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
ATerm test_putlist_0_0 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
ATerm test_getlist_0_0 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
ATerm test_fold_0_0 (StrSL sl, ATerm t);
static ATerm k_3 (StrSL sl, ATerm f_3, ATerm g_3, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
ATerm test_keys_0_0 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
ATerm test_remove_0_0 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
ATerm test_get_0_0 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
ATerm test_put_0_0 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
ATerm legacy_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm test_eq_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_eq_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,e_12 = NULL,t_12 = NULL,u_12 = NULL,f_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,g_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,h_12 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,i_12 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,j_12 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,k_12 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,l_12 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,m_12 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,n_12 = NULL,o_12 = NULL;
sl_init_var(0, z_11);
sl_init_var(1, a_12);
b_12 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail208 ;
if((z_11 == NULL))
{
z_11 = t;
}
else
if((z_11 != t))
goto fail208 ;
t = b_12;
c_12 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail208 ;
if((a_12 == NULL))
{
a_12 = t;
}
else
if((a_12 != t))
goto fail208 ;
t = c_12;
{
struct str_closure f_92 = { &(lifted207) , &(frame) };
StrCL lifted207_cl = &(f_92);
struct str_closure g_92 = { &(hashtable_eq_0_0) , sl };
StrCL lifted208_cl = &(g_92);
struct str_closure h_92 = { &(lifted209) , &(frame) };
StrCL lifted209_cl = &(h_92);
t = apply_test_3_0(sl, lifted207_cl, lifted208_cl, lifted209_cl, t);
if((t == NULL))
goto fail208 ;
d_12 = t;
if((a_12 == NULL))
goto fail208 ;
else
{
t = a_12;
}
r_12 = t;
t = term163;
p_12 = t;
t = r_12;
s_12 = t;
t = term165;
q_12 = t;
t = s_12;
t = hashtable_put_0_2(sl, p_12, q_12, t);
if((t == NULL))
goto fail208 ;
t = d_12;
{
struct str_closure i_92 = { &(lifted210) , &(frame) };
StrCL lifted210_cl = &(i_92);
struct str_closure j_92 = { &(hashtable_eq_0_0) , sl };
StrCL lifted211_cl = &(j_92);
struct str_closure k_92 = { &(lifted212) , &(frame) };
StrCL lifted212_cl = &(k_92);
t = apply_and_fail_3_0(sl, lifted210_cl, lifted211_cl, lifted212_cl, t);
if((t == NULL))
goto fail208 ;
e_12 = t;
if((a_12 == NULL))
goto fail208 ;
else
{
t = a_12;
}
u_12 = t;
t = term163;
t_12 = t;
t = u_12;
t = hashtable_remove_0_1(sl, t_12, t);
if((t == NULL))
goto fail208 ;
t = e_12;
f_12 = t;
if((z_11 == NULL))
goto fail208 ;
else
{
t = z_11;
}
x_12 = t;
t = term163;
v_12 = t;
t = x_12;
y_12 = t;
t = term165;
w_12 = t;
t = y_12;
t = hashtable_put_0_2(sl, v_12, w_12, t);
if((t == NULL))
goto fail208 ;
t = f_12;
{
struct str_closure l_92 = { &(lifted213) , &(frame) };
StrCL lifted213_cl = &(l_92);
struct str_closure n_92 = { &(hashtable_eq_0_0) , sl };
StrCL lifted214_cl = &(n_92);
struct str_closure o_92 = { &(lifted215) , &(frame) };
StrCL lifted215_cl = &(o_92);
t = apply_and_fail_3_0(sl, lifted213_cl, lifted214_cl, lifted215_cl, t);
if((t == NULL))
goto fail208 ;
g_12 = t;
if((a_12 == NULL))
goto fail208 ;
else
{
t = a_12;
}
b_13 = t;
t = term163;
z_12 = t;
t = b_13;
c_13 = t;
t = term165;
a_13 = t;
t = c_13;
t = hashtable_put_0_2(sl, z_12, a_13, t);
if((t == NULL))
goto fail208 ;
t = g_12;
{
struct str_closure p_92 = { &(lifted216) , &(frame) };
StrCL lifted216_cl = &(p_92);
struct str_closure q_92 = { &(hashtable_eq_0_0) , sl };
StrCL lifted217_cl = &(q_92);
struct str_closure r_92 = { &(lifted218) , &(frame) };
StrCL lifted218_cl = &(r_92);
t = apply_test_3_0(sl, lifted216_cl, lifted217_cl, lifted218_cl, t);
if((t == NULL))
goto fail208 ;
h_12 = t;
if((z_11 == NULL))
goto fail208 ;
else
{
t = z_11;
}
f_13 = t;
t = term173;
d_13 = t;
t = f_13;
g_13 = t;
t = term175;
e_13 = t;
t = g_13;
t = hashtable_put_0_2(sl, d_13, e_13, t);
if((t == NULL))
goto fail208 ;
t = h_12;
i_12 = t;
if((z_11 == NULL))
goto fail208 ;
else
{
t = z_11;
}
j_13 = t;
t = term177;
h_13 = t;
t = j_13;
k_13 = t;
t = term179;
i_13 = t;
t = k_13;
t = hashtable_put_0_2(sl, h_13, i_13, t);
if((t == NULL))
goto fail208 ;
t = i_12;
{
struct str_closure s_92 = { &(lifted219) , &(frame) };
StrCL lifted219_cl = &(s_92);
struct str_closure u_92 = { &(hashtable_eq_0_0) , sl };
StrCL lifted220_cl = &(u_92);
struct str_closure v_92 = { &(lifted221) , &(frame) };
StrCL lifted221_cl = &(v_92);
t = apply_and_fail_3_0(sl, lifted219_cl, lifted220_cl, lifted221_cl, t);
if((t == NULL))
goto fail208 ;
j_12 = t;
if((a_12 == NULL))
goto fail208 ;
else
{
t = a_12;
}
n_13 = t;
t = term177;
l_13 = t;
t = n_13;
o_13 = t;
t = term183;
m_13 = t;
t = o_13;
t = hashtable_put_0_2(sl, l_13, m_13, t);
if((t == NULL))
goto fail208 ;
t = j_12;
k_12 = t;
if((a_12 == NULL))
goto fail208 ;
else
{
t = a_12;
}
r_13 = t;
t = term173;
p_13 = t;
t = r_13;
s_13 = t;
t = term185;
q_13 = t;
t = s_13;
t = hashtable_put_0_2(sl, p_13, q_13, t);
if((t == NULL))
goto fail208 ;
t = k_12;
{
struct str_closure w_92 = { &(lifted222) , &(frame) };
StrCL lifted222_cl = &(w_92);
struct str_closure x_92 = { &(hashtable_eq_0_0) , sl };
StrCL lifted223_cl = &(x_92);
struct str_closure y_92 = { &(lifted224) , &(frame) };
StrCL lifted224_cl = &(y_92);
t = apply_and_fail_3_0(sl, lifted222_cl, lifted223_cl, lifted224_cl, t);
if((t == NULL))
goto fail208 ;
l_12 = t;
if((a_12 == NULL))
goto fail208 ;
else
{
t = a_12;
}
v_13 = t;
t = term177;
t_13 = t;
t = v_13;
w_13 = t;
t = term179;
u_13 = t;
t = w_13;
t = hashtable_put_0_2(sl, t_13, u_13, t);
if((t == NULL))
goto fail208 ;
t = l_12;
m_12 = t;
if((a_12 == NULL))
goto fail208 ;
else
{
t = a_12;
}
z_13 = t;
t = term173;
x_13 = t;
t = z_13;
a_14 = t;
t = term175;
y_13 = t;
t = a_14;
t = hashtable_put_0_2(sl, x_13, y_13, t);
if((t == NULL))
goto fail208 ;
t = m_12;
{
struct str_closure z_92 = { &(lifted225) , &(frame) };
StrCL lifted225_cl = &(z_92);
struct str_closure a_93 = { &(hashtable_eq_0_0) , sl };
StrCL lifted226_cl = &(a_93);
struct str_closure b_93 = { &(lifted227) , &(frame) };
StrCL lifted227_cl = &(b_93);
t = apply_test_3_0(sl, lifted225_cl, lifted226_cl, lifted227_cl, t);
if((t == NULL))
goto fail208 ;
n_12 = t;
if((z_11 == NULL))
goto fail208 ;
else
{
t = z_11;
}
t = hashtable_destroy_0_0(sl, t);
if((t == NULL))
goto fail208 ;
t = n_12;
o_12 = t;
if((a_12 == NULL))
goto fail208 ;
else
{
t = a_12;
}
t = hashtable_destroy_0_0(sl, t);
if((t == NULL))
goto fail208 ;
t = o_12;
}
}
}
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail208 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted227 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted227";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail222 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), sl_readvar(1, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail222 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted225 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted225";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term189;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail221 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted224 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted224";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail220 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), sl_readvar(1, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail220 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted222 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted222";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term187;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail219 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted221 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted221";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail218 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), sl_readvar(1, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail218 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted219 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted219";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term181;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail217 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted218 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted218";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail216 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), sl_readvar(1, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail216 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted216 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted216";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term171;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail215 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted215 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted215";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail214 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), sl_readvar(1, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail214 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted213 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted213";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term169;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail213 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted212 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted212";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail212 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), sl_readvar(1, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail212 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted210 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted210";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term167;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail211 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted209 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted209";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail210 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), sl_readvar(1, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail210 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted207 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted207";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term161;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail209 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_union_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_union_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
sl_init_var(0, x_9);
sl_init_var(1, y_9);
z_9 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail164 ;
if((x_9 == NULL))
{
x_9 = t;
}
else
if((x_9 != t))
goto fail164 ;
t = z_9;
a_10 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail164 ;
if((y_9 == NULL))
{
y_9 = t;
}
else
if((y_9 != t))
goto fail164 ;
t = a_10;
{
struct str_closure g_90 = { &(lifted164) , &(frame) };
StrCL lifted164_cl = &(g_90);
struct str_closure h_90 = { &(lifted165) , &(frame) };
StrCL lifted165_cl = &(h_90);
struct str_closure i_90 = { &(lifted166) , &(frame) };
StrCL lifted166_cl = &(i_90);
struct str_closure j_90 = { &(lifted167) , &(frame) };
StrCL lifted167_cl = &(j_90);
t = apply_test_4_0(sl, lifted164_cl, lifted165_cl, lifted166_cl, lifted167_cl, t);
if((t == NULL))
goto fail164 ;
{
struct str_closure k_90 = { &(lifted168) , &(frame) };
StrCL lifted168_cl = &(k_90);
struct str_closure l_90 = { &(lifted169) , &(frame) };
StrCL lifted169_cl = &(l_90);
struct str_closure o_90 = { &(lifted170) , &(frame) };
StrCL lifted170_cl = &(o_90);
struct str_closure p_90 = { &(lifted171) , &(frame) };
StrCL lifted171_cl = &(p_90);
t = apply_test_4_0(sl, lifted168_cl, lifted169_cl, lifted170_cl, lifted171_cl, t);
if((t == NULL))
goto fail164 ;
{
struct str_closure q_90 = { &(lifted172) , &(frame) };
StrCL lifted172_cl = &(q_90);
struct str_closure r_90 = { &(lifted173) , &(frame) };
StrCL lifted173_cl = &(r_90);
struct str_closure t_90 = { &(lifted174) , &(frame) };
StrCL lifted174_cl = &(t_90);
struct str_closure u_90 = { &(lifted175) , &(frame) };
StrCL lifted175_cl = &(u_90);
t = apply_test_4_0(sl, lifted172_cl, lifted173_cl, lifted174_cl, lifted175_cl, t);
if((t == NULL))
goto fail164 ;
{
struct str_closure x_90 = { &(lifted176) , &(frame) };
StrCL lifted176_cl = &(x_90);
struct str_closure y_90 = { &(lifted177) , &(frame) };
StrCL lifted177_cl = &(y_90);
struct str_closure z_90 = { &(lifted178) , &(frame) };
StrCL lifted178_cl = &(z_90);
struct str_closure a_91 = { &(lifted179) , &(frame) };
StrCL lifted179_cl = &(a_91);
t = apply_test_4_0(sl, lifted176_cl, lifted177_cl, lifted178_cl, lifted179_cl, t);
if((t == NULL))
goto fail164 ;
{
struct str_closure c_91 = { &(lifted180) , &(frame) };
StrCL lifted180_cl = &(c_91);
struct str_closure d_91 = { &(lifted181) , &(frame) };
StrCL lifted181_cl = &(d_91);
struct str_closure e_91 = { &(lifted182) , &(frame) };
StrCL lifted182_cl = &(e_91);
struct str_closure f_91 = { &(lifted183) , &(frame) };
StrCL lifted183_cl = &(f_91);
t = apply_test_4_0(sl, lifted180_cl, lifted181_cl, lifted182_cl, lifted183_cl, t);
if((t == NULL))
goto fail164 ;
{
struct str_closure g_91 = { &(lifted184) , &(frame) };
StrCL lifted184_cl = &(g_91);
struct str_closure h_91 = { &(lifted185) , &(frame) };
StrCL lifted185_cl = &(h_91);
struct str_closure i_91 = { &(lifted186) , &(frame) };
StrCL lifted186_cl = &(i_91);
t = apply_and_fail_3_0(sl, lifted184_cl, lifted185_cl, lifted186_cl, t);
if((t == NULL))
goto fail164 ;
{
struct str_closure k_91 = { &(lifted187) , &(frame) };
StrCL lifted187_cl = &(k_91);
struct str_closure l_91 = { &(lifted188) , &(frame) };
StrCL lifted188_cl = &(l_91);
struct str_closure m_91 = { &(lifted189) , &(frame) };
StrCL lifted189_cl = &(m_91);
struct str_closure n_91 = { &(lifted190) , &(frame) };
StrCL lifted190_cl = &(n_91);
t = apply_test_4_0(sl, lifted187_cl, lifted188_cl, lifted189_cl, lifted190_cl, t);
if((t == NULL))
goto fail164 ;
{
struct str_closure o_91 = { &(lifted191) , &(frame) };
StrCL lifted191_cl = &(o_91);
struct str_closure p_91 = { &(lifted192) , &(frame) };
StrCL lifted192_cl = &(p_91);
struct str_closure q_91 = { &(lifted193) , &(frame) };
StrCL lifted193_cl = &(q_91);
struct str_closure s_91 = { &(lifted194) , &(frame) };
StrCL lifted194_cl = &(s_91);
t = apply_test_4_0(sl, lifted191_cl, lifted192_cl, lifted193_cl, lifted194_cl, t);
if((t == NULL))
goto fail164 ;
{
struct str_closure t_91 = { &(lifted195) , &(frame) };
StrCL lifted195_cl = &(t_91);
struct str_closure u_91 = { &(lifted196) , &(frame) };
StrCL lifted196_cl = &(u_91);
struct str_closure v_91 = { &(lifted197) , &(frame) };
StrCL lifted197_cl = &(v_91);
struct str_closure w_91 = { &(lifted198) , &(frame) };
StrCL lifted198_cl = &(w_91);
t = apply_test_4_0(sl, lifted195_cl, lifted196_cl, lifted197_cl, lifted198_cl, t);
if((t == NULL))
goto fail164 ;
{
struct str_closure x_91 = { &(lifted199) , &(frame) };
StrCL lifted199_cl = &(x_91);
struct str_closure y_91 = { &(lifted200) , &(frame) };
StrCL lifted200_cl = &(y_91);
struct str_closure z_91 = { &(lifted201) , &(frame) };
StrCL lifted201_cl = &(z_91);
struct str_closure a_92 = { &(lifted202) , &(frame) };
StrCL lifted202_cl = &(a_92);
t = apply_test_4_0(sl, lifted199_cl, lifted200_cl, lifted201_cl, lifted202_cl, t);
if((t == NULL))
goto fail164 ;
{
struct str_closure b_92 = { &(lifted203) , &(frame) };
StrCL lifted203_cl = &(b_92);
struct str_closure c_92 = { &(lifted204) , &(frame) };
StrCL lifted204_cl = &(c_92);
struct str_closure d_92 = { &(lifted205) , &(frame) };
StrCL lifted205_cl = &(d_92);
struct str_closure e_92 = { &(lifted206) , &(frame) };
StrCL lifted206_cl = &(e_92);
t = apply_test_4_0(sl, lifted203_cl, lifted204_cl, lifted205_cl, lifted206_cl, t);
if((t == NULL))
goto fail164 ;
b_10 = t;
if((x_9 == NULL))
goto fail164 ;
else
{
t = x_9;
}
t = hashtable_destroy_0_0(sl, t);
if((t == NULL))
goto fail164 ;
t = b_10;
c_10 = t;
if((y_9 == NULL))
goto fail164 ;
else
{
t = y_9;
}
t = hashtable_destroy_0_0(sl, t);
if((t == NULL))
goto fail164 ;
t = c_10;
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
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail164 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted206 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted206";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term127);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail207 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted205 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted205";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail206 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail206 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted204 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted204";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_11 = NULL,y_11 = NULL;
y_11 = t;
t = term125;
x_11 = t;
t = y_11;
t = hashtable_get_0_1(sl_up(sl), x_11, t);
if((t == NULL))
goto fail205 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail205 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted203 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted203";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term159;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail204 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted202 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted202";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term101);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail203 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted201 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted201";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail202 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail202 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted200 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted200";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_11 = NULL,w_11 = NULL;
w_11 = t;
t = term99;
v_11 = t;
t = w_11;
t = hashtable_get_0_1(sl_up(sl), v_11, t);
if((t == NULL))
goto fail201 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail201 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted199 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted199";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term149;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail200 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted198 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted198";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term73), term101), term123), term77), term97);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail199 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted197 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted197";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail198 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail198 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted196 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted196";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_11 = NULL,u_11 = NULL;
u_11 = t;
t = term95;
t_11 = t;
t = u_11;
t = hashtable_get_0_1(sl_up(sl), t_11, t);
if((t == NULL))
goto fail197 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail197 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted195 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted195";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term147;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail196 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted194 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted194";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail195 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail195 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted193 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted193";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail194 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail194 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted192 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted192";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail193 ;
else
{
t = hashtable_union_0_1(sl_up(sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail193 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail193 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted191 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted191";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term157;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail192 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted190 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted190";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term127);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail191 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted189 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted189";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail190 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail190 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted188 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted188";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_11 = NULL,s_11 = NULL;
s_11 = t;
t = term125;
r_11 = t;
t = s_11;
t = hashtable_get_0_1(sl_up(sl), r_11, t);
if((t == NULL))
goto fail189 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail189 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted187 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted187";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term155;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail188 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted186 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted186";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail187 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail187 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted185 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted185";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_11 = NULL,q_11 = NULL;
q_11 = t;
t = term99;
p_11 = t;
t = q_11;
t = hashtable_get_0_1(sl_up(sl), p_11, t);
if((t == NULL))
goto fail186 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail186 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted184 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted184";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term153;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail185 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted183 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted183";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term73), term101), term123);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail184 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted182 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted182";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail183 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail183 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted181 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted181";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_11 = NULL,o_11 = NULL;
o_11 = t;
t = term95;
n_11 = t;
t = o_11;
t = hashtable_get_0_1(sl_up(sl), n_11, t);
if((t == NULL))
goto fail182 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail182 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted180 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted180";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term151;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail181 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted179 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted179";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term101);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail180 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted178 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted178";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail179 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail179 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted177 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted177";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_11 = NULL,m_11 = NULL;
m_11 = t;
t = term99;
l_11 = t;
t = m_11;
t = hashtable_get_0_1(sl_up(sl), l_11, t);
if((t == NULL))
goto fail178 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail178 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted176 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted176";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term149;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail177 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted175 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted175";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term73), term77), term97);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail176 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted174 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted174";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail175 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail175 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted173 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted173";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_11 = NULL,k_11 = NULL;
k_11 = t;
t = term95;
j_11 = t;
t = k_11;
t = hashtable_get_0_1(sl_up(sl), j_11, t);
if((t == NULL))
goto fail174 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail174 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted172 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted172";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term147;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail173 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted171 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted171";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail172 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail172 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted170 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted170";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail171 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail171 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted169 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted169";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
v_10 = t;
t = term95;
t_10 = t;
t = v_10;
w_10 = t;
t = term73;
u_10 = t;
t = w_10;
t = hashtable_push_0_2(sl_up(sl), t_10, u_10, t);
if((t == NULL))
goto fail170 ;
z_10 = t;
t = term95;
x_10 = t;
t = z_10;
a_11 = t;
t = term101;
y_10 = t;
t = a_11;
t = hashtable_push_0_2(sl_up(sl), x_10, y_10, t);
if((t == NULL))
goto fail170 ;
d_11 = t;
t = term95;
b_11 = t;
t = d_11;
e_11 = t;
t = term123;
c_11 = t;
t = e_11;
t = hashtable_push_0_2(sl_up(sl), b_11, c_11, t);
if((t == NULL))
goto fail170 ;
h_11 = t;
t = term125;
f_11 = t;
t = h_11;
i_11 = t;
t = term127;
g_11 = t;
t = i_11;
t = hashtable_push_0_2(sl_up(sl), f_11, g_11, t);
if((t == NULL))
goto fail170 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail170 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted168 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted168";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term145;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail169 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted167 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted167";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail168 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail168 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted166 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted166";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail167 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail167 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted165 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted165";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
f_10 = t;
t = term95;
d_10 = t;
t = f_10;
g_10 = t;
t = term73;
e_10 = t;
t = g_10;
t = hashtable_push_0_2(sl_up(sl), d_10, e_10, t);
if((t == NULL))
goto fail166 ;
j_10 = t;
t = term95;
h_10 = t;
t = j_10;
k_10 = t;
t = term77;
i_10 = t;
t = k_10;
t = hashtable_push_0_2(sl_up(sl), h_10, i_10, t);
if((t == NULL))
goto fail166 ;
n_10 = t;
t = term95;
l_10 = t;
t = n_10;
o_10 = t;
t = term97;
m_10 = t;
t = o_10;
t = hashtable_push_0_2(sl_up(sl), l_10, m_10, t);
if((t == NULL))
goto fail166 ;
r_10 = t;
t = term99;
p_10 = t;
t = r_10;
s_10 = t;
t = term101;
q_10 = t;
t = s_10;
t = hashtable_push_0_2(sl_up(sl), p_10, q_10, t);
if((t == NULL))
goto fail166 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail166 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted164 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted164";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term143;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail165 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_intersect_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_intersect_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL;
sl_init_var(0, t_7);
sl_init_var(1, u_7);
v_7 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail120 ;
if((t_7 == NULL))
{
t_7 = t;
}
else
if((t_7 != t))
goto fail120 ;
t = v_7;
w_7 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail120 ;
if((u_7 == NULL))
{
u_7 = t;
}
else
if((u_7 != t))
goto fail120 ;
t = w_7;
{
struct str_closure x_87 = { &(lifted121) , &(frame) };
StrCL lifted121_cl = &(x_87);
struct str_closure y_87 = { &(lifted122) , &(frame) };
StrCL lifted122_cl = &(y_87);
struct str_closure a_88 = { &(lifted123) , &(frame) };
StrCL lifted123_cl = &(a_88);
struct str_closure b_88 = { &(lifted124) , &(frame) };
StrCL lifted124_cl = &(b_88);
t = apply_test_4_0(sl, lifted121_cl, lifted122_cl, lifted123_cl, lifted124_cl, t);
if((t == NULL))
goto fail120 ;
{
struct str_closure d_88 = { &(lifted125) , &(frame) };
StrCL lifted125_cl = &(d_88);
struct str_closure e_88 = { &(lifted126) , &(frame) };
StrCL lifted126_cl = &(e_88);
struct str_closure g_88 = { &(lifted127) , &(frame) };
StrCL lifted127_cl = &(g_88);
struct str_closure h_88 = { &(lifted128) , &(frame) };
StrCL lifted128_cl = &(h_88);
t = apply_test_4_0(sl, lifted125_cl, lifted126_cl, lifted127_cl, lifted128_cl, t);
if((t == NULL))
goto fail120 ;
{
struct str_closure j_88 = { &(lifted129) , &(frame) };
StrCL lifted129_cl = &(j_88);
struct str_closure k_88 = { &(lifted130) , &(frame) };
StrCL lifted130_cl = &(k_88);
struct str_closure m_88 = { &(lifted131) , &(frame) };
StrCL lifted131_cl = &(m_88);
struct str_closure n_88 = { &(lifted132) , &(frame) };
StrCL lifted132_cl = &(n_88);
t = apply_test_4_0(sl, lifted129_cl, lifted130_cl, lifted131_cl, lifted132_cl, t);
if((t == NULL))
goto fail120 ;
{
struct str_closure r_88 = { &(lifted133) , &(frame) };
StrCL lifted133_cl = &(r_88);
struct str_closure t_88 = { &(lifted134) , &(frame) };
StrCL lifted134_cl = &(t_88);
struct str_closure u_88 = { &(lifted135) , &(frame) };
StrCL lifted135_cl = &(u_88);
struct str_closure w_88 = { &(lifted136) , &(frame) };
StrCL lifted136_cl = &(w_88);
t = apply_test_4_0(sl, lifted133_cl, lifted134_cl, lifted135_cl, lifted136_cl, t);
if((t == NULL))
goto fail120 ;
{
struct str_closure x_88 = { &(lifted137) , &(frame) };
StrCL lifted137_cl = &(x_88);
struct str_closure z_88 = { &(lifted138) , &(frame) };
StrCL lifted138_cl = &(z_88);
struct str_closure a_89 = { &(lifted139) , &(frame) };
StrCL lifted139_cl = &(a_89);
struct str_closure c_89 = { &(lifted140) , &(frame) };
StrCL lifted140_cl = &(c_89);
t = apply_test_4_0(sl, lifted137_cl, lifted138_cl, lifted139_cl, lifted140_cl, t);
if((t == NULL))
goto fail120 ;
{
struct str_closure d_89 = { &(lifted141) , &(frame) };
StrCL lifted141_cl = &(d_89);
struct str_closure f_89 = { &(lifted142) , &(frame) };
StrCL lifted142_cl = &(f_89);
struct str_closure g_89 = { &(lifted143) , &(frame) };
StrCL lifted143_cl = &(g_89);
t = apply_and_fail_3_0(sl, lifted141_cl, lifted142_cl, lifted143_cl, t);
if((t == NULL))
goto fail120 ;
{
struct str_closure i_89 = { &(lifted144) , &(frame) };
StrCL lifted144_cl = &(i_89);
struct str_closure j_89 = { &(lifted145) , &(frame) };
StrCL lifted145_cl = &(j_89);
struct str_closure l_89 = { &(lifted146) , &(frame) };
StrCL lifted146_cl = &(l_89);
struct str_closure m_89 = { &(lifted147) , &(frame) };
StrCL lifted147_cl = &(m_89);
t = apply_test_4_0(sl, lifted144_cl, lifted145_cl, lifted146_cl, lifted147_cl, t);
if((t == NULL))
goto fail120 ;
{
struct str_closure o_89 = { &(lifted148) , &(frame) };
StrCL lifted148_cl = &(o_89);
struct str_closure p_89 = { &(lifted149) , &(frame) };
StrCL lifted149_cl = &(p_89);
struct str_closure q_89 = { &(lifted150) , &(frame) };
StrCL lifted150_cl = &(q_89);
struct str_closure r_89 = { &(lifted151) , &(frame) };
StrCL lifted151_cl = &(r_89);
t = apply_test_4_0(sl, lifted148_cl, lifted149_cl, lifted150_cl, lifted151_cl, t);
if((t == NULL))
goto fail120 ;
{
struct str_closure u_89 = { &(lifted152) , &(frame) };
StrCL lifted152_cl = &(u_89);
struct str_closure v_89 = { &(lifted153) , &(frame) };
StrCL lifted153_cl = &(v_89);
struct str_closure w_89 = { &(lifted154) , &(frame) };
StrCL lifted154_cl = &(w_89);
struct str_closure x_89 = { &(lifted155) , &(frame) };
StrCL lifted155_cl = &(x_89);
t = apply_test_4_0(sl, lifted152_cl, lifted153_cl, lifted154_cl, lifted155_cl, t);
if((t == NULL))
goto fail120 ;
{
struct str_closure y_89 = { &(lifted156) , &(frame) };
StrCL lifted156_cl = &(y_89);
struct str_closure z_89 = { &(lifted157) , &(frame) };
StrCL lifted157_cl = &(z_89);
struct str_closure a_90 = { &(lifted158) , &(frame) };
StrCL lifted158_cl = &(a_90);
struct str_closure b_90 = { &(lifted159) , &(frame) };
StrCL lifted159_cl = &(b_90);
t = apply_test_4_0(sl, lifted156_cl, lifted157_cl, lifted158_cl, lifted159_cl, t);
if((t == NULL))
goto fail120 ;
{
struct str_closure c_90 = { &(lifted160) , &(frame) };
StrCL lifted160_cl = &(c_90);
struct str_closure d_90 = { &(lifted161) , &(frame) };
StrCL lifted161_cl = &(d_90);
struct str_closure e_90 = { &(lifted162) , &(frame) };
StrCL lifted162_cl = &(e_90);
struct str_closure f_90 = { &(lifted163) , &(frame) };
StrCL lifted163_cl = &(f_90);
t = apply_test_4_0(sl, lifted160_cl, lifted161_cl, lifted162_cl, lifted163_cl, t);
if((t == NULL))
goto fail120 ;
x_7 = t;
if((t_7 == NULL))
goto fail120 ;
else
{
t = t_7;
}
t = hashtable_destroy_0_0(sl, t);
if((t == NULL))
goto fail120 ;
t = x_7;
y_7 = t;
if((u_7 == NULL))
goto fail120 ;
else
{
t = u_7;
}
t = hashtable_destroy_0_0(sl, t);
if((t == NULL))
goto fail120 ;
t = y_7;
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
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail120 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted163 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted163";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail163 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted162 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted162";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail162 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail162 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted161 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted161";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_9 = NULL,w_9 = NULL;
w_9 = t;
t = term125;
v_9 = t;
t = w_9;
t = hashtable_get_0_1(sl_up(sl), v_9, t);
if((t == NULL))
goto fail161 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail161 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted160 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted160";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term141;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail160 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted159 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted159";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail159 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted158 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted158";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail158 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail158 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted157 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted157";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_9 = NULL,u_9 = NULL;
u_9 = t;
t = term99;
t_9 = t;
t = u_9;
t = hashtable_get_0_1(sl_up(sl), t_9, t);
if((t == NULL))
goto fail157 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail157 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted156 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted156";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term131;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail156 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted155 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted155";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term73);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail155 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted154 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted154";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail154 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail154 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted153 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted153";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_9 = NULL,s_9 = NULL;
s_9 = t;
t = term95;
r_9 = t;
t = s_9;
t = hashtable_get_0_1(sl_up(sl), r_9, t);
if((t == NULL))
goto fail153 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail153 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted152 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted152";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term129;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail152 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted151 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted151";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail151 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail151 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted150 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted150";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail150 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail150 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted149 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted149";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_9 = NULL,q_9 = NULL;
q_9 = t;
t = (ATerm) ATempty;
p_9 = t;
t = q_9;
if((sl_readvar(1, sl) == NULL))
goto fail149 ;
else
{
t = hashtable_intersect_wempty_0_2(sl_up(sl), sl_readvar(1, sl), p_9, t);
if((t == NULL))
goto fail149 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail149 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted148 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted148";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term139;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail148 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted147 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted147";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term127);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail147 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted146 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted146";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail146 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail146 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted145 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted145";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_9 = NULL,o_9 = NULL;
o_9 = t;
t = term125;
n_9 = t;
t = o_9;
t = hashtable_get_0_1(sl_up(sl), n_9, t);
if((t == NULL))
goto fail145 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail145 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted144 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted144";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term137;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail144 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted143 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted143";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail143 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail143 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted142 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted142";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_9 = NULL,m_9 = NULL;
m_9 = t;
t = term99;
l_9 = t;
t = m_9;
t = hashtable_get_0_1(sl_up(sl), l_9, t);
if((t == NULL))
goto fail142 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail142 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted141 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted141";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term135;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail141 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted140 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted140";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term73), term101), term123);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail140 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted139 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted139";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail139 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail139 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted138 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted138";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_9 = NULL,k_9 = NULL;
k_9 = t;
t = term95;
j_9 = t;
t = k_9;
t = hashtable_get_0_1(sl_up(sl), j_9, t);
if((t == NULL))
goto fail138 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail138 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted137 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted137";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term133;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail137 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted136 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted136";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term101);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail136 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted135 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted135";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail135 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail135 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted134 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted134";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_9 = NULL,i_9 = NULL;
i_9 = t;
t = term99;
h_9 = t;
t = i_9;
t = hashtable_get_0_1(sl_up(sl), h_9, t);
if((t == NULL))
goto fail134 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail134 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted133 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted133";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term131;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail133 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted132 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted132";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term73), term77), term97);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail132 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted131 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted131";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail131 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail131 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted130 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted130";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_9 = NULL,g_9 = NULL;
g_9 = t;
t = term95;
f_9 = t;
t = g_9;
t = hashtable_get_0_1(sl_up(sl), f_9, t);
if((t == NULL))
goto fail130 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail130 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted129 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted129";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term129;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail129 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted128 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted128";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail128 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail128 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted127 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted127";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail127 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail127 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted126 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted126";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
r_8 = t;
t = term95;
p_8 = t;
t = r_8;
s_8 = t;
t = term73;
q_8 = t;
t = s_8;
t = hashtable_push_0_2(sl_up(sl), p_8, q_8, t);
if((t == NULL))
goto fail126 ;
v_8 = t;
t = term95;
t_8 = t;
t = v_8;
w_8 = t;
t = term101;
u_8 = t;
t = w_8;
t = hashtable_push_0_2(sl_up(sl), t_8, u_8, t);
if((t == NULL))
goto fail126 ;
z_8 = t;
t = term95;
x_8 = t;
t = z_8;
a_9 = t;
t = term123;
y_8 = t;
t = a_9;
t = hashtable_push_0_2(sl_up(sl), x_8, y_8, t);
if((t == NULL))
goto fail126 ;
d_9 = t;
t = term125;
b_9 = t;
t = d_9;
e_9 = t;
t = term127;
c_9 = t;
t = e_9;
t = hashtable_push_0_2(sl_up(sl), b_9, c_9, t);
if((t == NULL))
goto fail126 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail126 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted125 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted125";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term121;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail125 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted124 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted124";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail124 ;
else
{
t = sl_readvar(0, sl);
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
if((sl_readvar(0, sl) == NULL))
goto fail123 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail123 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted122 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted122";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
b_8 = t;
t = term95;
z_7 = t;
t = b_8;
c_8 = t;
t = term73;
a_8 = t;
t = c_8;
t = hashtable_push_0_2(sl_up(sl), z_7, a_8, t);
if((t == NULL))
goto fail122 ;
f_8 = t;
t = term95;
d_8 = t;
t = f_8;
g_8 = t;
t = term77;
e_8 = t;
t = g_8;
t = hashtable_push_0_2(sl_up(sl), d_8, e_8, t);
if((t == NULL))
goto fail122 ;
j_8 = t;
t = term95;
h_8 = t;
t = j_8;
k_8 = t;
t = term97;
i_8 = t;
t = k_8;
t = hashtable_push_0_2(sl_up(sl), h_8, i_8, t);
if((t == NULL))
goto fail122 ;
n_8 = t;
t = term99;
l_8 = t;
t = n_8;
o_8 = t;
t = term101;
m_8 = t;
t = o_8;
t = hashtable_push_0_2(sl_up(sl), l_8, m_8, t);
if((t == NULL))
goto fail122 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail122 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted121 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted121";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term119;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail121 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_stack_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_stack_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
sl_init_var(0, k_6);
l_6 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail89 ;
if((k_6 == NULL))
{
k_6 = t;
}
else
if((k_6 != t))
goto fail89 ;
t = l_6;
{
struct str_closure l_86 = { &(lifted91) , &(frame) };
StrCL lifted91_cl = &(l_86);
struct str_closure m_86 = { &(lifted92) , &(frame) };
StrCL lifted92_cl = &(m_86);
struct str_closure n_86 = { &(lifted93) , &(frame) };
StrCL lifted93_cl = &(n_86);
struct str_closure o_86 = { &(lifted94) , &(frame) };
StrCL lifted94_cl = &(o_86);
t = apply_test_4_0(sl, lifted91_cl, lifted92_cl, lifted93_cl, lifted94_cl, t);
if((t == NULL))
goto fail89 ;
{
struct str_closure p_86 = { &(lifted95) , &(frame) };
StrCL lifted95_cl = &(p_86);
struct str_closure q_86 = { &(lifted96) , &(frame) };
StrCL lifted96_cl = &(q_86);
struct str_closure r_86 = { &(lifted97) , &(frame) };
StrCL lifted97_cl = &(r_86);
t = apply_and_fail_3_0(sl, lifted95_cl, lifted96_cl, lifted97_cl, t);
if((t == NULL))
goto fail89 ;
{
struct str_closure s_86 = { &(lifted98) , &(frame) };
StrCL lifted98_cl = &(s_86);
struct str_closure t_86 = { &(lifted99) , &(frame) };
StrCL lifted99_cl = &(t_86);
struct str_closure u_86 = { &(lifted100) , &(frame) };
StrCL lifted100_cl = &(u_86);
struct str_closure v_86 = { &(lifted101) , &(frame) };
StrCL lifted101_cl = &(v_86);
t = apply_test_4_0(sl, lifted98_cl, lifted99_cl, lifted100_cl, lifted101_cl, t);
if((t == NULL))
goto fail89 ;
{
struct str_closure w_86 = { &(lifted102) , &(frame) };
StrCL lifted102_cl = &(w_86);
struct str_closure z_86 = { &(lifted103) , &(frame) };
StrCL lifted103_cl = &(z_86);
struct str_closure b_87 = { &(lifted104) , &(frame) };
StrCL lifted104_cl = &(b_87);
struct str_closure c_87 = { &(lifted105) , &(frame) };
StrCL lifted105_cl = &(c_87);
t = apply_test_4_0(sl, lifted102_cl, lifted103_cl, lifted104_cl, lifted105_cl, t);
if((t == NULL))
goto fail89 ;
{
struct str_closure d_87 = { &(lifted106) , &(frame) };
StrCL lifted106_cl = &(d_87);
struct str_closure e_87 = { &(lifted107) , &(frame) };
StrCL lifted107_cl = &(e_87);
struct str_closure g_87 = { &(lifted108) , &(frame) };
StrCL lifted108_cl = &(g_87);
struct str_closure h_87 = { &(lifted109) , &(frame) };
StrCL lifted109_cl = &(h_87);
t = apply_test_4_0(sl, lifted106_cl, lifted107_cl, lifted108_cl, lifted109_cl, t);
if((t == NULL))
goto fail89 ;
{
struct str_closure i_87 = { &(lifted110) , &(frame) };
StrCL lifted110_cl = &(i_87);
struct str_closure j_87 = { &(lifted111) , &(frame) };
StrCL lifted111_cl = &(j_87);
struct str_closure k_87 = { &(lifted112) , &(frame) };
StrCL lifted112_cl = &(k_87);
struct str_closure l_87 = { &(lifted113) , &(frame) };
StrCL lifted113_cl = &(l_87);
t = apply_test_4_0(sl, lifted110_cl, lifted111_cl, lifted112_cl, lifted113_cl, t);
if((t == NULL))
goto fail89 ;
{
struct str_closure m_87 = { &(lifted114) , &(frame) };
StrCL lifted114_cl = &(m_87);
struct str_closure n_87 = { &(lifted115) , &(frame) };
StrCL lifted115_cl = &(n_87);
struct str_closure p_87 = { &(lifted116) , &(frame) };
StrCL lifted116_cl = &(p_87);
struct str_closure r_87 = { &(lifted117) , &(frame) };
StrCL lifted117_cl = &(r_87);
t = apply_test_4_0(sl, lifted114_cl, lifted115_cl, lifted116_cl, lifted117_cl, t);
if((t == NULL))
goto fail89 ;
{
struct str_closure s_87 = { &(lifted118) , &(frame) };
StrCL lifted118_cl = &(s_87);
struct str_closure u_87 = { &(lifted119) , &(frame) };
StrCL lifted119_cl = &(u_87);
struct str_closure v_87 = { &(lifted120) , &(frame) };
StrCL lifted120_cl = &(v_87);
t = apply_and_fail_3_0(sl, lifted118_cl, lifted119_cl, lifted120_cl, t);
if((t == NULL))
goto fail89 ;
m_6 = t;
if((k_6 == NULL))
goto fail89 ;
else
{
t = k_6;
}
t = hashtable_destroy_0_0(sl, t);
if((t == NULL))
goto fail89 ;
t = m_6;
}
}
}
}
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted120 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted120";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail119 ;
else
{
t = sl_readvar(0, sl);
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
ATerm r_7 = NULL,s_7 = NULL;
s_7 = t;
t = term95;
r_7 = t;
t = s_7;
t = hashtable_pop_0_1(sl_up(sl), r_7, t);
if((t == NULL))
goto fail118 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail118 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted118 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted118";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term117;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail117 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted117 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted117";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term73;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail116 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted116 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted116";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail115 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail115 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted115 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted115";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_7 = NULL,q_7 = NULL;
q_7 = t;
t = term95;
p_7 = t;
t = q_7;
t = hashtable_peekpop_0_1(sl_up(sl), p_7, t);
if((t == NULL))
goto fail114 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail114 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted114 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted114";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term115;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail113 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted113 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted113";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail112 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail112 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted112 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted112";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail111 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail111 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted111 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted111";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
m_7 = t;
t = term95;
l_7 = t;
t = m_7;
t = hashtable_pop_0_1(sl_up(sl), l_7, t);
if((t == NULL))
goto fail110 ;
o_7 = t;
t = term95;
n_7 = t;
t = o_7;
t = hashtable_pop_0_1(sl_up(sl), n_7, t);
if((t == NULL))
goto fail110 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail110 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted110 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted110";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term113;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail109 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted109 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted109";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term101;
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
if((sl_readvar(0, sl) == NULL))
goto fail107 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail107 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted107 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted107";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_7 = NULL,k_7 = NULL;
k_7 = t;
t = term99;
j_7 = t;
t = k_7;
t = hashtable_peek_0_1(sl_up(sl), j_7, t);
if((t == NULL))
goto fail106 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail106 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted106 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted106";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term111;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail105 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted105 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted105";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term97;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail104 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted104 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted104";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail103 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted103 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted103";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_7 = NULL,i_7 = NULL;
i_7 = t;
t = term95;
h_7 = t;
t = i_7;
t = hashtable_peek_0_1(sl_up(sl), h_7, t);
if((t == NULL))
goto fail102 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted102 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted102";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term109;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted101 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted101";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term97;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted100 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted100";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail99 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted99 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted99";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_7 = NULL,g_7 = NULL;
g_7 = t;
t = term95;
f_7 = t;
t = g_7;
t = hashtable_peek_0_1(sl_up(sl), f_7, t);
if((t == NULL))
goto fail98 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted98 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted98";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term107;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted97 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted97";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail96 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted96 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted96";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_7 = NULL,e_7 = NULL;
e_7 = t;
t = term105;
d_7 = t;
t = e_7;
t = hashtable_peek_0_1(sl_up(sl), d_7, t);
if((t == NULL))
goto fail95 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted95 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted95";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term103;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted94 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted94";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail93 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted93 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted93";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail92 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted92 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted92";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL;
p_6 = t;
t = term95;
n_6 = t;
t = p_6;
q_6 = t;
t = term73;
o_6 = t;
t = q_6;
t = hashtable_push_0_2(sl_up(sl), n_6, o_6, t);
if((t == NULL))
goto fail91 ;
t_6 = t;
t = term95;
r_6 = t;
t = t_6;
u_6 = t;
t = term77;
s_6 = t;
t = u_6;
t = hashtable_push_0_2(sl_up(sl), r_6, s_6, t);
if((t == NULL))
goto fail91 ;
x_6 = t;
t = term95;
v_6 = t;
t = x_6;
y_6 = t;
t = term97;
w_6 = t;
t = y_6;
t = hashtable_push_0_2(sl_up(sl), v_6, w_6, t);
if((t == NULL))
goto fail91 ;
b_7 = t;
t = term99;
z_6 = t;
t = b_7;
c_7 = t;
t = term101;
a_7 = t;
t = c_7;
t = hashtable_push_0_2(sl_up(sl), z_6, a_7, t);
if((t == NULL))
goto fail91 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted91 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted91";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term93;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_copy_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_copy_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,t_5 = NULL,e_6 = NULL,f_6 = NULL,z_5 = NULL;
sl_init_var(0, k_5);
sl_init_var(1, l_5);
sl_init_var(2, m_5);
n_5 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail82 ;
if((m_5 == NULL))
{
m_5 = t;
}
else
if((m_5 != t))
goto fail82 ;
t = n_5;
{
struct str_closure u_85 = { &(lifted85) , &(frame) };
StrCL lifted85_cl = &(u_85);
struct str_closure g_86 = { &(lifted86) , &(frame) };
StrCL lifted86_cl = &(g_86);
struct str_closure h_86 = { &(lifted87) , &(frame) };
StrCL lifted87_cl = &(h_86);
t = apply_test_3_0(sl, lifted85_cl, lifted86_cl, lifted87_cl, t);
if((t == NULL))
goto fail82 ;
t_5 = t;
if((m_5 == NULL))
goto fail82 ;
else
{
t = m_5;
}
f_6 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, term81), term83);
e_6 = t;
t = f_6;
t = hashtable_putlist_0_1(sl, e_6, t);
if((t == NULL))
goto fail82 ;
t = t_5;
{
struct str_closure i_86 = { &(lifted88) , &(frame) };
StrCL lifted88_cl = &(i_86);
struct str_closure j_86 = { &(lifted89) , &(frame) };
StrCL lifted89_cl = &(j_86);
struct str_closure k_86 = { &(lifted90) , &(frame) };
StrCL lifted90_cl = &(k_86);
t = apply_test_3_0(sl, lifted88_cl, lifted89_cl, lifted90_cl, t);
if((t == NULL))
goto fail82 ;
z_5 = t;
if((m_5 == NULL))
goto fail82 ;
else
{
t = m_5;
}
t = hashtable_destroy_0_0(sl, t);
if((t == NULL))
goto fail82 ;
t = z_5;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted90 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted90";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl) == NULL))
goto fail88 ;
else
{
t = sl_readvar(2, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted89 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted89";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,g_6 = NULL,h_6 = NULL,x_5 = NULL,i_6 = NULL,j_6 = NULL,y_5 = NULL;
u_5 = t;
t = hashtable_copy_0_0(sl_up(sl), t);
if((t == NULL))
goto fail87 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail87 ;
t = u_5;
v_5 = t;
if(((sl_readvar(2, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail87 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(2, sl), sl_readvar(1, sl));
}
{
ATerm trm3 = t;
t = eq_0_0(sl_up(sl), t);
if((t == NULL))
goto label5 ;
goto fail87 ;
label5 :
t = trm3;
goto label4 ;
label4 :
;
t = v_5;
w_5 = t;
h_6 = t;
if((sl_readvar(2, sl) == NULL))
goto fail87 ;
else
{
t = sl_readvar(2, sl);
}
t = hashtable_getlist_0_0(sl_up(sl), t);
if((t == NULL))
goto fail87 ;
g_6 = t;
t = h_6;
t = (ATerm) ATmakeAppl(sym__2, g_6, (ATerm) ATinsert(ATinsert(ATempty, term81), term83));
t = set_eq_0_0(sl_up(sl), t);
if((t == NULL))
goto fail87 ;
t = w_5;
x_5 = t;
j_6 = t;
if((sl_readvar(1, sl) == NULL))
goto fail87 ;
else
{
t = sl_readvar(1, sl);
}
t = hashtable_getlist_0_0(sl_up(sl), t);
if((t == NULL))
goto fail87 ;
i_6 = t;
t = j_6;
t = (ATerm) ATmakeAppl(sym__2, i_6, (ATerm) ATinsert(ATinsert(ATempty, term81), term83));
t = set_eq_0_0(sl_up(sl), t);
if((t == NULL))
goto fail87 ;
t = x_5;
y_5 = t;
if((sl_readvar(1, sl) == NULL))
goto fail87 ;
else
{
t = sl_readvar(1, sl);
}
t = hashtable_destroy_0_0(sl_up(sl), t);
if((t == NULL))
goto fail87 ;
t = y_5;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted88 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted88";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term91;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted87 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted87";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl) == NULL))
goto fail85 ;
else
{
t = sl_readvar(2, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted86 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted86";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,a_6 = NULL,b_6 = NULL,r_5 = NULL,c_6 = NULL,d_6 = NULL,s_5 = NULL;
o_5 = t;
t = hashtable_copy_0_0(sl_up(sl), t);
if((t == NULL))
goto fail84 ;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail84 ;
t = o_5;
p_5 = t;
if(((sl_readvar(2, sl) == NULL) || (sl_readvar(0, sl) == NULL)))
goto fail84 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(2, sl), sl_readvar(0, sl));
}
{
ATerm trm2 = t;
t = eq_0_0(sl_up(sl), t);
if((t == NULL))
goto label3 ;
goto fail84 ;
label3 :
t = trm2;
goto label2 ;
label2 :
;
t = p_5;
q_5 = t;
b_6 = t;
if((sl_readvar(2, sl) == NULL))
goto fail84 ;
else
{
t = sl_readvar(2, sl);
}
t = hashtable_getlist_0_0(sl_up(sl), t);
if((t == NULL))
goto fail84 ;
a_6 = t;
t = b_6;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_6);
t = set_eq_0_0(sl_up(sl), t);
if((t == NULL))
goto fail84 ;
t = q_5;
r_5 = t;
d_6 = t;
if((sl_readvar(0, sl) == NULL))
goto fail84 ;
else
{
t = sl_readvar(0, sl);
}
t = hashtable_getlist_0_0(sl_up(sl), t);
if((t == NULL))
goto fail84 ;
c_6 = t;
t = d_6;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, c_6);
t = set_eq_0_0(sl_up(sl), t);
if((t == NULL))
goto fail84 ;
t = r_5;
s_5 = t;
if((sl_readvar(0, sl) == NULL))
goto fail84 ;
else
{
t = sl_readvar(0, sl);
}
t = hashtable_destroy_0_0(sl_up(sl), t);
if((t == NULL))
goto fail84 ;
t = s_5;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
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
fail83 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_putlist_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_putlist_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
sl_init_var(0, b_5);
c_5 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail73 ;
if((b_5 == NULL))
{
b_5 = t;
}
else
if((b_5 != t))
goto fail73 ;
t = c_5;
{
struct str_closure l_85 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(l_85);
struct str_closure m_85 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(m_85);
struct str_closure n_85 = { &(lifted79) , &(frame) };
StrCL lifted79_cl = &(n_85);
struct str_closure p_85 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(p_85);
t = apply_test_4_0(sl, lifted77_cl, lifted78_cl, lifted79_cl, lifted80_cl, t);
if((t == NULL))
goto fail73 ;
{
struct str_closure q_85 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(q_85);
struct str_closure r_85 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(r_85);
struct str_closure s_85 = { &(lifted83) , &(frame) };
StrCL lifted83_cl = &(s_85);
struct str_closure t_85 = { &(lifted84) , &(frame) };
StrCL lifted84_cl = &(t_85);
t = apply_and_check_4_0(sl, lifted81_cl, lifted82_cl, lifted83_cl, lifted84_cl, t);
if((t == NULL))
goto fail73 ;
d_5 = t;
if((b_5 == NULL))
goto fail73 ;
else
{
t = b_5;
}
t = hashtable_destroy_0_0(sl, t);
if((t == NULL))
goto fail73 ;
t = d_5;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted84 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted84";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_5 = NULL,j_5 = NULL;
j_5 = t;
i_5 = t;
t = (ATerm) ATmakeAppl(sym__2, i_5, (ATerm) ATinsert(ATinsert(ATempty, term81), term83));
t = set_eq_0_0(sl_up(sl), t);
if((t == NULL))
goto fail81 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted83 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted83";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail80 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted82 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted82";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_5 = NULL,h_5 = NULL;
h_5 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, term81), term83);
g_5 = t;
t = h_5;
t = hashtable_putlist_0_1(sl_up(sl), g_5, t);
if((t == NULL))
goto fail79 ;
t = hashtable_getlist_0_0(sl_up(sl), t);
if((t == NULL))
goto fail79 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term87;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted79 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted79";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail76 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_5 = NULL,f_5 = NULL;
f_5 = t;
t = (ATerm) ATempty;
e_5 = t;
t = f_5;
t = hashtable_putlist_0_1(sl_up(sl), e_5, t);
if((t == NULL))
goto fail75 ;
t = hashtable_getlist_0_0(sl_up(sl), t);
if((t == NULL))
goto fail75 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term85;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_getlist_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_getlist_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,q_4 = NULL;
sl_init_var(0, n_4);
o_4 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail66 ;
if((n_4 == NULL))
{
n_4 = t;
}
else
if((n_4 != t))
goto fail66 ;
t = o_4;
{
struct str_closure g_84 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(g_84);
struct str_closure h_84 = { &(hashtable_getlist_0_0) , sl };
StrCL lifted70_cl = &(h_84);
struct str_closure w_84 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(w_84);
struct str_closure y_84 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(y_84);
t = apply_test_4_0(sl, lifted69_cl, lifted70_cl, lifted71_cl, lifted72_cl, t);
if((t == NULL))
goto fail66 ;
p_4 = t;
if((n_4 == NULL))
goto fail66 ;
else
{
t = n_4;
}
t_4 = t;
t = term71;
r_4 = t;
t = t_4;
u_4 = t;
t = term73;
s_4 = t;
t = u_4;
t = hashtable_put_0_2(sl, r_4, s_4, t);
if((t == NULL))
goto fail66 ;
x_4 = t;
t = term75;
v_4 = t;
t = x_4;
y_4 = t;
t = term77;
w_4 = t;
t = y_4;
t = hashtable_put_0_2(sl, v_4, w_4, t);
if((t == NULL))
goto fail66 ;
t = p_4;
{
struct str_closure z_84 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(z_84);
struct str_closure a_85 = { &(hashtable_getlist_0_0) , sl };
StrCL lifted74_cl = &(a_85);
struct str_closure b_85 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(b_85);
struct str_closure k_85 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(k_85);
t = apply_and_check_4_0(sl, lifted73_cl, lifted74_cl, lifted75_cl, lifted76_cl, t);
if((t == NULL))
goto fail66 ;
q_4 = t;
if((n_4 == NULL))
goto fail66 ;
else
{
t = n_4;
}
t = hashtable_destroy_0_0(sl, t);
if((t == NULL))
goto fail66 ;
t = q_4;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_4 = NULL,a_5 = NULL;
a_5 = t;
z_4 = t;
t = (ATerm) ATmakeAppl(sym__2, z_4, (ATerm) ATinsert(ATinsert(ATempty, term81), term83));
t = set_eq_0_0(sl_up(sl), t);
if((t == NULL))
goto fail72 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail71 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted73 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted73";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term79;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail68 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term69;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_fold_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_fold_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm e_3 = NULL,h_3 = NULL,i_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,j_3 = NULL;
sl_init_var(0, e_3);
h_3 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail41 ;
if((e_3 == NULL))
{
e_3 = t;
}
else
if((e_3 != t))
goto fail41 ;
t = h_3;
{
struct str_closure o_82 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(o_82);
struct str_closure p_82 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(p_82);
struct str_closure r_82 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(r_82);
struct str_closure s_82 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(s_82);
t = apply_test_4_0(sl, lifted39_cl, lifted40_cl, lifted42_cl, lifted43_cl, t);
if((t == NULL))
goto fail41 ;
{
struct str_closure v_82 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(v_82);
struct str_closure x_82 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(x_82);
struct str_closure y_82 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(y_82);
struct str_closure a_83 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(a_83);
t = apply_test_4_0(sl, lifted44_cl, lifted45_cl, lifted47_cl, lifted48_cl, t);
if((t == NULL))
goto fail41 ;
{
struct str_closure d_83 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(d_83);
struct str_closure e_83 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(e_83);
struct str_closure g_83 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(g_83);
struct str_closure h_83 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(h_83);
t = apply_test_4_0(sl, lifted49_cl, lifted50_cl, lifted52_cl, lifted53_cl, t);
if((t == NULL))
goto fail41 ;
i_3 = t;
if((e_3 == NULL))
goto fail41 ;
else
{
t = e_3;
}
x_3 = t;
t = term49;
v_3 = t;
t = x_3;
y_3 = t;
t = term51;
w_3 = t;
t = y_3;
t = hashtable_put_0_2(sl, v_3, w_3, t);
if((t == NULL))
goto fail41 ;
b_4 = t;
t = term51;
z_3 = t;
t = b_4;
c_4 = t;
t = term53;
a_4 = t;
t = c_4;
t = hashtable_put_0_2(sl, z_3, a_4, t);
if((t == NULL))
goto fail41 ;
f_4 = t;
t = term53;
d_4 = t;
t = f_4;
g_4 = t;
t = term55;
e_4 = t;
t = g_4;
t = hashtable_put_0_2(sl, d_4, e_4, t);
if((t == NULL))
goto fail41 ;
t = i_3;
{
struct str_closure l_83 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(l_83);
struct str_closure m_83 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(m_83);
struct str_closure o_83 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(o_83);
struct str_closure p_83 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(p_83);
t = apply_test_4_0(sl, lifted54_cl, lifted55_cl, lifted57_cl, lifted58_cl, t);
if((t == NULL))
goto fail41 ;
{
struct str_closure s_83 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(s_83);
struct str_closure u_83 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(u_83);
struct str_closure v_83 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(v_83);
struct str_closure x_83 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(x_83);
t = apply_test_4_0(sl, lifted59_cl, lifted60_cl, lifted62_cl, lifted63_cl, t);
if((t == NULL))
goto fail41 ;
{
struct str_closure a_84 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(a_84);
struct str_closure b_84 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(b_84);
struct str_closure d_84 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(d_84);
struct str_closure e_84 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(e_84);
t = apply_test_4_0(sl, lifted64_cl, lifted65_cl, lifted67_cl, lifted68_cl, t);
if((t == NULL))
goto fail41 ;
j_3 = t;
if((e_3 == NULL))
goto fail41 ;
else
{
t = e_3;
}
t = hashtable_destroy_0_0(sl, t);
if((t == NULL))
goto fail41 ;
t = j_3;
}
}
}
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
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term67;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted67 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted67";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail64 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_4 = NULL,m_4 = NULL;
struct str_closure y_83 = { &(k_3) , sl_up(sl) };
StrCL lifted66_cl = &(y_83);
m_4 = t;
t = term43;
l_4 = t;
t = m_4;
t = hashtable_fold_1_1(sl_up(sl), lifted66_cl, l_4, t);
if((t == NULL))
goto fail63 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term65;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term63;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail60 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_4 = NULL,k_4 = NULL;
struct str_closure r_83 = { &(int_add_0_1) , sl_up(sl) };
StrCL lifted61_cl = &(r_83);
k_4 = t;
t = term43;
j_4 = t;
t = k_4;
t = hashtable_fold_values_1_1(sl_up(sl), lifted61_cl, j_4, t);
if((t == NULL))
goto fail59 ;
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
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term59;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail56 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_4 = NULL,i_4 = NULL;
struct str_closure j_83 = { &(int_add_0_1) , sl_up(sl) };
StrCL lifted56_cl = &(j_83);
i_4 = t;
t = term43;
h_4 = t;
t = i_4;
t = hashtable_fold_keys_1_1(sl_up(sl), lifted56_cl, h_4, t);
if((t == NULL))
goto fail55 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail52 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_3 = NULL,u_3 = NULL;
struct str_closure b_83 = { &(k_3) , sl_up(sl) };
StrCL lifted51_cl = &(b_83);
u_3 = t;
t = term43;
t_3 = t;
t = u_3;
t = hashtable_fold_1_1(sl_up(sl), lifted51_cl, t_3, t);
if((t == NULL))
goto fail51 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail48 ;
else
{
t = sl_readvar(0, sl);
}
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
{
ATerm r_3 = NULL,s_3 = NULL;
struct str_closure u_82 = { &(int_add_0_1) , sl_up(sl) };
StrCL lifted46_cl = &(u_82);
s_3 = t;
t = term43;
r_3 = t;
t = s_3;
t = hashtable_fold_values_1_1(sl_up(sl), lifted46_cl, r_3, t);
if((t == NULL))
goto fail47 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term45;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
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
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail44 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_3 = NULL,q_3 = NULL;
struct str_closure m_82 = { &(int_add_0_1) , sl_up(sl) };
StrCL lifted41_cl = &(m_82);
q_3 = t;
t = term43;
p_3 = t;
t = q_3;
t = hashtable_fold_keys_1_1(sl_up(sl), lifted41_cl, p_3, t);
if((t == NULL))
goto fail43 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm k_3 (StrSL sl, ATerm f_3, ATerm g_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "k_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_3 = NULL,n_3 = NULL,m_3 = NULL,o_3 = NULL;
n_3 = t;
l_3 = t;
o_3 = t;
t = (ATerm) ATmakeAppl(sym__2, f_3, g_3);
t = mul_0_0(sl, t);
if((t == NULL))
goto fail40 ;
m_3 = t;
t = o_3;
t = (ATerm) ATmakeAppl(sym__2, l_3, m_3);
t = add_0_0(sl, t);
if((t == NULL))
goto fail40 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_keys_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_keys_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL;
sl_init_var(0, x_2);
y_2 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail32 ;
if((x_2 == NULL))
{
x_2 = t;
}
else
if((x_2 != t))
goto fail32 ;
t = y_2;
{
struct str_closure c_82 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(c_82);
struct str_closure d_82 = { &(hashtable_keys_0_0) , sl };
StrCL lifted32_cl = &(d_82);
struct str_closure e_82 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(e_82);
struct str_closure f_82 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(f_82);
t = apply_test_4_0(sl, lifted31_cl, lifted32_cl, lifted33_cl, lifted34_cl, t);
if((t == NULL))
goto fail32 ;
{
struct str_closure g_82 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(g_82);
struct str_closure h_82 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(h_82);
struct str_closure j_82 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(j_82);
struct str_closure l_82 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(l_82);
t = apply_test_4_0(sl, lifted35_cl, lifted36_cl, lifted37_cl, lifted38_cl, t);
if((t == NULL))
goto fail32 ;
z_2 = t;
if((x_2 == NULL))
goto fail32 ;
else
{
t = x_2;
}
t = hashtable_destroy_0_0(sl, t);
if((t == NULL))
goto fail32 ;
t = z_2;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term15);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail38 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
c_3 = t;
t = term15;
a_3 = t;
t = c_3;
d_3 = t;
t = term17;
b_3 = t;
t = d_3;
t = hashtable_put_0_2(sl_up(sl), a_3, b_3, t);
if((t == NULL))
goto fail37 ;
t = hashtable_keys_0_0(sl_up(sl), t);
if((t == NULL))
goto fail37 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail34 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_remove_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_remove_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
sl_init_var(0, m_2);
n_2 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail27 ;
if((m_2 == NULL))
{
m_2 = t;
}
else
if((m_2 != t))
goto fail27 ;
t = n_2;
{
struct str_closure w_81 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(w_81);
struct str_closure x_81 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(x_81);
struct str_closure z_81 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(z_81);
struct str_closure a_82 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(a_82);
t = apply_and_check_4_0(sl, lifted27_cl, lifted28_cl, lifted29_cl, lifted30_cl, t);
if((t == NULL))
goto fail27 ;
o_2 = t;
if((m_2 == NULL))
goto fail27 ;
else
{
t = m_2;
}
t = hashtable_destroy_0_0(sl, t);
if((t == NULL))
goto fail27 ;
t = o_2;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
ATerm v_2 = NULL,w_2 = NULL;
if((sl_readvar(0, sl) == NULL))
goto label1 ;
else
{
t = sl_readvar(0, sl);
}
w_2 = t;
t = term15;
v_2 = t;
t = w_2;
t = hashtable_get_0_1(sl_up(sl), v_2, t);
if((t == NULL))
goto label1 ;
goto fail31 ;
label1 :
t = trm1;
goto label0 ;
label0 :
;
}
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
if((sl_readvar(0, sl) == NULL))
goto fail30 ;
else
{
t = sl_readvar(0, sl);
}
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
{
ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL;
r_2 = t;
t = term15;
p_2 = t;
t = r_2;
s_2 = t;
t = term17;
q_2 = t;
t = s_2;
t = hashtable_put_0_2(sl_up(sl), p_2, q_2, t);
if((t == NULL))
goto fail29 ;
u_2 = t;
t = term15;
t_2 = t;
t = u_2;
t = hashtable_remove_0_1(sl_up(sl), t_2, t);
if((t == NULL))
goto fail29 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term37;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_get_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_get_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_81 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(n_81);
struct str_closure o_81 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(o_81);
struct str_closure p_81 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(p_81);
struct str_closure q_81 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(q_81);
struct str_closure t_81 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(t_81);
struct str_closure u_81 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(u_81);
t = apply_and_fail_3_0(sl, lifted21_cl, lifted22_cl, lifted23_cl, t);
if((t == NULL))
goto fail20 ;
t = apply_and_fail_3_0(sl, lifted24_cl, lifted25_cl, lifted26_cl, t);
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
t = term5;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_2 = NULL,j_2 = NULL;
j_2 = t;
t = term15;
i_2 = t;
t = j_2;
t = hashtable_get_0_1(sl_up(sl), i_2, t);
if((t == NULL))
goto fail25 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
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
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_2 = NULL,l_2 = NULL;
l_2 = t;
t = term15;
k_2 = t;
t = l_2;
t = hashtable_get_0_1(sl_up(sl), k_2, t);
if((t == NULL))
goto fail22 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_put_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_put_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL;
sl_init_var(0, z_1);
a_2 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail15 ;
if((z_1 == NULL))
{
z_1 = t;
}
else
if((z_1 != t))
goto fail15 ;
t = a_2;
{
struct str_closure g_81 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(g_81);
struct str_closure h_81 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(h_81);
struct str_closure i_81 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(i_81);
struct str_closure j_81 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(j_81);
t = apply_and_check_4_0(sl, lifted17_cl, lifted18_cl, lifted19_cl, lifted20_cl, t);
if((t == NULL))
goto fail15 ;
b_2 = t;
if((z_1 == NULL))
goto fail15 ;
else
{
t = z_1;
}
t = hashtable_destroy_0_0(sl, t);
if((t == NULL))
goto fail15 ;
t = b_2;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_2 = NULL,h_2 = NULL;
if((sl_readvar(0, sl) == NULL))
goto fail19 ;
else
{
t = sl_readvar(0, sl);
}
h_2 = t;
t = term15;
g_2 = t;
t = h_2;
t = hashtable_get_0_1(sl_up(sl), g_2, t);
if((t == NULL))
goto fail19 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("value", 0, ATtrue))))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail18 ;
else
{
t = sl_readvar(0, sl);
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
ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
e_2 = t;
t = term15;
c_2 = t;
t = e_2;
f_2 = t;
t = term17;
d_2 = t;
t = f_2;
t = hashtable_put_0_2(sl_up(sl), c_2, d_2, t);
if((t == NULL))
goto fail17 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm legacy_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "legacy_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_80 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(u_80);
struct str_closure v_80 = { &(table_keys_0_0) , sl };
StrCL lifted14_cl = &(v_80);
struct str_closure w_80 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(w_80);
struct str_closure y_80 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(y_80);
struct str_closure z_80 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(z_80);
struct str_closure a_81 = { &(table_put_0_0) , sl };
StrCL lifted7_cl = &(a_81);
struct str_closure b_81 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(b_81);
struct str_closure c_81 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(c_81);
t = apply_and_check_4_0(sl, lifted6_cl, lifted7_cl, lifted8_cl, lifted9_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure d_81 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(d_81);
struct str_closure e_81 = { &(table_get_0_0) , sl };
StrCL lifted11_cl = &(e_81);
struct str_closure f_81 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(f_81);
t = apply_and_fail_3_0(sl, lifted10_cl, lifted11_cl, lifted12_cl, t);
if((t == NULL))
goto fail6 ;
t = apply_test_4_0(sl, lifted13_cl, lifted14_cl, lifted15_cl, lifted16_cl, t);
if((t == NULL))
goto fail6 ;
}
}
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
t = term27;
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
t = term23;
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
t = term21;
t = table_get_0_0(sl_up(sl), t);
if((t == NULL))
goto fail12 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("value", 0, ATtrue))))
goto fail12 ;
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
t = term19;
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
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
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
struct str_closure s_80 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(s_80);
struct str_closure t_80 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(t_80);
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
t = legacy_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
{
struct str_closure o_80 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(o_80);
struct str_closure p_80 = { &(new_hashtable_0_0) , sl_up(sl) };
StrCL lifted3_cl = &(p_80);
struct str_closure q_80 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(q_80);
struct str_closure r_80 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(r_80);
t = apply_and_check_4_0(sl_up(sl), lifted2_cl, lifted3_cl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto fail2 ;
t = test_put_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_get_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_remove_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_keys_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_getlist_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_putlist_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_copy_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_stack_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_intersect_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_union_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_eq_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_fold_0_0(sl_up(sl), t);
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
if(match_cons(t, sym_Hashtable_1))
{
ATerm trm0 = ATgetArgument(t, 0);
}
else
goto fail5 ;
t = hashtable_destroy_0_0(sl_up(sl_up(sl)), t);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 255));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(table_keys_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_keys_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(table_get_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_get_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(table_put_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_put_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_eq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_eq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_union_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_union_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_intersect_wempty_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_intersect_wempty_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_peekpop_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_peekpop_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_peek_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_peek_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_pop_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_pop_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_push_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_push_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_copy_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_copy_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_putlist_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_putlist_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_getlist_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_getlist_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_fold_values_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_fold_values_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_fold_keys_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_fold_keys_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_fold_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_fold_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_keys_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_keys_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_remove_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_remove_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_get_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_get_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_put_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_put_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_destroy_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_destroy_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(new_hashtable_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("new_hashtable_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_eq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_eq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(eq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("eq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(mul_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("mul_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_add_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_add_0_1", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted227);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted227", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted225);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted225", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted224);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted224", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted222);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted222", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted221);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted221", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted219);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted219", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted218);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted218", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted216);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted216", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted215);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted215", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted213);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted213", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted212);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted212", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted210);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted210", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted209);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted209", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted207);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted207", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_eq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_eq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted206);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted206", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted205);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted205", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted204);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted204", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted203);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted203", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted202);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted202", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted201);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted201", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted200);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted200", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted199);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted199", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted198);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted198", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted197);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted197", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted196);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted196", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted195);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted195", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted194);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted194", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted193);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted193", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted192);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted192", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted191);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted191", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted190);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted190", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted189);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted189", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted188);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted188", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted187);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted187", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted186);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted186", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted185);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted185", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted184);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted184", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted183);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted183", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted182);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted182", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted181);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted181", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted180);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted180", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted179);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted179", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted178);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted178", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted177);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted177", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted176);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted176", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted175);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted175", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted174);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted174", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted173);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted173", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted172);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted172", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted171);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted171", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted170);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted170", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted169);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted169", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted168);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted168", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted167);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted167", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted166);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted166", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted165);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted165", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted164);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted164", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_union_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_union_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted163);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted163", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted162);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted162", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted161);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted161", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted160);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted160", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted159);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted159", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted158);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted158", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted157);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted157", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted156);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted156", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted155);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted155", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted154);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted154", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted153);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted153", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted152);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted152", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted151);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted151", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted150);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted150", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted149);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted149", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted148);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted148", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted147);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted147", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted146);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted146", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted145);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted145", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted144);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted144", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted143);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted143", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted142);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted142", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted137);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted137", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted132);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted132", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted127);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted127", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted126);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted126", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted125);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted125", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted124);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted124", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted123);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted123", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted122);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted122", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted121);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted121", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_intersect_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_intersect_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted120);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted120", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted119);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted119", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted118);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted118", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted117);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted117", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted116);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted116", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted115);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted115", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted114);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted114", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted113);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted113", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted112);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted112", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted111);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted111", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted110);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted110", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted109);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted109", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted108);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted108", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted107);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted107", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted106);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted106", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted105);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted105", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted104);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted104", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted103);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted103", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted102);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted102", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted101);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted101", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted100);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted100", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted99);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted99", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted95);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted95", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted91);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted91", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_stack_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_stack_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted90);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted90", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted86);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted86", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted85);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted85", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_copy_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_copy_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted84);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted84", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted83);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted83", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted79);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted79", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted78);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted78", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted77);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted77", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_putlist_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_putlist_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted76);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted76", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted75);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted75", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted73);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted73", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted72);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted72", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted71);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted71", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted69);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted69", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_getlist_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_getlist_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted68);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted68", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted67);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted67", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted45);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted45", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted39);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted39", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_fold_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_fold_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(k_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("k_3", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted33);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted33", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_keys_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_keys_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(test_remove_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_remove_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(test_get_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_get_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(test_put_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_put_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(legacy_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("legacy_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
