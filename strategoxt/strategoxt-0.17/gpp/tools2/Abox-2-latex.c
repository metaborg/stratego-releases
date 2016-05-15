#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__3;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Stream_1;
static Symbol sym_Error_0;
static Symbol sym_FILE_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
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
static Symbol sym_SOpt_2;
static Symbol sym_VS_0;
static Symbol sym_HS_0;
static Symbol sym_IS_0;
static Symbol sym_AL_1;
static Symbol sym_AC_1;
static Symbol sym_AR_1;
static Symbol sym_AOPTIONS_1;
static Symbol sym_F_1;
static Symbol sym_KW_0;
static Symbol sym_VAR_0;
static Symbol sym_NUM_0;
static Symbol sym_MATH_0;
static Symbol sym_BOXCOLOR_1;
static Symbol sym_BOXFONT_2;
static Symbol sym_CSEP_0;
static Symbol sym_EOR_0;
static Symbol sym_L_0;
static Symbol sym_R_0;
static Symbol sym_C_0;
static Symbol sym_REFBOX_2;
static Symbol sym_LBLBOX_2;
static Symbol sym_LBOX_2;
static Symbol sym_CBOX_1;
static Symbol sym_ALTBOX_2;
static Symbol sym_ABOX_2;
static Symbol sym_HVBOX_4;
static Symbol sym_VBOX_3;
static Symbol sym_HBOX_2;
static Symbol sym_BOXENV_2;
static Symbol sym_ALLTT_1;
static void init_module_constructors (void)
{
sym__3 = ATmakeSymbol("", 3, ATfalse);
ATprotectSymbol(sym__3);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
ATprotectSymbol(sym_Stream_1);
sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
ATprotectSymbol(sym_Error_0);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
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
sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
ATprotectSymbol(sym_SOpt_2);
sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
ATprotectSymbol(sym_VS_0);
sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
ATprotectSymbol(sym_HS_0);
sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
ATprotectSymbol(sym_IS_0);
sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
ATprotectSymbol(sym_AL_1);
sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
ATprotectSymbol(sym_AC_1);
sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
ATprotectSymbol(sym_AR_1);
sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
ATprotectSymbol(sym_AOPTIONS_1);
sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
ATprotectSymbol(sym_F_1);
sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
ATprotectSymbol(sym_KW_0);
sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
ATprotectSymbol(sym_VAR_0);
sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
ATprotectSymbol(sym_NUM_0);
sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
ATprotectSymbol(sym_MATH_0);
sym_BOXCOLOR_1 = ATmakeSymbol("BOXCOLOR", 1, ATfalse);
ATprotectSymbol(sym_BOXCOLOR_1);
sym_BOXFONT_2 = ATmakeSymbol("BOXFONT", 2, ATfalse);
ATprotectSymbol(sym_BOXFONT_2);
sym_CSEP_0 = ATmakeSymbol("CSEP", 0, ATfalse);
ATprotectSymbol(sym_CSEP_0);
sym_EOR_0 = ATmakeSymbol("EOR", 0, ATfalse);
ATprotectSymbol(sym_EOR_0);
sym_L_0 = ATmakeSymbol("L", 0, ATfalse);
ATprotectSymbol(sym_L_0);
sym_R_0 = ATmakeSymbol("R", 0, ATfalse);
ATprotectSymbol(sym_R_0);
sym_C_0 = ATmakeSymbol("C", 0, ATfalse);
ATprotectSymbol(sym_C_0);
sym_REFBOX_2 = ATmakeSymbol("REFBOX", 2, ATfalse);
ATprotectSymbol(sym_REFBOX_2);
sym_LBLBOX_2 = ATmakeSymbol("LBLBOX", 2, ATfalse);
ATprotectSymbol(sym_LBLBOX_2);
sym_LBOX_2 = ATmakeSymbol("LBOX", 2, ATfalse);
ATprotectSymbol(sym_LBOX_2);
sym_CBOX_1 = ATmakeSymbol("CBOX", 1, ATfalse);
ATprotectSymbol(sym_CBOX_1);
sym_ALTBOX_2 = ATmakeSymbol("ALTBOX", 2, ATfalse);
ATprotectSymbol(sym_ALTBOX_2);
sym_ABOX_2 = ATmakeSymbol("ABOX", 2, ATfalse);
ATprotectSymbol(sym_ABOX_2);
sym_HVBOX_4 = ATmakeSymbol("HVBOX", 4, ATfalse);
ATprotectSymbol(sym_HVBOX_4);
sym_VBOX_3 = ATmakeSymbol("VBOX", 3, ATfalse);
ATprotectSymbol(sym_VBOX_3);
sym_HBOX_2 = ATmakeSymbol("HBOX", 2, ATfalse);
ATprotectSymbol(sym_HBOX_2);
sym_BOXENV_2 = ATmakeSymbol("BOXENV", 2, ATfalse);
ATprotectSymbol(sym_BOXENV_2);
sym_ALLTT_1 = ATmakeSymbol("ALLTT", 1, ATfalse);
ATprotectSymbol(sym_ALLTT_1);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\\end{alltt}\n", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{alltt}\n", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
ATprotect(&(term147));
term147 = term146;
ATprotect(&(term148));
term148 = (ATerm) ATmakeInt(39);
ATprotect(&(term149));
term149 = term148;
ATprotect(&(term150));
term150 = (ATerm) ATmakeInt(96);
ATprotect(&(term151));
term151 = term150;
ATprotect(&(term152));
term152 = (ATerm) ATmakeAppl(ATmakeSymbol("output", 0, ATtrue));
ATprotect(&(term153));
term153 = term152;
ATprotect(&(term154));
term154 = (ATerm) ATmakeInt(0);
ATprotect(&(term155));
term155 = term154;
ATprotect(&(term156));
term156 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term157));
term157 = term156;
ATprotect(&(term158));
term158 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
ATprotect(&(term159));
term159 = term158;
ATprotect(&(term160));
term160 = (ATerm) ATmakeAppl(ATmakeSymbol("alltt", 0, ATtrue));
ATprotect(&(term161));
term161 = term160;
ATprotect(&(term162));
term162 = (ATerm) ATmakeAppl(sym__2, term153, term161);
ATprotect(&(term163));
term163 = term162;
ATprotect(&(term164));
term164 = (ATerm) ATmakeAppl(ATmakeSymbol("--alltt          Produce verbatim-like output with alltt environment", 0, ATtrue));
ATprotect(&(term165));
term165 = term164;
ATprotect(&(term166));
term166 = (ATerm) ATmakeAppl(ATmakeSymbol("boxenv", 0, ATtrue));
ATprotect(&(term167));
term167 = term166;
ATprotect(&(term168));
term168 = (ATerm) ATmakeAppl(sym__2, term153, term167);
ATprotect(&(term169));
term169 = term168;
ATprotect(&(term170));
term170 = (ATerm) ATmakeAppl(ATmakeSymbol("--boxenv         Produce fully formatted LaTeX output (default)", 0, ATtrue));
ATprotect(&(term171));
term171 = term170;
ATprotect(&(term172));
term172 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
ATprotect(&(term173));
term173 = term172;
ATprotect(&(term174));
term174 = (ATerm) ATmakeAppl(ATmakeSymbol("-t|--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
ATprotect(&(term175));
term175 = term174;
ATprotect(&(term176));
term176 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
ATprotect(&(term177));
term177 = term176;
ATprotect(&(term178));
term178 = (ATerm) ATmakeAppl(ATmakeSymbol("-w|--width w        Use page width w", 0, ATtrue));
ATprotect(&(term179));
term179 = term178;
ATprotect(&(term180));
term180 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
ATprotect(&(term181));
term181 = term180;
ATprotect(&(term182));
term182 = (ATerm) ATmakeAppl(sym_Error_0);
ATprotect(&(term183));
term183 = term182;
ATprotect(&(term184));
term184 = (ATerm) ATmakeAppl(ATmakeSymbol("invalid box:", 0, ATtrue));
ATprotect(&(term185));
term185 = term184;
ATprotect(&(term186));
term186 = (ATerm) ATmakeInt(1);
ATprotect(&(term187));
term187 = term186;
ATprotect(&(term188));
term188 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
ATprotect(&(term189));
term189 = term188;
ATprotect(&(term190));
term190 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
ATprotect(&(term191));
term191 = term190;
ATprotect(&(term192));
term192 = (ATerm) ATmakeAppl(sym_EOR_0);
ATprotect(&(term193));
term193 = term192;
ATprotect(&(term194));
term194 = (ATerm) ATmakeInt(61);
ATprotect(&(term195));
term195 = term194;
ATprotect(&(term196));
term196 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
ATprotect(&(term197));
term197 = term196;
ATprotect(&(term198));
term198 = (ATerm) ATmakeAppl(sym_HS_0);
ATprotect(&(term199));
term199 = term198;
ATprotect(&(term200));
term200 = (ATerm) ATmakeAppl(sym_VS_0);
ATprotect(&(term201));
term201 = term200;
ATprotect(&(term202));
term202 = (ATerm) ATmakeAppl(sym_IS_0);
ATprotect(&(term203));
term203 = term202;
ATprotect(&(term204));
term204 = (ATerm) ATmakeAppl(sym_L_0);
ATprotect(&(term205));
term205 = term204;
ATprotect(&(term206));
term206 = (ATerm) ATmakeAppl(sym_C_0);
ATprotect(&(term207));
term207 = term206;
ATprotect(&(term208));
term208 = (ATerm) ATmakeAppl(sym_R_0);
ATprotect(&(term209));
term209 = term208;
ATprotect(&(term210));
term210 = (ATerm) ATmakeAppl(sym_CSEP_0);
ATprotect(&(term211));
term211 = term210;
ATprotect(&(term212));
term212 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
ATprotect(&(term213));
term213 = term212;
ATprotect(&(term214));
term214 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
ATprotect(&(term215));
term215 = term214;
ATprotect(&(term216));
term216 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
ATprotect(&(term217));
term217 = term216;
ATprotect(&(term218));
term218 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
ATprotect(&(term219));
term219 = term218;
ATprotect(&(term220));
term220 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
ATprotect(&(term221));
term221 = term220;
ATprotect(&(term222));
term222 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
ATprotect(&(term223));
term223 = term222;
ATprotect(&(term224));
term224 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
ATprotect(&(term225));
term225 = term224;
ATprotect(&(term226));
term226 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
ATprotect(&(term227));
term227 = term226;
ATprotect(&(term228));
term228 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
ATprotect(&(term229));
term229 = term228;
ATprotect(&(term230));
term230 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
ATprotect(&(term231));
term231 = term230;
ATprotect(&(term232));
term232 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001-2004 Merijn de Jonge (mdejonge@cs.uu.nl) \n", 0, ATtrue));
ATprotect(&(term233));
term233 = term232;
ATprotect(&(term234));
term234 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically by \n", 0, ATtrue));
ATprotect(&(term235));
term235 = term234;
ATprotect(&(term236));
term236 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
ATprotect(&(term237));
term237 = term236;
ATprotect(&(term238));
term238 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
ATprotect(&(term239));
term239 = term238;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm table_get_0_0 (StrSL sl, ATerm t);
ATerm table_put_0_0 (StrSL sl, ATerm t);
ATerm table_create_0_0 (StrSL sl, ATerm t);
ATerm copy_0_0 (StrSL sl, ATerm t);
ATerm separate_by_1_0 (StrSL sl, StrCL j_78, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm listtd_1_0 (StrSL sl, StrCL c_78, ATerm t);
ATerm at_last_1_0 (StrSL sl, StrCL x_77, ATerm t);
ATerm at_suffix_1_0 (StrSL sl, StrCL v_77, ATerm t);
ATerm fetch_1_0 (StrSL sl, StrCL i_77, ATerm t);
ATerm length_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL b_77, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL c_76, ATerm t);
ATerm split_2_0 (StrSL sl, StrCL h_71, StrCL i_71, ATerm t);
ATerm Fst_0_0 (StrSL sl, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL e_54, ATerm t);
ATerm bottomup_1_0 (StrSL sl, StrCL v_46, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL u_46, ATerm t);
ATerm fclose_0_0 (StrSL sl, ATerm t);
ATerm fopen_0_0 (StrSL sl, ATerm t);
ATerm exit_0_0 (StrSL sl, ATerm t);
ATerm ReadFromFile_0_0 (StrSL sl, ATerm t);
ATerm string_to_int_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm subt_0_0 (StrSL sl, ATerm t);
ATerm add_0_0 (StrSL sl, ATerm t);
ATerm is_int_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm string_as_chars_1_0 (StrSL sl, StrCL e_41, ATerm t);
ATerm explode_string_0_0 (StrSL sl, ATerm t);
ATerm implode_string_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm io_options_0_0 (StrSL sl, ATerm t);
ATerm option_wrap_2_0 (StrSL sl, StrCL m_39, StrCL n_39, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL r_36, StrCL s_36, StrCL t_36, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL m_36, StrCL n_36, StrCL o_36, ATerm t);
ATerm log_0_3 (StrSL sl, ATerm u_34, ATerm v_34, ATerm w_34, ATerm t);
ATerm xtc_io_1_0 (StrSL sl, StrCL d_26, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
ATerm xtc_new_file_0_0 (StrSL sl, ATerm t);
ATerm R_2_0 (StrSL sl, StrCL o_24, StrCL p_24, ATerm t);
ATerm C_2_0 (StrSL sl, StrCL g_24, StrCL h_24, ATerm t);
ATerm FFID_2_0 (StrSL sl, StrCL m_23, StrCL n_23, ATerm t);
ATerm KW_0_0 (StrSL sl, ATerm t);
ATerm VAR_0_0 (StrSL sl, ATerm t);
ATerm NUM_0_0 (StrSL sl, ATerm t);
ATerm MATH_0_0 (StrSL sl, ATerm t);
ATerm FM_0_0 (StrSL sl, ATerm t);
ATerm SE_0_0 (StrSL sl, ATerm t);
ATerm SH_0_0 (StrSL sl, ATerm t);
ATerm SZ_0_0 (StrSL sl, ATerm t);
ATerm CL_0_0 (StrSL sl, ATerm t);
ATerm abox2text_1_2 (StrSL sl, StrCL m_19, ATerm k_19, ATerm l_19, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted88 (StrSL sl, ATerm t);
ATerm tables2text_0_0 (StrSL sl, ATerm t);
ATerm create_header_0_0 (StrSL sl, ATerm t);
static ATerm lifted86 (StrSL sl, ATerm t);
static ATerm lifted84 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
ATerm abox2alltt_1_1 (StrSL sl, StrCL x_18, ATerm y_18, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
ATerm LatexComment_0_0 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
static ATerm e_15 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
ATerm make_latex_comment_0_0 (StrSL sl, ATerm t);
ATerm MkRows_0_0 (StrSL sl, ATerm t);
static ATerm t_14 (StrSL sl, ATerm t);
ATerm table_row_0_0 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
ATerm table_def_0_0 (StrSL sl, ATerm t);
ATerm Ispace_0_0 (StrSL sl, ATerm t);
ATerm Vspace_0_0 (StrSL sl, ATerm t);
ATerm Hspace_0_0 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
ATerm toh_0_0 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
ATerm Abox2latex_0_0 (StrSL sl, ATerm t);
ATerm BOXENV_args_0_0 (StrSL sl, ATerm t);
static ATerm c_8 (StrSL sl, ATerm b_8, ATerm t);
ATerm try_abox2alltt_0_1 (StrSL sl, ATerm t_7, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
ATerm load_latex_table_0_0 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
ATerm Abox_2_latex_options_0_0 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
ATerm io_Abox_2_latex_0_0 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
ATerm rel_string_length_0_1 (StrSL sl, ATerm m_6, ATerm t);
static ATerm f_6 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
ATerm construct_rows_0_0 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
ATerm SOpt_value_0_1 (StrSL sl, ATerm w_5, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
ATerm replace_quotes_0_0 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
ATerm escape_special_characters_0_0 (StrSL sl, ATerm t);
ATerm Latex2text_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
ATerm latex2text_0_0 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm topdown_print_to_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm b_4 (StrSL sl, ATerm t);
ATerm remove_trailing_1_0 (StrSL sl, StrCL a_4, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm flat_list_1_0 (StrSL sl, StrCL w_18, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = io_Abox_2_latex_0_0(sl, t);
if((t == NULL))
goto fail97 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
ATerm tables2text_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tables2text_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm208 = t;
t = term237;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label157 ;
goto label156 ;
label157 :
t = trm208;
t = (ATerm) ATempty;
goto label156 ;
label156 :
;
{
struct str_closure k_109 = { &(lifted88) , &(frame) };
StrCL lifted88_cl = &(k_109);
t = map_1_0(sl, lifted88_cl, t);
if((t == NULL))
goto fail95 ;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail95 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted88 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted88";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_17 = NULL,t_17 = NULL;
t_17 = t;
q_17 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term159), q_17), term239);
t = concat_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail96 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
ATerm create_header_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "create_header_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_17 = NULL,p_17 = NULL;
p_17 = t;
t = term157;
t = tables2text_0_0(sl, t);
if((t == NULL))
goto fail94 ;
o_17 = t;
t = p_17;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term213), term215), term217), term213), term219), term221), term223), term225), term227), term213), o_17), term229), term231), term213), term233), term213), term235), term213);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail94 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
ATerm abox2alltt_1_1 (StrSL sl, StrCL x_18, ATerm y_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "abox2alltt_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm trm191 = t;
ATerm g_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,n_17 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm192 = ATgetArgument(t, 0);
if(match_cons(trm192, sym_FBOX_2))
{
g_17 = ATgetArgument(trm192, 0);
i_17 = ATgetArgument(trm192, 1);
}
else
goto label142 ;
if(!((y_18 == ATgetArgument(t, 1))))
goto label142 ;
}
else
goto label142 ;
n_17 = t;
t = g_17;
{
ATerm trm193 = t;
t = KW_0_0(sl, t);
if((t == NULL))
goto label144 ;
goto label143 ;
label144 :
t = trm193;
{
ATerm trm194 = t;
t = VAR_0_0(sl, t);
if((t == NULL))
goto label145 ;
goto label143 ;
label145 :
t = trm194;
{
ATerm trm195 = t;
t = NUM_0_0(sl, t);
if((t == NULL))
goto label146 ;
goto label143 ;
label146 :
t = trm195;
t = MATH_0_0(sl, t);
if((t == NULL))
goto label142 ;
else
goto label143 ;
}
}
label143 :
;
t = i_17;
t = cl_fun(x_18)(cl_sl(x_18), y_18, t);
if((t == NULL))
goto label142 ;
if(match_cons(t, sym__2))
{
j_17 = ATgetArgument(t, 0);
k_17 = ATgetArgument(t, 1);
}
else
goto label142 ;
t = n_17;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_BOXFONT_2, g_17, j_17), k_17);
}
goto label141 ;
label142 :
t = trm191;
{
ATerm trm196 = t;
ATerm d_17 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm197 = ATgetArgument(t, 0);
if(match_cons(trm197, sym_FBOX_2))
{
ATerm trm198 = ATgetArgument(trm197, 0);
if(match_cons(trm198, sym_F_1))
{
ATerm trm199 = ATgetArgument(trm198, 0);
if(!(((ATgetType(trm199) == AT_LIST) && ATisEmpty(trm199))))
goto label147 ;
}
else
goto label147 ;
d_17 = ATgetArgument(trm197, 1);
}
else
goto label147 ;
if(!((y_18 == ATgetArgument(t, 1))))
goto label147 ;
}
else
goto label147 ;
t = d_17;
t = cl_fun(x_18)(cl_sl(x_18), y_18, t);
if((t == NULL))
goto label147 ;
goto label141 ;
label147 :
t = trm196;
{
ATerm trm200 = t;
ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,a_17 = NULL;
sl_init_var(0, t_16);
sl_init_var(1, u_16);
if(match_cons(t, sym_FBOX_2))
{
ATerm trm201 = ATgetArgument(t, 0);
if(match_cons(trm201, sym_F_1))
{
ATerm trm202 = ATgetArgument(trm201, 0);
if(((ATgetType(trm202) == AT_LIST) && !(ATisEmpty(trm202))))
{
s_16 = ATgetFirst((ATermList) trm202);
v_16 = (ATerm) ATgetNext((ATermList) trm202);
}
else
goto label148 ;
}
else
goto label148 ;
w_16 = ATgetArgument(t, 1);
}
else
goto label148 ;
a_17 = t;
t = s_16;
{
ATerm trm203 = t;
struct str_closure z_108 = { &(FM_0_0) , sl };
StrCL lifted77_cl = &(z_108);
struct str_closure a_109 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(a_109);
t = FFID_2_0(sl, lifted77_cl, lifted78_cl, t);
if((t == NULL))
goto label150 ;
goto label149 ;
label150 :
t = trm203;
{
ATerm trm204 = t;
struct str_closure b_109 = { &(SE_0_0) , sl };
StrCL lifted79_cl = &(b_109);
struct str_closure c_109 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(c_109);
t = FFID_2_0(sl, lifted79_cl, lifted80_cl, t);
if((t == NULL))
goto label151 ;
goto label149 ;
label151 :
t = trm204;
{
ATerm trm205 = t;
struct str_closure d_109 = { &(SH_0_0) , sl };
StrCL lifted81_cl = &(d_109);
struct str_closure e_109 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(e_109);
t = FFID_2_0(sl, lifted81_cl, lifted82_cl, t);
if((t == NULL))
goto label152 ;
goto label149 ;
label152 :
t = trm205;
{
ATerm trm206 = t;
struct str_closure f_109 = { &(SZ_0_0) , sl };
StrCL lifted83_cl = &(f_109);
struct str_closure g_109 = { &(lifted84) , &(frame) };
StrCL lifted84_cl = &(g_109);
t = FFID_2_0(sl, lifted83_cl, lifted84_cl, t);
if((t == NULL))
goto label153 ;
goto label149 ;
label153 :
t = trm206;
{
struct str_closure h_109 = { &(CL_0_0) , sl };
StrCL lifted85_cl = &(h_109);
struct str_closure i_109 = { &(lifted86) , &(frame) };
StrCL lifted86_cl = &(i_109);
t = FFID_2_0(sl, lifted85_cl, lifted86_cl, t);
if((t == NULL))
goto label148 ;
if((t_16 == NULL))
goto label148 ;
else
{
t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, t_16);
}
if((u_16 == NULL))
{
u_16 = t;
goto label149 ;
}
else
if((u_16 != t))
goto label148 ;
else
goto label149 ;
}
}
}
}
label149 :
;
t = (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, v_16), w_16);
t = cl_fun(x_18)(cl_sl(x_18), y_18, t);
if((t == NULL))
goto label148 ;
if(match_cons(t, sym__2))
{
x_16 = ATgetArgument(t, 0);
y_16 = ATgetArgument(t, 1);
}
else
goto label148 ;
t = a_17;
if((u_16 == NULL))
goto label148 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_BOXFONT_2, u_16, x_16), y_16);
}
}
goto label141 ;
label148 :
t = trm200;
{
ATerm i_16 = NULL,k_16 = NULL,n_16 = NULL,m_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
if(match_cons(t, sym_S_1))
{
i_16 = ATgetArgument(t, 0);
}
else
goto fail88 ;
n_16 = t;
t = i_16;
{
ATerm trm207 = t;
ATerm k_105 = NULL,l_105 = NULL;
l_105 = t;
k_105 = t;
t = (ATerm) ATmakeAppl(sym__2, term181, k_105);
t = table_get_0_0(sl, t);
if((t == NULL))
goto label155 ;
goto label154 ;
label155 :
t = trm207;
{
struct str_closure j_109 = { &(escape_special_characters_0_0) , sl };
StrCL lifted87_cl = &(j_109);
t = string_as_chars_1_0(sl, lifted87_cl, t);
if((t == NULL))
goto fail88 ;
else
goto label154 ;
}
label154 :
;
k_16 = t;
t = n_16;
o_16 = t;
q_16 = t;
t = i_16;
t = rel_string_length_0_1(sl, y_18, t);
if((t == NULL))
goto fail88 ;
p_16 = t;
t = q_16;
t = (ATerm) ATmakeAppl(sym__2, y_18, p_16);
t = add_0_0(sl, t);
if((t == NULL))
goto fail88 ;
m_16 = t;
t = o_16;
t = (ATerm) ATmakeAppl(sym__2, k_16, m_16);
goto label141 ;
}
}
}
}
label141 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted86 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted86";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail93 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted84 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted84";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail92 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted82 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted82";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail91 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail90 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail89 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
ATerm LatexComment_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "LatexComment_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm o_15 = NULL;
sl_init_var(0, o_15);
{
struct str_closure w_108 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(w_108);
t = remove_trailing_1_0(sl, lifted74_cl, t);
if((t == NULL))
goto fail84 ;
{
struct str_closure y_108 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(y_108);
t = try_1_0(sl, lifted75_cl, t);
if((t == NULL))
goto fail84 ;
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail84 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_108 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(x_108);
t = at_suffix_1_0(sl_up(sl), lifted76_cl, t);
if((t == NULL))
goto fail86 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_15 = NULL,q_15 = NULL,s_15 = NULL,u_15 = NULL,x_15 = NULL,z_15 = NULL,c_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
ATerm trm187;
trm187 = (ATerm) ATgetAnnotations(t);
if((trm187 == NULL))
trm187 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
p_15 = ATgetFirst((ATermList) t);
q_15 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail87 ;
x_15 = trm187;
t = p_15;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 37))))
goto fail87 ;
s_15 = t;
t = q_15;
{
ATerm trm188;
trm188 = (ATerm) ATgetAnnotations(t);
if((trm188 == NULL))
trm188 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
z_15 = ATgetFirst((ATermList) t);
c_16 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail87 ;
g_16 = trm188;
t = z_15;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 37))))
goto fail87 ;
e_16 = t;
t = c_16;
if((sl_readvar(0, sl_up(sl)) == NULL))
{
sl_readvar(0, sl_up(sl)) = t;
}
else
if((sl_readvar(0, sl_up(sl)) != t))
goto fail87 ;
f_16 = t;
{
ATerm trm189;
trm189 = CheckATermList(f_16);
if((trm189 == NULL))
goto fail87 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm189, e_16), g_16);
u_15 = t;
{
ATerm trm190;
trm190 = CheckATermList(u_15);
if((trm190 == NULL))
goto fail87 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm190, s_15), x_15);
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail87 ;
else
{
t = sl_readvar(0, sl_up(sl));
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm186 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 9))))
goto label140 ;
goto label139 ;
label140 :
t = trm186;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 32)))
goto label139 ;
else
goto fail85 ;
label139 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
ATerm make_latex_comment_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "make_latex_comment_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_108 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(r_108);
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail78 ;
t = reverse_0_0(sl, t);
if((t == NULL))
goto fail78 ;
{
struct str_closure s_108 = { &(_Id) , sl };
StrCL lifted69_cl = &(s_108);
struct str_closure t_108 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(t_108);
t = split_2_0(sl, lifted69_cl, lifted70_cl, t);
if((t == NULL))
goto fail78 ;
t = e_15(&(frame), t);
if((t == NULL))
goto fail78 ;
{
struct str_closure u_108 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(u_108);
t = remove_trailing_1_0(sl, lifted71_cl, t);
if((t == NULL))
goto fail78 ;
t = reverse_0_0(sl, t);
if((t == NULL))
goto fail78 ;
{
struct str_closure v_108 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(v_108);
t = remove_trailing_1_0(sl, lifted72_cl, t);
if((t == NULL))
goto fail78 ;
t = map_1_0(sl, lifted73_cl, t);
if((t == NULL))
goto fail78 ;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto fail83 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto fail82 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm e_15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "e_15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
ATerm trm178 = t;
ATerm f_15 = NULL,g_15 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm179 = ATgetArgument(t, 0);
if(!(((ATgetType(trm179) == AT_LIST) && ATisEmpty(trm179))))
goto label137 ;
b_15 = ATgetArgument(t, 1);
}
else
goto label137 ;
g_15 = t;
t = b_15;
t = LatexComment_0_0(sl_up(sl), t);
if((t == NULL))
goto label137 ;
f_15 = t;
t = g_15;
t = (ATerm) ATinsert(ATempty, f_15);
goto label136 ;
label137 :
t = trm178;
{
ATerm trm180 = t;
ATerm h_15 = NULL,l_15 = NULL,i_15 = NULL,n_15 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm181 = ATgetArgument(t, 0);
if(((ATgetType(trm181) == AT_LIST) && !(ATisEmpty(trm181))))
{
ATerm trm182 = ATgetFirst((ATermList) trm181);
if(!(((ATgetType(trm182) == AT_INT) && (ATgetInt((ATermInt) trm182) == 10))))
goto label138 ;
a_15 = (ATerm) ATgetNext((ATermList) trm181);
}
else
goto label138 ;
b_15 = ATgetArgument(t, 1);
}
else
goto label138 ;
l_15 = t;
t = b_15;
t = LatexComment_0_0(sl_up(sl), t);
if((t == NULL))
goto label138 ;
h_15 = t;
t = l_15;
n_15 = t;
t = (ATerm) ATmakeAppl(sym__2, a_15, (ATerm) ATempty);
t = e_15(sl, t);
if((t == NULL))
goto label138 ;
i_15 = t;
t = n_15;
{
ATerm trm183;
trm183 = CheckATermList(i_15);
if((trm183 == NULL))
goto label138 ;
t = (ATerm) ATinsert((ATermList)trm183, h_15);
}
goto label136 ;
label138 :
t = trm180;
if(match_cons(t, sym__2))
{
ATerm trm184 = ATgetArgument(t, 0);
if(((ATgetType(trm184) == AT_LIST) && !(ATisEmpty(trm184))))
{
c_15 = ATgetFirst((ATermList) trm184);
a_15 = (ATerm) ATgetNext((ATermList) trm184);
}
else
goto fail81 ;
b_15 = ATgetArgument(t, 1);
}
else
goto fail81 ;
{
ATerm trm185;
trm185 = CheckATermList(b_15);
if((trm185 == NULL))
goto fail81 ;
t = (ATerm) ATmakeAppl(sym__2, a_15, (ATerm) ATinsert((ATermList)trm185, c_15));
t = e_15(sl, t);
if((t == NULL))
goto fail81 ;
else
goto label136 ;
}
}
label136 :
;
}
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
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted73 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted73";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_15 = NULL;
d_15 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, term159), d_15);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
ATerm MkRows_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "MkRows_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_14 = NULL,x_14 = NULL;
ATerm trm177 = t;
ATerm y_14 = NULL,z_14 = NULL;
if(match_cons(t, sym_LBL_2))
{
w_14 = ATgetArgument(t, 0);
x_14 = ATgetArgument(t, 1);
}
else
goto label135 ;
t = x_14;
t = table_row_0_0(sl, t);
if((t == NULL))
goto label135 ;
z_14 = t;
t = x_14;
t = table_row_0_0(sl, t);
if((t == NULL))
goto label135 ;
y_14 = t;
t = z_14;
t = (ATerm) ATmakeAppl(sym_LBLBOX_2, w_14, y_14);
goto label134 ;
label135 :
t = trm177;
t = table_row_0_0(sl, t);
if((t == NULL))
goto fail77 ;
else
goto label134 ;
label134 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
ATerm table_row_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "table_row_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_13 = NULL;
if(match_cons(t, sym_R_2))
{
ATerm trm176 = ATgetArgument(t, 0);
c_13 = ATgetArgument(t, 1);
}
else
goto fail75 ;
t = c_13;
t = t_14(&(frame), t);
if((t == NULL))
goto fail75 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm t_14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "t_14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
ATerm trm159 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label130 ;
goto label129 ;
label130 :
t = trm159;
{
ATerm trm160 = t;
ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
ATerm trm161;
trm161 = (ATerm) ATgetAnnotations(t);
if((trm161 == NULL))
trm161 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
g_13 = ATgetFirst((ATermList) t);
h_13 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label131 ;
k_13 = trm161;
t = g_13;
i_13 = t;
t = h_13;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label131 ;
j_13 = t;
{
ATerm trm162;
trm162 = CheckATermList(j_13);
if((trm162 == NULL))
goto label131 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm162, i_13), k_13);
}
goto label129 ;
label131 :
t = trm160;
{
ATerm trm163 = t;
ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
ATerm trm164;
trm164 = (ATerm) ATgetAnnotations(t);
if((trm164 == NULL))
trm164 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
m_13 = ATgetFirst((ATermList) t);
n_13 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label132 ;
q_13 = trm164;
t = m_13;
{
struct str_closure m_108 = { &(_Id) , sl_up(sl) };
StrCL lifted65_cl = &(m_108);
struct str_closure n_108 = { &(_Id) , sl_up(sl) };
StrCL lifted66_cl = &(n_108);
t = C_2_0(sl_up(sl), lifted65_cl, lifted66_cl, t);
if((t == NULL))
goto label132 ;
o_13 = t;
t = n_13;
{
ATerm trm165;
trm165 = (ATerm) ATgetAnnotations(t);
if((trm165 == NULL))
trm165 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
r_13 = ATgetFirst((ATermList) t);
s_13 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label132 ;
v_13 = trm165;
t = r_13;
t_13 = t;
t = s_13;
t = t_14(sl, t);
if((t == NULL))
goto label132 ;
u_13 = t;
{
ATerm trm166;
trm166 = CheckATermList(u_13);
if((trm166 == NULL))
goto label132 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm166, t_13), v_13);
p_13 = t;
{
ATerm trm167;
trm167 = CheckATermList(p_13);
if((trm167 == NULL))
goto label132 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm167, o_13), q_13);
}
}
}
}
goto label129 ;
label132 :
t = trm163;
{
ATerm trm168 = t;
ATerm w_13 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
ATerm trm169;
trm169 = (ATerm) ATgetAnnotations(t);
if((trm169 == NULL))
trm169 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
w_13 = ATgetFirst((ATermList) t);
i_14 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label133 ;
l_14 = trm169;
t = w_13;
j_14 = t;
t = i_14;
{
ATerm trm170;
trm170 = (ATerm) ATgetAnnotations(t);
if((trm170 == NULL))
trm170 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
o_14 = ATgetFirst((ATermList) t);
p_14 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label133 ;
s_14 = trm170;
t = o_14;
{
struct str_closure o_108 = { &(_Id) , sl_up(sl) };
StrCL lifted67_cl = &(o_108);
struct str_closure p_108 = { &(_Id) , sl_up(sl) };
StrCL lifted68_cl = &(p_108);
t = C_2_0(sl_up(sl), lifted67_cl, lifted68_cl, t);
if((t == NULL))
goto label133 ;
q_14 = t;
t = p_14;
t = t_14(sl, t);
if((t == NULL))
goto label133 ;
r_14 = t;
{
ATerm trm171;
trm171 = CheckATermList(r_14);
if((trm171 == NULL))
goto label133 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm171, q_14), s_14);
k_14 = t;
{
ATerm trm172;
trm172 = CheckATermList(k_14);
if((trm172 == NULL))
goto label133 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm172, j_14), l_14);
}
}
}
}
goto label129 ;
label133 :
t = trm168;
{
ATerm u_14 = NULL,v_14 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
d_13 = ATgetFirst((ATermList) t);
{
ATerm trm173 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm173) == AT_LIST) && !(ATisEmpty(trm173))))
{
e_13 = ATgetFirst((ATermList) trm173);
f_13 = (ATerm) ATgetNext((ATermList) trm173);
}
else
goto fail76 ;
}
}
else
goto fail76 ;
v_14 = t;
{
ATerm trm174;
trm174 = CheckATermList(f_13);
if((trm174 == NULL))
goto fail76 ;
t = (ATerm) ATinsert((ATermList)trm174, e_13);
t = t_14(sl, t);
if((t == NULL))
goto fail76 ;
u_14 = t;
t = v_14;
{
ATerm trm175;
trm175 = CheckATermList(u_14);
if((trm175 == NULL))
goto fail76 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm175, term211), d_13);
goto label129 ;
}
}
}
}
}
}
label129 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
ATerm table_def_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "table_def_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_12 = NULL;
struct str_closure j_108 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(j_108);
if(match_cons(t, sym_AOPTIONS_1))
{
k_12 = ATgetArgument(t, 0);
}
else
goto fail71 ;
t = k_12;
{
struct str_closure k_108 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(k_108);
t = map_1_0(sl, lifted62_cl, t);
if((t == NULL))
goto fail71 ;
{
struct str_closure l_108 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(l_108);
t = separate_by_1_0(sl, lifted63_cl, t);
if((t == NULL))
goto fail71 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail71 ;
t = at_last_1_0(sl, lifted64_cl, t);
if((t == NULL))
goto fail71 ;
}
}
}
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
t = (ATerm) ATinsert(ATempty, term211);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm157 = t;
ATerm l_12 = NULL,o_12 = NULL,p_12 = NULL,s_12 = NULL,t_12 = NULL;
if(match_cons(t, sym_AL_1))
{
l_12 = ATgetArgument(t, 0);
}
else
goto label127 ;
p_12 = t;
t_12 = t;
t = l_12;
t = Hspace_0_0(sl_up(sl), t);
if((t == NULL))
goto label127 ;
t = string_to_int_0_0(sl_up(sl), t);
if((t == NULL))
goto label127 ;
s_12 = t;
t = t_12;
t = (ATerm) ATmakeAppl(sym__2, s_12, term197);
t = copy_0_0(sl_up(sl), t);
if((t == NULL))
goto label127 ;
o_12 = t;
t = p_12;
t = (ATerm) ATinsert(ATinsert(ATempty, o_12), term205);
goto label126 ;
label127 :
t = trm157;
{
ATerm trm158 = t;
ATerm m_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
if(match_cons(t, sym_AC_1))
{
m_12 = ATgetArgument(t, 0);
}
else
goto label128 ;
v_12 = t;
x_12 = t;
t = m_12;
t = Hspace_0_0(sl_up(sl), t);
if((t == NULL))
goto label128 ;
t = string_to_int_0_0(sl_up(sl), t);
if((t == NULL))
goto label128 ;
w_12 = t;
t = x_12;
t = (ATerm) ATmakeAppl(sym__2, w_12, term197);
t = copy_0_0(sl_up(sl), t);
if((t == NULL))
goto label128 ;
u_12 = t;
t = v_12;
t = (ATerm) ATinsert(ATinsert(ATempty, u_12), term207);
goto label126 ;
label128 :
t = trm158;
{
ATerm n_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
if(match_cons(t, sym_AR_1))
{
n_12 = ATgetArgument(t, 0);
}
else
goto fail73 ;
z_12 = t;
b_13 = t;
t = n_12;
t = Hspace_0_0(sl_up(sl), t);
if((t == NULL))
goto fail73 ;
t = string_to_int_0_0(sl_up(sl), t);
if((t == NULL))
goto fail73 ;
a_13 = t;
t = b_13;
t = (ATerm) ATmakeAppl(sym__2, a_13, term197);
t = copy_0_0(sl_up(sl), t);
if((t == NULL))
goto fail73 ;
y_12 = t;
t = z_12;
t = (ATerm) ATinsert(ATinsert(ATempty, y_12), term209);
goto label126 ;
}
}
label126 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term193);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
ATerm Ispace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Ispace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm156 = t;
ATerm i_105 = NULL,j_105 = NULL;
j_105 = t;
t = term203;
i_105 = t;
t = j_105;
t = SOpt_value_0_1(sl, i_105, t);
if((t == NULL))
goto label125 ;
goto label124 ;
label125 :
t = trm156;
t = term155;
goto label124 ;
label124 :
;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail70 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
ATerm Vspace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Vspace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm155 = t;
ATerm g_105 = NULL,h_105 = NULL;
h_105 = t;
t = term201;
g_105 = t;
t = h_105;
t = SOpt_value_0_1(sl, g_105, t);
if((t == NULL))
goto label123 ;
goto label122 ;
label123 :
t = trm155;
t = term155;
goto label122 ;
label122 :
;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail69 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
ATerm Hspace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Hspace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm154 = t;
ATerm e_105 = NULL,f_105 = NULL;
f_105 = t;
t = term199;
e_105 = t;
t = f_105;
t = SOpt_value_0_1(sl, e_105, t);
if((t == NULL))
goto label121 ;
goto label120 ;
label121 :
t = trm154;
t = term187;
goto label120 ;
label120 :
;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail68 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
ATerm toh_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "toh_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_108 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(h_108);
struct str_closure i_108 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(i_108);
t = filter_1_0(sl, lifted60_cl, t);
if((t == NULL))
goto fail65 ;
t = separate_by_1_0(sl, lifted61_cl, t);
if((t == NULL))
goto fail65 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm153 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label119 ;
goto fail67 ;
label119 :
t = trm153;
goto label118 ;
label118 :
;
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
t = term197;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
ATerm Abox2latex_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Abox2latex_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm trm122 = t;
ATerm j_12 = NULL;
if(match_cons(t, sym_S_1))
{
j_12 = ATgetArgument(t, 0);
}
else
goto label88 ;
t = j_12;
{
ATerm trm123 = t;
ATerm c_105 = NULL,d_105 = NULL;
d_105 = t;
c_105 = t;
t = (ATerm) ATmakeAppl(sym__2, term181, c_105);
t = table_get_0_0(sl, t);
if((t == NULL))
goto label90 ;
goto label89 ;
label90 :
t = trm123;
{
struct str_closure h_107 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(h_107);
t = string_as_chars_1_0(sl, lifted40_cl, t);
if((t == NULL))
goto label88 ;
else
goto label89 ;
}
label89 :
;
}
goto label87 ;
label88 :
t = trm122;
{
ATerm trm124 = t;
ATerm i_11 = NULL,k_11 = NULL,h_12 = NULL;
if(match_cons(t, sym_C_2))
{
ATerm trm125 = ATgetArgument(t, 0);
if(!(((ATgetType(trm125) == AT_LIST) && ATisEmpty(trm125))))
goto label91 ;
i_11 = ATgetArgument(t, 1);
}
else
goto label91 ;
h_12 = t;
t = i_11;
{
struct str_closure n_107 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(n_107);
t = map_1_0(sl, lifted43_cl, t);
if((t == NULL))
goto label91 ;
k_11 = t;
t = h_12;
t = (ATerm) ATmakeAppl(sym_CBOX_1, k_11);
}
goto label87 ;
label91 :
t = trm124;
{
ATerm trm126 = t;
ATerm e_11 = NULL,f_11 = NULL,h_11 = NULL;
if(match_cons(t, sym_FBOX_2))
{
f_11 = ATgetArgument(t, 0);
e_11 = ATgetArgument(t, 1);
}
else
goto label92 ;
h_11 = t;
t = f_11;
{
ATerm trm127 = t;
t = KW_0_0(sl, t);
if((t == NULL))
goto label94 ;
goto label93 ;
label94 :
t = trm127;
{
ATerm trm128 = t;
t = VAR_0_0(sl, t);
if((t == NULL))
goto label95 ;
goto label93 ;
label95 :
t = trm128;
{
ATerm trm129 = t;
t = NUM_0_0(sl, t);
if((t == NULL))
goto label96 ;
goto label93 ;
label96 :
t = trm129;
t = MATH_0_0(sl, t);
if((t == NULL))
goto label92 ;
else
goto label93 ;
}
}
label93 :
;
t = h_11;
t = (ATerm) ATmakeAppl(sym_BOXFONT_2, f_11, e_11);
}
goto label87 ;
label92 :
t = trm126;
{
ATerm trm130 = t;
ATerm d_11 = NULL;
if(match_cons(t, sym_FBOX_2))
{
ATerm trm131 = ATgetArgument(t, 0);
if(match_cons(trm131, sym_F_1))
{
ATerm trm132 = ATgetArgument(trm131, 0);
if(!(((ATgetType(trm132) == AT_LIST) && ATisEmpty(trm132))))
goto label97 ;
}
else
goto label97 ;
d_11 = ATgetArgument(t, 1);
}
else
goto label97 ;
t = d_11;
goto label87 ;
label97 :
t = trm130;
{
ATerm trm133 = t;
ATerm v_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,c_11 = NULL;
sl_init_var(0, z_10);
sl_init_var(1, a_11);
if(match_cons(t, sym_FBOX_2))
{
ATerm trm134 = ATgetArgument(t, 0);
if(match_cons(trm134, sym_F_1))
{
ATerm trm135 = ATgetArgument(trm134, 0);
if(((ATgetType(trm135) == AT_LIST) && !(ATisEmpty(trm135))))
{
y_10 = ATgetFirst((ATermList) trm135);
v_10 = (ATerm) ATgetNext((ATermList) trm135);
}
else
goto label98 ;
}
else
goto label98 ;
x_10 = ATgetArgument(t, 1);
}
else
goto label98 ;
c_11 = t;
t = y_10;
{
ATerm trm136 = t;
struct str_closure p_107 = { &(FM_0_0) , sl };
StrCL lifted44_cl = &(p_107);
struct str_closure q_107 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(q_107);
t = FFID_2_0(sl, lifted44_cl, lifted45_cl, t);
if((t == NULL))
goto label100 ;
goto label99 ;
label100 :
t = trm136;
{
ATerm trm137 = t;
struct str_closure r_107 = { &(SE_0_0) , sl };
StrCL lifted46_cl = &(r_107);
struct str_closure s_107 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(s_107);
t = FFID_2_0(sl, lifted46_cl, lifted47_cl, t);
if((t == NULL))
goto label101 ;
goto label99 ;
label101 :
t = trm137;
{
ATerm trm138 = t;
struct str_closure t_107 = { &(SH_0_0) , sl };
StrCL lifted48_cl = &(t_107);
struct str_closure u_107 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(u_107);
t = FFID_2_0(sl, lifted48_cl, lifted49_cl, t);
if((t == NULL))
goto label102 ;
goto label99 ;
label102 :
t = trm138;
{
ATerm trm139 = t;
struct str_closure v_107 = { &(SZ_0_0) , sl };
StrCL lifted50_cl = &(v_107);
struct str_closure w_107 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(w_107);
t = FFID_2_0(sl, lifted50_cl, lifted51_cl, t);
if((t == NULL))
goto label103 ;
goto label99 ;
label103 :
t = trm139;
{
struct str_closure x_107 = { &(CL_0_0) , sl };
StrCL lifted52_cl = &(x_107);
struct str_closure y_107 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(y_107);
t = FFID_2_0(sl, lifted52_cl, lifted53_cl, t);
if((t == NULL))
goto label98 ;
if((z_10 == NULL))
goto label98 ;
else
{
t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, z_10);
}
if((a_11 == NULL))
{
a_11 = t;
goto label99 ;
}
else
if((a_11 != t))
goto label98 ;
else
goto label99 ;
}
}
}
}
label99 :
;
t = c_11;
if((a_11 == NULL))
goto label98 ;
else
{
t = (ATerm) ATmakeAppl(sym_BOXFONT_2, a_11, (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, v_10), x_10));
}
}
goto label87 ;
label98 :
t = trm133;
{
ATerm trm140 = t;
ATerm n_10 = NULL,o_10 = NULL,q_10 = NULL,r_10 = NULL,u_10 = NULL;
if(match_cons(t, sym_H_2))
{
n_10 = ATgetArgument(t, 0);
q_10 = ATgetArgument(t, 1);
}
else
goto label104 ;
u_10 = t;
t = n_10;
t = Hspace_0_0(sl, t);
if((t == NULL))
goto label104 ;
o_10 = t;
t = q_10;
t = toh_0_0(sl, t);
if((t == NULL))
goto label104 ;
r_10 = t;
t = u_10;
t = (ATerm) ATmakeAppl(sym_HBOX_2, o_10, r_10);
goto label87 ;
label104 :
t = trm140;
{
ATerm trm141 = t;
ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,l_10 = NULL,m_10 = NULL;
if(match_cons(t, sym_V_2))
{
g_10 = ATgetArgument(t, 0);
i_10 = ATgetArgument(t, 1);
}
else
goto label105 ;
m_10 = t;
t = g_10;
t = Vspace_0_0(sl, t);
if((t == NULL))
goto label105 ;
f_10 = t;
t = g_10;
t = Ispace_0_0(sl, t);
if((t == NULL))
goto label105 ;
h_10 = t;
t = i_10;
{
struct str_closure b_108 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(b_108);
t = filter_1_0(sl, lifted54_cl, t);
if((t == NULL))
goto label105 ;
{
struct str_closure c_108 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(c_108);
t = separate_by_1_0(sl, lifted55_cl, t);
if((t == NULL))
goto label105 ;
l_10 = t;
t = m_10;
t = (ATerm) ATmakeAppl(sym_VBOX_3, f_10, h_10, l_10);
}
}
goto label87 ;
label105 :
t = trm141;
{
ATerm trm143 = t;
ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
if(match_cons(t, sym_HV_2))
{
a_10 = ATgetArgument(t, 0);
c_10 = ATgetArgument(t, 1);
}
else
goto label108 ;
e_10 = t;
t = a_10;
t = Hspace_0_0(sl, t);
if((t == NULL))
goto label108 ;
y_9 = t;
t = a_10;
t = Vspace_0_0(sl, t);
if((t == NULL))
goto label108 ;
z_9 = t;
t = a_10;
t = Ispace_0_0(sl, t);
if((t == NULL))
goto label108 ;
b_10 = t;
t = c_10;
{
struct str_closure d_108 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(d_108);
t = filter_1_0(sl, lifted56_cl, t);
if((t == NULL))
goto label108 ;
{
struct str_closure e_108 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(e_108);
t = separate_by_1_0(sl, lifted57_cl, t);
if((t == NULL))
goto label108 ;
d_10 = t;
t = e_10;
t = (ATerm) ATmakeAppl(sym_HVBOX_4, y_9, z_9, b_10, d_10);
}
}
goto label87 ;
label108 :
t = trm143;
{
ATerm trm145 = t;
ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
sl_init_var(2, t_9);
if(match_cons(t, sym_A_3))
{
p_9 = ATgetArgument(t, 0);
n_9 = ATgetArgument(t, 1);
m_9 = ATgetArgument(t, 2);
}
else
goto label111 ;
v_9 = t;
t = m_9;
t = construct_rows_0_0(sl, t);
if((t == NULL))
goto label111 ;
r_9 = t;
t = n_9;
t = Vspace_0_0(sl, t);
if((t == NULL))
goto label111 ;
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto label111 ;
o_9 = t;
x_9 = t;
t = (ATerm) ATmakeAppl(sym__2, o_9, term193);
t = copy_0_0(sl, t);
if((t == NULL))
goto label111 ;
w_9 = t;
t = x_9;
t = (ATerm) ATmakeAppl(sym__2, w_9, (ATerm) ATinsert(ATinsert(ATempty, term159), term193));
t = conc_0_0(sl, t);
if((t == NULL))
goto label111 ;
if((t_9 == NULL))
{
t_9 = t;
}
else
if((t_9 != t))
goto label111 ;
t = p_9;
t = table_def_0_0(sl, t);
if((t == NULL))
goto label111 ;
q_9 = t;
t = r_9;
{
struct str_closure f_108 = { &(MkRows_0_0) , sl };
StrCL lifted58_cl = &(f_108);
t = map_1_0(sl, lifted58_cl, t);
if((t == NULL))
goto label111 ;
{
struct str_closure g_108 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(g_108);
t = separate_by_1_0(sl, lifted59_cl, t);
if((t == NULL))
goto label111 ;
u_9 = t;
t = v_9;
t = (ATerm) ATmakeAppl(sym_ABOX_2, q_9, u_9);
}
}
goto label87 ;
label111 :
t = trm145;
{
ATerm trm146 = t;
ATerm i_9 = NULL,j_9 = NULL;
if(match_cons(t, sym_ALT_2))
{
i_9 = ATgetArgument(t, 0);
j_9 = ATgetArgument(t, 1);
}
else
goto label112 ;
t = (ATerm) ATmakeAppl(sym_ALTBOX_2, i_9, j_9);
goto label87 ;
label112 :
t = trm146;
{
ATerm trm147 = t;
ATerm u_8 = NULL,w_8 = NULL,x_8 = NULL,h_9 = NULL;
if(match_cons(t, sym_L_2))
{
w_8 = ATgetArgument(t, 0);
u_8 = ATgetArgument(t, 1);
}
else
goto label113 ;
h_9 = t;
{
ATerm trm148 = t;
t = w_8;
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto label115 ;
x_8 = t;
goto label114 ;
label115 :
t = trm148;
{
ATerm trm149 = t;
ATerm y_8 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
t = w_8;
t = explode_string_0_0(sl, t);
if((t == NULL))
goto label116 ;
{
ATerm trm150;
trm150 = (ATerm) ATgetAnnotations(t);
if((trm150 == NULL))
trm150 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
y_8 = ATgetFirst((ATermList) t);
c_9 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label116 ;
f_9 = trm150;
t = y_8;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 61))))
goto label116 ;
d_9 = t;
t = c_9;
e_9 = t;
{
ATerm trm151;
trm151 = CheckATermList(e_9);
if((trm151 == NULL))
goto label116 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm151, d_9), f_9);
t = (ATerm) ATinsert(ATempty, term195);
t = implode_string_0_0(sl, t);
if((t == NULL))
goto label116 ;
x_8 = t;
}
}
goto label114 ;
label116 :
t = trm149;
t = w_8;
x_8 = t;
goto label114 ;
}
label114 :
;
t = h_9;
t = (ATerm) ATmakeAppl(sym_LBOX_2, x_8, u_8);
}
goto label87 ;
label113 :
t = trm147;
{
ATerm trm152 = t;
ATerm s_8 = NULL,t_8 = NULL;
if(match_cons(t, sym_LBL_2))
{
s_8 = ATgetArgument(t, 0);
t_8 = ATgetArgument(t, 1);
}
else
goto label117 ;
t = (ATerm) ATmakeAppl(sym_LBLBOX_2, s_8, t_8);
goto label87 ;
label117 :
t = trm152;
{
ATerm q_8 = NULL,r_8 = NULL;
if(match_cons(t, sym_REF_2))
{
q_8 = ATgetArgument(t, 0);
r_8 = ATgetArgument(t, 1);
}
else
goto fail51 ;
t = (ATerm) ATmakeAppl(sym_REFBOX_2, q_8, r_8);
goto label87 ;
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
label87 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl) == NULL))
goto fail64 ;
else
{
t = sl_readvar(2, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term191;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm144 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label110 ;
goto fail62 ;
label110 :
t = trm144;
goto label109 ;
label109 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term189;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm142 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label107 ;
goto fail60 ;
label107 :
t = trm142;
goto label106 ;
label106 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail59 ;
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
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail58 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail57 ;
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
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail56 ;
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
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail55 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_11 = NULL;
if(match_cons(t, sym_S_1))
{
l_11 = ATgetArgument(t, 0);
}
else
goto fail54 ;
t = l_11;
t = make_latex_comment_0_0(sl_up(sl), t);
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
{
struct str_closure g_107 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(g_107);
t = escape_special_characters_0_0(sl_up(sl), t);
if((t == NULL))
goto fail52 ;
t = listtd_1_0(sl_up(sl), lifted41_cl, t);
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
struct str_closure f_107 = { &(replace_quotes_0_0) , sl_up(sl_up(sl)) };
StrCL lifted42_cl = &(f_107);
t = try_1_0(sl_up(sl_up(sl)), lifted42_cl, t);
if((t == NULL))
goto fail53 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
ATerm BOXENV_args_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "BOXENV_args_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm121 = t;
ATerm m_8 = NULL,p_8 = NULL;
t = term177;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label86 ;
p_8 = t;
m_8 = t;
t = (ATerm) ATinsert(ATempty, m_8);
goto label85 ;
label86 :
t = trm121;
t = (ATerm) ATempty;
goto label85 ;
label85 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
ATerm try_abox2alltt_0_1 (StrSL sl, ATerm t_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "try_abox2alltt_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm u_7 = NULL;
sl_init_var(0, u_7);
{
ATerm v_7 = NULL;
v_7 = t;
t = term177;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail48 ;
if((u_7 == NULL))
{
u_7 = t;
}
else
if((u_7 != t))
goto fail48 ;
t = v_7;
t = c_8(&(frame), t_7, t);
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
static ATerm c_8 (StrSL sl, ATerm b_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "c_8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm119 = t;
struct str_closure d_107 = { &(c_8) , sl };
StrCL lifted38_cl = &(d_107);
t = abox2alltt_1_1(sl_up(sl), lifted38_cl, b_8, t);
if((t == NULL))
goto label83 ;
goto label82 ;
label83 :
t = trm119;
{
ATerm trm120 = t;
struct str_closure e_107 = { &(c_8) , sl };
StrCL lifted39_cl = &(e_107);
if((sl_readvar(0, sl) == NULL))
goto label84 ;
else
{
t = abox2text_1_2(sl_up(sl), lifted39_cl, b_8, sl_readvar(0, sl), t);
if((t == NULL))
goto label84 ;
}
goto label82 ;
label84 :
t = trm120;
{
ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
g_8 = t;
t = term183;
d_8 = t;
t = g_8;
h_8 = t;
t = term185;
e_8 = t;
t = h_8;
j_8 = t;
l_8 = t;
k_8 = t;
f_8 = t;
t = j_8;
t = log_0_3(sl_up(sl), d_8, e_8, f_8, t);
if((t == NULL))
goto fail49 ;
t = term187;
t = exit_0_0(sl_up(sl), t);
if((t == NULL))
goto fail49 ;
else
goto label82 ;
}
}
label82 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
ATerm load_latex_table_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "load_latex_table_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_7 = NULL;
p_7 = t;
t = term181;
t = table_create_0_0(sl, t);
if((t == NULL))
goto fail45 ;
{
struct str_closure c_107 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(c_107);
t = try_1_0(sl, lifted36_cl, t);
if((t == NULL))
goto fail45 ;
t = p_7;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_107 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(b_107);
t = term173;
t = get_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail46 ;
t = ReadFromFile_0_0(sl_up(sl), t);
if((t == NULL))
goto fail46 ;
t = map_1_0(sl_up(sl), lifted37_cl, t);
if((t == NULL))
goto fail46 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_7 = NULL,s_7 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
q_7 = ATgetFirst((ATermList) t);
{
ATerm trm117 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm117) == AT_LIST) && !(ATisEmpty(trm117))))
{
s_7 = ATgetFirst((ATermList) trm117);
{
ATerm trm118 = (ATerm) ATgetNext((ATermList) trm117);
if(!(((ATgetType(trm118) == AT_LIST) && ATisEmpty(trm118))))
goto fail47 ;
}
}
else
goto fail47 ;
}
}
else
goto fail47 ;
t = (ATerm) ATmakeAppl(sym__3, term181, q_7, s_7);
t = table_put_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail47 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
ATerm Abox_2_latex_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Abox_2_latex_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm112 = t;
struct str_closure p_106 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(p_106);
struct str_closure q_106 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(q_106);
struct str_closure r_106 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(r_106);
t = Option_3_0(sl, lifted24_cl, lifted25_cl, lifted26_cl, t);
if((t == NULL))
goto label75 ;
goto label74 ;
label75 :
t = trm112;
{
ATerm trm113 = t;
struct str_closure s_106 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(s_106);
struct str_closure t_106 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(t_106);
struct str_closure u_106 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(u_106);
t = Option_3_0(sl, lifted27_cl, lifted28_cl, lifted29_cl, t);
if((t == NULL))
goto label76 ;
goto label74 ;
label76 :
t = trm113;
{
ATerm trm114 = t;
struct str_closure v_106 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(v_106);
struct str_closure w_106 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(w_106);
struct str_closure x_106 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(x_106);
t = ArgOption_3_0(sl, lifted30_cl, lifted31_cl, lifted32_cl, t);
if((t == NULL))
goto label77 ;
goto label74 ;
label77 :
t = trm114;
{
struct str_closure y_106 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(y_106);
struct str_closure z_106 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(z_106);
struct str_closure a_107 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(a_107);
t = ArgOption_3_0(sl, lifted33_cl, lifted34_cl, lifted35_cl, t);
if((t == NULL))
goto fail32 ;
else
goto label74 ;
}
}
}
label74 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term179;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_7 = NULL,o_7 = NULL;
o_7 = t;
n_7 = t;
t = (ATerm) ATmakeAppl(sym__2, term177, n_7);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail43 ;
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
ATerm trm116 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-w", 0, ATtrue))))
goto label81 ;
goto label80 ;
label81 :
t = trm116;
if((ATgetSymbol(t) == ATmakeSymbol("--width", 0, ATtrue)))
goto label80 ;
else
goto fail42 ;
label80 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term175;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_7 = NULL,m_7 = NULL;
m_7 = t;
i_7 = t;
t = (ATerm) ATmakeAppl(sym__2, term173, i_7);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail40 ;
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
{
ATerm trm115 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-t", 0, ATtrue))))
goto label79 ;
goto label78 ;
label79 :
t = trm115;
if((ATgetSymbol(t) == ATmakeSymbol("--latex-table", 0, ATtrue)))
goto label78 ;
else
goto fail39 ;
label78 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term171;
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
t = term169;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
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
if(!((ATgetSymbol(t) == ATmakeSymbol("--boxenv", 0, ATtrue))))
goto fail36 ;
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
t = term165;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term163;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail34 ;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("--alltt", 0, ATtrue))))
goto fail33 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm io_Abox_2_latex_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "io_Abox_2_latex_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_106 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(n_106);
struct str_closure o_106 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(o_106);
t = option_wrap_2_0(sl, lifted17_cl, lifted18_cl, t);
if((t == NULL))
goto fail26 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_106 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(m_106);
t = xtc_io_1_0(sl_up(sl), lifted19_cl, t);
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
ATerm e_7 = NULL,g_7 = NULL,f_7 = NULL,h_7 = NULL;
t = load_latex_table_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail29 ;
t = read_from_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail29 ;
{
ATerm trm111 = t;
ATerm t_6 = NULL;
t_6 = t;
t = term153;
t = get_config_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label73 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("alltt", 0, ATtrue))))
goto label73 ;
t = t_6;
{
ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
struct str_closure j_106 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(j_106);
v_6 = t;
t = term155;
u_6 = t;
t = v_6;
t = try_abox2alltt_0_1(sl_up(sl_up(sl)), u_6, t);
if((t == NULL))
goto fail29 ;
t = Fst_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail29 ;
x_6 = t;
w_6 = t;
t = (ATerm) ATmakeAppl(sym_ALLTT_1, w_6);
t = bottomup_1_0(sl_up(sl_up(sl)), lifted20_cl, t);
if((t == NULL))
goto fail29 ;
else
goto label72 ;
}
label73 :
t = trm111;
{
ATerm y_6 = NULL,c_7 = NULL,z_6 = NULL,d_7 = NULL;
struct str_closure l_106 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(l_106);
t = topdown_1_0(sl_up(sl_up(sl)), lifted22_cl, t);
if((t == NULL))
goto fail29 ;
c_7 = t;
t = BOXENV_args_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail29 ;
y_6 = t;
t = c_7;
d_7 = t;
z_6 = t;
t = (ATerm) ATmakeAppl(sym_BOXENV_2, y_6, z_6);
t = latex2text_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail29 ;
else
goto label72 ;
}
label72 :
;
g_7 = t;
t = term157;
t = create_header_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail29 ;
e_7 = t;
t = g_7;
h_7 = t;
f_7 = t;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, f_7), e_7), term159);
t = topdown_print_to_0_0(sl_up(sl_up(sl)), t);
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
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_106 = { &(Abox2latex_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted23_cl = &(k_106);
t = try_1_0(sl_up(sl_up(sl_up(sl))), lifted23_cl, t);
if((t == NULL))
goto fail31 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_106 = { &(Latex2text_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted21_cl = &(i_106);
t = try_1_0(sl_up(sl_up(sl_up(sl))), lifted21_cl, t);
if((t == NULL))
goto fail30 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm110 = t;
t = Abox_2_latex_options_0_0(sl_up(sl), t);
if((t == NULL))
goto label71 ;
goto label70 ;
label71 :
t = trm110;
t = io_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail27 ;
else
goto label70 ;
label70 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
ATerm rel_string_length_0_1 (StrSL sl, ATerm m_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rel_string_length_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm n_6 = NULL,o_6 = NULL;
sl_init_var(0, n_6);
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail24 ;
o_6 = t;
{
ATerm trm108 = t;
ATerm p_6 = NULL;
p_6 = t;
{
struct str_closure h_106 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(h_106);
t = at_suffix_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto label69 ;
t = p_6;
}
{
ATerm q_6 = NULL,r_6 = NULL;
r_6 = t;
if((n_6 == NULL))
goto fail24 ;
else
{
t = n_6;
}
t = length_0_0(sl, t);
if((t == NULL))
goto fail24 ;
q_6 = t;
t = r_6;
t = (ATerm) ATmakeAppl(sym__2, q_6, m_6);
t = subt_0_0(sl, t);
if((t == NULL))
goto fail24 ;
else
goto label68 ;
}
label69 :
t = trm108;
t = o_6;
t = length_0_0(sl, t);
if((t == NULL))
goto fail24 ;
else
goto label68 ;
label68 :
;
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
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm109 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm109) == AT_INT) && (ATgetInt((ATermInt) trm109) == 10))))
goto fail25 ;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = (ATerm) ATgetNext((ATermList) t);
}
else
if((sl_readvar(0, sl) != (ATerm) ATgetNext((ATermList) t)))
goto fail25 ;
}
else
goto fail25 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
ATerm construct_rows_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "construct_rows_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_106 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(e_106);
struct str_closure f_106 = { &(_Id) , sl };
StrCL lifted11_cl = &(f_106);
struct str_closure g_106 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(g_106);
t = split_2_0(sl, lifted11_cl, lifted12_cl, t);
if((t == NULL))
goto fail19 ;
t = f_6(&(frame), t);
if((t == NULL))
goto fail19 ;
t = filter_1_0(sl, lifted13_cl, t);
if((t == NULL))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm f_6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "f_6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
ATerm trm100 = t;
ATerm g_6 = NULL,h_6 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm101 = ATgetArgument(t, 0);
if(!(((ATgetType(trm101) == AT_LIST) && ATisEmpty(trm101))))
goto label66 ;
d_6 = ATgetArgument(t, 1);
}
else
goto label66 ;
h_6 = t;
t = d_6;
t = reverse_0_0(sl_up(sl), t);
if((t == NULL))
goto label66 ;
g_6 = t;
t = h_6;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, g_6));
goto label65 ;
label66 :
t = trm100;
{
ATerm trm102 = t;
ATerm i_6 = NULL,k_6 = NULL,j_6 = NULL,l_6 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm103 = ATgetArgument(t, 0);
if(((ATgetType(trm103) == AT_LIST) && !(ATisEmpty(trm103))))
{
ATerm trm104 = ATgetFirst((ATermList) trm103);
if(match_cons(trm104, sym_R_2))
{
b_6 = ATgetArgument(trm104, 0);
c_6 = ATgetArgument(trm104, 1);
}
else
goto label67 ;
d_6 = (ATerm) ATgetNext((ATermList) trm103);
}
else
goto label67 ;
e_6 = ATgetArgument(t, 1);
}
else
goto label67 ;
k_6 = t;
t = e_6;
t = reverse_0_0(sl_up(sl), t);
if((t == NULL))
goto label67 ;
i_6 = t;
t = k_6;
l_6 = t;
t = (ATerm) ATmakeAppl(sym__2, d_6, (ATerm) ATempty);
t = f_6(sl, t);
if((t == NULL))
goto label67 ;
j_6 = t;
t = l_6;
{
ATerm trm105;
trm105 = CheckATermList(j_6);
if((trm105 == NULL))
goto label67 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm105, (ATerm) ATmakeAppl(sym_R_2, b_6, c_6)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, i_6));
}
goto label65 ;
label67 :
t = trm102;
if(match_cons(t, sym__2))
{
ATerm trm106 = ATgetArgument(t, 0);
if(((ATgetType(trm106) == AT_LIST) && !(ATisEmpty(trm106))))
{
b_6 = ATgetFirst((ATermList) trm106);
d_6 = (ATerm) ATgetNext((ATermList) trm106);
}
else
goto fail23 ;
e_6 = ATgetArgument(t, 1);
}
else
goto fail23 ;
{
ATerm trm107;
trm107 = CheckATermList(e_6);
if((trm107 == NULL))
goto fail23 ;
t = (ATerm) ATmakeAppl(sym__2, d_6, (ATerm) ATinsert((ATermList)trm107, b_6));
t = f_6(sl, t);
if((t == NULL))
goto fail23 ;
else
goto label65 ;
}
}
label65 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm99 = t;
struct str_closure a_106 = { &(_Id) , sl_up(sl) };
StrCL lifted14_cl = &(a_106);
struct str_closure d_106 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(d_106);
t = R_2_0(sl_up(sl), lifted14_cl, lifted15_cl, t);
if((t == NULL))
goto label64 ;
goto fail20 ;
label64 :
t = trm99;
goto label63 ;
label63 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail21 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm SOpt_value_0_1 (StrSL sl, ATerm w_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "SOpt_value_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, w_5);
{
ATerm x_5 = NULL;
sl_init_var(1, x_5);
{
struct str_closure z_105 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(z_105);
t = fetch_1_0(sl, lifted10_cl, t);
if((t == NULL))
goto fail17 ;
if((x_5 == NULL))
goto fail17 ;
else
{
t = x_5;
}
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto fail17 ;
}
}
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
if(match_cons(t, sym_SOpt_2))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail18 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(t, 1);
}
else
if((sl_readvar(1, sl) != ATgetArgument(t, 1)))
goto fail18 ;
}
else
goto fail18 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm replace_quotes_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "replace_quotes_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_5 = NULL,n_5 = NULL,o_5 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm95 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm95) == AT_INT) && (ATgetInt((ATermInt) trm95) == 34))))
goto fail15 ;
l_5 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail15 ;
o_5 = t;
t = l_5;
{
struct str_closure y_105 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(y_105);
t = at_suffix_1_0(sl, lifted9_cl, t);
if((t == NULL))
goto fail15 ;
n_5 = t;
t = o_5;
{
ATerm trm98;
trm98 = CheckATermList(n_5);
if((trm98 == NULL))
goto fail15 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm98, term151), term151);
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_5 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm96 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm96) == AT_INT) && (ATgetInt((ATermInt) trm96) == 34))))
goto fail16 ;
m_5 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail16 ;
{
ATerm trm97;
trm97 = CheckATermList(m_5);
if((trm97 == NULL))
goto fail16 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm97, term149), term149);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_special_characters_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_special_characters_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_105 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(u_105);
struct str_closure x_105 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(x_105);
t = map_1_0(sl, lifted6_cl, t);
if((t == NULL))
goto fail11 ;
t = flat_list_1_0(sl, lifted8_cl, t);
if((t == NULL))
goto fail11 ;
}
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
{
struct str_closure v_105 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(v_105);
t = try_1_0(sl_up(sl), lifted7_cl, t);
if((t == NULL))
goto fail13 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm81 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 32))))
goto label49 ;
t = term119;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label49 ;
goto label48 ;
label49 :
t = trm81;
{
ATerm trm82 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 35))))
goto label50 ;
t = term121;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label50 ;
goto label48 ;
label50 :
t = trm82;
{
ATerm trm83 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 36))))
goto label51 ;
t = term123;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label51 ;
goto label48 ;
label51 :
t = trm83;
{
ATerm trm84 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 37))))
goto label52 ;
t = term125;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label52 ;
goto label48 ;
label52 :
t = trm84;
{
ATerm trm85 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 38))))
goto label53 ;
t = term127;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label53 ;
goto label48 ;
label53 :
t = trm85;
{
ATerm trm86 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 45))))
goto label54 ;
t = term129;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label54 ;
goto label48 ;
label54 :
t = trm86;
{
ATerm trm87 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 60))))
goto label55 ;
t = term131;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label55 ;
goto label48 ;
label55 :
t = trm87;
{
ATerm trm88 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 62))))
goto label56 ;
t = term133;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label56 ;
goto label48 ;
label56 :
t = trm88;
{
ATerm trm89 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 92))))
goto label57 ;
t = term135;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label57 ;
goto label48 ;
label57 :
t = trm89;
{
ATerm trm90 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 94))))
goto label58 ;
t = term137;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label58 ;
goto label48 ;
label58 :
t = trm90;
{
ATerm trm91 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 95))))
goto label59 ;
t = term139;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label59 ;
goto label48 ;
label59 :
t = trm91;
{
ATerm trm92 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 123))))
goto label60 ;
t = term141;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label60 ;
goto label48 ;
label60 :
t = trm92;
{
ATerm trm93 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 124))))
goto label61 ;
t = term143;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label61 ;
goto label48 ;
label61 :
t = trm93;
{
ATerm trm94 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 125))))
goto label62 ;
t = term145;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label62 ;
goto label48 ;
label62 :
t = trm94;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 126))))
goto fail14 ;
t = term147;
t = explode_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail14 ;
else
goto label48 ;
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
label48 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
ATerm Latex2text_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Latex2text_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
ATerm trm9 = t;
if(match_cons(t, sym_ALLTT_1))
{
z_4 = ATgetArgument(t, 0);
}
else
goto label5 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term3), z_4), term5);
goto label4 ;
label5 :
t = trm9;
{
ATerm trm10 = t;
if(match_cons(t, sym_BOXENV_2))
{
ATerm trm11 = ATgetArgument(t, 0);
if(!(((ATgetType(trm11) == AT_LIST) && ATisEmpty(trm11))))
goto label6 ;
z_4 = ATgetArgument(t, 1);
}
else
goto label6 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term7), z_4), term9);
goto label4 ;
label6 :
t = trm10;
{
ATerm trm12 = t;
if(match_cons(t, sym_BOXENV_2))
{
ATerm trm13 = ATgetArgument(t, 0);
if(((ATgetType(trm13) == AT_LIST) && !(ATisEmpty(trm13))))
{
t_4 = ATgetFirst((ATermList) trm13);
{
ATerm trm14 = (ATerm) ATgetNext((ATermList) trm13);
if(!(((ATgetType(trm14) == AT_LIST) && ATisEmpty(trm14))))
goto label7 ;
}
}
else
goto label7 ;
z_4 = ATgetArgument(t, 1);
}
else
goto label7 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term7), z_4), term11), t_4), term13);
goto label4 ;
label7 :
t = trm12;
{
ATerm trm15 = t;
if(match_cons(t, sym_HBOX_2))
{
u_4 = ATgetArgument(t, 0);
z_4 = ATgetArgument(t, 1);
}
else
goto label8 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term15), z_4), term11), u_4), term17);
goto label4 ;
label8 :
t = trm15;
{
ATerm trm16 = t;
if(match_cons(t, sym_VBOX_3))
{
v_4 = ATgetArgument(t, 0);
x_4 = ATgetArgument(t, 1);
z_4 = ATgetArgument(t, 2);
}
else
goto label9 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term19), z_4), term11), x_4), term21), v_4), term23);
goto label4 ;
label9 :
t = trm16;
{
ATerm trm17 = t;
if(match_cons(t, sym_HVBOX_4))
{
u_4 = ATgetArgument(t, 0);
v_4 = ATgetArgument(t, 1);
x_4 = ATgetArgument(t, 2);
z_4 = ATgetArgument(t, 3);
}
else
goto label10 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term25), z_4), term11), x_4), term21), v_4), term21), u_4), term27);
goto label4 ;
label10 :
t = trm17;
{
ATerm trm18 = t;
if(match_cons(t, sym_ABOX_2))
{
y_4 = ATgetArgument(t, 0);
z_4 = ATgetArgument(t, 1);
}
else
goto label11 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term29), z_4), term11), y_4), term31);
goto label4 ;
label11 :
t = trm18;
{
ATerm trm19 = t;
if(match_cons(t, sym_ALTBOX_2))
{
a_5 = ATgetArgument(t, 0);
c_5 = ATgetArgument(t, 1);
}
else
goto label12 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term33), c_5), term35), a_5), term37);
goto label4 ;
label12 :
t = trm19;
{
ATerm trm20 = t;
if(match_cons(t, sym_CBOX_1))
{
g_5 = ATgetArgument(t, 0);
}
else
goto label13 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term39), g_5), term41);
goto label4 ;
label13 :
t = trm20;
{
ATerm trm21 = t;
ATerm h_5 = NULL,i_5 = NULL;
if(match_cons(t, sym_LBOX_2))
{
d_5 = ATgetArgument(t, 0);
g_5 = ATgetArgument(t, 1);
}
else
goto label14 ;
t = d_5;
t = is_int_0_0(sl, t);
if((t == NULL))
goto label14 ;
i_5 = t;
t = d_5;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto label14 ;
h_5 = t;
t = i_5;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term43), g_5), term21), h_5), term45);
goto label4 ;
label14 :
t = trm21;
{
ATerm trm22 = t;
if(match_cons(t, sym_LBOX_2))
{
ATerm trm23 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm23) == ATmakeSymbol("=", 0, ATtrue))))
goto label15 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label15 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term47), g_5), term49);
goto label4 ;
label15 :
t = trm22;
{
ATerm trm24 = t;
if(match_cons(t, sym_LBOX_2))
{
d_5 = ATgetArgument(t, 0);
g_5 = ATgetArgument(t, 1);
}
else
goto label16 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term47), g_5), term11), d_5), term51);
goto label4 ;
label16 :
t = trm24;
{
ATerm trm25 = t;
if(match_cons(t, sym_LBLBOX_2))
{
e_5 = ATgetArgument(t, 0);
g_5 = ATgetArgument(t, 1);
}
else
goto label17 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_5), term53), e_5), term55);
goto label4 ;
label17 :
t = trm25;
{
ATerm trm26 = t;
if(match_cons(t, sym_REFBOX_2))
{
e_5 = ATgetArgument(t, 0);
g_5 = ATgetArgument(t, 1);
}
else
goto label18 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term21), e_5), term57);
goto label4 ;
label18 :
t = trm26;
{
ATerm trm27 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm28 = ATgetArgument(t, 0);
if(!(match_cons(trm28, sym_KW_0)))
goto label19 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label19 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term59);
goto label4 ;
label19 :
t = trm27;
{
ATerm trm29 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm30 = ATgetArgument(t, 0);
if(!(match_cons(trm30, sym_VAR_0)))
goto label20 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label20 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term61);
goto label4 ;
label20 :
t = trm29;
{
ATerm trm31 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm32 = ATgetArgument(t, 0);
if(!(match_cons(trm32, sym_NUM_0)))
goto label21 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label21 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term63);
goto label4 ;
label21 :
t = trm31;
{
ATerm trm33 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm34 = ATgetArgument(t, 0);
if(!(match_cons(trm34, sym_MATH_0)))
goto label22 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label22 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term65);
goto label4 ;
label22 :
t = trm33;
{
ATerm trm35 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm36 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm36) == ATmakeSymbol("sf", 0, ATtrue))))
goto label23 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label23 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term67);
goto label4 ;
label23 :
t = trm35;
{
ATerm trm37 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm38 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm38) == ATmakeSymbol("rm", 0, ATtrue))))
goto label24 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label24 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term69);
goto label4 ;
label24 :
t = trm37;
{
ATerm trm39 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm40 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm40) == ATmakeSymbol("tt", 0, ATtrue))))
goto label25 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label25 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term71);
goto label4 ;
label25 :
t = trm39;
{
ATerm trm41 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm42 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm42) == ATmakeSymbol("md", 0, ATtrue))))
goto label26 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label26 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term73);
goto label4 ;
label26 :
t = trm41;
{
ATerm trm43 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm44 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm44) == ATmakeSymbol("bf", 0, ATtrue))))
goto label27 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label27 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term75);
goto label4 ;
label27 :
t = trm43;
{
ATerm trm45 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm46 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm46) == ATmakeSymbol("up", 0, ATtrue))))
goto label28 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label28 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term77);
goto label4 ;
label28 :
t = trm45;
{
ATerm trm47 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm48 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm48) == ATmakeSymbol("it", 0, ATtrue))))
goto label29 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label29 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term79);
goto label4 ;
label29 :
t = trm47;
{
ATerm trm49 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm50 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm50) == ATmakeSymbol("sc", 0, ATtrue))))
goto label30 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label30 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term81);
goto label4 ;
label30 :
t = trm49;
{
ATerm trm51 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm52 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm52) == ATmakeSymbol("sl", 0, ATtrue))))
goto label31 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label31 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term83);
goto label4 ;
label31 :
t = trm51;
{
ATerm trm53 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm54 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm54) == ATmakeSymbol("em", 0, ATtrue))))
goto label32 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label32 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term85);
goto label4 ;
label32 :
t = trm53;
{
ATerm trm55 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm56 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm56) == ATmakeSymbol("tiny", 0, ATtrue))))
goto label33 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label33 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term87);
goto label4 ;
label33 :
t = trm55;
{
ATerm trm57 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm58 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm58) == ATmakeSymbol("scriptsize", 0, ATtrue))))
goto label34 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label34 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term89);
goto label4 ;
label34 :
t = trm57;
{
ATerm trm59 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm60 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm60) == ATmakeSymbol("footnotesize", 0, ATtrue))))
goto label35 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label35 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term91);
goto label4 ;
label35 :
t = trm59;
{
ATerm trm61 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm62 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm62) == ATmakeSymbol("small", 0, ATtrue))))
goto label36 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label36 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term93);
goto label4 ;
label36 :
t = trm61;
{
ATerm trm63 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm64 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm64) == ATmakeSymbol("normalsize", 0, ATtrue))))
goto label37 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label37 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term95);
goto label4 ;
label37 :
t = trm63;
{
ATerm trm65 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm66 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm66) == ATmakeSymbol("large", 0, ATtrue))))
goto label38 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label38 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term97);
goto label4 ;
label38 :
t = trm65;
{
ATerm trm67 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm68 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm68) == ATmakeSymbol("Large", 0, ATtrue))))
goto label39 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label39 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term99);
goto label4 ;
label39 :
t = trm67;
{
ATerm trm69 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm70 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm70) == ATmakeSymbol("LARGE", 0, ATtrue))))
goto label40 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label40 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term101);
goto label4 ;
label40 :
t = trm69;
{
ATerm trm71 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm72 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm72) == ATmakeSymbol("huge", 0, ATtrue))))
goto label41 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label41 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term103);
goto label4 ;
label41 :
t = trm71;
{
ATerm trm73 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm74 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm74) == ATmakeSymbol("Huge", 0, ATtrue))))
goto label42 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label42 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term105);
goto label4 ;
label42 :
t = trm73;
{
ATerm trm75 = t;
if(match_cons(t, sym_BOXFONT_2))
{
ATerm trm76 = ATgetArgument(t, 0);
if(match_cons(trm76, sym_BOXCOLOR_1))
{
f_5 = ATgetArgument(trm76, 0);
}
else
goto label43 ;
g_5 = ATgetArgument(t, 1);
}
else
goto label43 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term53), g_5), term21), f_5), term107);
goto label4 ;
label43 :
t = trm75;
{
ATerm trm77 = t;
if(!(match_cons(t, sym_C_0)))
goto label44 ;
t = term109;
goto label4 ;
label44 :
t = trm77;
{
ATerm trm78 = t;
if(!(match_cons(t, sym_R_0)))
goto label45 ;
t = term111;
goto label4 ;
label45 :
t = trm78;
{
ATerm trm79 = t;
if(!(match_cons(t, sym_L_0)))
goto label46 ;
t = term113;
goto label4 ;
label46 :
t = trm79;
{
ATerm trm80 = t;
if(!(match_cons(t, sym_EOR_0)))
goto label47 ;
t = term115;
goto label4 ;
label47 :
t = trm80;
if(!(match_cons(t, sym_CSEP_0)))
goto fail10 ;
t = term117;
goto label4 ;
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
}
}
}
}
}
label4 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm latex2text_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "latex2text_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_105 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(t_105);
t = bottomup_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_105 = { &(Latex2text_0_0) , sl_up(sl) };
StrCL lifted5_cl = &(s_105);
t = try_1_0(sl_up(sl), lifted5_cl, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm topdown_print_to_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "topdown_print_to_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,o_4 = NULL;
sl_init_var(0, g_4);
f_4 = t;
o_4 = t;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail5 ;
e_4 = t;
t = (ATerm) ATmakeAppl(sym__2, e_4, term1);
t = fopen_0_0(sl, t);
if((t == NULL))
goto fail5 ;
if(match_cons(t, sym_Stream_1))
{
if((g_4 == NULL))
{
g_4 = ATgetArgument(t, 0);
}
else
if((g_4 != ATgetArgument(t, 0)))
goto fail5 ;
}
else
goto fail5 ;
t = f_4;
{
struct str_closure r_105 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(r_105);
t = topdown_1_0(sl, lifted2_cl, t);
if((t == NULL))
goto fail5 ;
if((g_4 == NULL))
goto fail5 ;
else
{
t = g_4;
}
t = fclose_0_0(sl, t);
if((t == NULL))
goto fail5 ;
t = o_4;
t = (ATerm) ATmakeAppl(sym_FILE_1, e_4);
}
}
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
{
struct str_closure q_105 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(q_105);
t = try_1_0(sl_up(sl), lifted3_cl, t);
if((t == NULL))
goto fail6 ;
}
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
ATerm h_4 = NULL,x_104 = NULL,z_104 = NULL,y_104 = NULL;
t = is_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail7 ;
h_4 = t;
z_104 = t;
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail7 ;
else
{
t = sl_readvar(0, sl_up(sl));
}
x_104 = t;
t = z_104;
y_104 = t;
t = SSL_fputs(y_104, x_104);
if((t == NULL))
goto fail7 ;
t = h_4;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm remove_trailing_1_0 (StrSL sl, StrCL a_4, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "remove_trailing_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, a_4);
t = b_4(&(frame), t);
if((t == NULL))
goto fail2 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
static ATerm b_4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "b_4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_105 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(p_105);
t = try_1_0(sl_up(sl), lifted1_cl, t);
if((t == NULL))
goto fail3 ;
}
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
ATerm u_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,c_4 = NULL;
ATerm trm7;
trm7 = (ATerm) ATgetAnnotations(t);
if((trm7 == NULL))
trm7 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
u_3 = ATgetFirst((ATermList) t);
w_3 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail4 ;
z_3 = trm7;
t = u_3;
t = sl_fun(0, sl_up(sl))(sl_fun_sl(0, sl_up(sl)), t);
if((t == NULL))
goto fail4 ;
x_3 = t;
t = w_3;
y_3 = t;
t = x_3;
t = y_3;
c_4 = t;
t = (ATerm) SRTS_setAnnotations(z_3, (ATerm) ATempty);
{
ATerm trm8;
trm8 = CheckATermList(y_3);
if((trm8 == NULL))
goto fail4 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm8, x_3), z_3);
t = c_4;
t = b_4(sl_up(sl), t);
if((t == NULL))
goto fail4 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm flat_list_1_0 (StrSL sl, StrCL w_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "flat_list_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_vars(1);
sl_init_fun(0, w_18);
{
ATerm trm0 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label1 ;
t = cl_fun(w_18)(cl_sl(w_18), t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
ATerm f_3 = NULL,g_3 = NULL;
sl_init_var(0, g_3);
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
f_3 = ATgetFirst((ATermList) t);
if((g_3 == NULL))
{
g_3 = (ATerm) ATgetNext((ATermList) t);
}
else
if((g_3 != (ATerm) ATgetNext((ATermList) t)))
goto fail0 ;
}
else
goto fail0 ;
{
ATerm trm1 = t;
ATerm h_3 = NULL;
h_3 = t;
t = f_3;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label2 ;
t = h_3;
{
ATerm k_3 = NULL,l_3 = NULL;
l_3 = t;
if((g_3 == NULL))
goto fail0 ;
else
{
t = g_3;
}
t = flat_list_1_0(sl, w_18, t);
if((t == NULL))
goto fail0 ;
k_3 = t;
t = l_3;
{
ATerm trm2;
trm2 = CheckATermList(k_3);
if((trm2 == NULL))
goto fail0 ;
t = (ATerm) ATinsert((ATermList)trm2, (ATerm) ATempty);
goto label0 ;
}
}
label2 :
t = trm1;
{
ATerm trm3 = t;
ATerm i_3 = NULL;
i_3 = t;
t = f_3;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm4 = ATgetFirst((ATermList) t);
ATerm trm5 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label3 ;
t = i_3;
{
struct str_closure o_105 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(o_105);
t = f_3;
t = flat_list_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
else
goto label0 ;
}
label3 :
t = trm3;
{
ATerm o_3 = NULL,s_3 = NULL;
s_3 = t;
if((g_3 == NULL))
goto fail0 ;
else
{
t = g_3;
}
t = flat_list_1_0(sl, w_18, t);
if((t == NULL))
goto fail0 ;
o_3 = t;
t = s_3;
{
ATerm trm6;
trm6 = CheckATermList(o_3);
if((trm6 == NULL))
goto fail0 ;
t = (ATerm) ATinsert((ATermList)trm6, f_3);
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
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail1 ;
else
{
t = sl_readvar(0, sl);
}
t = flat_list_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail1 ;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 155));
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
closures[closures_index].fun = &(copy_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("copy_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(separate_by_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("separate_by_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(listtd_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("listtd_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(at_last_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("at_last_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(at_suffix_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("at_suffix_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(split_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("split_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Fst_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Fst_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(bottomup_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("bottomup_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fclose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fclose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fopen_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fopen_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ReadFromFile_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ReadFromFile_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_to_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_to_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(subt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("subt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(set_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(option_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("option_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Option_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Option_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_new_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_new_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(R_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("R_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(C_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("C_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(FFID_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("FFID_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(KW_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("KW_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(VAR_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("VAR_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(NUM_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("NUM_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(MATH_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("MATH_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(FM_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("FM_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(SE_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("SE_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(SH_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("SH_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(SZ_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("SZ_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(CL_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("CL_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(abox2text_1_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("abox2text_1_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted88);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted88", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(tables2text_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tables2text_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(create_header_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("create_header_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted86);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted86", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted84);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted84", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(abox2alltt_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("abox2alltt_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted76);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted76", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted75);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted75", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted74);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted74", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(LatexComment_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("LatexComment_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted72);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted72", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted71);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted71", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(e_15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("e_15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted70);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted70", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted73);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted73", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(make_latex_comment_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("make_latex_comment_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(MkRows_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("MkRows_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(t_14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("t_14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(table_row_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_row_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted63);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted63", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted62);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted62", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted64);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted64", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(table_def_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_def_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Ispace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Ispace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Vspace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Vspace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Hspace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Hspace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted61);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted61", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(toh_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("toh_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted59);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted59", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted51);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted51", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted49);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted49", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted45);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted45", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted43);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted43", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Abox2latex_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Abox2latex_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(BOXENV_args_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("BOXENV_args_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(c_8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("c_8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_abox2alltt_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_abox2alltt_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted37);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted37", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(load_latex_table_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("load_latex_table_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(Abox_2_latex_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Abox_2_latex_options_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_Abox_2_latex_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_Abox_2_latex_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rel_string_length_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rel_string_length_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(f_6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("f_6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(construct_rows_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("construct_rows_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(SOpt_value_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("SOpt_value_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(replace_quotes_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("replace_quotes_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_special_characters_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_special_characters_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Latex2text_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Latex2text_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(latex2text_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("latex2text_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_print_to_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_print_to_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(b_4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("b_4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(remove_trailing_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("remove_trailing_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(flat_list_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("flat_list_1_0", 0, ATtrue)), &(closures[closures_index]));
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
