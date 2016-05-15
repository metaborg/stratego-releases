#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Binary_0;
static Symbol sym_Output_1;
static Symbol sym_DeclVersion_1;
static Symbol sym_Version_0;
static Symbol sym_Verbose_1;
static Symbol sym_Silent_0;
static Symbol sym_Trace_1;
static Symbol sym_TraceAll_0;
static Symbol sym_CSYNTAX_0;
static Symbol sym_FRONTEND_0;
static Symbol sym_FUSION_0;
static Symbol sym_NORM_0;
static Symbol sym_CC_0;
static Symbol sym_Ignore_0;
static Symbol sym_AST_0;
static Symbol sym_Main_1;
static Symbol sym_Input_1;
static Symbol sym_ExecDir_1;
static Symbol sym__3;
static Symbol sym__0;
static Symbol sym_DR__DUMMY_0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Program_1;
static void init_module_constructors (void)
{
sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
ATprotectSymbol(sym_Binary_0);
sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
ATprotectSymbol(sym_Output_1);
sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
ATprotectSymbol(sym_DeclVersion_1);
sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
ATprotectSymbol(sym_Version_0);
sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
ATprotectSymbol(sym_Verbose_1);
sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
ATprotectSymbol(sym_Silent_0);
sym_Trace_1 = ATmakeSymbol("Trace", 1, ATfalse);
ATprotectSymbol(sym_Trace_1);
sym_TraceAll_0 = ATmakeSymbol("TraceAll", 0, ATfalse);
ATprotectSymbol(sym_TraceAll_0);
sym_CSYNTAX_0 = ATmakeSymbol("CSYNTAX", 0, ATfalse);
ATprotectSymbol(sym_CSYNTAX_0);
sym_FRONTEND_0 = ATmakeSymbol("FRONTEND", 0, ATfalse);
ATprotectSymbol(sym_FRONTEND_0);
sym_FUSION_0 = ATmakeSymbol("FUSION", 0, ATfalse);
ATprotectSymbol(sym_FUSION_0);
sym_NORM_0 = ATmakeSymbol("NORM", 0, ATfalse);
ATprotectSymbol(sym_NORM_0);
sym_CC_0 = ATmakeSymbol("CC", 0, ATfalse);
ATprotectSymbol(sym_CC_0);
sym_Ignore_0 = ATmakeSymbol("Ignore", 0, ATfalse);
ATprotectSymbol(sym_Ignore_0);
sym_AST_0 = ATmakeSymbol("AST", 0, ATfalse);
ATprotectSymbol(sym_AST_0);
sym_Main_1 = ATmakeSymbol("Main", 1, ATfalse);
ATprotectSymbol(sym_Main_1);
sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
ATprotectSymbol(sym_Input_1);
sym_ExecDir_1 = ATmakeSymbol("ExecDir", 1, ATfalse);
ATprotectSymbol(sym_ExecDir_1);
sym__3 = ATmakeSymbol("", 3, ATfalse);
ATprotectSymbol(sym__3);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_DR__DUMMY_0 = ATmakeSymbol("DR_DUMMY", 0, ATfalse);
ATprotectSymbol(sym_DR__DUMMY_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
ATprotectSymbol(sym_Program_1);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("old-parse-options-test", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(sym_Ignore_0);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym_CC_0);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(sym_NORM_0);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(sym_AST_0);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym_FRONTEND_0);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(sym_FUSION_0);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(sym_CSYNTAX_0);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym_TraceAll_0);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term21));
term21 = (ATerm) ATmakeAppl(sym_DR__DUMMY_0);
ATprotect(&(term22));
term22 = term21;
ATprotect(&(term23));
term23 = (ATerm) ATmakeAppl(ATmakeSymbol("837b14e082dfa57e23a518c2fef2eaf3", 0, ATtrue));
ATprotect(&(term24));
term24 = term23;
ATprotect(&(term25));
term25 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
ATprotect(&(term26));
term26 = term25;
ATprotect(&(term27));
term27 = (ATerm) ATmakeAppl(ATmakeSymbol("37384eebdfff2c6083f2f6a85e51958a", 0, ATtrue));
ATprotect(&(term28));
term28 = term27;
ATprotect(&(term29));
term29 = (ATerm) ATmakeAppl(sym_Silent_0);
ATprotect(&(term30));
term30 = term29;
ATprotect(&(term31));
term31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
ATprotect(&(term32));
term32 = term31;
ATprotect(&(term33));
term33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
ATprotect(&(term34));
term34 = term33;
ATprotect(&(term35));
term35 = (ATerm) ATmakeAppl(sym_Version_0);
ATprotect(&(term36));
term36 = term35;
ATprotect(&(term37));
term37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
ATprotect(&(term38));
term38 = term37;
ATprotect(&(term39));
term39 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
ATprotect(&(term40));
term40 = term39;
ATprotect(&(term41));
term41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
ATprotect(&(term42));
term42 = term41;
ATprotect(&(term43));
term43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
ATprotect(&(term44));
term44 = term43;
ATprotect(&(term45));
term45 = (ATerm) ATmakeAppl(sym_Binary_0);
ATprotect(&(term46));
term46 = term45;
ATprotect(&(term47));
term47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
ATprotect(&(term48));
term48 = term47;
ATprotect(&(term49));
term49 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
ATprotect(&(term50));
term50 = term49;
ATprotect(&(term51));
term51 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
ATprotect(&(term52));
term52 = term51;
ATprotect(&(term53));
term53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
ATprotect(&(term54));
term54 = term53;
ATprotect(&(term55));
term55 = (ATerm) ATmakeAppl(sym__3, term52, term54, (ATerm) ATempty);
ATprotect(&(term56));
term56 = term55;
ATprotect(&(term57));
term57 = (ATerm) ATmakeAppl(ATmakeSymbol("-I/tmp/include", 0, ATtrue));
ATprotect(&(term58));
term58 = term57;
ATprotect(&(term59));
term59 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
ATprotect(&(term60));
term60 = term59;
ATprotect(&(term61));
term61 = (ATerm) ATmakeAppl(ATmakeSymbol("..", 0, ATtrue));
ATprotect(&(term62));
term62 = term61;
ATprotect(&(term63));
term63 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
ATprotect(&(term64));
term64 = term63;
ATprotect(&(term65));
term65 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
ATprotect(&(term66));
term66 = term65;
ATprotect(&(term67));
term67 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
ATprotect(&(term68));
term68 = term67;
ATprotect(&(term69));
term69 = (ATerm) ATmakeAppl(sym_Program_1, term68);
ATprotect(&(term70));
term70 = term69;
ATprotect(&(term71));
term71 = (ATerm) ATmakeAppl(ATmakeSymbol("test2", 0, ATtrue));
ATprotect(&(term72));
term72 = term71;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm table_put_0_0 (StrSL sl, ATerm t);
ATerm dr_set_rule_0_3 (StrSL sl, ATerm j_37, ATerm k_37, ATerm l_37, ATerm t);
ATerm remove_extension_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_2_0 (StrSL sl, StrCL g_17, StrCL h_17, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL d_17, StrCL e_17, StrCL f_17, ATerm t);
ATerm Option_2_0 (StrSL sl, StrCL b_17, StrCL c_17, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL y_16, StrCL z_16, StrCL a_17, ATerm t);
ATerm parse_options_p__1_0 (StrSL sl, StrCL s_16, ATerm t);
ATerm parse_options_1_0 (StrSL sl, StrCL o_16, ATerm t);
ATerm system_usage_switch_0_0 (StrSL sl, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL a_13, StrCL b_13, StrCL c_13, StrCL d_13, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL y_12, StrCL z_12, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
ATerm test2_0_0 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
ATerm test1_0_0 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
ATerm my_io_options_0_0 (StrSL sl, ATerm t);
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
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm sc_options_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm test2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_81 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(u_81);
struct str_closure w_81 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(w_81);
struct str_closure x_81 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(x_81);
struct str_closure z_81 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(z_81);
t = apply_test_4_0(sl, lifted60_cl, lifted61_cl, lifted63_cl, lifted64_cl, t);
if((t == NULL))
goto fail64 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term3), term3), term3), term70);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term58), term60), term62), term64), term66), term64), term68);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_81 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(t_81);
t = parse_options_1_0(sl_up(sl), lifted62_cl, t);
if((t == NULL))
goto fail66 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm27 = t;
t = sc_options_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label35 ;
goto label34 ;
label35 :
t = trm27;
t = my_io_options_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail67 ;
else
goto label34 ;
label34 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term72;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
ATerm test1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_81 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(n_81);
struct str_closure o_81 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(o_81);
struct str_closure p_81 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(p_81);
struct str_closure q_81 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(q_81);
t = apply_test_4_0(sl, lifted55_cl, lifted56_cl, lifted58_cl, lifted59_cl, t);
if((t == NULL))
goto fail58 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term3), term3), term3), term70);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term58), term60), term62), term64), term66), term64), term68);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_2 = NULL;
struct str_closure j_81 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(j_81);
m_2 = t;
t = term56;
t = table_put_0_0(sl_up(sl), t);
if((t == NULL))
goto fail60 ;
t = m_2;
t = parse_options_p__1_0(sl_up(sl), lifted57_cl, t);
if((t == NULL))
goto fail60 ;
}
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
{
ATerm trm25 = t;
t = sc_options_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label32 ;
goto label31 ;
label32 :
t = trm25;
{
ATerm trm26 = t;
t = my_io_options_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label33 ;
goto label31 ;
label33 :
t = trm26;
t = system_usage_switch_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail61 ;
else
goto label31 ;
}
label31 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term50;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
ATerm my_io_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "my_io_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm15 = t;
struct str_closure n_80 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(n_80);
struct str_closure o_80 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(o_80);
struct str_closure p_80 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(p_80);
t = Option_3_0(sl, lifted34_cl, lifted35_cl, lifted36_cl, t);
if((t == NULL))
goto label17 ;
goto label16 ;
label17 :
t = trm15;
{
ATerm trm17 = t;
struct str_closure q_80 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(q_80);
struct str_closure r_80 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(r_80);
struct str_closure s_80 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(s_80);
t = ArgOption_3_0(sl, lifted37_cl, lifted38_cl, lifted39_cl, t);
if((t == NULL))
goto label20 ;
goto label16 ;
label20 :
t = trm17;
{
ATerm trm18 = t;
struct str_closure t_80 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(t_80);
struct str_closure u_80 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(u_80);
struct str_closure v_80 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(v_80);
t = Option_3_0(sl, lifted40_cl, lifted41_cl, lifted42_cl, t);
if((t == NULL))
goto label21 ;
goto label16 ;
label21 :
t = trm18;
{
ATerm trm20 = t;
struct str_closure w_80 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(w_80);
struct str_closure y_80 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(y_80);
struct str_closure z_80 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(z_80);
t = ArgOption_3_0(sl, lifted43_cl, lifted44_cl, lifted45_cl, t);
if((t == NULL))
goto label24 ;
goto label16 ;
label24 :
t = trm20;
{
ATerm trm21 = t;
struct str_closure a_81 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(a_81);
struct str_closure b_81 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(b_81);
struct str_closure c_81 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(c_81);
t = ArgOption_3_0(sl, lifted46_cl, lifted47_cl, lifted48_cl, t);
if((t == NULL))
goto label25 ;
goto label16 ;
label25 :
t = trm21;
{
ATerm trm23 = t;
struct str_closure d_81 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(d_81);
struct str_closure e_81 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(e_81);
struct str_closure f_81 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(f_81);
t = ArgOption_3_0(sl, lifted49_cl, lifted50_cl, lifted51_cl, t);
if((t == NULL))
goto label28 ;
goto label16 ;
label28 :
t = trm23;
{
struct str_closure g_81 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(g_81);
struct str_closure h_81 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(h_81);
struct str_closure i_81 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(i_81);
t = Option_3_0(sl, lifted52_cl, lifted53_cl, lifted54_cl, t);
if((t == NULL))
goto fail36 ;
else
goto label16 ;
}
}
}
}
}
}
label16 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term48;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term46;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-b", 0, ATtrue))))
goto fail55 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term44;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_2 = NULL,l_2 = NULL;
l_2 = t;
k_2 = t;
t = (ATerm) ATmakeAppl(sym_Output_1, k_2);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm24 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-o", 0, ATtrue))))
goto label30 ;
goto label29 ;
label30 :
t = trm24;
if((ATgetSymbol(t) == ATmakeSymbol("--output", 0, ATtrue)))
goto label29 ;
else
goto fail52 ;
label29 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term42;
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
{
ATerm i_2 = NULL,j_2 = NULL;
j_2 = t;
i_2 = t;
t = (ATerm) ATmakeAppl(sym_Input_1, i_2);
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
ATerm trm22 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-i", 0, ATtrue))))
goto label27 ;
goto label26 ;
label27 :
t = trm22;
if((ATgetSymbol(t) == ATmakeSymbol("--input", 0, ATtrue)))
goto label26 ;
else
goto fail49 ;
label26 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term40;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_2 = NULL,h_2 = NULL;
h_2 = t;
g_2 = t;
t = (ATerm) ATmakeAppl(sym_DeclVersion_1, g_2);
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
if(!((ATgetSymbol(t) == ATmakeSymbol("@version", 0, ATtrue))))
goto fail46 ;
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
t = term38;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term36;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm19 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-v", 0, ATtrue))))
goto label23 ;
goto label22 ;
label23 :
t = trm19;
if((ATgetSymbol(t) == ATmakeSymbol("--version", 0, ATtrue)))
goto label22 ;
else
goto fail43 ;
label22 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term34;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_2 = NULL,f_2 = NULL;
f_2 = t;
e_2 = t;
t = (ATerm) ATmakeAppl(sym_Verbose_1, e_2);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--verbose", 0, ATtrue))))
goto fail40 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term32;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term30;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm16 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-S", 0, ATtrue))))
goto label19 ;
goto label18 ;
label19 :
t = trm16;
if((ATgetSymbol(t) == ATmakeSymbol("--silent", 0, ATtrue)))
goto label18 ;
else
goto fail37 ;
label18 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
ATerm sc_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sc_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
struct str_closure g_79 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(g_79);
struct str_closure h_79 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(h_79);
t = ArgOption_2_0(sl, lifted2_cl, lifted3_cl, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
struct str_closure i_79 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(i_79);
struct str_closure j_79 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(j_79);
t = ArgOption_2_0(sl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto label2 ;
goto label0 ;
label2 :
t = trm1;
{
ATerm trm2 = t;
struct str_closure k_79 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(k_79);
struct str_closure l_79 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(l_79);
t = ArgOption_2_0(sl, lifted6_cl, lifted7_cl, t);
if((t == NULL))
goto label3 ;
goto label0 ;
label3 :
t = trm2;
{
ATerm trm3 = t;
struct str_closure m_79 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(m_79);
struct str_closure n_79 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(n_79);
t = ArgOption_2_0(sl, lifted8_cl, lifted9_cl, t);
if((t == NULL))
goto label4 ;
goto label0 ;
label4 :
t = trm3;
{
ATerm trm4 = t;
struct str_closure o_79 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(o_79);
struct str_closure p_79 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(p_79);
t = ArgOption_2_0(sl, lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto label5 ;
goto label0 ;
label5 :
t = trm4;
{
ATerm trm5 = t;
struct str_closure q_79 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(q_79);
struct str_closure s_79 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(s_79);
t = Option_2_0(sl, lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto label6 ;
goto label0 ;
label6 :
t = trm5;
{
ATerm trm6 = t;
struct str_closure t_79 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(t_79);
struct str_closure u_79 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(u_79);
t = Option_2_0(sl, lifted14_cl, lifted15_cl, t);
if((t == NULL))
goto label7 ;
goto label0 ;
label7 :
t = trm6;
{
ATerm trm7 = t;
struct str_closure v_79 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(v_79);
struct str_closure w_79 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(w_79);
t = ArgOption_2_0(sl, lifted16_cl, lifted17_cl, t);
if((t == NULL))
goto label8 ;
goto label0 ;
label8 :
t = trm7;
{
ATerm trm8 = t;
struct str_closure x_79 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(x_79);
struct str_closure y_79 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(y_79);
t = ArgOption_2_0(sl, lifted18_cl, lifted19_cl, t);
if((t == NULL))
goto label9 ;
goto label0 ;
label9 :
t = trm8;
{
ATerm trm9 = t;
struct str_closure z_79 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(z_79);
struct str_closure a_80 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(a_80);
t = ArgOption_2_0(sl, lifted20_cl, lifted21_cl, t);
if((t == NULL))
goto label10 ;
goto label0 ;
label10 :
t = trm9;
{
ATerm trm10 = t;
struct str_closure b_80 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(b_80);
struct str_closure c_80 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(c_80);
t = Option_2_0(sl, lifted22_cl, lifted23_cl, t);
if((t == NULL))
goto label11 ;
goto label0 ;
label11 :
t = trm10;
{
ATerm trm11 = t;
struct str_closure d_80 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(d_80);
struct str_closure e_80 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(e_80);
t = Option_2_0(sl, lifted24_cl, lifted25_cl, t);
if((t == NULL))
goto label12 ;
goto label0 ;
label12 :
t = trm11;
{
ATerm trm12 = t;
struct str_closure f_80 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(f_80);
struct str_closure g_80 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(g_80);
t = Option_2_0(sl, lifted26_cl, lifted27_cl, t);
if((t == NULL))
goto label13 ;
goto label0 ;
label13 :
t = trm12;
{
ATerm trm13 = t;
struct str_closure h_80 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(h_80);
struct str_closure i_80 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(i_80);
t = Option_2_0(sl, lifted28_cl, lifted29_cl, t);
if((t == NULL))
goto label14 ;
goto label0 ;
label14 :
t = trm13;
{
ATerm trm14 = t;
struct str_closure j_80 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(j_80);
struct str_closure k_80 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(k_80);
t = Option_2_0(sl, lifted30_cl, lifted31_cl, t);
if((t == NULL))
goto label15 ;
goto label0 ;
label15 :
t = trm14;
{
struct str_closure l_80 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(l_80);
struct str_closure m_80 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(m_80);
t = ArgOption_2_0(sl, lifted32_cl, lifted33_cl, t);
if((t == NULL))
goto fail3 ;
else
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
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_1 = NULL,z_1 = NULL,q_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL;
p_1 = t;
z_1 = t;
q_1 = t;
c_2 = t;
t = term26;
a_2 = t;
t = c_2;
d_2 = t;
t = term28;
b_2 = t;
t = d_2;
t = dr_set_rule_0_3(sl_up(sl), a_2, p_1, b_2, t);
if((t == NULL))
goto fail35 ;
t = q_1;
t = z_1;
t = (ATerm) ATmakeAppl(sym_Trace_1, p_1);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-t", 0, ATtrue))))
goto fail34 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL;
t = term17;
o_1 = t;
w_1 = t;
t = term19;
t_1 = t;
t = w_1;
x_1 = t;
t = (ATerm) SRTS_setAnnotations(term20, (ATerm) ATinsert(ATempty, term22));
u_1 = t;
t = x_1;
y_1 = t;
t = term24;
v_1 = t;
t = y_1;
t = dr_set_rule_0_3(sl_up(sl), t_1, u_1, v_1, t);
if((t == NULL))
goto fail33 ;
t = o_1;
}
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
if(!((ATgetSymbol(t) == ATmakeSymbol("--trace-all", 0, ATtrue))))
goto fail32 ;
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
t = term15;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--csyntax", 0, ATtrue))))
goto fail30 ;
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
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--fusion", 0, ATtrue))))
goto fail28 ;
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
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-F", 0, ATtrue))))
goto fail26 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("--ast", 0, ATtrue))))
goto fail24 ;
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
{
ATerm n_1 = NULL;
n_1 = t;
t = (ATerm) ATmakeAppl(sym_Main_1, n_1);
}
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
if(!((ATgetSymbol(t) == ATmakeSymbol("-m", 0, ATtrue))))
goto fail22 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_1 = NULL;
m_1 = t;
t = (ATerm) ATmakeAppl(sym_Main_1, m_1);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--main", 0, ATtrue))))
goto fail20 ;
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
{
ATerm l_1 = NULL,r_1 = NULL,s_1 = NULL;
l_1 = t;
s_1 = t;
t = remove_extension_0_0(sl_up(sl), t);
if((t == NULL))
goto fail19 ;
r_1 = t;
t = s_1;
t = (ATerm) ATmakeAppl(sym_Input_1, r_1);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-i", 0, ATtrue))))
goto fail18 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--norm", 0, ATtrue))))
goto fail16 ;
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
t = term5;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("-CC", 0, ATtrue))))
goto fail14 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term3;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("-CL", 0, ATtrue))))
goto fail12 ;
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
t = term3;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("-CI", 0, ATtrue))))
goto fail10 ;
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
t = term3;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("--Include", 0, ATtrue))))
goto fail8 ;
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
t = term3;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-I", 0, ATtrue))))
goto fail6 ;
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
ATerm k_1 = NULL;
k_1 = t;
t = (ATerm) ATmakeAppl(sym_ExecDir_1, k_1);
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
if(!((ATgetSymbol(t) == ATmakeSymbol("-e", 0, ATtrue))))
goto fail4 ;
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
struct str_closure e_79 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(e_79);
struct str_closure f_79 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(f_79);
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
t = test1_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test2_0_0(sl_up(sl), t);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 82));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(table_put_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_put_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_set_rule_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_set_rule_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(remove_extension_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("remove_extension_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Option_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Option_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Option_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Option_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_options_p__1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_options_p__1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_options_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_options_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(system_usage_switch_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("system_usage_switch_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(test2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test2_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(test1_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test1_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(my_io_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("my_io_options_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(sc_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sc_options_0_0", 0, ATtrue)), &(closures[closures_index]));
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
