#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_layout_1;
static Symbol sym__4;
static Symbol sym__3;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Error_0;
static Symbol sym_FILE_1;
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
static Symbol sym_LNAT_2;
static Symbol sym_Arg_1;
static Symbol sym_Arg2_2;
static Symbol sym_SOpt_2;
static Symbol sym_VS_0;
static Symbol sym_HS_0;
static Symbol sym_KW_0;
static Symbol sym_PP_Table_1;
static Symbol sym_PP_Entry_2;
static Symbol sym_Path1_1;
static Symbol sym_Path_2;
static Symbol sym_selector_2;
static Symbol sym_Conservative_0;
static Symbol sym_cons_1;
static Symbol sym_amb_1;
static Symbol sym_layout_place_holder_0;
static Symbol sym_seq_1;
static Symbol sym_bracket_symbol_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_fun_1;
static Symbol sym_appl_2;
static Symbol sym_term_1;
static Symbol sym_bracket_0;
static Symbol sym_reject_0;
static Symbol sym_attrs_1;
static Symbol sym_no_attrs_0;
static Symbol sym_prod_3;
static Symbol sym_cf_1;
static Symbol sym_lex_1;
static Symbol sym_layout_0;
static Symbol sym_empty_0;
static Symbol sym_opt_1;
static Symbol sym_iter_1;
static Symbol sym_iter_star_1;
static Symbol sym_iter_sep_2;
static Symbol sym_iter_star_sep_2;
static Symbol sym_func_2;
static Symbol sym_sort_1;
static Symbol sym_lit_1;
static Symbol sym_label_2;
static Symbol sym_default_1;
static Symbol sym_quoted_1;
static Symbol sym_unquoted_1;
static Symbol sym_char_class_1;
static Symbol sym_seq_2;
static Symbol sym_alt_2;
static void init_module_constructors (void)
{
sym_layout_1 = ATmakeSymbol("layout", 1, ATfalse);
ATprotectSymbol(sym_layout_1);
sym__4 = ATmakeSymbol("", 4, ATfalse);
ATprotectSymbol(sym__4);
sym__3 = ATmakeSymbol("", 3, ATfalse);
ATprotectSymbol(sym__3);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
ATprotectSymbol(sym_Error_0);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
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
sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
ATprotectSymbol(sym_LNAT_2);
sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
ATprotectSymbol(sym_Arg_1);
sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
ATprotectSymbol(sym_Arg2_2);
sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
ATprotectSymbol(sym_SOpt_2);
sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
ATprotectSymbol(sym_VS_0);
sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
ATprotectSymbol(sym_HS_0);
sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
ATprotectSymbol(sym_KW_0);
sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
ATprotectSymbol(sym_PP_Table_1);
sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
ATprotectSymbol(sym_PP_Entry_2);
sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
ATprotectSymbol(sym_Path1_1);
sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
ATprotectSymbol(sym_Path_2);
sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
ATprotectSymbol(sym_selector_2);
sym_Conservative_0 = ATmakeSymbol("Conservative", 0, ATfalse);
ATprotectSymbol(sym_Conservative_0);
sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
ATprotectSymbol(sym_cons_1);
sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
ATprotectSymbol(sym_amb_1);
sym_layout_place_holder_0 = ATmakeSymbol("layout-place-holder", 0, ATfalse);
ATprotectSymbol(sym_layout_place_holder_0);
sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
ATprotectSymbol(sym_seq_1);
sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
ATprotectSymbol(sym_bracket_symbol_1);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_fun_1 = ATmakeSymbol("fun", 1, ATfalse);
ATprotectSymbol(sym_fun_1);
sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
ATprotectSymbol(sym_appl_2);
sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
ATprotectSymbol(sym_term_1);
sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
ATprotectSymbol(sym_bracket_0);
sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
ATprotectSymbol(sym_reject_0);
sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
ATprotectSymbol(sym_attrs_1);
sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
ATprotectSymbol(sym_no_attrs_0);
sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
ATprotectSymbol(sym_prod_3);
sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
ATprotectSymbol(sym_cf_1);
sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
ATprotectSymbol(sym_lex_1);
sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
ATprotectSymbol(sym_layout_0);
sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
ATprotectSymbol(sym_empty_0);
sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
ATprotectSymbol(sym_opt_1);
sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
ATprotectSymbol(sym_iter_1);
sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
ATprotectSymbol(sym_iter_star_1);
sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
ATprotectSymbol(sym_iter_sep_2);
sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
ATprotectSymbol(sym_iter_star_sep_2);
sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
ATprotectSymbol(sym_func_2);
sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
ATprotectSymbol(sym_sort_1);
sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
ATprotectSymbol(sym_lit_1);
sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
ATprotectSymbol(sym_label_2);
sym_default_1 = ATmakeSymbol("default", 1, ATfalse);
ATprotectSymbol(sym_default_1);
sym_quoted_1 = ATmakeSymbol("quoted", 1, ATfalse);
ATprotectSymbol(sym_quoted_1);
sym_unquoted_1 = ATmakeSymbol("unquoted", 1, ATfalse);
ATprotectSymbol(sym_unquoted_1);
sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
ATprotectSymbol(sym_char_class_1);
sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
ATprotectSymbol(sym_seq_2);
sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
ATprotectSymbol(sym_alt_2);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(ATmakeSymbol("--injections", 0, ATtrue));
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeInt(34);
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(sym_Conservative_0);
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(sym_HS_0);
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(sym_SOpt_2, term129, term131);
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
ATprotect(&(term147));
term147 = term146;
ATprotect(&(term148));
term148 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
ATprotect(&(term149));
term149 = term148;
ATprotect(&(term150));
term150 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
ATprotect(&(term151));
term151 = term150;
ATprotect(&(term152));
term152 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
ATprotect(&(term153));
term153 = term152;
ATprotect(&(term154));
term154 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
ATprotect(&(term155));
term155 = term154;
ATprotect(&(term156));
term156 = (ATerm) ATmakeAppl(ATmakeSymbol("core-sdf-parenthesize", 0, ATtrue));
ATprotect(&(term157));
term157 = term156;
ATprotect(&(term158));
term158 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
ATprotect(&(term159));
term159 = term158;
ATprotect(&(term160));
term160 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
ATprotect(&(term161));
term161 = term160;
ATprotect(&(term162));
term162 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
ATprotect(&(term163));
term163 = term162;
ATprotect(&(term164));
term164 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
ATprotect(&(term165));
term165 = term164;
ATprotect(&(term166));
term166 = (ATerm) ATmakeInt(1);
ATprotect(&(term167));
term167 = term166;
ATprotect(&(term168));
term168 = (ATerm) ATmakeAppl(sym_Arg_1, term167);
ATprotect(&(term169));
term169 = term168;
ATprotect(&(term170));
term170 = (ATerm) ATmakeAppl(sym_VS_0);
ATprotect(&(term171));
term171 = term170;
ATprotect(&(term172));
term172 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
ATprotect(&(term173));
term173 = term172;
ATprotect(&(term174));
term174 = (ATerm) ATmakeAppl(sym_SOpt_2, term171, term173);
ATprotect(&(term175));
term175 = term174;
ATprotect(&(term176));
term176 = (ATerm) ATmakeAppl(sym_KW_0);
ATprotect(&(term177));
term177 = term176;
ATprotect(&(term178));
term178 = (ATerm) ATmakeInt(2);
ATprotect(&(term179));
term179 = term178;
ATprotect(&(term180));
term180 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
ATprotect(&(term181));
term181 = term180;
ATprotect(&(term182));
term182 = (ATerm) ATmakeAppl(sym_Error_0);
ATprotect(&(term183));
term183 = term182;
ATprotect(&(term184));
term184 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
ATprotect(&(term185));
term185 = term184;
ATprotect(&(term186));
term186 = (ATerm) ATmakeAppl(ATmakeSymbol("on", 0, ATtrue));
ATprotect(&(term187));
term187 = term186;
ATprotect(&(term188));
term188 = (ATerm) ATmakeAppl(sym__2, term127, term187);
ATprotect(&(term189));
term189 = term188;
ATprotect(&(term190));
term190 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
ATprotect(&(term191));
term191 = term190;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm Cons_2_0 (StrSL sl, StrCL c_120, StrCL d_120, ATerm t);
ATerm _2_0 (StrSL sl, StrCL v_112, StrCL w_112, ATerm t);
ATerm table_get_0_0 (StrSL sl, ATerm t);
ATerm table_put_0_0 (StrSL sl, ATerm t);
ATerm table_create_0_0 (StrSL sl, ATerm t);
ATerm separate_by_1_0 (StrSL sl, StrCL k_104, ATerm t);
ATerm separate_by_0_0 (StrSL sl, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm at_last_1_0 (StrSL sl, StrCL v_103, ATerm t);
ATerm at_end_1_0 (StrSL sl, StrCL q_103, ATerm t);
ATerm fetch_elem_1_0 (StrSL sl, StrCL k_103, ATerm t);
ATerm fetch_1_0 (StrSL sl, StrCL j_103, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL c_103, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm Tl_0_0 (StrSL sl, ATerm t);
ATerm Hd_0_0 (StrSL sl, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL h_102, ATerm t);
ATerm index_0_1 (StrSL sl, ATerm v_101, ATerm t);
ATerm index_0_0 (StrSL sl, ATerm t);
ATerm nzip_1_0 (StrSL sl, StrCL c_100, ATerm t);
ATerm split_2_0 (StrSL sl, StrCL g_98, StrCL h_98, ATerm t);
ATerm Snd_0_0 (StrSL sl, ATerm t);
ATerm Fst_0_0 (StrSL sl, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL c_80, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL w_75, ATerm t);
ATerm sometd_1_0 (StrSL sl, StrCL d_73, ATerm t);
ATerm oncetd_1_0 (StrSL sl, StrCL z_72, ATerm t);
ATerm bottomup_1_0 (StrSL sl, StrCL y_71, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL w_71, ATerm t);
ATerm read_text_file_0_0 (StrSL sl, ATerm t);
ATerm exit_0_0 (StrSL sl, ATerm t);
ATerm say_1_0 (StrSL sl, StrCL c_69, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL v_68, ATerm t);
ATerm ReadFromFile_0_0 (StrSL sl, ATerm t);
ATerm crush_3_0 (StrSL sl, StrCL a_68, StrCL d_68, StrCL e_68, ATerm t);
ATerm mkterm_0_0 (StrSL sl, ATerm t);
ATerm string_to_int_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm even_0_0 (StrSL sl, ATerm t);
ATerm add_0_0 (StrSL sl, ATerm t);
ATerm is_subterm_0_0 (StrSL sl, ATerm t);
ATerm is_alpha_0_0 (StrSL sl, ATerm t);
ATerm is_alphanum_0_0 (StrSL sl, ATerm t);
ATerm trim_chars_1_0 (StrSL sl, StrCL w_64, ATerm t);
ATerm un_double_quote_0_0 (StrSL sl, ATerm t);
ATerm double_quote_0_0 (StrSL sl, ATerm t);
ATerm unescape_0_0 (StrSL sl, ATerm t);
ATerm escape_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm explode_string_0_0 (StrSL sl, ATerm t);
ATerm implode_string_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm new_0_0 (StrSL sl, ATerm t);
ATerm extend_config_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_2_0 (StrSL sl, StrCL t_60, StrCL u_60, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL u_58, StrCL v_58, StrCL w_58, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL p_58, StrCL q_58, StrCL r_58, ATerm t);
ATerm if_verbose5_1_0 (StrSL sl, StrCL t_57, ATerm t);
ATerm if_verbose1_1_0 (StrSL sl, StrCL p_57, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm y_56, ATerm b_57, ATerm t);
ATerm xtc_temp_files_1_0 (StrSL sl, StrCL w_50, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL y_49, StrCL z_49, ATerm t);
ATerm layout_1_0 (StrSL sl, StrCL r_49, ATerm t);
ATerm Arg2_2_0 (StrSL sl, StrCL k_48, StrCL l_48, ATerm t);
ATerm SOpt_2_0 (StrSL sl, StrCL i_48, StrCL j_48, ATerm t);
ATerm selector_2_0 (StrSL sl, StrCL p_47, StrCL q_47, ATerm t);
ATerm prod_3_0 (StrSL sl, StrCL p_45, StrCL q_45, StrCL r_45, ATerm t);
ATerm iter_1_0 (StrSL sl, StrCL g_45, ATerm t);
ATerm iter_star_1_0 (StrSL sl, StrCL f_45, ATerm t);
ATerm iter_sep_2_0 (StrSL sl, StrCL d_45, StrCL e_45, ATerm t);
ATerm iter_star_sep_2_0 (StrSL sl, StrCL b_45, StrCL c_45, ATerm t);
ATerm lit_1_0 (StrSL sl, StrCL q_44, ATerm t);
ATerm alt_2_0 (StrSL sl, StrCL l_42, StrCL m_42, ATerm t);
static ATerm lifted172 (StrSL sl, ATerm t);
static ATerm lifted171 (StrSL sl, ATerm t);
static ATerm lifted170 (StrSL sl, ATerm t);
static ATerm lifted169 (StrSL sl, ATerm t);
static ATerm lifted168 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted167 (StrSL sl, ATerm t);
static ATerm lifted166 (StrSL sl, ATerm t);
static ATerm e_42 (StrSL sl, ATerm t);
static ATerm lifted162 (StrSL sl, ATerm t);
static ATerm lifted161 (StrSL sl, ATerm t);
ATerm filter_literals_0_0 (StrSL sl, ATerm t);
ATerm fatal_ambiguity_0_0 (StrSL sl, ATerm t);
static ATerm lifted159 (StrSL sl, ATerm t);
static ATerm lifted158 (StrSL sl, ATerm t);
ATerm application_to_abox_0_0 (StrSL sl, ATerm t);
static ATerm lifted156 (StrSL sl, ATerm t);
ATerm get_pp_entry_0_0 (StrSL sl, ATerm t);
static ATerm lifted154 (StrSL sl, ATerm t);
static ATerm lifted153 (StrSL sl, ATerm t);
static ATerm lifted150 (StrSL sl, ATerm t);
ATerm get_templ_0_0 (StrSL sl, ATerm t);
static ATerm a_40 (StrSL sl, ATerm t);
ATerm seq2abox_0_0 (StrSL sl, ATerm t);
ATerm make_path_0_0 (StrSL sl, ATerm t);
static ATerm lifted149 (StrSL sl, ATerm t);
static ATerm lifted148 (StrSL sl, ATerm t);
ATerm BuildSepList_4_0 (StrSL sl, StrCL z_38, StrCL a_39, StrCL b_39, StrCL c_39, ATerm t);
static ATerm lifted147 (StrSL sl, ATerm t);
static ATerm lifted146 (StrSL sl, ATerm t);
static ATerm lifted145 (StrSL sl, ATerm t);
static ATerm lifted144 (StrSL sl, ATerm t);
static ATerm lifted143 (StrSL sl, ATerm t);
static ATerm lifted142 (StrSL sl, ATerm t);
static ATerm lifted141 (StrSL sl, ATerm t);
static ATerm lifted140 (StrSL sl, ATerm t);
static ATerm lifted139 (StrSL sl, ATerm t);
ATerm build_sep_list_0_0 (StrSL sl, ATerm t);
static ATerm lifted138 (StrSL sl, ATerm t);
ATerm build_list_0_0 (StrSL sl, ATerm t);
static ATerm lifted136 (StrSL sl, ATerm t);
static ATerm lifted135 (StrSL sl, ATerm t);
static ATerm i_35 (StrSL sl, ATerm t);
ATerm symbol2abox_0_0 (StrSL sl, ATerm t);
static ATerm lifted133 (StrSL sl, ATerm t);
static ATerm lifted132 (StrSL sl, ATerm t);
static ATerm lifted131 (StrSL sl, ATerm t);
static ATerm lifted130 (StrSL sl, ATerm t);
static ATerm lifted129 (StrSL sl, ATerm t);
static ATerm lifted128 (StrSL sl, ATerm t);
static ATerm lifted127 (StrSL sl, ATerm t);
static ATerm lifted126 (StrSL sl, ATerm t);
ATerm asfix2abox_0_0 (StrSL sl, ATerm t);
ATerm Make_0_0 (StrSL sl, ATerm t);
static ATerm t_33 (StrSL sl, ATerm t);
ATerm pair_0_0 (StrSL sl, ATerm t);
static ATerm lifted122 (StrSL sl, ATerm t);
static ATerm lifted120 (StrSL sl, ATerm t);
static ATerm lifted118 (StrSL sl, ATerm t);
static ATerm lifted117 (StrSL sl, ATerm t);
static ATerm lifted116 (StrSL sl, ATerm t);
static ATerm lifted111 (StrSL sl, ATerm t);
ATerm make_0_0 (StrSL sl, ATerm t);
static ATerm lifted108 (StrSL sl, ATerm t);
static ATerm lifted107 (StrSL sl, ATerm t);
static ATerm l_32 (StrSL sl, ATerm t);
ATerm number_node_1_0 (StrSL sl, StrCL k_32, ATerm t);
static ATerm lifted105 (StrSL sl, ATerm t);
static ATerm lifted104 (StrSL sl, ATerm t);
ATerm argument_list_0_0 (StrSL sl, ATerm t);
static ATerm a_32 (StrSL sl, ATerm t);
ATerm flat_alt_0_0 (StrSL sl, ATerm t);
static ATerm lifted102 (StrSL sl, ATerm t);
static ATerm lifted101 (StrSL sl, ATerm t);
static ATerm lifted100 (StrSL sl, ATerm t);
static ATerm lifted99 (StrSL sl, ATerm t);
static ATerm v_31 (StrSL sl, ATerm t);
ATerm symbol2abox_1_0 (StrSL sl, StrCL u_31, ATerm t);
static ATerm lifted98 (StrSL sl, ATerm t);
static ATerm lifted97 (StrSL sl, ATerm t);
ATerm symbols2pp_entries_1_0 (StrSL sl, StrCL m_30, ATerm t);
static ATerm lifted95 (StrSL sl, ATerm t);
static ATerm lifted94 (StrSL sl, ATerm t);
static ATerm lifted96 (StrSL sl, ATerm t);
ATerm number_nonterminals_0_0 (StrSL sl, ATerm t);
static ATerm lifted93 (StrSL sl, ATerm t);
static ATerm lifted92 (StrSL sl, ATerm t);
static ATerm lifted91 (StrSL sl, ATerm t);
ATerm ignore_prod_0_0 (StrSL sl, ATerm t);
static ATerm lifted89 (StrSL sl, ATerm t);
static ATerm lifted88 (StrSL sl, ATerm t);
static ATerm lifted87 (StrSL sl, ATerm t);
static ATerm lifted90 (StrSL sl, ATerm t);
ATerm missing_constructor_warning_0_0 (StrSL sl, ATerm t);
static ATerm lifted85 (StrSL sl, ATerm t);
ATerm generate_pp_entries_0_0 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted83 (StrSL sl, ATerm t);
ATerm xtc_pp_sdf2_0_0 (StrSL sl, ATerm t);
ATerm add_arg_flags_0_0 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
ATerm xtc_ast2abox_1_0 (StrSL sl, StrCL u_27, ATerm t);
ATerm is_inject_prod_0_0 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
ATerm get_cnstr_name_0_0 (StrSL sl, ATerm t);
ATerm is_pp_conservative_enabled_0_0 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
ATerm pp_options_0_0 (StrSL sl, ATerm t);
ATerm get_config_p_0_0 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
ATerm pp_table_get_0_0 (StrSL sl, ATerm t);
ATerm MakePPTerm_0_0 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
ATerm path_to_string_0_0 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
ATerm mk_key_0_0 (StrSL sl, ATerm t);
ATerm StoreEntryIfNotExists_0_0 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
ATerm StoreEntry_0_0 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
ATerm read_pp_tables_0_0 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
ATerm flat_list_1_0 (StrSL sl, StrCL v_49, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm m_23 (StrSL sl, ATerm t);
ATerm collect_p__1_0 (StrSL sl, StrCL l_23, ATerm t);
static ATerm i_23 (StrSL sl, ATerm t);
ATerm instantiate_sep_list_0_1 (StrSL sl, ATerm z_22, ATerm t);
static ATerm w_22 (StrSL sl, ATerm t);
ATerm instantiate_list_0_1 (StrSL sl, ATerm o_22, ATerm t);
ATerm SlowInstantiate_0_1 (StrSL sl, ATerm u_49, ATerm t);
ATerm FastInstantiate_0_1 (StrSL sl, ATerm t_49, ATerm t);
ATerm Instantiate_0_1 (StrSL sl, ATerm x_21, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
ATerm instantiate_0_1 (StrSL sl, ATerm w_21, ATerm t);
ATerm instantiate_0_0 (StrSL sl, ATerm t);
ATerm layout2box_0_0 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
ATerm has_significant_layout_0_0 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm h_21 (StrSL sl, ATerm t);
ATerm InsLayout_1_0 (StrSL sl, StrCL g_21, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm u_20 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
ATerm insert_layout_0_0 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
ATerm uq2q_0_0 (StrSL sl, ATerm t);
ATerm add_attributes_0_0 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm is_reject_0_0 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
ATerm is_bracket_0_0 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
ATerm get_constr_0_0 (StrSL sl, ATerm t);
static ATerm x_18 (StrSL sl, ATerm t);
ATerm syntaxless_sort_0_0 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
ATerm is_injection_0_0 (StrSL sl, ATerm t);
ATerm string_Hd_0_0 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
ATerm strs2constr_0_0 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
ATerm mk_constr_0_0 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
ATerm prodcons_0_0 (StrSL sl, ATerm t);
static ATerm e_17 (StrSL sl, ATerm t);
ATerm list_ana_1_0 (StrSL sl, StrCL d_17, ATerm t);
ATerm toAlphaNumFancy_0_0 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm k_12 (StrSL sl, ATerm t);
ATerm Sym2Strs_0_0 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
ATerm lit2str_0_0 (StrSL sl, ATerm t);
ATerm lits2strs_0_0 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
ATerm sym2strs_0_0 (StrSL sl, ATerm t);
ATerm syms2strs_0_0 (StrSL sl, ATerm t);
ATerm layout_1_0 (StrSL sl, StrCL r_49, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "layout_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_156 = NULL,q_156 = NULL,u_156 = NULL;
ATerm trm456;
trm456 = (ATerm) ATgetAnnotations(t);
if((trm456 == NULL))
trm456 = (ATerm) ATempty;
if(match_cons(t, sym_layout_1))
{
q_156 = ATgetArgument(t, 0);
}
else
goto fail219 ;
t_156 = trm456;
t = q_156;
t = cl_fun(r_49)(cl_sl(r_49), t);
if((t == NULL))
goto fail219 ;
u_156 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_layout_1, u_156), t_156);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail219 :
--__tracing_table_counter;
return(NULL);
}
ATerm Arg2_2_0 (StrSL sl, StrCL k_48, StrCL l_48, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Arg2_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_152 = NULL,f_152 = NULL,g_152 = NULL,i_152 = NULL,l_152 = NULL;
ATerm trm455;
trm455 = (ATerm) ATgetAnnotations(t);
if((trm455 == NULL))
trm455 = (ATerm) ATempty;
if(match_cons(t, sym_Arg2_2))
{
f_152 = ATgetArgument(t, 0);
g_152 = ATgetArgument(t, 1);
}
else
goto fail218 ;
h_152 = trm455;
t = f_152;
t = cl_fun(k_48)(cl_sl(k_48), t);
if((t == NULL))
goto fail218 ;
i_152 = t;
t = g_152;
t = cl_fun(l_48)(cl_sl(l_48), t);
if((t == NULL))
goto fail218 ;
l_152 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, i_152, l_152), h_152);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail218 :
--__tracing_table_counter;
return(NULL);
}
ATerm SOpt_2_0 (StrSL sl, StrCL i_48, StrCL j_48, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "SOpt_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_152 = NULL,a_152 = NULL,b_152 = NULL,d_152 = NULL,e_152 = NULL;
ATerm trm454;
trm454 = (ATerm) ATgetAnnotations(t);
if((trm454 == NULL))
trm454 = (ATerm) ATempty;
if(match_cons(t, sym_SOpt_2))
{
a_152 = ATgetArgument(t, 0);
b_152 = ATgetArgument(t, 1);
}
else
goto fail217 ;
c_152 = trm454;
t = a_152;
t = cl_fun(i_48)(cl_sl(i_48), t);
if((t == NULL))
goto fail217 ;
d_152 = t;
t = b_152;
t = cl_fun(j_48)(cl_sl(j_48), t);
if((t == NULL))
goto fail217 ;
e_152 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, d_152, e_152), c_152);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail217 :
--__tracing_table_counter;
return(NULL);
}
ATerm selector_2_0 (StrSL sl, StrCL p_47, StrCL q_47, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "selector_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_147 = NULL,x_147 = NULL,y_147 = NULL,c_148 = NULL,d_148 = NULL;
ATerm trm453;
trm453 = (ATerm) ATgetAnnotations(t);
if((trm453 == NULL))
trm453 = (ATerm) ATempty;
if(match_cons(t, sym_selector_2))
{
x_147 = ATgetArgument(t, 0);
y_147 = ATgetArgument(t, 1);
}
else
goto fail216 ;
z_147 = trm453;
t = x_147;
t = cl_fun(p_47)(cl_sl(p_47), t);
if((t == NULL))
goto fail216 ;
c_148 = t;
t = y_147;
t = cl_fun(q_47)(cl_sl(q_47), t);
if((t == NULL))
goto fail216 ;
d_148 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_selector_2, c_148, d_148), z_147);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail216 :
--__tracing_table_counter;
return(NULL);
}
ATerm prod_3_0 (StrSL sl, StrCL p_45, StrCL q_45, StrCL r_45, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prod_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_140 = NULL,t_140 = NULL,u_140 = NULL,v_140 = NULL,z_140 = NULL,a_141 = NULL,b_141 = NULL;
ATerm trm452;
trm452 = (ATerm) ATgetAnnotations(t);
if((trm452 == NULL))
trm452 = (ATerm) ATempty;
if(match_cons(t, sym_prod_3))
{
t_140 = ATgetArgument(t, 0);
u_140 = ATgetArgument(t, 1);
v_140 = ATgetArgument(t, 2);
}
else
goto fail215 ;
y_140 = trm452;
t = t_140;
t = cl_fun(p_45)(cl_sl(p_45), t);
if((t == NULL))
goto fail215 ;
z_140 = t;
t = u_140;
t = cl_fun(q_45)(cl_sl(q_45), t);
if((t == NULL))
goto fail215 ;
a_141 = t;
t = v_140;
t = cl_fun(r_45)(cl_sl(r_45), t);
if((t == NULL))
goto fail215 ;
b_141 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_prod_3, z_140, a_141, b_141), y_140);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail215 :
--__tracing_table_counter;
return(NULL);
}
ATerm iter_1_0 (StrSL sl, StrCL g_45, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iter_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_139 = NULL,q_139 = NULL,t_139 = NULL;
ATerm trm451;
trm451 = (ATerm) ATgetAnnotations(t);
if((trm451 == NULL))
trm451 = (ATerm) ATempty;
if(match_cons(t, sym_iter_1))
{
q_139 = ATgetArgument(t, 0);
}
else
goto fail214 ;
r_139 = trm451;
t = q_139;
t = cl_fun(g_45)(cl_sl(g_45), t);
if((t == NULL))
goto fail214 ;
t_139 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_1, t_139), r_139);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail214 :
--__tracing_table_counter;
return(NULL);
}
ATerm iter_star_1_0 (StrSL sl, StrCL f_45, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iter_star_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_139 = NULL,n_139 = NULL,p_139 = NULL;
ATerm trm450;
trm450 = (ATerm) ATgetAnnotations(t);
if((trm450 == NULL))
trm450 = (ATerm) ATempty;
if(match_cons(t, sym_iter_star_1))
{
n_139 = ATgetArgument(t, 0);
}
else
goto fail213 ;
o_139 = trm450;
t = n_139;
t = cl_fun(f_45)(cl_sl(f_45), t);
if((t == NULL))
goto fail213 ;
p_139 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, p_139), o_139);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail213 :
--__tracing_table_counter;
return(NULL);
}
ATerm iter_sep_2_0 (StrSL sl, StrCL d_45, StrCL e_45, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iter_sep_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_139 = NULL,h_139 = NULL,i_139 = NULL,k_139 = NULL,l_139 = NULL;
ATerm trm449;
trm449 = (ATerm) ATgetAnnotations(t);
if((trm449 == NULL))
trm449 = (ATerm) ATempty;
if(match_cons(t, sym_iter_sep_2))
{
h_139 = ATgetArgument(t, 0);
i_139 = ATgetArgument(t, 1);
}
else
goto fail212 ;
j_139 = trm449;
t = h_139;
t = cl_fun(d_45)(cl_sl(d_45), t);
if((t == NULL))
goto fail212 ;
k_139 = t;
t = i_139;
t = cl_fun(e_45)(cl_sl(e_45), t);
if((t == NULL))
goto fail212 ;
l_139 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, k_139, l_139), j_139);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail212 :
--__tracing_table_counter;
return(NULL);
}
ATerm iter_star_sep_2_0 (StrSL sl, StrCL b_45, StrCL c_45, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iter_star_sep_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_139 = NULL,c_139 = NULL,d_139 = NULL,f_139 = NULL,g_139 = NULL;
ATerm trm448;
trm448 = (ATerm) ATgetAnnotations(t);
if((trm448 == NULL))
trm448 = (ATerm) ATempty;
if(match_cons(t, sym_iter_star_sep_2))
{
c_139 = ATgetArgument(t, 0);
d_139 = ATgetArgument(t, 1);
}
else
goto fail211 ;
e_139 = trm448;
t = c_139;
t = cl_fun(b_45)(cl_sl(b_45), t);
if((t == NULL))
goto fail211 ;
f_139 = t;
t = d_139;
t = cl_fun(c_45)(cl_sl(c_45), t);
if((t == NULL))
goto fail211 ;
g_139 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, f_139, g_139), e_139);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail211 :
--__tracing_table_counter;
return(NULL);
}
ATerm lit_1_0 (StrSL sl, StrCL q_44, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lit_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_136 = NULL,o_136 = NULL,t_136 = NULL;
ATerm trm447;
trm447 = (ATerm) ATgetAnnotations(t);
if((trm447 == NULL))
trm447 = (ATerm) ATempty;
if(match_cons(t, sym_lit_1))
{
o_136 = ATgetArgument(t, 0);
}
else
goto fail210 ;
s_136 = trm447;
t = o_136;
t = cl_fun(q_44)(cl_sl(q_44), t);
if((t == NULL))
goto fail210 ;
t_136 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lit_1, t_136), s_136);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail210 :
--__tracing_table_counter;
return(NULL);
}
ATerm alt_2_0 (StrSL sl, StrCL l_42, StrCL m_42, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "alt_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_126 = NULL,i_126 = NULL,j_126 = NULL,m_126 = NULL,o_126 = NULL;
ATerm trm446;
trm446 = (ATerm) ATgetAnnotations(t);
if((trm446 == NULL))
trm446 = (ATerm) ATempty;
if(match_cons(t, sym_alt_2))
{
i_126 = ATgetArgument(t, 0);
j_126 = ATgetArgument(t, 1);
}
else
goto fail209 ;
l_126 = trm446;
t = i_126;
t = cl_fun(l_42)(cl_sl(l_42), t);
if((t == NULL))
goto fail209 ;
m_126 = t;
t = j_126;
t = cl_fun(m_42)(cl_sl(m_42), t);
if((t == NULL))
goto fail209 ;
o_126 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_alt_2, m_126, o_126), l_126);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail209 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_172 = { &(lifted168) , &(frame) };
StrCL lifted168_cl = &(p_172);
struct str_closure q_172 = { &(lifted172) , &(frame) };
StrCL lifted172_cl = &(q_172);
t = io_wrap_2_0(sl, lifted168_cl, lifted172_cl, t);
if((t == NULL))
goto fail203 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail203 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted172 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted172";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_164 = NULL;
l_164 = t;
t = get_config_p_0_0(sl_up(sl), t);
if((t == NULL))
goto fail208 ;
t = reverse_0_0(sl_up(sl), t);
if((t == NULL))
goto fail208 ;
t = read_pp_tables_0_0(sl_up(sl), t);
if((t == NULL))
goto fail208 ;
t = l_164;
t = asfix2abox_0_0(sl_up(sl), t);
if((t == NULL))
goto fail208 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail208 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted168 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted168";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm445 = t;
struct str_closure m_172 = { &(lifted169) , &(frame) };
StrCL lifted169_cl = &(m_172);
struct str_closure n_172 = { &(lifted170) , &(frame) };
StrCL lifted170_cl = &(n_172);
struct str_closure o_172 = { &(lifted171) , &(frame) };
StrCL lifted171_cl = &(o_172);
t = Option_3_0(sl_up(sl), lifted169_cl, lifted170_cl, lifted171_cl, t);
if((t == NULL))
goto label300 ;
goto label299 ;
label300 :
t = trm445;
t = pp_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail204 ;
else
goto label299 ;
label299 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail204 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted171 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted171";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term191;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail207 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted170 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted170";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term189;
t = set_config_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail206 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail206 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted169 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted169";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-c", 0, ATtrue))))
goto fail205 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail205 :
--__tracing_table_counter;
return(NULL);
}
ATerm filter_literals_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "filter_literals_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,f_42 = NULL;
sl_init_var(0, v_41);
if(match_cons(t, sym__2))
{
u_41 = ATgetArgument(t, 0);
t_41 = ATgetArgument(t, 1);
}
else
goto fail197 ;
f_42 = t;
{
struct str_closure i_172 = { &(lifted161) , &(frame) };
StrCL lifted161_cl = &(i_172);
struct str_closure j_172 = { &(_Id) , sl };
StrCL lifted165_cl = &(j_172);
t = _2_0(sl, lifted161_cl, lifted165_cl, t);
if((t == NULL))
goto fail197 ;
t = e_42(&(frame), t);
if((t == NULL))
goto fail197 ;
if(match_cons(t, sym__2))
{
ATerm trm444 = ATgetArgument(t, 0);
w_41 = ATgetArgument(t, 1);
}
else
goto fail197 ;
t = f_42;
t = (ATerm) ATmakeAppl(sym__2, u_41, w_41);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail197 :
--__tracing_table_counter;
return(NULL);
}
static ATerm e_42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "e_42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL;
ATerm trm428 = t;
struct str_closure k_172 = { &(lifted166) , &(frame) };
StrCL lifted166_cl = &(k_172);
struct str_closure l_172 = { &(lifted167) , &(frame) };
StrCL lifted167_cl = &(l_172);
t = _2_0(sl_up(sl), lifted166_cl, lifted167_cl, t);
if((t == NULL))
goto label296 ;
goto label295 ;
label296 :
t = trm428;
{
ATerm trm429 = t;
if(match_cons(t, sym__2))
{
ATerm trm430 = ATgetArgument(t, 0);
if(((ATgetType(trm430) == AT_LIST) && !(ATisEmpty(trm430))))
{
ATerm trm431 = ATgetFirst((ATermList) trm430);
if(match_cons(trm431, sym_Arg_1))
{
x_41 = ATgetArgument(trm431, 0);
}
else
goto label297 ;
y_41 = (ATerm) ATgetNext((ATermList) trm430);
}
else
goto label297 ;
{
ATerm trm432 = ATgetArgument(t, 1);
if(((ATgetType(trm432) == AT_LIST) && !(ATisEmpty(trm432))))
{
c_42 = ATgetFirst((ATermList) trm432);
a_42 = (ATerm) ATgetNext((ATermList) trm432);
}
else
goto label297 ;
}
}
else
goto label297 ;
t = (ATerm) ATmakeAppl(sym__2, y_41, a_42);
t = e_42(sl, t);
if((t == NULL))
goto label297 ;
if(match_cons(t, sym__2))
{
z_41 = ATgetArgument(t, 0);
b_42 = ATgetArgument(t, 1);
}
else
goto label297 ;
{
ATerm trm434;
ATerm trm433;
trm433 = CheckATermList(z_41);
if((trm433 == NULL))
goto label297 ;
trm434 = CheckATermList(b_42);
if((trm434 == NULL))
goto label297 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert((ATermList)trm433, (ATerm) ATmakeAppl(sym_Arg_1, x_41)), (ATerm) ATinsert((ATermList)trm434, c_42));
}
goto label295 ;
label297 :
t = trm429;
{
ATerm trm435 = t;
if(match_cons(t, sym__2))
{
ATerm trm436 = ATgetArgument(t, 0);
if(((ATgetType(trm436) == AT_LIST) && !(ATisEmpty(trm436))))
{
ATerm trm437 = ATgetFirst((ATermList) trm436);
if(match_cons(trm437, sym_Arg2_2))
{
x_41 = ATgetArgument(trm437, 0);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm437, 1);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm437, 1)))
goto label298 ;
}
else
goto label298 ;
y_41 = (ATerm) ATgetNext((ATermList) trm436);
}
else
goto label298 ;
{
ATerm trm438 = ATgetArgument(t, 1);
if(((ATgetType(trm438) == AT_LIST) && !(ATisEmpty(trm438))))
{
c_42 = ATgetFirst((ATermList) trm438);
a_42 = (ATerm) ATgetNext((ATermList) trm438);
}
else
goto label298 ;
}
}
else
goto label298 ;
t = (ATerm) ATmakeAppl(sym__2, y_41, a_42);
t = e_42(sl, t);
if((t == NULL))
goto label298 ;
if(match_cons(t, sym__2))
{
z_41 = ATgetArgument(t, 0);
b_42 = ATgetArgument(t, 1);
}
else
goto label298 ;
if((sl_readvar(0, sl) == NULL))
goto label298 ;
else
{
ATerm trm440;
ATerm trm439;
trm439 = CheckATermList(z_41);
if((trm439 == NULL))
goto label298 ;
trm440 = CheckATermList(b_42);
if((trm440 == NULL))
goto label298 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert((ATermList)trm439, (ATerm) ATmakeAppl(sym_Arg2_2, x_41, sl_readvar(0, sl))), (ATerm) ATinsert((ATermList)trm440, c_42));
}
goto label295 ;
label298 :
t = trm435;
if(match_cons(t, sym__2))
{
ATerm trm441 = ATgetArgument(t, 0);
if(((ATgetType(trm441) == AT_LIST) && !(ATisEmpty(trm441))))
{
d_42 = ATgetFirst((ATermList) trm441);
y_41 = (ATerm) ATgetNext((ATermList) trm441);
}
else
goto fail200 ;
{
ATerm trm442 = ATgetArgument(t, 1);
if(((ATgetType(trm442) == AT_LIST) && !(ATisEmpty(trm442))))
{
c_42 = ATgetFirst((ATermList) trm442);
a_42 = (ATerm) ATgetNext((ATermList) trm442);
}
else
goto fail200 ;
}
}
else
goto fail200 ;
t = (ATerm) ATmakeAppl(sym__2, y_41, a_42);
t = e_42(sl, t);
if((t == NULL))
goto fail200 ;
if(match_cons(t, sym__2))
{
z_41 = ATgetArgument(t, 0);
b_42 = ATgetArgument(t, 1);
}
else
goto fail200 ;
{
ATerm trm443;
trm443 = CheckATermList(z_41);
if((trm443 == NULL))
goto fail200 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert((ATermList)trm443, d_42), b_42);
goto label295 ;
}
}
}
label295 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail200 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted167 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted167";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail202 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail202 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted166 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted166";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail201 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail201 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted161 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted161";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_172 = { &(lifted162) , &(frame) };
StrCL lifted162_cl = &(h_172);
t = collect_p__1_0(sl_up(sl), lifted162_cl, t);
if((t == NULL))
goto fail198 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail198 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted162 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted162";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm424 = t;
ATerm c_164 = NULL,d_164 = NULL,e_164 = NULL;
ATerm trm425;
trm425 = (ATerm) ATgetAnnotations(t);
if((trm425 == NULL))
trm425 = (ATerm) ATempty;
if(match_cons(t, sym_Arg_1))
{
d_164 = ATgetArgument(t, 0);
}
else
goto label293 ;
c_164 = trm425;
t = d_164;
e_164 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Arg_1, e_164), c_164);
goto label292 ;
label293 :
t = trm424;
{
ATerm trm426 = t;
struct str_closure f_172 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted163_cl = &(f_172);
struct str_closure g_172 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted164_cl = &(g_172);
t = Arg2_2_0(sl_up(sl_up(sl)), lifted163_cl, lifted164_cl, t);
if((t == NULL))
goto label294 ;
goto label292 ;
label294 :
t = trm426;
{
ATerm g_164 = NULL,h_164 = NULL,j_164 = NULL;
ATerm trm427;
trm427 = (ATerm) ATgetAnnotations(t);
if((trm427 == NULL))
trm427 = (ATerm) ATempty;
if(match_cons(t, sym_S_1))
{
h_164 = ATgetArgument(t, 0);
}
else
goto fail199 ;
g_164 = trm427;
t = h_164;
j_164 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_S_1, j_164), g_164);
goto label292 ;
}
}
label292 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail199 :
--__tracing_table_counter;
return(NULL);
}
ATerm fatal_ambiguity_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fatal_ambiguity_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,y_163 = NULL,z_163 = NULL,a_164 = NULL;
ATerm trm423;
trm423 = (ATerm) ATgetAnnotations(t);
if((trm423 == NULL))
trm423 = (ATerm) ATempty;
if(match_cons(t, sym_amb_1))
{
z_163 = ATgetArgument(t, 0);
}
else
goto fail196 ;
y_163 = trm423;
t = z_163;
a_164 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_amb_1, a_164), y_163);
r_41 = t;
t = term183;
p_41 = t;
t = r_41;
s_41 = t;
t = term185;
q_41 = t;
t = s_41;
t = log_0_2(sl, p_41, q_41, t);
if((t == NULL))
goto fail196 ;
t = term167;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail196 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail196 :
--__tracing_table_counter;
return(NULL);
}
ATerm application_to_abox_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "application_to_abox_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,n_41 = NULL,m_41 = NULL,o_41 = NULL,w_163 = NULL,x_163 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm419 = ATgetArgument(t, 0);
if(match_cons(trm419, sym_prod_3))
{
e_41 = ATgetArgument(trm419, 0);
c_41 = ATgetArgument(trm419, 1);
d_41 = ATgetArgument(trm419, 2);
}
else
goto fail193 ;
f_41 = ATgetArgument(t, 1);
}
else
goto fail193 ;
k_41 = t;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, e_41, c_41, d_41), f_41);
t = get_templ_0_0(sl, t);
if((t == NULL))
goto fail193 ;
if(match_cons(t, sym__2))
{
g_41 = ATgetArgument(t, 0);
h_41 = ATgetArgument(t, 1);
}
else
goto fail193 ;
n_41 = t;
t = e_41;
{
struct str_closure c_172 = { &(lifted158) , &(frame) };
StrCL lifted158_cl = &(c_172);
t = filter_1_0(sl, lifted158_cl, t);
if((t == NULL))
goto fail193 ;
l_41 = t;
t = n_41;
o_41 = t;
t = f_41;
{
struct str_closure e_172 = { &(lifted159) , &(frame) };
StrCL lifted159_cl = &(e_172);
t = filter_1_0(sl, lifted159_cl, t);
if((t == NULL))
goto fail193 ;
m_41 = t;
t = o_41;
t = (ATerm) ATmakeAppl(sym__4, l_41, m_41, (ATerm)ATinsert(ATempty, g_41), term167);
t = seq2abox_0_0(sl, t);
if((t == NULL))
goto fail193 ;
i_41 = t;
t = h_41;
w_163 = t;
t = i_41;
x_163 = t;
t = (ATerm) ATempty;
t = (ATerm) ATmakeAppl(sym__2, h_41, i_41);
t = w_163;
t = instantiate_0_1(sl, x_163, t);
if((t == NULL))
goto fail193 ;
j_41 = t;
t = k_41;
t = j_41;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail193 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted159 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted159";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm422 = t;
struct str_closure d_172 = { &(_Id) , sl_up(sl) };
StrCL lifted160_cl = &(d_172);
t = lit_1_0(sl_up(sl), lifted160_cl, t);
if((t == NULL))
goto label291 ;
goto fail195 ;
label291 :
t = trm422;
goto label290 ;
label290 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail195 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted158 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted158";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm420 = t;
ATerm s_163 = NULL,t_163 = NULL,u_163 = NULL;
ATerm trm421;
trm421 = (ATerm) ATgetAnnotations(t);
if((trm421 == NULL))
trm421 = (ATerm) ATempty;
if(match_cons(t, sym_lit_1))
{
t_163 = ATgetArgument(t, 0);
}
else
goto label289 ;
s_163 = trm421;
t = t_163;
u_163 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lit_1, u_163), s_163);
goto fail194 ;
label289 :
t = trm420;
goto label288 ;
label288 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail194 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_pp_entry_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_pp_entry_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm trm410 = t;
ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm411 = ATgetArgument(t, 0);
if(match_cons(trm411, sym_prod_3))
{
x_40 = ATgetArgument(trm411, 0);
y_40 = ATgetArgument(trm411, 1);
z_40 = ATgetArgument(trm411, 2);
}
else
goto label282 ;
a_41 = ATgetArgument(t, 1);
}
else
goto label282 ;
{
ATerm trm412 = t;
t = a_41;
t = pp_table_get_0_0(sl, t);
if((t == NULL))
goto label284 ;
t = Snd_0_0(sl, t);
if((t == NULL))
goto label284 ;
goto label283 ;
label284 :
t = trm412;
{
ATerm b_41 = NULL;
b_41 = t;
t = (ATerm) ATmakeAppl(sym_prod_3, x_40, y_40, z_40);
t = generate_pp_entries_0_0(sl, t);
if((t == NULL))
goto label282 ;
{
struct str_closure z_171 = { &(StoreEntryIfNotExists_0_0) , sl };
StrCL lifted155_cl = &(z_171);
t = map_1_0(sl, lifted155_cl, t);
if((t == NULL))
goto label282 ;
t = b_41;
t = a_41;
t = pp_table_get_0_0(sl, t);
if((t == NULL))
goto label282 ;
t = Snd_0_0(sl, t);
if((t == NULL))
goto label282 ;
else
goto label283 ;
}
}
label283 :
;
}
goto label281 ;
label282 :
t = trm410;
{
ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
sl_init_var(0, n_40);
if(match_cons(t, sym__2))
{
m_40 = ATgetArgument(t, 0);
o_40 = ATgetArgument(t, 1);
}
else
goto fail191 ;
{
ATerm trm413 = t;
t = o_40;
t = pp_table_get_0_0(sl, t);
if((t == NULL))
goto label285 ;
t = Snd_0_0(sl, t);
if((t == NULL))
goto label285 ;
goto label281 ;
label285 :
t = trm413;
{
ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL;
t = o_40;
t = reverse_0_0(sl, t);
if((t == NULL))
goto fail191 ;
{
ATerm trm414;
trm414 = (ATerm) ATgetAnnotations(t);
if((trm414 == NULL))
trm414 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
p_40 = ATgetFirst((ATermList) t);
q_40 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail191 ;
t_40 = trm414;
t = p_40;
l_40 = t;
r_40 = t;
t = q_40;
t = reverse_0_0(sl, t);
if((t == NULL))
goto fail191 ;
k_40 = t;
s_40 = t;
{
ATerm trm415;
trm415 = CheckATermList(s_40);
if((trm415 == NULL))
goto fail191 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm415, r_40), t_40);
t = k_40;
t = pp_table_get_0_0(sl, t);
if((t == NULL))
goto fail191 ;
t = Fst_0_0(sl, t);
if((t == NULL))
goto fail191 ;
{
ATerm trm416 = t;
ATerm u_40 = NULL,v_40 = NULL;
if(match_cons(t, sym_Path_2))
{
u_40 = ATgetArgument(t, 0);
{
ATerm trm417 = ATgetArgument(t, 1);
if(((ATgetType(trm417) == AT_LIST) && !(ATisEmpty(trm417))))
{
v_40 = ATgetFirst((ATermList) trm417);
{
ATerm trm418 = (ATerm) ATgetNext((ATermList) trm417);
if(!(((ATgetType(trm418) == AT_LIST) && ATisEmpty(trm418))))
goto label287 ;
}
}
else
goto label287 ;
}
}
else
goto label287 ;
t = (ATerm) ATmakeAppl(sym__2, u_40, (ATerm) ATinsert(ATempty, v_40));
goto label286 ;
label287 :
t = trm416;
{
ATerm w_40 = NULL;
if(match_cons(t, sym_Path1_1))
{
w_40 = ATgetArgument(t, 0);
}
else
goto fail191 ;
t = (ATerm) ATmakeAppl(sym__2, w_40, (ATerm) ATempty);
goto label286 ;
}
label286 :
;
if((n_40 == NULL))
{
n_40 = t;
}
else
if((n_40 != t))
goto fail191 ;
t = (ATerm) ATmakeAppl(sym__2, l_40, m_40);
{
struct str_closure a_172 = { &(lifted156) , &(frame) };
StrCL lifted156_cl = &(a_172);
t = symbol2abox_1_0(sl, lifted156_cl, t);
if((t == NULL))
goto fail191 ;
{
struct str_closure b_172 = { &(StoreEntryIfNotExists_0_0) , sl };
StrCL lifted157_cl = &(b_172);
t = map_1_0(sl, lifted157_cl, t);
if((t == NULL))
goto fail191 ;
t = o_40;
t = pp_table_get_0_0(sl, t);
if((t == NULL))
goto fail191 ;
t = Snd_0_0(sl, t);
if((t == NULL))
goto fail191 ;
else
goto label281 ;
}
}
}
}
}
}
}
}
label281 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail191 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted156 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted156";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail192 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail192 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_templ_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_templ_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
sl_init_var(0, h_40);
if(match_cons(t, sym_appl_2))
{
ATerm trm406 = ATgetArgument(t, 0);
if(match_cons(trm406, sym_prod_3))
{
f_40 = ATgetArgument(trm406, 0);
g_40 = ATgetArgument(trm406, 1);
e_40 = ATgetArgument(trm406, 2);
}
else
goto fail187 ;
d_40 = ATgetArgument(t, 1);
}
else
goto fail187 ;
j_40 = t;
{
ATerm trm407 = t;
struct str_closure u_171 = { &(lifted150) , &(frame) };
StrCL lifted150_cl = &(u_171);
t = e_40;
t = oncetd_1_0(sl, lifted150_cl, t);
if((t == NULL))
goto label279 ;
goto label278 ;
label279 :
t = trm407;
{
ATerm trm408 = t;
ATerm o_163 = NULL,p_163 = NULL,q_163 = NULL;
struct str_closure w_171 = { &(_Id) , sl };
StrCL lifted151_cl = &(w_171);
struct str_closure x_171 = { &(_Id) , sl };
StrCL lifted152_cl = &(x_171);
struct str_closure y_171 = { &(lifted153) , &(frame) };
StrCL lifted153_cl = &(y_171);
t = g_40;
{
ATerm trm409;
trm409 = (ATerm) ATgetAnnotations(t);
if((trm409 == NULL))
trm409 = (ATerm) ATempty;
if(match_cons(t, sym_sort_1))
{
p_163 = ATgetArgument(t, 0);
}
else
goto label280 ;
o_163 = trm409;
t = p_163;
q_163 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_sort_1, q_163), o_163);
t = (ATerm) ATmakeAppl(sym_prod_3, f_40, g_40, e_40);
t = prodcons_0_0(sl, t);
if((t == NULL))
goto label280 ;
t = prod_3_0(sl, lifted151_cl, lifted152_cl, lifted153_cl, t);
if((t == NULL))
goto label280 ;
}
goto label278 ;
label280 :
t = trm408;
t = term181;
if((h_40 == NULL))
{
h_40 = t;
goto label278 ;
}
else
if((h_40 != t))
goto fail187 ;
else
goto label278 ;
}
label278 :
;
if((h_40 == NULL))
goto fail187 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, f_40, g_40, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, h_40)))), (ATerm) ATinsert(ATempty, h_40));
}
t = get_pp_entry_0_0(sl, t);
if((t == NULL))
goto fail187 ;
i_40 = t;
t = j_40;
if((h_40 == NULL))
goto fail187 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, h_40, i_40);
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail187 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted153 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted153";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_171 = { &(lifted154) , &(frame) };
StrCL lifted154_cl = &(v_171);
t = oncetd_1_0(sl_up(sl), lifted154_cl, t);
if((t == NULL))
goto fail189 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail189 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted154 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted154";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
if((sl_readvar(0, sl_up(sl)) == NULL))
{
sl_readvar(0, sl_up(sl)) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl_up(sl)) != ATgetArgument(t, 0)))
goto fail190 ;
}
else
goto fail190 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail190 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted150 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted150";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail188 ;
}
else
goto fail188 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail188 :
--__tracing_table_counter;
return(NULL);
}
ATerm seq2abox_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "seq2abox_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = a_40(&(frame), t);
if((t == NULL))
goto fail185 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail185 :
--__tracing_table_counter;
return(NULL);
}
static ATerm a_40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "a_40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
ATerm trm391 = t;
if(match_cons(t, sym__4))
{
ATerm trm392 = ATgetArgument(t, 0);
if(!(((ATgetType(trm392) == AT_LIST) && ATisEmpty(trm392))))
goto label276 ;
{
ATerm trm393 = ATgetArgument(t, 1);
if(!(((ATgetType(trm393) == AT_LIST) && ATisEmpty(trm393))))
goto label276 ;
}
{
ATerm trm394 = ATgetArgument(t, 2);
}
{
ATerm trm395 = ATgetArgument(t, 3);
}
}
else
goto label276 ;
t = (ATerm) ATempty;
goto label275 ;
label276 :
t = trm391;
{
ATerm trm396 = t;
if(match_cons(t, sym__4))
{
ATerm trm397 = ATgetArgument(t, 0);
if(((ATgetType(trm397) == AT_LIST) && !(ATisEmpty(trm397))))
{
ATerm trm398 = ATgetFirst((ATermList) trm397);
if(match_cons(trm398, sym_lit_1))
{
ATerm trm399 = ATgetArgument(trm398, 0);
}
else
goto label277 ;
t_39 = (ATerm) ATgetNext((ATermList) trm397);
}
else
goto label277 ;
{
ATerm trm400 = ATgetArgument(t, 1);
if(((ATgetType(trm400) == AT_LIST) && !(ATisEmpty(trm400))))
{
ATerm trm401 = ATgetFirst((ATermList) trm400);
if(match_cons(trm401, sym_lit_1))
{
ATerm trm402 = ATgetArgument(trm401, 0);
}
else
goto label277 ;
v_39 = (ATerm) ATgetNext((ATermList) trm400);
}
else
goto label277 ;
}
z_39 = ATgetArgument(t, 2);
w_39 = ATgetArgument(t, 3);
}
else
goto label277 ;
t = (ATerm) ATmakeAppl(sym__4, t_39, v_39, z_39, w_39);
t = a_40(sl, t);
if((t == NULL))
goto label277 ;
goto label275 ;
label277 :
t = trm396;
{
ATerm b_40 = NULL,c_40 = NULL;
if(match_cons(t, sym__4))
{
ATerm trm403 = ATgetArgument(t, 0);
if(((ATgetType(trm403) == AT_LIST) && !(ATisEmpty(trm403))))
{
s_39 = ATgetFirst((ATermList) trm403);
t_39 = (ATerm) ATgetNext((ATermList) trm403);
}
else
goto fail186 ;
{
ATerm trm404 = ATgetArgument(t, 1);
if(((ATgetType(trm404) == AT_LIST) && !(ATisEmpty(trm404))))
{
u_39 = ATgetFirst((ATermList) trm404);
v_39 = (ATerm) ATgetNext((ATermList) trm404);
}
else
goto fail186 ;
}
z_39 = ATgetArgument(t, 2);
w_39 = ATgetArgument(t, 3);
}
else
goto fail186 ;
t = (ATerm) ATmakeAppl(sym__4, s_39, u_39, z_39, w_39);
t = symbol2abox_0_0(sl_up(sl), t);
if((t == NULL))
goto fail186 ;
x_39 = t;
c_40 = t;
t = (ATerm) ATmakeAppl(sym__2, w_39, term167);
t = add_0_0(sl_up(sl), t);
if((t == NULL))
goto fail186 ;
b_40 = t;
t = c_40;
t = (ATerm) ATmakeAppl(sym__4, t_39, v_39, z_39, b_40);
t = a_40(sl, t);
if((t == NULL))
goto fail186 ;
y_39 = t;
{
ATerm trm405;
trm405 = CheckATermList(y_39);
if((trm405 == NULL))
goto fail186 ;
t = (ATerm) ATinsert((ATermList)trm405, x_39);
goto label275 ;
}
}
}
label275 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail186 :
--__tracing_table_counter;
return(NULL);
}
ATerm make_path_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "make_path_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL;
if(match_cons(t, sym__2))
{
o_39 = ATgetArgument(t, 0);
p_39 = ATgetArgument(t, 1);
}
else
goto fail184 ;
r_39 = t;
t = (ATerm) ATmakeAppl(sym__2, o_39, (ATerm) ATinsert(ATempty, p_39));
t = conc_0_0(sl, t);
if((t == NULL))
goto fail184 ;
q_39 = t;
t = r_39;
t = q_39;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail184 :
--__tracing_table_counter;
return(NULL);
}
ATerm BuildSepList_4_0 (StrSL sl, StrCL z_38, StrCL a_39, StrCL b_39, StrCL c_39, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "BuildSepList_4_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,d_39 = NULL;
if(match_cons(t, sym__2))
{
u_38 = ATgetArgument(t, 0);
v_38 = ATgetArgument(t, 1);
}
else
goto fail181 ;
d_39 = t;
{
ATerm trm388 = t;
ATerm e_39 = NULL,g_39 = NULL,f_39 = NULL,h_39 = NULL;
struct str_closure s_171 = { &(lifted148) , &(frame) };
StrCL lifted148_cl = &(s_171);
t = u_38;
t = even_0_0(sl, t);
if((t == NULL))
goto label270 ;
g_39 = t;
t = term93;
t = cl_fun(a_39)(cl_sl(a_39), t);
if((t == NULL))
goto label270 ;
e_39 = t;
t = g_39;
h_39 = t;
t = term93;
t = cl_fun(b_39)(cl_sl(b_39), t);
if((t == NULL))
goto label270 ;
f_39 = t;
t = h_39;
t = (ATerm) ATmakeAppl(sym__4, e_39, v_38, f_39, term179);
t = symbol2abox_0_0(sl, t);
if((t == NULL))
goto label270 ;
t = try_1_0(sl, lifted148_cl, t);
if((t == NULL))
goto label270 ;
goto label269 ;
label270 :
t = trm388;
{
ATerm j_39 = NULL,l_39 = NULL,k_39 = NULL,m_39 = NULL;
struct str_closure t_171 = { &(lifted149) , &(frame) };
StrCL lifted149_cl = &(t_171);
l_39 = t;
t = term93;
t = cl_fun(z_38)(cl_sl(z_38), t);
if((t == NULL))
goto fail181 ;
j_39 = t;
t = l_39;
m_39 = t;
t = term93;
t = cl_fun(b_39)(cl_sl(b_39), t);
if((t == NULL))
goto fail181 ;
k_39 = t;
t = m_39;
t = (ATerm) ATmakeAppl(sym__4, j_39, v_38, k_39, term167);
t = symbol2abox_0_0(sl, t);
if((t == NULL))
goto fail181 ;
t = try_1_0(sl, lifted149_cl, t);
if((t == NULL))
goto fail181 ;
else
goto label269 ;
}
label269 :
;
w_38 = t;
t = d_39;
t = w_38;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail181 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted149 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted149";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_38 = NULL,n_39 = NULL;
y_38 = t;
n_39 = t;
{
ATerm trm390 = t;
t = is_list_0_0(sl_up(sl), t);
if((t == NULL))
goto label274 ;
goto fail183 ;
label274 :
t = trm390;
goto label273 ;
label273 :
;
t = n_39;
t = (ATerm) ATinsert(ATempty, y_38);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail183 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted148 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted148";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_38 = NULL,i_39 = NULL;
x_38 = t;
i_39 = t;
{
ATerm trm389 = t;
t = is_list_0_0(sl_up(sl), t);
if((t == NULL))
goto label272 ;
goto fail182 ;
label272 :
t = trm389;
goto label271 ;
label271 :
;
t = i_39;
t = (ATerm) ATinsert(ATempty, x_38);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail182 :
--__tracing_table_counter;
return(NULL);
}
ATerm build_sep_list_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "build_sep_list_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(4);
{
ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
sl_init_var(0, m_38);
sl_init_var(1, n_38);
sl_init_var(2, o_38);
sl_init_var(3, p_38);
if(match_cons(t, sym__4))
{
k_38 = ATgetArgument(t, 0);
l_38 = ATgetArgument(t, 1);
j_38 = ATgetArgument(t, 2);
if((p_38 == NULL))
{
p_38 = ATgetArgument(t, 3);
}
else
if((p_38 != ATgetArgument(t, 3)))
goto fail171 ;
}
else
goto fail171 ;
t_38 = t;
if((p_38 == NULL))
goto fail171 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, j_38, p_38);
}
t = make_path_0_0(sl, t);
if((t == NULL))
goto fail171 ;
if((o_38 == NULL))
{
o_38 = t;
}
else
if((o_38 != t))
goto fail171 ;
t = k_38;
{
ATerm trm387 = t;
struct str_closure a_171 = { &(lifted139) , &(frame) };
StrCL lifted139_cl = &(a_171);
struct str_closure d_171 = { &(lifted140) , &(frame) };
StrCL lifted140_cl = &(d_171);
t = iter_sep_2_0(sl, lifted139_cl, lifted140_cl, t);
if((t == NULL))
goto label268 ;
goto label267 ;
label268 :
t = trm387;
{
struct str_closure e_171 = { &(lifted141) , &(frame) };
StrCL lifted141_cl = &(e_171);
struct str_closure m_171 = { &(lifted142) , &(frame) };
StrCL lifted142_cl = &(m_171);
t = iter_star_sep_2_0(sl, lifted141_cl, lifted142_cl, t);
if((t == NULL))
goto fail171 ;
else
goto label267 ;
}
label267 :
;
if((o_38 == NULL))
goto fail171 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, k_38, o_38);
}
t = get_pp_entry_0_0(sl, t);
if((t == NULL))
goto fail171 ;
r_38 = t;
t = l_38;
{
struct str_closure r_171 = { &(lifted143) , &(frame) };
StrCL lifted143_cl = &(r_171);
t = nzip_1_0(sl, lifted143_cl, t);
if((t == NULL))
goto fail171 ;
q_38 = t;
t = instantiate_sep_list_0_1(sl, r_38, t);
if((t == NULL))
goto fail171 ;
s_38 = t;
t = t_38;
t = s_38;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail171 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted143 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted143";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_171 = { &(lifted144) , &(frame) };
StrCL lifted144_cl = &(n_171);
struct str_closure o_171 = { &(lifted145) , &(frame) };
StrCL lifted145_cl = &(o_171);
struct str_closure p_171 = { &(lifted146) , &(frame) };
StrCL lifted146_cl = &(p_171);
struct str_closure q_171 = { &(lifted147) , &(frame) };
StrCL lifted147_cl = &(q_171);
t = BuildSepList_4_0(sl_up(sl), lifted144_cl, lifted145_cl, lifted146_cl, lifted147_cl, t);
if((t == NULL))
goto fail176 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail176 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted147 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted147";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(3, sl_up(sl)) == NULL))
goto fail180 ;
else
{
t = sl_readvar(3, sl_up(sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail180 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted146 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted146";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl_up(sl)) == NULL))
goto fail179 ;
else
{
t = sl_readvar(2, sl_up(sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail179 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted145 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted145";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl_up(sl)) == NULL))
goto fail178 ;
else
{
t = sl_readvar(1, sl_up(sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail178 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted144 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted144";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail177 ;
else
{
t = sl_readvar(0, sl_up(sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail177 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted142 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted142";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail175 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail175 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted141 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted141";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail174 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail174 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted140 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted140";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail173 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail173 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted139 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted139";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail172 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail172 :
--__tracing_table_counter;
return(NULL);
}
ATerm build_list_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "build_list_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,h_38 = NULL;
sl_init_var(0, z_37);
sl_init_var(1, a_38);
if(match_cons(t, sym__4))
{
x_37 = ATgetArgument(t, 0);
y_37 = ATgetArgument(t, 1);
v_37 = ATgetArgument(t, 2);
w_37 = ATgetArgument(t, 3);
}
else
goto fail169 ;
h_38 = t;
t = (ATerm) ATmakeAppl(sym__2, v_37, w_37);
t = make_path_0_0(sl, t);
if((t == NULL))
goto fail169 ;
if((a_38 == NULL))
{
a_38 = t;
}
else
if((a_38 != t))
goto fail169 ;
t = x_37;
{
ATerm trm384 = t;
ATerm g_163 = NULL,h_163 = NULL,i_163 = NULL;
ATerm trm385;
trm385 = (ATerm) ATgetAnnotations(t);
if((trm385 == NULL))
trm385 = (ATerm) ATempty;
if(match_cons(t, sym_iter_1))
{
h_163 = ATgetArgument(t, 0);
}
else
goto label266 ;
g_163 = trm385;
t = h_163;
if((z_37 == NULL))
{
z_37 = t;
}
else
if((z_37 != t))
goto label266 ;
i_163 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_1, i_163), g_163);
goto label265 ;
label266 :
t = trm384;
{
ATerm k_163 = NULL,l_163 = NULL,m_163 = NULL;
ATerm trm386;
trm386 = (ATerm) ATgetAnnotations(t);
if((trm386 == NULL))
trm386 = (ATerm) ATempty;
if(match_cons(t, sym_iter_star_1))
{
l_163 = ATgetArgument(t, 0);
}
else
goto fail169 ;
k_163 = trm386;
t = l_163;
if((z_37 == NULL))
{
z_37 = t;
}
else
if((z_37 != t))
goto fail169 ;
m_163 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, m_163), k_163);
goto label265 ;
}
label265 :
;
if((a_38 == NULL))
goto fail169 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, x_37, a_38);
}
t = get_pp_entry_0_0(sl, t);
if((t == NULL))
goto fail169 ;
c_38 = t;
t = y_37;
{
struct str_closure z_170 = { &(lifted138) , &(frame) };
StrCL lifted138_cl = &(z_170);
t = map_1_0(sl, lifted138_cl, t);
if((t == NULL))
goto fail169 ;
b_38 = t;
t = instantiate_list_0_1(sl, c_38, t);
if((t == NULL))
goto fail169 ;
d_38 = t;
t = h_38;
t = d_38;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail169 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted138 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted138";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,i_38 = NULL;
g_38 = t;
i_38 = t;
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail170 ;
else
{
t = (ATerm) ATmakeAppl(sym__4, sl_readvar(0, sl), g_38, sl_readvar(1, sl), term167);
}
t = symbol2abox_0_0(sl_up(sl), t);
if((t == NULL))
goto fail170 ;
f_38 = t;
t = i_38;
t = f_38;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail170 :
--__tracing_table_counter;
return(NULL);
}
ATerm symbol2abox_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "symbol2abox_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm trm330 = t;
ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
if(match_cons(t, sym__4))
{
ATerm trm331 = ATgetArgument(t, 0);
if(match_cons(trm331, sym_lit_1))
{
u_37 = ATgetArgument(trm331, 0);
}
else
goto label243 ;
{
ATerm trm332 = ATgetArgument(t, 1);
}
s_37 = ATgetArgument(t, 2);
t_37 = ATgetArgument(t, 3);
}
else
goto label243 ;
t = (ATerm) ATmakeAppl(sym_S_1, u_37);
goto label242 ;
label243 :
t = trm330;
{
ATerm trm333 = t;
ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
if(match_cons(t, sym__4))
{
ATerm trm334 = ATgetArgument(t, 0);
if(match_cons(trm334, sym_sort_1))
{
n_37 = ATgetArgument(trm334, 0);
}
else
goto label244 ;
q_37 = ATgetArgument(t, 1);
o_37 = ATgetArgument(t, 2);
p_37 = ATgetArgument(t, 3);
}
else
goto label244 ;
r_37 = t;
t = q_37;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label244 ;
t = r_37;
t = (ATerm) ATmakeAppl(sym_S_1, q_37);
goto label242 ;
label244 :
t = trm333;
{
ATerm trm335 = t;
ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
if(match_cons(t, sym__4))
{
ATerm trm336 = ATgetArgument(t, 0);
if(match_cons(trm336, sym_char_class_1))
{
h_37 = ATgetArgument(trm336, 0);
}
else
goto label245 ;
k_37 = ATgetArgument(t, 1);
i_37 = ATgetArgument(t, 2);
j_37 = ATgetArgument(t, 3);
}
else
goto label245 ;
m_37 = t;
t = (ATerm) ATinsert(ATempty, k_37);
t = implode_string_0_0(sl, t);
if((t == NULL))
goto label245 ;
l_37 = t;
t = m_37;
t = (ATerm) ATmakeAppl(sym_S_1, l_37);
goto label242 ;
label245 :
t = trm335;
{
ATerm trm337 = t;
ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL;
if(match_cons(t, sym__4))
{
ATerm trm338 = ATgetArgument(t, 0);
if(match_cons(trm338, sym_sort_1))
{
b_37 = ATgetArgument(trm338, 0);
}
else
goto label246 ;
e_37 = ATgetArgument(t, 1);
c_37 = ATgetArgument(t, 2);
d_37 = ATgetArgument(t, 3);
}
else
goto label246 ;
g_37 = t;
t = e_37;
{
ATerm trm339 = t;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label248 ;
goto label246 ;
label248 :
t = trm339;
goto label247 ;
label247 :
;
t = e_37;
{
ATerm trm340 = t;
t = application_to_abox_0_0(sl, t);
if((t == NULL))
goto label250 ;
goto label249 ;
label250 :
t = trm340;
t = fatal_ambiguity_0_0(sl, t);
if((t == NULL))
goto label246 ;
else
goto label249 ;
label249 :
;
f_37 = t;
t = g_37;
t = f_37;
}
}
goto label242 ;
label246 :
t = trm337;
{
ATerm trm341 = t;
ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
if(match_cons(t, sym__4))
{
ATerm trm342 = ATgetArgument(t, 0);
if(match_cons(trm342, sym_opt_1))
{
y_36 = ATgetArgument(trm342, 0);
}
else
goto label251 ;
{
ATerm trm343 = ATgetArgument(t, 1);
if(match_cons(trm343, sym_appl_2))
{
ATerm trm344 = ATgetArgument(trm343, 0);
ATerm trm345 = ATgetArgument(trm343, 1);
if(!(((ATgetType(trm345) == AT_LIST) && ATisEmpty(trm345))))
goto label251 ;
}
else
goto label251 ;
}
z_36 = ATgetArgument(t, 2);
a_37 = ATgetArgument(t, 3);
}
else
goto label251 ;
t = (ATerm) ATempty;
goto label242 ;
label251 :
t = trm341;
{
ATerm trm346 = t;
ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,a_163 = NULL,b_163 = NULL;
if(match_cons(t, sym__4))
{
ATerm trm347 = ATgetArgument(t, 0);
if(match_cons(trm347, sym_opt_1))
{
r_36 = ATgetArgument(trm347, 0);
}
else
goto label252 ;
{
ATerm trm348 = ATgetArgument(t, 1);
if(match_cons(trm348, sym_appl_2))
{
o_36 = ATgetArgument(trm348, 0);
{
ATerm trm349 = ATgetArgument(trm348, 1);
if(((ATgetType(trm349) == AT_LIST) && !(ATisEmpty(trm349))))
{
s_36 = ATgetFirst((ATermList) trm349);
{
ATerm trm350 = (ATerm) ATgetNext((ATermList) trm349);
if(!(((ATgetType(trm350) == AT_LIST) && ATisEmpty(trm350))))
goto label252 ;
}
}
else
goto label252 ;
}
}
else
goto label252 ;
}
p_36 = ATgetArgument(t, 2);
q_36 = ATgetArgument(t, 3);
}
else
goto label252 ;
x_36 = t;
t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
t = make_path_0_0(sl, t);
if((t == NULL))
goto label252 ;
t_36 = t;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, r_36), t_36);
t = get_pp_entry_0_0(sl, t);
if((t == NULL))
goto label252 ;
u_36 = t;
t = (ATerm) ATmakeAppl(sym__4, r_36, s_36, t_36, term167);
t = symbol2abox_0_0(sl, t);
if((t == NULL))
goto label252 ;
v_36 = t;
t = (ATerm) ATmakeAppl(sym__2, u_36, (ATerm) ATinsert(ATempty, v_36));
t = filter_literals_0_0(sl, t);
if((t == NULL))
goto label252 ;
if(match_cons(t, sym__2))
{
a_163 = ATgetArgument(t, 0);
b_163 = ATgetArgument(t, 1);
}
else
goto label252 ;
t = a_163;
t = instantiate_0_1(sl, b_163, t);
if((t == NULL))
goto label252 ;
w_36 = t;
t = x_36;
t = w_36;
goto label242 ;
label252 :
t = trm346;
{
ATerm trm351 = t;
ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL;
if(match_cons(t, sym__4))
{
ATerm trm352 = ATgetArgument(t, 0);
if(match_cons(trm352, sym_iter_1))
{
i_36 = ATgetArgument(trm352, 0);
}
else
goto label253 ;
j_36 = ATgetArgument(t, 1);
k_36 = ATgetArgument(t, 2);
l_36 = ATgetArgument(t, 3);
}
else
goto label253 ;
n_36 = t;
t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, i_36), j_36, k_36, l_36);
t = build_list_0_0(sl, t);
if((t == NULL))
goto label253 ;
m_36 = t;
t = n_36;
t = m_36;
goto label242 ;
label253 :
t = trm351;
{
ATerm trm353 = t;
ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
if(match_cons(t, sym__4))
{
ATerm trm354 = ATgetArgument(t, 0);
if(match_cons(trm354, sym_iter_star_1))
{
c_36 = ATgetArgument(trm354, 0);
}
else
goto label254 ;
d_36 = ATgetArgument(t, 1);
e_36 = ATgetArgument(t, 2);
f_36 = ATgetArgument(t, 3);
}
else
goto label254 ;
h_36 = t;
t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, c_36), d_36, e_36, f_36);
t = build_list_0_0(sl, t);
if((t == NULL))
goto label254 ;
g_36 = t;
t = h_36;
t = g_36;
goto label242 ;
label254 :
t = trm353;
{
ATerm trm355 = t;
ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
if(match_cons(t, sym__4))
{
ATerm trm356 = ATgetArgument(t, 0);
if(match_cons(trm356, sym_iter_sep_2))
{
v_35 = ATgetArgument(trm356, 0);
w_35 = ATgetArgument(trm356, 1);
}
else
goto label255 ;
x_35 = ATgetArgument(t, 1);
y_35 = ATgetArgument(t, 2);
z_35 = ATgetArgument(t, 3);
}
else
goto label255 ;
b_36 = t;
t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, v_35, w_35), x_35, y_35, z_35);
t = build_sep_list_0_0(sl, t);
if((t == NULL))
goto label255 ;
a_36 = t;
t = b_36;
t = a_36;
goto label242 ;
label255 :
t = trm355;
{
ATerm trm357 = t;
ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
if(match_cons(t, sym__4))
{
ATerm trm358 = ATgetArgument(t, 0);
if(match_cons(trm358, sym_iter_star_sep_2))
{
o_35 = ATgetArgument(trm358, 0);
p_35 = ATgetArgument(trm358, 1);
}
else
goto label256 ;
q_35 = ATgetArgument(t, 1);
r_35 = ATgetArgument(t, 2);
s_35 = ATgetArgument(t, 3);
}
else
goto label256 ;
u_35 = t;
t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, o_35, p_35), q_35, r_35, s_35);
t = build_sep_list_0_0(sl, t);
if((t == NULL))
goto label256 ;
t_35 = t;
t = u_35;
t = t_35;
goto label242 ;
label256 :
t = trm357;
{
ATerm trm359 = t;
ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,j_35 = NULL,z_34 = NULL;
sl_init_var(0, v_34);
sl_init_var(1, w_34);
sl_init_var(2, x_34);
if(match_cons(t, sym__4))
{
ATerm trm360 = ATgetArgument(t, 0);
if(match_cons(trm360, sym_alt_2))
{
t_34 = ATgetArgument(trm360, 0);
u_34 = ATgetArgument(trm360, 1);
}
else
goto label257 ;
q_34 = ATgetArgument(t, 1);
o_34 = ATgetArgument(t, 2);
p_34 = ATgetArgument(t, 3);
}
else
goto label257 ;
j_35 = t;
t = (ATerm) ATmakeAppl(sym__2, o_34, p_34);
t = make_path_0_0(sl, t);
if((t == NULL))
goto label257 ;
r_34 = t;
t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, t_34, u_34), q_34, r_34, term167);
s_34 = t;
z_34 = t;
t = (ATerm) ATmakeAppl(sym_alt_2, t_34, u_34);
if((v_34 == NULL))
{
v_34 = t;
}
else
if((v_34 != t))
goto label257 ;
t = z_34;
t = i_35(&(frame), t);
if((t == NULL))
goto label257 ;
y_34 = t;
t = j_35;
t = y_34;
goto label242 ;
label257 :
t = trm359;
{
ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,m_34 = NULL,l_34 = NULL,n_34 = NULL;
if(match_cons(t, sym__4))
{
ATerm trm378 = ATgetArgument(t, 0);
if(match_cons(trm378, sym_seq_1))
{
d_34 = ATgetArgument(trm378, 0);
}
else
goto fail165 ;
{
ATerm trm379 = ATgetArgument(t, 1);
if(match_cons(trm379, sym_appl_2))
{
ATerm trm380 = ATgetArgument(trm379, 0);
e_34 = ATgetArgument(trm379, 1);
}
else
goto fail165 ;
}
b_34 = ATgetArgument(t, 2);
c_34 = ATgetArgument(t, 3);
}
else
goto fail165 ;
j_34 = t;
t = (ATerm) ATmakeAppl(sym__2, b_34, c_34);
t = make_path_0_0(sl, t);
if((t == NULL))
goto fail165 ;
f_34 = t;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, d_34), f_34);
t = get_pp_entry_0_0(sl, t);
if((t == NULL))
goto fail165 ;
g_34 = t;
m_34 = t;
t = d_34;
{
struct str_closure w_170 = { &(lifted135) , &(frame) };
StrCL lifted135_cl = &(w_170);
t = filter_1_0(sl, lifted135_cl, t);
if((t == NULL))
goto fail165 ;
k_34 = t;
t = m_34;
n_34 = t;
t = e_34;
{
struct str_closure y_170 = { &(lifted136) , &(frame) };
StrCL lifted136_cl = &(y_170);
t = filter_1_0(sl, lifted136_cl, t);
if((t == NULL))
goto fail165 ;
l_34 = t;
t = n_34;
t = (ATerm) ATmakeAppl(sym__4, k_34, l_34, f_34, term167);
t = seq2abox_0_0(sl, t);
if((t == NULL))
goto fail165 ;
h_34 = t;
t = (ATerm) ATmakeAppl(sym__2, g_34, h_34);
t = instantiate_0_0(sl, t);
if((t == NULL))
goto fail165 ;
i_34 = t;
t = j_34;
t = i_34;
goto label242 ;
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
label242 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail165 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted136 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted136";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm383 = t;
struct str_closure x_170 = { &(_Id) , sl_up(sl) };
StrCL lifted137_cl = &(x_170);
t = lit_1_0(sl_up(sl), lifted137_cl, t);
if((t == NULL))
goto label264 ;
goto fail168 ;
label264 :
t = trm383;
goto label263 ;
label263 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail168 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted135 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted135";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm381 = t;
ATerm c_163 = NULL,d_163 = NULL,e_163 = NULL;
ATerm trm382;
trm382 = (ATerm) ATgetAnnotations(t);
if((trm382 == NULL))
trm382 = (ATerm) ATempty;
if(match_cons(t, sym_lit_1))
{
d_163 = ATgetArgument(t, 0);
}
else
goto label262 ;
c_163 = trm382;
t = d_163;
e_163 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lit_1, e_163), c_163);
goto fail167 ;
label262 :
t = trm381;
goto label261 ;
label261 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail167 :
--__tracing_table_counter;
return(NULL);
}
static ATerm i_35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "i_35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL;
ATerm trm361 = t;
if(match_cons(t, sym__4))
{
ATerm trm362 = ATgetArgument(t, 0);
if(match_cons(trm362, sym_alt_2))
{
b_35 = ATgetArgument(trm362, 0);
c_35 = ATgetArgument(trm362, 1);
}
else
goto label259 ;
{
ATerm trm363 = ATgetArgument(t, 1);
if(match_cons(trm363, sym_appl_2))
{
ATerm trm364 = ATgetArgument(trm363, 0);
if(match_cons(trm364, sym_prod_3))
{
ATerm trm365 = ATgetArgument(trm364, 0);
if(((ATgetType(trm365) == AT_LIST) && !(ATisEmpty(trm365))))
{
if(!((b_35 == ATgetFirst((ATermList) trm365))))
goto label259 ;
{
ATerm trm366 = (ATerm) ATgetNext((ATermList) trm365);
if(!(((ATgetType(trm366) == AT_LIST) && ATisEmpty(trm366))))
goto label259 ;
}
}
else
goto label259 ;
{
ATerm trm367 = ATgetArgument(trm364, 1);
if(match_cons(trm367, sym_alt_2))
{
if(!((b_35 == ATgetArgument(trm367, 0))))
goto label259 ;
if(!((c_35 == ATgetArgument(trm367, 1))))
goto label259 ;
}
else
goto label259 ;
}
e_35 = ATgetArgument(trm364, 2);
}
else
goto label259 ;
d_35 = ATgetArgument(trm363, 1);
}
else
goto label259 ;
}
h_35 = ATgetArgument(t, 2);
g_35 = ATgetArgument(t, 3);
}
else
goto label259 ;
t = (ATerm) ATmakeAppl(sym__4, b_35, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, b_35), b_35, e_35), d_35), h_35, g_35);
t = i_35(sl, t);
if((t == NULL))
goto label259 ;
goto label258 ;
label259 :
t = trm361;
{
ATerm trm368 = t;
ATerm k_35 = NULL,l_35 = NULL;
if(match_cons(t, sym__4))
{
ATerm trm369 = ATgetArgument(t, 0);
if(match_cons(trm369, sym_alt_2))
{
b_35 = ATgetArgument(trm369, 0);
c_35 = ATgetArgument(trm369, 1);
}
else
goto label260 ;
{
ATerm trm370 = ATgetArgument(t, 1);
if(match_cons(trm370, sym_appl_2))
{
ATerm trm371 = ATgetArgument(trm370, 0);
if(match_cons(trm371, sym_prod_3))
{
ATerm trm372 = ATgetArgument(trm371, 0);
if(((ATgetType(trm372) == AT_LIST) && !(ATisEmpty(trm372))))
{
a_35 = ATgetFirst((ATermList) trm372);
{
ATerm trm373 = (ATerm) ATgetNext((ATermList) trm372);
if(!(((ATgetType(trm373) == AT_LIST) && ATisEmpty(trm373))))
goto label260 ;
}
}
else
goto label260 ;
{
ATerm trm374 = ATgetArgument(trm371, 1);
if(match_cons(trm374, sym_alt_2))
{
if(!((b_35 == ATgetArgument(trm374, 0))))
goto label260 ;
if(!((c_35 == ATgetArgument(trm374, 1))))
goto label260 ;
}
else
goto label260 ;
}
e_35 = ATgetArgument(trm371, 2);
}
else
goto label260 ;
d_35 = ATgetArgument(trm370, 1);
}
else
goto label260 ;
}
h_35 = ATgetArgument(t, 2);
g_35 = ATgetArgument(t, 3);
}
else
goto label260 ;
l_35 = t;
t = (ATerm) ATmakeAppl(sym__2, g_35, term167);
t = add_0_0(sl_up(sl), t);
if((t == NULL))
goto label260 ;
k_35 = t;
t = l_35;
t = (ATerm) ATmakeAppl(sym__4, c_35, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, a_35), c_35, e_35), d_35), h_35, k_35);
t = i_35(sl, t);
if((t == NULL))
goto label260 ;
goto label258 ;
label260 :
t = trm368;
{
ATerm m_35 = NULL,n_35 = NULL;
if(match_cons(t, sym__4))
{
b_35 = ATgetArgument(t, 0);
{
ATerm trm375 = ATgetArgument(t, 1);
if(match_cons(trm375, sym_appl_2))
{
f_35 = ATgetArgument(trm375, 0);
{
ATerm trm376 = ATgetArgument(trm375, 1);
if(((ATgetType(trm376) == AT_LIST) && !(ATisEmpty(trm376))))
{
d_35 = ATgetFirst((ATermList) trm376);
{
ATerm trm377 = (ATerm) ATgetNext((ATermList) trm376);
if(!(((ATgetType(trm377) == AT_LIST) && ATisEmpty(trm377))))
goto fail166 ;
}
}
else
goto fail166 ;
}
}
else
goto fail166 ;
}
h_35 = ATgetArgument(t, 2);
g_35 = ATgetArgument(t, 3);
}
else
goto fail166 ;
if((sl_readvar(0, sl) == NULL))
goto fail166 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), h_35);
}
t = get_pp_entry_0_0(sl_up(sl), t);
if((t == NULL))
goto fail166 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail166 ;
t = (ATerm) ATmakeAppl(sym__4, b_35, d_35, h_35, term167);
t = symbol2abox_0_0(sl_up(sl), t);
if((t == NULL))
goto fail166 ;
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = t;
}
else
if((sl_readvar(2, sl) != t))
goto fail166 ;
n_35 = t;
if((sl_readvar(1, sl) == NULL))
goto fail166 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, g_35, sl_readvar(1, sl));
}
t = index_0_0(sl_up(sl), t);
if((t == NULL))
goto fail166 ;
m_35 = t;
t = n_35;
if((sl_readvar(2, sl) == NULL))
goto fail166 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, m_35), (ATerm) ATinsert(ATempty, sl_readvar(2, sl)));
}
t = instantiate_0_0(sl_up(sl), t);
if((t == NULL))
goto fail166 ;
else
goto label258 ;
}
}
label258 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail166 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix2abox_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix2abox_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_33 = NULL;
z_33 = t;
{
struct str_closure o_170 = { &(lifted126) , &(frame) };
StrCL lifted126_cl = &(o_170);
t = repeat_1_0(sl, lifted126_cl, t);
if((t == NULL))
goto fail156 ;
{
struct str_closure u_170 = { &(lifted128) , &(frame) };
StrCL lifted128_cl = &(u_170);
struct str_closure v_170 = { &(lifted132) , &(frame) };
StrCL lifted132_cl = &(v_170);
t = split_2_0(sl, lifted128_cl, lifted132_cl, t);
if((t == NULL))
goto fail156 ;
t = insert_layout_0_0(sl, t);
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
static ATerm lifted132 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted132";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_170 = { &(lifted133) , &(frame) };
StrCL lifted133_cl = &(t_170);
t = collect_p__1_0(sl_up(sl), lifted133_cl, t);
if((t == NULL))
goto fail163 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail163 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted133 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted133";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_170 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted134_cl = &(s_170);
t = layout_1_0(sl_up(sl_up(sl)), lifted134_cl, t);
if((t == NULL))
goto fail164 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail164 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted128 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted128";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_170 = { &(lifted129) , &(frame) };
StrCL lifted129_cl = &(r_170);
t = topdown_1_0(sl_up(sl), lifted129_cl, t);
if((t == NULL))
goto fail159 ;
{
ATerm trm329 = t;
t = application_to_abox_0_0(sl_up(sl), t);
if((t == NULL))
goto label241 ;
goto label240 ;
label241 :
t = trm329;
t = fatal_ambiguity_0_0(sl_up(sl), t);
if((t == NULL))
goto fail159 ;
else
goto label240 ;
label240 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail159 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted129 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted129";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_170 = { &(lifted130) , &(frame) };
StrCL lifted130_cl = &(q_170);
t = try_1_0(sl_up(sl_up(sl)), lifted130_cl, t);
if((t == NULL))
goto fail160 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail160 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted130 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted130";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_170 = { &(lifted131) , &(frame) };
StrCL lifted131_cl = &(p_170);
t = is_list_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail161 ;
t = filter_1_0(sl_up(sl_up(sl_up(sl))), lifted131_cl, t);
if((t == NULL))
goto fail161 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail161 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted131 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted131";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm325 = t;
ATerm s_162 = NULL,t_162 = NULL,u_162 = NULL;
ATerm trm326;
trm326 = (ATerm) ATgetAnnotations(t);
if((trm326 == NULL))
trm326 = (ATerm) ATempty;
if(match_cons(t, sym_opt_1))
{
t_162 = ATgetArgument(t, 0);
}
else
goto label237 ;
s_162 = trm326;
t = t_162;
if(!(match_cons(t, sym_layout_0)))
goto label237 ;
u_162 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_opt_1, u_162), s_162);
goto fail162 ;
label237 :
t = trm325;
goto label236 ;
label236 :
;
{
ATerm trm327 = t;
ATerm w_162 = NULL,x_162 = NULL,y_162 = NULL;
ATerm trm328;
trm328 = (ATerm) ATgetAnnotations(t);
if((trm328 == NULL))
trm328 = (ATerm) ATempty;
if(match_cons(t, sym_layout_1))
{
x_162 = ATgetArgument(t, 0);
}
else
goto label239 ;
w_162 = trm328;
t = x_162;
y_162 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_layout_1, y_162), w_162);
goto fail162 ;
label239 :
t = trm327;
goto label238 ;
label238 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail162 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted126 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted126";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_170 = { &(lifted127) , &(frame) };
StrCL lifted127_cl = &(n_170);
t = sometd_1_0(sl_up(sl), lifted127_cl, t);
if((t == NULL))
goto fail157 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail157 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted127 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted127";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_34 = NULL;
if(match_cons(t, sym_cf_1))
{
a_34 = ATgetArgument(t, 0);
}
else
goto fail158 ;
t = a_34;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail158 :
--__tracing_table_counter;
return(NULL);
}
ATerm Make_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Make_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm323 = t;
ATerm x_33 = NULL;
if(match_cons(t, sym__2))
{
x_33 = ATgetArgument(t, 0);
{
ATerm trm324 = ATgetArgument(t, 1);
}
}
else
goto label235 ;
t = (ATerm) ATmakeAppl(sym_Arg_1, x_33);
goto label234 ;
label235 :
t = trm323;
{
ATerm w_33 = NULL;
if(match_cons(t, sym_lit_1))
{
w_33 = ATgetArgument(t, 0);
}
else
goto fail155 ;
t = (ATerm) ATmakeAppl(sym_FBOX_2, term177, (ATerm) ATmakeAppl(sym_S_1, w_33));
goto label234 ;
}
label234 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail155 :
--__tracing_table_counter;
return(NULL);
}
ATerm pair_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pair_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = t_33(&(frame), t);
if((t == NULL))
goto fail153 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail153 :
--__tracing_table_counter;
return(NULL);
}
static ATerm t_33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "t_33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm320 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label233 ;
goto label232 ;
label233 :
t = trm320;
{
ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,u_33 = NULL,v_33 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
q_33 = ATgetFirst((ATermList) t);
{
ATerm trm321 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm321) == AT_LIST) && !(ATisEmpty(trm321))))
{
r_33 = ATgetFirst((ATermList) trm321);
s_33 = (ATerm) ATgetNext((ATermList) trm321);
}
else
goto fail154 ;
}
}
else
goto fail154 ;
v_33 = t;
t = s_33;
t = t_33(sl, t);
if((t == NULL))
goto fail154 ;
u_33 = t;
t = v_33;
{
ATerm trm322;
trm322 = CheckATermList(u_33);
if((trm322 == NULL))
goto fail154 ;
t = (ATerm) ATinsert((ATermList)trm322, (ATerm) ATmakeAppl(sym__2, q_33, r_33));
goto label232 ;
}
}
label232 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail154 :
--__tracing_table_counter;
return(NULL);
}
ATerm make_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "make_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
ATerm trm303 = t;
ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,o_33 = NULL,p_33 = NULL;
t = reverse_0_0(sl, t);
if((t == NULL))
goto label220 ;
{
ATerm trm304;
trm304 = (ATerm) ATgetAnnotations(t);
if((trm304 == NULL))
trm304 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
x_32 = ATgetFirst((ATermList) t);
y_32 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label220 ;
b_33 = trm304;
t = x_32;
{
struct str_closure b_170 = { &(_Id) , sl };
StrCL lifted110_cl = &(b_170);
struct str_closure c_170 = { &(lifted111) , &(frame) };
StrCL lifted111_cl = &(c_170);
t = _2_0(sl, lifted110_cl, lifted111_cl, t);
if((t == NULL))
goto label220 ;
t = Make_0_0(sl, t);
if((t == NULL))
goto label220 ;
z_32 = t;
t = y_32;
{
struct str_closure d_170 = { &(lifted116) , &(frame) };
StrCL lifted116_cl = &(d_170);
t = map_1_0(sl, lifted116_cl, t);
if((t == NULL))
goto label220 ;
a_33 = t;
t = z_32;
t_32 = t;
t = a_33;
s_32 = t;
t = (ATerm) SRTS_setAnnotations(b_33, (ATerm) ATempty);
{
ATerm trm311;
trm311 = CheckATermList(a_33);
if((trm311 == NULL))
goto label220 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm311, z_32), b_33);
{
ATerm trm312 = t;
ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
ATerm trm313;
trm313 = (ATerm) ATgetAnnotations(t);
if((trm313 == NULL))
trm313 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
c_33 = ATgetFirst((ATermList) t);
d_33 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label226 ;
g_33 = trm313;
t = c_33;
e_33 = t;
t = d_33;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label226 ;
f_33 = t;
{
ATerm trm314;
trm314 = CheckATermList(f_33);
if((trm314 == NULL))
goto label226 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm314, e_33), g_33);
}
goto label220 ;
label226 :
t = trm312;
goto label225 ;
label225 :
;
p_33 = t;
t = s_32;
t = reverse_0_0(sl, t);
if((t == NULL))
goto label220 ;
o_33 = t;
t = p_33;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, t_32), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, o_33)));
}
}
}
}
}
goto label219 ;
label220 :
t = trm303;
{
ATerm trm315 = t;
ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
t = reverse_0_0(sl, t);
if((t == NULL))
goto label227 ;
{
ATerm trm316;
trm316 = (ATerm) ATgetAnnotations(t);
if((trm316 == NULL))
trm316 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
h_33 = ATgetFirst((ATermList) t);
i_33 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label227 ;
l_33 = trm316;
t = h_33;
t = Make_0_0(sl, t);
if((t == NULL))
goto label227 ;
w_32 = t;
j_33 = t;
t = i_33;
{
ATerm trm317 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label229 ;
goto label227 ;
label229 :
t = trm317;
goto label228 ;
label228 :
;
t = reverse_0_0(sl, t);
if((t == NULL))
goto label227 ;
u_32 = t;
k_33 = t;
{
ATerm trm318;
trm318 = CheckATermList(k_33);
if((trm318 == NULL))
goto label227 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm318, j_33), l_33);
t = u_32;
t = pair_0_0(sl, t);
if((t == NULL))
goto label227 ;
{
struct str_closure l_170 = { &(lifted117) , &(frame) };
StrCL lifted117_cl = &(l_170);
t = map_1_0(sl, lifted117_cl, t);
if((t == NULL))
goto label227 ;
v_32 = t;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, w_32), v_32));
}
}
}
}
goto label219 ;
label227 :
t = trm315;
{
struct str_closure m_170 = { &(Make_0_0) , sl };
StrCL lifted125_cl = &(m_170);
t = map_1_0(sl, lifted125_cl, t);
if((t == NULL))
goto fail146 ;
else
goto label219 ;
}
}
label219 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail146 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted117 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted117";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm m_33 = NULL,n_33 = NULL;
sl_init_var(0, m_33);
sl_init_var(1, n_33);
{
struct str_closure j_170 = { &(lifted118) , &(frame) };
StrCL lifted118_cl = &(j_170);
struct str_closure k_170 = { &(lifted120) , &(frame) };
StrCL lifted120_cl = &(k_170);
t = _2_0(sl_up(sl), lifted118_cl, lifted120_cl, t);
if((t == NULL))
goto fail149 ;
if(((m_33 == NULL) || (n_33 == NULL)))
goto fail149 ;
else
{
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term175), (ATerm) ATinsert(ATinsert(ATempty, n_33), m_33));
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail149 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted120 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted120";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_170 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted121_cl = &(h_170);
struct str_closure i_170 = { &(lifted122) , &(frame) };
StrCL lifted122_cl = &(i_170);
t = _2_0(sl_up(sl_up(sl)), lifted121_cl, lifted122_cl, t);
if((t == NULL))
goto fail151 ;
t = Make_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail151 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail151 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail151 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted122 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted122";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm319 = t;
struct str_closure f_170 = { &(_Id) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted123_cl = &(f_170);
t = iter_1_0(sl_up(sl_up(sl_up(sl))), lifted123_cl, t);
if((t == NULL))
goto label231 ;
goto label230 ;
label231 :
t = trm319;
{
struct str_closure g_170 = { &(_Id) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted124_cl = &(g_170);
t = iter_star_1_0(sl_up(sl_up(sl_up(sl))), lifted124_cl, t);
if((t == NULL))
goto fail152 ;
else
goto label230 ;
}
label230 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail152 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted118 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted118";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_170 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted119_cl = &(e_170);
t = lit_1_0(sl_up(sl_up(sl)), lifted119_cl, t);
if((t == NULL))
goto fail150 ;
t = Make_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail150 ;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail150 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail150 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted116 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted116";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_162 = NULL,o_162 = NULL,p_162 = NULL;
ATerm trm310;
trm310 = (ATerm) ATgetAnnotations(t);
if((trm310 == NULL))
trm310 = (ATerm) ATempty;
if(match_cons(t, sym_lit_1))
{
o_162 = ATgetArgument(t, 0);
}
else
goto fail148 ;
n_162 = trm310;
t = o_162;
p_162 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lit_1, p_162), n_162);
t = Make_0_0(sl_up(sl), t);
if((t == NULL))
goto fail148 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail148 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted111 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted111";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm305 = t;
ATerm f_162 = NULL,g_162 = NULL,h_162 = NULL;
ATerm trm306;
trm306 = (ATerm) ATgetAnnotations(t);
if((trm306 == NULL))
trm306 = (ATerm) ATempty;
if(match_cons(t, sym_iter_1))
{
g_162 = ATgetArgument(t, 0);
}
else
goto label222 ;
f_162 = trm306;
t = g_162;
h_162 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_1, h_162), f_162);
goto label221 ;
label222 :
t = trm305;
{
ATerm trm307 = t;
ATerm j_162 = NULL,k_162 = NULL,l_162 = NULL;
ATerm trm308;
trm308 = (ATerm) ATgetAnnotations(t);
if((trm308 == NULL))
trm308 = (ATerm) ATempty;
if(match_cons(t, sym_iter_star_1))
{
k_162 = ATgetArgument(t, 0);
}
else
goto label223 ;
j_162 = trm308;
t = k_162;
l_162 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, l_162), j_162);
goto label221 ;
label223 :
t = trm307;
{
ATerm trm309 = t;
struct str_closure x_169 = { &(_Id) , sl_up(sl) };
StrCL lifted112_cl = &(x_169);
struct str_closure y_169 = { &(_Id) , sl_up(sl) };
StrCL lifted113_cl = &(y_169);
t = iter_sep_2_0(sl_up(sl), lifted112_cl, lifted113_cl, t);
if((t == NULL))
goto label224 ;
goto label221 ;
label224 :
t = trm309;
{
struct str_closure z_169 = { &(_Id) , sl_up(sl) };
StrCL lifted114_cl = &(z_169);
struct str_closure a_170 = { &(_Id) , sl_up(sl) };
StrCL lifted115_cl = &(a_170);
t = iter_star_sep_2_0(sl_up(sl), lifted114_cl, lifted115_cl, t);
if((t == NULL))
goto fail147 ;
else
goto label221 ;
}
}
}
label221 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail147 :
--__tracing_table_counter;
return(NULL);
}
ATerm number_node_1_0 (StrSL sl, StrCL k_32, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "number_node_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, k_32);
{
struct str_closure v_169 = { &(lifted108) , &(frame) };
StrCL lifted108_cl = &(v_169);
struct str_closure w_169 = { &(_Id) , sl };
StrCL lifted109_cl = &(w_169);
t = split_2_0(sl, lifted108_cl, lifted109_cl, t);
if((t == NULL))
goto fail142 ;
t = l_32(&(frame), t);
if((t == NULL))
goto fail142 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail142 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted108 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted108";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term167;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail145 :
--__tracing_table_counter;
return(NULL);
}
static ATerm l_32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "l_32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL;
ATerm trm297 = t;
struct str_closure t_169 = { &(_Id) , sl_up(sl) };
StrCL lifted106_cl = &(t_169);
struct str_closure u_169 = { &(lifted107) , &(frame) };
StrCL lifted107_cl = &(u_169);
t = _2_0(sl_up(sl), lifted106_cl, lifted107_cl, t);
if((t == NULL))
goto label217 ;
t = (ATerm) ATempty;
goto label216 ;
label217 :
t = trm297;
{
ATerm trm298 = t;
ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL;
if(match_cons(t, sym__2))
{
f_32 = ATgetArgument(t, 0);
{
ATerm trm299 = ATgetArgument(t, 1);
if(((ATgetType(trm299) == AT_LIST) && !(ATisEmpty(trm299))))
{
g_32 = ATgetFirst((ATermList) trm299);
i_32 = (ATerm) ATgetNext((ATermList) trm299);
}
else
goto label218 ;
}
}
else
goto label218 ;
t = g_32;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label218 ;
n_32 = t;
p_32 = t;
t = (ATerm) ATmakeAppl(sym__2, f_32, term167);
t = add_0_0(sl_up(sl), t);
if((t == NULL))
goto label218 ;
o_32 = t;
t = p_32;
t = (ATerm) ATmakeAppl(sym__2, o_32, i_32);
t = l_32(sl, t);
if((t == NULL))
goto label218 ;
m_32 = t;
t = n_32;
{
ATerm trm300;
trm300 = CheckATermList(m_32);
if((trm300 == NULL))
goto label218 ;
t = (ATerm) ATinsert((ATermList)trm300, (ATerm) ATmakeAppl(sym__2, f_32, g_32));
}
goto label216 ;
label218 :
t = trm298;
{
ATerm q_32 = NULL,r_32 = NULL;
if(match_cons(t, sym__2))
{
f_32 = ATgetArgument(t, 0);
{
ATerm trm301 = ATgetArgument(t, 1);
if(((ATgetType(trm301) == AT_LIST) && !(ATisEmpty(trm301))))
{
g_32 = ATgetFirst((ATermList) trm301);
i_32 = (ATerm) ATgetNext((ATermList) trm301);
}
else
goto fail143 ;
}
}
else
goto fail143 ;
r_32 = t;
t = (ATerm) ATmakeAppl(sym__2, f_32, i_32);
t = l_32(sl, t);
if((t == NULL))
goto fail143 ;
q_32 = t;
t = r_32;
{
ATerm trm302;
trm302 = CheckATermList(q_32);
if((trm302 == NULL))
goto fail143 ;
t = (ATerm) ATinsert((ATermList)trm302, g_32);
goto label216 ;
}
}
}
label216 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail143 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted107 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted107";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail144 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail144 :
--__tracing_table_counter;
return(NULL);
}
ATerm argument_list_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "argument_list_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_169 = { &(lifted104) , &(frame) };
StrCL lifted104_cl = &(s_169);
t = map_1_0(sl, lifted104_cl, t);
if((t == NULL))
goto fail139 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail139 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail139 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted104 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted104";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_169 = { &(lifted105) , &(frame) };
StrCL lifted105_cl = &(r_169);
t = try_1_0(sl_up(sl), lifted105_cl, t);
if((t == NULL))
goto fail140 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail140 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted105 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted105";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_32 = NULL,e_32 = NULL;
d_32 = t;
e_32 = t;
{
ATerm trm296 = t;
t = is_list_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label215 ;
goto fail141 ;
label215 :
t = trm296;
goto label214 ;
label214 :
;
t = e_32;
t = (ATerm) ATinsert(ATempty, d_32);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail141 :
--__tracing_table_counter;
return(NULL);
}
ATerm flat_alt_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "flat_alt_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = a_32(&(frame), t);
if((t == NULL))
goto fail137 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail137 :
--__tracing_table_counter;
return(NULL);
}
static ATerm a_32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "a_32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
ATerm trm293 = t;
ATerm b_32 = NULL,c_32 = NULL;
if(match_cons(t, sym_alt_2))
{
x_31 = ATgetArgument(t, 0);
{
ATerm trm294 = ATgetArgument(t, 1);
if(match_cons(trm294, sym_alt_2))
{
y_31 = ATgetArgument(trm294, 0);
z_31 = ATgetArgument(trm294, 1);
}
else
goto label213 ;
}
}
else
goto label213 ;
c_32 = t;
t = (ATerm) ATmakeAppl(sym_alt_2, y_31, z_31);
t = a_32(sl, t);
if((t == NULL))
goto label213 ;
b_32 = t;
t = c_32;
{
ATerm trm295;
trm295 = CheckATermList(b_32);
if((trm295 == NULL))
goto label213 ;
t = (ATerm) ATinsert((ATermList)trm295, x_31);
}
goto label212 ;
label213 :
t = trm293;
if(match_cons(t, sym_alt_2))
{
x_31 = ATgetArgument(t, 0);
y_31 = ATgetArgument(t, 1);
}
else
goto fail138 ;
t = (ATerm) ATinsert(ATinsert(ATempty, y_31), x_31);
goto label212 ;
label212 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail138 :
--__tracing_table_counter;
return(NULL);
}
ATerm symbol2abox_1_0 (StrSL sl, StrCL u_31, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "symbol2abox_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_vars(3);
sl_init_fun(0, u_31);
{
ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
sl_init_var(0, r_30);
sl_init_var(1, s_30);
sl_init_var(2, t_30);
{
struct str_closure p_169 = { &(lifted102) , &(frame) };
StrCL lifted102_cl = &(p_169);
struct str_closure q_169 = { &(_Id) , sl };
StrCL lifted103_cl = &(q_169);
t = split_2_0(sl, lifted102_cl, lifted103_cl, t);
if((t == NULL))
goto fail131 ;
t = v_31(&(frame), t);
if((t == NULL))
goto fail131 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail131 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted102 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted102";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term93;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail136 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail136 :
--__tracing_table_counter;
return(NULL);
}
static ATerm v_31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "v_31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm trm259 = t;
if(match_cons(t, sym__2))
{
ATerm trm260 = ATgetArgument(t, 0);
ATerm trm261 = ATgetArgument(t, 1);
if(match_cons(trm261, sym_lit_1))
{
ATerm trm262 = ATgetArgument(trm261, 0);
}
else
goto label207 ;
}
else
goto label207 ;
t = (ATerm) ATempty;
goto label206 ;
label207 :
t = trm259;
{
ATerm trm263 = t;
if(match_cons(t, sym__2))
{
ATerm trm264 = ATgetArgument(t, 0);
ATerm trm265 = ATgetArgument(t, 1);
if(match_cons(trm265, sym__2))
{
ATerm trm266 = ATgetArgument(trm265, 0);
ATerm trm267 = ATgetArgument(trm265, 1);
if(match_cons(trm267, sym_sort_1))
{
ATerm trm268 = ATgetArgument(trm267, 0);
}
else
goto label208 ;
}
else
goto label208 ;
}
else
goto label208 ;
t = (ATerm) ATempty;
goto label206 ;
label208 :
t = trm263;
{
ATerm trm269 = t;
if(match_cons(t, sym__2))
{
ATerm trm270 = ATgetArgument(t, 0);
ATerm trm271 = ATgetArgument(t, 1);
if(match_cons(trm271, sym__2))
{
ATerm trm272 = ATgetArgument(trm271, 0);
ATerm trm273 = ATgetArgument(trm271, 1);
if(match_cons(trm273, sym_char_class_1))
{
ATerm trm274 = ATgetArgument(trm273, 0);
}
else
goto label209 ;
}
else
goto label209 ;
}
else
goto label209 ;
t = (ATerm) ATempty;
goto label206 ;
label209 :
t = trm269;
{
ATerm trm275 = t;
ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm276 = ATgetArgument(t, 0);
if(match_cons(trm276, sym__2))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm276, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm276, 0)))
goto label210 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm276, 1);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm276, 1)))
goto label210 ;
}
else
goto label210 ;
{
ATerm trm277 = ATgetArgument(t, 1);
if(match_cons(trm277, sym__2))
{
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = ATgetArgument(trm277, 0);
}
else
if((sl_readvar(2, sl) != ATgetArgument(trm277, 0)))
goto label210 ;
{
ATerm trm278 = ATgetArgument(trm277, 1);
if(match_cons(trm278, sym_alt_2))
{
u_30 = ATgetArgument(trm278, 0);
{
ATerm trm279 = ATgetArgument(trm278, 1);
if(match_cons(trm279, sym_alt_2))
{
v_30 = ATgetArgument(trm279, 0);
w_30 = ATgetArgument(trm279, 1);
}
else
goto label210 ;
}
}
else
goto label210 ;
}
}
else
goto label210 ;
}
}
else
goto label210 ;
t = (ATerm) ATmakeAppl(sym_alt_2, u_30, (ATerm) ATmakeAppl(sym_alt_2, v_30, w_30));
t = flat_alt_0_0(sl_up(sl), t);
if((t == NULL))
goto label210 ;
x_30 = t;
t = (ATerm) ATmakeAppl(sym__2, term165, x_30);
t = mkterm_0_0(sl_up(sl), t);
if((t == NULL))
goto label210 ;
y_30 = t;
if(((sl_readvar(0, sl) == NULL) || ((sl_readvar(1, sl) == NULL) || (sl_readvar(2, sl) == NULL))))
goto label210 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, sl_readvar(0, sl), sl_readvar(1, sl)), (ATerm) ATmakeAppl(sym__2, sl_readvar(2, sl), y_30));
}
t = v_31(sl, t);
if((t == NULL))
goto label210 ;
{
ATerm trm280;
trm280 = (ATerm) ATgetAnnotations(t);
if((trm280 == NULL))
trm280 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
z_30 = ATgetFirst((ATermList) t);
a_31 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label210 ;
d_31 = trm280;
t = z_30;
{
struct str_closure n_169 = { &(lifted99) , &(frame) };
StrCL lifted99_cl = &(n_169);
t = topdown_1_0(sl_up(sl), lifted99_cl, t);
if((t == NULL))
goto label210 ;
b_31 = t;
t = a_31;
c_31 = t;
{
ATerm trm282;
trm282 = CheckATermList(c_31);
if((trm282 == NULL))
goto label210 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm282, b_31), d_31);
}
}
}
goto label206 ;
label210 :
t = trm275;
{
ATerm trm283 = t;
ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm284 = ATgetArgument(t, 0);
if(match_cons(trm284, sym__2))
{
e_31 = ATgetArgument(trm284, 0);
f_31 = ATgetArgument(trm284, 1);
}
else
goto label211 ;
{
ATerm trm285 = ATgetArgument(t, 1);
if(match_cons(trm285, sym__2))
{
g_31 = ATgetArgument(trm285, 0);
{
ATerm trm286 = ATgetArgument(trm285, 1);
if(match_cons(trm286, sym_bracket_symbol_1))
{
h_31 = ATgetArgument(trm286, 0);
}
else
goto label211 ;
}
}
else
goto label211 ;
}
}
else
goto label211 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_31, f_31), (ATerm) ATmakeAppl(sym__2, g_31, h_31));
t = v_31(sl, t);
if((t == NULL))
goto label211 ;
goto label206 ;
label211 :
t = trm283;
{
ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
sl_init_var(0, i_31);
sl_init_var(1, k_31);
if(match_cons(t, sym__2))
{
ATerm trm287 = ATgetArgument(t, 0);
if(match_cons(trm287, sym__2))
{
if((i_31 == NULL))
{
i_31 = ATgetArgument(trm287, 0);
}
else
if((i_31 != ATgetArgument(trm287, 0)))
goto fail132 ;
j_31 = ATgetArgument(trm287, 1);
}
else
goto fail132 ;
{
ATerm trm288 = ATgetArgument(t, 1);
if(match_cons(trm288, sym__2))
{
n_31 = ATgetArgument(trm288, 0);
{
ATerm trm289 = ATgetArgument(trm288, 1);
ATerm trm290,trm291;
trm290 = SSL_get_constructor(trm289);
trm291 = SSL_get_arguments(trm289);
o_31 = trm290;
p_31 = trm291;
}
}
else
goto fail132 ;
}
}
else
goto fail132 ;
t = (ATerm) ATmakeAppl(sym__2, j_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, n_31, o_31)));
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail132 ;
if((k_31 == NULL))
{
k_31 = t;
}
else
if((k_31 != t))
goto fail132 ;
t = p_31;
t = argument_list_0_0(sl_up(sl), t);
if((t == NULL))
goto fail132 ;
t = number_nonterminals_0_0(sl_up(sl), t);
if((t == NULL))
goto fail132 ;
q_31 = t;
t = make_0_0(sl_up(sl), t);
if((t == NULL))
goto fail132 ;
l_31 = t;
t = q_31;
{
struct str_closure o_169 = { &(lifted101) , &(frame) };
StrCL lifted101_cl = &(o_169);
t = map_1_0(sl_up(sl), lifted101_cl, t);
if((t == NULL))
goto fail132 ;
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto fail132 ;
m_31 = t;
if(((i_31 == NULL) || (k_31 == NULL)))
goto fail132 ;
else
{
ATerm trm292;
trm292 = CheckATermList(m_31);
if((trm292 == NULL))
goto fail132 ;
t = (ATerm) ATinsert((ATermList)trm292, (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, i_31, k_31), l_31));
goto label206 ;
}
}
}
}
}
}
}
label206 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail132 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted101 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted101";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,w_31 = NULL;
t_31 = t;
w_31 = t;
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail135 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, sl_readvar(0, sl), sl_readvar(1, sl)), t_31);
}
t = v_31(sl_up(sl), t);
if((t == NULL))
goto fail135 ;
s_31 = t;
t = w_31;
t = s_31;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail135 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted99 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted99";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_169 = { &(lifted100) , &(frame) };
StrCL lifted100_cl = &(m_169);
t = try_1_0(sl_up(sl_up(sl)), lifted100_cl, t);
if((t == NULL))
goto fail133 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail133 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted100 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted100";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_162 = NULL,c_162 = NULL,d_162 = NULL;
ATerm trm281;
trm281 = (ATerm) ATgetAnnotations(t);
if((trm281 == NULL))
trm281 = (ATerm) ATempty;
if(match_cons(t, sym_Arg_1))
{
c_162 = ATgetArgument(t, 0);
}
else
goto fail134 ;
b_162 = trm281;
t = c_162;
d_162 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Arg_1, d_162), b_162);
t = term169;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail134 :
--__tracing_table_counter;
return(NULL);
}
ATerm symbols2pp_entries_1_0 (StrSL sl, StrCL m_30, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "symbols2pp_entries_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, m_30);
{
ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,p_30 = NULL,q_30 = NULL;
t = number_nonterminals_0_0(sl, t);
if((t == NULL))
goto fail128 ;
k_30 = t;
t = make_0_0(sl, t);
if((t == NULL))
goto fail128 ;
i_30 = t;
t = k_30;
l_30 = t;
{
struct str_closure l_169 = { &(lifted97) , &(frame) };
StrCL lifted97_cl = &(l_169);
t = map_1_0(sl, lifted97_cl, t);
if((t == NULL))
goto fail128 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail128 ;
j_30 = t;
t = l_30;
q_30 = t;
t = term93;
t = cl_fun(m_30)(cl_sl(m_30), t);
if((t == NULL))
goto fail128 ;
p_30 = t;
t = q_30;
{
ATerm trm258;
trm258 = CheckATermList(j_30);
if((trm258 == NULL))
goto fail128 ;
t = (ATerm) ATinsert((ATermList)trm258, (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, p_30), i_30));
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail128 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted97 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted97";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_169 = { &(lifted98) , &(frame) };
StrCL lifted98_cl = &(k_169);
t = symbol2abox_1_0(sl_up(sl), lifted98_cl, t);
if((t == NULL))
goto fail129 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail129 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted98 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted98";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_30 = NULL,o_30 = NULL;
o_30 = t;
t = term93;
t = sl_fun(0, sl_up(sl))(sl_fun_sl(0, sl_up(sl)), t);
if((t == NULL))
goto fail130 ;
n_30 = t;
t = o_30;
t = (ATerm) ATmakeAppl(sym__2, n_30, (ATerm) ATempty);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail130 :
--__tracing_table_counter;
return(NULL);
}
ATerm number_nonterminals_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "number_nonterminals_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_169 = { &(lifted96) , &(frame) };
StrCL lifted96_cl = &(h_169);
struct str_closure j_169 = { &(lifted94) , &(frame) };
StrCL lifted94_cl = &(j_169);
t = map_1_0(sl, lifted94_cl, t);
if((t == NULL))
goto fail124 ;
t = number_node_1_0(sl, lifted96_cl, t);
if((t == NULL))
goto fail124 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail124 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted94 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted94";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_169 = { &(lifted95) , &(frame) };
StrCL lifted95_cl = &(i_169);
t = try_1_0(sl_up(sl), lifted95_cl, t);
if((t == NULL))
goto fail126 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail126 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted95 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted95";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_161 = NULL,q_161 = NULL;
if(match_cons(t, sym_label_2))
{
p_161 = ATgetArgument(t, 0);
q_161 = ATgetArgument(t, 1);
}
else
goto fail127 ;
t = q_161;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail127 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted96 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted96";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm256 = t;
ATerm s_161 = NULL,t_161 = NULL,u_161 = NULL;
ATerm trm257;
trm257 = (ATerm) ATgetAnnotations(t);
if((trm257 == NULL))
trm257 = (ATerm) ATempty;
if(match_cons(t, sym_lit_1))
{
t_161 = ATgetArgument(t, 0);
}
else
goto label205 ;
s_161 = trm257;
t = t_161;
u_161 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lit_1, u_161), s_161);
goto fail125 ;
label205 :
t = trm256;
goto label204 ;
label204 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail125 :
--__tracing_table_counter;
return(NULL);
}
ATerm ignore_prod_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ignore_prod_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm243 = t;
ATerm trm244 = t;
t = is_inject_prod_0_0(sl, t);
if((t == NULL))
goto label200 ;
goto label199 ;
label200 :
t = trm244;
{
ATerm trm245 = t;
ATerm l_161 = NULL,m_161 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm246 = ATgetArgument(t, 0);
ATerm trm247 = ATgetArgument(t, 1);
ATerm trm248 = ATgetArgument(t, 2);
if(match_cons(trm248, sym_attrs_1))
{
l_161 = ATgetArgument(trm248, 0);
}
else
goto label201 ;
}
else
goto label201 ;
m_161 = t;
t = l_161;
{
struct str_closure d_169 = { &(lifted91) , &(frame) };
StrCL lifted91_cl = &(d_169);
t = fetch_1_0(sl, lifted91_cl, t);
if((t == NULL))
goto label201 ;
t = m_161;
}
goto label199 ;
label201 :
t = trm245;
{
ATerm n_161 = NULL,o_161 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm249 = ATgetArgument(t, 0);
ATerm trm250 = ATgetArgument(t, 1);
ATerm trm251 = ATgetArgument(t, 2);
if(match_cons(trm251, sym_attrs_1))
{
n_161 = ATgetArgument(trm251, 0);
}
else
goto label198 ;
}
else
goto label198 ;
o_161 = t;
t = n_161;
{
struct str_closure e_169 = { &(lifted92) , &(frame) };
StrCL lifted92_cl = &(e_169);
t = fetch_1_0(sl, lifted92_cl, t);
if((t == NULL))
goto label198 ;
t = o_161;
goto label199 ;
}
}
}
label199 :
;
goto label197 ;
label198 :
t = trm243;
{
ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
if(match_cons(t, sym_prod_3))
{
c_30 = ATgetArgument(t, 0);
{
ATerm trm252 = ATgetArgument(t, 1);
if(match_cons(trm252, sym_cf_1))
{
ATerm trm253 = ATgetArgument(trm252, 0);
if(match_cons(trm253, sym_sort_1))
{
d_30 = ATgetArgument(trm253, 0);
}
else
goto fail120 ;
}
else
goto fail120 ;
}
{
ATerm trm254 = ATgetArgument(t, 2);
if(match_cons(trm254, sym_attrs_1))
{
e_30 = ATgetArgument(trm254, 0);
}
else
goto fail120 ;
}
}
else
goto fail120 ;
f_30 = t;
t = e_30;
{
struct str_closure f_169 = { &(lifted93) , &(frame) };
StrCL lifted93_cl = &(f_169);
t = fetch_1_0(sl, lifted93_cl, t);
if((t == NULL))
goto fail120 ;
t = e_30;
{
ATerm trm255 = t;
t = get_cnstr_name_0_0(sl, t);
if((t == NULL))
goto label203 ;
goto fail120 ;
label203 :
t = trm255;
goto label202 ;
label202 :
;
t = f_30;
goto label197 ;
}
}
}
label197 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail120 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted93 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted93";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_bracket_0)))
goto fail123 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail123 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted92 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted92";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_reject_0)))
goto fail122 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail122 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted91 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted91";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_bracket_0)))
goto fail121 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail121 :
--__tracing_table_counter;
return(NULL);
}
ATerm missing_constructor_warning_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "missing_constructor_warning_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_168 = { &(lifted90) , &(frame) };
StrCL lifted90_cl = &(z_168);
struct str_closure b_169 = { &(lifted87) , &(frame) };
StrCL lifted87_cl = &(b_169);
t = xtc_temp_files_1_0(sl, lifted87_cl, t);
if((t == NULL))
goto fail115 ;
{
struct str_closure c_169 = { &(lifted89) , &(frame) };
StrCL lifted89_cl = &(c_169);
t = say_1_0(sl, lifted89_cl, t);
if((t == NULL))
goto fail115 ;
t = debug_1_0(sl, lifted90_cl, t);
if((t == NULL))
goto fail115 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail115 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted89 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted89";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term163;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail119 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted87 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted87";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_30 = NULL;
struct str_closure a_169 = { &(lifted88) , &(frame) };
StrCL lifted88_cl = &(a_169);
t = write_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail117 ;
t = xtc_pp_sdf2_0_0(sl_up(sl), t);
if((t == NULL))
goto fail117 ;
if(match_cons(t, sym_FILE_1))
{
b_30 = ATgetArgument(t, 0);
}
else
goto fail117 ;
t = b_30;
t = read_text_file_0_0(sl_up(sl), t);
if((t == NULL))
goto fail117 ;
t = trim_chars_1_0(sl_up(sl), lifted88_cl, t);
if((t == NULL))
goto fail117 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail117 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted88 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted88";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm240 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 10))))
goto label194 ;
goto label193 ;
label194 :
t = trm240;
{
ATerm trm241 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 13))))
goto label195 ;
goto label193 ;
label195 :
t = trm241;
{
ATerm trm242 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 32))))
goto label196 ;
goto label193 ;
label196 :
t = trm242;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 9)))
goto label193 ;
else
goto fail118 ;
}
}
label193 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail118 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted90 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted90";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term161;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail116 :
--__tracing_table_counter;
return(NULL);
}
ATerm generate_pp_entries_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "generate_pp_entries_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
sl_init_var(0, z_29);
if(match_cons(t, sym_prod_3))
{
y_29 = ATgetArgument(t, 0);
w_29 = ATgetArgument(t, 1);
x_29 = ATgetArgument(t, 2);
}
else
goto fail113 ;
{
ATerm trm238 = t;
ATerm a_30 = NULL;
t = x_29;
if(match_cons(t, sym_attrs_1))
{
a_30 = ATgetArgument(t, 0);
}
else
goto label191 ;
t = a_30;
t = get_cnstr_name_0_0(sl, t);
if((t == NULL))
goto label191 ;
if((z_29 == NULL))
{
z_29 = t;
}
else
if((z_29 != t))
goto label191 ;
{
struct str_closure x_168 = { &(lifted85) , &(frame) };
StrCL lifted85_cl = &(x_168);
t = y_29;
t = symbols2pp_entries_1_0(sl, lifted85_cl, t);
if((t == NULL))
goto fail113 ;
else
goto label190 ;
}
label191 :
t = trm238;
{
ATerm trm239 = t;
t = ignore_prod_0_0(sl, t);
if((t == NULL))
goto label192 ;
t = (ATerm) ATempty;
goto label190 ;
label192 :
t = trm239;
{
struct str_closure y_168 = { &(missing_constructor_warning_0_0) , sl };
StrCL lifted86_cl = &(y_168);
t = if_verbose1_1_0(sl, lifted86_cl, t);
if((t == NULL))
goto fail113 ;
t = (ATerm) ATempty;
goto label190 ;
}
}
label190 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail113 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted85 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted85";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail114 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail114 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_pp_sdf2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_pp_sdf2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_168 = { &(lifted83) , &(frame) };
StrCL lifted83_cl = &(q_168);
struct str_closure r_168 = { &(pass_verbose_0_0) , sl };
StrCL lifted84_cl = &(r_168);
struct str_closure s_168 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(s_168);
struct str_closure t_168 = { &(pass_verbose_0_0) , sl };
StrCL lifted79_cl = &(t_168);
t = xtc_transform_2_0(sl, lifted78_cl, lifted79_cl, t);
if((t == NULL))
goto fail108 ;
{
struct str_closure u_168 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(u_168);
struct str_closure v_168 = { &(pass_verbose_0_0) , sl };
StrCL lifted81_cl = &(v_168);
t = xtc_transform_2_0(sl, lifted80_cl, lifted81_cl, t);
if((t == NULL))
goto fail108 ;
{
struct str_closure w_168 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(w_168);
t = xtc_ast2abox_1_0(sl, lifted82_cl, t);
if((t == NULL))
goto fail108 ;
t = xtc_transform_2_0(sl, lifted83_cl, lifted84_cl, t);
if((t == NULL))
goto fail108 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail108 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted82 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted82";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term159);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail112 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term157;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail111 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term155;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail110 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted83 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted83";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term153;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail109 :
--__tracing_table_counter;
return(NULL);
}
ATerm add_arg_flags_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "add_arg_flags_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm234 = t;
if(match_cons(t, sym__2))
{
ATerm trm235 = ATgetArgument(t, 0);
ATerm trm236 = ATgetArgument(t, 1);
if(!(((ATgetType(trm236) == AT_LIST) && ATisEmpty(trm236))))
goto label189 ;
}
else
goto label189 ;
t = (ATerm) ATempty;
goto label188 ;
label189 :
t = trm234;
{
ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
if(match_cons(t, sym__2))
{
e_29 = ATgetArgument(t, 0);
f_29 = ATgetArgument(t, 1);
}
else
goto fail107 ;
h_29 = t;
t = f_29;
j_29 = t;
i_29 = t;
t = (ATerm) ATmakeAppl(sym__2, e_29, i_29);
t = separate_by_0_0(sl, t);
if((t == NULL))
goto fail107 ;
g_29 = t;
t = h_29;
{
ATerm trm237;
trm237 = CheckATermList(g_29);
if((trm237 == NULL))
goto fail107 ;
t = (ATerm) ATinsert((ATermList)trm237, e_29);
goto label188 ;
}
}
label188 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail107 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_ast2abox_1_0 (StrSL sl, StrCL u_27, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_ast2abox_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, u_27);
{
struct str_closure o_168 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(o_168);
struct str_closure p_168 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(p_168);
t = xtc_transform_2_0(sl, lifted75_cl, lifted76_cl, t);
if((t == NULL))
goto fail104 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail104 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_27 = NULL,x_27 = NULL,w_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
x_27 = t;
t = term93;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail106 ;
v_27 = t;
t = x_27;
y_27 = t;
t = term93;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail106 ;
{
struct str_closure n_168 = { &(xtc_find_0_0) , sl_up(sl) };
StrCL lifted77_cl = &(n_168);
t = map_1_0(sl_up(sl), lifted77_cl, t);
if((t == NULL))
goto fail106 ;
a_28 = t;
z_27 = t;
t = (ATerm) ATmakeAppl(sym__2, term147, z_27);
t = add_arg_flags_0_0(sl_up(sl), t);
if((t == NULL))
goto fail106 ;
w_27 = t;
t = y_27;
t = (ATerm) ATmakeAppl(sym__2, v_27, w_27);
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail106 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail106 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term151;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail105 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_inject_prod_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_inject_prod_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_27 = NULL,p_27 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm226 = ATgetArgument(t, 0);
if(((ATgetType(trm226) == AT_LIST) && !(ATisEmpty(trm226))))
{
ATerm trm227 = ATgetFirst((ATermList) trm226);
if(match_cons(trm227, sym_sort_1))
{
ATerm trm228 = ATgetArgument(trm227, 0);
}
else
goto fail103 ;
{
ATerm trm229 = (ATerm) ATgetNext((ATermList) trm226);
if(!(((ATgetType(trm229) == AT_LIST) && ATisEmpty(trm229))))
goto fail103 ;
}
}
else
goto fail103 ;
{
ATerm trm230 = ATgetArgument(t, 1);
if(match_cons(trm230, sym_sort_1))
{
ATerm trm231 = ATgetArgument(trm230, 0);
}
else
goto fail103 ;
}
{
ATerm trm232 = ATgetArgument(t, 2);
if(match_cons(trm232, sym_attrs_1))
{
o_27 = ATgetArgument(trm232, 0);
}
else
goto fail103 ;
}
}
else
goto fail103 ;
p_27 = t;
t = o_27;
{
ATerm trm233 = t;
t = get_cnstr_name_0_0(sl, t);
if((t == NULL))
goto label187 ;
goto fail103 ;
label187 :
t = trm233;
goto label186 ;
label186 :
;
t = p_27;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_cnstr_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_cnstr_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_168 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(m_168);
t = fetch_elem_1_0(sl, lifted74_cl, t);
if((t == NULL))
goto fail101 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm213 = t;
ATerm k_27 = NULL;
if(match_cons(t, sym_term_1))
{
ATerm trm214 = ATgetArgument(t, 0);
if(match_cons(trm214, sym_appl_2))
{
ATerm trm215 = ATgetArgument(trm214, 0);
if(match_cons(trm215, sym_unquoted_1))
{
ATerm trm216 = ATgetArgument(trm215, 0);
if(!((ATgetSymbol(trm216) == ATmakeSymbol("cons", 0, ATtrue))))
goto label183 ;
}
else
goto label183 ;
{
ATerm trm217 = ATgetArgument(trm214, 1);
if(((ATgetType(trm217) == AT_LIST) && !(ATisEmpty(trm217))))
{
ATerm trm218 = ATgetFirst((ATermList) trm217);
if(match_cons(trm218, sym_fun_1))
{
ATerm trm219 = ATgetArgument(trm218, 0);
if(match_cons(trm219, sym_quoted_1))
{
k_27 = ATgetArgument(trm219, 0);
}
else
goto label183 ;
}
else
goto label183 ;
{
ATerm trm220 = (ATerm) ATgetNext((ATermList) trm217);
if(!(((ATgetType(trm220) == AT_LIST) && ATisEmpty(trm220))))
goto label183 ;
}
}
else
goto label183 ;
}
}
else
goto label183 ;
}
else
goto label183 ;
t = k_27;
t = un_double_quote_0_0(sl_up(sl), t);
if((t == NULL))
goto label183 ;
goto label182 ;
label183 :
t = trm213;
{
ATerm trm221 = t;
ATerm l_27 = NULL;
if(match_cons(t, sym_term_1))
{
ATerm trm222 = ATgetArgument(t, 0);
if(match_cons(trm222, sym_cons_1))
{
l_27 = ATgetArgument(trm222, 0);
}
else
goto label184 ;
}
else
goto label184 ;
t = l_27;
goto label182 ;
label184 :
t = trm221;
{
ATerm trm223 = t;
ATerm m_27 = NULL;
if(match_cons(t, sym_default_1))
{
ATerm trm224 = ATgetArgument(t, 0);
if(match_cons(trm224, sym_term_1))
{
ATerm trm225 = ATgetArgument(trm224, 0);
if(match_cons(trm225, sym_cons_1))
{
m_27 = ATgetArgument(trm225, 0);
}
else
goto label185 ;
}
else
goto label185 ;
}
else
goto label185 ;
t = m_27;
goto label182 ;
label185 :
t = trm223;
{
ATerm n_27 = NULL;
if(match_cons(t, sym_cons_1))
{
n_27 = ATgetArgument(t, 0);
}
else
goto fail102 ;
t = n_27;
goto label182 ;
}
}
}
label182 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_pp_conservative_enabled_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_pp_conservative_enabled_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_26 = NULL;
d_26 = t;
t = term127;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail100 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("on", 0, ATtrue))))
goto fail100 ;
t = d_26;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_168 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(j_168);
struct str_closure k_168 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(k_168);
struct str_closure l_168 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(l_168);
t = ArgOption_3_0(sl, lifted71_cl, lifted72_cl, lifted73_cl, t);
if((t == NULL))
goto fail96 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted73 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted73";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term149;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
a_26 = t;
c_26 = t;
b_26 = t;
t = (ATerm) ATmakeAppl(sym__2, term147, (ATerm) ATinsert(ATempty, b_26));
t = extend_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail98 ;
t = a_26;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-p", 0, ATtrue))))
goto fail97 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_config_p_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_config_p_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm212 = t;
t = term147;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label181 ;
goto label180 ;
label181 :
t = trm212;
t = (ATerm) ATempty;
goto label180 ;
label180 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp_table_get_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp_table_get_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
l_25 = t;
t = (ATerm) ATmakeAppl(sym__2, term137, l_25);
t = table_get_0_0(sl, t);
if((t == NULL))
goto fail92 ;
if(match_cons(t, sym__2))
{
n_25 = ATgetArgument(t, 0);
m_25 = ATgetArgument(t, 1);
}
else
goto fail92 ;
o_25 = t;
t = n_25;
t = path_to_string_0_0(sl, t);
if((t == NULL))
goto fail92 ;
{
struct str_closure h_168 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(h_168);
t = if_verbose5_1_0(sl, lifted69_cl, t);
if((t == NULL))
goto fail92 ;
t = o_25;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_168 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(g_168);
t = debug_1_0(sl_up(sl), lifted70_cl, t);
if((t == NULL))
goto fail93 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term145;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
ATerm MakePPTerm_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "MakePPTerm_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm206 = t;
ATerm c_161 = NULL,d_161 = NULL,e_161 = NULL;
ATerm trm207;
trm207 = (ATerm) ATgetAnnotations(t);
if((trm207 == NULL))
trm207 = (ATerm) ATempty;
if(match_cons(t, sym_Arg_1))
{
d_161 = ATgetArgument(t, 0);
}
else
goto label176 ;
c_161 = trm207;
t = d_161;
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto label176 ;
e_161 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Arg_1, e_161), c_161);
goto label175 ;
label176 :
t = trm206;
{
ATerm trm208 = t;
struct str_closure y_167 = { &(string_to_int_0_0) , sl };
StrCL lifted63_cl = &(y_167);
struct str_closure b_168 = { &(string_to_int_0_0) , sl };
StrCL lifted64_cl = &(b_168);
t = Arg2_2_0(sl, lifted63_cl, lifted64_cl, t);
if((t == NULL))
goto label177 ;
goto label175 ;
label177 :
t = trm208;
{
ATerm trm209 = t;
struct str_closure c_168 = { &(_Id) , sl };
StrCL lifted65_cl = &(c_168);
struct str_closure d_168 = { &(_Id) , sl };
StrCL lifted66_cl = &(d_168);
t = SOpt_2_0(sl, lifted65_cl, lifted66_cl, t);
if((t == NULL))
goto label178 ;
goto label175 ;
label178 :
t = trm209;
{
ATerm trm210 = t;
ATerm g_161 = NULL,h_161 = NULL,i_161 = NULL;
ATerm trm211;
trm211 = (ATerm) ATgetAnnotations(t);
if((trm211 == NULL))
trm211 = (ATerm) ATempty;
if(match_cons(t, sym_S_1))
{
h_161 = ATgetArgument(t, 0);
}
else
goto label179 ;
g_161 = trm211;
t = h_161;
t = un_double_quote_0_0(sl, t);
if((t == NULL))
goto label179 ;
t = unescape_0_0(sl, t);
if((t == NULL))
goto label179 ;
i_161 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_S_1, i_161), g_161);
goto label175 ;
label179 :
t = trm210;
{
struct str_closure e_168 = { &(string_to_int_0_0) , sl };
StrCL lifted67_cl = &(e_168);
struct str_closure f_168 = { &(_Id) , sl };
StrCL lifted68_cl = &(f_168);
t = selector_2_0(sl, lifted67_cl, lifted68_cl, t);
if((t == NULL))
goto fail91 ;
else
goto label175 ;
}
}
}
}
label175 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
ATerm path_to_string_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "path_to_string_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
ATerm trm204 = t;
if(match_cons(t, sym_Path1_1))
{
d_25 = ATgetArgument(t, 0);
}
else
goto label174 ;
t = d_25;
goto label173 ;
label174 :
t = trm204;
if(match_cons(t, sym_Path_2))
{
f_25 = ATgetArgument(t, 0);
e_25 = ATgetArgument(t, 1);
}
else
goto fail89 ;
t = e_25;
{
struct str_closure x_167 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(x_167);
t = map_1_0(sl, lifted62_cl, t);
if((t == NULL))
goto fail89 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail89 ;
g_25 = t;
{
ATerm trm205;
trm205 = CheckATermList(g_25);
if((trm205 == NULL))
goto fail89 ;
t = (ATerm) ATinsert((ATermList)trm205, f_25);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail89 ;
else
goto label173 ;
}
}
label173 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
if(match_cons(t, sym_selector_2))
{
h_25 = ATgetArgument(t, 0);
i_25 = ATgetArgument(t, 1);
}
else
goto fail90 ;
k_25 = t;
t = h_25;
t = int_to_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail90 ;
j_25 = t;
t = k_25;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_25), term141), j_25), term143);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
ATerm mk_key_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "mk_key_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL;
ATerm trm202 = t;
if(match_cons(t, sym_Path1_1))
{
v_24 = ATgetArgument(t, 0);
}
else
goto label172 ;
t = (ATerm) ATinsert(ATempty, v_24);
goto label171 ;
label172 :
t = trm202;
if(match_cons(t, sym_Path_2))
{
x_24 = ATgetArgument(t, 0);
w_24 = ATgetArgument(t, 1);
}
else
goto fail87 ;
t = w_24;
{
struct str_closure s_167 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(s_167);
t = map_1_0(sl, lifted61_cl, t);
if((t == NULL))
goto fail87 ;
y_24 = t;
{
ATerm trm203;
trm203 = CheckATermList(y_24);
if((trm203 == NULL))
goto fail87 ;
t = (ATerm) ATinsert((ATermList)trm203, x_24);
goto label171 ;
}
}
label171 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
if(match_cons(t, sym_selector_2))
{
b_25 = ATgetArgument(t, 0);
c_25 = ATgetArgument(t, 1);
}
else
goto fail88 ;
t = b_25;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
ATerm StoreEntryIfNotExists_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "StoreEntryIfNotExists_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_24 = NULL,r_24 = NULL;
if(match_cons(t, sym_PP_Entry_2))
{
r_24 = ATgetArgument(t, 0);
q_24 = ATgetArgument(t, 1);
}
else
goto fail86 ;
{
ATerm trm201 = t;
ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
s_24 = t;
u_24 = t;
t = r_24;
t = mk_key_0_0(sl, t);
if((t == NULL))
goto label170 ;
t_24 = t;
t = u_24;
t = (ATerm) ATmakeAppl(sym__2, term137, t_24);
t = table_get_0_0(sl, t);
if((t == NULL))
goto label170 ;
t = s_24;
goto label169 ;
label170 :
t = trm201;
t = StoreEntry_0_0(sl, t);
if((t == NULL))
goto fail86 ;
else
goto label169 ;
label169 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
ATerm StoreEntry_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "StoreEntry_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
struct str_closure r_167 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(r_167);
if(match_cons(t, sym_PP_Entry_2))
{
k_24 = ATgetArgument(t, 0);
l_24 = ATgetArgument(t, 1);
}
else
goto fail83 ;
n_24 = t;
t = k_24;
t = mk_key_0_0(sl, t);
if((t == NULL))
goto fail83 ;
m_24 = t;
t = n_24;
t = (ATerm) ATmakeAppl(sym__3, term137, m_24, (ATerm) ATmakeAppl(sym__2, k_24, l_24));
t = table_put_0_0(sl, t);
if((t == NULL))
goto fail83 ;
p_24 = t;
t = k_24;
t = path_to_string_0_0(sl, t);
if((t == NULL))
goto fail83 ;
o_24 = t;
t = p_24;
t = (ATerm) ATmakeAppl(sym__2, o_24, l_24);
t = if_verbose5_1_0(sl, lifted59_cl, t);
if((t == NULL))
goto fail83 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_167 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(q_167);
t = debug_1_0(sl_up(sl), lifted60_cl, t);
if((t == NULL))
goto fail84 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term139;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
ATerm read_pp_tables_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "read_pp_tables_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_24 = NULL;
struct str_closure p_167 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(p_167);
i_24 = t;
t = term137;
t = table_create_0_0(sl, t);
if((t == NULL))
goto fail77 ;
t = i_24;
t = map_1_0(sl, lifted53_cl, t);
if((t == NULL))
goto fail77 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_161 = NULL;
struct str_closure m_167 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(m_167);
struct str_closure o_167 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(o_167);
t = if_verbose5_1_0(sl_up(sl), lifted54_cl, t);
if((t == NULL))
goto fail78 ;
t = ReadFromFile_0_0(sl_up(sl), t);
if((t == NULL))
goto fail78 ;
if(match_cons(t, sym_PP_Table_1))
{
a_161 = ATgetArgument(t, 0);
}
else
goto fail78 ;
t = a_161;
t = reverse_0_0(sl_up(sl), t);
if((t == NULL))
goto fail78 ;
t = map_1_0(sl_up(sl), lifted56_cl, t);
if((t == NULL))
goto fail78 ;
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
{
struct str_closure n_167 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(n_167);
t = debug_1_0(sl_up(sl_up(sl)), lifted55_cl, t);
if((t == NULL))
goto fail81 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term135;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_167 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(l_167);
t = topdown_1_0(sl_up(sl_up(sl)), lifted57_cl, t);
if((t == NULL))
goto fail79 ;
t = StoreEntry_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail79 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_167 = { &(MakePPTerm_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted58_cl = &(k_167);
t = try_1_0(sl_up(sl_up(sl_up(sl))), lifted58_cl, t);
if((t == NULL))
goto fail80 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
ATerm flat_list_1_0 (StrSL sl, StrCL v_49, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "flat_list_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_vars(1);
sl_init_fun(0, v_49);
{
ATerm trm194 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label166 ;
t = cl_fun(v_49)(cl_sl(v_49), t);
if((t == NULL))
goto label166 ;
goto label165 ;
label166 :
t = trm194;
{
ATerm p_23 = NULL,q_23 = NULL;
sl_init_var(0, q_23);
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
p_23 = ATgetFirst((ATermList) t);
if((q_23 == NULL))
{
q_23 = (ATerm) ATgetNext((ATermList) t);
}
else
if((q_23 != (ATerm) ATgetNext((ATermList) t)))
goto fail75 ;
}
else
goto fail75 ;
{
ATerm trm195 = t;
ATerm r_23 = NULL;
r_23 = t;
t = p_23;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label167 ;
t = r_23;
{
ATerm u_23 = NULL,v_23 = NULL;
v_23 = t;
if((q_23 == NULL))
goto fail75 ;
else
{
t = q_23;
}
t = flat_list_1_0(sl, v_49, t);
if((t == NULL))
goto fail75 ;
u_23 = t;
t = v_23;
{
ATerm trm196;
trm196 = CheckATermList(u_23);
if((trm196 == NULL))
goto fail75 ;
t = (ATerm) ATinsert((ATermList)trm196, (ATerm) ATempty);
goto label165 ;
}
}
label167 :
t = trm195;
{
ATerm trm197 = t;
ATerm s_23 = NULL;
s_23 = t;
t = p_23;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm198 = ATgetFirst((ATermList) t);
ATerm trm199 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label168 ;
t = s_23;
{
struct str_closure j_167 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(j_167);
t = p_23;
t = flat_list_1_0(sl, lifted52_cl, t);
if((t == NULL))
goto fail75 ;
else
goto label165 ;
}
label168 :
t = trm197;
{
ATerm w_23 = NULL,x_23 = NULL;
x_23 = t;
if((q_23 == NULL))
goto fail75 ;
else
{
t = q_23;
}
t = flat_list_1_0(sl, v_49, t);
if((t == NULL))
goto fail75 ;
w_23 = t;
t = x_23;
{
ATerm trm200;
trm200 = CheckATermList(w_23);
if((trm200 == NULL))
goto fail75 ;
t = (ATerm) ATinsert((ATermList)trm200, p_23);
goto label165 ;
}
}
}
}
}
label165 :
;
}
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
if((sl_readvar(0, sl) == NULL))
goto fail76 ;
else
{
t = sl_readvar(0, sl);
}
t = flat_list_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail76 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
ATerm collect_p__1_0 (StrSL sl, StrCL l_23, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "collect_p__1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, l_23);
{
struct str_closure i_167 = { &(m_23) , &(frame) };
StrCL m_23_cl = &(i_167);
sl_init_fun(1, m_23_cl);
t = m_23(&(frame), t);
if((t == NULL))
goto fail72 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm m_23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "m_23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm193 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label164 ;
{
ATerm n_23 = NULL,o_23 = NULL;
o_23 = t;
n_23 = t;
t = (ATerm) ATinsert(ATempty, n_23);
goto label163 ;
}
label164 :
t = trm193;
{
struct str_closure g_167 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(g_167);
struct str_closure h_167 = { &(conc_0_0) , sl_up(sl) };
StrCL lifted51_cl = &(h_167);
t = crush_3_0(sl_up(sl), lifted50_cl, lifted51_cl, sl_fun_cl(1, sl), t);
if((t == NULL))
goto fail73 ;
else
goto label163 ;
}
label163 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
ATerm instantiate_sep_list_0_1 (StrSL sl, ATerm z_22, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "instantiate_sep_list_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, z_22);
t = i_23(&(frame), t);
if((t == NULL))
goto fail70 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm i_23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "i_23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL;
ATerm trm186 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label161 ;
goto label160 ;
label161 :
t = trm186;
{
ATerm trm187 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm188 = ATgetFirst((ATermList) t);
ATerm trm189 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm189) == AT_LIST) && ATisEmpty(trm189))))
goto label162 ;
}
else
goto label162 ;
goto label160 ;
label162 :
t = trm187;
{
ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,j_23 = NULL,k_23 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
a_23 = ATgetFirst((ATermList) t);
{
ATerm trm190 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm190) == AT_LIST) && !(ATisEmpty(trm190))))
{
b_23 = ATgetFirst((ATermList) trm190);
c_23 = (ATerm) ATgetNext((ATermList) trm190);
}
else
goto fail71 ;
}
}
else
goto fail71 ;
{
ATerm trm191;
trm191 = (ATerm) ATgetAnnotations(t);
if((trm191 == NULL))
trm191 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
d_23 = ATgetFirst((ATermList) t);
e_23 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail71 ;
h_23 = trm191;
t = d_23;
if((sl_readvar(0, sl) == NULL))
goto fail71 ;
else
{
t = sl_readvar(0, sl);
}
k_23 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, b_23), a_23);
j_23 = t;
t = k_23;
t = instantiate_0_1(sl_up(sl), j_23, t);
if((t == NULL))
goto fail71 ;
f_23 = t;
t = e_23;
t = c_23;
t = i_23(sl, t);
if((t == NULL))
goto fail71 ;
g_23 = t;
{
ATerm trm192;
trm192 = CheckATermList(g_23);
if((trm192 == NULL))
goto fail71 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm192, f_23), h_23);
goto label160 ;
}
}
}
}
label160 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
ATerm instantiate_list_0_1 (StrSL sl, ATerm o_22, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "instantiate_list_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, o_22);
t = w_22(&(frame), t);
if((t == NULL))
goto fail68 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm w_22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "w_22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_22 = NULL,q_22 = NULL;
ATerm trm183 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label159 ;
goto label158 ;
label159 :
t = trm183;
{
ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,x_22 = NULL,y_22 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
p_22 = ATgetFirst((ATermList) t);
q_22 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail69 ;
{
ATerm trm184;
trm184 = (ATerm) ATgetAnnotations(t);
if((trm184 == NULL))
trm184 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
r_22 = ATgetFirst((ATermList) t);
s_22 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail69 ;
v_22 = trm184;
t = r_22;
if((sl_readvar(0, sl) == NULL))
goto fail69 ;
else
{
t = sl_readvar(0, sl);
}
y_22 = t;
t = (ATerm) ATinsert(ATempty, p_22);
x_22 = t;
t = y_22;
t = instantiate_0_1(sl_up(sl), x_22, t);
if((t == NULL))
goto fail69 ;
t_22 = t;
t = s_22;
t = q_22;
t = w_22(sl, t);
if((t == NULL))
goto fail69 ;
u_22 = t;
{
ATerm trm185;
trm185 = CheckATermList(u_22);
if((trm185 == NULL))
goto fail69 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm185, t_22), v_22);
goto label158 ;
}
}
}
label158 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
ATerm SlowInstantiate_0_1 (StrSL sl, ATerm u_49, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "SlowInstantiate_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm182 = t;
ATerm n_22 = NULL;
if(match_cons(t, sym_Arg_1))
{
n_22 = ATgetArgument(t, 0);
}
else
goto label157 ;
t = u_49;
t = index_0_1(sl, n_22, t);
if((t == NULL))
goto label157 ;
goto label156 ;
label157 :
t = trm182;
{
ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL;
if(match_cons(t, sym_Arg2_2))
{
j_22 = ATgetArgument(t, 0);
i_22 = ATgetArgument(t, 1);
}
else
goto fail67 ;
l_22 = t;
t = u_49;
t = index_0_1(sl, j_22, t);
if((t == NULL))
goto fail67 ;
k_22 = t;
t = l_22;
t = k_22;
t = index_0_1(sl, i_22, t);
if((t == NULL))
goto fail67 ;
else
goto label156 ;
}
label156 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
ATerm FastInstantiate_0_1 (StrSL sl, ATerm t_49, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "FastInstantiate_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm168 = t;
ATerm f_22 = NULL,g_22 = NULL;
if(match_cons(t, sym_Arg_1))
{
ATerm trm169 = ATgetArgument(t, 0);
if(!(((ATgetType(trm169) == AT_INT) && (ATgetInt((ATermInt) trm169) == 1))))
goto label154 ;
}
else
goto label154 ;
g_22 = t;
t = t_49;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
f_22 = ATgetFirst((ATermList) t);
{
ATerm trm170 = (ATerm) ATgetNext((ATermList) t);
}
}
else
goto label154 ;
t = g_22;
t = f_22;
goto label153 ;
label154 :
t = trm168;
{
ATerm trm171 = t;
ATerm c_22 = NULL,d_22 = NULL;
if(match_cons(t, sym_Arg_1))
{
ATerm trm172 = ATgetArgument(t, 0);
if(!(((ATgetType(trm172) == AT_INT) && (ATgetInt((ATermInt) trm172) == 2))))
goto label155 ;
}
else
goto label155 ;
d_22 = t;
t = t_49;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm173 = ATgetFirst((ATermList) t);
ATerm trm174 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm174) == AT_LIST) && !(ATisEmpty(trm174))))
{
c_22 = ATgetFirst((ATermList) trm174);
{
ATerm trm175 = (ATerm) ATgetNext((ATermList) trm174);
}
}
else
goto label155 ;
}
else
goto label155 ;
t = d_22;
t = c_22;
goto label153 ;
label155 :
t = trm171;
{
ATerm z_21 = NULL,a_22 = NULL;
if(match_cons(t, sym_Arg_1))
{
ATerm trm176 = ATgetArgument(t, 0);
if(!(((ATgetType(trm176) == AT_INT) && (ATgetInt((ATermInt) trm176) == 3))))
goto fail66 ;
}
else
goto fail66 ;
a_22 = t;
t = t_49;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm177 = ATgetFirst((ATermList) t);
ATerm trm178 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm178) == AT_LIST) && !(ATisEmpty(trm178))))
{
ATerm trm179 = ATgetFirst((ATermList) trm178);
ATerm trm180 = (ATerm) ATgetNext((ATermList) trm178);
if(((ATgetType(trm180) == AT_LIST) && !(ATisEmpty(trm180))))
{
z_21 = ATgetFirst((ATermList) trm180);
{
ATerm trm181 = (ATerm) ATgetNext((ATermList) trm180);
}
}
else
goto fail66 ;
}
else
goto fail66 ;
}
else
goto fail66 ;
t = a_22;
t = z_21;
goto label153 ;
}
}
label153 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
ATerm Instantiate_0_1 (StrSL sl, ATerm x_21, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Instantiate_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm167 = t;
t = FastInstantiate_0_1(sl, x_21, t);
if((t == NULL))
goto label152 ;
goto label151 ;
label152 :
t = trm167;
t = SlowInstantiate_0_1(sl, x_21, t);
if((t == NULL))
goto fail65 ;
else
goto label151 ;
label151 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
ATerm instantiate_0_1 (StrSL sl, ATerm w_21, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "instantiate_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, w_21);
{
struct str_closure f_167 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(f_167);
t = bottomup_1_0(sl, lifted47_cl, t);
if((t == NULL))
goto fail61 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_167 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(e_167);
t = try_1_0(sl_up(sl), lifted48_cl, t);
if((t == NULL))
goto fail62 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm159 = t;
ATerm x_160 = NULL,y_160 = NULL;
if(match_cons(t, sym_Arg_1))
{
ATerm trm160 = ATgetArgument(t, 0);
}
else
goto label147 ;
y_160 = t;
if((sl_readvar(0, sl_up(sl)) == NULL))
goto label147 ;
else
{
t = sl_readvar(0, sl_up(sl));
}
x_160 = t;
t = y_160;
{
ATerm trm161 = t;
t = FastInstantiate_0_1(sl_up(sl_up(sl)), x_160, t);
if((t == NULL))
goto label149 ;
goto label148 ;
label149 :
t = trm161;
t = SlowInstantiate_0_1(sl_up(sl_up(sl)), x_160, t);
if((t == NULL))
goto label147 ;
else
goto label148 ;
label148 :
;
}
goto label146 ;
label147 :
t = trm159;
{
ATerm trm162 = t;
if(match_cons(t, sym_Arg2_2))
{
ATerm trm163 = ATgetArgument(t, 0);
ATerm trm164 = ATgetArgument(t, 1);
}
else
goto label150 ;
if((sl_readvar(0, sl_up(sl)) == NULL))
goto label150 ;
else
{
t = Instantiate_0_1(sl_up(sl_up(sl)), sl_readvar(0, sl_up(sl)), t);
if((t == NULL))
goto label150 ;
}
goto label146 ;
label150 :
t = trm162;
{
struct str_closure d_167 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(d_167);
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm165 = ATgetFirst((ATermList) t);
ATerm trm166 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail63 ;
t = flat_list_1_0(sl_up(sl_up(sl)), lifted49_cl, t);
if((t == NULL))
goto fail63 ;
else
goto label146 ;
}
}
label146 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
ATerm instantiate_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "instantiate_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_21 = NULL,v_21 = NULL;
if(match_cons(t, sym__2))
{
u_21 = ATgetArgument(t, 0);
v_21 = ATgetArgument(t, 1);
}
else
goto fail60 ;
t = u_21;
t = instantiate_0_1(sl, v_21, t);
if((t == NULL))
goto fail60 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
ATerm layout2box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "layout2box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_21 = NULL;
if(match_cons(t, sym_layout_1))
{
o_21 = ATgetArgument(t, 0);
}
else
goto fail59 ;
{
ATerm trm158 = t;
ATerm p_21 = NULL;
p_21 = t;
t = has_significant_layout_0_0(sl, t);
if((t == NULL))
goto label145 ;
t = p_21;
{
ATerm q_21 = NULL,r_21 = NULL;
r_21 = t;
t = o_21;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail59 ;
q_21 = t;
t = r_21;
t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, q_21)));
goto label144 ;
}
label145 :
t = trm158;
{
ATerm s_21 = NULL,t_21 = NULL;
t_21 = t;
t = o_21;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail59 ;
s_21 = t;
t = t_21;
t = (ATerm) ATmakeAppl(sym_S_1, s_21);
goto label144 ;
}
label144 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
ATerm has_significant_layout_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "has_significant_layout_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_21 = NULL,n_21 = NULL;
m_21 = t;
{
ATerm trm151 = t;
ATerm t_160 = NULL,u_160 = NULL,v_160 = NULL;
ATerm trm152;
trm152 = (ATerm) ATgetAnnotations(t);
if((trm152 == NULL))
trm152 = (ATerm) ATempty;
if(match_cons(t, sym_layout_1))
{
u_160 = ATgetArgument(t, 0);
}
else
goto label135 ;
t_160 = trm152;
t = u_160;
if(!(match_cons(t, sym_layout_place_holder_0)))
goto label135 ;
v_160 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_layout_1, v_160), t_160);
goto fail57 ;
label135 :
t = trm151;
goto label134 ;
label134 :
;
if(match_cons(t, sym_layout_1))
{
n_21 = ATgetArgument(t, 0);
}
else
goto fail57 ;
t = n_21;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail57 ;
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail57 ;
{
struct str_closure c_167 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(c_167);
t = filter_1_0(sl, lifted46_cl, t);
if((t == NULL))
goto fail57 ;
{
ATerm trm157 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label143 ;
goto fail57 ;
label143 :
t = trm157;
goto label142 ;
label142 :
;
t = m_21;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm153 = t;
ATerm trm154 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 9))))
goto label139 ;
goto label138 ;
label139 :
t = trm154;
{
ATerm trm155 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 10))))
goto label140 ;
goto label138 ;
label140 :
t = trm155;
{
ATerm trm156 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 13))))
goto label141 ;
goto label138 ;
label141 :
t = trm156;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 32)))
goto label138 ;
else
goto label137 ;
}
}
label138 :
;
goto fail58 ;
label137 :
t = trm153;
goto label136 ;
label136 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
ATerm InsLayout_1_0 (StrSL sl, StrCL g_21, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "InsLayout_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, g_21);
t = h_21(&(frame), t);
if((t == NULL))
goto fail54 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm h_21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "h_21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
ATerm trm134 = t;
struct str_closure a_167 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(a_167);
struct str_closure b_167 = { &(_Id) , sl_up(sl) };
StrCL lifted45_cl = &(b_167);
t = _2_0(sl_up(sl), lifted44_cl, lifted45_cl, t);
if((t == NULL))
goto label126 ;
goto label125 ;
label126 :
t = trm134;
{
ATerm trm135 = t;
if(match_cons(t, sym__2))
{
ATerm trm136 = ATgetArgument(t, 0);
if(((ATgetType(trm136) == AT_LIST) && !(ATisEmpty(trm136))))
{
v_20 = ATgetFirst((ATermList) trm136);
{
ATerm trm137 = (ATerm) ATgetNext((ATermList) trm136);
if(!(((ATgetType(trm137) == AT_LIST) && ATisEmpty(trm137))))
goto label127 ;
}
}
else
goto label127 ;
b_21 = ATgetArgument(t, 1);
}
else
goto label127 ;
t = (ATerm) ATmakeAppl(sym__2, v_20, b_21);
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label127 ;
if(match_cons(t, sym__2))
{
w_20 = ATgetArgument(t, 0);
c_21 = ATgetArgument(t, 1);
}
else
goto label127 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, w_20), c_21);
goto label125 ;
label127 :
t = trm135;
if(match_cons(t, sym__2))
{
ATerm trm138 = ATgetArgument(t, 0);
if(((ATgetType(trm138) == AT_LIST) && !(ATisEmpty(trm138))))
{
v_20 = ATgetFirst((ATermList) trm138);
{
ATerm trm139 = (ATerm) ATgetNext((ATermList) trm138);
if(((ATgetType(trm139) == AT_LIST) && !(ATisEmpty(trm139))))
{
y_20 = ATgetFirst((ATermList) trm139);
a_21 = (ATerm) ATgetNext((ATermList) trm139);
}
else
goto fail55 ;
}
}
else
goto fail55 ;
b_21 = ATgetArgument(t, 1);
}
else
goto fail55 ;
t = (ATerm) ATmakeAppl(sym__2, v_20, b_21);
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail55 ;
if(match_cons(t, sym__2))
{
w_20 = ATgetArgument(t, 0);
{
ATerm trm140 = ATgetArgument(t, 1);
if(((ATgetType(trm140) == AT_LIST) && !(ATisEmpty(trm140))))
{
x_20 = ATgetFirst((ATermList) trm140);
c_21 = (ATerm) ATgetNext((ATermList) trm140);
}
else
goto fail55 ;
}
}
else
goto fail55 ;
{
ATerm trm141;
trm141 = CheckATermList(a_21);
if((trm141 == NULL))
goto fail55 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert((ATermList)trm141, y_20), c_21);
t = h_21(sl, t);
if((t == NULL))
goto fail55 ;
if(match_cons(t, sym__2))
{
ATerm trm142 = ATgetArgument(t, 0);
if(((ATgetType(trm142) == AT_LIST) && !(ATisEmpty(trm142))))
{
z_20 = ATgetFirst((ATermList) trm142);
e_21 = (ATerm) ATgetNext((ATermList) trm142);
}
else
goto fail55 ;
d_21 = ATgetArgument(t, 1);
}
else
goto fail55 ;
{
ATerm trm143 = t;
ATerm i_21 = NULL,j_21 = NULL,h_160 = NULL;
h_160 = t;
t = term127;
t = get_config_0_0(sl_up(sl), t);
if((t == NULL))
goto label128 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("on", 0, ATtrue))))
goto label128 ;
t = h_160;
t = x_20;
{
ATerm trm144 = t;
ATerm j_160 = NULL,k_160 = NULL,l_160 = NULL;
ATerm trm145;
trm145 = (ATerm) ATgetAnnotations(t);
if((trm145 == NULL))
trm145 = (ATerm) ATempty;
if(match_cons(t, sym_layout_1))
{
k_160 = ATgetArgument(t, 0);
}
else
goto label130 ;
j_160 = trm145;
t = k_160;
if(!(match_cons(t, sym_layout_place_holder_0)))
goto label130 ;
l_160 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_layout_1, l_160), j_160);
goto label128 ;
label130 :
t = trm144;
goto label129 ;
label129 :
;
j_21 = t;
t = x_20;
t = layout2box_0_0(sl_up(sl), t);
if((t == NULL))
goto label128 ;
i_21 = t;
t = j_21;
{
ATerm trm146;
trm146 = CheckATermList(e_21);
if((trm146 == NULL))
goto label128 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert((ATermList)trm146, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term133), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, z_20))), i_21), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_20))))), d_21);
}
}
goto label125 ;
label128 :
t = trm143;
{
ATerm trm147 = t;
ATerm k_21 = NULL,l_21 = NULL;
ATerm trm148 = t;
t = is_pp_conservative_enabled_0_0(sl_up(sl), t);
if((t == NULL))
goto label133 ;
goto label131 ;
label133 :
t = trm148;
goto label132 ;
label132 :
;
t = x_20;
t = has_significant_layout_0_0(sl_up(sl), t);
if((t == NULL))
goto label131 ;
l_21 = t;
t = x_20;
t = layout2box_0_0(sl_up(sl), t);
if((t == NULL))
goto label131 ;
k_21 = t;
t = l_21;
{
ATerm trm149;
trm149 = CheckATermList(e_21);
if((trm149 == NULL))
goto label131 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert((ATermList)trm149, z_20), k_21), w_20), d_21);
}
goto label125 ;
label131 :
t = trm147;
{
ATerm trm150;
trm150 = CheckATermList(e_21);
if((trm150 == NULL))
goto fail55 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert((ATermList)trm150, z_20), w_20), d_21);
goto label125 ;
}
}
}
}
}
label125 :
;
}
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
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail56 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
ATerm insert_layout_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "insert_layout_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_vars(1);
{
ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
sl_init_var(0, c_20);
{
struct str_closure g_166 = { &(_Id) , sl };
StrCL lifted32_cl = &(g_166);
struct str_closure h_166 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(h_166);
t = _2_0(sl, lifted32_cl, lifted33_cl, t);
if((t == NULL))
goto fail45 ;
{
struct str_closure k_166 = { &(u_20) , &(frame) };
StrCL u_20_cl = &(k_166);
sl_init_fun(0, u_20_cl);
t = u_20(&(frame), t);
if((t == NULL))
goto fail45 ;
{
struct str_closure q_166 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(q_166);
struct str_closure r_166 = { &(_Id) , sl };
StrCL lifted38_cl = &(r_166);
t = _2_0(sl, lifted36_cl, lifted38_cl, t);
if((t == NULL))
goto fail45 ;
if(match_cons(t, sym__2))
{
d_20 = ATgetArgument(t, 0);
{
ATerm trm125 = ATgetArgument(t, 1);
if(((ATgetType(trm125) == AT_LIST) && !(ATisEmpty(trm125))))
{
e_20 = ATgetFirst((ATermList) trm125);
b_20 = (ATerm) ATgetNext((ATermList) trm125);
}
else
goto fail45 ;
}
}
else
goto fail45 ;
if((c_20 == NULL))
goto fail45 ;
else
{
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_20), d_20), c_20);
}
{
struct str_closure x_166 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(x_166);
t = filter_1_0(sl, lifted39_cl, t);
if((t == NULL))
goto fail45 ;
{
struct str_closure y_166 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(y_166);
t = flat_list_1_0(sl, lifted43_cl, t);
if((t == NULL))
goto fail45 ;
{
ATerm trm132 = t;
ATerm s_20 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
s_20 = ATgetFirst((ATermList) t);
{
ATerm trm133 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm133) == AT_LIST) && ATisEmpty(trm133))))
goto label124 ;
}
}
else
goto label124 ;
t = s_20;
goto label123 ;
label124 :
t = trm132;
{
ATerm t_20 = NULL;
t_20 = t;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term133), t_20);
goto label123 ;
}
label123 :
;
}
}
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
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
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm126 = t;
ATerm trm127 = t;
ATerm b_160 = NULL,c_160 = NULL,e_160 = NULL;
ATerm trm128;
trm128 = (ATerm) ATgetAnnotations(t);
if((trm128 == NULL))
trm128 = (ATerm) ATempty;
if(match_cons(t, sym_layout_1))
{
c_160 = ATgetArgument(t, 0);
}
else
goto label117 ;
b_160 = trm128;
t = c_160;
e_160 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_layout_1, e_160), b_160);
goto label115 ;
label117 :
t = trm127;
goto label116 ;
label116 :
;
goto label114 ;
label115 :
t = trm126;
{
ATerm trm129 = t;
ATerm g_160 = NULL;
struct str_closure s_166 = { &(_Id) , sl_up(sl) };
StrCL lifted40_cl = &(s_166);
t = layout_1_0(sl_up(sl), lifted40_cl, t);
if((t == NULL))
goto label118 ;
g_160 = t;
t = term127;
t = get_config_0_0(sl_up(sl), t);
if((t == NULL))
goto label118 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("on", 0, ATtrue))))
goto label118 ;
t = g_160;
{
ATerm trm130 = t;
struct str_closure t_166 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(t_166);
t = layout_1_0(sl_up(sl), lifted41_cl, t);
if((t == NULL))
goto label120 ;
goto label118 ;
label120 :
t = trm130;
goto label119 ;
label119 :
;
t = layout2box_0_0(sl_up(sl), t);
if((t == NULL))
goto label118 ;
}
goto label114 ;
label118 :
t = trm129;
{
struct str_closure u_166 = { &(_Id) , sl_up(sl) };
StrCL lifted42_cl = &(u_166);
t = layout_1_0(sl_up(sl), lifted42_cl, t);
if((t == NULL))
goto fail51 ;
{
ATerm trm131 = t;
t = is_pp_conservative_enabled_0_0(sl_up(sl), t);
if((t == NULL))
goto label122 ;
goto fail51 ;
label122 :
t = trm131;
goto label121 ;
label121 :
;
t = has_significant_layout_0_0(sl_up(sl), t);
if((t == NULL))
goto fail51 ;
t = layout2box_0_0(sl_up(sl), t);
if((t == NULL))
goto fail51 ;
else
goto label114 ;
}
}
}
label114 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_layout_place_holder_0)))
goto fail52 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_166 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(p_166);
t = try_1_0(sl_up(sl), lifted37_cl, t);
if((t == NULL))
goto fail49 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_20 = NULL;
t = is_list_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail50 ;
r_20 = t;
t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, r_20);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm u_20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "u_20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
ATerm trm102 = t;
if(match_cons(t, sym__2))
{
ATerm trm103 = ATgetArgument(t, 0);
if(match_cons(trm103, sym_H_2))
{
f_20 = ATgetArgument(trm103, 0);
h_20 = ATgetArgument(trm103, 1);
}
else
goto label103 ;
i_20 = ATgetArgument(t, 1);
}
else
goto label103 ;
t = (ATerm) ATmakeAppl(sym__2, h_20, i_20);
t = InsLayout_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label103 ;
if(match_cons(t, sym__2))
{
j_20 = ATgetArgument(t, 0);
k_20 = ATgetArgument(t, 1);
}
else
goto label103 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, f_20, j_20), k_20);
goto label102 ;
label103 :
t = trm102;
{
ATerm trm104 = t;
if(match_cons(t, sym__2))
{
ATerm trm105 = ATgetArgument(t, 0);
if(match_cons(trm105, sym_HV_2))
{
f_20 = ATgetArgument(trm105, 0);
h_20 = ATgetArgument(trm105, 1);
}
else
goto label104 ;
i_20 = ATgetArgument(t, 1);
}
else
goto label104 ;
t = (ATerm) ATmakeAppl(sym__2, h_20, i_20);
t = InsLayout_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label104 ;
if(match_cons(t, sym__2))
{
j_20 = ATgetArgument(t, 0);
k_20 = ATgetArgument(t, 1);
}
else
goto label104 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, f_20, j_20), k_20);
goto label102 ;
label104 :
t = trm104;
{
ATerm trm106 = t;
if(match_cons(t, sym__2))
{
ATerm trm107 = ATgetArgument(t, 0);
if(match_cons(trm107, sym_V_2))
{
f_20 = ATgetArgument(trm107, 0);
h_20 = ATgetArgument(trm107, 1);
}
else
goto label105 ;
i_20 = ATgetArgument(t, 1);
}
else
goto label105 ;
t = (ATerm) ATmakeAppl(sym__2, h_20, i_20);
t = InsLayout_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label105 ;
if(match_cons(t, sym__2))
{
j_20 = ATgetArgument(t, 0);
k_20 = ATgetArgument(t, 1);
}
else
goto label105 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, f_20, j_20), k_20);
goto label102 ;
label105 :
t = trm106;
{
ATerm trm108 = t;
if(match_cons(t, sym__2))
{
ATerm trm109 = ATgetArgument(t, 0);
if(match_cons(trm109, sym_A_3))
{
f_20 = ATgetArgument(trm109, 0);
g_20 = ATgetArgument(trm109, 1);
h_20 = ATgetArgument(trm109, 2);
}
else
goto label106 ;
i_20 = ATgetArgument(t, 1);
}
else
goto label106 ;
t = (ATerm) ATmakeAppl(sym__2, h_20, i_20);
t = InsLayout_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label106 ;
if(match_cons(t, sym__2))
{
j_20 = ATgetArgument(t, 0);
k_20 = ATgetArgument(t, 1);
}
else
goto label106 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, f_20, g_20, j_20), k_20);
goto label102 ;
label106 :
t = trm108;
{
ATerm trm110 = t;
if(match_cons(t, sym__2))
{
ATerm trm111 = ATgetArgument(t, 0);
if(match_cons(trm111, sym_R_2))
{
f_20 = ATgetArgument(trm111, 0);
h_20 = ATgetArgument(trm111, 1);
}
else
goto label107 ;
i_20 = ATgetArgument(t, 1);
}
else
goto label107 ;
t = (ATerm) ATmakeAppl(sym__2, h_20, i_20);
t = InsLayout_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label107 ;
if(match_cons(t, sym__2))
{
j_20 = ATgetArgument(t, 0);
k_20 = ATgetArgument(t, 1);
}
else
goto label107 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, f_20, j_20), k_20);
goto label102 ;
label107 :
t = trm110;
{
ATerm trm112 = t;
if(match_cons(t, sym__2))
{
ATerm trm113 = ATgetArgument(t, 0);
if(match_cons(trm113, sym_ALT_2))
{
f_20 = ATgetArgument(trm113, 0);
h_20 = ATgetArgument(trm113, 1);
}
else
goto label108 ;
i_20 = ATgetArgument(t, 1);
}
else
goto label108 ;
t = (ATerm) ATmakeAppl(sym__2, f_20, i_20);
t = InsLayout_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label108 ;
if(match_cons(t, sym__2))
{
g_20 = ATgetArgument(t, 0);
k_20 = ATgetArgument(t, 1);
}
else
goto label108 ;
t = (ATerm) ATmakeAppl(sym__2, h_20, i_20);
t = InsLayout_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label108 ;
if(match_cons(t, sym__2))
{
j_20 = ATgetArgument(t, 0);
l_20 = ATgetArgument(t, 1);
}
else
goto label108 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, g_20, j_20), l_20);
goto label102 ;
label108 :
t = trm112;
{
ATerm trm114 = t;
if(match_cons(t, sym__2))
{
ATerm trm115 = ATgetArgument(t, 0);
if(match_cons(trm115, sym_LBL_2))
{
f_20 = ATgetArgument(trm115, 0);
h_20 = ATgetArgument(trm115, 1);
}
else
goto label109 ;
i_20 = ATgetArgument(t, 1);
}
else
goto label109 ;
t = (ATerm) ATmakeAppl(sym__2, h_20, i_20);
t = InsLayout_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label109 ;
if(match_cons(t, sym__2))
{
j_20 = ATgetArgument(t, 0);
k_20 = ATgetArgument(t, 1);
}
else
goto label109 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, f_20, j_20), k_20);
goto label102 ;
label109 :
t = trm114;
{
ATerm trm116 = t;
if(match_cons(t, sym__2))
{
ATerm trm117 = ATgetArgument(t, 0);
if(match_cons(trm117, sym_REF_2))
{
f_20 = ATgetArgument(trm117, 0);
h_20 = ATgetArgument(trm117, 1);
}
else
goto label110 ;
i_20 = ATgetArgument(t, 1);
}
else
goto label110 ;
t = (ATerm) ATmakeAppl(sym__2, h_20, i_20);
t = InsLayout_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label110 ;
if(match_cons(t, sym__2))
{
j_20 = ATgetArgument(t, 0);
k_20 = ATgetArgument(t, 1);
}
else
goto label110 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, f_20, j_20), k_20);
goto label102 ;
label110 :
t = trm116;
{
ATerm trm118 = t;
if(match_cons(t, sym__2))
{
ATerm trm119 = ATgetArgument(t, 0);
if(match_cons(trm119, sym_L_2))
{
f_20 = ATgetArgument(trm119, 0);
h_20 = ATgetArgument(trm119, 1);
}
else
goto label111 ;
i_20 = ATgetArgument(t, 1);
}
else
goto label111 ;
t = (ATerm) ATmakeAppl(sym__2, h_20, i_20);
t = InsLayout_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label111 ;
if(match_cons(t, sym__2))
{
j_20 = ATgetArgument(t, 0);
k_20 = ATgetArgument(t, 1);
}
else
goto label111 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, f_20, j_20), k_20);
goto label102 ;
label111 :
t = trm118;
{
ATerm trm120 = t;
if(match_cons(t, sym__2))
{
ATerm trm121 = ATgetArgument(t, 0);
if(match_cons(trm121, sym_LNAT_2))
{
f_20 = ATgetArgument(trm121, 0);
h_20 = ATgetArgument(trm121, 1);
}
else
goto label112 ;
i_20 = ATgetArgument(t, 1);
}
else
goto label112 ;
t = (ATerm) ATmakeAppl(sym__2, h_20, i_20);
t = InsLayout_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label112 ;
if(match_cons(t, sym__2))
{
j_20 = ATgetArgument(t, 0);
k_20 = ATgetArgument(t, 1);
}
else
goto label112 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, f_20, j_20), k_20);
goto label102 ;
label112 :
t = trm120;
{
ATerm trm122 = t;
struct str_closure i_166 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(i_166);
struct str_closure j_166 = { &(_Id) , sl_up(sl) };
StrCL lifted35_cl = &(j_166);
t = _2_0(sl_up(sl), lifted34_cl, lifted35_cl, t);
if((t == NULL))
goto label113 ;
t = InsLayout_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label113 ;
goto label102 ;
label113 :
t = trm122;
goto label102 ;
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
label102 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
ATerm trm123;
trm123 = (ATerm) ATgetAnnotations(t);
if((trm123 == NULL))
trm123 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
m_20 = ATgetFirst((ATermList) t);
n_20 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail48 ;
q_20 = trm123;
t = m_20;
o_20 = t;
t = n_20;
p_20 = t;
{
ATerm trm124;
trm124 = CheckATermList(p_20);
if((trm124 == NULL))
goto fail48 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm124, o_20), q_20);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetFirst((ATermList) t);
}
else
if((sl_readvar(0, sl) != ATgetFirst((ATermList) t)))
goto fail46 ;
{
ATerm trm101 = (ATerm) ATgetNext((ATermList) t);
}
}
else
goto fail46 ;
t = Tl_0_0(sl_up(sl), t);
if((t == NULL))
goto fail46 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
ATerm uq2q_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "uq2q_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_125 = NULL,m_125 = NULL,z_19 = NULL,a_20 = NULL;
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail43 ;
l_125 = t;
{
ATerm trm97 = t;
t = Hd_0_0(sl, t);
if((t == NULL))
goto label99 ;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 34))))
goto label99 ;
goto fail43 ;
label99 :
t = trm97;
goto label98 ;
label98 :
;
t = l_125;
m_125 = t;
{
ATerm trm98 = t;
struct str_closure f_166 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(f_166);
t = at_last_1_0(sl, lifted31_cl, t);
if((t == NULL))
goto label101 ;
goto fail43 ;
label101 :
t = trm98;
goto label100 ;
label100 :
;
t = m_125;
a_20 = t;
z_19 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term125)), z_19), (ATerm) ATinsert(ATempty, term125));
t = concat_0_0(sl, t);
if((t == NULL))
goto fail43 ;
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail43 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm99 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm99) == AT_INT) && (ATgetInt((ATermInt) trm99) == 34))))
goto fail44 ;
{
ATerm trm100 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm100) == AT_LIST) && ATisEmpty(trm100))))
goto fail44 ;
}
}
else
goto fail44 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
ATerm add_attributes_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "add_attributes_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm92 = t;
ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm93 = ATgetArgument(t, 0);
if(match_cons(trm93, sym_prod_3))
{
w_19 = ATgetArgument(trm93, 0);
x_19 = ATgetArgument(trm93, 1);
{
ATerm trm94 = ATgetArgument(trm93, 2);
if(!(match_cons(trm94, sym_no_attrs_0)))
goto label97 ;
}
}
else
goto label97 ;
y_19 = ATgetArgument(t, 1);
}
else
goto label97 ;
t = (ATerm) ATmakeAppl(sym_prod_3, w_19, x_19, (ATerm) ATmakeAppl(sym_attrs_1, y_19));
goto label96 ;
label97 :
t = trm92;
{
ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm95 = ATgetArgument(t, 0);
if(match_cons(trm95, sym_prod_3))
{
q_19 = ATgetArgument(trm95, 0);
r_19 = ATgetArgument(trm95, 1);
{
ATerm trm96 = ATgetArgument(trm95, 2);
if(match_cons(trm96, sym_attrs_1))
{
s_19 = ATgetArgument(trm96, 0);
}
else
goto fail42 ;
}
}
else
goto fail42 ;
t_19 = ATgetArgument(t, 1);
}
else
goto fail42 ;
v_19 = t;
t = (ATerm) ATmakeAppl(sym__2, s_19, t_19);
t = conc_0_0(sl, t);
if((t == NULL))
goto fail42 ;
u_19 = t;
t = v_19;
t = (ATerm) ATmakeAppl(sym_prod_3, q_19, r_19, (ATerm) ATmakeAppl(sym_attrs_1, u_19));
goto label96 ;
}
label96 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_reject_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_reject_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
if(match_cons(t, sym_prod_3))
{
m_19 = ATgetArgument(t, 0);
n_19 = ATgetArgument(t, 1);
o_19 = ATgetArgument(t, 2);
}
else
goto fail40 ;
p_19 = t;
t = o_19;
{
struct str_closure e_166 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(e_166);
t = oncetd_1_0(sl, lifted30_cl, t);
if((t == NULL))
goto fail40 ;
t = p_19;
t = term93;
}
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
if(!(match_cons(t, sym_reject_0)))
goto fail41 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_bracket_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_bracket_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
if(match_cons(t, sym_prod_3))
{
i_19 = ATgetArgument(t, 0);
j_19 = ATgetArgument(t, 1);
k_19 = ATgetArgument(t, 2);
}
else
goto fail38 ;
l_19 = t;
t = k_19;
{
struct str_closure d_166 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(d_166);
t = oncetd_1_0(sl, lifted29_cl, t);
if((t == NULL))
goto fail38 ;
t = l_19;
t = term93;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_bracket_0)))
goto fail39 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_constr_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_constr_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
sl_init_var(0, b_19);
if(match_cons(t, sym_prod_3))
{
y_18 = ATgetArgument(t, 0);
z_18 = ATgetArgument(t, 1);
a_19 = ATgetArgument(t, 2);
}
else
goto fail36 ;
c_19 = t;
t = a_19;
{
struct str_closure c_166 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(c_166);
t = oncetd_1_0(sl, lifted28_cl, t);
if((t == NULL))
goto fail36 ;
t = c_19;
if((b_19 == NULL))
goto fail36 ;
else
{
t = b_19;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail37 ;
}
else
goto fail37 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
ATerm syntaxless_sort_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "syntaxless_sort_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure b_166 = { &(x_18) , &(frame) };
StrCL x_18_cl = &(b_166);
sl_init_fun(0, x_18_cl);
t = x_18(&(frame), t);
if((t == NULL))
goto fail34 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm x_18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "x_18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm82 = t;
ATerm x_158 = NULL,y_158 = NULL,z_158 = NULL;
ATerm trm83;
trm83 = (ATerm) ATgetAnnotations(t);
if((trm83 == NULL))
trm83 = (ATerm) ATempty;
if(match_cons(t, sym_sort_1))
{
y_158 = ATgetArgument(t, 0);
}
else
goto label90 ;
x_158 = trm83;
t = y_158;
z_158 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_sort_1, z_158), x_158);
goto label89 ;
label90 :
t = trm82;
{
ATerm trm84 = t;
t = alt_2_0(sl_up(sl), sl_fun_cl(0, sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label91 ;
goto label89 ;
label91 :
t = trm84;
{
ATerm trm85 = t;
ATerm i_159 = NULL,n_159 = NULL,p_159 = NULL;
ATerm trm86;
trm86 = (ATerm) ATgetAnnotations(t);
if((trm86 == NULL))
trm86 = (ATerm) ATempty;
if(match_cons(t, sym_opt_1))
{
n_159 = ATgetArgument(t, 0);
}
else
goto label92 ;
i_159 = trm86;
t = n_159;
t = x_18(sl, t);
if((t == NULL))
goto label92 ;
p_159 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_opt_1, p_159), i_159);
goto label89 ;
label92 :
t = trm85;
{
ATerm trm87 = t;
ATerm r_159 = NULL,s_159 = NULL,u_159 = NULL;
ATerm trm88;
trm88 = (ATerm) ATgetAnnotations(t);
if((trm88 == NULL))
trm88 = (ATerm) ATempty;
if(match_cons(t, sym_iter_1))
{
s_159 = ATgetArgument(t, 0);
}
else
goto label93 ;
r_159 = trm88;
t = s_159;
t = x_18(sl, t);
if((t == NULL))
goto label93 ;
u_159 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_1, u_159), r_159);
goto label89 ;
label93 :
t = trm87;
{
ATerm trm89 = t;
ATerm w_159 = NULL,x_159 = NULL,z_159 = NULL;
ATerm trm90;
trm90 = (ATerm) ATgetAnnotations(t);
if((trm90 == NULL))
trm90 = (ATerm) ATempty;
if(match_cons(t, sym_iter_star_1))
{
x_159 = ATgetArgument(t, 0);
}
else
goto label94 ;
w_159 = trm90;
t = x_159;
t = x_18(sl, t);
if((t == NULL))
goto label94 ;
z_159 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, z_159), w_159);
goto label89 ;
label94 :
t = trm89;
{
ATerm trm91 = t;
struct str_closure z_165 = { &(_Id) , sl_up(sl) };
StrCL lifted26_cl = &(z_165);
t = iter_sep_2_0(sl_up(sl), sl_fun_cl(0, sl), lifted26_cl, t);
if((t == NULL))
goto label95 ;
goto label89 ;
label95 :
t = trm91;
{
struct str_closure a_166 = { &(_Id) , sl_up(sl) };
StrCL lifted27_cl = &(a_166);
t = iter_star_sep_2_0(sl_up(sl), sl_fun_cl(0, sl), lifted27_cl, t);
if((t == NULL))
goto fail35 ;
else
goto label89 ;
}
}
}
}
}
}
label89 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_injection_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_injection_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_18 = NULL;
struct str_closure t_165 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(t_165);
struct str_closure u_165 = { &(_Id) , sl };
StrCL lifted24_cl = &(u_165);
struct str_closure v_165 = { &(_Id) , sl };
StrCL lifted25_cl = &(v_165);
t = prod_3_0(sl, lifted23_cl, lifted24_cl, lifted25_cl, t);
if((t == NULL))
goto fail32 ;
w_18 = t;
t = term123;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail32 ;
t = w_18;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
ATerm trm80;
trm80 = (ATerm) ATgetAnnotations(t);
if((trm80 == NULL))
trm80 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
r_18 = ATgetFirst((ATermList) t);
s_18 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail33 ;
v_18 = trm80;
t = r_18;
t = syntaxless_sort_0_0(sl_up(sl), t);
if((t == NULL))
goto fail33 ;
t_18 = t;
t = s_18;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail33 ;
u_18 = t;
{
ATerm trm81;
trm81 = CheckATermList(u_18);
if((trm81 == NULL))
goto fail33 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm81, t_18), v_18);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm string_Hd_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "string_Hd_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail31 ;
t = Hd_0_0(sl, t);
if((t == NULL))
goto fail31 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm strs2constr_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strs2constr_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_18 = NULL;
struct str_closure p_165 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(p_165);
t = filter_1_0(sl, lifted19_cl, t);
if((t == NULL))
goto fail27 ;
{
struct str_closure q_165 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(q_165);
struct str_closure r_165 = { &(_Id) , sl };
StrCL lifted21_cl = &(r_165);
t = Cons_2_0(sl, lifted20_cl, lifted21_cl, t);
if((t == NULL))
goto fail27 ;
{
struct str_closure s_165 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(s_165);
t = separate_by_1_0(sl, lifted22_cl, t);
if((t == NULL))
goto fail27 ;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail27 ;
p_18 = t;
t = (ATerm) ATmakeAppl(sym__2, p_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term97), term99), term101), term103), term105), term107), term109), term111), term113), term115), term117), term119), term121));
{
ATerm trm79 = t;
t = is_subterm_0_0(sl, t);
if((t == NULL))
goto label88 ;
goto fail27 ;
label88 :
t = trm79;
goto label87 ;
label87 :
;
t = p_18;
t = escape_0_0(sl, t);
if((t == NULL))
goto fail27 ;
t = double_quote_0_0(sl, t);
if((t == NULL))
goto fail27 ;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term3;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_125 = NULL;
j_125 = t;
t = string_Hd_0_0(sl_up(sl), t);
if((t == NULL))
goto fail29 ;
t = is_alpha_0_0(sl_up(sl), t);
if((t == NULL))
goto fail29 ;
t = j_125;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm78 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto label86 ;
goto fail28 ;
label86 :
t = trm78;
goto label85 ;
label85 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
ATerm mk_constr_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "mk_constr_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm70 = t;
ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm71 = ATgetArgument(t, 0);
if(!(((ATgetType(trm71) == AT_LIST) && ATisEmpty(trm71))))
goto label78 ;
c_18 = ATgetArgument(t, 1);
{
ATerm trm72 = ATgetArgument(t, 2);
}
}
else
goto label78 ;
e_18 = t;
g_18 = t;
t = (ATerm) ATinsert(ATempty, c_18);
t = syms2strs_0_0(sl, t);
if((t == NULL))
goto label78 ;
f_18 = t;
t = g_18;
t = (ATerm) ATmakeAppl(sym__2, f_18, (ATerm) ATinsert(ATempty, term91));
t = conc_0_0(sl, t);
if((t == NULL))
goto label78 ;
t = strs2constr_0_0(sl, t);
if((t == NULL))
goto label78 ;
d_18 = t;
t = e_18;
t = d_18;
goto label77 ;
label78 :
t = trm70;
{
ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
if(match_cons(t, sym_prod_3))
{
q_17 = ATgetArgument(t, 0);
r_17 = ATgetArgument(t, 1);
{
ATerm trm73 = ATgetArgument(t, 2);
}
}
else
goto fail25 ;
t_17 = t;
{
ATerm trm74 = t;
t = q_17;
{
struct str_closure n_165 = { &(lit2str_0_0) , sl };
StrCL lifted17_cl = &(n_165);
t = filter_1_0(sl, lifted17_cl, t);
if((t == NULL))
goto label80 ;
t = strs2constr_0_0(sl, t);
if((t == NULL))
goto label80 ;
s_17 = t;
}
goto label79 ;
label80 :
t = trm74;
{
ATerm trm75 = t;
ATerm u_17 = NULL,w_17 = NULL,v_17 = NULL,x_17 = NULL,m_158 = NULL;
w_17 = t;
t = (ATerm) ATinsert(ATempty, r_17);
t = syms2strs_0_0(sl, t);
if((t == NULL))
goto label81 ;
u_17 = t;
t = w_17;
x_17 = t;
t = q_17;
t = lits2strs_0_0(sl, t);
if((t == NULL))
goto label81 ;
m_158 = t;
{
struct str_closure o_165 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(o_165);
t = filter_1_0(sl, lifted18_cl, t);
if((t == NULL))
goto label81 ;
t = Hd_0_0(sl, t);
if((t == NULL))
goto label81 ;
t = m_158;
v_17 = t;
t = x_17;
t = (ATerm) ATmakeAppl(sym__2, u_17, v_17);
t = conc_0_0(sl, t);
if((t == NULL))
goto label81 ;
t = strs2constr_0_0(sl, t);
if((t == NULL))
goto label81 ;
s_17 = t;
}
goto label79 ;
label81 :
t = trm75;
{
ATerm trm77 = t;
t = q_17;
t = syms2strs_0_0(sl, t);
if((t == NULL))
goto label84 ;
t = strs2constr_0_0(sl, t);
if((t == NULL))
goto label84 ;
s_17 = t;
goto label79 ;
label84 :
t = trm77;
{
ATerm y_17 = NULL,a_18 = NULL,z_17 = NULL,b_18 = NULL;
a_18 = t;
t = (ATerm) ATinsert(ATempty, r_17);
t = syms2strs_0_0(sl, t);
if((t == NULL))
goto fail25 ;
y_17 = t;
t = a_18;
b_18 = t;
t = term93;
t = new_0_0(sl, t);
if((t == NULL))
goto fail25 ;
z_17 = t;
t = b_18;
t = (ATerm) ATmakeAppl(sym__2, y_17, (ATerm) ATinsert(ATinsert(ATempty, z_17), term95));
t = conc_0_0(sl, t);
if((t == NULL))
goto fail25 ;
t = strs2constr_0_0(sl, t);
if((t == NULL))
goto fail25 ;
s_17 = t;
goto label79 ;
}
}
}
label79 :
;
t = t_17;
t = s_17;
goto label77 ;
}
}
label77 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm76 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto label83 ;
goto fail26 ;
label83 :
t = trm76;
goto label82 ;
label82 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
ATerm prodcons_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prodcons_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm trm64 = t;
ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,o_157 = NULL,p_157 = NULL,u_157 = NULL,v_157 = NULL,w_157 = NULL;
sl_init_var(0, o_17);
sl_init_var(1, v_157);
{
struct str_closure f_165 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(f_165);
n_17 = t;
p_17 = t;
if(match_cons(t, sym_prod_3))
{
o_157 = ATgetArgument(t, 0);
p_157 = ATgetArgument(t, 1);
u_157 = ATgetArgument(t, 2);
}
else
goto label70 ;
w_157 = t;
t = u_157;
{
struct str_closure m_165 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(m_165);
t = oncetd_1_0(sl, lifted15_cl, t);
if((t == NULL))
goto label70 ;
t = w_157;
if((v_157 == NULL))
goto label70 ;
else
{
t = v_157;
}
if((o_17 == NULL))
{
o_17 = t;
}
else
if((o_17 != t))
goto label70 ;
t = p_17;
t = n_17;
t = oncetd_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto label70 ;
}
}
goto label69 ;
label70 :
t = trm64;
{
ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
j_17 = t;
k_17 = t;
{
ATerm trm66 = t;
ATerm trm67 = t;
t = get_constr_0_0(sl, t);
if((t == NULL))
goto label74 ;
goto label73 ;
label74 :
t = trm67;
{
ATerm trm68 = t;
t = is_bracket_0_0(sl, t);
if((t == NULL))
goto label75 ;
goto label73 ;
label75 :
t = trm68;
{
ATerm trm69 = t;
t = is_reject_0_0(sl, t);
if((t == NULL))
goto label76 ;
goto label73 ;
label76 :
t = trm69;
t = is_injection_0_0(sl, t);
if((t == NULL))
goto label72 ;
else
goto label73 ;
}
}
label73 :
;
goto fail22 ;
label72 :
t = trm66;
goto label71 ;
label71 :
;
t = k_17;
m_17 = t;
t = j_17;
t = mk_constr_0_0(sl, t);
if((t == NULL))
goto fail22 ;
l_17 = t;
t = m_17;
t = (ATerm) ATmakeAppl(sym__2, j_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_term_1, (ATerm) ATmakeAppl(sym_cons_1, l_17))));
t = add_attributes_0_0(sl, t);
if((t == NULL))
goto fail22 ;
else
goto label69 ;
}
}
label69 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(t, 0)))
goto fail24 ;
}
else
goto fail24 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_158 = NULL,d_158 = NULL,i_158 = NULL;
ATerm trm65;
trm65 = (ATerm) ATgetAnnotations(t);
if((trm65 == NULL))
trm65 = (ATerm) ATempty;
if(match_cons(t, sym_cons_1))
{
d_158 = ATgetArgument(t, 0);
}
else
goto fail23 ;
c_158 = trm65;
t = d_158;
if((sl_readvar(0, sl) == NULL))
goto fail23 ;
else
{
t = sl_readvar(0, sl);
}
t = uq2q_0_0(sl_up(sl), t);
if((t == NULL))
goto fail23 ;
i_158 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cons_1, i_158), c_158);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm list_ana_1_0 (StrSL sl, StrCL d_17, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "list_ana_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, d_17);
{
struct str_closure e_165 = { &(e_17) , &(frame) };
StrCL e_17_cl = &(e_165);
sl_init_fun(1, e_17_cl);
t = e_17(&(frame), t);
if((t == NULL))
goto fail20 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm e_17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "e_17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm60 = t;
ATerm n_157 = NULL;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label67 ;
n_157 = t;
t = (ATerm) ATinsert(ATempty, n_157);
goto label66 ;
label67 :
t = trm60;
{
ATerm trm61 = t;
ATerm c_17 = NULL;
ATerm trm62,trm63;
trm62 = SSL_get_constructor(t);
trm63 = SSL_get_arguments(t);
c_17 = trm63;
t = c_17;
t = filter_1_0(sl_up(sl), sl_fun_cl(1, sl), t);
if((t == NULL))
goto label68 ;
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label68 ;
goto label66 ;
label68 :
t = trm61;
t = (ATerm) ATempty;
goto label66 ;
}
label66 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm toAlphaNumFancy_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "toAlphaNumFancy_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm22 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(",", 0, ATtrue))))
goto label28 ;
t = term19;
goto label27 ;
label28 :
t = trm22;
{
ATerm trm23 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(":", 0, ATtrue))))
goto label29 ;
t = term21;
goto label27 ;
label29 :
t = trm23;
{
ATerm trm24 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(";", 0, ATtrue))))
goto label30 ;
t = term23;
goto label27 ;
label30 :
t = trm24;
{
ATerm trm25 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("+", 0, ATtrue))))
goto label31 ;
t = term25;
goto label27 ;
label31 :
t = trm25;
{
ATerm trm26 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("++", 0, ATtrue))))
goto label32 ;
t = term27;
goto label27 ;
label32 :
t = trm26;
{
ATerm trm27 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-", 0, ATtrue))))
goto label33 ;
t = term29;
goto label27 ;
label33 :
t = trm27;
{
ATerm trm28 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("--", 0, ATtrue))))
goto label34 ;
t = term31;
goto label27 ;
label34 :
t = trm28;
{
ATerm trm29 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("*", 0, ATtrue))))
goto label35 ;
t = term33;
goto label27 ;
label35 :
t = trm29;
{
ATerm trm30 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("/", 0, ATtrue))))
goto label36 ;
t = term35;
goto label27 ;
label36 :
t = trm30;
{
ATerm trm31 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("&", 0, ATtrue))))
goto label37 ;
t = term37;
goto label27 ;
label37 :
t = trm31;
{
ATerm trm32 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("&&", 0, ATtrue))))
goto label38 ;
t = term39;
goto label27 ;
label38 :
t = trm32;
{
ATerm trm33 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("!", 0, ATtrue))))
goto label39 ;
t = term41;
goto label27 ;
label39 :
t = trm33;
{
ATerm trm34 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-", 0, ATtrue))))
goto label40 ;
t = term29;
goto label27 ;
label40 :
t = trm34;
{
ATerm trm35 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("~", 0, ATtrue))))
goto label41 ;
t = term43;
goto label27 ;
label41 :
t = trm35;
{
ATerm trm36 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("%", 0, ATtrue))))
goto label42 ;
t = term45;
goto label27 ;
label42 :
t = trm36;
{
ATerm trm37 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("<<", 0, ATtrue))))
goto label43 ;
t = term47;
goto label27 ;
label43 :
t = trm37;
{
ATerm trm38 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(">>", 0, ATtrue))))
goto label44 ;
t = term49;
goto label27 ;
label44 :
t = trm38;
{
ATerm trm39 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("!=", 0, ATtrue))))
goto label45 ;
t = term51;
goto label27 ;
label45 :
t = trm39;
{
ATerm trm40 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("<", 0, ATtrue))))
goto label46 ;
t = term53;
goto label27 ;
label46 :
t = trm40;
{
ATerm trm41 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("<=", 0, ATtrue))))
goto label47 ;
t = term55;
goto label27 ;
label47 :
t = trm41;
{
ATerm trm42 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(">", 0, ATtrue))))
goto label48 ;
t = term57;
goto label27 ;
label48 :
t = trm42;
{
ATerm trm43 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(">=", 0, ATtrue))))
goto label49 ;
t = term59;
goto label27 ;
label49 :
t = trm43;
{
ATerm trm44 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("|", 0, ATtrue))))
goto label50 ;
t = term61;
goto label27 ;
label50 :
t = trm44;
{
ATerm trm45 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("=", 0, ATtrue))))
goto label51 ;
t = term63;
goto label27 ;
label51 :
t = trm45;
{
ATerm trm46 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("==", 0, ATtrue))))
goto label52 ;
t = term63;
goto label27 ;
label52 :
t = trm46;
{
ATerm trm47 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("||", 0, ATtrue))))
goto label53 ;
t = term15;
goto label27 ;
label53 :
t = trm47;
{
ATerm trm48 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(":=", 0, ATtrue))))
goto label54 ;
t = term65;
goto label27 ;
label54 :
t = trm48;
{
ATerm trm49 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("->", 0, ATtrue))))
goto label55 ;
t = term67;
goto label27 ;
label55 :
t = trm49;
{
ATerm trm50 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("=>", 0, ATtrue))))
goto label56 ;
t = term69;
goto label27 ;
label56 :
t = trm50;
{
ATerm trm51 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("*=", 0, ATtrue))))
goto label57 ;
t = term71;
goto label27 ;
label57 :
t = trm51;
{
ATerm trm52 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("/=", 0, ATtrue))))
goto label58 ;
t = term73;
goto label27 ;
label58 :
t = trm52;
{
ATerm trm53 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("%=", 0, ATtrue))))
goto label59 ;
t = term75;
goto label27 ;
label59 :
t = trm53;
{
ATerm trm54 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("+=", 0, ATtrue))))
goto label60 ;
t = term77;
goto label27 ;
label60 :
t = trm54;
{
ATerm trm55 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-=", 0, ATtrue))))
goto label61 ;
t = term79;
goto label27 ;
label61 :
t = trm55;
{
ATerm trm56 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("<<=", 0, ATtrue))))
goto label62 ;
t = term81;
goto label27 ;
label62 :
t = trm56;
{
ATerm trm57 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(">>=", 0, ATtrue))))
goto label63 ;
t = term83;
goto label27 ;
label63 :
t = trm57;
{
ATerm trm58 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("&=", 0, ATtrue))))
goto label64 ;
t = term85;
goto label27 ;
label64 :
t = trm58;
{
ATerm trm59 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("^=", 0, ATtrue))))
goto label65 ;
t = term87;
goto label27 ;
label65 :
t = trm59;
if(!((ATgetSymbol(t) == ATmakeSymbol("|=", 0, ATtrue))))
goto fail19 ;
t = term89;
goto label27 ;
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
label27 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm Sym2Strs_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Sym2Strs_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure d_165 = { &(k_12) , &(frame) };
StrCL k_12_cl = &(d_165);
sl_init_fun(0, k_12_cl);
t = k_12(&(frame), t);
if((t == NULL))
goto fail12 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm k_12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "k_12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm6 = t;
ATerm t_10 = NULL;
if(match_cons(t, sym_cf_1))
{
t_10 = ATgetArgument(t, 0);
}
else
goto label13 ;
t = t_10;
t = k_12(sl, t);
if((t == NULL))
goto label13 ;
goto label12 ;
label13 :
t = trm6;
{
ATerm trm7 = t;
ATerm u_10 = NULL;
if(match_cons(t, sym_lex_1))
{
u_10 = ATgetArgument(t, 0);
}
else
goto label14 ;
t = u_10;
t = k_12(sl, t);
if((t == NULL))
goto label14 ;
goto label12 ;
label14 :
t = trm7;
{
ATerm trm8 = t;
if(!(match_cons(t, sym_empty_0)))
goto label15 ;
t = (ATerm) ATinsert(ATempty, term5);
goto label12 ;
label15 :
t = trm8;
{
ATerm trm9 = t;
ATerm v_10 = NULL,w_10 = NULL;
if(match_cons(t, sym_seq_2))
{
v_10 = ATgetArgument(t, 0);
w_10 = ATgetArgument(t, 1);
}
else
goto label16 ;
{
ATerm trm10;
trm10 = CheckATermList(w_10);
if((trm10 == NULL))
goto label16 ;
t = (ATerm) ATinsert((ATermList)trm10, v_10);
t = filter_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label16 ;
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label16 ;
}
goto label12 ;
label16 :
t = trm9;
{
ATerm trm11 = t;
ATerm x_10 = NULL;
struct str_closure x_164 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(x_164);
if(match_cons(t, sym_opt_1))
{
x_10 = ATgetArgument(t, 0);
}
else
goto label17 ;
t = x_10;
t = k_12(sl, t);
if((t == NULL))
goto label17 ;
t = at_end_1_0(sl_up(sl), lifted10_cl, t);
if((t == NULL))
goto label17 ;
goto label12 ;
label17 :
t = trm11;
{
ATerm trm12 = t;
ATerm y_10 = NULL;
struct str_closure y_164 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(y_164);
if(match_cons(t, sym_iter_1))
{
y_10 = ATgetArgument(t, 0);
}
else
goto label18 ;
t = y_10;
t = k_12(sl, t);
if((t == NULL))
goto label18 ;
t = at_end_1_0(sl_up(sl), lifted11_cl, t);
if((t == NULL))
goto label18 ;
goto label12 ;
label18 :
t = trm12;
{
ATerm trm13 = t;
ATerm z_10 = NULL;
struct str_closure a_165 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(a_165);
if(match_cons(t, sym_iter_star_1))
{
z_10 = ATgetArgument(t, 0);
}
else
goto label19 ;
t = z_10;
t = k_12(sl, t);
if((t == NULL))
goto label19 ;
t = at_end_1_0(sl_up(sl), lifted12_cl, t);
if((t == NULL))
goto label19 ;
goto label12 ;
label19 :
t = trm13;
{
ATerm trm14 = t;
ATerm a_11 = NULL,c_11 = NULL,l_12 = NULL,n_12 = NULL,m_12 = NULL,o_12 = NULL;
if(match_cons(t, sym_iter_sep_2))
{
a_11 = ATgetArgument(t, 0);
c_11 = ATgetArgument(t, 1);
}
else
goto label20 ;
n_12 = t;
t = a_11;
t = k_12(sl, t);
if((t == NULL))
goto label20 ;
l_12 = t;
t = n_12;
o_12 = t;
t = c_11;
t = k_12(sl, t);
if((t == NULL))
goto label20 ;
m_12 = t;
t = o_12;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term9)), m_12), l_12);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label20 ;
goto label12 ;
label20 :
t = trm14;
{
ATerm trm15 = t;
ATerm d_11 = NULL,e_11 = NULL,p_12 = NULL,t_12 = NULL,s_12 = NULL,u_12 = NULL;
if(match_cons(t, sym_iter_star_sep_2))
{
d_11 = ATgetArgument(t, 0);
e_11 = ATgetArgument(t, 1);
}
else
goto label21 ;
t_12 = t;
t = d_11;
t = k_12(sl, t);
if((t == NULL))
goto label21 ;
p_12 = t;
t = t_12;
u_12 = t;
t = e_11;
t = k_12(sl, t);
if((t == NULL))
goto label21 ;
s_12 = t;
t = u_12;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term11)), s_12), p_12);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label21 ;
goto label12 ;
label21 :
t = trm15;
{
ATerm trm16 = t;
ATerm f_11 = NULL,h_11 = NULL,v_12 = NULL,x_12 = NULL,w_12 = NULL,y_12 = NULL;
if(match_cons(t, sym_func_2))
{
f_11 = ATgetArgument(t, 0);
h_11 = ATgetArgument(t, 1);
}
else
goto label22 ;
x_12 = t;
t = f_11;
t = filter_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label22 ;
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label22 ;
v_12 = t;
t = x_12;
y_12 = t;
t = h_11;
t = k_12(sl, t);
if((t == NULL))
goto label22 ;
w_12 = t;
t = y_12;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_12), (ATerm) ATinsert(ATempty, term13)), v_12);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label22 ;
goto label12 ;
label22 :
t = trm16;
{
ATerm trm17 = t;
ATerm i_11 = NULL,k_11 = NULL,z_12 = NULL,b_13 = NULL,a_13 = NULL,c_13 = NULL;
if(match_cons(t, sym_alt_2))
{
i_11 = ATgetArgument(t, 0);
k_11 = ATgetArgument(t, 1);
}
else
goto label23 ;
b_13 = t;
t = i_11;
t = k_12(sl, t);
if((t == NULL))
goto label23 ;
z_12 = t;
t = b_13;
c_13 = t;
t = k_11;
t = k_12(sl, t);
if((t == NULL))
goto label23 ;
a_13 = t;
t = c_13;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_13), (ATerm) ATinsert(ATempty, term15)), z_12);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label23 ;
goto label12 ;
label23 :
t = trm17;
{
ATerm trm18 = t;
ATerm l_11 = NULL;
if(match_cons(t, sym_sort_1))
{
l_11 = ATgetArgument(t, 0);
}
else
goto label24 ;
t = (ATerm) ATinsert(ATempty, l_11);
goto label12 ;
label24 :
t = trm18;
{
ATerm trm19 = t;
ATerm h_12 = NULL,d_13 = NULL,e_13 = NULL;
if(match_cons(t, sym_lit_1))
{
h_12 = ATgetArgument(t, 0);
}
else
goto label25 ;
e_13 = t;
t = h_12;
{
struct str_closure b_165 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(b_165);
t = try_1_0(sl_up(sl), lifted13_cl, t);
if((t == NULL))
goto label25 ;
d_13 = t;
t = e_13;
t = (ATerm) ATinsert(ATempty, d_13);
}
goto label12 ;
label25 :
t = trm19;
{
ATerm trm20 = t;
ATerm j_12 = NULL,f_13 = NULL,g_13 = NULL;
if(match_cons(t, sym_label_2))
{
j_12 = ATgetArgument(t, 0);
{
ATerm trm21 = ATgetArgument(t, 1);
}
}
else
goto label26 ;
g_13 = t;
t = j_12;
{
struct str_closure c_165 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(c_165);
t = try_1_0(sl_up(sl), lifted14_cl, t);
if((t == NULL))
goto label26 ;
f_13 = t;
t = g_13;
t = (ATerm) ATinsert(ATempty, f_13);
}
goto label12 ;
label26 :
t = trm20;
if(!(match_cons(t, sym_layout_0)))
goto fail13 ;
t = (ATerm) ATinsert(ATempty, term17);
goto label12 ;
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
label12 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = un_double_quote_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail18 ;
t = unescape_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail18 ;
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
t = un_double_quote_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail17 ;
t = unescape_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
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
t = (ATerm) ATinsert(ATempty, term11);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term9);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm lit2str_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lit2str_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_164 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(s_164);
struct str_closure v_164 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(v_164);
t = list_ana_1_0(sl, lifted5_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure w_164 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(w_164);
t = separate_by_1_0(sl, lifted7_cl, t);
if((t == NULL))
goto fail6 ;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail6 ;
t = try_1_0(sl, lifted8_cl, t);
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
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term3;
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
ATerm f_157 = NULL;
struct str_closure u_164 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(u_164);
if(match_cons(t, sym_lit_1))
{
f_157 = ATgetArgument(t, 0);
}
else
goto fail9 ;
t = f_157;
t = try_1_0(sl_up(sl), lifted6_cl, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = un_double_quote_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail10 ;
t = unescape_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail10 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm3 = t;
ATerm g_157 = NULL,h_157 = NULL;
g_157 = t;
h_157 = t;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto label7 ;
{
ATerm trm4 = t;
struct str_closure r_164 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(r_164);
t = map_1_0(sl_up(sl), lifted9_cl, t);
if((t == NULL))
goto label9 ;
goto label7 ;
label9 :
t = trm4;
goto label8 ;
label8 :
;
t = h_157;
t = term1;
}
goto label6 ;
label7 :
t = trm3;
t = toAlphaNumFancy_0_0(sl_up(sl), t);
if((t == NULL))
goto fail7 ;
else
goto label6 ;
label6 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm5 = t;
t = is_alphanum_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label11 ;
goto label10 ;
label11 :
t = trm5;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 45)))
goto label10 ;
else
goto fail8 ;
label10 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm lits2strs_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lits2strs_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_164 = { &(lit2str_0_0) , sl };
StrCL lifted4_cl = &(q_164);
t = filter_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm sym2strs_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sym2strs_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_164 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(p_164);
t = Sym2Strs_0_0(sl, t);
if((t == NULL))
goto fail1 ;
t = map_1_0(sl, lifted1_cl, t);
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
struct str_closure o_164 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(o_164);
t = try_1_0(sl_up(sl), lifted2_cl, t);
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
ATerm trm0 = t;
ATerm v_156 = NULL,e_157 = NULL;
v_156 = t;
e_157 = t;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label1 ;
{
ATerm trm1 = t;
struct str_closure n_164 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(n_164);
t = map_1_0(sl_up(sl_up(sl)), lifted3_cl, t);
if((t == NULL))
goto label3 ;
goto label1 ;
label3 :
t = trm1;
goto label2 ;
label2 :
;
t = e_157;
t = term1;
}
goto label0 ;
label1 :
t = trm0;
t = toAlphaNumFancy_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
else
goto label0 ;
label0 :
;
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
ATerm trm2 = t;
t = is_alphanum_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label5 ;
goto label4 ;
label5 :
t = trm2;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 45)))
goto label4 ;
else
goto fail4 ;
label4 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm syms2strs_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "syms2strs_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_164 = { &(sym2strs_0_0) , sl };
StrCL lifted0_cl = &(m_164);
t = filter_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail0 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 289));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(Cons_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Cons_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(table_get_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_get_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(table_put_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_put_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(table_create_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_create_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(separate_by_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("separate_by_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(separate_by_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("separate_by_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(reverse_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("reverse_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(at_last_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("at_last_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(at_end_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("at_end_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(is_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Tl_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Tl_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Hd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Hd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(index_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("index_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(index_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("index_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(nzip_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("nzip_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(split_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("split_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Snd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Snd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Fst_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Fst_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(repeat_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repeat_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sometd_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sometd_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(oncetd_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("oncetd_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(bottomup_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("bottomup_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_text_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_text_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(say_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("say_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ReadFromFile_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ReadFromFile_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(crush_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("crush_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(mkterm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("mkterm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_to_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_to_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(even_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("even_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_subterm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_subterm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_alpha_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_alpha_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_alphanum_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_alphanum_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(trim_chars_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("trim_chars_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(un_double_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("un_double_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(double_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("double_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(unescape_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("unescape_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(explode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("explode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(implode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(new_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("new_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(extend_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("extend_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Option_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Option_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_verbose5_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose5_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_verbose1_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose1_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_temp_files_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_temp_files_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_to_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_find_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_find_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(layout_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("layout_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Arg2_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Arg2_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(SOpt_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("SOpt_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(selector_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("selector_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(prod_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("prod_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iter_star_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iter_star_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iter_sep_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iter_sep_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iter_star_sep_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iter_star_sep_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lit_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lit_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(alt_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("alt_2_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted167);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted167", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted166);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted166", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(e_42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("e_42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted162);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted162", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted161);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted161", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_literals_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_literals_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fatal_ambiguity_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fatal_ambiguity_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted159);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted159", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted158);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted158", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(application_to_abox_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("application_to_abox_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted156);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted156", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_pp_entry_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_pp_entry_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted154);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted154", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted153);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted153", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted150);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted150", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_templ_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_templ_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(a_40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("a_40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(seq2abox_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("seq2abox_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(make_path_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("make_path_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted149);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted149", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted148);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted148", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(BuildSepList_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("BuildSepList_4_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(build_sep_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("build_sep_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted138);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted138", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(build_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("build_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted136);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted136", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted135);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted135", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(i_35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("i_35", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(symbol2abox_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("symbol2abox_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(asfix2abox_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix2abox_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Make_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Make_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(t_33);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("t_33", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pair_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pair_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted122);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted122", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted120);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted120", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted111);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted111", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(make_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("make_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted108);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted108", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted107);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted107", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(l_32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("l_32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(number_node_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("number_node_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted105);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted105", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted104);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted104", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(argument_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("argument_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(a_32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("a_32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(flat_alt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("flat_alt_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(v_31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("v_31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(symbol2abox_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("symbol2abox_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted98);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted98", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted97);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted97", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(symbols2pp_entries_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("symbols2pp_entries_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted95);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted95", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted94);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted94", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted96);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted96", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(number_nonterminals_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("number_nonterminals_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(ignore_prod_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ignore_prod_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted90);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted90", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(missing_constructor_warning_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("missing_constructor_warning_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted85);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted85", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(generate_pp_entries_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("generate_pp_entries_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted82);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted82", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted80);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted80", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted78);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted78", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted83);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted83", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_pp_sdf2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_pp_sdf2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_arg_flags_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_arg_flags_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted76);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted76", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted75);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted75", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_ast2abox_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_ast2abox_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_inject_prod_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_inject_prod_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted74);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted74", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_cnstr_name_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_cnstr_name_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_pp_conservative_enabled_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_pp_conservative_enabled_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(pp_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pp_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_p_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_p_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted70);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted70", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted69);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted69", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pp_table_get_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pp_table_get_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(MakePPTerm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("MakePPTerm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted62);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted62", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(path_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("path_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted61);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted61", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(mk_key_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("mk_key_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(StoreEntryIfNotExists_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("StoreEntryIfNotExists_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted59);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted59", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(StoreEntry_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("StoreEntry_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted55);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted55", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted54);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted54", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted57);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted57", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted56);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted56", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted53);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted53", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_pp_tables_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_pp_tables_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted52);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted52", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(flat_list_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("flat_list_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted50);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted50", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(m_23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("m_23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_p__1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_p__1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(i_23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("i_23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(instantiate_sep_list_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("instantiate_sep_list_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(w_22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("w_22", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(instantiate_list_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("instantiate_list_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(SlowInstantiate_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("SlowInstantiate_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(FastInstantiate_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("FastInstantiate_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Instantiate_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Instantiate_0_1", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(instantiate_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("instantiate_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(instantiate_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("instantiate_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(layout2box_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("layout2box_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted46);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted46", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(has_significant_layout_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("has_significant_layout_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted44);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted44", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(h_21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("h_21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(InsLayout_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("InsLayout_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted43);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted43", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted39);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted39", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(u_20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("u_20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted33);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted33", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(insert_layout_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("insert_layout_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(uq2q_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("uq2q_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_attributes_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_attributes_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_reject_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_reject_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_bracket_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_bracket_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_constr_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_constr_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(x_18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("x_18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(syntaxless_sort_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("syntaxless_sort_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_injection_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_injection_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_Hd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_Hd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted22", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strs2constr_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strs2constr_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(mk_constr_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("mk_constr_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(prodcons_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("prodcons_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(e_17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("e_17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(list_ana_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("list_ana_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(toAlphaNumFancy_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("toAlphaNumFancy_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(k_12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("k_12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Sym2Strs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Sym2Strs_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lit2str_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lit2str_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lits2strs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lits2strs_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sym2strs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sym2strs_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(syms2strs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("syms2strs_0_0", 0, ATtrue)), &(closures[closures_index]));
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
