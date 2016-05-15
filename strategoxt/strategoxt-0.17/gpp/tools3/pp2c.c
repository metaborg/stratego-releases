#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__3;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_FILE_1;
static Symbol sym_IntConst_1;
static Symbol sym_StringLit_1;
static Symbol sym_Id_1;
static Symbol sym_TypeId_1;
static Symbol sym_IdDecl_3;
static Symbol sym_TranslationUnit_1;
static Symbol sym_FunDef_3;
static Symbol sym_Declaration2_2;
static Symbol sym_ArrayIndex_2;
static Symbol sym_FunCall_2;
static Symbol sym_Address_1;
static Symbol sym_Negation_1;
static Symbol sym_TypeCast_2;
static Symbol sym_Gt_2;
static Symbol sym_Equal_2;
static Symbol sym_NotEqual_2;
static Symbol sym_LAnd_2;
static Symbol sym_Assign_3;
static Symbol sym_AssignEq_0;
static Symbol sym_EmptyExp_0;
static Symbol sym_Compound_2;
static Symbol sym_Stat_1;
static Symbol sym_If_2;
static Symbol sym_IfElse_3;
static Symbol sym_While_2;
static Symbol sym_Return_1;
static Symbol sym_Exit_1;
static Symbol sym_Static_0;
static Symbol sym_Int_0;
static Symbol sym_Char_0;
static Symbol sym_Void_0;
static Symbol sym_DeclInit_2;
static Symbol sym_AssignInit_1;
static Symbol sym_TypeSpec_3;
static Symbol sym_DeclSpec_5;
static Symbol sym_ParamDecl_2;
static Symbol sym_TypeName_2;
static Symbol sym_PointerOf_1;
static Symbol sym_Pointer_2;
static Symbol sym_ParamList_1;
static Symbol sym_ArrayDecl_2;
static Symbol sym_S_1;
static Symbol sym_H_2;
static Symbol sym_V_2;
static Symbol sym_HV_2;
static Symbol sym_FBOX_2;
static Symbol sym_Arg_1;
static Symbol sym_SOpt_2;
static Symbol sym_VS_0;
static Symbol sym_HS_0;
static Symbol sym_IS_0;
static Symbol sym_PP_Table_1;
static Symbol sym_PP_Entry_2;
static Symbol sym_Path1_1;
static Symbol sym_Path_2;
static Symbol sym_selector_2;
static Symbol sym_cons_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_None_0;
static Symbol sym_Some_1;
static Symbol sym_context_free_syntax_1;
static Symbol sym_prod_3;
static Symbol sym_opt_1;
static Symbol sym_iter_1;
static Symbol sym_iter_star_1;
static Symbol sym_iter_sep_2;
static Symbol sym_iter_star_sep_2;
static Symbol sym_lit_1;
static Symbol sym_label_2;
static Symbol sym_seq_2;
static Symbol sym_alt_2;
static void init_module_constructors (void)
{
sym__3 = ATmakeSymbol("", 3, ATfalse);
ATprotectSymbol(sym__3);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
sym_IntConst_1 = ATmakeSymbol("IntConst", 1, ATfalse);
ATprotectSymbol(sym_IntConst_1);
sym_StringLit_1 = ATmakeSymbol("StringLit", 1, ATfalse);
ATprotectSymbol(sym_StringLit_1);
sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
ATprotectSymbol(sym_Id_1);
sym_TypeId_1 = ATmakeSymbol("TypeId", 1, ATfalse);
ATprotectSymbol(sym_TypeId_1);
sym_IdDecl_3 = ATmakeSymbol("IdDecl", 3, ATfalse);
ATprotectSymbol(sym_IdDecl_3);
sym_TranslationUnit_1 = ATmakeSymbol("TranslationUnit", 1, ATfalse);
ATprotectSymbol(sym_TranslationUnit_1);
sym_FunDef_3 = ATmakeSymbol("FunDef", 3, ATfalse);
ATprotectSymbol(sym_FunDef_3);
sym_Declaration2_2 = ATmakeSymbol("Declaration2", 2, ATfalse);
ATprotectSymbol(sym_Declaration2_2);
sym_ArrayIndex_2 = ATmakeSymbol("ArrayIndex", 2, ATfalse);
ATprotectSymbol(sym_ArrayIndex_2);
sym_FunCall_2 = ATmakeSymbol("FunCall", 2, ATfalse);
ATprotectSymbol(sym_FunCall_2);
sym_Address_1 = ATmakeSymbol("Address", 1, ATfalse);
ATprotectSymbol(sym_Address_1);
sym_Negation_1 = ATmakeSymbol("Negation", 1, ATfalse);
ATprotectSymbol(sym_Negation_1);
sym_TypeCast_2 = ATmakeSymbol("TypeCast", 2, ATfalse);
ATprotectSymbol(sym_TypeCast_2);
sym_Gt_2 = ATmakeSymbol("Gt", 2, ATfalse);
ATprotectSymbol(sym_Gt_2);
sym_Equal_2 = ATmakeSymbol("Equal", 2, ATfalse);
ATprotectSymbol(sym_Equal_2);
sym_NotEqual_2 = ATmakeSymbol("NotEqual", 2, ATfalse);
ATprotectSymbol(sym_NotEqual_2);
sym_LAnd_2 = ATmakeSymbol("LAnd", 2, ATfalse);
ATprotectSymbol(sym_LAnd_2);
sym_Assign_3 = ATmakeSymbol("Assign", 3, ATfalse);
ATprotectSymbol(sym_Assign_3);
sym_AssignEq_0 = ATmakeSymbol("AssignEq", 0, ATfalse);
ATprotectSymbol(sym_AssignEq_0);
sym_EmptyExp_0 = ATmakeSymbol("EmptyExp", 0, ATfalse);
ATprotectSymbol(sym_EmptyExp_0);
sym_Compound_2 = ATmakeSymbol("Compound", 2, ATfalse);
ATprotectSymbol(sym_Compound_2);
sym_Stat_1 = ATmakeSymbol("Stat", 1, ATfalse);
ATprotectSymbol(sym_Stat_1);
sym_If_2 = ATmakeSymbol("If", 2, ATfalse);
ATprotectSymbol(sym_If_2);
sym_IfElse_3 = ATmakeSymbol("IfElse", 3, ATfalse);
ATprotectSymbol(sym_IfElse_3);
sym_While_2 = ATmakeSymbol("While", 2, ATfalse);
ATprotectSymbol(sym_While_2);
sym_Return_1 = ATmakeSymbol("Return", 1, ATfalse);
ATprotectSymbol(sym_Return_1);
sym_Exit_1 = ATmakeSymbol("Exit", 1, ATfalse);
ATprotectSymbol(sym_Exit_1);
sym_Static_0 = ATmakeSymbol("Static", 0, ATfalse);
ATprotectSymbol(sym_Static_0);
sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
ATprotectSymbol(sym_Int_0);
sym_Char_0 = ATmakeSymbol("Char", 0, ATfalse);
ATprotectSymbol(sym_Char_0);
sym_Void_0 = ATmakeSymbol("Void", 0, ATfalse);
ATprotectSymbol(sym_Void_0);
sym_DeclInit_2 = ATmakeSymbol("DeclInit", 2, ATfalse);
ATprotectSymbol(sym_DeclInit_2);
sym_AssignInit_1 = ATmakeSymbol("AssignInit", 1, ATfalse);
ATprotectSymbol(sym_AssignInit_1);
sym_TypeSpec_3 = ATmakeSymbol("TypeSpec", 3, ATfalse);
ATprotectSymbol(sym_TypeSpec_3);
sym_DeclSpec_5 = ATmakeSymbol("DeclSpec", 5, ATfalse);
ATprotectSymbol(sym_DeclSpec_5);
sym_ParamDecl_2 = ATmakeSymbol("ParamDecl", 2, ATfalse);
ATprotectSymbol(sym_ParamDecl_2);
sym_TypeName_2 = ATmakeSymbol("TypeName", 2, ATfalse);
ATprotectSymbol(sym_TypeName_2);
sym_PointerOf_1 = ATmakeSymbol("PointerOf", 1, ATfalse);
ATprotectSymbol(sym_PointerOf_1);
sym_Pointer_2 = ATmakeSymbol("Pointer", 2, ATfalse);
ATprotectSymbol(sym_Pointer_2);
sym_ParamList_1 = ATmakeSymbol("ParamList", 1, ATfalse);
ATprotectSymbol(sym_ParamList_1);
sym_ArrayDecl_2 = ATmakeSymbol("ArrayDecl", 2, ATfalse);
ATprotectSymbol(sym_ArrayDecl_2);
sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
ATprotectSymbol(sym_S_1);
sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
ATprotectSymbol(sym_H_2);
sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
ATprotectSymbol(sym_V_2);
sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
ATprotectSymbol(sym_HV_2);
sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
ATprotectSymbol(sym_FBOX_2);
sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
ATprotectSymbol(sym_Arg_1);
sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
ATprotectSymbol(sym_SOpt_2);
sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
ATprotectSymbol(sym_VS_0);
sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
ATprotectSymbol(sym_HS_0);
sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
ATprotectSymbol(sym_IS_0);
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
sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
ATprotectSymbol(sym_cons_1);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
ATprotectSymbol(sym_None_0);
sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
ATprotectSymbol(sym_Some_1);
sym_context_free_syntax_1 = ATmakeSymbol("context-free-syntax", 1, ATfalse);
ATprotectSymbol(sym_context_free_syntax_1);
sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
ATprotectSymbol(sym_prod_3);
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
sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
ATprotectSymbol(sym_lit_1);
sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
ATprotectSymbol(sym_label_2);
sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
ATprotectSymbol(sym_seq_2);
sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
ATprotectSymbol(sym_alt_2);
}
static ATerm term551;
static ATerm term550;
static ATerm term549;
static ATerm term548;
static ATerm term547;
static ATerm term546;
static ATerm term545;
static ATerm term544;
static ATerm term543;
static ATerm term542;
static ATerm term541;
static ATerm term540;
static ATerm term539;
static ATerm term538;
static ATerm term537;
static ATerm term536;
static ATerm term535;
static ATerm term534;
static ATerm term533;
static ATerm term532;
static ATerm term531;
static ATerm term530;
static ATerm term529;
static ATerm term528;
static ATerm term527;
static ATerm term526;
static ATerm term525;
static ATerm term524;
static ATerm term523;
static ATerm term522;
static ATerm term521;
static ATerm term520;
static ATerm term519;
static ATerm term518;
static ATerm term517;
static ATerm term516;
static ATerm term515;
static ATerm term514;
static ATerm term513;
static ATerm term512;
static ATerm term511;
static ATerm term510;
static ATerm term509;
static ATerm term508;
static ATerm term507;
static ATerm term506;
static ATerm term505;
static ATerm term504;
static ATerm term503;
static ATerm term502;
static ATerm term501;
static ATerm term500;
static ATerm term499;
static ATerm term498;
static ATerm term497;
static ATerm term496;
static ATerm term495;
static ATerm term494;
static ATerm term493;
static ATerm term492;
static ATerm term491;
static ATerm term490;
static ATerm term489;
static ATerm term488;
static ATerm term487;
static ATerm term486;
static ATerm term485;
static ATerm term484;
static ATerm term483;
static ATerm term482;
static ATerm term481;
static ATerm term480;
static ATerm term479;
static ATerm term478;
static ATerm term477;
static ATerm term476;
static ATerm term475;
static ATerm term474;
static ATerm term473;
static ATerm term472;
static ATerm term471;
static ATerm term470;
static ATerm term469;
static ATerm term468;
static ATerm term467;
static ATerm term466;
static ATerm term465;
static ATerm term464;
static ATerm term463;
static ATerm term462;
static ATerm term461;
static ATerm term460;
static ATerm term459;
static ATerm term458;
static ATerm term457;
static ATerm term456;
static ATerm term455;
static ATerm term454;
static ATerm term453;
static ATerm term452;
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("print_string", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(sym_Id_1, term5);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("pop_box", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym_Id_1, term9);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(sym_FunCall_2, term11, (ATerm) ATempty);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(sym_Stat_1, term13);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("push_box", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(sym_Id_1, term17);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("V", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(sym_Id_1, term21);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(sym_Id_1, term25);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(sym_TypeId_1, term29);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term31, (ATerm) ATempty);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("arg", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(sym_Id_1, term35);
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(sym_None_0);
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term37, term39);
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(sym_Id_1, term43);
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("tree", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(sym_Id_1, term47);
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(sym_Id_1, term51);
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(sym_Id_1, term55);
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(sym_TypeId_1, term59);
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term61, (ATerm) ATempty);
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("l", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(sym_Id_1, term65);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term67, term39);
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(sym_TypeName_2, term63, term39);
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(sym_TypeCast_2, term71, term37);
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(sym_AssignInit_1, term73);
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(sym_DeclInit_2, term69, term75);
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(sym_Id_1, term79);
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("print", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(sym_Id_1, term83);
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(sym_Id_1, term87);
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetLength", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(sym_Id_1, term91);
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(sym_IntConst_1, term3);
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(sym_AssignEq_0);
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(sym_Id_1, term99);
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(sym_TypeName_2, term33, term39);
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(sym_TypeCast_2, term103, term67);
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("unexpected", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(sym_Id_1, term107);
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("\"a list\"", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(sym_IntConst_1, term113);
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetAFun", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(sym_Id_1, term117);
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeFun", 0, ATtrue));
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(sym_Id_1, term121);
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(ATmakeSymbol("NoneFun", 0, ATtrue));
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(sym_Id_1, term125);
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(ATmakeSymbol("\"a Some(1) or a None(0)\"", 0, ATtrue));
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(sym_Static_0);
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(sym_Void_0);
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term131, (ATerm)ATempty, term133, (ATerm) ATempty);
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term49, term39);
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeAppl(sym_Some_1, term137);
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term33, term139);
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeInt(1);
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(ATmakeSymbol("AltFun", 0, ATtrue));
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeAppl(sym_Id_1, term145);
ATprotect(&(term147));
term147 = term146;
ATprotect(&(term148));
term148 = (ATerm) ATmakeAppl(sym_Int_0);
ATprotect(&(term149));
term149 = term148;
ATprotect(&(term150));
term150 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term149, (ATerm) ATempty);
ATprotect(&(term151));
term151 = term150;
ATprotect(&(term152));
term152 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
ATprotect(&(term153));
term153 = term152;
ATprotect(&(term154));
term154 = (ATerm) ATmakeAppl(sym_Id_1, term153);
ATprotect(&(term155));
term155 = term154;
ATprotect(&(term156));
term156 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term155, term39);
ATprotect(&(term157));
term157 = term156;
ATprotect(&(term158));
term158 = (ATerm) ATmakeAppl(sym_IntConst_1, term1);
ATprotect(&(term159));
term159 = term158;
ATprotect(&(term160));
term160 = (ATerm) ATmakeAppl(ATmakeSymbol("\"a non empty list\"", 0, ATtrue));
ATprotect(&(term161));
term161 = term160;
ATprotect(&(term162));
term162 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
ATprotect(&(term163));
term163 = term162;
ATprotect(&(term164));
term164 = (ATerm) ATmakeAppl(sym_Id_1, term163);
ATprotect(&(term165));
term165 = term164;
ATprotect(&(term166));
term166 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
ATprotect(&(term167));
term167 = term166;
ATprotect(&(term168));
term168 = (ATerm) ATmakeAppl(sym_TypeId_1, term167);
ATprotect(&(term169));
term169 = term168;
ATprotect(&(term170));
term170 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term169, (ATerm) ATempty);
ATprotect(&(term171));
term171 = term170;
ATprotect(&(term172));
term172 = (ATerm) ATmakeAppl(sym_TypeName_2, term171, term39);
ATprotect(&(term173));
term173 = term172;
ATprotect(&(term174));
term174 = (ATerm) ATmakeAppl(sym_TypeCast_2, term173, term37);
ATprotect(&(term175));
term175 = term174;
ATprotect(&(term176));
term176 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
ATprotect(&(term177));
term177 = term176;
ATprotect(&(term178));
term178 = (ATerm) ATmakeAppl(sym_Id_1, term177);
ATprotect(&(term179));
term179 = term178;
ATprotect(&(term180));
term180 = (ATerm) ATmakeAppl(ATmakeSymbol("\"an integer\"", 0, ATtrue));
ATprotect(&(term181));
term181 = term180;
ATprotect(&(term182));
term182 = (ATerm) ATmakeAppl(sym_Exit_1, term95);
ATprotect(&(term183));
term183 = term182;
ATprotect(&(term184));
term184 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
ATprotect(&(term185));
term185 = term184;
ATprotect(&(term186));
term186 = (ATerm) ATmakeAppl(sym_Id_1, term185);
ATprotect(&(term187));
term187 = term186;
ATprotect(&(term188));
term188 = (ATerm) ATmakeAppl(ATmakeSymbol("\"Too big alt parameter in %a\\n\"", 0, ATtrue));
ATprotect(&(term189));
term189 = term188;
ATprotect(&(term190));
term190 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
ATprotect(&(term191));
term191 = term190;
ATprotect(&(term192));
term192 = (ATerm) ATmakeAppl(sym_Id_1, term191);
ATprotect(&(term193));
term193 = term192;
ATprotect(&(term194));
term194 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
ATprotect(&(term195));
term195 = term194;
ATprotect(&(term196));
term196 = (ATerm) ATmakeInt(95);
ATprotect(&(term197));
term197 = term196;
ATprotect(&(term198));
term198 = (ATerm) ATmakeAppl(ATmakeSymbol("print_cons_", 0, ATtrue));
ATprotect(&(term199));
term199 = term198;
ATprotect(&(term200));
term200 = (ATerm) ATmakeAppl(ATmakeSymbol("var_cons_", 0, ATtrue));
ATprotect(&(term201));
term201 = term200;
ATprotect(&(term202));
term202 = (ATerm) ATmakeAppl(ATmakeSymbol("-n", 0, ATtrue));
ATprotect(&(term203));
term203 = term202;
ATprotect(&(term204));
term204 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
ATprotect(&(term205));
term205 = term204;
ATprotect(&(term206));
term206 = (ATerm) ATmakeAppl(sym_Id_1, term205);
ATprotect(&(term207));
term207 = term206;
ATprotect(&(term208));
term208 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term207, term39);
ATprotect(&(term209));
term209 = term208;
ATprotect(&(term210));
term210 = (ATerm) ATmakeAppl(sym_Some_1, term209);
ATprotect(&(term211));
term211 = term210;
ATprotect(&(term212));
term212 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term33, term211);
ATprotect(&(term213));
term213 = term212;
ATprotect(&(term214));
term214 = (ATerm) ATmakeAppl(ATmakeSymbol("StrSL", 0, ATtrue));
ATprotect(&(term215));
term215 = term214;
ATprotect(&(term216));
term216 = (ATerm) ATmakeAppl(sym_TypeId_1, term215);
ATprotect(&(term217));
term217 = term216;
ATprotect(&(term218));
term218 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term217, (ATerm) ATempty);
ATprotect(&(term219));
term219 = term218;
ATprotect(&(term220));
term220 = (ATerm) ATmakeAppl(ATmakeSymbol("sl", 0, ATtrue));
ATprotect(&(term221));
term221 = term220;
ATprotect(&(term222));
term222 = (ATerm) ATmakeAppl(sym_Id_1, term221);
ATprotect(&(term223));
term223 = term222;
ATprotect(&(term224));
term224 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term223, term39);
ATprotect(&(term225));
term225 = term224;
ATprotect(&(term226));
term226 = (ATerm) ATmakeAppl(sym_Some_1, term225);
ATprotect(&(term227));
term227 = term226;
ATprotect(&(term228));
term228 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term219, term227);
ATprotect(&(term229));
term229 = term228;
ATprotect(&(term230));
term230 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term131, (ATerm)ATempty, term149, (ATerm) ATempty);
ATprotect(&(term231));
term231 = term230;
ATprotect(&(term232));
term232 = (ATerm) ATmakeAppl(ATmakeSymbol("was_init", 0, ATtrue));
ATprotect(&(term233));
term233 = term232;
ATprotect(&(term234));
term234 = (ATerm) ATmakeAppl(sym_Id_1, term233);
ATprotect(&(term235));
term235 = term234;
ATprotect(&(term236));
term236 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term235, term39);
ATprotect(&(term237));
term237 = term236;
ATprotect(&(term238));
term238 = (ATerm) ATmakeAppl(sym_AssignInit_1, term159);
ATprotect(&(term239));
term239 = term238;
ATprotect(&(term240));
term240 = (ATerm) ATmakeAppl(sym_DeclInit_2, term237, term239);
ATprotect(&(term241));
term241 = term240;
ATprotect(&(term242));
term242 = (ATerm) ATmakeAppl(ATmakeSymbol("out", 0, ATtrue));
ATprotect(&(term243));
term243 = term242;
ATprotect(&(term244));
term244 = (ATerm) ATmakeAppl(sym_Id_1, term243);
ATprotect(&(term245));
term245 = term244;
ATprotect(&(term246));
term246 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term245, term39);
ATprotect(&(term247));
term247 = term246;
ATprotect(&(term248));
term248 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmake", 0, ATtrue));
ATprotect(&(term249));
term249 = term248;
ATprotect(&(term250));
term250 = (ATerm) ATmakeAppl(sym_Id_1, term249);
ATprotect(&(term251));
term251 = term250;
ATprotect(&(term252));
term252 = (ATerm) ATmakeAppl(ATmakeSymbol("\"FILE(<term>)\"", 0, ATtrue));
ATprotect(&(term253));
term253 = term252;
ATprotect(&(term254));
term254 = (ATerm) ATmakeAppl(ATmakeSymbol("fclose", 0, ATtrue));
ATprotect(&(term255));
term255 = term254;
ATprotect(&(term256));
term256 = (ATerm) ATmakeAppl(sym_Id_1, term255);
ATprotect(&(term257));
term257 = term256;
ATprotect(&(term258));
term258 = (ATerm) ATmakeAppl(ATmakeSymbol("stream", 0, ATtrue));
ATprotect(&(term259));
term259 = term258;
ATprotect(&(term260));
term260 = (ATerm) ATmakeAppl(sym_Id_1, term259);
ATprotect(&(term261));
term261 = term260;
ATprotect(&(term262));
term262 = (ATerm) ATmakeAppl(ATmakeSymbol("\"\\n\"", 0, ATtrue));
ATprotect(&(term263));
term263 = term262;
ATprotect(&(term264));
term264 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
ATprotect(&(term265));
term265 = term264;
ATprotect(&(term266));
term266 = (ATerm) ATmakeAppl(sym_Id_1, term265);
ATprotect(&(term267));
term267 = term266;
ATprotect(&(term268));
term268 = (ATerm) ATmakeAppl(sym_Equal_2, term261, term267);
ATprotect(&(term269));
term269 = term268;
ATprotect(&(term270));
term270 = (ATerm) ATmakeAppl(sym_Return_1, term267);
ATprotect(&(term271));
term271 = term270;
ATprotect(&(term272));
term272 = (ATerm) ATmakeAppl(sym_If_2, term269, term271);
ATprotect(&(term273));
term273 = term272;
ATprotect(&(term274));
term274 = (ATerm) ATmakeAppl(ATmakeSymbol("fopen", 0, ATtrue));
ATprotect(&(term275));
term275 = term274;
ATprotect(&(term276));
term276 = (ATerm) ATmakeAppl(sym_Id_1, term275);
ATprotect(&(term277));
term277 = term276;
ATprotect(&(term278));
term278 = (ATerm) ATmakeAppl(ATmakeSymbol("\"w\"", 0, ATtrue));
ATprotect(&(term279));
term279 = term278;
ATprotect(&(term280));
term280 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetName", 0, ATtrue));
ATprotect(&(term281));
term281 = term280;
ATprotect(&(term282));
term282 = (ATerm) ATmakeAppl(sym_Id_1, term281);
ATprotect(&(term283));
term283 = term282;
ATprotect(&(term284));
term284 = (ATerm) ATmakeAppl(sym_Equal_2, term245, term267);
ATprotect(&(term285));
term285 = term284;
ATprotect(&(term286));
term286 = (ATerm) ATmakeAppl(sym_If_2, term285, term271);
ATprotect(&(term287));
term287 = term286;
ATprotect(&(term288));
term288 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc_new_file_0_0", 0, ATtrue));
ATprotect(&(term289));
term289 = term288;
ATprotect(&(term290));
term290 = (ATerm) ATmakeAppl(sym_Id_1, term289);
ATprotect(&(term291));
term291 = term290;
ATprotect(&(term292));
term292 = (ATerm) ATmakeAppl(ATmakeSymbol("init_stack", 0, ATtrue));
ATprotect(&(term293));
term293 = term292;
ATprotect(&(term294));
term294 = (ATerm) ATmakeAppl(sym_Id_1, term293);
ATprotect(&(term295));
term295 = term294;
ATprotect(&(term296));
term296 = (ATerm) ATmakeAppl(sym_FunCall_2, term295, (ATerm) ATempty);
ATprotect(&(term297));
term297 = term296;
ATprotect(&(term298));
term298 = (ATerm) ATmakeAppl(sym_Stat_1, term297);
ATprotect(&(term299));
term299 = term298;
ATprotect(&(term300));
term300 = (ATerm) ATmakeAppl(sym_Negation_1, term235);
ATprotect(&(term301));
term301 = term300;
ATprotect(&(term302));
term302 = (ATerm) ATmakeAppl(sym_Assign_3, term235, term97, term95);
ATprotect(&(term303));
term303 = term302;
ATprotect(&(term304));
term304 = (ATerm) ATmakeAppl(sym_Stat_1, term303);
ATprotect(&(term305));
term305 = term304;
ATprotect(&(term306));
term306 = (ATerm) ATmakeAppl(ATmakeSymbol("init", 0, ATtrue));
ATprotect(&(term307));
term307 = term306;
ATprotect(&(term308));
term308 = (ATerm) ATmakeAppl(sym_Id_1, term307);
ATprotect(&(term309));
term309 = term308;
ATprotect(&(term310));
term310 = (ATerm) ATmakeAppl(sym_FunCall_2, term309, (ATerm) ATempty);
ATprotect(&(term311));
term311 = term310;
ATprotect(&(term312));
term312 = (ATerm) ATmakeAppl(sym_Stat_1, term311);
ATprotect(&(term313));
term313 = term312;
ATprotect(&(term314));
term314 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
ATprotect(&(term315));
term315 = term314;
ATprotect(&(term316));
term316 = (ATerm) ATmakeAppl(sym_Id_1, term315);
ATprotect(&(term317));
term317 = term316;
ATprotect(&(term318));
term318 = (ATerm) ATmakeAppl(sym_Char_0);
ATprotect(&(term319));
term319 = term318;
ATprotect(&(term320));
term320 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term319, (ATerm) ATempty);
ATprotect(&(term321));
term321 = term320;
ATprotect(&(term322));
term322 = (ATerm) ATmakeAppl(sym_PointerOf_1, (ATerm) ATempty);
ATprotect(&(term323));
term323 = term322;
ATprotect(&(term324));
term324 = (ATerm) ATmakeAppl(ATmakeSymbol("argv", 0, ATtrue));
ATprotect(&(term325));
term325 = term324;
ATprotect(&(term326));
term326 = (ATerm) ATmakeAppl(sym_Id_1, term325);
ATprotect(&(term327));
term327 = term326;
ATprotect(&(term328));
term328 = (ATerm) ATmakeAppl(sym_ArrayDecl_2, term39, term39);
ATprotect(&(term329));
term329 = term328;
ATprotect(&(term330));
term330 = (ATerm) ATmakeAppl(sym_Some_1, term329);
ATprotect(&(term331));
term331 = term330;
ATprotect(&(term332));
term332 = (ATerm) ATmakeAppl(ATmakeSymbol("argc", 0, ATtrue));
ATprotect(&(term333));
term333 = term332;
ATprotect(&(term334));
term334 = (ATerm) ATmakeAppl(sym_Id_1, term333);
ATprotect(&(term335));
term335 = term334;
ATprotect(&(term336));
term336 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term335, term39);
ATprotect(&(term337));
term337 = term336;
ATprotect(&(term338));
term338 = (ATerm) ATmakeAppl(sym_Some_1, term337);
ATprotect(&(term339));
term339 = term338;
ATprotect(&(term340));
term340 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term151, term339);
ATprotect(&(term341));
term341 = term340;
ATprotect(&(term342));
term342 = (ATerm) ATmakeAppl(ATmakeSymbol("bottom", 0, ATtrue));
ATprotect(&(term343));
term343 = term342;
ATprotect(&(term344));
term344 = (ATerm) ATmakeAppl(sym_Id_1, term343);
ATprotect(&(term345));
term345 = term344;
ATprotect(&(term346));
term346 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term345, term39);
ATprotect(&(term347));
term347 = term346;
ATprotect(&(term348));
term348 = (ATerm) ATmakeAppl(ATmakeSymbol("mymain", 0, ATtrue));
ATprotect(&(term349));
term349 = term348;
ATprotect(&(term350));
term350 = (ATerm) ATmakeAppl(sym_Id_1, term349);
ATprotect(&(term351));
term351 = term350;
ATprotect(&(term352));
term352 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinit", 0, ATtrue));
ATprotect(&(term353));
term353 = term352;
ATprotect(&(term354));
term354 = (ATerm) ATmakeAppl(sym_Id_1, term353);
ATprotect(&(term355));
term355 = term354;
ATprotect(&(term356));
term356 = (ATerm) ATmakeAppl(sym_Address_1, term345);
ATprotect(&(term357));
term357 = term356;
ATprotect(&(term358));
term358 = (ATerm) ATmakeAppl(sym_Return_1, term159);
ATprotect(&(term359));
term359 = term358;
ATprotect(&(term360));
term360 = (ATerm) ATmakeAppl(ATmakeSymbol("stdout", 0, ATtrue));
ATprotect(&(term361));
term361 = term360;
ATprotect(&(term362));
term362 = (ATerm) ATmakeAppl(sym_Id_1, term361);
ATprotect(&(term363));
term363 = term362;
ATprotect(&(term364));
term364 = (ATerm) ATmakeAppl(sym_Assign_3, term261, term97, term363);
ATprotect(&(term365));
term365 = term364;
ATprotect(&(term366));
term366 = (ATerm) ATmakeAppl(sym_Stat_1, term365);
ATprotect(&(term367));
term367 = term366;
ATprotect(&(term368));
term368 = (ATerm) ATmakeAppl(sym_Equal_2, term207, term267);
ATprotect(&(term369));
term369 = term368;
ATprotect(&(term370));
term370 = (ATerm) ATmakeAppl(sym_Return_1, term95);
ATprotect(&(term371));
term371 = term370;
ATprotect(&(term372));
term372 = (ATerm) ATmakeAppl(sym_If_2, term369, term371);
ATprotect(&(term373));
term373 = term372;
ATprotect(&(term374));
term374 = (ATerm) ATmakeAppl(sym_Equal_2, term335, term115);
ATprotect(&(term375));
term375 = term374;
ATprotect(&(term376));
term376 = (ATerm) ATmakeAppl(ATmakeSymbol("FILE", 0, ATtrue));
ATprotect(&(term377));
term377 = term376;
ATprotect(&(term378));
term378 = (ATerm) ATmakeAppl(sym_TypeId_1, term377);
ATprotect(&(term379));
term379 = term378;
ATprotect(&(term380));
term380 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term379, (ATerm) ATempty);
ATprotect(&(term381));
term381 = term380;
ATprotect(&(term382));
term382 = (ATerm) ATmakeAppl(ATmakeSymbol("f", 0, ATtrue));
ATprotect(&(term383));
term383 = term382;
ATprotect(&(term384));
term384 = (ATerm) ATmakeAppl(sym_Id_1, term383);
ATprotect(&(term385));
term385 = term384;
ATprotect(&(term386));
term386 = (ATerm) ATmakeAppl(ATmakeSymbol("\"r\"", 0, ATtrue));
ATprotect(&(term387));
term387 = term386;
ATprotect(&(term388));
term388 = (ATerm) ATmakeAppl(sym_ArrayIndex_2, term327, term95);
ATprotect(&(term389));
term389 = term388;
ATprotect(&(term390));
term390 = (ATerm) ATmakeAppl(ATmakeSymbol("ATreadFromFile", 0, ATtrue));
ATprotect(&(term391));
term391 = term390;
ATprotect(&(term392));
term392 = (ATerm) ATmakeAppl(sym_Id_1, term391);
ATprotect(&(term393));
term393 = term392;
ATprotect(&(term394));
term394 = (ATerm) ATmakeAppl(sym_Equal_2, term385, term267);
ATprotect(&(term395));
term395 = term394;
ATprotect(&(term396));
term396 = (ATerm) ATmakeAppl(ATmakeSymbol("perror", 0, ATtrue));
ATprotect(&(term397));
term397 = term396;
ATprotect(&(term398));
term398 = (ATerm) ATmakeAppl(sym_Id_1, term397);
ATprotect(&(term399));
term399 = term398;
ATprotect(&(term400));
term400 = (ATerm) ATmakeAppl(ATmakeSymbol("stdin", 0, ATtrue));
ATprotect(&(term401));
term401 = term400;
ATprotect(&(term402));
term402 = (ATerm) ATmakeAppl(sym_Id_1, term401);
ATprotect(&(term403));
term403 = term402;
ATprotect(&(term404));
term404 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term33, term39);
ATprotect(&(term405));
term405 = term404;
ATprotect(&(term406));
term406 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_BLOB", 0, ATtrue));
ATprotect(&(term407));
term407 = term406;
ATprotect(&(term408));
term408 = (ATerm) ATmakeAppl(sym_Id_1, term407);
ATprotect(&(term409));
term409 = term408;
ATprotect(&(term410));
term410 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetBlobData", 0, ATtrue));
ATprotect(&(term411));
term411 = term410;
ATprotect(&(term412));
term412 = (ATerm) ATmakeAppl(sym_Id_1, term411);
ATprotect(&(term413));
term413 = term412;
ATprotect(&(term414));
term414 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermBlob", 0, ATtrue));
ATprotect(&(term415));
term415 = term414;
ATprotect(&(term416));
term416 = (ATerm) ATmakeAppl(sym_TypeId_1, term415);
ATprotect(&(term417));
term417 = term416;
ATprotect(&(term418));
term418 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term417, (ATerm) ATempty);
ATprotect(&(term419));
term419 = term418;
ATprotect(&(term420));
term420 = (ATerm) ATmakeAppl(sym_TypeName_2, term419, term39);
ATprotect(&(term421));
term421 = term420;
ATprotect(&(term422));
term422 = (ATerm) ATmakeAppl(sym_TypeCast_2, term421, term49);
ATprotect(&(term423));
term423 = term422;
ATprotect(&(term424));
term424 = (ATerm) ATmakeAppl(ATmakeSymbol("print_int", 0, ATtrue));
ATprotect(&(term425));
term425 = term424;
ATprotect(&(term426));
term426 = (ATerm) ATmakeAppl(sym_Id_1, term425);
ATprotect(&(term427));
term427 = term426;
ATprotect(&(term428));
term428 = (ATerm) ATmakeAppl(sym_TypeCast_2, term173, term49);
ATprotect(&(term429));
term429 = term428;
ATprotect(&(term430));
term430 = (ATerm) ATmakeAppl(ATmakeSymbol("AFun", 0, ATtrue));
ATprotect(&(term431));
term431 = term430;
ATprotect(&(term432));
term432 = (ATerm) ATmakeAppl(sym_TypeId_1, term431);
ATprotect(&(term433));
term433 = term432;
ATprotect(&(term434));
term434 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term433, (ATerm) ATempty);
ATprotect(&(term435));
term435 = term434;
ATprotect(&(term436));
term436 = (ATerm) ATmakeAppl(ATmakeSymbol("cons", 0, ATtrue));
ATprotect(&(term437));
term437 = term436;
ATprotect(&(term438));
term438 = (ATerm) ATmakeAppl(sym_Id_1, term437);
ATprotect(&(term439));
term439 = term438;
ATprotect(&(term440));
term440 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term439, term39);
ATprotect(&(term441));
term441 = term440;
ATprotect(&(term442));
term442 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisQuoted", 0, ATtrue));
ATprotect(&(term443));
term443 = term442;
ATprotect(&(term444));
term444 = (ATerm) ATmakeAppl(sym_Id_1, term443);
ATprotect(&(term445));
term445 = term444;
ATprotect(&(term446));
term446 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArity", 0, ATtrue));
ATprotect(&(term447));
term447 = term446;
ATprotect(&(term448));
term448 = (ATerm) ATmakeAppl(sym_Id_1, term447);
ATprotect(&(term449));
term449 = term448;
ATprotect(&(term450));
term450 = (ATerm) ATmakeAppl(ATmakeSymbol("AmbFun", 0, ATtrue));
ATprotect(&(term451));
term451 = term450;
ATprotect(&(term452));
term452 = (ATerm) ATmakeAppl(sym_Id_1, term451);
ATprotect(&(term453));
term453 = term452;
ATprotect(&(term454));
term454 = (ATerm) ATmakeAppl(sym_Equal_2, term439, term453);
ATprotect(&(term455));
term455 = term454;
ATprotect(&(term456));
term456 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
ATprotect(&(term457));
term457 = term456;
ATprotect(&(term458));
term458 = (ATerm) ATmakeAppl(sym_Id_1, term457);
ATprotect(&(term459));
term459 = term458;
ATprotect(&(term460));
term460 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term459, term39);
ATprotect(&(term461));
term461 = term460;
ATprotect(&(term462));
term462 = (ATerm) ATmakeAppl(sym_TypeCast_2, term71, term459);
ATprotect(&(term463));
term463 = term462;
ATprotect(&(term464));
term464 = (ATerm) ATmakeAppl(sym_AssignInit_1, term463);
ATprotect(&(term465));
term465 = term464;
ATprotect(&(term466));
term466 = (ATerm) ATmakeAppl(sym_DeclInit_2, term69, term465);
ATprotect(&(term467));
term467 = term466;
ATprotect(&(term468));
term468 = (ATerm) ATmakeAppl(ATmakeSymbol("elt", 0, ATtrue));
ATprotect(&(term469));
term469 = term468;
ATprotect(&(term470));
term470 = (ATerm) ATmakeAppl(sym_Id_1, term469);
ATprotect(&(term471));
term471 = term470;
ATprotect(&(term472));
term472 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term471, term39);
ATprotect(&(term473));
term473 = term472;
ATprotect(&(term474));
term474 = (ATerm) ATmakeAppl(ATmakeSymbol("\"Unknown constructor: %a\\n\"", 0, ATtrue));
ATprotect(&(term475));
term475 = term474;
ATprotect(&(term476));
term476 = (ATerm) ATmakeAppl(ATmakeSymbol("init_cons", 0, ATtrue));
ATprotect(&(term477));
term477 = term476;
ATprotect(&(term478));
term478 = (ATerm) ATmakeAppl(sym_Id_1, term477);
ATprotect(&(term479));
term479 = term478;
ATprotect(&(term480));
term480 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term133, (ATerm) ATempty);
ATprotect(&(term481));
term481 = term480;
ATprotect(&(term482));
term482 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term481, term39);
ATprotect(&(term483));
term483 = term482;
ATprotect(&(term484));
term484 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term131, (ATerm)ATempty, term433, (ATerm) ATempty);
ATprotect(&(term485));
term485 = term484;
ATprotect(&(term486));
term486 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectAFun", 0, ATtrue));
ATprotect(&(term487));
term487 = term486;
ATprotect(&(term488));
term488 = (ATerm) ATmakeAppl(sym_Id_1, term487);
ATprotect(&(term489));
term489 = term488;
ATprotect(&(term490));
term490 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAFun", 0, ATtrue));
ATprotect(&(term491));
term491 = term490;
ATprotect(&(term492));
term492 = (ATerm) ATmakeAppl(sym_Id_1, term491);
ATprotect(&(term493));
term493 = term492;
ATprotect(&(term494));
term494 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
ATprotect(&(term495));
term495 = term494;
ATprotect(&(term496));
term496 = (ATerm) ATmakeAppl(sym_Id_1, term495);
ATprotect(&(term497));
term497 = term496;
ATprotect(&(term498));
term498 = (ATerm) ATmakeAppl(ATmakeSymbol("Constructor unknown from the grammar: ", 0, ATtrue));
ATprotect(&(term499));
term499 = term498;
ATprotect(&(term500));
term500 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
ATprotect(&(term501));
term501 = term500;
ATprotect(&(term502));
term502 = (ATerm) ATmakeAppl(sym_Stat_1, term501);
ATprotect(&(term503));
term503 = term502;
ATprotect(&(term504));
term504 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
ATprotect(&(term505));
term505 = term504;
ATprotect(&(term506));
term506 = (ATerm) ATmakeAppl(ATmakeSymbol("GetArity", 0, ATtrue));
ATprotect(&(term507));
term507 = term506;
ATprotect(&(term508));
term508 = (ATerm) ATmakeAppl(ATmakeSymbol("c0fa6e3a265989038f0cc1ee8ab18f13", 0, ATtrue));
ATprotect(&(term509));
term509 = term508;
ATprotect(&(term510));
term510 = (ATerm) ATmakeAppl(ATmakeSymbol("GetKind", 0, ATtrue));
ATprotect(&(term511));
term511 = term510;
ATprotect(&(term512));
term512 = (ATerm) ATmakeAppl(ATmakeSymbol("adc69101afa865c102f27778de881234", 0, ATtrue));
ATprotect(&(term513));
term513 = term512;
ATprotect(&(term514));
term514 = (ATerm) ATmakeAppl(ATmakeSymbol("10a5b05597767052cfc0521b35a45396", 0, ATtrue));
ATprotect(&(term515));
term515 = term514;
ATprotect(&(term516));
term516 = (ATerm) ATmakeAppl(ATmakeSymbol("5ff7a760367943731dc636407d689872", 0, ATtrue));
ATprotect(&(term517));
term517 = term516;
ATprotect(&(term518));
term518 = (ATerm) ATmakeAppl(ATmakeSymbol("014e472bb808d8c1cb37bb9e116445a0", 0, ATtrue));
ATprotect(&(term519));
term519 = term518;
ATprotect(&(term520));
term520 = (ATerm) ATmakeAppl(ATmakeSymbol("d592b2a8f86106b55aa9604b0f1c11f4", 0, ATtrue));
ATprotect(&(term521));
term521 = term520;
ATprotect(&(term522));
term522 = (ATerm) ATmakeAppl(ATmakeSymbol("b18f1d3b31c66f838d000eca6781c23e", 0, ATtrue));
ATprotect(&(term523));
term523 = term522;
ATprotect(&(term524));
term524 = (ATerm) ATmakeAppl(ATmakeSymbol("as: ", 0, ATtrue));
ATprotect(&(term525));
term525 = term524;
ATprotect(&(term526));
term526 = (ATerm) ATmakeAppl(ATmakeSymbol("Registered: ", 0, ATtrue));
ATprotect(&(term527));
term527 = term526;
ATprotect(&(term528));
term528 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-sdf-definition", 0, ATtrue));
ATprotect(&(term529));
term529 = term528;
ATprotect(&(term530));
term530 = (ATerm) ATmakeAppl(ATmakeSymbol("-p pptable    Use the pp-table.", 0, ATtrue));
ATprotect(&(term531));
term531 = term530;
ATprotect(&(term532));
term532 = (ATerm) ATmakeAppl(ATmakeSymbol("-n name       Function name to generate.", 0, ATtrue));
ATprotect(&(term533));
term533 = term532;
ATprotect(&(term534));
term534 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
ATprotect(&(term535));
term535 = term534;
ATprotect(&(term536));
term536 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-c", 0, ATtrue));
ATprotect(&(term537));
term537 = term536;
ATprotect(&(term538));
term538 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term539));
term539 = term538;
ATprotect(&(term540));
term540 = (ATerm) ATmakeAppl(ATmakeSymbol("pptools.c", 0, ATtrue));
ATprotect(&(term541));
term541 = term540;
ATprotect(&(term542));
term542 = (ATerm) ATmakeAppl(ATmakeSymbol("list", 0, ATtrue));
ATprotect(&(term543));
term543 = term542;
ATprotect(&(term544));
term544 = (ATerm) ATmakeAppl(ATmakeSymbol("list-sep", 0, ATtrue));
ATprotect(&(term545));
term545 = term544;
ATprotect(&(term546));
term546 = (ATerm) ATmakeAppl(ATmakeSymbol("list-sep2", 0, ATtrue));
ATprotect(&(term547));
term547 = term546;
ATprotect(&(term548));
term548 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
ATprotect(&(term549));
term549 = term548;
ATprotect(&(term550));
term550 = (ATerm) ATmakeAppl(ATmakeSymbol("seq", 0, ATtrue));
ATprotect(&(term551));
term551 = term550;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm _2_0 (StrSL sl, StrCL a_115, StrCL b_115, ATerm t);
ATerm foldr_2_0 (StrSL sl, StrCL e_107, StrCL f_107, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm fetch_elem_1_0 (StrSL sl, StrCL u_105, ATerm t);
ATerm length_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL n_105, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL t_104, ATerm t);
ATerm dr_set_rule_0_3 (StrSL sl, ATerm t_88, ATerm u_88, ATerm w_88, ATerm t);
ATerm dr_lookup_rule_0_2 (StrSL sl, ATerm g_88, ATerm h_88, ATerm t);
ATerm collect_1_0 (StrSL sl, StrCL z_84, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL v_82, ATerm t);
ATerm oncetd_1_0 (StrSL sl, StrCL r_75, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL g_74, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL k_71, ATerm t);
ATerm string_to_int_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm dec_0_0 (StrSL sl, ATerm t);
ATerm inc_0_0 (StrSL sl, ATerm t);
ATerm is_alphanum_0_0 (StrSL sl, ATerm t);
ATerm double_quote_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm string_as_chars_1_0 (StrSL sl, StrCL t_67, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL c_61, StrCL d_61, StrCL e_61, ATerm t);
ATerm if_verbose2_1_0 (StrSL sl, StrCL v_59, ATerm t);
ATerm copy_file_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_2_0 (StrSL sl, StrCL m_53, StrCL p_53, ATerm t);
ATerm xtc_ensure_file_0_0 (StrSL sl, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_1_0 (StrSL sl, StrCL f_52, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
ATerm xtc_cat_0_0 (StrSL sl, ATerm t);
ATerm xtc_new_file_0_0 (StrSL sl, ATerm t);
ATerm aux_GetKind_0_2 (StrSL sl, ATerm c_52, ATerm d_52, ATerm t);
static ATerm lifted83 (StrSL sl, ATerm t);
ATerm GetKind_0_0 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
ATerm GetArity_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted79 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
ATerm pp2c_0_0 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
ATerm pp2c_options_0_0 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
ATerm simplify_path_0_0 (StrSL sl, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
ATerm load_grammar_0_0 (StrSL sl, ATerm t);
static ATerm w_27 (StrSL sl, ATerm t);
ATerm num_params_0_0 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
ATerm debug_register_arg_0_0 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
ATerm register_arg_0_0 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
ATerm register_prod_0_0 (StrSL sl, ATerm t);
ATerm flatalt_0_0 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm pptable_to_c_0_0 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
ATerm GetInitStm_0_0 (StrSL sl, ATerm t);
ATerm GetVar_0_0 (StrSL sl, ATerm t);
ATerm GetInitFun_0_0 (StrSL sl, ATerm t);
ATerm GetSwitchStm_0_0 (StrSL sl, ATerm t);
ATerm GetChoiceFun_0_0 (StrSL sl, ATerm t);
ATerm fun_decl_0_0 (StrSL sl, ATerm t);
ATerm choice_decl_0_0 (StrSL sl, ATerm t);
ATerm main_fun_0_0 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
ATerm cons_var_0_0 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
ATerm print_fun_name_0_0 (StrSL sl, ATerm t);
ATerm AltStm_0_0 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
ATerm entry_to_c_0_0 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm box_to_c_0_1 (StrSL sl, ATerm b_52, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
ATerm boxes_to_c_0_1 (StrSL sl, ATerm o_17, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm parse_s_opts_0_0 (StrSL sl, ATerm t);
ATerm aux_GetKind_0_2 (StrSL sl, ATerm c_52, ATerm d_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aux_GetKind_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm122 = t;
ATerm a_52 = NULL;
if(!((ATgetSymbol(t) == ATmakeSymbol("adc69101afa865c102f27778de881234", 0, ATtrue))))
goto label60 ;
a_52 = t;
t = d_52;
t = a_52;
t = term543;
goto label59 ;
label60 :
t = trm122;
{
ATerm trm123 = t;
ATerm x_51 = NULL;
if(!((ATgetSymbol(t) == ATmakeSymbol("10a5b05597767052cfc0521b35a45396", 0, ATtrue))))
goto label61 ;
x_51 = t;
t = d_52;
t = x_51;
t = term545;
goto label59 ;
label61 :
t = trm123;
{
ATerm trm124 = t;
ATerm u_51 = NULL;
if(!((ATgetSymbol(t) == ATmakeSymbol("5ff7a760367943731dc636407d689872", 0, ATtrue))))
goto label62 ;
u_51 = t;
t = d_52;
t = u_51;
t = term547;
goto label59 ;
label62 :
t = trm124;
{
ATerm trm125 = t;
ATerm r_51 = NULL;
if(!((ATgetSymbol(t) == ATmakeSymbol("014e472bb808d8c1cb37bb9e116445a0", 0, ATtrue))))
goto label63 ;
r_51 = t;
t = d_52;
t = r_51;
t = term549;
goto label59 ;
label63 :
t = trm125;
{
ATerm trm126 = t;
ATerm o_51 = NULL;
if(!((ATgetSymbol(t) == ATmakeSymbol("d592b2a8f86106b55aa9604b0f1c11f4", 0, ATtrue))))
goto label64 ;
o_51 = t;
t = d_52;
t = o_51;
t = term505;
goto label59 ;
label64 :
t = trm126;
{
ATerm l_51 = NULL;
if(!((ATgetSymbol(t) == ATmakeSymbol("b18f1d3b31c66f838d000eca6781c23e", 0, ATtrue))))
goto fail84 ;
l_51 = t;
t = d_52;
t = l_51;
t = term551;
goto label59 ;
}
}
}
}
}
label59 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
ATerm GetKind_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "GetKind_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL;
sl_init_var(0, d_51);
sl_init_var(1, e_51);
{
struct str_closure x_182 = { &(lifted83) , &(frame) };
StrCL lifted83_cl = &(x_182);
if((e_51 == NULL))
{
e_51 = t;
}
else
if((e_51 != t))
goto fail82 ;
if((d_51 == NULL))
{
d_51 = t;
}
else
if((d_51 != t))
goto fail82 ;
g_51 = t;
i_51 = t;
t = term511;
h_51 = t;
t = i_51;
if((e_51 == NULL))
goto fail82 ;
else
{
t = dr_lookup_rule_0_2(sl, h_51, e_51, t);
if((t == NULL))
goto fail82 ;
}
f_51 = t;
t = g_51;
t = f_51;
t = fetch_elem_1_0(sl, lifted83_cl, t);
if((t == NULL))
goto fail82 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted83 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted83";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail83 ;
else
{
t = aux_GetKind_0_2(sl_up(sl), sl_readvar(0, sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail83 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
ATerm GetArity_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "GetArity_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
sl_init_var(0, s_46);
sl_init_var(1, t_46);
{
struct str_closure w_182 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(w_182);
if((t_46 == NULL))
{
t_46 = t;
}
else
if((t_46 != t))
goto fail80 ;
if((s_46 == NULL))
{
s_46 = t;
}
else
if((s_46 != t))
goto fail80 ;
v_46 = t;
x_46 = t;
t = term507;
w_46 = t;
t = x_46;
if((t_46 == NULL))
goto fail80 ;
else
{
t = dr_lookup_rule_0_2(sl, w_46, t_46, t);
if((t == NULL))
goto fail80 ;
}
u_46 = t;
t = v_46;
t = u_46;
t = fetch_elem_1_0(sl, lifted82_cl, t);
if((t == NULL))
goto fail80 ;
}
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
ATerm g_179 = NULL,h_179 = NULL,k_179 = NULL,l_179 = NULL,i_179 = NULL,j_179 = NULL;
k_179 = t;
if((sl_readvar(0, sl) == NULL))
goto fail81 ;
else
{
t = sl_readvar(0, sl);
}
g_179 = t;
t = k_179;
l_179 = t;
if((sl_readvar(1, sl) == NULL))
goto fail81 ;
else
{
t = sl_readvar(1, sl);
}
h_179 = t;
t = l_179;
if(match_cons(t, sym__2))
{
ATerm trm121 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm121) == ATmakeSymbol("c0fa6e3a265989038f0cc1ee8ab18f13", 0, ATtrue))))
goto fail81 ;
i_179 = ATgetArgument(t, 1);
}
else
goto fail81 ;
j_179 = t;
t = h_179;
t = j_179;
t = i_179;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = pp2c_0_0(sl, t);
if((t == NULL))
goto fail79 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp2c_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp2c_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm u_28 = NULL;
sl_init_var(0, u_28);
{
struct str_closure u_182 = { &(pp2c_options_0_0) , sl };
StrCL lifted77_cl = &(u_182);
struct str_closure v_182 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(v_182);
t = xtc_io_wrap_2_0(sl, lifted77_cl, lifted78_cl, t);
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
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_28 = NULL,w_28 = NULL,y_28 = NULL,x_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
t = xtc_ensure_file_0_0(sl_up(sl), t);
if((t == NULL))
goto fail75 ;
{
struct str_closure s_182 = { &(lifted79) , &(frame) };
StrCL lifted79_cl = &(s_182);
t = try_1_0(sl_up(sl), lifted79_cl, t);
if((t == NULL))
goto fail75 ;
t = read_from_0_0(sl_up(sl), t);
if((t == NULL))
goto fail75 ;
t = pptable_to_c_0_0(sl_up(sl), t);
if((t == NULL))
goto fail75 ;
t = write_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail75 ;
{
struct str_closure t_182 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(t_182);
t = xtc_transform_1_0(sl_up(sl), lifted81_cl, t);
if((t == NULL))
goto fail75 ;
v_28 = t;
t = term539;
t = xtc_new_file_0_0(sl_up(sl), t);
if((t == NULL))
goto fail75 ;
y_28 = t;
t = term541;
t = xtc_find_0_0(sl_up(sl), t);
if((t == NULL))
goto fail75 ;
w_28 = t;
t = y_28;
z_28 = t;
x_28 = t;
t = (ATerm) ATmakeAppl(sym__2, w_28, x_28);
t = copy_file_0_0(sl_up(sl), t);
if((t == NULL))
goto fail75 ;
b_29 = t;
a_29 = t;
t = (ATerm) ATmakeAppl(sym_FILE_1, a_29);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail75 ;
t = v_28;
d_29 = t;
c_29 = t;
if((sl_readvar(0, sl) == NULL))
goto fail75 ;
else
{
t = (ATerm) ATinsert(ATinsert(ATempty, c_29), sl_readvar(0, sl));
}
t = xtc_cat_0_0(sl_up(sl), t);
if((t == NULL))
goto fail75 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term537;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted79 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted79";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_182 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(r_182);
t = xtc_transform_1_0(sl_up(sl_up(sl)), lifted80_cl, t);
if((t == NULL))
goto fail76 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term535;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp2c_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp2c_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm120 = t;
struct str_closure l_182 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(l_182);
struct str_closure m_182 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(m_182);
struct str_closure n_182 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(n_182);
t = ArgOption_3_0(sl, lifted71_cl, lifted72_cl, lifted73_cl, t);
if((t == NULL))
goto label58 ;
goto label57 ;
label58 :
t = trm120;
{
struct str_closure o_182 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(o_182);
struct str_closure p_182 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(p_182);
struct str_closure q_182 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(q_182);
t = ArgOption_3_0(sl, lifted74_cl, lifted75_cl, lifted76_cl, t);
if((t == NULL))
goto fail67 ;
else
goto label57 ;
}
label57 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term533;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_28 = NULL,t_28 = NULL;
t_28 = t;
s_28 = t;
t = (ATerm) ATmakeAppl(sym__2, term203, s_28);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail72 ;
t = (ATerm) ATempty;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-n", 0, ATtrue))))
goto fail71 ;
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
t = term531;
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
t = load_grammar_0_0(sl_up(sl), t);
if((t == NULL))
goto fail69 ;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("-p", 0, ATtrue))))
goto fail68 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
ATerm simplify_path_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "simplify_path_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm116 = t;
ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
if(match_cons(t, sym_PP_Entry_2))
{
ATerm trm117 = ATgetArgument(t, 0);
if(match_cons(trm117, sym_Path1_1))
{
p_28 = ATgetArgument(trm117, 0);
}
else
goto label56 ;
o_28 = ATgetArgument(t, 1);
}
else
goto label56 ;
t = p_28;
r_28 = t;
q_28 = t;
t = (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym__2, q_28, (ATerm) ATempty), o_28);
goto label55 ;
label56 :
t = trm116;
{
ATerm i_28 = NULL,j_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
if(match_cons(t, sym_PP_Entry_2))
{
ATerm trm118 = ATgetArgument(t, 0);
if(match_cons(trm118, sym_Path_2))
{
i_28 = ATgetArgument(trm118, 0);
l_28 = ATgetArgument(trm118, 1);
}
else
goto fail65 ;
j_28 = ATgetArgument(t, 1);
}
else
goto fail65 ;
t = l_28;
{
struct str_closure k_182 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(k_182);
t = map_1_0(sl, lifted70_cl, t);
if((t == NULL))
goto fail65 ;
t = reverse_0_0(sl, t);
if((t == NULL))
goto fail65 ;
n_28 = t;
m_28 = t;
t = (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym__2, i_28, m_28), j_28);
goto label55 ;
}
}
label55 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_28 = NULL;
if(match_cons(t, sym_selector_2))
{
k_28 = ATgetArgument(t, 0);
{
ATerm trm119 = ATgetArgument(t, 1);
}
}
else
goto fail66 ;
t = k_28;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
ATerm load_grammar_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "load_grammar_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_28 = NULL,g_28 = NULL;
struct str_closure g_182 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(g_182);
g_28 = t;
f_28 = t;
t = (ATerm) ATmakeAppl(sym_FILE_1, f_28);
{
struct str_closure i_182 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(i_182);
t = try_1_0(sl, lifted65_cl, t);
if((t == NULL))
goto fail60 ;
t = read_from_0_0(sl, t);
if((t == NULL))
goto fail60 ;
{
struct str_closure j_182 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(j_182);
t = collect_1_0(sl, lifted67_cl, t);
if((t == NULL))
goto fail60 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail60 ;
t = map_1_0(sl, lifted68_cl, t);
if((t == NULL))
goto fail60 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted67 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted67";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_28 = NULL;
if(match_cons(t, sym_context_free_syntax_1))
{
h_28 = ATgetArgument(t, 0);
}
else
goto fail64 ;
t = h_28;
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
struct str_closure h_182 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(h_182);
t = xtc_transform_1_0(sl_up(sl), lifted66_cl, t);
if((t == NULL))
goto fail62 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term529;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_182 = { &(register_prod_0_0) , sl_up(sl) };
StrCL lifted69_cl = &(f_182);
t = try_1_0(sl_up(sl), lifted69_cl, t);
if((t == NULL))
goto fail61 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
ATerm num_params_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "num_params_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_27 = NULL,y_27 = NULL;
y_27 = t;
x_27 = t;
t = (ATerm) ATmakeAppl(sym__2, term143, x_27);
t = w_27(&(frame), t);
if((t == NULL))
goto fail58 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm w_27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "w_27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm111 = t;
if(match_cons(t, sym__2))
{
ATerm trm112 = ATgetArgument(t, 0);
ATerm trm113 = ATgetArgument(t, 1);
if(!(((ATgetType(trm113) == AT_LIST) && ATisEmpty(trm113))))
goto label54 ;
}
else
goto label54 ;
t = (ATerm) ATempty;
goto label53 ;
label54 :
t = trm111;
{
ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,z_27 = NULL,b_28 = NULL,a_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
if(match_cons(t, sym__2))
{
u_27 = ATgetArgument(t, 0);
{
ATerm trm114 = ATgetArgument(t, 1);
if(((ATgetType(trm114) == AT_LIST) && !(ATisEmpty(trm114))))
{
t_27 = ATgetFirst((ATermList) trm114);
v_27 = (ATerm) ATgetNext((ATermList) trm114);
}
else
goto fail59 ;
}
}
else
goto fail59 ;
b_28 = t;
t = u_27;
t = int_to_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail59 ;
z_27 = t;
t = b_28;
c_28 = t;
e_28 = t;
t = u_27;
t = inc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail59 ;
d_28 = t;
t = e_28;
t = (ATerm) ATmakeAppl(sym__2, d_28, v_27);
t = w_27(sl, t);
if((t == NULL))
goto fail59 ;
a_28 = t;
t = c_28;
{
ATerm trm115;
trm115 = CheckATermList(a_28);
if((trm115 == NULL))
goto fail59 ;
t = (ATerm) ATinsert((ATermList)trm115, (ATerm) ATmakeAppl(sym__2, z_27, t_27));
goto label53 ;
}
}
label53 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
ATerm debug_register_arg_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "debug_register_arg_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm r_27 = NULL,s_27 = NULL;
sl_init_var(0, r_27);
if((r_27 == NULL))
{
r_27 = t;
}
else
if((r_27 != t))
goto fail54 ;
s_27 = t;
{
struct str_closure e_182 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(e_182);
t = if_verbose2_1_0(sl, lifted62_cl, t);
if((t == NULL))
goto fail54 ;
t = s_27;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_182 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(c_182);
if((sl_readvar(0, sl) == NULL))
goto fail55 ;
else
{
t = sl_readvar(0, sl);
}
{
struct str_closure d_182 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(d_182);
t = debug_1_0(sl_up(sl), lifted63_cl, t);
if((t == NULL))
goto fail55 ;
t = GetKind_0_0(sl_up(sl), t);
if((t == NULL))
goto fail55 ;
t = debug_1_0(sl_up(sl), lifted64_cl, t);
if((t == NULL))
goto fail55 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term527;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term525;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
ATerm register_arg_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "register_arg_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(4);
{
ATerm trm81 = t;
ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
if(match_cons(t, sym__2))
{
o_27 = ATgetArgument(t, 0);
{
ATerm trm82 = ATgetArgument(t, 1);
if(match_cons(trm82, sym_iter_star_sep_2))
{
p_27 = ATgetArgument(trm82, 0);
q_27 = ATgetArgument(trm82, 1);
}
else
goto label44 ;
}
}
else
goto label44 ;
t = (ATerm) ATmakeAppl(sym__2, o_27, (ATerm) ATmakeAppl(sym_iter_sep_2, p_27, q_27));
t = register_arg_0_0(sl, t);
if((t == NULL))
goto label44 ;
goto label43 ;
label44 :
t = trm81;
{
ATerm trm83 = t;
ATerm m_27 = NULL,n_27 = NULL;
if(match_cons(t, sym__2))
{
m_27 = ATgetArgument(t, 0);
{
ATerm trm84 = ATgetArgument(t, 1);
if(match_cons(trm84, sym_iter_star_1))
{
n_27 = ATgetArgument(trm84, 0);
}
else
goto label45 ;
}
}
else
goto label45 ;
t = (ATerm) ATmakeAppl(sym__2, m_27, (ATerm) ATmakeAppl(sym_iter_1, n_27));
t = register_arg_0_0(sl, t);
if((t == NULL))
goto label45 ;
goto label43 ;
label45 :
t = trm83;
{
ATerm trm85 = t;
ATerm b_27 = NULL,c_27 = NULL,e_27 = NULL,f_27 = NULL,d_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
if(match_cons(t, sym__2))
{
c_27 = ATgetArgument(t, 0);
{
ATerm trm86 = ATgetArgument(t, 1);
if(match_cons(trm86, sym_iter_1))
{
b_27 = ATgetArgument(trm86, 0);
}
else
goto label46 ;
}
}
else
goto label46 ;
f_27 = t;
t = c_27;
{
struct str_closure h_181 = { &(_Id) , sl };
StrCL lifted41_cl = &(h_181);
struct str_closure i_181 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(i_181);
t = _2_0(sl, lifted41_cl, lifted42_cl, t);
if((t == NULL))
goto label46 ;
e_27 = t;
t = f_27;
t = (ATerm) ATmakeAppl(sym__2, e_27, b_27);
{
struct str_closure j_181 = { &(register_arg_0_0) , sl };
StrCL lifted43_cl = &(j_181);
t = try_1_0(sl, lifted43_cl, t);
if((t == NULL))
goto label46 ;
d_27 = t;
k_27 = t;
t = term511;
i_27 = t;
t = k_27;
l_27 = t;
t = term513;
j_27 = t;
t = l_27;
t = dr_set_rule_0_3(sl, i_27, c_27, j_27, t);
if((t == NULL))
goto label46 ;
t = d_27;
t = c_27;
t = debug_register_arg_0_0(sl, t);
if((t == NULL))
goto label46 ;
}
}
goto label43 ;
label46 :
t = trm85;
{
ATerm trm88 = t;
ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,s_26 = NULL,t_26 = NULL,r_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
if(match_cons(t, sym__2))
{
q_26 = ATgetArgument(t, 0);
{
ATerm trm89 = ATgetArgument(t, 1);
if(match_cons(trm89, sym_iter_sep_2))
{
p_26 = ATgetArgument(trm89, 0);
o_26 = ATgetArgument(trm89, 1);
}
else
goto label47 ;
}
}
else
goto label47 ;
t = o_26;
if(match_cons(t, sym_lit_1))
{
ATerm trm90 = ATgetArgument(t, 0);
}
else
goto label47 ;
t_26 = t;
t = q_26;
{
struct str_closure k_181 = { &(_Id) , sl };
StrCL lifted44_cl = &(k_181);
struct str_closure l_181 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(l_181);
t = _2_0(sl, lifted44_cl, lifted45_cl, t);
if((t == NULL))
goto label47 ;
s_26 = t;
t = t_26;
t = (ATerm) ATmakeAppl(sym__2, s_26, p_26);
{
struct str_closure m_181 = { &(register_arg_0_0) , sl };
StrCL lifted46_cl = &(m_181);
t = try_1_0(sl, lifted46_cl, t);
if((t == NULL))
goto label47 ;
r_26 = t;
y_26 = t;
t = term511;
w_26 = t;
t = y_26;
z_26 = t;
t = term515;
x_26 = t;
t = z_26;
t = dr_set_rule_0_3(sl, w_26, q_26, x_26, t);
if((t == NULL))
goto label47 ;
t = r_26;
t = q_26;
t = debug_register_arg_0_0(sl, t);
if((t == NULL))
goto label47 ;
}
}
goto label43 ;
label47 :
t = trm88;
{
ATerm trm92 = t;
ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,b_26 = NULL,c_26 = NULL,f_26 = NULL,g_26 = NULL,a_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
if(match_cons(t, sym__2))
{
z_25 = ATgetArgument(t, 0);
{
ATerm trm93 = ATgetArgument(t, 1);
if(match_cons(trm93, sym_iter_sep_2))
{
x_25 = ATgetArgument(trm93, 0);
y_25 = ATgetArgument(trm93, 1);
}
else
goto label48 ;
}
}
else
goto label48 ;
t = y_25;
{
ATerm trm94 = t;
if(match_cons(t, sym_lit_1))
{
ATerm trm95 = ATgetArgument(t, 0);
}
else
goto label50 ;
goto label48 ;
label50 :
t = trm94;
goto label49 ;
label49 :
;
c_26 = t;
t = z_25;
{
struct str_closure n_181 = { &(_Id) , sl };
StrCL lifted47_cl = &(n_181);
struct str_closure o_181 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(o_181);
t = _2_0(sl, lifted47_cl, lifted48_cl, t);
if((t == NULL))
goto label48 ;
b_26 = t;
t = c_26;
t = (ATerm) ATmakeAppl(sym__2, b_26, x_25);
{
struct str_closure p_181 = { &(register_arg_0_0) , sl };
StrCL lifted49_cl = &(p_181);
t = try_1_0(sl, lifted49_cl, t);
if((t == NULL))
goto label48 ;
g_26 = t;
t = z_25;
{
struct str_closure q_181 = { &(_Id) , sl };
StrCL lifted50_cl = &(q_181);
struct str_closure r_181 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(r_181);
t = _2_0(sl, lifted50_cl, lifted51_cl, t);
if((t == NULL))
goto label48 ;
f_26 = t;
t = g_26;
t = (ATerm) ATmakeAppl(sym__2, f_26, y_25);
{
struct str_closure s_181 = { &(register_arg_0_0) , sl };
StrCL lifted52_cl = &(s_181);
t = try_1_0(sl, lifted52_cl, t);
if((t == NULL))
goto label48 ;
a_26 = t;
l_26 = t;
t = term511;
j_26 = t;
t = l_26;
m_26 = t;
t = term517;
k_26 = t;
t = m_26;
t = dr_set_rule_0_3(sl, j_26, z_25, k_26, t);
if((t == NULL))
goto label48 ;
t = a_26;
t = z_25;
t = debug_register_arg_0_0(sl, t);
if((t == NULL))
goto label48 ;
}
}
}
}
}
goto label43 ;
label48 :
t = trm92;
{
ATerm trm98 = t;
ATerm l_25 = NULL,m_25 = NULL,o_25 = NULL,p_25 = NULL,n_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
if(match_cons(t, sym__2))
{
m_25 = ATgetArgument(t, 0);
{
ATerm trm99 = ATgetArgument(t, 1);
if(match_cons(trm99, sym_opt_1))
{
l_25 = ATgetArgument(trm99, 0);
}
else
goto label51 ;
}
}
else
goto label51 ;
p_25 = t;
t = m_25;
{
struct str_closure t_181 = { &(_Id) , sl };
StrCL lifted53_cl = &(t_181);
struct str_closure u_181 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(u_181);
t = _2_0(sl, lifted53_cl, lifted54_cl, t);
if((t == NULL))
goto label51 ;
o_25 = t;
t = p_25;
t = (ATerm) ATmakeAppl(sym__2, o_25, l_25);
{
struct str_closure v_181 = { &(register_arg_0_0) , sl };
StrCL lifted55_cl = &(v_181);
t = try_1_0(sl, lifted55_cl, t);
if((t == NULL))
goto label51 ;
n_25 = t;
u_25 = t;
t = term511;
s_25 = t;
t = u_25;
v_25 = t;
t = term519;
t_25 = t;
t = v_25;
t = dr_set_rule_0_3(sl, s_25, m_25, t_25, t);
if((t == NULL))
goto label51 ;
t = n_25;
t = m_25;
t = debug_register_arg_0_0(sl, t);
if((t == NULL))
goto label51 ;
}
}
goto label43 ;
label51 :
t = trm98;
{
ATerm trm101 = t;
ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
sl_init_var(0, a_25);
sl_init_var(1, b_25);
if(match_cons(t, sym__2))
{
ATerm trm102 = ATgetArgument(t, 0);
c_25 = trm102;
if(match_cons(trm102, sym__2))
{
if((a_25 == NULL))
{
a_25 = ATgetArgument(trm102, 0);
}
else
if((a_25 != ATgetArgument(trm102, 0)))
goto label52 ;
if((b_25 == NULL))
{
b_25 = ATgetArgument(trm102, 1);
}
else
if((b_25 != ATgetArgument(trm102, 1)))
goto label52 ;
}
else
goto label52 ;
{
ATerm trm103 = ATgetArgument(t, 1);
ATerm trm104,trm105;
trm104 = SSL_get_constructor(trm103);
trm105 = SSL_get_arguments(trm103);
if(!((ATgetSymbol(trm104) == ATmakeSymbol("alt", 0, ATtrue))))
goto label52 ;
z_24 = trm105;
}
}
else
goto label52 ;
t = z_24;
t = num_params_0_0(sl, t);
if((t == NULL))
goto label52 ;
{
struct str_closure w_181 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(w_181);
t = map_1_0(sl, lifted56_cl, t);
if((t == NULL))
goto label52 ;
{
struct str_closure y_181 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(y_181);
t = map_1_0(sl, lifted57_cl, t);
if((t == NULL))
goto label52 ;
f_25 = t;
i_25 = t;
t = term511;
g_25 = t;
t = i_25;
j_25 = t;
t = term521;
h_25 = t;
t = j_25;
t = dr_set_rule_0_3(sl, g_25, c_25, h_25, t);
if((t == NULL))
goto label52 ;
t = f_25;
t = c_25;
t = debug_register_arg_0_0(sl, t);
if((t == NULL))
goto label52 ;
}
}
goto label43 ;
label52 :
t = trm101;
{
ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
sl_init_var(2, o_24);
sl_init_var(3, p_24);
if(match_cons(t, sym__2))
{
ATerm trm107 = ATgetArgument(t, 0);
q_24 = trm107;
if(match_cons(trm107, sym__2))
{
if((o_24 == NULL))
{
o_24 = ATgetArgument(trm107, 0);
}
else
if((o_24 != ATgetArgument(trm107, 0)))
goto fail44 ;
if((p_24 == NULL))
{
p_24 = ATgetArgument(trm107, 1);
}
else
if((p_24 != ATgetArgument(trm107, 1)))
goto fail44 ;
}
else
goto fail44 ;
{
ATerm trm108 = ATgetArgument(t, 1);
if(match_cons(trm108, sym_seq_2))
{
m_24 = ATgetArgument(trm108, 0);
n_24 = ATgetArgument(trm108, 1);
}
else
goto fail44 ;
}
}
else
goto fail44 ;
{
ATerm trm109;
trm109 = CheckATermList(n_24);
if((trm109 == NULL))
goto fail44 ;
t = (ATerm) ATinsert((ATermList)trm109, m_24);
t = num_params_0_0(sl, t);
if((t == NULL))
goto fail44 ;
{
struct str_closure z_181 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(z_181);
t = map_1_0(sl, lifted59_cl, t);
if((t == NULL))
goto fail44 ;
{
struct str_closure b_182 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(b_182);
t = map_1_0(sl, lifted60_cl, t);
if((t == NULL))
goto fail44 ;
t_24 = t;
w_24 = t;
t = term511;
u_24 = t;
t = w_24;
x_24 = t;
t = term523;
v_24 = t;
t = x_24;
t = dr_set_rule_0_3(sl, u_24, q_24, v_24, t);
if((t == NULL))
goto fail44 ;
t = t_24;
t = q_24;
t = debug_register_arg_0_0(sl, t);
if((t == NULL))
goto fail44 ;
else
goto label43 ;
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
label43 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_182 = { &(register_arg_0_0) , sl_up(sl) };
StrCL lifted61_cl = &(a_182);
t = try_1_0(sl_up(sl), lifted61_cl, t);
if((t == NULL))
goto fail53 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_24 = NULL,s_24 = NULL;
if(match_cons(t, sym__2))
{
r_24 = ATgetArgument(t, 0);
s_24 = ATgetArgument(t, 1);
}
else
goto fail52 ;
if(((sl_readvar(2, sl) == NULL) || (sl_readvar(3, sl) == NULL)))
goto fail52 ;
else
{
ATerm trm110;
trm110 = CheckATermList(sl_readvar(3, sl));
if((trm110 == NULL))
goto fail52 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, sl_readvar(2, sl), (ATerm) ATinsert((ATermList)trm110, r_24)), s_24);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_181 = { &(register_arg_0_0) , sl_up(sl) };
StrCL lifted58_cl = &(x_181);
t = try_1_0(sl_up(sl), lifted58_cl, t);
if((t == NULL))
goto fail51 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_25 = NULL,e_25 = NULL;
if(match_cons(t, sym__2))
{
d_25 = ATgetArgument(t, 0);
e_25 = ATgetArgument(t, 1);
}
else
goto fail50 ;
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail50 ;
else
{
ATerm trm106;
trm106 = CheckATermList(sl_readvar(1, sl));
if((trm106 == NULL))
goto fail50 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, sl_readvar(0, sl), (ATerm) ATinsert((ATermList)trm106, d_25)), e_25);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_25 = NULL,r_25 = NULL;
r_25 = t;
q_25 = t;
{
ATerm trm100;
trm100 = CheckATermList(q_25);
if((trm100 == NULL))
goto fail49 ;
t = (ATerm) ATinsert((ATermList)trm100, term3);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_26 = NULL,i_26 = NULL;
i_26 = t;
h_26 = t;
{
ATerm trm97;
trm97 = CheckATermList(h_26);
if((trm97 == NULL))
goto fail48 ;
t = (ATerm) ATinsert((ATermList)trm97, term113);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_26 = NULL,e_26 = NULL;
e_26 = t;
d_26 = t;
{
ATerm trm96;
trm96 = CheckATermList(d_26);
if((trm96 == NULL))
goto fail47 ;
t = (ATerm) ATinsert((ATermList)trm96, term3);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_26 = NULL,v_26 = NULL;
v_26 = t;
u_26 = t;
{
ATerm trm91;
trm91 = CheckATermList(u_26);
if((trm91 == NULL))
goto fail46 ;
t = (ATerm) ATinsert((ATermList)trm91, term3);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_27 = NULL,h_27 = NULL;
h_27 = t;
g_27 = t;
{
ATerm trm87;
trm87 = CheckATermList(g_27);
if((trm87 == NULL))
goto fail45 ;
t = (ATerm) ATinsert((ATermList)trm87, term3);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
ATerm register_prod_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "register_prod_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,d_24 = NULL,e_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
sl_init_var(0, b_24);
{
struct str_closure y_180 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(y_180);
if(match_cons(t, sym_prod_3))
{
z_23 = ATgetArgument(t, 0);
x_23 = ATgetArgument(t, 1);
y_23 = ATgetArgument(t, 2);
}
else
goto fail37 ;
t = y_23;
{
struct str_closure z_180 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(z_180);
t = oncetd_1_0(sl, lifted33_cl, t);
if((t == NULL))
goto fail37 ;
if((b_24 == NULL))
goto fail37 ;
else
{
t = b_24;
}
t = z_23;
{
struct str_closure e_181 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(e_181);
t = topdown_1_0(sl, lifted34_cl, t);
if((t == NULL))
goto fail37 ;
{
struct str_closure f_181 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(f_181);
t = filter_1_0(sl, lifted37_cl, t);
if((t == NULL))
goto fail37 ;
d_24 = t;
t = length_0_0(sl, t);
if((t == NULL))
goto fail37 ;
a_24 = t;
e_24 = t;
j_24 = t;
t = term507;
h_24 = t;
t = j_24;
k_24 = t;
t = (ATerm) ATmakeAppl(sym__2, term509, a_24);
i_24 = t;
t = k_24;
if((b_24 == NULL))
goto fail37 ;
else
{
t = dr_set_rule_0_3(sl, h_24, b_24, i_24, t);
if((t == NULL))
goto fail37 ;
}
t = e_24;
t = d_24;
t = num_params_0_0(sl, t);
if((t == NULL))
goto fail37 ;
{
struct str_closure g_181 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(g_181);
t = map_1_0(sl, lifted38_cl, t);
if((t == NULL))
goto fail37 ;
t = map_1_0(sl, lifted39_cl, t);
if((t == NULL))
goto fail37 ;
}
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_24 = NULL,g_24 = NULL;
if(match_cons(t, sym__2))
{
f_24 = ATgetArgument(t, 0);
g_24 = ATgetArgument(t, 1);
}
else
goto fail43 ;
if((sl_readvar(0, sl) == NULL))
goto fail43 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, sl_readvar(0, sl), (ATerm) ATinsert(ATempty, f_24)), g_24);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm79 = t;
ATerm c_179 = NULL,d_179 = NULL,e_179 = NULL;
ATerm trm80;
trm80 = (ATerm) ATgetAnnotations(t);
if((trm80 == NULL))
trm80 = (ATerm) ATempty;
if(match_cons(t, sym_lit_1))
{
d_179 = ATgetArgument(t, 0);
}
else
goto label42 ;
c_179 = trm80;
t = d_179;
e_179 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lit_1, e_179), c_179);
goto fail42 ;
label42 :
t = trm79;
goto label41 ;
label41 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_181 = { &(flatalt_0_0) , sl_up(sl) };
StrCL lifted36_cl = &(a_181);
struct str_closure b_181 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(b_181);
t = try_1_0(sl_up(sl), lifted35_cl, t);
if((t == NULL))
goto fail40 ;
t = try_1_0(sl_up(sl), lifted36_cl, t);
if((t == NULL))
goto fail40 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_24 = NULL;
if(match_cons(t, sym_label_2))
{
ATerm trm78 = ATgetArgument(t, 0);
c_24 = ATgetArgument(t, 1);
}
else
goto fail41 ;
t = c_24;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_178 = NULL,z_178 = NULL,a_179 = NULL;
ATerm trm77;
trm77 = (ATerm) ATgetAnnotations(t);
if((trm77 == NULL))
trm77 = (ATerm) ATempty;
if(match_cons(t, sym_cons_1))
{
z_178 = ATgetArgument(t, 0);
}
else
goto fail39 ;
y_178 = trm77;
t = z_178;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail39 ;
a_179 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cons_1, a_179), y_178);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_180 = { &(register_arg_0_0) , sl_up(sl) };
StrCL lifted40_cl = &(x_180);
t = try_1_0(sl_up(sl), lifted40_cl, t);
if((t == NULL))
goto fail38 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
ATerm flatalt_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "flatalt_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
if(match_cons(t, sym_alt_2))
{
s_23 = ATgetArgument(t, 0);
r_23 = ATgetArgument(t, 1);
}
else
goto fail36 ;
t = r_23;
t = flatalt_0_0(sl, t);
if((t == NULL))
goto fail36 ;
{
ATerm trm73,trm74;
trm73 = SSL_get_constructor(t);
trm74 = SSL_get_arguments(t);
if(!((ATgetSymbol(trm73) == ATmakeSymbol("alt", 0, ATtrue))))
goto fail36 ;
t_23 = trm74;
t = t_23;
v_23 = t;
u_23 = t;
{
ATerm trm75;
ATerm trm76;
trm76 = CheckATermList(u_23);
if((trm76 == NULL))
goto fail36 ;
trm75 = SSL_mkterm(term505, (ATerm) ATinsert((ATermList)trm76, s_23));
if((trm75 == NULL))
goto fail36 ;
t = trm75;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
ATerm pptable_to_c_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pptable_to_c_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,h_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,j_23 = NULL,m_23 = NULL,k_23 = NULL,n_23 = NULL,l_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
if(match_cons(t, sym_PP_Table_1))
{
h_23 = ATgetArgument(t, 0);
}
else
goto fail34 ;
t = h_23;
{
struct str_closure s_180 = { &(simplify_path_0_0) , sl };
StrCL lifted28_cl = &(s_180);
t = map_1_0(sl, lifted28_cl, t);
if((t == NULL))
goto fail34 ;
d_23 = t;
{
struct str_closure t_180 = { &(entry_to_c_0_0) , sl };
StrCL lifted29_cl = &(t_180);
t = map_1_0(sl, lifted29_cl, t);
if((t == NULL))
goto fail34 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail34 ;
b_23 = t;
t = d_23;
{
struct str_closure u_180 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(u_180);
t = filter_1_0(sl, lifted30_cl, t);
if((t == NULL))
goto fail34 ;
e_23 = t;
t = GetChoiceFun_0_0(sl, t);
if((t == NULL))
goto fail34 ;
c_23 = t;
t = e_23;
f_23 = t;
t = GetInitFun_0_0(sl, t);
if((t == NULL))
goto fail34 ;
a_23 = t;
t = f_23;
g_23 = t;
{
struct str_closure v_180 = { &(GetVar_0_0) , sl };
StrCL lifted31_cl = &(v_180);
t = map_1_0(sl, lifted31_cl, t);
if((t == NULL))
goto fail34 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail34 ;
z_22 = t;
t = g_23;
m_23 = t;
t = choice_decl_0_0(sl, t);
if((t == NULL))
goto fail34 ;
j_23 = t;
t = m_23;
n_23 = t;
t = b_23;
{
struct str_closure w_180 = { &(fun_decl_0_0) , sl };
StrCL lifted32_cl = &(w_180);
t = map_1_0(sl, lifted32_cl, t);
if((t == NULL))
goto fail34 ;
k_23 = t;
t = n_23;
o_23 = t;
t = main_fun_0_0(sl, t);
if((t == NULL))
goto fail34 ;
l_23 = t;
t = o_23;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_23), c_23), b_23), k_23), j_23), a_23), z_22);
t = concat_0_0(sl, t);
if((t == NULL))
goto fail34 ;
q_23 = t;
p_23 = t;
t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, p_23);
}
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_23 = NULL;
if(match_cons(t, sym_PP_Entry_2))
{
ATerm trm70 = ATgetArgument(t, 0);
if(match_cons(trm70, sym__2))
{
i_23 = ATgetArgument(trm70, 0);
{
ATerm trm71 = ATgetArgument(trm70, 1);
if(!(((ATgetType(trm71) == AT_LIST) && ATisEmpty(trm71))))
goto fail35 ;
}
}
else
goto fail35 ;
{
ATerm trm72 = ATgetArgument(t, 1);
}
}
else
goto fail35 ;
t = i_23;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm GetInitStm_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "GetInitStm_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm68 = t;
ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
w_22 = t;
y_22 = t;
t = GetArity_0_0(sl, t);
if((t == NULL))
goto label38 ;
u_22 = t;
t = w_22;
t = double_quote_0_0(sl, t);
if((t == NULL))
goto label38 ;
v_22 = t;
t = w_22;
t = cons_var_0_0(sl, t);
if((t == NULL))
goto label38 ;
x_22 = t;
t = y_22;
t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term489, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_22))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, x_22), term97, (ATerm) ATmakeAppl(sym_FunCall_2, term493, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term497), u_22), v_22)))));
goto label37 ;
label38 :
t = trm68;
{
ATerm s_22 = NULL,t_22 = NULL;
s_22 = t;
t_22 = t;
{
ATerm trm69 = t;
t = s_22;
t = GetArity_0_0(sl, t);
if((t == NULL))
goto label40 ;
goto fail32 ;
label40 :
t = trm69;
goto label39 ;
label39 :
;
t = s_22;
{
struct str_closure r_180 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(r_180);
t = debug_1_0(sl, lifted27_cl, t);
if((t == NULL))
goto fail32 ;
t = t_22;
t = (ATerm) ATinsert(ATempty, term503);
goto label37 ;
}
}
}
label37 :
;
}
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
t = term499;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm GetVar_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "GetVar_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
p_22 = t;
r_22 = t;
t = cons_var_0_0(sl, t);
if((t == NULL))
goto fail31 ;
q_22 = t;
t = r_22;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term485, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, q_22), term39))));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm GetInitFun_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "GetInitFun_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
m_22 = t;
o_22 = t;
{
struct str_closure q_180 = { &(GetInitStm_0_0) , sl };
StrCL lifted26_cl = &(q_180);
t = map_1_0(sl, lifted26_cl, t);
if((t == NULL))
goto fail30 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail30 ;
n_22 = t;
t = o_22;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term135, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term479, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term483)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, n_22)));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
ATerm GetSwitchStm_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "GetSwitchStm_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm67 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label36 ;
t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term183), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term187, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term49), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term475))), term193)))));
goto label35 ;
label36 :
t = trm67;
{
ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
h_22 = ATgetFirst((ATermList) t);
j_22 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail29 ;
l_22 = t;
t = (ATerm) ATmakeAppl(sym__2, h_22, (ATerm) ATempty);
t = print_fun_name_0_0(sl, t);
if((t == NULL))
goto fail29 ;
g_22 = t;
t = h_22;
t = cons_var_0_0(sl, t);
if((t == NULL))
goto fail29 ;
i_22 = t;
t = j_22;
t = GetSwitchStm_0_0(sl, t);
if((t == NULL))
goto fail29 ;
k_22 = t;
t = l_22;
t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, term439, (ATerm) ATmakeAppl(sym_Id_1, i_22)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, g_22), (ATerm) ATinsert(ATempty, term49))), k_22);
goto label35 ;
}
label35 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
ATerm GetChoiceFun_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "GetChoiceFun_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
d_22 = t;
f_22 = t;
t = GetSwitchStm_0_0(sl, t);
if((t == NULL))
goto fail28 ;
e_22 = t;
t = f_22;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term135, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term85, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term141)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term53, (ATerm) ATinsert(ATempty, term49)), term409), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, term321, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Pointer_2, (ATerm)ATinsert(ATempty, term323), term39))), (ATerm) ATmakeAppl(sym_FunCall_2, term413, (ATerm) ATinsert(ATempty, term423)))))))), (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term53, (ATerm) ATinsert(ATempty, term49)), term179), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term427, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term165, (ATerm) ATinsert(ATempty, term429))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term435, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, term441, (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_FunCall_2, term119, (ATerm) ATinsert(ATempty, term49))))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_FunCall_2, term445, (ATerm) ATinsert(ATempty, term439)), (ATerm) ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term449, (ATerm) ATinsert(ATempty, term439)), term159)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term283, (ATerm) ATinsert(ATempty, term439))))), (ATerm) ATmakeAppl(sym_IfElse_3, term455, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, term461, (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_FunCall_2, term45, (ATerm) ATinsert(ATinsert(ATempty, term159), term49))))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term53, (ATerm) ATinsert(ATempty, term459)), term57), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term63, (ATerm) ATinsert(ATempty, term467))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term81, (ATerm) ATinsert(ATempty, term67)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term109, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term161))), term95), term49))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, term473, (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_FunCall_2, term89, (ATerm) ATinsert(ATempty, term67))))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term85, (ATerm) ATinsert(ATempty, term471)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term109, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term111))), term95), term49)))))), e_22))))))))));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
ATerm fun_decl_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fun_decl_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_22 = NULL;
if(match_cons(t, sym_FunDef_3))
{
ATerm trm39 = ATgetArgument(t, 0);
if(match_cons(trm39, sym_DeclSpec_5))
{
ATerm trm40 = ATgetArgument(trm39, 0);
if(!(((ATgetType(trm40) == AT_LIST) && ATisEmpty(trm40))))
goto fail27 ;
{
ATerm trm41 = ATgetArgument(trm39, 1);
if(!(match_cons(trm41, sym_Static_0)))
goto fail27 ;
}
{
ATerm trm42 = ATgetArgument(trm39, 2);
if(!(((ATgetType(trm42) == AT_LIST) && ATisEmpty(trm42))))
goto fail27 ;
}
{
ATerm trm43 = ATgetArgument(trm39, 3);
if(!(match_cons(trm43, sym_Void_0)))
goto fail27 ;
}
{
ATerm trm44 = ATgetArgument(trm39, 4);
if(!(((ATgetType(trm44) == AT_LIST) && ATisEmpty(trm44))))
goto fail27 ;
}
}
else
goto fail27 ;
{
ATerm trm45 = ATgetArgument(t, 1);
if(match_cons(trm45, sym_IdDecl_3))
{
ATerm trm46 = ATgetArgument(trm45, 0);
if(!(((ATgetType(trm46) == AT_LIST) && ATisEmpty(trm46))))
goto fail27 ;
{
ATerm trm47 = ATgetArgument(trm45, 1);
if(match_cons(trm47, sym_Id_1))
{
c_22 = ATgetArgument(trm47, 0);
}
else
goto fail27 ;
}
{
ATerm trm48 = ATgetArgument(trm45, 2);
if(match_cons(trm48, sym_Some_1))
{
ATerm trm49 = ATgetArgument(trm48, 0);
if(match_cons(trm49, sym_ParamList_1))
{
ATerm trm50 = ATgetArgument(trm49, 0);
if(((ATgetType(trm50) == AT_LIST) && !(ATisEmpty(trm50))))
{
ATerm trm51 = ATgetFirst((ATermList) trm50);
if(match_cons(trm51, sym_ParamDecl_2))
{
ATerm trm52 = ATgetArgument(trm51, 0);
if(match_cons(trm52, sym_TypeSpec_3))
{
ATerm trm53 = ATgetArgument(trm52, 0);
if(!(((ATgetType(trm53) == AT_LIST) && ATisEmpty(trm53))))
goto fail27 ;
{
ATerm trm54 = ATgetArgument(trm52, 1);
if(match_cons(trm54, sym_TypeId_1))
{
ATerm trm55 = ATgetArgument(trm54, 0);
if(!((ATgetSymbol(trm55) == ATmakeSymbol("ATerm", 0, ATtrue))))
goto fail27 ;
}
else
goto fail27 ;
}
{
ATerm trm56 = ATgetArgument(trm52, 2);
if(!(((ATgetType(trm56) == AT_LIST) && ATisEmpty(trm56))))
goto fail27 ;
}
}
else
goto fail27 ;
{
ATerm trm57 = ATgetArgument(trm51, 1);
if(match_cons(trm57, sym_Some_1))
{
ATerm trm58 = ATgetArgument(trm57, 0);
if(match_cons(trm58, sym_IdDecl_3))
{
ATerm trm59 = ATgetArgument(trm58, 0);
if(!(((ATgetType(trm59) == AT_LIST) && ATisEmpty(trm59))))
goto fail27 ;
{
ATerm trm60 = ATgetArgument(trm58, 1);
if(match_cons(trm60, sym_Id_1))
{
ATerm trm61 = ATgetArgument(trm60, 0);
if(!((ATgetSymbol(trm61) == ATmakeSymbol("tree", 0, ATtrue))))
goto fail27 ;
}
else
goto fail27 ;
}
{
ATerm trm62 = ATgetArgument(trm58, 2);
if(!(match_cons(trm62, sym_None_0)))
goto fail27 ;
}
}
else
goto fail27 ;
}
else
goto fail27 ;
}
}
else
goto fail27 ;
{
ATerm trm63 = (ATerm) ATgetNext((ATermList) trm50);
if(!(((ATgetType(trm63) == AT_LIST) && ATisEmpty(trm63))))
goto fail27 ;
}
}
else
goto fail27 ;
}
else
goto fail27 ;
}
else
goto fail27 ;
}
}
else
goto fail27 ;
}
{
ATerm trm64 = ATgetArgument(t, 2);
if(match_cons(trm64, sym_Compound_2))
{
ATerm trm65 = ATgetArgument(trm64, 0);
if(!(((ATgetType(trm65) == AT_LIST) && ATisEmpty(trm65))))
goto fail27 ;
{
ATerm trm66 = ATgetArgument(trm64, 1);
}
}
else
goto fail27 ;
}
}
else
goto fail27 ;
t = (ATerm) ATmakeAppl(sym_Declaration2_2, term135, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, c_22), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term405))))));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
ATerm choice_decl_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "choice_decl_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term135, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term85, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term405)))))));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_fun_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_fun_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm37 = t;
ATerm a_22 = NULL,b_22 = NULL;
t = term203;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label32 ;
b_22 = t;
a_22 = t;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term33, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_22), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATinsert(ATempty, term213), term229)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term231, (ATerm) ATinsert(ATempty, term241))), (ATerm) ATmakeAppl(sym_Declaration2_2, term33, (ATerm) ATinsert(ATempty, term247))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Return_1, (ATerm) ATmakeAppl(sym_FunCall_2, term251, (ATerm) ATinsert(ATinsert(ATempty, term245), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term253)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term257, (ATerm) ATinsert(ATempty, term261)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term263)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term85, (ATerm) ATinsert(ATempty, term207)))), term273), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term261, term97, (ATerm) ATmakeAppl(sym_FunCall_2, term277, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term279))), (ATerm) ATmakeAppl(sym_FunCall_2, term283, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term119, (ATerm) ATinsert(ATempty, term245))))))))), term287), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term245, term97, (ATerm) ATmakeAppl(sym_FunCall_2, term291, (ATerm) ATinsert(ATinsert(ATempty, term207), term267))))), term299), (ATerm) ATmakeAppl(sym_If_2, term301, (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term305), term313)))))));
goto label31 ;
label32 :
t = trm37;
{
ATerm trm38 = t;
t = term203;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label34 ;
goto fail25 ;
label34 :
t = trm38;
goto label33 ;
label33 :
;
t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term151, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term317, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, term321, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term323), term327, term331)))), term341)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term33, (ATerm) ATinsert(ATempty, term347))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Return_1, (ATerm) ATmakeAppl(sym_FunCall_2, term351, (ATerm) ATinsert(ATinsert(ATempty, term327), term335)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term355, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term357), term327), term335))))))), (ATerm) ATmakeAppl(sym_FunDef_3, term231, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term351, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, term321, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term323), term327, term331)))), term341)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term33, (ATerm) ATinsert(ATempty, term209))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term359), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term263)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term85, (ATerm) ATinsert(ATempty, term207)))), term367), term373), (ATerm) ATmakeAppl(sym_IfElse_3, term375, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term381, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term323), term385, term39), (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_FunCall_2, term277, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term387))), term389))))))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term257, (ATerm) ATinsert(ATempty, term385)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term207, term97, (ATerm) ATmakeAppl(sym_FunCall_2, term393, (ATerm) ATinsert(ATempty, term385))))), (ATerm) ATmakeAppl(sym_If_2, term395, (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term371), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term399, (ATerm) ATinsert(ATempty, term389)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term207, term97, (ATerm) ATmakeAppl(sym_FunCall_2, term393, (ATerm) ATinsert(ATempty, term403)))))), term299), term313))));
goto label31 ;
}
label31 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
ATerm cons_var_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "cons_var_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
x_21 = t;
z_21 = t;
{
struct str_closure p_180 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(p_180);
t = string_as_chars_1_0(sl, lifted24_cl, t);
if((t == NULL))
goto fail22 ;
y_21 = t;
t = z_21;
t = (ATerm) ATinsert(ATinsert(ATempty, y_21), term201);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail22 ;
}
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
{
struct str_closure o_180 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(o_180);
t = map_1_0(sl_up(sl), lifted25_cl, t);
if((t == NULL))
goto fail23 ;
}
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
ATerm trm36 = t;
t = is_alphanum_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label30 ;
goto label29 ;
label30 :
t = trm36;
t = term197;
goto label29 ;
label29 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
ATerm print_fun_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "print_fun_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,v_21 = NULL,w_21 = NULL;
sl_init_var(0, s_21);
{
struct str_closure k_180 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(k_180);
struct str_closure l_180 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(l_180);
if(match_cons(t, sym__2))
{
q_21 = ATgetArgument(t, 0);
r_21 = ATgetArgument(t, 1);
}
else
goto fail17 ;
w_21 = t;
t = q_21;
{
struct str_closure n_180 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(n_180);
t = string_as_chars_1_0(sl, lifted20_cl, t);
if((t == NULL))
goto fail17 ;
v_21 = t;
t = w_21;
t = (ATerm) ATinsert(ATinsert(ATempty, v_21), term199);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail17 ;
if((s_21 == NULL))
{
s_21 = t;
}
else
if((s_21 != t))
goto fail17 ;
t = r_21;
t = foldr_2_0(sl, lifted22_cl, lifted23_cl, t);
if((t == NULL))
goto fail17 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_180 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(m_180);
t = map_1_0(sl_up(sl), lifted21_cl, t);
if((t == NULL))
goto fail20 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm35 = t;
t = is_alphanum_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label28 ;
goto label27 ;
label28 :
t = trm35;
t = term197;
goto label27 ;
label27 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_21 = NULL,u_21 = NULL;
if(match_cons(t, sym__2))
{
t_21 = ATgetArgument(t, 0);
u_21 = ATgetArgument(t, 1);
}
else
goto fail19 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_21), term195), u_21);
t = concat_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
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
ATerm AltStm_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "AltStm_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm30 = t;
if(match_cons(t, sym__3))
{
ATerm trm31 = ATgetArgument(t, 0);
ATerm trm32 = ATgetArgument(t, 1);
ATerm trm33 = ATgetArgument(t, 2);
if(!(((ATgetType(trm33) == AT_LIST) && ATisEmpty(trm33))))
goto label26 ;
}
else
goto label26 ;
t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term183), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term187, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term49), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term189))), term193)))));
goto label25 ;
label26 :
t = trm30;
{
ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,o_21 = NULL,n_21 = NULL,p_21 = NULL;
if(match_cons(t, sym__3))
{
f_21 = ATgetArgument(t, 0);
g_21 = ATgetArgument(t, 1);
{
ATerm trm34 = ATgetArgument(t, 2);
if(((ATgetType(trm34) == AT_LIST) && !(ATisEmpty(trm34))))
{
e_21 = ATgetFirst((ATermList) trm34);
h_21 = (ATerm) ATgetNext((ATermList) trm34);
}
else
goto fail16 ;
}
}
else
goto fail16 ;
j_21 = t;
l_21 = t;
t = g_21;
t = inc_0_0(sl, t);
if((t == NULL))
goto fail16 ;
k_21 = t;
t = l_21;
t = (ATerm) ATmakeAppl(sym__3, f_21, k_21, h_21);
t = AltStm_0_0(sl, t);
if((t == NULL))
goto fail16 ;
i_21 = t;
t = j_21;
o_21 = t;
t = g_21;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail16 ;
m_21 = t;
t = o_21;
p_21 = t;
t = e_21;
t = box_to_c_0_1(sl, f_21, t);
if((t == NULL))
goto fail16 ;
n_21 = t;
t = p_21;
t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, term155, m_21), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, n_21), i_21);
goto label25 ;
}
label25 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm entry_to_c_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "entry_to_c_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm26 = t;
ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
if(match_cons(t, sym_PP_Entry_2))
{
a_21 = ATgetArgument(t, 0);
y_20 = ATgetArgument(t, 1);
}
else
goto label21 ;
b_21 = t;
t = a_21;
t = print_fun_name_0_0(sl, t);
if((t == NULL))
goto label21 ;
z_20 = t;
{
ATerm trm27 = t;
t = a_21;
t = GetKind_0_0(sl, t);
if((t == NULL))
goto label23 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("alt", 0, ATtrue))))
goto label23 ;
goto label21 ;
label23 :
t = trm27;
goto label22 ;
label22 :
;
t = b_21;
d_21 = t;
t = y_20;
t = boxes_to_c_0_1(sl, a_21, t);
if((t == NULL))
goto label21 ;
c_21 = t;
t = d_21;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term135, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_20), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term141)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, c_21)));
}
goto label20 ;
label21 :
t = trm26;
{
ATerm trm28 = t;
ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
if(match_cons(t, sym_PP_Entry_2))
{
u_20 = ATgetArgument(t, 0);
s_20 = ATgetArgument(t, 1);
}
else
goto label24 ;
v_20 = t;
t = u_20;
t = print_fun_name_0_0(sl, t);
if((t == NULL))
goto label24 ;
t_20 = t;
t = u_20;
t = GetKind_0_0(sl, t);
if((t == NULL))
goto label24 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("alt", 0, ATtrue))))
goto label24 ;
t = v_20;
x_20 = t;
t = (ATerm) ATmakeAppl(sym__3, u_20, term143, s_20);
t = AltStm_0_0(sl, t);
if((t == NULL))
goto label24 ;
w_20 = t;
t = x_20;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term135, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, t_20), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term141)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term119, (ATerm) ATinsert(ATempty, term49)), term147), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term151, (ATerm) ATinsert(ATempty, term157))), (ATerm) ATmakeAppl(sym_Declaration2_2, term33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, term41, (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_FunCall_2, term45, (ATerm) ATinsert(ATinsert(ATempty, term159), term49))))))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, term137, (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_FunCall_2, term89, (ATerm) ATinsert(ATempty, term73))))))), (ATerm) ATinsert(ATempty, w_20))), (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_FunCall_2, term81, (ATerm) ATinsert(ATempty, term73)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term109, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term161))), term115), term49))))), (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term53, (ATerm) ATinsert(ATempty, term37)), term57), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term109, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term111))), term115), term49))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term37, term97, (ATerm) ATmakeAppl(sym_FunCall_2, term45, (ATerm) ATinsert(ATinsert(ATempty, term95), term49))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term155, term97, (ATerm) ATmakeAppl(sym_FunCall_2, term165, (ATerm) ATinsert(ATempty, term175))))), (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term53, (ATerm) ATinsert(ATempty, term37)), term179), (ATerm) ATmakeAppl(sym_Return_1, (ATerm) ATmakeAppl(sym_FunCall_2, term109, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term181))), term95), term49)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term85, (ATerm) ATinsert(ATempty, term49))))))));
goto label20 ;
label24 :
t = trm28;
{
ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
if(match_cons(t, sym_PP_Entry_2))
{
p_20 = ATgetArgument(t, 0);
o_20 = ATgetArgument(t, 1);
}
else
goto fail14 ;
q_20 = t;
t = p_20;
{
struct str_closure i_180 = { &(_Id) , sl };
StrCL lifted18_cl = &(i_180);
struct str_closure j_180 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(j_180);
t = _2_0(sl, lifted18_cl, lifted19_cl, t);
if((t == NULL))
goto fail14 ;
t = GetKind_0_0(sl, t);
if((t == NULL))
goto fail14 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("alt", 0, ATtrue))))
goto fail14 ;
t = q_20;
t = (ATerm) ATempty;
goto label20 ;
}
}
}
label20 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_20 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm29 = ATgetFirst((ATermList) t);
r_20 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail15 ;
t = r_20;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm box_to_c_0_1 (StrSL sl, ATerm b_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "box_to_c_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(7);
{
ATerm trm6 = t;
ATerm n_20 = NULL;
if(match_cons(t, sym_S_1))
{
n_20 = ATgetArgument(t, 0);
}
else
goto label7 ;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term7, (ATerm) ATinsert(ATempty, n_20))));
goto label6 ;
label7 :
t = trm6;
{
ATerm trm7 = t;
ATerm l_20 = NULL;
if(match_cons(t, sym_FBOX_2))
{
ATerm trm8 = ATgetArgument(t, 0);
l_20 = ATgetArgument(t, 1);
}
else
goto label8 ;
t = l_20;
t = box_to_c_0_1(sl, b_52, t);
if((t == NULL))
goto label8 ;
goto label6 ;
label8 :
t = trm7;
{
ATerm trm9 = t;
ATerm i_20 = NULL,j_20 = NULL;
if(match_cons(t, sym_HV_2))
{
i_20 = ATgetArgument(t, 0);
j_20 = ATgetArgument(t, 1);
}
else
goto label9 ;
t = (ATerm) ATmakeAppl(sym_V_2, i_20, j_20);
t = box_to_c_0_1(sl, b_52, t);
if((t == NULL))
goto label9 ;
goto label6 ;
label9 :
t = trm9;
{
ATerm trm10 = t;
ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
if(match_cons(t, sym_V_2))
{
c_20 = ATgetArgument(t, 0);
a_20 = ATgetArgument(t, 1);
}
else
goto label10 ;
g_20 = t;
t = a_20;
t = boxes_to_c_0_1(sl, b_52, t);
if((t == NULL))
goto label10 ;
b_20 = t;
t = c_20;
t = parse_s_opts_0_0(sl, t);
if((t == NULL))
goto label10 ;
if(match_cons(t, sym__3))
{
d_20 = ATgetArgument(t, 0);
e_20 = ATgetArgument(t, 1);
f_20 = ATgetArgument(t, 2);
}
else
goto label10 ;
t = g_20;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term15), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, b_20)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_20), e_20), d_20), term23))));
goto label6 ;
label10 :
t = trm10;
{
ATerm trm11 = t;
ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
if(match_cons(t, sym_H_2))
{
u_19 = ATgetArgument(t, 0);
s_19 = ATgetArgument(t, 1);
}
else
goto label11 ;
y_19 = t;
t = s_19;
t = boxes_to_c_0_1(sl, b_52, t);
if((t == NULL))
goto label11 ;
t_19 = t;
t = u_19;
t = parse_s_opts_0_0(sl, t);
if((t == NULL))
goto label11 ;
if(match_cons(t, sym__3))
{
v_19 = ATgetArgument(t, 0);
w_19 = ATgetArgument(t, 1);
x_19 = ATgetArgument(t, 2);
}
else
goto label11 ;
t = y_19;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term15), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, t_19)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_19), w_19), v_19), term27))));
goto label6 ;
label11 :
t = trm11;
{
ATerm trm12 = t;
ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
sl_init_var(0, l_19);
if(match_cons(t, sym_Arg_1))
{
if((l_19 == NULL))
{
l_19 = ATgetArgument(t, 0);
}
else
if((l_19 != ATgetArgument(t, 0)))
goto label12 ;
}
else
goto label12 ;
o_19 = t;
if((l_19 == NULL))
goto label12 ;
else
{
t = l_19;
}
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto label12 ;
t = dec_0_0(sl, t);
if((t == NULL))
goto label12 ;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto label12 ;
k_19 = t;
t = b_52;
{
struct str_closure s_179 = { &(_Id) , sl };
StrCL lifted4_cl = &(s_179);
struct str_closure t_179 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(t_179);
t = _2_0(sl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto label12 ;
m_19 = t;
t = GetKind_0_0(sl, t);
if((t == NULL))
goto label12 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("list-sep", 0, ATtrue))))
goto label12 ;
t = m_19;
t = print_fun_name_0_0(sl, t);
if((t == NULL))
goto label12 ;
n_19 = t;
t = o_19;
if((l_19 == NULL))
goto label12 ;
else
{
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, term41, (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_FunCall_2, term45, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, k_19)), term49))))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term53, (ATerm) ATinsert(ATempty, term37)), term57), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term63, (ATerm) ATinsert(ATempty, term77))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term81, (ATerm) ATinsert(ATempty, term67))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term85, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term89, (ATerm) ATinsert(ATempty, term67))))))), (ATerm) ATmakeAppl(sym_While_2, (ATerm)ATmakeAppl(sym_Gt_2, (ATerm)ATmakeAppl(sym_FunCall_2, term93, (ATerm) ATinsert(ATempty, term67)), term95), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term67, term97, (ATerm) ATmakeAppl(sym_FunCall_2, term101, (ATerm) ATinsert(ATempty, term67))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, n_19), (ATerm) ATinsert(ATempty, term105)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term109, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term111))), (ATerm) ATmakeAppl(sym_Id_1, l_19)), term49)))))));
}
}
goto label6 ;
label12 :
t = trm12;
{
ATerm trm14 = t;
ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
sl_init_var(1, d_19);
if(match_cons(t, sym_Arg_1))
{
if((d_19 == NULL))
{
d_19 = ATgetArgument(t, 0);
}
else
if((d_19 != ATgetArgument(t, 0)))
goto label13 ;
}
else
goto label13 ;
g_19 = t;
if((d_19 == NULL))
goto label13 ;
else
{
t = d_19;
}
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto label13 ;
t = dec_0_0(sl, t);
if((t == NULL))
goto label13 ;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto label13 ;
c_19 = t;
t = b_52;
{
struct str_closure u_179 = { &(_Id) , sl };
StrCL lifted6_cl = &(u_179);
struct str_closure v_179 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(v_179);
t = _2_0(sl, lifted6_cl, lifted7_cl, t);
if((t == NULL))
goto label13 ;
e_19 = t;
t = GetKind_0_0(sl, t);
if((t == NULL))
goto label13 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("list-sep2", 0, ATtrue))))
goto label13 ;
t = e_19;
t = print_fun_name_0_0(sl, t);
if((t == NULL))
goto label13 ;
f_19 = t;
t = g_19;
if((d_19 == NULL))
goto label13 ;
else
{
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, term41, (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_FunCall_2, term45, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, c_19)), term49))))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term53, (ATerm) ATinsert(ATempty, term37)), term57), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term63, (ATerm) ATinsert(ATempty, term77))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term81, (ATerm) ATinsert(ATempty, term67))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term85, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term89, (ATerm) ATinsert(ATempty, term67))))))), (ATerm) ATmakeAppl(sym_While_2, (ATerm)ATmakeAppl(sym_Gt_2, (ATerm)ATmakeAppl(sym_FunCall_2, term93, (ATerm) ATinsert(ATempty, term67)), term115), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term67, term97, (ATerm) ATmakeAppl(sym_FunCall_2, term101, (ATerm) ATinsert(ATempty, term67))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term67, term97, (ATerm) ATmakeAppl(sym_FunCall_2, term101, (ATerm) ATinsert(ATempty, term67))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, f_19), (ATerm) ATinsert(ATempty, term105)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term109, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term111))), (ATerm) ATmakeAppl(sym_Id_1, d_19)), term49)))))));
}
}
goto label6 ;
label13 :
t = trm14;
{
ATerm trm16 = t;
ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
sl_init_var(2, v_18);
if(match_cons(t, sym_Arg_1))
{
if((v_18 == NULL))
{
v_18 = ATgetArgument(t, 0);
}
else
if((v_18 != ATgetArgument(t, 0)))
goto label14 ;
}
else
goto label14 ;
y_18 = t;
if((v_18 == NULL))
goto label14 ;
else
{
t = v_18;
}
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto label14 ;
t = dec_0_0(sl, t);
if((t == NULL))
goto label14 ;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto label14 ;
u_18 = t;
t = b_52;
{
struct str_closure w_179 = { &(_Id) , sl };
StrCL lifted8_cl = &(w_179);
struct str_closure x_179 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(x_179);
t = _2_0(sl, lifted8_cl, lifted9_cl, t);
if((t == NULL))
goto label14 ;
w_18 = t;
t = GetKind_0_0(sl, t);
if((t == NULL))
goto label14 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("list", 0, ATtrue))))
goto label14 ;
t = w_18;
t = print_fun_name_0_0(sl, t);
if((t == NULL))
goto label14 ;
x_18 = t;
t = y_18;
if((v_18 == NULL))
goto label14 ;
else
{
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, term41, (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_FunCall_2, term45, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, u_18)), term49))))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term53, (ATerm) ATinsert(ATempty, term37)), term57), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term63, (ATerm) ATinsert(ATempty, term77))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term81, (ATerm) ATinsert(ATempty, term67))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term85, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term89, (ATerm) ATinsert(ATempty, term67))))))), (ATerm) ATmakeAppl(sym_While_2, (ATerm)ATmakeAppl(sym_Gt_2, (ATerm)ATmakeAppl(sym_FunCall_2, term93, (ATerm) ATinsert(ATempty, term67)), term95), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term67, term97, (ATerm) ATmakeAppl(sym_FunCall_2, term101, (ATerm) ATinsert(ATempty, term67))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, x_18), (ATerm) ATinsert(ATempty, term105)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term109, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term111))), (ATerm) ATmakeAppl(sym_Id_1, v_18)), term49)))))));
}
}
goto label6 ;
label14 :
t = trm16;
{
ATerm trm18 = t;
ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
sl_init_var(3, n_18);
if(match_cons(t, sym_Arg_1))
{
if((n_18 == NULL))
{
n_18 = ATgetArgument(t, 0);
}
else
if((n_18 != ATgetArgument(t, 0)))
goto label15 ;
}
else
goto label15 ;
q_18 = t;
if((n_18 == NULL))
goto label15 ;
else
{
t = n_18;
}
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto label15 ;
t = dec_0_0(sl, t);
if((t == NULL))
goto label15 ;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto label15 ;
m_18 = t;
t = b_52;
{
struct str_closure a_180 = { &(_Id) , sl };
StrCL lifted10_cl = &(a_180);
struct str_closure b_180 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(b_180);
t = _2_0(sl, lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto label15 ;
o_18 = t;
t = GetKind_0_0(sl, t);
if((t == NULL))
goto label15 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("alt", 0, ATtrue))))
goto label15 ;
t = o_18;
t = print_fun_name_0_0(sl, t);
if((t == NULL))
goto label15 ;
p_18 = t;
t = q_18;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, term41, (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_FunCall_2, term45, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, m_18)), term49))))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, p_18), (ATerm) ATinsert(ATempty, term37))))));
}
goto label6 ;
label15 :
t = trm18;
{
ATerm trm20 = t;
ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
sl_init_var(4, f_18);
if(match_cons(t, sym_Arg_1))
{
if((f_18 == NULL))
{
f_18 = ATgetArgument(t, 0);
}
else
if((f_18 != ATgetArgument(t, 0)))
goto label16 ;
}
else
goto label16 ;
i_18 = t;
if((f_18 == NULL))
goto label16 ;
else
{
t = f_18;
}
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto label16 ;
t = dec_0_0(sl, t);
if((t == NULL))
goto label16 ;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto label16 ;
e_18 = t;
t = b_52;
{
struct str_closure c_180 = { &(_Id) , sl };
StrCL lifted12_cl = &(c_180);
struct str_closure d_180 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(d_180);
t = _2_0(sl, lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto label16 ;
g_18 = t;
t = GetKind_0_0(sl, t);
if((t == NULL))
goto label16 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("seq", 0, ATtrue))))
goto label16 ;
t = g_18;
t = print_fun_name_0_0(sl, t);
if((t == NULL))
goto label16 ;
h_18 = t;
t = i_18;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, term41, (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_FunCall_2, term45, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_18)), term49))))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, h_18), (ATerm) ATinsert(ATempty, term37))))));
}
goto label6 ;
label16 :
t = trm20;
{
ATerm trm22 = t;
ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
sl_init_var(5, x_17);
if(match_cons(t, sym_Arg_1))
{
if((x_17 == NULL))
{
x_17 = ATgetArgument(t, 0);
}
else
if((x_17 != ATgetArgument(t, 0)))
goto label17 ;
}
else
goto label17 ;
a_18 = t;
if((x_17 == NULL))
goto label17 ;
else
{
t = x_17;
}
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto label17 ;
t = dec_0_0(sl, t);
if((t == NULL))
goto label17 ;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto label17 ;
w_17 = t;
t = b_52;
{
struct str_closure e_180 = { &(_Id) , sl };
StrCL lifted14_cl = &(e_180);
struct str_closure f_180 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(f_180);
t = _2_0(sl, lifted14_cl, lifted15_cl, t);
if((t == NULL))
goto label17 ;
y_17 = t;
t = GetKind_0_0(sl, t);
if((t == NULL))
goto label17 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("opt", 0, ATtrue))))
goto label17 ;
t = y_17;
t = print_fun_name_0_0(sl, t);
if((t == NULL))
goto label17 ;
z_17 = t;
t = a_18;
if((x_17 == NULL))
goto label17 ;
else
{
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, term41, (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_FunCall_2, term45, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_17)), term49))))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term119, (ATerm) ATinsert(ATempty, term37)), term123), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, z_17), (ATerm) ATinsert(ATempty, term37))))), (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term119, (ATerm) ATinsert(ATempty, term37)), term127), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term109, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term129))), (ATerm) ATmakeAppl(sym_Id_1, x_17)), term49))))))));
}
}
goto label6 ;
label17 :
t = trm22;
{
ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
sl_init_var(6, r_17);
if(match_cons(t, sym_Arg_1))
{
if((r_17 == NULL))
{
r_17 = ATgetArgument(t, 0);
}
else
if((r_17 != ATgetArgument(t, 0)))
goto fail6 ;
}
else
goto fail6 ;
s_17 = t;
if((r_17 == NULL))
goto fail6 ;
else
{
t = r_17;
}
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto fail6 ;
t = dec_0_0(sl, t);
if((t == NULL))
goto fail6 ;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail6 ;
q_17 = t;
t = b_52;
{
struct str_closure g_180 = { &(_Id) , sl };
StrCL lifted16_cl = &(g_180);
struct str_closure h_180 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(h_180);
t = _2_0(sl, lifted16_cl, lifted17_cl, t);
if((t == NULL))
goto fail6 ;
{
ATerm trm25 = t;
t = GetKind_0_0(sl, t);
if((t == NULL))
goto label19 ;
goto fail6 ;
label19 :
t = trm25;
goto label18 ;
label18 :
;
t = s_17;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, term41, (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_FunCall_2, term45, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, q_17)), term49))))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term85, (ATerm) ATinsert(ATempty, term37))))));
goto label6 ;
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
label6 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_17 = NULL,u_17 = NULL;
u_17 = t;
t_17 = t;
if((sl_readvar(6, sl) == NULL))
goto fail13 ;
else
{
ATerm trm24;
trm24 = CheckATermList(t_17);
if((trm24 == NULL))
goto fail13 ;
t = (ATerm) ATinsert((ATermList)trm24, sl_readvar(6, sl));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_18 = NULL,c_18 = NULL;
c_18 = t;
b_18 = t;
if((sl_readvar(5, sl) == NULL))
goto fail12 ;
else
{
ATerm trm23;
trm23 = CheckATermList(b_18);
if((trm23 == NULL))
goto fail12 ;
t = (ATerm) ATinsert((ATermList)trm23, sl_readvar(5, sl));
}
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
{
ATerm j_18 = NULL,k_18 = NULL;
k_18 = t;
j_18 = t;
if((sl_readvar(4, sl) == NULL))
goto fail11 ;
else
{
ATerm trm21;
trm21 = CheckATermList(j_18);
if((trm21 == NULL))
goto fail11 ;
t = (ATerm) ATinsert((ATermList)trm21, sl_readvar(4, sl));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_18 = NULL,s_18 = NULL;
s_18 = t;
r_18 = t;
if((sl_readvar(3, sl) == NULL))
goto fail10 ;
else
{
ATerm trm19;
trm19 = CheckATermList(r_18);
if((trm19 == NULL))
goto fail10 ;
t = (ATerm) ATinsert((ATermList)trm19, sl_readvar(3, sl));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_18 = NULL,a_19 = NULL;
a_19 = t;
z_18 = t;
if((sl_readvar(2, sl) == NULL))
goto fail9 ;
else
{
ATerm trm17;
trm17 = CheckATermList(z_18);
if((trm17 == NULL))
goto fail9 ;
t = (ATerm) ATinsert((ATermList)trm17, sl_readvar(2, sl));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_19 = NULL,i_19 = NULL;
i_19 = t;
h_19 = t;
if((sl_readvar(1, sl) == NULL))
goto fail8 ;
else
{
ATerm trm15;
trm15 = CheckATermList(h_19);
if((trm15 == NULL))
goto fail8 ;
t = (ATerm) ATinsert((ATermList)trm15, sl_readvar(1, sl));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_19 = NULL,q_19 = NULL;
q_19 = t;
p_19 = t;
if((sl_readvar(0, sl) == NULL))
goto fail7 ;
else
{
ATerm trm13;
trm13 = CheckATermList(p_19);
if((trm13 == NULL))
goto fail7 ;
t = (ATerm) ATinsert((ATermList)trm13, sl_readvar(0, sl));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm boxes_to_c_0_1 (StrSL sl, ATerm o_17, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "boxes_to_c_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, o_17);
{
struct str_closure r_179 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(r_179);
t = map_1_0(sl, lifted3_cl, t);
if((t == NULL))
goto fail4 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail4 ;
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
if((sl_readvar(0, sl) == NULL))
goto fail5 ;
else
{
t = box_to_c_0_1(sl_up(sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_s_opts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_s_opts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_17 = NULL,l_17 = NULL,j_17 = NULL,m_17 = NULL,k_17 = NULL,n_17 = NULL;
l_17 = t;
{
ATerm trm0 = t;
struct str_closure m_179 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(m_179);
t = fetch_elem_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
t = term1;
goto label0 ;
label0 :
;
i_17 = t;
t = l_17;
m_17 = t;
{
ATerm trm2 = t;
struct str_closure p_179 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(p_179);
t = fetch_elem_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto label3 ;
goto label2 ;
label3 :
t = trm2;
t = term1;
goto label2 ;
label2 :
;
j_17 = t;
t = m_17;
n_17 = t;
{
ATerm trm4 = t;
struct str_closure q_179 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(q_179);
t = fetch_elem_1_0(sl, lifted2_cl, t);
if((t == NULL))
goto label5 ;
goto label4 ;
label5 :
t = trm4;
t = term3;
goto label4 ;
label4 :
;
k_17 = t;
t = n_17;
t = (ATerm) ATmakeAppl(sym__3, i_17, j_17, k_17);
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_17 = NULL;
if(match_cons(t, sym_SOpt_2))
{
ATerm trm5 = ATgetArgument(t, 0);
if(!(match_cons(trm5, sym_HS_0)))
goto fail3 ;
h_17 = ATgetArgument(t, 1);
}
else
goto fail3 ;
t = h_17;
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
ATerm g_17 = NULL;
if(match_cons(t, sym_SOpt_2))
{
ATerm trm3 = ATgetArgument(t, 0);
if(!(match_cons(trm3, sym_VS_0)))
goto fail2 ;
g_17 = ATgetArgument(t, 1);
}
else
goto fail2 ;
t = g_17;
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
{
ATerm f_17 = NULL;
if(match_cons(t, sym_SOpt_2))
{
ATerm trm1 = ATgetArgument(t, 0);
if(!(match_cons(trm1, sym_IS_0)))
goto fail1 ;
f_17 = ATgetArgument(t, 1);
}
else
goto fail1 ;
t = f_17;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 121));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(foldr_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("foldr_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(reverse_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("reverse_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_elem_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_elem_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(oncetd_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("oncetd_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_to_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_to_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dec_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dec_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(inc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("inc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_alphanum_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_alphanum_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(double_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("double_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_as_chars_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_as_chars_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(if_verbose2_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose2_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(copy_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("copy_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_ensure_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_ensure_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_to_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_find_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_find_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_cat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_cat_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_new_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_new_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aux_GetKind_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aux_GetKind_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted83);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted83", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(GetKind_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("GetKind_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted82);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted82", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(GetArity_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("GetArity_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(pp2c_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pp2c_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(pp2c_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pp2c_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted70);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted70", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(simplify_path_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("simplify_path_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted68);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted68", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(load_grammar_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("load_grammar_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(w_27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("w_27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(num_params_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("num_params_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted63);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted63", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted64);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted64", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted62);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted62", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_register_arg_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_register_arg_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted54);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted54", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted51);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted51", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted48);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted48", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted45);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted45", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(register_arg_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("register_arg_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted38);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted38", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted37);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted37", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted39);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted39", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(register_prod_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("register_prod_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(flatalt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("flatalt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pptable_to_c_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pptable_to_c_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(GetInitStm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("GetInitStm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(GetVar_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("GetVar_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(GetInitFun_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("GetInitFun_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(GetSwitchStm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("GetSwitchStm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(GetChoiceFun_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("GetChoiceFun_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fun_decl_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fun_decl_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(choice_decl_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("choice_decl_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_fun_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_fun_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted25);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted25", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted24);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted24", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(cons_var_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("cons_var_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted22", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(print_fun_name_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("print_fun_name_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(AltStm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("AltStm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(entry_to_c_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("entry_to_c_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(box_to_c_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("box_to_c_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(boxes_to_c_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("boxes_to_c_0_1", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(parse_s_opts_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_s_opts_0_0", 0, ATtrue)), &(closures[closures_index]));
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
