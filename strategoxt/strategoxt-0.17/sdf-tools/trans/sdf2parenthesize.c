#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Info_0;
static Symbol sym_Error_0;
static Symbol sym_Critical_0;
static Symbol sym_Var_1;
static Symbol sym_Op_2;
static Symbol sym_NoAnnoList_1;
static Symbol sym_Wld_0;
static Symbol sym_Constructors_1;
static Symbol sym_SortNoArgs_1;
static Symbol sym_OpDecl_2;
static Symbol sym_ConstType_1;
static Symbol sym_FunType_2;
static Symbol sym_SVar_1;
static Symbol sym_Fail_0;
static Symbol sym_Id_0;
static Symbol sym_Match_1;
static Symbol sym_Call_2;
static Symbol sym_BA_2;
static Symbol sym_CallNoArgs_1;
static Symbol sym_Choice_2;
static Symbol sym_SDefNoArgs_2;
static Symbol sym_Module_2;
static Symbol sym_Imports_1;
static Symbol sym_Strategies_1;
static Symbol sym_Signature_1;
static Symbol sym_Rules_1;
static Symbol sym_Import_1;
static Symbol sym_RDefNoArgs_2;
static Symbol sym_Rule_3;
static Symbol sym_DR__DUMMY_0;
static Symbol sym_Symbol_2;
static Symbol sym_SubtermConflict_3;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_SdfMainModuleFlag_0;
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
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Info_0 = ATmakeSymbol("Info", 0, ATfalse);
ATprotectSymbol(sym_Info_0);
sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
ATprotectSymbol(sym_Error_0);
sym_Critical_0 = ATmakeSymbol("Critical", 0, ATfalse);
ATprotectSymbol(sym_Critical_0);
sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
ATprotectSymbol(sym_Var_1);
sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
ATprotectSymbol(sym_Op_2);
sym_NoAnnoList_1 = ATmakeSymbol("NoAnnoList", 1, ATfalse);
ATprotectSymbol(sym_NoAnnoList_1);
sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
ATprotectSymbol(sym_Wld_0);
sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
ATprotectSymbol(sym_Constructors_1);
sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
ATprotectSymbol(sym_SortNoArgs_1);
sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
ATprotectSymbol(sym_OpDecl_2);
sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
ATprotectSymbol(sym_ConstType_1);
sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
ATprotectSymbol(sym_FunType_2);
sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
ATprotectSymbol(sym_SVar_1);
sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
ATprotectSymbol(sym_Fail_0);
sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
ATprotectSymbol(sym_Id_0);
sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
ATprotectSymbol(sym_Match_1);
sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
ATprotectSymbol(sym_Call_2);
sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
ATprotectSymbol(sym_BA_2);
sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
ATprotectSymbol(sym_CallNoArgs_1);
sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
ATprotectSymbol(sym_Choice_2);
sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
ATprotectSymbol(sym_SDefNoArgs_2);
sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
ATprotectSymbol(sym_Module_2);
sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
ATprotectSymbol(sym_Imports_1);
sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
ATprotectSymbol(sym_Strategies_1);
sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
ATprotectSymbol(sym_Signature_1);
sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
ATprotectSymbol(sym_Rules_1);
sym_Import_1 = ATmakeSymbol("Import", 1, ATfalse);
ATprotectSymbol(sym_Import_1);
sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
ATprotectSymbol(sym_RDefNoArgs_2);
sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
ATprotectSymbol(sym_Rule_3);
sym_DR__DUMMY_0 = ATmakeSymbol("DR_DUMMY", 0, ATfalse);
ATprotectSymbol(sym_DR__DUMMY_0);
sym_Symbol_2 = ATmakeSymbol("Symbol", 2, ATfalse);
ATprotectSymbol(sym_Symbol_2);
sym_SubtermConflict_3 = ATmakeSymbol("SubtermConflict", 3, ATfalse);
ATprotectSymbol(sym_SubtermConflict_3);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_SdfMainModuleFlag_0 = ATmakeSymbol("SdfMainModuleFlag", 0, ATfalse);
ATprotectSymbol(sym_SdfMainModuleFlag_0);
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("tool-doc2abox", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeInt(80);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("Summary:", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("Description:", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(sym__2, term11, term13);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("Options:", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("Authors:", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("Author:", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol(" <", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("Website:", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("Please report bugs to ", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("Version", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("Package", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("Configuration:", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("Default XTC Repository", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("Current XTC Repository", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("License:", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) ", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("You should have received a copy of the GNU General Public License \n        along with this program; if not, write to the Free Software Foundation, \n        Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is distributed in the hope that it will be useful, but \n        WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or \n        FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more \n        details.", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or\n        modify it under the terms of the GNU General Public License as published by the \n        Free Software Foundation; either version 2 of the License, or (at your option) \n        any later version.", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("You should have received a copy of the GNU Lesser General Public \n         License along with this library; if not, write to the Free Software Foundation, \n         Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is distributed in the hope that it will be useful, but \n         WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or \n         FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License \n         for more details.", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or modify \n         it under the terms of the GNU Lesser General Public License as published by the \n         Free Software Foundation; either version 2 of the License, or (at your option) \n         any later version.", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(sym_HelpString_2, term65, term65);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(sym_SdfMainModuleFlag_0);
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol(" [Main]", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("-m mod | --main mod   ", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("--main", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("Main", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("Specify main module in sdf definition", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeInt(1);
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2ast-conflicts", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(sym_Error_0);
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed. Please submit a bug report.", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("t_", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(sym_Fail_0);
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeInt(0);
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(sym_Wld_0);
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("Parenthetical", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("io-wrap", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(sym_SVar_1, term107);
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(sym_Id_0);
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("libstratego-lib", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(sym_Import_1, term113);
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("parenthesize-", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown", 0, ATtrue));
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(sym_SortNoArgs_1, term119);
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(sym_ConstType_1, term121);
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost", 0, ATtrue));
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(sym_SVar_1, term125);
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(sym_Info_0);
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(ATmakeSymbol("SDF main module is ", 0, ATtrue));
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(ATmakeSymbol("Name of output module is ", 0, ATtrue));
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(ATmakeSymbol("Main strategy is ", 0, ATtrue));
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(ATmakeSymbol("Name of signature module is ", 0, ATtrue));
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeAppl(ATmakeSymbol("Language name is ", 0, ATtrue));
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(ATmakeSymbol("Name of parenthesize rules is ", 0, ATtrue));
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeAppl(ATmakeSymbol("ModuleName", 0, ATtrue));
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(sym_DR__DUMMY_0);
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeAppl(ATmakeSymbol("89727afa8f2c27dbfb5f6779e8036998", 0, ATtrue));
ATprotect(&(term147));
term147 = term146;
ATprotect(&(term148));
term148 = (ATerm) ATmakeAppl(ATmakeSymbol("--omod <module>", 0, ATtrue));
ATprotect(&(term149));
term149 = term148;
ATprotect(&(term150));
term150 = (ATerm) ATmakeAppl(ATmakeSymbol("Name of the resulting Stratego module [basename of output]", 0, ATtrue));
ATprotect(&(term151));
term151 = term150;
ATprotect(&(term152));
term152 = (ATerm) ATmakeAppl(sym_HelpString_2, term149, term151);
ATprotect(&(term153));
term153 = term152;
ATprotect(&(term154));
term154 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
ATprotect(&(term155));
term155 = term154;
ATprotect(&(term156));
term156 = (ATerm) ATmakeAppl(sym_Critical_0);
ATprotect(&(term157));
term157 = term156;
ATprotect(&(term158));
term158 = (ATerm) ATmakeAppl(ATmakeSymbol("No Stratego module name specified. Use the --omod option to specify a module name. See also --help.", 0, ATtrue));
ATprotect(&(term159));
term159 = term158;
ATprotect(&(term160));
term160 = (ATerm) ATmakeAppl(ATmakeSymbol("MainStrategyName", 0, ATtrue));
ATprotect(&(term161));
term161 = term160;
ATprotect(&(term162));
term162 = (ATerm) ATmakeAppl(ATmakeSymbol("a22977e3d46524adbd5f269a079c3c23", 0, ATtrue));
ATprotect(&(term163));
term163 = term162;
ATprotect(&(term164));
term164 = (ATerm) ATmakeAppl(ATmakeSymbol("--main-strategy <strategy>", 0, ATtrue));
ATprotect(&(term165));
term165 = term164;
ATprotect(&(term166));
term166 = (ATerm) ATmakeAppl(ATmakeSymbol("Name of the main strategy [io-<module>])", 0, ATtrue));
ATprotect(&(term167));
term167 = term166;
ATprotect(&(term168));
term168 = (ATerm) ATmakeAppl(sym_HelpString_2, term165, term167);
ATprotect(&(term169));
term169 = term168;
ATprotect(&(term170));
term170 = (ATerm) ATmakeAppl(ATmakeSymbol("io-", 0, ATtrue));
ATprotect(&(term171));
term171 = term170;
ATprotect(&(term172));
term172 = (ATerm) ATmakeAppl(ATmakeSymbol("SignatureName", 0, ATtrue));
ATprotect(&(term173));
term173 = term172;
ATprotect(&(term174));
term174 = (ATerm) ATmakeAppl(ATmakeSymbol("d7c6891aba099727cc81ed84efe8ce1d", 0, ATtrue));
ATprotect(&(term175));
term175 = term174;
ATprotect(&(term176));
term176 = (ATerm) ATmakeAppl(ATmakeSymbol("--sig-module <module>", 0, ATtrue));
ATprotect(&(term177));
term177 = term176;
ATprotect(&(term178));
term178 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego module that contains signature for the language [<language>]", 0, ATtrue));
ATprotect(&(term179));
term179 = term178;
ATprotect(&(term180));
term180 = (ATerm) ATmakeAppl(sym_HelpString_2, term177, term179);
ATprotect(&(term181));
term181 = term180;
ATprotect(&(term182));
term182 = (ATerm) ATmakeAppl(ATmakeSymbol("LanguageName", 0, ATtrue));
ATprotect(&(term183));
term183 = term182;
ATprotect(&(term184));
term184 = (ATerm) ATmakeAppl(ATmakeSymbol("6a40484e8032a6f6a6a1654ed20133cc", 0, ATtrue));
ATprotect(&(term185));
term185 = term184;
ATprotect(&(term186));
term186 = (ATerm) ATmakeAppl(ATmakeSymbol("--lang <language>", 0, ATtrue));
ATprotect(&(term187));
term187 = term186;
ATprotect(&(term188));
term188 = (ATerm) ATmakeAppl(ATmakeSymbol("Name of the language [basename of input file]", 0, ATtrue));
ATprotect(&(term189));
term189 = term188;
ATprotect(&(term190));
term190 = (ATerm) ATmakeAppl(sym_HelpString_2, term187, term189);
ATprotect(&(term191));
term191 = term190;
ATprotect(&(term192));
term192 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
ATprotect(&(term193));
term193 = term192;
ATprotect(&(term194));
term194 = (ATerm) ATmakeAppl(ATmakeSymbol("No language name specified. You must specify the name of the language with --lang. See also --help.", 0, ATtrue));
ATprotect(&(term195));
term195 = term194;
ATprotect(&(term196));
term196 = (ATerm) ATmakeAppl(ATmakeSymbol("RulePrefix", 0, ATtrue));
ATprotect(&(term197));
term197 = term196;
ATprotect(&(term198));
term198 = (ATerm) ATmakeAppl(ATmakeSymbol("43d7cf3a59e3ed7e07aa27c942a43db0", 0, ATtrue));
ATprotect(&(term199));
term199 = term198;
ATprotect(&(term200));
term200 = (ATerm) ATmakeAppl(ATmakeSymbol("--rule-prefix <string>", 0, ATtrue));
ATprotect(&(term201));
term201 = term200;
ATprotect(&(term202));
term202 = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix to use for the parenthesize rules [<language>]", 0, ATtrue));
ATprotect(&(term203));
term203 = term202;
ATprotect(&(term204));
term204 = (ATerm) ATmakeAppl(sym_HelpString_2, term201, term203);
ATprotect(&(term205));
term205 = term204;
ATprotect(&(term206));
term206 = (ATerm) ATmakeAppl(ATmakeSymbol("Parenthesize", 0, ATtrue));
ATprotect(&(term207));
term207 = term206;
ATprotect(&(term208));
term208 = (ATerm) ATmakeAppl(sym_AutoReportBugs_0);
ATprotect(&(term209));
term209 = term208;
ATprotect(&(term210));
term210 = (ATerm) ATmakeAppl(sym_OptionUsage_0);
ATprotect(&(term211));
term211 = term210;
ATprotect(&(term212));
term212 = (ATerm) ATmakeAppl(ATmakeSymbol("Generates a Stratego module that puts Parenthetical constructors at the right places.", 0, ATtrue));
ATprotect(&(term213));
term213 = term212;
ATprotect(&(term214));
term214 = (ATerm) ATmakeAppl(sym_Summary_1, term213);
ATprotect(&(term215));
term215 = term214;
ATprotect(&(term216));
term216 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2parenthesize [OPTIONS]", 0, ATtrue));
ATprotect(&(term217));
term217 = term216;
ATprotect(&(term218));
term218 = (ATerm) ATmakeAppl(sym_Usage_1, term217);
ATprotect(&(term219));
term219 = term218;
ATprotect(&(term220));
term220 = (ATerm) ATmakeAppl(sym_CurrentXTCRepository_0);
ATprotect(&(term221));
term221 = term220;
ATprotect(&(term222));
term222 = (ATerm) ATmakeAppl(sym_DefaultXTCRepository_0);
ATprotect(&(term223));
term223 = term222;
ATprotect(&(term224));
term224 = (ATerm) ATmakeAppl(ATmakeSymbol("2004-2008", 0, ATtrue));
ATprotect(&(term225));
term225 = term224;
ATprotect(&(term226));
term226 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego Software Foundation <stratego@cs.uu.nl>", 0, ATtrue));
ATprotect(&(term227));
term227 = term226;
ATprotect(&(term228));
term228 = (ATerm) ATmakeAppl(sym_GNU__LGPL_2, term225, term227);
ATprotect(&(term229));
term229 = term228;
ATprotect(&(term230));
term230 = (ATerm) ATmakeAppl(ATmakeSymbol("Martin Bravenboer", 0, ATtrue));
ATprotect(&(term231));
term231 = term230;
ATprotect(&(term232));
term232 = (ATerm) ATmakeAppl(ATmakeSymbol("martin.bravenboer@gmail.com", 0, ATtrue));
ATprotect(&(term233));
term233 = term232;
ATprotect(&(term234));
term234 = (ATerm) ATmakeAppl(sym_Person_2, term231, term233);
ATprotect(&(term235));
term235 = term234;
ATprotect(&(term236));
term236 = (ATerm) ATmakeAppl(sym_Author_1, term235);
ATprotect(&(term237));
term237 = term236;
ATprotect(&(term238));
term238 = (ATerm) ATmakeAppl(ATmakeSymbol("sdfparenthesize", 0, ATtrue));
ATprotect(&(term239));
term239 = term238;
ATprotect(&(term240));
term240 = (ATerm) ATmakeAppl(ATmakeSymbol("Revision", 0, ATtrue));
ATprotect(&(term241));
term241 = term240;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm table_get_0_0 (StrSL sl, ATerm t);
ATerm hashtable_push_0_2 (StrSL sl, ATerm l_116, ATerm o_116, ATerm t);
ATerm hashtable_keys_0_0 (StrSL sl, ATerm t);
ATerm hashtable_get_0_1 (StrSL sl, ATerm y_115, ATerm t);
ATerm new_hashtable_0_0 (StrSL sl, ATerm t);
ATerm foldl_1_0 (StrSL sl, StrCL m_113, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm fetch_elem_1_0 (StrSL sl, StrCL z_111, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL s_111, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL t_110, ATerm t);
ATerm range_0_0 (StrSL sl, ATerm t);
ATerm make_set_0_0 (StrSL sl, ATerm t);
ATerm dr_set_rule_0_3 (StrSL sl, ATerm d_95, ATerm g_95, ATerm h_95, ATerm t);
ATerm dr_lookup_rule_0_2 (StrSL sl, ATerm u_94, ATerm v_94, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL r_86, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL c_81, ATerm t);
ATerm read_text_file_0_0 (StrSL sl, ATerm t);
ATerm remove_extension_0_0 (StrSL sl, ATerm t);
ATerm exit_0_0 (StrSL sl, ATerm t);
ATerm echo_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm split_before_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm strcat_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL c_69, StrCL d_69, StrCL e_69, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm x_64, ATerm y_64, ATerm t);
ATerm FILE_1_0 (StrSL sl, StrCL p_60, ATerm t);
ATerm xtc_location_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_5_0 (StrSL sl, StrCL x_59, StrCL y_59, StrCL z_59, StrCL a_60, StrCL b_60, ATerm t);
ATerm xtc_exit_0_0 (StrSL sl, ATerm t);
ATerm xtc_temp_files_1_0 (StrSL sl, StrCL n_59, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_transform_1_0 (StrSL sl, StrCL z_58, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL s_58, StrCL t_58, ATerm t);
ATerm xtc_transform_1_0 (StrSL sl, StrCL r_58, ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
ATerm RulePrefix_0_0 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
ATerm LanguageName_0_0 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
ATerm SignatureName_0_0 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
ATerm MainStrategyName_0_0 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
ATerm ModuleName_0_0 (StrSL sl, ATerm t);
ATerm HelpString_2_0 (StrSL sl, StrCL q_25, StrCL r_25, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm sdf2parenthesize_about_0_0 (StrSL sl, ATerm t);
ATerm sdf2parenthesize_usage_0_0 (StrSL sl, ATerm t);
ATerm guess_rule_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
ATerm rule_prefix_option_0_0 (StrSL sl, ATerm t);
ATerm guess_language_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
ATerm language_name_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
ATerm signature_name_option_0_0 (StrSL sl, ATerm t);
ATerm guess_main_strategy_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
ATerm main_strategy_name_option_0_0 (StrSL sl, ATerm t);
ATerm guess_module_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
ATerm stratego_module_option_0_0 (StrSL sl, ATerm t);
ATerm report_config_0_0 (StrSL sl, ATerm t);
ATerm innermost_module_0_0 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
ATerm Symbol2ParenTerm_0_1 (StrSL sl, ATerm t_20, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
ATerm Symbol2Term_0_0 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
ATerm Symbol2Wld_0_0 (StrSL sl, ATerm t);
ATerm index_to_subterm_id_0_0 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
ATerm generate_rule_0_2 (StrSL sl, ATerm t_19, ATerm u_19, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
ATerm core_sdf2parenthesize_0_0 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
ATerm sdf2parenthesize_0_0 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
ATerm main_sdf2parenthesize_0_0 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
ATerm xtc_abox2text_1_0 (StrSL sl, StrCL r_17, ATerm t);
ATerm get_sdf_main_module_0_0 (StrSL sl, ATerm t);
ATerm pass_sdf_main_module_0_0 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm sdf_main_module_option_1_0 (StrSL sl, StrCL b_17, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
ATerm ensure_help_string_0_0 (StrSL sl, ATerm t);
ATerm package_bugreport_0_0 (StrSL sl, ATerm t);
ATerm package_version_0_0 (StrSL sl, ATerm t);
ATerm package_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
ATerm DesugarToolDoc_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm tool_doc_0_0 (StrSL sl, ATerm t);
ATerm RulePrefix_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "RulePrefix_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL;
sl_init_var(0, g_58);
{
struct str_closure h_178 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(h_178);
if((g_58 == NULL))
{
g_58 = t;
}
else
if((g_58 != t))
goto fail85 ;
i_58 = t;
l_58 = t;
t = term197;
j_58 = t;
t = l_58;
m_58 = t;
t = (ATerm) ATinsert(ATempty, term145);
k_58 = t;
t = m_58;
t = dr_lookup_rule_0_2(sl, j_58, k_58, t);
if((t == NULL))
goto fail85 ;
h_58 = t;
t = i_58;
t = h_58;
t = fetch_elem_1_0(sl, lifted54_cl, t);
if((t == NULL))
goto fail85 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_175 = NULL,b_176 = NULL,z_175 = NULL,a_176 = NULL;
b_176 = t;
if((sl_readvar(0, sl) == NULL))
goto fail86 ;
else
{
t = sl_readvar(0, sl);
}
y_175 = t;
t = b_176;
if(match_cons(t, sym__2))
{
ATerm trm48 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm48) == ATmakeSymbol("43d7cf3a59e3ed7e07aa27c942a43db0", 0, ATtrue))))
goto fail86 ;
z_175 = ATgetArgument(t, 1);
}
else
goto fail86 ;
a_176 = t;
t = y_175;
t = a_176;
t = z_175;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
ATerm LanguageName_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "LanguageName_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL;
sl_init_var(0, f_53);
{
struct str_closure g_178 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(g_178);
if((f_53 == NULL))
{
f_53 = t;
}
else
if((f_53 != t))
goto fail83 ;
h_53 = t;
k_53 = t;
t = term183;
i_53 = t;
t = k_53;
l_53 = t;
t = (ATerm) ATinsert(ATempty, term145);
j_53 = t;
t = l_53;
t = dr_lookup_rule_0_2(sl, i_53, j_53, t);
if((t == NULL))
goto fail83 ;
g_53 = t;
t = h_53;
t = g_53;
t = fetch_elem_1_0(sl, lifted53_cl, t);
if((t == NULL))
goto fail83 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_175 = NULL,x_175 = NULL,v_175 = NULL,w_175 = NULL;
x_175 = t;
if((sl_readvar(0, sl) == NULL))
goto fail84 ;
else
{
t = sl_readvar(0, sl);
}
u_175 = t;
t = x_175;
if(match_cons(t, sym__2))
{
ATerm trm47 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm47) == ATmakeSymbol("6a40484e8032a6f6a6a1654ed20133cc", 0, ATtrue))))
goto fail84 ;
v_175 = ATgetArgument(t, 1);
}
else
goto fail84 ;
w_175 = t;
t = u_175;
t = w_175;
t = v_175;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
ATerm SignatureName_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "SignatureName_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
sl_init_var(0, k_48);
{
struct str_closure f_178 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(f_178);
if((k_48 == NULL))
{
k_48 = t;
}
else
if((k_48 != t))
goto fail81 ;
m_48 = t;
p_48 = t;
t = term173;
n_48 = t;
t = p_48;
q_48 = t;
t = (ATerm) ATinsert(ATempty, term145);
o_48 = t;
t = q_48;
t = dr_lookup_rule_0_2(sl, n_48, o_48, t);
if((t == NULL))
goto fail81 ;
l_48 = t;
t = m_48;
t = l_48;
t = fetch_elem_1_0(sl, lifted52_cl, t);
if((t == NULL))
goto fail81 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_175 = NULL,t_175 = NULL,r_175 = NULL,s_175 = NULL;
t_175 = t;
if((sl_readvar(0, sl) == NULL))
goto fail82 ;
else
{
t = sl_readvar(0, sl);
}
q_175 = t;
t = t_175;
if(match_cons(t, sym__2))
{
ATerm trm46 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm46) == ATmakeSymbol("d7c6891aba099727cc81ed84efe8ce1d", 0, ATtrue))))
goto fail82 ;
r_175 = ATgetArgument(t, 1);
}
else
goto fail82 ;
s_175 = t;
t = q_175;
t = s_175;
t = r_175;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
ATerm MainStrategyName_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "MainStrategyName_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
sl_init_var(0, d_44);
{
struct str_closure e_178 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(e_178);
if((d_44 == NULL))
{
d_44 = t;
}
else
if((d_44 != t))
goto fail79 ;
f_44 = t;
i_44 = t;
t = term161;
g_44 = t;
t = i_44;
j_44 = t;
t = (ATerm) ATinsert(ATempty, term145);
h_44 = t;
t = j_44;
t = dr_lookup_rule_0_2(sl, g_44, h_44, t);
if((t == NULL))
goto fail79 ;
e_44 = t;
t = f_44;
t = e_44;
t = fetch_elem_1_0(sl, lifted51_cl, t);
if((t == NULL))
goto fail79 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_175 = NULL,p_175 = NULL,n_175 = NULL,o_175 = NULL;
p_175 = t;
if((sl_readvar(0, sl) == NULL))
goto fail80 ;
else
{
t = sl_readvar(0, sl);
}
m_175 = t;
t = p_175;
if(match_cons(t, sym__2))
{
ATerm trm45 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm45) == ATmakeSymbol("a22977e3d46524adbd5f269a079c3c23", 0, ATtrue))))
goto fail80 ;
n_175 = ATgetArgument(t, 1);
}
else
goto fail80 ;
o_175 = t;
t = m_175;
t = o_175;
t = n_175;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
ATerm ModuleName_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ModuleName_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
sl_init_var(0, w_39);
{
struct str_closure d_178 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(d_178);
if((w_39 == NULL))
{
w_39 = t;
}
else
if((w_39 != t))
goto fail77 ;
y_39 = t;
b_40 = t;
t = term143;
z_39 = t;
t = b_40;
c_40 = t;
t = (ATerm) ATinsert(ATempty, term145);
a_40 = t;
t = c_40;
t = dr_lookup_rule_0_2(sl, z_39, a_40, t);
if((t == NULL))
goto fail77 ;
x_39 = t;
t = y_39;
t = x_39;
t = fetch_elem_1_0(sl, lifted50_cl, t);
if((t == NULL))
goto fail77 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_174 = NULL,l_175 = NULL,c_175 = NULL,d_175 = NULL;
l_175 = t;
if((sl_readvar(0, sl) == NULL))
goto fail78 ;
else
{
t = sl_readvar(0, sl);
}
z_174 = t;
t = l_175;
if(match_cons(t, sym__2))
{
ATerm trm44 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm44) == ATmakeSymbol("89727afa8f2c27dbfb5f6779e8036998", 0, ATtrue))))
goto fail78 ;
c_175 = ATgetArgument(t, 1);
}
else
goto fail78 ;
d_175 = t;
t = z_174;
t = d_175;
t = c_175;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
ATerm HelpString_2_0 (StrSL sl, StrCL q_25, StrCL r_25, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "HelpString_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_140 = NULL,a_140 = NULL,b_140 = NULL,e_140 = NULL,f_140 = NULL;
ATerm trm43;
trm43 = (ATerm) ATgetAnnotations(t);
if((trm43 == NULL))
trm43 = (ATerm) ATempty;
if(match_cons(t, sym_HelpString_2))
{
a_140 = ATgetArgument(t, 0);
b_140 = ATgetArgument(t, 1);
}
else
goto fail76 ;
c_140 = trm43;
t = a_140;
t = cl_fun(q_25)(cl_sl(q_25), t);
if((t == NULL))
goto fail76 ;
e_140 = t;
t = b_140;
t = cl_fun(r_25)(cl_sl(r_25), t);
if((t == NULL))
goto fail76 ;
f_140 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_HelpString_2, e_140, f_140), c_140);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_sdf2parenthesize_0_0(sl, t);
if((t == NULL))
goto fail75 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf2parenthesize_about_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf2parenthesize_about_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_25 = NULL,f_25 = NULL,d_25 = NULL,g_25 = NULL,e_25 = NULL,h_25 = NULL;
f_25 = t;
t = term29;
t = package_name_0_0(sl, t);
if((t == NULL))
goto fail74 ;
c_25 = t;
t = f_25;
g_25 = t;
t = term29;
t = package_version_0_0(sl, t);
if((t == NULL))
goto fail74 ;
d_25 = t;
t = g_25;
h_25 = t;
t = term29;
t = SVN_REVISION_TERM();
if((t == NULL))
goto fail74 ;
e_25 = t;
t = h_25;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Config_1, (ATerm) ATinsert(ATinsert(ATempty, term221), term223))), term229), term237), (ATerm) ATmakeAppl(sym_HSection_2, term239, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Def_2, term241, (ATerm) ATmakeAppl(sym_Paragraph_1, e_25))), (ATerm) ATmakeAppl(sym_Def_2, term35, (ATerm) ATmakeAppl(sym_Paragraph_1, d_25))), (ATerm) ATmakeAppl(sym_Def_2, term37, (ATerm) ATmakeAppl(sym_Paragraph_1, c_25)))))));
t = tool_doc_0_0(sl, t);
if((t == NULL))
goto fail74 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf2parenthesize_usage_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf2parenthesize_usage_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term209), term211), term215), term219);
t = tool_doc_0_0(sl, t);
if((t == NULL))
goto fail73 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
ATerm guess_rule_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "guess_rule_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
ATerm trm42 = t;
t = RulePrefix_0_0(sl, t);
if((t == NULL))
goto label55 ;
goto label54 ;
label55 :
t = trm42;
t = guess_language_name_0_0(sl, t);
if((t == NULL))
goto fail72 ;
else
goto label54 ;
label54 :
;
b_25 = t;
a_25 = t;
t = (ATerm) ATmakeAppl(sym__2, a_25, term207);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail72 ;
z_24 = t;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
ATerm rule_prefix_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rule_prefix_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm r_24 = NULL;
sl_init_var(0, r_24);
{
struct str_closure a_178 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(a_178);
struct str_closure b_178 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(b_178);
struct str_closure c_178 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(c_178);
t = ArgOption_3_0(sl, lifted47_cl, lifted48_cl, lifted49_cl, t);
if((t == NULL))
goto fail68 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term205;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail70 ;
s_24 = t;
w_24 = t;
t = term197;
t_24 = t;
t = w_24;
x_24 = t;
t = (ATerm) ATinsert(ATempty, term145);
u_24 = t;
t = x_24;
y_24 = t;
if((sl_readvar(0, sl) == NULL))
goto fail70 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term199, sl_readvar(0, sl));
}
v_24 = t;
t = y_24;
t = dr_set_rule_0_3(sl_up(sl), t_24, u_24, v_24, t);
if((t == NULL))
goto fail70 ;
t = s_24;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--rule-prefix", 0, ATtrue))))
goto fail69 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
ATerm guess_language_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "guess_language_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm40 = t;
t = LanguageName_0_0(sl, t);
if((t == NULL))
goto label52 ;
goto label51 ;
label52 :
t = trm40;
{
ATerm trm41 = t;
t = term193;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label53 ;
t = remove_extension_0_0(sl, t);
if((t == NULL))
goto label53 ;
goto label51 ;
label53 :
t = trm41;
{
ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
o_24 = t;
t = term157;
m_24 = t;
t = o_24;
p_24 = t;
t = term195;
n_24 = t;
t = p_24;
t = log_0_2(sl, m_24, n_24, t);
if((t == NULL))
goto fail67 ;
t = term85;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail67 ;
else
goto label51 ;
}
}
label51 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
ATerm language_name_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "language_name_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm e_24 = NULL;
sl_init_var(0, e_24);
{
struct str_closure x_177 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(x_177);
struct str_closure y_177 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(y_177);
struct str_closure z_177 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(z_177);
t = ArgOption_3_0(sl, lifted44_cl, lifted45_cl, lifted46_cl, t);
if((t == NULL))
goto fail63 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term191;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail65 ;
f_24 = t;
j_24 = t;
t = term183;
g_24 = t;
t = j_24;
k_24 = t;
t = (ATerm) ATinsert(ATempty, term145);
h_24 = t;
t = k_24;
l_24 = t;
if((sl_readvar(0, sl) == NULL))
goto fail65 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term185, sl_readvar(0, sl));
}
i_24 = t;
t = l_24;
t = dr_set_rule_0_3(sl_up(sl), g_24, h_24, i_24, t);
if((t == NULL))
goto fail65 ;
t = f_24;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--lang", 0, ATtrue))))
goto fail64 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
ATerm signature_name_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "signature_name_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm v_23 = NULL;
sl_init_var(0, v_23);
{
struct str_closure u_177 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(u_177);
struct str_closure v_177 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(v_177);
struct str_closure w_177 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(w_177);
t = ArgOption_3_0(sl, lifted41_cl, lifted42_cl, lifted43_cl, t);
if((t == NULL))
goto fail59 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term181;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail61 ;
w_23 = t;
a_24 = t;
t = term173;
x_23 = t;
t = a_24;
b_24 = t;
t = (ATerm) ATinsert(ATempty, term145);
y_23 = t;
t = b_24;
c_24 = t;
if((sl_readvar(0, sl) == NULL))
goto fail61 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term175, sl_readvar(0, sl));
}
z_23 = t;
t = c_24;
t = dr_set_rule_0_3(sl_up(sl), x_23, y_23, z_23, t);
if((t == NULL))
goto fail61 ;
t = w_23;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--sig-module", 0, ATtrue))))
goto fail60 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
ATerm guess_main_strategy_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "guess_main_strategy_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_23 = NULL,t_23 = NULL;
ATerm trm39 = t;
t = MainStrategyName_0_0(sl, t);
if((t == NULL))
goto label50 ;
goto label49 ;
label50 :
t = trm39;
t = guess_module_name_0_0(sl, t);
if((t == NULL))
goto fail58 ;
s_23 = t;
t = (ATerm) ATmakeAppl(sym__2, term171, s_23);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail58 ;
t_23 = t;
goto label49 ;
label49 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_strategy_name_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_strategy_name_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm k_23 = NULL;
sl_init_var(0, k_23);
{
struct str_closure r_177 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(r_177);
struct str_closure s_177 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(s_177);
struct str_closure t_177 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(t_177);
t = ArgOption_3_0(sl, lifted38_cl, lifted39_cl, lifted40_cl, t);
if((t == NULL))
goto fail54 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term169;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail56 ;
l_23 = t;
p_23 = t;
t = term161;
m_23 = t;
t = p_23;
q_23 = t;
t = (ATerm) ATinsert(ATempty, term145);
n_23 = t;
t = q_23;
r_23 = t;
if((sl_readvar(0, sl) == NULL))
goto fail56 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term163, sl_readvar(0, sl));
}
o_23 = t;
t = r_23;
t = dr_set_rule_0_3(sl_up(sl), m_23, n_23, o_23, t);
if((t == NULL))
goto fail56 ;
t = l_23;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--main-strategy", 0, ATtrue))))
goto fail55 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
ATerm guess_module_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "guess_module_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm37 = t;
t = ModuleName_0_0(sl, t);
if((t == NULL))
goto label47 ;
goto label46 ;
label47 :
t = trm37;
{
ATerm trm38 = t;
t = term155;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label48 ;
t = remove_extension_0_0(sl, t);
if((t == NULL))
goto label48 ;
goto label46 ;
label48 :
t = trm38;
{
ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
h_23 = t;
t = term157;
f_23 = t;
t = h_23;
i_23 = t;
t = term159;
g_23 = t;
t = i_23;
t = log_0_2(sl, f_23, g_23, t);
if((t == NULL))
goto fail53 ;
t = term85;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail53 ;
else
goto label46 ;
}
}
label46 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
ATerm stratego_module_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "stratego_module_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm x_22 = NULL;
sl_init_var(0, x_22);
{
struct str_closure o_177 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(o_177);
struct str_closure p_177 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(p_177);
struct str_closure q_177 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(q_177);
t = ArgOption_3_0(sl, lifted35_cl, lifted36_cl, lifted37_cl, t);
if((t == NULL))
goto fail49 ;
}
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
t = term153;
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
ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail51 ;
y_22 = t;
c_23 = t;
t = term143;
z_22 = t;
t = c_23;
d_23 = t;
t = (ATerm) ATinsert(ATempty, term145);
a_23 = t;
t = d_23;
e_23 = t;
if((sl_readvar(0, sl) == NULL))
goto fail51 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term147, sl_readvar(0, sl));
}
b_23 = t;
t = e_23;
t = dr_set_rule_0_3(sl_up(sl), z_22, a_23, b_23, t);
if((t == NULL))
goto fail51 ;
t = y_22;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--omod", 0, ATtrue))))
goto fail50 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
ATerm report_config_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "report_config_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
o_21 = t;
t = term129;
m_21 = t;
t = o_21;
p_21 = t;
r_21 = t;
t = get_sdf_main_module_0_0(sl, t);
if((t == NULL))
goto fail48 ;
q_21 = t;
t = r_21;
t = (ATerm) ATmakeAppl(sym__2, term131, q_21);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail48 ;
n_21 = t;
t = p_21;
t = log_0_2(sl, m_21, n_21, t);
if((t == NULL))
goto fail48 ;
u_21 = t;
t = term129;
s_21 = t;
t = u_21;
v_21 = t;
x_21 = t;
t = guess_module_name_0_0(sl, t);
if((t == NULL))
goto fail48 ;
w_21 = t;
t = x_21;
t = (ATerm) ATmakeAppl(sym__2, term133, w_21);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail48 ;
t_21 = t;
t = v_21;
t = log_0_2(sl, s_21, t_21, t);
if((t == NULL))
goto fail48 ;
a_22 = t;
t = term129;
y_21 = t;
t = a_22;
b_22 = t;
d_22 = t;
t = guess_main_strategy_name_0_0(sl, t);
if((t == NULL))
goto fail48 ;
c_22 = t;
t = d_22;
t = (ATerm) ATmakeAppl(sym__2, term135, c_22);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail48 ;
z_21 = t;
t = b_22;
t = log_0_2(sl, y_21, z_21, t);
if((t == NULL))
goto fail48 ;
g_22 = t;
t = term129;
e_22 = t;
t = g_22;
h_22 = t;
j_22 = t;
{
ATerm trm36 = t;
t = SignatureName_0_0(sl, t);
if((t == NULL))
goto label45 ;
goto label44 ;
label45 :
t = trm36;
t = guess_language_name_0_0(sl, t);
if((t == NULL))
goto fail48 ;
else
goto label44 ;
label44 :
;
i_22 = t;
t = j_22;
t = (ATerm) ATmakeAppl(sym__2, term137, i_22);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail48 ;
f_22 = t;
t = h_22;
t = log_0_2(sl, e_22, f_22, t);
if((t == NULL))
goto fail48 ;
m_22 = t;
t = term129;
k_22 = t;
t = m_22;
n_22 = t;
p_22 = t;
t = guess_language_name_0_0(sl, t);
if((t == NULL))
goto fail48 ;
o_22 = t;
t = p_22;
t = (ATerm) ATmakeAppl(sym__2, term139, o_22);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail48 ;
l_22 = t;
t = n_22;
t = log_0_2(sl, k_22, l_22, t);
if((t == NULL))
goto fail48 ;
s_22 = t;
t = term129;
q_22 = t;
t = s_22;
t_22 = t;
v_22 = t;
t = guess_rule_name_0_0(sl, t);
if((t == NULL))
goto fail48 ;
u_22 = t;
t = v_22;
t = (ATerm) ATmakeAppl(sym__2, term141, u_22);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail48 ;
r_22 = t;
t = t_22;
t = log_0_2(sl, q_22, r_22, t);
if((t == NULL))
goto fail48 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
ATerm innermost_module_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "innermost_module_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm32 = t;
ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label41 ;
l_21 = t;
t = guess_module_name_0_0(sl, t);
if((t == NULL))
goto label41 ;
j_21 = t;
t = guess_main_strategy_name_0_0(sl, t);
if((t == NULL))
goto label41 ;
k_21 = t;
t = l_21;
t = (ATerm) ATmakeAppl(sym_Module_2, j_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefNoArgs_2, k_21, (ATerm) ATmakeAppl(sym_Call_2, term109, (ATerm) ATinsert(ATempty, term111)))))), (ATerm) ATmakeAppl(sym_Imports_1, (ATerm) ATinsert(ATempty, term115))));
goto label40 ;
label41 :
t = trm32;
{
ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
b_21 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm33 = ATgetFirst((ATermList) t);
ATerm trm34 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail47 ;
i_21 = t;
t = guess_module_name_0_0(sl, t);
if((t == NULL))
goto fail47 ;
c_21 = t;
{
ATerm trm35 = t;
t = SignatureName_0_0(sl, t);
if((t == NULL))
goto label43 ;
goto label42 ;
label43 :
t = trm35;
t = guess_language_name_0_0(sl, t);
if((t == NULL))
goto fail47 ;
else
goto label42 ;
label42 :
;
d_21 = t;
t = guess_main_strategy_name_0_0(sl, t);
if((t == NULL))
goto fail47 ;
e_21 = t;
t = guess_language_name_0_0(sl, t);
if((t == NULL))
goto fail47 ;
f_21 = t;
t = (ATerm) ATmakeAppl(sym__2, term117, f_21);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail47 ;
g_21 = t;
t = guess_rule_name_0_0(sl, t);
if((t == NULL))
goto fail47 ;
h_21 = t;
t = i_21;
t = (ATerm) ATmakeAppl(sym_Module_2, c_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_OpDecl_2, term105, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term123), term123))))))), (ATerm) ATmakeAppl(sym_Rules_1, b_21)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefNoArgs_2, g_21, (ATerm) ATmakeAppl(sym_Call_2, term127, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, h_21)))))), (ATerm) ATmakeAppl(sym_SDefNoArgs_2, e_21, (ATerm) ATmakeAppl(sym_Call_2, term109, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, g_21)))))))), (ATerm) ATmakeAppl(sym_Imports_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Import_1, d_21)), term115))));
goto label40 ;
}
}
label40 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
ATerm Symbol2ParenTerm_0_1 (StrSL sl, ATerm t_20, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Symbol2ParenTerm_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, t_20);
{
ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,a_21 = NULL;
if(match_cons(t, sym_Symbol_2))
{
u_20 = ATgetArgument(t, 0);
v_20 = ATgetArgument(t, 1);
}
else
goto fail45 ;
a_21 = t;
t = (ATerm) ATmakeAppl(sym__2, term101, v_20);
t = range_0_0(sl, t);
if((t == NULL))
goto fail45 ;
{
struct str_closure n_177 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(n_177);
t = map_1_0(sl, lifted34_cl, t);
if((t == NULL))
goto fail45 ;
w_20 = t;
t = a_21;
t = (ATerm) ATmakeAppl(sym_NoAnnoList_1, (ATerm) ATmakeAppl(sym_Op_2, u_20, w_20));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm31 = t;
ATerm x_20 = NULL;
x_20 = t;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto label39 ;
{
ATerm y_20 = NULL,x_174 = NULL,y_174 = NULL;
y_174 = t;
t = int_to_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail46 ;
x_174 = t;
t = y_174;
t = (ATerm) ATmakeAppl(sym__2, term97, x_174);
t = strcat_0_0(sl_up(sl), t);
if((t == NULL))
goto fail46 ;
y_20 = t;
t = (ATerm) ATmakeAppl(sym_NoAnnoList_1, (ATerm) ATmakeAppl(sym_Op_2, term105, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_20))));
goto label38 ;
}
label39 :
t = trm31;
{
ATerm z_20 = NULL;
t = index_to_subterm_id_0_0(sl_up(sl), t);
if((t == NULL))
goto fail46 ;
z_20 = t;
t = (ATerm) ATmakeAppl(sym_Var_1, z_20);
goto label38 ;
}
label38 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
ATerm Symbol2Term_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Symbol2Term_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,s_20 = NULL;
if(match_cons(t, sym_Symbol_2))
{
o_20 = ATgetArgument(t, 0);
p_20 = ATgetArgument(t, 1);
}
else
goto fail43 ;
s_20 = t;
t = (ATerm) ATmakeAppl(sym__2, term101, p_20);
t = range_0_0(sl, t);
if((t == NULL))
goto fail43 ;
{
struct str_closure m_177 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(m_177);
t = map_1_0(sl, lifted33_cl, t);
if((t == NULL))
goto fail43 ;
q_20 = t;
t = s_20;
t = (ATerm) ATmakeAppl(sym_NoAnnoList_1, (ATerm) ATmakeAppl(sym_Op_2, o_20, q_20));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_20 = NULL,v_174 = NULL,w_174 = NULL;
w_174 = t;
t = int_to_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail44 ;
v_174 = t;
t = w_174;
t = (ATerm) ATmakeAppl(sym__2, term97, v_174);
t = strcat_0_0(sl_up(sl), t);
if((t == NULL))
goto fail44 ;
r_20 = t;
t = (ATerm) ATmakeAppl(sym_Var_1, r_20);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
ATerm Symbol2Wld_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Symbol2Wld_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
if(match_cons(t, sym_Symbol_2))
{
k_20 = ATgetArgument(t, 0);
l_20 = ATgetArgument(t, 1);
}
else
goto fail41 ;
n_20 = t;
t = (ATerm) ATmakeAppl(sym__2, term101, l_20);
t = range_0_0(sl, t);
if((t == NULL))
goto fail41 ;
{
struct str_closure l_177 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(l_177);
t = map_1_0(sl, lifted32_cl, t);
if((t == NULL))
goto fail41 ;
m_20 = t;
t = n_20;
t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_NoAnnoList_1, (ATerm) ATmakeAppl(sym_Op_2, k_20, m_20)));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term103;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
ATerm index_to_subterm_id_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "index_to_subterm_id_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_20 = NULL,j_20 = NULL;
j_20 = t;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail40 ;
i_20 = t;
t = j_20;
t = (ATerm) ATmakeAppl(sym__2, term97, i_20);
t = strcat_0_0(sl, t);
if((t == NULL))
goto fail40 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
ATerm generate_rule_0_2 (StrSL sl, ATerm t_19, ATerm u_19, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "generate_rule_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,t_174 = NULL,u_174 = NULL;
if(match_cons(t, sym__2))
{
y_19 = ATgetArgument(t, 0);
z_19 = ATgetArgument(t, 1);
}
else
goto fail38 ;
d_20 = t;
t = y_19;
t = Symbol2Term_0_0(sl, t);
if((t == NULL))
goto fail38 ;
v_19 = t;
t = y_19;
t = Symbol2ParenTerm_0_1(sl, z_19, t);
if((t == NULL))
goto fail38 ;
w_19 = t;
t = z_19;
u_174 = t;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail38 ;
t_174 = t;
t = u_174;
t = (ATerm) ATmakeAppl(sym__2, term97, t_174);
t = strcat_0_0(sl, t);
if((t == NULL))
goto fail38 ;
x_19 = t;
t = u_19;
f_20 = t;
t = (ATerm) ATmakeAppl(sym__2, y_19, z_19);
e_20 = t;
t = f_20;
t = hashtable_get_0_1(sl, e_20, t);
if((t == NULL))
goto fail38 ;
t = make_set_0_0(sl, t);
if((t == NULL))
goto fail38 ;
{
struct str_closure j_177 = { &(Symbol2Wld_0_0) , sl };
StrCL lifted30_cl = &(j_177);
t = map_1_0(sl, lifted30_cl, t);
if((t == NULL))
goto fail38 ;
h_20 = t;
g_20 = t;
t = (ATerm) ATmakeAppl(sym__2, g_20, term99);
{
struct str_closure k_177 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(k_177);
t = foldl_1_0(sl, lifted31_cl, t);
if((t == NULL))
goto fail38 ;
a_20 = t;
t = d_20;
t = (ATerm) ATmakeAppl(sym_RDefNoArgs_2, t_19, (ATerm) ATmakeAppl(sym_Rule_3, v_19, w_19, (ATerm) ATmakeAppl(sym_BA_2, a_20, (ATerm) ATmakeAppl(sym_Var_1, x_19))));
}
}
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
ATerm b_20 = NULL,c_20 = NULL;
if(match_cons(t, sym__2))
{
b_20 = ATgetArgument(t, 0);
c_20 = ATgetArgument(t, 1);
}
else
goto fail39 ;
t = (ATerm) ATmakeAppl(sym_Choice_2, b_20, c_20);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
ATerm core_sdf2parenthesize_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "core_sdf2parenthesize_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
sl_init_var(0, k_19);
sl_init_var(1, l_19);
m_19 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail35 ;
if((l_19 == NULL))
{
l_19 = t;
}
else
if((l_19 != t))
goto fail35 ;
t = m_19;
n_19 = t;
t = guess_rule_name_0_0(sl, t);
if((t == NULL))
goto fail35 ;
if((k_19 == NULL))
{
k_19 = t;
}
else
if((k_19 != t))
goto fail35 ;
t = n_19;
{
struct str_closure e_177 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(e_177);
t = map_1_0(sl, lifted28_cl, t);
if((t == NULL))
goto fail35 ;
if((l_19 == NULL))
goto fail35 ;
else
{
t = l_19;
}
t = hashtable_keys_0_0(sl, t);
if((t == NULL))
goto fail35 ;
{
struct str_closure i_177 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(i_177);
t = map_1_0(sl, lifted29_cl, t);
if((t == NULL))
goto fail35 ;
t = innermost_module_0_0(sl, t);
if((t == NULL))
goto fail35 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail37 ;
else
{
t = generate_rule_0_2(sl_up(sl), sl_readvar(0, sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail37 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
if(match_cons(t, sym_SubtermConflict_3))
{
o_19 = ATgetArgument(t, 0);
q_19 = ATgetArgument(t, 1);
p_19 = ATgetArgument(t, 2);
}
else
goto fail36 ;
if((sl_readvar(1, sl) == NULL))
goto fail36 ;
else
{
t = sl_readvar(1, sl);
}
s_19 = t;
t = (ATerm) ATmakeAppl(sym__2, o_19, q_19);
r_19 = t;
t = s_19;
t = hashtable_push_0_2(sl_up(sl), r_19, p_19, t);
if((t == NULL))
goto fail36 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf2parenthesize_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf2parenthesize_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_176 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(z_176);
struct str_closure a_177 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(a_177);
struct str_closure b_177 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(b_177);
struct str_closure c_177 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(c_177);
t = xtc_transform_2_0(sl, lifted23_cl, lifted24_cl, t);
if((t == NULL))
goto fail29 ;
{
struct str_closure d_177 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(d_177);
t = xtc_io_transform_1_0(sl, lifted25_cl, t);
if((t == NULL))
goto fail29 ;
t = xtc_transform_2_0(sl, lifted26_cl, lifted27_cl, t);
if((t == NULL))
goto fail29 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm30 = t;
t = core_sdf2parenthesize_0_0(sl_up(sl), t);
if((t == NULL))
goto label37 ;
goto label36 ;
label37 :
t = trm30;
{
ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
g_19 = t;
t = term93;
e_19 = t;
t = g_19;
h_19 = t;
t = term95;
f_19 = t;
t = h_19;
t = log_0_2(sl_up(sl), e_19, f_19, t);
if((t == NULL))
goto fail34 ;
goto fail34 ;
}
label36 :
;
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
ATerm a_19 = NULL,c_19 = NULL,b_19 = NULL,d_19 = NULL;
c_19 = t;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail33 ;
a_19 = t;
t = c_19;
d_19 = t;
t = pass_sdf_main_module_0_0(sl_up(sl), t);
if((t == NULL))
goto fail33 ;
b_19 = t;
t = d_19;
t = (ATerm) ATmakeAppl(sym__2, a_19, b_19);
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail33 ;
}
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
t = term91;
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
{
ATerm i_19 = NULL,j_19 = NULL;
j_19 = t;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail31 ;
i_19 = t;
t = j_19;
{
ATerm trm29;
trm29 = CheckATermList(i_19);
if((trm29 == NULL))
goto fail31 ;
t = (ATerm) ATinsert((ATermList)trm29, term89);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term87;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_sdf2parenthesize_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_sdf2parenthesize_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_176 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(u_176);
struct str_closure v_176 = { &(sdf2parenthesize_usage_0_0) , sl };
StrCL lifted19_cl = &(v_176);
struct str_closure w_176 = { &(sdf2parenthesize_about_0_0) , sl };
StrCL lifted20_cl = &(w_176);
struct str_closure x_176 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(x_176);
struct str_closure y_176 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(y_176);
t = xtc_io_wrap_5_0(sl, lifted17_cl, lifted19_cl, lifted20_cl, lifted21_cl, lifted22_cl, t);
if((t == NULL))
goto fail24 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm28 = t;
t = report_config_0_0(sl_up(sl), t);
if((t == NULL))
goto label35 ;
t = sdf2parenthesize_0_0(sl_up(sl), t);
if((t == NULL))
goto label35 ;
goto label34 ;
label35 :
t = trm28;
t = term85;
t = xtc_exit_0_0(sl_up(sl), t);
if((t == NULL))
goto fail28 ;
else
goto label34 ;
label34 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
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
ATerm trm23 = t;
struct str_closure t_176 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(t_176);
t = sdf_main_module_option_1_0(sl_up(sl), lifted18_cl, t);
if((t == NULL))
goto label29 ;
goto label28 ;
label29 :
t = trm23;
{
ATerm trm24 = t;
t = stratego_module_option_0_0(sl_up(sl), t);
if((t == NULL))
goto label30 ;
goto label28 ;
label30 :
t = trm24;
{
ATerm trm25 = t;
t = main_strategy_name_option_0_0(sl_up(sl), t);
if((t == NULL))
goto label31 ;
goto label28 ;
label31 :
t = trm25;
{
ATerm trm26 = t;
t = signature_name_option_0_0(sl_up(sl), t);
if((t == NULL))
goto label32 ;
goto label28 ;
label32 :
t = trm26;
{
ATerm trm27 = t;
t = language_name_option_0_0(sl_up(sl), t);
if((t == NULL))
goto label33 ;
goto label28 ;
label33 :
t = trm27;
t = rule_prefix_option_0_0(sl_up(sl), t);
if((t == NULL))
goto fail25 ;
else
goto label28 ;
}
}
}
}
label28 :
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
t = term83;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_abox2text_1_0 (StrSL sl, StrCL r_17, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_abox2text_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, r_17);
{
struct str_closure r_176 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(r_176);
struct str_closure s_176 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(s_176);
t = xtc_transform_2_0(sl, lifted15_cl, lifted16_cl, t);
if((t == NULL))
goto fail21 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_17 = NULL,u_17 = NULL,t_17 = NULL,v_17 = NULL;
u_17 = t;
t = term29;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail23 ;
t = int_to_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail23 ;
s_17 = t;
t = u_17;
v_17 = t;
t = term29;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail23 ;
t_17 = t;
t = v_17;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, s_17), term81), t_17);
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
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term79;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_sdf_main_module_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_sdf_main_module_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm22 = t;
t = term69;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label27 ;
goto label26 ;
label27 :
t = trm22;
t = term77;
goto label26 ;
label26 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm pass_sdf_main_module_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pass_sdf_main_module_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_17 = NULL,h_17 = NULL;
h_17 = t;
t = get_sdf_main_module_0_0(sl, t);
if((t == NULL))
goto fail19 ;
g_17 = t;
t = h_17;
t = (ATerm) ATinsert(ATinsert(ATempty, g_17), term75);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf_main_module_option_1_0 (StrSL sl, StrCL b_17, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf_main_module_option_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, b_17);
{
struct str_closure o_176 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(o_176);
struct str_closure p_176 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(p_176);
struct str_closure q_176 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(q_176);
t = ArgOption_3_0(sl, lifted12_cl, lifted13_cl, lifted14_cl, t);
if((t == NULL))
goto fail15 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_17 = NULL,f_17 = NULL;
f_17 = t;
t = term29;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail18 ;
e_17 = t;
t = f_17;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term71), e_17), term73);
t = concat_strings_0_0(sl_up(sl), t);
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
ATerm a_17 = NULL,c_17 = NULL,d_17 = NULL;
a_17 = t;
d_17 = t;
c_17 = t;
t = (ATerm) ATmakeAppl(sym__2, term69, c_17);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail17 ;
t = a_17;
}
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
{
ATerm trm21 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-m", 0, ATtrue))))
goto label25 ;
goto label24 ;
label25 :
t = trm21;
if((ATgetSymbol(t) == ATmakeSymbol("--main", 0, ATtrue)))
goto label24 ;
else
goto fail16 ;
label24 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm ensure_help_string_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ensure_help_string_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm18 = t;
struct str_closure m_176 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(m_176);
struct str_closure n_176 = { &(is_string_0_0) , sl };
StrCL lifted11_cl = &(n_176);
t = HelpString_2_0(sl, lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto label20 ;
goto label19 ;
label20 :
t = trm18;
{
ATerm trm20 = t;
ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
w_16 = t;
z_16 = t;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label23 ;
t = (ATerm) ATmakeAppl(sym__2, w_16, term63);
t = split_before_0_0(sl, t);
if((t == NULL))
goto label23 ;
if(match_cons(t, sym__2))
{
x_16 = ATgetArgument(t, 0);
y_16 = ATgetArgument(t, 1);
}
else
goto label23 ;
t = z_16;
t = (ATerm) ATmakeAppl(sym_HelpString_2, x_16, y_16);
goto label19 ;
label23 :
t = trm20;
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto fail13 ;
t = term67;
goto label19 ;
}
label19 :
;
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
{
ATerm trm19 = t;
t = is_string_0_0(sl_up(sl), t);
if((t == NULL))
goto label22 ;
goto label21 ;
label22 :
t = trm19;
t = is_list_0_0(sl_up(sl), t);
if((t == NULL))
goto fail14 ;
else
goto label21 ;
label21 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
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
goto fail12 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
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
goto fail11 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
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
goto fail10 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm DesugarToolDoc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "DesugarToolDoc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
if(match_cons(t, sym_Usage_1))
{
t_16 = ATgetArgument(t, 0);
}
else
goto label1 ;
v_16 = t;
t = (ATerm) ATmakeAppl(sym__2, term5, t_16);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label1 ;
u_16 = t;
t = v_16;
t = (ATerm) ATmakeAppl(sym_Line_1, u_16);
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
ATerm s_16 = NULL;
if(match_cons(t, sym_Summary_1))
{
s_16 = ATgetArgument(t, 0);
}
else
goto label2 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Paragraph_1, s_16)));
goto label0 ;
label2 :
t = trm1;
{
ATerm trm2 = t;
ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
if(match_cons(t, sym_Description_1))
{
n_16 = ATgetArgument(t, 0);
}
else
goto label3 ;
p_16 = t;
t = n_16;
{
struct str_closure i_176 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(i_176);
t = map_1_0(sl, lifted6_cl, t);
if((t == NULL))
goto label3 ;
o_16 = t;
t = p_16;
t = (ATerm) ATmakeAppl(sym_HSection_2, term9, o_16);
}
goto label0 ;
label3 :
t = trm2;
{
ATerm trm3 = t;
ATerm l_16 = NULL,m_16 = NULL;
if(!(match_cons(t, sym_OptionUsage_0)))
goto label4 ;
m_16 = t;
t = term15;
t = table_get_0_0(sl, t);
if((t == NULL))
goto label4 ;
t = reverse_0_0(sl, t);
if((t == NULL))
goto label4 ;
{
struct str_closure j_176 = { &(ensure_help_string_0_0) , sl };
StrCL lifted7_cl = &(j_176);
t = map_1_0(sl, lifted7_cl, t);
if((t == NULL))
goto label4 ;
{
struct str_closure k_176 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(k_176);
t = filter_1_0(sl, lifted8_cl, t);
if((t == NULL))
goto label4 ;
l_16 = t;
t = m_16;
t = (ATerm) ATmakeAppl(sym_HSection_2, term17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, l_16)));
}
}
goto label0 ;
label4 :
t = trm3;
{
ATerm trm4 = t;
ATerm i_16 = NULL;
if(match_cons(t, sym_Authors_1))
{
i_16 = ATgetArgument(t, 0);
}
else
goto label5 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ItemList_1, i_16)));
goto label0 ;
label5 :
t = trm4;
{
ATerm trm5 = t;
ATerm h_16 = NULL;
if(match_cons(t, sym_Author_1))
{
h_16 = ATgetArgument(t, 0);
}
else
goto label6 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ItemList_1, (ATerm) ATinsert(ATempty, h_16))));
goto label0 ;
label6 :
t = trm5;
{
ATerm trm6 = t;
ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
if(match_cons(t, sym_Person_2))
{
d_16 = ATgetArgument(t, 0);
e_16 = ATgetArgument(t, 1);
}
else
goto label7 ;
g_16 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term23), e_16), term25), d_16);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label7 ;
f_16 = t;
t = g_16;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, f_16);
goto label0 ;
label7 :
t = trm6;
{
ATerm trm7 = t;
ATerm c_16 = NULL;
if(match_cons(t, sym_WebHome_1))
{
c_16 = ATgetArgument(t, 0);
}
else
goto label8 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Line_1, c_16)));
goto label0 ;
label8 :
t = trm7;
{
ATerm trm8 = t;
ATerm a_16 = NULL,b_16 = NULL;
if(!(match_cons(t, sym_AutoReportBugs_0)))
goto label9 ;
b_16 = t;
t = term29;
t = package_bugreport_0_0(sl, t);
if((t == NULL))
goto label9 ;
a_16 = t;
t = b_16;
t = (ATerm) ATmakeAppl(sym_ReportBugs_1, a_16);
goto label0 ;
label9 :
t = trm8;
{
ATerm trm9 = t;
ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
if(match_cons(t, sym_ReportBugs_1))
{
x_15 = ATgetArgument(t, 0);
}
else
goto label10 ;
z_15 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, x_15), term31);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label10 ;
y_15 = t;
t = z_15;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, y_15);
goto label0 ;
label10 :
t = trm9;
{
ATerm trm10 = t;
ATerm r_15 = NULL,u_15 = NULL,s_15 = NULL,v_15 = NULL,t_15 = NULL,w_15 = NULL;
if(!(match_cons(t, sym_AutoProgram_0)))
goto label11 ;
u_15 = t;
t = term33;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label11 ;
r_15 = t;
t = u_15;
v_15 = t;
t = term29;
t = package_name_0_0(sl, t);
if((t == NULL))
goto label11 ;
s_15 = t;
t = v_15;
w_15 = t;
t = term29;
t = package_version_0_0(sl, t);
if((t == NULL))
goto label11 ;
t_15 = t;
t = w_15;
t = (ATerm) ATmakeAppl(sym_Program_3, r_15, s_15, t_15);
goto label0 ;
label11 :
t = trm10;
{
ATerm trm11 = t;
ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
if(match_cons(t, sym_Program_3))
{
o_15 = ATgetArgument(t, 0);
p_15 = ATgetArgument(t, 1);
q_15 = ATgetArgument(t, 2);
}
else
goto label12 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, o_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Def_2, term35, (ATerm) ATmakeAppl(sym_Paragraph_1, q_15))), (ATerm) ATmakeAppl(sym_Def_2, term37, (ATerm) ATmakeAppl(sym_Paragraph_1, p_15))))));
goto label0 ;
label12 :
t = trm11;
{
ATerm trm12 = t;
ATerm n_15 = NULL;
if(match_cons(t, sym_Config_1))
{
n_15 = ATgetArgument(t, 0);
}
else
goto label13 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term39, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, n_15)));
goto label0 ;
label13 :
t = trm12;
{
ATerm trm13 = t;
ATerm l_15 = NULL,m_15 = NULL;
if(!(match_cons(t, sym_DefaultXTCRepository_0)))
goto label14 ;
m_15 = t;
t = term29;
t = GetInternalDefaultXtcRepository_0_0(sl, t);
if((t == NULL))
goto label14 ;
l_15 = t;
t = m_15;
t = (ATerm) ATmakeAppl(sym_ConfigItem_2, term41, l_15);
goto label0 ;
label14 :
t = trm13;
{
ATerm trm14 = t;
ATerm j_15 = NULL,k_15 = NULL;
if(!(match_cons(t, sym_CurrentXTCRepository_0)))
goto label15 ;
k_15 = t;
t = term29;
t = xtc_location_0_0(sl, t);
if((t == NULL))
goto label15 ;
j_15 = t;
t = k_15;
t = (ATerm) ATmakeAppl(sym_ConfigItem_2, term43, j_15);
goto label0 ;
label15 :
t = trm14;
{
ATerm trm15 = t;
ATerm h_15 = NULL,i_15 = NULL;
if(match_cons(t, sym_ConfigItem_2))
{
h_15 = ATgetArgument(t, 0);
i_15 = ATgetArgument(t, 1);
}
else
goto label16 ;
t = (ATerm) ATmakeAppl(sym_Def_2, h_15, (ATerm) ATmakeAppl(sym_Line_1, i_15));
goto label0 ;
label16 :
t = trm15;
{
ATerm trm16 = t;
ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
if(match_cons(t, sym_License_1))
{
c_15 = ATgetArgument(t, 0);
}
else
goto label17 ;
e_15 = t;
t = c_15;
{
struct str_closure l_176 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(l_176);
t = map_1_0(sl, lifted9_cl, t);
if((t == NULL))
goto label17 ;
d_15 = t;
t = e_15;
t = (ATerm) ATmakeAppl(sym_HSection_2, term45, d_15);
}
goto label0 ;
label17 :
t = trm16;
{
ATerm trm17 = t;
ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
if(match_cons(t, sym_GNU__GPL_2))
{
y_14 = ATgetArgument(t, 0);
z_14 = ATgetArgument(t, 1);
}
else
goto label18 ;
b_15 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_14), term47), y_14), term49);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label18 ;
a_15 = t;
t = b_15;
t = (ATerm) ATmakeAppl(sym_License_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term51), term53), term55), a_15));
goto label0 ;
label18 :
t = trm17;
{
ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
if(match_cons(t, sym_GNU__LGPL_2))
{
u_14 = ATgetArgument(t, 0);
v_14 = ATgetArgument(t, 1);
}
else
goto fail6 ;
x_14 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_14), term47), u_14), term49);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail6 ;
w_14 = t;
t = x_14;
t = (ATerm) ATmakeAppl(sym_License_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term57), term59), term61), w_14));
goto label0 ;
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
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_15 = NULL,g_15 = NULL;
g_15 = t;
f_15 = t;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, f_15);
}
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
ATerm j_16 = NULL,k_16 = NULL;
if(match_cons(t, sym_HelpString_2))
{
j_16 = ATgetArgument(t, 0);
k_16 = ATgetArgument(t, 1);
}
else
goto fail8 ;
t = (ATerm) ATmakeAppl(sym_Def_2, j_16, (ATerm) ATmakeAppl(sym_Paragraph_1, k_16));
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
ATerm q_16 = NULL,r_16 = NULL;
r_16 = t;
q_16 = t;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, q_16);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm tool_doc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tool_doc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_14 = NULL;
s_14 = t;
{
struct str_closure h_176 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(h_176);
t = xtc_temp_files_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
t = s_14;
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
ATerm t_14 = NULL;
struct str_closure d_176 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(d_176);
t = topdown_1_0(sl_up(sl), lifted1_cl, t);
if((t == NULL))
goto fail1 ;
t = write_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail1 ;
{
struct str_closure e_176 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(e_176);
t = xtc_transform_1_0(sl_up(sl), lifted3_cl, t);
if((t == NULL))
goto fail1 ;
{
struct str_closure f_176 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(f_176);
t = xtc_abox2text_1_0(sl_up(sl), lifted4_cl, t);
if((t == NULL))
goto fail1 ;
t_14 = t;
{
struct str_closure g_176 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(g_176);
t = FILE_1_0(sl_up(sl), lifted5_cl, t);
if((t == NULL))
goto fail1 ;
t = t_14;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = read_text_file_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail5 ;
t = echo_0_0(sl_up(sl_up(sl)), t);
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
t = term3;
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
t = term1;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_176 = { &(DesugarToolDoc_0_0) , sl_up(sl_up(sl)) };
StrCL lifted2_cl = &(c_176);
t = repeat_1_0(sl_up(sl_up(sl)), lifted2_cl, t);
if((t == NULL))
goto fail2 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 130));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(table_get_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_get_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_push_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_push_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_keys_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_keys_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_get_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_get_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(new_hashtable_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("new_hashtable_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(foldl_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("foldl_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(range_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("range_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(make_set_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("make_set_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_set_rule_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_set_rule_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_lookup_rule_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_lookup_rule_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(repeat_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repeat_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_text_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_text_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(remove_extension_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("remove_extension_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(echo_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("echo_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(strcat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strcat_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(pass_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_0_2", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(xtc_io_transform_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_transform_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(GetInternalDefaultXtcRepository_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("GetInternalDefaultXtcRepository_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted54);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted54", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(RulePrefix_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("RulePrefix_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted53);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted53", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(LanguageName_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("LanguageName_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted52);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted52", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(SignatureName_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("SignatureName_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted51);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted51", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(MainStrategyName_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("MainStrategyName_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted50);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted50", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ModuleName_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ModuleName_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(HelpString_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("HelpString_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sdf2parenthesize_about_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf2parenthesize_about_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sdf2parenthesize_usage_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf2parenthesize_usage_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(guess_rule_name_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("guess_rule_name_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(rule_prefix_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rule_prefix_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(guess_language_name_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("guess_language_name_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(language_name_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("language_name_option_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(signature_name_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("signature_name_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(guess_main_strategy_name_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("guess_main_strategy_name_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(main_strategy_name_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_strategy_name_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(guess_module_name_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("guess_module_name_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(stratego_module_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("stratego_module_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(report_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("report_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(innermost_module_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("innermost_module_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted34);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted34", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Symbol2ParenTerm_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Symbol2ParenTerm_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted33);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted33", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Symbol2Term_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Symbol2Term_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Symbol2Wld_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Symbol2Wld_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(index_to_subterm_id_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("index_to_subterm_id_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(generate_rule_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("generate_rule_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(core_sdf2parenthesize_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("core_sdf2parenthesize_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted26);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted26", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sdf2parenthesize_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf2parenthesize_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted22", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_sdf2parenthesize_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_sdf2parenthesize_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_abox2text_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_abox2text_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_sdf_main_module_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_sdf_main_module_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_sdf_main_module_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_sdf_main_module_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(sdf_main_module_option_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf_main_module_option_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(DesugarToolDoc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("DesugarToolDoc_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(tool_doc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tool_doc_0_0", 0, ATtrue)), &(closures[closures_index]));
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
