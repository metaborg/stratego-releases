#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_None_0;
static Symbol sym_stderr_0;
static Symbol sym_Stream_1;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
ATprotectSymbol(sym_None_0);
sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
ATprotectSymbol(sym_stderr_0);
sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
ATprotectSymbol(sym_Stream_1);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("system-io-file", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("test3", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("HOME", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("base-filename-test 3", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("/usr/bin/number.str", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("number.str", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("base-filename-test 1", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("./number.r", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("number.r", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("base-filename-test 2", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("./number", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("number", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("test-extension 5", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("foo.rtree", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 1", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("foo.str", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("foo", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 2", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 3", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 4", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("/bar/foo.str", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("/bar/foo", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 5", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 6", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("/bar.foo/fred.str", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("/bar.foo/fred", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 7", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 8", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("/bar.foo.str", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("/bar.foo", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 9", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("/bar", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 10", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("/bar.foo.rtree", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 11", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("./bar/foo.str", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("./bar/foo", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 12", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("../bar/foo.str", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("../bar/foo", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 13", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 14", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 15", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("./bar.foo/fred.str", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("./bar.foo/fred", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 16", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("../bar.foo/fred.str", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("../bar.foo/fred", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 17", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("./bar/../foo", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 18", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("../bar/../foo", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 19", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("./bar/.foo.str", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("./bar/.foo", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 20", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("../bar/.foo.str", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("../bar/.foo", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 21", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 22", 0, ATtrue));
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(ATmakeSymbol("remove-extension 23", 0, ATtrue));
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(ATmakeSymbol("../bar/..", 0, ATtrue));
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 1", 0, ATtrue));
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 2", 0, ATtrue));
ATprotect(&(term129));
term129 = term128;
ATprotect(&(term130));
term130 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 3", 0, ATtrue));
ATprotect(&(term131));
term131 = term130;
ATprotect(&(term132));
term132 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 4", 0, ATtrue));
ATprotect(&(term133));
term133 = term132;
ATprotect(&(term134));
term134 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 5", 0, ATtrue));
ATprotect(&(term135));
term135 = term134;
ATprotect(&(term136));
term136 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 6", 0, ATtrue));
ATprotect(&(term137));
term137 = term136;
ATprotect(&(term138));
term138 = (ATerm) ATmakeAppl(ATmakeSymbol("/bar/foo.rtree", 0, ATtrue));
ATprotect(&(term139));
term139 = term138;
ATprotect(&(term140));
term140 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 7", 0, ATtrue));
ATprotect(&(term141));
term141 = term140;
ATprotect(&(term142));
term142 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 9", 0, ATtrue));
ATprotect(&(term143));
term143 = term142;
ATprotect(&(term144));
term144 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 10", 0, ATtrue));
ATprotect(&(term145));
term145 = term144;
ATprotect(&(term146));
term146 = (ATerm) ATmakeAppl(ATmakeSymbol("./foo.str", 0, ATtrue));
ATprotect(&(term147));
term147 = term146;
ATprotect(&(term148));
term148 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 11", 0, ATtrue));
ATprotect(&(term149));
term149 = term148;
ATprotect(&(term150));
term150 = (ATerm) ATmakeAppl(ATmakeSymbol("../foo", 0, ATtrue));
ATprotect(&(term151));
term151 = term150;
ATprotect(&(term152));
term152 = (ATerm) ATmakeAppl(ATmakeSymbol("../foo.str", 0, ATtrue));
ATprotect(&(term153));
term153 = term152;
ATprotect(&(term154));
term154 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 12", 0, ATtrue));
ATprotect(&(term155));
term155 = term154;
ATprotect(&(term156));
term156 = (ATerm) ATmakeAppl(ATmakeSymbol("./foo.rtree", 0, ATtrue));
ATprotect(&(term157));
term157 = term156;
ATprotect(&(term158));
term158 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 13", 0, ATtrue));
ATprotect(&(term159));
term159 = term158;
ATprotect(&(term160));
term160 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 14", 0, ATtrue));
ATprotect(&(term161));
term161 = term160;
ATprotect(&(term162));
term162 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 15", 0, ATtrue));
ATprotect(&(term163));
term163 = term162;
ATprotect(&(term164));
term164 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
ATprotect(&(term165));
term165 = term164;
ATprotect(&(term166));
term166 = (ATerm) ATmakeAppl(ATmakeSymbol(".str.str", 0, ATtrue));
ATprotect(&(term167));
term167 = term166;
ATprotect(&(term168));
term168 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 16", 0, ATtrue));
ATprotect(&(term169));
term169 = term168;
ATprotect(&(term170));
term170 = (ATerm) ATmakeAppl(ATmakeSymbol("..str", 0, ATtrue));
ATprotect(&(term171));
term171 = term170;
ATprotect(&(term172));
term172 = (ATerm) ATmakeAppl(ATmakeSymbol("..str.str", 0, ATtrue));
ATprotect(&(term173));
term173 = term172;
ATprotect(&(term174));
term174 = (ATerm) ATmakeAppl(ATmakeSymbol("guarantee-extension 17", 0, ATtrue));
ATprotect(&(term175));
term175 = term174;
ATprotect(&(term176));
term176 = (ATerm) ATmakeAppl(ATmakeSymbol("./.str", 0, ATtrue));
ATprotect(&(term177));
term177 = term176;
ATprotect(&(term178));
term178 = (ATerm) ATmakeAppl(ATmakeSymbol("./.str.str", 0, ATtrue));
ATprotect(&(term179));
term179 = term178;
ATprotect(&(term180));
term180 = (ATerm) ATmakeAppl(ATmakeSymbol("has-extension 1", 0, ATtrue));
ATprotect(&(term181));
term181 = term180;
ATprotect(&(term182));
term182 = (ATerm) ATmakeAppl(ATmakeSymbol("has-extension 2", 0, ATtrue));
ATprotect(&(term183));
term183 = term182;
ATprotect(&(term184));
term184 = (ATerm) ATmakeAppl(ATmakeSymbol("foo.fred.str", 0, ATtrue));
ATprotect(&(term185));
term185 = term184;
ATprotect(&(term186));
term186 = (ATerm) ATmakeAppl(ATmakeSymbol("has-extension 3", 0, ATtrue));
ATprotect(&(term187));
term187 = term186;
ATprotect(&(term188));
term188 = (ATerm) ATmakeAppl(ATmakeSymbol("foo.rtee", 0, ATtrue));
ATprotect(&(term189));
term189 = term188;
ATprotect(&(term190));
term190 = (ATerm) ATmakeAppl(ATmakeSymbol("has-extension 4", 0, ATtrue));
ATprotect(&(term191));
term191 = term190;
ATprotect(&(term192));
term192 = (ATerm) ATmakeAppl(ATmakeSymbol("has-extension 5", 0, ATtrue));
ATprotect(&(term193));
term193 = term192;
ATprotect(&(term194));
term194 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term195));
term195 = term194;
ATprotect(&(term196));
term196 = (ATerm) ATmakeAppl(ATmakeSymbol("has-extension 6", 0, ATtrue));
ATprotect(&(term197));
term197 = term196;
ATprotect(&(term198));
term198 = (ATerm) ATmakeAppl(ATmakeSymbol("foo.str.rtree", 0, ATtrue));
ATprotect(&(term199));
term199 = term198;
ATprotect(&(term200));
term200 = (ATerm) ATmakeAppl(ATmakeSymbol("get-extension 1", 0, ATtrue));
ATprotect(&(term201));
term201 = term200;
ATprotect(&(term202));
term202 = (ATerm) ATmakeAppl(ATmakeSymbol("get-extension 2", 0, ATtrue));
ATprotect(&(term203));
term203 = term202;
ATprotect(&(term204));
term204 = (ATerm) ATmakeAppl(ATmakeSymbol("get-extension 3", 0, ATtrue));
ATprotect(&(term205));
term205 = term204;
ATprotect(&(term206));
term206 = (ATerm) ATmakeAppl(ATmakeSymbol("/foo/fred.str", 0, ATtrue));
ATprotect(&(term207));
term207 = term206;
ATprotect(&(term208));
term208 = (ATerm) ATmakeAppl(ATmakeSymbol("get-extension 4", 0, ATtrue));
ATprotect(&(term209));
term209 = term208;
ATprotect(&(term210));
term210 = (ATerm) ATmakeAppl(ATmakeSymbol("get-extension 5", 0, ATtrue));
ATprotect(&(term211));
term211 = term210;
ATprotect(&(term212));
term212 = (ATerm) ATmakeAppl(ATmakeSymbol("/foo.str/fred", 0, ATtrue));
ATprotect(&(term213));
term213 = term212;
ATprotect(&(term214));
term214 = (ATerm) ATmakeAppl(ATmakeSymbol("test-extension 1", 0, ATtrue));
ATprotect(&(term215));
term215 = term214;
ATprotect(&(term216));
term216 = (ATerm) ATmakeAppl(ATmakeSymbol("test-extension 2", 0, ATtrue));
ATprotect(&(term217));
term217 = term216;
ATprotect(&(term218));
term218 = (ATerm) ATmakeAppl(ATmakeSymbol("test-extension 3", 0, ATtrue));
ATprotect(&(term219));
term219 = term218;
ATprotect(&(term220));
term220 = (ATerm) ATmakeAppl(ATmakeSymbol("test-extension 4", 0, ATtrue));
ATprotect(&(term221));
term221 = term220;
ATprotect(&(term222));
term222 = (ATerm) ATmakeAppl(ATmakeSymbol("dirname -- 9", 0, ATtrue));
ATprotect(&(term223));
term223 = term222;
ATprotect(&(term224));
term224 = (ATerm) ATmakeAppl(ATmakeSymbol("/foo/bla/", 0, ATtrue));
ATprotect(&(term225));
term225 = term224;
ATprotect(&(term226));
term226 = (ATerm) ATmakeAppl(ATmakeSymbol("/foo", 0, ATtrue));
ATprotect(&(term227));
term227 = term226;
ATprotect(&(term228));
term228 = (ATerm) ATmakeAppl(ATmakeSymbol("dirname -- 1", 0, ATtrue));
ATprotect(&(term229));
term229 = term228;
ATprotect(&(term230));
term230 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
ATprotect(&(term231));
term231 = term230;
ATprotect(&(term232));
term232 = (ATerm) ATmakeAppl(ATmakeSymbol("dirname -- 2", 0, ATtrue));
ATprotect(&(term233));
term233 = term232;
ATprotect(&(term234));
term234 = (ATerm) ATmakeAppl(ATmakeSymbol("bla", 0, ATtrue));
ATprotect(&(term235));
term235 = term234;
ATprotect(&(term236));
term236 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
ATprotect(&(term237));
term237 = term236;
ATprotect(&(term238));
term238 = (ATerm) ATmakeAppl(ATmakeSymbol("dirname -- 3", 0, ATtrue));
ATprotect(&(term239));
term239 = term238;
ATprotect(&(term240));
term240 = (ATerm) ATmakeAppl(ATmakeSymbol("bla/", 0, ATtrue));
ATprotect(&(term241));
term241 = term240;
ATprotect(&(term242));
term242 = (ATerm) ATmakeAppl(ATmakeSymbol("dirname -- 4", 0, ATtrue));
ATprotect(&(term243));
term243 = term242;
ATprotect(&(term244));
term244 = (ATerm) ATmakeAppl(ATmakeSymbol("/bla", 0, ATtrue));
ATprotect(&(term245));
term245 = term244;
ATprotect(&(term246));
term246 = (ATerm) ATmakeAppl(ATmakeSymbol("dirname -- 5", 0, ATtrue));
ATprotect(&(term247));
term247 = term246;
ATprotect(&(term248));
term248 = (ATerm) ATmakeAppl(ATmakeSymbol("/bla/", 0, ATtrue));
ATprotect(&(term249));
term249 = term248;
ATprotect(&(term250));
term250 = (ATerm) ATmakeAppl(ATmakeSymbol("dirname -- 6", 0, ATtrue));
ATprotect(&(term251));
term251 = term250;
ATprotect(&(term252));
term252 = (ATerm) ATmakeAppl(ATmakeSymbol("foo/bla", 0, ATtrue));
ATprotect(&(term253));
term253 = term252;
ATprotect(&(term254));
term254 = (ATerm) ATmakeAppl(ATmakeSymbol("dirname -- 7", 0, ATtrue));
ATprotect(&(term255));
term255 = term254;
ATprotect(&(term256));
term256 = (ATerm) ATmakeAppl(ATmakeSymbol("foo/bla/", 0, ATtrue));
ATprotect(&(term257));
term257 = term256;
ATprotect(&(term258));
term258 = (ATerm) ATmakeAppl(ATmakeSymbol("dirname -- 8", 0, ATtrue));
ATprotect(&(term259));
term259 = term258;
ATprotect(&(term260));
term260 = (ATerm) ATmakeAppl(ATmakeSymbol("/foo/bla", 0, ATtrue));
ATprotect(&(term261));
term261 = term260;
ATprotect(&(term262));
term262 = (ATerm) ATmakeAppl(ATmakeSymbol("copy-file-test 1", 0, ATtrue));
ATprotect(&(term263));
term263 = term262;
ATprotect(&(term264));
term264 = (ATerm) ATmakeAppl(ATmakeSymbol("copy-file-test.tmp", 0, ATtrue));
ATprotect(&(term265));
term265 = term264;
ATprotect(&(term266));
term266 = (ATerm) ATmakeAppl(ATmakeSymbol("system-io-file-test.str", 0, ATtrue));
ATprotect(&(term267));
term267 = term266;
ATprotect(&(term268));
term268 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
ATprotect(&(term269));
term269 = term268;
ATprotect(&(term270));
term270 = (ATerm) ATmakeAppl(sym__2, term267, term269);
ATprotect(&(term271));
term271 = term270;
ATprotect(&(term272));
term272 = (ATerm) ATmakeAppl(ATmakeSymbol("read-text-line 1", 0, ATtrue));
ATprotect(&(term273));
term273 = term272;
ATprotect(&(term274));
term274 = (ATerm) ATmakeAppl(ATmakeSymbol("module system-io-file-test", 0, ATtrue));
ATprotect(&(term275));
term275 = term274;
ATprotect(&(term276));
term276 = (ATerm) ATmakeAppl(ATmakeSymbol("imports libstratego-lib", 0, ATtrue));
ATprotect(&(term277));
term277 = term276;
ATprotect(&(term278));
term278 = (ATerm) ATmakeAppl(sym__2, term275, term277);
ATprotect(&(term279));
term279 = term278;
ATprotect(&(term280));
term280 = (ATerm) ATmakeAppl(ATmakeSymbol("Debug with argument", 0, ATtrue));
ATprotect(&(term281));
term281 = term280;
ATprotect(&(term282));
term282 = (ATerm) ATmakeAppl(ATmakeSymbol("Hey", 0, ATtrue));
ATprotect(&(term283));
term283 = term282;
ATprotect(&(term284));
term284 = (ATerm) ATmakeInt(3);
ATprotect(&(term285));
term285 = term284;
ATprotect(&(term286));
term286 = (ATerm) ATmakeInt(2);
ATprotect(&(term287));
term287 = term286;
ATprotect(&(term288));
term288 = (ATerm) ATmakeInt(1);
ATprotect(&(term289));
term289 = term288;
ATprotect(&(term290));
term290 = (ATerm) ATmakeAppl(ATmakeSymbol("Hallo", 0, ATtrue));
ATprotect(&(term291));
term291 = term290;
ATprotect(&(term292));
term292 = (ATerm) ATmakeAppl(ATmakeSymbol("He", 0, ATtrue));
ATprotect(&(term293));
term293 = term292;
ATprotect(&(term294));
term294 = (ATerm) ATmakeAppl(ATmakeSymbol("Print something to stderr using fprintnl", 0, ATtrue));
ATprotect(&(term295));
term295 = term294;
ATprotect(&(term296));
term296 = (ATerm) ATmakeAppl(sym_stderr_0);
ATprotect(&(term297));
term297 = term296;
ATprotect(&(term298));
term298 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term299));
term299 = term298;
ATprotect(&(term300));
term300 = (ATerm) ATmakeAppl(ATmakeSymbol("Debug", 0, ATtrue));
ATprotect(&(term301));
term301 = term300;
ATprotect(&(term302));
term302 = (ATerm) ATmakeAppl(ATmakeSymbol("test.aterm", 0, ATtrue));
ATprotect(&(term303));
term303 = term302;
ATprotect(&(term304));
term304 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm string IO -- 4", 0, ATtrue));
ATprotect(&(term305));
term305 = term304;
ATprotect(&(term306));
term306 = (ATerm) ATmakeAppl(sym_None_0);
ATprotect(&(term307));
term307 = term306;
ATprotect(&(term308));
term308 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm IO -- 1", 0, ATtrue));
ATprotect(&(term309));
term309 = term308;
ATprotect(&(term310));
term310 = (ATerm) ATmakeAppl(ATmakeSymbol("Bla Bla Bla", 0, ATtrue));
ATprotect(&(term311));
term311 = term310;
ATprotect(&(term312));
term312 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm IO -- 2", 0, ATtrue));
ATprotect(&(term313));
term313 = term312;
ATprotect(&(term314));
term314 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm IO -- 3", 0, ATtrue));
ATprotect(&(term315));
term315 = term314;
ATprotect(&(term316));
term316 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm IO -- 4", 0, ATtrue));
ATprotect(&(term317));
term317 = term316;
ATprotect(&(term318));
term318 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm from String -- 1", 0, ATtrue));
ATprotect(&(term319));
term319 = term318;
ATprotect(&(term320));
term320 = (ATerm) ATmakeAppl(ATmakeSymbol("[1,2,3]", 0, ATtrue));
ATprotect(&(term321));
term321 = term320;
ATprotect(&(term322));
term322 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm to String -- 1", 0, ATtrue));
ATprotect(&(term323));
term323 = term322;
ATprotect(&(term324));
term324 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm string IO -- 1", 0, ATtrue));
ATprotect(&(term325));
term325 = term324;
ATprotect(&(term326));
term326 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm string IO -- 2", 0, ATtrue));
ATprotect(&(term327));
term327 = term326;
ATprotect(&(term328));
term328 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm string IO -- 3", 0, ATtrue));
ATprotect(&(term329));
term329 = term328;
ATprotect(&(term330));
term330 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
ATprotect(&(term331));
term331 = term330;
ATprotect(&(term332));
term332 = (ATerm) ATmakeAppl(sym__2, term303, term331);
ATprotect(&(term333));
term333 = term332;
ATprotect(&(term334));
term334 = (ATerm) ATmakeAppl(sym__2, term303, term269);
ATprotect(&(term335));
term335 = term334;
ATprotect(&(term336));
term336 = (ATerm) ATmakeAppl(ATmakeSymbol("Multiple open file streams", 0, ATtrue));
ATprotect(&(term337));
term337 = term336;
ATprotect(&(term338));
term338 = (ATerm) ATmakeAppl(ATmakeSymbol("test1.aterm", 0, ATtrue));
ATprotect(&(term339));
term339 = term338;
ATprotect(&(term340));
term340 = (ATerm) ATmakeAppl(sym__2, term339, term331);
ATprotect(&(term341));
term341 = term340;
ATprotect(&(term342));
term342 = (ATerm) ATmakeAppl(ATmakeSymbol("test2.aterm", 0, ATtrue));
ATprotect(&(term343));
term343 = term342;
ATprotect(&(term344));
term344 = (ATerm) ATmakeAppl(sym__2, term343, term331);
ATprotect(&(term345));
term345 = term344;
ATprotect(&(term346));
term346 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
ATprotect(&(term347));
term347 = term346;
ATprotect(&(term348));
term348 = (ATerm) ATmakeAppl(ATmakeSymbol("test2", 0, ATtrue));
ATprotect(&(term349));
term349 = term348;
ATprotect(&(term350));
term350 = (ATerm) ATmakeAppl(ATmakeSymbol("fputc applied to a term that is not a stream", 0, ATtrue));
ATprotect(&(term351));
term351 = term350;
ATprotect(&(term352));
term352 = (ATerm) ATmakeInt(97);
ATprotect(&(term353));
term353 = term352;
ATprotect(&(term354));
term354 = (ATerm) ATmakeAppl(sym_Stream_1, term33);
ATprotect(&(term355));
term355 = term354;
ATprotect(&(term356));
term356 = (ATerm) ATmakeAppl(ATmakeSymbol("fputs applied to a term that is not a stream", 0, ATtrue));
ATprotect(&(term357));
term357 = term356;
ATprotect(&(term358));
term358 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
ATprotect(&(term359));
term359 = term358;
ATprotect(&(term360));
term360 = (ATerm) ATmakeAppl(ATmakeSymbol("stdout char output test -- 1", 0, ATtrue));
ATprotect(&(term361));
term361 = term360;
ATprotect(&(term362));
term362 = (ATerm) ATmakeAppl(ATmakeSymbol("This is stdout (1)", 0, ATtrue));
ATprotect(&(term363));
term363 = term362;
ATprotect(&(term364));
term364 = (ATerm) ATmakeAppl(ATmakeSymbol("This is stdout (2)\n", 0, ATtrue));
ATprotect(&(term365));
term365 = term364;
ATprotect(&(term366));
term366 = (ATerm) ATmakeAppl(ATmakeSymbol("write a text file with fputc", 0, ATtrue));
ATprotect(&(term367));
term367 = term366;
ATprotect(&(term368));
term368 = (ATerm) ATmakeAppl(ATmakeSymbol("text-file.tmp", 0, ATtrue));
ATprotect(&(term369));
term369 = term368;
ATprotect(&(term370));
term370 = (ATerm) ATmakeAppl(ATmakeSymbol("This is a test file\nIt can be removed.", 0, ATtrue));
ATprotect(&(term371));
term371 = term370;
ATprotect(&(term372));
term372 = (ATerm) ATmakeAppl(ATmakeSymbol("read a text file with fgetc", 0, ATtrue));
ATprotect(&(term373));
term373 = term372;
ATprotect(&(term374));
term374 = (ATerm) ATmakeAppl(ATmakeSymbol("write a text file with fputs", 0, ATtrue));
ATprotect(&(term375));
term375 = term374;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm map_1_0 (StrSL sl, StrCL t_45, ATerm t);
ATerm read_text_line_0_0 (StrSL sl, ATerm t);
ATerm read_text_from_stream_0_0 (StrSL sl, ATerm t);
ATerm getenv_0_0 (StrSL sl, ATerm t);
ATerm remove_file_0_0 (StrSL sl, ATerm t);
ATerm get_extension_0_0 (StrSL sl, ATerm t);
ATerm remove_extension_0_0 (StrSL sl, ATerm t);
ATerm test_extension_1_0 (StrSL sl, StrCL r_18, ATerm t);
ATerm has_extension_0_1 (StrSL sl, ATerm q_18, ATerm t);
ATerm guarantee_extension_0_1 (StrSL sl, ATerm p_18, ATerm t);
ATerm base_filename_0_0 (StrSL sl, ATerm t);
ATerm dirname_0_0 (StrSL sl, ATerm t);
ATerm fgetc_0_0 (StrSL sl, ATerm t);
ATerm fputc_0_0 (StrSL sl, ATerm t);
ATerm fputs_0_0 (StrSL sl, ATerm t);
ATerm fclose_0_0 (StrSL sl, ATerm t);
ATerm fopen_0_0 (StrSL sl, ATerm t);
ATerm stderr_stream_0_0 (StrSL sl, ATerm t);
ATerm stdout_stream_0_0 (StrSL sl, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL e_18, ATerm t);
ATerm debug_0_0 (StrSL sl, ATerm t);
ATerm fprintnl_0_0 (StrSL sl, ATerm t);
ATerm write_to_string_0_0 (StrSL sl, ATerm t);
ATerm read_from_string_0_0 (StrSL sl, ATerm t);
ATerm read_from_stream_0_0 (StrSL sl, ATerm t);
ATerm write_in_text_to_stream_0_0 (StrSL sl, ATerm t);
ATerm write_in_taf_to_stream_0_0 (StrSL sl, ATerm t);
ATerm write_in_baf_to_stream_0_0 (StrSL sl, ATerm t);
ATerm write_to_stream_0_0 (StrSL sl, ATerm t);
ATerm WriteToTextFile_0_0 (StrSL sl, ATerm t);
ATerm ReadFromFile_0_0 (StrSL sl, ATerm t);
ATerm explode_string_0_0 (StrSL sl, ATerm t);
ATerm implode_string_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm apply_and_fail_3_0 (StrSL sl, StrCL z_6, StrCL a_7, StrCL b_7, ATerm t);
ATerm apply_and_check_4_0 (StrSL sl, StrCL v_6, StrCL w_6, StrCL x_6, StrCL y_6, ATerm t);
ATerm apply_test_3_0 (StrSL sl, StrCL s_6, StrCL t_6, StrCL u_6, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL o_6, StrCL p_6, StrCL q_6, StrCL r_6, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL m_6, StrCL n_6, ATerm t);
ATerm copy_file_0_0 (StrSL sl, ATerm t);
static ATerm lifted385 (StrSL sl, ATerm t);
ATerm write_text_file_c_0_0 (StrSL sl, ATerm t);
ATerm write_text_file_0_0 (StrSL sl, ATerm t);
static ATerm j_4 (StrSL sl, ATerm t);
ATerm read_text_file_2_0_0 (StrSL sl, ATerm t);
ATerm my_read_text_file_0_0 (StrSL sl, ATerm t);
static ATerm lifted384 (StrSL sl, ATerm t);
static ATerm lifted383 (StrSL sl, ATerm t);
static ATerm lifted381 (StrSL sl, ATerm t);
static ATerm lifted380 (StrSL sl, ATerm t);
static ATerm lifted379 (StrSL sl, ATerm t);
static ATerm lifted378 (StrSL sl, ATerm t);
static ATerm lifted377 (StrSL sl, ATerm t);
static ATerm lifted376 (StrSL sl, ATerm t);
static ATerm lifted375 (StrSL sl, ATerm t);
static ATerm lifted373 (StrSL sl, ATerm t);
static ATerm lifted372 (StrSL sl, ATerm t);
static ATerm lifted371 (StrSL sl, ATerm t);
static ATerm lifted370 (StrSL sl, ATerm t);
static ATerm lifted369 (StrSL sl, ATerm t);
static ATerm lifted368 (StrSL sl, ATerm t);
static ATerm lifted367 (StrSL sl, ATerm t);
static ATerm lifted366 (StrSL sl, ATerm t);
static ATerm lifted365 (StrSL sl, ATerm t);
ATerm char_output_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted361 (StrSL sl, ATerm t);
static ATerm lifted360 (StrSL sl, ATerm t);
static ATerm lifted359 (StrSL sl, ATerm t);
static ATerm lifted358 (StrSL sl, ATerm t);
static ATerm lifted357 (StrSL sl, ATerm t);
static ATerm lifted356 (StrSL sl, ATerm t);
static ATerm lifted355 (StrSL sl, ATerm t);
static ATerm lifted354 (StrSL sl, ATerm t);
static ATerm lifted353 (StrSL sl, ATerm t);
static ATerm lifted352 (StrSL sl, ATerm t);
static ATerm lifted351 (StrSL sl, ATerm t);
static ATerm lifted350 (StrSL sl, ATerm t);
static ATerm lifted364 (StrSL sl, ATerm t);
static ATerm lifted363 (StrSL sl, ATerm t);
static ATerm lifted362 (StrSL sl, ATerm t);
ATerm file_stream_tests_0_0 (StrSL sl, ATerm t);
ATerm write_read_term_1_0 (StrSL sl, StrCL f_3, ATerm t);
static ATerm lifted345 (StrSL sl, ATerm t);
static ATerm lifted344 (StrSL sl, ATerm t);
static ATerm lifted343 (StrSL sl, ATerm t);
static ATerm lifted342 (StrSL sl, ATerm t);
static ATerm lifted341 (StrSL sl, ATerm t);
static ATerm lifted340 (StrSL sl, ATerm t);
static ATerm lifted339 (StrSL sl, ATerm t);
static ATerm lifted338 (StrSL sl, ATerm t);
static ATerm lifted349 (StrSL sl, ATerm t);
static ATerm lifted348 (StrSL sl, ATerm t);
static ATerm lifted347 (StrSL sl, ATerm t);
static ATerm lifted346 (StrSL sl, ATerm t);
ATerm aterm_io_tests_1_0 (StrSL sl, StrCL c_3, ATerm t);
static ATerm lifted333 (StrSL sl, ATerm t);
static ATerm lifted332 (StrSL sl, ATerm t);
static ATerm lifted330 (StrSL sl, ATerm t);
static ATerm lifted329 (StrSL sl, ATerm t);
static ATerm lifted328 (StrSL sl, ATerm t);
static ATerm lifted326 (StrSL sl, ATerm t);
static ATerm lifted325 (StrSL sl, ATerm t);
static ATerm lifted324 (StrSL sl, ATerm t);
static ATerm lifted322 (StrSL sl, ATerm t);
static ATerm lifted321 (StrSL sl, ATerm t);
static ATerm lifted320 (StrSL sl, ATerm t);
static ATerm lifted318 (StrSL sl, ATerm t);
static ATerm lifted317 (StrSL sl, ATerm t);
static ATerm lifted316 (StrSL sl, ATerm t);
static ATerm lifted314 (StrSL sl, ATerm t);
static ATerm lifted313 (StrSL sl, ATerm t);
static ATerm lifted312 (StrSL sl, ATerm t);
static ATerm lifted310 (StrSL sl, ATerm t);
static ATerm lifted309 (StrSL sl, ATerm t);
static ATerm lifted308 (StrSL sl, ATerm t);
static ATerm lifted306 (StrSL sl, ATerm t);
static ATerm lifted305 (StrSL sl, ATerm t);
static ATerm lifted304 (StrSL sl, ATerm t);
static ATerm lifted302 (StrSL sl, ATerm t);
static ATerm lifted301 (StrSL sl, ATerm t);
static ATerm lifted300 (StrSL sl, ATerm t);
static ATerm lifted298 (StrSL sl, ATerm t);
static ATerm lifted337 (StrSL sl, ATerm t);
static ATerm lifted336 (StrSL sl, ATerm t);
static ATerm lifted334 (StrSL sl, ATerm t);
ATerm aterm_io_tests_0_0 (StrSL sl, ATerm t);
ATerm test_write_read_term_string_0_0 (StrSL sl, ATerm t);
ATerm test_write_read_term_0_0 (StrSL sl, ATerm t);
static ATerm lifted289 (StrSL sl, ATerm t);
static ATerm lifted288 (StrSL sl, ATerm t);
static ATerm lifted286 (StrSL sl, ATerm t);
static ATerm lifted285 (StrSL sl, ATerm t);
static ATerm lifted284 (StrSL sl, ATerm t);
static ATerm lifted283 (StrSL sl, ATerm t);
static ATerm lifted282 (StrSL sl, ATerm t);
static ATerm lifted281 (StrSL sl, ATerm t);
static ATerm lifted280 (StrSL sl, ATerm t);
static ATerm lifted279 (StrSL sl, ATerm t);
static ATerm lifted278 (StrSL sl, ATerm t);
static ATerm lifted277 (StrSL sl, ATerm t);
static ATerm lifted276 (StrSL sl, ATerm t);
static ATerm lifted275 (StrSL sl, ATerm t);
static ATerm lifted274 (StrSL sl, ATerm t);
static ATerm lifted294 (StrSL sl, ATerm t);
static ATerm lifted293 (StrSL sl, ATerm t);
static ATerm lifted292 (StrSL sl, ATerm t);
static ATerm lifted291 (StrSL sl, ATerm t);
static ATerm lifted290 (StrSL sl, ATerm t);
ATerm fprint_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted273 (StrSL sl, ATerm t);
static ATerm lifted272 (StrSL sl, ATerm t);
static ATerm lifted271 (StrSL sl, ATerm t);
static ATerm lifted270 (StrSL sl, ATerm t);
ATerm char_io_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted269 (StrSL sl, ATerm t);
static ATerm lifted268 (StrSL sl, ATerm t);
static ATerm lifted267 (StrSL sl, ATerm t);
static ATerm lifted266 (StrSL sl, ATerm t);
ATerm copy_file_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted261 (StrSL sl, ATerm t);
static ATerm lifted260 (StrSL sl, ATerm t);
static ATerm lifted258 (StrSL sl, ATerm t);
static ATerm lifted257 (StrSL sl, ATerm t);
static ATerm lifted256 (StrSL sl, ATerm t);
static ATerm lifted254 (StrSL sl, ATerm t);
static ATerm lifted253 (StrSL sl, ATerm t);
static ATerm lifted252 (StrSL sl, ATerm t);
static ATerm lifted250 (StrSL sl, ATerm t);
static ATerm lifted249 (StrSL sl, ATerm t);
static ATerm lifted248 (StrSL sl, ATerm t);
static ATerm lifted246 (StrSL sl, ATerm t);
static ATerm lifted245 (StrSL sl, ATerm t);
static ATerm lifted244 (StrSL sl, ATerm t);
static ATerm lifted242 (StrSL sl, ATerm t);
static ATerm lifted241 (StrSL sl, ATerm t);
static ATerm lifted240 (StrSL sl, ATerm t);
static ATerm lifted238 (StrSL sl, ATerm t);
static ATerm lifted237 (StrSL sl, ATerm t);
static ATerm lifted236 (StrSL sl, ATerm t);
static ATerm lifted234 (StrSL sl, ATerm t);
static ATerm lifted233 (StrSL sl, ATerm t);
static ATerm lifted232 (StrSL sl, ATerm t);
static ATerm lifted230 (StrSL sl, ATerm t);
static ATerm lifted265 (StrSL sl, ATerm t);
static ATerm lifted264 (StrSL sl, ATerm t);
static ATerm lifted262 (StrSL sl, ATerm t);
ATerm dirname_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted225 (StrSL sl, ATerm t);
static ATerm lifted224 (StrSL sl, ATerm t);
static ATerm lifted223 (StrSL sl, ATerm t);
static ATerm lifted222 (StrSL sl, ATerm t);
static ATerm lifted221 (StrSL sl, ATerm t);
static ATerm lifted219 (StrSL sl, ATerm t);
static ATerm lifted218 (StrSL sl, ATerm t);
static ATerm lifted217 (StrSL sl, ATerm t);
static ATerm lifted215 (StrSL sl, ATerm t);
static ATerm lifted214 (StrSL sl, ATerm t);
static ATerm lifted213 (StrSL sl, ATerm t);
static ATerm lifted212 (StrSL sl, ATerm t);
static ATerm lifted211 (StrSL sl, ATerm t);
static ATerm lifted210 (StrSL sl, ATerm t);
static ATerm lifted209 (StrSL sl, ATerm t);
static ATerm lifted207 (StrSL sl, ATerm t);
static ATerm lifted206 (StrSL sl, ATerm t);
static ATerm lifted204 (StrSL sl, ATerm t);
static ATerm lifted203 (StrSL sl, ATerm t);
static ATerm lifted202 (StrSL sl, ATerm t);
static ATerm lifted200 (StrSL sl, ATerm t);
static ATerm lifted199 (StrSL sl, ATerm t);
static ATerm lifted198 (StrSL sl, ATerm t);
static ATerm lifted196 (StrSL sl, ATerm t);
static ATerm lifted195 (StrSL sl, ATerm t);
static ATerm lifted194 (StrSL sl, ATerm t);
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
static ATerm lifted106 (StrSL sl, ATerm t);
static ATerm lifted105 (StrSL sl, ATerm t);
static ATerm lifted104 (StrSL sl, ATerm t);
static ATerm lifted102 (StrSL sl, ATerm t);
static ATerm lifted101 (StrSL sl, ATerm t);
static ATerm lifted100 (StrSL sl, ATerm t);
static ATerm lifted98 (StrSL sl, ATerm t);
static ATerm lifted97 (StrSL sl, ATerm t);
static ATerm lifted96 (StrSL sl, ATerm t);
static ATerm lifted94 (StrSL sl, ATerm t);
static ATerm lifted93 (StrSL sl, ATerm t);
static ATerm lifted92 (StrSL sl, ATerm t);
static ATerm lifted90 (StrSL sl, ATerm t);
static ATerm lifted89 (StrSL sl, ATerm t);
static ATerm lifted88 (StrSL sl, ATerm t);
static ATerm lifted86 (StrSL sl, ATerm t);
static ATerm lifted85 (StrSL sl, ATerm t);
static ATerm lifted84 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted229 (StrSL sl, ATerm t);
static ATerm lifted228 (StrSL sl, ATerm t);
static ATerm lifted227 (StrSL sl, ATerm t);
static ATerm lifted226 (StrSL sl, ATerm t);
ATerm file_extension_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
ATerm base_filename_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm write_text_file_c_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "write_text_file_c_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
sl_init_var(0, u_4);
if(match_cons(t, sym__2))
{
s_4 = ATgetArgument(t, 0);
t_4 = ATgetArgument(t, 1);
}
else
goto fail344 ;
t = (ATerm) ATmakeAppl(sym__2, s_4, term331);
t = fopen_0_0(sl, t);
if((t == NULL))
goto fail344 ;
if((u_4 == NULL))
{
u_4 = t;
}
else
if((u_4 != t))
goto fail344 ;
t = t_4;
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail344 ;
{
struct str_closure o_89 = { &(lifted385) , &(frame) };
StrCL lifted385_cl = &(o_89);
t = map_1_0(sl, lifted385_cl, t);
if((t == NULL))
goto fail344 ;
v_4 = t;
if((u_4 == NULL))
goto fail344 ;
else
{
t = u_4;
}
t = fclose_0_0(sl, t);
if((t == NULL))
goto fail344 ;
t = v_4;
t = term299;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail344 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted385 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted385";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_4 = NULL,x_4 = NULL;
x_4 = t;
w_4 = t;
if((sl_readvar(0, sl) == NULL))
goto fail345 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, w_4, sl_readvar(0, sl));
}
t = fputc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail345 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail345 :
--__tracing_table_counter;
return(NULL);
}
ATerm write_text_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "write_text_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
if(match_cons(t, sym__2))
{
o_4 = ATgetArgument(t, 0);
p_4 = ATgetArgument(t, 1);
}
else
goto fail343 ;
t = (ATerm) ATmakeAppl(sym__2, o_4, term331);
t = fopen_0_0(sl, t);
if((t == NULL))
goto fail343 ;
r_4 = t;
q_4 = t;
t = (ATerm) ATmakeAppl(sym__2, p_4, q_4);
t = fputs_0_0(sl, t);
if((t == NULL))
goto fail343 ;
t = fclose_0_0(sl, t);
if((t == NULL))
goto fail343 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail343 :
--__tracing_table_counter;
return(NULL);
}
ATerm read_text_file_2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "read_text_file_2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL;
sl_init_var(0, h_4);
g_4 = t;
t = (ATerm) ATmakeAppl(sym__2, g_4, term269);
t = fopen_0_0(sl, t);
if((t == NULL))
goto fail341 ;
if((h_4 == NULL))
{
h_4 = t;
}
else
if((h_4 != t))
goto fail341 ;
t = j_4(&(frame), t);
if((t == NULL))
goto fail341 ;
i_4 = t;
if((h_4 == NULL))
goto fail341 ;
else
{
t = h_4;
}
t = fclose_0_0(sl, t);
if((t == NULL))
goto fail341 ;
t = i_4;
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail341 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail341 :
--__tracing_table_counter;
return(NULL);
}
static ATerm j_4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "j_4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm2 = t;
ATerm k_4 = NULL,m_4 = NULL,l_4 = NULL,n_4 = NULL;
m_4 = t;
if((sl_readvar(0, sl) == NULL))
goto label5 ;
else
{
t = sl_readvar(0, sl);
}
t = fgetc_0_0(sl_up(sl), t);
if((t == NULL))
goto label5 ;
k_4 = t;
t = m_4;
n_4 = t;
t = term299;
t = j_4(sl, t);
if((t == NULL))
goto label5 ;
l_4 = t;
t = n_4;
{
ATerm trm3;
trm3 = CheckATermList(l_4);
if((trm3 == NULL))
goto label5 ;
t = (ATerm) ATinsert((ATermList)trm3, k_4);
}
goto label4 ;
label5 :
t = trm2;
t = (ATerm) ATempty;
goto label4 ;
label4 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail342 :
--__tracing_table_counter;
return(NULL);
}
ATerm my_read_text_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "my_read_text_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
d_4 = t;
t = (ATerm) ATmakeAppl(sym__2, d_4, term269);
t = fopen_0_0(sl, t);
if((t == NULL))
goto fail340 ;
e_4 = t;
t = read_text_from_stream_0_0(sl, t);
if((t == NULL))
goto fail340 ;
f_4 = t;
t = e_4;
t = fclose_0_0(sl, t);
if((t == NULL))
goto fail340 ;
t = f_4;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail340 :
--__tracing_table_counter;
return(NULL);
}
ATerm char_output_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "char_output_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
sl_init_var(0, s_3);
t_3 = t;
t = stdout_stream_0_0(sl, t);
if((t == NULL))
goto fail321 ;
if((s_3 == NULL))
{
s_3 = t;
}
else
if((s_3 != t))
goto fail321 ;
t = t_3;
{
struct str_closure h_88 = { &(lifted365) , &(frame) };
StrCL lifted365_cl = &(h_88);
struct str_closure j_88 = { &(lifted366) , &(frame) };
StrCL lifted366_cl = &(j_88);
struct str_closure k_88 = { &(lifted367) , &(frame) };
StrCL lifted367_cl = &(k_88);
struct str_closure m_88 = { &(lifted368) , &(frame) };
StrCL lifted368_cl = &(m_88);
t = apply_test_4_0(sl, lifted365_cl, lifted366_cl, lifted367_cl, lifted368_cl, t);
if((t == NULL))
goto fail321 ;
{
struct str_closure n_88 = { &(lifted369) , &(frame) };
StrCL lifted369_cl = &(n_88);
struct str_closure r_88 = { &(lifted370) , &(frame) };
StrCL lifted370_cl = &(r_88);
struct str_closure t_88 = { &(lifted371) , &(frame) };
StrCL lifted371_cl = &(t_88);
struct str_closure u_88 = { &(lifted372) , &(frame) };
StrCL lifted372_cl = &(u_88);
t = apply_test_4_0(sl, lifted369_cl, lifted370_cl, lifted371_cl, lifted372_cl, t);
if((t == NULL))
goto fail321 ;
{
struct str_closure w_88 = { &(lifted373) , &(frame) };
StrCL lifted373_cl = &(w_88);
struct str_closure x_88 = { &(my_read_text_file_0_0) , sl };
StrCL lifted374_cl = &(x_88);
struct str_closure z_88 = { &(lifted375) , &(frame) };
StrCL lifted375_cl = &(z_88);
struct str_closure a_89 = { &(lifted376) , &(frame) };
StrCL lifted376_cl = &(a_89);
t = apply_test_4_0(sl, lifted373_cl, lifted374_cl, lifted375_cl, lifted376_cl, t);
if((t == NULL))
goto fail321 ;
{
struct str_closure c_89 = { &(lifted377) , &(frame) };
StrCL lifted377_cl = &(c_89);
struct str_closure d_89 = { &(lifted378) , &(frame) };
StrCL lifted378_cl = &(d_89);
struct str_closure f_89 = { &(lifted379) , &(frame) };
StrCL lifted379_cl = &(f_89);
struct str_closure g_89 = { &(lifted380) , &(frame) };
StrCL lifted380_cl = &(g_89);
t = apply_test_4_0(sl, lifted377_cl, lifted378_cl, lifted379_cl, lifted380_cl, t);
if((t == NULL))
goto fail321 ;
{
struct str_closure i_89 = { &(lifted381) , &(frame) };
StrCL lifted381_cl = &(i_89);
struct str_closure j_89 = { &(read_text_file_2_0_0) , sl };
StrCL lifted382_cl = &(j_89);
struct str_closure l_89 = { &(lifted383) , &(frame) };
StrCL lifted383_cl = &(l_89);
struct str_closure m_89 = { &(lifted384) , &(frame) };
StrCL lifted384_cl = &(m_89);
t = apply_test_4_0(sl, lifted381_cl, lifted382_cl, lifted383_cl, lifted384_cl, t);
if((t == NULL))
goto fail321 ;
u_3 = t;
t = term369;
t = remove_file_0_0(sl, t);
if((t == NULL))
goto fail321 ;
t = u_3;
}
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail321 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted384 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted384";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term371;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail339 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted383 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted383";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term369;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail338 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted381 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted381";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term373;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail337 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted380 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted380";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term299;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail336 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted379 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted379";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term371;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail335 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted378 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted378";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_4 = NULL,c_4 = NULL;
c_4 = t;
b_4 = t;
t = (ATerm) ATmakeAppl(sym__2, term369, b_4);
t = write_text_file_0_0(sl_up(sl), t);
if((t == NULL))
goto fail334 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail334 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted377 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted377";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term375;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail333 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted376 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted376";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term371;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail332 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted375 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted375";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term369;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail331 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted373 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted373";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term373;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail330 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted372 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted372";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term299;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail329 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted371 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted371";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term371;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail328 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted370 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted370";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_3 = NULL,a_4 = NULL;
a_4 = t;
z_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term369, z_3);
t = write_text_file_c_0_0(sl_up(sl), t);
if((t == NULL))
goto fail327 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail327 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted369 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted369";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term367;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail326 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted368 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted368";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail325 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail325 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted367 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted367";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail324 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail324 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted366 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted366";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
w_3 = t;
v_3 = t;
t = (ATerm) ATmakeAppl(sym__2, v_3, term363);
t = write_to_stream_0_0(sl_up(sl), t);
if((t == NULL))
goto fail323 ;
y_3 = t;
x_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term365, x_3);
t = fputs_0_0(sl_up(sl), t);
if((t == NULL))
goto fail323 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail323 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted365 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted365";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term361;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail322 :
--__tracing_table_counter;
return(NULL);
}
ATerm file_stream_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "file_stream_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm i_3 = NULL,j_3 = NULL;
sl_init_var(0, i_3);
sl_init_var(1, j_3);
{
struct str_closure l_87 = { &(lifted362) , &(frame) };
StrCL lifted362_cl = &(l_87);
struct str_closure m_87 = { &(lifted363) , &(frame) };
StrCL lifted363_cl = &(m_87);
struct str_closure n_87 = { &(lifted364) , &(frame) };
StrCL lifted364_cl = &(n_87);
struct str_closure p_87 = { &(lifted350) , &(frame) };
StrCL lifted350_cl = &(p_87);
struct str_closure r_87 = { &(lifted351) , &(frame) };
StrCL lifted351_cl = &(r_87);
struct str_closure s_87 = { &(lifted352) , &(frame) };
StrCL lifted352_cl = &(s_87);
t = apply_and_fail_3_0(sl, lifted350_cl, lifted351_cl, lifted352_cl, t);
if((t == NULL))
goto fail305 ;
{
struct str_closure u_87 = { &(lifted353) , &(frame) };
StrCL lifted353_cl = &(u_87);
struct str_closure v_87 = { &(lifted354) , &(frame) };
StrCL lifted354_cl = &(v_87);
struct str_closure x_87 = { &(lifted355) , &(frame) };
StrCL lifted355_cl = &(x_87);
t = apply_and_fail_3_0(sl, lifted353_cl, lifted354_cl, lifted355_cl, t);
if((t == NULL))
goto fail305 ;
{
struct str_closure y_87 = { &(lifted356) , &(frame) };
StrCL lifted356_cl = &(y_87);
struct str_closure a_88 = { &(lifted357) , &(frame) };
StrCL lifted357_cl = &(a_88);
struct str_closure b_88 = { &(lifted358) , &(frame) };
StrCL lifted358_cl = &(b_88);
t = apply_and_fail_3_0(sl, lifted356_cl, lifted357_cl, lifted358_cl, t);
if((t == NULL))
goto fail305 ;
{
struct str_closure d_88 = { &(lifted359) , &(frame) };
StrCL lifted359_cl = &(d_88);
struct str_closure e_88 = { &(lifted360) , &(frame) };
StrCL lifted360_cl = &(e_88);
struct str_closure g_88 = { &(lifted361) , &(frame) };
StrCL lifted361_cl = &(g_88);
t = apply_and_fail_3_0(sl, lifted359_cl, lifted360_cl, lifted361_cl, t);
if((t == NULL))
goto fail305 ;
t = apply_test_3_0(sl, lifted362_cl, lifted363_cl, lifted364_cl, t);
if((t == NULL))
goto fail305 ;
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail305 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted361 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted361";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term355;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail320 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted360 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted360";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_3 = NULL,r_3 = NULL;
r_3 = t;
q_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term359, q_3);
t = fputc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail319 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail319 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted359 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted359";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term357;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail318 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted358 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted358";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term299;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail317 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted357 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted357";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_3 = NULL,p_3 = NULL;
p_3 = t;
o_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term359, o_3);
t = fputs_0_0(sl_up(sl), t);
if((t == NULL))
goto fail316 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail316 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted356 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted356";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term357;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail315 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted355 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted355";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term355;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail314 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted354 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted354";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_3 = NULL,n_3 = NULL;
n_3 = t;
m_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term353, m_3);
t = fputc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail313 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail313 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted353 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted353";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term351;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail312 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted352 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted352";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term299;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail311 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted351 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted351";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_3 = NULL,l_3 = NULL;
l_3 = t;
k_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term353, k_3);
t = fputc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail310 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail310 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted350 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted350";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term351;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail309 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted364 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted364";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term299;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail308 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted363 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted363";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term341;
t = fopen_0_0(sl_up(sl), t);
if((t == NULL))
goto fail307 ;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail307 ;
t = term345;
t = fopen_0_0(sl_up(sl), t);
if((t == NULL))
goto fail307 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail307 ;
if((sl_readvar(0, sl) == NULL))
goto fail307 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), term347);
}
t = write_in_text_to_stream_0_0(sl_up(sl), t);
if((t == NULL))
goto fail307 ;
if((sl_readvar(1, sl) == NULL))
goto fail307 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(1, sl), term349);
}
t = write_in_text_to_stream_0_0(sl_up(sl), t);
if((t == NULL))
goto fail307 ;
if((sl_readvar(0, sl) == NULL))
goto fail307 ;
else
{
t = sl_readvar(0, sl);
}
t = fclose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail307 ;
if((sl_readvar(1, sl) == NULL))
goto fail307 ;
else
{
t = sl_readvar(1, sl);
}
t = fclose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail307 ;
t = term339;
t = ReadFromFile_0_0(sl_up(sl), t);
if((t == NULL))
goto fail307 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("test1", 0, ATtrue))))
goto fail307 ;
t = term343;
t = ReadFromFile_0_0(sl_up(sl), t);
if((t == NULL))
goto fail307 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("test2", 0, ATtrue))))
goto fail307 ;
t = term339;
t = remove_file_0_0(sl_up(sl), t);
if((t == NULL))
goto fail307 ;
t = term343;
t = remove_file_0_0(sl_up(sl), t);
if((t == NULL))
goto fail307 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail307 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted362 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted362";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term337;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail306 :
--__tracing_table_counter;
return(NULL);
}
ATerm write_read_term_1_0 (StrSL sl, StrCL f_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "write_read_term_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_3 = NULL,g_3 = NULL,h_3 = NULL,e_3 = NULL;
d_3 = t;
t = term333;
t = fopen_0_0(sl, t);
if((t == NULL))
goto fail304 ;
h_3 = t;
g_3 = t;
t = (ATerm) ATmakeAppl(sym__2, g_3, d_3);
t = cl_fun(f_3)(cl_sl(f_3), t);
if((t == NULL))
goto fail304 ;
t = fclose_0_0(sl, t);
if((t == NULL))
goto fail304 ;
t = term335;
t = fopen_0_0(sl, t);
if((t == NULL))
goto fail304 ;
e_3 = t;
t = read_from_stream_0_0(sl, t);
if((t == NULL))
goto fail304 ;
if(!((d_3 == t)))
goto fail304 ;
t = e_3;
t = fclose_0_0(sl, t);
if((t == NULL))
goto fail304 ;
t = term303;
t = remove_file_0_0(sl, t);
if((t == NULL))
goto fail304 ;
t = d_3;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail304 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_io_tests_1_0 (StrSL sl, StrCL c_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_io_tests_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, c_3);
{
struct str_closure v_86 = { &(lifted346) , &(frame) };
StrCL lifted346_cl = &(v_86);
struct str_closure w_86 = { &(lifted347) , &(frame) };
StrCL lifted347_cl = &(w_86);
struct str_closure z_86 = { &(lifted348) , &(frame) };
StrCL lifted348_cl = &(z_86);
struct str_closure b_87 = { &(lifted349) , &(frame) };
StrCL lifted349_cl = &(b_87);
struct str_closure c_87 = { &(lifted338) , &(frame) };
StrCL lifted338_cl = &(c_87);
struct str_closure d_87 = { &(lifted339) , &(frame) };
StrCL lifted339_cl = &(d_87);
struct str_closure e_87 = { &(lifted340) , &(frame) };
StrCL lifted340_cl = &(e_87);
struct str_closure g_87 = { &(lifted341) , &(frame) };
StrCL lifted341_cl = &(g_87);
t = apply_test_4_0(sl, lifted338_cl, lifted339_cl, lifted340_cl, lifted341_cl, t);
if((t == NULL))
goto fail291 ;
{
struct str_closure h_87 = { &(lifted342) , &(frame) };
StrCL lifted342_cl = &(h_87);
struct str_closure i_87 = { &(lifted343) , &(frame) };
StrCL lifted343_cl = &(i_87);
struct str_closure j_87 = { &(lifted344) , &(frame) };
StrCL lifted344_cl = &(j_87);
struct str_closure k_87 = { &(lifted345) , &(frame) };
StrCL lifted345_cl = &(k_87);
t = apply_test_4_0(sl, lifted342_cl, lifted343_cl, lifted344_cl, lifted345_cl, t);
if((t == NULL))
goto fail291 ;
t = apply_test_4_0(sl, lifted346_cl, lifted347_cl, lifted348_cl, lifted349_cl, t);
if((t == NULL))
goto fail291 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail291 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted345 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted345";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term289;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail303 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted344 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted344";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term289;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail302 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted343 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted343";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = write_read_term_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail301 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail301 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted342 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted342";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term315;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail300 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted341 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted341";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term311;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail299 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted340 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted340";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term311;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail298 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted339 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted339";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = write_read_term_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail297 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail297 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted338 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted338";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term309;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail296 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted349 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted349";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term307;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail295 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted348 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted348";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term307;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail294 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted347 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted347";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = write_read_term_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail293 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail293 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted346 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted346";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term317;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail292 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_io_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_io_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_83 = { &(lifted334) , &(frame) };
StrCL lifted334_cl = &(p_83);
struct str_closure r_83 = { &(test_write_read_term_string_0_0) , sl };
StrCL lifted335_cl = &(r_83);
struct str_closure s_83 = { &(lifted336) , &(frame) };
StrCL lifted336_cl = &(s_83);
struct str_closure u_83 = { &(lifted337) , &(frame) };
StrCL lifted337_cl = &(u_83);
struct str_closure v_83 = { &(write_in_baf_to_stream_0_0) , sl };
StrCL lifted295_cl = &(v_83);
t = aterm_io_tests_1_0(sl, lifted295_cl, t);
if((t == NULL))
goto fail260 ;
{
struct str_closure x_83 = { &(write_in_taf_to_stream_0_0) , sl };
StrCL lifted296_cl = &(x_83);
t = aterm_io_tests_1_0(sl, lifted296_cl, t);
if((t == NULL))
goto fail260 ;
{
struct str_closure y_83 = { &(write_in_text_to_stream_0_0) , sl };
StrCL lifted297_cl = &(y_83);
t = aterm_io_tests_1_0(sl, lifted297_cl, t);
if((t == NULL))
goto fail260 ;
{
struct str_closure a_84 = { &(lifted298) , &(frame) };
StrCL lifted298_cl = &(a_84);
struct str_closure b_84 = { &(test_write_read_term_0_0) , sl };
StrCL lifted299_cl = &(b_84);
struct str_closure d_84 = { &(lifted300) , &(frame) };
StrCL lifted300_cl = &(d_84);
struct str_closure e_84 = { &(lifted301) , &(frame) };
StrCL lifted301_cl = &(e_84);
t = apply_test_4_0(sl, lifted298_cl, lifted299_cl, lifted300_cl, lifted301_cl, t);
if((t == NULL))
goto fail260 ;
{
struct str_closure g_84 = { &(lifted302) , &(frame) };
StrCL lifted302_cl = &(g_84);
struct str_closure h_84 = { &(test_write_read_term_0_0) , sl };
StrCL lifted303_cl = &(h_84);
struct str_closure w_84 = { &(lifted304) , &(frame) };
StrCL lifted304_cl = &(w_84);
struct str_closure y_84 = { &(lifted305) , &(frame) };
StrCL lifted305_cl = &(y_84);
t = apply_test_4_0(sl, lifted302_cl, lifted303_cl, lifted304_cl, lifted305_cl, t);
if((t == NULL))
goto fail260 ;
{
struct str_closure z_84 = { &(lifted306) , &(frame) };
StrCL lifted306_cl = &(z_84);
struct str_closure a_85 = { &(test_write_read_term_0_0) , sl };
StrCL lifted307_cl = &(a_85);
struct str_closure b_85 = { &(lifted308) , &(frame) };
StrCL lifted308_cl = &(b_85);
struct str_closure k_85 = { &(lifted309) , &(frame) };
StrCL lifted309_cl = &(k_85);
t = apply_test_4_0(sl, lifted306_cl, lifted307_cl, lifted308_cl, lifted309_cl, t);
if((t == NULL))
goto fail260 ;
{
struct str_closure l_85 = { &(lifted310) , &(frame) };
StrCL lifted310_cl = &(l_85);
struct str_closure m_85 = { &(test_write_read_term_0_0) , sl };
StrCL lifted311_cl = &(m_85);
struct str_closure n_85 = { &(lifted312) , &(frame) };
StrCL lifted312_cl = &(n_85);
struct str_closure p_85 = { &(lifted313) , &(frame) };
StrCL lifted313_cl = &(p_85);
t = apply_test_4_0(sl, lifted310_cl, lifted311_cl, lifted312_cl, lifted313_cl, t);
if((t == NULL))
goto fail260 ;
{
struct str_closure q_85 = { &(lifted314) , &(frame) };
StrCL lifted314_cl = &(q_85);
struct str_closure r_85 = { &(read_from_string_0_0) , sl };
StrCL lifted315_cl = &(r_85);
struct str_closure s_85 = { &(lifted316) , &(frame) };
StrCL lifted316_cl = &(s_85);
struct str_closure t_85 = { &(lifted317) , &(frame) };
StrCL lifted317_cl = &(t_85);
t = apply_test_4_0(sl, lifted314_cl, lifted315_cl, lifted316_cl, lifted317_cl, t);
if((t == NULL))
goto fail260 ;
{
struct str_closure u_85 = { &(lifted318) , &(frame) };
StrCL lifted318_cl = &(u_85);
struct str_closure g_86 = { &(write_to_string_0_0) , sl };
StrCL lifted319_cl = &(g_86);
struct str_closure h_86 = { &(lifted320) , &(frame) };
StrCL lifted320_cl = &(h_86);
struct str_closure i_86 = { &(lifted321) , &(frame) };
StrCL lifted321_cl = &(i_86);
t = apply_test_4_0(sl, lifted318_cl, lifted319_cl, lifted320_cl, lifted321_cl, t);
if((t == NULL))
goto fail260 ;
{
struct str_closure j_86 = { &(lifted322) , &(frame) };
StrCL lifted322_cl = &(j_86);
struct str_closure k_86 = { &(test_write_read_term_string_0_0) , sl };
StrCL lifted323_cl = &(k_86);
struct str_closure l_86 = { &(lifted324) , &(frame) };
StrCL lifted324_cl = &(l_86);
struct str_closure m_86 = { &(lifted325) , &(frame) };
StrCL lifted325_cl = &(m_86);
t = apply_test_4_0(sl, lifted322_cl, lifted323_cl, lifted324_cl, lifted325_cl, t);
if((t == NULL))
goto fail260 ;
{
struct str_closure n_86 = { &(lifted326) , &(frame) };
StrCL lifted326_cl = &(n_86);
struct str_closure o_86 = { &(test_write_read_term_string_0_0) , sl };
StrCL lifted327_cl = &(o_86);
struct str_closure p_86 = { &(lifted328) , &(frame) };
StrCL lifted328_cl = &(p_86);
struct str_closure q_86 = { &(lifted329) , &(frame) };
StrCL lifted329_cl = &(q_86);
t = apply_test_4_0(sl, lifted326_cl, lifted327_cl, lifted328_cl, lifted329_cl, t);
if((t == NULL))
goto fail260 ;
{
struct str_closure r_86 = { &(lifted330) , &(frame) };
StrCL lifted330_cl = &(r_86);
struct str_closure s_86 = { &(test_write_read_term_string_0_0) , sl };
StrCL lifted331_cl = &(s_86);
struct str_closure t_86 = { &(lifted332) , &(frame) };
StrCL lifted332_cl = &(t_86);
struct str_closure u_86 = { &(lifted333) , &(frame) };
StrCL lifted333_cl = &(u_86);
t = apply_test_4_0(sl, lifted330_cl, lifted331_cl, lifted332_cl, lifted333_cl, t);
if((t == NULL))
goto fail260 ;
t = apply_test_4_0(sl, lifted334_cl, lifted335_cl, lifted336_cl, lifted337_cl, t);
if((t == NULL))
goto fail260 ;
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
fail260 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted333 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted333";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term289;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail290 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted332 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted332";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term289;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail289 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted330 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted330";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term329;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail288 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted329 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted329";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term299;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail287 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted328 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted328";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term299;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail286 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted326 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted326";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term327;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail285 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted325 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted325";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term311;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail284 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted324 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted324";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term311;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail283 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted322 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted322";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term325;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail282 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted321 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted321";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term321;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail281 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted320 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted320";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term285), term287), term289);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail280 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted318 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted318";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term323;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail279 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted317 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted317";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term285), term287), term289);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail278 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted316 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted316";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term321;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail277 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted314 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted314";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term319;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail276 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted313 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted313";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term307;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail275 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted312 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted312";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term307;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail274 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted310 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted310";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term317;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail273 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted309 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted309";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term289;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail272 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted308 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted308";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term289;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail271 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted306 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted306";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term315;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail270 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted305 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted305";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term299;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail269 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted304 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted304";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term299;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail268 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted302 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted302";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term313;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail267 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted301 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted301";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term311;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail266 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted300 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted300";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term311;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail265 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted298 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted298";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term309;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail264 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted337 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted337";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term307;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail263 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted336 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted336";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term307;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail262 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted334 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted334";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term305;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail261 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_write_read_term_string_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_write_read_term_string_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_3 = NULL;
b_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term303, b_3);
t = WriteToTextFile_0_0(sl, t);
if((t == NULL))
goto fail259 ;
t = term303;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto fail259 ;
if(!((b_3 == t)))
goto fail259 ;
t = term303;
t = remove_file_0_0(sl, t);
if((t == NULL))
goto fail259 ;
t = b_3;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail259 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_write_read_term_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_write_read_term_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_3 = NULL;
a_3 = t;
t = (ATerm) ATmakeAppl(sym__2, term303, a_3);
t = WriteToTextFile_0_0(sl, t);
if((t == NULL))
goto fail258 ;
t = term303;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto fail258 ;
if(!((a_3 == t)))
goto fail258 ;
t = term303;
t = remove_file_0_0(sl, t);
if((t == NULL))
goto fail258 ;
t = a_3;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail258 :
--__tracing_table_counter;
return(NULL);
}
ATerm fprint_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fprint_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_82 = { &(lifted290) , &(frame) };
StrCL lifted290_cl = &(l_82);
struct str_closure m_82 = { &(lifted291) , &(frame) };
StrCL lifted291_cl = &(m_82);
struct str_closure o_82 = { &(lifted293) , &(frame) };
StrCL lifted293_cl = &(o_82);
struct str_closure p_82 = { &(lifted294) , &(frame) };
StrCL lifted294_cl = &(p_82);
struct str_closure r_82 = { &(lifted274) , &(frame) };
StrCL lifted274_cl = &(r_82);
struct str_closure s_82 = { &(lifted275) , &(frame) };
StrCL lifted275_cl = &(s_82);
struct str_closure u_82 = { &(lifted276) , &(frame) };
StrCL lifted276_cl = &(u_82);
struct str_closure v_82 = { &(lifted277) , &(frame) };
StrCL lifted277_cl = &(v_82);
t = apply_test_4_0(sl, lifted274_cl, lifted275_cl, lifted276_cl, lifted277_cl, t);
if((t == NULL))
goto fail237 ;
{
struct str_closure x_82 = { &(lifted278) , &(frame) };
StrCL lifted278_cl = &(x_82);
struct str_closure y_82 = { &(lifted279) , &(frame) };
StrCL lifted279_cl = &(y_82);
struct str_closure a_83 = { &(lifted280) , &(frame) };
StrCL lifted280_cl = &(a_83);
struct str_closure b_83 = { &(lifted281) , &(frame) };
StrCL lifted281_cl = &(b_83);
t = apply_test_4_0(sl, lifted278_cl, lifted279_cl, lifted280_cl, lifted281_cl, t);
if((t == NULL))
goto fail237 ;
{
struct str_closure d_83 = { &(lifted282) , &(frame) };
StrCL lifted282_cl = &(d_83);
struct str_closure e_83 = { &(lifted283) , &(frame) };
StrCL lifted283_cl = &(e_83);
struct str_closure g_83 = { &(lifted284) , &(frame) };
StrCL lifted284_cl = &(g_83);
struct str_closure h_83 = { &(lifted285) , &(frame) };
StrCL lifted285_cl = &(h_83);
t = apply_test_4_0(sl, lifted282_cl, lifted283_cl, lifted284_cl, lifted285_cl, t);
if((t == NULL))
goto fail237 ;
{
struct str_closure j_83 = { &(lifted286) , &(frame) };
StrCL lifted286_cl = &(j_83);
struct str_closure l_83 = { &(debug_0_0) , sl };
StrCL lifted287_cl = &(l_83);
struct str_closure m_83 = { &(lifted288) , &(frame) };
StrCL lifted288_cl = &(m_83);
struct str_closure o_83 = { &(lifted289) , &(frame) };
StrCL lifted289_cl = &(o_83);
t = apply_test_4_0(sl, lifted286_cl, lifted287_cl, lifted288_cl, lifted289_cl, t);
if((t == NULL))
goto fail237 ;
t = apply_test_4_0(sl, lifted290_cl, lifted291_cl, lifted293_cl, lifted294_cl, t);
if((t == NULL))
goto fail237 ;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail237 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted289 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted289";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term285), term287), term289), term291), term293), term283);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail257 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted288 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted288";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term285), term287), term289), term291), term293), term283);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail256 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted286 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted286";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term301;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail255 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted285 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted285";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term299;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail254 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted284 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted284";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term285), term287), term289), term291), term293), term283);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail253 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted283 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted283";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_2 = NULL,z_2 = NULL;
z_2 = t;
y_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term297, y_2);
t = fprintnl_0_0(sl_up(sl), t);
if((t == NULL))
goto fail252 ;
t = term299;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail252 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted282 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted282";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term295;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail251 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted281 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted281";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term299;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail250 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted280 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted280";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term291), term293), term283);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail249 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted279 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted279";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_2 = NULL,w_2 = NULL,v_2 = NULL,x_2 = NULL;
w_2 = t;
t = term299;
t = stderr_stream_0_0(sl_up(sl), t);
if((t == NULL))
goto fail248 ;
u_2 = t;
t = w_2;
x_2 = t;
v_2 = t;
t = (ATerm) ATmakeAppl(sym__2, u_2, v_2);
t = fprintnl_0_0(sl_up(sl), t);
if((t == NULL))
goto fail248 ;
t = term299;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail248 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted278 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted278";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term295;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail247 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted277 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted277";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term299;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail246 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted276 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted276";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term283);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail245 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted275 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted275";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_2 = NULL,t_2 = NULL;
t_2 = t;
s_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term297, s_2);
t = fprintnl_0_0(sl_up(sl), t);
if((t == NULL))
goto fail244 ;
t = term299;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail244 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted274 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted274";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term295;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail243 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted294 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted294";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term285), term287), term289), term291), term293);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail242 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted293 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted293";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term285), term287), term289), term291), term293);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail241 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted291 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted291";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_82 = { &(lifted292) , &(frame) };
StrCL lifted292_cl = &(j_82);
t = debug_1_0(sl_up(sl), lifted292_cl, t);
if((t == NULL))
goto fail239 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail239 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted292 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted292";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term283;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail240 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted290 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted290";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term281;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail238 :
--__tracing_table_counter;
return(NULL);
}
ATerm char_io_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "char_io_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL;
sl_init_var(0, l_2);
m_2 = t;
t = term271;
t = fopen_0_0(sl, t);
if((t == NULL))
goto fail232 ;
if((l_2 == NULL))
{
l_2 = t;
}
else
if((l_2 != t))
goto fail232 ;
t = m_2;
{
struct str_closure e_82 = { &(lifted270) , &(frame) };
StrCL lifted270_cl = &(e_82);
struct str_closure f_82 = { &(lifted271) , &(frame) };
StrCL lifted271_cl = &(f_82);
struct str_closure g_82 = { &(lifted272) , &(frame) };
StrCL lifted272_cl = &(g_82);
struct str_closure h_82 = { &(lifted273) , &(frame) };
StrCL lifted273_cl = &(h_82);
t = apply_test_4_0(sl, lifted270_cl, lifted271_cl, lifted272_cl, lifted273_cl, t);
if((t == NULL))
goto fail232 ;
n_2 = t;
if((l_2 == NULL))
goto fail232 ;
else
{
t = l_2;
}
t = fclose_0_0(sl, t);
if((t == NULL))
goto fail232 ;
t = n_2;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail232 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted273 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted273";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term279;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail236 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted272 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted272";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail235 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail235 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted271 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted271";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_2 = NULL,q_2 = NULL,p_2 = NULL,r_2 = NULL;
q_2 = t;
t = read_text_line_0_0(sl_up(sl), t);
if((t == NULL))
goto fail234 ;
o_2 = t;
t = q_2;
r_2 = t;
t = read_text_line_0_0(sl_up(sl), t);
if((t == NULL))
goto fail234 ;
p_2 = t;
t = r_2;
t = (ATerm) ATmakeAppl(sym__2, o_2, p_2);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail234 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted270 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted270";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term273;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail233 :
--__tracing_table_counter;
return(NULL);
}
ATerm copy_file_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "copy_file_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm c_2 = NULL;
sl_init_var(0, c_2);
{
struct str_closure z_81 = { &(lifted266) , &(frame) };
StrCL lifted266_cl = &(z_81);
struct str_closure a_82 = { &(lifted267) , &(frame) };
StrCL lifted267_cl = &(a_82);
struct str_closure c_82 = { &(lifted268) , &(frame) };
StrCL lifted268_cl = &(c_82);
struct str_closure d_82 = { &(lifted269) , &(frame) };
StrCL lifted269_cl = &(d_82);
t = apply_and_check_4_0(sl, lifted266_cl, lifted267_cl, lifted268_cl, lifted269_cl, t);
if((t == NULL))
goto fail227 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail227 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted269 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted269";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym__2))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail231 ;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 1);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 1)))
goto fail231 ;
}
else
goto fail231 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail231 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted268 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted268";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term267;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail230 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted267 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted267";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,j_2 = NULL,i_2 = NULL,k_2 = NULL,e_2 = NULL;
d_2 = t;
g_2 = t;
f_2 = t;
t = (ATerm) ATmakeAppl(sym__2, f_2, term265);
t = copy_file_0_0(sl_up(sl), t);
if((t == NULL))
goto fail229 ;
t = d_2;
j_2 = t;
t = my_read_text_file_0_0(sl_up(sl), t);
if((t == NULL))
goto fail229 ;
h_2 = t;
t = j_2;
k_2 = t;
t = term265;
t = my_read_text_file_0_0(sl_up(sl), t);
if((t == NULL))
goto fail229 ;
i_2 = t;
t = k_2;
t = (ATerm) ATmakeAppl(sym__2, h_2, i_2);
e_2 = t;
t = term265;
t = remove_file_0_0(sl_up(sl), t);
if((t == NULL))
goto fail229 ;
t = e_2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail229 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted266 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted266";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term263;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail228 :
--__tracing_table_counter;
return(NULL);
}
ATerm dirname_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "dirname_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_80 = { &(lifted262) , &(frame) };
StrCL lifted262_cl = &(h_80);
struct str_closure i_80 = { &(dirname_0_0) , sl };
StrCL lifted263_cl = &(i_80);
struct str_closure j_80 = { &(lifted264) , &(frame) };
StrCL lifted264_cl = &(j_80);
struct str_closure k_80 = { &(lifted265) , &(frame) };
StrCL lifted265_cl = &(k_80);
struct str_closure l_80 = { &(lifted230) , &(frame) };
StrCL lifted230_cl = &(l_80);
struct str_closure m_80 = { &(dirname_0_0) , sl };
StrCL lifted231_cl = &(m_80);
struct str_closure n_80 = { &(lifted232) , &(frame) };
StrCL lifted232_cl = &(n_80);
struct str_closure o_80 = { &(lifted233) , &(frame) };
StrCL lifted233_cl = &(o_80);
t = apply_test_4_0(sl, lifted230_cl, lifted231_cl, lifted232_cl, lifted233_cl, t);
if((t == NULL))
goto fail199 ;
{
struct str_closure p_80 = { &(lifted234) , &(frame) };
StrCL lifted234_cl = &(p_80);
struct str_closure q_80 = { &(dirname_0_0) , sl };
StrCL lifted235_cl = &(q_80);
struct str_closure r_80 = { &(lifted236) , &(frame) };
StrCL lifted236_cl = &(r_80);
struct str_closure s_80 = { &(lifted237) , &(frame) };
StrCL lifted237_cl = &(s_80);
t = apply_test_4_0(sl, lifted234_cl, lifted235_cl, lifted236_cl, lifted237_cl, t);
if((t == NULL))
goto fail199 ;
{
struct str_closure t_80 = { &(lifted238) , &(frame) };
StrCL lifted238_cl = &(t_80);
struct str_closure u_80 = { &(dirname_0_0) , sl };
StrCL lifted239_cl = &(u_80);
struct str_closure v_80 = { &(lifted240) , &(frame) };
StrCL lifted240_cl = &(v_80);
struct str_closure w_80 = { &(lifted241) , &(frame) };
StrCL lifted241_cl = &(w_80);
t = apply_test_4_0(sl, lifted238_cl, lifted239_cl, lifted240_cl, lifted241_cl, t);
if((t == NULL))
goto fail199 ;
{
struct str_closure y_80 = { &(lifted242) , &(frame) };
StrCL lifted242_cl = &(y_80);
struct str_closure z_80 = { &(dirname_0_0) , sl };
StrCL lifted243_cl = &(z_80);
struct str_closure a_81 = { &(lifted244) , &(frame) };
StrCL lifted244_cl = &(a_81);
struct str_closure b_81 = { &(lifted245) , &(frame) };
StrCL lifted245_cl = &(b_81);
t = apply_test_4_0(sl, lifted242_cl, lifted243_cl, lifted244_cl, lifted245_cl, t);
if((t == NULL))
goto fail199 ;
{
struct str_closure c_81 = { &(lifted246) , &(frame) };
StrCL lifted246_cl = &(c_81);
struct str_closure d_81 = { &(dirname_0_0) , sl };
StrCL lifted247_cl = &(d_81);
struct str_closure e_81 = { &(lifted248) , &(frame) };
StrCL lifted248_cl = &(e_81);
struct str_closure f_81 = { &(lifted249) , &(frame) };
StrCL lifted249_cl = &(f_81);
t = apply_test_4_0(sl, lifted246_cl, lifted247_cl, lifted248_cl, lifted249_cl, t);
if((t == NULL))
goto fail199 ;
{
struct str_closure g_81 = { &(lifted250) , &(frame) };
StrCL lifted250_cl = &(g_81);
struct str_closure h_81 = { &(dirname_0_0) , sl };
StrCL lifted251_cl = &(h_81);
struct str_closure i_81 = { &(lifted252) , &(frame) };
StrCL lifted252_cl = &(i_81);
struct str_closure j_81 = { &(lifted253) , &(frame) };
StrCL lifted253_cl = &(j_81);
t = apply_test_4_0(sl, lifted250_cl, lifted251_cl, lifted252_cl, lifted253_cl, t);
if((t == NULL))
goto fail199 ;
{
struct str_closure n_81 = { &(lifted254) , &(frame) };
StrCL lifted254_cl = &(n_81);
struct str_closure o_81 = { &(dirname_0_0) , sl };
StrCL lifted255_cl = &(o_81);
struct str_closure p_81 = { &(lifted256) , &(frame) };
StrCL lifted256_cl = &(p_81);
struct str_closure q_81 = { &(lifted257) , &(frame) };
StrCL lifted257_cl = &(q_81);
t = apply_test_4_0(sl, lifted254_cl, lifted255_cl, lifted256_cl, lifted257_cl, t);
if((t == NULL))
goto fail199 ;
{
struct str_closure t_81 = { &(lifted258) , &(frame) };
StrCL lifted258_cl = &(t_81);
struct str_closure u_81 = { &(dirname_0_0) , sl };
StrCL lifted259_cl = &(u_81);
struct str_closure w_81 = { &(lifted260) , &(frame) };
StrCL lifted260_cl = &(w_81);
struct str_closure x_81 = { &(lifted261) , &(frame) };
StrCL lifted261_cl = &(x_81);
t = apply_test_4_0(sl, lifted258_cl, lifted259_cl, lifted260_cl, lifted261_cl, t);
if((t == NULL))
goto fail199 ;
t = apply_test_4_0(sl, lifted262_cl, lifted263_cl, lifted264_cl, lifted265_cl, t);
if((t == NULL))
goto fail199 ;
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
fail199 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted261 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted261";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term227;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail226 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted260 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted260";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term261;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail225 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted258 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted258";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term259;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail224 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted257 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted257";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail223 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted256 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted256";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term257;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail222 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted254 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted254";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term255;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail221 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted253 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted253";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail220 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted252 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted252";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term253;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail219 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted250 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted250";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term251;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail218 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted249 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted249";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term231;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail217 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted248 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted248";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term249;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail216 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted246 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted246";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term247;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail215 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted245 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted245";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term231;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail214 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted244 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted244";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term245;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail213 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted242 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted242";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term243;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail212 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted241 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted241";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term237;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail211 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted240 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted240";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term241;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail210 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted238 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted238";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term239;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail209 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted237 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted237";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term237;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail208 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted236 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted236";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term235;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail207 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted234 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted234";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term233;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail206 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted233 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted233";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term231;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail205 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted232 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted232";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term231;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail204 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted230 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted230";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term229;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail203 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted265 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted265";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term227;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail202 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted264 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted264";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term225;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail201 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted262 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted262";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term223;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail200 :
--__tracing_table_counter;
return(NULL);
}
ATerm file_extension_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "file_extension_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_70 = { &(lifted226) , &(frame) };
StrCL lifted226_cl = &(m_70);
struct str_closure n_70 = { &(lifted227) , &(frame) };
StrCL lifted227_cl = &(n_70);
struct str_closure o_70 = { &(lifted229) , &(frame) };
StrCL lifted229_cl = &(o_70);
struct str_closure p_70 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(p_70);
struct str_closure q_70 = { &(remove_extension_0_0) , sl };
StrCL lifted19_cl = &(q_70);
struct str_closure r_70 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(r_70);
struct str_closure s_70 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(s_70);
t = apply_test_4_0(sl, lifted18_cl, lifted19_cl, lifted20_cl, lifted21_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure t_70 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(t_70);
struct str_closure u_70 = { &(remove_extension_0_0) , sl };
StrCL lifted23_cl = &(u_70);
struct str_closure w_70 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(w_70);
struct str_closure x_70 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(x_70);
t = apply_test_4_0(sl, lifted22_cl, lifted23_cl, lifted24_cl, lifted25_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure y_70 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(y_70);
struct str_closure z_70 = { &(remove_extension_0_0) , sl };
StrCL lifted27_cl = &(z_70);
struct str_closure a_71 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(a_71);
struct str_closure b_71 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(b_71);
t = apply_test_4_0(sl, lifted26_cl, lifted27_cl, lifted28_cl, lifted29_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure d_71 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(d_71);
struct str_closure e_71 = { &(remove_extension_0_0) , sl };
StrCL lifted31_cl = &(e_71);
struct str_closure f_71 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(f_71);
struct str_closure g_71 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(g_71);
t = apply_test_4_0(sl, lifted30_cl, lifted31_cl, lifted32_cl, lifted33_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure h_71 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(h_71);
struct str_closure i_71 = { &(remove_extension_0_0) , sl };
StrCL lifted35_cl = &(i_71);
struct str_closure k_71 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(k_71);
struct str_closure l_71 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(l_71);
t = apply_test_4_0(sl, lifted34_cl, lifted35_cl, lifted36_cl, lifted37_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure m_71 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(m_71);
struct str_closure n_71 = { &(remove_extension_0_0) , sl };
StrCL lifted39_cl = &(n_71);
struct str_closure o_71 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(o_71);
struct str_closure p_71 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(p_71);
t = apply_test_4_0(sl, lifted38_cl, lifted39_cl, lifted40_cl, lifted41_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure r_71 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(r_71);
struct str_closure s_71 = { &(remove_extension_0_0) , sl };
StrCL lifted43_cl = &(s_71);
struct str_closure t_71 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(t_71);
struct str_closure u_71 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(u_71);
t = apply_test_4_0(sl, lifted42_cl, lifted43_cl, lifted44_cl, lifted45_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure v_71 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(v_71);
struct str_closure w_71 = { &(remove_extension_0_0) , sl };
StrCL lifted47_cl = &(w_71);
struct str_closure y_71 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(y_71);
struct str_closure z_71 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(z_71);
t = apply_test_4_0(sl, lifted46_cl, lifted47_cl, lifted48_cl, lifted49_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure a_72 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(a_72);
struct str_closure b_72 = { &(remove_extension_0_0) , sl };
StrCL lifted51_cl = &(b_72);
struct str_closure c_72 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(c_72);
struct str_closure d_72 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(d_72);
t = apply_test_4_0(sl, lifted50_cl, lifted51_cl, lifted52_cl, lifted53_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure f_72 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(f_72);
struct str_closure g_72 = { &(remove_extension_0_0) , sl };
StrCL lifted55_cl = &(g_72);
struct str_closure i_72 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(i_72);
struct str_closure j_72 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(j_72);
t = apply_test_4_0(sl, lifted54_cl, lifted55_cl, lifted56_cl, lifted57_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure l_72 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(l_72);
struct str_closure m_72 = { &(remove_extension_0_0) , sl };
StrCL lifted59_cl = &(m_72);
struct str_closure o_72 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(o_72);
struct str_closure p_72 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(p_72);
t = apply_test_4_0(sl, lifted58_cl, lifted59_cl, lifted60_cl, lifted61_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure q_72 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(q_72);
struct str_closure r_72 = { &(remove_extension_0_0) , sl };
StrCL lifted63_cl = &(r_72);
struct str_closure s_72 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(s_72);
struct str_closure t_72 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(t_72);
t = apply_test_4_0(sl, lifted62_cl, lifted63_cl, lifted64_cl, lifted65_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure u_72 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(u_72);
struct str_closure v_72 = { &(remove_extension_0_0) , sl };
StrCL lifted67_cl = &(v_72);
struct str_closure w_72 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(w_72);
struct str_closure x_72 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(x_72);
t = apply_test_4_0(sl, lifted66_cl, lifted67_cl, lifted68_cl, lifted69_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure y_72 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(y_72);
struct str_closure z_72 = { &(remove_extension_0_0) , sl };
StrCL lifted71_cl = &(z_72);
struct str_closure a_73 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(a_73);
struct str_closure b_73 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(b_73);
t = apply_test_4_0(sl, lifted70_cl, lifted71_cl, lifted72_cl, lifted73_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure c_73 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(c_73);
struct str_closure d_73 = { &(remove_extension_0_0) , sl };
StrCL lifted75_cl = &(d_73);
struct str_closure e_73 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(e_73);
struct str_closure f_73 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(f_73);
t = apply_test_4_0(sl, lifted74_cl, lifted75_cl, lifted76_cl, lifted77_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure g_73 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(g_73);
struct str_closure h_73 = { &(remove_extension_0_0) , sl };
StrCL lifted79_cl = &(h_73);
struct str_closure i_73 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(i_73);
struct str_closure j_73 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(j_73);
t = apply_test_4_0(sl, lifted78_cl, lifted79_cl, lifted80_cl, lifted81_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure k_73 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(k_73);
struct str_closure l_73 = { &(remove_extension_0_0) , sl };
StrCL lifted83_cl = &(l_73);
struct str_closure m_73 = { &(lifted84) , &(frame) };
StrCL lifted84_cl = &(m_73);
struct str_closure n_73 = { &(lifted85) , &(frame) };
StrCL lifted85_cl = &(n_73);
t = apply_test_4_0(sl, lifted82_cl, lifted83_cl, lifted84_cl, lifted85_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure o_73 = { &(lifted86) , &(frame) };
StrCL lifted86_cl = &(o_73);
struct str_closure p_73 = { &(remove_extension_0_0) , sl };
StrCL lifted87_cl = &(p_73);
struct str_closure q_73 = { &(lifted88) , &(frame) };
StrCL lifted88_cl = &(q_73);
struct str_closure r_73 = { &(lifted89) , &(frame) };
StrCL lifted89_cl = &(r_73);
t = apply_test_4_0(sl, lifted86_cl, lifted87_cl, lifted88_cl, lifted89_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure s_73 = { &(lifted90) , &(frame) };
StrCL lifted90_cl = &(s_73);
struct str_closure t_73 = { &(remove_extension_0_0) , sl };
StrCL lifted91_cl = &(t_73);
struct str_closure u_73 = { &(lifted92) , &(frame) };
StrCL lifted92_cl = &(u_73);
struct str_closure v_73 = { &(lifted93) , &(frame) };
StrCL lifted93_cl = &(v_73);
t = apply_test_4_0(sl, lifted90_cl, lifted91_cl, lifted92_cl, lifted93_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure w_73 = { &(lifted94) , &(frame) };
StrCL lifted94_cl = &(w_73);
struct str_closure x_73 = { &(remove_extension_0_0) , sl };
StrCL lifted95_cl = &(x_73);
struct str_closure y_73 = { &(lifted96) , &(frame) };
StrCL lifted96_cl = &(y_73);
struct str_closure z_73 = { &(lifted97) , &(frame) };
StrCL lifted97_cl = &(z_73);
t = apply_test_4_0(sl, lifted94_cl, lifted95_cl, lifted96_cl, lifted97_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure a_74 = { &(lifted98) , &(frame) };
StrCL lifted98_cl = &(a_74);
struct str_closure b_74 = { &(remove_extension_0_0) , sl };
StrCL lifted99_cl = &(b_74);
struct str_closure c_74 = { &(lifted100) , &(frame) };
StrCL lifted100_cl = &(c_74);
struct str_closure d_74 = { &(lifted101) , &(frame) };
StrCL lifted101_cl = &(d_74);
t = apply_test_4_0(sl, lifted98_cl, lifted99_cl, lifted100_cl, lifted101_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure e_74 = { &(lifted102) , &(frame) };
StrCL lifted102_cl = &(e_74);
struct str_closure f_74 = { &(remove_extension_0_0) , sl };
StrCL lifted103_cl = &(f_74);
struct str_closure g_74 = { &(lifted104) , &(frame) };
StrCL lifted104_cl = &(g_74);
struct str_closure i_74 = { &(lifted105) , &(frame) };
StrCL lifted105_cl = &(i_74);
t = apply_test_4_0(sl, lifted102_cl, lifted103_cl, lifted104_cl, lifted105_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure k_74 = { &(lifted106) , &(frame) };
StrCL lifted106_cl = &(k_74);
struct str_closure l_74 = { &(remove_extension_0_0) , sl };
StrCL lifted107_cl = &(l_74);
struct str_closure n_74 = { &(lifted108) , &(frame) };
StrCL lifted108_cl = &(n_74);
struct str_closure o_74 = { &(lifted109) , &(frame) };
StrCL lifted109_cl = &(o_74);
t = apply_test_4_0(sl, lifted106_cl, lifted107_cl, lifted108_cl, lifted109_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure q_74 = { &(lifted110) , &(frame) };
StrCL lifted110_cl = &(q_74);
struct str_closure r_74 = { &(lifted111) , &(frame) };
StrCL lifted111_cl = &(r_74);
struct str_closure t_74 = { &(lifted112) , &(frame) };
StrCL lifted112_cl = &(t_74);
struct str_closure u_74 = { &(lifted113) , &(frame) };
StrCL lifted113_cl = &(u_74);
t = apply_test_4_0(sl, lifted110_cl, lifted111_cl, lifted112_cl, lifted113_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure w_74 = { &(lifted114) , &(frame) };
StrCL lifted114_cl = &(w_74);
struct str_closure x_74 = { &(lifted115) , &(frame) };
StrCL lifted115_cl = &(x_74);
struct str_closure z_74 = { &(lifted116) , &(frame) };
StrCL lifted116_cl = &(z_74);
struct str_closure a_75 = { &(lifted117) , &(frame) };
StrCL lifted117_cl = &(a_75);
t = apply_test_4_0(sl, lifted114_cl, lifted115_cl, lifted116_cl, lifted117_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure c_75 = { &(lifted118) , &(frame) };
StrCL lifted118_cl = &(c_75);
struct str_closure d_75 = { &(lifted119) , &(frame) };
StrCL lifted119_cl = &(d_75);
struct str_closure f_75 = { &(lifted120) , &(frame) };
StrCL lifted120_cl = &(f_75);
struct str_closure g_75 = { &(lifted121) , &(frame) };
StrCL lifted121_cl = &(g_75);
t = apply_test_4_0(sl, lifted118_cl, lifted119_cl, lifted120_cl, lifted121_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure i_75 = { &(lifted122) , &(frame) };
StrCL lifted122_cl = &(i_75);
struct str_closure k_75 = { &(lifted123) , &(frame) };
StrCL lifted123_cl = &(k_75);
struct str_closure l_75 = { &(lifted124) , &(frame) };
StrCL lifted124_cl = &(l_75);
struct str_closure n_75 = { &(lifted125) , &(frame) };
StrCL lifted125_cl = &(n_75);
t = apply_test_4_0(sl, lifted122_cl, lifted123_cl, lifted124_cl, lifted125_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure o_75 = { &(lifted126) , &(frame) };
StrCL lifted126_cl = &(o_75);
struct str_closure q_75 = { &(lifted127) , &(frame) };
StrCL lifted127_cl = &(q_75);
struct str_closure r_75 = { &(lifted128) , &(frame) };
StrCL lifted128_cl = &(r_75);
struct str_closure t_75 = { &(lifted129) , &(frame) };
StrCL lifted129_cl = &(t_75);
t = apply_test_4_0(sl, lifted126_cl, lifted127_cl, lifted128_cl, lifted129_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure u_75 = { &(lifted130) , &(frame) };
StrCL lifted130_cl = &(u_75);
struct str_closure w_75 = { &(lifted131) , &(frame) };
StrCL lifted131_cl = &(w_75);
struct str_closure x_75 = { &(lifted132) , &(frame) };
StrCL lifted132_cl = &(x_75);
struct str_closure z_75 = { &(lifted133) , &(frame) };
StrCL lifted133_cl = &(z_75);
t = apply_test_4_0(sl, lifted130_cl, lifted131_cl, lifted132_cl, lifted133_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure a_76 = { &(lifted134) , &(frame) };
StrCL lifted134_cl = &(a_76);
struct str_closure c_76 = { &(lifted135) , &(frame) };
StrCL lifted135_cl = &(c_76);
struct str_closure d_76 = { &(lifted136) , &(frame) };
StrCL lifted136_cl = &(d_76);
struct str_closure f_76 = { &(lifted137) , &(frame) };
StrCL lifted137_cl = &(f_76);
t = apply_test_4_0(sl, lifted134_cl, lifted135_cl, lifted136_cl, lifted137_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure g_76 = { &(lifted138) , &(frame) };
StrCL lifted138_cl = &(g_76);
struct str_closure h_76 = { &(lifted139) , &(frame) };
StrCL lifted139_cl = &(h_76);
struct str_closure j_76 = { &(lifted140) , &(frame) };
StrCL lifted140_cl = &(j_76);
struct str_closure k_76 = { &(lifted141) , &(frame) };
StrCL lifted141_cl = &(k_76);
t = apply_test_4_0(sl, lifted138_cl, lifted139_cl, lifted140_cl, lifted141_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure l_76 = { &(lifted142) , &(frame) };
StrCL lifted142_cl = &(l_76);
struct str_closure m_76 = { &(lifted143) , &(frame) };
StrCL lifted143_cl = &(m_76);
struct str_closure n_76 = { &(lifted144) , &(frame) };
StrCL lifted144_cl = &(n_76);
struct str_closure r_76 = { &(lifted145) , &(frame) };
StrCL lifted145_cl = &(r_76);
t = apply_test_4_0(sl, lifted142_cl, lifted143_cl, lifted144_cl, lifted145_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure s_76 = { &(lifted146) , &(frame) };
StrCL lifted146_cl = &(s_76);
struct str_closure t_76 = { &(lifted147) , &(frame) };
StrCL lifted147_cl = &(t_76);
struct str_closure u_76 = { &(lifted148) , &(frame) };
StrCL lifted148_cl = &(u_76);
struct str_closure v_76 = { &(lifted149) , &(frame) };
StrCL lifted149_cl = &(v_76);
t = apply_test_4_0(sl, lifted146_cl, lifted147_cl, lifted148_cl, lifted149_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure w_76 = { &(lifted150) , &(frame) };
StrCL lifted150_cl = &(w_76);
struct str_closure x_76 = { &(lifted151) , &(frame) };
StrCL lifted151_cl = &(x_76);
struct str_closure y_76 = { &(lifted152) , &(frame) };
StrCL lifted152_cl = &(y_76);
struct str_closure z_76 = { &(lifted153) , &(frame) };
StrCL lifted153_cl = &(z_76);
t = apply_test_4_0(sl, lifted150_cl, lifted151_cl, lifted152_cl, lifted153_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure a_77 = { &(lifted154) , &(frame) };
StrCL lifted154_cl = &(a_77);
struct str_closure b_77 = { &(lifted155) , &(frame) };
StrCL lifted155_cl = &(b_77);
struct str_closure c_77 = { &(lifted156) , &(frame) };
StrCL lifted156_cl = &(c_77);
struct str_closure d_77 = { &(lifted157) , &(frame) };
StrCL lifted157_cl = &(d_77);
t = apply_test_4_0(sl, lifted154_cl, lifted155_cl, lifted156_cl, lifted157_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure e_77 = { &(lifted158) , &(frame) };
StrCL lifted158_cl = &(e_77);
struct str_closure f_77 = { &(lifted159) , &(frame) };
StrCL lifted159_cl = &(f_77);
struct str_closure h_77 = { &(lifted160) , &(frame) };
StrCL lifted160_cl = &(h_77);
struct str_closure i_77 = { &(lifted161) , &(frame) };
StrCL lifted161_cl = &(i_77);
t = apply_test_4_0(sl, lifted158_cl, lifted159_cl, lifted160_cl, lifted161_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure j_77 = { &(lifted162) , &(frame) };
StrCL lifted162_cl = &(j_77);
struct str_closure l_77 = { &(lifted163) , &(frame) };
StrCL lifted163_cl = &(l_77);
struct str_closure m_77 = { &(lifted164) , &(frame) };
StrCL lifted164_cl = &(m_77);
struct str_closure p_77 = { &(lifted165) , &(frame) };
StrCL lifted165_cl = &(p_77);
t = apply_test_4_0(sl, lifted162_cl, lifted163_cl, lifted164_cl, lifted165_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure q_77 = { &(lifted166) , &(frame) };
StrCL lifted166_cl = &(q_77);
struct str_closure r_77 = { &(lifted167) , &(frame) };
StrCL lifted167_cl = &(r_77);
struct str_closure s_77 = { &(lifted168) , &(frame) };
StrCL lifted168_cl = &(s_77);
struct str_closure v_77 = { &(lifted169) , &(frame) };
StrCL lifted169_cl = &(v_77);
t = apply_test_4_0(sl, lifted166_cl, lifted167_cl, lifted168_cl, lifted169_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure w_77 = { &(lifted170) , &(frame) };
StrCL lifted170_cl = &(w_77);
struct str_closure x_77 = { &(lifted171) , &(frame) };
StrCL lifted171_cl = &(x_77);
struct str_closure y_77 = { &(lifted172) , &(frame) };
StrCL lifted172_cl = &(y_77);
struct str_closure z_77 = { &(lifted173) , &(frame) };
StrCL lifted173_cl = &(z_77);
t = apply_test_4_0(sl, lifted170_cl, lifted171_cl, lifted172_cl, lifted173_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure a_78 = { &(lifted174) , &(frame) };
StrCL lifted174_cl = &(a_78);
struct str_closure b_78 = { &(lifted175) , &(frame) };
StrCL lifted175_cl = &(b_78);
struct str_closure c_78 = { &(lifted176) , &(frame) };
StrCL lifted176_cl = &(c_78);
t = apply_test_3_0(sl, lifted174_cl, lifted175_cl, lifted176_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure d_78 = { &(lifted177) , &(frame) };
StrCL lifted177_cl = &(d_78);
struct str_closure e_78 = { &(lifted178) , &(frame) };
StrCL lifted178_cl = &(e_78);
struct str_closure f_78 = { &(lifted179) , &(frame) };
StrCL lifted179_cl = &(f_78);
t = apply_test_3_0(sl, lifted177_cl, lifted178_cl, lifted179_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure g_78 = { &(lifted180) , &(frame) };
StrCL lifted180_cl = &(g_78);
struct str_closure h_78 = { &(lifted181) , &(frame) };
StrCL lifted181_cl = &(h_78);
struct str_closure i_78 = { &(lifted182) , &(frame) };
StrCL lifted182_cl = &(i_78);
t = apply_and_fail_3_0(sl, lifted180_cl, lifted181_cl, lifted182_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure j_78 = { &(lifted183) , &(frame) };
StrCL lifted183_cl = &(j_78);
struct str_closure m_78 = { &(lifted184) , &(frame) };
StrCL lifted184_cl = &(m_78);
struct str_closure n_78 = { &(lifted185) , &(frame) };
StrCL lifted185_cl = &(n_78);
t = apply_and_fail_3_0(sl, lifted183_cl, lifted184_cl, lifted185_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure o_78 = { &(lifted186) , &(frame) };
StrCL lifted186_cl = &(o_78);
struct str_closure p_78 = { &(lifted187) , &(frame) };
StrCL lifted187_cl = &(p_78);
struct str_closure q_78 = { &(lifted188) , &(frame) };
StrCL lifted188_cl = &(q_78);
t = apply_and_fail_3_0(sl, lifted186_cl, lifted187_cl, lifted188_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure r_78 = { &(lifted189) , &(frame) };
StrCL lifted189_cl = &(r_78);
struct str_closure s_78 = { &(lifted190) , &(frame) };
StrCL lifted190_cl = &(s_78);
struct str_closure t_78 = { &(lifted191) , &(frame) };
StrCL lifted191_cl = &(t_78);
t = apply_and_fail_3_0(sl, lifted189_cl, lifted190_cl, lifted191_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure u_78 = { &(lifted192) , &(frame) };
StrCL lifted192_cl = &(u_78);
struct str_closure v_78 = { &(get_extension_0_0) , sl };
StrCL lifted193_cl = &(v_78);
struct str_closure w_78 = { &(lifted194) , &(frame) };
StrCL lifted194_cl = &(w_78);
struct str_closure x_78 = { &(lifted195) , &(frame) };
StrCL lifted195_cl = &(x_78);
t = apply_test_4_0(sl, lifted192_cl, lifted193_cl, lifted194_cl, lifted195_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure c_79 = { &(lifted196) , &(frame) };
StrCL lifted196_cl = &(c_79);
struct str_closure d_79 = { &(get_extension_0_0) , sl };
StrCL lifted197_cl = &(d_79);
struct str_closure e_79 = { &(lifted198) , &(frame) };
StrCL lifted198_cl = &(e_79);
struct str_closure f_79 = { &(lifted199) , &(frame) };
StrCL lifted199_cl = &(f_79);
t = apply_test_4_0(sl, lifted196_cl, lifted197_cl, lifted198_cl, lifted199_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure g_79 = { &(lifted200) , &(frame) };
StrCL lifted200_cl = &(g_79);
struct str_closure h_79 = { &(get_extension_0_0) , sl };
StrCL lifted201_cl = &(h_79);
struct str_closure i_79 = { &(lifted202) , &(frame) };
StrCL lifted202_cl = &(i_79);
struct str_closure j_79 = { &(lifted203) , &(frame) };
StrCL lifted203_cl = &(j_79);
t = apply_test_4_0(sl, lifted200_cl, lifted201_cl, lifted202_cl, lifted203_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure k_79 = { &(lifted204) , &(frame) };
StrCL lifted204_cl = &(k_79);
struct str_closure l_79 = { &(get_extension_0_0) , sl };
StrCL lifted205_cl = &(l_79);
struct str_closure m_79 = { &(lifted206) , &(frame) };
StrCL lifted206_cl = &(m_79);
t = apply_and_fail_3_0(sl, lifted204_cl, lifted205_cl, lifted206_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure n_79 = { &(lifted207) , &(frame) };
StrCL lifted207_cl = &(n_79);
struct str_closure o_79 = { &(get_extension_0_0) , sl };
StrCL lifted208_cl = &(o_79);
struct str_closure p_79 = { &(lifted209) , &(frame) };
StrCL lifted209_cl = &(p_79);
t = apply_and_fail_3_0(sl, lifted207_cl, lifted208_cl, lifted209_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure s_79 = { &(lifted210) , &(frame) };
StrCL lifted210_cl = &(s_79);
struct str_closure t_79 = { &(lifted211) , &(frame) };
StrCL lifted211_cl = &(t_79);
struct str_closure u_79 = { &(lifted213) , &(frame) };
StrCL lifted213_cl = &(u_79);
t = apply_test_3_0(sl, lifted210_cl, lifted211_cl, lifted213_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure w_79 = { &(lifted214) , &(frame) };
StrCL lifted214_cl = &(w_79);
struct str_closure x_79 = { &(lifted215) , &(frame) };
StrCL lifted215_cl = &(x_79);
struct str_closure y_79 = { &(lifted217) , &(frame) };
StrCL lifted217_cl = &(y_79);
t = apply_test_3_0(sl, lifted214_cl, lifted215_cl, lifted217_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure a_80 = { &(lifted218) , &(frame) };
StrCL lifted218_cl = &(a_80);
struct str_closure b_80 = { &(lifted219) , &(frame) };
StrCL lifted219_cl = &(b_80);
struct str_closure c_80 = { &(lifted221) , &(frame) };
StrCL lifted221_cl = &(c_80);
t = apply_and_fail_3_0(sl, lifted218_cl, lifted219_cl, lifted221_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure e_80 = { &(lifted222) , &(frame) };
StrCL lifted222_cl = &(e_80);
struct str_closure f_80 = { &(lifted223) , &(frame) };
StrCL lifted223_cl = &(f_80);
struct str_closure g_80 = { &(lifted225) , &(frame) };
StrCL lifted225_cl = &(g_80);
t = apply_test_3_0(sl, lifted222_cl, lifted223_cl, lifted225_cl, t);
if((t == NULL))
goto fail16 ;
t = apply_test_3_0(sl, lifted226_cl, lifted227_cl, lifted229_cl, t);
if((t == NULL))
goto fail16 ;
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
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted225 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted225";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail198 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted223 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted223";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_80 = { &(lifted224) , &(frame) };
StrCL lifted224_cl = &(d_80);
t = test_extension_1_0(sl_up(sl), lifted224_cl, t);
if((t == NULL))
goto fail196 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail196 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted224 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted224";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("str", 0, ATtrue))))
goto label3 ;
goto label2 ;
label3 :
t = trm1;
if((ATgetSymbol(t) == ATmakeSymbol("rtree", 0, ATtrue)))
goto label2 ;
else
goto fail197 ;
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail197 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted222 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted222";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term221;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail195 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted221 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted221";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail194 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted219 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted219";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_79 = { &(_Id) , sl_up(sl) };
StrCL lifted220_cl = &(z_79);
t = test_extension_1_0(sl_up(sl), lifted220_cl, t);
if((t == NULL))
goto fail193 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail193 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted218 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted218";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term219;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail192 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted217 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted217";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail191 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted215 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted215";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_79 = { &(_Id) , sl_up(sl) };
StrCL lifted216_cl = &(v_79);
t = test_extension_1_0(sl_up(sl), lifted216_cl, t);
if((t == NULL))
goto fail190 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail190 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted214 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted214";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term217;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail189 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted213 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted213";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail188 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted211 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted211";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_79 = { &(lifted212) , &(frame) };
StrCL lifted212_cl = &(q_79);
t = test_extension_1_0(sl_up(sl), lifted212_cl, t);
if((t == NULL))
goto fail186 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail186 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted212 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted212";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("str", 0, ATtrue))))
goto fail187 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail187 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted210 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted210";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term215;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail185 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted209 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted209";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term213;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail184 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted207 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted207";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term211;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail183 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted206 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted206";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail182 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted204 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted204";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term209;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail181 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted203 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted203";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term127;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail180 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted202 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted202";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term207;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail179 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted200 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted200";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term205;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail178 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted199 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted199";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term127;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail177 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted198 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted198";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term185;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail176 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted196 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted196";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term203;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail175 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted195 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted195";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term127;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail174 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted194 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted194";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail173 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted192 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted192";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term201;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail172 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted191 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted191";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term199;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail171 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted190 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted190";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_2 = NULL,b_2 = NULL;
b_2 = t;
t = term127;
a_2 = t;
t = b_2;
t = has_extension_0_1(sl_up(sl), a_2, t);
if((t == NULL))
goto fail170 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail170 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted189 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted189";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term197;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail169 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted188 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted188";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail168 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted187 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted187";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_1 = NULL,z_1 = NULL;
z_1 = t;
t = term195;
y_1 = t;
t = z_1;
t = has_extension_0_1(sl_up(sl), y_1, t);
if((t == NULL))
goto fail167 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail167 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted186 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted186";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term193;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail166 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted185 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted185";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail165 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted184 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted184";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_1 = NULL,x_1 = NULL;
x_1 = t;
t = term127;
w_1 = t;
t = x_1;
t = has_extension_0_1(sl_up(sl), w_1, t);
if((t == NULL))
goto fail164 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail164 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted183 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted183";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term191;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail163 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted182 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted182";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term189;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail162 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted181 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted181";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_1 = NULL,v_1 = NULL;
v_1 = t;
t = term127;
u_1 = t;
t = v_1;
t = has_extension_0_1(sl_up(sl), u_1, t);
if((t == NULL))
goto fail161 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail161 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted180 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted180";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term187;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail160 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted179 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted179";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term185;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail159 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted178 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted178";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_1 = NULL,t_1 = NULL;
t_1 = t;
t = term127;
s_1 = t;
t = t_1;
t = has_extension_0_1(sl_up(sl), s_1, t);
if((t == NULL))
goto fail158 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail158 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted177 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted177";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term183;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail157 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted176 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted176";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail156 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted175 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted175";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_1 = NULL,r_1 = NULL;
r_1 = t;
t = term127;
q_1 = t;
t = r_1;
t = has_extension_0_1(sl_up(sl), q_1, t);
if((t == NULL))
goto fail155 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail155 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted174 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted174";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term181;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail154 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted173 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted173";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term179;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail153 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted172 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted172";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term177;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail152 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted171 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted171";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_1 = NULL,p_1 = NULL;
p_1 = t;
t = term127;
o_1 = t;
t = p_1;
t = guarantee_extension_0_1(sl_up(sl), o_1, t);
if((t == NULL))
goto fail151 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail151 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted170 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted170";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term175;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail150 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted169 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted169";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term173;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail149 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted168 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted168";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term171;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail148 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted167 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted167";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_1 = NULL,n_1 = NULL;
n_1 = t;
t = term127;
m_1 = t;
t = n_1;
t = guarantee_extension_0_1(sl_up(sl), m_1, t);
if((t == NULL))
goto fail147 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail147 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted166 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted166";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term169;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail146 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted165 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted165";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term167;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail145 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted164 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted164";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term165;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail144 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted163 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted163";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_1 = NULL,l_1 = NULL;
l_1 = t;
t = term127;
k_1 = t;
t = l_1;
t = guarantee_extension_0_1(sl_up(sl), k_1, t);
if((t == NULL))
goto fail143 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail143 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted162 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted162";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term163;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail142 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted161 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted161";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term71;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail141 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted160 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted160";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term73;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail140 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted159 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted159";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_1 = NULL,j_1 = NULL;
j_1 = t;
t = term127;
i_1 = t;
t = j_1;
t = guarantee_extension_0_1(sl_up(sl), i_1, t);
if((t == NULL))
goto fail139 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail139 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted158 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted158";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term161;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail138 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted157 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted157";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term71;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail137 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted156 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted156";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term71;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail136 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted155 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted155";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_1 = NULL,h_1 = NULL;
h_1 = t;
t = term127;
g_1 = t;
t = h_1;
t = guarantee_extension_0_1(sl_up(sl), g_1, t);
if((t == NULL))
goto fail135 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail135 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted154 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted154";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term159;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail134 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted153 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted153";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term147;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail133 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted152 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted152";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term157;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail132 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted151 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted151";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_1 = NULL,f_1 = NULL;
f_1 = t;
t = term127;
e_1 = t;
t = f_1;
t = guarantee_extension_0_1(sl_up(sl), e_1, t);
if((t == NULL))
goto fail131 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail131 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted150 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted150";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term155;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail130 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted149 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted149";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term153;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail129 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted148 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted148";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term151;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail128 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted147 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted147";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_1 = NULL,d_1 = NULL;
d_1 = t;
t = term127;
c_1 = t;
t = d_1;
t = guarantee_extension_0_1(sl_up(sl), c_1, t);
if((t == NULL))
goto fail127 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail127 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted146 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted146";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term149;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail126 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted145 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted145";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term147;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail125 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted144 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted144";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term147;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail124 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted143 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted143";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_1 = NULL,b_1 = NULL;
b_1 = t;
t = term127;
a_1 = t;
t = b_1;
t = guarantee_extension_0_1(sl_up(sl), a_1, t);
if((t == NULL))
goto fail123 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail123 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted142 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted142";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term145;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail122 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted141 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted141";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail121 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted140 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted140";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term67;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail120 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted139 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted139";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_0 = NULL,z_0 = NULL;
z_0 = t;
t = term127;
y_0 = t;
t = z_0;
t = guarantee_extension_0_1(sl_up(sl), y_0, t);
if((t == NULL))
goto fail119 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail119 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted138 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted138";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term143;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail118 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted137 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted137";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail117 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted136 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted136";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail116 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted135 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted135";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_0 = NULL,x_0 = NULL;
x_0 = t;
t = term127;
w_0 = t;
t = x_0;
t = guarantee_extension_0_1(sl_up(sl), w_0, t);
if((t == NULL))
goto fail115 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail115 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted134 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted134";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term141;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail114 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted133 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted133";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail113 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted132 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted132";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term139;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail112 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted131 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted131";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_0 = NULL,v_0 = NULL;
v_0 = t;
t = term127;
u_0 = t;
t = v_0;
t = guarantee_extension_0_1(sl_up(sl), u_0, t);
if((t == NULL))
goto fail111 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail111 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted130 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted130";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term137;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail110 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted129 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted129";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail109 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted128 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted128";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail108 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted127 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted127";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_0 = NULL,t_0 = NULL;
t_0 = t;
t = term127;
s_0 = t;
t = t_0;
t = guarantee_extension_0_1(sl_up(sl), s_0, t);
if((t == NULL))
goto fail107 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail107 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted126 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted126";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term135;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail106 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted125 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted125";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail105 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted124 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted124";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail104 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted123 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted123";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_0 = NULL,r_0 = NULL;
r_0 = t;
t = term127;
q_0 = t;
t = r_0;
t = guarantee_extension_0_1(sl_up(sl), q_0, t);
if((t == NULL))
goto fail103 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted122 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted122";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term133;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted121 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted121";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted120 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted120";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted119 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted119";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_0 = NULL,p_0 = NULL;
p_0 = t;
t = term127;
o_0 = t;
t = p_0;
t = guarantee_extension_0_1(sl_up(sl), o_0, t);
if((t == NULL))
goto fail99 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted118 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted118";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term131;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted117 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted117";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted116 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted116";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted115 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted115";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_0 = NULL,n_0 = NULL;
n_0 = t;
t = term127;
m_0 = t;
t = n_0;
t = guarantee_extension_0_1(sl_up(sl), m_0, t);
if((t == NULL))
goto fail95 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted114 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted114";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term129;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted113 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted113";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted112 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted112";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted111 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted111";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_0 = NULL,l_0 = NULL;
l_0 = t;
t = term127;
k_0 = t;
t = l_0;
t = guarantee_extension_0_1(sl_up(sl), k_0, t);
if((t == NULL))
goto fail91 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted110 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted110";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term125;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted109 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted109";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term123;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted108 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted108";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term123;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted106 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted106";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term121;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted105 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted105";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term115;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted104 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted104";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term115;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted102 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted102";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term119;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted101 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted101";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term109;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted100 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted100";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term109;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted98 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted98";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term117;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted97 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted97";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term115;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted96 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted96";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term113;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted94 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted94";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term111;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted93 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted93";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term109;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted92 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted92";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term107;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted90 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted90";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term105;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted89 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted89";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term103;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted88 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted88";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term103;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted86 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted86";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term101;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted85 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted85";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term99;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted84 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted84";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term99;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted82 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted82";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term97;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term95;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term93;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term91;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term87;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term85;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
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
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term79;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term83;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term73;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term73;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term81;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term79;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term77;
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
t = term75;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term73;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term71;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term69;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term59;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term67;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term65;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term63;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term59;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term59;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term55;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term49;
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
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
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
t = term45;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
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
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term37;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
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
t = term35;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted229 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted229";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted227 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted227";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_70 = { &(lifted228) , &(frame) };
StrCL lifted228_cl = &(l_70);
t = test_extension_1_0(sl_up(sl), lifted228_cl, t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted228 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted228";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("str", 0, ATtrue))))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
if((ATgetSymbol(t) == ATmakeSymbol("rtree", 0, ATtrue)))
goto label0 ;
else
goto fail19 ;
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted226 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted226";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term25;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm base_filename_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "base_filename_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_69 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(z_69);
struct str_closure a_70 = { &(base_filename_0_0) , sl };
StrCL lifted15_cl = &(a_70);
struct str_closure b_70 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(b_70);
struct str_closure c_70 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(c_70);
struct str_closure d_70 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(d_70);
struct str_closure e_70 = { &(base_filename_0_0) , sl };
StrCL lifted7_cl = &(e_70);
struct str_closure f_70 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(f_70);
struct str_closure g_70 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(g_70);
t = apply_test_4_0(sl, lifted6_cl, lifted7_cl, lifted8_cl, lifted9_cl, t);
if((t == NULL))
goto fail6 ;
{
struct str_closure h_70 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(h_70);
struct str_closure i_70 = { &(base_filename_0_0) , sl };
StrCL lifted11_cl = &(i_70);
struct str_closure j_70 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(j_70);
struct str_closure k_70 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(k_70);
t = apply_test_4_0(sl, lifted10_cl, lifted11_cl, lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto fail6 ;
t = apply_test_4_0(sl, lifted14_cl, lifted15_cl, lifted16_cl, lifted17_cl, t);
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
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
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
t = term19;
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
t = term17;
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
t = term15;
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
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
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
struct str_closure x_69 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(x_69);
struct str_closure y_69 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(y_69);
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
{
struct str_closure t_69 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(t_69);
struct str_closure u_69 = { &(getenv_0_0) , sl_up(sl) };
StrCL lifted3_cl = &(u_69);
struct str_closure v_69 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(v_69);
struct str_closure w_69 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(w_69);
t = aterm_io_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = char_io_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = fprint_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = file_stream_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = char_output_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = copy_file_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = dirname_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = base_filename_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = file_extension_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = apply_and_check_4_0(sl_up(sl), lifted2_cl, lifted3_cl, lifted4_cl, lifted5_cl, t);
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
t = debug_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail5 ;
t = is_string_0_0(sl_up(sl_up(sl)), t);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 386));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_text_line_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_text_line_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_text_from_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_text_from_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(getenv_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("getenv_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(remove_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("remove_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_extension_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_extension_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(remove_extension_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("remove_extension_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_extension_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_extension_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(has_extension_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("has_extension_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(guarantee_extension_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("guarantee_extension_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(base_filename_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("base_filename_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dirname_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dirname_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fgetc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fgetc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fputc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fputc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fputs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fputs_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(stdout_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("stdout_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fprintnl_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fprintnl_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_in_text_to_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_in_text_to_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_in_taf_to_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_in_taf_to_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_in_baf_to_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_in_baf_to_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_to_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(WriteToTextFile_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("WriteToTextFile_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ReadFromFile_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ReadFromFile_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(copy_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("copy_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted385);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted385", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_text_file_c_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_text_file_c_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_text_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_text_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(j_4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("j_4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_text_file_2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_text_file_2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(my_read_text_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("my_read_text_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted384);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted384", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted383);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted383", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted381);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted381", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted380);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted380", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted379);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted379", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted378);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted378", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted377);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted377", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted376);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted376", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted375);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted375", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted373);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted373", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted372);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted372", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted371);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted371", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted370);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted370", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted369);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted369", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted368);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted368", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted367);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted367", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted366);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted366", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted365);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted365", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(char_output_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("char_output_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted361);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted361", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted360);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted360", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted359);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted359", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted358);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted358", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted357);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted357", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted356);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted356", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted355);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted355", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted354);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted354", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted353);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted353", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted352);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted352", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted351);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted351", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted350);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted350", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted364);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted364", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted363);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted363", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted362);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted362", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(file_stream_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("file_stream_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_read_term_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_read_term_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted345);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted345", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted344);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted344", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted343);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted343", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted342);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted342", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted341);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted341", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted340);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted340", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted339);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted339", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted338);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted338", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted349);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted349", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted348);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted348", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted347);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted347", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted346);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted346", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aterm_io_tests_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aterm_io_tests_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted333);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted333", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted332);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted332", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted330);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted330", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted329);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted329", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted328);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted328", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted326);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted326", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted325);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted325", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted324);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted324", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted322);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted322", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted321);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted321", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted320);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted320", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted318);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted318", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted317);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted317", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted316);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted316", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted314);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted314", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted313);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted313", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted312);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted312", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted310);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted310", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted309);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted309", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted308);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted308", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted306);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted306", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted305);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted305", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted304);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted304", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted302);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted302", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted301);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted301", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted300);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted300", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted298);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted298", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted337);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted337", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted336);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted336", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted334);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted334", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aterm_io_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aterm_io_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_write_read_term_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_write_read_term_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_write_read_term_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_write_read_term_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted289);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted289", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted288);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted288", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted286);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted286", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted285);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted285", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted284);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted284", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted283);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted283", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted282);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted282", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted281);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted281", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted280);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted280", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted279);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted279", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted278);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted278", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted277);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted277", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted276);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted276", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted275);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted275", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted274);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted274", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted294);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted294", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted293);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted293", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted292);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted292", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted291);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted291", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted290);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted290", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fprint_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fprint_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted273);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted273", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted272);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted272", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted271);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted271", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted270);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted270", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(char_io_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("char_io_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted269);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted269", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted268);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted268", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted267);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted267", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted266);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted266", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(copy_file_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("copy_file_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted261);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted261", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted260);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted260", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted258);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted258", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted257);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted257", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted256);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted256", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted254);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted254", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted253);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted253", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted252);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted252", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted250);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted250", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted249);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted249", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted248);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted248", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted246);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted246", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted245);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted245", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted244);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted244", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted242);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted242", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted241);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted241", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted240);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted240", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted238);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted238", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted237);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted237", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted236);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted236", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted234);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted234", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted233);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted233", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted232);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted232", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted230);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted230", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted265);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted265", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted264);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted264", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted262);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted262", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dirname_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dirname_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted225);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted225", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted224);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted224", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted223);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted223", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted217);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted217", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted215);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted215", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted214);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted214", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted213);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted213", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted212);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted212", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted211);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted211", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted206);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted206", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted86);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted86", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted85);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted85", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted84);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted84", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted72);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted72", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted62);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted62", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted61);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted61", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted229);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted229", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted228);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted228", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted227);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted227", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted226);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted226", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(file_extension_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("file_extension_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(base_filename_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("base_filename_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
