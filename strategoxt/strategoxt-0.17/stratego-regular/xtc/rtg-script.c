#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Group_0;
static Symbol sym_Reduce_0;
static Symbol sym_DeleteTerm_1;
static Symbol sym_DeleteTerm_2;
static Symbol sym_DeleteNonterm_1;
static Symbol sym_Include_1;
static Symbol sym_Read_1;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_FILE_1;
static Symbol sym_EscapeSeq_1;
static Symbol sym_Chars_1;
static Symbol sym_Plain_1;
static Symbol sym_Quoted_1;
static Symbol sym_Nonterm_1;
static Symbol sym_ProdRule_2;
static Symbol sym_ProdRules_1;
static Symbol sym_Start_1;
static Symbol sym_RTG_2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
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
sym_Group_0 = ATmakeSymbol("Group", 0, ATfalse);
ATprotectSymbol(sym_Group_0);
sym_Reduce_0 = ATmakeSymbol("Reduce", 0, ATfalse);
ATprotectSymbol(sym_Reduce_0);
sym_DeleteTerm_1 = ATmakeSymbol("DeleteTerm", 1, ATfalse);
ATprotectSymbol(sym_DeleteTerm_1);
sym_DeleteTerm_2 = ATmakeSymbol("DeleteTerm", 2, ATfalse);
ATprotectSymbol(sym_DeleteTerm_2);
sym_DeleteNonterm_1 = ATmakeSymbol("DeleteNonterm", 1, ATfalse);
ATprotectSymbol(sym_DeleteNonterm_1);
sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
ATprotectSymbol(sym_Include_1);
sym_Read_1 = ATmakeSymbol("Read", 1, ATfalse);
ATprotectSymbol(sym_Read_1);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
sym_EscapeSeq_1 = ATmakeSymbol("EscapeSeq", 1, ATfalse);
ATprotectSymbol(sym_EscapeSeq_1);
sym_Chars_1 = ATmakeSymbol("Chars", 1, ATfalse);
ATprotectSymbol(sym_Chars_1);
sym_Plain_1 = ATmakeSymbol("Plain", 1, ATfalse);
ATprotectSymbol(sym_Plain_1);
sym_Quoted_1 = ATmakeSymbol("Quoted", 1, ATfalse);
ATprotectSymbol(sym_Quoted_1);
sym_Nonterm_1 = ATmakeSymbol("Nonterm", 1, ATfalse);
ATprotectSymbol(sym_Nonterm_1);
sym_ProdRule_2 = ATmakeSymbol("ProdRule", 2, ATfalse);
ATprotectSymbol(sym_ProdRule_2);
sym_ProdRules_1 = ATmakeSymbol("ProdRules", 1, ATfalse);
ATprotectSymbol(sym_ProdRules_1);
sym_Start_1 = ATmakeSymbol("Start", 1, ATfalse);
ATprotectSymbol(sym_Start_1);
sym_RTG_2 = ATmakeSymbol("RTG", 2, ATfalse);
ATprotectSymbol(sym_RTG_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
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
term2 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("tool-doc2abox", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeInt(80);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("Summary:", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("Description:", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(sym__2, term17, term19);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("Options:", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("Authors:", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("Author:", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol(" <", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("Website:", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("Please report bugs to ", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("Version", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("Package", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("Configuration:", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("Default XTC Repository", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("Current XTC Repository", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("License:", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) ", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("You should have received a copy of the GNU General Public License \n        along with this program; if not, write to the Free Software Foundation, \n        Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is distributed in the hope that it will be useful, but \n        WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or \n        FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more \n        details.", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or\n        modify it under the terms of the GNU General Public License as published by the \n        Free Software Foundation; either version 2 of the License, or (at your option) \n        any later version.", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("You should have received a copy of the GNU Lesser General Public \n         License along with this library; if not, write to the Free Software Foundation, \n         Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is distributed in the hope that it will be useful, but \n         WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or \n         FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License \n         for more details.", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or modify \n         it under the terms of the GNU Lesser General Public License as published by the \n         Free Software Foundation; either version 2 of the License, or (at your option) \n         any later version.", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(sym_HelpString_2, term69, term69);
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(sym_Chars_1, (ATerm) ATempty);
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeInt(92);
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(sym_EscapeSeq_1, term75);
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeInt(93);
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(sym_EscapeSeq_1, term79);
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg.pp.af", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtg", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d|--Include d", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("Include RTGs from directory d", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(sym_HelpString_2, term93, term95);
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("' not found", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg-script: file '", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(sym_AutoReportBugs_0);
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(sym_OptionUsage_0);
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("Produces an RTG by executing an RTG script", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(sym_Summary_1, term109);
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg-script -i file [OPTIONS]", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(sym_Usage_1, term113);
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(sym_CurrentXTCRepository_0);
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(sym_DefaultXTCRepository_0);
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(ATmakeSymbol("2002-2008", 0, ATtrue));
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(ATmakeSymbol("Martin Bravenboer <martin.bravenboer@gmail.com>", 0, ATtrue));
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(sym_GNU__LGPL_2, term121, term123);
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(ATmakeSymbol("Martin Bravenboer", 0, ATtrue));
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(ATmakeSymbol("martin.bravenboer@gmail.com", 0, ATtrue));
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(sym_Person_2, term127, term129);
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(sym_Author_1, term131);
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(sym_AutoProgram_0);
ATprotect(&(term135));
term135 = term134;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm table_get_0_0 (StrSL sl, ATerm t);
ATerm foldl_1_0 (StrSL sl, StrCL d_166, ATerm t);
ATerm foldr_2_0 (StrSL sl, StrCL v_165, StrCL z_165, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL y_163, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL e_163, ATerm t);
ATerm union_0_0 (StrSL sl, ATerm t);
ATerm finally_2_0 (StrSL sl, StrCL d_125, StrCL h_125, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL e_124, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL e_120, ATerm t);
ATerm oncetd_1_0 (StrSL sl, StrCL p_117, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL i_116, ATerm t);
ATerm perror_0_0 (StrSL sl, ATerm t);
ATerm read_text_file_0_0 (StrSL sl, ATerm t);
ATerm fputs_0_0 (StrSL sl, ATerm t);
ATerm fclose_0_0 (StrSL sl, ATerm t);
ATerm open_stream_0_0 (StrSL sl, ATerm t);
ATerm echo_0_0 (StrSL sl, ATerm t);
ATerm fatal_error_0_0 (StrSL sl, ATerm t);
ATerm ReadFromFile_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm is_alphanum_0_0 (StrSL sl, ATerm t);
ATerm split_before_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm explode_string_0_0 (StrSL sl, ATerm t);
ATerm implode_string_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm post_extend_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL e_105, StrCL f_105, StrCL g_105, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm find_in_path_0_0 (StrSL sl, ATerm t);
ATerm FILE_1_0 (StrSL sl, StrCL w_98, ATerm t);
ATerm xtc_location_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_5_0 (StrSL sl, StrCL f_98, StrCL g_98, StrCL h_98, StrCL i_98, StrCL j_98, ATerm t);
ATerm xtc_temp_files_1_0 (StrSL sl, StrCL t_97, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL y_96, StrCL z_96, ATerm t);
ATerm xtc_transform_1_0 (StrSL sl, StrCL x_96, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
ATerm xtc_new_file_0_0 (StrSL sl, ATerm t);
ATerm TupleTerm_1_0 (StrSL sl, StrCL l_76, ATerm t);
ATerm EscapeSeq_1_0 (StrSL sl, StrCL k_76, ATerm t);
ATerm Chars_1_0 (StrSL sl, StrCL j_76, ATerm t);
ATerm Term_1_0 (StrSL sl, StrCL f_76, ATerm t);
ATerm Nonterm_1_0 (StrSL sl, StrCL x_75, ATerm t);
ATerm ProdRule_2_0 (StrSL sl, StrCL i_75, StrCL l_75, ATerm t);
ATerm ProdRules_1_0 (StrSL sl, StrCL g_75, ATerm t);
ATerm Start_1_0 (StrSL sl, StrCL f_75, ATerm t);
ATerm RTG_2_0 (StrSL sl, StrCL z_74, StrCL d_75, ATerm t);
ATerm parse_rtg_file_0_0 (StrSL sl, ATerm t);
ATerm rtg_reduce_0_0 (StrSL sl, ATerm t);
ATerm rtg_group_productions_0_0 (StrSL sl, ATerm t);
ATerm ast2box_0_1 (StrSL sl, ATerm o_62, ATerm t);
ATerm box2text_stream_0_2 (StrSL sl, ATerm l_62, ATerm n_62, ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (StrSL sl, ATerm t);
ATerm HelpString_2_0 (StrSL sl, StrCL b_13, StrCL c_13, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm rtg_script_about_0_0 (StrSL sl, ATerm t);
ATerm rtg_script_usage_0_0 (StrSL sl, ATerm t);
ATerm get_includes_0_0 (StrSL sl, ATerm t);
ATerm find_in_includes_0_0 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
ATerm include_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
ATerm eval_command_0_0 (StrSL sl, ATerm t);
ATerm xtc_pp_rtg_0_0 (StrSL sl, ATerm t);
ATerm pp_rtg_box_0_0 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm pp_rtg_file_0_1 (StrSL sl, ATerm h_8, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
ATerm ExplodeId_0_0 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
ATerm rtg_ppfix_0_0 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm ensure_help_string_0_0 (StrSL sl, ATerm t);
ATerm package_bugreport_0_0 (StrSL sl, ATerm t);
ATerm package_version_0_0 (StrSL sl, ATerm t);
ATerm package_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
ATerm DesugarToolDoc_0_0 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm tool_doc_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm xtc_abox2text_1_0 (StrSL sl, StrCL p_2, ATerm t);
ATerm HelpString_2_0 (StrSL sl, StrCL b_13, StrCL c_13, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "HelpString_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_187 = NULL,l_187 = NULL,m_187 = NULL,o_187 = NULL,p_187 = NULL;
ATerm trm73;
trm73 = (ATerm) ATgetAnnotations(t);
if((trm73 == NULL))
trm73 = (ATerm) ATempty;
if(match_cons(t, sym_HelpString_2))
{
l_187 = ATgetArgument(t, 0);
m_187 = ATgetArgument(t, 1);
}
else
goto fail77 ;
n_187 = trm73;
t = l_187;
t = cl_fun(b_13)(cl_sl(b_13), t);
if((t == NULL))
goto fail77 ;
o_187 = t;
t = m_187;
t = cl_fun(c_13)(cl_sl(c_13), t);
if((t == NULL))
goto fail77 ;
p_187 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_HelpString_2, o_187, p_187), n_187);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_194 = { &(include_option_0_0) , sl };
StrCL lifted71_cl = &(c_194);
struct str_closure d_194 = { &(rtg_script_usage_0_0) , sl };
StrCL lifted72_cl = &(d_194);
struct str_closure e_194 = { &(rtg_script_about_0_0) , sl };
StrCL lifted73_cl = &(e_194);
struct str_closure f_194 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(f_194);
struct str_closure g_194 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(g_194);
t = xtc_io_wrap_5_0(sl, lifted71_cl, lifted72_cl, lifted73_cl, lifted74_cl, lifted75_cl, t);
if((t == NULL))
goto fail74 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_190 = NULL,y_190 = NULL;
t = read_from_0_0(sl_up(sl), t);
if((t == NULL))
goto fail76 ;
{
struct str_closure b_194 = { &(eval_command_0_0) , sl_up(sl) };
StrCL lifted76_cl = &(b_194);
y_190 = t;
x_190 = t;
t = (ATerm) ATmakeAppl(sym__2, x_190, term3);
t = foldl_1_0(sl_up(sl), lifted76_cl, t);
if((t == NULL))
goto fail76 ;
t = xtc_pp_rtg_0_0(sl_up(sl), t);
if((t == NULL))
goto fail76 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
ATerm rtg_script_about_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rtg_script_about_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Config_1, (ATerm) ATinsert(ATinsert(ATempty, term117), term119))), term125), term133), term135);
t = tool_doc_0_0(sl, t);
if((t == NULL))
goto fail73 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
ATerm rtg_script_usage_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rtg_script_usage_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term105), term107), term111), term115);
t = tool_doc_0_0(sl, t);
if((t == NULL))
goto fail72 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_includes_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_includes_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm72 = t;
ATerm p_12 = NULL,s_12 = NULL;
s_12 = t;
t = term91;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label69 ;
p_12 = t;
t = s_12;
t = (ATerm) ATmakeAppl(sym__2, p_12, (ATerm) ATinsert(ATempty, term103));
t = conc_0_0(sl, t);
if((t == NULL))
goto label69 ;
goto label68 ;
label69 :
t = trm72;
t = (ATerm) ATinsert(ATempty, term103);
goto label68 ;
label68 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
ATerm find_in_includes_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "find_in_includes_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm71 = t;
ATerm j_12 = NULL,l_12 = NULL,k_12 = NULL,m_12 = NULL;
l_12 = t;
j_12 = t;
m_12 = t;
t = get_includes_0_0(sl, t);
if((t == NULL))
goto label67 ;
k_12 = t;
t = m_12;
t = (ATerm) ATmakeAppl(sym__2, j_12, k_12);
t = find_in_path_0_0(sl, t);
if((t == NULL))
goto label67 ;
goto label66 ;
label67 :
t = trm71;
{
ATerm h_12 = NULL,n_12 = NULL,o_12 = NULL;
h_12 = t;
o_12 = t;
n_12 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term99), n_12), term101);
t = fatal_error_0_0(sl, t);
if((t == NULL))
goto fail70 ;
t = h_12;
goto label66 ;
}
label66 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
ATerm include_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "include_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_193 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(y_193);
struct str_closure z_193 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(z_193);
struct str_closure a_194 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(a_194);
t = ArgOption_3_0(sl, lifted68_cl, lifted69_cl, lifted70_cl, t);
if((t == NULL))
goto fail66 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term97;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_11 = NULL,l_11 = NULL;
l_11 = t;
k_11 = t;
t = (ATerm) ATmakeAppl(sym__2, term91, (ATerm) ATinsert(ATempty, k_11));
t = post_extend_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail68 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm70 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-I", 0, ATtrue))))
goto label65 ;
goto label64 ;
label65 :
t = trm70;
if((ATgetSymbol(t) == ATmakeSymbol("--Include", 0, ATtrue)))
goto label64 ;
else
goto fail67 ;
label64 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
ATerm eval_command_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "eval_command_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(6);
{
ATerm trm46 = t;
ATerm i_11 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm47 = ATgetArgument(t, 0);
if(match_cons(trm47, sym_Read_1))
{
i_11 = ATgetArgument(trm47, 0);
}
else
goto label46 ;
{
ATerm trm48 = ATgetArgument(t, 1);
if(!(match_cons(trm48, sym__0)))
goto label46 ;
}
}
else
goto label46 ;
t = (ATerm) ATmakeAppl(sym__2, i_11, term89);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label46 ;
t = find_in_includes_0_0(sl, t);
if((t == NULL))
goto label46 ;
t = parse_rtg_file_0_0(sl, t);
if((t == NULL))
goto label46 ;
goto label45 ;
label46 :
t = trm46;
{
ATerm trm49 = t;
ATerm h_11 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm50 = ATgetArgument(t, 0);
if(!(match_cons(trm50, sym_Reduce_0)))
goto label47 ;
h_11 = ATgetArgument(t, 1);
}
else
goto label47 ;
t = h_11;
t = rtg_reduce_0_0(sl, t);
if((t == NULL))
goto label47 ;
goto label45 ;
label47 :
t = trm49;
{
ATerm trm51 = t;
ATerm f_11 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm52 = ATgetArgument(t, 0);
if(!(match_cons(trm52, sym_Group_0)))
goto label48 ;
f_11 = ATgetArgument(t, 1);
}
else
goto label48 ;
t = f_11;
t = rtg_group_productions_0_0(sl, t);
if((t == NULL))
goto label48 ;
goto label45 ;
label48 :
t = trm51;
{
ATerm trm53 = t;
ATerm d_11 = NULL,e_11 = NULL;
sl_init_var(0, d_11);
{
struct str_closure q_192 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(q_192);
struct str_closure r_192 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(r_192);
if(match_cons(t, sym__2))
{
ATerm trm58 = ATgetArgument(t, 0);
if(match_cons(trm58, sym_DeleteNonterm_1))
{
if((d_11 == NULL))
{
d_11 = ATgetArgument(trm58, 0);
}
else
if((d_11 != ATgetArgument(trm58, 0)))
goto label49 ;
}
else
goto label49 ;
e_11 = ATgetArgument(t, 1);
}
else
goto label49 ;
t = e_11;
t = RTG_2_0(sl, lifted33_cl, lifted36_cl, t);
if((t == NULL))
goto label49 ;
}
goto label45 ;
label49 :
t = trm53;
{
ATerm trm59 = t;
ATerm z_10 = NULL,a_11 = NULL,c_11 = NULL;
sl_init_var(1, z_10);
sl_init_var(2, a_11);
{
struct str_closure d_193 = { &(_Id) , sl };
StrCL lifted39_cl = &(d_193);
struct str_closure e_193 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(e_193);
if(match_cons(t, sym__2))
{
ATerm trm62 = ATgetArgument(t, 0);
if(match_cons(trm62, sym_DeleteTerm_2))
{
if((z_10 == NULL))
{
z_10 = ATgetArgument(trm62, 0);
}
else
if((z_10 != ATgetArgument(trm62, 0)))
goto label54 ;
if((a_11 == NULL))
{
a_11 = ATgetArgument(trm62, 1);
}
else
if((a_11 != ATgetArgument(trm62, 1)))
goto label54 ;
}
else
goto label54 ;
c_11 = ATgetArgument(t, 1);
}
else
goto label54 ;
t = c_11;
t = RTG_2_0(sl, lifted39_cl, lifted40_cl, t);
if((t == NULL))
goto label54 ;
}
goto label45 ;
label54 :
t = trm59;
{
ATerm trm63 = t;
ATerm r_10 = NULL,u_10 = NULL;
sl_init_var(3, r_10);
{
struct str_closure r_193 = { &(_Id) , sl };
StrCL lifted51_cl = &(r_193);
struct str_closure s_193 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(s_193);
if(match_cons(t, sym__2))
{
ATerm trm66 = ATgetArgument(t, 0);
if(match_cons(trm66, sym_DeleteTerm_1))
{
if((r_10 == NULL))
{
r_10 = ATgetArgument(trm66, 0);
}
else
if((r_10 != ATgetArgument(trm66, 0)))
goto label59 ;
}
else
goto label59 ;
u_10 = ATgetArgument(t, 1);
}
else
goto label59 ;
t = u_10;
t = RTG_2_0(sl, lifted51_cl, lifted52_cl, t);
if((t == NULL))
goto label59 ;
}
goto label45 ;
label59 :
t = trm63;
{
ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,v_190 = NULL,w_190 = NULL;
sl_init_var(4, f_10);
sl_init_var(5, g_10);
{
struct str_closure v_193 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(v_193);
struct str_closure w_193 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(w_193);
if(match_cons(t, sym__2))
{
ATerm trm67 = ATgetArgument(t, 0);
if(match_cons(trm67, sym_Include_1))
{
e_10 = ATgetArgument(trm67, 0);
}
else
goto fail36 ;
d_10 = ATgetArgument(t, 1);
}
else
goto fail36 ;
h_10 = t;
t = e_10;
{
struct str_closure x_193 = { &(eval_command_0_0) , sl };
StrCL lifted63_cl = &(x_193);
w_190 = t;
v_190 = t;
t = (ATerm) ATmakeAppl(sym__2, v_190, term3);
t = foldl_1_0(sl, lifted63_cl, t);
if((t == NULL))
goto fail36 ;
if(match_cons(t, sym_RTG_2))
{
ATerm trm68 = ATgetArgument(t, 0);
if(match_cons(trm68, sym_Start_1))
{
if((f_10 == NULL))
{
f_10 = ATgetArgument(trm68, 0);
}
else
if((f_10 != ATgetArgument(trm68, 0)))
goto fail36 ;
}
else
goto fail36 ;
{
ATerm trm69 = ATgetArgument(t, 1);
if(match_cons(trm69, sym_ProdRules_1))
{
if((g_10 == NULL))
{
g_10 = ATgetArgument(trm69, 0);
}
else
if((g_10 != ATgetArgument(trm69, 0)))
goto fail36 ;
}
else
goto fail36 ;
}
}
else
goto fail36 ;
t = h_10;
t = d_10;
t = RTG_2_0(sl, lifted64_cl, lifted66_cl, t);
if((t == NULL))
goto fail36 ;
else
goto label45 ;
}
}
}
}
}
}
}
}
label45 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_193 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(u_193);
t = ProdRules_1_0(sl_up(sl), lifted67_cl, t);
if((t == NULL))
goto fail64 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted67 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted67";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_10 = NULL,n_10 = NULL;
n_10 = t;
m_10 = t;
if((sl_readvar(5, sl_up(sl)) == NULL))
goto fail65 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, m_10, sl_readvar(5, sl_up(sl)));
}
t = conc_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail65 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_193 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(t_193);
t = Start_1_0(sl_up(sl), lifted65_cl, t);
if((t == NULL))
goto fail62 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_10 = NULL,l_10 = NULL;
l_10 = t;
i_10 = t;
if((sl_readvar(4, sl_up(sl)) == NULL))
goto fail63 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(4, sl_up(sl)), i_10);
}
t = union_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail63 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_193 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(q_193);
t = ProdRules_1_0(sl_up(sl), lifted53_cl, t);
if((t == NULL))
goto fail53 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_193 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(h_193);
struct str_closure p_193 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(p_193);
t = map_1_0(sl_up(sl_up(sl)), lifted54_cl, t);
if((t == NULL))
goto fail54 ;
t = filter_1_0(sl_up(sl_up(sl)), lifted60_cl, t);
if((t == NULL))
goto fail54 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_193 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(o_193);
t = try_1_0(sl_up(sl_up(sl_up(sl))), lifted55_cl, t);
if((t == NULL))
goto fail57 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_193 = { &(_Id) , sl_up(sl_up(sl_up(sl_up(sl)))) };
StrCL lifted56_cl = &(k_193);
struct str_closure l_193 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(l_193);
t = ProdRule_2_0(sl_up(sl_up(sl_up(sl_up(sl)))), lifted56_cl, lifted57_cl, t);
if((t == NULL))
goto fail58 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_193 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(j_193);
t = filter_1_0(sl_up(sl_up(sl_up(sl_up(sl_up(sl))))), lifted58_cl, t);
if((t == NULL))
goto fail59 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm65 = t;
struct str_closure i_193 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(i_193);
t = oncetd_1_0(sl_up(sl_up(sl_up(sl_up(sl_up(sl_up(sl)))))), lifted59_cl, t);
if((t == NULL))
goto label63 ;
goto fail60 ;
label63 :
t = trm65;
goto label62 ;
label62 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(3, sl_up(sl_up(sl_up(sl_up(sl_up(sl_up(sl))))))) == NULL))
{
sl_readvar(3, sl_up(sl_up(sl_up(sl_up(sl_up(sl_up(sl))))))) = t;
}
else
if((sl_readvar(3, sl_up(sl_up(sl_up(sl_up(sl_up(sl_up(sl))))))) != t))
goto fail61 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm64 = t;
struct str_closure f_193 = { &(_Id) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted61_cl = &(f_193);
struct str_closure g_193 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(g_193);
t = ProdRule_2_0(sl_up(sl_up(sl_up(sl))), lifted61_cl, lifted62_cl, t);
if((t == NULL))
goto label61 ;
goto fail55 ;
label61 :
t = trm64;
goto label60 ;
label60 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
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
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_193 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(c_193);
t = ProdRules_1_0(sl_up(sl), lifted41_cl, t);
if((t == NULL))
goto fail43 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_192 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(u_192);
struct str_closure b_193 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(b_193);
t = map_1_0(sl_up(sl_up(sl)), lifted42_cl, t);
if((t == NULL))
goto fail44 ;
t = filter_1_0(sl_up(sl_up(sl)), lifted48_cl, t);
if((t == NULL))
goto fail44 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_193 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(a_193);
t = try_1_0(sl_up(sl_up(sl_up(sl))), lifted43_cl, t);
if((t == NULL))
goto fail47 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_192 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(x_192);
struct str_closure y_192 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(y_192);
t = ProdRule_2_0(sl_up(sl_up(sl_up(sl_up(sl)))), lifted44_cl, lifted45_cl, t);
if((t == NULL))
goto fail48 ;
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
struct str_closure w_192 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(w_192);
t = filter_1_0(sl_up(sl_up(sl_up(sl_up(sl_up(sl))))), lifted46_cl, t);
if((t == NULL))
goto fail50 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm61 = t;
struct str_closure v_192 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(v_192);
t = oncetd_1_0(sl_up(sl_up(sl_up(sl_up(sl_up(sl_up(sl)))))), lifted47_cl, t);
if((t == NULL))
goto label58 ;
goto fail51 ;
label58 :
t = trm61;
goto label57 ;
label57 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl_up(sl_up(sl_up(sl_up(sl_up(sl_up(sl))))))) == NULL))
{
sl_readvar(2, sl_up(sl_up(sl_up(sl_up(sl_up(sl_up(sl))))))) = t;
}
else
if((sl_readvar(2, sl_up(sl_up(sl_up(sl_up(sl_up(sl_up(sl))))))) != t))
goto fail52 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Nonterm_1))
{
if((sl_readvar(1, sl_up(sl_up(sl_up(sl_up(sl))))) == NULL))
{
sl_readvar(1, sl_up(sl_up(sl_up(sl_up(sl))))) = ATgetArgument(t, 0);
}
else
if((sl_readvar(1, sl_up(sl_up(sl_up(sl_up(sl))))) != ATgetArgument(t, 0)))
goto fail49 ;
}
else
goto fail49 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm60 = t;
struct str_closure s_192 = { &(_Id) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted49_cl = &(s_192);
struct str_closure t_192 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(t_192);
t = ProdRule_2_0(sl_up(sl_up(sl_up(sl))), lifted49_cl, lifted50_cl, t);
if((t == NULL))
goto label56 ;
goto fail45 ;
label56 :
t = trm60;
goto label55 ;
label55 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail46 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_192 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(p_192);
t = ProdRules_1_0(sl_up(sl), lifted37_cl, t);
if((t == NULL))
goto fail40 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_192 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(o_192);
t = filter_1_0(sl_up(sl_up(sl)), lifted38_cl, t);
if((t == NULL))
goto fail41 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm55 = t;
if(match_cons(t, sym_ProdRule_2))
{
ATerm trm56 = ATgetArgument(t, 0);
if(match_cons(trm56, sym_Nonterm_1))
{
if((sl_readvar(0, sl_up(sl_up(sl))) == NULL))
{
sl_readvar(0, sl_up(sl_up(sl))) = ATgetArgument(trm56, 0);
}
else
if((sl_readvar(0, sl_up(sl_up(sl))) != ATgetArgument(trm56, 0)))
goto label53 ;
}
else
goto label53 ;
{
ATerm trm57 = ATgetArgument(t, 1);
}
}
else
goto label53 ;
goto fail42 ;
label53 :
t = trm55;
goto label52 ;
label52 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_192 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(n_192);
t = Start_1_0(sl_up(sl), lifted34_cl, t);
if((t == NULL))
goto fail37 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_192 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(l_192);
t = filter_1_0(sl_up(sl_up(sl)), lifted35_cl, t);
if((t == NULL))
goto fail38 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm54 = t;
if(match_cons(t, sym_Nonterm_1))
{
if((sl_readvar(0, sl_up(sl_up(sl))) == NULL))
{
sl_readvar(0, sl_up(sl_up(sl))) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl_up(sl_up(sl))) != ATgetArgument(t, 0)))
goto label51 ;
}
else
goto label51 ;
goto fail39 ;
label51 :
t = trm54;
goto label50 ;
label50 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_pp_rtg_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_pp_rtg_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
h_9 = t;
j_9 = t;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail35 ;
i_9 = t;
t = j_9;
t = i_9;
f_9 = t;
t = h_9;
t = pp_rtg_file_0_1(sl, f_9, t);
if((t == NULL))
goto fail35 ;
t = (ATerm) ATmakeAppl(sym_FILE_1, f_9);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp_rtg_box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp_rtg_box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
t = rtg_ppfix_0_0(sl, t);
if((t == NULL))
goto fail34 ;
w_8 = t;
y_8 = t;
t = term87;
t = xtc_find_0_0(sl, t);
if((t == NULL))
goto fail34 ;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto fail34 ;
x_8 = t;
t = y_8;
t = (ATerm) ATinsert(ATempty, x_8);
u_8 = t;
t = w_8;
t = ast2box_0_1(sl, u_8, t);
if((t == NULL))
goto fail34 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp_rtg_file_0_1 (StrSL sl, ATerm h_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp_rtg_file_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm j_8 = NULL,k_8 = NULL;
sl_init_var(0, j_8);
{
struct str_closure j_192 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(j_192);
struct str_closure k_192 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(k_192);
t = pp_rtg_box_0_0(sl, t);
if((t == NULL))
goto fail30 ;
k_8 = t;
t = (ATerm) ATmakeAppl(sym__2, h_8, term85);
{
ATerm trm44 = t;
t = open_stream_0_0(sl, t);
if((t == NULL))
goto label44 ;
goto label43 ;
label44 :
t = trm44;
{
ATerm s_190 = NULL;
if(match_cons(t, sym__2))
{
s_190 = ATgetArgument(t, 0);
{
ATerm trm45 = ATgetArgument(t, 1);
}
}
else
goto fail30 ;
t = s_190;
t = perror_0_0(sl, t);
if((t == NULL))
goto fail30 ;
goto fail30 ;
}
label43 :
;
if((j_8 == NULL))
{
j_8 = t;
}
else
if((j_8 != t))
goto fail30 ;
t = k_8;
t = finally_2_0(sl, lifted30_cl, lifted31_cl, t);
if((t == NULL))
goto fail30 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_192 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(i_192);
t = try_1_0(sl_up(sl), lifted32_cl, t);
if((t == NULL))
goto fail32 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail33 ;
else
{
t = sl_readvar(0, sl_up(sl));
}
t = fclose_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail33 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_8 = NULL,q_8 = NULL;
q_8 = t;
t = term9;
p_8 = t;
t = q_8;
if((sl_readvar(0, sl) == NULL))
goto fail31 ;
else
{
t = box2text_stream_0_2(sl_up(sl), p_8, sl_readvar(0, sl), t);
if((t == NULL))
goto fail31 ;
}
if((sl_readvar(0, sl) == NULL))
goto fail31 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term83, sl_readvar(0, sl));
}
t = fputs_0_0(sl_up(sl), t);
if((t == NULL))
goto fail31 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
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
ATerm c_7 = NULL;
sl_init_var(0, c_7);
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail21 ;
{
struct str_closure z_191 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(z_191);
struct str_closure a_192 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(a_192);
t = foldr_2_0(sl, lifted21_cl, lifted22_cl, t);
if((t == NULL))
goto fail21 ;
{
struct str_closure c_192 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(c_192);
t = filter_1_0(sl, lifted23_cl, t);
if((t == NULL))
goto fail21 ;
{
ATerm trm37 = t;
ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,s_7 = NULL,t_7 = NULL;
n_7 = t;
{
ATerm trm38;
trm38 = (ATerm) ATgetAnnotations(t);
if((trm38 == NULL))
trm38 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
o_7 = ATgetFirst((ATermList) t);
p_7 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label36 ;
t_7 = trm38;
t = o_7;
{
struct str_closure e_192 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(e_192);
t = Chars_1_0(sl, lifted25_cl, t);
if((t == NULL))
goto label36 ;
q_7 = t;
t = p_7;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label36 ;
s_7 = t;
{
ATerm trm42;
trm42 = CheckATermList(s_7);
if((trm42 == NULL))
goto label36 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm42, q_7), t_7);
t = n_7;
}
}
}
{
ATerm u_7 = NULL,v_7 = NULL;
if((c_7 == NULL))
goto fail21 ;
else
{
t = c_7;
}
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail21 ;
v_7 = t;
u_7 = t;
t = (ATerm) ATmakeAppl(sym_Plain_1, u_7);
goto label35 ;
}
label36 :
t = trm37;
{
ATerm d_8 = NULL,e_8 = NULL;
struct str_closure h_192 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(h_192);
t = map_1_0(sl, lifted27_cl, t);
if((t == NULL))
goto fail21 ;
e_8 = t;
d_8 = t;
t = (ATerm) ATmakeAppl(sym_Quoted_1, d_8);
goto label35 ;
}
label35 :
;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm43 = t;
struct str_closure f_192 = { &(implode_string_0_0) , sl_up(sl) };
StrCL lifted28_cl = &(f_192);
t = Chars_1_0(sl_up(sl), lifted28_cl, t);
if((t == NULL))
goto label42 ;
goto label41 ;
label42 :
t = trm43;
{
struct str_closure g_192 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(g_192);
t = EscapeSeq_1_0(sl_up(sl), lifted29_cl, t);
if((t == NULL))
goto fail28 ;
else
goto label41 ;
}
label41 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_8 = NULL,c_8 = NULL;
c_8 = t;
b_8 = t;
t = (ATerm) ATinsert(ATempty, b_8);
t = implode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail29 ;
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
struct str_closure d_192 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(d_192);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail26 ;
t = map_1_0(sl_up(sl), lifted26_cl, t);
if((t == NULL))
goto fail26 ;
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
{
ATerm trm39 = t;
t = is_alphanum_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label38 ;
goto label37 ;
label38 :
t = trm39;
{
ATerm trm40 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 39))))
goto label39 ;
goto label37 ;
label39 :
t = trm40;
{
ATerm trm41 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 45))))
goto label40 ;
goto label37 ;
label40 :
t = trm41;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 95)))
goto label37 ;
else
goto fail27 ;
}
}
label37 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm36 = t;
struct str_closure b_192 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(b_192);
t = Chars_1_0(sl_up(sl), lifted24_cl, t);
if((t == NULL))
goto label34 ;
goto fail24 ;
label34 :
t = trm36;
goto label33 ;
label33 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail25 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm24 = t;
ATerm d_7 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm25 = ATgetArgument(t, 0);
if(!(((ATgetType(trm25) == AT_INT) && (ATgetInt((ATermInt) trm25) == 92))))
goto label30 ;
d_7 = ATgetArgument(t, 1);
}
else
goto label30 ;
{
ATerm trm26;
trm26 = CheckATermList(d_7);
if((trm26 == NULL))
goto label30 ;
t = (ATerm) ATinsert((ATermList)trm26, term77);
}
goto label29 ;
label30 :
t = trm24;
{
ATerm trm27 = t;
ATerm e_7 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm28 = ATgetArgument(t, 0);
if(!(((ATgetType(trm28) == AT_INT) && (ATgetInt((ATermInt) trm28) == 93))))
goto label31 ;
e_7 = ATgetArgument(t, 1);
}
else
goto label31 ;
{
ATerm trm29;
trm29 = CheckATermList(e_7);
if((trm29 == NULL))
goto label31 ;
t = (ATerm) ATinsert((ATermList)trm29, term81);
}
goto label29 ;
label31 :
t = trm27;
{
ATerm trm30 = t;
ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
if(match_cons(t, sym__2))
{
f_7 = ATgetArgument(t, 0);
{
ATerm trm31 = ATgetArgument(t, 1);
if(((ATgetType(trm31) == AT_LIST) && !(ATisEmpty(trm31))))
{
ATerm trm32 = ATgetFirst((ATermList) trm31);
if(match_cons(trm32, sym_Chars_1))
{
g_7 = ATgetArgument(trm32, 0);
}
else
goto label32 ;
h_7 = (ATerm) ATgetNext((ATermList) trm31);
}
else
goto label32 ;
}
}
else
goto label32 ;
{
ATerm trm34;
ATerm trm33;
trm33 = CheckATermList(h_7);
if((trm33 == NULL))
goto label32 ;
trm34 = CheckATermList(g_7);
if((trm34 == NULL))
goto label32 ;
t = (ATerm) ATinsert((ATermList)trm33, (ATerm) ATmakeAppl(sym_Chars_1, (ATerm) ATinsert((ATermList)trm34, f_7)));
}
goto label29 ;
label32 :
t = trm30;
{
ATerm i_7 = NULL,m_7 = NULL;
if(match_cons(t, sym__2))
{
i_7 = ATgetArgument(t, 0);
m_7 = ATgetArgument(t, 1);
}
else
goto fail23 ;
{
ATerm trm35;
trm35 = CheckATermList(m_7);
if((trm35 == NULL))
goto fail23 ;
t = (ATerm) ATinsert((ATermList)trm35, (ATerm) ATmakeAppl(sym_Chars_1, (ATerm) ATinsert(ATempty, i_7)));
goto label29 ;
}
}
}
}
label29 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term73);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm rtg_ppfix_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rtg_ppfix_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_191 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(y_191);
t = topdown_1_0(sl, lifted14_cl, t);
if((t == NULL))
goto fail18 ;
}
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
{
ATerm trm21 = t;
ATerm z_6 = NULL;
z_6 = t;
{
ATerm trm22 = t;
struct str_closure s_191 = { &(is_string_0_0) , sl_up(sl) };
StrCL lifted15_cl = &(s_191);
t = Term_1_0(sl_up(sl), lifted15_cl, t);
if((t == NULL))
goto label27 ;
goto label26 ;
label27 :
t = trm22;
{
struct str_closure t_191 = { &(is_string_0_0) , sl_up(sl) };
StrCL lifted16_cl = &(t_191);
t = Nonterm_1_0(sl_up(sl), lifted16_cl, t);
if((t == NULL))
goto label25 ;
else
goto label26 ;
}
label26 :
;
t = z_6;
}
{
ATerm trm23 = t;
struct str_closure u_191 = { &(ExplodeId_0_0) , sl_up(sl) };
StrCL lifted17_cl = &(u_191);
t = Term_1_0(sl_up(sl), lifted17_cl, t);
if((t == NULL))
goto label28 ;
goto label24 ;
label28 :
t = trm23;
{
struct str_closure v_191 = { &(ExplodeId_0_0) , sl_up(sl) };
StrCL lifted18_cl = &(v_191);
t = Nonterm_1_0(sl_up(sl), lifted18_cl, t);
if((t == NULL))
goto fail19 ;
else
goto label24 ;
}
}
label25 :
t = trm21;
{
struct str_closure x_191 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(x_191);
t = try_1_0(sl_up(sl), lifted19_cl, t);
if((t == NULL))
goto fail19 ;
else
goto label24 ;
}
label24 :
;
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
{
struct str_closure w_191 = { &(int_to_string_0_0) , sl_up(sl_up(sl)) };
StrCL lifted20_cl = &(w_191);
t = TupleTerm_1_0(sl_up(sl_up(sl)), lifted20_cl, t);
if((t == NULL))
goto fail20 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
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
struct str_closure q_191 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(q_191);
struct str_closure r_191 = { &(is_string_0_0) , sl };
StrCL lifted13_cl = &(r_191);
t = HelpString_2_0(sl, lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto label20 ;
goto label19 ;
label20 :
t = trm18;
{
ATerm trm20 = t;
ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL;
v_6 = t;
y_6 = t;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label23 ;
t = (ATerm) ATmakeAppl(sym__2, v_6, term67);
t = split_before_0_0(sl, t);
if((t == NULL))
goto label23 ;
if(match_cons(t, sym__2))
{
w_6 = ATgetArgument(t, 0);
x_6 = ATgetArgument(t, 1);
}
else
goto label23 ;
t = y_6;
t = (ATerm) ATmakeAppl(sym_HelpString_2, w_6, x_6);
goto label19 ;
label23 :
t = trm20;
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto fail16 ;
t = term71;
goto label19 ;
}
label19 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
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
goto fail17 ;
else
goto label21 ;
label21 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
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
goto fail15 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
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
goto fail14 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
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
goto fail13 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
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
ATerm r_6 = NULL,t_6 = NULL,u_6 = NULL;
if(match_cons(t, sym_Usage_1))
{
r_6 = ATgetArgument(t, 0);
}
else
goto label1 ;
u_6 = t;
t = (ATerm) ATmakeAppl(sym__2, term11, r_6);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label1 ;
t_6 = t;
t = u_6;
t = (ATerm) ATmakeAppl(sym_Line_1, t_6);
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
ATerm q_6 = NULL;
if(match_cons(t, sym_Summary_1))
{
q_6 = ATgetArgument(t, 0);
}
else
goto label2 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Paragraph_1, q_6)));
goto label0 ;
label2 :
t = trm1;
{
ATerm trm2 = t;
ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL;
if(match_cons(t, sym_Description_1))
{
l_6 = ATgetArgument(t, 0);
}
else
goto label3 ;
n_6 = t;
t = l_6;
{
struct str_closure j_191 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(j_191);
t = map_1_0(sl, lifted8_cl, t);
if((t == NULL))
goto label3 ;
m_6 = t;
t = n_6;
t = (ATerm) ATmakeAppl(sym_HSection_2, term15, m_6);
}
goto label0 ;
label3 :
t = trm2;
{
ATerm trm3 = t;
ATerm j_6 = NULL,k_6 = NULL;
if(!(match_cons(t, sym_OptionUsage_0)))
goto label4 ;
k_6 = t;
t = term21;
t = table_get_0_0(sl, t);
if((t == NULL))
goto label4 ;
t = reverse_0_0(sl, t);
if((t == NULL))
goto label4 ;
{
struct str_closure k_191 = { &(ensure_help_string_0_0) , sl };
StrCL lifted9_cl = &(k_191);
t = map_1_0(sl, lifted9_cl, t);
if((t == NULL))
goto label4 ;
{
struct str_closure l_191 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(l_191);
t = filter_1_0(sl, lifted10_cl, t);
if((t == NULL))
goto label4 ;
j_6 = t;
t = k_6;
t = (ATerm) ATmakeAppl(sym_HSection_2, term23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, j_6)));
}
}
goto label0 ;
label4 :
t = trm3;
{
ATerm trm4 = t;
ATerm g_6 = NULL;
if(match_cons(t, sym_Authors_1))
{
g_6 = ATgetArgument(t, 0);
}
else
goto label5 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ItemList_1, g_6)));
goto label0 ;
label5 :
t = trm4;
{
ATerm trm5 = t;
ATerm f_6 = NULL;
if(match_cons(t, sym_Author_1))
{
f_6 = ATgetArgument(t, 0);
}
else
goto label6 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ItemList_1, (ATerm) ATinsert(ATempty, f_6))));
goto label0 ;
label6 :
t = trm5;
{
ATerm trm6 = t;
ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
if(match_cons(t, sym_Person_2))
{
b_6 = ATgetArgument(t, 0);
c_6 = ATgetArgument(t, 1);
}
else
goto label7 ;
e_6 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term29), c_6), term31), b_6);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label7 ;
d_6 = t;
t = e_6;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, d_6);
goto label0 ;
label7 :
t = trm6;
{
ATerm trm7 = t;
ATerm a_6 = NULL;
if(match_cons(t, sym_WebHome_1))
{
a_6 = ATgetArgument(t, 0);
}
else
goto label8 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Line_1, a_6)));
goto label0 ;
label8 :
t = trm7;
{
ATerm trm8 = t;
ATerm y_5 = NULL,z_5 = NULL;
if(!(match_cons(t, sym_AutoReportBugs_0)))
goto label9 ;
z_5 = t;
t = term3;
t = package_bugreport_0_0(sl, t);
if((t == NULL))
goto label9 ;
y_5 = t;
t = z_5;
t = (ATerm) ATmakeAppl(sym_ReportBugs_1, y_5);
goto label0 ;
label9 :
t = trm8;
{
ATerm trm9 = t;
ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
if(match_cons(t, sym_ReportBugs_1))
{
v_5 = ATgetArgument(t, 0);
}
else
goto label10 ;
x_5 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, v_5), term35);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label10 ;
w_5 = t;
t = x_5;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, w_5);
goto label0 ;
label10 :
t = trm9;
{
ATerm trm10 = t;
ATerm o_5 = NULL,r_5 = NULL,p_5 = NULL,t_5 = NULL,q_5 = NULL,u_5 = NULL;
if(!(match_cons(t, sym_AutoProgram_0)))
goto label11 ;
r_5 = t;
t = term37;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label11 ;
o_5 = t;
t = r_5;
t_5 = t;
t = term3;
t = package_name_0_0(sl, t);
if((t == NULL))
goto label11 ;
p_5 = t;
t = t_5;
u_5 = t;
t = term3;
t = package_version_0_0(sl, t);
if((t == NULL))
goto label11 ;
q_5 = t;
t = u_5;
t = (ATerm) ATmakeAppl(sym_Program_3, o_5, p_5, q_5);
goto label0 ;
label11 :
t = trm10;
{
ATerm trm11 = t;
ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
if(match_cons(t, sym_Program_3))
{
l_5 = ATgetArgument(t, 0);
m_5 = ATgetArgument(t, 1);
n_5 = ATgetArgument(t, 2);
}
else
goto label12 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, l_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Def_2, term39, (ATerm) ATmakeAppl(sym_Paragraph_1, n_5))), (ATerm) ATmakeAppl(sym_Def_2, term41, (ATerm) ATmakeAppl(sym_Paragraph_1, m_5))))));
goto label0 ;
label12 :
t = trm11;
{
ATerm trm12 = t;
ATerm k_5 = NULL;
if(match_cons(t, sym_Config_1))
{
k_5 = ATgetArgument(t, 0);
}
else
goto label13 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, k_5)));
goto label0 ;
label13 :
t = trm12;
{
ATerm trm13 = t;
ATerm i_5 = NULL,j_5 = NULL;
if(!(match_cons(t, sym_DefaultXTCRepository_0)))
goto label14 ;
j_5 = t;
t = term3;
t = GetInternalDefaultXtcRepository_0_0(sl, t);
if((t == NULL))
goto label14 ;
i_5 = t;
t = j_5;
t = (ATerm) ATmakeAppl(sym_ConfigItem_2, term45, i_5);
goto label0 ;
label14 :
t = trm13;
{
ATerm trm14 = t;
ATerm g_5 = NULL,h_5 = NULL;
if(!(match_cons(t, sym_CurrentXTCRepository_0)))
goto label15 ;
h_5 = t;
t = term3;
t = xtc_location_0_0(sl, t);
if((t == NULL))
goto label15 ;
g_5 = t;
t = h_5;
t = (ATerm) ATmakeAppl(sym_ConfigItem_2, term47, g_5);
goto label0 ;
label15 :
t = trm14;
{
ATerm trm15 = t;
ATerm e_5 = NULL,f_5 = NULL;
if(match_cons(t, sym_ConfigItem_2))
{
e_5 = ATgetArgument(t, 0);
f_5 = ATgetArgument(t, 1);
}
else
goto label16 ;
t = (ATerm) ATmakeAppl(sym_Def_2, e_5, (ATerm) ATmakeAppl(sym_Line_1, f_5));
goto label0 ;
label16 :
t = trm15;
{
ATerm trm16 = t;
ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
if(match_cons(t, sym_License_1))
{
y_4 = ATgetArgument(t, 0);
}
else
goto label17 ;
a_5 = t;
t = y_4;
{
struct str_closure p_191 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(p_191);
t = map_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto label17 ;
z_4 = t;
t = a_5;
t = (ATerm) ATmakeAppl(sym_HSection_2, term49, z_4);
}
goto label0 ;
label17 :
t = trm16;
{
ATerm trm17 = t;
ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL,x_4 = NULL;
if(match_cons(t, sym_GNU__GPL_2))
{
t_4 = ATgetArgument(t, 0);
u_4 = ATgetArgument(t, 1);
}
else
goto label18 ;
x_4 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_4), term51), t_4), term53);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label18 ;
v_4 = t;
t = x_4;
t = (ATerm) ATmakeAppl(sym_License_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term55), term57), term59), v_4));
goto label0 ;
label18 :
t = trm17;
{
ATerm h_4 = NULL,o_4 = NULL,r_4 = NULL,s_4 = NULL;
if(match_cons(t, sym_GNU__LGPL_2))
{
h_4 = ATgetArgument(t, 0);
o_4 = ATgetArgument(t, 1);
}
else
goto fail9 ;
s_4 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_4), term51), h_4), term53);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail9 ;
r_4 = t;
t = s_4;
t = (ATerm) ATmakeAppl(sym_License_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term61), term63), term65), r_4));
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
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_5 = NULL,d_5 = NULL;
d_5 = t;
c_5 = t;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, c_5);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_6 = NULL,i_6 = NULL;
if(match_cons(t, sym_HelpString_2))
{
h_6 = ATgetArgument(t, 0);
i_6 = ATgetArgument(t, 1);
}
else
goto fail11 ;
t = (ATerm) ATmakeAppl(sym_Def_2, h_6, (ATerm) ATmakeAppl(sym_Paragraph_1, i_6));
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
{
ATerm o_6 = NULL,p_6 = NULL;
p_6 = t;
o_6 = t;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, o_6);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm tool_doc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tool_doc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_4 = NULL;
f_4 = t;
{
struct str_closure i_191 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(i_191);
t = xtc_temp_files_1_0(sl, lifted2_cl, t);
if((t == NULL))
goto fail3 ;
t = f_4;
}
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
ATerm g_4 = NULL;
struct str_closure e_191 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(e_191);
t = topdown_1_0(sl_up(sl), lifted3_cl, t);
if((t == NULL))
goto fail4 ;
t = write_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail4 ;
{
struct str_closure f_191 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(f_191);
t = xtc_transform_1_0(sl_up(sl), lifted5_cl, t);
if((t == NULL))
goto fail4 ;
{
struct str_closure g_191 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(g_191);
t = xtc_abox2text_1_0(sl_up(sl), lifted6_cl, t);
if((t == NULL))
goto fail4 ;
g_4 = t;
{
struct str_closure h_191 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(h_191);
t = FILE_1_0(sl_up(sl), lifted7_cl, t);
if((t == NULL))
goto fail4 ;
t = g_4;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = read_text_file_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail8 ;
t = echo_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail8 ;
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
t = term9;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_191 = { &(DesugarToolDoc_0_0) , sl_up(sl_up(sl)) };
StrCL lifted4_cl = &(d_191);
t = repeat_1_0(sl_up(sl_up(sl)), lifted4_cl, t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_abox2text_1_0 (StrSL sl, StrCL p_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_abox2text_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, p_2);
{
struct str_closure z_190 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(z_190);
struct str_closure c_191 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(c_191);
t = xtc_transform_2_0(sl, lifted0_cl, lifted1_cl, t);
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
{
ATerm q_2 = NULL,s_2 = NULL,r_2 = NULL,t_2 = NULL;
s_2 = t;
t = term3;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail2 ;
t = int_to_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
q_2 = t;
t = s_2;
t_2 = t;
t = term3;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
r_2 = t;
t = t_2;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, q_2), term5), r_2);
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
}
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 138));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(table_get_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_get_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(foldl_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("foldl_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(foldr_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("foldr_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(reverse_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("reverse_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(union_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("union_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(echo_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("echo_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fatal_error_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fatal_error_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(post_extend_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("post_extend_config_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(find_in_path_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("find_in_path_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(ProdRule_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ProdRule_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ProdRules_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ProdRules_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Start_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Start_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(ast2box_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ast2box_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(box2text_stream_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("box2text_stream_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(GetInternalDefaultXtcRepository_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("GetInternalDefaultXtcRepository_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(HelpString_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("HelpString_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted75);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted75", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted74);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted74", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtg_script_about_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg_script_about_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtg_script_usage_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg_script_usage_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_includes_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_includes_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(find_in_includes_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("find_in_includes_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(include_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("include_option_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted62);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted62", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted53);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted53", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted52);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted52", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted43);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted43", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted50);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted50", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted48);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted48", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(eval_command_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("eval_command_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_pp_rtg_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_pp_rtg_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pp_rtg_box_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pp_rtg_box_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(pp_rtg_file_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pp_rtg_file_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(ExplodeId_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ExplodeId_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtg_ppfix_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg_ppfix_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(DesugarToolDoc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("DesugarToolDoc_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(tool_doc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tool_doc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_abox2text_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_abox2text_1_0", 0, ATtrue)), &(closures[closures_index]));
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
