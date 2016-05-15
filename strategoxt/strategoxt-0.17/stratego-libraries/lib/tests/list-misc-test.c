#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("list-misc-test", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("copy-test", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeInt(4);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(sym__2, term5, term7);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("number-test", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("c", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeInt(3);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(sym__2, term13, term19);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeInt(2);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(sym__2, term15, term23);
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeInt(1);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(sym__2, term17, term27);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeInt(0);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(sym__2, term7, term31);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("split-last", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term27);
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("init", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("empty init", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("flatten-test 5", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("flatten-test 1", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("e", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("flatten-test 2", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("flatten-test 3", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("flatten-test 4", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("take 3 fails on the empty list", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("take 3 of a list of more than 3 elements", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("take 0 returns the empty list", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("take 1 returns the first element", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("take 3 of a list of 3 elements returns the list", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("take 3 fails on a list of two elements", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("drop-test", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("trim-test 3", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("ltrim-test 1", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("ltrim-test 2", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("ltrim-test 3", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("rtrim-test 1", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("rtrim-test 2", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("rtrim-test 3", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("trim-test 1", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("trim-test 2", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm flatten_list_0_0 (StrSL sl, ATerm t);
ATerm trim_1_0 (StrSL sl, StrCL b_44, ATerm t);
ATerm ltrim_1_0 (StrSL sl, StrCL a_44, ATerm t);
ATerm rtrim_1_0 (StrSL sl, StrCL z_43, ATerm t);
ATerm drop_1_0 (StrSL sl, StrCL x_43, ATerm t);
ATerm take_0_1 (StrSL sl, ATerm n_43, ATerm t);
ATerm take_1_0 (StrSL sl, StrCL m_43, ATerm t);
ATerm number_1_0 (StrSL sl, StrCL j_43, ATerm t);
ATerm copy_0_0 (StrSL sl, ATerm t);
ATerm split_last_0_0 (StrSL sl, ATerm t);
ATerm init_0_0 (StrSL sl, ATerm t);
ATerm apply_and_fail_3_0 (StrSL sl, StrCL p_2, StrCL q_2, StrCL r_2, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL e_2, StrCL f_2, StrCL g_2, StrCL h_2, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL c_2, StrCL d_2, ATerm t);
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
static ATerm lifted159 (StrSL sl, ATerm t);
static ATerm lifted158 (StrSL sl, ATerm t);
static ATerm lifted157 (StrSL sl, ATerm t);
static ATerm lifted156 (StrSL sl, ATerm t);
static ATerm lifted155 (StrSL sl, ATerm t);
ATerm trim_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted114 (StrSL sl, ATerm t);
static ATerm lifted113 (StrSL sl, ATerm t);
static ATerm lifted112 (StrSL sl, ATerm t);
static ATerm lifted111 (StrSL sl, ATerm t);
static ATerm lifted110 (StrSL sl, ATerm t);
ATerm drop_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted106 (StrSL sl, ATerm t);
static ATerm lifted105 (StrSL sl, ATerm t);
static ATerm lifted104 (StrSL sl, ATerm t);
static ATerm lifted103 (StrSL sl, ATerm t);
static ATerm lifted102 (StrSL sl, ATerm t);
static ATerm lifted101 (StrSL sl, ATerm t);
static ATerm lifted100 (StrSL sl, ATerm t);
static ATerm lifted99 (StrSL sl, ATerm t);
static ATerm lifted98 (StrSL sl, ATerm t);
static ATerm lifted97 (StrSL sl, ATerm t);
static ATerm lifted96 (StrSL sl, ATerm t);
static ATerm lifted95 (StrSL sl, ATerm t);
static ATerm lifted94 (StrSL sl, ATerm t);
static ATerm lifted93 (StrSL sl, ATerm t);
static ATerm lifted92 (StrSL sl, ATerm t);
static ATerm lifted91 (StrSL sl, ATerm t);
static ATerm lifted90 (StrSL sl, ATerm t);
static ATerm lifted89 (StrSL sl, ATerm t);
static ATerm lifted88 (StrSL sl, ATerm t);
static ATerm lifted87 (StrSL sl, ATerm t);
static ATerm lifted86 (StrSL sl, ATerm t);
static ATerm lifted85 (StrSL sl, ATerm t);
static ATerm lifted84 (StrSL sl, ATerm t);
static ATerm lifted83 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted79 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted109 (StrSL sl, ATerm t);
static ATerm lifted108 (StrSL sl, ATerm t);
static ATerm lifted107 (StrSL sl, ATerm t);
ATerm take_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
ATerm flatten_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
ATerm init_last_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
ATerm number_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm copy_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm trim_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "trim_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_69 = { &(lifted155) , &(frame) };
StrCL lifted155_cl = &(w_69);
struct str_closure x_69 = { &(lifted156) , &(frame) };
StrCL lifted156_cl = &(x_69);
struct str_closure y_69 = { &(lifted158) , &(frame) };
StrCL lifted158_cl = &(y_69);
struct str_closure z_69 = { &(lifted159) , &(frame) };
StrCL lifted159_cl = &(z_69);
struct str_closure b_70 = { &(lifted115) , &(frame) };
StrCL lifted115_cl = &(b_70);
struct str_closure c_70 = { &(lifted116) , &(frame) };
StrCL lifted116_cl = &(c_70);
struct str_closure d_70 = { &(lifted118) , &(frame) };
StrCL lifted118_cl = &(d_70);
struct str_closure e_70 = { &(lifted119) , &(frame) };
StrCL lifted119_cl = &(e_70);
t = apply_test_4_0(sl, lifted115_cl, lifted116_cl, lifted118_cl, lifted119_cl, t);
if((t == NULL))
goto fail110 ;
{
struct str_closure g_70 = { &(lifted120) , &(frame) };
StrCL lifted120_cl = &(g_70);
struct str_closure h_70 = { &(lifted121) , &(frame) };
StrCL lifted121_cl = &(h_70);
struct str_closure i_70 = { &(lifted123) , &(frame) };
StrCL lifted123_cl = &(i_70);
struct str_closure j_70 = { &(lifted124) , &(frame) };
StrCL lifted124_cl = &(j_70);
t = apply_test_4_0(sl, lifted120_cl, lifted121_cl, lifted123_cl, lifted124_cl, t);
if((t == NULL))
goto fail110 ;
{
struct str_closure l_70 = { &(lifted125) , &(frame) };
StrCL lifted125_cl = &(l_70);
struct str_closure m_70 = { &(lifted126) , &(frame) };
StrCL lifted126_cl = &(m_70);
struct str_closure n_70 = { &(lifted128) , &(frame) };
StrCL lifted128_cl = &(n_70);
struct str_closure o_70 = { &(lifted129) , &(frame) };
StrCL lifted129_cl = &(o_70);
t = apply_test_4_0(sl, lifted125_cl, lifted126_cl, lifted128_cl, lifted129_cl, t);
if((t == NULL))
goto fail110 ;
{
struct str_closure q_70 = { &(lifted130) , &(frame) };
StrCL lifted130_cl = &(q_70);
struct str_closure r_70 = { &(lifted131) , &(frame) };
StrCL lifted131_cl = &(r_70);
struct str_closure s_70 = { &(lifted133) , &(frame) };
StrCL lifted133_cl = &(s_70);
struct str_closure t_70 = { &(lifted134) , &(frame) };
StrCL lifted134_cl = &(t_70);
t = apply_test_4_0(sl, lifted130_cl, lifted131_cl, lifted133_cl, lifted134_cl, t);
if((t == NULL))
goto fail110 ;
{
struct str_closure w_70 = { &(lifted135) , &(frame) };
StrCL lifted135_cl = &(w_70);
struct str_closure x_70 = { &(lifted136) , &(frame) };
StrCL lifted136_cl = &(x_70);
struct str_closure y_70 = { &(lifted138) , &(frame) };
StrCL lifted138_cl = &(y_70);
struct str_closure z_70 = { &(lifted139) , &(frame) };
StrCL lifted139_cl = &(z_70);
t = apply_test_4_0(sl, lifted135_cl, lifted136_cl, lifted138_cl, lifted139_cl, t);
if((t == NULL))
goto fail110 ;
{
struct str_closure b_71 = { &(lifted140) , &(frame) };
StrCL lifted140_cl = &(b_71);
struct str_closure d_71 = { &(lifted141) , &(frame) };
StrCL lifted141_cl = &(d_71);
struct str_closure e_71 = { &(lifted143) , &(frame) };
StrCL lifted143_cl = &(e_71);
struct str_closure f_71 = { &(lifted144) , &(frame) };
StrCL lifted144_cl = &(f_71);
t = apply_test_4_0(sl, lifted140_cl, lifted141_cl, lifted143_cl, lifted144_cl, t);
if((t == NULL))
goto fail110 ;
{
struct str_closure h_71 = { &(lifted145) , &(frame) };
StrCL lifted145_cl = &(h_71);
struct str_closure i_71 = { &(lifted146) , &(frame) };
StrCL lifted146_cl = &(i_71);
struct str_closure k_71 = { &(lifted148) , &(frame) };
StrCL lifted148_cl = &(k_71);
struct str_closure l_71 = { &(lifted149) , &(frame) };
StrCL lifted149_cl = &(l_71);
t = apply_test_4_0(sl, lifted145_cl, lifted146_cl, lifted148_cl, lifted149_cl, t);
if((t == NULL))
goto fail110 ;
{
struct str_closure n_71 = { &(lifted150) , &(frame) };
StrCL lifted150_cl = &(n_71);
struct str_closure o_71 = { &(lifted151) , &(frame) };
StrCL lifted151_cl = &(o_71);
struct str_closure p_71 = { &(lifted153) , &(frame) };
StrCL lifted153_cl = &(p_71);
struct str_closure r_71 = { &(lifted154) , &(frame) };
StrCL lifted154_cl = &(r_71);
t = apply_test_4_0(sl, lifted150_cl, lifted151_cl, lifted153_cl, lifted154_cl, t);
if((t == NULL))
goto fail110 ;
t = apply_test_4_0(sl, lifted155_cl, lifted156_cl, lifted158_cl, lifted159_cl, t);
if((t == NULL))
goto fail110 ;
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
fail110 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted154 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted154";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term19), term23), term27);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail155 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted153 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted153";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term19), term23), term27);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail154 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted151 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted151";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_71 = { &(lifted152) , &(frame) };
StrCL lifted152_cl = &(m_71);
t = trim_1_0(sl_up(sl), lifted152_cl, t);
if((t == NULL))
goto fail152 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail152 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted152 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted152";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto fail153 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail153 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted150 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted150";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term85;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail151 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted149 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted149";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term19), term23), term27);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail150 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted148 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted148";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term31), term19), term23), term27), term31);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail149 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted146 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted146";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_71 = { &(lifted147) , &(frame) };
StrCL lifted147_cl = &(g_71);
t = trim_1_0(sl_up(sl), lifted147_cl, t);
if((t == NULL))
goto fail147 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail147 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted147 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted147";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto fail148 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail148 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted145 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted145";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term83;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail146 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted144 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted144";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail145 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted143 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted143";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail144 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted141 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted141";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_71 = { &(lifted142) , &(frame) };
StrCL lifted142_cl = &(a_71);
t = rtrim_1_0(sl_up(sl), lifted142_cl, t);
if((t == NULL))
goto fail142 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail142 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted142 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted142";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto fail143 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail143 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted140 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted140";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term81;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail141 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted139 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted139";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term19), term23), term27);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail140 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted138 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted138";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term19), term23), term27);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail139 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted136 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted136";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_70 = { &(lifted137) , &(frame) };
StrCL lifted137_cl = &(u_70);
t = rtrim_1_0(sl_up(sl), lifted137_cl, t);
if((t == NULL))
goto fail137 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail137 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted137 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted137";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto fail138 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail138 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted135 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted135";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term79;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail136 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted134 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted134";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term19), term23), term27), term31);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail135 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted133 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted133";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term31), term19), term23), term27), term31);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail134 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted131 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted131";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_70 = { &(lifted132) , &(frame) };
StrCL lifted132_cl = &(p_70);
t = rtrim_1_0(sl_up(sl), lifted132_cl, t);
if((t == NULL))
goto fail132 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail132 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted132 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted132";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto fail133 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail133 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted130 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted130";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term77;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail131 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted129 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted129";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail130 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted128 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted128";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail129 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted126 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted126";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_70 = { &(lifted127) , &(frame) };
StrCL lifted127_cl = &(k_70);
t = ltrim_1_0(sl_up(sl), lifted127_cl, t);
if((t == NULL))
goto fail127 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail127 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted127 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted127";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto fail128 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail128 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted125 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted125";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term75;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail126 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted124 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted124";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term31), term19), term23), term27);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail125 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted123 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted123";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term31), term19), term23), term27);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail124 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted121 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted121";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_70 = { &(lifted122) , &(frame) };
StrCL lifted122_cl = &(f_70);
t = ltrim_1_0(sl_up(sl), lifted122_cl, t);
if((t == NULL))
goto fail122 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail122 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted122 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted122";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto fail123 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail123 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted120 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted120";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term73;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail121 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted119 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted119";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term31), term19), term23), term27);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail120 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted118 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted118";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term31), term19), term23), term27), term31), term31), term31);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail119 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted116 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted116";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_70 = { &(lifted117) , &(frame) };
StrCL lifted117_cl = &(a_70);
t = ltrim_1_0(sl_up(sl), lifted117_cl, t);
if((t == NULL))
goto fail117 ;
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
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto fail118 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail118 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted115 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted115";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term71;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail116 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted159 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted159";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail115 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted158 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted158";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail114 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted156 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted156";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_69 = { &(lifted157) , &(frame) };
StrCL lifted157_cl = &(v_69);
t = trim_1_0(sl_up(sl), lifted157_cl, t);
if((t == NULL))
goto fail112 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail112 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted157 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted157";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto fail113 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail113 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted155 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted155";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term69;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail111 :
--__tracing_table_counter;
return(NULL);
}
ATerm drop_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "drop_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_69 = { &(lifted110) , &(frame) };
StrCL lifted110_cl = &(p_69);
struct str_closure q_69 = { &(lifted111) , &(frame) };
StrCL lifted111_cl = &(q_69);
struct str_closure t_69 = { &(lifted113) , &(frame) };
StrCL lifted113_cl = &(t_69);
struct str_closure u_69 = { &(lifted114) , &(frame) };
StrCL lifted114_cl = &(u_69);
t = apply_test_4_0(sl, lifted110_cl, lifted111_cl, lifted113_cl, lifted114_cl, t);
if((t == NULL))
goto fail104 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail104 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted114 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted114";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term47), term13);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail109 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted113 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted113";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term47), term13), term15), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail108 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted111 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted111";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_69 = { &(lifted112) , &(frame) };
StrCL lifted112_cl = &(o_69);
t = drop_1_0(sl_up(sl), lifted112_cl, t);
if((t == NULL))
goto fail106 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail106 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted112 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted112";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail107 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted110 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted110";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term67;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail105 :
--__tracing_table_counter;
return(NULL);
}
ATerm take_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "take_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_64 = { &(lifted107) , &(frame) };
StrCL lifted107_cl = &(u_64);
struct str_closure v_64 = { &(lifted108) , &(frame) };
StrCL lifted108_cl = &(v_64);
struct str_closure w_64 = { &(lifted109) , &(frame) };
StrCL lifted109_cl = &(w_64);
struct str_closure y_64 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(y_64);
struct str_closure z_64 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(z_64);
struct str_closure a_65 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(a_65);
struct str_closure d_65 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(d_65);
t = apply_test_4_0(sl, lifted51_cl, lifted52_cl, lifted54_cl, lifted55_cl, t);
if((t == NULL))
goto fail44 ;
{
struct str_closure j_65 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(j_65);
struct str_closure k_65 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(k_65);
struct str_closure l_65 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(l_65);
struct str_closure m_65 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(m_65);
t = apply_test_4_0(sl, lifted56_cl, lifted57_cl, lifted59_cl, lifted60_cl, t);
if((t == NULL))
goto fail44 ;
{
struct str_closure v_65 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(v_65);
struct str_closure g_66 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(g_66);
struct str_closure h_66 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(h_66);
struct str_closure f_67 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(f_67);
t = apply_test_4_0(sl, lifted61_cl, lifted62_cl, lifted64_cl, lifted65_cl, t);
if((t == NULL))
goto fail44 ;
{
struct str_closure m_67 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(m_67);
struct str_closure n_67 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(n_67);
struct str_closure q_67 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(q_67);
struct str_closure r_67 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(r_67);
t = apply_test_4_0(sl, lifted66_cl, lifted67_cl, lifted69_cl, lifted70_cl, t);
if((t == NULL))
goto fail44 ;
{
struct str_closure t_67 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(t_67);
struct str_closure u_67 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(u_67);
struct str_closure v_67 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(v_67);
struct str_closure w_67 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(w_67);
t = apply_test_4_0(sl, lifted71_cl, lifted72_cl, lifted74_cl, lifted75_cl, t);
if((t == NULL))
goto fail44 ;
{
struct str_closure y_67 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(y_67);
struct str_closure z_67 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(z_67);
struct str_closure a_68 = { &(lifted79) , &(frame) };
StrCL lifted79_cl = &(a_68);
t = apply_and_fail_3_0(sl, lifted76_cl, lifted77_cl, lifted79_cl, t);
if((t == NULL))
goto fail44 ;
{
struct str_closure e_68 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(e_68);
struct str_closure f_68 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(f_68);
struct str_closure g_68 = { &(lifted83) , &(frame) };
StrCL lifted83_cl = &(g_68);
t = apply_and_fail_3_0(sl, lifted80_cl, lifted81_cl, lifted83_cl, t);
if((t == NULL))
goto fail44 ;
{
struct str_closure h_68 = { &(lifted84) , &(frame) };
StrCL lifted84_cl = &(h_68);
struct str_closure i_68 = { &(lifted85) , &(frame) };
StrCL lifted85_cl = &(i_68);
struct str_closure j_68 = { &(lifted86) , &(frame) };
StrCL lifted86_cl = &(j_68);
struct str_closure k_68 = { &(lifted87) , &(frame) };
StrCL lifted87_cl = &(k_68);
t = apply_test_4_0(sl, lifted84_cl, lifted85_cl, lifted86_cl, lifted87_cl, t);
if((t == NULL))
goto fail44 ;
{
struct str_closure n_68 = { &(lifted88) , &(frame) };
StrCL lifted88_cl = &(n_68);
struct str_closure o_68 = { &(lifted89) , &(frame) };
StrCL lifted89_cl = &(o_68);
struct str_closure s_68 = { &(lifted90) , &(frame) };
StrCL lifted90_cl = &(s_68);
struct str_closure t_68 = { &(lifted91) , &(frame) };
StrCL lifted91_cl = &(t_68);
t = apply_test_4_0(sl, lifted88_cl, lifted89_cl, lifted90_cl, lifted91_cl, t);
if((t == NULL))
goto fail44 ;
{
struct str_closure u_68 = { &(lifted92) , &(frame) };
StrCL lifted92_cl = &(u_68);
struct str_closure v_68 = { &(lifted93) , &(frame) };
StrCL lifted93_cl = &(v_68);
struct str_closure z_68 = { &(lifted94) , &(frame) };
StrCL lifted94_cl = &(z_68);
struct str_closure a_69 = { &(lifted95) , &(frame) };
StrCL lifted95_cl = &(a_69);
t = apply_test_4_0(sl, lifted92_cl, lifted93_cl, lifted94_cl, lifted95_cl, t);
if((t == NULL))
goto fail44 ;
{
struct str_closure b_69 = { &(lifted96) , &(frame) };
StrCL lifted96_cl = &(b_69);
struct str_closure c_69 = { &(lifted97) , &(frame) };
StrCL lifted97_cl = &(c_69);
struct str_closure d_69 = { &(lifted98) , &(frame) };
StrCL lifted98_cl = &(d_69);
struct str_closure e_69 = { &(lifted99) , &(frame) };
StrCL lifted99_cl = &(e_69);
t = apply_test_4_0(sl, lifted96_cl, lifted97_cl, lifted98_cl, lifted99_cl, t);
if((t == NULL))
goto fail44 ;
{
struct str_closure f_69 = { &(lifted100) , &(frame) };
StrCL lifted100_cl = &(f_69);
struct str_closure i_69 = { &(lifted101) , &(frame) };
StrCL lifted101_cl = &(i_69);
struct str_closure j_69 = { &(lifted102) , &(frame) };
StrCL lifted102_cl = &(j_69);
struct str_closure k_69 = { &(lifted103) , &(frame) };
StrCL lifted103_cl = &(k_69);
t = apply_test_4_0(sl, lifted100_cl, lifted101_cl, lifted102_cl, lifted103_cl, t);
if((t == NULL))
goto fail44 ;
{
struct str_closure l_69 = { &(lifted104) , &(frame) };
StrCL lifted104_cl = &(l_69);
struct str_closure m_69 = { &(lifted105) , &(frame) };
StrCL lifted105_cl = &(m_69);
struct str_closure n_69 = { &(lifted106) , &(frame) };
StrCL lifted106_cl = &(n_69);
t = apply_and_fail_3_0(sl, lifted104_cl, lifted105_cl, lifted106_cl, t);
if((t == NULL))
goto fail44 ;
t = apply_and_fail_3_0(sl, lifted107_cl, lifted108_cl, lifted109_cl, t);
if((t == NULL))
goto fail44 ;
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
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted106 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted106";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted105 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted105";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_0 = NULL,l_0 = NULL;
l_0 = t;
t = term19;
k_0 = t;
t = l_0;
t = take_0_1(sl_up(sl), k_0, t);
if((t == NULL))
goto fail102 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted104 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted104";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term65;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted103 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted103";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted102 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted102";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted101 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted101";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_0 = NULL,j_0 = NULL;
j_0 = t;
t = term19;
i_0 = t;
t = j_0;
t = take_0_1(sl_up(sl), i_0, t);
if((t == NULL))
goto fail98 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted100 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted100";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term63;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted99 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted99";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted98 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted98";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted97 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted97";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_0 = NULL,h_0 = NULL;
h_0 = t;
t = term27;
g_0 = t;
t = h_0;
t = take_0_1(sl_up(sl), g_0, t);
if((t == NULL))
goto fail94 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted96 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted96";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted95 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted95";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted94 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted94";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted93 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted93";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_0 = NULL,f_0 = NULL;
f_0 = t;
t = term27;
e_0 = t;
t = f_0;
t = take_0_1(sl_up(sl), e_0, t);
if((t == NULL))
goto fail90 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted92 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted92";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted91 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted91";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted90 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted90";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted89 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted89";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_0 = NULL,d_0 = NULL;
d_0 = t;
t = term31;
c_0 = t;
t = d_0;
t = take_0_1(sl_up(sl), c_0, t);
if((t == NULL))
goto fail86 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted88 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted88";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term59;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted87 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted87";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted86 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted86";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term47), term13), term15), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted85 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted85";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_0 = NULL,b_0 = NULL;
b_0 = t;
t = term19;
a_0 = t;
t = b_0;
t = take_0_1(sl_up(sl), a_0, t);
if((t == NULL))
goto fail82 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted84 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted84";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted83 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted83";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_68 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(d_68);
t = take_1_0(sl_up(sl), lifted82_cl, t);
if((t == NULL))
goto fail78 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted82 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted82";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term55;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted79 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted79";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_67 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(x_67);
t = take_1_0(sl_up(sl), lifted78_cl, t);
if((t == NULL))
goto fail74 ;
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
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term65;
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term7);
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_67 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(s_67);
t = take_1_0(sl_up(sl), lifted73_cl, t);
if((t == NULL))
goto fail69 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted73 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted73";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term63;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted67 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted67";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_67 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(g_67);
t = take_1_0(sl_up(sl), lifted68_cl, t);
if((t == NULL))
goto fail64 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_65 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(u_65);
t = take_1_0(sl_up(sl), lifted63_cl, t);
if((t == NULL))
goto fail59 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_65 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(e_65);
t = take_1_0(sl_up(sl), lifted58_cl, t);
if((t == NULL))
goto fail54 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term59;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term47), term13), term15), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_64 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(x_64);
t = take_1_0(sl_up(sl), lifted53_cl, t);
if((t == NULL))
goto fail49 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted109 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted109";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted108 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted108";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_0 = NULL,n_0 = NULL;
n_0 = t;
t = term19;
m_0 = t;
t = n_0;
t = take_0_1(sl_up(sl), m_0, t);
if((t == NULL))
goto fail46 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted107 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted107";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term55;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
ATerm flatten_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "flatten_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_63 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(w_63);
struct str_closure x_63 = { &(flatten_list_0_0) , sl };
StrCL lifted48_cl = &(x_63);
struct str_closure y_63 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(y_63);
struct str_closure z_63 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(z_63);
struct str_closure a_64 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(a_64);
struct str_closure b_64 = { &(flatten_list_0_0) , sl };
StrCL lifted28_cl = &(b_64);
struct str_closure c_64 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(c_64);
struct str_closure d_64 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(d_64);
t = apply_test_4_0(sl, lifted27_cl, lifted28_cl, lifted29_cl, lifted30_cl, t);
if((t == NULL))
goto fail25 ;
{
struct str_closure e_64 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(e_64);
struct str_closure f_64 = { &(flatten_list_0_0) , sl };
StrCL lifted32_cl = &(f_64);
struct str_closure g_64 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(g_64);
struct str_closure h_64 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(h_64);
t = apply_test_4_0(sl, lifted31_cl, lifted32_cl, lifted33_cl, lifted34_cl, t);
if((t == NULL))
goto fail25 ;
{
struct str_closure i_64 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(i_64);
struct str_closure j_64 = { &(flatten_list_0_0) , sl };
StrCL lifted36_cl = &(j_64);
struct str_closure k_64 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(k_64);
struct str_closure l_64 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(l_64);
t = apply_test_4_0(sl, lifted35_cl, lifted36_cl, lifted37_cl, lifted38_cl, t);
if((t == NULL))
goto fail25 ;
{
struct str_closure m_64 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(m_64);
struct str_closure n_64 = { &(flatten_list_0_0) , sl };
StrCL lifted40_cl = &(n_64);
struct str_closure o_64 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(o_64);
struct str_closure p_64 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(p_64);
t = apply_test_4_0(sl, lifted39_cl, lifted40_cl, lifted41_cl, lifted42_cl, t);
if((t == NULL))
goto fail25 ;
{
struct str_closure q_64 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(q_64);
struct str_closure r_64 = { &(flatten_list_0_0) , sl };
StrCL lifted44_cl = &(r_64);
struct str_closure s_64 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(s_64);
struct str_closure t_64 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(t_64);
t = apply_test_4_0(sl, lifted43_cl, lifted44_cl, lifted45_cl, lifted46_cl, t);
if((t == NULL))
goto fail25 ;
t = apply_test_4_0(sl, lifted47_cl, lifted48_cl, lifted49_cl, lifted50_cl, t);
if((t == NULL))
goto fail25 ;
}
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
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
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
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term47), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term47), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATempty), term17)), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term49;
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term47), term13), term15), term17), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term47), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term13), term15)), term17)), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term45;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term15), term13), (ATerm) ATmakeAppl(sym__2, term17, (ATerm) ATinsert(ATinsert(ATempty, term23), term27))), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term15), (ATerm) ATinsert(ATinsert(ATempty, term13), (ATerm) ATmakeAppl(sym__2, term17, (ATerm) ATinsert(ATinsert(ATempty, term23), term27)))), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
ATerm init_last_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "init_last_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_63 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(g_63);
struct str_closure h_63 = { &(split_last_0_0) , sl };
StrCL lifted24_cl = &(h_63);
struct str_closure i_63 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(i_63);
struct str_closure j_63 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(j_63);
struct str_closure k_63 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(k_63);
struct str_closure l_63 = { &(init_0_0) , sl };
StrCL lifted12_cl = &(l_63);
struct str_closure m_63 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(m_63);
struct str_closure n_63 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(n_63);
t = apply_test_4_0(sl, lifted11_cl, lifted12_cl, lifted13_cl, lifted14_cl, t);
if((t == NULL))
goto fail12 ;
{
struct str_closure o_63 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(o_63);
struct str_closure p_63 = { &(init_0_0) , sl };
StrCL lifted16_cl = &(p_63);
struct str_closure q_63 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(q_63);
struct str_closure r_63 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(r_63);
t = apply_test_4_0(sl, lifted15_cl, lifted16_cl, lifted17_cl, lifted18_cl, t);
if((t == NULL))
goto fail12 ;
{
struct str_closure s_63 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(s_63);
struct str_closure t_63 = { &(split_last_0_0) , sl };
StrCL lifted20_cl = &(t_63);
struct str_closure u_63 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(u_63);
struct str_closure v_63 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(v_63);
t = apply_test_4_0(sl, lifted19_cl, lifted20_cl, lifted21_cl, lifted22_cl, t);
if((t == NULL))
goto fail12 ;
t = apply_test_4_0(sl, lifted23_cl, lifted24_cl, lifted25_cl, lifted26_cl, t);
if((t == NULL))
goto fail12 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term19), term23), term27), term5);
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term5), term19), term23), term27);
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
t = term35;
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
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term27);
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
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term19), term23), term27);
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term5), term19), term23), term27);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
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
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term27);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term35;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
ATerm number_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "number_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_63 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(c_63);
struct str_closure d_63 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(d_63);
struct str_closure e_63 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(e_63);
struct str_closure f_63 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(f_63);
t = apply_test_4_0(sl, lifted6_cl, lifted7_cl, lifted9_cl, lifted10_cl, t);
if((t == NULL))
goto fail7 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term21), term25), term29), term33);
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term13), term15), term17), term7);
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
{
struct str_closure b_63 = { &(_Id) , sl_up(sl) };
StrCL lifted8_cl = &(b_63);
t = number_1_0(sl_up(sl), lifted8_cl, t);
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
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm copy_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "copy_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_62 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(w_62);
struct str_closure x_62 = { &(copy_0_0) , sl };
StrCL lifted3_cl = &(x_62);
struct str_closure y_62 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(y_62);
struct str_closure a_63 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(a_63);
t = apply_test_4_0(sl, lifted2_cl, lifted3_cl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto fail3 ;
}
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term7), term7), term7), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
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
t = term3;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_62 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(u_62);
struct str_closure v_62 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(v_62);
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
t = copy_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = number_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = flatten_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = init_last_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = take_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = drop_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = trim_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 170));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(flatten_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("flatten_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(trim_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("trim_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ltrim_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ltrim_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtrim_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtrim_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(drop_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("drop_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(take_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("take_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(take_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("take_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(number_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("number_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(copy_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("copy_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(split_last_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("split_last_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(init_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("init_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_and_fail_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_and_fail_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_test_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_test_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_suite_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_suite_2_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(trim_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("trim_test_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(drop_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("drop_test_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted103);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted103", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted95);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted95", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted91);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted91", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted87);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted87", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted83);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted83", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted79);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted79", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted63);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted63", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted52);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted52", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted51);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted51", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted109);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted109", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted108);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted108", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted107);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted107", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(take_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("take_test_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted46);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted46", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted45);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted45", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted39);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted39", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted50);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted50", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted49);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted49", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(flatten_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("flatten_test_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted22", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted21", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted26);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted26", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted25);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted25", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(init_last_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("init_last_test_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(number_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("number_test_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(copy_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("copy_test_0_0", 0, ATtrue)), &(closures[closures_index]));
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
