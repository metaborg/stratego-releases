#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_R__OK_0;
static Symbol sym_F__OK_0;
static Symbol sym_WaitStatus_3;
static Symbol sym_Signal_3;
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
sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
ATprotectSymbol(sym_R__OK_0);
sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
ATprotectSymbol(sym_F__OK_0);
sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
ATprotectSymbol(sym_WaitStatus_3);
sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
ATprotectSymbol(sym_Signal_3);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("system-posix", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("strerror on EXDEV", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("getcwd -- 1", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("readdir", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("system-posix-test.c", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("times and clock", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("clock: ", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("test1b", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("ls", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(sym__2, term21, (ATerm) ATempty);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("kill own process", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeInt(9);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(sym_Signal_3, term27, term29, term31);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("system-posix-test.str", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(sym__2, term13, term37);
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("create? -- 2", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("/tmp/bla.txt", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("is-abspath -- 4", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("./bla", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("is-abspath -- 1", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("is-abspath -- 2", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("/bla", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("is-abspath -- 3", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("bla", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("abspath -- 4", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("/./bla", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("abspath -- 1", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("abspath -- 2", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("abspath -- 3", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("fileno on stderr -- 2", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("fileno on stdin  -- 1", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeInt(0);
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("fileno on stdin  -- 2", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("fileno on stdout -- 1", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeInt(1);
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("fileno on stdout -- 2", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("fileno on stderr -- 1", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeInt(2);
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("access -- 4", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(sym_R__OK_0);
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("access -- 1", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(sym_F__OK_0);
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("access -- 2", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("access -- 3", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("perror 2", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeInt(200);
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("perror 1", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("foo", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm _4_0 (StrSL sl, StrCL w_50, StrCL x_50, StrCL y_50, StrCL z_50, ATerm t);
ATerm fetch_elem_1_0 (StrSL sl, StrCL x_41, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL j_23, ATerm t);
ATerm EXDEV_0_0 (StrSL sl, ATerm t);
ATerm strerror_0_0 (StrSL sl, ATerm t);
ATerm perror_0_0 (StrSL sl, ATerm t);
ATerm is_abspath_0_0 (StrSL sl, ATerm t);
ATerm stderr_stream_0_0 (StrSL sl, ATerm t);
ATerm stdout_stream_0_0 (StrSL sl, ATerm t);
ATerm stdin_stream_0_0 (StrSL sl, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL b_14, ATerm t);
ATerm debug_0_0 (StrSL sl, ATerm t);
ATerm is_int_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm apply_and_fail_3_0 (StrSL sl, StrCL w_2, StrCL x_2, StrCL y_2, ATerm t);
ATerm apply_and_check_4_0 (StrSL sl, StrCL s_2, StrCL t_2, StrCL u_2, StrCL v_2, ATerm t);
ATerm apply_test_3_0 (StrSL sl, StrCL p_2, StrCL q_2, StrCL r_2, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL l_2, StrCL m_2, StrCL n_2, StrCL o_2, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL j_2, StrCL k_2, ATerm t);
ATerm clock_0_0 (StrSL sl, ATerm t);
ATerm fileno_0_0 (StrSL sl, ATerm t);
ATerm access_0_0 (StrSL sl, ATerm t);
ATerm close_0_0 (StrSL sl, ATerm t);
ATerm getcwd_0_0 (StrSL sl, ATerm t);
ATerm readdir_0_0 (StrSL sl, ATerm t);
ATerm modification_time_0_0 (StrSL sl, ATerm t);
ATerm STDERR__FILENO_0_0 (StrSL sl, ATerm t);
ATerm STDOUT__FILENO_0_0 (StrSL sl, ATerm t);
ATerm STDIN__FILENO_0_0 (StrSL sl, ATerm t);
ATerm kill_0_0 (StrSL sl, ATerm t);
ATerm waitpid_0_0 (StrSL sl, ATerm t);
ATerm get_pid_0_0 (StrSL sl, ATerm t);
ATerm signal_from_number_0_0 (StrSL sl, ATerm t);
ATerm times_0_0 (StrSL sl, ATerm t);
ATerm can_create_file_0_0 (StrSL sl, ATerm t);
ATerm file_newer_0_0 (StrSL sl, ATerm t);
ATerm abspath_0_0 (StrSL sl, ATerm t);
ATerm call_0_0 (StrSL sl, ATerm t);
ATerm fork_2_0 (StrSL sl, StrCL w_0, StrCL x_0, ATerm t);
static ATerm lifted122 (StrSL sl, ATerm t);
static ATerm lifted120 (StrSL sl, ATerm t);
static ATerm lifted119 (StrSL sl, ATerm t);
static ATerm lifted125 (StrSL sl, ATerm t);
static ATerm lifted123 (StrSL sl, ATerm t);
ATerm perror_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted114 (StrSL sl, ATerm t);
static ATerm lifted113 (StrSL sl, ATerm t);
static ATerm lifted112 (StrSL sl, ATerm t);
static ATerm lifted111 (StrSL sl, ATerm t);
static ATerm lifted110 (StrSL sl, ATerm t);
static ATerm lifted109 (StrSL sl, ATerm t);
static ATerm lifted108 (StrSL sl, ATerm t);
static ATerm lifted107 (StrSL sl, ATerm t);
static ATerm lifted106 (StrSL sl, ATerm t);
static ATerm lifted105 (StrSL sl, ATerm t);
static ATerm lifted104 (StrSL sl, ATerm t);
static ATerm lifted103 (StrSL sl, ATerm t);
static ATerm lifted118 (StrSL sl, ATerm t);
static ATerm lifted117 (StrSL sl, ATerm t);
static ATerm lifted116 (StrSL sl, ATerm t);
static ATerm lifted115 (StrSL sl, ATerm t);
ATerm access_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted98 (StrSL sl, ATerm t);
static ATerm lifted95 (StrSL sl, ATerm t);
static ATerm lifted91 (StrSL sl, ATerm t);
static ATerm lifted90 (StrSL sl, ATerm t);
static ATerm lifted87 (StrSL sl, ATerm t);
static ATerm lifted83 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
static ATerm lifted79 (StrSL sl, ATerm t);
static ATerm lifted99 (StrSL sl, ATerm t);
ATerm fileno_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
ATerm abspath_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
ATerm is_abspath_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
ATerm file_props_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
ATerm fork_wait_test_1_0 (StrSL sl, StrCL h_0, ATerm t);
ATerm kill_myself_0_0 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
ATerm kill_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
ATerm times_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm perror_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "perror_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_0 = NULL;
struct str_closure h_70 = { &(lifted123) , &(frame) };
StrCL lifted123_cl = &(h_70);
struct str_closure i_70 = { &(perror_0_0) , sl };
StrCL lifted124_cl = &(i_70);
struct str_closure j_70 = { &(lifted125) , &(frame) };
StrCL lifted125_cl = &(j_70);
u_0 = t;
{
struct str_closure k_70 = { &(lifted119) , &(frame) };
StrCL lifted119_cl = &(k_70);
t = try_1_0(sl, lifted119_cl, t);
if((t == NULL))
goto fail89 ;
t = u_0;
{
struct str_closure l_70 = { &(lifted120) , &(frame) };
StrCL lifted120_cl = &(l_70);
struct str_closure m_70 = { &(perror_0_0) , sl };
StrCL lifted121_cl = &(m_70);
struct str_closure n_70 = { &(lifted122) , &(frame) };
StrCL lifted122_cl = &(n_70);
t = apply_test_3_0(sl, lifted120_cl, lifted121_cl, lifted122_cl, t);
if((t == NULL))
goto fail89 ;
t = apply_test_3_0(sl, lifted123_cl, lifted124_cl, lifted125_cl, t);
if((t == NULL))
goto fail89 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted122 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted122";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term109;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted120 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted120";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term107;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted119 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted119";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term105;
t = close_0_0(sl_up(sl), t);
if((t == NULL))
goto fail92 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted125 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted125";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted123 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted123";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term103;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
ATerm access_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "access_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_69 = { &(lifted115) , &(frame) };
StrCL lifted115_cl = &(q_69);
struct str_closure t_69 = { &(lifted116) , &(frame) };
StrCL lifted116_cl = &(t_69);
struct str_closure u_69 = { &(lifted118) , &(frame) };
StrCL lifted118_cl = &(u_69);
struct str_closure v_69 = { &(lifted103) , &(frame) };
StrCL lifted103_cl = &(v_69);
struct str_closure w_69 = { &(lifted104) , &(frame) };
StrCL lifted104_cl = &(w_69);
struct str_closure x_69 = { &(lifted105) , &(frame) };
StrCL lifted105_cl = &(x_69);
struct str_closure y_69 = { &(lifted106) , &(frame) };
StrCL lifted106_cl = &(y_69);
t = apply_test_4_0(sl, lifted103_cl, lifted104_cl, lifted105_cl, lifted106_cl, t);
if((t == NULL))
goto fail72 ;
{
struct str_closure a_70 = { &(lifted107) , &(frame) };
StrCL lifted107_cl = &(a_70);
struct str_closure b_70 = { &(lifted108) , &(frame) };
StrCL lifted108_cl = &(b_70);
struct str_closure c_70 = { &(lifted110) , &(frame) };
StrCL lifted110_cl = &(c_70);
t = apply_test_3_0(sl, lifted107_cl, lifted108_cl, lifted110_cl, t);
if((t == NULL))
goto fail72 ;
{
struct str_closure e_70 = { &(lifted111) , &(frame) };
StrCL lifted111_cl = &(e_70);
struct str_closure f_70 = { &(lifted112) , &(frame) };
StrCL lifted112_cl = &(f_70);
struct str_closure g_70 = { &(lifted114) , &(frame) };
StrCL lifted114_cl = &(g_70);
t = apply_test_3_0(sl, lifted111_cl, lifted112_cl, lifted114_cl, t);
if((t == NULL))
goto fail72 ;
t = apply_test_3_0(sl, lifted115_cl, lifted116_cl, lifted118_cl, t);
if((t == NULL))
goto fail72 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted114 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted114";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted112 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted112";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_70 = { &(lifted113) , &(frame) };
StrCL lifted113_cl = &(d_70);
t = try_1_0(sl_up(sl), lifted113_cl, t);
if((t == NULL))
goto fail86 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted113 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted113";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_0 = NULL,r_0 = NULL;
r_0 = t;
q_0 = t;
t = (ATerm) ATmakeAppl(sym__2, q_0, (ATerm) ATinsert((ATermList)SRTS_setAnnotations((ATerm)ATempty, (ATerm) ATinsert(ATempty, term83)), term93));
t = access_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail87 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted111 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted111";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term101;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted110 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted110";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted108 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted108";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_69 = { &(lifted109) , &(frame) };
StrCL lifted109_cl = &(z_69);
t = try_1_0(sl_up(sl), lifted109_cl, t);
if((t == NULL))
goto fail82 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted109 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted109";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_0 = NULL,p_0 = NULL;
p_0 = t;
o_0 = t;
t = (ATerm) ATmakeAppl(sym__2, o_0, (ATerm) ATinsert(ATempty, term93));
t = access_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail83 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted107 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted107";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term99;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted106 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted106";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("/", 0, ATtrue))))
goto fail80 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted105 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted105";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted104 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted104";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_0 = NULL,n_0 = NULL;
n_0 = t;
m_0 = t;
t = (ATerm) ATmakeAppl(sym__2, m_0, (ATerm) ATinsert(ATempty, term97));
t = access_0_0(sl_up(sl), t);
if((t == NULL))
goto fail78 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted103 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted103";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term95;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted118 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted118";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted116 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted116";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_69 = { &(lifted117) , &(frame) };
StrCL lifted117_cl = &(p_69);
t = try_1_0(sl_up(sl), lifted117_cl, t);
if((t == NULL))
goto fail74 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted117 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted117";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_0 = NULL,t_0 = NULL;
t_0 = t;
s_0 = t;
t = (ATerm) ATmakeAppl(sym__2, s_0, (ATerm) SRTS_setAnnotations((ATerm)ATinsert(ATempty, term93), (ATerm) ATinsert(ATempty, term83)));
t = access_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail75 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted115 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted115";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term91;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
ATerm fileno_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fileno_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_68 = { &(lifted99) , &(frame) };
StrCL lifted99_cl = &(h_68);
struct str_closure i_68 = { &(fileno_0_0) , sl };
StrCL lifted100_cl = &(i_68);
struct str_closure j_68 = { &(stderr_stream_0_0) , sl };
StrCL lifted101_cl = &(j_68);
struct str_closure k_68 = { &(STDERR__FILENO_0_0) , sl };
StrCL lifted102_cl = &(k_68);
struct str_closure n_68 = { &(lifted79) , &(frame) };
StrCL lifted79_cl = &(n_68);
struct str_closure o_68 = { &(fileno_0_0) , sl };
StrCL lifted80_cl = &(o_68);
struct str_closure s_68 = { &(stdin_stream_0_0) , sl };
StrCL lifted81_cl = &(s_68);
struct str_closure t_68 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(t_68);
t = apply_test_4_0(sl, lifted79_cl, lifted80_cl, lifted81_cl, lifted82_cl, t);
if((t == NULL))
goto fail62 ;
{
struct str_closure u_68 = { &(lifted83) , &(frame) };
StrCL lifted83_cl = &(u_68);
struct str_closure v_68 = { &(fileno_0_0) , sl };
StrCL lifted84_cl = &(v_68);
struct str_closure z_68 = { &(stdin_stream_0_0) , sl };
StrCL lifted85_cl = &(z_68);
struct str_closure a_69 = { &(STDIN__FILENO_0_0) , sl };
StrCL lifted86_cl = &(a_69);
t = apply_test_4_0(sl, lifted83_cl, lifted84_cl, lifted85_cl, lifted86_cl, t);
if((t == NULL))
goto fail62 ;
{
struct str_closure b_69 = { &(lifted87) , &(frame) };
StrCL lifted87_cl = &(b_69);
struct str_closure c_69 = { &(fileno_0_0) , sl };
StrCL lifted88_cl = &(c_69);
struct str_closure d_69 = { &(stdout_stream_0_0) , sl };
StrCL lifted89_cl = &(d_69);
struct str_closure e_69 = { &(lifted90) , &(frame) };
StrCL lifted90_cl = &(e_69);
t = apply_test_4_0(sl, lifted87_cl, lifted88_cl, lifted89_cl, lifted90_cl, t);
if((t == NULL))
goto fail62 ;
{
struct str_closure f_69 = { &(lifted91) , &(frame) };
StrCL lifted91_cl = &(f_69);
struct str_closure i_69 = { &(fileno_0_0) , sl };
StrCL lifted92_cl = &(i_69);
struct str_closure j_69 = { &(stdout_stream_0_0) , sl };
StrCL lifted93_cl = &(j_69);
struct str_closure k_69 = { &(STDOUT__FILENO_0_0) , sl };
StrCL lifted94_cl = &(k_69);
t = apply_test_4_0(sl, lifted91_cl, lifted92_cl, lifted93_cl, lifted94_cl, t);
if((t == NULL))
goto fail62 ;
{
struct str_closure l_69 = { &(lifted95) , &(frame) };
StrCL lifted95_cl = &(l_69);
struct str_closure m_69 = { &(fileno_0_0) , sl };
StrCL lifted96_cl = &(m_69);
struct str_closure n_69 = { &(stderr_stream_0_0) , sl };
StrCL lifted97_cl = &(n_69);
struct str_closure o_69 = { &(lifted98) , &(frame) };
StrCL lifted98_cl = &(o_69);
t = apply_test_4_0(sl, lifted95_cl, lifted96_cl, lifted97_cl, lifted98_cl, t);
if((t == NULL))
goto fail62 ;
t = apply_test_4_0(sl, lifted99_cl, lifted100_cl, lifted101_cl, lifted102_cl, t);
if((t == NULL))
goto fail62 ;
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted98 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted98";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted95 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted95";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term87;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted91 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted91";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term85;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted90 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted90";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term83;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted87 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted87";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term81;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted83 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted83";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term79;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted82 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted82";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term77;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted79 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted79";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term75;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted99 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted99";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term73;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
ATerm abspath_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "abspath_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm k_0 = NULL,l_0 = NULL;
sl_init_var(0, k_0);
{
struct str_closure n_67 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(n_67);
struct str_closure q_67 = { &(abspath_0_0) , sl };
StrCL lifted76_cl = &(q_67);
struct str_closure r_67 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(r_67);
struct str_closure s_67 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(s_67);
l_0 = t;
t = getcwd_0_0(sl, t);
if((t == NULL))
goto fail49 ;
if((k_0 == NULL))
{
k_0 = t;
}
else
if((k_0 != t))
goto fail49 ;
t = l_0;
{
struct str_closure t_67 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(t_67);
struct str_closure u_67 = { &(abspath_0_0) , sl };
StrCL lifted64_cl = &(u_67);
struct str_closure v_67 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(v_67);
struct str_closure w_67 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(w_67);
t = apply_test_4_0(sl, lifted63_cl, lifted64_cl, lifted65_cl, lifted66_cl, t);
if((t == NULL))
goto fail49 ;
{
struct str_closure x_67 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(x_67);
struct str_closure y_67 = { &(abspath_0_0) , sl };
StrCL lifted68_cl = &(y_67);
struct str_closure z_67 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(z_67);
struct str_closure a_68 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(a_68);
t = apply_test_4_0(sl, lifted67_cl, lifted68_cl, lifted69_cl, lifted70_cl, t);
if((t == NULL))
goto fail49 ;
{
struct str_closure d_68 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(d_68);
struct str_closure e_68 = { &(abspath_0_0) , sl };
StrCL lifted72_cl = &(e_68);
struct str_closure f_68 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(f_68);
struct str_closure g_68 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(g_68);
t = apply_test_4_0(sl, lifted71_cl, lifted72_cl, lifted73_cl, lifted74_cl, t);
if((t == NULL))
goto fail49 ;
t = apply_test_4_0(sl, lifted75_cl, lifted76_cl, lifted77_cl, lifted78_cl, t);
if((t == NULL))
goto fail49 ;
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail61 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), term57);
}
t = conc_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail61 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted73 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted73";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term71;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted67 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted67";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term69;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term67;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail52 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), term65);
}
t = conc_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail52 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term49;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term63;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_abspath_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_abspath_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_65 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(a_65);
struct str_closure d_65 = { &(is_abspath_0_0) , sl };
StrCL lifted61_cl = &(d_65);
struct str_closure e_65 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(e_65);
struct str_closure j_65 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(j_65);
struct str_closure k_65 = { &(is_abspath_0_0) , sl };
StrCL lifted50_cl = &(k_65);
struct str_closure l_65 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(l_65);
struct str_closure m_65 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(m_65);
t = apply_test_4_0(sl, lifted49_cl, lifted50_cl, lifted51_cl, lifted52_cl, t);
if((t == NULL))
goto fail38 ;
{
struct str_closure u_65 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(u_65);
struct str_closure v_65 = { &(is_abspath_0_0) , sl };
StrCL lifted54_cl = &(v_65);
struct str_closure g_66 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(g_66);
struct str_closure h_66 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(h_66);
t = apply_test_4_0(sl, lifted53_cl, lifted54_cl, lifted55_cl, lifted56_cl, t);
if((t == NULL))
goto fail38 ;
{
struct str_closure f_67 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(f_67);
struct str_closure g_67 = { &(is_abspath_0_0) , sl };
StrCL lifted58_cl = &(g_67);
struct str_closure m_67 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(m_67);
t = apply_and_fail_3_0(sl, lifted57_cl, lifted58_cl, lifted59_cl, t);
if((t == NULL))
goto fail38 ;
t = apply_and_fail_3_0(sl, lifted60_cl, lifted61_cl, lifted62_cl, t);
if((t == NULL))
goto fail38 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
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
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term55;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term49;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
ATerm file_props_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "file_props_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_64 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(o_64);
struct str_closure p_64 = { &(file_newer_0_0) , sl };
StrCL lifted46_cl = &(p_64);
struct str_closure q_64 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(q_64);
struct str_closure r_64 = { &(debug_0_0) , sl };
StrCL lifted48_cl = &(r_64);
struct str_closure s_64 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(s_64);
struct str_closure t_64 = { &(can_create_file_0_0) , sl };
StrCL lifted38_cl = &(t_64);
struct str_closure u_64 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(u_64);
struct str_closure v_64 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(v_64);
t = apply_test_4_0(sl, lifted37_cl, lifted38_cl, lifted39_cl, lifted40_cl, t);
if((t == NULL))
goto fail29 ;
{
struct str_closure w_64 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(w_64);
struct str_closure x_64 = { &(modification_time_0_0) , sl };
StrCL lifted42_cl = &(x_64);
struct str_closure y_64 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(y_64);
struct str_closure z_64 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(z_64);
t = apply_and_check_4_0(sl, lifted41_cl, lifted42_cl, lifted43_cl, lifted44_cl, t);
if((t == NULL))
goto fail29 ;
t = apply_and_check_4_0(sl, lifted45_cl, lifted46_cl, lifted47_cl, lifted48_cl, t);
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
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = debug_0_0(sl_up(sl), t);
if((t == NULL))
goto fail37 ;
t = is_int_0_0(sl_up(sl), t);
if((t == NULL))
goto fail37 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term37;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term45;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
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
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term35;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
ATerm fork_wait_test_1_0 (StrSL sl, StrCL h_0, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fork_wait_test_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm g_0 = NULL;
sl_init_var(0, g_0);
{
struct str_closure n_64 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(n_64);
t = fork_2_0(sl, h_0, lifted36_cl, t);
if((t == NULL))
goto fail27 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_0 = NULL,j_0 = NULL;
if(match_cons(t, sym__2))
{
i_0 = ATgetArgument(t, 0);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 1);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 1)))
goto fail28 ;
}
else
goto fail28 ;
t = i_0;
t = waitpid_0_0(sl_up(sl), t);
if((t == NULL))
goto fail28 ;
if(match_cons(t, sym_WaitStatus_3))
{
ATerm trm0 = ATgetArgument(t, 0);
j_0 = ATgetArgument(t, 1);
{
ATerm trm1 = ATgetArgument(t, 2);
}
}
else
goto fail28 ;
t = j_0;
t = signal_from_number_0_0(sl_up(sl), t);
if((t == NULL))
goto fail28 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
ATerm kill_myself_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "kill_myself_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_0 = NULL,f_0 = NULL;
f_0 = t;
t = get_pid_0_0(sl, t);
if((t == NULL))
goto fail26 ;
e_0 = t;
t = f_0;
t = (ATerm) ATmakeAppl(sym__2, e_0, term33);
t = kill_0_0(sl, t);
if((t == NULL))
goto fail26 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
ATerm kill_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "kill_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_64 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(j_64);
struct str_closure k_64 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(k_64);
struct str_closure l_64 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(l_64);
struct str_closure m_64 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(m_64);
t = apply_test_4_0(sl, lifted31_cl, lifted32_cl, lifted34_cl, lifted35_cl, t);
if((t == NULL))
goto fail21 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_64 = { &(kill_myself_0_0) , sl_up(sl) };
StrCL lifted33_cl = &(i_64);
t = fork_wait_test_1_0(sl_up(sl), lifted33_cl, t);
if((t == NULL))
goto fail23 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term25;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm times_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "times_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm c_0 = NULL,d_0 = NULL;
sl_init_var(0, c_0);
sl_init_var(1, d_0);
{
struct str_closure w_63 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(w_63);
struct str_closure x_63 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(x_63);
struct str_closure y_63 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(y_63);
struct str_closure z_63 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(z_63);
struct str_closure e_64 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(e_64);
struct str_closure f_64 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(f_64);
struct str_closure g_64 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(g_64);
struct str_closure h_64 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(h_64);
t = apply_and_check_4_0(sl, lifted14_cl, lifted15_cl, lifted16_cl, lifted17_cl, t);
if((t == NULL))
goto fail11 ;
t = apply_and_check_4_0(sl, lifted22_cl, lifted23_cl, lifted25_cl, lifted26_cl, t);
if((t == NULL))
goto fail11 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_64 = { &(is_int_0_0) , sl_up(sl) };
StrCL lifted18_cl = &(a_64);
struct str_closure b_64 = { &(is_int_0_0) , sl_up(sl) };
StrCL lifted19_cl = &(b_64);
struct str_closure c_64 = { &(is_int_0_0) , sl_up(sl) };
StrCL lifted20_cl = &(c_64);
struct str_closure d_64 = { &(is_int_0_0) , sl_up(sl) };
StrCL lifted21_cl = &(d_64);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail20 ;
t = debug_0_0(sl_up(sl), t);
if((t == NULL))
goto fail20 ;
t = _4_0(sl_up(sl), lifted18_cl, lifted19_cl, lifted20_cl, lifted21_cl, t);
if((t == NULL))
goto fail20 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
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
t = term23;
t = call_0_0(sl_up(sl), t);
if((t == NULL))
goto fail18 ;
t = times_0_0(sl_up(sl), t);
if((t == NULL))
goto fail18 ;
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
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_63 = { &(is_int_0_0) , sl_up(sl) };
StrCL lifted27_cl = &(s_63);
struct str_closure t_63 = { &(is_int_0_0) , sl_up(sl) };
StrCL lifted28_cl = &(t_63);
struct str_closure u_63 = { &(is_int_0_0) , sl_up(sl) };
StrCL lifted29_cl = &(u_63);
struct str_closure v_63 = { &(is_int_0_0) , sl_up(sl) };
StrCL lifted30_cl = &(v_63);
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail16 ;
t = debug_0_0(sl_up(sl), t);
if((t == NULL))
goto fail16 ;
t = _4_0(sl_up(sl), lifted27_cl, lifted28_cl, lifted29_cl, lifted30_cl, t);
if((t == NULL))
goto fail16 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_63 = NULL;
t = times_0_0(sl_up(sl), t);
if((t == NULL))
goto fail13 ;
c_63 = t;
t = clock_0_0(sl_up(sl), t);
if((t == NULL))
goto fail13 ;
{
struct str_closure r_63 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(r_63);
t = debug_1_0(sl_up(sl), lifted24_cl, t);
if((t == NULL))
goto fail13 ;
t = c_63;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term17;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_63 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(p_63);
struct str_closure q_63 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(q_63);
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
t = fileno_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = access_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
{
struct str_closure d_63 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(d_63);
struct str_closure e_63 = { &(strerror_0_0) , sl_up(sl) };
StrCL lifted3_cl = &(e_63);
struct str_closure f_63 = { &(EXDEV_0_0) , sl_up(sl) };
StrCL lifted4_cl = &(f_63);
struct str_closure g_63 = { &(debug_0_0) , sl_up(sl) };
StrCL lifted5_cl = &(g_63);
t = apply_and_check_4_0(sl_up(sl), lifted2_cl, lifted3_cl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto fail2 ;
t = perror_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
{
struct str_closure h_63 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(h_63);
struct str_closure i_63 = { &(getcwd_0_0) , sl_up(sl) };
StrCL lifted7_cl = &(i_63);
struct str_closure j_63 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(j_63);
t = apply_test_3_0(sl_up(sl), lifted6_cl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail2 ;
t = abspath_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = is_abspath_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = file_props_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
{
struct str_closure l_63 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(l_63);
struct str_closure m_63 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(m_63);
struct str_closure n_63 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(n_63);
struct str_closure o_63 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(o_63);
t = apply_test_4_0(sl_up(sl), lifted9_cl, lifted10_cl, lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto fail2 ;
t = kill_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = times_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term13;
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
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_63 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(k_63);
t = readdir_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail7 ;
t = fetch_elem_1_0(sl_up(sl_up(sl)), lifted11_cl, t);
if((t == NULL))
goto fail7 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("system-posix-test.c", 0, ATtrue))))
goto fail8 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
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
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 134));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_elem_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_elem_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(EXDEV_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("EXDEV_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strerror_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strerror_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(perror_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("perror_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_abspath_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_abspath_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(stderr_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("stderr_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(stdout_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("stdout_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(stdin_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("stdin_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(clock_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("clock_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fileno_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fileno_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(access_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("access_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(close_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("close_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(getcwd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("getcwd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(readdir_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("readdir_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(modification_time_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("modification_time_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(STDERR__FILENO_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("STDERR__FILENO_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(STDOUT__FILENO_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("STDOUT__FILENO_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(STDIN__FILENO_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("STDIN__FILENO_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(kill_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("kill_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(waitpid_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("waitpid_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_pid_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_pid_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(signal_from_number_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("signal_from_number_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(times_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("times_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(can_create_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("can_create_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(file_newer_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("file_newer_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(abspath_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("abspath_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(call_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("call_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fork_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fork_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted122);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted122", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted120);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted120", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted119);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted119", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted125);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted125", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted123);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted123", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(perror_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("perror_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted107);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted107", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(access_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("access_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted98);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted98", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted95);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted95", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted91);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted91", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted90);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted90", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted87);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted87", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted83);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted83", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted82);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted82", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted79);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted79", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted99);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted99", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fileno_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fileno_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted69);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted69", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted63);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted63", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted78);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted78", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted77);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted77", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted75);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted75", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(abspath_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("abspath_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted49);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted49", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted62);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted62", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_abspath_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_abspath_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted45);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted45", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(file_props_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("file_props_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fork_wait_test_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fork_wait_test_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(kill_myself_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("kill_myself_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted34);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted34", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(kill_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("kill_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(times_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("times_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
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
