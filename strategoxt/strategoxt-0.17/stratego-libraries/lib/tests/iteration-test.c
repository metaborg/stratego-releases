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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("iteration test", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("repeat: counter", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeInt(1);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeInt(10);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(sym__2, term5, term7);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym__2, term7, term7);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("repeat: tail", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeInt(5);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeInt(4);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeInt(3);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeInt(2);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("repeat: fail is ok", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("repeat(s,c) test 3", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeInt(20);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("repeat(s,c) test 1", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("repeat(s,c) test 2", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("repeat1: tail", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("repeat1: must succeed at least once", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("repeat1(s,c): tail", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("repeat1(s,c): must succeed at least once", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("while: condition succeed, strategie tail", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("while: condition failes, strategy fails", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("while: condition succeeds, strategy fails", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("while: condition failes, strategy succeeds", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("while: condition tail, strategie succeeds", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("do-while: must succeed at least once", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("do-while: tail", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("while-not: body succeeds, stopped by condition", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("while-not: while-not(s,c) not equal to while(s, not(c))", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("while-not: condition succeeds", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("while-not: body succeeds, but condition never", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("for: initialize first", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("for: drop 3 items", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeInt(0);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeInt(6);
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("for: body failure", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("for: condition before body", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm _2_0 (StrSL sl, StrCL f_50, StrCL g_50, ATerm t);
ATerm Tl_0_0 (StrSL sl, ATerm t);
ATerm Snd_0_0 (StrSL sl, ATerm t);
ATerm Fst_0_0 (StrSL sl, ATerm t);
ATerm for_3_0 (StrSL sl, StrCL e_20, StrCL f_20, StrCL g_20, ATerm t);
ATerm do_while_2_0 (StrSL sl, StrCL c_20, StrCL d_20, ATerm t);
ATerm while_not_2_0 (StrSL sl, StrCL a_20, StrCL b_20, ATerm t);
ATerm while_2_0 (StrSL sl, StrCL y_19, StrCL z_19, ATerm t);
ATerm repeat1_1_0 (StrSL sl, StrCL t_19, ATerm t);
ATerm repeat1_2_0 (StrSL sl, StrCL r_19, StrCL s_19, ATerm t);
ATerm repeat_2_0 (StrSL sl, StrCL p_19, StrCL q_19, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL o_19, ATerm t);
ATerm inc_0_0 (StrSL sl, ATerm t);
ATerm lt_0_0 (StrSL sl, ATerm t);
ATerm geq_0_0 (StrSL sl, ATerm t);
ATerm add_0_0 (StrSL sl, ATerm t);
ATerm apply_and_fail_3_0 (StrSL sl, StrCL n_2, StrCL o_2, StrCL p_2, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL c_2, StrCL d_2, StrCL e_2, StrCL f_2, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL a_2, StrCL b_2, ATerm t);
static ATerm lifted144 (StrSL sl, ATerm t);
static ATerm lifted143 (StrSL sl, ATerm t);
static ATerm lifted139 (StrSL sl, ATerm t);
static ATerm lifted138 (StrSL sl, ATerm t);
static ATerm lifted137 (StrSL sl, ATerm t);
static ATerm lifted134 (StrSL sl, ATerm t);
static ATerm lifted133 (StrSL sl, ATerm t);
static ATerm lifted132 (StrSL sl, ATerm t);
static ATerm lifted131 (StrSL sl, ATerm t);
static ATerm lifted130 (StrSL sl, ATerm t);
static ATerm lifted129 (StrSL sl, ATerm t);
static ATerm lifted128 (StrSL sl, ATerm t);
static ATerm lifted125 (StrSL sl, ATerm t);
static ATerm lifted124 (StrSL sl, ATerm t);
static ATerm lifted123 (StrSL sl, ATerm t);
static ATerm lifted122 (StrSL sl, ATerm t);
static ATerm lifted121 (StrSL sl, ATerm t);
static ATerm lifted151 (StrSL sl, ATerm t);
static ATerm lifted150 (StrSL sl, ATerm t);
static ATerm lifted147 (StrSL sl, ATerm t);
static ATerm lifted146 (StrSL sl, ATerm t);
static ATerm lifted145 (StrSL sl, ATerm t);
ATerm for_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted114 (StrSL sl, ATerm t);
static ATerm lifted111 (StrSL sl, ATerm t);
static ATerm lifted110 (StrSL sl, ATerm t);
static ATerm lifted109 (StrSL sl, ATerm t);
static ATerm lifted108 (StrSL sl, ATerm t);
static ATerm lifted105 (StrSL sl, ATerm t);
static ATerm lifted104 (StrSL sl, ATerm t);
static ATerm lifted103 (StrSL sl, ATerm t);
static ATerm lifted100 (StrSL sl, ATerm t);
static ATerm lifted99 (StrSL sl, ATerm t);
static ATerm lifted120 (StrSL sl, ATerm t);
static ATerm lifted119 (StrSL sl, ATerm t);
static ATerm lifted117 (StrSL sl, ATerm t);
static ATerm lifted116 (StrSL sl, ATerm t);
static ATerm lifted115 (StrSL sl, ATerm t);
ATerm while_not_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted93 (StrSL sl, ATerm t);
static ATerm lifted92 (StrSL sl, ATerm t);
static ATerm lifted91 (StrSL sl, ATerm t);
static ATerm lifted89 (StrSL sl, ATerm t);
static ATerm lifted88 (StrSL sl, ATerm t);
static ATerm lifted98 (StrSL sl, ATerm t);
static ATerm lifted97 (StrSL sl, ATerm t);
static ATerm lifted95 (StrSL sl, ATerm t);
static ATerm lifted94 (StrSL sl, ATerm t);
ATerm do_while_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted87 (StrSL sl, ATerm t);
static ATerm lifted86 (StrSL sl, ATerm t);
static ATerm lifted83 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
ATerm while_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
ATerm repeat1c_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
ATerm repeat1_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm repeatc_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm repeat_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm for_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "for_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_70 = { &(lifted145) , &(frame) };
StrCL lifted145_cl = &(c_70);
struct str_closure d_70 = { &(lifted146) , &(frame) };
StrCL lifted146_cl = &(d_70);
struct str_closure e_70 = { &(lifted150) , &(frame) };
StrCL lifted150_cl = &(e_70);
struct str_closure f_70 = { &(lifted151) , &(frame) };
StrCL lifted151_cl = &(f_70);
struct str_closure l_70 = { &(lifted121) , &(frame) };
StrCL lifted121_cl = &(l_70);
struct str_closure m_70 = { &(lifted122) , &(frame) };
StrCL lifted122_cl = &(m_70);
struct str_closure n_70 = { &(lifted128) , &(frame) };
StrCL lifted128_cl = &(n_70);
struct str_closure o_70 = { &(lifted129) , &(frame) };
StrCL lifted129_cl = &(o_70);
t = apply_test_4_0(sl, lifted121_cl, lifted122_cl, lifted128_cl, lifted129_cl, t);
if((t == NULL))
goto fail97 ;
{
struct str_closure u_70 = { &(lifted130) , &(frame) };
StrCL lifted130_cl = &(u_70);
struct str_closure w_70 = { &(lifted131) , &(frame) };
StrCL lifted131_cl = &(w_70);
struct str_closure x_70 = { &(lifted137) , &(frame) };
StrCL lifted137_cl = &(x_70);
t = apply_and_fail_3_0(sl, lifted130_cl, lifted131_cl, lifted137_cl, t);
if((t == NULL))
goto fail97 ;
{
struct str_closure b_71 = { &(lifted138) , &(frame) };
StrCL lifted138_cl = &(b_71);
struct str_closure d_71 = { &(lifted139) , &(frame) };
StrCL lifted139_cl = &(d_71);
struct str_closure e_71 = { &(lifted143) , &(frame) };
StrCL lifted143_cl = &(e_71);
struct str_closure f_71 = { &(lifted144) , &(frame) };
StrCL lifted144_cl = &(f_71);
t = apply_test_4_0(sl, lifted138_cl, lifted139_cl, lifted143_cl, lifted144_cl, t);
if((t == NULL))
goto fail97 ;
t = apply_test_4_0(sl, lifted145_cl, lifted146_cl, lifted150_cl, lifted151_cl, t);
if((t == NULL))
goto fail97 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted144 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted144";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term5;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail119 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted143 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted143";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term5;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail118 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted139 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted139";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_70 = { &(_Id) , sl_up(sl) };
StrCL lifted140_cl = &(y_70);
struct str_closure z_70 = { &(_Id) , sl_up(sl) };
StrCL lifted141_cl = &(z_70);
struct str_closure a_71 = { &(_Fail) , sl_up(sl) };
StrCL lifted142_cl = &(a_71);
t = for_3_0(sl_up(sl), lifted140_cl, lifted141_cl, lifted142_cl, t);
if((t == NULL))
goto fail117 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail117 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted138 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted138";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term73;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail116 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted137 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted137";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail115 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted131 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted131";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_70 = { &(lifted132) , &(frame) };
StrCL lifted132_cl = &(r_70);
struct str_closure s_70 = { &(lifted133) , &(frame) };
StrCL lifted133_cl = &(s_70);
struct str_closure t_70 = { &(lifted134) , &(frame) };
StrCL lifted134_cl = &(t_70);
t = for_3_0(sl_up(sl), lifted132_cl, lifted133_cl, lifted134_cl, t);
if((t == NULL))
goto fail111 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail111 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted134 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted134";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_70 = { &(inc_0_0) , sl_up(sl_up(sl)) };
StrCL lifted135_cl = &(p_70);
struct str_closure q_70 = { &(Tl_0_0) , sl_up(sl_up(sl)) };
StrCL lifted136_cl = &(q_70);
t = _2_0(sl_up(sl_up(sl)), lifted135_cl, lifted136_cl, t);
if((t == NULL))
goto fail114 ;
}
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
{
ATerm d_0 = NULL,k_0 = NULL,l_0 = NULL;
d_0 = t;
l_0 = t;
t = Fst_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail113 ;
k_0 = t;
t = l_0;
t = (ATerm) ATmakeAppl(sym__2, k_0, term19);
t = geq_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail113 ;
t = d_0;
t = Snd_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail113 ;
}
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
{
ATerm i_0 = NULL,j_0 = NULL;
j_0 = t;
i_0 = t;
t = (ATerm) ATmakeAppl(sym__2, term67, i_0);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail112 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted130 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted130";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term71;
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term69), term15), term17);
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term69), term15), term17), term19), term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail108 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted122 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted122";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_70 = { &(lifted123) , &(frame) };
StrCL lifted123_cl = &(i_70);
struct str_closure j_70 = { &(lifted124) , &(frame) };
StrCL lifted124_cl = &(j_70);
struct str_closure k_70 = { &(lifted125) , &(frame) };
StrCL lifted125_cl = &(k_70);
t = for_3_0(sl_up(sl), lifted123_cl, lifted124_cl, lifted125_cl, t);
if((t == NULL))
goto fail104 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail104 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted125 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted125";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_70 = { &(inc_0_0) , sl_up(sl_up(sl)) };
StrCL lifted126_cl = &(g_70);
struct str_closure h_70 = { &(Tl_0_0) , sl_up(sl_up(sl)) };
StrCL lifted127_cl = &(h_70);
t = _2_0(sl_up(sl_up(sl)), lifted126_cl, lifted127_cl, t);
if((t == NULL))
goto fail107 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail107 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted124 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted124";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_0 = NULL,g_0 = NULL,h_0 = NULL;
c_0 = t;
h_0 = t;
t = Fst_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail106 ;
g_0 = t;
t = h_0;
t = (ATerm) ATmakeAppl(sym__2, g_0, term19);
t = geq_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail106 ;
t = c_0;
t = Snd_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail106 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail106 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted123 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted123";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_0 = NULL,f_0 = NULL;
f_0 = t;
e_0 = t;
t = (ATerm) ATmakeAppl(sym__2, term67, e_0);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail105 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted121 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted121";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term65;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted151 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted151";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted150 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted150";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term5;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted146 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted146";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_69 = { &(lifted147) , &(frame) };
StrCL lifted147_cl = &(z_69);
struct str_closure a_70 = { &(_Id) , sl_up(sl) };
StrCL lifted148_cl = &(a_70);
struct str_closure b_70 = { &(_Fail) , sl_up(sl) };
StrCL lifted149_cl = &(b_70);
t = for_3_0(sl_up(sl), lifted147_cl, lifted148_cl, lifted149_cl, t);
if((t == NULL))
goto fail99 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted147 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted147";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted145 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted145";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term63;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
ATerm while_not_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "while_not_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_69 = { &(lifted115) , &(frame) };
StrCL lifted115_cl = &(b_69);
struct str_closure c_69 = { &(lifted116) , &(frame) };
StrCL lifted116_cl = &(c_69);
struct str_closure d_69 = { &(lifted119) , &(frame) };
StrCL lifted119_cl = &(d_69);
struct str_closure e_69 = { &(lifted120) , &(frame) };
StrCL lifted120_cl = &(e_69);
struct str_closure j_69 = { &(lifted99) , &(frame) };
StrCL lifted99_cl = &(j_69);
struct str_closure k_69 = { &(lifted100) , &(frame) };
StrCL lifted100_cl = &(k_69);
struct str_closure l_69 = { &(lifted103) , &(frame) };
StrCL lifted103_cl = &(l_69);
t = apply_and_fail_3_0(sl, lifted99_cl, lifted100_cl, lifted103_cl, t);
if((t == NULL))
goto fail81 ;
{
struct str_closure o_69 = { &(lifted104) , &(frame) };
StrCL lifted104_cl = &(o_69);
struct str_closure p_69 = { &(lifted105) , &(frame) };
StrCL lifted105_cl = &(p_69);
struct str_closure q_69 = { &(lifted108) , &(frame) };
StrCL lifted108_cl = &(q_69);
struct str_closure t_69 = { &(lifted109) , &(frame) };
StrCL lifted109_cl = &(t_69);
t = apply_test_4_0(sl, lifted104_cl, lifted105_cl, lifted108_cl, lifted109_cl, t);
if((t == NULL))
goto fail81 ;
{
struct str_closure w_69 = { &(lifted110) , &(frame) };
StrCL lifted110_cl = &(w_69);
struct str_closure x_69 = { &(lifted111) , &(frame) };
StrCL lifted111_cl = &(x_69);
struct str_closure y_69 = { &(lifted114) , &(frame) };
StrCL lifted114_cl = &(y_69);
t = apply_and_fail_3_0(sl, lifted110_cl, lifted111_cl, lifted114_cl, t);
if((t == NULL))
goto fail81 ;
t = apply_test_4_0(sl, lifted115_cl, lifted116_cl, lifted119_cl, lifted120_cl, t);
if((t == NULL))
goto fail81 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted114 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted114";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted111 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted111";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_69 = { &(_Fail) , sl_up(sl) };
StrCL lifted112_cl = &(u_69);
struct str_closure v_69 = { &(Tl_0_0) , sl_up(sl) };
StrCL lifted113_cl = &(v_69);
t = while_not_2_0(sl_up(sl), lifted112_cl, lifted113_cl, t);
if((t == NULL))
goto fail95 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted110 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted110";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted109 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted109";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted108 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted108";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted105 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted105";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_69 = { &(_Id) , sl_up(sl) };
StrCL lifted106_cl = &(m_69);
struct str_closure n_69 = { &(Tl_0_0) , sl_up(sl) };
StrCL lifted107_cl = &(n_69);
t = while_not_2_0(sl_up(sl), lifted106_cl, lifted107_cl, t);
if((t == NULL))
goto fail91 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted104 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted104";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term59;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted103 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted103";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted100 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted100";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_69 = { &(_Fail) , sl_up(sl) };
StrCL lifted101_cl = &(f_69);
struct str_closure i_69 = { &(_Fail) , sl_up(sl) };
StrCL lifted102_cl = &(i_69);
t = while_not_2_0(sl_up(sl), lifted101_cl, lifted102_cl, t);
if((t == NULL))
goto fail88 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted99 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted99";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted120 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted120";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted119 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted119";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted116 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted116";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_68 = { &(lifted117) , &(frame) };
StrCL lifted117_cl = &(z_68);
struct str_closure a_69 = { &(Tl_0_0) , sl_up(sl) };
StrCL lifted118_cl = &(a_69);
t = while_not_2_0(sl_up(sl), lifted117_cl, lifted118_cl, t);
if((t == NULL))
goto fail83 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted117 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted117";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail84 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted115 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted115";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term55;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
ATerm do_while_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "do_while_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_68 = { &(lifted94) , &(frame) };
StrCL lifted94_cl = &(i_68);
struct str_closure j_68 = { &(lifted95) , &(frame) };
StrCL lifted95_cl = &(j_68);
struct str_closure k_68 = { &(lifted98) , &(frame) };
StrCL lifted98_cl = &(k_68);
struct str_closure s_68 = { &(lifted88) , &(frame) };
StrCL lifted88_cl = &(s_68);
struct str_closure t_68 = { &(lifted89) , &(frame) };
StrCL lifted89_cl = &(t_68);
struct str_closure u_68 = { &(lifted92) , &(frame) };
StrCL lifted92_cl = &(u_68);
struct str_closure v_68 = { &(lifted93) , &(frame) };
StrCL lifted93_cl = &(v_68);
t = apply_test_4_0(sl, lifted88_cl, lifted89_cl, lifted92_cl, lifted93_cl, t);
if((t == NULL))
goto fail71 ;
t = apply_and_fail_3_0(sl, lifted94_cl, lifted95_cl, lifted98_cl, t);
if((t == NULL))
goto fail71 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted93 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted93";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted92 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted92";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted89 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted89";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_68 = { &(Tl_0_0) , sl_up(sl) };
StrCL lifted90_cl = &(n_68);
struct str_closure o_68 = { &(lifted91) , &(frame) };
StrCL lifted91_cl = &(o_68);
t = do_while_2_0(sl_up(sl), lifted90_cl, lifted91_cl, t);
if((t == NULL))
goto fail77 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted91 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted91";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label3 ;
goto fail78 ;
label3 :
t = trm1;
goto label2 ;
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted88 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted88";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted98 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted98";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted95 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted95";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_68 = { &(Tl_0_0) , sl_up(sl) };
StrCL lifted96_cl = &(g_68);
struct str_closure h_68 = { &(lifted97) , &(frame) };
StrCL lifted97_cl = &(h_68);
t = do_while_2_0(sl_up(sl), lifted96_cl, lifted97_cl, t);
if((t == NULL))
goto fail73 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted97 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted97";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label1 ;
goto fail74 ;
label1 :
t = trm0;
goto label0 ;
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted94 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted94";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
ATerm while_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "while_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_65 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(d_65);
struct str_closure e_65 = { &(lifted83) , &(frame) };
StrCL lifted83_cl = &(e_65);
struct str_closure j_65 = { &(lifted86) , &(frame) };
StrCL lifted86_cl = &(j_65);
struct str_closure k_65 = { &(lifted87) , &(frame) };
StrCL lifted87_cl = &(k_65);
struct str_closure u_65 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(u_65);
struct str_closure v_65 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(v_65);
struct str_closure g_66 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(g_66);
struct str_closure h_66 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(h_66);
t = apply_test_4_0(sl, lifted58_cl, lifted59_cl, lifted62_cl, lifted63_cl, t);
if((t == NULL))
goto fail50 ;
{
struct str_closure m_67 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(m_67);
struct str_closure n_67 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(n_67);
struct str_closure q_67 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(q_67);
struct str_closure r_67 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(r_67);
t = apply_test_4_0(sl, lifted64_cl, lifted65_cl, lifted68_cl, lifted69_cl, t);
if((t == NULL))
goto fail50 ;
{
struct str_closure u_67 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(u_67);
struct str_closure v_67 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(v_67);
struct str_closure w_67 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(w_67);
struct str_closure x_67 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(x_67);
t = apply_test_4_0(sl, lifted70_cl, lifted71_cl, lifted74_cl, lifted75_cl, t);
if((t == NULL))
goto fail50 ;
{
struct str_closure a_68 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(a_68);
struct str_closure d_68 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(d_68);
struct str_closure e_68 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(e_68);
struct str_closure f_68 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(f_68);
t = apply_test_4_0(sl, lifted76_cl, lifted77_cl, lifted80_cl, lifted81_cl, t);
if((t == NULL))
goto fail50 ;
t = apply_test_4_0(sl, lifted82_cl, lifted83_cl, lifted86_cl, lifted87_cl, t);
if((t == NULL))
goto fail50 ;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_67 = { &(Tl_0_0) , sl_up(sl) };
StrCL lifted78_cl = &(y_67);
struct str_closure z_67 = { &(_Id) , sl_up(sl) };
StrCL lifted79_cl = &(z_67);
t = while_2_0(sl_up(sl), lifted78_cl, lifted79_cl, t);
if((t == NULL))
goto fail68 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term49;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_67 = { &(_Fail) , sl_up(sl) };
StrCL lifted72_cl = &(s_67);
struct str_closure t_67 = { &(_Id) , sl_up(sl) };
StrCL lifted73_cl = &(t_67);
t = while_2_0(sl_up(sl), lifted72_cl, lifted73_cl, t);
if((t == NULL))
goto fail64 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_67 = { &(_Id) , sl_up(sl) };
StrCL lifted66_cl = &(f_67);
struct str_closure g_67 = { &(_Fail) , sl_up(sl) };
StrCL lifted67_cl = &(g_67);
t = while_2_0(sl_up(sl), lifted66_cl, lifted67_cl, t);
if((t == NULL))
goto fail60 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term45;
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
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term5);
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
{
struct str_closure l_65 = { &(_Fail) , sl_up(sl) };
StrCL lifted60_cl = &(l_65);
struct str_closure m_65 = { &(_Fail) , sl_up(sl) };
StrCL lifted61_cl = &(m_65);
t = while_2_0(sl_up(sl), lifted60_cl, lifted61_cl, t);
if((t == NULL))
goto fail56 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted87 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted87";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted86 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted86";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted83 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted83";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_64 = { &(_Id) , sl_up(sl) };
StrCL lifted84_cl = &(z_64);
struct str_closure a_65 = { &(Tl_0_0) , sl_up(sl) };
StrCL lifted85_cl = &(a_65);
t = while_2_0(sl_up(sl), lifted84_cl, lifted85_cl, t);
if((t == NULL))
goto fail52 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted82 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted82";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
ATerm repeat1c_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "repeat1c_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_64 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(q_64);
struct str_closure r_64 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(r_64);
struct str_closure s_64 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(s_64);
struct str_closure t_64 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(t_64);
struct str_closure w_64 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(w_64);
struct str_closure x_64 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(x_64);
struct str_closure y_64 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(y_64);
t = apply_and_fail_3_0(sl, lifted47_cl, lifted48_cl, lifted51_cl, t);
if((t == NULL))
goto fail40 ;
t = apply_test_4_0(sl, lifted52_cl, lifted53_cl, lifted56_cl, lifted57_cl, t);
if((t == NULL))
goto fail40 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
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
struct str_closure u_64 = { &(Tl_0_0) , sl_up(sl) };
StrCL lifted49_cl = &(u_64);
struct str_closure v_64 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(v_64);
t = repeat1_2_0(sl_up(sl), lifted49_cl, lifted50_cl, t);
if((t == NULL))
goto fail47 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail48 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_64 = { &(Tl_0_0) , sl_up(sl) };
StrCL lifted54_cl = &(o_64);
struct str_closure p_64 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(p_64);
t = repeat1_2_0(sl_up(sl), lifted54_cl, lifted55_cl, t);
if((t == NULL))
goto fail42 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail43 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term37;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
ATerm repeat1_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "repeat1_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_64 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(g_64);
struct str_closure h_64 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(h_64);
struct str_closure i_64 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(i_64);
struct str_closure j_64 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(j_64);
struct str_closure l_64 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(l_64);
struct str_closure m_64 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(m_64);
struct str_closure n_64 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(n_64);
t = apply_and_fail_3_0(sl, lifted38_cl, lifted39_cl, lifted41_cl, t);
if((t == NULL))
goto fail32 ;
t = apply_test_4_0(sl, lifted42_cl, lifted43_cl, lifted45_cl, lifted46_cl, t);
if((t == NULL))
goto fail32 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
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
struct str_closure k_64 = { &(Tl_0_0) , sl_up(sl) };
StrCL lifted40_cl = &(k_64);
t = repeat1_1_0(sl_up(sl), lifted40_cl, t);
if((t == NULL))
goto fail38 ;
}
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
t = term35;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_64 = { &(Tl_0_0) , sl_up(sl) };
StrCL lifted44_cl = &(f_64);
t = repeat1_1_0(sl_up(sl), lifted44_cl, t);
if((t == NULL))
goto fail34 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm repeatc_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "repeatc_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_63 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(q_63);
struct str_closure r_63 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(r_63);
struct str_closure s_63 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(s_63);
struct str_closure t_63 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(t_63);
struct str_closure w_63 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(w_63);
struct str_closure x_63 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(x_63);
struct str_closure y_63 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(y_63);
struct str_closure z_63 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(z_63);
t = apply_test_4_0(sl, lifted19_cl, lifted20_cl, lifted23_cl, lifted24_cl, t);
if((t == NULL))
goto fail17 ;
{
struct str_closure c_64 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(c_64);
struct str_closure d_64 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(d_64);
struct str_closure e_64 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(e_64);
t = apply_and_fail_3_0(sl, lifted25_cl, lifted26_cl, lifted29_cl, t);
if((t == NULL))
goto fail17 ;
t = apply_test_4_0(sl, lifted30_cl, lifted31_cl, lifted36_cl, lifted37_cl, t);
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
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term19), term21), term5);
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
{
struct str_closure a_64 = { &(_Fail) , sl_up(sl) };
StrCL lifted27_cl = &(a_64);
struct str_closure b_64 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(b_64);
t = repeat_2_0(sl_up(sl), lifted27_cl, lifted28_cl, t);
if((t == NULL))
goto fail29 ;
}
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
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail30 ;
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
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term19), term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_63 = { &(Tl_0_0) , sl_up(sl) };
StrCL lifted21_cl = &(u_63);
struct str_closure v_63 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(v_63);
t = repeat_2_0(sl_up(sl), lifted21_cl, lifted22_cl, t);
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
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail25 ;
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
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_63 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(o_63);
struct str_closure p_63 = { &(add_0_0) , sl_up(sl) };
StrCL lifted35_cl = &(p_63);
t = repeat_2_0(sl_up(sl), lifted32_cl, lifted35_cl, t);
if((t == NULL))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_63 = { &(inc_0_0) , sl_up(sl_up(sl)) };
StrCL lifted33_cl = &(m_63);
struct str_closure n_63 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted34_cl = &(n_63);
t = lt_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail20 ;
t = _2_0(sl_up(sl_up(sl)), lifted33_cl, lifted34_cl, t);
if((t == NULL))
goto fail20 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term25;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm repeat_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "repeat_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_62 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(x_62);
struct str_closure y_62 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(y_62);
struct str_closure a_63 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(a_63);
struct str_closure b_63 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(b_63);
struct str_closure d_63 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(d_63);
struct str_closure e_63 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(e_63);
struct str_closure f_63 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(f_63);
struct str_closure g_63 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(g_63);
t = apply_test_4_0(sl, lifted2_cl, lifted3_cl, lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure i_63 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(i_63);
struct str_closure j_63 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(j_63);
struct str_closure k_63 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(k_63);
struct str_closure l_63 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(l_63);
t = apply_test_4_0(sl, lifted7_cl, lifted8_cl, lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto fail3 ;
t = apply_test_4_0(sl, lifted12_cl, lifted13_cl, lifted17_cl, lifted18_cl, t);
if((t == NULL))
goto fail3 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term19), term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term19), term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_63 = { &(_Fail) , sl_up(sl) };
StrCL lifted9_cl = &(h_63);
t = repeat_1_0(sl_up(sl), lifted9_cl, t);
if((t == NULL))
goto fail14 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term15), term17), term19), term21), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_63 = { &(Tl_0_0) , sl_up(sl) };
StrCL lifted4_cl = &(c_63);
t = repeat_1_0(sl_up(sl), lifted4_cl, t);
if((t == NULL))
goto fail10 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_62 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(w_62);
t = repeat_1_0(sl_up(sl), lifted14_cl, t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_62 = { &(inc_0_0) , sl_up(sl_up(sl)) };
StrCL lifted15_cl = &(u_62);
struct str_closure v_62 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted16_cl = &(v_62);
t = lt_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail6 ;
t = _2_0(sl_up(sl_up(sl)), lifted15_cl, lifted16_cl, t);
if((t == NULL))
goto fail6 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
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
struct str_closure s_62 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(s_62);
struct str_closure t_62 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(t_62);
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
t = repeat_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = repeatc_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = repeat1_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = repeat1c_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = while_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = do_while_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = while_not_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = for_tests_0_0(sl_up(sl), t);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 139));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Tl_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Tl_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Snd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Snd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Fst_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Fst_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(for_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("for_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(do_while_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("do_while_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(while_not_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("while_not_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(while_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("while_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(repeat1_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repeat1_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(repeat1_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repeat1_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(repeat_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repeat_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(repeat_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repeat_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(inc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("inc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(geq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("geq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted144);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted144", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted143);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted143", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted151);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted151", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted150);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted150", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(for_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("for_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted114);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted114", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted100);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted100", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted99);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted99", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted120);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted120", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted119);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted119", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(while_not_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("while_not_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted89);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted89", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted88);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted88", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted98);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted98", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted97);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted97", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted95);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted95", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted94);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted94", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(do_while_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("do_while_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted81);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted81", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted80);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted80", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted59);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted59", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted58);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted58", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted87);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted87", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted86);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted86", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted83);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted83", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted82);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted82", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(while_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("while_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted51);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted51", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted50);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted50", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted48);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted48", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted53);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted53", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted52);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted52", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(repeat1c_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repeat1c_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(repeat1_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repeat1_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted37);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted37", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(repeatc_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repeatc_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(repeat_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repeat_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
