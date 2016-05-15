#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_FILE_1;
static Symbol sym_Nonterm_1;
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
static Symbol sym_S_1;
static Symbol sym_H_2;
static Symbol sym_V_2;
static Symbol sym_SOpt_2;
static Symbol sym_VS_0;
static Symbol sym_HS_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_None_0;
static Symbol sym_Some_1;
static Symbol sym_QName_2;
static Symbol sym_PublicExternalID_2;
static Symbol sym_Prologue_3;
static Symbol sym_Epilogue_1;
static Symbol sym_XMLDecl_3;
static Symbol sym_VersionDecl_1;
static Symbol sym_Version_1;
static Symbol sym_DocTypePrologue_2;
static Symbol sym_DocTypeDecl_2;
static Symbol sym_Text_1;
static Symbol sym_Attribute_2;
static Symbol sym_DoubleQuoted_1;
static Symbol sym_Literal_1;
static Symbol sym_Document_3;
static Symbol sym_Element_4;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
sym_Nonterm_1 = ATmakeSymbol("Nonterm", 1, ATfalse);
ATprotectSymbol(sym_Nonterm_1);
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
sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
ATprotectSymbol(sym_S_1);
sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
ATprotectSymbol(sym_H_2);
sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
ATprotectSymbol(sym_V_2);
sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
ATprotectSymbol(sym_SOpt_2);
sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
ATprotectSymbol(sym_VS_0);
sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
ATprotectSymbol(sym_HS_0);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
ATprotectSymbol(sym_None_0);
sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
ATprotectSymbol(sym_Some_1);
sym_QName_2 = ATmakeSymbol("QName", 2, ATfalse);
ATprotectSymbol(sym_QName_2);
sym_PublicExternalID_2 = ATmakeSymbol("PublicExternalID", 2, ATfalse);
ATprotectSymbol(sym_PublicExternalID_2);
sym_Prologue_3 = ATmakeSymbol("Prologue", 3, ATfalse);
ATprotectSymbol(sym_Prologue_3);
sym_Epilogue_1 = ATmakeSymbol("Epilogue", 1, ATfalse);
ATprotectSymbol(sym_Epilogue_1);
sym_XMLDecl_3 = ATmakeSymbol("XMLDecl", 3, ATfalse);
ATprotectSymbol(sym_XMLDecl_3);
sym_VersionDecl_1 = ATmakeSymbol("VersionDecl", 1, ATfalse);
ATprotectSymbol(sym_VersionDecl_1);
sym_Version_1 = ATmakeSymbol("Version", 1, ATfalse);
ATprotectSymbol(sym_Version_1);
sym_DocTypePrologue_2 = ATmakeSymbol("DocTypePrologue", 2, ATfalse);
ATprotectSymbol(sym_DocTypePrologue_2);
sym_DocTypeDecl_2 = ATmakeSymbol("DocTypeDecl", 2, ATfalse);
ATprotectSymbol(sym_DocTypeDecl_2);
sym_Text_1 = ATmakeSymbol("Text", 1, ATfalse);
ATprotectSymbol(sym_Text_1);
sym_Attribute_2 = ATmakeSymbol("Attribute", 2, ATfalse);
ATprotectSymbol(sym_Attribute_2);
sym_DoubleQuoted_1 = ATmakeSymbol("DoubleQuoted", 1, ATfalse);
ATprotectSymbol(sym_DoubleQuoted_1);
sym_Literal_1 = ATmakeSymbol("Literal", 1, ATfalse);
ATprotectSymbol(sym_Literal_1);
sym_Document_3 = ATmakeSymbol("Document", 3, ATfalse);
ATprotectSymbol(sym_Document_3);
sym_Element_4 = ATmakeSymbol("Element", 4, ATfalse);
ATprotectSymbol(sym_Element_4);
}
static ATerm term451;
static ATerm term450;
static ATerm term449;
static ATerm term448;
static ATerm term447;
static ATerm term446;
static ATerm term445;
static ATerm term444;
static ATerm term443;
static ATerm term442;
static ATerm term441;
static ATerm term440;
static ATerm term439;
static ATerm term438;
static ATerm term437;
static ATerm term436;
static ATerm term435;
static ATerm term434;
static ATerm term433;
static ATerm term432;
static ATerm term431;
static ATerm term430;
static ATerm term429;
static ATerm term428;
static ATerm term427;
static ATerm term426;
static ATerm term425;
static ATerm term424;
static ATerm term423;
static ATerm term422;
static ATerm term421;
static ATerm term420;
static ATerm term419;
static ATerm term418;
static ATerm term417;
static ATerm term416;
static ATerm term415;
static ATerm term414;
static ATerm term413;
static ATerm term412;
static ATerm term411;
static ATerm term410;
static ATerm term409;
static ATerm term408;
static ATerm term407;
static ATerm term406;
static ATerm term405;
static ATerm term404;
static ATerm term403;
static ATerm term402;
static ATerm term401;
static ATerm term400;
static ATerm term399;
static ATerm term398;
static ATerm term397;
static ATerm term396;
static ATerm term395;
static ATerm term394;
static ATerm term393;
static ATerm term392;
static ATerm term391;
static ATerm term390;
static ATerm term389;
static ATerm term388;
static ATerm term387;
static ATerm term386;
static ATerm term385;
static ATerm term384;
static ATerm term383;
static ATerm term382;
static ATerm term381;
static ATerm term380;
static ATerm term379;
static ATerm term378;
static ATerm term377;
static ATerm term376;
static ATerm term375;
static ATerm term374;
static ATerm term373;
static ATerm term372;
static ATerm term371;
static ATerm term370;
static ATerm term369;
static ATerm term368;
static ATerm term367;
static ATerm term366;
static ATerm term365;
static ATerm term364;
static ATerm term363;
static ATerm term362;
static ATerm term361;
static ATerm term360;
static ATerm term359;
static ATerm term358;
static ATerm term357;
static ATerm term356;
static ATerm term355;
static ATerm term354;
static ATerm term353;
static ATerm term352;
static ATerm term351;
static ATerm term350;
static ATerm term349;
static ATerm term348;
static ATerm term347;
static ATerm term346;
static ATerm term345;
static ATerm term344;
static ATerm term343;
static ATerm term342;
static ATerm term341;
static ATerm term340;
static ATerm term339;
static ATerm term338;
static ATerm term337;
static ATerm term336;
static ATerm term335;
static ATerm term334;
static ATerm term333;
static ATerm term332;
static ATerm term331;
static ATerm term330;
static ATerm term329;
static ATerm term328;
static ATerm term327;
static ATerm term326;
static ATerm term325;
static ATerm term324;
static ATerm term323;
static ATerm term322;
static ATerm term321;
static ATerm term320;
static ATerm term319;
static ATerm term318;
static ATerm term317;
static ATerm term316;
static ATerm term315;
static ATerm term314;
static ATerm term313;
static ATerm term312;
static ATerm term311;
static ATerm term310;
static ATerm term309;
static ATerm term308;
static ATerm term307;
static ATerm term306;
static ATerm term305;
static ATerm term304;
static ATerm term303;
static ATerm term302;
static ATerm term301;
static ATerm term300;
static ATerm term299;
static ATerm term298;
static ATerm term297;
static ATerm term296;
static ATerm term295;
static ATerm term294;
static ATerm term293;
static ATerm term292;
static ATerm term291;
static ATerm term290;
static ATerm term289;
static ATerm term288;
static ATerm term287;
static ATerm term286;
static ATerm term285;
static ATerm term284;
static ATerm term283;
static ATerm term282;
static ATerm term281;
static ATerm term280;
static ATerm term279;
static ATerm term278;
static ATerm term277;
static ATerm term276;
static ATerm term275;
static ATerm term274;
static ATerm term273;
static ATerm term272;
static ATerm term271;
static ATerm term270;
static ATerm term269;
static ATerm term268;
static ATerm term267;
static ATerm term266;
static ATerm term265;
static ATerm term264;
static ATerm term263;
static ATerm term262;
static ATerm term261;
static ATerm term260;
static ATerm term259;
static ATerm term258;
static ATerm term257;
static ATerm term256;
static ATerm term255;
static ATerm term254;
static ATerm term253;
static ATerm term252;
static ATerm term251;
static ATerm term250;
static ATerm term249;
static ATerm term248;
static ATerm term247;
static ATerm term246;
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
term0 = (ATerm) ATmakeInt(59);
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeInt(112);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeInt(109);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeInt(97);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeInt(38);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeInt(116);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeInt(108);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeInt(103);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeInt(115);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeInt(111);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeInt(117);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeInt(113);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("--exit-code", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeInt(0);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(sym__2, term25, term27);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeInt(1);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(sym__2, term25, term31);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("typetable", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("typeset", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("1.0", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(sym_Version_1, term39);
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(sym_VersionDecl_1, term41);
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(sym_None_0);
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(sym_XMLDecl_3, term43, term45, term45);
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(sym_Some_1, term47);
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("html", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(sym_QName_2, term45, term51);
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("-//W3C//DTD XHTML 1.1//EN", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(sym_PublicExternalID_2, term55, term57);
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(sym_DocTypeDecl_2, term53, term59);
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(sym_DocTypePrologue_2, term61, (ATerm) ATempty);
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(sym_Some_1, term63);
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(sym_Prologue_3, term49, (ATerm)ATempty, term65);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("\n      ", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(sym_Literal_1, term69);
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("body", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(sym_QName_2, term45, term73);
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("\n        ", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(sym_Literal_1, term77);
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(sym_QName_2, term45, term81);
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("\n          ", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(sym_Literal_1, term85);
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("\n            ", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(sym_Literal_1, term89);
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n          ", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(sym_Literal_1, term93);
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("class", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(sym_QName_2, term45, term97);
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("fixed-info", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(sym_Literal_1, term101);
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("span", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(sym_QName_2, term45, term105);
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(sym_QName_2, term45, term109);
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("type-info", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(sym_Literal_1, term113);
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("no selection", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(sym_Literal_1, term117);
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(ATmakeSymbol("\n            Type info: ", 0, ATtrue));
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(sym_Literal_1, term121);
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(ATmakeSymbol("h1", 0, ATtrue));
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(sym_QName_2, term45, term125);
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(ATmakeSymbol("format-check report", 0, ATtrue));
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(sym_Literal_1, term129);
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(ATmakeSymbol("head", 0, ATtrue));
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(sym_QName_2, term45, term133);
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeAppl(sym_QName_2, term45, term137);
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(ATmakeSymbol("type", 0, ATtrue));
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeAppl(sym_QName_2, term45, term141);
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(ATmakeSymbol("text/javascript", 0, ATtrue));
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeAppl(sym_Literal_1, term145);
ATprotect(&(term147));
term147 = term146;
ATprotect(&(term148));
term148 = (ATerm) ATmakeAppl(ATmakeSymbol("\n            function displayType(t) {\n              var info = document.getElementById('type-info');\n              info.firstChild.nodeValue = t;\n            }\n\n            function stopHandling(e) {\n              if (!e)\n                var e = window.event;\n\n              e.cancelBubble = true;\n\n              if (e.stopPropagation)\n                e.stopPropagation();\n            }\n          ", 0, ATtrue));
ATprotect(&(term149));
term149 = term148;
ATprotect(&(term150));
term150 = (ATerm) ATmakeAppl(sym_Literal_1, term149);
ATprotect(&(term151));
term151 = term150;
ATprotect(&(term152));
term152 = (ATerm) ATmakeAppl(ATmakeSymbol("style", 0, ATtrue));
ATprotect(&(term153));
term153 = term152;
ATprotect(&(term154));
term154 = (ATerm) ATmakeAppl(sym_QName_2, term45, term153);
ATprotect(&(term155));
term155 = term154;
ATprotect(&(term156));
term156 = (ATerm) ATmakeAppl(ATmakeSymbol("text/css", 0, ATtrue));
ATprotect(&(term157));
term157 = term156;
ATprotect(&(term158));
term158 = (ATerm) ATmakeAppl(sym_Literal_1, term157);
ATprotect(&(term159));
term159 = term158;
ATprotect(&(term160));
term160 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n            .typo {\n              padding: 2pt;\n              border-style: solid;\n              border-width: 1px;\n              border-color: red;\n              background-color : rgb(255,220,220);\n            }\n\n            .fixed-info {\n              position : fixed;\n              z-index  : 1;\n              width    : 125pt;\n              top      : 10pt;\n              right    : 10pt;\n              padding  : 5pt;\n              background-color : #E0E0E0;\n              border-style: solid;\n              border-width: 1px;\n              border-color: black;\n            }\n          ", 0, ATtrue));
ATprotect(&(term161));
term161 = term160;
ATprotect(&(term162));
term162 = (ATerm) ATmakeAppl(sym_Literal_1, term161);
ATprotect(&(term163));
term163 = term162;
ATprotect(&(term164));
term164 = (ATerm) ATmakeAppl(ATmakeSymbol("title", 0, ATtrue));
ATprotect(&(term165));
term165 = term164;
ATprotect(&(term166));
term166 = (ATerm) ATmakeAppl(sym_QName_2, term45, term165);
ATprotect(&(term167));
term167 = term166;
ATprotect(&(term168));
term168 = (ATerm) ATmakeAppl(sym_Epilogue_1, (ATerm) ATempty);
ATprotect(&(term169));
term169 = term168;
ATprotect(&(term170));
term170 = (ATerm) ATmakeAppl(ATmakeSymbol("onmouseover", 0, ATtrue));
ATprotect(&(term171));
term171 = term170;
ATprotect(&(term172));
term172 = (ATerm) ATmakeAppl(sym_QName_2, term45, term171);
ATprotect(&(term173));
term173 = term172;
ATprotect(&(term174));
term174 = (ATerm) ATmakeAppl(ATmakeSymbol("'); stopHandling(event)", 0, ATtrue));
ATprotect(&(term175));
term175 = term174;
ATprotect(&(term176));
term176 = (ATerm) ATmakeAppl(sym_Literal_1, term175);
ATprotect(&(term177));
term177 = term176;
ATprotect(&(term178));
term178 = (ATerm) ATmakeAppl(ATmakeSymbol("displayType('", 0, ATtrue));
ATprotect(&(term179));
term179 = term178;
ATprotect(&(term180));
term180 = (ATerm) ATmakeAppl(sym_Literal_1, term179);
ATprotect(&(term181));
term181 = term180;
ATprotect(&(term182));
term182 = (ATerm) ATmakeAppl(ATmakeSymbol("typed", 0, ATtrue));
ATprotect(&(term183));
term183 = term182;
ATprotect(&(term184));
term184 = (ATerm) ATmakeAppl(sym_Literal_1, term183);
ATprotect(&(term185));
term185 = term184;
ATprotect(&(term186));
term186 = (ATerm) ATmakeAppl(ATmakeSymbol("typo", 0, ATtrue));
ATprotect(&(term187));
term187 = term186;
ATprotect(&(term188));
term188 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
ATprotect(&(term189));
term189 = term188;
ATprotect(&(term190));
term190 = (ATerm) ATmakeAppl(sym_QName_2, term45, term189);
ATprotect(&(term191));
term191 = term190;
ATprotect(&(term192));
term192 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
ATprotect(&(term193));
term193 = term192;
ATprotect(&(term194));
term194 = (ATerm) ATmakeAppl(sym_Literal_1, term193);
ATprotect(&(term195));
term195 = term194;
ATprotect(&(term196));
term196 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
ATprotect(&(term197));
term197 = term196;
ATprotect(&(term198));
term198 = (ATerm) ATmakeAppl(sym_Literal_1, term197);
ATprotect(&(term199));
term199 = term198;
ATprotect(&(term200));
term200 = (ATerm) ATmakeInt(8);
ATprotect(&(term201));
term201 = term200;
ATprotect(&(term202));
term202 = (ATerm) ATmakeAppl(ATmakeSymbol(", ", 0, ATtrue));
ATprotect(&(term203));
term203 = term202;
ATprotect(&(term204));
term204 = (ATerm) ATmakeAppl(sym_Literal_1, term203);
ATprotect(&(term205));
term205 = term204;
ATprotect(&(term206));
term206 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
ATprotect(&(term207));
term207 = term206;
ATprotect(&(term208));
term208 = (ATerm) ATmakeAppl(sym_Literal_1, term207);
ATprotect(&(term209));
term209 = term208;
ATprotect(&(term210));
term210 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
ATprotect(&(term211));
term211 = term210;
ATprotect(&(term212));
term212 = (ATerm) ATmakeAppl(sym_Literal_1, term211);
ATprotect(&(term213));
term213 = term212;
ATprotect(&(term214));
term214 = (ATerm) ATmakeAppl(ATmakeSymbol("\n                    ", 0, ATtrue));
ATprotect(&(term215));
term215 = term214;
ATprotect(&(term216));
term216 = (ATerm) ATmakeAppl(sym_Literal_1, term215);
ATprotect(&(term217));
term217 = term216;
ATprotect(&(term218));
term218 = (ATerm) ATmakeAppl(ATmakeSymbol("padding-left: 1em", 0, ATtrue));
ATprotect(&(term219));
term219 = term218;
ATprotect(&(term220));
term220 = (ATerm) ATmakeAppl(sym_Literal_1, term219);
ATprotect(&(term221));
term221 = term220;
ATprotect(&(term222));
term222 = (ATerm) ATmakeAppl(ATmakeSymbol("\n                      ", 0, ATtrue));
ATprotect(&(term223));
term223 = term222;
ATprotect(&(term224));
term224 = (ATerm) ATmakeAppl(sym_Literal_1, term223);
ATprotect(&(term225));
term225 = term224;
ATprotect(&(term226));
term226 = (ATerm) ATmakeAppl(ATmakeSymbol("position: absolute", 0, ATtrue));
ATprotect(&(term227));
term227 = term226;
ATprotect(&(term228));
term228 = (ATerm) ATmakeAppl(sym_Literal_1, term227);
ATprotect(&(term229));
term229 = term228;
ATprotect(&(term230));
term230 = (ATerm) ATmakeAppl(ATmakeSymbol(",", 0, ATtrue));
ATprotect(&(term231));
term231 = term230;
ATprotect(&(term232));
term232 = (ATerm) ATmakeAppl(sym_Literal_1, term231);
ATprotect(&(term233));
term233 = term232;
ATprotect(&(term234));
term234 = (ATerm) ATmakeAppl(ATmakeSymbol("\n          )\n        ", 0, ATtrue));
ATprotect(&(term235));
term235 = term234;
ATprotect(&(term236));
term236 = (ATerm) ATmakeAppl(sym_Literal_1, term235);
ATprotect(&(term237));
term237 = term236;
ATprotect(&(term238));
term238 = (ATerm) ATmakeAppl(ATmakeSymbol("(\n            ", 0, ATtrue));
ATprotect(&(term239));
term239 = term238;
ATprotect(&(term240));
term240 = (ATerm) ATmakeAppl(sym_Literal_1, term239);
ATprotect(&(term241));
term241 = term240;
ATprotect(&(term242));
term242 = (ATerm) ATmakeAppl(ATmakeSymbol("[]", 0, ATtrue));
ATprotect(&(term243));
term243 = term242;
ATprotect(&(term244));
term244 = (ATerm) ATmakeAppl(sym_Literal_1, term243);
ATprotect(&(term245));
term245 = term244;
ATprotect(&(term246));
term246 = (ATerm) ATmakeAppl(ATmakeSymbol("[", 0, ATtrue));
ATprotect(&(term247));
term247 = term246;
ATprotect(&(term248));
term248 = (ATerm) ATmakeAppl(sym_Literal_1, term247);
ATprotect(&(term249));
term249 = term248;
ATprotect(&(term250));
term250 = (ATerm) ATmakeAppl(ATmakeSymbol("]", 0, ATtrue));
ATprotect(&(term251));
term251 = term250;
ATprotect(&(term252));
term252 = (ATerm) ATmakeAppl(sym_Literal_1, term251);
ATprotect(&(term253));
term253 = term252;
ATprotect(&(term254));
term254 = (ATerm) ATmakeInt(10);
ATprotect(&(term255));
term255 = term254;
ATprotect(&(term256));
term256 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term257));
term257 = term256;
ATprotect(&(term258));
term258 = (ATerm) ATmakeAppl(sym_HS_0);
ATprotect(&(term259));
term259 = term258;
ATprotect(&(term260));
term260 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
ATprotect(&(term261));
term261 = term260;
ATprotect(&(term262));
term262 = (ATerm) ATmakeAppl(sym_SOpt_2, term259, term261);
ATprotect(&(term263));
term263 = term262;
ATprotect(&(term264));
term264 = (ATerm) ATmakeAppl(sym_S_1, term243);
ATprotect(&(term265));
term265 = term264;
ATprotect(&(term266));
term266 = (ATerm) ATmakeAppl(sym_S_1, term247);
ATprotect(&(term267));
term267 = term266;
ATprotect(&(term268));
term268 = (ATerm) ATmakeAppl(sym_S_1, term251);
ATprotect(&(term269));
term269 = term268;
ATprotect(&(term270));
term270 = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
ATprotect(&(term271));
term271 = term270;
ATprotect(&(term272));
term272 = (ATerm) ATmakeAppl(sym_SOpt_2, term259, term271);
ATprotect(&(term273));
term273 = term272;
ATprotect(&(term274));
term274 = (ATerm) ATmakeAppl(sym_S_1, term231);
ATprotect(&(term275));
term275 = term274;
ATprotect(&(term276));
term276 = (ATerm) ATmakeAppl(sym_VS_0);
ATprotect(&(term277));
term277 = term276;
ATprotect(&(term278));
term278 = (ATerm) ATmakeAppl(sym_SOpt_2, term277, term261);
ATprotect(&(term279));
term279 = term278;
ATprotect(&(term280));
term280 = (ATerm) ATmakeInt(27);
ATprotect(&(term281));
term281 = term280;
ATprotect(&(term282));
term282 = (ATerm) ATmakeAppl(ATmakeSymbol("[01;31m", 0, ATtrue));
ATprotect(&(term283));
term283 = term282;
ATprotect(&(term284));
term284 = (ATerm) ATmakeAppl(ATmakeSymbol("[m", 0, ATtrue));
ATprotect(&(term285));
term285 = term284;
ATprotect(&(term286));
term286 = (ATerm) ATmakeAppl(ATmakeSymbol("--rtg-nf", 0, ATtrue));
ATprotect(&(term287));
term287 = term286;
ATprotect(&(term288));
term288 = (ATerm) ATmakeAppl(ATmakeSymbol("--rtg-nf file", 0, ATtrue));
ATprotect(&(term289));
term289 = term288;
ATprotect(&(term290));
term290 = (ATerm) ATmakeAppl(ATmakeSymbol("--rtg", 0, ATtrue));
ATprotect(&(term291));
term291 = term290;
ATprotect(&(term292));
term292 = (ATerm) ATmakeAppl(ATmakeSymbol("--rtg file", 0, ATtrue));
ATprotect(&(term293));
term293 = term292;
ATprotect(&(term294));
term294 = (ATerm) ATmakeAppl(ATmakeSymbol("start-nonterm", 0, ATtrue));
ATprotect(&(term295));
term295 = term294;
ATprotect(&(term296));
term296 = (ATerm) ATmakeAppl(ATmakeSymbol("--fast", 0, ATtrue));
ATprotect(&(term297));
term297 = term296;
ATprotect(&(term298));
term298 = (ATerm) ATmakeAppl(ATmakeSymbol("true", 0, ATtrue));
ATprotect(&(term299));
term299 = term298;
ATprotect(&(term300));
term300 = (ATerm) ATmakeAppl(sym__2, term297, term299);
ATprotect(&(term301));
term301 = term300;
ATprotect(&(term302));
term302 = (ATerm) ATmakeAppl(ATmakeSymbol("tool-doc2abox", 0, ATtrue));
ATprotect(&(term303));
term303 = term302;
ATprotect(&(term304));
term304 = (ATerm) ATmakeInt(80);
ATprotect(&(term305));
term305 = term304;
ATprotect(&(term306));
term306 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
ATprotect(&(term307));
term307 = term306;
ATprotect(&(term308));
term308 = (ATerm) ATmakeAppl(ATmakeSymbol("Summary:", 0, ATtrue));
ATprotect(&(term309));
term309 = term308;
ATprotect(&(term310));
term310 = (ATerm) ATmakeAppl(ATmakeSymbol("Description:", 0, ATtrue));
ATprotect(&(term311));
term311 = term310;
ATprotect(&(term312));
term312 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
ATprotect(&(term313));
term313 = term312;
ATprotect(&(term314));
term314 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
ATprotect(&(term315));
term315 = term314;
ATprotect(&(term316));
term316 = (ATerm) ATmakeAppl(sym__2, term313, term315);
ATprotect(&(term317));
term317 = term316;
ATprotect(&(term318));
term318 = (ATerm) ATmakeAppl(ATmakeSymbol("Options:", 0, ATtrue));
ATprotect(&(term319));
term319 = term318;
ATprotect(&(term320));
term320 = (ATerm) ATmakeAppl(ATmakeSymbol("Authors:", 0, ATtrue));
ATprotect(&(term321));
term321 = term320;
ATprotect(&(term322));
term322 = (ATerm) ATmakeAppl(ATmakeSymbol("Author:", 0, ATtrue));
ATprotect(&(term323));
term323 = term322;
ATprotect(&(term324));
term324 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
ATprotect(&(term325));
term325 = term324;
ATprotect(&(term326));
term326 = (ATerm) ATmakeAppl(ATmakeSymbol(" <", 0, ATtrue));
ATprotect(&(term327));
term327 = term326;
ATprotect(&(term328));
term328 = (ATerm) ATmakeAppl(ATmakeSymbol("Website:", 0, ATtrue));
ATprotect(&(term329));
term329 = term328;
ATprotect(&(term330));
term330 = (ATerm) ATmakeAppl(ATmakeSymbol("Please report bugs to ", 0, ATtrue));
ATprotect(&(term331));
term331 = term330;
ATprotect(&(term332));
term332 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
ATprotect(&(term333));
term333 = term332;
ATprotect(&(term334));
term334 = (ATerm) ATmakeAppl(ATmakeSymbol("Version", 0, ATtrue));
ATprotect(&(term335));
term335 = term334;
ATprotect(&(term336));
term336 = (ATerm) ATmakeAppl(ATmakeSymbol("Package", 0, ATtrue));
ATprotect(&(term337));
term337 = term336;
ATprotect(&(term338));
term338 = (ATerm) ATmakeAppl(ATmakeSymbol("Configuration:", 0, ATtrue));
ATprotect(&(term339));
term339 = term338;
ATprotect(&(term340));
term340 = (ATerm) ATmakeAppl(ATmakeSymbol("Default XTC Repository", 0, ATtrue));
ATprotect(&(term341));
term341 = term340;
ATprotect(&(term342));
term342 = (ATerm) ATmakeAppl(ATmakeSymbol("Current XTC Repository", 0, ATtrue));
ATprotect(&(term343));
term343 = term342;
ATprotect(&(term344));
term344 = (ATerm) ATmakeAppl(ATmakeSymbol("License:", 0, ATtrue));
ATprotect(&(term345));
term345 = term344;
ATprotect(&(term346));
term346 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
ATprotect(&(term347));
term347 = term346;
ATprotect(&(term348));
term348 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) ", 0, ATtrue));
ATprotect(&(term349));
term349 = term348;
ATprotect(&(term350));
term350 = (ATerm) ATmakeAppl(ATmakeSymbol("You should have received a copy of the GNU General Public License \n        along with this program; if not, write to the Free Software Foundation, \n        Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA", 0, ATtrue));
ATprotect(&(term351));
term351 = term350;
ATprotect(&(term352));
term352 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is distributed in the hope that it will be useful, but \n        WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or \n        FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more \n        details.", 0, ATtrue));
ATprotect(&(term353));
term353 = term352;
ATprotect(&(term354));
term354 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or\n        modify it under the terms of the GNU General Public License as published by the \n        Free Software Foundation; either version 2 of the License, or (at your option) \n        any later version.", 0, ATtrue));
ATprotect(&(term355));
term355 = term354;
ATprotect(&(term356));
term356 = (ATerm) ATmakeAppl(ATmakeSymbol("You should have received a copy of the GNU Lesser General Public \n         License along with this library; if not, write to the Free Software Foundation, \n         Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA", 0, ATtrue));
ATprotect(&(term357));
term357 = term356;
ATprotect(&(term358));
term358 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is distributed in the hope that it will be useful, but \n         WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or \n         FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License \n         for more details.", 0, ATtrue));
ATprotect(&(term359));
term359 = term358;
ATprotect(&(term360));
term360 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or modify \n         it under the terms of the GNU Lesser General Public License as published by the \n         Free Software Foundation; either version 2 of the License, or (at your option) \n         any later version.", 0, ATtrue));
ATprotect(&(term361));
term361 = term360;
ATprotect(&(term362));
term362 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
ATprotect(&(term363));
term363 = term362;
ATprotect(&(term364));
term364 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term365));
term365 = term364;
ATprotect(&(term366));
term366 = (ATerm) ATmakeAppl(sym_HelpString_2, term365, term365);
ATprotect(&(term367));
term367 = term366;
ATprotect(&(term368));
term368 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
ATprotect(&(term369));
term369 = term368;
ATprotect(&(term370));
term370 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
ATprotect(&(term371));
term371 = term370;
ATprotect(&(term372));
term372 = (ATerm) ATmakeAppl(ATmakeSymbol("No tree grammar specified", 0, ATtrue));
ATprotect(&(term373));
term373 = term372;
ATprotect(&(term374));
term374 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
ATprotect(&(term375));
term375 = term374;
ATprotect(&(term376));
term376 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-xml-doc", 0, ATtrue));
ATprotect(&(term377));
term377 = term376;
ATprotect(&(term378));
term378 = (ATerm) ATmakeAppl(ATmakeSymbol("Format check against rtg in file", 0, ATtrue));
ATprotect(&(term379));
term379 = term378;
ATprotect(&(term380));
term380 = (ATerm) ATmakeAppl(ATmakeSymbol("Format check against normalized rtg in file", 0, ATtrue));
ATprotect(&(term381));
term381 = term380;
ATprotect(&(term382));
term382 = (ATerm) ATmakeAppl(ATmakeSymbol("-s|--start s", 0, ATtrue));
ATprotect(&(term383));
term383 = term382;
ATprotect(&(term384));
term384 = (ATerm) ATmakeAppl(ATmakeSymbol("Term must be of type s (default: start non-terms of rtg)", 0, ATtrue));
ATprotect(&(term385));
term385 = term384;
ATprotect(&(term386));
term386 = (ATerm) ATmakeAppl(ATmakeSymbol("--xhtml", 0, ATtrue));
ATprotect(&(term387));
term387 = term386;
ATprotect(&(term388));
term388 = (ATerm) ATmakeAppl(ATmakeSymbol("Present the result in XHTML", 0, ATtrue));
ATprotect(&(term389));
term389 = term388;
ATprotect(&(term390));
term390 = (ATerm) ATmakeAppl(sym_HelpString_2, term387, term389);
ATprotect(&(term391));
term391 = term390;
ATprotect(&(term392));
term392 = (ATerm) ATmakeAppl(ATmakeSymbol("--vis", 0, ATtrue));
ATprotect(&(term393));
term393 = term392;
ATprotect(&(term394));
term394 = (ATerm) ATmakeAppl(ATmakeSymbol("Visualize in colored pp-aterm", 0, ATtrue));
ATprotect(&(term395));
term395 = term394;
ATprotect(&(term396));
term396 = (ATerm) ATmakeAppl(sym_HelpString_2, term393, term395);
ATprotect(&(term397));
term397 = term396;
ATprotect(&(term398));
term398 = (ATerm) ATmakeAppl(ATmakeSymbol("Run as fast as possible. Might reduce quality of error messages.", 0, ATtrue));
ATprotect(&(term399));
term399 = term398;
ATprotect(&(term400));
term400 = (ATerm) ATmakeAppl(sym__2, term387, term257);
ATprotect(&(term401));
term401 = term400;
ATprotect(&(term402));
term402 = (ATerm) ATmakeAppl(sym__2, term393, term257);
ATprotect(&(term403));
term403 = term402;
ATprotect(&(term404));
term404 = (ATerm) ATmakeAppl(sym_AutoReportBugs_0);
ATprotect(&(term405));
term405 = term404;
ATprotect(&(term406));
term406 = (ATerm) ATmakeAppl(ATmakeSymbol("\nIn all modes format-check succeeds (exit code 0) if the ATerm contains\nno format errors. If the term does contain format errors, then\nformat-check fails (exit code 1).\n	", 0, ATtrue));
ATprotect(&(term407));
term407 = term406;
ATprotect(&(term408));
term408 = (ATerm) ATmakeAppl(ATmakeSymbol("\nformat-check reports all innermost format errors. That is, only the\ndeepest format errors are reported. A format error is reported by\nshowing the ATerm that is not in the correct format, and the inferred\ntypes of the children of the ATerm. In XHTML and visualize mode a\nformat error of term in a list is presented by a red comma and\nterm. This means that a type has been inferred for the term itself,\nbut that it is not expected at this point in the list. If only the\nterm is red, then no type could be inferred for the term itself.\n	", 0, ATtrue));
ATprotect(&(term409));
term409 = term408;
ATprotect(&(term410));
term410 = (ATerm) ATmakeAppl(ATmakeSymbol("\nThe XHTML mode is enabled with the --xhtml option. In XHTML mode\nformat errors are reported and an report in XHTML will be written to\nthe output. This report shows the parts of the ATerm that are not\nformatted correctly. Also, moving with your mouse over the nodes of\nATerm, will show the non-terminals that have be inferred by\nformat-check (do not use IE6. Firefox or Mozilla is recommended).\n	", 0, ATtrue));
ATprotect(&(term411));
term411 = term410;
ATprotect(&(term412));
term412 = (ATerm) ATmakeAppl(ATmakeSymbol("\nThe visualize mode is enabled with the --vis option. In visualize mode\nformat errors are reported and in a pretty-printed ATerm will be\nwritten to the output. All innermost parts of the ATerm that cause\nformat errors are printed in red, if your terminal supports control\ncharacters for colors. If you want to browse through the ATerm with\nless, then you should use the -r flag.\n	", 0, ATtrue));
ATprotect(&(term413));
term413 = term412;
ATprotect(&(term414));
term414 = (ATerm) ATmakeAppl(ATmakeSymbol("\nThe plain mode is used if the other modes are not enabled. In the\nplain mode format errors are reported and no result is written the the\noutput (stdout or a file). Hence, if format-check is included in a\npipeline, then the following tool will probably fail. If the input\nterm is correct, then it is written to the output.\n	", 0, ATtrue));
ATprotect(&(term415));
term415 = term414;
ATprotect(&(term416));
term416 = (ATerm) ATmakeAppl(ATmakeSymbol("\nformat-check verifies that the input ATerm is part of the language\ndefined in the RTG.  If this is not the case, then the ATerm contains\nformat errors. format-check can operate in three modes: plain,\nvisualize and XHTML.\n	", 0, ATtrue));
ATprotect(&(term417));
term417 = term416;
ATprotect(&(term418));
term418 = (ATerm) ATmakeAppl(sym_OptionUsage_0);
ATprotect(&(term419));
term419 = term418;
ATprotect(&(term420));
term420 = (ATerm) ATmakeAppl(ATmakeSymbol("\nformat-check analyzes whether the input ATerm conforms to the format\nthat is specified in the RTG (Regular Tree Grammar).\n	", 0, ATtrue));
ATprotect(&(term421));
term421 = term420;
ATprotect(&(term422));
term422 = (ATerm) ATmakeAppl(sym_Summary_1, term421);
ATprotect(&(term423));
term423 = term422;
ATprotect(&(term424));
term424 = (ATerm) ATmakeAppl(ATmakeSymbol("format-check --rtg file [OPTIONS]", 0, ATtrue));
ATprotect(&(term425));
term425 = term424;
ATprotect(&(term426));
term426 = (ATerm) ATmakeAppl(sym_Usage_1, term425);
ATprotect(&(term427));
term427 = term426;
ATprotect(&(term428));
term428 = (ATerm) ATmakeAppl(sym_CurrentXTCRepository_0);
ATprotect(&(term429));
term429 = term428;
ATprotect(&(term430));
term430 = (ATerm) ATmakeAppl(sym_DefaultXTCRepository_0);
ATprotect(&(term431));
term431 = term430;
ATprotect(&(term432));
term432 = (ATerm) ATmakeAppl(ATmakeSymbol("http://www.program-transformation.org/Tools/FormatCheck", 0, ATtrue));
ATprotect(&(term433));
term433 = term432;
ATprotect(&(term434));
term434 = (ATerm) ATmakeAppl(sym_WebHome_1, term433);
ATprotect(&(term435));
term435 = term434;
ATprotect(&(term436));
term436 = (ATerm) ATmakeAppl(ATmakeSymbol("2002-2008", 0, ATtrue));
ATprotect(&(term437));
term437 = term436;
ATprotect(&(term438));
term438 = (ATerm) ATmakeAppl(ATmakeSymbol("Martin Bravenboer <martin.bravenboer@gmail.com>", 0, ATtrue));
ATprotect(&(term439));
term439 = term438;
ATprotect(&(term440));
term440 = (ATerm) ATmakeAppl(sym_GNU__LGPL_2, term437, term439);
ATprotect(&(term441));
term441 = term440;
ATprotect(&(term442));
term442 = (ATerm) ATmakeAppl(ATmakeSymbol("Martin Bravenboer", 0, ATtrue));
ATprotect(&(term443));
term443 = term442;
ATprotect(&(term444));
term444 = (ATerm) ATmakeAppl(ATmakeSymbol("martin.bravenboer@gmail.com", 0, ATtrue));
ATprotect(&(term445));
term445 = term444;
ATprotect(&(term446));
term446 = (ATerm) ATmakeAppl(sym_Person_2, term443, term445);
ATprotect(&(term447));
term447 = term446;
ATprotect(&(term448));
term448 = (ATerm) ATmakeAppl(sym_Author_1, term447);
ATprotect(&(term449));
term449 = term448;
ATprotect(&(term450));
term450 = (ATerm) ATmakeAppl(sym_AutoProgram_0);
ATprotect(&(term451));
term451 = term450;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm table_get_0_0 (StrSL sl, ATerm t);
ATerm new_hashtable_0_0 (StrSL sl, ATerm t);
ATerm separate_by_0_0 (StrSL sl, ATerm t);
ATerm makeConc_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL l_184, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL r_183, ATerm t);
ATerm new_iset_0_0 (StrSL sl, ATerm t);
ATerm true_0_0 (StrSL sl, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL w_163, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL f_160, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL f_154, ATerm t);
ATerm read_text_file_0_0 (StrSL sl, ATerm t);
ATerm echo_0_0 (StrSL sl, ATerm t);
ATerm ReadFromFile_0_0 (StrSL sl, ATerm t);
ATerm term_size_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm gt_0_0 (StrSL sl, ATerm t);
ATerm is_int_0_0 (StrSL sl, ATerm t);
ATerm split_before_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm string_as_chars_1_0 (StrSL sl, StrCL c_139, ATerm t);
ATerm implode_string_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm real_to_string_0_0 (StrSL sl, ATerm t);
ATerm is_real_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL l_127, StrCL n_127, StrCL s_127, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL f_127, StrCL g_127, StrCL h_127, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm fatal_err_0_1 (StrSL sl, ATerm y_123, ATerm t);
ATerm FILE_1_0 (StrSL sl, StrCL d_119, ATerm t);
ATerm xtc_location_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_5_0 (StrSL sl, StrCL j_118, StrCL k_118, StrCL l_118, StrCL m_118, StrCL n_118, ATerm t);
ATerm xtc_output_1_0 (StrSL sl, StrCL a_118, ATerm t);
ATerm xtc_exit_0_0 (StrSL sl, ATerm t);
ATerm xtc_temp_files_1_0 (StrSL sl, StrCL v_117, ATerm t);
ATerm xtc_ensure_file_0_0 (StrSL sl, ATerm t);
ATerm write_to_text_0_0 (StrSL sl, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL y_116, StrCL z_116, ATerm t);
ATerm xtc_transform_1_0 (StrSL sl, StrCL x_116, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
ATerm one_consnil_1_0 (StrSL sl, StrCL a_100, ATerm t);
ATerm map_consnil_1_0 (StrSL sl, StrCL x_99, ATerm t);
ATerm rtgfc_types_to_string_0_0 (StrSL sl, ATerm t);
ATerm rtgfc_format_check_report_0_3 (StrSL sl, ATerm p_99, ATerm q_99, ATerm r_99, ATerm t);
ATerm rtgfc_format_check_error_0_3 (StrSL sl, ATerm m_99, ATerm n_99, ATerm o_99, ATerm t);
ATerm rtgfc_get_types_0_2 (StrSL sl, ATerm k_99, ATerm l_99, ATerm t);
ATerm rtgfc_retrieve_types_0_2 (StrSL sl, ATerm i_99, ATerm j_99, ATerm t);
ATerm rtgfc_type_0_3 (StrSL sl, ATerm g_98, ATerm h_98, ATerm i_98, ATerm t);
ATerm rtg_format_check_2_2 (StrSL sl, StrCL e_98, StrCL f_98, ATerm c_98, ATerm d_98, ATerm t);
ATerm parse_rtg_file_0_0 (StrSL sl, ATerm t);
ATerm rtg_reduce_0_0 (StrSL sl, ATerm t);
ATerm rtg_group_productions_0_0 (StrSL sl, ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (StrSL sl, ATerm t);
ATerm aterm_UP_Tuple_1_0 (StrSL sl, StrCL j_60, ATerm t);
ATerm aterm_UP_App_1_1 (StrSL sl, StrCL b_52, ATerm a_52, ATerm t);
ATerm aterm_UP_Cnst_0_0 (StrSL sl, ATerm t);
ATerm aterm_UP_Real_0_0 (StrSL sl, ATerm t);
ATerm aterm_UP_Int_0_0 (StrSL sl, ATerm t);
ATerm aterm_UP_Str_0_0 (StrSL sl, ATerm t);
ATerm HelpString_2_0 (StrSL sl, StrCL g_44, StrCL h_44, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm fc_about_0_0 (StrSL sl, ATerm t);
ATerm fc_usage_0_0 (StrSL sl, ATerm t);
ATerm set_vis_mode_0_0 (StrSL sl, ATerm t);
ATerm is_vis_mode_0_0 (StrSL sl, ATerm t);
ATerm set_xhtml_mode_0_0 (StrSL sl, ATerm t);
ATerm is_xhtml_mode_0_0 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
ATerm fc_options_0_0 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
ATerm format_check_pp_aterm_0_2 (StrSL sl, ATerm z_40, ATerm a_41, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
ATerm format_check_xhtml_0_2 (StrSL sl, ATerm x_40, ATerm y_40, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
ATerm format_check_plain_0_2 (StrSL sl, ATerm s_40, ATerm u_40, ATerm t);
ATerm get_exit_code_0_0 (StrSL sl, ATerm t);
ATerm select_format_check_0_0 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
ATerm main_format_check_0_0 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
ATerm xtc_abox2text_1_0 (StrSL sl, StrCL n_38, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
ATerm ensure_help_string_0_0 (StrSL sl, ATerm t);
ATerm package_bugreport_0_0 (StrSL sl, ATerm t);
ATerm package_version_0_0 (StrSL sl, ATerm t);
ATerm package_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
ATerm DesugarToolDoc_0_0 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
ATerm tool_doc_0_0 (StrSL sl, ATerm t);
ATerm enable_fast_mode_0_0 (StrSL sl, ATerm t);
ATerm get_start_nonterm_0_0 (StrSL sl, ATerm t);
ATerm get_rtg_config_0_0 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
ATerm rtg_option_0_1 (StrSL sl, ATerm e_35, ATerm t);
ATerm get_rtg_nf_config_0_0 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm rtg_nf_option_0_1 (StrSL sl, ATerm a_35, ATerm t);
ATerm xtc_rtg_front_end_0_0 (StrSL sl, ATerm t);
ATerm is_typed_0_2 (StrSL sl, ATerm q_28, ATerm u_28, ATerm t);
ATerm code_plain_0_0 (StrSL sl, ATerm t);
ATerm code_red_0_0 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
ATerm my_generic_list_worstcase_4_2 (StrSL sl, StrCL v_27, StrCL w_27, StrCL x_27, StrCL y_27, ATerm m_27, ATerm n_27, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
ATerm my_generic_list_nicecase_4_2 (StrSL sl, StrCL h_26, StrCL j_26, StrCL o_26, StrCL r_26, ATerm a_26, ATerm b_26, ATerm t);
ATerm my_pp_generic_list_4_2 (StrSL sl, StrCL o_51, StrCL p_51, StrCL q_51, StrCL r_51, ATerm s_51, ATerm t_51, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
ATerm my_UP_List_1_2 (StrSL sl, StrCL m_24, ATerm c_24, ATerm d_24, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
ATerm ugly_print_type_1_2 (StrSL sl, StrCL z_23, ATerm p_22, ATerm s_22, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
ATerm ugly_print_type_0_2 (StrSL sl, ATerm x_21, ATerm a_22, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
ATerm my_ugly_print_0_2 (StrSL sl, ATerm i_21, ATerm k_21, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
ATerm core_format_check_pp_aterm_0_2 (StrSL sl, ATerm r_19, ATerm b_20, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
ATerm xhtml_generic_list_worstcase_3_0 (StrSL sl, StrCL j_18, StrCL k_18, StrCL l_18, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm xhtml_generic_list_nicecase_3_0 (StrSL sl, StrCL s_16, StrCL t_16, StrCL v_16, ATerm t);
ATerm xhtml_pp_generic_list_3_0 (StrSL sl, StrCL l_51, StrCL m_51, StrCL n_51, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
ATerm xhtml_print_List_0_0 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
ATerm xhtml_print_Tuple_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm xhtml_print_App_worstcase_0_0 (StrSL sl, ATerm t);
ATerm xhtml_get_types_to_chardata_0_0 (StrSL sl, ATerm t);
ATerm xhtml_print_App_nicecase_0_0 (StrSL sl, ATerm t);
ATerm xhtml_print_App_0_0 (StrSL sl, ATerm t);
ATerm xhtml_print_Cnst_0_0 (StrSL sl, ATerm t);
ATerm xhtml_print_Real_0_0 (StrSL sl, ATerm t);
ATerm xhtml_print_Int_0_0 (StrSL sl, ATerm t);
ATerm xhtml_print_Str_0_0 (StrSL sl, ATerm t);
ATerm xhtml_wrap_in_attrs_0_1 (StrSL sl, ATerm a_11, ATerm t);
ATerm xhtml_wrap_in_class_0_1 (StrSL sl, ATerm m_10, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm xhtml_print_type_1_0 (StrSL sl, StrCL d_10, ATerm t);
ATerm xhtml_is_typed_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
ATerm print_to_xhtml_0_0 (StrSL sl, ATerm t);
ATerm print_to_xhtml_doc_0_0 (StrSL sl, ATerm t);
ATerm core_format_check_xhtml_0_2 (StrSL sl, ATerm h_9, ATerm i_9, ATerm t);
ATerm escape_quot_0_0 (StrSL sl, ATerm t);
ATerm escape_apos_0_0 (StrSL sl, ATerm t);
ATerm escape_gt_0_0 (StrSL sl, ATerm t);
ATerm escape_lt_0_0 (StrSL sl, ATerm t);
ATerm escape_amp_0_0 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
static ATerm m_7 (StrSL sl, ATerm t);
ATerm xml_escape_chars_0_0 (StrSL sl, ATerm t);
ATerm HelpString_2_0 (StrSL sl, StrCL g_44, StrCL h_44, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "HelpString_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_214 = NULL,z_213 = NULL,a_214 = NULL,e_214 = NULL,f_214 = NULL;
ATerm trm123;
trm123 = (ATerm) ATgetAnnotations(t);
if((trm123 == NULL))
trm123 = (ATerm) ATempty;
if(match_cons(t, sym_HelpString_2))
{
z_213 = ATgetArgument(t, 0);
a_214 = ATgetArgument(t, 1);
}
else
goto fail127 ;
b_214 = trm123;
t = z_213;
t = cl_fun(g_44)(cl_sl(g_44), t);
if((t == NULL))
goto fail127 ;
e_214 = t;
t = a_214;
t = cl_fun(h_44)(cl_sl(h_44), t);
if((t == NULL))
goto fail127 ;
f_214 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_HelpString_2, e_214, f_214), b_214);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail127 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_format_check_0_0(sl, t);
if((t == NULL))
goto fail126 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail126 :
--__tracing_table_counter;
return(NULL);
}
ATerm fc_about_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fc_about_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Config_1, (ATerm) ATinsert(ATinsert(ATempty, term429), term431))), term435), term441), term449), term451);
t = tool_doc_0_0(sl, t);
if((t == NULL))
goto fail125 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail125 :
--__tracing_table_counter;
return(NULL);
}
ATerm fc_usage_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fc_usage_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term405), (ATerm) ATmakeAppl(sym_Description_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term407), term409), term411), term413), term415), term417))), term419), term423), term427);
t = tool_doc_0_0(sl, t);
if((t == NULL))
goto fail124 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail124 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_vis_mode_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_vis_mode_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term403;
t = set_config_0_0(sl, t);
if((t == NULL))
goto fail123 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail123 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_vis_mode_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_vis_mode_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term393;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail122 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail122 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_xhtml_mode_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_xhtml_mode_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term401;
t = set_config_0_0(sl, t);
if((t == NULL))
goto fail121 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail121 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_xhtml_mode_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_xhtml_mode_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term387;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail120 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail120 :
--__tracing_table_counter;
return(NULL);
}
ATerm fc_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fc_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm trm117 = t;
ATerm b_41 = NULL,e_41 = NULL;
e_41 = t;
t = term379;
b_41 = t;
t = e_41;
t = rtg_option_0_1(sl, b_41, t);
if((t == NULL))
goto label90 ;
goto label89 ;
label90 :
t = trm117;
{
ATerm trm118 = t;
ATerm f_41 = NULL,g_41 = NULL;
g_41 = t;
t = term381;
f_41 = t;
t = g_41;
t = rtg_nf_option_0_1(sl, f_41, t);
if((t == NULL))
goto label91 ;
goto label89 ;
label91 :
t = trm118;
{
ATerm trm119 = t;
ATerm h_41 = NULL,i_41 = NULL,h_218 = NULL,i_218 = NULL;
sl_init_var(0, h_218);
{
struct str_closure f_221 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(f_221);
struct str_closure g_221 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(g_221);
struct str_closure h_221 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(h_221);
i_41 = t;
t = term385;
h_41 = t;
t = i_41;
i_218 = t;
t = h_41;
if((h_218 == NULL))
{
h_218 = t;
}
else
if((h_218 != t))
goto label92 ;
t = i_218;
t = ArgOption_3_0(sl, lifted65_cl, lifted66_cl, lifted67_cl, t);
if((t == NULL))
goto label92 ;
}
goto label89 ;
label92 :
t = trm119;
{
ATerm trm121 = t;
struct str_closure i_221 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(i_221);
struct str_closure j_221 = { &(set_xhtml_mode_0_0) , sl };
StrCL lifted69_cl = &(j_221);
struct str_closure k_221 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(k_221);
t = Option_3_0(sl, lifted68_cl, lifted69_cl, lifted70_cl, t);
if((t == NULL))
goto label95 ;
goto label89 ;
label95 :
t = trm121;
{
ATerm trm122 = t;
struct str_closure l_221 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(l_221);
struct str_closure m_221 = { &(set_vis_mode_0_0) , sl };
StrCL lifted72_cl = &(m_221);
struct str_closure n_221 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(n_221);
t = Option_3_0(sl, lifted71_cl, lifted72_cl, lifted73_cl, t);
if((t == NULL))
goto label96 ;
goto label89 ;
label96 :
t = trm122;
{
ATerm j_41 = NULL,k_41 = NULL,l_218 = NULL,m_218 = NULL;
sl_init_var(1, l_218);
{
struct str_closure o_221 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(o_221);
struct str_closure p_221 = { &(enable_fast_mode_0_0) , sl };
StrCL lifted75_cl = &(p_221);
struct str_closure q_221 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(q_221);
k_41 = t;
t = term399;
j_41 = t;
t = k_41;
m_218 = t;
t = j_41;
if((l_218 == NULL))
{
l_218 = t;
}
else
if((l_218 != t))
goto fail110 ;
t = m_218;
t = Option_3_0(sl, lifted74_cl, lifted75_cl, lifted76_cl, t);
if((t == NULL))
goto fail110 ;
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
fail110 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail119 ;
else
{
t = (ATerm) ATmakeAppl(sym_HelpString_2, term297, sl_readvar(1, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail119 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--fast", 0, ATtrue))))
goto fail118 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail118 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted73 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted73";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term397;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail117 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--vis", 0, ATtrue))))
goto fail116 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail116 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term391;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail115 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--xhtml", 0, ATtrue))))
goto fail114 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail114 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted67 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted67";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail113 ;
else
{
t = (ATerm) ATmakeAppl(sym_HelpString_2, term383, sl_readvar(0, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail113 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_218 = NULL,k_218 = NULL;
k_218 = t;
j_218 = t;
t = (ATerm) ATmakeAppl(sym__2, term295, j_218);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail112 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail112 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm120 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-s", 0, ATtrue))))
goto label94 ;
goto label93 ;
label94 :
t = trm120;
if((ATgetSymbol(t) == ATmakeSymbol("--start", 0, ATtrue)))
goto label93 ;
else
goto fail111 ;
label93 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail111 :
--__tracing_table_counter;
return(NULL);
}
ATerm format_check_pp_aterm_0_2 (StrSL sl, ATerm z_40, ATerm a_41, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "format_check_pp_aterm_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_221 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(d_221);
struct str_closure e_221 = { &(pass_verbose_0_0) , sl };
StrCL lifted64_cl = &(e_221);
t = core_format_check_pp_aterm_0_2(sl, z_40, a_41, t);
if((t == NULL))
goto fail108 ;
t = write_to_0_0(sl, t);
if((t == NULL))
goto fail108 ;
t = xtc_transform_2_0(sl, lifted63_cl, lifted64_cl, t);
if((t == NULL))
goto fail108 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail108 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term369;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail109 :
--__tracing_table_counter;
return(NULL);
}
ATerm format_check_xhtml_0_2 (StrSL sl, ATerm x_40, ATerm y_40, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "format_check_xhtml_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_221 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(b_221);
struct str_closure c_221 = { &(pass_verbose_0_0) , sl };
StrCL lifted62_cl = &(c_221);
t = core_format_check_xhtml_0_2(sl, x_40, y_40, t);
if((t == NULL))
goto fail106 ;
t = write_to_0_0(sl, t);
if((t == NULL))
goto fail106 ;
t = xtc_transform_2_0(sl, lifted61_cl, lifted62_cl, t);
if((t == NULL))
goto fail106 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail106 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term377;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail107 :
--__tracing_table_counter;
return(NULL);
}
ATerm format_check_plain_0_2 (StrSL sl, ATerm s_40, ATerm u_40, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "format_check_plain_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm115 = t;
ATerm v_40 = NULL;
v_40 = t;
{
ATerm trm116 = t;
ATerm f_218 = NULL;
f_218 = t;
t = term297;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label88 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("true", 0, ATtrue))))
goto label88 ;
t = f_218;
{
struct str_closure y_220 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(y_220);
t = topdown_1_0(sl, lifted56_cl, t);
if((t == NULL))
goto label86 ;
else
goto label87 ;
}
label88 :
t = trm116;
goto label87 ;
label87 :
;
{
struct str_closure z_220 = { &(true_0_0) , sl };
StrCL lifted59_cl = &(z_220);
struct str_closure a_221 = { &(true_0_0) , sl };
StrCL lifted60_cl = &(a_221);
t = rtg_format_check_2_2(sl, lifted59_cl, lifted60_cl, s_40, u_40, t);
if((t == NULL))
goto label86 ;
t = term29;
t = set_config_0_0(sl, t);
if((t == NULL))
goto label86 ;
t = v_40;
}
}
goto label85 ;
label86 :
t = trm115;
t = term31;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto fail102 ;
else
goto label85 ;
label85 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_220 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(w_220);
struct str_closure x_220 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(x_220);
t = try_1_0(sl_up(sl), lifted57_cl, t);
if((t == NULL))
goto fail103 ;
t = try_1_0(sl_up(sl), lifted58_cl, t);
if((t == NULL))
goto fail103 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = is_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail105 ;
t = term365;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail105 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = is_int_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail104 ;
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail104 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_exit_code_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_exit_code_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm114 = t;
t = term25;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label84 ;
goto label83 ;
label84 :
t = trm114;
t = term27;
goto label83 ;
label83 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
ATerm select_format_check_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "select_format_check_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,q_40 = NULL,r_40 = NULL;
i_40 = t;
r_40 = t;
{
ATerm trm106 = t;
t = get_rtg_nf_config_0_0(sl, t);
if((t == NULL))
goto label75 ;
goto label74 ;
label75 :
t = trm106;
{
ATerm trm107 = t;
t = get_rtg_config_0_0(sl, t);
if((t == NULL))
goto label76 ;
goto label74 ;
label76 :
t = trm107;
{
ATerm a_218 = NULL,b_218 = NULL;
b_218 = t;
t = term373;
a_218 = t;
t = b_218;
t = fatal_err_0_1(sl, a_218, t);
if((t == NULL))
goto fail100 ;
else
goto label74 ;
}
}
label74 :
;
q_40 = t;
t = r_40;
t = q_40;
g_40 = t;
{
ATerm trm108 = t;
ATerm c_218 = NULL,d_218 = NULL;
t = get_start_nonterm_0_0(sl, t);
if((t == NULL))
goto label78 ;
d_218 = t;
c_218 = t;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Nonterm_1, c_218));
goto label77 ;
label78 :
t = trm108;
{
ATerm e_218 = NULL;
if(match_cons(t, sym_RTG_2))
{
ATerm trm109 = ATgetArgument(t, 0);
if(match_cons(trm109, sym_Start_1))
{
e_218 = ATgetArgument(trm109, 0);
}
else
goto fail100 ;
{
ATerm trm110 = ATgetArgument(t, 1);
}
}
else
goto fail100 ;
t = e_218;
goto label77 ;
}
label77 :
;
h_40 = t;
t = i_40;
{
ATerm trm111 = t;
ATerm j_40 = NULL;
j_40 = t;
t = is_xhtml_mode_0_0(sl, t);
if((t == NULL))
goto label80 ;
t = j_40;
t = format_check_xhtml_0_2(sl, g_40, h_40, t);
if((t == NULL))
goto fail100 ;
else
goto label79 ;
label80 :
t = trm111;
{
ATerm trm112 = t;
ATerm k_40 = NULL;
k_40 = t;
t = is_vis_mode_0_0(sl, t);
if((t == NULL))
goto label81 ;
t = k_40;
t = format_check_pp_aterm_0_2(sl, g_40, h_40, t);
if((t == NULL))
goto fail100 ;
else
goto label79 ;
label81 :
t = trm112;
t = format_check_plain_0_2(sl, g_40, h_40, t);
if((t == NULL))
goto fail100 ;
{
ATerm trm113 = t;
ATerm l_40 = NULL;
l_40 = t;
t = term375;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label82 ;
t = l_40;
t = write_to_0_0(sl, t);
if((t == NULL))
goto fail100 ;
else
goto label79 ;
label82 :
t = trm113;
t = write_to_text_0_0(sl, t);
if((t == NULL))
goto fail100 ;
else
goto label79 ;
}
}
label79 :
;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_format_check_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_format_check_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_220 = { &(fc_options_0_0) , sl };
StrCL lifted50_cl = &(r_220);
struct str_closure s_220 = { &(fc_usage_0_0) , sl };
StrCL lifted51_cl = &(s_220);
struct str_closure t_220 = { &(fc_about_0_0) , sl };
StrCL lifted52_cl = &(t_220);
struct str_closure u_220 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(u_220);
struct str_closure v_220 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(v_220);
t = xtc_io_wrap_5_0(sl, lifted50_cl, lifted51_cl, lifted52_cl, lifted53_cl, lifted54_cl, t);
if((t == NULL))
goto fail97 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = read_from_0_0(sl_up(sl), t);
if((t == NULL))
goto fail99 ;
t = select_format_check_0_0(sl_up(sl), t);
if((t == NULL))
goto fail99 ;
{
struct str_closure q_220 = { &(_Id) , sl_up(sl) };
StrCL lifted55_cl = &(q_220);
t = xtc_output_1_0(sl_up(sl), lifted55_cl, t);
if((t == NULL))
goto fail99 ;
t = get_exit_code_0_0(sl_up(sl), t);
if((t == NULL))
goto fail99 ;
t = xtc_exit_0_0(sl_up(sl), t);
if((t == NULL))
goto fail99 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_abox2text_1_0 (StrSL sl, StrCL n_38, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_abox2text_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, n_38);
{
struct str_closure o_220 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(o_220);
struct str_closure p_220 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(p_220);
t = xtc_transform_2_0(sl, lifted48_cl, lifted49_cl, t);
if((t == NULL))
goto fail94 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_38 = NULL,q_38 = NULL,p_38 = NULL,r_38 = NULL;
q_38 = t;
t = term257;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail96 ;
t = int_to_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail96 ;
o_38 = t;
t = q_38;
r_38 = t;
t = term257;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail96 ;
p_38 = t;
t = r_38;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, o_38), term371), p_38);
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail96 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term369;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
ATerm ensure_help_string_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ensure_help_string_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm103 = t;
struct str_closure m_220 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(m_220);
struct str_closure n_220 = { &(is_string_0_0) , sl };
StrCL lifted47_cl = &(n_220);
t = HelpString_2_0(sl, lifted46_cl, lifted47_cl, t);
if((t == NULL))
goto label70 ;
goto label69 ;
label70 :
t = trm103;
{
ATerm trm105 = t;
ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL;
c_38 = t;
f_38 = t;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label73 ;
t = (ATerm) ATmakeAppl(sym__2, c_38, term363);
t = split_before_0_0(sl, t);
if((t == NULL))
goto label73 ;
if(match_cons(t, sym__2))
{
d_38 = ATgetArgument(t, 0);
e_38 = ATgetArgument(t, 1);
}
else
goto label73 ;
t = f_38;
t = (ATerm) ATmakeAppl(sym_HelpString_2, d_38, e_38);
goto label69 ;
label73 :
t = trm105;
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto fail92 ;
t = term367;
goto label69 ;
}
label69 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm104 = t;
t = is_string_0_0(sl_up(sl), t);
if((t == NULL))
goto label72 ;
goto label71 ;
label72 :
t = trm104;
t = is_list_0_0(sl_up(sl), t);
if((t == NULL))
goto fail93 ;
else
goto label71 ;
label71 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
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
goto fail91 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
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
goto fail90 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
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
goto fail89 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
ATerm DesugarToolDoc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "DesugarToolDoc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm85 = t;
ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
if(match_cons(t, sym_Usage_1))
{
z_37 = ATgetArgument(t, 0);
}
else
goto label51 ;
b_38 = t;
t = (ATerm) ATmakeAppl(sym__2, term307, z_37);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label51 ;
a_38 = t;
t = b_38;
t = (ATerm) ATmakeAppl(sym_Line_1, a_38);
goto label50 ;
label51 :
t = trm85;
{
ATerm trm86 = t;
ATerm y_37 = NULL;
if(match_cons(t, sym_Summary_1))
{
y_37 = ATgetArgument(t, 0);
}
else
goto label52 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term309, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Paragraph_1, y_37)));
goto label50 ;
label52 :
t = trm86;
{
ATerm trm87 = t;
ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
if(match_cons(t, sym_Description_1))
{
t_37 = ATgetArgument(t, 0);
}
else
goto label53 ;
v_37 = t;
t = t_37;
{
struct str_closure i_220 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(i_220);
t = map_1_0(sl, lifted42_cl, t);
if((t == NULL))
goto label53 ;
u_37 = t;
t = v_37;
t = (ATerm) ATmakeAppl(sym_HSection_2, term311, u_37);
}
goto label50 ;
label53 :
t = trm87;
{
ATerm trm88 = t;
ATerm r_37 = NULL,s_37 = NULL;
if(!(match_cons(t, sym_OptionUsage_0)))
goto label54 ;
s_37 = t;
t = term317;
t = table_get_0_0(sl, t);
if((t == NULL))
goto label54 ;
t = reverse_0_0(sl, t);
if((t == NULL))
goto label54 ;
{
struct str_closure j_220 = { &(ensure_help_string_0_0) , sl };
StrCL lifted43_cl = &(j_220);
t = map_1_0(sl, lifted43_cl, t);
if((t == NULL))
goto label54 ;
{
struct str_closure k_220 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(k_220);
t = filter_1_0(sl, lifted44_cl, t);
if((t == NULL))
goto label54 ;
r_37 = t;
t = s_37;
t = (ATerm) ATmakeAppl(sym_HSection_2, term319, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, r_37)));
}
}
goto label50 ;
label54 :
t = trm88;
{
ATerm trm89 = t;
ATerm n_37 = NULL;
if(match_cons(t, sym_Authors_1))
{
n_37 = ATgetArgument(t, 0);
}
else
goto label55 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term321, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ItemList_1, n_37)));
goto label50 ;
label55 :
t = trm89;
{
ATerm trm90 = t;
ATerm m_37 = NULL;
if(match_cons(t, sym_Author_1))
{
m_37 = ATgetArgument(t, 0);
}
else
goto label56 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term323, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ItemList_1, (ATerm) ATinsert(ATempty, m_37))));
goto label50 ;
label56 :
t = trm90;
{
ATerm trm91 = t;
ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL;
if(match_cons(t, sym_Person_2))
{
g_37 = ATgetArgument(t, 0);
h_37 = ATgetArgument(t, 1);
}
else
goto label57 ;
j_37 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term325), h_37), term327), g_37);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label57 ;
i_37 = t;
t = j_37;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, i_37);
goto label50 ;
label57 :
t = trm91;
{
ATerm trm92 = t;
ATerm f_37 = NULL;
if(match_cons(t, sym_WebHome_1))
{
f_37 = ATgetArgument(t, 0);
}
else
goto label58 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term329, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Line_1, f_37)));
goto label50 ;
label58 :
t = trm92;
{
ATerm trm93 = t;
ATerm d_37 = NULL,e_37 = NULL;
if(!(match_cons(t, sym_AutoReportBugs_0)))
goto label59 ;
e_37 = t;
t = term257;
t = package_bugreport_0_0(sl, t);
if((t == NULL))
goto label59 ;
d_37 = t;
t = e_37;
t = (ATerm) ATmakeAppl(sym_ReportBugs_1, d_37);
goto label50 ;
label59 :
t = trm93;
{
ATerm trm94 = t;
ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
if(match_cons(t, sym_ReportBugs_1))
{
a_37 = ATgetArgument(t, 0);
}
else
goto label60 ;
c_37 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, a_37), term331);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label60 ;
b_37 = t;
t = c_37;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, b_37);
goto label50 ;
label60 :
t = trm94;
{
ATerm trm95 = t;
ATerm u_36 = NULL,x_36 = NULL,v_36 = NULL,y_36 = NULL,w_36 = NULL,z_36 = NULL;
if(!(match_cons(t, sym_AutoProgram_0)))
goto label61 ;
x_36 = t;
t = term333;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label61 ;
u_36 = t;
t = x_36;
y_36 = t;
t = term257;
t = package_name_0_0(sl, t);
if((t == NULL))
goto label61 ;
v_36 = t;
t = y_36;
z_36 = t;
t = term257;
t = package_version_0_0(sl, t);
if((t == NULL))
goto label61 ;
w_36 = t;
t = z_36;
t = (ATerm) ATmakeAppl(sym_Program_3, u_36, v_36, w_36);
goto label50 ;
label61 :
t = trm95;
{
ATerm trm96 = t;
ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
if(match_cons(t, sym_Program_3))
{
r_36 = ATgetArgument(t, 0);
s_36 = ATgetArgument(t, 1);
t_36 = ATgetArgument(t, 2);
}
else
goto label62 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, r_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Def_2, term335, (ATerm) ATmakeAppl(sym_Paragraph_1, t_36))), (ATerm) ATmakeAppl(sym_Def_2, term337, (ATerm) ATmakeAppl(sym_Paragraph_1, s_36))))));
goto label50 ;
label62 :
t = trm96;
{
ATerm trm97 = t;
ATerm o_36 = NULL;
if(match_cons(t, sym_Config_1))
{
o_36 = ATgetArgument(t, 0);
}
else
goto label63 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term339, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, o_36)));
goto label50 ;
label63 :
t = trm97;
{
ATerm trm98 = t;
ATerm m_36 = NULL,n_36 = NULL;
if(!(match_cons(t, sym_DefaultXTCRepository_0)))
goto label64 ;
n_36 = t;
t = term257;
t = GetInternalDefaultXtcRepository_0_0(sl, t);
if((t == NULL))
goto label64 ;
m_36 = t;
t = n_36;
t = (ATerm) ATmakeAppl(sym_ConfigItem_2, term341, m_36);
goto label50 ;
label64 :
t = trm98;
{
ATerm trm99 = t;
ATerm k_36 = NULL,l_36 = NULL;
if(!(match_cons(t, sym_CurrentXTCRepository_0)))
goto label65 ;
l_36 = t;
t = term257;
t = xtc_location_0_0(sl, t);
if((t == NULL))
goto label65 ;
k_36 = t;
t = l_36;
t = (ATerm) ATmakeAppl(sym_ConfigItem_2, term343, k_36);
goto label50 ;
label65 :
t = trm99;
{
ATerm trm100 = t;
ATerm i_36 = NULL,j_36 = NULL;
if(match_cons(t, sym_ConfigItem_2))
{
i_36 = ATgetArgument(t, 0);
j_36 = ATgetArgument(t, 1);
}
else
goto label66 ;
t = (ATerm) ATmakeAppl(sym_Def_2, i_36, (ATerm) ATmakeAppl(sym_Line_1, j_36));
goto label50 ;
label66 :
t = trm100;
{
ATerm trm101 = t;
ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
if(match_cons(t, sym_License_1))
{
d_36 = ATgetArgument(t, 0);
}
else
goto label67 ;
f_36 = t;
t = d_36;
{
struct str_closure l_220 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(l_220);
t = map_1_0(sl, lifted45_cl, t);
if((t == NULL))
goto label67 ;
e_36 = t;
t = f_36;
t = (ATerm) ATmakeAppl(sym_HSection_2, term345, e_36);
}
goto label50 ;
label67 :
t = trm101;
{
ATerm trm102 = t;
ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
if(match_cons(t, sym_GNU__GPL_2))
{
z_35 = ATgetArgument(t, 0);
a_36 = ATgetArgument(t, 1);
}
else
goto label68 ;
c_36 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_36), term347), z_35), term349);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label68 ;
b_36 = t;
t = c_36;
t = (ATerm) ATmakeAppl(sym_License_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term351), term353), term355), b_36));
goto label50 ;
label68 :
t = trm102;
{
ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
if(match_cons(t, sym_GNU__LGPL_2))
{
v_35 = ATgetArgument(t, 0);
w_35 = ATgetArgument(t, 1);
}
else
goto fail85 ;
y_35 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_35), term347), v_35), term349);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail85 ;
x_35 = t;
t = y_35;
t = (ATerm) ATmakeAppl(sym_License_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term357), term359), term361), x_35));
goto label50 ;
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
label50 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_36 = NULL,h_36 = NULL;
h_36 = t;
g_36 = t;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, g_36);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_37 = NULL,p_37 = NULL;
if(match_cons(t, sym_HelpString_2))
{
o_37 = ATgetArgument(t, 0);
p_37 = ATgetArgument(t, 1);
}
else
goto fail87 ;
t = (ATerm) ATmakeAppl(sym_Def_2, o_37, (ATerm) ATmakeAppl(sym_Paragraph_1, p_37));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_37 = NULL,x_37 = NULL;
x_37 = t;
w_37 = t;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, w_37);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
ATerm tool_doc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tool_doc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_35 = NULL;
t_35 = t;
{
struct str_closure h_220 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(h_220);
t = xtc_temp_files_1_0(sl, lifted36_cl, t);
if((t == NULL))
goto fail79 ;
t = t_35;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_35 = NULL;
struct str_closure d_220 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(d_220);
t = topdown_1_0(sl_up(sl), lifted37_cl, t);
if((t == NULL))
goto fail80 ;
t = write_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail80 ;
{
struct str_closure e_220 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(e_220);
t = xtc_transform_1_0(sl_up(sl), lifted39_cl, t);
if((t == NULL))
goto fail80 ;
{
struct str_closure f_220 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(f_220);
t = xtc_abox2text_1_0(sl_up(sl), lifted40_cl, t);
if((t == NULL))
goto fail80 ;
u_35 = t;
{
struct str_closure g_220 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(g_220);
t = FILE_1_0(sl_up(sl), lifted41_cl, t);
if((t == NULL))
goto fail80 ;
t = u_35;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = read_text_file_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail84 ;
t = echo_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail84 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term305;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term303;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_220 = { &(DesugarToolDoc_0_0) , sl_up(sl_up(sl)) };
StrCL lifted38_cl = &(c_220);
t = repeat_1_0(sl_up(sl_up(sl)), lifted38_cl, t);
if((t == NULL))
goto fail81 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
ATerm enable_fast_mode_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "enable_fast_mode_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term301;
t = set_config_0_0(sl, t);
if((t == NULL))
goto fail78 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_start_nonterm_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_start_nonterm_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term295;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail77 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_rtg_config_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_rtg_config_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_35 = NULL,m_35 = NULL;
t = term291;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail76 ;
m_35 = t;
l_35 = t;
t = (ATerm) ATmakeAppl(sym_FILE_1, l_35);
t = xtc_rtg_front_end_0_0(sl, t);
if((t == NULL))
goto fail76 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
ATerm rtg_option_0_1 (StrSL sl, ATerm e_35, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rtg_option_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, e_35);
{
struct str_closure z_219 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(z_219);
struct str_closure a_220 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(a_220);
struct str_closure b_220 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(b_220);
t = ArgOption_3_0(sl, lifted33_cl, lifted34_cl, lifted35_cl, t);
if((t == NULL))
goto fail72 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail75 ;
else
{
t = (ATerm) ATmakeAppl(sym_HelpString_2, term293, sl_readvar(0, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_35 = NULL,g_35 = NULL,k_35 = NULL;
f_35 = t;
k_35 = t;
g_35 = t;
t = (ATerm) ATmakeAppl(sym__2, term291, g_35);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail74 ;
t = f_35;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--rtg", 0, ATtrue))))
goto fail73 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_rtg_nf_config_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_rtg_nf_config_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term287;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail71 ;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto fail71 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
ATerm rtg_nf_option_0_1 (StrSL sl, ATerm a_35, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rtg_nf_option_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, a_35);
{
struct str_closure w_219 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(w_219);
struct str_closure x_219 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(x_219);
struct str_closure y_219 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(y_219);
t = ArgOption_3_0(sl, lifted30_cl, lifted31_cl, lifted32_cl, t);
if((t == NULL))
goto fail67 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail70 ;
else
{
t = (ATerm) ATmakeAppl(sym_HelpString_2, term289, sl_readvar(0, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
b_35 = t;
d_35 = t;
c_35 = t;
t = (ATerm) ATmakeAppl(sym__2, term287, c_35);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail69 ;
t = b_35;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--rtg-nf", 0, ATtrue))))
goto fail68 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_rtg_front_end_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_rtg_front_end_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_34 = NULL;
t = xtc_ensure_file_0_0(sl, t);
if((t == NULL))
goto fail66 ;
if(match_cons(t, sym_FILE_1))
{
c_34 = ATgetArgument(t, 0);
}
else
goto fail66 ;
t = c_34;
t = parse_rtg_file_0_0(sl, t);
if((t == NULL))
goto fail66 ;
t = rtg_reduce_0_0(sl, t);
if((t == NULL))
goto fail66 ;
t = rtg_group_productions_0_0(sl, t);
if((t == NULL))
goto fail66 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_typed_0_2 (StrSL sl, ATerm q_28, ATerm u_28, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_typed_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_28 = NULL;
v_28 = t;
t = rtgfc_get_types_0_2(sl, q_28, u_28, t);
if((t == NULL))
goto fail65 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm83 = ATgetFirst((ATermList) t);
ATerm trm84 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail65 ;
t = v_28;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
ATerm code_plain_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "code_plain_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_28 = NULL,p_28 = NULL;
p_28 = t;
t = (ATerm) ATinsert(ATempty, term281);
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail64 ;
o_28 = t;
t = p_28;
t = (ATerm) ATmakeAppl(sym__2, o_28, term285);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail64 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
ATerm code_red_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "code_red_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_28 = NULL,n_28 = NULL;
n_28 = t;
t = (ATerm) ATinsert(ATempty, term281);
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail63 ;
m_28 = t;
t = n_28;
t = (ATerm) ATmakeAppl(sym__2, m_28, term283);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail63 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
ATerm my_generic_list_worstcase_4_2 (StrSL sl, StrCL v_27, StrCL w_27, StrCL x_27, StrCL y_27, ATerm m_27, ATerm n_27, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "my_generic_list_worstcase_4_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_vars(2);
sl_init_fun(0, v_27);
sl_init_var(0, m_27);
sl_init_var(1, n_27);
{
ATerm o_27 = NULL,t_27 = NULL,u_27 = NULL,z_27 = NULL,d_28 = NULL,g_28 = NULL,e_28 = NULL,h_28 = NULL,f_28 = NULL,i_28 = NULL,j_28 = NULL,l_28 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
o_27 = ATgetFirst((ATermList) t);
t_27 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail60 ;
z_27 = t;
t = t_27;
{
struct str_closure v_219 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(v_219);
t = map_consnil_1_0(sl, lifted28_cl, t);
if((t == NULL))
goto fail60 ;
u_27 = t;
t = z_27;
g_28 = t;
t = term257;
t = cl_fun(x_27)(cl_sl(x_27), t);
if((t == NULL))
goto fail60 ;
d_28 = t;
t = g_28;
h_28 = t;
t = o_27;
t = cl_fun(v_27)(cl_sl(v_27), t);
if((t == NULL))
goto fail60 ;
e_28 = t;
t = h_28;
i_28 = t;
l_28 = t;
t = term257;
t = cl_fun(y_27)(cl_sl(y_27), t);
if((t == NULL))
goto fail60 ;
j_28 = t;
t = l_28;
t = (ATerm) ATmakeAppl(sym__2, u_27, (ATerm) ATinsert(ATempty, j_28));
t = makeConc_0_0(sl, t);
if((t == NULL))
goto fail60 ;
f_28 = t;
t = i_28;
{
ATerm trm82;
trm82 = CheckATermList(f_28);
if((trm82 == NULL))
goto fail60 ;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term279), (ATerm) ATinsert((ATermList)trm82, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term273), (ATerm) ATinsert(ATinsert(ATempty, e_28), d_28))));
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_219 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(u_219);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail61 ;
else
{
t = ugly_print_type_1_2(sl_up(sl), lifted29_cl, sl_readvar(0, sl), sl_readvar(1, sl), t);
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
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
a_28 = ATgetFirst((ATermList) t);
{
ATerm trm81 = (ATerm) ATgetNext((ATermList) t);
}
}
else
goto fail62 ;
t = a_28;
c_28 = t;
t = sl_fun(0, sl_up(sl))(sl_fun_sl(0, sl_up(sl)), t);
if((t == NULL))
goto fail62 ;
b_28 = t;
t = c_28;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term273), (ATerm) ATinsert(ATinsert(ATempty, b_28), term275));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
ATerm my_generic_list_nicecase_4_2 (StrSL sl, StrCL h_26, StrCL j_26, StrCL o_26, StrCL r_26, ATerm a_26, ATerm b_26, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "my_generic_list_nicecase_4_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_vars(2);
sl_init_fun(0, h_26);
sl_init_var(0, a_26);
sl_init_var(1, b_26);
{
ATerm c_26 = NULL,e_26 = NULL,g_26 = NULL,s_26 = NULL,b_27 = NULL,e_27 = NULL,c_27 = NULL,f_27 = NULL,d_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
c_26 = ATgetFirst((ATermList) t);
e_26 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail57 ;
s_26 = t;
t = e_26;
{
struct str_closure t_219 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(t_219);
t = map_consnil_1_0(sl, lifted26_cl, t);
if((t == NULL))
goto fail57 ;
g_26 = t;
t = s_26;
e_27 = t;
t = term257;
t = cl_fun(o_26)(cl_sl(o_26), t);
if((t == NULL))
goto fail57 ;
b_27 = t;
t = e_27;
f_27 = t;
t = c_26;
t = cl_fun(h_26)(cl_sl(h_26), t);
if((t == NULL))
goto fail57 ;
c_27 = t;
t = f_27;
j_27 = t;
l_27 = t;
t = term257;
t = cl_fun(r_26)(cl_sl(r_26), t);
if((t == NULL))
goto fail57 ;
k_27 = t;
t = l_27;
t = (ATerm) ATmakeAppl(sym__2, g_26, (ATerm) ATinsert(ATempty, k_27));
t = makeConc_0_0(sl, t);
if((t == NULL))
goto fail57 ;
d_27 = t;
t = j_27;
{
ATerm trm80;
trm80 = CheckATermList(d_27);
if((trm80 == NULL))
goto fail57 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term263), (ATerm) ATinsert(ATinsert((ATermList)trm80, c_27), b_27));
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_219 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(s_219);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail58 ;
else
{
t = ugly_print_type_1_2(sl_up(sl), lifted27_cl, sl_readvar(0, sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail58 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_26 = NULL,w_26 = NULL,a_27 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
v_26 = ATgetFirst((ATermList) t);
{
ATerm trm79 = (ATerm) ATgetNext((ATermList) t);
}
}
else
goto fail59 ;
t = v_26;
a_27 = t;
t = sl_fun(0, sl_up(sl))(sl_fun_sl(0, sl_up(sl)), t);
if((t == NULL))
goto fail59 ;
w_26 = t;
t = a_27;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term273), (ATerm) ATinsert(ATinsert(ATempty, w_26), term275));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
ATerm my_pp_generic_list_4_2 (StrSL sl, StrCL o_51, StrCL p_51, StrCL q_51, StrCL r_51, ATerm s_51, ATerm t_51, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "my_pp_generic_list_4_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm77 = t;
ATerm trm78 = t;
ATerm k_25 = NULL,x_25 = NULL,z_25 = NULL;
k_25 = t;
z_25 = t;
t = term_size_0_0(sl, t);
if((t == NULL))
goto label49 ;
x_25 = t;
t = z_25;
t = (ATerm) ATmakeAppl(sym__2, x_25, term255);
t = gt_0_0(sl, t);
if((t == NULL))
goto label49 ;
t = k_25;
t = my_generic_list_worstcase_4_2(sl, o_51, p_51, q_51, r_51, s_51, t_51, t);
if((t == NULL))
goto label47 ;
else
goto label48 ;
label49 :
t = trm78;
t = my_generic_list_nicecase_4_2(sl, o_51, p_51, q_51, r_51, s_51, t_51, t);
if((t == NULL))
goto label47 ;
else
goto label48 ;
label48 :
;
goto label46 ;
label47 :
t = trm77;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail56 ;
t = term257;
t = cl_fun(p_51)(cl_sl(p_51), t);
if((t == NULL))
goto fail56 ;
else
goto label46 ;
label46 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
ATerm my_UP_List_1_2 (StrSL sl, StrCL m_24, ATerm c_24, ATerm d_24, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "my_UP_List_1_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_219 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(p_219);
struct str_closure q_219 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(q_219);
struct str_closure r_219 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(r_219);
t = my_pp_generic_list_4_2(sl, m_24, lifted23_cl, lifted24_cl, lifted25_cl, c_24, d_24, t);
if((t == NULL))
goto fail52 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term269;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term267;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term265;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
ATerm ugly_print_type_1_2 (StrSL sl, StrCL z_23, ATerm p_22, ATerm s_22, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ugly_print_type_1_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, p_22);
sl_init_var(1, s_22);
{
ATerm t_22 = NULL,w_22 = NULL,c_23 = NULL;
ATerm trm72 = t;
ATerm d_23 = NULL;
d_23 = t;
{
ATerm trm73 = t;
ATerm t_217 = NULL,u_217 = NULL,w_217 = NULL,x_217 = NULL,v_217 = NULL;
w_217 = t;
if((p_22 == NULL))
goto label43 ;
else
{
t = p_22;
}
t_217 = t;
t = w_217;
x_217 = t;
if((s_22 == NULL))
goto label43 ;
else
{
t = s_22;
}
u_217 = t;
t = x_217;
v_217 = t;
t = rtgfc_get_types_0_2(sl, t_217, u_217, t);
if((t == NULL))
goto label43 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm74 = ATgetFirst((ATermList) t);
ATerm trm75 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label43 ;
t = v_217;
goto label42 ;
label43 :
t = trm73;
{
struct str_closure o_219 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(o_219);
t = one_consnil_1_0(sl, lifted22_cl, t);
if((t == NULL))
goto label41 ;
else
goto label42 ;
}
label42 :
;
t = d_23;
}
t = cl_fun(z_23)(cl_sl(z_23), t);
if((t == NULL))
goto fail50 ;
else
goto label40 ;
label41 :
t = trm72;
{
ATerm e_23 = NULL,h_23 = NULL;
t = cl_fun(z_23)(cl_sl(z_23), t);
if((t == NULL))
goto fail50 ;
t_22 = t;
e_23 = t;
t = code_red_0_0(sl, t);
if((t == NULL))
goto fail50 ;
w_22 = t;
t = e_23;
h_23 = t;
t = code_plain_0_0(sl, t);
if((t == NULL))
goto fail50 ;
c_23 = t;
t = h_23;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term263), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, c_23)), (ATerm) ATmakeAppl(sym_S_1, w_22)), t_22), (ATerm) ATmakeAppl(sym_S_1, w_22)), (ATerm) ATmakeAppl(sym_S_1, c_23)));
goto label40 ;
}
label40 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm76 = t;
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto label45 ;
else
{
t = is_typed_0_2(sl_up(sl), sl_readvar(0, sl), sl_readvar(1, sl), t);
if((t == NULL))
goto label45 ;
}
goto fail51 ;
label45 :
t = trm76;
goto label44 ;
label44 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
ATerm ugly_print_type_0_2 (StrSL sl, ATerm x_21, ATerm a_22, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ugly_print_type_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, x_21);
sl_init_var(1, a_22);
{
struct str_closure n_219 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(n_219);
if(((x_21 == NULL) || (a_22 == NULL)))
goto fail48 ;
else
{
t = ugly_print_type_1_2(sl, lifted21_cl, x_21, a_22, t);
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
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail49 ;
else
{
t = my_ugly_print_0_2(sl_up(sl), sl_readvar(0, sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail49 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
ATerm my_ugly_print_0_2 (StrSL sl, ATerm i_21, ATerm k_21, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "my_ugly_print_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, i_21);
sl_init_var(1, k_21);
{
ATerm trm66 = t;
t = aterm_UP_Int_0_0(sl, t);
if((t == NULL))
goto label34 ;
goto label33 ;
label34 :
t = trm66;
{
ATerm trm67 = t;
t = aterm_UP_Real_0_0(sl, t);
if((t == NULL))
goto label35 ;
goto label33 ;
label35 :
t = trm67;
{
ATerm trm68 = t;
t = aterm_UP_Str_0_0(sl, t);
if((t == NULL))
goto label36 ;
goto label33 ;
label36 :
t = trm68;
{
ATerm trm69 = t;
struct str_closure k_219 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(k_219);
if(((i_21 == NULL) || (k_21 == NULL)))
goto label37 ;
else
{
t = my_UP_List_1_2(sl, lifted17_cl, i_21, k_21, t);
if((t == NULL))
goto label37 ;
}
goto label33 ;
label37 :
t = trm69;
{
ATerm trm70 = t;
struct str_closure l_219 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(l_219);
t = aterm_UP_Tuple_1_0(sl, lifted19_cl, t);
if((t == NULL))
goto label38 ;
goto label33 ;
label38 :
t = trm70;
{
ATerm trm71 = t;
t = aterm_UP_Cnst_0_0(sl, t);
if((t == NULL))
goto label39 ;
goto label33 ;
label39 :
t = trm71;
{
ATerm t_21 = NULL,w_21 = NULL;
struct str_closure m_219 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(m_219);
w_21 = t;
t = term201;
t_21 = t;
t = w_21;
t = aterm_UP_App_1_1(sl, lifted20_cl, t_21, t);
if((t == NULL))
goto fail43 ;
else
goto label33 ;
}
}
}
}
}
}
label33 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail47 ;
else
{
t = ugly_print_type_0_2(sl_up(sl), sl_readvar(0, sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail47 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail46 ;
else
{
t = ugly_print_type_0_2(sl_up(sl), sl_readvar(0, sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail46 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm p_217 = NULL,q_217 = NULL,r_217 = NULL,s_217 = NULL;
sl_init_var(0, p_217);
sl_init_var(1, q_217);
{
struct str_closure j_219 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(j_219);
r_217 = t;
if((sl_readvar(0, sl) == NULL))
goto fail44 ;
else
{
t = sl_readvar(0, sl);
}
if((p_217 == NULL))
{
p_217 = t;
}
else
if((p_217 != t))
goto fail44 ;
t = r_217;
s_217 = t;
if((sl_readvar(1, sl) == NULL))
goto fail44 ;
else
{
t = sl_readvar(1, sl);
}
if((q_217 == NULL))
{
q_217 = t;
}
else
if((q_217 != t))
goto fail44 ;
t = s_217;
if(((p_217 == NULL) || (q_217 == NULL)))
goto fail44 ;
else
{
t = ugly_print_type_1_2(sl_up(sl), lifted18_cl, p_217, q_217, t);
if((t == NULL))
goto fail44 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail45 ;
else
{
t = my_ugly_print_0_2(sl_up(sl_up(sl)), sl_readvar(0, sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail45 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
ATerm core_format_check_pp_aterm_0_2 (StrSL sl, ATerm r_19, ATerm b_20, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "core_format_check_pp_aterm_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm d_20 = NULL,e_20 = NULL,i_20 = NULL,j_20 = NULL,w_20 = NULL,x_20 = NULL,y_216 = NULL,z_216 = NULL,c_217 = NULL,e_217 = NULL,g_217 = NULL,h_217 = NULL,i_217 = NULL,j_217 = NULL;
sl_init_var(0, g_217);
sl_init_var(1, h_217);
i_20 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail41 ;
d_20 = t;
t = i_20;
j_20 = t;
t = new_iset_0_0(sl, t);
if((t == NULL))
goto fail41 ;
e_20 = t;
t = j_20;
t = rtgfc_type_0_3(sl, r_19, d_20, e_20, t);
if((t == NULL))
goto fail41 ;
w_20 = t;
t = rtgfc_format_check_report_0_3(sl, r_19, d_20, e_20, t);
if((t == NULL))
goto fail41 ;
t = w_20;
x_20 = t;
{
ATerm trm65 = t;
ATerm y_20 = NULL;
y_20 = t;
t = rtgfc_format_check_error_0_3(sl, b_20, d_20, e_20, t);
if((t == NULL))
goto label32 ;
t = y_20;
t = term29;
t = set_config_0_0(sl, t);
if((t == NULL))
goto fail41 ;
else
goto label31 ;
label32 :
t = trm65;
t = term33;
t = set_config_0_0(sl, t);
if((t == NULL))
goto fail41 ;
else
goto label31 ;
label31 :
;
t = x_20;
c_217 = t;
t = d_20;
y_216 = t;
t = c_217;
e_217 = t;
t = e_20;
z_216 = t;
t = e_217;
{
struct str_closure i_219 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(i_219);
i_217 = t;
t = y_216;
if((g_217 == NULL))
{
g_217 = t;
}
else
if((g_217 != t))
goto fail41 ;
t = i_217;
j_217 = t;
t = z_216;
if((h_217 == NULL))
{
h_217 = t;
}
else
if((h_217 != t))
goto fail41 ;
t = j_217;
if(((g_217 == NULL) || (h_217 == NULL)))
goto fail41 ;
else
{
t = ugly_print_type_1_2(sl, lifted16_cl, g_217, h_217, t);
if((t == NULL))
goto fail41 ;
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
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail42 ;
else
{
t = my_ugly_print_0_2(sl_up(sl), sl_readvar(0, sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail42 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_generic_list_worstcase_3_0 (StrSL sl, StrCL j_18, StrCL k_18, StrCL l_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_generic_list_worstcase_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_17 = NULL,v_17 = NULL,p_18 = NULL,e_19 = NULL,q_18 = NULL,f_19 = NULL,d_19 = NULL,g_19 = NULL,k_19 = NULL,p_19 = NULL,l_19 = NULL,q_19 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
u_17 = ATgetFirst((ATermList) t);
v_17 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail38 ;
e_19 = t;
t = cl_fun(k_18)(cl_sl(k_18), t);
if((t == NULL))
goto fail38 ;
p_18 = t;
t = e_19;
f_19 = t;
t = u_17;
t = print_to_xhtml_0_0(sl, t);
if((t == NULL))
goto fail38 ;
q_18 = t;
t = f_19;
g_19 = t;
p_19 = t;
t = v_17;
{
struct str_closure h_219 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(h_219);
t = map_consnil_1_0(sl, lifted14_cl, t);
if((t == NULL))
goto fail38 ;
k_19 = t;
t = p_19;
q_19 = t;
t = cl_fun(l_18)(cl_sl(l_18), t);
if((t == NULL))
goto fail38 ;
l_19 = t;
t = q_19;
t = (ATerm) ATmakeAppl(sym__2, k_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term79))), (ATerm) ATmakeAppl(sym_Element_4, term191, (ATerm)ATempty, (ATerm)ATinsert(ATempty, l_19), term191)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term87))));
t = makeConc_0_0(sl, t);
if((t == NULL))
goto fail38 ;
d_19 = t;
t = g_19;
{
ATerm trm64;
trm64 = CheckATermList(d_19);
if((trm64 == NULL))
goto fail38 ;
t = (ATerm) ATmakeAppl(sym_Element_4, term191, (ATerm)ATempty, (ATerm)ATinsert(ATinsert(ATinsert((ATermList)trm64, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term87))), (ATerm) ATmakeAppl(sym_Element_4, term191, (ATerm)ATempty, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term87))), (ATerm) ATmakeAppl(sym_Element_4, term191, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Attribute_2, term155, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, term221)))), (ATerm)ATinsert(ATempty, q_18), term191)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term91))), (ATerm) ATmakeAppl(sym_Element_4, term107, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Attribute_2, term155, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, term229)))), (ATerm)ATinsert(ATempty, p_18), term107)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term91))), term191)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term87))), term191);
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_219 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(g_219);
t = xhtml_print_type_1_0(sl_up(sl), lifted15_cl, t);
if((t == NULL))
goto fail39 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_17 = NULL,z_17 = NULL,i_18 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
y_17 = ATgetFirst((ATermList) t);
{
ATerm trm63 = (ATerm) ATgetNext((ATermList) t);
}
}
else
goto fail40 ;
t = y_17;
t = print_to_xhtml_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail40 ;
i_18 = t;
z_17 = t;
t = (ATerm) ATmakeAppl(sym_Element_4, term191, (ATerm)ATempty, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term217))), (ATerm) ATmakeAppl(sym_Element_4, term191, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Attribute_2, term155, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, term221)))), (ATerm)ATinsert(ATempty, z_17), term191)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term225))), (ATerm) ATmakeAppl(sym_Element_4, term107, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Attribute_2, term155, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, term229)))), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term233))), term107)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term225))), term191);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_generic_list_nicecase_3_0 (StrSL sl, StrCL s_16, StrCL t_16, StrCL v_16, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_generic_list_nicecase_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_16 = NULL,n_16 = NULL,w_16 = NULL,a_17 = NULL,x_16 = NULL,c_17 = NULL,y_16 = NULL,d_17 = NULL,f_17 = NULL,k_17 = NULL,g_17 = NULL,l_17 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
k_16 = ATgetFirst((ATermList) t);
n_16 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail35 ;
a_17 = t;
t = cl_fun(t_16)(cl_sl(t_16), t);
if((t == NULL))
goto fail35 ;
w_16 = t;
t = a_17;
c_17 = t;
t = k_16;
t = print_to_xhtml_0_0(sl, t);
if((t == NULL))
goto fail35 ;
x_16 = t;
t = c_17;
d_17 = t;
k_17 = t;
t = n_16;
{
struct str_closure f_219 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(f_219);
t = map_consnil_1_0(sl, lifted12_cl, t);
if((t == NULL))
goto fail35 ;
f_17 = t;
t = k_17;
l_17 = t;
t = cl_fun(v_16)(cl_sl(v_16), t);
if((t == NULL))
goto fail35 ;
g_17 = t;
t = l_17;
t = (ATerm) ATmakeAppl(sym__2, f_17, (ATerm) ATinsert(ATempty, g_17));
t = makeConc_0_0(sl, t);
if((t == NULL))
goto fail35 ;
y_16 = t;
t = d_17;
{
ATerm trm62;
trm62 = CheckATermList(y_16);
if((trm62 == NULL))
goto fail35 ;
t = (ATerm) ATmakeAppl(sym_Element_4, term107, (ATerm)ATempty, (ATerm)ATinsert(ATinsert((ATermList)trm62, x_16), w_16), term107);
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_219 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(e_219);
t = xhtml_print_type_1_0(sl_up(sl), lifted13_cl, t);
if((t == NULL))
goto fail36 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
p_16 = ATgetFirst((ATermList) t);
{
ATerm trm61 = (ATerm) ATgetNext((ATermList) t);
}
}
else
goto fail37 ;
t = p_16;
t = print_to_xhtml_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail37 ;
r_16 = t;
q_16 = t;
t = (ATerm) ATmakeAppl(sym_Element_4, term107, (ATerm)ATempty, (ATerm)ATinsert(ATinsert(ATempty, q_16), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term205))), term107);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_pp_generic_list_3_0 (StrSL sl, StrCL l_51, StrCL m_51, StrCL n_51, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_pp_generic_list_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm57 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm58 = ATgetFirst((ATermList) t);
ATerm trm59 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label28 ;
{
ATerm trm60 = t;
ATerm p_15 = NULL,e_16 = NULL,f_16 = NULL;
p_15 = t;
f_16 = t;
t = term_size_0_0(sl, t);
if((t == NULL))
goto label30 ;
e_16 = t;
t = f_16;
t = (ATerm) ATmakeAppl(sym__2, e_16, term255);
t = gt_0_0(sl, t);
if((t == NULL))
goto label30 ;
t = p_15;
t = xhtml_generic_list_worstcase_3_0(sl, l_51, m_51, n_51, t);
if((t == NULL))
goto label28 ;
else
goto label29 ;
label30 :
t = trm60;
t = xhtml_generic_list_nicecase_3_0(sl, l_51, m_51, n_51, t);
if((t == NULL))
goto label28 ;
else
goto label29 ;
label29 :
;
}
goto label27 ;
label28 :
t = trm57;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail34 ;
t = term257;
t = cl_fun(l_51)(cl_sl(l_51), t);
if((t == NULL))
goto fail34 ;
else
goto label27 ;
label27 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_print_List_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_print_List_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_219 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(b_219);
struct str_closure c_219 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(c_219);
struct str_closure d_219 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(d_219);
t = xhtml_pp_generic_list_3_0(sl, lifted9_cl, lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto fail30 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term253));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term249));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term245));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_print_Tuple_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_print_Tuple_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_15 = NULL;
struct str_closure y_218 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(y_218);
struct str_closure z_218 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(z_218);
struct str_closure a_219 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(a_219);
ATerm trm55,trm56;
trm55 = SSL_get_constructor(t);
trm56 = SSL_get_arguments(t);
if(!((ATgetSymbol(trm55) == ATmakeSymbol("", 0, ATtrue))))
goto fail26 ;
i_15 = trm56;
t = i_15;
t = xhtml_pp_generic_list_3_0(sl, lifted6_cl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail26 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term209));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term213));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term199));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_print_App_worstcase_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_print_App_worstcase_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_14 = NULL,r_14 = NULL,v_14 = NULL,w_14 = NULL,z_14 = NULL,d_15 = NULL,a_15 = NULL,e_15 = NULL,c_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
q_14 = t;
{
ATerm trm52,trm53;
trm52 = SSL_get_constructor(t);
trm53 = SSL_get_arguments(t);
r_14 = trm52;
if(((ATgetType(trm53) == AT_LIST) && !(ATisEmpty(trm53))))
{
v_14 = ATgetFirst((ATermList) trm53);
w_14 = (ATerm) ATgetNext((ATermList) trm53);
}
else
goto fail24 ;
}
d_15 = t;
t = r_14;
z_14 = t;
t = d_15;
e_15 = t;
t = v_14;
t = print_to_xhtml_0_0(sl, t);
if((t == NULL))
goto fail24 ;
a_15 = t;
t = e_15;
f_15 = t;
h_15 = t;
t = w_14;
{
struct str_closure x_218 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(x_218);
t = map_1_0(sl, lifted5_cl, t);
if((t == NULL))
goto fail24 ;
g_15 = t;
t = h_15;
t = (ATerm) ATmakeAppl(sym__2, g_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term237))));
t = makeConc_0_0(sl, t);
if((t == NULL))
goto fail24 ;
c_15 = t;
t = f_15;
{
ATerm trm54;
trm54 = CheckATermList(c_15);
if((trm54 == NULL))
goto fail24 ;
t = (ATerm) ATmakeAppl(sym_Element_4, term191, (ATerm)ATempty, (ATerm)ATinsert(ATinsert(ATinsert((ATermList)trm54, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term91))), (ATerm) ATmakeAppl(sym_Element_4, term191, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Attribute_2, term155, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, term221)))), (ATerm)ATinsert(ATempty, a_15), term191)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term241), (ATerm) ATmakeAppl(sym_Literal_1, z_14)), term87))), term191);
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_14 = NULL,y_14 = NULL;
t = print_to_xhtml_0_0(sl_up(sl), t);
if((t == NULL))
goto fail25 ;
y_14 = t;
x_14 = t;
t = (ATerm) ATmakeAppl(sym_Element_4, term191, (ATerm)ATempty, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term217))), (ATerm) ATmakeAppl(sym_Element_4, term191, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Attribute_2, term155, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, term221)))), (ATerm)ATinsert(ATempty, x_14), term191)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term225))), (ATerm) ATmakeAppl(sym_Element_4, term107, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Attribute_2, term155, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, term229)))), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term233))), term107)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term225))), term191);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_get_types_to_chardata_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_get_types_to_chardata_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
struct str_closure w_218 = { &(xml_escape_chars_0_0) , sl };
StrCL lifted4_cl = &(w_218);
k_14 = t;
t = term35;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail23 ;
i_14 = t;
t = k_14;
l_14 = t;
t = term37;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail23 ;
j_14 = t;
t = l_14;
t = rtgfc_retrieve_types_0_2(sl, i_14, j_14, t);
if((t == NULL))
goto fail23 ;
t = rtgfc_types_to_string_0_0(sl, t);
if((t == NULL))
goto fail23 ;
t = string_as_chars_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto fail23 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_print_App_nicecase_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_print_App_nicecase_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,t_13 = NULL,r_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
ATerm trm48,trm49;
trm48 = SSL_get_constructor(t);
trm49 = SSL_get_arguments(t);
i_13 = trm48;
if(((ATgetType(trm49) == AT_LIST) && !(ATisEmpty(trm49))))
{
j_13 = ATgetFirst((ATermList) trm49);
k_13 = (ATerm) ATgetNext((ATermList) trm49);
}
else
goto fail22 ;
n_13 = t;
{
ATerm trm50;
trm50 = CheckATermList(k_13);
if((trm50 == NULL))
goto fail22 ;
t = (ATerm) ATinsert((ATermList)trm50, j_13);
{
struct str_closure u_218 = { &(print_to_xhtml_0_0) , sl };
StrCL lifted3_cl = &(u_218);
t = map_1_0(sl, lifted3_cl, t);
if((t == NULL))
goto fail22 ;
p_13 = t;
o_13 = t;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term205)), o_13);
t = separate_by_0_0(sl, t);
if((t == NULL))
goto fail22 ;
m_13 = t;
t = n_13;
t_13 = t;
t = i_13;
q_13 = t;
t = t_13;
u_13 = t;
w_13 = t;
t = m_13;
v_13 = t;
t = w_13;
t = (ATerm) ATmakeAppl(sym__2, v_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term209))));
t = makeConc_0_0(sl, t);
if((t == NULL))
goto fail22 ;
r_13 = t;
t = u_13;
{
ATerm trm51;
trm51 = CheckATermList(r_13);
if((trm51 == NULL))
goto fail22 ;
t = (ATerm) ATmakeAppl(sym_Element_4, term107, (ATerm)ATempty, (ATerm)ATinsert((ATermList)trm51, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATinsert(ATempty, term213), (ATerm) ATmakeAppl(sym_Literal_1, q_13)))), term107);
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_print_App_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_print_App_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm47 = t;
ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
f_13 = t;
h_13 = t;
t = term_size_0_0(sl, t);
if((t == NULL))
goto label26 ;
g_13 = t;
t = h_13;
t = (ATerm) ATmakeAppl(sym__2, g_13, term201);
t = gt_0_0(sl, t);
if((t == NULL))
goto label26 ;
t = f_13;
t = xhtml_print_App_worstcase_0_0(sl, t);
if((t == NULL))
goto fail21 ;
else
goto label25 ;
label26 :
t = trm47;
t = xhtml_print_App_nicecase_0_0(sl, t);
if((t == NULL))
goto fail21 ;
else
goto label25 ;
label25 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_print_Cnst_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_print_Cnst_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
ATerm trm45,trm46;
trm45 = SSL_get_constructor(t);
trm46 = SSL_get_arguments(t);
c_13 = trm45;
if(!(((ATgetType(trm46) == AT_LIST) && ATisEmpty(trm46))))
goto fail20 ;
e_13 = t;
t = c_13;
d_13 = t;
t = e_13;
t = (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATinsert(ATempty, term199), (ATerm) ATmakeAppl(sym_Literal_1, d_13)));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_print_Real_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_print_Real_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
x_12 = t;
z_12 = t;
t = is_real_0_0(sl, t);
if((t == NULL))
goto fail19 ;
t = x_12;
t = real_to_string_0_0(sl, t);
if((t == NULL))
goto fail19 ;
y_12 = t;
t = z_12;
b_13 = t;
t = y_12;
a_13 = t;
t = b_13;
t = (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Literal_1, a_13)));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_print_Int_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_print_Int_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
s_12 = t;
u_12 = t;
t = is_int_0_0(sl, t);
if((t == NULL))
goto fail18 ;
t = s_12;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail18 ;
t_12 = t;
t = u_12;
w_12 = t;
t = t_12;
v_12 = t;
t = w_12;
t = (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Literal_1, v_12)));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_print_Str_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_print_Str_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
m_12 = t;
n_12 = t;
t = is_string_0_0(sl, t);
if((t == NULL))
goto fail17 ;
t = n_12;
p_12 = t;
t = m_12;
o_12 = t;
t = p_12;
t = (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term195), (ATerm) ATmakeAppl(sym_Literal_1, o_12)), term195));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_wrap_in_attrs_0_1 (StrSL sl, ATerm a_11, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_wrap_in_attrs_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
f_11 = t;
e_11 = t;
{
ATerm trm29 = t;
ATerm h_11 = NULL;
h_11 = t;
t = e_11;
if(match_cons(t, sym_Element_4))
{
ATerm trm30 = ATgetArgument(t, 0);
if(match_cons(trm30, sym_QName_2))
{
ATerm trm31 = ATgetArgument(trm30, 0);
if(!(match_cons(trm31, sym_None_0)))
goto label23 ;
{
ATerm trm32 = ATgetArgument(trm30, 1);
if(!((ATgetSymbol(trm32) == ATmakeSymbol("div", 0, ATtrue))))
goto label23 ;
}
}
else
goto label23 ;
{
ATerm trm33 = ATgetArgument(t, 1);
if(!(((ATgetType(trm33) == AT_LIST) && ATisEmpty(trm33))))
goto label23 ;
}
c_11 = ATgetArgument(t, 2);
{
ATerm trm34 = ATgetArgument(t, 3);
if(match_cons(trm34, sym_QName_2))
{
ATerm trm35 = ATgetArgument(trm34, 0);
if(!(match_cons(trm35, sym_None_0)))
goto label23 ;
{
ATerm trm36 = ATgetArgument(trm34, 1);
if(!((ATgetSymbol(trm36) == ATmakeSymbol("div", 0, ATtrue))))
goto label23 ;
}
}
else
goto label23 ;
}
}
else
goto label23 ;
t = h_11;
{
ATerm k_11 = NULL,l_11 = NULL;
l_11 = t;
t = c_11;
k_11 = t;
t = l_11;
t = (ATerm) ATmakeAppl(sym_Element_4, term191, a_11, k_11, term191);
goto label22 ;
}
label23 :
t = trm29;
{
ATerm trm37 = t;
ATerm i_11 = NULL;
i_11 = t;
t = e_11;
if(match_cons(t, sym_Element_4))
{
ATerm trm38 = ATgetArgument(t, 0);
if(match_cons(trm38, sym_QName_2))
{
ATerm trm39 = ATgetArgument(trm38, 0);
if(!(match_cons(trm39, sym_None_0)))
goto label24 ;
{
ATerm trm40 = ATgetArgument(trm38, 1);
if(!((ATgetSymbol(trm40) == ATmakeSymbol("div", 0, ATtrue))))
goto label24 ;
}
}
else
goto label24 ;
d_11 = ATgetArgument(t, 1);
{
ATerm trm41 = ATgetArgument(t, 2);
}
{
ATerm trm42 = ATgetArgument(t, 3);
if(match_cons(trm42, sym_QName_2))
{
ATerm trm43 = ATgetArgument(trm42, 0);
if(!(match_cons(trm43, sym_None_0)))
goto label24 ;
{
ATerm trm44 = ATgetArgument(trm42, 1);
if(!((ATgetSymbol(trm44) == ATmakeSymbol("div", 0, ATtrue))))
goto label24 ;
}
}
else
goto label24 ;
}
}
else
goto label24 ;
t = i_11;
{
ATerm h_12 = NULL,j_12 = NULL;
j_12 = t;
h_12 = t;
t = (ATerm) ATmakeAppl(sym_Element_4, term191, a_11, (ATerm)ATinsert(ATempty, h_12), term191);
goto label22 ;
}
label24 :
t = trm37;
{
ATerm k_12 = NULL,l_12 = NULL;
l_12 = t;
k_12 = t;
t = (ATerm) ATmakeAppl(sym_Element_4, term107, a_11, (ATerm)ATinsert(ATempty, k_12), term107);
goto label22 ;
}
}
label22 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_wrap_in_class_0_1 (StrSL sl, ATerm m_10, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_wrap_in_class_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_10 = NULL,r_10 = NULL,u_10 = NULL,z_10 = NULL;
r_10 = t;
z_10 = t;
t = m_10;
u_10 = t;
t = z_10;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Attribute_2, term99, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Literal_1, u_10)))));
n_10 = t;
t = r_10;
t = xhtml_wrap_in_attrs_0_1(sl, n_10, t);
if((t == NULL))
goto fail15 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_print_type_1_0 (StrSL sl, StrCL d_10, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_print_type_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_10 = NULL;
ATerm trm26 = t;
ATerm b_10 = NULL;
b_10 = t;
{
ATerm trm27 = t;
t = xhtml_is_typed_0_0(sl, t);
if((t == NULL))
goto label19 ;
goto label18 ;
label19 :
t = trm27;
{
struct str_closure s_218 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(s_218);
t = one_consnil_1_0(sl, lifted2_cl, t);
if((t == NULL))
goto label17 ;
else
goto label18 ;
}
label18 :
;
t = b_10;
}
{
ATerm c_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
c_10 = t;
t = xhtml_get_types_to_chardata_0_0(sl, t);
if((t == NULL))
goto fail13 ;
a_10 = t;
t = c_10;
t = cl_fun(d_10)(cl_sl(d_10), t);
if((t == NULL))
goto fail13 ;
f_10 = t;
h_10 = t;
t = a_10;
g_10 = t;
t = h_10;
t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Attribute_2, term173, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term177), (ATerm) ATmakeAppl(sym_Literal_1, g_10)), term181)))), (ATerm) ATmakeAppl(sym_Attribute_2, term99, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, term185))));
e_10 = t;
t = f_10;
t = xhtml_wrap_in_attrs_0_1(sl, e_10, t);
if((t == NULL))
goto fail13 ;
else
goto label16 ;
}
label17 :
t = trm26;
{
ATerm i_10 = NULL,l_10 = NULL;
t = cl_fun(d_10)(cl_sl(d_10), t);
if((t == NULL))
goto fail13 ;
l_10 = t;
t = term187;
i_10 = t;
t = l_10;
t = xhtml_wrap_in_class_0_1(sl, i_10, t);
if((t == NULL))
goto fail13 ;
else
goto label16 ;
}
label16 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm28 = t;
t = xhtml_is_typed_0_0(sl_up(sl), t);
if((t == NULL))
goto label21 ;
goto fail14 ;
label21 :
t = trm28;
goto label20 ;
label20 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm xhtml_is_typed_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xhtml_is_typed_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,z_9 = NULL,s_216 = NULL,t_216 = NULL,v_216 = NULL,w_216 = NULL,u_216 = NULL;
x_9 = t;
t = term35;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail12 ;
v_9 = t;
t = x_9;
z_9 = t;
t = term37;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail12 ;
w_9 = t;
t = z_9;
v_216 = t;
t = v_9;
s_216 = t;
t = v_216;
w_216 = t;
t = w_9;
t_216 = t;
t = w_216;
u_216 = t;
t = rtgfc_get_types_0_2(sl, s_216, t_216, t);
if((t == NULL))
goto fail12 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm24 = ATgetFirst((ATermList) t);
ATerm trm25 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail12 ;
t = u_216;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
ATerm print_to_xhtml_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "print_to_xhtml_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_218 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(p_218);
t = xhtml_print_type_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto fail10 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm18 = t;
t = xhtml_print_Int_0_0(sl_up(sl), t);
if((t == NULL))
goto label10 ;
goto label9 ;
label10 :
t = trm18;
{
ATerm trm19 = t;
t = xhtml_print_Real_0_0(sl_up(sl), t);
if((t == NULL))
goto label11 ;
goto label9 ;
label11 :
t = trm19;
{
ATerm trm20 = t;
t = xhtml_print_Str_0_0(sl_up(sl), t);
if((t == NULL))
goto label12 ;
goto label9 ;
label12 :
t = trm20;
{
ATerm trm21 = t;
t = xhtml_print_List_0_0(sl_up(sl), t);
if((t == NULL))
goto label13 ;
goto label9 ;
label13 :
t = trm21;
{
ATerm trm22 = t;
t = xhtml_print_Tuple_0_0(sl_up(sl), t);
if((t == NULL))
goto label14 ;
goto label9 ;
label14 :
t = trm22;
{
ATerm trm23 = t;
t = xhtml_print_Cnst_0_0(sl_up(sl), t);
if((t == NULL))
goto label15 ;
goto label9 ;
label15 :
t = trm23;
t = xhtml_print_App_0_0(sl_up(sl), t);
if((t == NULL))
goto fail11 ;
else
goto label9 ;
}
}
}
}
}
label9 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm print_to_xhtml_doc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "print_to_xhtml_doc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_9 = NULL,u_9 = NULL;
u_9 = t;
t = print_to_xhtml_0_0(sl, t);
if((t == NULL))
goto fail9 ;
t_9 = t;
t = u_9;
t = (ATerm) ATmakeAppl(sym_Document_3, term67, (ATerm)ATmakeAppl(sym_Element_4, term53, (ATerm)ATempty, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term71))), (ATerm) ATmakeAppl(sym_Element_4, term75, (ATerm)ATempty, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term79))), (ATerm) ATmakeAppl(sym_Element_4, term83, (ATerm)ATempty, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term87))), t_9), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term91))), term83)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term95))), (ATerm) ATmakeAppl(sym_Element_4, term83, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Attribute_2, term99, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, term103)))), (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term87))), (ATerm) ATmakeAppl(sym_Element_4, term107, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Attribute_2, term111, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, term115)))), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term119))), term107)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term123))), term83)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term95))), (ATerm) ATmakeAppl(sym_Element_4, term127, (ATerm)ATempty, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term131))), term127)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term87))), term75)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term79))), (ATerm) ATmakeAppl(sym_Element_4, term135, (ATerm)ATempty, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term79))), (ATerm) ATmakeAppl(sym_Element_4, term139, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Attribute_2, term143, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, term147)))), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term151))), term139)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term95))), (ATerm) ATmakeAppl(sym_Element_4, term155, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Attribute_2, term143, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, term159)))), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term163))), term155)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term87))), (ATerm) ATmakeAppl(sym_Element_4, term167, (ATerm)ATempty, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term131))), term167)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term87))), term135)), (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, term79))), term53), term169);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm core_format_check_xhtml_0_2 (StrSL sl, ATerm h_9, ATerm i_9, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "core_format_check_xhtml_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,r_9 = NULL;
n_9 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail8 ;
j_9 = t;
t = n_9;
o_9 = t;
t = new_iset_0_0(sl, t);
if((t == NULL))
goto fail8 ;
m_9 = t;
t = o_9;
t = rtgfc_type_0_3(sl, h_9, j_9, m_9, t);
if((t == NULL))
goto fail8 ;
p_9 = t;
{
ATerm trm17 = t;
ATerm q_9 = NULL;
q_9 = t;
t = rtgfc_format_check_error_0_3(sl, i_9, j_9, m_9, t);
if((t == NULL))
goto label8 ;
t = q_9;
t = term29;
t = set_config_0_0(sl, t);
if((t == NULL))
goto fail8 ;
else
goto label7 ;
label8 :
t = trm17;
t = term33;
t = set_config_0_0(sl, t);
if((t == NULL))
goto fail8 ;
else
goto label7 ;
label7 :
;
t = p_9;
r_9 = t;
t = (ATerm) ATmakeAppl(sym__2, term35, j_9);
t = set_config_0_0(sl, t);
if((t == NULL))
goto fail8 ;
t = (ATerm) ATmakeAppl(sym__2, term37, m_9);
t = set_config_0_0(sl, t);
if((t == NULL))
goto fail8 ;
t = r_9;
t = print_to_xhtml_doc_0_0(sl, t);
if((t == NULL))
goto fail8 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_quot_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_quot_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_7 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm15 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm15) == AT_INT) && (ATgetInt((ATermInt) trm15) == 34))))
goto fail7 ;
s_7 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail7 ;
{
ATerm trm16;
trm16 = CheckATermList(s_7);
if((trm16 == NULL))
goto fail7 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm16, term1), term11), term19), term21), term23), term9);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_apos_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_apos_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_7 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm13 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm13) == AT_INT) && (ATgetInt((ATermInt) trm13) == 39))))
goto fail6 ;
q_7 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail6 ;
{
ATerm trm14;
trm14 = CheckATermList(q_7);
if((trm14 == NULL))
goto fail6 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm14, term1), term17), term19), term3), term7), term9);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_gt_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_gt_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_7 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm11 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm11) == AT_INT) && (ATgetInt((ATermInt) trm11) == 62))))
goto fail5 ;
p_7 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail5 ;
{
ATerm trm12;
trm12 = CheckATermList(p_7);
if((trm12 == NULL))
goto fail5 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm12, term1), term11), term15), term9);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_lt_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_lt_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_7 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm9 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm9) == AT_INT) && (ATgetInt((ATermInt) trm9) == 60))))
goto fail4 ;
o_7 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail4 ;
{
ATerm trm10;
trm10 = CheckATermList(o_7);
if((trm10 == NULL))
goto fail4 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm10, term1), term11), term13), term9);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_amp_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_amp_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_7 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm7 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm7) == AT_INT) && (ATgetInt((ATermInt) trm7) == 38))))
goto fail3 ;
n_7 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail3 ;
{
ATerm trm8;
trm8 = CheckATermList(n_7);
if((trm8 == NULL))
goto fail3 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm8, term1), term3), term5), term7), term9);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_escape_chars_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_escape_chars_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = m_7(&(frame), t);
if((t == NULL))
goto fail0 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm m_7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "m_7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_218 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(o_218);
t = try_1_0(sl_up(sl), lifted0_cl, t);
if((t == NULL))
goto fail1 ;
{
ATerm trm4 = t;
ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
ATerm trm5;
trm5 = (ATerm) ATgetAnnotations(t);
if((trm5 == NULL))
trm5 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
e_7 = ATgetFirst((ATermList) t);
f_7 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label6 ;
i_7 = trm5;
t = e_7;
g_7 = t;
t = f_7;
t = m_7(sl, t);
if((t == NULL))
goto label6 ;
h_7 = t;
{
ATerm trm6;
trm6 = CheckATermList(h_7);
if((trm6 == NULL))
goto label6 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm6, g_7), i_7);
}
goto label5 ;
label6 :
t = trm4;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label5 ;
else
goto fail1 ;
label5 :
;
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
ATerm trm0 = t;
t = escape_amp_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
t = escape_lt_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label2 ;
goto label0 ;
label2 :
t = trm1;
{
ATerm trm2 = t;
t = escape_gt_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label3 ;
goto label0 ;
label3 :
t = trm2;
{
ATerm trm3 = t;
t = escape_apos_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label4 ;
goto label0 ;
label4 :
t = trm3;
t = escape_quot_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail2 ;
else
goto label0 ;
}
}
}
label0 :
;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 194));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(table_get_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_get_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(new_hashtable_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("new_hashtable_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(separate_by_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("separate_by_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(makeConc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("makeConc_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(new_iset_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("new_iset_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(true_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("true_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(read_text_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_text_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(echo_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("echo_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ReadFromFile_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ReadFromFile_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(term_size_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("term_size_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(gt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("gt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_int_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(implode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(real_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("real_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_real_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_real_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(pass_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fatal_err_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fatal_err_0_1", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(xtc_output_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_output_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_temp_files_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_temp_files_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_ensure_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_ensure_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_to_text_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_text_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(read_from_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(one_consnil_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("one_consnil_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_consnil_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_consnil_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtgfc_types_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtgfc_types_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtgfc_format_check_report_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtgfc_format_check_report_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtgfc_format_check_error_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtgfc_format_check_error_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtgfc_get_types_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtgfc_get_types_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtgfc_retrieve_types_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtgfc_retrieve_types_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtgfc_type_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtgfc_type_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtg_format_check_2_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg_format_check_2_2", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(GetInternalDefaultXtcRepository_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("GetInternalDefaultXtcRepository_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aterm_UP_Tuple_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aterm_UP_Tuple_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aterm_UP_App_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aterm_UP_App_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aterm_UP_Cnst_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aterm_UP_Cnst_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aterm_UP_Real_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aterm_UP_Real_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aterm_UP_Int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aterm_UP_Int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aterm_UP_Str_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aterm_UP_Str_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(HelpString_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("HelpString_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fc_about_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fc_about_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fc_usage_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fc_usage_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_vis_mode_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_vis_mode_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_vis_mode_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_vis_mode_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_xhtml_mode_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_xhtml_mode_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_xhtml_mode_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_xhtml_mode_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted71);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted71", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted70);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted70", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted68);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted68", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(fc_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fc_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted63);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted63", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(format_check_pp_aterm_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("format_check_pp_aterm_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted61);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted61", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(format_check_xhtml_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("format_check_xhtml_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted57);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted57", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted58);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted58", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted56);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted56", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(format_check_plain_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("format_check_plain_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_exit_code_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_exit_code_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(select_format_check_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("select_format_check_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted54);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted54", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted53);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted53", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_format_check_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_format_check_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted49);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted49", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted48);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted48", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_abox2text_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_abox2text_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted46);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted46", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted45);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted45", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted44);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted44", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(DesugarToolDoc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("DesugarToolDoc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(tool_doc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tool_doc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(enable_fast_mode_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("enable_fast_mode_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_start_nonterm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_start_nonterm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_rtg_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_rtg_config_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(rtg_option_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg_option_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_rtg_nf_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_rtg_nf_config_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(rtg_nf_option_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg_nf_option_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_rtg_front_end_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_rtg_front_end_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_typed_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_typed_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(code_plain_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("code_plain_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(code_red_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("code_red_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(my_generic_list_worstcase_4_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("my_generic_list_worstcase_4_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted26);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted26", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(my_generic_list_nicecase_4_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("my_generic_list_nicecase_4_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(my_pp_generic_list_4_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("my_pp_generic_list_4_2", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(my_UP_List_1_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("my_UP_List_1_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted22", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ugly_print_type_1_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ugly_print_type_1_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ugly_print_type_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ugly_print_type_0_2", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(my_ugly_print_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("my_ugly_print_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(core_format_check_pp_aterm_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("core_format_check_pp_aterm_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xhtml_generic_list_worstcase_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_generic_list_worstcase_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xhtml_generic_list_nicecase_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_generic_list_nicecase_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xhtml_pp_generic_list_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_pp_generic_list_3_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(xhtml_print_List_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_print_List_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(xhtml_print_Tuple_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_print_Tuple_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xhtml_print_App_worstcase_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_print_App_worstcase_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xhtml_get_types_to_chardata_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_get_types_to_chardata_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xhtml_print_App_nicecase_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_print_App_nicecase_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xhtml_print_App_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_print_App_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xhtml_print_Cnst_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_print_Cnst_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xhtml_print_Real_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_print_Real_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xhtml_print_Int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_print_Int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xhtml_print_Str_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_print_Str_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xhtml_wrap_in_attrs_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_wrap_in_attrs_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xhtml_wrap_in_class_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_wrap_in_class_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xhtml_print_type_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_print_type_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xhtml_is_typed_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xhtml_is_typed_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(print_to_xhtml_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("print_to_xhtml_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(print_to_xhtml_doc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("print_to_xhtml_doc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(core_format_check_xhtml_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("core_format_check_xhtml_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_quot_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_quot_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_apos_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_apos_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_gt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_gt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_lt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_lt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_amp_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_amp_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(m_7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("m_7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_escape_chars_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_escape_chars_0_0", 0, ATtrue)), &(closures[closures_index]));
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
