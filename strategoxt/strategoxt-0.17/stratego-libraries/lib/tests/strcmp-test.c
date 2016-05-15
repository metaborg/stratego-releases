#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__3;
static Symbol sym__2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym__3 = ATmakeSymbol("", 3, ATfalse);
ATprotectSymbol(sym__3);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("strcmp-test", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("string-gt-test1", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("aap", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(sym__2, term5, term5);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("strcmp1", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeInt(-1);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("strcmp2", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeInt(1);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("strcmp3", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeInt(0);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("strcmp4", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("strcmp5", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("strcmp6", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("ab", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("strcmp7", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("strcmp8", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("strncmp1", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("baj", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("bae", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeInt(2);
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("strncmp2", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("bee", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("strcasecmp1", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("bAj", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("baJ", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("strcasecmp2", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("bAjq", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("strcasecmp3", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("bA", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("string-sort-test1", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("jet", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("zus", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("wim", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("mies", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("noot", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("string-sort-test2", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm strcasecmp_0_0 (StrSL sl, ATerm t);
ATerm strncmp_0_0 (StrSL sl, ATerm t);
ATerm strcmp_0_0 (StrSL sl, ATerm t);
ATerm string_gt_0_0 (StrSL sl, ATerm t);
ATerm string_sort_0_0 (StrSL sl, ATerm t);
ATerm explode_string_0_0 (StrSL sl, ATerm t);
ATerm apply_and_fail_3_0 (StrSL sl, StrCL j_4, StrCL k_4, StrCL l_4, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL y_3, StrCL z_3, StrCL a_4, StrCL b_4, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL w_3, StrCL x_3, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
ATerm string_sort_test2_0_0 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
ATerm string_sort_test1_0_0 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
ATerm strcasecmp_test3_0_0 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
ATerm strcasecmp_test2_0_0 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
ATerm strcasecmp_test1_0_0 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
ATerm strncmp_test2_0_0 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
ATerm strncmp_test1_0_0 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
ATerm strcmp_test8_0_0 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
ATerm strcmp_test7_0_0 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
ATerm strcmp_test6_0_0 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
ATerm strcmp_test5_0_0 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
ATerm strcmp_test4_0_0 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
ATerm strcmp_test3_0_0 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
ATerm strcmp_test2_0_0 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm strcmp_test1_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm a_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm string_sort_test2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "string_sort_test2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_69 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(l_69);
struct str_closure m_69 = { &(string_sort_0_0) , sl };
StrCL lifted62_cl = &(m_69);
struct str_closure n_69 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(n_69);
struct str_closure o_69 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(o_69);
t = apply_test_4_0(sl, lifted61_cl, lifted62_cl, lifted63_cl, lifted64_cl, t);
if((t == NULL))
goto fail62 ;
}
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term69), term71), term75), term73), term67), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term69), term71), term75), term73), term67), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term77;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
ATerm string_sort_test1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "string_sort_test1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_69 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(f_69);
struct str_closure i_69 = { &(string_sort_0_0) , sl };
StrCL lifted58_cl = &(i_69);
struct str_closure j_69 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(j_69);
struct str_closure k_69 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(k_69);
t = apply_test_4_0(sl, lifted57_cl, lifted58_cl, lifted59_cl, lifted60_cl, t);
if((t == NULL))
goto fail58 ;
}
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term69), term71), term75), term73), term67), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term67), term69), term71), term73), term75), term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term65;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
ATerm strcasecmp_test3_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strcasecmp_test3_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_69 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(b_69);
struct str_closure c_69 = { &(strcasecmp_0_0) , sl };
StrCL lifted54_cl = &(c_69);
struct str_closure d_69 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(d_69);
struct str_closure e_69 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(e_69);
t = apply_test_4_0(sl, lifted53_cl, lifted54_cl, lifted55_cl, lifted56_cl, t);
if((t == NULL))
goto fail54 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
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
ATerm e_2 = NULL,g_2 = NULL,f_2 = NULL,h_2 = NULL;
g_2 = t;
t = term63;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail56 ;
e_2 = t;
t = g_2;
h_2 = t;
t = term55;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail56 ;
f_2 = t;
t = h_2;
t = (ATerm) ATmakeAppl(sym__2, e_2, f_2);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
ATerm strcasecmp_test2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strcasecmp_test2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_68 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(u_68);
struct str_closure v_68 = { &(strcasecmp_0_0) , sl };
StrCL lifted50_cl = &(v_68);
struct str_closure z_68 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(z_68);
struct str_closure a_69 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(a_69);
t = apply_test_4_0(sl, lifted49_cl, lifted50_cl, lifted51_cl, lifted52_cl, t);
if((t == NULL))
goto fail50 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_2 = NULL,c_2 = NULL,b_2 = NULL,d_2 = NULL;
c_2 = t;
t = term59;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail52 ;
a_2 = t;
t = c_2;
d_2 = t;
t = term55;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail52 ;
b_2 = t;
t = d_2;
t = (ATerm) ATmakeAppl(sym__2, a_2, b_2);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
ATerm strcasecmp_test1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strcasecmp_test1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_68 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(n_68);
struct str_closure o_68 = { &(strcasecmp_0_0) , sl };
StrCL lifted46_cl = &(o_68);
struct str_closure s_68 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(s_68);
struct str_closure t_68 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(t_68);
t = apply_test_4_0(sl, lifted45_cl, lifted46_cl, lifted47_cl, lifted48_cl, t);
if((t == NULL))
goto fail46 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_1 = NULL,y_1 = NULL,x_1 = NULL,z_1 = NULL;
y_1 = t;
t = term53;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail48 ;
w_1 = t;
t = y_1;
z_1 = t;
t = term55;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail48 ;
x_1 = t;
t = z_1;
t = (ATerm) ATmakeAppl(sym__2, w_1, x_1);
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
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
ATerm strncmp_test2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strncmp_test2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_68 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(h_68);
struct str_closure i_68 = { &(strncmp_0_0) , sl };
StrCL lifted42_cl = &(i_68);
struct str_closure j_68 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(j_68);
struct str_closure k_68 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(k_68);
t = apply_test_4_0(sl, lifted41_cl, lifted42_cl, lifted43_cl, lifted44_cl, t);
if((t == NULL))
goto fail42 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_1 = NULL,u_1 = NULL,t_1 = NULL,v_1 = NULL;
u_1 = t;
t = term41;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail44 ;
s_1 = t;
t = u_1;
v_1 = t;
t = term49;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail44 ;
t_1 = t;
t = v_1;
t = (ATerm) ATmakeAppl(sym__3, s_1, t_1, term45);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
ATerm strncmp_test1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strncmp_test1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_68 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(d_68);
struct str_closure e_68 = { &(strncmp_0_0) , sl };
StrCL lifted38_cl = &(e_68);
struct str_closure f_68 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(f_68);
struct str_closure g_68 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(g_68);
t = apply_test_4_0(sl, lifted37_cl, lifted38_cl, lifted39_cl, lifted40_cl, t);
if((t == NULL))
goto fail38 ;
}
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
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_1 = NULL,q_1 = NULL,p_1 = NULL,r_1 = NULL;
q_1 = t;
t = term41;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail40 ;
o_1 = t;
t = q_1;
r_1 = t;
t = term43;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail40 ;
p_1 = t;
t = r_1;
t = (ATerm) ATmakeAppl(sym__3, o_1, p_1, term45);
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
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
ATerm strcmp_test8_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strcmp_test8_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_67 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(x_67);
struct str_closure y_67 = { &(strcmp_0_0) , sl };
StrCL lifted34_cl = &(y_67);
struct str_closure z_67 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(z_67);
struct str_closure a_68 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(a_68);
t = apply_test_4_0(sl, lifted33_cl, lifted34_cl, lifted35_cl, lifted36_cl, t);
if((t == NULL))
goto fail34 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_1 = NULL,m_1 = NULL,l_1 = NULL,n_1 = NULL;
m_1 = t;
t = term33;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail36 ;
k_1 = t;
t = m_1;
n_1 = t;
t = term33;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail36 ;
l_1 = t;
t = n_1;
t = (ATerm) ATmakeAppl(sym__2, k_1, l_1);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term37;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm strcmp_test7_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strcmp_test7_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_67 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(t_67);
struct str_closure u_67 = { &(strcmp_0_0) , sl };
StrCL lifted30_cl = &(u_67);
struct str_closure v_67 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(v_67);
struct str_closure w_67 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(w_67);
t = apply_test_4_0(sl, lifted29_cl, lifted30_cl, lifted31_cl, lifted32_cl, t);
if((t == NULL))
goto fail30 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
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
{
ATerm g_1 = NULL,i_1 = NULL,h_1 = NULL,j_1 = NULL;
i_1 = t;
t = term13;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail32 ;
g_1 = t;
t = i_1;
j_1 = t;
t = term33;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail32 ;
h_1 = t;
t = j_1;
t = (ATerm) ATmakeAppl(sym__2, g_1, h_1);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term35;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm strcmp_test6_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strcmp_test6_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_67 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(n_67);
struct str_closure q_67 = { &(strcmp_0_0) , sl };
StrCL lifted26_cl = &(q_67);
struct str_closure r_67 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(r_67);
struct str_closure s_67 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(s_67);
t = apply_test_4_0(sl, lifted25_cl, lifted26_cl, lifted27_cl, lifted28_cl, t);
if((t == NULL))
goto fail26 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_1 = NULL,e_1 = NULL,d_1 = NULL,f_1 = NULL;
e_1 = t;
t = term33;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail28 ;
c_1 = t;
t = e_1;
f_1 = t;
t = term13;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail28 ;
d_1 = t;
t = f_1;
t = (ATerm) ATmakeAppl(sym__2, c_1, d_1);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
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
fail27 :
--__tracing_table_counter;
return(NULL);
}
ATerm strcmp_test5_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strcmp_test5_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_66 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(h_66);
struct str_closure f_67 = { &(strcmp_0_0) , sl };
StrCL lifted22_cl = &(f_67);
struct str_closure g_67 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(g_67);
struct str_closure m_67 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(m_67);
t = apply_test_4_0(sl, lifted21_cl, lifted22_cl, lifted23_cl, lifted24_cl, t);
if((t == NULL))
goto fail22 ;
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
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_0 = NULL,a_1 = NULL,z_0 = NULL,b_1 = NULL;
a_1 = t;
t = term27;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail24 ;
y_0 = t;
t = a_1;
b_1 = t;
t = term13;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail24 ;
z_0 = t;
t = b_1;
t = (ATerm) ATmakeAppl(sym__2, y_0, z_0);
}
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
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm strcmp_test4_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strcmp_test4_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_65 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(m_65);
struct str_closure u_65 = { &(strcmp_0_0) , sl };
StrCL lifted18_cl = &(u_65);
struct str_closure v_65 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(v_65);
struct str_closure g_66 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(g_66);
t = apply_test_4_0(sl, lifted17_cl, lifted18_cl, lifted19_cl, lifted20_cl, t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_0 = NULL,w_0 = NULL,v_0 = NULL,x_0 = NULL;
w_0 = t;
t = term13;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail20 ;
u_0 = t;
t = w_0;
x_0 = t;
t = term27;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail20 ;
v_0 = t;
t = x_0;
t = (ATerm) ATmakeAppl(sym__2, u_0, v_0);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term25;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm strcmp_test3_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strcmp_test3_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_65 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(e_65);
struct str_closure j_65 = { &(strcmp_0_0) , sl };
StrCL lifted14_cl = &(j_65);
struct str_closure k_65 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(k_65);
struct str_closure l_65 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(l_65);
t = apply_test_4_0(sl, lifted13_cl, lifted14_cl, lifted15_cl, lifted16_cl, t);
if((t == NULL))
goto fail14 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_0 = NULL,s_0 = NULL,r_0 = NULL,t_0 = NULL;
s_0 = t;
t = term13;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail16 ;
q_0 = t;
t = s_0;
t_0 = t;
t = term13;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail16 ;
r_0 = t;
t = t_0;
t = (ATerm) ATmakeAppl(sym__2, q_0, r_0);
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
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm strcmp_test2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strcmp_test2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_64 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(y_64);
struct str_closure z_64 = { &(strcmp_0_0) , sl };
StrCL lifted10_cl = &(z_64);
struct str_closure a_65 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(a_65);
struct str_closure d_65 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(d_65);
t = apply_test_4_0(sl, lifted9_cl, lifted10_cl, lifted11_cl, lifted12_cl, t);
if((t == NULL))
goto fail10 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_0 = NULL,o_0 = NULL,n_0 = NULL,p_0 = NULL;
o_0 = t;
t = term13;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail12 ;
m_0 = t;
t = o_0;
p_0 = t;
t = term11;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail12 ;
n_0 = t;
t = p_0;
t = (ATerm) ATmakeAppl(sym__2, m_0, n_0);
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
t = term17;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm strcmp_test1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strcmp_test1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_64 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(u_64);
struct str_closure v_64 = { &(strcmp_0_0) , sl };
StrCL lifted6_cl = &(v_64);
struct str_closure w_64 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(w_64);
struct str_closure x_64 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(x_64);
t = apply_test_4_0(sl, lifted5_cl, lifted6_cl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail6 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
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
ATerm i_0 = NULL,k_0 = NULL,j_0 = NULL,l_0 = NULL;
k_0 = t;
t = term11;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail8 ;
i_0 = t;
t = k_0;
l_0 = t;
t = term13;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail8 ;
j_0 = t;
t = l_0;
t = (ATerm) ATmakeAppl(sym__2, i_0, j_0);
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
t = term9;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm a_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "a_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_64 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(s_64);
struct str_closure t_64 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(t_64);
t = test_suite_2_0(sl, lifted0_cl, lifted1_cl, t);
if((t == NULL))
goto fail1 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = strcmp_test1_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = strcmp_test2_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = strcmp_test3_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = strcmp_test4_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = strcmp_test5_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = strcmp_test6_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = strcmp_test7_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = strcmp_test8_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = strncmp_test1_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = strncmp_test2_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = strcasecmp_test1_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = strcasecmp_test2_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = strcasecmp_test3_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
{
struct str_closure p_64 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(p_64);
struct str_closure q_64 = { &(string_gt_0_0) , sl_up(sl) };
StrCL lifted3_cl = &(q_64);
struct str_closure r_64 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(r_64);
t = apply_and_fail_3_0(sl_up(sl), lifted2_cl, lifted3_cl, lifted4_cl, t);
if((t == NULL))
goto fail3 ;
t = string_sort_test1_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = string_sort_test2_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
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
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term1;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = a_0_0(sl, t);
if((t == NULL))
goto fail0 ;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 75));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(strcasecmp_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strcasecmp_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strncmp_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strncmp_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strcmp_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strcmp_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_gt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_gt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_sort_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_sort_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(explode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("explode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted64);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted64", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted63);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted63", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted61);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted61", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_sort_test2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_sort_test2_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(string_sort_test1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_sort_test1_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(strcasecmp_test3_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strcasecmp_test3_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted52);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted52", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted51);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted51", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted49);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted49", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strcasecmp_test2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strcasecmp_test2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted48);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted48", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted45);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted45", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strcasecmp_test1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strcasecmp_test1_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted44);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted44", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted43);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted43", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strncmp_test2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strncmp_test2_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(strncmp_test1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strncmp_test1_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted33);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted33", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strcmp_test8_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strcmp_test8_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strcmp_test7_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strcmp_test7_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted25);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted25", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strcmp_test6_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strcmp_test6_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(strcmp_test5_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strcmp_test5_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(strcmp_test4_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strcmp_test4_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strcmp_test3_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strcmp_test3_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strcmp_test2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strcmp_test2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strcmp_test1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strcmp_test1_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(a_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("a_0_0", 0, ATtrue)), &(closures[closures_index]));
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
