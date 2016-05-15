#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Error_0;
static Symbol sym_Critical_0;
static Symbol sym_FILE_1;
static Symbol sym_NoneTerm_0;
static Symbol sym_SomeTerm_0;
static Symbol sym_ConcTerm_0;
static Symbol sym_TupleTerm_1;
static Symbol sym_NilTerm_0;
static Symbol sym_ConsTerm_0;
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
static Symbol sym_DR__DUMMY_0;
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
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_List_1;
static Symbol sym_Constructors_1;
static Symbol sym_SortVar_1;
static Symbol sym_SortNoArgs_1;
static Symbol sym_Sort_2;
static Symbol sym_OpDecl_2;
static Symbol sym_OpDeclInj_1;
static Symbol sym_ConstType_1;
static Symbol sym_FunType_2;
static Symbol sym_Module_2;
static Symbol sym_Signature_1;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
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
sym_DR__DUMMY_0 = ATmakeSymbol("DR_DUMMY", 0, ATfalse);
ATprotectSymbol(sym_DR__DUMMY_0);
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
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
ATprotectSymbol(sym_List_1);
sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
ATprotectSymbol(sym_Constructors_1);
sym_SortVar_1 = ATmakeSymbol("SortVar", 1, ATfalse);
ATprotectSymbol(sym_SortVar_1);
sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
ATprotectSymbol(sym_SortNoArgs_1);
sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
ATprotectSymbol(sym_Sort_2);
sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
ATprotectSymbol(sym_OpDecl_2);
sym_OpDeclInj_1 = ATmakeSymbol("OpDeclInj", 1, ATfalse);
ATprotectSymbol(sym_OpDeclInj_1);
sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
ATprotectSymbol(sym_ConstType_1);
sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
ATprotectSymbol(sym_FunType_2);
sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
ATprotectSymbol(sym_Module_2);
sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
ATprotectSymbol(sym_Signature_1);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(sym_Error_0);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("Cannot rewrite tree to sort", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("List", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("Int", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(sym_SortNoArgs_1, term19);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("String", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(sym_SortNoArgs_1, term23);
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(sym_SortVar_1, term27);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(sym_ConstType_1, term29);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("Option", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("Cannot rewrite production", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("OptionTree2Sort", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(sym_DR__DUMMY_0);
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("9a6010e265d1f371a5a650a87f40bacf", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("ListTree2Sort", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("9c4029c8c81bb93d8eb88f0d5fa12f0a", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("tool-doc2abox", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeInt(80);
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("Summary:", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("Description:", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(sym__2, term63, term65);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("Options:", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("Authors:", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("Author:", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol(" <", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("Website:", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("Please report bugs to ", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("Version", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("Package", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("Configuration:", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("Default XTC Repository", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("Current XTC Repository", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("License:", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) ", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("You should have received a copy of the GNU General Public License \n        along with this program; if not, write to the Free Software Foundation, \n        Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is distributed in the hope that it will be useful, but \n        WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or \n        FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more \n        details.", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or\n        modify it under the terms of the GNU General Public License as published by the \n        Free Software Foundation; either version 2 of the License, or (at your option) \n        any later version.", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("You should have received a copy of the GNU Lesser General Public \n         License along with this library; if not, write to the Free Software Foundation, \n         Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is distributed in the hope that it will be useful, but \n         WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or \n         FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License \n         for more details.", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or modify \n         it under the terms of the GNU Lesser General Public License as published by the \n         Free Software Foundation; either version 2 of the License, or (at your option) \n         any later version.", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(sym_HelpString_2, term11, term11);
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("--module", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(ATmakeSymbol("--module n       Generated module has name n", 0, ATtrue));
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(sym_Critical_0);
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(ATmakeSymbol("No module name specified. Use the --module option to specify a module name. See also --help.", 0, ATtrue));
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeInt(1);
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(sym_AutoReportBugs_0);
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(ATmakeSymbol("The name of the resulting Stratego module is determined by\n           (1) the specified module name with the --module option.\n           (2) The name of the output file.\n           (3) The name of the input file.", 0, ATtrue));
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeAppl(sym_OptionUsage_0);
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(ATmakeSymbol("Generates a Stratego Signature from a Regular Tree Grammar (RTG).", 0, ATtrue));
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeAppl(sym_Summary_1, term141);
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg2sig [OPTIONS]", 0, ATtrue));
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeAppl(sym_Usage_1, term145);
ATprotect(&(term147));
term147 = term146;
ATprotect(&(term148));
term148 = (ATerm) ATmakeAppl(sym_CurrentXTCRepository_0);
ATprotect(&(term149));
term149 = term148;
ATprotect(&(term150));
term150 = (ATerm) ATmakeAppl(sym_DefaultXTCRepository_0);
ATprotect(&(term151));
term151 = term150;
ATprotect(&(term152));
term152 = (ATerm) ATmakeAppl(ATmakeSymbol("2002-2008", 0, ATtrue));
ATprotect(&(term153));
term153 = term152;
ATprotect(&(term154));
term154 = (ATerm) ATmakeAppl(ATmakeSymbol("Martin Bravenboer <martin.bravenboer@gmail.com>", 0, ATtrue));
ATprotect(&(term155));
term155 = term154;
ATprotect(&(term156));
term156 = (ATerm) ATmakeAppl(sym_GNU__LGPL_2, term153, term155);
ATprotect(&(term157));
term157 = term156;
ATprotect(&(term158));
term158 = (ATerm) ATmakeAppl(ATmakeSymbol("Martin Bravenboer", 0, ATtrue));
ATprotect(&(term159));
term159 = term158;
ATprotect(&(term160));
term160 = (ATerm) ATmakeAppl(ATmakeSymbol("martin.bravenboer@gmail.com", 0, ATtrue));
ATprotect(&(term161));
term161 = term160;
ATprotect(&(term162));
term162 = (ATerm) ATmakeAppl(sym_Person_2, term159, term161);
ATprotect(&(term163));
term163 = term162;
ATprotect(&(term164));
term164 = (ATerm) ATmakeAppl(sym_Author_1, term163);
ATprotect(&(term165));
term165 = term164;
ATprotect(&(term166));
term166 = (ATerm) ATmakeAppl(sym_AutoProgram_0);
ATprotect(&(term167));
term167 = term166;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm table_get_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm fetch_elem_1_0 (StrSL sl, StrCL j_201, ATerm t);
ATerm fetch_1_0 (StrSL sl, StrCL h_201, ATerm t);
ATerm length_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL b_201, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL c_200, ATerm t);
ATerm make_set_0_0 (StrSL sl, ATerm t);
ATerm dr_set_rule_0_3 (StrSL sl, ATerm k_184, ATerm l_184, ATerm m_184, ATerm t);
ATerm dr_lookup_rule_0_2 (StrSL sl, ATerm d_184, ATerm e_184, ATerm t);
ATerm collect_1_0 (StrSL sl, StrCL a_182, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL d_177, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL o_173, ATerm t);
ATerm read_text_file_0_0 (StrSL sl, ATerm t);
ATerm remove_extension_0_0 (StrSL sl, ATerm t);
ATerm exit_0_0 (StrSL sl, ATerm t);
ATerm echo_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm split_before_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL v_161, StrCL w_161, StrCL x_161, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm v_159, ATerm w_159, ATerm t);
ATerm log_0_3 (StrSL sl, ATerm r_159, ATerm s_159, ATerm u_159, ATerm t);
ATerm FILE_1_0 (StrSL sl, StrCL x_145, ATerm t);
ATerm xtc_location_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_5_0 (StrSL sl, StrCL e_145, StrCL f_145, StrCL g_145, StrCL h_145, StrCL i_145, ATerm t);
ATerm xtc_temp_files_1_0 (StrSL sl, StrCL r_144, ATerm t);
ATerm xtc_ensure_file_0_0 (StrSL sl, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL g_143, StrCL k_143, ATerm t);
ATerm xtc_transform_1_0 (StrSL sl, StrCL d_143, ATerm t);
ATerm ConcTerm_0_0 (StrSL sl, ATerm t);
ATerm NilTerm_0_0 (StrSL sl, ATerm t);
ATerm ConsTerm_0_0 (StrSL sl, ATerm t);
ATerm ProdRule_2_0 (StrSL sl, StrCL j_111, StrCL k_111, ATerm t);
ATerm ProdRules_1_0 (StrSL sl, StrCL i_111, ATerm t);
ATerm RTG_2_0 (StrSL sl, StrCL e_111, StrCL f_111, ATerm t);
ATerm parse_rtg_file_0_0 (StrSL sl, ATerm t);
ATerm rtg_reduce_0_0 (StrSL sl, ATerm t);
ATerm rtg_group_productions_0_0 (StrSL sl, ATerm t);
ATerm rtg_ungroup_productions_0_0 (StrSL sl, ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (StrSL sl, ATerm t);
ATerm aux_ListTree2Sort_0_2 (StrSL sl, ATerm g_80, ATerm h_80, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
ATerm ListTree2Sort_0_0 (StrSL sl, ATerm t);
ATerm aux_OptionTree2Sort_0_2 (StrSL sl, ATerm m_72, ATerm o_72, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
ATerm OptionTree2Sort_0_0 (StrSL sl, ATerm t);
ATerm HelpString_2_0 (StrSL sl, StrCL e_61, StrCL f_61, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm rtg2sig_about_0_0 (StrSL sl, ATerm t);
ATerm rtg2sig_usage_0_0 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
ATerm main_rtg2sig_0_0 (StrSL sl, ATerm t);
ATerm xtc_rtg_front_end_0_0 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
ATerm xtc_pp_abstract_stratego_0_0 (StrSL sl, ATerm t);
ATerm guess_module_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
ATerm module_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm ensure_help_string_0_0 (StrSL sl, ATerm t);
ATerm package_bugreport_0_0 (StrSL sl, ATerm t);
ATerm package_version_0_0 (StrSL sl, ATerm t);
ATerm package_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
ATerm DesugarToolDoc_0_0 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
ATerm tool_doc_0_0 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
ATerm xtc_abox2text_1_0 (StrSL sl, StrCL w_29, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
ATerm declare_plus_list_0_0 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
ATerm declare_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm is_list_prodrule_0_0 (StrSL sl, ATerm t);
ATerm prodrule_to_constr_0_0 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm core_rtg2sig_0_1 (StrSL sl, ATerm w_26, ATerm t);
ATerm nonterm_to_sort_0_0 (StrSL sl, ATerm t);
ATerm tree2sort_0_0 (StrSL sl, ATerm t);
ATerm try_tree2sort_0_0 (StrSL sl, ATerm t);
ATerm term_to_strid_0_0 (StrSL sl, ATerm t);
ATerm ref_prodrule_to_constr_0_0 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm not_empty_prodrule_to_constr_0_0 (StrSL sl, ATerm t);
ATerm empty_prodrule_to_constr_0_0 (StrSL sl, ATerm t);
ATerm aux_ListTree2Sort_0_2 (StrSL sl, ATerm g_80, ATerm h_80, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aux_ListTree2Sort_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_80 = NULL,j_80 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm89 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm89) == ATmakeSymbol("9c4029c8c81bb93d8eb88f0d5fa12f0a", 0, ATtrue))))
goto fail64 ;
i_80 = ATgetArgument(t, 1);
}
else
goto fail64 ;
j_80 = t;
t = h_80;
t = j_80;
t = (ATerm) ATmakeAppl(sym_Sort_2, term17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SortNoArgs_1, i_80)));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
ATerm ListTree2Sort_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ListTree2Sort_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL;
sl_init_var(0, y_79);
sl_init_var(1, z_79);
{
struct str_closure p_257 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(p_257);
if((y_79 == NULL))
{
y_79 = t;
}
else
if((y_79 != t))
goto fail62 ;
if(match_cons(t, sym_Ref_1))
{
ATerm trm88 = ATgetArgument(t, 0);
if(match_cons(trm88, sym_Nonterm_1))
{
if((z_79 == NULL))
{
z_79 = ATgetArgument(trm88, 0);
}
else
if((z_79 != ATgetArgument(trm88, 0)))
goto fail62 ;
}
else
goto fail62 ;
}
else
goto fail62 ;
b_80 = t;
e_80 = t;
t = term43;
c_80 = t;
t = e_80;
f_80 = t;
if((z_79 == NULL))
goto fail62 ;
else
{
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Ref_1, (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Nonterm_1, z_79), (ATerm) ATinsert(ATempty, term39))), (ATerm) ATinsert(ATempty, term39));
}
d_80 = t;
t = f_80;
t = dr_lookup_rule_0_2(sl, c_80, d_80, t);
if((t == NULL))
goto fail62 ;
a_80 = t;
t = b_80;
t = a_80;
t = fetch_elem_1_0(sl, lifted43_cl, t);
if((t == NULL))
goto fail62 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(1, sl) == NULL) || (sl_readvar(0, sl) == NULL)))
goto fail63 ;
else
{
t = aux_ListTree2Sort_0_2(sl_up(sl), sl_readvar(1, sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail63 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
ATerm aux_OptionTree2Sort_0_2 (StrSL sl, ATerm m_72, ATerm o_72, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aux_OptionTree2Sort_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_72 = NULL,q_72 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm87 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm87) == ATmakeSymbol("9a6010e265d1f371a5a650a87f40bacf", 0, ATtrue))))
goto fail61 ;
p_72 = ATgetArgument(t, 1);
}
else
goto fail61 ;
q_72 = t;
t = o_72;
t = q_72;
t = (ATerm) ATmakeAppl(sym_Sort_2, term33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SortNoArgs_1, p_72)));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
ATerm OptionTree2Sort_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "OptionTree2Sort_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm r_71 = NULL,s_71 = NULL,d_72 = NULL,f_72 = NULL,g_72 = NULL,i_72 = NULL,j_72 = NULL,l_72 = NULL;
sl_init_var(0, r_71);
sl_init_var(1, s_71);
{
struct str_closure o_257 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(o_257);
if((r_71 == NULL))
{
r_71 = t;
}
else
if((r_71 != t))
goto fail59 ;
if(match_cons(t, sym_Ref_1))
{
ATerm trm86 = ATgetArgument(t, 0);
if(match_cons(trm86, sym_Nonterm_1))
{
if((s_71 == NULL))
{
s_71 = ATgetArgument(trm86, 0);
}
else
if((s_71 != ATgetArgument(trm86, 0)))
goto fail59 ;
}
else
goto fail59 ;
}
else
goto fail59 ;
f_72 = t;
j_72 = t;
t = term37;
g_72 = t;
t = j_72;
l_72 = t;
if((s_71 == NULL))
goto fail59 ;
else
{
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Ref_1, (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Nonterm_1, s_71), (ATerm) ATinsert(ATempty, term39))), (ATerm) ATinsert(ATempty, term39));
}
i_72 = t;
t = l_72;
t = dr_lookup_rule_0_2(sl, g_72, i_72, t);
if((t == NULL))
goto fail59 ;
d_72 = t;
t = f_72;
t = d_72;
t = fetch_elem_1_0(sl, lifted42_cl, t);
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
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(1, sl) == NULL) || (sl_readvar(0, sl) == NULL)))
goto fail60 ;
else
{
t = aux_OptionTree2Sort_0_2(sl_up(sl), sl_readvar(1, sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail60 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
ATerm HelpString_2_0 (StrSL sl, StrCL e_61, StrCL f_61, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "HelpString_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_253 = NULL,d_253 = NULL,e_253 = NULL,g_253 = NULL,h_253 = NULL;
ATerm trm85;
trm85 = (ATerm) ATgetAnnotations(t);
if((trm85 == NULL))
trm85 = (ATerm) ATempty;
if(match_cons(t, sym_HelpString_2))
{
d_253 = ATgetArgument(t, 0);
e_253 = ATgetArgument(t, 1);
}
else
goto fail58 ;
f_253 = trm85;
t = d_253;
t = cl_fun(e_61)(cl_sl(e_61), t);
if((t == NULL))
goto fail58 ;
g_253 = t;
t = e_253;
t = cl_fun(f_61)(cl_sl(f_61), t);
if((t == NULL))
goto fail58 ;
h_253 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_HelpString_2, g_253, h_253), f_253);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_rtg2sig_0_0(sl, t);
if((t == NULL))
goto fail57 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
ATerm rtg2sig_about_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rtg2sig_about_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Config_1, (ATerm) ATinsert(ATinsert(ATempty, term149), term151))), term157), term165), term167);
t = tool_doc_0_0(sl, t);
if((t == NULL))
goto fail56 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
ATerm rtg2sig_usage_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rtg2sig_usage_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term135), (ATerm) ATmakeAppl(sym_Description_1, (ATerm) ATinsert(ATempty, term137))), term139), term143), term147);
t = tool_doc_0_0(sl, t);
if((t == NULL))
goto fail55 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_rtg2sig_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_rtg2sig_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_257 = { &(module_option_0_0) , sl };
StrCL lifted37_cl = &(h_257);
struct str_closure i_257 = { &(rtg2sig_usage_0_0) , sl };
StrCL lifted38_cl = &(i_257);
struct str_closure j_257 = { &(rtg2sig_about_0_0) , sl };
StrCL lifted39_cl = &(j_257);
struct str_closure k_257 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(k_257);
struct str_closure n_257 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(n_257);
t = xtc_io_wrap_5_0(sl, lifted37_cl, lifted38_cl, lifted39_cl, lifted40_cl, lifted41_cl, t);
if((t == NULL))
goto fail52 ;
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
{
ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
t = xtc_rtg_front_end_0_0(sl_up(sl), t);
if((t == NULL))
goto fail54 ;
l_40 = t;
n_40 = t;
t = guess_module_name_0_0(sl_up(sl), t);
if((t == NULL))
goto fail54 ;
m_40 = t;
t = n_40;
t = m_40;
k_40 = t;
t = l_40;
t = core_rtg2sig_0_1(sl_up(sl), k_40, t);
if((t == NULL))
goto fail54 ;
t = write_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail54 ;
t = xtc_pp_abstract_stratego_0_0(sl_up(sl), t);
if((t == NULL))
goto fail54 ;
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
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_rtg_front_end_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_rtg_front_end_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_39 = NULL;
t = xtc_ensure_file_0_0(sl, t);
if((t == NULL))
goto fail51 ;
if(match_cons(t, sym_FILE_1))
{
l_39 = ATgetArgument(t, 0);
}
else
goto fail51 ;
t = l_39;
t = parse_rtg_file_0_0(sl, t);
if((t == NULL))
goto fail51 ;
t = rtg_reduce_0_0(sl, t);
if((t == NULL))
goto fail51 ;
t = rtg_group_productions_0_0(sl, t);
if((t == NULL))
goto fail51 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_pp_abstract_stratego_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_pp_abstract_stratego_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_257 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(f_257);
struct str_closure g_257 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(g_257);
t = xtc_transform_2_0(sl, lifted35_cl, lifted36_cl, t);
if((t == NULL))
goto fail48 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_39 = NULL,k_39 = NULL;
k_39 = t;
t = term49;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail50 ;
j_39 = t;
t = k_39;
{
ATerm trm84;
trm84 = CheckATermList(j_39);
if((trm84 == NULL))
goto fail50 ;
t = (ATerm) ATinsert((ATermList)trm84, term133);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term131;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
ATerm guess_module_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "guess_module_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm81 = t;
t = term117;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label54 ;
goto label53 ;
label54 :
t = trm81;
{
ATerm trm82 = t;
t = term121;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label55 ;
t = remove_extension_0_0(sl, t);
if((t == NULL))
goto label55 ;
goto label53 ;
label55 :
t = trm82;
{
ATerm trm83 = t;
t = term123;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label56 ;
t = remove_extension_0_0(sl, t);
if((t == NULL))
goto label56 ;
goto label53 ;
label56 :
t = trm83;
{
ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
t_37 = t;
t = term125;
r_37 = t;
t = t_37;
u_37 = t;
t = term127;
s_37 = t;
t = u_37;
t = log_0_2(sl, r_37, s_37, t);
if((t == NULL))
goto fail47 ;
t = term129;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail47 ;
else
goto label53 ;
}
}
}
label53 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
ATerm module_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "module_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_257 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(c_257);
struct str_closure d_257 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(d_257);
struct str_closure e_257 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(e_257);
t = ArgOption_3_0(sl, lifted32_cl, lifted33_cl, lifted34_cl, t);
if((t == NULL))
goto fail43 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term119;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
h_37 = t;
j_37 = t;
i_37 = t;
t = (ATerm) ATmakeAppl(sym__2, term117, i_37);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail45 ;
t = h_37;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("--module", 0, ATtrue))))
goto fail44 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
ATerm ensure_help_string_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ensure_help_string_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm78 = t;
struct str_closure y_256 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(y_256);
struct str_closure z_256 = { &(is_string_0_0) , sl };
StrCL lifted31_cl = &(z_256);
t = HelpString_2_0(sl, lifted30_cl, lifted31_cl, t);
if((t == NULL))
goto label49 ;
goto label48 ;
label49 :
t = trm78;
{
ATerm trm80 = t;
ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL;
d_37 = t;
g_37 = t;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label52 ;
t = (ATerm) ATmakeAppl(sym__2, d_37, term113);
t = split_before_0_0(sl, t);
if((t == NULL))
goto label52 ;
if(match_cons(t, sym__2))
{
e_37 = ATgetArgument(t, 0);
f_37 = ATgetArgument(t, 1);
}
else
goto label52 ;
t = g_37;
t = (ATerm) ATmakeAppl(sym_HelpString_2, e_37, f_37);
goto label48 ;
label52 :
t = trm80;
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto fail41 ;
t = term115;
goto label48 ;
}
label48 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm79 = t;
t = is_string_0_0(sl_up(sl), t);
if((t == NULL))
goto label51 ;
goto label50 ;
label51 :
t = trm79;
t = is_list_0_0(sl_up(sl), t);
if((t == NULL))
goto fail42 ;
else
goto label50 ;
label50 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
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
goto fail40 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
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
goto fail39 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
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
goto fail38 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
ATerm DesugarToolDoc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "DesugarToolDoc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm60 = t;
ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
if(match_cons(t, sym_Usage_1))
{
a_37 = ATgetArgument(t, 0);
}
else
goto label30 ;
c_37 = t;
t = (ATerm) ATmakeAppl(sym__2, term57, a_37);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label30 ;
b_37 = t;
t = c_37;
t = (ATerm) ATmakeAppl(sym_Line_1, b_37);
goto label29 ;
label30 :
t = trm60;
{
ATerm trm61 = t;
ATerm z_36 = NULL;
if(match_cons(t, sym_Summary_1))
{
z_36 = ATgetArgument(t, 0);
}
else
goto label31 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term59, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Paragraph_1, z_36)));
goto label29 ;
label31 :
t = trm61;
{
ATerm trm62 = t;
ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
if(match_cons(t, sym_Description_1))
{
u_36 = ATgetArgument(t, 0);
}
else
goto label32 ;
w_36 = t;
t = u_36;
{
struct str_closure t_256 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(t_256);
t = map_1_0(sl, lifted26_cl, t);
if((t == NULL))
goto label32 ;
v_36 = t;
t = w_36;
t = (ATerm) ATmakeAppl(sym_HSection_2, term61, v_36);
}
goto label29 ;
label32 :
t = trm62;
{
ATerm trm63 = t;
ATerm s_36 = NULL,t_36 = NULL;
if(!(match_cons(t, sym_OptionUsage_0)))
goto label33 ;
t_36 = t;
t = term67;
t = table_get_0_0(sl, t);
if((t == NULL))
goto label33 ;
t = reverse_0_0(sl, t);
if((t == NULL))
goto label33 ;
{
struct str_closure u_256 = { &(ensure_help_string_0_0) , sl };
StrCL lifted27_cl = &(u_256);
t = map_1_0(sl, lifted27_cl, t);
if((t == NULL))
goto label33 ;
{
struct str_closure v_256 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(v_256);
t = filter_1_0(sl, lifted28_cl, t);
if((t == NULL))
goto label33 ;
s_36 = t;
t = t_36;
t = (ATerm) ATmakeAppl(sym_HSection_2, term69, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, s_36)));
}
}
goto label29 ;
label33 :
t = trm63;
{
ATerm trm64 = t;
ATerm n_36 = NULL;
if(match_cons(t, sym_Authors_1))
{
n_36 = ATgetArgument(t, 0);
}
else
goto label34 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term71, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ItemList_1, n_36)));
goto label29 ;
label34 :
t = trm64;
{
ATerm trm65 = t;
ATerm m_36 = NULL;
if(match_cons(t, sym_Author_1))
{
m_36 = ATgetArgument(t, 0);
}
else
goto label35 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term73, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ItemList_1, (ATerm) ATinsert(ATempty, m_36))));
goto label29 ;
label35 :
t = trm65;
{
ATerm trm66 = t;
ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL;
if(match_cons(t, sym_Person_2))
{
i_36 = ATgetArgument(t, 0);
j_36 = ATgetArgument(t, 1);
}
else
goto label36 ;
l_36 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term75), j_36), term77), i_36);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label36 ;
k_36 = t;
t = l_36;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, k_36);
goto label29 ;
label36 :
t = trm66;
{
ATerm trm67 = t;
ATerm h_36 = NULL;
if(match_cons(t, sym_WebHome_1))
{
h_36 = ATgetArgument(t, 0);
}
else
goto label37 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term79, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Line_1, h_36)));
goto label29 ;
label37 :
t = trm67;
{
ATerm trm68 = t;
ATerm f_36 = NULL,g_36 = NULL;
if(!(match_cons(t, sym_AutoReportBugs_0)))
goto label38 ;
g_36 = t;
t = term49;
t = package_bugreport_0_0(sl, t);
if((t == NULL))
goto label38 ;
f_36 = t;
t = g_36;
t = (ATerm) ATmakeAppl(sym_ReportBugs_1, f_36);
goto label29 ;
label38 :
t = trm68;
{
ATerm trm69 = t;
ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
if(match_cons(t, sym_ReportBugs_1))
{
c_36 = ATgetArgument(t, 0);
}
else
goto label39 ;
e_36 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, c_36), term81);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label39 ;
d_36 = t;
t = e_36;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, d_36);
goto label29 ;
label39 :
t = trm69;
{
ATerm trm70 = t;
ATerm w_35 = NULL,z_35 = NULL,x_35 = NULL,a_36 = NULL,y_35 = NULL,b_36 = NULL;
if(!(match_cons(t, sym_AutoProgram_0)))
goto label40 ;
z_35 = t;
t = term83;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label40 ;
w_35 = t;
t = z_35;
a_36 = t;
t = term49;
t = package_name_0_0(sl, t);
if((t == NULL))
goto label40 ;
x_35 = t;
t = a_36;
b_36 = t;
t = term49;
t = package_version_0_0(sl, t);
if((t == NULL))
goto label40 ;
y_35 = t;
t = b_36;
t = (ATerm) ATmakeAppl(sym_Program_3, w_35, x_35, y_35);
goto label29 ;
label40 :
t = trm70;
{
ATerm trm71 = t;
ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
if(match_cons(t, sym_Program_3))
{
t_35 = ATgetArgument(t, 0);
u_35 = ATgetArgument(t, 1);
v_35 = ATgetArgument(t, 2);
}
else
goto label41 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, t_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Def_2, term85, (ATerm) ATmakeAppl(sym_Paragraph_1, v_35))), (ATerm) ATmakeAppl(sym_Def_2, term87, (ATerm) ATmakeAppl(sym_Paragraph_1, u_35))))));
goto label29 ;
label41 :
t = trm71;
{
ATerm trm72 = t;
ATerm s_35 = NULL;
if(match_cons(t, sym_Config_1))
{
s_35 = ATgetArgument(t, 0);
}
else
goto label42 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term89, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, s_35)));
goto label29 ;
label42 :
t = trm72;
{
ATerm trm73 = t;
ATerm q_35 = NULL,r_35 = NULL;
if(!(match_cons(t, sym_DefaultXTCRepository_0)))
goto label43 ;
r_35 = t;
t = term49;
t = GetInternalDefaultXtcRepository_0_0(sl, t);
if((t == NULL))
goto label43 ;
q_35 = t;
t = r_35;
t = (ATerm) ATmakeAppl(sym_ConfigItem_2, term91, q_35);
goto label29 ;
label43 :
t = trm73;
{
ATerm trm74 = t;
ATerm o_35 = NULL,p_35 = NULL;
if(!(match_cons(t, sym_CurrentXTCRepository_0)))
goto label44 ;
p_35 = t;
t = term49;
t = xtc_location_0_0(sl, t);
if((t == NULL))
goto label44 ;
o_35 = t;
t = p_35;
t = (ATerm) ATmakeAppl(sym_ConfigItem_2, term93, o_35);
goto label29 ;
label44 :
t = trm74;
{
ATerm trm75 = t;
ATerm m_35 = NULL,n_35 = NULL;
if(match_cons(t, sym_ConfigItem_2))
{
m_35 = ATgetArgument(t, 0);
n_35 = ATgetArgument(t, 1);
}
else
goto label45 ;
t = (ATerm) ATmakeAppl(sym_Def_2, m_35, (ATerm) ATmakeAppl(sym_Line_1, n_35));
goto label29 ;
label45 :
t = trm75;
{
ATerm trm76 = t;
ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
if(match_cons(t, sym_License_1))
{
e_35 = ATgetArgument(t, 0);
}
else
goto label46 ;
g_35 = t;
t = e_35;
{
struct str_closure x_256 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(x_256);
t = map_1_0(sl, lifted29_cl, t);
if((t == NULL))
goto label46 ;
f_35 = t;
t = g_35;
t = (ATerm) ATmakeAppl(sym_HSection_2, term95, f_35);
}
goto label29 ;
label46 :
t = trm76;
{
ATerm trm77 = t;
ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL;
if(match_cons(t, sym_GNU__GPL_2))
{
a_35 = ATgetArgument(t, 0);
b_35 = ATgetArgument(t, 1);
}
else
goto label47 ;
d_35 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_35), term97), a_35), term99);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label47 ;
c_35 = t;
t = d_35;
t = (ATerm) ATmakeAppl(sym_License_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term101), term103), term105), c_35));
goto label29 ;
label47 :
t = trm77;
{
ATerm v_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
if(match_cons(t, sym_GNU__LGPL_2))
{
v_34 = ATgetArgument(t, 0);
x_34 = ATgetArgument(t, 1);
}
else
goto fail34 ;
z_34 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_34), term97), v_34), term99);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail34 ;
y_34 = t;
t = z_34;
t = (ATerm) ATmakeAppl(sym_License_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term107), term109), term111), y_34));
goto label29 ;
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
label29 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_35 = NULL,l_35 = NULL;
l_35 = t;
k_35 = t;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, k_35);
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
ATerm o_36 = NULL,r_36 = NULL;
if(match_cons(t, sym_HelpString_2))
{
o_36 = ATgetArgument(t, 0);
r_36 = ATgetArgument(t, 1);
}
else
goto fail36 ;
t = (ATerm) ATmakeAppl(sym_Def_2, o_36, (ATerm) ATmakeAppl(sym_Paragraph_1, r_36));
}
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
{
ATerm x_36 = NULL,y_36 = NULL;
y_36 = t;
x_36 = t;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, x_36);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm tool_doc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tool_doc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_34 = NULL;
t_34 = t;
{
struct str_closure s_256 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(s_256);
t = xtc_temp_files_1_0(sl, lifted20_cl, t);
if((t == NULL))
goto fail28 ;
t = t_34;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_34 = NULL;
struct str_closure o_256 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(o_256);
t = topdown_1_0(sl_up(sl), lifted21_cl, t);
if((t == NULL))
goto fail29 ;
t = write_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail29 ;
{
struct str_closure p_256 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(p_256);
t = xtc_transform_1_0(sl_up(sl), lifted23_cl, t);
if((t == NULL))
goto fail29 ;
{
struct str_closure q_256 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(q_256);
t = xtc_abox2text_1_0(sl_up(sl), lifted24_cl, t);
if((t == NULL))
goto fail29 ;
u_34 = t;
{
struct str_closure r_256 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(r_256);
t = FILE_1_0(sl_up(sl), lifted25_cl, t);
if((t == NULL))
goto fail29 ;
t = u_34;
}
}
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
t = read_text_file_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail33 ;
t = echo_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail33 ;
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
t = term55;
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
t = term53;
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
struct str_closure n_256 = { &(DesugarToolDoc_0_0) , sl_up(sl_up(sl)) };
StrCL lifted22_cl = &(n_256);
t = repeat_1_0(sl_up(sl_up(sl)), lifted22_cl, t);
if((t == NULL))
goto fail30 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_abox2text_1_0 (StrSL sl, StrCL w_29, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_abox2text_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, w_29);
{
struct str_closure k_256 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(k_256);
struct str_closure m_256 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(m_256);
t = xtc_transform_2_0(sl, lifted18_cl, lifted19_cl, t);
if((t == NULL))
goto fail25 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_29 = NULL,z_29 = NULL,y_29 = NULL,d_30 = NULL;
z_29 = t;
t = term49;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail27 ;
t = int_to_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail27 ;
x_29 = t;
t = z_29;
d_30 = t;
t = term49;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail27 ;
y_29 = t;
t = d_30;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, x_29), term51), y_29);
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail27 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
ATerm declare_plus_list_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "declare_plus_list_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm j_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,u_28 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
sl_init_var(0, n_28);
sl_init_var(1, o_28);
if(match_cons(t, sym_ProdRule_2))
{
ATerm trm43 = ATgetArgument(t, 0);
if(match_cons(trm43, sym_Nonterm_1))
{
m_28 = ATgetArgument(trm43, 0);
}
else
goto fail22 ;
j_28 = ATgetArgument(t, 1);
}
else
goto fail22 ;
p_28 = t;
t = j_28;
t = make_set_0_0(sl, t);
if((t == NULL))
goto fail22 ;
l_28 = t;
t = length_0_0(sl, t);
if((t == NULL))
goto fail22 ;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 4))))
goto fail22 ;
t = l_28;
{
struct str_closure i_256 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(i_256);
t = filter_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto fail22 ;
t = length_0_0(sl, t);
if((t == NULL))
goto fail22 ;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 3))))
goto fail22 ;
t = l_28;
{
struct str_closure j_256 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(j_256);
t = fetch_1_0(sl, lifted17_cl, t);
if((t == NULL))
goto fail22 ;
q_28 = t;
y_28 = t;
t = term43;
v_28 = t;
t = y_28;
z_28 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Ref_1, (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Nonterm_1, m_28), (ATerm) ATinsert(ATempty, term39))), (ATerm) ATinsert(ATempty, term39));
w_28 = t;
t = z_28;
a_29 = t;
if((o_28 == NULL))
goto fail22 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term45, o_28);
}
x_28 = t;
t = a_29;
t = dr_set_rule_0_3(sl, v_28, w_28, x_28, t);
if((t == NULL))
goto fail22 ;
t = q_28;
u_28 = t;
h_29 = t;
t = term43;
b_29 = t;
t = h_29;
i_29 = t;
if((n_28 == NULL))
goto fail22 ;
else
{
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Ref_1, (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Nonterm_1, n_28), (ATerm) ATinsert(ATempty, term39))), (ATerm) ATinsert(ATempty, term39));
}
c_29 = t;
t = i_29;
j_29 = t;
if((o_28 == NULL))
goto fail22 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term45, o_28);
}
d_29 = t;
t = j_29;
t = dr_set_rule_0_3(sl, b_29, c_29, d_29, t);
if((t == NULL))
goto fail22 ;
t = u_28;
t = p_28;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Appl_2))
{
ATerm trm52 = ATgetArgument(t, 0);
if(!(match_cons(trm52, sym_ConsTerm_0)))
goto fail24 ;
{
ATerm trm53 = ATgetArgument(t, 1);
if(((ATgetType(trm53) == AT_LIST) && !(ATisEmpty(trm53))))
{
ATerm trm54 = ATgetFirst((ATermList) trm53);
if(match_cons(trm54, sym_Ref_1))
{
ATerm trm55 = ATgetArgument(trm54, 0);
if(match_cons(trm55, sym_Nonterm_1))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm55, 0);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm55, 0)))
goto fail24 ;
}
else
goto fail24 ;
}
else
goto fail24 ;
{
ATerm trm56 = (ATerm) ATgetNext((ATermList) trm53);
if(((ATgetType(trm56) == AT_LIST) && !(ATisEmpty(trm56))))
{
ATerm trm57 = ATgetFirst((ATermList) trm56);
if(match_cons(trm57, sym_Ref_1))
{
ATerm trm58 = ATgetArgument(trm57, 0);
if(match_cons(trm58, sym_Nonterm_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm58, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm58, 0)))
goto fail24 ;
}
else
goto fail24 ;
}
else
goto fail24 ;
{
ATerm trm59 = (ATerm) ATgetNext((ATermList) trm56);
if(!(((ATgetType(trm59) == AT_LIST) && ATisEmpty(trm59))))
goto fail24 ;
}
}
else
goto fail24 ;
}
}
else
goto fail24 ;
}
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
if(match_cons(t, sym_Appl_2))
{
ATerm trm44 = ATgetArgument(t, 0);
if(!(match_cons(trm44, sym_ConcTerm_0)))
goto fail23 ;
{
ATerm trm45 = ATgetArgument(t, 1);
if(((ATgetType(trm45) == AT_LIST) && !(ATisEmpty(trm45))))
{
ATerm trm46 = ATgetFirst((ATermList) trm45);
if(match_cons(trm46, sym_Ref_1))
{
ATerm trm47 = ATgetArgument(trm46, 0);
}
else
goto fail23 ;
{
ATerm trm48 = (ATerm) ATgetNext((ATermList) trm45);
if(((ATgetType(trm48) == AT_LIST) && !(ATisEmpty(trm48))))
{
ATerm trm49 = ATgetFirst((ATermList) trm48);
if(match_cons(trm49, sym_Ref_1))
{
ATerm trm50 = ATgetArgument(trm49, 0);
}
else
goto fail23 ;
{
ATerm trm51 = (ATerm) ATgetNext((ATermList) trm48);
if(!(((ATgetType(trm51) == AT_LIST) && ATisEmpty(trm51))))
goto fail23 ;
}
}
else
goto fail23 ;
}
}
else
goto fail23 ;
}
}
else
goto fail23 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm declare_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "declare_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
sl_init_var(0, y_27);
if(match_cons(t, sym_ProdRule_2))
{
ATerm trm35 = ATgetArgument(t, 0);
if(match_cons(trm35, sym_Nonterm_1))
{
x_27 = ATgetArgument(trm35, 0);
}
else
goto fail19 ;
w_27 = ATgetArgument(t, 1);
}
else
goto fail19 ;
z_27 = t;
t = w_27;
t = length_0_0(sl, t);
if((t == NULL))
goto fail19 ;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 2))))
goto fail19 ;
t = w_27;
{
struct str_closure g_256 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(g_256);
t = fetch_1_0(sl, lifted14_cl, t);
if((t == NULL))
goto fail19 ;
t = w_27;
{
struct str_closure h_256 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(h_256);
t = fetch_1_0(sl, lifted15_cl, t);
if((t == NULL))
goto fail19 ;
a_28 = t;
e_28 = t;
t = term37;
b_28 = t;
t = e_28;
f_28 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Ref_1, (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Nonterm_1, x_27), (ATerm) ATinsert(ATempty, term39))), (ATerm) ATinsert(ATempty, term39));
c_28 = t;
t = f_28;
g_28 = t;
if((y_27 == NULL))
goto fail19 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term41, y_27);
}
d_28 = t;
t = g_28;
t = dr_set_rule_0_3(sl, b_28, c_28, d_28, t);
if((t == NULL))
goto fail19 ;
t = a_28;
t = z_27;
}
}
}
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
if(match_cons(t, sym_Appl_2))
{
ATerm trm38 = ATgetArgument(t, 0);
if(!(match_cons(trm38, sym_SomeTerm_0)))
goto fail21 ;
{
ATerm trm39 = ATgetArgument(t, 1);
if(((ATgetType(trm39) == AT_LIST) && !(ATisEmpty(trm39))))
{
ATerm trm40 = ATgetFirst((ATermList) trm39);
if(match_cons(trm40, sym_Ref_1))
{
ATerm trm41 = ATgetArgument(trm40, 0);
if(match_cons(trm41, sym_Nonterm_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm41, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm41, 0)))
goto fail21 ;
}
else
goto fail21 ;
}
else
goto fail21 ;
{
ATerm trm42 = (ATerm) ATgetNext((ATermList) trm39);
if(!(((ATgetType(trm42) == AT_LIST) && ATisEmpty(trm42))))
goto fail21 ;
}
}
else
goto fail21 ;
}
}
else
goto fail21 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Appl_2))
{
ATerm trm36 = ATgetArgument(t, 0);
if(!(match_cons(trm36, sym_NoneTerm_0)))
goto fail20 ;
{
ATerm trm37 = ATgetArgument(t, 1);
if(!(((ATgetType(trm37) == AT_LIST) && ATisEmpty(trm37))))
goto fail20 ;
}
}
else
goto fail20 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_list_prodrule_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_list_prodrule_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_27 = NULL;
t_27 = t;
{
struct str_closure e_256 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(e_256);
t = collect_1_0(sl, lifted12_cl, t);
if((t == NULL))
goto fail16 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm31 = ATgetFirst((ATermList) t);
ATerm trm32 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail16 ;
{
struct str_closure f_256 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(f_256);
t = map_1_0(sl, lifted13_cl, t);
if((t == NULL))
goto fail16 ;
t = t_27;
}
}
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
{
ATerm trm33 = t;
t = ConcTerm_0_0(sl_up(sl), t);
if((t == NULL))
goto label27 ;
goto label26 ;
label27 :
t = trm33;
{
ATerm trm34 = t;
t = ConsTerm_0_0(sl_up(sl), t);
if((t == NULL))
goto label28 ;
goto label26 ;
label28 :
t = trm34;
t = NilTerm_0_0(sl_up(sl), t);
if((t == NULL))
goto fail18 ;
else
goto label26 ;
}
label26 :
;
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
ATerm u_27 = NULL;
if(match_cons(t, sym_Appl_2))
{
u_27 = ATgetArgument(t, 0);
{
ATerm trm30 = ATgetArgument(t, 1);
if(!(((ATgetType(trm30) == AT_LIST) && ATisEmpty(trm30))))
goto fail17 ;
}
}
else
goto fail17 ;
t = u_27;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm prodrule_to_constr_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prodrule_to_constr_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm27 = t;
t = empty_prodrule_to_constr_0_0(sl, t);
if((t == NULL))
goto label23 ;
goto label22 ;
label23 :
t = trm27;
{
ATerm trm28 = t;
t = not_empty_prodrule_to_constr_0_0(sl, t);
if((t == NULL))
goto label24 ;
goto label22 ;
label24 :
t = trm28;
{
ATerm trm29 = t;
t = ref_prodrule_to_constr_0_0(sl, t);
if((t == NULL))
goto label25 ;
goto label22 ;
label25 :
t = trm29;
{
ATerm e_27 = NULL,f_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
k_27 = t;
t = term13;
e_27 = t;
t = k_27;
l_27 = t;
t = term35;
f_27 = t;
t = l_27;
m_27 = t;
o_27 = t;
n_27 = t;
j_27 = t;
t = m_27;
t = log_0_3(sl, e_27, f_27, j_27, t);
if((t == NULL))
goto fail15 ;
goto fail15 ;
}
}
}
label22 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm core_rtg2sig_0_1 (StrSL sl, ATerm w_26, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "core_rtg2sig_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
t = rtg_group_productions_0_0(sl, t);
if((t == NULL))
goto fail8 ;
{
struct str_closure x_255 = { &(_Id) , sl };
StrCL lifted1_cl = &(x_255);
struct str_closure y_255 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(y_255);
t = RTG_2_0(sl, lifted1_cl, lifted2_cl, t);
if((t == NULL))
goto fail8 ;
{
struct str_closure b_256 = { &(_Id) , sl };
StrCL lifted7_cl = &(b_256);
struct str_closure c_256 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(c_256);
t = RTG_2_0(sl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail8 ;
t = rtg_ungroup_productions_0_0(sl, t);
if((t == NULL))
goto fail8 ;
if(match_cons(t, sym_RTG_2))
{
ATerm trm25 = ATgetArgument(t, 0);
if(match_cons(trm25, sym_Start_1))
{
a_27 = ATgetArgument(trm25, 0);
}
else
goto fail8 ;
{
ATerm trm26 = ATgetArgument(t, 1);
if(match_cons(trm26, sym_ProdRules_1))
{
b_27 = ATgetArgument(trm26, 0);
}
else
goto fail8 ;
}
}
else
goto fail8 ;
d_27 = t;
t = b_27;
{
struct str_closure d_256 = { &(prodrule_to_constr_0_0) , sl };
StrCL lifted11_cl = &(d_256);
t = map_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto fail8 ;
c_27 = t;
t = d_27;
t = (ATerm) ATmakeAppl(sym_Module_2, w_26, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_OpDecl_2, term5, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term17, (ATerm) ATinsert(ATempty, term29)))), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term17, (ATerm) ATinsert(ATempty, term29)))), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term17, (ATerm) ATinsert(ATempty, term29)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, term3, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term17, (ATerm) ATinsert(ATempty, term29))))), (ATerm) ATmakeAppl(sym_OpDecl_2, term1, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term17, (ATerm) ATinsert(ATempty, term29)))), term31), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term17, (ATerm) ATinsert(ATempty, term29)))))))))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_OpDecl_2, term9, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term33, (ATerm) ATinsert(ATempty, term29))))), (ATerm) ATmakeAppl(sym_OpDecl_2, term7, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term31), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term33, (ATerm) ATinsert(ATempty, term29)))))))))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, c_27)))));
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_256 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(a_256);
t = ProdRules_1_0(sl_up(sl), lifted9_cl, t);
if((t == NULL))
goto fail12 ;
}
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
struct str_closure z_255 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(z_255);
t = filter_1_0(sl_up(sl_up(sl)), lifted10_cl, t);
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
{
ATerm trm22 = t;
ATerm trm23 = t;
t = declare_plus_list_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label20 ;
goto label19 ;
label20 :
t = trm23;
{
ATerm trm24 = t;
t = is_list_prodrule_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label21 ;
goto label19 ;
label21 :
t = trm24;
t = declare_option_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label18 ;
else
goto label19 ;
}
label19 :
;
goto fail14 ;
label18 :
t = trm22;
goto label17 ;
label17 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_255 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(w_255);
t = ProdRules_1_0(sl_up(sl), lifted3_cl, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_255 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(v_255);
t = map_1_0(sl_up(sl_up(sl)), lifted4_cl, t);
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
{
struct str_closure s_255 = { &(_Id) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted5_cl = &(s_255);
struct str_closure t_255 = { &(make_set_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted6_cl = &(t_255);
t = ProdRule_2_0(sl_up(sl_up(sl_up(sl))), lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto fail11 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm nonterm_to_sort_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "nonterm_to_sort_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm20 = t;
if(!(match_cons(t, sym_Int_0)))
goto label15 ;
t = term21;
goto label14 ;
label15 :
t = trm20;
{
ATerm trm21 = t;
if(!(match_cons(t, sym_String_0)))
goto label16 ;
t = term25;
goto label14 ;
label16 :
t = trm21;
{
ATerm r_24 = NULL;
if(match_cons(t, sym_Nonterm_1))
{
r_24 = ATgetArgument(t, 0);
}
else
goto fail7 ;
t = (ATerm) ATmakeAppl(sym_SortNoArgs_1, r_24);
goto label14 ;
}
}
label14 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm tree2sort_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tree2sort_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm17 = t;
ATerm trm18 = t;
t = ListTree2Sort_0_0(sl, t);
if((t == NULL))
goto label12 ;
goto label11 ;
label12 :
t = trm18;
{
ATerm trm19 = t;
t = OptionTree2Sort_0_0(sl, t);
if((t == NULL))
goto label13 ;
goto label11 ;
label13 :
t = trm19;
{
ATerm w_22 = NULL;
if(match_cons(t, sym_Ref_1))
{
w_22 = ATgetArgument(t, 0);
}
else
goto label10 ;
t = w_22;
t = nonterm_to_sort_0_0(sl, t);
if((t == NULL))
goto label10 ;
else
goto label11 ;
}
}
label11 :
;
goto label9 ;
label10 :
t = trm17;
{
ATerm p_22 = NULL,s_22 = NULL,t_22 = NULL;
if(match_cons(t, sym_List_1))
{
p_22 = ATgetArgument(t, 0);
}
else
goto fail6 ;
t_22 = t;
t = p_22;
t = try_tree2sort_0_0(sl, t);
if((t == NULL))
goto fail6 ;
s_22 = t;
t = t_22;
t = (ATerm) ATmakeAppl(sym_Sort_2, term17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SortNoArgs_1, s_22)));
goto label9 ;
}
label9 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm try_tree2sort_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "try_tree2sort_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm16 = t;
t = tree2sort_0_0(sl, t);
if((t == NULL))
goto label8 ;
goto label7 ;
label8 :
t = trm16;
{
ATerm d_21 = NULL,e_21 = NULL,i_21 = NULL,k_21 = NULL,t_21 = NULL,w_21 = NULL,x_21 = NULL,a_22 = NULL;
k_21 = t;
t = term13;
d_21 = t;
t = k_21;
t_21 = t;
t = term15;
e_21 = t;
t = t_21;
w_21 = t;
a_22 = t;
x_21 = t;
i_21 = t;
t = w_21;
t = log_0_3(sl, d_21, e_21, i_21, t);
if((t == NULL))
goto fail5 ;
goto fail5 ;
}
label7 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm term_to_strid_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "term_to_strid_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm9 = t;
ATerm x_20 = NULL;
if(match_cons(t, sym_Term_1))
{
x_20 = ATgetArgument(t, 0);
}
else
goto label1 ;
t = x_20;
goto label0 ;
label1 :
t = trm9;
{
ATerm trm10 = t;
if(!(match_cons(t, sym_ConsTerm_0)))
goto label2 ;
t = term1;
goto label0 ;
label2 :
t = trm10;
{
ATerm trm11 = t;
if(!(match_cons(t, sym_NilTerm_0)))
goto label3 ;
t = term3;
goto label0 ;
label3 :
t = trm11;
{
ATerm trm12 = t;
if(!(match_cons(t, sym_ConcTerm_0)))
goto label4 ;
t = term5;
goto label0 ;
label4 :
t = trm12;
{
ATerm trm13 = t;
if(!(match_cons(t, sym_SomeTerm_0)))
goto label5 ;
t = term7;
goto label0 ;
label5 :
t = trm13;
{
ATerm trm14 = t;
if(!(match_cons(t, sym_NoneTerm_0)))
goto label6 ;
t = term9;
goto label0 ;
label6 :
t = trm14;
if(match_cons(t, sym_TupleTerm_1))
{
ATerm trm15 = ATgetArgument(t, 0);
}
else
goto fail4 ;
t = term11;
goto label0 ;
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
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm ref_prodrule_to_constr_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ref_prodrule_to_constr_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,p_18 = NULL,q_18 = NULL;
if(match_cons(t, sym_ProdRule_2))
{
j_18 = ATgetArgument(t, 0);
{
ATerm trm7 = ATgetArgument(t, 1);
if(((ATgetType(trm7) == AT_LIST) && !(ATisEmpty(trm7))))
{
l_18 = ATgetFirst((ATermList) trm7);
{
ATerm trm8 = (ATerm) ATgetNext((ATermList) trm7);
if(!(((ATgetType(trm8) == AT_LIST) && ATisEmpty(trm8))))
goto fail3 ;
}
}
else
goto fail3 ;
}
}
else
goto fail3 ;
q_18 = t;
t = j_18;
t = nonterm_to_sort_0_0(sl, t);
if((t == NULL))
goto fail3 ;
k_18 = t;
t = l_18;
t = try_tree2sort_0_0(sl, t);
if((t == NULL))
goto fail3 ;
p_18 = t;
t = q_18;
t = (ATerm) ATmakeAppl(sym_OpDeclInj_1, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, p_18)), (ATerm) ATmakeAppl(sym_ConstType_1, k_18)));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm not_empty_prodrule_to_constr_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "not_empty_prodrule_to_constr_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_16 = NULL,a_17 = NULL,c_17 = NULL,d_17 = NULL,f_17 = NULL,g_17 = NULL,l_17 = NULL;
if(match_cons(t, sym_ProdRule_2))
{
y_16 = ATgetArgument(t, 0);
{
ATerm trm4 = ATgetArgument(t, 1);
if(((ATgetType(trm4) == AT_LIST) && !(ATisEmpty(trm4))))
{
ATerm trm5 = ATgetFirst((ATermList) trm4);
if(match_cons(trm5, sym_Appl_2))
{
c_17 = ATgetArgument(trm5, 0);
f_17 = ATgetArgument(trm5, 1);
}
else
goto fail1 ;
{
ATerm trm6 = (ATerm) ATgetNext((ATermList) trm4);
if(!(((ATgetType(trm6) == AT_LIST) && ATisEmpty(trm6))))
goto fail1 ;
}
}
else
goto fail1 ;
}
}
else
goto fail1 ;
l_17 = t;
t = y_16;
t = nonterm_to_sort_0_0(sl, t);
if((t == NULL))
goto fail1 ;
a_17 = t;
t = c_17;
t = term_to_strid_0_0(sl, t);
if((t == NULL))
goto fail1 ;
d_17 = t;
t = f_17;
{
struct str_closure q_255 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(q_255);
t = map_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail1 ;
g_17 = t;
t = l_17;
t = (ATerm) ATmakeAppl(sym_OpDecl_2, d_17, (ATerm) ATmakeAppl(sym_FunType_2, g_17, a_17));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_17 = NULL;
t = try_tree2sort_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
k_17 = t;
t = (ATerm) ATmakeAppl(sym_ConstType_1, k_17);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
ATerm empty_prodrule_to_constr_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "empty_prodrule_to_constr_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_16 = NULL,n_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
if(match_cons(t, sym_ProdRule_2))
{
k_16 = ATgetArgument(t, 0);
{
ATerm trm0 = ATgetArgument(t, 1);
if(((ATgetType(trm0) == AT_LIST) && !(ATisEmpty(trm0))))
{
ATerm trm1 = ATgetFirst((ATermList) trm0);
if(match_cons(trm1, sym_Appl_2))
{
p_16 = ATgetArgument(trm1, 0);
{
ATerm trm2 = ATgetArgument(trm1, 1);
if(!(((ATgetType(trm2) == AT_LIST) && ATisEmpty(trm2))))
goto fail0 ;
}
}
else
goto fail0 ;
{
ATerm trm3 = (ATerm) ATgetNext((ATermList) trm0);
if(!(((ATgetType(trm3) == AT_LIST) && ATisEmpty(trm3))))
goto fail0 ;
}
}
else
goto fail0 ;
}
}
else
goto fail0 ;
r_16 = t;
t = k_16;
t = nonterm_to_sort_0_0(sl, t);
if((t == NULL))
goto fail0 ;
n_16 = t;
t = p_16;
t = term_to_strid_0_0(sl, t);
if((t == NULL))
goto fail0 ;
q_16 = t;
t = r_16;
t = (ATerm) ATmakeAppl(sym_OpDecl_2, q_16, (ATerm) ATmakeAppl(sym_ConstType_1, n_16));
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 114));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
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
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(collect_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(xtc_temp_files_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_temp_files_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_ensure_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_ensure_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_to_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ConcTerm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ConcTerm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(NilTerm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("NilTerm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ConsTerm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ConsTerm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ProdRule_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ProdRule_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ProdRules_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ProdRules_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(RTG_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("RTG_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_rtg_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_rtg_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtg_reduce_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg_reduce_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtg_group_productions_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg_group_productions_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtg_ungroup_productions_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg_ungroup_productions_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(GetInternalDefaultXtcRepository_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("GetInternalDefaultXtcRepository_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aux_ListTree2Sort_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aux_ListTree2Sort_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted43);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted43", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ListTree2Sort_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ListTree2Sort_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aux_OptionTree2Sort_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aux_OptionTree2Sort_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(OptionTree2Sort_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("OptionTree2Sort_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(HelpString_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("HelpString_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtg2sig_about_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg2sig_about_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtg2sig_usage_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg2sig_usage_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_rtg2sig_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_rtg2sig_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_rtg_front_end_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_rtg_front_end_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_pp_abstract_stratego_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_pp_abstract_stratego_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(guess_module_name_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("guess_module_name_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(module_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("module_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(DesugarToolDoc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("DesugarToolDoc_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(tool_doc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tool_doc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_abox2text_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_abox2text_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(declare_plus_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("declare_plus_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(declare_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("declare_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_list_prodrule_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_list_prodrule_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(prodrule_to_constr_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("prodrule_to_constr_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(core_rtg2sig_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("core_rtg2sig_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(nonterm_to_sort_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("nonterm_to_sort_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(tree2sort_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tree2sort_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_tree2sort_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_tree2sort_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(term_to_strid_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("term_to_strid_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ref_prodrule_to_constr_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ref_prodrule_to_constr_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(not_empty_prodrule_to_constr_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("not_empty_prodrule_to_constr_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(empty_prodrule_to_constr_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("empty_prodrule_to_constr_0_0", 0, ATtrue)), &(closures[closures_index]));
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
