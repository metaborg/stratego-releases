#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__4;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Warning_0;
static Symbol sym_Critical_0;
static Symbol sym_FILE_1;
static Symbol sym_wildcard_0;
static Symbol sym_parse_testsuite_3;
static Symbol sym_topsort_1;
static Symbol sym_options_1;
static Symbol sym_option_2;
static Symbol sym_parse_test_4;
static Symbol sym_pattern_1;
static Symbol sym_failure_0;
static Symbol sym_success_0;
static Symbol sym_wildcardvar_0;
static Symbol sym_file_1;
static Symbol sym_string_3;
static Symbol sym_name_1;
static Symbol sym_description_1;
static Symbol sym_string_1;
static Symbol sym_parse_test_2;
static Symbol sym_parse_test_3;
static Symbol sym_Implode_1;
static Symbol sym_Parse_1;
static Symbol sym_Success_1;
static Symbol sym_Failure_1;
static Symbol sym_ParseResult_2;
static Symbol sym_Failure_0;
static Symbol sym_Success_0;
static Symbol sym_TestResults_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_natural_1;
static Symbol sym_quoted_1;
static Symbol sym_unquoted_1;
static Symbol sym_int_1;
static Symbol sym_fun_1;
static Symbol sym_appl_2;
static Symbol sym_list_1;
static Symbol sym_TopSort_0;
static Symbol sym_ParseTable_0;
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
static void init_module_constructors (void)
{
sym__4 = ATmakeSymbol("", 4, ATfalse);
ATprotectSymbol(sym__4);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Warning_0 = ATmakeSymbol("Warning", 0, ATfalse);
ATprotectSymbol(sym_Warning_0);
sym_Critical_0 = ATmakeSymbol("Critical", 0, ATfalse);
ATprotectSymbol(sym_Critical_0);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
sym_wildcard_0 = ATmakeSymbol("wildcard", 0, ATfalse);
ATprotectSymbol(sym_wildcard_0);
sym_parse_testsuite_3 = ATmakeSymbol("parse-testsuite", 3, ATfalse);
ATprotectSymbol(sym_parse_testsuite_3);
sym_topsort_1 = ATmakeSymbol("topsort", 1, ATfalse);
ATprotectSymbol(sym_topsort_1);
sym_options_1 = ATmakeSymbol("options", 1, ATfalse);
ATprotectSymbol(sym_options_1);
sym_option_2 = ATmakeSymbol("option", 2, ATfalse);
ATprotectSymbol(sym_option_2);
sym_parse_test_4 = ATmakeSymbol("parse-test", 4, ATfalse);
ATprotectSymbol(sym_parse_test_4);
sym_pattern_1 = ATmakeSymbol("pattern", 1, ATfalse);
ATprotectSymbol(sym_pattern_1);
sym_failure_0 = ATmakeSymbol("failure", 0, ATfalse);
ATprotectSymbol(sym_failure_0);
sym_success_0 = ATmakeSymbol("success", 0, ATfalse);
ATprotectSymbol(sym_success_0);
sym_wildcardvar_0 = ATmakeSymbol("wildcardvar", 0, ATfalse);
ATprotectSymbol(sym_wildcardvar_0);
sym_file_1 = ATmakeSymbol("file", 1, ATfalse);
ATprotectSymbol(sym_file_1);
sym_string_3 = ATmakeSymbol("string", 3, ATfalse);
ATprotectSymbol(sym_string_3);
sym_name_1 = ATmakeSymbol("name", 1, ATfalse);
ATprotectSymbol(sym_name_1);
sym_description_1 = ATmakeSymbol("description", 1, ATfalse);
ATprotectSymbol(sym_description_1);
sym_string_1 = ATmakeSymbol("string", 1, ATfalse);
ATprotectSymbol(sym_string_1);
sym_parse_test_2 = ATmakeSymbol("parse-test", 2, ATfalse);
ATprotectSymbol(sym_parse_test_2);
sym_parse_test_3 = ATmakeSymbol("parse-test", 3, ATfalse);
ATprotectSymbol(sym_parse_test_3);
sym_Implode_1 = ATmakeSymbol("Implode", 1, ATfalse);
ATprotectSymbol(sym_Implode_1);
sym_Parse_1 = ATmakeSymbol("Parse", 1, ATfalse);
ATprotectSymbol(sym_Parse_1);
sym_Success_1 = ATmakeSymbol("Success", 1, ATfalse);
ATprotectSymbol(sym_Success_1);
sym_Failure_1 = ATmakeSymbol("Failure", 1, ATfalse);
ATprotectSymbol(sym_Failure_1);
sym_ParseResult_2 = ATmakeSymbol("ParseResult", 2, ATfalse);
ATprotectSymbol(sym_ParseResult_2);
sym_Failure_0 = ATmakeSymbol("Failure", 0, ATfalse);
ATprotectSymbol(sym_Failure_0);
sym_Success_0 = ATmakeSymbol("Success", 0, ATfalse);
ATprotectSymbol(sym_Success_0);
sym_TestResults_1 = ATmakeSymbol("TestResults", 1, ATfalse);
ATprotectSymbol(sym_TestResults_1);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_natural_1 = ATmakeSymbol("natural", 1, ATfalse);
ATprotectSymbol(sym_natural_1);
sym_quoted_1 = ATmakeSymbol("quoted", 1, ATfalse);
ATprotectSymbol(sym_quoted_1);
sym_unquoted_1 = ATmakeSymbol("unquoted", 1, ATfalse);
ATprotectSymbol(sym_unquoted_1);
sym_int_1 = ATmakeSymbol("int", 1, ATfalse);
ATprotectSymbol(sym_int_1);
sym_fun_1 = ATmakeSymbol("fun", 1, ATfalse);
ATprotectSymbol(sym_fun_1);
sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
ATprotectSymbol(sym_appl_2);
sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
ATprotectSymbol(sym_list_1);
sym_TopSort_0 = ATmakeSymbol("TopSort", 0, ATfalse);
ATprotectSymbol(sym_TopSort_0);
sym_ParseTable_0 = ATmakeSymbol("ParseTable", 0, ATfalse);
ATprotectSymbol(sym_ParseTable_0);
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
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("-----------------------------------------------------------------------", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol(" tests", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol(" with ", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("executing testsuite ", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("results testsuite ", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("successes : ", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("failures  : ", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("* OK   : test ", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("* ERROR: test ", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("  - parsing failed", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol(".......................................................................", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("  - succeeded: ", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("  - expected:  ", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("  - should succeed", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("  - should fail", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("\"...\"", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(sym_quoted_1, term39);
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(sym_fun_1, term41);
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("\"_\"", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(sym_quoted_1, term45);
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(sym_fun_1, term47);
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("tool-doc2abox", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeInt(80);
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("Summary:", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("Description:", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(sym__2, term65, term67);
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("Options:", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("Authors:", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("Author:", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol(" <", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("Website:", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("Please report bugs to ", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("Version", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("Package", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("Configuration:", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("Default XTC Repository", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("Current XTC Repository", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("License:", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) ", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("You should have received a copy of the GNU General Public License \n        along with this program; if not, write to the Free Software Foundation, \n        Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is distributed in the hope that it will be useful, but \n        WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or \n        FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more \n        details.", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or\n        modify it under the terms of the GNU General Public License as published by the \n        Free Software Foundation; either version 2 of the License, or (at your option) \n        any later version.", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("You should have received a copy of the GNU Lesser General Public \n         License along with this library; if not, write to the Free Software Foundation, \n         Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is distributed in the hope that it will be useful, but \n         WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or \n         FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License \n         for more details.", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or modify \n         it under the terms of the GNU Lesser General Public License as published by the \n         Free Software Foundation; either version 2 of the License, or (at your option) \n         any later version.", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(sym_HelpString_2, term117, term117);
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(sym_AutoReportBugs_0);
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(sym_OptionUsage_0);
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(ATmakeSymbol("Performs the test cases in a testsuite for an SDF syntax definition", 0, ATtrue));
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(sym_Summary_1, term125);
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-unit -p <file.tbl> -i <file.testsuite>", 0, ATtrue));
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(sym_Usage_1, term129);
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(sym_CurrentXTCRepository_0);
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(sym_DefaultXTCRepository_0);
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(ATmakeSymbol("2003-2008", 0, ATtrue));
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego Software Foundation <stratego@cs.uu.nl>", 0, ATtrue));
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(sym_GNU__LGPL_2, term137, term139);
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeAppl(ATmakeSymbol("Martin Bravenboer", 0, ATtrue));
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(ATmakeSymbol("martin.bravenboer@gmail.com", 0, ATtrue));
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeAppl(sym_Person_2, term143, term145);
ATprotect(&(term147));
term147 = term146;
ATprotect(&(term148));
term148 = (ATerm) ATmakeAppl(sym_Author_1, term147);
ATprotect(&(term149));
term149 = term148;
ATprotect(&(term150));
term150 = (ATerm) ATmakeAppl(sym_AutoProgram_0);
ATprotect(&(term151));
term151 = term150;
ATprotect(&(term152));
term152 = (ATerm) ATmakeAppl(sym_TopSort_0);
ATprotect(&(term153));
term153 = term152;
ATprotect(&(term154));
term154 = (ATerm) ATmakeAppl(sym_Critical_0);
ATprotect(&(term155));
term155 = term154;
ATprotect(&(term156));
term156 = (ATerm) ATmakeAppl(ATmakeSymbol("The options of the testsuite do not specify a topsort.", 0, ATtrue));
ATprotect(&(term157));
term157 = term156;
ATprotect(&(term158));
term158 = (ATerm) ATmakeInt(1);
ATprotect(&(term159));
term159 = term158;
ATprotect(&(term160));
term160 = (ATerm) ATmakeAppl(sym_Warning_0);
ATprotect(&(term161));
term161 = term160;
ATprotect(&(term162));
term162 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown option specified in testsuite: ", 0, ATtrue));
ATprotect(&(term163));
term163 = term162;
ATprotect(&(term164));
term164 = (ATerm) ATmakeAppl(sym_ParseTable_0);
ATprotect(&(term165));
term165 = term164;
ATprotect(&(term166));
term166 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <file.tbl>         Use parse table <file.tbl> (required)", 0, ATtrue));
ATprotect(&(term167));
term167 = term166;
ATprotect(&(term168));
term168 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid value for option --heurstic-filters: use on or off", 0, ATtrue));
ATprotect(&(term169));
term169 = term168;
ATprotect(&(term170));
term170 = (ATerm) ATmakeAppl(ATmakeSymbol("--heuristic-filters <on|off>  Enable heuristic disambiguation filters (default: off)", 0, ATtrue));
ATprotect(&(term171));
term171 = term170;
ATprotect(&(term172));
term172 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-heuristic-filters        Disable heuristic disambiguation filters (deprecated option)", 0, ATtrue));
ATprotect(&(term173));
term173 = term172;
ATprotect(&(term174));
term174 = (ATerm) ATmakeAppl(ATmakeSymbol("--single", 0, ATtrue));
ATprotect(&(term175));
term175 = term174;
ATprotect(&(term176));
term176 = (ATerm) ATmakeAppl(ATmakeSymbol("--single <nr>     Parse test <nr> and output the result to the output", 0, ATtrue));
ATprotect(&(term177));
term177 = term176;
ATprotect(&(term178));
term178 = (ATerm) ATmakeAppl(ATmakeSymbol("--single-output", 0, ATtrue));
ATprotect(&(term179));
term179 = term178;
ATprotect(&(term180));
term180 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix2", 0, ATtrue));
ATprotect(&(term181));
term181 = term180;
ATprotect(&(term182));
term182 = (ATerm) ATmakeAppl(sym__2, term179, term181);
ATprotect(&(term183));
term183 = term182;
ATprotect(&(term184));
term184 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix2          Parse to AsFix2 (only applicable when --single is used)", 0, ATtrue));
ATprotect(&(term185));
term185 = term184;
ATprotect(&(term186));
term186 = (ATerm) ATmakeAppl(ATmakeSymbol("ast", 0, ATtrue));
ATprotect(&(term187));
term187 = term186;
ATprotect(&(term188));
term188 = (ATerm) ATmakeAppl(sym__2, term179, term187);
ATprotect(&(term189));
term189 = term188;
ATprotect(&(term190));
term190 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast             Parse to AST (only applicable when --single is used)", 0, ATtrue));
ATprotect(&(term191));
term191 = term190;
ATprotect(&(term192));
term192 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
ATprotect(&(term193));
term193 = term192;
ATprotect(&(term194));
term194 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
ATprotect(&(term195));
term195 = term194;
ATprotect(&(term196));
term196 = (ATerm) ATmakeAppl(sym_Failure_0);
ATprotect(&(term197));
term197 = term196;
ATprotect(&(term198));
term198 = (ATerm) ATmakeAppl(sym_Success_0);
ATprotect(&(term199));
term199 = term198;
ATprotect(&(term200));
term200 = (ATerm) ATmakeAppl(ATmakeSymbol("sglri", 0, ATtrue));
ATprotect(&(term201));
term201 = term200;
ATprotect(&(term202));
term202 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-testsuite.tbl", 0, ATtrue));
ATprotect(&(term203));
term203 = term202;
ATprotect(&(term204));
term204 = (ATerm) ATmakeAppl(ATmakeSymbol("off", 0, ATtrue));
ATprotect(&(term205));
term205 = term204;
ATprotect(&(term206));
term206 = (ATerm) ATmakeAppl(ATmakeSymbol("--amb", 0, ATtrue));
ATprotect(&(term207));
term207 = term206;
ATprotect(&(term208));
term208 = (ATerm) ATmakeAppl(ATmakeSymbol("TestSuite", 0, ATtrue));
ATprotect(&(term209));
term209 = term208;
ATprotect(&(term210));
term210 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
ATprotect(&(term211));
term211 = term210;
ATprotect(&(term212));
term212 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
ATprotect(&(term213));
term213 = term212;
ATprotect(&(term214));
term214 = (ATerm) ATmakeAppl(ATmakeSymbol("topsort", 0, ATtrue));
ATprotect(&(term215));
term215 = term214;
ATprotect(&(term216));
term216 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading aterm result failed: ", 0, ATtrue));
ATprotect(&(term217));
term217 = term216;
ATprotect(&(term218));
term218 = (ATerm) ATmakeInt(0);
ATprotect(&(term219));
term219 = term218;
ATprotect(&(term220));
term220 = (ATerm) ATmakeAppl(ATmakeSymbol("error: parse-unit: no such test.", 0, ATtrue));
ATprotect(&(term221));
term221 = term220;
ATprotect(&(term222));
term222 = (ATerm) ATmakeAppl(ATmakeSymbol("test : ", 0, ATtrue));
ATprotect(&(term223));
term223 = term222;
ATprotect(&(term224));
term224 = (ATerm) ATmakeAppl(ATmakeSymbol("No parse table specified. Please use the -p option.", 0, ATtrue));
ATprotect(&(term225));
term225 = term224;
ATprotect(&(term226));
term226 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
ATprotect(&(term227));
term227 = term226;
ATprotect(&(term228));
term228 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-unit: ", 0, ATtrue));
ATprotect(&(term229));
term229 = term228;
ATprotect(&(term230));
term230 = (ATerm) ATmakeAppl(ATmakeSymbol("The specified parse table file does not contain a parse table", 0, ATtrue));
ATprotect(&(term231));
term231 = term230;
ATprotect(&(term232));
term232 = (ATerm) ATmakeAppl(ATmakeSymbol("Could not open parse table", 0, ATtrue));
ATprotect(&(term233));
term233 = term232;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm _2_0 (StrSL sl, StrCL x_116, StrCL y_116, ATerm t);
ATerm table_get_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm length_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL e_107, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL k_106, ATerm t);
ATerm map_with_index_1_0 (StrSL sl, StrCL j_106, ATerm t);
ATerm index_0_0 (StrSL sl, ATerm t);
ATerm zip_1_0 (StrSL sl, StrCL t_103, ATerm t);
ATerm false_0_0 (StrSL sl, ATerm t);
ATerm true_0_0 (StrSL sl, ATerm t);
ATerm finally_2_0 (StrSL sl, StrCL p_86, StrCL q_86, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL u_85, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL j_80, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL n_76, ATerm t);
ATerm perror_0_0 (StrSL sl, ATerm t);
ATerm read_text_file_0_0 (StrSL sl, ATerm t);
ATerm dirname_0_0 (StrSL sl, ATerm t);
ATerm fclose_0_0 (StrSL sl, ATerm t);
ATerm fopen_0_0 (StrSL sl, ATerm t);
ATerm stderr_stream_0_0 (StrSL sl, ATerm t);
ATerm echo_0_0 (StrSL sl, ATerm t);
ATerm say_1_0 (StrSL sl, StrCL i_73, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL e_73, ATerm t);
ATerm fprint_0_0 (StrSL sl, ATerm t);
ATerm read_from_stream_0_0 (StrSL sl, ATerm t);
ATerm write_in_text_to_stream_0_0 (StrSL sl, ATerm t);
ATerm string_to_int_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm split_before_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL v_61, StrCL w_61, StrCL x_61, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL q_61, StrCL r_61, StrCL s_61, ATerm t);
ATerm if_verbose7_1_0 (StrSL sl, StrCL l_60, ATerm t);
ATerm if_verbose1_1_0 (StrSL sl, StrCL a_52, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm set_verbosity_0_0 (StrSL sl, ATerm t);
ATerm fatal_err_0_1 (StrSL sl, ATerm o_51, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm k_51, ATerm l_51, ATerm t);
ATerm getcwd_0_0 (StrSL sl, ATerm t);
ATerm FILE_1_0 (StrSL sl, StrCL v_46, ATerm t);
ATerm xtc_location_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_5_0 (StrSL sl, StrCL e_46, StrCL f_46, StrCL g_46, StrCL h_46, StrCL i_46, ATerm t);
ATerm xtc_exit_0_0 (StrSL sl, ATerm t);
ATerm xtc_temp_files_1_0 (StrSL sl, StrCL t_45, ATerm t);
ATerm write_to_text_0_0 (StrSL sl, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL y_44, StrCL z_44, ATerm t);
ATerm xtc_transform_1_0 (StrSL sl, StrCL x_44, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
ATerm file_1_0 (StrSL sl, StrCL h_42, ATerm t);
ATerm implode_asfix_0_0 (StrSL sl, ATerm t);
ATerm report_error_0_1 (StrSL sl, ATerm h_35, ATerm t);
ATerm open_parse_table_0_0 (StrSL sl, ATerm t);
ATerm get_parse_error_0_0 (StrSL sl, ATerm t);
ATerm parse_file_pt_0_2 (StrSL sl, ATerm t_32, ATerm u_32, ATerm t);
ATerm parse_string_pt_0_2 (StrSL sl, ATerm b_30, ATerm c_30, ATerm t);
ATerm set_ambiguity_is_error_1_0 (StrSL sl, StrCL c_29, ATerm t);
ATerm set_heuristic_filters_1_0 (StrSL sl, StrCL b_29, ATerm t);
ATerm set_filter_priority_1_0 (StrSL sl, StrCL z_28, ATerm t);
ATerm implode_aterm_0_0 (StrSL sl, ATerm t);
ATerm explode_aterm_0_0 (StrSL sl, ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (StrSL sl, ATerm t);
ATerm wildcard_0_0 (StrSL sl, ATerm t);
ATerm parse_testsuite_3_0 (StrSL sl, StrCL k_27, StrCL l_27, StrCL m_27, ATerm t);
ATerm parse_test_3_0 (StrSL sl, StrCL q_26, StrCL r_26, StrCL s_26, ATerm t);
ATerm HelpString_2_0 (StrSL sl, StrCL b_25, StrCL c_25, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted107 (StrSL sl, ATerm t);
ATerm try_open_parse_table_0_0 (StrSL sl, ATerm t);
ATerm parse_unit_implode_0_0 (StrSL sl, ATerm t);
ATerm parse_unit_parse_0_2 (StrSL sl, ATerm q_27, ATerm r_27, ATerm t);
ATerm execute_test_0_2 (StrSL sl, ATerm j_18, ATerm k_18, ATerm t);
static ATerm lifted105 (StrSL sl, ATerm t);
static ATerm lifted104 (StrSL sl, ATerm t);
ATerm do_single_test_0_3 (StrSL sl, ATerm m_17, ATerm p_17, ATerm q_17, ATerm t);
static ATerm lifted103 (StrSL sl, ATerm t);
ATerm parse_unit_exit_on_failure_0_0 (StrSL sl, ATerm t);
static ATerm lifted102 (StrSL sl, ATerm t);
ATerm do_full_testsuite_0_2 (StrSL sl, ATerm y_16, ATerm a_17, ATerm t);
ATerm parse_unit_0_0 (StrSL sl, ATerm t);
static ATerm lifted99 (StrSL sl, ATerm t);
static ATerm lifted96 (StrSL sl, ATerm t);
ATerm main_parse_unit_0_0 (StrSL sl, ATerm t);
static ATerm lifted93 (StrSL sl, ATerm t);
static ATerm lifted92 (StrSL sl, ATerm t);
ATerm read_test_output_to_pattern_0_0 (StrSL sl, ATerm t);
ATerm add_description_0_0 (StrSL sl, ATerm t);
ATerm drop_whitespace_0_0 (StrSL sl, ATerm t);
static ATerm lifted85 (StrSL sl, ATerm t);
static ATerm lifted83 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted91 (StrSL sl, ATerm t);
static ATerm lifted90 (StrSL sl, ATerm t);
ATerm read_parse_testsuite_0_0 (StrSL sl, ATerm t);
ATerm create_test_compare_0_0 (StrSL sl, ATerm t);
ATerm create_test_result_simple_0_0 (StrSL sl, ATerm t);
ATerm appl_term_eq_1_0 (StrSL sl, StrCL a_15, ATerm t);
ATerm fun_term_eq_1_0 (StrSL sl, StrCL t_14, ATerm t);
ATerm list_term_eq_1_0 (StrSL sl, StrCL n_14, ATerm t);
ATerm wildcardvar_eq_1_0 (StrSL sl, StrCL o_27, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm m_13 (StrSL sl, ATerm t);
ATerm aterm_eq_0_0 (StrSL sl, ATerm t);
ATerm get_relative_prefix_0_0 (StrSL sl, ATerm t);
ATerm abs_test_file_0_0 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
ATerm single_ast_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
ATerm single_asfix2_option_0_0 (StrSL sl, ATerm t);
ATerm is_single_test_output_asfix2_0_0 (StrSL sl, ATerm t);
ATerm get_single_test_output_0_0 (StrSL sl, ATerm t);
ATerm get_single_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
ATerm single_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
ATerm sglr_filter_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
ATerm sglr_parse_table_option_0_0 (StrSL sl, ATerm t);
ATerm unknown_testsuite_option_0_0 (StrSL sl, ATerm t);
ATerm process_testsuite_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
ATerm process_testsuite_options_0_0 (StrSL sl, ATerm t);
ATerm parse_unit_about_0_0 (StrSL sl, ATerm t);
ATerm parse_unit_usage_0_0 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
ATerm ensure_help_string_0_0 (StrSL sl, ATerm t);
ATerm package_bugreport_0_0 (StrSL sl, ATerm t);
ATerm package_version_0_0 (StrSL sl, ATerm t);
ATerm package_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
ATerm DesugarToolDoc_0_0 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
ATerm tool_doc_0_0 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
ATerm xtc_abox2text_1_0 (StrSL sl, StrCL i_7, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm hack_aterm_pattern_0_0 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
ATerm echo_expected_0_0 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
ATerm echo_parse_result_0_0 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
ATerm echo_report_0_0 (StrSL sl, ATerm t);
ATerm count_in_string_1_0 (StrSL sl, StrCL l_5, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
ATerm echo_results_0_0 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm echo_start_0_0 (StrSL sl, ATerm t);
ATerm wildcard_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "wildcard_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_wildcard_0)))
goto fail123 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail123 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_testsuite_3_0 (StrSL sl, StrCL k_27, StrCL l_27, StrCL m_27, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_testsuite_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_141 = NULL,h_141 = NULL,k_141 = NULL,l_141 = NULL,q_141 = NULL,r_141 = NULL,y_141 = NULL;
ATerm trm184;
trm184 = (ATerm) ATgetAnnotations(t);
if((trm184 == NULL))
trm184 = (ATerm) ATempty;
if(match_cons(t, sym_parse_testsuite_3))
{
h_141 = ATgetArgument(t, 0);
k_141 = ATgetArgument(t, 1);
l_141 = ATgetArgument(t, 2);
}
else
goto fail122 ;
m_141 = trm184;
t = h_141;
t = cl_fun(k_27)(cl_sl(k_27), t);
if((t == NULL))
goto fail122 ;
q_141 = t;
t = k_141;
t = cl_fun(l_27)(cl_sl(l_27), t);
if((t == NULL))
goto fail122 ;
r_141 = t;
t = l_141;
t = cl_fun(m_27)(cl_sl(m_27), t);
if((t == NULL))
goto fail122 ;
y_141 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_parse_testsuite_3, q_141, r_141, y_141), m_141);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail122 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_test_3_0 (StrSL sl, StrCL q_26, StrCL r_26, StrCL s_26, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_test_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_139 = NULL,a_139 = NULL,b_139 = NULL,c_139 = NULL,e_139 = NULL,f_139 = NULL,g_139 = NULL;
ATerm trm183;
trm183 = (ATerm) ATgetAnnotations(t);
if((trm183 == NULL))
trm183 = (ATerm) ATempty;
if(match_cons(t, sym_parse_test_3))
{
a_139 = ATgetArgument(t, 0);
b_139 = ATgetArgument(t, 1);
c_139 = ATgetArgument(t, 2);
}
else
goto fail121 ;
d_139 = trm183;
t = a_139;
t = cl_fun(q_26)(cl_sl(q_26), t);
if((t == NULL))
goto fail121 ;
e_139 = t;
t = b_139;
t = cl_fun(r_26)(cl_sl(r_26), t);
if((t == NULL))
goto fail121 ;
f_139 = t;
t = c_139;
t = cl_fun(s_26)(cl_sl(s_26), t);
if((t == NULL))
goto fail121 ;
g_139 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_parse_test_3, e_139, f_139, g_139), d_139);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail121 :
--__tracing_table_counter;
return(NULL);
}
ATerm HelpString_2_0 (StrSL sl, StrCL b_25, StrCL c_25, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "HelpString_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_133 = NULL,t_133 = NULL,u_133 = NULL,w_133 = NULL,x_133 = NULL;
ATerm trm182;
trm182 = (ATerm) ATgetAnnotations(t);
if((trm182 == NULL))
trm182 = (ATerm) ATempty;
if(match_cons(t, sym_HelpString_2))
{
t_133 = ATgetArgument(t, 0);
u_133 = ATgetArgument(t, 1);
}
else
goto fail120 ;
v_133 = trm182;
t = t_133;
t = cl_fun(b_25)(cl_sl(b_25), t);
if((t == NULL))
goto fail120 ;
w_133 = t;
t = u_133;
t = cl_fun(c_25)(cl_sl(c_25), t);
if((t == NULL))
goto fail120 ;
x_133 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_HelpString_2, w_133, x_133), v_133);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail120 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_parse_unit_0_0(sl, t);
if((t == NULL))
goto fail119 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail119 :
--__tracing_table_counter;
return(NULL);
}
ATerm try_open_parse_table_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "try_open_parse_table_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm p_22 = NULL;
sl_init_var(0, p_22);
{
ATerm trm175 = t;
ATerm e_23 = NULL,h_23 = NULL;
ATerm trm176 = t;
t = term165;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label111 ;
goto label110 ;
label111 :
t = trm176;
{
ATerm t_22 = NULL,w_22 = NULL,c_23 = NULL,d_23 = NULL;
c_23 = t;
t = term155;
t_22 = t;
t = c_23;
d_23 = t;
t = term225;
w_22 = t;
t = d_23;
t = log_0_2(sl, t_22, w_22, t);
if((t == NULL))
goto label109 ;
t = term159;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto label109 ;
else
goto label110 ;
}
label110 :
;
h_23 = t;
e_23 = t;
t = (ATerm) ATmakeAppl(sym__2, e_23, term227);
{
ATerm trm177 = t;
t = fopen_0_0(sl, t);
if((t == NULL))
goto label113 ;
goto label112 ;
label113 :
t = trm177;
{
ATerm b_143 = NULL,c_143 = NULL;
c_143 = t;
b_143 = t;
t = (ATerm) ATmakeAppl(sym__2, term229, b_143);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label109 ;
t = perror_0_0(sl, t);
if((t == NULL))
goto label109 ;
goto label109 ;
}
label112 :
;
if((p_22 == NULL))
{
p_22 = t;
}
else
if((p_22 != t))
goto label109 ;
{
struct str_closure x_147 = { &(read_from_stream_0_0) , sl };
StrCL lifted106_cl = &(x_147);
struct str_closure y_147 = { &(lifted107) , &(frame) };
StrCL lifted107_cl = &(y_147);
t = finally_2_0(sl, lifted106_cl, lifted107_cl, t);
if((t == NULL))
goto label109 ;
{
ATerm trm178 = t;
ATerm s_22 = NULL;
s_22 = t;
{
ATerm trm179 = t;
ATerm trm180,trm181;
trm180 = SSL_get_constructor(t);
trm181 = SSL_get_arguments(t);
if(!((ATgetSymbol(trm180) == ATmakeSymbol("parse-table", 0, ATtrue))))
goto label117 ;
goto label115 ;
label117 :
t = trm179;
goto label116 ;
label116 :
;
t = s_22;
}
{
ATerm i_23 = NULL,q_23 = NULL,t_23 = NULL,u_23 = NULL;
t_23 = t;
t = term155;
i_23 = t;
t = t_23;
u_23 = t;
t = term231;
q_23 = t;
t = u_23;
t = log_0_2(sl, i_23, q_23, t);
if((t == NULL))
goto label109 ;
t = term159;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto label109 ;
else
goto label114 ;
}
label115 :
t = trm178;
goto label114 ;
label114 :
;
t = open_parse_table_0_0(sl, t);
if((t == NULL))
goto label109 ;
}
}
}
goto label108 ;
label109 :
t = trm175;
{
ATerm v_23 = NULL,w_23 = NULL,z_23 = NULL,c_24 = NULL;
z_23 = t;
t = term155;
v_23 = t;
t = z_23;
c_24 = t;
t = term233;
w_23 = t;
t = c_24;
t = log_0_2(sl, v_23, w_23, t);
if((t == NULL))
goto fail117 ;
else
goto label108 ;
}
label108 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail117 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted107 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted107";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail118 ;
else
{
t = sl_readvar(0, sl);
}
t = fclose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail118 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail118 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_unit_implode_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_unit_implode_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_21 = NULL,t_21 = NULL,w_21 = NULL;
ATerm trm172 = t;
ATerm x_21 = NULL;
x_21 = t;
if(match_cons(t, sym_ParseResult_2))
{
t_21 = ATgetArgument(t, 0);
{
ATerm trm173 = ATgetArgument(t, 1);
if(match_cons(trm173, sym_Success_1))
{
w_21 = ATgetArgument(trm173, 0);
}
else
goto label106 ;
}
}
else
goto label106 ;
{
ATerm trm174 = t;
ATerm a_22 = NULL;
a_22 = t;
t = w_21;
t = implode_asfix_0_0(sl, t);
if((t == NULL))
goto label107 ;
k_21 = t;
t = a_22;
t = (ATerm) ATmakeAppl(sym_ParseResult_2, t_21, (ATerm) ATmakeAppl(sym_Success_1, k_21));
goto label105 ;
label107 :
t = trm174;
t = (ATerm) ATmakeAppl(sym_ParseResult_2, t_21, (ATerm) ATmakeAppl(sym_Failure_1, (ATerm) ATmakeAppl(sym_Implode_1, w_21)));
goto label105 ;
}
label106 :
t = trm172;
goto label105 ;
label105 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail116 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_unit_parse_0_2 (StrSL sl, ATerm q_27, ATerm r_27, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_unit_parse_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm169 = t;
ATerm y_20 = NULL,z_20 = NULL,d_21 = NULL;
y_20 = t;
if(match_cons(t, sym_file_1))
{
d_21 = ATgetArgument(t, 0);
}
else
goto label101 ;
{
ATerm trm170 = t;
ATerm e_21 = NULL;
e_21 = t;
t = d_21;
t = parse_file_pt_0_2(sl, q_27, r_27, t);
if((t == NULL))
goto label103 ;
z_20 = t;
t = e_21;
t = (ATerm) ATmakeAppl(sym_ParseResult_2, (ATerm)ATmakeAppl(sym_FILE_1, d_21), (ATerm) ATmakeAppl(sym_Success_1, z_20));
goto label102 ;
label103 :
t = trm170;
{
ATerm i_21 = NULL,j_21 = NULL;
j_21 = t;
t = get_parse_error_0_0(sl, t);
if((t == NULL))
goto label101 ;
i_21 = t;
t = j_21;
t = (ATerm) ATmakeAppl(sym_ParseResult_2, (ATerm)ATmakeAppl(sym_FILE_1, d_21), (ATerm) ATmakeAppl(sym_Failure_1, (ATerm) ATmakeAppl(sym_Parse_1, i_21)));
goto label102 ;
}
label102 :
;
}
goto label100 ;
label101 :
t = trm169;
{
ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
b_20 = t;
if(match_cons(t, sym_string_1))
{
d_20 = ATgetArgument(t, 0);
}
else
goto fail115 ;
{
ATerm trm171 = t;
ATerm e_20 = NULL;
e_20 = t;
t = d_20;
t = parse_string_pt_0_2(sl, q_27, r_27, t);
if((t == NULL))
goto label104 ;
c_20 = t;
t = e_20;
t = (ATerm) ATmakeAppl(sym_ParseResult_2, d_20, (ATerm) ATmakeAppl(sym_Success_1, c_20));
goto label100 ;
label104 :
t = trm171;
{
ATerm i_20 = NULL,j_20 = NULL;
j_20 = t;
t = get_parse_error_0_0(sl, t);
if((t == NULL))
goto fail115 ;
i_20 = t;
t = j_20;
t = (ATerm) ATmakeAppl(sym_ParseResult_2, d_20, (ATerm) ATmakeAppl(sym_Failure_1, (ATerm) ATmakeAppl(sym_Parse_1, i_20)));
goto label100 ;
}
}
}
label100 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail115 :
--__tracing_table_counter;
return(NULL);
}
ATerm execute_test_0_2 (StrSL sl, ATerm j_18, ATerm k_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "execute_test_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_18 = NULL,p_18 = NULL,q_18 = NULL,d_19 = NULL,e_19 = NULL,g_19 = NULL,k_19 = NULL,f_19 = NULL,l_19 = NULL,p_19 = NULL;
if(match_cons(t, sym__2))
{
q_18 = ATgetArgument(t, 0);
g_19 = ATgetArgument(t, 1);
}
else
goto fail114 ;
t = g_19;
d_19 = t;
if(match_cons(t, sym_parse_test_3))
{
ATerm trm166 = ATgetArgument(t, 0);
if(match_cons(trm166, sym_description_1))
{
l_18 = ATgetArgument(trm166, 0);
}
else
goto fail114 ;
k_19 = ATgetArgument(t, 1);
p_18 = ATgetArgument(t, 2);
}
else
goto fail114 ;
t = k_19;
t = parse_unit_parse_0_2(sl, k_18, j_18, t);
if((t == NULL))
goto fail114 ;
t = parse_unit_implode_0_0(sl, t);
if((t == NULL))
goto fail114 ;
e_19 = t;
t = (ATerm) ATmakeAppl(sym__2, e_19, p_18);
{
ATerm trm167 = t;
t = create_test_result_simple_0_0(sl, t);
if((t == NULL))
goto label98 ;
goto label97 ;
label98 :
t = trm167;
{
ATerm trm168 = t;
t = create_test_compare_0_0(sl, t);
if((t == NULL))
goto label99 ;
goto label97 ;
label99 :
t = trm168;
t = term197;
goto label97 ;
}
label97 :
;
f_19 = t;
p_19 = t;
l_19 = t;
t = (ATerm) ATmakeAppl(sym__4, q_18, d_19, e_19, l_19);
t = echo_report_0_0(sl, t);
if((t == NULL))
goto fail114 ;
t = f_19;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail114 :
--__tracing_table_counter;
return(NULL);
}
ATerm do_single_test_0_3 (StrSL sl, ATerm m_17, ATerm p_17, ATerm q_17, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "do_single_test_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,x_17 = NULL,v_17 = NULL,i_18 = NULL;
if(match_cons(t, sym_parse_testsuite_3))
{
ATerm trm158 = ATgetArgument(t, 0);
if(match_cons(trm158, sym_name_1))
{
r_17 = ATgetArgument(trm158, 0);
}
else
goto fail111 ;
{
ATerm trm159 = ATgetArgument(t, 1);
}
x_17 = ATgetArgument(t, 2);
}
else
goto fail111 ;
t = x_17;
{
ATerm trm160 = t;
ATerm y_17 = NULL,z_17 = NULL;
z_17 = t;
y_17 = t;
t = (ATerm) ATmakeAppl(sym__2, q_17, y_17);
t = index_0_0(sl, t);
if((t == NULL))
goto label92 ;
if(match_cons(t, sym_parse_test_3))
{
ATerm trm161 = ATgetArgument(t, 0);
if(match_cons(trm161, sym_description_1))
{
t_17 = ATgetArgument(trm161, 0);
}
else
goto label92 ;
u_17 = ATgetArgument(t, 1);
s_17 = ATgetArgument(t, 2);
}
else
goto label92 ;
goto label91 ;
label92 :
t = trm160;
{
struct str_closure v_147 = { &(lifted104) , &(frame) };
StrCL lifted104_cl = &(v_147);
t = say_1_0(sl, lifted104_cl, t);
if((t == NULL))
goto fail111 ;
goto fail111 ;
}
label91 :
;
v_17 = t;
if((t_17 == NULL))
goto fail111 ;
else
{
t = t_17;
}
{
struct str_closure w_147 = { &(lifted105) , &(frame) };
StrCL lifted105_cl = &(w_147);
t = debug_1_0(sl, lifted105_cl, t);
if((t == NULL))
goto fail111 ;
t = v_17;
if((u_17 == NULL))
goto fail111 ;
else
{
t = u_17;
}
t = parse_unit_parse_0_2(sl, m_17, p_17, t);
if((t == NULL))
goto fail111 ;
if(match_cons(t, sym_ParseResult_2))
{
ATerm trm162 = ATgetArgument(t, 0);
ATerm trm163 = ATgetArgument(t, 1);
if(match_cons(trm163, sym_Success_1))
{
i_18 = ATgetArgument(trm163, 0);
}
else
goto fail111 ;
}
else
goto fail111 ;
t = i_18;
{
ATerm trm164 = t;
ATerm w_17 = NULL;
w_17 = t;
{
ATerm trm165 = t;
t = is_single_test_output_asfix2_0_0(sl, t);
if((t == NULL))
goto label96 ;
goto label94 ;
label96 :
t = trm165;
goto label95 ;
label95 :
;
t = w_17;
}
t = implode_asfix_0_0(sl, t);
if((t == NULL))
goto fail111 ;
else
goto label93 ;
label94 :
t = trm164;
goto label93 ;
label93 :
;
}
}
}
}
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
t = term223;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail113 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted104 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted104";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term221;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail112 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_unit_exit_on_failure_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_unit_exit_on_failure_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm157 = t;
ATerm l_17 = NULL;
struct str_closure t_147 = { &(lifted103) , &(frame) };
StrCL lifted103_cl = &(t_147);
if(match_cons(t, sym_TestResults_1))
{
l_17 = ATgetArgument(t, 0);
}
else
goto label90 ;
t = l_17;
t = map_1_0(sl, lifted103_cl, t);
if((t == NULL))
goto label90 ;
goto label89 ;
label90 :
t = trm157;
t = term159;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto fail109 ;
else
goto label89 ;
label89 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail109 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted103 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted103";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_Success_0)))
goto fail110 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail110 :
--__tracing_table_counter;
return(NULL);
}
ATerm do_full_testsuite_0_2 (StrSL sl, ATerm y_16, ATerm a_17, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "do_full_testsuite_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, y_16);
sl_init_var(1, a_17);
{
ATerm b_17 = NULL,d_17 = NULL,f_17 = NULL,g_17 = NULL,c_17 = NULL,h_17 = NULL,k_17 = NULL;
t = echo_start_0_0(sl, t);
if((t == NULL))
goto fail107 ;
if(match_cons(t, sym_parse_testsuite_3))
{
ATerm trm155 = ATgetArgument(t, 0);
if(match_cons(trm155, sym_name_1))
{
b_17 = ATgetArgument(trm155, 0);
}
else
goto fail107 ;
{
ATerm trm156 = ATgetArgument(t, 1);
}
d_17 = ATgetArgument(t, 2);
}
else
goto fail107 ;
t = d_17;
{
struct str_closure s_147 = { &(lifted102) , &(frame) };
StrCL lifted102_cl = &(s_147);
t = map_with_index_1_0(sl, lifted102_cl, t);
if((t == NULL))
goto fail107 ;
g_17 = t;
f_17 = t;
t = (ATerm) ATmakeAppl(sym_TestResults_1, f_17);
c_17 = t;
k_17 = t;
h_17 = t;
t = (ATerm) ATmakeAppl(sym__2, b_17, h_17);
t = echo_results_0_0(sl, t);
if((t == NULL))
goto fail107 ;
t = c_17;
t = parse_unit_exit_on_failure_0_0(sl, t);
if((t == NULL))
goto fail107 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail107 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted102 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted102";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(1, sl) == NULL) || (sl_readvar(0, sl) == NULL)))
goto fail108 ;
else
{
t = execute_test_0_2(sl_up(sl), sl_readvar(1, sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail108 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail108 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_unit_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_unit_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_16 = NULL,p_16 = NULL;
ATerm trm153 = t;
ATerm q_16 = NULL,t_16 = NULL,v_16 = NULL;
t = read_parse_testsuite_0_0(sl, t);
if((t == NULL))
goto label86 ;
t = process_testsuite_options_0_0(sl, t);
if((t == NULL))
goto label86 ;
q_16 = t;
v_16 = t;
t = try_open_parse_table_0_0(sl, t);
if((t == NULL))
goto label86 ;
t_16 = t;
t = v_16;
t = t_16;
n_16 = t;
t = term153;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label86 ;
p_16 = t;
t = q_16;
{
ATerm trm154 = t;
ATerm r_16 = NULL;
r_16 = t;
t = get_single_test_0_0(sl, t);
if((t == NULL))
goto label88 ;
t = r_16;
{
ATerm s_16 = NULL,w_16 = NULL,x_16 = NULL;
s_16 = t;
{
struct str_closure r_147 = { &(false_0_0) , sl };
StrCL lifted101_cl = &(r_147);
t = set_ambiguity_is_error_1_0(sl, lifted101_cl, t);
if((t == NULL))
goto label86 ;
t = s_16;
x_16 = t;
t = term23;
t = get_single_test_0_0(sl, t);
if((t == NULL))
goto label86 ;
w_16 = t;
t = x_16;
t = do_single_test_0_3(sl, n_16, p_16, w_16, t);
if((t == NULL))
goto label86 ;
t = write_to_text_0_0(sl, t);
if((t == NULL))
goto label86 ;
else
goto label87 ;
}
}
label88 :
t = trm154;
t = do_full_testsuite_0_2(sl, n_16, p_16, t);
if((t == NULL))
goto label86 ;
t = term219;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto label86 ;
else
goto label87 ;
label87 :
;
}
goto label85 ;
label86 :
t = trm153;
t = term159;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto fail106 ;
else
goto label85 ;
label85 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail106 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_parse_unit_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_parse_unit_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_143 = NULL;
struct str_closure i_147 = { &(lifted96) , &(frame) };
StrCL lifted96_cl = &(i_147);
struct str_closure j_147 = { &(parse_unit_usage_0_0) , sl };
StrCL lifted97_cl = &(j_147);
struct str_closure k_147 = { &(parse_unit_about_0_0) , sl };
StrCL lifted98_cl = &(k_147);
struct str_closure l_147 = { &(lifted99) , &(frame) };
StrCL lifted99_cl = &(l_147);
struct str_closure o_147 = { &(parse_unit_0_0) , sl };
StrCL lifted100_cl = &(o_147);
a_143 = t;
t = term159;
t = set_verbosity_0_0(sl, t);
if((t == NULL))
goto fail103 ;
{
struct str_closure p_147 = { &(false_0_0) , sl };
StrCL lifted94_cl = &(p_147);
t = set_heuristic_filters_1_0(sl, lifted94_cl, t);
if((t == NULL))
goto fail103 ;
{
struct str_closure q_147 = { &(true_0_0) , sl };
StrCL lifted95_cl = &(q_147);
t = set_ambiguity_is_error_1_0(sl, lifted95_cl, t);
if((t == NULL))
goto fail103 ;
t = a_143;
t = xtc_io_wrap_5_0(sl, lifted96_cl, lifted97_cl, lifted98_cl, lifted99_cl, lifted100_cl, t);
if((t == NULL))
goto fail103 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted99 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted99";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail105 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted96 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted96";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm149 = t;
t = sglr_parse_table_option_0_0(sl_up(sl), t);
if((t == NULL))
goto label81 ;
goto label80 ;
label81 :
t = trm149;
{
ATerm trm150 = t;
t = sglr_filter_option_0_0(sl_up(sl), t);
if((t == NULL))
goto label82 ;
goto label80 ;
label82 :
t = trm150;
{
ATerm trm151 = t;
t = single_option_0_0(sl_up(sl), t);
if((t == NULL))
goto label83 ;
goto label80 ;
label83 :
t = trm151;
{
ATerm trm152 = t;
t = single_asfix2_option_0_0(sl_up(sl), t);
if((t == NULL))
goto label84 ;
goto label80 ;
label84 :
t = trm152;
t = single_ast_option_0_0(sl_up(sl), t);
if((t == NULL))
goto fail104 ;
else
goto label80 ;
}
}
}
label80 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail104 :
--__tracing_table_counter;
return(NULL);
}
ATerm read_test_output_to_pattern_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "read_test_output_to_pattern_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm g_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
sl_init_var(0, k_16);
if(match_cons(t, sym_parse_test_3))
{
g_16 = ATgetArgument(t, 0);
i_16 = ATgetArgument(t, 1);
{
ATerm trm147 = ATgetArgument(t, 2);
if(match_cons(trm147, sym_file_1))
{
if((k_16 == NULL))
{
k_16 = ATgetArgument(trm147, 0);
}
else
if((k_16 != ATgetArgument(trm147, 0)))
goto fail100 ;
}
else
goto fail100 ;
}
}
else
goto fail100 ;
l_16 = t;
{
ATerm trm148 = t;
if((k_16 == NULL))
goto label79 ;
else
{
t = (ATerm) ATmakeAppl(sym_FILE_1, k_16);
}
t = read_from_0_0(sl, t);
if((t == NULL))
goto label79 ;
t = explode_aterm_0_0(sl, t);
if((t == NULL))
goto label79 ;
j_16 = t;
goto label78 ;
label79 :
t = trm148;
{
struct str_closure h_147 = { &(lifted92) , &(frame) };
StrCL lifted92_cl = &(h_147);
t = if_verbose7_1_0(sl, lifted92_cl, t);
if((t == NULL))
goto fail100 ;
else
goto label78 ;
}
label78 :
;
t = l_16;
if((j_16 == NULL))
goto fail100 ;
else
{
t = (ATerm) ATmakeAppl(sym_parse_test_3, g_16, i_16, (ATerm) ATmakeAppl(sym_pattern_1, j_16));
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted92 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted92";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_147 = { &(lifted93) , &(frame) };
StrCL lifted93_cl = &(g_147);
if((sl_readvar(0, sl) == NULL))
goto fail101 ;
else
{
t = sl_readvar(0, sl);
}
t = debug_1_0(sl_up(sl), lifted93_cl, t);
if((t == NULL))
goto fail101 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted93 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted93";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term217;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
ATerm add_description_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "add_description_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm144 = t;
ATerm z_15 = NULL,a_16 = NULL;
if(match_cons(t, sym_parse_test_2))
{
ATerm trm145 = ATgetArgument(t, 0);
if(match_cons(trm145, sym_string_1))
{
z_15 = ATgetArgument(trm145, 0);
}
else
goto label77 ;
a_16 = ATgetArgument(t, 1);
}
else
goto label77 ;
t = (ATerm) ATmakeAppl(sym_parse_test_3, (ATerm)ATmakeAppl(sym_description_1, z_15), (ATerm)ATmakeAppl(sym_string_1, z_15), a_16);
goto label76 ;
label77 :
t = trm144;
{
ATerm w_15 = NULL,y_15 = NULL;
if(match_cons(t, sym_parse_test_2))
{
ATerm trm146 = ATgetArgument(t, 0);
if(match_cons(trm146, sym_file_1))
{
w_15 = ATgetArgument(trm146, 0);
}
else
goto fail99 ;
y_15 = ATgetArgument(t, 1);
}
else
goto fail99 ;
t = (ATerm) ATmakeAppl(sym_parse_test_3, (ATerm)ATmakeAppl(sym_description_1, w_15), (ATerm)ATmakeAppl(sym_file_1, w_15), y_15);
goto label76 ;
}
label76 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
ATerm drop_whitespace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "drop_whitespace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm141 = t;
ATerm r_15 = NULL,t_15 = NULL,u_15 = NULL;
if(match_cons(t, sym_parse_test_4))
{
ATerm trm142 = ATgetArgument(t, 0);
r_15 = ATgetArgument(t, 1);
t_15 = ATgetArgument(t, 2);
u_15 = ATgetArgument(t, 3);
}
else
goto label75 ;
t = (ATerm) ATmakeAppl(sym_parse_test_3, r_15, t_15, u_15);
goto label74 ;
label75 :
t = trm141;
{
ATerm p_15 = NULL,q_15 = NULL;
if(match_cons(t, sym_parse_test_3))
{
ATerm trm143 = ATgetArgument(t, 0);
p_15 = ATgetArgument(t, 1);
q_15 = ATgetArgument(t, 2);
}
else
goto fail98 ;
t = (ATerm) ATmakeAppl(sym_parse_test_2, p_15, q_15);
goto label74 ;
}
label74 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
ATerm read_parse_testsuite_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "read_parse_testsuite_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_146 = { &(_Id) , sl };
StrCL lifted88_cl = &(e_146);
struct str_closure f_146 = { &(_Id) , sl };
StrCL lifted89_cl = &(f_146);
struct str_closure g_146 = { &(lifted90) , &(frame) };
StrCL lifted90_cl = &(g_146);
struct str_closure h_146 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(h_146);
struct str_closure i_146 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(i_146);
t = xtc_transform_2_0(sl, lifted63_cl, lifted64_cl, t);
if((t == NULL))
goto fail83 ;
t = read_from_0_0(sl, t);
if((t == NULL))
goto fail83 ;
{
struct str_closure k_146 = { &(_Id) , sl };
StrCL lifted65_cl = &(k_146);
struct str_closure l_146 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(l_146);
struct str_closure m_146 = { &(_Id) , sl };
StrCL lifted68_cl = &(m_146);
t = parse_testsuite_3_0(sl, lifted65_cl, lifted66_cl, lifted68_cl, t);
if((t == NULL))
goto fail83 ;
{
struct str_closure o_146 = { &(_Id) , sl };
StrCL lifted69_cl = &(o_146);
struct str_closure p_146 = { &(_Id) , sl };
StrCL lifted70_cl = &(p_146);
struct str_closure q_146 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(q_146);
t = parse_testsuite_3_0(sl, lifted69_cl, lifted70_cl, lifted71_cl, t);
if((t == NULL))
goto fail83 ;
{
struct str_closure s_146 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(s_146);
t = topdown_1_0(sl, lifted73_cl, t);
if((t == NULL))
goto fail83 ;
{
struct str_closure v_146 = { &(_Id) , sl };
StrCL lifted75_cl = &(v_146);
struct str_closure w_146 = { &(_Id) , sl };
StrCL lifted76_cl = &(w_146);
struct str_closure x_146 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(x_146);
t = parse_testsuite_3_0(sl, lifted75_cl, lifted76_cl, lifted77_cl, t);
if((t == NULL))
goto fail83 ;
{
struct str_closure d_147 = { &(_Id) , sl };
StrCL lifted80_cl = &(d_147);
struct str_closure e_147 = { &(_Id) , sl };
StrCL lifted81_cl = &(e_147);
struct str_closure f_147 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(f_147);
t = parse_testsuite_3_0(sl, lifted80_cl, lifted81_cl, lifted82_cl, t);
if((t == NULL))
goto fail83 ;
t = parse_testsuite_3_0(sl, lifted88_cl, lifted89_cl, lifted90_cl, t);
if((t == NULL))
goto fail83 ;
}
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted82 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted82";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_147 = { &(lifted83) , &(frame) };
StrCL lifted83_cl = &(c_147);
t = map_1_0(sl_up(sl), lifted83_cl, t);
if((t == NULL))
goto fail95 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted83 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted83";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm139 = t;
ATerm t_142 = NULL,v_142 = NULL,y_142 = NULL;
if(match_cons(t, sym_parse_test_3))
{
t_142 = ATgetArgument(t, 0);
{
ATerm trm140 = ATgetArgument(t, 1);
if(match_cons(trm140, sym_string_1))
{
v_142 = ATgetArgument(trm140, 0);
}
else
goto label73 ;
}
y_142 = ATgetArgument(t, 2);
}
else
goto label73 ;
goto label72 ;
label73 :
t = trm139;
{
struct str_closure z_146 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted84_cl = &(z_146);
struct str_closure a_147 = { &(lifted85) , &(frame) };
StrCL lifted85_cl = &(a_147);
struct str_closure b_147 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted87_cl = &(b_147);
t = parse_test_3_0(sl_up(sl_up(sl)), lifted84_cl, lifted85_cl, lifted87_cl, t);
if((t == NULL))
goto fail96 ;
else
goto label72 ;
}
label72 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted85 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted85";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_146 = { &(abs_test_file_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted86_cl = &(y_146);
t = file_1_0(sl_up(sl_up(sl_up(sl))), lifted86_cl, t);
if((t == NULL))
goto fail97 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_146 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(u_146);
t = map_1_0(sl_up(sl), lifted78_cl, t);
if((t == NULL))
goto fail93 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_146 = { &(add_description_0_0) , sl_up(sl_up(sl)) };
StrCL lifted79_cl = &(t_146);
t = try_1_0(sl_up(sl_up(sl)), lifted79_cl, t);
if((t == NULL))
goto fail94 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted73 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted73";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_146 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(r_146);
t = try_1_0(sl_up(sl), lifted74_cl, t);
if((t == NULL))
goto fail91 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_142 = NULL;
if(match_cons(t, sym_string_3))
{
ATerm trm137 = ATgetArgument(t, 0);
s_142 = ATgetArgument(t, 1);
{
ATerm trm138 = ATgetArgument(t, 2);
}
}
else
goto fail92 ;
t = (ATerm) ATmakeAppl(sym_string_1, s_142);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_146 = { &(drop_whitespace_0_0) , sl_up(sl) };
StrCL lifted72_cl = &(n_146);
t = map_1_0(sl_up(sl), lifted72_cl, t);
if((t == NULL))
goto fail90 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_146 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(j_146);
t = try_1_0(sl_up(sl), lifted67_cl, t);
if((t == NULL))
goto fail88 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted67 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted67";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_142 = NULL;
if(match_cons(t, sym_topsort_1))
{
r_142 = ATgetArgument(t, 0);
}
else
goto fail89 ;
t = (ATerm) ATmakeAppl(sym_options_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_option_2, term215, r_142)));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_15 = NULL,m_15 = NULL,l_15 = NULL,n_15 = NULL;
m_15 = t;
t = term203;
t = xtc_find_0_0(sl_up(sl), t);
if((t == NULL))
goto fail87 ;
k_15 = t;
t = m_15;
n_15 = t;
t = term23;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail87 ;
l_15 = t;
t = n_15;
{
ATerm trm136;
trm136 = CheckATermList(l_15);
if((trm136 == NULL))
goto fail87 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm136, term205), term207), term209), term211), k_15), term213);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term201;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted90 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted90";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_146 = { &(lifted91) , &(frame) };
StrCL lifted91_cl = &(d_146);
t = map_1_0(sl_up(sl), lifted91_cl, t);
if((t == NULL))
goto fail84 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted91 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted91";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm131 = t;
ATerm z_142 = NULL;
z_142 = t;
if(match_cons(t, sym_parse_test_3))
{
ATerm trm132 = ATgetArgument(t, 0);
ATerm trm133 = ATgetArgument(t, 1);
ATerm trm134 = ATgetArgument(t, 2);
if(match_cons(trm134, sym_file_1))
{
ATerm trm135 = ATgetArgument(trm134, 0);
}
else
goto label71 ;
}
else
goto label71 ;
t = read_test_output_to_pattern_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail85 ;
else
goto label70 ;
label71 :
t = trm131;
goto label70 ;
label70 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
ATerm create_test_compare_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "create_test_compare_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm127 = ATgetArgument(t, 0);
if(match_cons(trm127, sym_ParseResult_2))
{
ATerm trm128 = ATgetArgument(trm127, 0);
ATerm trm129 = ATgetArgument(trm127, 1);
if(match_cons(trm129, sym_Success_1))
{
f_15 = ATgetArgument(trm129, 0);
}
else
goto fail82 ;
}
else
goto fail82 ;
{
ATerm trm130 = ATgetArgument(t, 1);
if(match_cons(trm130, sym_pattern_1))
{
g_15 = ATgetArgument(trm130, 0);
}
else
goto fail82 ;
}
}
else
goto fail82 ;
h_15 = t;
j_15 = t;
t = f_15;
t = explode_aterm_0_0(sl, t);
if((t == NULL))
goto fail82 ;
i_15 = t;
t = j_15;
t = (ATerm) ATmakeAppl(sym__2, i_15, g_15);
t = aterm_eq_0_0(sl, t);
if((t == NULL))
goto fail82 ;
t = h_15;
t = term199;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
ATerm create_test_result_simple_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "create_test_result_simple_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm103 = t;
if(match_cons(t, sym__2))
{
ATerm trm104 = ATgetArgument(t, 0);
if(match_cons(trm104, sym_ParseResult_2))
{
ATerm trm105 = ATgetArgument(trm104, 0);
ATerm trm106 = ATgetArgument(trm104, 1);
if(match_cons(trm106, sym_Failure_1))
{
ATerm trm107 = ATgetArgument(trm106, 0);
}
else
goto label67 ;
}
else
goto label67 ;
{
ATerm trm108 = ATgetArgument(t, 1);
if(!(match_cons(trm108, sym_success_0)))
goto label67 ;
}
}
else
goto label67 ;
t = term197;
goto label66 ;
label67 :
t = trm103;
{
ATerm trm109 = t;
if(match_cons(t, sym__2))
{
ATerm trm110 = ATgetArgument(t, 0);
if(match_cons(trm110, sym_ParseResult_2))
{
ATerm trm111 = ATgetArgument(trm110, 0);
ATerm trm112 = ATgetArgument(trm110, 1);
if(match_cons(trm112, sym_Failure_1))
{
ATerm trm113 = ATgetArgument(trm112, 0);
}
else
goto label68 ;
}
else
goto label68 ;
{
ATerm trm114 = ATgetArgument(t, 1);
if(match_cons(trm114, sym_pattern_1))
{
ATerm trm115 = ATgetArgument(trm114, 0);
}
else
goto label68 ;
}
}
else
goto label68 ;
t = term197;
goto label66 ;
label68 :
t = trm109;
{
ATerm trm116 = t;
if(match_cons(t, sym__2))
{
ATerm trm117 = ATgetArgument(t, 0);
if(match_cons(trm117, sym_ParseResult_2))
{
ATerm trm118 = ATgetArgument(trm117, 0);
ATerm trm119 = ATgetArgument(trm117, 1);
if(match_cons(trm119, sym_Success_1))
{
ATerm trm120 = ATgetArgument(trm119, 0);
}
else
goto label69 ;
}
else
goto label69 ;
{
ATerm trm121 = ATgetArgument(t, 1);
if(!(match_cons(trm121, sym_success_0)))
goto label69 ;
}
}
else
goto label69 ;
t = term199;
goto label66 ;
label69 :
t = trm116;
if(match_cons(t, sym__2))
{
ATerm trm122 = ATgetArgument(t, 0);
if(match_cons(trm122, sym_ParseResult_2))
{
ATerm trm123 = ATgetArgument(trm122, 0);
ATerm trm124 = ATgetArgument(trm122, 1);
if(match_cons(trm124, sym_Failure_1))
{
ATerm trm125 = ATgetArgument(trm124, 0);
}
else
goto fail81 ;
}
else
goto fail81 ;
{
ATerm trm126 = ATgetArgument(t, 1);
if(!(match_cons(trm126, sym_failure_0)))
goto fail81 ;
}
}
else
goto fail81 ;
t = term199;
goto label66 ;
}
}
label66 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
ATerm appl_term_eq_1_0 (StrSL sl, StrCL a_15, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "appl_term_eq_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm101 = ATgetArgument(t, 0);
if(match_cons(trm101, sym_appl_2))
{
u_14 = ATgetArgument(trm101, 0);
w_14 = ATgetArgument(trm101, 1);
}
else
goto fail80 ;
{
ATerm trm102 = ATgetArgument(t, 1);
if(match_cons(trm102, sym_appl_2))
{
v_14 = ATgetArgument(trm102, 0);
x_14 = ATgetArgument(trm102, 1);
}
else
goto fail80 ;
}
}
else
goto fail80 ;
y_14 = t;
t = (ATerm) ATmakeAppl(sym__2, u_14, v_14);
t = cl_fun(a_15)(cl_sl(a_15), t);
if((t == NULL))
goto fail80 ;
t = y_14;
z_14 = t;
t = (ATerm) ATmakeAppl(sym__2, w_14, x_14);
t = zip_1_0(sl, a_15, t);
if((t == NULL))
goto fail80 ;
t = z_14;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
ATerm fun_term_eq_1_0 (StrSL sl, StrCL t_14, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fun_term_eq_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm99 = ATgetArgument(t, 0);
if(match_cons(trm99, sym_fun_1))
{
q_14 = ATgetArgument(trm99, 0);
}
else
goto fail79 ;
{
ATerm trm100 = ATgetArgument(t, 1);
if(match_cons(trm100, sym_fun_1))
{
r_14 = ATgetArgument(trm100, 0);
}
else
goto fail79 ;
}
}
else
goto fail79 ;
s_14 = t;
t = (ATerm) ATmakeAppl(sym__2, q_14, r_14);
t = cl_fun(t_14)(cl_sl(t_14), t);
if((t == NULL))
goto fail79 ;
t = s_14;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
ATerm list_term_eq_1_0 (StrSL sl, StrCL n_14, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "list_term_eq_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm97 = ATgetArgument(t, 0);
if(match_cons(trm97, sym_list_1))
{
k_14 = ATgetArgument(trm97, 0);
}
else
goto fail78 ;
{
ATerm trm98 = ATgetArgument(t, 1);
if(match_cons(trm98, sym_list_1))
{
l_14 = ATgetArgument(trm98, 0);
}
else
goto fail78 ;
}
}
else
goto fail78 ;
m_14 = t;
t = k_14;
t = is_list_0_0(sl, t);
if((t == NULL))
goto fail78 ;
t = l_14;
t = is_list_0_0(sl, t);
if((t == NULL))
goto fail78 ;
t = (ATerm) ATmakeAppl(sym__2, k_14, l_14);
t = zip_1_0(sl, n_14, t);
if((t == NULL))
goto fail78 ;
t = m_14;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
ATerm wildcardvar_eq_1_0 (StrSL sl, StrCL o_27, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "wildcardvar_eq_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm78 = t;
if(match_cons(t, sym__2))
{
ATerm trm79 = ATgetArgument(t, 0);
if(match_cons(trm79, sym_list_1))
{
ATerm trm80 = ATgetArgument(trm79, 0);
if(!(match_cons(trm80, sym_wildcardvar_0)))
goto label63 ;
}
else
goto label63 ;
{
ATerm trm81 = ATgetArgument(t, 1);
if(match_cons(trm81, sym_list_1))
{
ATerm trm82 = ATgetArgument(trm81, 0);
}
else
goto label63 ;
}
}
else
goto label63 ;
goto label62 ;
label63 :
t = trm78;
{
ATerm trm83 = t;
if(match_cons(t, sym__2))
{
ATerm trm84 = ATgetArgument(t, 0);
if(match_cons(trm84, sym_list_1))
{
ATerm trm85 = ATgetArgument(trm84, 0);
}
else
goto label64 ;
{
ATerm trm86 = ATgetArgument(t, 1);
if(match_cons(trm86, sym_list_1))
{
ATerm trm87 = ATgetArgument(trm86, 0);
if(!(match_cons(trm87, sym_wildcardvar_0)))
goto label64 ;
}
else
goto label64 ;
}
}
else
goto label64 ;
goto label62 ;
label64 :
t = trm83;
{
ATerm trm88 = t;
ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm89 = ATgetArgument(t, 0);
if(match_cons(trm89, sym_appl_2))
{
t_13 = ATgetArgument(trm89, 0);
{
ATerm trm90 = ATgetArgument(trm89, 1);
if(!(match_cons(trm90, sym_wildcardvar_0)))
goto label65 ;
}
}
else
goto label65 ;
{
ATerm trm91 = ATgetArgument(t, 1);
if(match_cons(trm91, sym_appl_2))
{
u_13 = ATgetArgument(trm91, 0);
{
ATerm trm92 = ATgetArgument(trm91, 1);
}
}
else
goto label65 ;
}
}
else
goto label65 ;
v_13 = t;
t = (ATerm) ATmakeAppl(sym__2, t_13, u_13);
t = cl_fun(o_27)(cl_sl(o_27), t);
if((t == NULL))
goto label65 ;
t = v_13;
goto label62 ;
label65 :
t = trm88;
{
ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm93 = ATgetArgument(t, 0);
if(match_cons(trm93, sym_appl_2))
{
p_13 = ATgetArgument(trm93, 0);
{
ATerm trm94 = ATgetArgument(trm93, 1);
}
}
else
goto fail77 ;
{
ATerm trm95 = ATgetArgument(t, 1);
if(match_cons(trm95, sym_appl_2))
{
q_13 = ATgetArgument(trm95, 0);
{
ATerm trm96 = ATgetArgument(trm95, 1);
if(!(match_cons(trm96, sym_wildcardvar_0)))
goto fail77 ;
}
}
else
goto fail77 ;
}
}
else
goto fail77 ;
r_13 = t;
t = (ATerm) ATmakeAppl(sym__2, p_13, q_13);
t = cl_fun(o_27)(cl_sl(o_27), t);
if((t == NULL))
goto fail77 ;
t = r_13;
goto label62 ;
}
}
}
label62 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_eq_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_eq_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure c_146 = { &(m_13) , &(frame) };
StrCL m_13_cl = &(c_146);
sl_init_fun(0, m_13_cl);
t = m_13(&(frame), t);
if((t == NULL))
goto fail74 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm m_13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "m_13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm62 = t;
t = list_term_eq_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label52 ;
goto label51 ;
label52 :
t = trm62;
{
ATerm trm63 = t;
ATerm k_142 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm64 = ATgetArgument(t, 0);
if(match_cons(trm64, sym_int_1))
{
ATerm trm65 = ATgetArgument(trm64, 0);
if(match_cons(trm65, sym_natural_1))
{
k_142 = ATgetArgument(trm65, 0);
}
else
goto label53 ;
}
else
goto label53 ;
{
ATerm trm66 = ATgetArgument(t, 1);
if(match_cons(trm66, sym_int_1))
{
ATerm trm67 = ATgetArgument(trm66, 0);
if(match_cons(trm67, sym_natural_1))
{
if(!((k_142 == ATgetArgument(trm67, 0))))
goto label53 ;
}
else
goto label53 ;
}
else
goto label53 ;
}
}
else
goto label53 ;
goto label51 ;
label53 :
t = trm63;
{
ATerm trm68 = t;
t = fun_term_eq_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label54 ;
goto label51 ;
label54 :
t = trm68;
{
ATerm trm69 = t;
t = appl_term_eq_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label55 ;
goto label51 ;
label55 :
t = trm69;
{
ATerm trm70 = t;
ATerm trm71 = t;
ATerm n_142 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm72 = ATgetArgument(t, 0);
if(match_cons(trm72, sym_unquoted_1))
{
n_142 = ATgetArgument(trm72, 0);
}
else
goto label58 ;
{
ATerm trm73 = ATgetArgument(t, 1);
if(match_cons(trm73, sym_unquoted_1))
{
if(!((n_142 == ATgetArgument(trm73, 0))))
goto label58 ;
}
else
goto label58 ;
}
}
else
goto label58 ;
goto label57 ;
label58 :
t = trm71;
{
ATerm o_142 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm74 = ATgetArgument(t, 0);
if(match_cons(trm74, sym_quoted_1))
{
o_142 = ATgetArgument(trm74, 0);
}
else
goto label56 ;
{
ATerm trm75 = ATgetArgument(t, 1);
if(match_cons(trm75, sym_quoted_1))
{
if(!((o_142 == ATgetArgument(trm75, 0))))
goto label56 ;
}
else
goto label56 ;
}
goto label57 ;
}
else
goto label56 ;
}
label57 :
;
goto label51 ;
label56 :
t = trm70;
{
ATerm trm76 = t;
ATerm trm77 = t;
struct str_closure y_145 = { &(_Id) , sl_up(sl) };
StrCL lifted59_cl = &(y_145);
struct str_closure z_145 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(z_145);
t = _2_0(sl_up(sl), lifted59_cl, lifted60_cl, t);
if((t == NULL))
goto label61 ;
goto label60 ;
label61 :
t = trm77;
{
struct str_closure a_146 = { &(wildcard_0_0) , sl_up(sl) };
StrCL lifted61_cl = &(a_146);
struct str_closure b_146 = { &(_Id) , sl_up(sl) };
StrCL lifted62_cl = &(b_146);
t = _2_0(sl_up(sl), lifted61_cl, lifted62_cl, t);
if((t == NULL))
goto label59 ;
else
goto label60 ;
}
label60 :
;
goto label51 ;
label59 :
t = trm76;
t = wildcardvar_eq_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail75 ;
else
goto label51 ;
}
}
}
}
}
label51 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_wildcard_0)))
goto fail76 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_relative_prefix_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_relative_prefix_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_13 = NULL,l_13 = NULL;
ATerm trm61 = t;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label50 ;
t = dirname_0_0(sl, t);
if((t == NULL))
goto label50 ;
goto label49 ;
label50 :
t = trm61;
t = getcwd_0_0(sl, t);
if((t == NULL))
goto fail73 ;
else
goto label49 ;
label49 :
;
l_13 = t;
k_13 = t;
t = (ATerm) ATmakeAppl(sym__2, k_13, term195);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail73 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
ATerm abs_test_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "abs_test_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_13 = NULL,i_13 = NULL,h_13 = NULL,j_13 = NULL;
i_13 = t;
t = term193;
t = get_relative_prefix_0_0(sl, t);
if((t == NULL))
goto fail72 ;
g_13 = t;
t = i_13;
j_13 = t;
h_13 = t;
t = (ATerm) ATmakeAppl(sym__2, g_13, h_13);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail72 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
ATerm single_ast_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "single_ast_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_145 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(v_145);
struct str_closure w_145 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(w_145);
struct str_closure x_145 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(x_145);
t = Option_3_0(sl, lifted56_cl, lifted57_cl, lifted58_cl, t);
if((t == NULL))
goto fail68 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term191;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_13 = NULL;
f_13 = t;
t = term189;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail70 ;
t = f_13;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--ast", 0, ATtrue))))
goto fail69 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
ATerm single_asfix2_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "single_asfix2_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_145 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(s_145);
struct str_closure t_145 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(t_145);
struct str_closure u_145 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(u_145);
t = Option_3_0(sl, lifted53_cl, lifted54_cl, lifted55_cl, t);
if((t == NULL))
goto fail64 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term185;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_13 = NULL;
e_13 = t;
t = term183;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail66 ;
t = e_13;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--asfix2", 0, ATtrue))))
goto fail65 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_single_test_output_asfix2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_single_test_output_asfix2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = get_single_test_output_0_0(sl, t);
if((t == NULL))
goto fail63 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("asfix2", 0, ATtrue))))
goto fail63 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_single_test_output_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_single_test_output_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term179;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail62 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_single_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_single_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term175;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail61 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
ATerm single_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "single_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_145 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(p_145);
struct str_closure q_145 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(q_145);
struct str_closure r_145 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(r_145);
t = ArgOption_3_0(sl, lifted50_cl, lifted51_cl, lifted52_cl, t);
if((t == NULL))
goto fail57 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term177;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
b_13 = t;
d_13 = t;
t = string_to_int_0_0(sl_up(sl), t);
if((t == NULL))
goto fail59 ;
c_13 = t;
t = d_13;
t = (ATerm) ATmakeAppl(sym__2, term175, c_13);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail59 ;
t = b_13;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--single", 0, ATtrue))))
goto fail58 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
ATerm sglr_filter_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sglr_filter_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm58 = t;
struct str_closure i_145 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(i_145);
struct str_closure j_145 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(j_145);
struct str_closure k_145 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(k_145);
t = ArgOption_3_0(sl, lifted41_cl, lifted42_cl, lifted45_cl, t);
if((t == NULL))
goto label45 ;
goto label44 ;
label45 :
t = trm58;
{
struct str_closure m_145 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(m_145);
struct str_closure n_145 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(n_145);
struct str_closure o_145 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(o_145);
t = Option_3_0(sl, lifted46_cl, lifted47_cl, lifted49_cl, t);
if((t == NULL))
goto fail50 ;
else
goto label44 ;
}
label44 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term173;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_145 = { &(false_0_0) , sl_up(sl) };
StrCL lifted48_cl = &(l_145);
t = set_heuristic_filters_1_0(sl_up(sl), lifted48_cl, t);
if((t == NULL))
goto fail55 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--no-heuristic-filters", 0, ATtrue))))
goto fail54 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term171;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_12 = NULL,w_12 = NULL;
w_12 = t;
v_12 = t;
{
ATerm trm59 = t;
ATerm x_12 = NULL;
x_12 = t;
t = v_12;
if(!((ATgetSymbol(t) == ATmakeSymbol("off", 0, ATtrue))))
goto label47 ;
t = x_12;
{
struct str_closure g_145 = { &(false_0_0) , sl_up(sl) };
StrCL lifted43_cl = &(g_145);
t = set_heuristic_filters_1_0(sl_up(sl), lifted43_cl, t);
if((t == NULL))
goto fail52 ;
else
goto label46 ;
}
label47 :
t = trm59;
{
ATerm trm60 = t;
ATerm y_12 = NULL;
y_12 = t;
t = v_12;
if(!((ATgetSymbol(t) == ATmakeSymbol("on", 0, ATtrue))))
goto label48 ;
t = y_12;
{
struct str_closure h_145 = { &(true_0_0) , sl_up(sl) };
StrCL lifted44_cl = &(h_145);
t = set_heuristic_filters_1_0(sl_up(sl), lifted44_cl, t);
if((t == NULL))
goto fail52 ;
else
goto label46 ;
}
label48 :
t = trm60;
{
ATerm z_12 = NULL,a_13 = NULL;
a_13 = t;
t = term169;
z_12 = t;
t = a_13;
t = fatal_err_0_1(sl_up(sl), z_12, t);
if((t == NULL))
goto fail52 ;
else
goto label46 ;
}
}
label46 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--heuristic-filters", 0, ATtrue))))
goto fail51 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
ATerm sglr_parse_table_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sglr_parse_table_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_145 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(d_145);
struct str_closure e_145 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(e_145);
struct str_closure f_145 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(f_145);
t = ArgOption_3_0(sl, lifted38_cl, lifted39_cl, lifted40_cl, t);
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
t = term167;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
s_12 = t;
u_12 = t;
t_12 = t;
t = (ATerm) ATmakeAppl(sym__2, term165, t_12);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail48 ;
t = s_12;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-p", 0, ATtrue))))
goto fail47 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
ATerm unknown_testsuite_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "unknown_testsuite_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
if(match_cons(t, sym_option_2))
{
j_12 = ATgetArgument(t, 0);
k_12 = ATgetArgument(t, 1);
}
else
goto fail45 ;
n_12 = t;
t = term161;
l_12 = t;
t = n_12;
o_12 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_12), term99), j_12), term163);
m_12 = t;
t = o_12;
t = log_0_2(sl, l_12, m_12, t);
if((t == NULL))
goto fail45 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
ATerm process_testsuite_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "process_testsuite_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm39 = t;
ATerm h_12 = NULL;
if(match_cons(t, sym_option_2))
{
ATerm trm40 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm40) == ATmakeSymbol("topsort", 0, ATtrue))))
goto label38 ;
h_12 = ATgetArgument(t, 1);
}
else
goto label38 ;
t = (ATerm) ATmakeAppl(sym__2, term153, h_12);
t = set_config_0_0(sl, t);
if((t == NULL))
goto label38 ;
goto label37 ;
label38 :
t = trm39;
{
ATerm trm41 = t;
struct str_closure x_144 = { &(true_0_0) , sl };
StrCL lifted32_cl = &(x_144);
if(match_cons(t, sym_option_2))
{
ATerm trm42 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm42) == ATmakeSymbol("ambiguity", 0, ATtrue))))
goto label39 ;
{
ATerm trm43 = ATgetArgument(t, 1);
if(!((ATgetSymbol(trm43) == ATmakeSymbol("fails", 0, ATtrue))))
goto label39 ;
}
}
else
goto label39 ;
t = set_ambiguity_is_error_1_0(sl, lifted32_cl, t);
if((t == NULL))
goto label39 ;
goto label37 ;
label39 :
t = trm41;
{
ATerm trm44 = t;
struct str_closure y_144 = { &(false_0_0) , sl };
StrCL lifted33_cl = &(y_144);
if(match_cons(t, sym_option_2))
{
ATerm trm45 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm45) == ATmakeSymbol("ambiguity", 0, ATtrue))))
goto label40 ;
{
ATerm trm46 = ATgetArgument(t, 1);
if(!((ATgetSymbol(trm46) == ATmakeSymbol("succeeds", 0, ATtrue))))
goto label40 ;
}
}
else
goto label40 ;
t = set_ambiguity_is_error_1_0(sl, lifted33_cl, t);
if((t == NULL))
goto label40 ;
goto label37 ;
label40 :
t = trm44;
{
ATerm trm47 = t;
struct str_closure z_144 = { &(false_0_0) , sl };
StrCL lifted34_cl = &(z_144);
if(match_cons(t, sym_option_2))
{
ATerm trm48 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm48) == ATmakeSymbol("heuristic-filters", 0, ATtrue))))
goto label41 ;
{
ATerm trm49 = ATgetArgument(t, 1);
if(!((ATgetSymbol(trm49) == ATmakeSymbol("off", 0, ATtrue))))
goto label41 ;
}
}
else
goto label41 ;
t = set_heuristic_filters_1_0(sl, lifted34_cl, t);
if((t == NULL))
goto label41 ;
goto label37 ;
label41 :
t = trm47;
{
ATerm trm50 = t;
struct str_closure a_145 = { &(true_0_0) , sl };
StrCL lifted35_cl = &(a_145);
if(match_cons(t, sym_option_2))
{
ATerm trm51 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm51) == ATmakeSymbol("heuristic-filters", 0, ATtrue))))
goto label42 ;
{
ATerm trm52 = ATgetArgument(t, 1);
if(!((ATgetSymbol(trm52) == ATmakeSymbol("on", 0, ATtrue))))
goto label42 ;
}
}
else
goto label42 ;
t = set_heuristic_filters_1_0(sl, lifted35_cl, t);
if((t == NULL))
goto label42 ;
goto label37 ;
label42 :
t = trm50;
{
ATerm trm53 = t;
struct str_closure b_145 = { &(false_0_0) , sl };
StrCL lifted36_cl = &(b_145);
if(match_cons(t, sym_option_2))
{
ATerm trm54 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm54) == ATmakeSymbol("post-parse-priority-filter", 0, ATtrue))))
goto label43 ;
{
ATerm trm55 = ATgetArgument(t, 1);
if(!((ATgetSymbol(trm55) == ATmakeSymbol("off", 0, ATtrue))))
goto label43 ;
}
}
else
goto label43 ;
t = set_filter_priority_1_0(sl, lifted36_cl, t);
if((t == NULL))
goto label43 ;
goto label37 ;
label43 :
t = trm53;
{
struct str_closure c_145 = { &(true_0_0) , sl };
StrCL lifted37_cl = &(c_145);
if(match_cons(t, sym_option_2))
{
ATerm trm56 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm56) == ATmakeSymbol("post-parse-priority-filter", 0, ATtrue))))
goto fail44 ;
{
ATerm trm57 = ATgetArgument(t, 1);
if(!((ATgetSymbol(trm57) == ATmakeSymbol("on", 0, ATtrue))))
goto fail44 ;
}
}
else
goto fail44 ;
t = set_filter_priority_1_0(sl, lifted37_cl, t);
if((t == NULL))
goto fail44 ;
else
goto label37 ;
}
}
}
}
}
}
label37 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
ATerm process_testsuite_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "process_testsuite_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_11 = NULL;
struct str_closure u_144 = { &(_Id) , sl };
StrCL lifted28_cl = &(u_144);
struct str_closure v_144 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(v_144);
struct str_closure w_144 = { &(_Id) , sl };
StrCL lifted31_cl = &(w_144);
t = parse_testsuite_3_0(sl, lifted28_cl, lifted29_cl, lifted31_cl, t);
if((t == NULL))
goto fail41 ;
e_11 = t;
{
ATerm trm37 = t;
ATerm f_11 = NULL;
f_11 = t;
{
ATerm trm38 = t;
t = term153;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label36 ;
goto label34 ;
label36 :
t = trm38;
goto label35 ;
label35 :
;
t = f_11;
}
{
ATerm h_11 = NULL,i_11 = NULL,k_11 = NULL,l_11 = NULL;
k_11 = t;
t = term155;
h_11 = t;
t = k_11;
l_11 = t;
t = term157;
i_11 = t;
t = l_11;
t = log_0_2(sl, h_11, i_11, t);
if((t == NULL))
goto fail41 ;
t = term159;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto fail41 ;
else
goto label33 ;
}
label34 :
t = trm37;
goto label33 ;
label33 :
;
t = e_11;
}
}
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
ATerm e_142 = NULL,f_142 = NULL,h_142 = NULL;
ATerm trm35;
trm35 = (ATerm) ATgetAnnotations(t);
if((trm35 == NULL))
trm35 = (ATerm) ATempty;
if(match_cons(t, sym_options_1))
{
f_142 = ATgetArgument(t, 0);
}
else
goto fail42 ;
e_142 = trm35;
t = f_142;
{
struct str_closure t_144 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(t_144);
t = map_1_0(sl_up(sl), lifted30_cl, t);
if((t == NULL))
goto fail42 ;
h_142 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_options_1, h_142), e_142);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_142 = NULL;
j_142 = t;
{
ATerm trm36 = t;
t = process_testsuite_option_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label32 ;
goto label31 ;
label32 :
t = trm36;
t = unknown_testsuite_option_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail43 ;
else
goto label31 ;
label31 :
;
t = j_142;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_unit_about_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_unit_about_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Config_1, (ATerm) ATinsert(ATinsert(ATempty, term133), term135))), term141), term149), term151);
t = tool_doc_0_0(sl, t);
if((t == NULL))
goto fail40 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_unit_usage_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_unit_usage_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term121), term123), term127), term131);
t = tool_doc_0_0(sl, t);
if((t == NULL))
goto fail39 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
ATerm ensure_help_string_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ensure_help_string_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm32 = t;
struct str_closure r_144 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(r_144);
struct str_closure s_144 = { &(is_string_0_0) , sl };
StrCL lifted27_cl = &(s_144);
t = HelpString_2_0(sl, lifted26_cl, lifted27_cl, t);
if((t == NULL))
goto label27 ;
goto label26 ;
label27 :
t = trm32;
{
ATerm trm34 = t;
ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,c_11 = NULL;
y_10 = t;
c_11 = t;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label30 ;
t = (ATerm) ATmakeAppl(sym__2, y_10, term115);
t = split_before_0_0(sl, t);
if((t == NULL))
goto label30 ;
if(match_cons(t, sym__2))
{
z_10 = ATgetArgument(t, 0);
a_11 = ATgetArgument(t, 1);
}
else
goto label30 ;
t = c_11;
t = (ATerm) ATmakeAppl(sym_HelpString_2, z_10, a_11);
goto label26 ;
label30 :
t = trm34;
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto fail37 ;
t = term119;
goto label26 ;
}
label26 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm33 = t;
t = is_string_0_0(sl_up(sl), t);
if((t == NULL))
goto label29 ;
goto label28 ;
label29 :
t = trm33;
t = is_list_0_0(sl_up(sl), t);
if((t == NULL))
goto fail38 ;
else
goto label28 ;
label28 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
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
goto fail36 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
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
goto fail35 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
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
goto fail34 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
ATerm DesugarToolDoc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "DesugarToolDoc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm14 = t;
ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
if(match_cons(t, sym_Usage_1))
{
v_10 = ATgetArgument(t, 0);
}
else
goto label8 ;
x_10 = t;
t = (ATerm) ATmakeAppl(sym__2, term59, v_10);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label8 ;
w_10 = t;
t = x_10;
t = (ATerm) ATmakeAppl(sym_Line_1, w_10);
goto label7 ;
label8 :
t = trm14;
{
ATerm trm15 = t;
ATerm u_10 = NULL;
if(match_cons(t, sym_Summary_1))
{
u_10 = ATgetArgument(t, 0);
}
else
goto label9 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term61, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Paragraph_1, u_10)));
goto label7 ;
label9 :
t = trm15;
{
ATerm trm16 = t;
ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
if(match_cons(t, sym_Description_1))
{
p_10 = ATgetArgument(t, 0);
}
else
goto label10 ;
r_10 = t;
t = p_10;
{
struct str_closure n_144 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(n_144);
t = map_1_0(sl, lifted22_cl, t);
if((t == NULL))
goto label10 ;
q_10 = t;
t = r_10;
t = (ATerm) ATmakeAppl(sym_HSection_2, term63, q_10);
}
goto label7 ;
label10 :
t = trm16;
{
ATerm trm17 = t;
ATerm n_10 = NULL,o_10 = NULL;
if(!(match_cons(t, sym_OptionUsage_0)))
goto label11 ;
o_10 = t;
t = term69;
t = table_get_0_0(sl, t);
if((t == NULL))
goto label11 ;
t = reverse_0_0(sl, t);
if((t == NULL))
goto label11 ;
{
struct str_closure o_144 = { &(ensure_help_string_0_0) , sl };
StrCL lifted23_cl = &(o_144);
t = map_1_0(sl, lifted23_cl, t);
if((t == NULL))
goto label11 ;
{
struct str_closure p_144 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(p_144);
t = filter_1_0(sl, lifted24_cl, t);
if((t == NULL))
goto label11 ;
n_10 = t;
t = o_10;
t = (ATerm) ATmakeAppl(sym_HSection_2, term71, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, n_10)));
}
}
goto label7 ;
label11 :
t = trm17;
{
ATerm trm18 = t;
ATerm k_10 = NULL;
if(match_cons(t, sym_Authors_1))
{
k_10 = ATgetArgument(t, 0);
}
else
goto label12 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term73, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ItemList_1, k_10)));
goto label7 ;
label12 :
t = trm18;
{
ATerm trm19 = t;
ATerm j_10 = NULL;
if(match_cons(t, sym_Author_1))
{
j_10 = ATgetArgument(t, 0);
}
else
goto label13 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term75, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ItemList_1, (ATerm) ATinsert(ATempty, j_10))));
goto label7 ;
label13 :
t = trm19;
{
ATerm trm20 = t;
ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
if(match_cons(t, sym_Person_2))
{
f_10 = ATgetArgument(t, 0);
g_10 = ATgetArgument(t, 1);
}
else
goto label14 ;
i_10 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term77), g_10), term79), f_10);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label14 ;
h_10 = t;
t = i_10;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, h_10);
goto label7 ;
label14 :
t = trm20;
{
ATerm trm21 = t;
ATerm e_10 = NULL;
if(match_cons(t, sym_WebHome_1))
{
e_10 = ATgetArgument(t, 0);
}
else
goto label15 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term81, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Line_1, e_10)));
goto label7 ;
label15 :
t = trm21;
{
ATerm trm22 = t;
ATerm c_10 = NULL,d_10 = NULL;
if(!(match_cons(t, sym_AutoReportBugs_0)))
goto label16 ;
d_10 = t;
t = term23;
t = package_bugreport_0_0(sl, t);
if((t == NULL))
goto label16 ;
c_10 = t;
t = d_10;
t = (ATerm) ATmakeAppl(sym_ReportBugs_1, c_10);
goto label7 ;
label16 :
t = trm22;
{
ATerm trm23 = t;
ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
if(match_cons(t, sym_ReportBugs_1))
{
z_9 = ATgetArgument(t, 0);
}
else
goto label17 ;
b_10 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, z_9), term83);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label17 ;
a_10 = t;
t = b_10;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, a_10);
goto label7 ;
label17 :
t = trm23;
{
ATerm trm24 = t;
ATerm t_9 = NULL,w_9 = NULL,u_9 = NULL,x_9 = NULL,v_9 = NULL,y_9 = NULL;
if(!(match_cons(t, sym_AutoProgram_0)))
goto label18 ;
w_9 = t;
t = term85;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label18 ;
t_9 = t;
t = w_9;
x_9 = t;
t = term23;
t = package_name_0_0(sl, t);
if((t == NULL))
goto label18 ;
u_9 = t;
t = x_9;
y_9 = t;
t = term23;
t = package_version_0_0(sl, t);
if((t == NULL))
goto label18 ;
v_9 = t;
t = y_9;
t = (ATerm) ATmakeAppl(sym_Program_3, t_9, u_9, v_9);
goto label7 ;
label18 :
t = trm24;
{
ATerm trm25 = t;
ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
if(match_cons(t, sym_Program_3))
{
q_9 = ATgetArgument(t, 0);
r_9 = ATgetArgument(t, 1);
s_9 = ATgetArgument(t, 2);
}
else
goto label19 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, q_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Def_2, term87, (ATerm) ATmakeAppl(sym_Paragraph_1, s_9))), (ATerm) ATmakeAppl(sym_Def_2, term89, (ATerm) ATmakeAppl(sym_Paragraph_1, r_9))))));
goto label7 ;
label19 :
t = trm25;
{
ATerm trm26 = t;
ATerm p_9 = NULL;
if(match_cons(t, sym_Config_1))
{
p_9 = ATgetArgument(t, 0);
}
else
goto label20 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term91, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, p_9)));
goto label7 ;
label20 :
t = trm26;
{
ATerm trm27 = t;
ATerm n_9 = NULL,o_9 = NULL;
if(!(match_cons(t, sym_DefaultXTCRepository_0)))
goto label21 ;
o_9 = t;
t = term23;
t = GetInternalDefaultXtcRepository_0_0(sl, t);
if((t == NULL))
goto label21 ;
n_9 = t;
t = o_9;
t = (ATerm) ATmakeAppl(sym_ConfigItem_2, term93, n_9);
goto label7 ;
label21 :
t = trm27;
{
ATerm trm28 = t;
ATerm l_9 = NULL,m_9 = NULL;
if(!(match_cons(t, sym_CurrentXTCRepository_0)))
goto label22 ;
m_9 = t;
t = term23;
t = xtc_location_0_0(sl, t);
if((t == NULL))
goto label22 ;
l_9 = t;
t = m_9;
t = (ATerm) ATmakeAppl(sym_ConfigItem_2, term95, l_9);
goto label7 ;
label22 :
t = trm28;
{
ATerm trm29 = t;
ATerm j_9 = NULL,k_9 = NULL;
if(match_cons(t, sym_ConfigItem_2))
{
j_9 = ATgetArgument(t, 0);
k_9 = ATgetArgument(t, 1);
}
else
goto label23 ;
t = (ATerm) ATmakeAppl(sym_Def_2, j_9, (ATerm) ATmakeAppl(sym_Line_1, k_9));
goto label7 ;
label23 :
t = trm29;
{
ATerm trm30 = t;
ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
if(match_cons(t, sym_License_1))
{
e_9 = ATgetArgument(t, 0);
}
else
goto label24 ;
g_9 = t;
t = e_9;
{
struct str_closure q_144 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(q_144);
t = map_1_0(sl, lifted25_cl, t);
if((t == NULL))
goto label24 ;
f_9 = t;
t = g_9;
t = (ATerm) ATmakeAppl(sym_HSection_2, term97, f_9);
}
goto label7 ;
label24 :
t = trm30;
{
ATerm trm31 = t;
ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
if(match_cons(t, sym_GNU__GPL_2))
{
a_9 = ATgetArgument(t, 0);
b_9 = ATgetArgument(t, 1);
}
else
goto label25 ;
d_9 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_9), term99), a_9), term101);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label25 ;
c_9 = t;
t = d_9;
t = (ATerm) ATmakeAppl(sym_License_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term103), term105), term107), c_9));
goto label7 ;
label25 :
t = trm31;
{
ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
if(match_cons(t, sym_GNU__LGPL_2))
{
w_8 = ATgetArgument(t, 0);
x_8 = ATgetArgument(t, 1);
}
else
goto fail30 ;
z_8 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_8), term99), w_8), term101);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail30 ;
y_8 = t;
t = z_8;
t = (ATerm) ATmakeAppl(sym_License_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term109), term111), term113), y_8));
goto label7 ;
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
label7 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_9 = NULL,i_9 = NULL;
i_9 = t;
h_9 = t;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, h_9);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_10 = NULL,m_10 = NULL;
if(match_cons(t, sym_HelpString_2))
{
l_10 = ATgetArgument(t, 0);
m_10 = ATgetArgument(t, 1);
}
else
goto fail32 ;
t = (ATerm) ATmakeAppl(sym_Def_2, l_10, (ATerm) ATmakeAppl(sym_Paragraph_1, m_10));
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
ATerm s_10 = NULL,t_10 = NULL;
t_10 = t;
s_10 = t;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, s_10);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm tool_doc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tool_doc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_8 = NULL;
u_8 = t;
{
struct str_closure m_144 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(m_144);
t = xtc_temp_files_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto fail24 ;
t = u_8;
}
}
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
ATerm v_8 = NULL;
struct str_closure i_144 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(i_144);
t = topdown_1_0(sl_up(sl), lifted17_cl, t);
if((t == NULL))
goto fail25 ;
t = write_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail25 ;
{
struct str_closure j_144 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(j_144);
t = xtc_transform_1_0(sl_up(sl), lifted19_cl, t);
if((t == NULL))
goto fail25 ;
{
struct str_closure k_144 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(k_144);
t = xtc_abox2text_1_0(sl_up(sl), lifted20_cl, t);
if((t == NULL))
goto fail25 ;
v_8 = t;
{
struct str_closure l_144 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(l_144);
t = FILE_1_0(sl_up(sl), lifted21_cl, t);
if((t == NULL))
goto fail25 ;
t = v_8;
}
}
}
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
t = read_text_file_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail29 ;
t = echo_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail29 ;
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
t = term57;
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
t = term55;
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
{
struct str_closure h_144 = { &(DesugarToolDoc_0_0) , sl_up(sl_up(sl)) };
StrCL lifted18_cl = &(h_144);
t = repeat_1_0(sl_up(sl_up(sl)), lifted18_cl, t);
if((t == NULL))
goto fail26 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_abox2text_1_0 (StrSL sl, StrCL i_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_abox2text_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, i_7);
{
struct str_closure c_144 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(c_144);
struct str_closure d_144 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(d_144);
t = xtc_transform_2_0(sl, lifted14_cl, lifted15_cl, t);
if((t == NULL))
goto fail21 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_7 = NULL,o_7 = NULL,n_7 = NULL,p_7 = NULL;
o_7 = t;
t = term23;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail23 ;
t = int_to_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail23 ;
m_7 = t;
t = o_7;
p_7 = t;
t = term23;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail23 ;
n_7 = t;
t = p_7;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, m_7), term53), n_7);
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail23 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm hack_aterm_pattern_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "hack_aterm_pattern_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_143 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(x_143);
t = topdown_1_0(sl, lifted12_cl, t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_143 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(w_143);
t = try_1_0(sl_up(sl), lifted13_cl, t);
if((t == NULL))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
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
if(!(match_cons(t, sym_wildcardvar_0)))
goto label6 ;
t = (ATerm) ATinsert(ATempty, term43);
goto label5 ;
label6 :
t = trm13;
if(!(match_cons(t, sym_wildcard_0)))
goto fail20 ;
t = term49;
goto label5 ;
label5 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm echo_expected_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "echo_expected_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm11 = t;
ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,x_6 = NULL,w_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL;
if(match_cons(t, sym_pattern_1))
{
r_6 = ATgetArgument(t, 0);
}
else
goto label3 ;
t = r_6;
t = hack_aterm_pattern_0_0(sl, t);
if((t == NULL))
goto label3 ;
t = implode_aterm_0_0(sl, t);
if((t == NULL))
goto label3 ;
s_6 = t;
u_6 = t;
t = stderr_stream_0_0(sl, t);
if((t == NULL))
goto label3 ;
t_6 = t;
t = u_6;
t = (ATerm) ATmakeAppl(sym__2, t_6, (ATerm) ATinsert(ATempty, term33));
t = fprint_0_0(sl, t);
if((t == NULL))
goto label3 ;
t = s_6;
x_6 = t;
t = stderr_stream_0_0(sl, t);
if((t == NULL))
goto label3 ;
v_6 = t;
t = x_6;
y_6 = t;
w_6 = t;
t = (ATerm) ATmakeAppl(sym__2, v_6, w_6);
t = write_in_text_to_stream_0_0(sl, t);
if((t == NULL))
goto label3 ;
a_7 = t;
t = stderr_stream_0_0(sl, t);
if((t == NULL))
goto label3 ;
z_6 = t;
t = a_7;
t = (ATerm) ATmakeAppl(sym__2, z_6, (ATerm) ATinsert(ATempty, term31));
t = fprint_0_0(sl, t);
if((t == NULL))
goto label3 ;
goto label2 ;
label3 :
t = trm11;
{
ATerm trm12 = t;
struct str_closure u_143 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(u_143);
if(!(match_cons(t, sym_success_0)))
goto label4 ;
t = term23;
t = say_1_0(sl, lifted10_cl, t);
if((t == NULL))
goto label4 ;
goto label2 ;
label4 :
t = trm12;
{
struct str_closure v_143 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(v_143);
if(!(match_cons(t, sym_failure_0)))
goto fail15 ;
t = term23;
t = say_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto fail15 ;
else
goto label2 ;
}
}
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term37;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term35;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm echo_parse_result_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "echo_parse_result_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm6 = t;
ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
if(match_cons(t, sym_ParseResult_2))
{
o_6 = ATgetArgument(t, 0);
{
ATerm trm7 = ATgetArgument(t, 1);
if(match_cons(trm7, sym_Failure_1))
{
ATerm trm8 = ATgetArgument(trm7, 0);
if(match_cons(trm8, sym_Parse_1))
{
p_6 = ATgetArgument(trm8, 0);
}
else
goto label1 ;
}
else
goto label1 ;
}
}
else
goto label1 ;
q_6 = t;
t = term23;
{
struct str_closure t_143 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(t_143);
t = say_1_0(sl, lifted9_cl, t);
if((t == NULL))
goto label1 ;
t = term27;
t = echo_0_0(sl, t);
if((t == NULL))
goto label1 ;
t = o_6;
t = report_error_0_1(sl, p_6, t);
if((t == NULL))
goto label1 ;
t = term27;
t = echo_0_0(sl, t);
if((t == NULL))
goto label1 ;
t = q_6;
t = term23;
}
goto label0 ;
label1 :
t = trm6;
{
ATerm y_5 = NULL,z_5 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,g_6 = NULL,f_6 = NULL,h_6 = NULL,i_6 = NULL,n_6 = NULL;
if(match_cons(t, sym_ParseResult_2))
{
ATerm trm9 = ATgetArgument(t, 0);
ATerm trm10 = ATgetArgument(t, 1);
if(match_cons(trm10, sym_Success_1))
{
y_5 = ATgetArgument(trm10, 0);
}
else
goto fail13 ;
}
else
goto fail13 ;
t = y_5;
z_5 = t;
d_6 = t;
t = stderr_stream_0_0(sl, t);
if((t == NULL))
goto fail13 ;
c_6 = t;
t = d_6;
t = (ATerm) ATmakeAppl(sym__2, c_6, (ATerm) ATinsert(ATempty, term29));
t = fprint_0_0(sl, t);
if((t == NULL))
goto fail13 ;
t = z_5;
g_6 = t;
t = stderr_stream_0_0(sl, t);
if((t == NULL))
goto fail13 ;
e_6 = t;
t = g_6;
h_6 = t;
f_6 = t;
t = (ATerm) ATmakeAppl(sym__2, e_6, f_6);
t = write_in_text_to_stream_0_0(sl, t);
if((t == NULL))
goto fail13 ;
n_6 = t;
t = stderr_stream_0_0(sl, t);
if((t == NULL))
goto fail13 ;
i_6 = t;
t = n_6;
t = (ATerm) ATmakeAppl(sym__2, i_6, (ATerm) ATinsert(ATempty, term31));
t = fprint_0_0(sl, t);
if((t == NULL))
goto fail13 ;
else
goto label0 ;
}
label0 :
;
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
t = term25;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm echo_report_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "echo_report_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(4);
{
ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL;
sl_init_var(0, m_5);
sl_init_var(1, n_5);
sl_init_var(2, o_5);
sl_init_var(3, p_5);
{
struct str_closure s_143 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(s_143);
t = if_verbose1_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto fail7 ;
}
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
ATerm s_5 = NULL,q_5 = NULL,r_5 = NULL;
if(match_cons(t, sym__4))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail8 ;
{
ATerm trm3 = ATgetArgument(t, 1);
if(match_cons(trm3, sym_parse_test_3))
{
ATerm trm4 = ATgetArgument(trm3, 0);
if(match_cons(trm4, sym_description_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm4, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm4, 0)))
goto fail8 ;
}
else
goto fail8 ;
{
ATerm trm5 = ATgetArgument(trm3, 1);
}
if((sl_readvar(3, sl) == NULL))
{
sl_readvar(3, sl) = ATgetArgument(trm3, 2);
}
else
if((sl_readvar(3, sl) != ATgetArgument(trm3, 2)))
goto fail8 ;
}
else
goto fail8 ;
}
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = ATgetArgument(t, 2);
}
else
if((sl_readvar(2, sl) != ATgetArgument(t, 2)))
goto fail8 ;
s_5 = ATgetArgument(t, 3);
}
else
goto fail8 ;
t = s_5;
q_5 = t;
{
struct str_closure m_143 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(m_143);
t = try_1_0(sl_up(sl), lifted5_cl, t);
if((t == NULL))
goto fail8 ;
t = q_5;
r_5 = t;
{
struct str_closure p_143 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(p_143);
t = try_1_0(sl_up(sl), lifted6_cl, t);
if((t == NULL))
goto fail8 ;
t = r_5;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_5 = NULL,w_5 = NULL;
struct str_closure n_143 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(n_143);
if(!(match_cons(t, sym_Failure_0)))
goto fail10 ;
w_5 = t;
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail10 ;
else
{
t = sl_readvar(0, sl_up(sl));
}
t = int_to_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail10 ;
v_5 = t;
t = w_5;
if((sl_readvar(1, sl_up(sl)) == NULL))
goto fail10 ;
else
{
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term15), sl_readvar(1, sl_up(sl))), term17), v_5), term21);
}
t = concat_strings_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail10 ;
t = echo_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail10 ;
{
struct str_closure o_143 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(o_143);
t = try_1_0(sl_up(sl_up(sl)), lifted7_cl, t);
if((t == NULL))
goto fail10 ;
t = try_1_0(sl_up(sl_up(sl)), lifted8_cl, t);
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
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl_up(sl_up(sl))) == NULL))
goto fail12 ;
else
{
t = sl_readvar(2, sl_up(sl_up(sl)));
}
t = echo_parse_result_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
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
if((sl_readvar(3, sl_up(sl_up(sl))) == NULL))
goto fail11 ;
else
{
t = sl_readvar(3, sl_up(sl_up(sl)));
}
t = echo_expected_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail11 ;
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
ATerm t_5 = NULL,u_5 = NULL;
if(!(match_cons(t, sym_Success_0)))
goto fail9 ;
u_5 = t;
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail9 ;
else
{
t = sl_readvar(0, sl_up(sl));
}
t = int_to_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail9 ;
t_5 = t;
t = u_5;
if((sl_readvar(1, sl_up(sl)) == NULL))
goto fail9 ;
else
{
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term15), sl_readvar(1, sl_up(sl))), term17), t_5), term19);
}
t = concat_strings_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail9 ;
t = echo_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm count_in_string_1_0 (StrSL sl, StrCL l_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "count_in_string_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = filter_1_0(sl, l_5, t);
if((t == NULL))
goto fail6 ;
t = length_0_0(sl, t);
if((t == NULL))
goto fail6 ;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail6 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm echo_results_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "echo_results_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm a_5 = NULL,b_5 = NULL;
sl_init_var(0, a_5);
sl_init_var(1, b_5);
{
struct str_closure l_143 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(l_143);
t = if_verbose1_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto fail2 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
c_5 = t;
if(match_cons(t, sym__2))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail3 ;
{
ATerm trm2 = ATgetArgument(t, 1);
if(match_cons(trm2, sym_TestResults_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm2, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm2, 0)))
goto fail3 ;
}
else
goto fail3 ;
}
}
else
goto fail3 ;
t = term1;
t = echo_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
if((sl_readvar(0, sl) == NULL))
goto fail3 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term9, sl_readvar(0, sl));
}
t = conc_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = echo_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
e_5 = t;
if((sl_readvar(1, sl) == NULL))
goto fail3 ;
else
{
t = sl_readvar(1, sl);
}
{
struct str_closure g_143 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(g_143);
t = count_in_string_1_0(sl_up(sl), lifted2_cl, t);
if((t == NULL))
goto fail3 ;
d_5 = t;
t = e_5;
t = (ATerm) ATmakeAppl(sym__2, term11, d_5);
t = conc_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = echo_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
g_5 = t;
if((sl_readvar(1, sl) == NULL))
goto fail3 ;
else
{
t = sl_readvar(1, sl);
}
{
struct str_closure k_143 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(k_143);
t = count_in_string_1_0(sl_up(sl), lifted3_cl, t);
if((t == NULL))
goto fail3 ;
f_5 = t;
t = g_5;
t = (ATerm) ATmakeAppl(sym__2, term13, f_5);
t = conc_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = echo_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = term1;
t = echo_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = c_5;
}
}
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
if(!(match_cons(t, sym_Failure_0)))
goto fail5 ;
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
if(!(match_cons(t, sym_Success_0)))
goto fail4 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm echo_start_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "echo_start_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm u_4 = NULL,v_4 = NULL;
sl_init_var(0, u_4);
sl_init_var(1, v_4);
{
struct str_closure d_143 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(d_143);
t = if_verbose1_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
x_4 = t;
if(match_cons(t, sym_parse_testsuite_3))
{
ATerm trm0 = ATgetArgument(t, 0);
if(match_cons(trm0, sym_name_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm0, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm0, 0)))
goto fail1 ;
}
else
goto fail1 ;
{
ATerm trm1 = ATgetArgument(t, 1);
}
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(t, 2);
}
else
if((sl_readvar(1, sl) != ATgetArgument(t, 2)))
goto fail1 ;
}
else
goto fail1 ;
t = term1;
t = echo_0_0(sl_up(sl), t);
if((t == NULL))
goto fail1 ;
z_4 = t;
if((sl_readvar(1, sl) == NULL))
goto fail1 ;
else
{
t = sl_readvar(1, sl);
}
t = length_0_0(sl_up(sl), t);
if((t == NULL))
goto fail1 ;
t = int_to_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail1 ;
y_4 = t;
t = z_4;
if((sl_readvar(0, sl) == NULL))
goto fail1 ;
else
{
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term3), y_4), term5), sl_readvar(0, sl)), term7);
}
t = concat_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail1 ;
t = echo_0_0(sl_up(sl), t);
if((t == NULL))
goto fail1 ;
t = term1;
t = echo_0_0(sl_up(sl), t);
if((t == NULL))
goto fail1 ;
t = x_4;
}
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 194));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(table_get_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_get_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(reverse_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("reverse_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_with_index_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_with_index_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(index_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("index_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(zip_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("zip_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(false_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("false_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(true_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("true_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(dirname_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dirname_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fclose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fclose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fopen_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fopen_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(stderr_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("stderr_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(echo_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("echo_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(say_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("say_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fprint_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fprint_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_in_text_to_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_in_text_to_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_to_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_to_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(is_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_string_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(if_verbose7_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose7_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_verbose1_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose1_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_verbosity_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_verbosity_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fatal_err_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fatal_err_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(getcwd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("getcwd_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(write_to_text_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_text_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(file_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("file_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(implode_asfix_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implode_asfix_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(report_error_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("report_error_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(open_parse_table_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("open_parse_table_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_parse_error_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_parse_error_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_file_pt_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_file_pt_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_string_pt_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_string_pt_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_ambiguity_is_error_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_ambiguity_is_error_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_heuristic_filters_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_heuristic_filters_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_filter_priority_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_filter_priority_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(implode_aterm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implode_aterm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(explode_aterm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("explode_aterm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(GetInternalDefaultXtcRepository_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("GetInternalDefaultXtcRepository_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(wildcard_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("wildcard_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_testsuite_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_testsuite_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_test_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_test_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(HelpString_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("HelpString_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted107);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted107", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_open_parse_table_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_open_parse_table_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_unit_implode_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_unit_implode_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_unit_parse_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_unit_parse_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(execute_test_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("execute_test_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted105);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted105", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted104);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted104", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(do_single_test_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("do_single_test_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted103);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted103", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_unit_exit_on_failure_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_unit_exit_on_failure_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted102);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted102", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(do_full_testsuite_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("do_full_testsuite_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_unit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_unit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted99);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted99", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted96);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted96", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_parse_unit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_parse_unit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted93);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted93", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted92);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted92", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_test_output_to_pattern_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_test_output_to_pattern_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_description_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_description_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(drop_whitespace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("drop_whitespace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted85);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted85", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted83);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted83", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted82);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted82", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted78);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted78", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted77);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted77", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted74);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted74", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted73);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted73", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted71);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted71", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted67);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted67", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted66);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted66", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted64);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted64", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted63);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted63", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted91);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted91", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted90);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted90", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_parse_testsuite_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_parse_testsuite_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(create_test_compare_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("create_test_compare_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(create_test_result_simple_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("create_test_result_simple_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(appl_term_eq_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("appl_term_eq_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fun_term_eq_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fun_term_eq_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(list_term_eq_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("list_term_eq_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(wildcardvar_eq_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("wildcardvar_eq_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(m_13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("m_13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aterm_eq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aterm_eq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_relative_prefix_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_relative_prefix_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(abs_test_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("abs_test_file_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(single_ast_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("single_ast_option_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(single_asfix2_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("single_asfix2_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_single_test_output_asfix2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_single_test_output_asfix2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_single_test_output_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_single_test_output_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_single_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_single_test_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(single_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("single_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted49);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted49", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sglr_filter_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sglr_filter_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted39);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted39", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted38);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted38", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sglr_parse_table_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sglr_parse_table_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(unknown_testsuite_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("unknown_testsuite_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(process_testsuite_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("process_testsuite_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(process_testsuite_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("process_testsuite_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_unit_about_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_unit_about_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_unit_usage_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_unit_usage_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted26);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted26", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(DesugarToolDoc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("DesugarToolDoc_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(tool_doc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tool_doc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_abox2text_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_abox2text_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hack_aterm_pattern_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hack_aterm_pattern_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(echo_expected_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("echo_expected_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(echo_parse_result_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("echo_parse_result_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(echo_report_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("echo_report_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(count_in_string_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("count_in_string_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(echo_results_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("echo_results_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(echo_start_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("echo_start_0_0", 0, ATtrue)), &(closures[closures_index]));
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
