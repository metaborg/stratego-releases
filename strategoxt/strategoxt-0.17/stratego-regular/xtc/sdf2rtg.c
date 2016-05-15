#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_IgnoreMissingCons_0;
static Symbol sym__3;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Warning_0;
static Symbol sym_Error_0;
static Symbol sym_Critical_0;
static Symbol sym_FILE_1;
static Symbol sym_NoneTerm_0;
static Symbol sym_SomeTerm_0;
static Symbol sym_ConcTerm_0;
static Symbol sym_TupleTerm_1;
static Symbol sym_NilTerm_0;
static Symbol sym_ConsTerm_0;
static Symbol sym_EscapeSeq_1;
static Symbol sym_Chars_1;
static Symbol sym_Plain_1;
static Symbol sym_Quoted_1;
static Symbol sym_Term_1;
static Symbol sym_Nonterm_1;
static Symbol sym_Int_0;
static Symbol sym_String_0;
static Symbol sym_Ref_1;
static Symbol sym_Appl_2;
static Symbol sym_ProdRule_2;
static Symbol sym_ProdRules_1;
static Symbol sym_Start_1;
static Symbol sym_RTG_2;
static Symbol sym_GNU__LGPL_2;
static Symbol sym_GNU__GPL_2;
static Symbol sym_License_1;
static Symbol sym_ConfigItem_2;
static Symbol sym_CurrentXTCRepository_0;
static Symbol sym_DefaultXTCRepository_0;
static Symbol sym_Config_1;
static Symbol sym_Program_3;
static Symbol sym_AutoProgram_0;
static Symbol sym_ReportBugs_1;
static Symbol sym_AutoReportBugs_0;
static Symbol sym_WebHome_1;
static Symbol sym_Person_2;
static Symbol sym_Author_1;
static Symbol sym_Authors_1;
static Symbol sym_OptionUsage_0;
static Symbol sym_Description_1;
static Symbol sym_Summary_1;
static Symbol sym_Usage_1;
static Symbol sym_HelpString_2;
static Symbol sym_Def_2;
static Symbol sym_DefList_1;
static Symbol sym_ItemList_1;
static Symbol sym_Line_1;
static Symbol sym_Paragraph_1;
static Symbol sym_HSection_2;
static Symbol sym_SdfMainModuleFlag_0;
static Symbol sym_ignore_0;
static Symbol sym_rtg_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_cons_1;
static Symbol sym_syntax_1;
static Symbol sym_lexical_syntax_1;
static Symbol sym_context_free_syntax_1;
static Symbol sym_term_1;
static Symbol sym_bracket_0;
static Symbol sym_reject_0;
static Symbol sym_attrs_1;
static Symbol sym_prod_3;
static Symbol sym_cf_1;
static Symbol sym_lex_1;
static Symbol sym_varsym_1;
static Symbol sym_layout_0;
static Symbol sym_opt_1;
static Symbol sym_iter_1;
static Symbol sym_iter_star_1;
static Symbol sym_iter_sep_2;
static Symbol sym_iter_star_sep_2;
static Symbol sym_sort_1;
static Symbol sym_parameterized_sort_2;
static Symbol sym_lit_1;
static Symbol sym_ci_lit_1;
static Symbol sym_label_2;
static Symbol sym_start_0;
static Symbol sym_file_start_0;
static Symbol sym_default_1;
static Symbol sym_char_class_1;
static Symbol sym_seq_2;
static Symbol sym_alt_2;
static void init_module_constructors (void)
{
sym_IgnoreMissingCons_0 = ATmakeSymbol("IgnoreMissingCons", 0, ATfalse);
ATprotectSymbol(sym_IgnoreMissingCons_0);
sym__3 = ATmakeSymbol("", 3, ATfalse);
ATprotectSymbol(sym__3);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Warning_0 = ATmakeSymbol("Warning", 0, ATfalse);
ATprotectSymbol(sym_Warning_0);
sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
ATprotectSymbol(sym_Error_0);
sym_Critical_0 = ATmakeSymbol("Critical", 0, ATfalse);
ATprotectSymbol(sym_Critical_0);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
sym_NoneTerm_0 = ATmakeSymbol("NoneTerm", 0, ATfalse);
ATprotectSymbol(sym_NoneTerm_0);
sym_SomeTerm_0 = ATmakeSymbol("SomeTerm", 0, ATfalse);
ATprotectSymbol(sym_SomeTerm_0);
sym_ConcTerm_0 = ATmakeSymbol("ConcTerm", 0, ATfalse);
ATprotectSymbol(sym_ConcTerm_0);
sym_TupleTerm_1 = ATmakeSymbol("TupleTerm", 1, ATfalse);
ATprotectSymbol(sym_TupleTerm_1);
sym_NilTerm_0 = ATmakeSymbol("NilTerm", 0, ATfalse);
ATprotectSymbol(sym_NilTerm_0);
sym_ConsTerm_0 = ATmakeSymbol("ConsTerm", 0, ATfalse);
ATprotectSymbol(sym_ConsTerm_0);
sym_EscapeSeq_1 = ATmakeSymbol("EscapeSeq", 1, ATfalse);
ATprotectSymbol(sym_EscapeSeq_1);
sym_Chars_1 = ATmakeSymbol("Chars", 1, ATfalse);
ATprotectSymbol(sym_Chars_1);
sym_Plain_1 = ATmakeSymbol("Plain", 1, ATfalse);
ATprotectSymbol(sym_Plain_1);
sym_Quoted_1 = ATmakeSymbol("Quoted", 1, ATfalse);
ATprotectSymbol(sym_Quoted_1);
sym_Term_1 = ATmakeSymbol("Term", 1, ATfalse);
ATprotectSymbol(sym_Term_1);
sym_Nonterm_1 = ATmakeSymbol("Nonterm", 1, ATfalse);
ATprotectSymbol(sym_Nonterm_1);
sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
ATprotectSymbol(sym_Int_0);
sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
ATprotectSymbol(sym_String_0);
sym_Ref_1 = ATmakeSymbol("Ref", 1, ATfalse);
ATprotectSymbol(sym_Ref_1);
sym_Appl_2 = ATmakeSymbol("Appl", 2, ATfalse);
ATprotectSymbol(sym_Appl_2);
sym_ProdRule_2 = ATmakeSymbol("ProdRule", 2, ATfalse);
ATprotectSymbol(sym_ProdRule_2);
sym_ProdRules_1 = ATmakeSymbol("ProdRules", 1, ATfalse);
ATprotectSymbol(sym_ProdRules_1);
sym_Start_1 = ATmakeSymbol("Start", 1, ATfalse);
ATprotectSymbol(sym_Start_1);
sym_RTG_2 = ATmakeSymbol("RTG", 2, ATfalse);
ATprotectSymbol(sym_RTG_2);
sym_GNU__LGPL_2 = ATmakeSymbol("GNU_LGPL", 2, ATfalse);
ATprotectSymbol(sym_GNU__LGPL_2);
sym_GNU__GPL_2 = ATmakeSymbol("GNU_GPL", 2, ATfalse);
ATprotectSymbol(sym_GNU__GPL_2);
sym_License_1 = ATmakeSymbol("License", 1, ATfalse);
ATprotectSymbol(sym_License_1);
sym_ConfigItem_2 = ATmakeSymbol("ConfigItem", 2, ATfalse);
ATprotectSymbol(sym_ConfigItem_2);
sym_CurrentXTCRepository_0 = ATmakeSymbol("CurrentXTCRepository", 0, ATfalse);
ATprotectSymbol(sym_CurrentXTCRepository_0);
sym_DefaultXTCRepository_0 = ATmakeSymbol("DefaultXTCRepository", 0, ATfalse);
ATprotectSymbol(sym_DefaultXTCRepository_0);
sym_Config_1 = ATmakeSymbol("Config", 1, ATfalse);
ATprotectSymbol(sym_Config_1);
sym_Program_3 = ATmakeSymbol("Program", 3, ATfalse);
ATprotectSymbol(sym_Program_3);
sym_AutoProgram_0 = ATmakeSymbol("AutoProgram", 0, ATfalse);
ATprotectSymbol(sym_AutoProgram_0);
sym_ReportBugs_1 = ATmakeSymbol("ReportBugs", 1, ATfalse);
ATprotectSymbol(sym_ReportBugs_1);
sym_AutoReportBugs_0 = ATmakeSymbol("AutoReportBugs", 0, ATfalse);
ATprotectSymbol(sym_AutoReportBugs_0);
sym_WebHome_1 = ATmakeSymbol("WebHome", 1, ATfalse);
ATprotectSymbol(sym_WebHome_1);
sym_Person_2 = ATmakeSymbol("Person", 2, ATfalse);
ATprotectSymbol(sym_Person_2);
sym_Author_1 = ATmakeSymbol("Author", 1, ATfalse);
ATprotectSymbol(sym_Author_1);
sym_Authors_1 = ATmakeSymbol("Authors", 1, ATfalse);
ATprotectSymbol(sym_Authors_1);
sym_OptionUsage_0 = ATmakeSymbol("OptionUsage", 0, ATfalse);
ATprotectSymbol(sym_OptionUsage_0);
sym_Description_1 = ATmakeSymbol("Description", 1, ATfalse);
ATprotectSymbol(sym_Description_1);
sym_Summary_1 = ATmakeSymbol("Summary", 1, ATfalse);
ATprotectSymbol(sym_Summary_1);
sym_Usage_1 = ATmakeSymbol("Usage", 1, ATfalse);
ATprotectSymbol(sym_Usage_1);
sym_HelpString_2 = ATmakeSymbol("HelpString", 2, ATfalse);
ATprotectSymbol(sym_HelpString_2);
sym_Def_2 = ATmakeSymbol("Def", 2, ATfalse);
ATprotectSymbol(sym_Def_2);
sym_DefList_1 = ATmakeSymbol("DefList", 1, ATfalse);
ATprotectSymbol(sym_DefList_1);
sym_ItemList_1 = ATmakeSymbol("ItemList", 1, ATfalse);
ATprotectSymbol(sym_ItemList_1);
sym_Line_1 = ATmakeSymbol("Line", 1, ATfalse);
ATprotectSymbol(sym_Line_1);
sym_Paragraph_1 = ATmakeSymbol("Paragraph", 1, ATfalse);
ATprotectSymbol(sym_Paragraph_1);
sym_HSection_2 = ATmakeSymbol("HSection", 2, ATfalse);
ATprotectSymbol(sym_HSection_2);
sym_SdfMainModuleFlag_0 = ATmakeSymbol("SdfMainModuleFlag", 0, ATfalse);
ATprotectSymbol(sym_SdfMainModuleFlag_0);
sym_ignore_0 = ATmakeSymbol("ignore", 0, ATfalse);
ATprotectSymbol(sym_ignore_0);
sym_rtg_1 = ATmakeSymbol("rtg", 1, ATfalse);
ATprotectSymbol(sym_rtg_1);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
ATprotectSymbol(sym_cons_1);
sym_syntax_1 = ATmakeSymbol("syntax", 1, ATfalse);
ATprotectSymbol(sym_syntax_1);
sym_lexical_syntax_1 = ATmakeSymbol("lexical-syntax", 1, ATfalse);
ATprotectSymbol(sym_lexical_syntax_1);
sym_context_free_syntax_1 = ATmakeSymbol("context-free-syntax", 1, ATfalse);
ATprotectSymbol(sym_context_free_syntax_1);
sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
ATprotectSymbol(sym_term_1);
sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
ATprotectSymbol(sym_bracket_0);
sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
ATprotectSymbol(sym_reject_0);
sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
ATprotectSymbol(sym_attrs_1);
sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
ATprotectSymbol(sym_prod_3);
sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
ATprotectSymbol(sym_cf_1);
sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
ATprotectSymbol(sym_lex_1);
sym_varsym_1 = ATmakeSymbol("varsym", 1, ATfalse);
ATprotectSymbol(sym_varsym_1);
sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
ATprotectSymbol(sym_layout_0);
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
sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
ATprotectSymbol(sym_sort_1);
sym_parameterized_sort_2 = ATmakeSymbol("parameterized-sort", 2, ATfalse);
ATprotectSymbol(sym_parameterized_sort_2);
sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
ATprotectSymbol(sym_lit_1);
sym_ci_lit_1 = ATmakeSymbol("ci-lit", 1, ATfalse);
ATprotectSymbol(sym_ci_lit_1);
sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
ATprotectSymbol(sym_label_2);
sym_start_0 = ATmakeSymbol("start", 0, ATfalse);
ATprotectSymbol(sym_start_0);
sym_file_start_0 = ATmakeSymbol("file-start", 0, ATfalse);
ATprotectSymbol(sym_file_start_0);
sym_default_1 = ATmakeSymbol("default", 1, ATfalse);
ATprotectSymbol(sym_default_1);
sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
ATprotectSymbol(sym_char_class_1);
sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
ATprotectSymbol(sym_seq_2);
sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
ATprotectSymbol(sym_alt_2);
}
static ATerm term245;
static ATerm term244;
static ATerm term243;
static ATerm term242;
static ATerm term241;
static ATerm term240;
static ATerm term239;
static ATerm term238;
static ATerm term237;
static ATerm term236;
static ATerm term235;
static ATerm term234;
static ATerm term233;
static ATerm term232;
static ATerm term231;
static ATerm term230;
static ATerm term229;
static ATerm term228;
static ATerm term227;
static ATerm term226;
static ATerm term225;
static ATerm term224;
static ATerm term223;
static ATerm term222;
static ATerm term221;
static ATerm term220;
static ATerm term219;
static ATerm term218;
static ATerm term217;
static ATerm term216;
static ATerm term215;
static ATerm term214;
static ATerm term213;
static ATerm term212;
static ATerm term211;
static ATerm term210;
static ATerm term209;
static ATerm term208;
static ATerm term207;
static ATerm term206;
static ATerm term205;
static ATerm term204;
static ATerm term203;
static ATerm term202;
static ATerm term201;
static ATerm term200;
static ATerm term199;
static ATerm term198;
static ATerm term197;
static ATerm term196;
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("core-sdf-parenthesize", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("generated-nonterms", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym_Error_0);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("Rewriting syntax section failed", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("No production rules in RTG. Did you specify the right main module?", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeInt(1);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("No start productions found. Did you specify any start-symbols in the syntax definition?", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("Rewriting production to nonterm failed", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("Rewriting production failed", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax in input hasn't been normalized to syntax", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("lexical syntax in input hasn't been normalized to syntax", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(sym_Critical_0);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("production rule resulted in a direct cycle", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor name specified in production:", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("Resolution: please add a cons attribute to this production.", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("Production in abstract syntax: ", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(sym_IgnoreMissingCons_0);
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(sym_NilTerm_0);
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(sym_Appl_2, term41, (ATerm) ATempty);
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(sym_ConsTerm_0);
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(sym_ConcTerm_0);
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(sym_SomeTerm_0);
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(sym_NoneTerm_0);
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(sym_Appl_2, term51, (ATerm) ATempty);
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-var", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(sym_Plain_1, term55);
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(sym_Term_1, term57);
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(sym_String_0);
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(sym_Ref_1, term61);
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(sym_Int_0);
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(sym_Ref_1, term65);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(sym_Warning_0);
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("Cannot generate a nice name for symbol", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("  Please report this bug at ", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("    - https://bugs.cs.uu.nl/browse/STR", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("    - or martin.bravenboer@gmail.com", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("  Resolution: falling back to the ugly name ", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("CharClass", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("Lit", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("CaseInsensitiveLit", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("ListPlusOf", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("ListStarOf", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("Opt", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(sym_SdfMainModuleFlag_0);
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol(" [Main]", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("-m mod | --main mod   ", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("Main", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("tool-doc2abox", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeInt(80);
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(ATmakeSymbol("Summary:", 0, ATtrue));
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(ATmakeSymbol("Description:", 0, ATtrue));
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(sym__2, term125, term127);
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(ATmakeSymbol("Options:", 0, ATtrue));
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(ATmakeSymbol("Authors:", 0, ATtrue));
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(ATmakeSymbol("Author:", 0, ATtrue));
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeAppl(ATmakeSymbol(" <", 0, ATtrue));
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(ATmakeSymbol("Website:", 0, ATtrue));
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeAppl(ATmakeSymbol("Please report bugs to ", 0, ATtrue));
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeAppl(ATmakeSymbol("Version", 0, ATtrue));
ATprotect(&(term147));
term147 = term146;
ATprotect(&(term148));
term148 = (ATerm) ATmakeAppl(ATmakeSymbol("Package", 0, ATtrue));
ATprotect(&(term149));
term149 = term148;
ATprotect(&(term150));
term150 = (ATerm) ATmakeAppl(ATmakeSymbol("Configuration:", 0, ATtrue));
ATprotect(&(term151));
term151 = term150;
ATprotect(&(term152));
term152 = (ATerm) ATmakeAppl(ATmakeSymbol("Default XTC Repository", 0, ATtrue));
ATprotect(&(term153));
term153 = term152;
ATprotect(&(term154));
term154 = (ATerm) ATmakeAppl(ATmakeSymbol("Current XTC Repository", 0, ATtrue));
ATprotect(&(term155));
term155 = term154;
ATprotect(&(term156));
term156 = (ATerm) ATmakeAppl(ATmakeSymbol("License:", 0, ATtrue));
ATprotect(&(term157));
term157 = term156;
ATprotect(&(term158));
term158 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
ATprotect(&(term159));
term159 = term158;
ATprotect(&(term160));
term160 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) ", 0, ATtrue));
ATprotect(&(term161));
term161 = term160;
ATprotect(&(term162));
term162 = (ATerm) ATmakeAppl(ATmakeSymbol("You should have received a copy of the GNU General Public License \n        along with this program; if not, write to the Free Software Foundation, \n        Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA", 0, ATtrue));
ATprotect(&(term163));
term163 = term162;
ATprotect(&(term164));
term164 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is distributed in the hope that it will be useful, but \n        WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or \n        FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more \n        details.", 0, ATtrue));
ATprotect(&(term165));
term165 = term164;
ATprotect(&(term166));
term166 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or\n        modify it under the terms of the GNU General Public License as published by the \n        Free Software Foundation; either version 2 of the License, or (at your option) \n        any later version.", 0, ATtrue));
ATprotect(&(term167));
term167 = term166;
ATprotect(&(term168));
term168 = (ATerm) ATmakeAppl(ATmakeSymbol("You should have received a copy of the GNU Lesser General Public \n         License along with this library; if not, write to the Free Software Foundation, \n         Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA", 0, ATtrue));
ATprotect(&(term169));
term169 = term168;
ATprotect(&(term170));
term170 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is distributed in the hope that it will be useful, but \n         WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or \n         FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License \n         for more details.", 0, ATtrue));
ATprotect(&(term171));
term171 = term170;
ATprotect(&(term172));
term172 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or modify \n         it under the terms of the GNU Lesser General Public License as published by the \n         Free Software Foundation; either version 2 of the License, or (at your option) \n         any later version.", 0, ATtrue));
ATprotect(&(term173));
term173 = term172;
ATprotect(&(term174));
term174 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term175));
term175 = term174;
ATprotect(&(term176));
term176 = (ATerm) ATmakeAppl(sym_HelpString_2, term175, term175);
ATprotect(&(term177));
term177 = term176;
ATprotect(&(term178));
term178 = (ATerm) ATmakeAppl(sym_Chars_1, (ATerm) ATempty);
ATprotect(&(term179));
term179 = term178;
ATprotect(&(term180));
term180 = (ATerm) ATmakeInt(92);
ATprotect(&(term181));
term181 = term180;
ATprotect(&(term182));
term182 = (ATerm) ATmakeAppl(sym_EscapeSeq_1, term181);
ATprotect(&(term183));
term183 = term182;
ATprotect(&(term184));
term184 = (ATerm) ATmakeInt(93);
ATprotect(&(term185));
term185 = term184;
ATprotect(&(term186));
term186 = (ATerm) ATmakeAppl(sym_EscapeSeq_1, term185);
ATprotect(&(term187));
term187 = term186;
ATprotect(&(term188));
term188 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
ATprotect(&(term189));
term189 = term188;
ATprotect(&(term190));
term190 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
ATprotect(&(term191));
term191 = term190;
ATprotect(&(term192));
term192 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg.pp.af", 0, ATtrue));
ATprotect(&(term193));
term193 = term192;
ATprotect(&(term194));
term194 = (ATerm) ATmakeAppl(ATmakeSymbol("Specify main module in sdf definition", 0, ATtrue));
ATprotect(&(term195));
term195 = term194;
ATprotect(&(term196));
term196 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-desugar", 0, ATtrue));
ATprotect(&(term197));
term197 = term196;
ATprotect(&(term198));
term198 = (ATerm) ATmakeAppl(ATmakeSymbol("implodePT", 0, ATtrue));
ATprotect(&(term199));
term199 = term198;
ATprotect(&(term200));
term200 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
ATprotect(&(term201));
term201 = term200;
ATprotect(&(term202));
term202 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
ATprotect(&(term203));
term203 = term202;
ATprotect(&(term204));
term204 = (ATerm) ATmakeAppl(ATmakeSymbol("-n", 0, ATtrue));
ATprotect(&(term205));
term205 = term204;
ATprotect(&(term206));
term206 = (ATerm) ATmakeAppl(sym__2, term39, term69);
ATprotect(&(term207));
term207 = term206;
ATprotect(&(term208));
term208 = (ATerm) ATmakeAppl(ATmakeSymbol("--ignore-missing-cons", 0, ATtrue));
ATprotect(&(term209));
term209 = term208;
ATprotect(&(term210));
term210 = (ATerm) ATmakeAppl(ATmakeSymbol("Ignore productions that do not have a constructor (default: produce error)", 0, ATtrue));
ATprotect(&(term211));
term211 = term210;
ATprotect(&(term212));
term212 = (ATerm) ATmakeAppl(sym_HelpString_2, term209, term211);
ATprotect(&(term213));
term213 = term212;
ATprotect(&(term214));
term214 = (ATerm) ATmakeAppl(sym_AutoReportBugs_0);
ATprotect(&(term215));
term215 = term214;
ATprotect(&(term216));
term216 = (ATerm) ATmakeAppl(sym_OptionUsage_0);
ATprotect(&(term217));
term217 = term216;
ATprotect(&(term218));
term218 = (ATerm) ATmakeAppl(ATmakeSymbol("Generates an abstract syntax definition in the rtg language\n          from a SDF concrete syntax definition.", 0, ATtrue));
ATprotect(&(term219));
term219 = term218;
ATprotect(&(term220));
term220 = (ATerm) ATmakeAppl(sym_Summary_1, term219);
ATprotect(&(term221));
term221 = term220;
ATprotect(&(term222));
term222 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2rtg [OPTIONS]", 0, ATtrue));
ATprotect(&(term223));
term223 = term222;
ATprotect(&(term224));
term224 = (ATerm) ATmakeAppl(sym_Usage_1, term223);
ATprotect(&(term225));
term225 = term224;
ATprotect(&(term226));
term226 = (ATerm) ATmakeAppl(sym_CurrentXTCRepository_0);
ATprotect(&(term227));
term227 = term226;
ATprotect(&(term228));
term228 = (ATerm) ATmakeAppl(sym_DefaultXTCRepository_0);
ATprotect(&(term229));
term229 = term228;
ATprotect(&(term230));
term230 = (ATerm) ATmakeAppl(ATmakeSymbol("2002-2008", 0, ATtrue));
ATprotect(&(term231));
term231 = term230;
ATprotect(&(term232));
term232 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego Software Foundation <stratego@cs.uu.nl>", 0, ATtrue));
ATprotect(&(term233));
term233 = term232;
ATprotect(&(term234));
term234 = (ATerm) ATmakeAppl(sym_GNU__LGPL_2, term231, term233);
ATprotect(&(term235));
term235 = term234;
ATprotect(&(term236));
term236 = (ATerm) ATmakeAppl(ATmakeSymbol("Martin Bravenboer", 0, ATtrue));
ATprotect(&(term237));
term237 = term236;
ATprotect(&(term238));
term238 = (ATerm) ATmakeAppl(ATmakeSymbol("martin.bravenboer@gmail.com", 0, ATtrue));
ATprotect(&(term239));
term239 = term238;
ATprotect(&(term240));
term240 = (ATerm) ATmakeAppl(sym_Person_2, term237, term239);
ATprotect(&(term241));
term241 = term240;
ATprotect(&(term242));
term242 = (ATerm) ATmakeAppl(sym_Author_1, term241);
ATprotect(&(term243));
term243 = term242;
ATprotect(&(term244));
term244 = (ATerm) ATmakeAppl(sym_AutoProgram_0);
ATprotect(&(term245));
term245 = term244;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm table_get_0_0 (StrSL sl, ATerm t);
ATerm table_put_0_0 (StrSL sl, ATerm t);
ATerm table_create_0_0 (StrSL sl, ATerm t);
ATerm foldr_2_0 (StrSL sl, StrCL b_178, StrCL c_178, ATerm t);
ATerm separate_by_0_0 (StrSL sl, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm fetch_elem_1_0 (StrSL sl, StrCL r_176, ATerm t);
ATerm fetch_1_0 (StrSL sl, StrCL q_176, ATerm t);
ATerm length_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL k_176, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm remove_all_1_0 (StrSL sl, StrCL u_175, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL q_175, ATerm t);
ATerm collect_om_1_0 (StrSL sl, StrCL i_154, ATerm t);
ATerm finally_2_0 (StrSL sl, StrCL h_153, StrCL i_153, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL t_152, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL t_140, ATerm t);
ATerm oncetd_1_0 (StrSL sl, StrCL v_134, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL m_133, ATerm t);
ATerm perror_0_0 (StrSL sl, ATerm t);
ATerm read_text_file_0_0 (StrSL sl, ATerm t);
ATerm fputs_0_0 (StrSL sl, ATerm t);
ATerm fclose_0_0 (StrSL sl, ATerm t);
ATerm open_stream_0_0 (StrSL sl, ATerm t);
ATerm exit_0_0 (StrSL sl, ATerm t);
ATerm echo_0_0 (StrSL sl, ATerm t);
ATerm ReadFromFile_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm is_alphanum_0_0 (StrSL sl, ATerm t);
ATerm trim_chars_1_0 (StrSL sl, StrCL t_123, ATerm t);
ATerm split_before_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm string_as_chars_1_0 (StrSL sl, StrCL h_122, ATerm t);
ATerm explode_string_0_0 (StrSL sl, ATerm t);
ATerm implode_string_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm newname_0_0 (StrSL sl, ATerm t);
ATerm new_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL a_117, StrCL b_117, StrCL c_117, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL v_116, StrCL w_116, StrCL x_116, ATerm t);
ATerm if_verbose3_1_0 (StrSL sl, StrCL o_115, ATerm t);
ATerm if_verbose1_1_0 (StrSL sl, StrCL m_115, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm fatal_err_0_1 (StrSL sl, ATerm b_115, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm x_114, ATerm y_114, ATerm t);
ATerm log_0_3 (StrSL sl, ATerm u_114, ATerm v_114, ATerm w_114, ATerm t);
ATerm FILE_1_0 (StrSL sl, StrCL j_110, ATerm t);
ATerm xtc_location_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_5_0 (StrSL sl, StrCL q_109, StrCL r_109, StrCL s_109, StrCL u_109, StrCL v_109, ATerm t);
ATerm xtc_exit_0_0 (StrSL sl, ATerm t);
ATerm xtc_temp_files_1_0 (StrSL sl, StrCL g_109, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL k_108, StrCL l_108, ATerm t);
ATerm xtc_transform_1_0 (StrSL sl, StrCL j_108, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
ATerm xtc_new_file_0_0 (StrSL sl, ATerm t);
ATerm ast2box_0_1 (StrSL sl, ATerm z_105, ATerm t);
ATerm box2text_stream_0_2 (StrSL sl, ATerm x_105, ATerm y_105, ATerm t);
ATerm TupleTerm_1_0 (StrSL sl, StrCL g_84, ATerm t);
ATerm EscapeSeq_1_0 (StrSL sl, StrCL e_84, ATerm t);
ATerm Chars_1_0 (StrSL sl, StrCL d_84, ATerm t);
ATerm Term_1_0 (StrSL sl, StrCL v_83, ATerm t);
ATerm Nonterm_1_0 (StrSL sl, StrCL r_83, ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (StrSL sl, ATerm t);
ATerm term_1_0 (StrSL sl, StrCL k_68, ATerm t);
ATerm prod_3_0 (StrSL sl, StrCL a_68, StrCL d_68, StrCL e_68, ATerm t);
ATerm cf_1_0 (StrSL sl, StrCL u_67, ATerm t);
ATerm lex_1_0 (StrSL sl, StrCL t_67, ATerm t);
ATerm varsym_1_0 (StrSL sl, StrCL s_67, ATerm t);
ATerm opt_1_0 (StrSL sl, StrCL r_67, ATerm t);
ATerm iter_1_0 (StrSL sl, StrCL m_67, ATerm t);
ATerm iter_star_1_0 (StrSL sl, StrCL f_67, ATerm t);
ATerm iter_sep_2_0 (StrSL sl, StrCL g_66, StrCL h_66, ATerm t);
ATerm iter_star_sep_2_0 (StrSL sl, StrCL u_65, StrCL v_65, ATerm t);
ATerm sort_1_0 (StrSL sl, StrCL q_64, ATerm t);
ATerm parameterized_sort_2_0 (StrSL sl, StrCL o_64, StrCL p_64, ATerm t);
ATerm lit_1_0 (StrSL sl, StrCL n_64, ATerm t);
ATerm label_2_0 (StrSL sl, StrCL k_64, StrCL l_64, ATerm t);
ATerm seq_2_0 (StrSL sl, StrCL g_61, StrCL h_61, ATerm t);
ATerm alt_2_0 (StrSL sl, StrCL d_61, StrCL e_61, ATerm t);
ATerm HelpString_2_0 (StrSL sl, StrCL m_36, StrCL n_36, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm sdf2rtg_about_0_0 (StrSL sl, ATerm t);
ATerm sdf2rtg_usage_0_0 (StrSL sl, ATerm t);
static ATerm lifted121 (StrSL sl, ATerm t);
static ATerm lifted120 (StrSL sl, ATerm t);
static ATerm lifted119 (StrSL sl, ATerm t);
ATerm ignore_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted117 (StrSL sl, ATerm t);
static ATerm lifted116 (StrSL sl, ATerm t);
static ATerm lifted115 (StrSL sl, ATerm t);
static ATerm lifted114 (StrSL sl, ATerm t);
ATerm sdf2rtg_0_0 (StrSL sl, ATerm t);
static ATerm lifted112 (StrSL sl, ATerm t);
static ATerm lifted109 (StrSL sl, ATerm t);
static ATerm lifted108 (StrSL sl, ATerm t);
ATerm main_sdf2rtg_0_0 (StrSL sl, ATerm t);
ATerm pp_rtg_box_0_0 (StrSL sl, ATerm t);
static ATerm lifted107 (StrSL sl, ATerm t);
static ATerm lifted106 (StrSL sl, ATerm t);
static ATerm lifted105 (StrSL sl, ATerm t);
ATerm pp_rtg_file_0_1 (StrSL sl, ATerm l_35, ATerm t);
static ATerm lifted104 (StrSL sl, ATerm t);
static ATerm lifted102 (StrSL sl, ATerm t);
static ATerm lifted101 (StrSL sl, ATerm t);
static ATerm lifted100 (StrSL sl, ATerm t);
static ATerm lifted99 (StrSL sl, ATerm t);
static ATerm lifted98 (StrSL sl, ATerm t);
static ATerm lifted97 (StrSL sl, ATerm t);
static ATerm lifted96 (StrSL sl, ATerm t);
ATerm ExplodeId_0_0 (StrSL sl, ATerm t);
static ATerm lifted94 (StrSL sl, ATerm t);
static ATerm lifted89 (StrSL sl, ATerm t);
ATerm rtg_ppfix_0_0 (StrSL sl, ATerm t);
static ATerm lifted87 (StrSL sl, ATerm t);
ATerm ensure_help_string_0_0 (StrSL sl, ATerm t);
ATerm package_bugreport_0_0 (StrSL sl, ATerm t);
ATerm package_version_0_0 (StrSL sl, ATerm t);
ATerm package_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted86 (StrSL sl, ATerm t);
static ATerm lifted85 (StrSL sl, ATerm t);
static ATerm lifted83 (StrSL sl, ATerm t);
ATerm DesugarToolDoc_0_0 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
ATerm tool_doc_0_0 (StrSL sl, ATerm t);
ATerm add_arg_flags_0_0 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
ATerm pass_v_verbose_0_0 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
ATerm xtc_abox2text_1_0 (StrSL sl, StrCL x_25, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
ATerm xtc_ast2abox_1_0 (StrSL sl, StrCL e_25, ATerm t);
ATerm get_sdf_main_module_0_0 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
ATerm sdf_main_module_option_1_0 (StrSL sl, StrCL c_24, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
ATerm log_prod_0_3 (StrSL sl, ATerm p_22, ATerm s_22, ATerm t_22, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
ATerm Symbol2String_0_0 (StrSL sl, ATerm t);
ATerm sdf_symbol_to_string_0_0 (StrSL sl, ATerm t);
ATerm err_1_0 (StrSL sl, StrCL o_14, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
ATerm get_cnstr_name_0_0 (StrSL sl, ATerm t);
ATerm sort2nonterm_0_0 (StrSL sl, ATerm t);
ATerm sym2nonterm_0_0 (StrSL sl, ATerm t);
ATerm sym2tree_0_0 (StrSL sl, ATerm t);
ATerm is_empty_sym_0_0 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
ATerm syms2trees_0_0 (StrSL sl, ATerm t);
ATerm is_nonterm_generator_0_0 (StrSL sl, ATerm t);
ATerm is_list_symbol_0_0 (StrSL sl, ATerm t);
ATerm is_alt_symbol_0_0 (StrSL sl, ATerm t);
ATerm is_seq_symbol_0_0 (StrSL sl, ATerm t);
ATerm get_nonterm_of_0_0 (StrSL sl, ATerm t);
ATerm var2prodrule_0_0 (StrSL sl, ATerm t);
ATerm opt2prodrule_0_0 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
ATerm listinj2prodrule_0_0 (StrSL sl, ATerm t);
ATerm alt2prodrule_0_0 (StrSL sl, ATerm t);
ATerm seq2prodrule_0_0 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
ATerm inj2prodrule_0_0 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm prod2prodrule_0_0 (StrSL sl, ATerm t);
ATerm start_prod2tree_0_0 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm j_6 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
ATerm ignore_prod_0_0 (StrSL sl, ATerm t);
ATerm cycle_error_0_0 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
ATerm grammar2prodrules_0_0 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
ATerm core_sdf_grammar2rtg_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm xtc_pp_sdf2_0_0 (StrSL sl, ATerm t);
ATerm xtc_pp_rtg_0_0 (StrSL sl, ATerm t);
ATerm HelpString_2_0 (StrSL sl, StrCL m_36, StrCL n_36, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "HelpString_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_199 = NULL,g_199 = NULL,h_199 = NULL,k_199 = NULL,l_199 = NULL;
ATerm trm348;
trm348 = (ATerm) ATgetAnnotations(t);
if((trm348 == NULL))
trm348 = (ATerm) ATempty;
if(match_cons(t, sym_HelpString_2))
{
g_199 = ATgetArgument(t, 0);
h_199 = ATgetArgument(t, 1);
}
else
goto fail129 ;
j_199 = trm348;
t = g_199;
t = cl_fun(m_36)(cl_sl(m_36), t);
if((t == NULL))
goto fail129 ;
k_199 = t;
t = h_199;
t = cl_fun(n_36)(cl_sl(n_36), t);
if((t == NULL))
goto fail129 ;
l_199 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_HelpString_2, k_199, l_199), j_199);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail129 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_sdf2rtg_0_0(sl, t);
if((t == NULL))
goto fail128 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail128 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf2rtg_about_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf2rtg_about_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Config_1, (ATerm) ATinsert(ATinsert(ATempty, term227), term229))), term235), term243), term245);
t = tool_doc_0_0(sl, t);
if((t == NULL))
goto fail127 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail127 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf2rtg_usage_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf2rtg_usage_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term215), term217), term221), term225);
t = tool_doc_0_0(sl, t);
if((t == NULL))
goto fail126 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail126 :
--__tracing_table_counter;
return(NULL);
}
ATerm ignore_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ignore_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_207 = { &(lifted119) , &(frame) };
StrCL lifted119_cl = &(m_207);
struct str_closure n_207 = { &(lifted120) , &(frame) };
StrCL lifted120_cl = &(n_207);
struct str_closure o_207 = { &(lifted121) , &(frame) };
StrCL lifted121_cl = &(o_207);
t = Option_3_0(sl, lifted119_cl, lifted120_cl, lifted121_cl, t);
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
t = term213;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail125 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted120 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted120";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term207;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail124 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail124 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted119 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted119";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--ignore-missing-cons", 0, ATtrue))))
goto fail123 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail123 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf2rtg_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf2rtg_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm346 = t;
struct str_closure h_207 = { &(lifted114) , &(frame) };
StrCL lifted114_cl = &(h_207);
struct str_closure i_207 = { &(lifted115) , &(frame) };
StrCL lifted115_cl = &(i_207);
t = xtc_transform_2_0(sl, lifted114_cl, lifted115_cl, t);
if((t == NULL))
goto label191 ;
{
struct str_closure j_207 = { &(lifted116) , &(frame) };
StrCL lifted116_cl = &(j_207);
t = xtc_transform_1_0(sl, lifted116_cl, t);
if((t == NULL))
goto label191 ;
{
struct str_closure k_207 = { &(lifted117) , &(frame) };
StrCL lifted117_cl = &(k_207);
struct str_closure l_207 = { &(pass_verbose_0_0) , sl };
StrCL lifted118_cl = &(l_207);
t = xtc_transform_2_0(sl, lifted117_cl, lifted118_cl, t);
if((t == NULL))
goto label191 ;
t = read_from_0_0(sl, t);
if((t == NULL))
goto label191 ;
t = core_sdf_grammar2rtg_0_0(sl, t);
if((t == NULL))
goto label191 ;
t = xtc_pp_rtg_0_0(sl, t);
if((t == NULL))
goto label191 ;
}
}
goto label190 ;
label191 :
t = trm346;
t = term17;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto fail117 ;
else
goto label190 ;
label190 :
;
}
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
t = term197;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail121 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted116 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted116";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term199;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail120 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted115 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted115";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_35 = NULL,b_36 = NULL,a_36 = NULL,c_36 = NULL;
b_36 = t;
t = get_sdf_main_module_0_0(sl_up(sl), t);
if((t == NULL))
goto fail119 ;
z_35 = t;
t = b_36;
c_36 = t;
t = pass_v_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail119 ;
a_36 = t;
t = c_36;
{
ATerm trm347;
trm347 = CheckATermList(a_36);
if((trm347 == NULL))
goto fail119 ;
t = (ATerm) ATinsert(ATinsert(ATinsert((ATermList)trm347, z_35), term203), term205);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail119 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted114 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted114";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term201;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail118 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_sdf2rtg_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_sdf2rtg_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_207 = { &(lifted108) , &(frame) };
StrCL lifted108_cl = &(c_207);
struct str_closure d_207 = { &(sdf2rtg_usage_0_0) , sl };
StrCL lifted110_cl = &(d_207);
struct str_closure e_207 = { &(sdf2rtg_about_0_0) , sl };
StrCL lifted111_cl = &(e_207);
struct str_closure f_207 = { &(lifted112) , &(frame) };
StrCL lifted112_cl = &(f_207);
struct str_closure g_207 = { &(sdf2rtg_0_0) , sl };
StrCL lifted113_cl = &(g_207);
t = xtc_io_wrap_5_0(sl, lifted108_cl, lifted110_cl, lifted111_cl, lifted112_cl, lifted113_cl, t);
if((t == NULL))
goto fail113 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail113 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted112 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted112";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term197), term199), term201);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail116 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted108 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted108";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm345 = t;
struct str_closure b_207 = { &(lifted109) , &(frame) };
StrCL lifted109_cl = &(b_207);
t = sdf_main_module_option_1_0(sl_up(sl), lifted109_cl, t);
if((t == NULL))
goto label189 ;
goto label188 ;
label189 :
t = trm345;
t = ignore_option_0_0(sl_up(sl), t);
if((t == NULL))
goto fail114 ;
else
goto label188 ;
label188 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail114 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted109 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted109";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term195;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail115 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp_rtg_box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp_rtg_box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
t = rtg_ppfix_0_0(sl, t);
if((t == NULL))
goto fail112 ;
w_35 = t;
y_35 = t;
t = term193;
t = xtc_find_0_0(sl, t);
if((t == NULL))
goto fail112 ;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto fail112 ;
x_35 = t;
t = y_35;
t = (ATerm) ATinsert(ATempty, x_35);
v_35 = t;
t = w_35;
t = ast2box_0_1(sl, v_35, t);
if((t == NULL))
goto fail112 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail112 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp_rtg_file_0_1 (StrSL sl, ATerm l_35, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp_rtg_file_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm m_35 = NULL,n_35 = NULL;
sl_init_var(0, m_35);
{
struct str_closure z_206 = { &(lifted105) , &(frame) };
StrCL lifted105_cl = &(z_206);
struct str_closure a_207 = { &(lifted106) , &(frame) };
StrCL lifted106_cl = &(a_207);
t = pp_rtg_box_0_0(sl, t);
if((t == NULL))
goto fail108 ;
n_35 = t;
t = (ATerm) ATmakeAppl(sym__2, l_35, term191);
{
ATerm trm343 = t;
t = open_stream_0_0(sl, t);
if((t == NULL))
goto label187 ;
goto label186 ;
label187 :
t = trm343;
{
ATerm q_202 = NULL;
if(match_cons(t, sym__2))
{
q_202 = ATgetArgument(t, 0);
{
ATerm trm344 = ATgetArgument(t, 1);
}
}
else
goto fail108 ;
t = q_202;
t = perror_0_0(sl, t);
if((t == NULL))
goto fail108 ;
goto fail108 ;
}
label186 :
;
if((m_35 == NULL))
{
m_35 = t;
}
else
if((m_35 != t))
goto fail108 ;
t = n_35;
t = finally_2_0(sl, lifted105_cl, lifted106_cl, t);
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
static ATerm lifted106 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted106";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_206 = { &(lifted107) , &(frame) };
StrCL lifted107_cl = &(y_206);
t = try_1_0(sl_up(sl), lifted107_cl, t);
if((t == NULL))
goto fail110 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail110 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted107 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted107";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail111 ;
else
{
t = sl_readvar(0, sl_up(sl));
}
t = fclose_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail111 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail111 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted105 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted105";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_35 = NULL,r_35 = NULL;
r_35 = t;
t = term117;
q_35 = t;
t = r_35;
if((sl_readvar(0, sl) == NULL))
goto fail109 ;
else
{
t = box2text_stream_0_2(sl_up(sl), q_35, sl_readvar(0, sl), t);
if((t == NULL))
goto fail109 ;
}
if((sl_readvar(0, sl) == NULL))
goto fail109 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term189, sl_readvar(0, sl));
}
t = fputs_0_0(sl_up(sl), t);
if((t == NULL))
goto fail109 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail109 :
--__tracing_table_counter;
return(NULL);
}
ATerm ExplodeId_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ExplodeId_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm i_34 = NULL;
sl_init_var(0, i_34);
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail99 ;
{
struct str_closure n_206 = { &(lifted96) , &(frame) };
StrCL lifted96_cl = &(n_206);
struct str_closure q_206 = { &(lifted97) , &(frame) };
StrCL lifted97_cl = &(q_206);
t = foldr_2_0(sl, lifted96_cl, lifted97_cl, t);
if((t == NULL))
goto fail99 ;
{
struct str_closure s_206 = { &(lifted98) , &(frame) };
StrCL lifted98_cl = &(s_206);
t = filter_1_0(sl, lifted98_cl, t);
if((t == NULL))
goto fail99 ;
{
ATerm trm336 = t;
ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
t_34 = t;
{
ATerm trm337;
trm337 = (ATerm) ATgetAnnotations(t);
if((trm337 == NULL))
trm337 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
u_34 = ATgetFirst((ATermList) t);
v_34 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label179 ;
z_34 = trm337;
t = u_34;
{
struct str_closure u_206 = { &(lifted100) , &(frame) };
StrCL lifted100_cl = &(u_206);
t = Chars_1_0(sl, lifted100_cl, t);
if((t == NULL))
goto label179 ;
x_34 = t;
t = v_34;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label179 ;
y_34 = t;
{
ATerm trm341;
trm341 = CheckATermList(y_34);
if((trm341 == NULL))
goto label179 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm341, x_34), z_34);
t = t_34;
}
}
}
{
ATerm a_35 = NULL,b_35 = NULL;
if((i_34 == NULL))
goto fail99 ;
else
{
t = i_34;
}
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail99 ;
b_35 = t;
a_35 = t;
t = (ATerm) ATmakeAppl(sym_Plain_1, a_35);
goto label178 ;
}
label179 :
t = trm336;
{
ATerm e_35 = NULL,f_35 = NULL;
struct str_closure x_206 = { &(lifted102) , &(frame) };
StrCL lifted102_cl = &(x_206);
t = map_1_0(sl, lifted102_cl, t);
if((t == NULL))
goto fail99 ;
f_35 = t;
e_35 = t;
t = (ATerm) ATmakeAppl(sym_Quoted_1, e_35);
goto label178 ;
}
label178 :
;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted102 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted102";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm342 = t;
struct str_closure v_206 = { &(implode_string_0_0) , sl_up(sl) };
StrCL lifted103_cl = &(v_206);
t = Chars_1_0(sl_up(sl), lifted103_cl, t);
if((t == NULL))
goto label185 ;
goto label184 ;
label185 :
t = trm342;
{
struct str_closure w_206 = { &(lifted104) , &(frame) };
StrCL lifted104_cl = &(w_206);
t = EscapeSeq_1_0(sl_up(sl), lifted104_cl, t);
if((t == NULL))
goto fail106 ;
else
goto label184 ;
}
label184 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail106 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted104 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted104";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_35 = NULL,d_35 = NULL;
d_35 = t;
c_35 = t;
t = (ATerm) ATinsert(ATempty, c_35);
t = implode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail107 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail107 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted100 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted100";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_206 = { &(lifted101) , &(frame) };
StrCL lifted101_cl = &(t_206);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail104 ;
t = map_1_0(sl_up(sl), lifted101_cl, t);
if((t == NULL))
goto fail104 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail104 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted101 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted101";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm338 = t;
t = is_alphanum_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label181 ;
goto label180 ;
label181 :
t = trm338;
{
ATerm trm339 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 39))))
goto label182 ;
goto label180 ;
label182 :
t = trm339;
{
ATerm trm340 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 45))))
goto label183 ;
goto label180 ;
label183 :
t = trm340;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 95)))
goto label180 ;
else
goto fail105 ;
}
}
label180 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail105 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted98 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted98";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm335 = t;
struct str_closure r_206 = { &(lifted99) , &(frame) };
StrCL lifted99_cl = &(r_206);
t = Chars_1_0(sl_up(sl), lifted99_cl, t);
if((t == NULL))
goto label177 ;
goto fail102 ;
label177 :
t = trm335;
goto label176 ;
label176 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted99 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted99";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail103 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted97 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted97";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm323 = t;
ATerm k_34 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm324 = ATgetArgument(t, 0);
if(!(((ATgetType(trm324) == AT_INT) && (ATgetInt((ATermInt) trm324) == 92))))
goto label173 ;
k_34 = ATgetArgument(t, 1);
}
else
goto label173 ;
{
ATerm trm325;
trm325 = CheckATermList(k_34);
if((trm325 == NULL))
goto label173 ;
t = (ATerm) ATinsert((ATermList)trm325, term183);
}
goto label172 ;
label173 :
t = trm323;
{
ATerm trm326 = t;
ATerm l_34 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm327 = ATgetArgument(t, 0);
if(!(((ATgetType(trm327) == AT_INT) && (ATgetInt((ATermInt) trm327) == 93))))
goto label174 ;
l_34 = ATgetArgument(t, 1);
}
else
goto label174 ;
{
ATerm trm328;
trm328 = CheckATermList(l_34);
if((trm328 == NULL))
goto label174 ;
t = (ATerm) ATinsert((ATermList)trm328, term187);
}
goto label172 ;
label174 :
t = trm326;
{
ATerm trm329 = t;
ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
if(match_cons(t, sym__2))
{
m_34 = ATgetArgument(t, 0);
{
ATerm trm330 = ATgetArgument(t, 1);
if(((ATgetType(trm330) == AT_LIST) && !(ATisEmpty(trm330))))
{
ATerm trm331 = ATgetFirst((ATermList) trm330);
if(match_cons(trm331, sym_Chars_1))
{
n_34 = ATgetArgument(trm331, 0);
}
else
goto label175 ;
o_34 = (ATerm) ATgetNext((ATermList) trm330);
}
else
goto label175 ;
}
}
else
goto label175 ;
{
ATerm trm333;
ATerm trm332;
trm332 = CheckATermList(o_34);
if((trm332 == NULL))
goto label175 ;
trm333 = CheckATermList(n_34);
if((trm333 == NULL))
goto label175 ;
t = (ATerm) ATinsert((ATermList)trm332, (ATerm) ATmakeAppl(sym_Chars_1, (ATerm) ATinsert((ATermList)trm333, m_34)));
}
goto label172 ;
label175 :
t = trm329;
{
ATerm r_34 = NULL,s_34 = NULL;
if(match_cons(t, sym__2))
{
r_34 = ATgetArgument(t, 0);
s_34 = ATgetArgument(t, 1);
}
else
goto fail101 ;
{
ATerm trm334;
trm334 = CheckATermList(s_34);
if((trm334 == NULL))
goto fail101 ;
t = (ATerm) ATinsert((ATermList)trm334, (ATerm) ATmakeAppl(sym_Chars_1, (ATerm) ATinsert(ATempty, r_34)));
goto label172 ;
}
}
}
}
label172 :
;
}
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
t = (ATerm) ATinsert(ATempty, term179);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
ATerm rtg_ppfix_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rtg_ppfix_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_206 = { &(lifted89) , &(frame) };
StrCL lifted89_cl = &(m_206);
t = topdown_1_0(sl, lifted89_cl, t);
if((t == NULL))
goto fail96 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted89 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted89";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm320 = t;
ATerm h_34 = NULL;
h_34 = t;
{
ATerm trm321 = t;
struct str_closure g_206 = { &(is_string_0_0) , sl_up(sl) };
StrCL lifted90_cl = &(g_206);
t = Term_1_0(sl_up(sl), lifted90_cl, t);
if((t == NULL))
goto label170 ;
goto label169 ;
label170 :
t = trm321;
{
struct str_closure h_206 = { &(is_string_0_0) , sl_up(sl) };
StrCL lifted91_cl = &(h_206);
t = Nonterm_1_0(sl_up(sl), lifted91_cl, t);
if((t == NULL))
goto label168 ;
else
goto label169 ;
}
label169 :
;
t = h_34;
}
{
ATerm trm322 = t;
struct str_closure i_206 = { &(ExplodeId_0_0) , sl_up(sl) };
StrCL lifted92_cl = &(i_206);
t = Term_1_0(sl_up(sl), lifted92_cl, t);
if((t == NULL))
goto label171 ;
goto label167 ;
label171 :
t = trm322;
{
struct str_closure j_206 = { &(ExplodeId_0_0) , sl_up(sl) };
StrCL lifted93_cl = &(j_206);
t = Nonterm_1_0(sl_up(sl), lifted93_cl, t);
if((t == NULL))
goto fail97 ;
else
goto label167 ;
}
}
label168 :
t = trm320;
{
struct str_closure l_206 = { &(lifted94) , &(frame) };
StrCL lifted94_cl = &(l_206);
t = try_1_0(sl_up(sl), lifted94_cl, t);
if((t == NULL))
goto fail97 ;
else
goto label167 ;
}
label167 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted94 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted94";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_206 = { &(int_to_string_0_0) , sl_up(sl_up(sl)) };
StrCL lifted95_cl = &(k_206);
t = TupleTerm_1_0(sl_up(sl_up(sl)), lifted95_cl, t);
if((t == NULL))
goto fail98 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
ATerm ensure_help_string_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ensure_help_string_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm317 = t;
struct str_closure e_206 = { &(lifted87) , &(frame) };
StrCL lifted87_cl = &(e_206);
struct str_closure f_206 = { &(is_string_0_0) , sl };
StrCL lifted88_cl = &(f_206);
t = HelpString_2_0(sl, lifted87_cl, lifted88_cl, t);
if((t == NULL))
goto label163 ;
goto label162 ;
label163 :
t = trm317;
{
ATerm trm319 = t;
ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
d_34 = t;
g_34 = t;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label166 ;
t = (ATerm) ATmakeAppl(sym__2, d_34, term97);
t = split_before_0_0(sl, t);
if((t == NULL))
goto label166 ;
if(match_cons(t, sym__2))
{
e_34 = ATgetArgument(t, 0);
f_34 = ATgetArgument(t, 1);
}
else
goto label166 ;
t = g_34;
t = (ATerm) ATmakeAppl(sym_HelpString_2, e_34, f_34);
goto label162 ;
label166 :
t = trm319;
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto fail94 ;
t = term177;
goto label162 ;
}
label162 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted87 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted87";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm318 = t;
t = is_string_0_0(sl_up(sl), t);
if((t == NULL))
goto label165 ;
goto label164 ;
label165 :
t = trm318;
t = is_list_0_0(sl_up(sl), t);
if((t == NULL))
goto fail95 ;
else
goto label164 ;
label164 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
ATerm package_bugreport_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "package_bugreport_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = PACKAGE_BUGREPORT_TERM();
if((t == NULL))
goto fail93 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
ATerm package_version_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "package_version_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = PACKAGE_VERSION_TERM();
if((t == NULL))
goto fail92 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
ATerm package_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "package_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = PACKAGE_NAME_TERM();
if((t == NULL))
goto fail91 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
ATerm DesugarToolDoc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "DesugarToolDoc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm299 = t;
ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
if(match_cons(t, sym_Usage_1))
{
a_34 = ATgetArgument(t, 0);
}
else
goto label144 ;
c_34 = t;
t = (ATerm) ATmakeAppl(sym__2, term119, a_34);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label144 ;
b_34 = t;
t = c_34;
t = (ATerm) ATmakeAppl(sym_Line_1, b_34);
goto label143 ;
label144 :
t = trm299;
{
ATerm trm300 = t;
ATerm z_33 = NULL;
if(match_cons(t, sym_Summary_1))
{
z_33 = ATgetArgument(t, 0);
}
else
goto label145 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term121, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Paragraph_1, z_33)));
goto label143 ;
label145 :
t = trm300;
{
ATerm trm301 = t;
ATerm x_30 = NULL,y_30 = NULL,w_33 = NULL;
if(match_cons(t, sym_Description_1))
{
x_30 = ATgetArgument(t, 0);
}
else
goto label146 ;
w_33 = t;
t = x_30;
{
struct str_closure a_206 = { &(lifted83) , &(frame) };
StrCL lifted83_cl = &(a_206);
t = map_1_0(sl, lifted83_cl, t);
if((t == NULL))
goto label146 ;
y_30 = t;
t = w_33;
t = (ATerm) ATmakeAppl(sym_HSection_2, term123, y_30);
}
goto label143 ;
label146 :
t = trm301;
{
ATerm trm302 = t;
ATerm v_30 = NULL,w_30 = NULL;
if(!(match_cons(t, sym_OptionUsage_0)))
goto label147 ;
w_30 = t;
t = term129;
t = table_get_0_0(sl, t);
if((t == NULL))
goto label147 ;
t = reverse_0_0(sl, t);
if((t == NULL))
goto label147 ;
{
struct str_closure b_206 = { &(ensure_help_string_0_0) , sl };
StrCL lifted84_cl = &(b_206);
t = map_1_0(sl, lifted84_cl, t);
if((t == NULL))
goto label147 ;
{
struct str_closure c_206 = { &(lifted85) , &(frame) };
StrCL lifted85_cl = &(c_206);
t = filter_1_0(sl, lifted85_cl, t);
if((t == NULL))
goto label147 ;
v_30 = t;
t = w_30;
t = (ATerm) ATmakeAppl(sym_HSection_2, term131, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, v_30)));
}
}
goto label143 ;
label147 :
t = trm302;
{
ATerm trm303 = t;
ATerm h_30 = NULL;
if(match_cons(t, sym_Authors_1))
{
h_30 = ATgetArgument(t, 0);
}
else
goto label148 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term133, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ItemList_1, h_30)));
goto label143 ;
label148 :
t = trm303;
{
ATerm trm304 = t;
ATerm g_30 = NULL;
if(match_cons(t, sym_Author_1))
{
g_30 = ATgetArgument(t, 0);
}
else
goto label149 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term135, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ItemList_1, (ATerm) ATinsert(ATempty, g_30))));
goto label143 ;
label149 :
t = trm304;
{
ATerm trm305 = t;
ATerm z_29 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
if(match_cons(t, sym_Person_2))
{
z_29 = ATgetArgument(t, 0);
d_30 = ATgetArgument(t, 1);
}
else
goto label150 ;
f_30 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term137), d_30), term139), z_29);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label150 ;
e_30 = t;
t = f_30;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, e_30);
goto label143 ;
label150 :
t = trm305;
{
ATerm trm306 = t;
ATerm y_29 = NULL;
if(match_cons(t, sym_WebHome_1))
{
y_29 = ATgetArgument(t, 0);
}
else
goto label151 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term141, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Line_1, y_29)));
goto label143 ;
label151 :
t = trm306;
{
ATerm trm307 = t;
ATerm w_29 = NULL,x_29 = NULL;
if(!(match_cons(t, sym_AutoReportBugs_0)))
goto label152 ;
x_29 = t;
t = term69;
t = package_bugreport_0_0(sl, t);
if((t == NULL))
goto label152 ;
w_29 = t;
t = x_29;
t = (ATerm) ATmakeAppl(sym_ReportBugs_1, w_29);
goto label143 ;
label152 :
t = trm307;
{
ATerm trm308 = t;
ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
if(match_cons(t, sym_ReportBugs_1))
{
t_29 = ATgetArgument(t, 0);
}
else
goto label153 ;
v_29 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, t_29), term143);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label153 ;
u_29 = t;
t = v_29;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, u_29);
goto label143 ;
label153 :
t = trm308;
{
ATerm trm309 = t;
ATerm i_29 = NULL,n_29 = NULL,j_29 = NULL,r_29 = NULL,m_29 = NULL,s_29 = NULL;
if(!(match_cons(t, sym_AutoProgram_0)))
goto label154 ;
n_29 = t;
t = term145;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label154 ;
i_29 = t;
t = n_29;
r_29 = t;
t = term69;
t = package_name_0_0(sl, t);
if((t == NULL))
goto label154 ;
j_29 = t;
t = r_29;
s_29 = t;
t = term69;
t = package_version_0_0(sl, t);
if((t == NULL))
goto label154 ;
m_29 = t;
t = s_29;
t = (ATerm) ATmakeAppl(sym_Program_3, i_29, j_29, m_29);
goto label143 ;
label154 :
t = trm309;
{
ATerm trm310 = t;
ATerm c_29 = NULL,d_29 = NULL,h_29 = NULL;
if(match_cons(t, sym_Program_3))
{
c_29 = ATgetArgument(t, 0);
d_29 = ATgetArgument(t, 1);
h_29 = ATgetArgument(t, 2);
}
else
goto label155 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, c_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Def_2, term147, (ATerm) ATmakeAppl(sym_Paragraph_1, h_29))), (ATerm) ATmakeAppl(sym_Def_2, term149, (ATerm) ATmakeAppl(sym_Paragraph_1, d_29))))));
goto label143 ;
label155 :
t = trm310;
{
ATerm trm311 = t;
ATerm b_29 = NULL;
if(match_cons(t, sym_Config_1))
{
b_29 = ATgetArgument(t, 0);
}
else
goto label156 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term151, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, b_29)));
goto label143 ;
label156 :
t = trm311;
{
ATerm trm312 = t;
ATerm z_28 = NULL,a_29 = NULL;
if(!(match_cons(t, sym_DefaultXTCRepository_0)))
goto label157 ;
a_29 = t;
t = term69;
t = GetInternalDefaultXtcRepository_0_0(sl, t);
if((t == NULL))
goto label157 ;
z_28 = t;
t = a_29;
t = (ATerm) ATmakeAppl(sym_ConfigItem_2, term153, z_28);
goto label143 ;
label157 :
t = trm312;
{
ATerm trm313 = t;
ATerm x_28 = NULL,y_28 = NULL;
if(!(match_cons(t, sym_CurrentXTCRepository_0)))
goto label158 ;
y_28 = t;
t = term69;
t = xtc_location_0_0(sl, t);
if((t == NULL))
goto label158 ;
x_28 = t;
t = y_28;
t = (ATerm) ATmakeAppl(sym_ConfigItem_2, term155, x_28);
goto label143 ;
label158 :
t = trm313;
{
ATerm trm314 = t;
ATerm v_28 = NULL,w_28 = NULL;
if(match_cons(t, sym_ConfigItem_2))
{
v_28 = ATgetArgument(t, 0);
w_28 = ATgetArgument(t, 1);
}
else
goto label159 ;
t = (ATerm) ATmakeAppl(sym_Def_2, v_28, (ATerm) ATmakeAppl(sym_Line_1, w_28));
goto label143 ;
label159 :
t = trm314;
{
ATerm trm315 = t;
ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
if(match_cons(t, sym_License_1))
{
n_28 = ATgetArgument(t, 0);
}
else
goto label160 ;
p_28 = t;
t = n_28;
{
struct str_closure d_206 = { &(lifted86) , &(frame) };
StrCL lifted86_cl = &(d_206);
t = map_1_0(sl, lifted86_cl, t);
if((t == NULL))
goto label160 ;
o_28 = t;
t = p_28;
t = (ATerm) ATmakeAppl(sym_HSection_2, term157, o_28);
}
goto label143 ;
label160 :
t = trm315;
{
ATerm trm316 = t;
ATerm i_28 = NULL,j_28 = NULL,l_28 = NULL,m_28 = NULL;
if(match_cons(t, sym_GNU__GPL_2))
{
i_28 = ATgetArgument(t, 0);
j_28 = ATgetArgument(t, 1);
}
else
goto label161 ;
m_28 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_28), term159), i_28), term161);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label161 ;
l_28 = t;
t = m_28;
t = (ATerm) ATmakeAppl(sym_License_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term163), term165), term167), l_28));
goto label143 ;
label161 :
t = trm316;
{
ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
if(match_cons(t, sym_GNU__LGPL_2))
{
e_28 = ATgetArgument(t, 0);
f_28 = ATgetArgument(t, 1);
}
else
goto fail87 ;
h_28 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_28), term159), e_28), term161);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail87 ;
g_28 = t;
t = h_28;
t = (ATerm) ATmakeAppl(sym_License_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term169), term171), term173), g_28));
goto label143 ;
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
label143 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted86 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted86";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_28 = NULL,u_28 = NULL;
u_28 = t;
q_28 = t;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, q_28);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted85 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted85";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_30 = NULL,m_30 = NULL;
if(match_cons(t, sym_HelpString_2))
{
i_30 = ATgetArgument(t, 0);
m_30 = ATgetArgument(t, 1);
}
else
goto fail89 ;
t = (ATerm) ATmakeAppl(sym_Def_2, i_30, (ATerm) ATmakeAppl(sym_Paragraph_1, m_30));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted83 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted83";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_33 = NULL,y_33 = NULL;
y_33 = t;
x_33 = t;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, x_33);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
ATerm tool_doc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tool_doc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_28 = NULL;
c_28 = t;
{
struct str_closure z_205 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(z_205);
t = xtc_temp_files_1_0(sl, lifted77_cl, t);
if((t == NULL))
goto fail81 ;
t = c_28;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_28 = NULL;
struct str_closure v_205 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(v_205);
t = topdown_1_0(sl_up(sl), lifted78_cl, t);
if((t == NULL))
goto fail82 ;
t = write_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail82 ;
{
struct str_closure w_205 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(w_205);
t = xtc_transform_1_0(sl_up(sl), lifted80_cl, t);
if((t == NULL))
goto fail82 ;
{
struct str_closure x_205 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(x_205);
t = xtc_abox2text_1_0(sl_up(sl), lifted81_cl, t);
if((t == NULL))
goto fail82 ;
d_28 = t;
{
struct str_closure y_205 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(y_205);
t = FILE_1_0(sl_up(sl), lifted82_cl, t);
if((t == NULL))
goto fail82 ;
t = d_28;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted82 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted82";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = read_text_file_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail86 ;
t = echo_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail86 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term117;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term115;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_205 = { &(DesugarToolDoc_0_0) , sl_up(sl_up(sl)) };
StrCL lifted79_cl = &(u_205);
t = repeat_1_0(sl_up(sl_up(sl)), lifted79_cl, t);
if((t == NULL))
goto fail83 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
ATerm add_arg_flags_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "add_arg_flags_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm295 = t;
if(match_cons(t, sym__2))
{
ATerm trm296 = ATgetArgument(t, 0);
ATerm trm297 = ATgetArgument(t, 1);
if(!(((ATgetType(trm297) == AT_LIST) && ATisEmpty(trm297))))
goto label142 ;
}
else
goto label142 ;
t = (ATerm) ATempty;
goto label141 ;
label142 :
t = trm295;
{
ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
if(match_cons(t, sym__2))
{
w_27 = ATgetArgument(t, 0);
x_27 = ATgetArgument(t, 1);
}
else
goto fail80 ;
z_27 = t;
t = x_27;
b_28 = t;
a_28 = t;
t = (ATerm) ATmakeAppl(sym__2, w_27, a_28);
t = separate_by_0_0(sl, t);
if((t == NULL))
goto fail80 ;
y_27 = t;
t = z_27;
{
ATerm trm298;
trm298 = CheckATermList(y_27);
if((trm298 == NULL))
goto fail80 ;
t = (ATerm) ATinsert((ATermList)trm298, w_27);
goto label141 ;
}
}
label141 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
ATerm pass_v_verbose_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pass_v_verbose_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_205 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(t_205);
t = (ATerm) ATempty;
t = if_verbose3_1_0(sl, lifted76_cl, t);
if((t == NULL))
goto fail78 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term113);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_abox2text_1_0 (StrSL sl, StrCL x_25, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_abox2text_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, x_25);
{
struct str_closure r_205 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(r_205);
struct str_closure s_205 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(s_205);
t = xtc_transform_2_0(sl, lifted74_cl, lifted75_cl, t);
if((t == NULL))
goto fail75 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_25 = NULL,b_26 = NULL,a_26 = NULL,c_26 = NULL;
b_26 = t;
t = term69;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail77 ;
t = int_to_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail77 ;
z_25 = t;
t = b_26;
c_26 = t;
t = term69;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail77 ;
a_26 = t;
t = c_26;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, z_25), term111), a_26);
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail77 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term1;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_ast2abox_1_0 (StrSL sl, StrCL e_25, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_ast2abox_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, e_25);
{
struct str_closure p_205 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(p_205);
struct str_closure q_205 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(q_205);
t = xtc_transform_2_0(sl, lifted71_cl, lifted72_cl, t);
if((t == NULL))
goto fail72 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_25 = NULL,r_25 = NULL,k_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
r_25 = t;
t = term69;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail74 ;
h_25 = t;
t = r_25;
u_25 = t;
t = term69;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail74 ;
{
struct str_closure o_205 = { &(xtc_find_0_0) , sl_up(sl) };
StrCL lifted73_cl = &(o_205);
t = map_1_0(sl_up(sl), lifted73_cl, t);
if((t == NULL))
goto fail74 ;
w_25 = t;
v_25 = t;
t = (ATerm) ATmakeAppl(sym__2, term109, v_25);
t = add_arg_flags_0_0(sl_up(sl), t);
if((t == NULL))
goto fail74 ;
k_25 = t;
t = u_25;
t = (ATerm) ATmakeAppl(sym__2, h_25, k_25);
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail74 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term107;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_sdf_main_module_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_sdf_main_module_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm294 = t;
t = term99;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label140 ;
goto label139 ;
label140 :
t = trm294;
t = term105;
goto label139 ;
label139 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf_main_module_option_1_0 (StrSL sl, StrCL c_24, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf_main_module_option_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, c_24);
{
struct str_closure l_205 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(l_205);
struct str_closure m_205 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(m_205);
struct str_closure n_205 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(n_205);
t = ArgOption_3_0(sl, lifted68_cl, lifted69_cl, lifted70_cl, t);
if((t == NULL))
goto fail67 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_24 = NULL,o_24 = NULL;
o_24 = t;
t = term69;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail70 ;
n_24 = t;
t = o_24;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term101), n_24), term103);
t = concat_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail70 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_23 = NULL,d_24 = NULL,m_24 = NULL;
z_23 = t;
m_24 = t;
d_24 = t;
t = (ATerm) ATmakeAppl(sym__2, term99, d_24);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail69 ;
t = z_23;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm293 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-m", 0, ATtrue))))
goto label138 ;
goto label137 ;
label138 :
t = trm293;
if((ATgetSymbol(t) == ATmakeSymbol("--main", 0, ATtrue)))
goto label137 ;
else
goto fail68 ;
label137 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
ATerm log_prod_0_3 (StrSL sl, ATerm p_22, ATerm s_22, ATerm t_22, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "log_prod_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, t_22);
{
ATerm w_22 = NULL,c_23 = NULL,e_23 = NULL,h_23 = NULL;
sl_init_var(1, w_22);
c_23 = t;
{
struct str_closure k_205 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(k_205);
t = xtc_temp_files_1_0(sl, lifted64_cl, t);
if((t == NULL))
goto fail62 ;
t = log_0_2(sl, p_22, s_22, t);
if((t == NULL))
goto fail62 ;
h_23 = t;
if((w_22 == NULL))
goto fail62 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term97, w_22);
}
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail62 ;
e_23 = t;
t = h_23;
t = log_0_2(sl, p_22, e_23, t);
if((t == NULL))
goto fail62 ;
t = c_23;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_23 = NULL;
if((sl_readvar(0, sl) == NULL))
goto fail63 ;
else
{
t = sl_readvar(0, sl);
}
t = write_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail63 ;
t = xtc_pp_sdf2_0_0(sl_up(sl), t);
if((t == NULL))
goto fail63 ;
if(match_cons(t, sym_FILE_1))
{
d_23 = ATgetArgument(t, 0);
}
else
goto fail63 ;
t = d_23;
t = read_text_file_0_0(sl_up(sl), t);
if((t == NULL))
goto fail63 ;
{
struct str_closure h_205 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(h_205);
t = trim_chars_1_0(sl_up(sl), lifted65_cl, t);
if((t == NULL))
goto fail63 ;
{
struct str_closure j_205 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(j_205);
t = string_as_chars_1_0(sl_up(sl), lifted66_cl, t);
if((t == NULL))
goto fail63 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail63 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_205 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(i_205);
t = filter_1_0(sl_up(sl_up(sl)), lifted67_cl, t);
if((t == NULL))
goto fail65 ;
}
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
{
ATerm trm291 = t;
ATerm trm292 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 10))))
goto label136 ;
goto label135 ;
label136 :
t = trm292;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 13)))
goto label135 ;
else
goto label134 ;
label135 :
;
goto fail66 ;
label134 :
t = trm291;
goto label133 ;
label133 :
;
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
{
ATerm trm288 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 10))))
goto label130 ;
goto label129 ;
label130 :
t = trm288;
{
ATerm trm289 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 13))))
goto label131 ;
goto label129 ;
label131 :
t = trm289;
{
ATerm trm290 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 32))))
goto label132 ;
goto label129 ;
label132 :
t = trm290;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 9)))
goto label129 ;
else
goto fail64 ;
}
}
label129 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
ATerm Symbol2String_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Symbol2String_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm264 = t;
ATerm t_21 = NULL;
if(match_cons(t, sym_cf_1))
{
t_21 = ATgetArgument(t, 0);
}
else
goto label111 ;
t = t_21;
t = Symbol2String_0_0(sl, t);
if((t == NULL))
goto label111 ;
goto label110 ;
label111 :
t = trm264;
{
ATerm trm265 = t;
ATerm k_21 = NULL;
if(match_cons(t, sym_lex_1))
{
k_21 = ATgetArgument(t, 0);
}
else
goto label112 ;
t = k_21;
t = Symbol2String_0_0(sl, t);
if((t == NULL))
goto label112 ;
goto label110 ;
label112 :
t = trm265;
{
ATerm trm266 = t;
if(match_cons(t, sym_char_class_1))
{
ATerm trm267 = ATgetArgument(t, 0);
}
else
goto label113 ;
t = term83;
goto label110 ;
label113 :
t = trm266;
{
ATerm trm268 = t;
if(match_cons(t, sym_lit_1))
{
ATerm trm269 = ATgetArgument(t, 0);
}
else
goto label114 ;
t = term85;
goto label110 ;
label114 :
t = trm268;
{
ATerm trm270 = t;
if(match_cons(t, sym_ci_lit_1))
{
ATerm trm271 = ATgetArgument(t, 0);
}
else
goto label115 ;
t = term87;
goto label110 ;
label115 :
t = trm270;
{
ATerm trm272 = t;
ATerm d_21 = NULL,e_21 = NULL,i_21 = NULL;
if(match_cons(t, sym_iter_1))
{
d_21 = ATgetArgument(t, 0);
}
else
goto label116 ;
i_21 = t;
t = d_21;
t = Symbol2String_0_0(sl, t);
if((t == NULL))
goto label116 ;
e_21 = t;
t = i_21;
t = (ATerm) ATmakeAppl(sym__2, term89, e_21);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label116 ;
goto label110 ;
label116 :
t = trm272;
{
ATerm trm273 = t;
ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
if(match_cons(t, sym_iter_star_1))
{
w_20 = ATgetArgument(t, 0);
}
else
goto label117 ;
y_20 = t;
t = w_20;
t = Symbol2String_0_0(sl, t);
if((t == NULL))
goto label117 ;
x_20 = t;
t = y_20;
t = (ATerm) ATmakeAppl(sym__2, term91, x_20);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label117 ;
goto label110 ;
label117 :
t = trm273;
{
ATerm trm274 = t;
ATerm d_20 = NULL,e_20 = NULL,i_20 = NULL,j_20 = NULL;
if(match_cons(t, sym_iter_sep_2))
{
e_20 = ATgetArgument(t, 0);
d_20 = ATgetArgument(t, 1);
}
else
goto label118 ;
j_20 = t;
t = e_20;
t = Symbol2String_0_0(sl, t);
if((t == NULL))
goto label118 ;
i_20 = t;
t = j_20;
t = (ATerm) ATmakeAppl(sym__2, term89, i_20);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label118 ;
goto label110 ;
label118 :
t = trm274;
{
ATerm trm275 = t;
ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,b_20 = NULL;
if(match_cons(t, sym_iter_star_sep_2))
{
q_19 = ATgetArgument(t, 0);
p_19 = ATgetArgument(t, 1);
}
else
goto label119 ;
b_20 = t;
t = q_19;
t = Symbol2String_0_0(sl, t);
if((t == NULL))
goto label119 ;
r_19 = t;
t = b_20;
t = (ATerm) ATmakeAppl(sym__2, term91, r_19);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label119 ;
goto label110 ;
label119 :
t = trm275;
{
ATerm trm276 = t;
ATerm k_19 = NULL,l_19 = NULL;
if(match_cons(t, sym_sort_1))
{
k_19 = ATgetArgument(t, 0);
}
else
goto label120 ;
l_19 = t;
t = k_19;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label120 ;
t = l_19;
t = k_19;
goto label110 ;
label120 :
t = trm276;
{
ATerm trm277 = t;
ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
if(match_cons(t, sym_parameterized_sort_2))
{
d_19 = ATgetArgument(t, 0);
e_19 = ATgetArgument(t, 1);
}
else
goto label121 ;
g_19 = t;
t = d_19;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label121 ;
t = e_19;
{
struct str_closure e_205 = { &(Symbol2String_0_0) , sl };
StrCL lifted61_cl = &(e_205);
t = map_1_0(sl, lifted61_cl, t);
if((t == NULL))
goto label121 ;
f_19 = t;
t = g_19;
{
ATerm trm278;
trm278 = CheckATermList(f_19);
if((trm278 == NULL))
goto label121 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm278, term93), d_19);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label121 ;
}
}
goto label110 ;
label121 :
t = trm277;
{
ATerm trm279 = t;
ATerm q_18 = NULL;
if(match_cons(t, sym_label_2))
{
ATerm trm280 = ATgetArgument(t, 0);
q_18 = ATgetArgument(t, 1);
}
else
goto label122 ;
t = q_18;
t = Symbol2String_0_0(sl, t);
if((t == NULL))
goto label122 ;
goto label110 ;
label122 :
t = trm279;
{
ATerm trm281 = t;
ATerm k_18 = NULL,l_18 = NULL,p_18 = NULL;
if(match_cons(t, sym_opt_1))
{
k_18 = ATgetArgument(t, 0);
}
else
goto label123 ;
p_18 = t;
t = k_18;
t = Symbol2String_0_0(sl, t);
if((t == NULL))
goto label123 ;
l_18 = t;
t = p_18;
t = (ATerm) ATmakeAppl(sym__2, term95, l_18);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label123 ;
goto label110 ;
label123 :
t = trm281;
{
ATerm trm282 = t;
ATerm y_17 = NULL,z_17 = NULL,i_18 = NULL,j_18 = NULL;
if(match_cons(t, sym_seq_2))
{
y_17 = ATgetArgument(t, 0);
z_17 = ATgetArgument(t, 1);
}
else
goto label124 ;
{
ATerm trm283;
trm283 = CheckATermList(z_17);
if((trm283 == NULL))
goto label124 ;
t = (ATerm) ATinsert((ATermList)trm283, y_17);
{
struct str_closure f_205 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(f_205);
t = filter_1_0(sl, lifted62_cl, t);
if((t == NULL))
goto label124 ;
{
struct str_closure g_205 = { &(Symbol2String_0_0) , sl };
StrCL lifted63_cl = &(g_205);
t = map_1_0(sl, lifted63_cl, t);
if((t == NULL))
goto label124 ;
j_18 = t;
i_18 = t;
t = (ATerm) ATmakeAppl(sym__2, term93, i_18);
t = separate_by_0_0(sl, t);
if((t == NULL))
goto label124 ;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label124 ;
}
}
}
goto label110 ;
label124 :
t = trm282;
{
ATerm l_17 = NULL,p_17 = NULL,q_17 = NULL,u_17 = NULL,t_17 = NULL,v_17 = NULL;
if(match_cons(t, sym_alt_2))
{
l_17 = ATgetArgument(t, 0);
p_17 = ATgetArgument(t, 1);
}
else
goto fail60 ;
u_17 = t;
t = l_17;
t = Symbol2String_0_0(sl, t);
if((t == NULL))
goto fail60 ;
q_17 = t;
t = u_17;
v_17 = t;
t = p_17;
t = Symbol2String_0_0(sl, t);
if((t == NULL))
goto fail60 ;
t_17 = t;
t = v_17;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_17), term93), q_17);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail60 ;
else
goto label110 ;
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
label110 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm284 = t;
ATerm trm285 = t;
if(match_cons(t, sym_lit_1))
{
ATerm trm286 = ATgetArgument(t, 0);
}
else
goto label128 ;
goto label127 ;
label128 :
t = trm285;
if(match_cons(t, sym_ci_lit_1))
{
ATerm trm287 = ATgetArgument(t, 0);
goto label127 ;
}
else
goto label126 ;
label127 :
;
goto fail61 ;
label126 :
t = trm284;
goto label125 ;
label125 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf_symbol_to_string_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf_symbol_to_string_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm263 = t;
t = Symbol2String_0_0(sl, t);
if((t == NULL))
goto label109 ;
t = newname_0_0(sl, t);
if((t == NULL))
goto label109 ;
goto label108 ;
label109 :
t = trm263;
{
ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,u_15 = NULL,z_15 = NULL,e_16 = NULL,f_16 = NULL,k_202 = NULL,l_202 = NULL,m_202 = NULL,n_202 = NULL,o_202 = NULL,p_202 = NULL,g_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,n_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,a_17 = NULL,c_17 = NULL,d_17 = NULL,f_17 = NULL,g_17 = NULL,k_17 = NULL;
q_15 = t;
t = term71;
n_15 = t;
t = q_15;
u_15 = t;
t = term73;
o_15 = t;
t = u_15;
z_15 = t;
f_16 = t;
e_16 = t;
p_15 = t;
t = z_15;
n_202 = t;
t = n_15;
k_202 = t;
t = n_202;
o_202 = t;
t = o_15;
l_202 = t;
t = o_202;
p_202 = t;
t = p_15;
m_202 = t;
t = p_202;
t = log_prod_0_3(sl, k_202, l_202, m_202, t);
if((t == NULL))
goto fail59 ;
j_16 = t;
t = term71;
g_16 = t;
t = j_16;
k_16 = t;
t = term75;
i_16 = t;
t = k_16;
t = log_0_2(sl, g_16, i_16, t);
if((t == NULL))
goto fail59 ;
q_16 = t;
t = term71;
n_16 = t;
t = q_16;
r_16 = t;
t = term77;
p_16 = t;
t = r_16;
t = log_0_2(sl, n_16, p_16, t);
if((t == NULL))
goto fail59 ;
v_16 = t;
t = term71;
s_16 = t;
t = v_16;
w_16 = t;
t = term79;
t_16 = t;
t = w_16;
t = log_0_2(sl, s_16, t_16, t);
if((t == NULL))
goto fail59 ;
t = new_0_0(sl, t);
if((t == NULL))
goto fail59 ;
c_17 = t;
t = term71;
x_16 = t;
t = c_17;
d_17 = t;
t = term81;
y_16 = t;
t = d_17;
f_17 = t;
k_17 = t;
g_17 = t;
a_17 = t;
t = f_17;
t = log_0_3(sl, x_16, y_16, a_17, t);
if((t == NULL))
goto fail59 ;
else
goto label108 ;
}
label108 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
ATerm err_1_0 (StrSL sl, StrCL o_14, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "err_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL;
v_14 = t;
t = term11;
p_14 = t;
t = v_14;
w_14 = t;
t = term69;
t = cl_fun(o_14)(cl_sl(o_14), t);
if((t == NULL))
goto fail58 ;
q_14 = t;
t = w_14;
x_14 = t;
z_14 = t;
y_14 = t;
r_14 = t;
t = x_14;
t = log_0_3(sl, p_14, q_14, r_14, t);
if((t == NULL))
goto fail58 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_cnstr_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_cnstr_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_205 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(d_205);
t = fetch_elem_1_0(sl, lifted60_cl, t);
if((t == NULL))
goto fail56 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm259 = t;
ATerm i_14 = NULL;
if(match_cons(t, sym_default_1))
{
ATerm trm260 = ATgetArgument(t, 0);
if(match_cons(trm260, sym_term_1))
{
ATerm trm261 = ATgetArgument(trm260, 0);
if(match_cons(trm261, sym_cons_1))
{
i_14 = ATgetArgument(trm261, 0);
}
else
goto label107 ;
}
else
goto label107 ;
}
else
goto label107 ;
t = i_14;
goto label106 ;
label107 :
t = trm259;
{
ATerm j_14 = NULL;
if(match_cons(t, sym_term_1))
{
ATerm trm262 = ATgetArgument(t, 0);
if(match_cons(trm262, sym_cons_1))
{
j_14 = ATgetArgument(trm262, 0);
}
else
goto fail57 ;
}
else
goto fail57 ;
t = j_14;
goto label106 ;
}
label106 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
ATerm sort2nonterm_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sort2nonterm_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm258 = t;
ATerm w_13 = NULL;
if(match_cons(t, sym_sort_1))
{
w_13 = ATgetArgument(t, 0);
}
else
goto label105 ;
t = (ATerm) ATmakeAppl(sym_Nonterm_1, w_13);
goto label104 ;
label105 :
t = trm258;
{
ATerm r_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
if(match_cons(t, sym_parameterized_sort_2))
{
r_13 = ATgetArgument(t, 0);
t_13 = ATgetArgument(t, 1);
}
else
goto fail55 ;
v_13 = t;
t = Symbol2String_0_0(sl, t);
if((t == NULL))
goto fail55 ;
u_13 = t;
t = v_13;
t = (ATerm) ATmakeAppl(sym_Nonterm_1, u_13);
goto label104 ;
}
label104 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
ATerm sym2nonterm_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sym2nonterm_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm256 = t;
ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
o_13 = t;
q_13 = t;
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto label102 ;
p_13 = t;
t = q_13;
t = (ATerm) ATmakeAppl(sym_Nonterm_1, p_13);
goto label101 ;
label102 :
t = trm256;
{
ATerm trm257 = t;
t = sort2nonterm_0_0(sl, t);
if((t == NULL))
goto label103 ;
goto label101 ;
label103 :
t = trm257;
{
ATerm n_13 = NULL;
if(match_cons(t, sym_cf_1))
{
n_13 = ATgetArgument(t, 0);
}
else
goto fail54 ;
t = n_13;
t = sort2nonterm_0_0(sl, t);
if((t == NULL))
goto fail54 ;
else
goto label101 ;
}
}
label101 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
ATerm sym2tree_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sym2tree_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm248 = t;
ATerm j_13 = NULL,k_13 = NULL,m_13 = NULL;
j_13 = t;
m_13 = t;
t = sym2nonterm_0_0(sl, t);
if((t == NULL))
goto label94 ;
k_13 = t;
t = m_13;
t = (ATerm) ATmakeAppl(sym_Ref_1, k_13);
goto label93 ;
label94 :
t = trm248;
{
ATerm trm249 = t;
ATerm h_13 = NULL,i_13 = NULL;
if(match_cons(t, sym_cf_1))
{
h_13 = ATgetArgument(t, 0);
}
else
goto label95 ;
i_13 = t;
t = (ATerm) ATmakeAppl(sym_cf_1, h_13);
{
ATerm trm250 = t;
t = is_nonterm_generator_0_0(sl, t);
if((t == NULL))
goto label97 ;
goto label95 ;
label97 :
t = trm250;
goto label96 ;
label96 :
;
t = i_13;
t = h_13;
t = sym2tree_0_0(sl, t);
if((t == NULL))
goto label95 ;
}
goto label93 ;
label95 :
t = trm249;
{
ATerm trm251 = t;
ATerm g_13 = NULL;
if(match_cons(t, sym_lex_1))
{
g_13 = ATgetArgument(t, 0);
}
else
goto label98 ;
t = term63;
goto label93 ;
label98 :
t = trm251;
{
ATerm trm252 = t;
if(match_cons(t, sym_char_class_1))
{
ATerm trm253 = ATgetArgument(t, 0);
}
else
goto label99 ;
t = term67;
goto label93 ;
label99 :
t = trm252;
{
ATerm trm254 = t;
ATerm f_13 = NULL;
if(match_cons(t, sym_label_2))
{
ATerm trm255 = ATgetArgument(t, 0);
f_13 = ATgetArgument(t, 1);
}
else
goto label100 ;
t = f_13;
t = sym2tree_0_0(sl, t);
if((t == NULL))
goto label100 ;
goto label93 ;
label100 :
t = trm254;
{
ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
c_13 = t;
e_13 = t;
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto fail53 ;
d_13 = t;
t = e_13;
t = (ATerm) ATmakeAppl(sym_Ref_1, (ATerm) ATmakeAppl(sym_Nonterm_1, d_13));
goto label93 ;
}
}
}
}
}
label93 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_empty_sym_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_empty_sym_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm240 = t;
if(match_cons(t, sym_lit_1))
{
ATerm trm241 = ATgetArgument(t, 0);
}
else
goto label87 ;
goto label86 ;
label87 :
t = trm240;
{
ATerm trm242 = t;
if(match_cons(t, sym_ci_lit_1))
{
ATerm trm243 = ATgetArgument(t, 0);
}
else
goto label88 ;
goto label86 ;
label88 :
t = trm242;
{
ATerm trm244 = t;
if(!(match_cons(t, sym_layout_0)))
goto label89 ;
goto label86 ;
label89 :
t = trm244;
{
ATerm trm245 = t;
struct str_closure x_204 = { &(is_empty_sym_0_0) , sl };
StrCL lifted55_cl = &(x_204);
t = opt_1_0(sl, lifted55_cl, t);
if((t == NULL))
goto label90 ;
goto label86 ;
label90 :
t = trm245;
{
ATerm trm246 = t;
struct str_closure y_204 = { &(is_empty_sym_0_0) , sl };
StrCL lifted56_cl = &(y_204);
t = cf_1_0(sl, lifted56_cl, t);
if((t == NULL))
goto label91 ;
goto label86 ;
label91 :
t = trm246;
{
ATerm trm247 = t;
struct str_closure z_204 = { &(is_empty_sym_0_0) , sl };
StrCL lifted57_cl = &(z_204);
t = lex_1_0(sl, lifted57_cl, t);
if((t == NULL))
goto label92 ;
goto label86 ;
label92 :
t = trm247;
{
struct str_closure a_205 = { &(_Id) , sl };
StrCL lifted58_cl = &(a_205);
struct str_closure c_205 = { &(is_empty_sym_0_0) , sl };
StrCL lifted59_cl = &(c_205);
t = label_2_0(sl, lifted58_cl, lifted59_cl, t);
if((t == NULL))
goto fail52 ;
else
goto label86 ;
}
}
}
}
}
}
label86 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
ATerm syms2trees_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "syms2trees_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_204 = { &(sym2tree_0_0) , sl };
StrCL lifted54_cl = &(v_204);
struct str_closure w_204 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(w_204);
t = filter_1_0(sl, lifted53_cl, t);
if((t == NULL))
goto fail50 ;
t = map_1_0(sl, lifted54_cl, t);
if((t == NULL))
goto fail50 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm239 = t;
t = is_empty_sym_0_0(sl_up(sl), t);
if((t == NULL))
goto label85 ;
goto fail51 ;
label85 :
t = trm239;
goto label84 ;
label84 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_nonterm_generator_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_nonterm_generator_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm234 = t;
t = is_list_symbol_0_0(sl, t);
if((t == NULL))
goto label79 ;
goto label78 ;
label79 :
t = trm234;
{
ATerm trm235 = t;
t = is_seq_symbol_0_0(sl, t);
if((t == NULL))
goto label80 ;
goto label78 ;
label80 :
t = trm235;
{
ATerm trm236 = t;
t = is_alt_symbol_0_0(sl, t);
if((t == NULL))
goto label81 ;
goto label78 ;
label81 :
t = trm236;
{
ATerm trm237 = t;
struct str_closure s_204 = { &(is_nonterm_generator_0_0) , sl };
StrCL lifted50_cl = &(s_204);
t = cf_1_0(sl, lifted50_cl, t);
if((t == NULL))
goto label82 ;
goto label78 ;
label82 :
t = trm237;
{
ATerm trm238 = t;
struct str_closure t_204 = { &(_Id) , sl };
StrCL lifted51_cl = &(t_204);
t = opt_1_0(sl, lifted51_cl, t);
if((t == NULL))
goto label83 ;
goto label78 ;
label83 :
t = trm238;
{
struct str_closure u_204 = { &(_Id) , sl };
StrCL lifted52_cl = &(u_204);
t = varsym_1_0(sl, lifted52_cl, t);
if((t == NULL))
goto fail49 ;
else
goto label78 ;
}
}
}
}
}
label78 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_list_symbol_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_list_symbol_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm230 = t;
struct str_closure l_204 = { &(is_list_symbol_0_0) , sl };
StrCL lifted43_cl = &(l_204);
t = cf_1_0(sl, lifted43_cl, t);
if((t == NULL))
goto label74 ;
goto label73 ;
label74 :
t = trm230;
{
ATerm trm231 = t;
struct str_closure m_204 = { &(_Id) , sl };
StrCL lifted44_cl = &(m_204);
struct str_closure n_204 = { &(_Id) , sl };
StrCL lifted45_cl = &(n_204);
t = iter_star_sep_2_0(sl, lifted44_cl, lifted45_cl, t);
if((t == NULL))
goto label75 ;
goto label73 ;
label75 :
t = trm231;
{
ATerm trm232 = t;
struct str_closure o_204 = { &(_Id) , sl };
StrCL lifted46_cl = &(o_204);
struct str_closure p_204 = { &(_Id) , sl };
StrCL lifted47_cl = &(p_204);
t = iter_sep_2_0(sl, lifted46_cl, lifted47_cl, t);
if((t == NULL))
goto label76 ;
goto label73 ;
label76 :
t = trm232;
{
ATerm trm233 = t;
struct str_closure q_204 = { &(_Id) , sl };
StrCL lifted48_cl = &(q_204);
t = iter_star_1_0(sl, lifted48_cl, t);
if((t == NULL))
goto label77 ;
goto label73 ;
label77 :
t = trm233;
{
struct str_closure r_204 = { &(_Id) , sl };
StrCL lifted49_cl = &(r_204);
t = iter_1_0(sl, lifted49_cl, t);
if((t == NULL))
goto fail48 ;
else
goto label73 ;
}
}
}
}
label73 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_alt_symbol_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_alt_symbol_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm229 = t;
struct str_closure i_204 = { &(is_alt_symbol_0_0) , sl };
StrCL lifted40_cl = &(i_204);
t = cf_1_0(sl, lifted40_cl, t);
if((t == NULL))
goto label72 ;
goto label71 ;
label72 :
t = trm229;
{
struct str_closure j_204 = { &(_Id) , sl };
StrCL lifted41_cl = &(j_204);
struct str_closure k_204 = { &(_Id) , sl };
StrCL lifted42_cl = &(k_204);
t = alt_2_0(sl, lifted41_cl, lifted42_cl, t);
if((t == NULL))
goto fail47 ;
else
goto label71 ;
}
label71 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_seq_symbol_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_seq_symbol_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm228 = t;
struct str_closure f_204 = { &(is_seq_symbol_0_0) , sl };
StrCL lifted37_cl = &(f_204);
t = cf_1_0(sl, lifted37_cl, t);
if((t == NULL))
goto label70 ;
goto label69 ;
label70 :
t = trm228;
{
struct str_closure g_204 = { &(_Id) , sl };
StrCL lifted38_cl = &(g_204);
struct str_closure h_204 = { &(is_list_0_0) , sl };
StrCL lifted39_cl = &(h_204);
t = seq_2_0(sl, lifted38_cl, lifted39_cl, t);
if((t == NULL))
goto fail46 ;
else
goto label69 ;
}
label69 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_nonterm_of_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_nonterm_of_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_12 = NULL;
v_12 = t;
t = is_nonterm_generator_0_0(sl, t);
if((t == NULL))
goto fail45 ;
{
ATerm trm225 = t;
t = (ATerm) ATmakeAppl(sym__2, term9, v_12);
t = table_get_0_0(sl, t);
if((t == NULL))
goto label66 ;
goto label65 ;
label66 :
t = trm225;
{
ATerm trm226 = t;
t = (ATerm) ATmakeAppl(sym__2, term9, (ATerm) ATmakeAppl(sym_cf_1, v_12));
t = table_get_0_0(sl, t);
if((t == NULL))
goto label67 ;
goto label65 ;
label67 :
t = trm226;
{
ATerm trm227 = t;
ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
y_12 = t;
t = v_12;
if(match_cons(t, sym_cf_1))
{
z_12 = ATgetArgument(t, 0);
}
else
goto label68 ;
t = z_12;
x_12 = t;
t = y_12;
t = (ATerm) ATmakeAppl(sym__2, term9, x_12);
t = table_get_0_0(sl, t);
if((t == NULL))
goto label68 ;
goto label65 ;
label68 :
t = trm227;
{
ATerm w_12 = NULL,a_13 = NULL,b_13 = NULL;
t = sdf_symbol_to_string_0_0(sl, t);
if((t == NULL))
goto fail45 ;
w_12 = t;
b_13 = t;
a_13 = t;
t = (ATerm) ATmakeAppl(sym__3, term9, v_12, a_13);
t = table_put_0_0(sl, t);
if((t == NULL))
goto fail45 ;
t = w_12;
goto label65 ;
}
}
}
label65 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
ATerm var2prodrule_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "var2prodrule_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm222 = ATgetArgument(t, 0);
ATerm trm223 = ATgetArgument(t, 1);
if(match_cons(trm223, sym_varsym_1))
{
s_12 = ATgetArgument(trm223, 0);
}
else
goto fail44 ;
{
ATerm trm224 = ATgetArgument(t, 2);
}
}
else
goto fail44 ;
u_12 = t;
t = s_12;
t = sym2nonterm_0_0(sl, t);
if((t == NULL))
goto fail44 ;
t_12 = t;
t = u_12;
t = (ATerm) ATmakeAppl(sym_ProdRule_2, (ATerm)ATmakeAppl(sym_Nonterm_1, t_12), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Appl_2, term59, (ATerm) ATinsert(ATempty, term63))));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
ATerm opt2prodrule_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "opt2prodrule_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm211 = t;
ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm212 = ATgetArgument(t, 0);
if(((ATgetType(trm212) == AT_LIST) && !(ATisEmpty(trm212))))
{
ATerm trm213 = ATgetFirst((ATermList) trm212);
if(match_cons(trm213, sym_cf_1))
{
l_12 = ATgetArgument(trm213, 0);
}
else
goto label64 ;
{
ATerm trm214 = (ATerm) ATgetNext((ATermList) trm212);
if(!(((ATgetType(trm214) == AT_LIST) && ATisEmpty(trm214))))
goto label64 ;
}
}
else
goto label64 ;
{
ATerm trm215 = ATgetArgument(t, 1);
n_12 = trm215;
if(match_cons(trm215, sym_cf_1))
{
ATerm trm216 = ATgetArgument(trm215, 0);
if(match_cons(trm216, sym_opt_1))
{
if(!((l_12 == ATgetArgument(trm216, 0))))
goto label64 ;
}
else
goto label64 ;
}
else
goto label64 ;
}
{
ATerm trm217 = ATgetArgument(t, 2);
}
}
else
goto label64 ;
p_12 = t;
t = l_12;
t = sym2tree_0_0(sl, t);
if((t == NULL))
goto label64 ;
m_12 = t;
t = n_12;
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto label64 ;
o_12 = t;
t = p_12;
t = (ATerm) ATmakeAppl(sym_ProdRule_2, (ATerm)ATmakeAppl(sym_Nonterm_1, o_12), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Appl_2, term49, (ATerm) ATinsert(ATempty, m_12))));
goto label63 ;
label64 :
t = trm211;
{
ATerm h_12 = NULL,j_12 = NULL,k_12 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm218 = ATgetArgument(t, 0);
if(!(((ATgetType(trm218) == AT_LIST) && ATisEmpty(trm218))))
goto fail43 ;
{
ATerm trm219 = ATgetArgument(t, 1);
if(match_cons(trm219, sym_cf_1))
{
ATerm trm220 = ATgetArgument(trm219, 0);
if(match_cons(trm220, sym_opt_1))
{
h_12 = ATgetArgument(trm220, 0);
}
else
goto fail43 ;
}
else
goto fail43 ;
}
{
ATerm trm221 = ATgetArgument(t, 2);
}
}
else
goto fail43 ;
k_12 = t;
t = (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_opt_1, h_12));
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto fail43 ;
j_12 = t;
t = k_12;
t = (ATerm) ATmakeAppl(sym_ProdRule_2, (ATerm)ATmakeAppl(sym_Nonterm_1, j_12), (ATerm) ATinsert(ATempty, term53));
goto label63 ;
}
label63 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
ATerm listinj2prodrule_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "listinj2prodrule_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm169 = t;
ATerm e_11 = NULL,f_11 = NULL,h_11 = NULL,i_11 = NULL,k_11 = NULL,l_11 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm170 = ATgetArgument(t, 0);
if(((ATgetType(trm170) == AT_LIST) && !(ATisEmpty(trm170))))
{
ATerm trm171 = ATgetFirst((ATermList) trm170);
f_11 = trm171;
if(match_cons(trm171, sym_cf_1))
{
ATerm trm172 = ATgetArgument(trm171, 0);
if(match_cons(trm172, sym_iter_1))
{
e_11 = ATgetArgument(trm172, 0);
}
else
goto label55 ;
}
else
goto label55 ;
{
ATerm trm173 = (ATerm) ATgetNext((ATermList) trm170);
if(!(((ATgetType(trm173) == AT_LIST) && ATisEmpty(trm173))))
goto label55 ;
}
}
else
goto label55 ;
{
ATerm trm174 = ATgetArgument(t, 1);
i_11 = trm174;
if(match_cons(trm174, sym_cf_1))
{
ATerm trm175 = ATgetArgument(trm174, 0);
if(match_cons(trm175, sym_iter_star_1))
{
if(!((e_11 == ATgetArgument(trm175, 0))))
goto label55 ;
}
else
goto label55 ;
}
else
goto label55 ;
}
{
ATerm trm176 = ATgetArgument(t, 2);
}
}
else
goto label55 ;
l_11 = t;
t = f_11;
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto label55 ;
h_11 = t;
t = i_11;
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto label55 ;
k_11 = t;
t = l_11;
t = (ATerm) ATmakeAppl(sym_ProdRule_2, (ATerm)ATmakeAppl(sym_Nonterm_1, k_11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Ref_1, (ATerm) ATmakeAppl(sym_Nonterm_1, h_11))));
goto label54 ;
label55 :
t = trm169;
{
ATerm trm177 = t;
ATerm a_11 = NULL,c_11 = NULL,d_11 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm178 = ATgetArgument(t, 0);
if(!(((ATgetType(trm178) == AT_LIST) && ATisEmpty(trm178))))
goto label56 ;
a_11 = ATgetArgument(t, 1);
{
ATerm trm179 = ATgetArgument(t, 2);
}
}
else
goto label56 ;
d_11 = t;
t = a_11;
t = is_list_symbol_0_0(sl, t);
if((t == NULL))
goto label56 ;
t = a_11;
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto label56 ;
c_11 = t;
t = d_11;
t = (ATerm) ATmakeAppl(sym_ProdRule_2, (ATerm)ATmakeAppl(sym_Nonterm_1, c_11), (ATerm) ATinsert(ATempty, term43));
goto label54 ;
label56 :
t = trm177;
{
ATerm trm180 = t;
ATerm m_10 = NULL,n_10 = NULL,r_10 = NULL,u_10 = NULL,z_10 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm181 = ATgetArgument(t, 0);
if(((ATgetType(trm181) == AT_LIST) && !(ATisEmpty(trm181))))
{
ATerm trm182 = ATgetFirst((ATermList) trm181);
if(match_cons(trm182, sym_cf_1))
{
r_10 = ATgetArgument(trm182, 0);
}
else
goto label57 ;
{
ATerm trm183 = (ATerm) ATgetNext((ATermList) trm181);
if(!(((ATgetType(trm183) == AT_LIST) && ATisEmpty(trm183))))
goto label57 ;
}
}
else
goto label57 ;
{
ATerm trm184 = ATgetArgument(t, 1);
if(match_cons(trm184, sym_cf_1))
{
ATerm trm185 = ATgetArgument(trm184, 0);
if(match_cons(trm185, sym_iter_1))
{
if(!((r_10 == ATgetArgument(trm185, 0))))
goto label57 ;
}
else
goto label57 ;
}
else
goto label57 ;
}
{
ATerm trm186 = ATgetArgument(t, 2);
}
}
else
goto label57 ;
z_10 = t;
t = (ATerm) ATmakeAppl(sym_cf_1, r_10);
t = sym2tree_0_0(sl, t);
if((t == NULL))
goto label57 ;
m_10 = t;
t = (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, r_10));
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto label57 ;
n_10 = t;
t = (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, r_10));
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto label57 ;
u_10 = t;
t = z_10;
t = (ATerm) ATmakeAppl(sym_ProdRule_2, (ATerm)ATmakeAppl(sym_Nonterm_1, n_10), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Appl_2, term45, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Ref_1, (ATerm) ATmakeAppl(sym_Nonterm_1, u_10))), m_10))));
goto label54 ;
label57 :
t = trm180;
{
ATerm trm187 = t;
ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,l_10 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm188 = ATgetArgument(t, 0);
if(((ATgetType(trm188) == AT_LIST) && !(ATisEmpty(trm188))))
{
h_10 = ATgetFirst((ATermList) trm188);
{
ATerm trm189 = (ATerm) ATgetNext((ATermList) trm188);
if(!(((ATgetType(trm189) == AT_LIST) && ATisEmpty(trm189))))
goto label58 ;
}
}
else
goto label58 ;
{
ATerm trm190 = ATgetArgument(t, 1);
if(match_cons(trm190, sym_iter_1))
{
if(!((h_10 == ATgetArgument(trm190, 0))))
goto label58 ;
}
else
goto label58 ;
}
{
ATerm trm191 = ATgetArgument(t, 2);
}
}
else
goto label58 ;
l_10 = t;
t = h_10;
t = sym2tree_0_0(sl, t);
if((t == NULL))
goto label58 ;
f_10 = t;
t = (ATerm) ATmakeAppl(sym_iter_1, h_10);
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto label58 ;
g_10 = t;
t = (ATerm) ATmakeAppl(sym_iter_star_1, h_10);
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto label58 ;
i_10 = t;
t = l_10;
t = (ATerm) ATmakeAppl(sym_ProdRule_2, (ATerm)ATmakeAppl(sym_Nonterm_1, g_10), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Appl_2, term45, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Ref_1, (ATerm) ATmakeAppl(sym_Nonterm_1, i_10))), f_10))));
goto label54 ;
label58 :
t = trm187;
{
ATerm trm192 = t;
ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
if(match_cons(t, sym_prod_3))
{
b_10 = ATgetArgument(t, 0);
z_9 = ATgetArgument(t, 1);
{
ATerm trm193 = ATgetArgument(t, 2);
}
}
else
goto label59 ;
e_10 = t;
t = z_9;
t = is_list_symbol_0_0(sl, t);
if((t == NULL))
goto label59 ;
t = z_9;
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto label59 ;
a_10 = t;
t = b_10;
{
struct str_closure d_204 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(d_204);
t = filter_1_0(sl, lifted35_cl, t);
if((t == NULL))
goto label59 ;
{
struct str_closure e_204 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(e_204);
t = map_1_0(sl, lifted36_cl, t);
if((t == NULL))
goto label59 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
c_10 = ATgetFirst((ATermList) t);
{
ATerm trm195 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm195) == AT_LIST) && !(ATisEmpty(trm195))))
{
d_10 = ATgetFirst((ATermList) trm195);
{
ATerm trm196 = (ATerm) ATgetNext((ATermList) trm195);
if(!(((ATgetType(trm196) == AT_LIST) && ATisEmpty(trm196))))
goto label59 ;
}
}
else
goto label59 ;
}
}
else
goto label59 ;
t = e_10;
t = (ATerm) ATmakeAppl(sym_ProdRule_2, (ATerm)ATmakeAppl(sym_Nonterm_1, a_10), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Appl_2, term47, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Ref_1, (ATerm) ATmakeAppl(sym_Nonterm_1, d_10))), (ATerm) ATmakeAppl(sym_Ref_1, (ATerm) ATmakeAppl(sym_Nonterm_1, c_10))))));
}
}
goto label54 ;
label59 :
t = trm192;
{
ATerm trm197 = t;
ATerm q_9 = NULL,r_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm198 = ATgetArgument(t, 0);
if(((ATgetType(trm198) == AT_LIST) && !(ATisEmpty(trm198))))
{
ATerm trm199 = ATgetFirst((ATermList) trm198);
t_9 = trm199;
if(match_cons(trm199, sym_cf_1))
{
ATerm trm200 = ATgetArgument(trm199, 0);
if(match_cons(trm200, sym_iter_sep_2))
{
q_9 = ATgetArgument(trm200, 0);
r_9 = ATgetArgument(trm200, 1);
}
else
goto label62 ;
}
else
goto label62 ;
{
ATerm trm201 = (ATerm) ATgetNext((ATermList) trm198);
if(!(((ATgetType(trm201) == AT_LIST) && ATisEmpty(trm201))))
goto label62 ;
}
}
else
goto label62 ;
{
ATerm trm202 = ATgetArgument(t, 1);
v_9 = trm202;
if(match_cons(trm202, sym_cf_1))
{
ATerm trm203 = ATgetArgument(trm202, 0);
if(match_cons(trm203, sym_iter_star_sep_2))
{
if(!((q_9 == ATgetArgument(trm203, 0))))
goto label62 ;
if(!((r_9 == ATgetArgument(trm203, 1))))
goto label62 ;
}
else
goto label62 ;
}
else
goto label62 ;
}
{
ATerm trm204 = ATgetArgument(t, 2);
}
}
else
goto label62 ;
x_9 = t;
t = r_9;
t = is_empty_sym_0_0(sl, t);
if((t == NULL))
goto label62 ;
t = t_9;
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto label62 ;
u_9 = t;
t = v_9;
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto label62 ;
w_9 = t;
t = x_9;
t = (ATerm) ATmakeAppl(sym_ProdRule_2, (ATerm)ATmakeAppl(sym_Nonterm_1, w_9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Ref_1, (ATerm) ATmakeAppl(sym_Nonterm_1, u_9))));
goto label54 ;
label62 :
t = trm197;
{
ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm205 = ATgetArgument(t, 0);
if(((ATgetType(trm205) == AT_LIST) && !(ATisEmpty(trm205))))
{
ATerm trm206 = ATgetFirst((ATermList) trm205);
if(match_cons(trm206, sym_cf_1))
{
m_9 = ATgetArgument(trm206, 0);
}
else
goto fail40 ;
{
ATerm trm207 = (ATerm) ATgetNext((ATermList) trm205);
if(!(((ATgetType(trm207) == AT_LIST) && ATisEmpty(trm207))))
goto fail40 ;
}
}
else
goto fail40 ;
{
ATerm trm208 = ATgetArgument(t, 1);
i_9 = trm208;
if(match_cons(trm208, sym_cf_1))
{
ATerm trm209 = ATgetArgument(trm208, 0);
if(match_cons(trm209, sym_iter_sep_2))
{
if(!((m_9 == ATgetArgument(trm209, 0))))
goto fail40 ;
n_9 = ATgetArgument(trm209, 1);
}
else
goto fail40 ;
}
else
goto fail40 ;
}
{
ATerm trm210 = ATgetArgument(t, 2);
}
}
else
goto fail40 ;
p_9 = t;
t = n_9;
t = is_empty_sym_0_0(sl, t);
if((t == NULL))
goto fail40 ;
t = (ATerm) ATmakeAppl(sym_cf_1, m_9);
t = sym2tree_0_0(sl, t);
if((t == NULL))
goto fail40 ;
h_9 = t;
t = i_9;
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto fail40 ;
j_9 = t;
t = (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, m_9, n_9));
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto fail40 ;
o_9 = t;
t = p_9;
t = (ATerm) ATmakeAppl(sym_ProdRule_2, (ATerm)ATmakeAppl(sym_Nonterm_1, j_9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Appl_2, term45, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Ref_1, (ATerm) ATmakeAppl(sym_Nonterm_1, o_9))), h_9))));
goto label54 ;
}
}
}
}
}
}
label54 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = is_list_symbol_0_0(sl_up(sl), t);
if((t == NULL))
goto fail42 ;
t = get_nonterm_of_0_0(sl_up(sl), t);
if((t == NULL))
goto fail42 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm194 = t;
t = is_empty_sym_0_0(sl_up(sl), t);
if((t == NULL))
goto label61 ;
goto fail41 ;
label61 :
t = trm194;
goto label60 ;
label60 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
ATerm alt2prodrule_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "alt2prodrule_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_8 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
if(match_cons(t, sym_prod_3))
{
d_9 = ATgetArgument(t, 0);
y_8 = ATgetArgument(t, 1);
{
ATerm trm167 = ATgetArgument(t, 2);
}
}
else
goto fail39 ;
f_9 = t;
t = y_8;
t = is_alt_symbol_0_0(sl, t);
if((t == NULL))
goto fail39 ;
t = y_8;
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto fail39 ;
c_9 = t;
t = d_9;
t = syms2trees_0_0(sl, t);
if((t == NULL))
goto fail39 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
e_9 = ATgetFirst((ATermList) t);
{
ATerm trm168 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm168) == AT_LIST) && ATisEmpty(trm168))))
goto fail39 ;
}
}
else
goto fail39 ;
t = f_9;
t = (ATerm) ATmakeAppl(sym_ProdRule_2, (ATerm)ATmakeAppl(sym_Nonterm_1, c_9), (ATerm) ATinsert(ATempty, e_9));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
ATerm seq2prodrule_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "seq2prodrule_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,w_8 = NULL,x_8 = NULL;
if(match_cons(t, sym_prod_3))
{
t_8 = ATgetArgument(t, 0);
r_8 = ATgetArgument(t, 1);
{
ATerm trm166 = ATgetArgument(t, 2);
}
}
else
goto fail38 ;
x_8 = t;
t = r_8;
t = is_seq_symbol_0_0(sl, t);
if((t == NULL))
goto fail38 ;
t = r_8;
t = get_nonterm_of_0_0(sl, t);
if((t == NULL))
goto fail38 ;
s_8 = t;
t = t_8;
t = syms2trees_0_0(sl, t);
if((t == NULL))
goto fail38 ;
u_8 = t;
t = length_0_0(sl, t);
if((t == NULL))
goto fail38 ;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail38 ;
w_8 = t;
t = x_8;
t = (ATerm) ATmakeAppl(sym_ProdRule_2, (ATerm)ATmakeAppl(sym_Nonterm_1, s_8), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Appl_2, (ATerm)ATmakeAppl(sym_TupleTerm_1, w_8), u_8)));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
ATerm inj2prodrule_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "inj2prodrule_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm trm155 = t;
ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,p_8 = NULL,q_8 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm156 = ATgetArgument(t, 0);
if(((ATgetType(trm156) == AT_LIST) && !(ATisEmpty(trm156))))
{
k_8 = ATgetFirst((ATermList) trm156);
{
ATerm trm157 = (ATerm) ATgetNext((ATermList) trm156);
if(!(((ATgetType(trm157) == AT_LIST) && ATisEmpty(trm157))))
goto label47 ;
}
}
else
goto label47 ;
m_8 = ATgetArgument(t, 1);
{
ATerm trm158 = ATgetArgument(t, 2);
if(match_cons(trm158, sym_attrs_1))
{
j_8 = ATgetArgument(trm158, 0);
}
else
goto label47 ;
}
}
else
goto label47 ;
q_8 = t;
{
ATerm trm159 = t;
t = j_8;
t = get_cnstr_name_0_0(sl, t);
if((t == NULL))
goto label49 ;
goto label47 ;
label49 :
t = trm159;
goto label48 ;
label48 :
;
t = k_8;
t = sym2tree_0_0(sl, t);
if((t == NULL))
goto label47 ;
l_8 = t;
t = m_8;
t = sym2nonterm_0_0(sl, t);
if((t == NULL))
goto label47 ;
p_8 = t;
t = q_8;
t = (ATerm) ATmakeAppl(sym_ProdRule_2, p_8, (ATerm) ATinsert(ATempty, l_8));
}
goto label46 ;
label47 :
t = trm155;
{
ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
sl_init_var(0, c_8);
if(match_cons(t, sym_prod_3))
{
e_8 = ATgetArgument(t, 0);
{
ATerm trm160 = ATgetArgument(t, 1);
if(match_cons(trm160, sym_cf_1))
{
g_8 = ATgetArgument(trm160, 0);
}
else
goto fail34 ;
}
{
ATerm trm161 = ATgetArgument(t, 2);
if(match_cons(trm161, sym_attrs_1))
{
d_8 = ATgetArgument(trm161, 0);
}
else
goto fail34 ;
}
}
else
goto fail34 ;
t = g_8;
{
ATerm trm162 = t;
struct str_closure z_203 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(z_203);
t = sort_1_0(sl, lifted31_cl, t);
if((t == NULL))
goto label51 ;
goto label50 ;
label51 :
t = trm162;
{
struct str_closure a_204 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(a_204);
struct str_closure b_204 = { &(_Id) , sl };
StrCL lifted33_cl = &(b_204);
t = parameterized_sort_2_0(sl, lifted32_cl, lifted33_cl, t);
if((t == NULL))
goto fail34 ;
else
goto label50 ;
}
label50 :
;
h_8 = t;
t = d_8;
{
struct str_closure c_204 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(c_204);
t = fetch_1_0(sl, lifted34_cl, t);
if((t == NULL))
goto fail34 ;
t = d_8;
{
ATerm trm163 = t;
t = get_cnstr_name_0_0(sl, t);
if((t == NULL))
goto label53 ;
goto fail34 ;
label53 :
t = trm163;
goto label52 ;
label52 :
;
t = e_8;
t = syms2trees_0_0(sl, t);
if((t == NULL))
goto fail34 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm164 = ATgetFirst((ATermList) t);
if(match_cons(trm164, sym_Ref_1))
{
f_8 = ATgetArgument(trm164, 0);
}
else
goto fail34 ;
{
ATerm trm165 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm165) == AT_LIST) && ATisEmpty(trm165))))
goto fail34 ;
}
}
else
goto fail34 ;
t = h_8;
if((c_8 == NULL))
goto fail34 ;
else
{
t = (ATerm) ATmakeAppl(sym_ProdRule_2, (ATerm)ATmakeAppl(sym_Nonterm_1, c_8), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Ref_1, f_8)));
goto label46 ;
}
}
}
}
}
label46 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_bracket_0)))
goto fail37 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail36 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail35 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm prod2prodrule_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prod2prodrule_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,c_7 = NULL,d_7 = NULL,g_7 = NULL;
sl_init_var(0, c_7);
if((c_7 == NULL))
{
c_7 = t;
}
else
if((c_7 != t))
goto fail32 ;
if(match_cons(t, sym_prod_3))
{
v_6 = ATgetArgument(t, 0);
u_6 = ATgetArgument(t, 1);
{
ATerm trm124 = ATgetArgument(t, 2);
if(match_cons(trm124, sym_attrs_1))
{
w_6 = ATgetArgument(trm124, 0);
}
else
goto fail32 ;
}
}
else
goto fail32 ;
g_7 = t;
t = u_6;
t = sym2nonterm_0_0(sl, t);
if((t == NULL))
goto fail32 ;
x_6 = t;
t = v_6;
t = syms2trees_0_0(sl, t);
if((t == NULL))
goto fail32 ;
z_6 = t;
{
ATerm trm125 = t;
ATerm e_7 = NULL;
e_7 = t;
t = w_6;
t = get_cnstr_name_0_0(sl, t);
if((t == NULL))
goto label42 ;
y_6 = t;
t = e_7;
t = (ATerm) ATmakeAppl(sym_ProdRule_2, x_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Appl_2, (ATerm)ATmakeAppl(sym_Term_1, y_6), z_6)));
goto label41 ;
label42 :
t = trm125;
{
ATerm h_7 = NULL,i_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,s_7 = NULL;
m_7 = t;
t = term11;
h_7 = t;
t = m_7;
n_7 = t;
t = term33;
i_7 = t;
t = n_7;
if((c_7 == NULL))
goto fail32 ;
else
{
t = log_prod_0_3(sl, h_7, i_7, c_7, t);
if((t == NULL))
goto fail32 ;
}
q_7 = t;
t = term11;
o_7 = t;
t = q_7;
s_7 = t;
t = term35;
p_7 = t;
t = s_7;
t = log_0_2(sl, o_7, p_7, t);
if((t == NULL))
goto fail32 ;
{
struct str_closure y_203 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(y_203);
t = if_verbose1_1_0(sl, lifted30_cl, t);
if((t == NULL))
goto fail32 ;
{
ATerm trm126 = t;
ATerm f_7 = NULL;
f_7 = t;
t = term39;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label43 ;
t = f_7;
t = (ATerm) ATempty;
goto label41 ;
label43 :
t = trm126;
{
ATerm trm127 = t;
if((c_7 == NULL))
goto label44 ;
else
{
t = c_7;
}
if(match_cons(t, sym_prod_3))
{
ATerm trm128 = ATgetArgument(t, 0);
if(((ATgetType(trm128) == AT_LIST) && !(ATisEmpty(trm128))))
{
ATerm trm129 = ATgetFirst((ATermList) trm128);
if(match_cons(trm129, sym_sort_1))
{
ATerm trm130 = ATgetArgument(trm129, 0);
if(!((ATgetSymbol(trm130) == ATmakeSymbol("Label", 0, ATtrue))))
goto label44 ;
}
else
goto label44 ;
{
ATerm trm131 = (ATerm) ATgetNext((ATermList) trm128);
if(((ATgetType(trm131) == AT_LIST) && !(ATisEmpty(trm131))))
{
ATerm trm132 = ATgetFirst((ATermList) trm131);
if(match_cons(trm132, sym_lit_1))
{
ATerm trm133 = ATgetArgument(trm132, 0);
}
else
goto label44 ;
{
ATerm trm134 = (ATerm) ATgetNext((ATermList) trm131);
if(((ATgetType(trm134) == AT_LIST) && !(ATisEmpty(trm134))))
{
ATerm trm135 = ATgetFirst((ATermList) trm134);
if(match_cons(trm135, sym_sort_1))
{
ATerm trm136 = ATgetArgument(trm135, 0);
if(!((ATgetSymbol(trm136) == ATmakeSymbol("Symbol", 0, ATtrue))))
goto label44 ;
}
else
goto label44 ;
{
ATerm trm137 = (ATerm) ATgetNext((ATermList) trm134);
if(!(((ATgetType(trm137) == AT_LIST) && ATisEmpty(trm137))))
goto label44 ;
}
}
else
goto label44 ;
}
}
else
goto label44 ;
}
}
else
goto label44 ;
{
ATerm trm138 = ATgetArgument(t, 1);
if(match_cons(trm138, sym_sort_1))
{
ATerm trm139 = ATgetArgument(trm138, 0);
if(!((ATgetSymbol(trm139) == ATmakeSymbol("Symbol", 0, ATtrue))))
goto label44 ;
}
else
goto label44 ;
}
{
ATerm trm140 = ATgetArgument(t, 2);
}
}
else
goto label44 ;
t = (ATerm) ATempty;
goto label41 ;
label44 :
t = trm127;
{
ATerm trm141 = t;
if((c_7 == NULL))
goto label45 ;
else
{
t = c_7;
}
if(match_cons(t, sym_prod_3))
{
ATerm trm142 = ATgetArgument(t, 0);
if(((ATgetType(trm142) == AT_LIST) && !(ATisEmpty(trm142))))
{
ATerm trm143 = ATgetFirst((ATermList) trm142);
if(match_cons(trm143, sym_sort_1))
{
ATerm trm144 = ATgetArgument(trm143, 0);
if(!((ATgetSymbol(trm144) == ATmakeSymbol("Symbol", 0, ATtrue))))
goto label45 ;
}
else
goto label45 ;
{
ATerm trm145 = (ATerm) ATgetNext((ATermList) trm142);
if(((ATgetType(trm145) == AT_LIST) && !(ATisEmpty(trm145))))
{
ATerm trm146 = ATgetFirst((ATermList) trm145);
if(match_cons(trm146, sym_lit_1))
{
ATerm trm147 = ATgetArgument(trm146, 0);
}
else
goto label45 ;
{
ATerm trm148 = (ATerm) ATgetNext((ATermList) trm145);
if(((ATgetType(trm148) == AT_LIST) && !(ATisEmpty(trm148))))
{
ATerm trm149 = ATgetFirst((ATermList) trm148);
if(match_cons(trm149, sym_sort_1))
{
ATerm trm150 = ATgetArgument(trm149, 0);
if(!((ATgetSymbol(trm150) == ATmakeSymbol("Symbol", 0, ATtrue))))
goto label45 ;
}
else
goto label45 ;
{
ATerm trm151 = (ATerm) ATgetNext((ATermList) trm148);
if(!(((ATgetType(trm151) == AT_LIST) && ATisEmpty(trm151))))
goto label45 ;
}
}
else
goto label45 ;
}
}
else
goto label45 ;
}
}
else
goto label45 ;
{
ATerm trm152 = ATgetArgument(t, 1);
if(match_cons(trm152, sym_sort_1))
{
ATerm trm153 = ATgetArgument(trm152, 0);
if(!((ATgetSymbol(trm153) == ATmakeSymbol("Symbol", 0, ATtrue))))
goto label45 ;
}
else
goto label45 ;
}
{
ATerm trm154 = ATgetArgument(t, 2);
}
}
else
goto label45 ;
t = (ATerm) ATempty;
goto label41 ;
label45 :
t = trm141;
t = term17;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto fail32 ;
else
goto label41 ;
}
}
}
}
}
label41 :
;
d_7 = t;
t = g_7;
t = d_7;
}
}
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
{
ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,b_8 = NULL;
v_7 = t;
t = term11;
t_7 = t;
t = v_7;
b_8 = t;
t = term37;
u_7 = t;
t = b_8;
if((sl_readvar(0, sl) == NULL))
goto fail33 ;
else
{
t = log_0_3(sl_up(sl), t_7, u_7, sl_readvar(0, sl), t);
if((t == NULL))
goto fail33 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm start_prod2tree_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "start_prod2tree_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_6 = NULL,r_6 = NULL,t_6 = NULL;
if(match_cons(t, sym_prod_3))
{
q_6 = ATgetArgument(t, 0);
{
ATerm trm121 = ATgetArgument(t, 1);
if(!(match_cons(trm121, sym_start_0)))
goto fail31 ;
}
{
ATerm trm122 = ATgetArgument(t, 2);
}
}
else
goto fail31 ;
t_6 = t;
t = q_6;
t = syms2trees_0_0(sl, t);
if((t == NULL))
goto fail31 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
r_6 = ATgetFirst((ATermList) t);
{
ATerm trm123 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm123) == AT_LIST) && ATisEmpty(trm123))))
goto fail31 ;
}
}
else
goto fail31 ;
t = t_6;
t = r_6;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm ignore_prod_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ignore_prod_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_vars(3);
{
ATerm trm23 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm24 = ATgetArgument(t, 0);
ATerm trm25 = ATgetArgument(t, 1);
if(match_cons(trm25, sym_cf_1))
{
ATerm trm26 = ATgetArgument(trm25, 0);
if(!(match_cons(trm26, sym_layout_0)))
goto label20 ;
}
else
goto label20 ;
{
ATerm trm27 = ATgetArgument(t, 2);
}
}
else
goto label20 ;
goto label19 ;
label20 :
t = trm23;
{
ATerm trm28 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm29 = ATgetArgument(t, 0);
ATerm trm30 = ATgetArgument(t, 1);
if(match_cons(trm30, sym_cf_1))
{
ATerm trm31 = ATgetArgument(trm30, 0);
if(match_cons(trm31, sym_opt_1))
{
ATerm trm32 = ATgetArgument(trm31, 0);
if(!(match_cons(trm32, sym_layout_0)))
goto label21 ;
}
else
goto label21 ;
}
else
goto label21 ;
{
ATerm trm33 = ATgetArgument(t, 2);
}
}
else
goto label21 ;
goto label19 ;
label21 :
t = trm28;
{
ATerm trm34 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm35 = ATgetArgument(t, 0);
ATerm trm36 = ATgetArgument(t, 1);
if(match_cons(trm36, sym_lex_1))
{
ATerm trm37 = ATgetArgument(trm36, 0);
}
else
goto label22 ;
{
ATerm trm38 = ATgetArgument(t, 2);
}
}
else
goto label22 ;
goto label19 ;
label22 :
t = trm34;
{
ATerm trm39 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm40 = ATgetArgument(t, 0);
ATerm trm41 = ATgetArgument(t, 1);
if(match_cons(trm41, sym_lit_1))
{
ATerm trm42 = ATgetArgument(trm41, 0);
}
else
goto label23 ;
{
ATerm trm43 = ATgetArgument(t, 2);
}
}
else
goto label23 ;
goto label19 ;
label23 :
t = trm39;
{
ATerm trm44 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm45 = ATgetArgument(t, 0);
ATerm trm46 = ATgetArgument(t, 1);
if(match_cons(trm46, sym_ci_lit_1))
{
ATerm trm47 = ATgetArgument(trm46, 0);
}
else
goto label24 ;
{
ATerm trm48 = ATgetArgument(t, 2);
}
}
else
goto label24 ;
goto label19 ;
label24 :
t = trm44;
{
ATerm trm49 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm50 = ATgetArgument(t, 0);
if(((ATgetType(trm50) == AT_LIST) && !(ATisEmpty(trm50))))
{
ATerm trm51 = ATgetFirst((ATermList) trm50);
if(match_cons(trm51, sym_lex_1))
{
ATerm trm52 = ATgetArgument(trm51, 0);
if(match_cons(trm52, sym_iter_star_1))
{
ATerm trm53 = ATgetArgument(trm52, 0);
if(match_cons(trm53, sym_char_class_1))
{
ATerm trm54 = ATgetArgument(trm53, 0);
}
else
goto label25 ;
}
else
goto label25 ;
}
else
goto label25 ;
{
ATerm trm55 = (ATerm) ATgetNext((ATermList) trm50);
if(!(((ATgetType(trm55) == AT_LIST) && ATisEmpty(trm55))))
goto label25 ;
}
}
else
goto label25 ;
{
ATerm trm56 = ATgetArgument(t, 1);
if(match_cons(trm56, sym_cf_1))
{
ATerm trm57 = ATgetArgument(trm56, 0);
if(match_cons(trm57, sym_iter_star_1))
{
ATerm trm58 = ATgetArgument(trm57, 0);
if(match_cons(trm58, sym_char_class_1))
{
ATerm trm59 = ATgetArgument(trm58, 0);
}
else
goto label25 ;
}
else
goto label25 ;
}
else
goto label25 ;
}
{
ATerm trm60 = ATgetArgument(t, 2);
}
}
else
goto label25 ;
goto label19 ;
label25 :
t = trm49;
{
ATerm trm61 = t;
ATerm m_6 = NULL,n_6 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm62 = ATgetArgument(t, 0);
if(((ATgetType(trm62) == AT_LIST) && !(ATisEmpty(trm62))))
{
ATerm trm63 = ATgetFirst((ATermList) trm62);
if(match_cons(trm63, sym_lex_1))
{
ATerm trm64 = ATgetArgument(trm63, 0);
}
else
goto label26 ;
{
ATerm trm65 = (ATerm) ATgetNext((ATermList) trm62);
if(!(((ATgetType(trm65) == AT_LIST) && ATisEmpty(trm65))))
goto label26 ;
}
}
else
goto label26 ;
m_6 = ATgetArgument(t, 1);
{
ATerm trm66 = ATgetArgument(t, 2);
}
}
else
goto label26 ;
n_6 = t;
t = m_6;
{
struct str_closure k_203 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(k_203);
t = oncetd_1_0(sl, lifted17_cl, t);
if((t == NULL))
goto label26 ;
t = n_6;
}
goto label19 ;
label26 :
t = trm61;
{
ATerm trm68 = t;
ATerm l_6 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm69 = ATgetArgument(t, 0);
if(((ATgetType(trm69) == AT_LIST) && !(ATisEmpty(trm69))))
{
l_6 = ATgetFirst((ATermList) trm69);
{
ATerm trm70 = (ATerm) ATgetNext((ATermList) trm69);
if(!(((ATgetType(trm70) == AT_LIST) && ATisEmpty(trm70))))
goto label27 ;
}
}
else
goto label27 ;
{
ATerm trm71 = ATgetArgument(t, 1);
if(match_cons(trm71, sym_cf_1))
{
if(!((l_6 == ATgetArgument(trm71, 0))))
goto label27 ;
}
else
goto label27 ;
}
{
ATerm trm72 = ATgetArgument(t, 2);
}
}
else
goto label27 ;
goto label19 ;
label27 :
t = trm68;
{
ATerm trm73 = t;
ATerm k_6 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm74 = ATgetArgument(t, 0);
if(((ATgetType(trm74) == AT_LIST) && !(ATisEmpty(trm74))))
{
ATerm trm75 = ATgetFirst((ATermList) trm74);
if(match_cons(trm75, sym_varsym_1))
{
ATerm trm76 = ATgetArgument(trm75, 0);
if(match_cons(trm76, sym_cf_1))
{
k_6 = ATgetArgument(trm76, 0);
}
else
goto label28 ;
}
else
goto label28 ;
{
ATerm trm77 = (ATerm) ATgetNext((ATermList) trm74);
if(!(((ATgetType(trm77) == AT_LIST) && ATisEmpty(trm77))))
goto label28 ;
}
}
else
goto label28 ;
{
ATerm trm78 = ATgetArgument(t, 1);
if(match_cons(trm78, sym_cf_1))
{
if(!((k_6 == ATgetArgument(trm78, 0))))
goto label28 ;
}
else
goto label28 ;
}
{
ATerm trm79 = ATgetArgument(t, 2);
}
}
else
goto label28 ;
goto label19 ;
label28 :
t = trm73;
{
ATerm trm80 = t;
ATerm h_6 = NULL,i_6 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm81 = ATgetArgument(t, 0);
if(((ATgetType(trm81) == AT_LIST) && !(ATisEmpty(trm81))))
{
ATerm trm82 = ATgetFirst((ATermList) trm81);
if(match_cons(trm82, sym_lit_1))
{
ATerm trm83 = ATgetArgument(trm82, 0);
}
else
goto label29 ;
{
ATerm trm84 = (ATerm) ATgetNext((ATermList) trm81);
if(!(((ATgetType(trm84) == AT_LIST) && ATisEmpty(trm84))))
goto label29 ;
}
}
else
goto label29 ;
{
ATerm trm85 = ATgetArgument(t, 1);
if(match_cons(trm85, sym_cf_1))
{
ATerm trm86 = ATgetArgument(trm85, 0);
if(match_cons(trm86, sym_alt_2))
{
ATerm trm87 = ATgetArgument(trm86, 0);
if(match_cons(trm87, sym_lit_1))
{
ATerm trm88 = ATgetArgument(trm87, 0);
}
else
goto label29 ;
h_6 = ATgetArgument(trm86, 1);
}
else
goto label29 ;
}
else
goto label29 ;
}
{
ATerm trm89 = ATgetArgument(t, 2);
if(match_cons(trm89, sym_attrs_1))
{
ATerm trm90 = ATgetArgument(trm89, 0);
if(!(((ATgetType(trm90) == AT_LIST) && ATisEmpty(trm90))))
goto label29 ;
}
else
goto label29 ;
}
}
else
goto label29 ;
i_6 = t;
{
struct str_closure m_203 = { &(j_6) , &(frame) };
StrCL j_6_cl = &(m_203);
sl_init_fun(0, j_6_cl);
t = h_6;
t = j_6(&(frame), t);
if((t == NULL))
goto label29 ;
t = i_6;
}
goto label19 ;
label29 :
t = trm80;
{
ATerm trm92 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm93 = ATgetArgument(t, 0);
if(((ATgetType(trm93) == AT_LIST) && !(ATisEmpty(trm93))))
{
ATerm trm94 = ATgetFirst((ATermList) trm93);
if(!(match_cons(trm94, sym_start_0)))
goto label32 ;
{
ATerm trm95 = (ATerm) ATgetNext((ATermList) trm93);
if(!(((ATgetType(trm95) == AT_LIST) && ATisEmpty(trm95))))
goto label32 ;
}
}
else
goto label32 ;
{
ATerm trm96 = ATgetArgument(t, 1);
if(match_cons(trm96, sym_sort_1))
{
ATerm trm97 = ATgetArgument(trm96, 0);
if(!((ATgetSymbol(trm97) == ATmakeSymbol("SURROGATE-START", 0, ATtrue))))
goto label32 ;
}
else
goto label32 ;
}
{
ATerm trm98 = ATgetArgument(t, 2);
}
}
else
goto label32 ;
goto label19 ;
label32 :
t = trm92;
{
ATerm trm99 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm100 = ATgetArgument(t, 0);
ATerm trm101 = ATgetArgument(t, 1);
if(!(match_cons(trm101, sym_file_start_0)))
goto label33 ;
{
ATerm trm102 = ATgetArgument(t, 2);
}
}
else
goto label33 ;
goto label19 ;
label33 :
t = trm99;
{
ATerm trm103 = t;
ATerm f_6 = NULL,g_6 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm104 = ATgetArgument(t, 0);
ATerm trm105 = ATgetArgument(t, 1);
ATerm trm106 = ATgetArgument(t, 2);
if(match_cons(trm106, sym_attrs_1))
{
f_6 = ATgetArgument(trm106, 0);
}
else
goto label34 ;
}
else
goto label34 ;
g_6 = t;
t = f_6;
{
struct str_closure n_203 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(n_203);
t = fetch_1_0(sl, lifted19_cl, t);
if((t == NULL))
goto label34 ;
t = g_6;
}
goto label19 ;
label34 :
t = trm103;
{
ATerm trm107 = t;
ATerm d_6 = NULL,e_6 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm108 = ATgetArgument(t, 0);
ATerm trm109 = ATgetArgument(t, 1);
ATerm trm110 = ATgetArgument(t, 2);
if(match_cons(trm110, sym_attrs_1))
{
d_6 = ATgetArgument(trm110, 0);
}
else
goto label35 ;
}
else
goto label35 ;
e_6 = t;
t = d_6;
{
struct str_closure p_203 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(p_203);
t = fetch_1_0(sl, lifted20_cl, t);
if((t == NULL))
goto label35 ;
t = e_6;
}
goto label19 ;
label35 :
t = trm107;
{
ATerm trm112 = t;
ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
sl_init_var(0, z_5);
sl_init_var(1, a_6);
sl_init_var(2, b_6);
{
struct str_closure u_203 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(u_203);
struct str_closure v_203 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(v_203);
struct str_closure w_203 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(w_203);
t = prod_3_0(sl, lifted22_cl, lifted23_cl, lifted28_cl, t);
if((t == NULL))
goto label36 ;
c_6 = t;
if((z_5 == NULL))
goto label36 ;
else
{
t = z_5;
}
{
struct str_closure x_203 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(x_203);
t = fetch_1_0(sl, lifted29_cl, t);
if((t == NULL))
goto label36 ;
if((z_5 == NULL))
goto label36 ;
else
{
t = z_5;
}
{
ATerm trm114 = t;
t = get_cnstr_name_0_0(sl, t);
if((t == NULL))
goto label40 ;
goto label36 ;
label40 :
t = trm114;
goto label39 ;
label39 :
;
if((a_6 == NULL))
goto label36 ;
else
{
t = a_6;
}
t = syms2trees_0_0(sl, t);
if((t == NULL))
goto label36 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm115 = ATgetFirst((ATermList) t);
if(match_cons(trm115, sym_Ref_1))
{
ATerm trm116 = ATgetArgument(trm115, 0);
if(match_cons(trm116, sym_Nonterm_1))
{
if((b_6 == NULL))
{
b_6 = ATgetArgument(trm116, 0);
}
else
if((b_6 != ATgetArgument(trm116, 0)))
goto label36 ;
}
else
goto label36 ;
}
else
goto label36 ;
{
ATerm trm117 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm117) == AT_LIST) && ATisEmpty(trm117))))
goto label36 ;
}
}
else
goto label36 ;
t = c_6;
}
}
}
goto label19 ;
label36 :
t = trm112;
if(match_cons(t, sym_prod_3))
{
ATerm trm118 = ATgetArgument(t, 0);
ATerm trm119 = ATgetArgument(t, 1);
if(!(match_cons(trm119, sym_start_0)))
goto fail18 ;
{
ATerm trm120 = ATgetArgument(t, 2);
}
goto label19 ;
}
else
goto fail18 ;
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
label19 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_bracket_0)))
goto fail30 ;
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
if(match_cons(t, sym_attrs_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail29 ;
}
else
goto fail29 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_203 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(t_203);
t = cf_1_0(sl_up(sl), lifted24_cl, t);
if((t == NULL))
goto fail25 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm113 = t;
struct str_closure q_203 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(q_203);
t = sort_1_0(sl_up(sl_up(sl)), lifted25_cl, t);
if((t == NULL))
goto label38 ;
goto label37 ;
label38 :
t = trm113;
{
struct str_closure r_203 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(r_203);
struct str_closure s_203 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted27_cl = &(s_203);
t = parameterized_sort_2_0(sl_up(sl_up(sl)), lifted26_cl, lifted27_cl, t);
if((t == NULL))
goto fail26 ;
else
goto label37 ;
}
label37 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl_up(sl_up(sl))) == NULL))
{
sl_readvar(2, sl_up(sl_up(sl))) = t;
}
else
if((sl_readvar(2, sl_up(sl_up(sl))) != t))
goto fail28 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl_up(sl_up(sl))) == NULL))
{
sl_readvar(2, sl_up(sl_up(sl))) = t;
}
else
if((sl_readvar(2, sl_up(sl_up(sl))) != t))
goto fail27 ;
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
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail24 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_203 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(o_203);
t = term_1_0(sl_up(sl), lifted21_cl, t);
if((t == NULL))
goto fail22 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_201 = NULL,y_201 = NULL,z_201 = NULL,c_202 = NULL;
ATerm trm111;
trm111 = (ATerm) ATgetAnnotations(t);
if((trm111 == NULL))
trm111 = (ATerm) ATempty;
if(match_cons(t, sym_rtg_1))
{
y_201 = ATgetArgument(t, 0);
}
else
goto fail23 ;
x_201 = trm111;
t = y_201;
c_202 = t;
if(!(match_cons(t, sym_ignore_0)))
goto fail23 ;
z_201 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_rtg_1, z_201), x_201);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_reject_0)))
goto fail21 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm j_6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "j_6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm91 = t;
struct str_closure l_203 = { &(_Id) , sl_up(sl) };
StrCL lifted18_cl = &(l_203);
t = lit_1_0(sl_up(sl), lifted18_cl, t);
if((t == NULL))
goto label31 ;
goto label30 ;
label31 :
t = trm91;
t = alt_2_0(sl_up(sl), sl_fun_cl(0, sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail20 ;
else
goto label30 ;
label30 :
;
}
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
if(match_cons(t, sym_char_class_1))
{
ATerm trm67 = ATgetArgument(t, 0);
}
else
goto fail19 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm cycle_error_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "cycle_error_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL;
if(match_cons(t, sym__2))
{
u_5 = ATgetArgument(t, 0);
{
ATerm trm19 = ATgetArgument(t, 1);
if(match_cons(trm19, sym_ProdRule_2))
{
t_5 = ATgetArgument(trm19, 0);
{
ATerm trm20 = ATgetArgument(trm19, 1);
if(((ATgetType(trm20) == AT_LIST) && !(ATisEmpty(trm20))))
{
ATerm trm21 = ATgetFirst((ATermList) trm20);
if(match_cons(trm21, sym_Ref_1))
{
if(!((t_5 == ATgetArgument(trm21, 0))))
goto fail17 ;
}
else
goto fail17 ;
{
ATerm trm22 = (ATerm) ATgetNext((ATermList) trm20);
if(!(((ATgetType(trm22) == AT_LIST) && ATisEmpty(trm22))))
goto fail17 ;
}
}
else
goto fail17 ;
}
}
else
goto fail17 ;
}
}
else
goto fail17 ;
x_5 = t;
t = term29;
v_5 = t;
t = x_5;
y_5 = t;
t = term31;
w_5 = t;
t = y_5;
t = log_0_3(sl, v_5, w_5, u_5, t);
if((t == NULL))
goto fail17 ;
t = term17;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail17 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm grammar2prodrules_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "grammar2prodrules_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm8 = t;
ATerm n_5 = NULL;
struct str_closure d_203 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(d_203);
if(match_cons(t, sym_syntax_1))
{
n_5 = ATgetArgument(t, 0);
}
else
goto label9 ;
t = n_5;
{
struct str_closure e_203 = { &(ignore_prod_0_0) , sl };
StrCL lifted12_cl = &(e_203);
t = remove_all_1_0(sl, lifted12_cl, t);
if((t == NULL))
goto label9 ;
{
struct str_closure j_203 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(j_203);
t = map_1_0(sl, lifted13_cl, t);
if((t == NULL))
goto label9 ;
t = remove_all_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto label9 ;
}
}
goto label8 ;
label9 :
t = trm8;
{
ATerm trm16 = t;
ATerm l_5 = NULL,m_5 = NULL;
if(match_cons(t, sym_context_free_syntax_1))
{
ATerm trm17 = ATgetArgument(t, 0);
}
else
goto label18 ;
m_5 = t;
t = term25;
l_5 = t;
t = m_5;
t = fatal_err_0_1(sl, l_5, t);
if((t == NULL))
goto label18 ;
goto label8 ;
label18 :
t = trm16;
{
ATerm j_5 = NULL,k_5 = NULL;
if(match_cons(t, sym_lexical_syntax_1))
{
ATerm trm18 = ATgetArgument(t, 0);
}
else
goto fail12 ;
k_5 = t;
t = term27;
j_5 = t;
t = k_5;
t = fatal_err_0_1(sl, j_5, t);
if((t == NULL))
goto fail12 ;
else
goto label8 ;
}
}
label8 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm o_5 = NULL,p_5 = NULL;
sl_init_var(0, o_5);
if((o_5 == NULL))
{
o_5 = t;
}
else
if((o_5 != t))
goto fail14 ;
{
ATerm trm9 = t;
t = listinj2prodrule_0_0(sl_up(sl), t);
if((t == NULL))
goto label11 ;
goto label10 ;
label11 :
t = trm9;
{
ATerm trm10 = t;
t = seq2prodrule_0_0(sl_up(sl), t);
if((t == NULL))
goto label12 ;
goto label10 ;
label12 :
t = trm10;
{
ATerm trm11 = t;
t = alt2prodrule_0_0(sl_up(sl), t);
if((t == NULL))
goto label13 ;
goto label10 ;
label13 :
t = trm11;
{
ATerm trm12 = t;
t = var2prodrule_0_0(sl_up(sl), t);
if((t == NULL))
goto label14 ;
goto label10 ;
label14 :
t = trm12;
{
ATerm trm13 = t;
t = opt2prodrule_0_0(sl_up(sl), t);
if((t == NULL))
goto label15 ;
goto label10 ;
label15 :
t = trm13;
{
ATerm trm14 = t;
t = inj2prodrule_0_0(sl_up(sl), t);
if((t == NULL))
goto label16 ;
goto label10 ;
label16 :
t = trm14;
{
ATerm trm15 = t;
t = prod2prodrule_0_0(sl_up(sl), t);
if((t == NULL))
goto label17 ;
goto label10 ;
label17 :
t = trm15;
{
struct str_closure f_203 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(f_203);
t = err_1_0(sl_up(sl), lifted14_cl, t);
if((t == NULL))
goto fail14 ;
goto fail14 ;
}
}
}
}
}
}
}
label10 :
;
p_5 = t;
{
struct str_closure g_203 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(g_203);
t = try_1_0(sl_up(sl), lifted15_cl, t);
if((t == NULL))
goto fail14 ;
t = p_5;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_5 = NULL,r_5 = NULL;
r_5 = t;
q_5 = t;
if((sl_readvar(0, sl) == NULL))
goto fail16 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), q_5);
}
t = cycle_error_0_0(sl_up(sl_up(sl)), t);
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
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail13 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
ATerm core_sdf_grammar2rtg_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "core_sdf_grammar2rtg_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL;
g_4 = t;
t = term9;
t = table_create_0_0(sl, t);
if((t == NULL))
goto fail6 ;
t = g_4;
h_4 = t;
{
struct str_closure y_202 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(y_202);
t = collect_om_1_0(sl, lifted7_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure z_202 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(z_202);
t = map_1_0(sl, lifted8_cl, t);
if((t == NULL))
goto fail6 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail6 ;
{
ATerm trm2 = t;
ATerm o_4 = NULL;
o_4 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label3 ;
{
ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL;
z_4 = t;
t = term11;
x_4 = t;
t = z_4;
a_5 = t;
t = term15;
y_4 = t;
t = a_5;
t = log_0_2(sl, x_4, y_4, t);
if((t == NULL))
goto fail6 ;
t = term17;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto fail6 ;
else
goto label2 ;
}
label3 :
t = trm2;
f_4 = t;
goto label2 ;
label2 :
;
t = h_4;
{
struct str_closure a_203 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(a_203);
t = collect_om_1_0(sl, lifted9_cl, t);
if((t == NULL))
goto fail6 ;
{
ATerm trm6 = t;
ATerm r_4 = NULL;
r_4 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label5 ;
{
ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
e_5 = t;
t = term11;
c_5 = t;
t = e_5;
f_5 = t;
t = term19;
d_5 = t;
t = f_5;
t = log_0_2(sl, c_5, d_5, t);
if((t == NULL))
goto fail6 ;
t = term17;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto fail6 ;
else
goto label4 ;
}
label5 :
t = trm6;
{
ATerm h_5 = NULL,i_5 = NULL;
struct str_closure c_203 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(c_203);
t = map_1_0(sl, lifted10_cl, t);
if((t == NULL))
goto fail6 ;
i_5 = t;
h_5 = t;
if((f_4 == NULL))
goto fail6 ;
else
{
t = (ATerm) ATmakeAppl(sym_RTG_2, (ATerm)ATmakeAppl(sym_Start_1, h_5), (ATerm) ATmakeAppl(sym_ProdRules_1, f_4));
goto label4 ;
}
}
label4 :
;
}
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm7 = t;
ATerm g_5 = NULL;
t = start_prod2tree_0_0(sl_up(sl), t);
if((t == NULL))
goto label7 ;
if(match_cons(t, sym_Ref_1))
{
g_5 = ATgetArgument(t, 0);
}
else
goto label7 ;
t = g_5;
goto label6 ;
label7 :
t = trm7;
{
struct str_closure b_203 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(b_203);
t = err_1_0(sl_up(sl), lifted11_cl, t);
if((t == NULL))
goto fail10 ;
goto fail10 ;
}
label6 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_prod_3))
{
ATerm trm3 = ATgetArgument(t, 0);
ATerm trm4 = ATgetArgument(t, 1);
if(!(match_cons(trm4, sym_start_0)))
goto fail9 ;
{
ATerm trm5 = ATgetArgument(t, 2);
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
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
t = grammar2prodrules_0_0(sl_up(sl), t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm1;
{
ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
u_4 = t;
t = term11;
s_4 = t;
t = u_4;
v_4 = t;
t = term13;
t_4 = t;
t = v_4;
t = log_0_2(sl_up(sl), s_4, t_4, t);
if((t == NULL))
goto fail8 ;
goto fail8 ;
}
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_syntax_1))
{
ATerm trm0 = ATgetArgument(t, 0);
}
else
goto fail7 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_pp_sdf2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_pp_sdf2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_202 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(r_202);
struct str_closure s_202 = { &(pass_verbose_0_0) , sl };
StrCL lifted6_cl = &(s_202);
struct str_closure t_202 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(t_202);
struct str_closure u_202 = { &(pass_verbose_0_0) , sl };
StrCL lifted1_cl = &(u_202);
t = xtc_transform_2_0(sl, lifted0_cl, lifted1_cl, t);
if((t == NULL))
goto fail1 ;
{
struct str_closure v_202 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(v_202);
struct str_closure w_202 = { &(pass_verbose_0_0) , sl };
StrCL lifted3_cl = &(w_202);
t = xtc_transform_2_0(sl, lifted2_cl, lifted3_cl, t);
if((t == NULL))
goto fail1 ;
{
struct str_closure x_202 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(x_202);
t = xtc_ast2abox_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto fail1 ;
t = xtc_transform_2_0(sl, lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto fail1 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term5;
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
t = term3;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term1;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_pp_rtg_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_pp_rtg_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
w_2 = t;
y_2 = t;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail0 ;
x_2 = t;
t = y_2;
t = x_2;
v_2 = t;
t = w_2;
t = pp_rtg_file_0_1(sl, v_2, t);
if((t == NULL))
goto fail0 ;
t = (ATerm) ATmakeAppl(sym_FILE_1, v_2);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 216));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
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
closures[closures_index].fun = &(foldr_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("foldr_2_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(fetch_elem_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_elem_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(length_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("length_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(remove_all_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("remove_all_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_om_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_om_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(finally_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("finally_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(repeat_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repeat_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(oncetd_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("oncetd_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(perror_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("perror_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_text_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_text_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fputs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fputs_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fclose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fclose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(open_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("open_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(echo_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("echo_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ReadFromFile_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ReadFromFile_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_alphanum_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_alphanum_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(trim_chars_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("trim_chars_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(split_before_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("split_before_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_as_chars_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_as_chars_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(newname_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("newname_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(new_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("new_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Option_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Option_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_verbose3_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose3_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_verbose1_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose1_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fatal_err_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fatal_err_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(FILE_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("FILE_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_location_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_location_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_wrap_5_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_wrap_5_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_exit_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(xtc_transform_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_new_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_new_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ast2box_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ast2box_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(box2text_stream_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("box2text_stream_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(TupleTerm_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("TupleTerm_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(EscapeSeq_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("EscapeSeq_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Chars_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Chars_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Term_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Term_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Nonterm_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Nonterm_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(GetInternalDefaultXtcRepository_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("GetInternalDefaultXtcRepository_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(term_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("term_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(prod_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("prod_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(cf_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("cf_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lex_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lex_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(varsym_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("varsym_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(opt_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("opt_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(sort_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sort_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parameterized_sort_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parameterized_sort_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lit_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lit_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(label_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("label_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(seq_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("seq_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(alt_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("alt_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(HelpString_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("HelpString_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sdf2rtg_about_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf2rtg_about_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sdf2rtg_usage_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf2rtg_usage_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(ignore_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ignore_option_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(sdf2rtg_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf2rtg_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted112);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted112", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted109);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted109", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted108);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted108", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_sdf2rtg_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_sdf2rtg_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pp_rtg_box_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pp_rtg_box_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(pp_rtg_file_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pp_rtg_file_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted104);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted104", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(ExplodeId_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ExplodeId_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted94);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted94", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted89);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted89", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtg_ppfix_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg_ppfix_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted87);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted87", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ensure_help_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ensure_help_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(package_bugreport_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("package_bugreport_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(package_version_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("package_version_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(package_name_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("package_name_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted86);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted86", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted85);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted85", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted83);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted83", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(DesugarToolDoc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("DesugarToolDoc_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(tool_doc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tool_doc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_arg_flags_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_arg_flags_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted76);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted76", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_v_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_v_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted75);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted75", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted74);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted74", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_abox2text_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_abox2text_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted72);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted72", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted71);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted71", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_ast2abox_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_ast2abox_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_sdf_main_module_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_sdf_main_module_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(sdf_main_module_option_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf_main_module_option_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted64);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted64", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_prod_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_prod_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted62);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted62", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Symbol2String_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Symbol2String_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sdf_symbol_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf_symbol_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(err_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("err_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_cnstr_name_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_cnstr_name_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sort2nonterm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sort2nonterm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sym2nonterm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sym2nonterm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sym2tree_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sym2tree_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_empty_sym_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_empty_sym_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted53);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted53", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(syms2trees_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("syms2trees_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_nonterm_generator_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_nonterm_generator_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_list_symbol_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_list_symbol_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_alt_symbol_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_alt_symbol_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_seq_symbol_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_seq_symbol_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_nonterm_of_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_nonterm_of_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(var2prodrule_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("var2prodrule_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(opt2prodrule_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("opt2prodrule_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(listinj2prodrule_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("listinj2prodrule_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(alt2prodrule_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("alt2prodrule_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(seq2prodrule_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("seq2prodrule_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted34);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted34", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(inj2prodrule_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("inj2prodrule_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(prod2prodrule_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("prod2prodrule_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(start_prod2tree_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("start_prod2tree_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(j_6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("j_6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ignore_prod_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ignore_prod_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(cycle_error_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("cycle_error_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(grammar2prodrules_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("grammar2prodrules_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(core_sdf_grammar2rtg_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("core_sdf_grammar2rtg_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_pp_sdf2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_pp_sdf2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_pp_rtg_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_pp_rtg_0_0", 0, ATtrue)), &(closures[closures_index]));
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
