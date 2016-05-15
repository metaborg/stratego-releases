#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
static Symbol sym__18;
static Symbol sym__17;
static Symbol sym__16;
static Symbol sym__15;
static Symbol sym__14;
static Symbol sym__13;
static Symbol sym__12;
static Symbol sym__11;
static Symbol sym__10;
static Symbol sym__9;
static Symbol sym__8;
static Symbol sym__7;
static Symbol sym__6;
static Symbol sym__5;
static Symbol sym__4;
static Symbol sym__3;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym_DR__DUMMY_0;
static Symbol sym_DR__UNDEFINE_1;
static Symbol sym_Hashtable_1;
static Symbol sym_NewTable_0;
static Symbol sym_Tables_0;
static Symbol sym_NestedTable_1;
static Symbol sym_Scopes_0;
static Symbol sym_Conc_2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_IndexedSet_1;
static Symbol sym_ExceptionCS_2;
static Symbol sym_ThrowCS_2;
static Symbol sym_IgnoreT_1;
static Symbol sym_Structure_1;
static Symbol sym_TryBlock_4;
static Symbol sym_Finally_1;
static Symbol sym_Catch_2;
static Symbol sym_IgnoreC_1;
static Symbol sym_IgnoreB_1;
static Symbol sym_ContinueCS_2;
static Symbol sym_BreakCS_2;
static Symbol sym_SplitPos_2;
static Symbol sym_Label_1;
static Symbol sym_ChangeSet_3;
static Symbol sym_RuleScope_2;
static Symbol sym_Some_1;
static Symbol sym_None_0;
static Symbol sym_ErrorNumber_1;
static Symbol sym_stderr_0;
static Symbol sym_stdout_0;
static Symbol sym_stdin_0;
static Symbol sym_Path_1;
static Symbol sym_Stream_1;
static Symbol sym_Anno_2;
static Symbol sym_Infinite_0;
static Symbol sym_GraphLet_2;
static Symbol sym_Undefined_1;
static Symbol sym_Program_1;
static Symbol sym_Vomit_0;
static Symbol sym_Debug_0;
static Symbol sym_Info_0;
static Symbol sym_Notice_0;
static Symbol sym_Warning_0;
static Symbol sym_Error_0;
static Symbol sym_Critical_0;
static Symbol sym_Alert_0;
static Symbol sym_Emergency_0;
static Symbol sym_Saturday_0;
static Symbol sym_Friday_0;
static Symbol sym_Thursday_0;
static Symbol sym_Wednesday_0;
static Symbol sym_Tuesday_0;
static Symbol sym_Monday_0;
static Symbol sym_Sunday_0;
static Symbol sym_December_0;
static Symbol sym_November_0;
static Symbol sym_October_0;
static Symbol sym_September_0;
static Symbol sym_August_0;
static Symbol sym_July_0;
static Symbol sym_June_0;
static Symbol sym_May_0;
static Symbol sym_April_0;
static Symbol sym_March_0;
static Symbol sym_February_0;
static Symbol sym_January_0;
static Symbol sym_Dupl_2;
static Symbol sym_Date_3;
static Symbol sym_DayTime_3;
static Symbol sym_ComponentTime_3;
static Symbol sym_EpochTime_1;
static Symbol sym_Pipe_2;
static Symbol sym_X__OK_0;
static Symbol sym_W__OK_0;
static Symbol sym_R__OK_0;
static Symbol sym_F__OK_0;
static Symbol sym_WaitStatus_3;
static Symbol sym_UnknownSignal_1;
static Symbol sym_Signal_3;
static Symbol sym_XTC_0;
static Symbol sym_Imported_1;
static Symbol sym_Import_0;
static Symbol sym_Repository_0;
static Symbol sym_Tool_1;
static Symbol sym_TempDirs_0;
static Symbol sym_TempFiles_0;
static Symbol sym_TEMP_0;
static Symbol sym_DIR_1;
static Symbol sym_FILE_1;
static void init_module_constructors (void)
{
sym__18 = ATmakeSymbol("", 18, ATfalse);
ATprotectSymbol(sym__18);
sym__17 = ATmakeSymbol("", 17, ATfalse);
ATprotectSymbol(sym__17);
sym__16 = ATmakeSymbol("", 16, ATfalse);
ATprotectSymbol(sym__16);
sym__15 = ATmakeSymbol("", 15, ATfalse);
ATprotectSymbol(sym__15);
sym__14 = ATmakeSymbol("", 14, ATfalse);
ATprotectSymbol(sym__14);
sym__13 = ATmakeSymbol("", 13, ATfalse);
ATprotectSymbol(sym__13);
sym__12 = ATmakeSymbol("", 12, ATfalse);
ATprotectSymbol(sym__12);
sym__11 = ATmakeSymbol("", 11, ATfalse);
ATprotectSymbol(sym__11);
sym__10 = ATmakeSymbol("", 10, ATfalse);
ATprotectSymbol(sym__10);
sym__9 = ATmakeSymbol("", 9, ATfalse);
ATprotectSymbol(sym__9);
sym__8 = ATmakeSymbol("", 8, ATfalse);
ATprotectSymbol(sym__8);
sym__7 = ATmakeSymbol("", 7, ATfalse);
ATprotectSymbol(sym__7);
sym__6 = ATmakeSymbol("", 6, ATfalse);
ATprotectSymbol(sym__6);
sym__5 = ATmakeSymbol("", 5, ATfalse);
ATprotectSymbol(sym__5);
sym__4 = ATmakeSymbol("", 4, ATfalse);
ATprotectSymbol(sym__4);
sym__3 = ATmakeSymbol("", 3, ATfalse);
ATprotectSymbol(sym__3);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym__1 = ATmakeSymbol("", 1, ATfalse);
ATprotectSymbol(sym__1);
sym_DR__DUMMY_0 = ATmakeSymbol("DR_DUMMY", 0, ATfalse);
ATprotectSymbol(sym_DR__DUMMY_0);
sym_DR__UNDEFINE_1 = ATmakeSymbol("DR_UNDEFINE", 1, ATfalse);
ATprotectSymbol(sym_DR__UNDEFINE_1);
sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
ATprotectSymbol(sym_Hashtable_1);
sym_NewTable_0 = ATmakeSymbol("NewTable", 0, ATfalse);
ATprotectSymbol(sym_NewTable_0);
sym_Tables_0 = ATmakeSymbol("Tables", 0, ATfalse);
ATprotectSymbol(sym_Tables_0);
sym_NestedTable_1 = ATmakeSymbol("NestedTable", 1, ATfalse);
ATprotectSymbol(sym_NestedTable_1);
sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
ATprotectSymbol(sym_Scopes_0);
sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
ATprotectSymbol(sym_Conc_2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_IndexedSet_1 = ATmakeSymbol("IndexedSet", 1, ATfalse);
ATprotectSymbol(sym_IndexedSet_1);
sym_ExceptionCS_2 = ATmakeSymbol("ExceptionCS", 2, ATfalse);
ATprotectSymbol(sym_ExceptionCS_2);
sym_ThrowCS_2 = ATmakeSymbol("ThrowCS", 2, ATfalse);
ATprotectSymbol(sym_ThrowCS_2);
sym_IgnoreT_1 = ATmakeSymbol("IgnoreT", 1, ATfalse);
ATprotectSymbol(sym_IgnoreT_1);
sym_Structure_1 = ATmakeSymbol("Structure", 1, ATfalse);
ATprotectSymbol(sym_Structure_1);
sym_TryBlock_4 = ATmakeSymbol("TryBlock", 4, ATfalse);
ATprotectSymbol(sym_TryBlock_4);
sym_Finally_1 = ATmakeSymbol("Finally", 1, ATfalse);
ATprotectSymbol(sym_Finally_1);
sym_Catch_2 = ATmakeSymbol("Catch", 2, ATfalse);
ATprotectSymbol(sym_Catch_2);
sym_IgnoreC_1 = ATmakeSymbol("IgnoreC", 1, ATfalse);
ATprotectSymbol(sym_IgnoreC_1);
sym_IgnoreB_1 = ATmakeSymbol("IgnoreB", 1, ATfalse);
ATprotectSymbol(sym_IgnoreB_1);
sym_ContinueCS_2 = ATmakeSymbol("ContinueCS", 2, ATfalse);
ATprotectSymbol(sym_ContinueCS_2);
sym_BreakCS_2 = ATmakeSymbol("BreakCS", 2, ATfalse);
ATprotectSymbol(sym_BreakCS_2);
sym_SplitPos_2 = ATmakeSymbol("SplitPos", 2, ATfalse);
ATprotectSymbol(sym_SplitPos_2);
sym_Label_1 = ATmakeSymbol("Label", 1, ATfalse);
ATprotectSymbol(sym_Label_1);
sym_ChangeSet_3 = ATmakeSymbol("ChangeSet", 3, ATfalse);
ATprotectSymbol(sym_ChangeSet_3);
sym_RuleScope_2 = ATmakeSymbol("RuleScope", 2, ATfalse);
ATprotectSymbol(sym_RuleScope_2);
sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
ATprotectSymbol(sym_Some_1);
sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
ATprotectSymbol(sym_None_0);
sym_ErrorNumber_1 = ATmakeSymbol("ErrorNumber", 1, ATfalse);
ATprotectSymbol(sym_ErrorNumber_1);
sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
ATprotectSymbol(sym_stderr_0);
sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
ATprotectSymbol(sym_stdout_0);
sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
ATprotectSymbol(sym_stdin_0);
sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
ATprotectSymbol(sym_Path_1);
sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
ATprotectSymbol(sym_Stream_1);
sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
ATprotectSymbol(sym_Anno_2);
sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
ATprotectSymbol(sym_Infinite_0);
sym_GraphLet_2 = ATmakeSymbol("GraphLet", 2, ATfalse);
ATprotectSymbol(sym_GraphLet_2);
sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
ATprotectSymbol(sym_Undefined_1);
sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
ATprotectSymbol(sym_Program_1);
sym_Vomit_0 = ATmakeSymbol("Vomit", 0, ATfalse);
ATprotectSymbol(sym_Vomit_0);
sym_Debug_0 = ATmakeSymbol("Debug", 0, ATfalse);
ATprotectSymbol(sym_Debug_0);
sym_Info_0 = ATmakeSymbol("Info", 0, ATfalse);
ATprotectSymbol(sym_Info_0);
sym_Notice_0 = ATmakeSymbol("Notice", 0, ATfalse);
ATprotectSymbol(sym_Notice_0);
sym_Warning_0 = ATmakeSymbol("Warning", 0, ATfalse);
ATprotectSymbol(sym_Warning_0);
sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
ATprotectSymbol(sym_Error_0);
sym_Critical_0 = ATmakeSymbol("Critical", 0, ATfalse);
ATprotectSymbol(sym_Critical_0);
sym_Alert_0 = ATmakeSymbol("Alert", 0, ATfalse);
ATprotectSymbol(sym_Alert_0);
sym_Emergency_0 = ATmakeSymbol("Emergency", 0, ATfalse);
ATprotectSymbol(sym_Emergency_0);
sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
ATprotectSymbol(sym_Saturday_0);
sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
ATprotectSymbol(sym_Friday_0);
sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
ATprotectSymbol(sym_Thursday_0);
sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
ATprotectSymbol(sym_Wednesday_0);
sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
ATprotectSymbol(sym_Tuesday_0);
sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
ATprotectSymbol(sym_Monday_0);
sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
ATprotectSymbol(sym_Sunday_0);
sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
ATprotectSymbol(sym_December_0);
sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
ATprotectSymbol(sym_November_0);
sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
ATprotectSymbol(sym_October_0);
sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
ATprotectSymbol(sym_September_0);
sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
ATprotectSymbol(sym_August_0);
sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
ATprotectSymbol(sym_July_0);
sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
ATprotectSymbol(sym_June_0);
sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
ATprotectSymbol(sym_May_0);
sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
ATprotectSymbol(sym_April_0);
sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
ATprotectSymbol(sym_March_0);
sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
ATprotectSymbol(sym_February_0);
sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
ATprotectSymbol(sym_January_0);
sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
ATprotectSymbol(sym_Dupl_2);
sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
ATprotectSymbol(sym_Date_3);
sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
ATprotectSymbol(sym_DayTime_3);
sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
ATprotectSymbol(sym_ComponentTime_3);
sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
ATprotectSymbol(sym_EpochTime_1);
sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
ATprotectSymbol(sym_Pipe_2);
sym_X__OK_0 = ATmakeSymbol("X_OK", 0, ATfalse);
ATprotectSymbol(sym_X__OK_0);
sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
ATprotectSymbol(sym_W__OK_0);
sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
ATprotectSymbol(sym_R__OK_0);
sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
ATprotectSymbol(sym_F__OK_0);
sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
ATprotectSymbol(sym_WaitStatus_3);
sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
ATprotectSymbol(sym_UnknownSignal_1);
sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
ATprotectSymbol(sym_Signal_3);
sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
ATprotectSymbol(sym_XTC_0);
sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
ATprotectSymbol(sym_Imported_1);
sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
ATprotectSymbol(sym_Import_0);
sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
ATprotectSymbol(sym_Repository_0);
sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
ATprotectSymbol(sym_Tool_1);
sym_TempDirs_0 = ATmakeSymbol("TempDirs", 0, ATfalse);
ATprotectSymbol(sym_TempDirs_0);
sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
ATprotectSymbol(sym_TempFiles_0);
sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
ATprotectSymbol(sym_TEMP_0);
sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
ATprotectSymbol(sym_DIR_1);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
}
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
term2 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym_TempFiles_0);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(sym_Error_0);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("no read permission for repository ", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol(" does not exist", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("repository ", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym_Vomit_0);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("Saving repository", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(sym_XTC_0);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("no write permission for repository ", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(sym_stdin_0);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(sym_Debug_0);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol(" with arguments: ", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol(" at location ", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invoking tool ", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-new-file-name; use xtc-new-file", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol(" at ", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("Found ", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol(", ", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("Tools : ", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("Version : ", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("--path", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("Path : ", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("Location : ", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("Registering imports", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("Importing", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(sym_Import_0);
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(sym_stdout_0);
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(sym_TEMP_0);
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(sym__2, term23, term81);
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(sym_Scopes_0);
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(sym__2, term5, term85);
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeInt(0);
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("--check", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("--check        check tool dependencies", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration found for: ", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeInt(1);
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("All tools available", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(sym_Repository_0);
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository ", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("Read repository ", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("Registered repository as imported", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(sym__2, term23, term77);
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("Loading repository", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(sym__2, term23, term103);
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(ATmakeSymbol("Loaded repository ", 0, ATtrue));
ATprotect(&(term119));
term119 = term118;
}
#include <srts/init-stratego-module.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm stderr_0_0 (StrSL sl, ATerm t);
ATerm stdout_0_0 (StrSL sl, ATerm t);
ATerm stdin_0_0 (StrSL sl, ATerm t);
ATerm table_append_0_0 (StrSL sl, ATerm t);
ATerm table_union_0_0 (StrSL sl, ATerm t);
ATerm table_putlist_1_0 (StrSL sl, StrCL w_62, ATerm t);
ATerm table_getlist_0_0 (StrSL sl, ATerm t);
ATerm table_get_0_0 (StrSL sl, ATerm t);
ATerm table_put_0_0 (StrSL sl, ATerm t);
ATerm lookup_table_0_1 (StrSL sl, ATerm v_62, ATerm t);
ATerm hashtable_get_0_1 (StrSL sl, ATerm r_60, ATerm t);
ATerm hashtable_put_0_2 (StrSL sl, ATerm p_60, ATerm q_60, ATerm t);
ATerm assert_1_0 (StrSL sl, StrCL i_59, ATerm t);
ATerm end_scope_1_0 (StrSL sl, StrCL f_59, ATerm t);
ATerm begin_scope_1_0 (StrSL sl, StrCL e_59, ATerm t);
ATerm separate_by_0_1 (StrSL sl, ATerm k_57, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm fetch_1_0 (StrSL sl, StrCL n_56, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL h_56, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm remove_all_1_0 (StrSL sl, StrCL k_55, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL e_55, ATerm t);
ATerm finally_2_0 (StrSL sl, StrCL c_37, StrCL d_37, ATerm t);
ATerm restore_always_2_0 (StrSL sl, StrCL a_37, StrCL b_37, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL s_36, ATerm t);
ATerm eq_0_0 (StrSL sl, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL g_33, ATerm t);
ATerm filter_text_file_2_0 (StrSL sl, StrCL y_27, StrCL z_27, ATerm t);
ATerm getenv_0_0 (StrSL sl, ATerm t);
ATerm remove_file_0_0 (StrSL sl, ATerm t);
ATerm dirname_0_0 (StrSL sl, ATerm t);
ATerm tmpnam_0_0 (StrSL sl, ATerm t);
ATerm fclose_0_0 (StrSL sl, ATerm t);
ATerm fopen_0_0 (StrSL sl, ATerm t);
ATerm exit_0_0 (StrSL sl, ATerm t);
ATerm echo_0_0 (StrSL sl, ATerm t);
ATerm obsolete_1_0 (StrSL sl, StrCL r_27, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL k_27, ATerm t);
ATerm fprint_0_0 (StrSL sl, ATerm t);
ATerm WriteToTextFile_0_0 (StrSL sl, ATerm t);
ATerm WriteToBinaryFile_0_0 (StrSL sl, ATerm t);
ATerm ReadFromFile_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm report_failure_1_0 (StrSL sl, StrCL f_23, ATerm t);
ATerm output_options_0_0 (StrSL sl, ATerm t);
ATerm input_options_0_0 (StrSL sl, ATerm t);
ATerm io_options_0_0 (StrSL sl, ATerm t);
ATerm option_wrap_5_0 (StrSL sl, StrCL y_22, StrCL z_22, StrCL a_23, StrCL b_23, StrCL c_23, ATerm t);
ATerm option_wrap_2_0 (StrSL sl, StrCL s_22, StrCL t_22, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL s_19, StrCL t_19, StrCL u_19, ATerm t);
ATerm system_about_0_0 (StrSL sl, ATerm t);
ATerm system_usage_0_0 (StrSL sl, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm d_18, ATerm e_18, ATerm t);
ATerm log_0_3 (StrSL sl, ATerm a_18, ATerm b_18, ATerm c_18, ATerm t);
ATerm close_0_0 (StrSL sl, ATerm t);
ATerm open_0_0 (StrSL sl, ATerm t);
ATerm STDERR__FILENO_0_0 (StrSL sl, ATerm t);
ATerm STDOUT__FILENO_0_0 (StrSL sl, ATerm t);
ATerm STDIN__FILENO_0_0 (StrSL sl, ATerm t);
ATerm new_file_0_0 (StrSL sl, ATerm t);
ATerm can_write_file_0_0 (StrSL sl, ATerm t);
ATerm can_read_file_0_0 (StrSL sl, ATerm t);
ATerm file_exists_0_0 (StrSL sl, ATerm t);
ATerm call_0_0 (StrSL sl, ATerm t);
ATerm rename_file_0_0 (StrSL sl, ATerm t);
ATerm copy_file_0_0 (StrSL sl, ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (StrSL sl, ATerm t);
ATerm XTC_0_0 (StrSL sl, ATerm t);
ATerm Imported_1_0 (StrSL sl, StrCL w_13, ATerm t);
ATerm Import_0_0 (StrSL sl, ATerm t);
ATerm Repository_0_0 (StrSL sl, ATerm t);
ATerm Tool_1_0 (StrSL sl, StrCL v_13, ATerm t);
ATerm TempDirs_0_0 (StrSL sl, ATerm t);
ATerm TempFiles_0_0 (StrSL sl, ATerm t);
ATerm TEMP_0_0 (StrSL sl, ATerm t);
ATerm DIR_1_0 (StrSL sl, StrCL u_13, ATerm t);
ATerm FILE_1_0 (StrSL sl, StrCL t_13, ATerm t);
ATerm xtc_load_0_0 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
ATerm xtc_import_0_0 (StrSL sl, ATerm t);
ATerm xtc_read_0_0 (StrSL sl, ATerm t);
ATerm xtc_location_0_0 (StrSL sl, ATerm t);
ATerm xtc_filter_text_file_2_0 (StrSL sl, StrCL m_12, StrCL n_12, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
ATerm xtc_check_dependencies_0_0 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
ATerm check_options_1_0 (StrSL sl, StrCL e_12, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
ATerm xtc_output_wrap_2_0 (StrSL sl, StrCL b_12, StrCL c_12, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
ATerm xtc_output_wrap_1_0 (StrSL sl, StrCL a_12, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
ATerm xtc_input_wrap_2_0 (StrSL sl, StrCL y_11, StrCL z_11, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
ATerm xtc_input_wrap_1_0 (StrSL sl, StrCL x_11, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
ATerm xtc_iowrap_2_0 (StrSL sl, StrCL v_11, StrCL w_11, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
ATerm xtc_iowrap_1_0 (StrSL sl, StrCL u_11, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_5_0 (StrSL sl, StrCL p_11, StrCL q_11, StrCL r_11, StrCL s_11, StrCL t_11, ATerm t);
ATerm xtc_io_wrap_3_0 (StrSL sl, StrCL m_11, StrCL n_11, StrCL o_11, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_2_0 (StrSL sl, StrCL k_11, StrCL l_11, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_1_0 (StrSL sl, StrCL j_11, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
ATerm xtc_output_1_0 (StrSL sl, StrCL i_11, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
ATerm xtc_input_1_0 (StrSL sl, StrCL f_11, ATerm t);
ATerm xtc_io_exit_0_0 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
ATerm xtc_io_1_0 (StrSL sl, StrCL c_11, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
ATerm xtc_exit_0_0 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
ATerm xtc_temp_files_1_0 (StrSL sl, StrCL x_10, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
ATerm xtc_remove_temporaries_0_0 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
ATerm xtc_write_output_0_0 (StrSL sl, ATerm t);
ATerm xtc_ensure_file_0_0 (StrSL sl, ATerm t);
ATerm copy_to_1_0 (StrSL sl, StrCL d_14, ATerm t);
ATerm rename_to_1_0 (StrSL sl, StrCL c_14, ATerm t);
ATerm xtc_find_file_0_0 (StrSL sl, ATerm t);
ATerm print_to_0_0 (StrSL sl, ATerm t);
ATerm write_to_text_0_0 (StrSL sl, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm register_import_0_0 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
ATerm xtc_register_path_0_3 (StrSL sl, ATerm z_13, ATerm a_14, ATerm b_14, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm xtc_register_0_3 (StrSL sl, ATerm f_7, ATerm g_7, ATerm h_7, ATerm t);
ATerm xtc_register_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_path_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_loc_0_0 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
ATerm xtc_find_version_loc_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_silent_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_warning_0_0 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
ATerm xtc_new_file_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
ATerm xtc_close_fd_0_0 (StrSL sl, ATerm t);
ATerm xtc_open_fd_0_0 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm File_as_fd_1_0 (StrSL sl, StrCL s_4, ATerm t);
ATerm xtc_generate_2_0 (StrSL sl, StrCL l_4, StrCL m_4, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
ATerm xtc_generate_1_0 (StrSL sl, StrCL j_4, ATerm t);
ATerm xtc_io_transform_text_1_0 (StrSL sl, StrCL i_4, ATerm t);
ATerm xtc_io_transform_1_0 (StrSL sl, StrCL h_4, ATerm t);
ATerm xtc_transform_term_2_0 (StrSL sl, StrCL f_4, StrCL g_4, ATerm t);
ATerm xtc_transform_file_2_0 (StrSL sl, StrCL x_13, StrCL y_13, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
ATerm xtc_transform_file_1_0 (StrSL sl, StrCL r_3, ATerm t);
ATerm xtc_transform_file_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL m_3, StrCL n_3, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
ATerm xtc_transform_1_0 (StrSL sl, StrCL l_3, ATerm t);
ATerm xtc_command_1_0 (StrSL sl, StrCL y_2, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
ATerm can_write_repository_0_0 (StrSL sl, ATerm t);
ATerm xtc_store_0_0 (StrSL sl, ATerm t);
ATerm read_repository_file_0_0 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm xtc_new_file_0_0 (StrSL sl, ATerm t);
ATerm XTC_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "XTC_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_XTC_0)))
goto fail129 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail129 :
--__tracing_table_counter;
return(NULL);
}
ATerm Imported_1_0 (StrSL sl, StrCL w_13, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Imported_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_81 = NULL,m_81 = NULL,p_81 = NULL;
ATerm trm83;
trm83 = (ATerm) ATgetAnnotations(t);
if((trm83 == NULL))
trm83 = (ATerm) ATempty;
if(match_cons(t, sym_Imported_1))
{
m_81 = ATgetArgument(t, 0);
}
else
goto fail128 ;
n_81 = trm83;
t = m_81;
t = cl_fun(w_13)(cl_sl(w_13), t);
if((t == NULL))
goto fail128 ;
p_81 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Imported_1, p_81), n_81);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail128 :
--__tracing_table_counter;
return(NULL);
}
ATerm Import_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Import_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_Import_0)))
goto fail127 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail127 :
--__tracing_table_counter;
return(NULL);
}
ATerm Repository_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Repository_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_Repository_0)))
goto fail126 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail126 :
--__tracing_table_counter;
return(NULL);
}
ATerm Tool_1_0 (StrSL sl, StrCL v_13, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Tool_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_81 = NULL,h_81 = NULL,k_81 = NULL;
ATerm trm82;
trm82 = (ATerm) ATgetAnnotations(t);
if((trm82 == NULL))
trm82 = (ATerm) ATempty;
if(match_cons(t, sym_Tool_1))
{
h_81 = ATgetArgument(t, 0);
}
else
goto fail125 ;
i_81 = trm82;
t = h_81;
t = cl_fun(v_13)(cl_sl(v_13), t);
if((t == NULL))
goto fail125 ;
k_81 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Tool_1, k_81), i_81);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail125 :
--__tracing_table_counter;
return(NULL);
}
ATerm TempDirs_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "TempDirs_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_TempDirs_0)))
goto fail124 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail124 :
--__tracing_table_counter;
return(NULL);
}
ATerm TempFiles_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "TempFiles_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_TempFiles_0)))
goto fail123 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail123 :
--__tracing_table_counter;
return(NULL);
}
ATerm TEMP_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "TEMP_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_TEMP_0)))
goto fail122 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail122 :
--__tracing_table_counter;
return(NULL);
}
ATerm DIR_1_0 (StrSL sl, StrCL u_13, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "DIR_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_81 = NULL,e_81 = NULL,g_81 = NULL;
ATerm trm81;
trm81 = (ATerm) ATgetAnnotations(t);
if((trm81 == NULL))
trm81 = (ATerm) ATempty;
if(match_cons(t, sym_DIR_1))
{
e_81 = ATgetArgument(t, 0);
}
else
goto fail121 ;
f_81 = trm81;
t = e_81;
t = cl_fun(u_13)(cl_sl(u_13), t);
if((t == NULL))
goto fail121 ;
g_81 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_DIR_1, g_81), f_81);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail121 :
--__tracing_table_counter;
return(NULL);
}
ATerm FILE_1_0 (StrSL sl, StrCL t_13, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "FILE_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_81 = NULL,a_81 = NULL,d_81 = NULL;
ATerm trm80;
trm80 = (ATerm) ATgetAnnotations(t);
if((trm80 == NULL))
trm80 = (ATerm) ATempty;
if(match_cons(t, sym_FILE_1))
{
a_81 = ATgetArgument(t, 0);
}
else
goto fail120 ;
b_81 = trm80;
t = a_81;
t = cl_fun(t_13)(cl_sl(t_13), t);
if((t == NULL))
goto fail120 ;
d_81 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FILE_1, d_81), b_81);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail120 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_load_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_load_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,k_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
n_13 = t;
t = term17;
l_13 = t;
t = n_13;
o_13 = t;
t = term115;
m_13 = t;
t = o_13;
t = log_0_2(sl, l_13, m_13, t);
if((t == NULL))
goto fail119 ;
k_13 = t;
{
ATerm trm79 = t;
t = term117;
t = table_get_0_0(sl, t);
if((t == NULL))
goto label126 ;
goto label125 ;
label126 :
t = trm79;
t = xtc_location_0_0(sl, t);
if((t == NULL))
goto fail119 ;
t = xtc_read_0_0(sl, t);
if((t == NULL))
goto fail119 ;
t = xtc_import_0_0(sl, t);
if((t == NULL))
goto fail119 ;
else
goto label125 ;
label125 :
;
t = k_13;
r_13 = t;
t = term17;
p_13 = t;
t = r_13;
s_13 = t;
t = term119;
q_13 = t;
t = s_13;
t = log_0_2(sl, p_13, q_13, t);
if((t == NULL))
goto fail119 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail119 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_import_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_import_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_13 = NULL;
j_13 = t;
{
struct str_closure h_87 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(h_87);
t = repeat_1_0(sl, lifted65_cl, t);
if((t == NULL))
goto fail117 ;
t = j_13;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail117 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term113;
t = table_get_0_0(sl_up(sl), t);
if((t == NULL))
goto fail118 ;
{
struct str_closure f_87 = { &(xtc_read_0_0) , sl_up(sl) };
StrCL lifted66_cl = &(f_87);
t = filter_1_0(sl_up(sl), lifted66_cl, t);
if((t == NULL))
goto fail118 ;
{
ATerm trm78 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label124 ;
goto fail118 ;
label124 :
t = trm78;
goto label123 ;
label123 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail118 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_read_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_read_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
p_12 = t;
{
ATerm trm77 = t;
t = (ATerm) ATmakeAppl(sym__2, term23, (ATerm) ATmakeAppl(sym_Imported_1, p_12));
t = table_get_0_0(sl, t);
if((t == NULL))
goto label122 ;
goto fail116 ;
label122 :
t = trm77;
goto label121 ;
label121 :
;
q_12 = t;
t = (ATerm) ATmakeAppl(sym__3, term23, term103, (ATerm) ATinsert(ATempty, p_12));
t = table_put_0_0(sl, t);
if((t == NULL))
goto fail116 ;
t = q_12;
t_12 = t;
t = term17;
r_12 = t;
t = t_12;
u_12 = t;
t = (ATerm) ATmakeAppl(sym__2, term105, p_12);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail116 ;
s_12 = t;
t = u_12;
t = log_0_2(sl, r_12, s_12, t);
if((t == NULL))
goto fail116 ;
t = read_repository_file_0_0(sl, t);
if((t == NULL))
goto fail116 ;
x_12 = t;
t = term17;
v_12 = t;
t = x_12;
y_12 = t;
t = (ATerm) ATmakeAppl(sym__2, term107, p_12);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail116 ;
w_12 = t;
t = y_12;
t = log_0_2(sl, v_12, w_12, t);
if((t == NULL))
goto fail116 ;
a_13 = t;
z_12 = t;
t = (ATerm) ATmakeAppl(sym__2, term23, z_12);
{
struct str_closure e_87 = { &(table_append_0_0) , sl };
StrCL lifted64_cl = &(e_87);
t = table_putlist_1_0(sl, lifted64_cl, t);
if((t == NULL))
goto fail116 ;
d_13 = t;
t = term17;
b_13 = t;
t = d_13;
e_13 = t;
t = term109;
c_13 = t;
t = e_13;
t = log_0_2(sl, b_13, c_13, t);
if((t == NULL))
goto fail116 ;
t = (ATerm) ATmakeAppl(sym__3, term23, (ATerm)ATmakeAppl(sym_Imported_1, p_12), (ATerm) ATempty);
t = table_put_0_0(sl, t);
if((t == NULL))
goto fail116 ;
h_13 = t;
t = term17;
f_13 = t;
t = h_13;
i_13 = t;
t = term111;
g_13 = t;
t = i_13;
t = log_0_2(sl, f_13, g_13, t);
if((t == NULL))
goto fail116 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail116 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_location_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_location_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm75 = t;
t = term21;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label119 ;
goto label118 ;
label119 :
t = trm75;
{
ATerm trm76 = t;
t = term101;
t = getenv_0_0(sl, t);
if((t == NULL))
goto label120 ;
goto label118 ;
label120 :
t = trm76;
t = GetInternalDefaultXtcRepository_0_0(sl, t);
if((t == NULL))
goto fail115 ;
else
goto label118 ;
}
label118 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail115 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_filter_text_file_2_0 (StrSL sl, StrCL m_12, StrCL n_12, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_filter_text_file_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_12 = NULL,l_12 = NULL,o_12 = NULL;
if(match_cons(t, sym_FILE_1))
{
k_12 = ATgetArgument(t, 0);
}
else
goto fail114 ;
o_12 = t;
t = k_12;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail114 ;
l_12 = t;
t = (ATerm) ATmakeAppl(sym__2, k_12, l_12);
t = filter_text_file_2_0(sl, m_12, n_12, t);
if((t == NULL))
goto fail114 ;
t = o_12;
t = (ATerm) ATmakeAppl(sym_FILE_1, l_12);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail114 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_check_dependencies_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_check_dependencies_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_12 = NULL;
ATerm trm71 = t;
ATerm i_12 = NULL;
i_12 = t;
t = term91;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label112 ;
h_12 = t;
t = i_12;
t = h_12;
{
struct str_closure b_87 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(b_87);
t = filter_1_0(sl, lifted62_cl, t);
if((t == NULL))
goto fail111 ;
{
ATerm trm73 = t;
ATerm j_12 = NULL;
j_12 = t;
{
ATerm trm74 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label117 ;
goto label115 ;
label117 :
t = trm74;
goto label116 ;
label116 :
;
t = j_12;
}
{
struct str_closure c_87 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(c_87);
t = debug_1_0(sl, lifted63_cl, t);
if((t == NULL))
goto fail111 ;
t = term97;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail111 ;
else
goto label111 ;
}
label115 :
t = trm73;
t = term99;
t = echo_0_0(sl, t);
if((t == NULL))
goto fail111 ;
t = term89;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail111 ;
else
goto label111 ;
}
}
label112 :
t = trm71;
goto label111 ;
label111 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail111 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term95;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail113 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm72 = t;
t = xtc_find_silent_0_0(sl_up(sl), t);
if((t == NULL))
goto label114 ;
goto fail112 ;
label114 :
t = trm72;
goto label113 ;
label113 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail112 :
--__tracing_table_counter;
return(NULL);
}
ATerm check_options_1_0 (StrSL sl, StrCL e_12, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "check_options_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, e_12);
{
struct str_closure w_86 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(w_86);
struct str_closure y_86 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(y_86);
struct str_closure z_86 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(z_86);
t = Option_3_0(sl, lifted59_cl, lifted60_cl, lifted61_cl, t);
if((t == NULL))
goto fail107 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail107 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term93;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail110 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_12 = NULL,f_12 = NULL,g_12 = NULL;
d_12 = t;
g_12 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail109 ;
f_12 = t;
t = g_12;
t = (ATerm) ATmakeAppl(sym__2, term91, f_12);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail109 ;
t = d_12;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail109 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--check", 0, ATtrue))))
goto fail108 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail108 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_output_wrap_2_0 (StrSL sl, StrCL b_12, StrCL c_12, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_output_wrap_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, b_12);
sl_init_fun(1, c_12);
{
struct str_closure t_86 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(t_86);
struct str_closure v_86 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(v_86);
t = option_wrap_2_0(sl, lifted55_cl, lifted56_cl, t);
if((t == NULL))
goto fail102 ;
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
struct str_closure s_86 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(s_86);
t = xtc_temp_files_1_0(sl_up(sl), lifted57_cl, t);
if((t == NULL))
goto fail104 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail104 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_86 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(q_86);
t = sl_fun(1, sl_up(sl))(sl_fun_sl(1, sl_up(sl)), t);
if((t == NULL))
goto fail105 ;
t = copy_to_1_0(sl_up(sl_up(sl)), lifted58_cl, t);
if((t == NULL))
goto fail105 ;
}
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
{
ATerm trm70 = t;
t = term37;
t = get_config_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label110 ;
goto label109 ;
label110 :
t = trm70;
t = term79;
goto label109 ;
label109 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail106 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm69 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label108 ;
goto label107 ;
label108 :
t = trm69;
t = output_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail103 ;
else
goto label107 ;
label107 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_output_wrap_1_0 (StrSL sl, StrCL a_12, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_output_wrap_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, a_12);
{
struct str_closure n_86 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(n_86);
struct str_closure o_86 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(o_86);
t = option_wrap_2_0(sl, lifted51_cl, lifted52_cl, t);
if((t == NULL))
goto fail97 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_86 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(m_86);
t = xtc_temp_files_1_0(sl_up(sl), lifted53_cl, t);
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
{
struct str_closure l_86 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(l_86);
t = sl_fun(0, sl_up(sl))(sl_fun_sl(0, sl_up(sl)), t);
if((t == NULL))
goto fail100 ;
t = copy_to_1_0(sl_up(sl_up(sl)), lifted54_cl, t);
if((t == NULL))
goto fail100 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm68 = t;
t = term37;
t = get_config_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label106 ;
goto label105 ;
label106 :
t = trm68;
t = term79;
goto label105 ;
label105 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm67 = t;
goto label104 ;
goto label103 ;
label104 :
t = trm67;
t = output_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail98 ;
else
goto label103 ;
label103 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_input_wrap_2_0 (StrSL sl, StrCL y_11, StrCL z_11, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_input_wrap_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, y_11);
sl_init_fun(1, z_11);
{
struct str_closure j_86 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(j_86);
struct str_closure k_86 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(k_86);
t = option_wrap_2_0(sl, lifted49_cl, lifted50_cl, t);
if((t == NULL))
goto fail94 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_input_1_0(sl_up(sl), sl_fun_cl(1, sl), t);
if((t == NULL))
goto fail96 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm66 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label102 ;
goto label101 ;
label102 :
t = trm66;
t = input_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail95 ;
else
goto label101 ;
label101 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_input_wrap_1_0 (StrSL sl, StrCL x_11, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_input_wrap_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, x_11);
{
struct str_closure h_86 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(h_86);
struct str_closure i_86 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(i_86);
t = option_wrap_2_0(sl, lifted47_cl, lifted48_cl, t);
if((t == NULL))
goto fail91 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_input_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail93 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm65 = t;
goto label100 ;
goto label99 ;
label100 :
t = trm65;
t = input_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail92 ;
else
goto label99 ;
label99 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_iowrap_2_0 (StrSL sl, StrCL v_11, StrCL w_11, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_iowrap_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, v_11);
sl_init_fun(1, w_11);
{
struct str_closure e_86 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(e_86);
struct str_closure f_86 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(f_86);
t = option_wrap_2_0(sl, lifted45_cl, lifted46_cl, t);
if((t == NULL))
goto fail88 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_io_1_0(sl_up(sl), sl_fun_cl(1, sl), t);
if((t == NULL))
goto fail90 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm64 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label98 ;
goto label97 ;
label98 :
t = trm64;
t = io_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail89 ;
else
goto label97 ;
label97 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_iowrap_1_0 (StrSL sl, StrCL u_11, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_iowrap_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, u_11);
{
struct str_closure c_86 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(c_86);
struct str_closure d_86 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(d_86);
t = option_wrap_2_0(sl, lifted43_cl, lifted44_cl, t);
if((t == NULL))
goto fail85 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_io_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail87 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm63 = t;
goto label96 ;
goto label95 ;
label96 :
t = trm63;
t = io_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail86 ;
else
goto label95 ;
label95 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_io_wrap_5_0 (StrSL sl, StrCL p_11, StrCL q_11, StrCL r_11, StrCL s_11, StrCL t_11, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_io_wrap_5_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(3);
sl_init_fun(0, p_11);
sl_init_fun(1, s_11);
sl_init_fun(2, t_11);
{
struct str_closure w_85 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(w_85);
struct str_closure x_85 = { &(_Id) , sl };
StrCL lifted41_cl = &(x_85);
struct str_closure a_86 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(a_86);
t = option_wrap_5_0(sl, lifted40_cl, q_11, r_11, lifted41_cl, lifted42_cl, t);
if((t == NULL))
goto fail82 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_check_dependencies_0_0(sl_up(sl), t);
if((t == NULL))
goto fail84 ;
t = xtc_io_1_0(sl_up(sl), sl_fun_cl(2, sl), t);
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
{
ATerm trm61 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label93 ;
goto label92 ;
label93 :
t = trm61;
{
ATerm trm62 = t;
t = io_options_0_0(sl_up(sl), t);
if((t == NULL))
goto label94 ;
goto label92 ;
label94 :
t = trm62;
t = check_options_1_0(sl_up(sl), sl_fun_cl(1, sl), t);
if((t == NULL))
goto fail83 ;
else
goto label92 ;
}
label92 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_io_wrap_3_0 (StrSL sl, StrCL m_11, StrCL n_11, StrCL o_11, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_io_wrap_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_85 = { &(system_usage_0_0) , sl };
StrCL lifted38_cl = &(u_85);
struct str_closure v_85 = { &(system_about_0_0) , sl };
StrCL lifted39_cl = &(v_85);
t = xtc_io_wrap_5_0(sl, m_11, lifted38_cl, lifted39_cl, n_11, o_11, t);
if((t == NULL))
goto fail81 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_io_wrap_2_0 (StrSL sl, StrCL k_11, StrCL l_11, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_io_wrap_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, k_11);
sl_init_fun(1, l_11);
{
struct str_closure s_85 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(s_85);
struct str_closure t_85 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(t_85);
t = option_wrap_2_0(sl, lifted36_cl, lifted37_cl, t);
if((t == NULL))
goto fail78 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_io_1_0(sl_up(sl), sl_fun_cl(1, sl), t);
if((t == NULL))
goto fail80 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm60 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label91 ;
goto label90 ;
label91 :
t = trm60;
t = io_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail79 ;
else
goto label90 ;
label90 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_io_wrap_1_0 (StrSL sl, StrCL j_11, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_io_wrap_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, j_11);
{
struct str_closure q_85 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(q_85);
struct str_closure r_85 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(r_85);
t = option_wrap_2_0(sl, lifted34_cl, lifted35_cl, t);
if((t == NULL))
goto fail75 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_io_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail77 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm59 = t;
goto label89 ;
goto label88 ;
label89 :
t = trm59;
t = io_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail76 ;
else
goto label88 ;
label88 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_output_1_0 (StrSL sl, StrCL i_11, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_output_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, i_11);
{
struct str_closure p_85 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(p_85);
t = xtc_temp_files_1_0(sl, lifted32_cl, t);
if((t == NULL))
goto fail72 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_85 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(o_85);
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail73 ;
t = copy_to_1_0(sl_up(sl), lifted33_cl, t);
if((t == NULL))
goto fail73 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm58 = t;
t = term37;
t = get_config_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label87 ;
goto label86 ;
label87 :
t = trm58;
t = term79;
goto label86 ;
label86 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_input_1_0 (StrSL sl, StrCL f_11, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_input_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, f_11);
{
struct str_closure n_85 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(n_85);
t = xtc_temp_files_1_0(sl, lifted31_cl, t);
if((t == NULL))
goto fail70 ;
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
ATerm trm57 = t;
ATerm g_11 = NULL,h_11 = NULL;
h_11 = t;
t = term39;
t = get_config_0_0(sl_up(sl), t);
if((t == NULL))
goto label85 ;
g_11 = t;
t = h_11;
t = (ATerm) ATmakeAppl(sym_FILE_1, g_11);
goto label84 ;
label85 :
t = trm57;
t = term27;
goto label84 ;
label84 :
;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail71 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_io_exit_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_io_exit_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_write_output_0_0(sl, t);
if((t == NULL))
goto fail69 ;
t = term89;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto fail69 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_io_1_0 (StrSL sl, StrCL c_11, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_io_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, c_11);
{
struct str_closure m_85 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(m_85);
t = xtc_temp_files_1_0(sl, lifted29_cl, t);
if((t == NULL))
goto fail67 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm55 = t;
ATerm trm56 = t;
ATerm d_11 = NULL,e_11 = NULL;
e_11 = t;
t = term39;
t = get_config_0_0(sl_up(sl), t);
if((t == NULL))
goto label83 ;
d_11 = t;
t = e_11;
t = (ATerm) ATmakeAppl(sym_FILE_1, d_11);
goto label82 ;
label83 :
t = trm56;
t = term27;
goto label82 ;
label82 :
;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label81 ;
t = xtc_write_output_0_0(sl_up(sl), t);
if((t == NULL))
goto label81 ;
goto label80 ;
label81 :
t = trm55;
{
struct str_closure l_85 = { &(xtc_exit_0_0) , sl_up(sl) };
StrCL lifted30_cl = &(l_85);
t = SSL_stacktrace_get_all_frame_names();
if((t == NULL))
goto fail68 ;
t = report_failure_1_0(sl_up(sl), lifted30_cl, t);
if((t == NULL))
goto fail68 ;
else
goto label80 ;
}
label80 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_exit_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_exit_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
sl_init_var(0, z_10);
sl_init_var(1, a_11);
y_10 = t;
{
struct str_closure k_85 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(k_85);
t = repeat_1_0(sl, lifted25_cl, t);
if((t == NULL))
goto fail63 ;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail63 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_11 = NULL;
struct str_closure h_85 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(h_85);
b_11 = t;
t = term87;
t = table_get_0_0(sl_up(sl), t);
if((t == NULL))
goto fail64 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetFirst((ATermList) t);
}
else
if((sl_readvar(1, sl) != ATgetFirst((ATermList) t)))
goto fail64 ;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = (ATerm) ATgetNext((ATermList) t);
}
else
if((sl_readvar(0, sl) != (ATerm) ATgetNext((ATermList) t)))
goto fail64 ;
}
else
goto fail64 ;
if((sl_readvar(1, sl) == NULL))
goto fail64 ;
else
{
t = sl_readvar(1, sl);
}
{
struct str_closure j_85 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(j_85);
t = map_1_0(sl_up(sl), lifted26_cl, t);
if((t == NULL))
goto fail64 ;
t = b_11;
t = end_scope_1_0(sl_up(sl), lifted28_cl, t);
if((t == NULL))
goto fail64 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_85 = { &(remove_file_0_0) , sl_up(sl_up(sl)) };
StrCL lifted27_cl = &(i_85);
t = try_1_0(sl_up(sl_up(sl)), lifted27_cl, t);
if((t == NULL))
goto fail66 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term5;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_temp_files_1_0 (StrSL sl, StrCL x_10, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_temp_files_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm u_10 = NULL,v_10 = NULL;
sl_init_var(0, u_10);
sl_init_var(1, v_10);
{
struct str_closure u_84 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(u_84);
struct str_closure v_84 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(v_84);
t = begin_scope_1_0(sl, lifted20_cl, t);
if((t == NULL))
goto fail58 ;
t = restore_always_2_0(sl, x_10, lifted21_cl, t);
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
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term5;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_10 = NULL;
struct str_closure r_84 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(r_84);
w_10 = t;
{
ATerm trm54 = t;
t = term87;
t = table_get_0_0(sl_up(sl), t);
if((t == NULL))
goto label79 ;
goto label78 ;
label79 :
t = trm54;
t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
goto label78 ;
label78 :
;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetFirst((ATermList) t);
}
else
if((sl_readvar(1, sl) != ATgetFirst((ATermList) t)))
goto fail59 ;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = (ATerm) ATgetNext((ATermList) t);
}
else
if((sl_readvar(0, sl) != (ATerm) ATgetNext((ATermList) t)))
goto fail59 ;
}
else
goto fail59 ;
if((sl_readvar(1, sl) == NULL))
goto fail59 ;
else
{
t = sl_readvar(1, sl);
}
{
struct str_closure t_84 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(t_84);
t = map_1_0(sl_up(sl), lifted22_cl, t);
if((t == NULL))
goto fail59 ;
t = w_10;
t = end_scope_1_0(sl_up(sl), lifted24_cl, t);
if((t == NULL))
goto fail59 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_84 = { &(remove_file_0_0) , sl_up(sl_up(sl)) };
StrCL lifted23_cl = &(s_84);
t = try_1_0(sl_up(sl_up(sl)), lifted23_cl, t);
if((t == NULL))
goto fail61 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term5;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_remove_temporaries_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_remove_temporaries_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_10 = NULL,t_10 = NULL;
t_10 = t;
t = term83;
t = table_get_0_0(sl, t);
if((t == NULL))
goto fail56 ;
s_10 = t;
{
struct str_closure q_84 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(q_84);
t = map_1_0(sl, lifted18_cl, t);
if((t == NULL))
goto fail56 ;
t = t_10;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_84 = { &(remove_file_0_0) , sl_up(sl) };
StrCL lifted19_cl = &(o_84);
t = try_1_0(sl_up(sl), lifted19_cl, t);
if((t == NULL))
goto fail57 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_write_output_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_write_output_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm50 = t;
struct str_closure n_84 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(n_84);
if(match_cons(t, sym_FILE_1))
{
ATerm trm52 = ATgetArgument(t, 0);
}
else
goto label73 ;
t = copy_to_1_0(sl, lifted17_cl, t);
if((t == NULL))
goto label73 ;
goto label72 ;
label73 :
t = trm50;
{
ATerm q_10 = NULL,r_10 = NULL;
if(!(match_cons(t, sym_stdin_0)))
goto fail54 ;
r_10 = t;
t = term37;
{
ATerm trm53 = t;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label77 ;
goto label76 ;
label77 :
t = trm53;
t = term79;
goto label76 ;
label76 :
;
q_10 = t;
t = r_10;
t = (ATerm) ATmakeAppl(sym__2, term27, q_10);
t = copy_file_0_0(sl, t);
if((t == NULL))
goto fail54 ;
else
goto label72 ;
}
}
label72 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm51 = t;
t = term37;
t = get_config_0_0(sl_up(sl), t);
if((t == NULL))
goto label75 ;
goto label74 ;
label75 :
t = trm51;
t = term79;
goto label74 ;
label74 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_ensure_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_ensure_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm48 = t;
if(match_cons(t, sym_FILE_1))
{
ATerm trm49 = ATgetArgument(t, 0);
}
else
goto label71 ;
goto label70 ;
label71 :
t = trm48;
{
ATerm o_10 = NULL,p_10 = NULL;
if(!(match_cons(t, sym_stdin_0)))
goto fail53 ;
p_10 = t;
t = term3;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail53 ;
o_10 = t;
t = p_10;
t = (ATerm) ATmakeAppl(sym__2, term27, o_10);
t = copy_file_0_0(sl, t);
if((t == NULL))
goto fail53 ;
t = (ATerm) ATmakeAppl(sym_FILE_1, o_10);
goto label70 ;
}
label70 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
ATerm copy_to_1_0 (StrSL sl, StrCL d_14, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "copy_to_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm42 = t;
ATerm l_10 = NULL,n_10 = NULL;
if(match_cons(t, sym_FILE_1))
{
l_10 = ATgetArgument(t, 0);
}
else
goto label61 ;
n_10 = t;
t = cl_fun(d_14)(cl_sl(d_14), t);
if((t == NULL))
goto label61 ;
if(!((l_10 == t)))
goto label61 ;
t = n_10;
t = (ATerm) ATmakeAppl(sym_FILE_1, l_10);
goto label60 ;
label61 :
t = trm42;
{
ATerm trm43 = t;
ATerm h_10 = NULL,i_10 = NULL,k_10 = NULL;
if(match_cons(t, sym_FILE_1))
{
h_10 = ATgetArgument(t, 0);
}
else
goto label62 ;
k_10 = t;
t = cl_fun(d_14)(cl_sl(d_14), t);
if((t == NULL))
goto label62 ;
i_10 = t;
{
ATerm trm44 = t;
ATerm trm45 = t;
t = stdout_0_0(sl, t);
if((t == NULL))
goto label66 ;
goto label65 ;
label66 :
t = trm45;
{
ATerm trm46 = t;
t = stderr_0_0(sl, t);
if((t == NULL))
goto label67 ;
goto label65 ;
label67 :
t = trm46;
if((h_10 == t))
goto label65 ;
else
goto label64 ;
}
label65 :
;
goto label62 ;
label64 :
t = trm44;
goto label63 ;
label63 :
;
t = (ATerm) ATmakeAppl(sym__2, h_10, i_10);
t = copy_file_0_0(sl, t);
if((t == NULL))
goto label62 ;
t = k_10;
t = (ATerm) ATmakeAppl(sym_FILE_1, h_10);
}
goto label60 ;
label62 :
t = trm43;
{
ATerm d_10 = NULL,e_10 = NULL,g_10 = NULL;
if(match_cons(t, sym_FILE_1))
{
d_10 = ATgetArgument(t, 0);
}
else
goto fail52 ;
g_10 = t;
t = cl_fun(d_14)(cl_sl(d_14), t);
if((t == NULL))
goto fail52 ;
e_10 = t;
{
ATerm trm47 = t;
t = stdout_0_0(sl, t);
if((t == NULL))
goto label69 ;
goto label68 ;
label69 :
t = trm47;
t = stderr_0_0(sl, t);
if((t == NULL))
goto fail52 ;
else
goto label68 ;
label68 :
;
t = (ATerm) ATmakeAppl(sym__2, d_10, e_10);
t = copy_file_0_0(sl, t);
if((t == NULL))
goto fail52 ;
t = g_10;
t = (ATerm) ATmakeAppl(sym_FILE_1, d_10);
goto label60 ;
}
}
}
label60 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
ATerm rename_to_1_0 (StrSL sl, StrCL c_14, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rename_to_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm38 = t;
ATerm a_10 = NULL,c_10 = NULL;
if(match_cons(t, sym_FILE_1))
{
a_10 = ATgetArgument(t, 0);
}
else
goto label54 ;
c_10 = t;
t = cl_fun(c_14)(cl_sl(c_14), t);
if((t == NULL))
goto label54 ;
if(!((a_10 == t)))
goto label54 ;
t = c_10;
t = (ATerm) ATmakeAppl(sym_FILE_1, a_10);
goto label53 ;
label54 :
t = trm38;
{
ATerm trm39 = t;
ATerm w_9 = NULL,x_9 = NULL,z_9 = NULL;
if(match_cons(t, sym_FILE_1))
{
w_9 = ATgetArgument(t, 0);
}
else
goto label55 ;
z_9 = t;
t = cl_fun(c_14)(cl_sl(c_14), t);
if((t == NULL))
goto label55 ;
x_9 = t;
{
ATerm trm40 = t;
ATerm trm41 = t;
t = stdout_0_0(sl, t);
if((t == NULL))
goto label59 ;
goto label58 ;
label59 :
t = trm41;
if((w_9 == t))
goto label58 ;
else
goto label57 ;
label58 :
;
goto label55 ;
label57 :
t = trm40;
goto label56 ;
label56 :
;
t = (ATerm) ATmakeAppl(sym__2, w_9, x_9);
t = rename_file_0_0(sl, t);
if((t == NULL))
goto label55 ;
t = z_9;
t = (ATerm) ATmakeAppl(sym_FILE_1, x_9);
}
goto label53 ;
label55 :
t = trm39;
{
ATerm t_9 = NULL,v_9 = NULL;
if(match_cons(t, sym_FILE_1))
{
t_9 = ATgetArgument(t, 0);
}
else
goto fail51 ;
v_9 = t;
t = cl_fun(c_14)(cl_sl(c_14), t);
if((t == NULL))
goto fail51 ;
if(!(match_cons(t, sym_stdout_0)))
goto fail51 ;
t = (ATerm) ATmakeAppl(sym__2, t_9, term79);
t = copy_file_0_0(sl, t);
if((t == NULL))
goto fail51 ;
t = t_9;
t = remove_file_0_0(sl, t);
if((t == NULL))
goto fail51 ;
t = v_9;
t = term79;
goto label53 ;
}
}
label53 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_find_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_find_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_9 = NULL,s_9 = NULL;
s_9 = t;
t = xtc_find_0_0(sl, t);
if((t == NULL))
goto fail50 ;
r_9 = t;
t = s_9;
t = (ATerm) ATmakeAppl(sym_FILE_1, r_9);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
ATerm print_to_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "print_to_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
l_9 = t;
o_9 = t;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail49 ;
k_9 = t;
t = (ATerm) ATmakeAppl(sym__2, k_9, term1);
t = fopen_0_0(sl, t);
if((t == NULL))
goto fail49 ;
m_9 = t;
{
ATerm trm37 = t;
ATerm n_9 = NULL;
n_9 = t;
t = l_9;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label52 ;
t = n_9;
t = (ATerm) ATinsert(ATempty, l_9);
goto label51 ;
label52 :
t = trm37;
t = l_9;
goto label51 ;
label51 :
;
q_9 = t;
p_9 = t;
t = (ATerm) ATmakeAppl(sym__2, m_9, p_9);
t = fprint_0_0(sl, t);
if((t == NULL))
goto fail49 ;
t = m_9;
t = fclose_0_0(sl, t);
if((t == NULL))
goto fail49 ;
t = o_9;
t = (ATerm) ATmakeAppl(sym_FILE_1, k_9);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
ATerm write_to_text_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "write_to_text_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
i_9 = t;
j_9 = t;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail48 ;
h_9 = t;
t = (ATerm) ATmakeAppl(sym__2, h_9, i_9);
t = WriteToTextFile_0_0(sl, t);
if((t == NULL))
goto fail48 ;
t = j_9;
t = (ATerm) ATmakeAppl(sym_FILE_1, h_9);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
ATerm write_to_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "write_to_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
f_9 = t;
g_9 = t;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail47 ;
e_9 = t;
t = (ATerm) ATmakeAppl(sym__2, e_9, f_9);
t = WriteToBinaryFile_0_0(sl, t);
if((t == NULL))
goto fail47 ;
t = g_9;
t = (ATerm) ATmakeAppl(sym_FILE_1, e_9);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
ATerm register_import_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "register_import_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
t = term71;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail46 ;
m_8 = t;
r_8 = t;
t = term17;
o_8 = t;
t = r_8;
s_8 = t;
t = term73;
p_8 = t;
t = s_8;
t_8 = t;
v_8 = t;
u_8 = t;
q_8 = t;
t = t_8;
t = log_0_3(sl, o_8, p_8, q_8, t);
if((t == NULL))
goto fail46 ;
t = term71;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail46 ;
n_8 = t;
z_8 = t;
t = term17;
w_8 = t;
t = z_8;
a_9 = t;
t = term75;
x_8 = t;
t = a_9;
b_9 = t;
d_9 = t;
c_9 = t;
y_8 = t;
t = b_9;
t = log_0_3(sl, w_8, x_8, y_8, t);
if((t == NULL))
goto fail46 ;
t = (ATerm) ATmakeAppl(sym__3, term23, term77, n_8);
t = table_union_0_0(sl, t);
if((t == NULL))
goto fail46 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_register_path_0_3 (StrSL sl, ATerm z_13, ATerm a_14, ATerm b_14, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_register_path_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, a_14);
sl_init_var(1, b_14);
{
ATerm trm29 = t;
ATerm k_8 = NULL;
k_8 = t;
t = z_13;
t = is_list_0_0(sl, t);
if((t == NULL))
goto label45 ;
t = z_13;
{
struct str_closure b_84 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(b_84);
t = map_1_0(sl, lifted13_cl, t);
if((t == NULL))
goto label45 ;
t = k_8;
}
goto label44 ;
label45 :
t = trm29;
{
ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,f_8 = NULL,g_8 = NULL;
u_7 = t;
t = z_13;
{
ATerm trm30 = t;
t = is_list_0_0(sl, t);
if((t == NULL))
goto label47 ;
goto fail41 ;
label47 :
t = trm30;
goto label46 ;
label46 :
;
t = xtc_load_0_0(sl, t);
if((t == NULL))
goto fail41 ;
y_7 = t;
a_8 = t;
t = term23;
z_7 = t;
t = a_8;
t = lookup_table_0_1(sl, z_7, t);
if((t == NULL))
goto fail41 ;
x_7 = t;
t = y_7;
t = x_7;
s_7 = t;
{
ATerm trm31 = t;
ATerm v_7 = NULL,b_8 = NULL,c_8 = NULL;
v_7 = t;
t = s_7;
c_8 = t;
t = (ATerm) ATmakeAppl(sym_Tool_1, z_13);
b_8 = t;
t = c_8;
t = hashtable_get_0_1(sl, b_8, t);
if((t == NULL))
goto label49 ;
r_7 = t;
t = v_7;
t = r_7;
{
struct str_closure c_84 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(c_84);
t = remove_all_1_0(sl, lifted14_cl, t);
if((t == NULL))
goto fail41 ;
{
ATerm trm33 = t;
ATerm w_7 = NULL;
w_7 = t;
{
struct str_closure l_84 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(l_84);
t = fetch_1_0(sl, lifted15_cl, t);
if((t == NULL))
goto label50 ;
t = w_7;
}
{
struct str_closure m_84 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(m_84);
t = fetch_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto fail41 ;
else
goto label48 ;
}
label50 :
t = trm33;
{
ATerm d_8 = NULL,e_8 = NULL;
e_8 = t;
d_8 = t;
if(((a_14 == NULL) || (b_14 == NULL)))
goto fail41 ;
else
{
ATerm trm36;
trm36 = CheckATermList(d_8);
if((trm36 == NULL))
goto fail41 ;
t = (ATerm) ATinsert((ATermList)trm36, (ATerm) ATmakeAppl(sym__2, a_14, b_14));
goto label48 ;
}
}
}
}
label49 :
t = trm31;
if(((a_14 == NULL) || (b_14 == NULL)))
goto fail41 ;
else
{
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, a_14, b_14));
goto label48 ;
}
label48 :
;
t_7 = t;
t = s_7;
g_8 = t;
t = (ATerm) ATmakeAppl(sym_Tool_1, z_13);
f_8 = t;
t = g_8;
t = hashtable_put_0_2(sl, f_8, t_7, t);
if((t == NULL))
goto fail41 ;
t = u_7;
goto label44 ;
}
}
}
label44 :
;
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
if(match_cons(t, sym__2))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail45 ;
{
ATerm trm35 = ATgetArgument(t, 1);
}
}
else
goto fail45 ;
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail45 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), sl_readvar(1, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
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
goto fail44 ;
{
ATerm trm34 = ATgetArgument(t, 1);
}
}
else
goto fail44 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym__2))
{
ATerm trm32 = ATgetArgument(t, 0);
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(t, 1);
}
else
if((sl_readvar(1, sl) != ATgetArgument(t, 1)))
goto fail43 ;
}
else
goto fail43 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_8 = NULL;
l_8 = t;
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail42 ;
else
{
t = xtc_register_path_0_3(sl_up(sl), l_8, sl_readvar(0, sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail42 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_register_0_3 (StrSL sl, ATerm f_7, ATerm g_7, ATerm h_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_register_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, g_7);
sl_init_var(1, h_7);
{
ATerm i_7 = NULL;
i_7 = t;
t = f_7;
{
ATerm trm28 = t;
t = is_list_0_0(sl, t);
if((t == NULL))
goto label43 ;
goto label42 ;
label43 :
t = trm28;
{
ATerm k_7 = NULL,l_7 = NULL;
l_7 = t;
k_7 = t;
t = (ATerm) ATinsert(ATempty, k_7);
goto label42 ;
}
label42 :
;
{
struct str_closure a_84 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(a_84);
t = map_1_0(sl, lifted12_cl, t);
if((t == NULL))
goto fail39 ;
t = i_7;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_7 = NULL,m_7 = NULL,n_7 = NULL;
j_7 = t;
n_7 = t;
if((sl_readvar(1, sl) == NULL))
goto fail40 ;
else
{
t = (ATerm) ATmakeAppl(sym__3, sl_readvar(1, sl), term69, j_7);
}
t = conc_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail40 ;
m_7 = t;
t = n_7;
if((sl_readvar(0, sl) == NULL))
goto fail40 ;
else
{
t = xtc_register_path_0_3(sl_up(sl), j_7, sl_readvar(0, sl), m_7, t);
if((t == NULL))
goto fail40 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_register_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_register_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL;
t = term51;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail38 ;
j_6 = t;
n_6 = t;
t = term29;
l_6 = t;
t = n_6;
o_6 = t;
q_6 = t;
t = j_6;
s_6 = t;
t = term53;
r_6 = t;
t = s_6;
t = separate_by_0_1(sl, r_6, t);
if((t == NULL))
goto fail38 ;
p_6 = t;
t = q_6;
{
ATerm trm26;
trm26 = CheckATermList(p_6);
if((trm26 == NULL))
goto fail38 ;
t = (ATerm) ATinsert((ATermList)trm26, term55);
m_6 = t;
t = o_6;
t = log_0_2(sl, l_6, m_6, t);
if((t == NULL))
goto fail38 ;
t = term57;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail38 ;
h_6 = t;
v_6 = t;
t = term29;
t_6 = t;
t = v_6;
w_6 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, h_6), term59);
u_6 = t;
t = w_6;
t = log_0_2(sl, t_6, u_6, t);
if((t == NULL))
goto fail38 ;
{
ATerm trm27 = t;
ATerm k_6 = NULL;
k_6 = t;
t = term61;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label41 ;
t = k_6;
{
ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL;
t = term61;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail38 ;
g_6 = t;
z_6 = t;
t = term29;
x_6 = t;
t = z_6;
a_7 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, g_6), term63);
y_6 = t;
t = a_7;
t = log_0_2(sl, x_6, y_6, t);
if((t == NULL))
goto fail38 ;
t = xtc_register_path_0_3(sl, j_6, h_6, g_6, t);
if((t == NULL))
goto fail38 ;
else
goto label40 ;
}
label41 :
t = trm27;
{
ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL;
t = term65;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail38 ;
i_6 = t;
d_7 = t;
t = term29;
b_7 = t;
t = d_7;
e_7 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, i_6), term67);
c_7 = t;
t = e_7;
t = log_0_2(sl, b_7, c_7, t);
if((t == NULL))
goto fail38 ;
t = xtc_register_0_3(sl, j_6, h_6, i_6, t);
if((t == NULL))
goto fail38 ;
else
goto label40 ;
}
label40 :
;
t = j_6;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_find_path_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_find_path_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_find_0_0(sl, t);
if((t == NULL))
goto fail37 ;
t = dirname_0_0(sl, t);
if((t == NULL))
goto fail37 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_find_loc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_find_loc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
c_6 = t;
f_6 = t;
t = (ATerm) ATmakeAppl(sym__2, term23, (ATerm) ATmakeAppl(sym_Tool_1, c_6));
t = table_get_0_0(sl, t);
if((t == NULL))
goto fail36 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm24 = ATgetFirst((ATermList) t);
if(match_cons(trm24, sym__2))
{
d_6 = ATgetArgument(trm24, 0);
e_6 = ATgetArgument(trm24, 1);
}
else
goto fail36 ;
{
ATerm trm25 = (ATerm) ATgetNext((ATermList) t);
}
}
else
goto fail36 ;
t = f_6;
t = e_6;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_find_version_loc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_find_version_loc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL;
sl_init_var(0, z_5);
sl_init_var(1, a_6);
if(match_cons(t, sym__2))
{
y_5 = ATgetArgument(t, 0);
if((z_5 == NULL))
{
z_5 = ATgetArgument(t, 1);
}
else
if((z_5 != ATgetArgument(t, 1)))
goto fail34 ;
}
else
goto fail34 ;
b_6 = t;
t = (ATerm) ATmakeAppl(sym__2, term23, (ATerm) ATmakeAppl(sym_Tool_1, y_5));
t = table_get_0_0(sl, t);
if((t == NULL))
goto fail34 ;
{
struct str_closure z_83 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(z_83);
t = fetch_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto fail34 ;
t = b_6;
if((a_6 == NULL))
goto fail34 ;
else
{
t = a_6;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
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
goto fail35 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(t, 1);
}
else
if((sl_readvar(1, sl) != ATgetArgument(t, 1)))
goto fail35 ;
}
else
goto fail35 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_find_silent_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_find_silent_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_load_0_0(sl, t);
if((t == NULL))
goto fail33 ;
{
ATerm trm23 = t;
t = xtc_find_version_loc_0_0(sl, t);
if((t == NULL))
goto label39 ;
goto label38 ;
label39 :
t = trm23;
t = xtc_find_loc_0_0(sl, t);
if((t == NULL))
goto fail33 ;
else
goto label38 ;
label38 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_find_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_find_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_5 = NULL;
ATerm trm21 = t;
ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
l_5 = t;
t = xtc_load_0_0(sl, t);
if((t == NULL))
goto label35 ;
{
ATerm trm22 = t;
t = xtc_find_version_loc_0_0(sl, t);
if((t == NULL))
goto label37 ;
goto label36 ;
label37 :
t = trm22;
t = xtc_find_loc_0_0(sl, t);
if((t == NULL))
goto label35 ;
else
goto label36 ;
label36 :
;
o_5 = t;
t = term17;
m_5 = t;
t = o_5;
p_5 = t;
r_5 = t;
q_5 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_5), term43), l_5), term45);
n_5 = t;
t = p_5;
t = log_0_2(sl, m_5, n_5, t);
if((t == NULL))
goto label35 ;
}
goto label34 ;
label35 :
t = trm21;
{
ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
u_5 = t;
t = term7;
s_5 = t;
t = u_5;
v_5 = t;
x_5 = t;
w_5 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term47), w_5), term49);
t_5 = t;
t = v_5;
t = log_0_2(sl, s_5, t_5, t);
if((t == NULL))
goto fail32 ;
goto fail32 ;
}
label34 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_find_warning_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_find_warning_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_find_0_0(sl, t);
if((t == NULL))
goto fail31 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_new_file_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_new_file_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_5 = NULL,k_5 = NULL;
struct str_closure i_83 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(i_83);
t = obsolete_1_0(sl, lifted9_cl, t);
if((t == NULL))
goto fail28 ;
t = new_file_0_0(sl, t);
if((t == NULL))
goto fail28 ;
j_5 = t;
k_5 = t;
t = (ATerm) ATmakeAppl(sym__2, j_5, term3);
{
struct str_closure x_83 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(x_83);
t = assert_1_0(sl, lifted10_cl, t);
if((t == NULL))
goto fail28 ;
t = k_5;
t = (ATerm) ATmakeAppl(sym_FILE_1, j_5);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term5;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_close_fd_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_close_fd_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_83 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(f_83);
struct str_closure h_83 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(h_83);
t = finally_2_0(sl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail25 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term3;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm18 = t;
ATerm trm19 = t;
ATerm u_4 = NULL,x_4 = NULL,z_4 = NULL,y_4 = NULL,a_5 = NULL;
u_4 = t;
z_4 = t;
x_4 = t;
a_5 = t;
t = term3;
t = STDIN__FILENO_0_0(sl_up(sl), t);
if((t == NULL))
goto label32 ;
y_4 = t;
t = a_5;
t = (ATerm) ATmakeAppl(sym__2, x_4, y_4);
t = eq_0_0(sl_up(sl), t);
if((t == NULL))
goto label32 ;
t = u_4;
goto label31 ;
label32 :
t = trm19;
{
ATerm trm20 = t;
ATerm v_4 = NULL,b_5 = NULL,d_5 = NULL,c_5 = NULL,e_5 = NULL;
v_4 = t;
d_5 = t;
b_5 = t;
e_5 = t;
t = term3;
t = STDOUT__FILENO_0_0(sl_up(sl), t);
if((t == NULL))
goto label33 ;
c_5 = t;
t = e_5;
t = (ATerm) ATmakeAppl(sym__2, b_5, c_5);
t = eq_0_0(sl_up(sl), t);
if((t == NULL))
goto label33 ;
t = v_4;
goto label31 ;
label33 :
t = trm20;
{
ATerm w_4 = NULL,f_5 = NULL,h_5 = NULL,g_5 = NULL,i_5 = NULL;
w_4 = t;
h_5 = t;
f_5 = t;
i_5 = t;
t = term3;
t = STDERR__FILENO_0_0(sl_up(sl), t);
if((t == NULL))
goto label30 ;
g_5 = t;
t = i_5;
t = (ATerm) ATmakeAppl(sym__2, f_5, g_5);
t = eq_0_0(sl_up(sl), t);
if((t == NULL))
goto label30 ;
t = w_4;
goto label31 ;
}
}
label31 :
;
goto label29 ;
label30 :
t = trm18;
t = close_0_0(sl_up(sl), t);
if((t == NULL))
goto fail26 ;
else
goto label29 ;
label29 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_open_fd_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_open_fd_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm15 = t;
ATerm t_4 = NULL;
if(match_cons(t, sym_FILE_1))
{
t_4 = ATgetArgument(t, 0);
}
else
goto label26 ;
t = t_4;
t = open_0_0(sl, t);
if((t == NULL))
goto label26 ;
goto label25 ;
label26 :
t = trm15;
{
ATerm trm16 = t;
if(!(match_cons(t, sym_stdin_0)))
goto label27 ;
t = term3;
t = STDIN__FILENO_0_0(sl, t);
if((t == NULL))
goto label27 ;
goto label25 ;
label27 :
t = trm16;
{
ATerm trm17 = t;
if(!(match_cons(t, sym_stdout_0)))
goto label28 ;
t = term3;
t = STDOUT__FILENO_0_0(sl, t);
if((t == NULL))
goto label28 ;
goto label25 ;
label28 :
t = trm17;
if(!(match_cons(t, sym_stderr_0)))
goto fail24 ;
t = term3;
t = STDERR__FILENO_0_0(sl, t);
if((t == NULL))
goto fail24 ;
else
goto label25 ;
}
}
label25 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
ATerm File_as_fd_1_0 (StrSL sl, StrCL s_4, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "File_as_fd_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm q_4 = NULL;
sl_init_var(0, q_4);
{
struct str_closure e_83 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(e_83);
t = xtc_open_fd_0_0(sl, t);
if((t == NULL))
goto fail21 ;
if((q_4 == NULL))
{
q_4 = t;
}
else
if((q_4 != t))
goto fail21 ;
t = finally_2_0(sl, s_4, lifted5_cl, t);
if((t == NULL))
goto fail21 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_4 = NULL;
r_4 = t;
{
struct str_closure c_83 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(c_83);
t = try_1_0(sl_up(sl), lifted6_cl, t);
if((t == NULL))
goto fail22 ;
t = r_4;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail23 ;
else
{
t = sl_readvar(0, sl_up(sl));
}
t = xtc_close_fd_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail23 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_generate_2_0 (StrSL sl, StrCL l_4, StrCL m_4, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_generate_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL;
n_4 = t;
t = term3;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail20 ;
k_4 = t;
p_4 = t;
t = cl_fun(m_4)(cl_sl(m_4), t);
if((t == NULL))
goto fail20 ;
o_4 = t;
t = p_4;
t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATinsert(ATinsert(ATempty, k_4), term37));
t = conc_0_0(sl, t);
if((t == NULL))
goto fail20 ;
t = xtc_command_1_0(sl, l_4, t);
if((t == NULL))
goto fail20 ;
t = n_4;
t = (ATerm) ATmakeAppl(sym_FILE_1, k_4);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_generate_1_0 (StrSL sl, StrCL j_4, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_generate_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_83 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(b_83);
t = xtc_generate_2_0(sl, j_4, lifted4_cl, t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_io_transform_text_1_0 (StrSL sl, StrCL i_4, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_io_transform_text_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = read_from_0_0(sl, t);
if((t == NULL))
goto fail17 ;
t = cl_fun(i_4)(cl_sl(i_4), t);
if((t == NULL))
goto fail17 ;
t = print_to_0_0(sl, t);
if((t == NULL))
goto fail17 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_io_transform_1_0 (StrSL sl, StrCL h_4, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_io_transform_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = read_from_0_0(sl, t);
if((t == NULL))
goto fail16 ;
t = cl_fun(h_4)(cl_sl(h_4), t);
if((t == NULL))
goto fail16 ;
t = write_to_0_0(sl, t);
if((t == NULL))
goto fail16 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_transform_term_2_0 (StrSL sl, StrCL f_4, StrCL g_4, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_transform_term_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = write_to_0_0(sl, t);
if((t == NULL))
goto fail15 ;
t = xtc_transform_file_2_0(sl, f_4, g_4, t);
if((t == NULL))
goto fail15 ;
t = read_from_0_0(sl, t);
if((t == NULL))
goto fail15 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_transform_file_2_0 (StrSL sl, StrCL x_13, StrCL y_13, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_transform_file_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm14 = t;
ATerm y_3 = NULL,z_3 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
if(match_cons(t, sym_FILE_1))
{
y_3 = ATgetArgument(t, 0);
}
else
goto label24 ;
c_4 = t;
t = y_3;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto label24 ;
z_3 = t;
e_4 = t;
t = cl_fun(y_13)(cl_sl(y_13), t);
if((t == NULL))
goto label24 ;
d_4 = t;
t = e_4;
t = (ATerm) ATmakeAppl(sym__2, d_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_3), term37), y_3), term39));
t = conc_0_0(sl, t);
if((t == NULL))
goto label24 ;
t = xtc_command_1_0(sl, x_13, t);
if((t == NULL))
goto label24 ;
t = c_4;
t = (ATerm) ATmakeAppl(sym_FILE_1, z_3);
goto label23 ;
label24 :
t = trm14;
{
ATerm s_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
if(!(match_cons(t, sym_stdin_0)))
goto fail14 ;
v_3 = t;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail14 ;
s_3 = t;
x_3 = t;
t = cl_fun(y_13)(cl_sl(y_13), t);
if((t == NULL))
goto fail14 ;
w_3 = t;
t = x_3;
t = (ATerm) ATmakeAppl(sym__2, w_3, (ATerm) ATinsert(ATinsert(ATempty, s_3), term37));
t = conc_0_0(sl, t);
if((t == NULL))
goto fail14 ;
t = xtc_command_1_0(sl, x_13, t);
if((t == NULL))
goto fail14 ;
t = v_3;
t = (ATerm) ATmakeAppl(sym_FILE_1, s_3);
goto label23 ;
}
label23 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_transform_file_1_0 (StrSL sl, StrCL r_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_transform_file_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_82 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(z_82);
t = xtc_transform_file_2_0(sl, r_3, lifted3_cl, t);
if((t == NULL))
goto fail12 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_transform_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_transform_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
if(match_cons(t, sym__3))
{
o_3 = ATgetArgument(t, 0);
p_3 = ATgetArgument(t, 1);
q_3 = ATgetArgument(t, 2);
}
else
goto fail11 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_transform_2_0 (StrSL sl, StrCL m_3, StrCL n_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_transform_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm11 = t;
ATerm trm12 = t;
ATerm z_81 = NULL,b_82 = NULL,c_82 = NULL;
ATerm trm13;
trm13 = (ATerm) ATgetAnnotations(t);
if((trm13 == NULL))
trm13 = (ATerm) ATempty;
if(match_cons(t, sym_FILE_1))
{
b_82 = ATgetArgument(t, 0);
}
else
goto label22 ;
z_81 = trm13;
t = b_82;
c_82 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FILE_1, c_82), z_81);
goto label21 ;
label22 :
t = trm12;
t = stdin_0_0(sl, t);
if((t == NULL))
goto label20 ;
else
goto label21 ;
label21 :
;
t = xtc_transform_file_2_0(sl, m_3, n_3, t);
if((t == NULL))
goto fail10 ;
else
goto label19 ;
label20 :
t = trm11;
t = xtc_transform_term_2_0(sl, m_3, n_3, t);
if((t == NULL))
goto fail10 ;
else
goto label19 ;
label19 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_transform_1_0 (StrSL sl, StrCL l_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_transform_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm8 = t;
ATerm trm9 = t;
ATerm t_81 = NULL,v_81 = NULL,w_81 = NULL;
ATerm trm10;
trm10 = (ATerm) ATgetAnnotations(t);
if((trm10 == NULL))
trm10 = (ATerm) ATempty;
if(match_cons(t, sym_FILE_1))
{
v_81 = ATgetArgument(t, 0);
}
else
goto label18 ;
t_81 = trm10;
t = v_81;
w_81 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FILE_1, w_81), t_81);
goto label17 ;
label18 :
t = trm9;
t = stdin_0_0(sl, t);
if((t == NULL))
goto label16 ;
else
goto label17 ;
label17 :
;
{
struct str_closure w_82 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(w_82);
t = xtc_transform_file_2_0(sl, l_3, lifted1_cl, t);
if((t == NULL))
goto fail7 ;
else
goto label15 ;
}
label16 :
t = trm8;
{
struct str_closure y_82 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(y_82);
t = xtc_transform_term_2_0(sl, l_3, lifted2_cl, t);
if((t == NULL))
goto fail7 ;
else
goto label15 ;
}
label15 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_command_1_0 (StrSL sl, StrCL y_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_command_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_2 = NULL,w_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,x_2 = NULL,j_3 = NULL,k_3 = NULL;
w_2 = t;
t = cl_fun(y_2)(cl_sl(y_2), t);
if((t == NULL))
goto fail6 ;
t = xtc_find_0_0(sl, t);
if((t == NULL))
goto fail6 ;
v_2 = t;
t = w_2;
c_3 = t;
t = term29;
z_2 = t;
t = c_3;
d_3 = t;
f_3 = t;
t = cl_fun(y_2)(cl_sl(y_2), t);
if((t == NULL))
goto fail6 ;
e_3 = t;
t = f_3;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term31), v_2), term33), e_3), term35);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail6 ;
a_3 = t;
t = d_3;
g_3 = t;
i_3 = t;
h_3 = t;
b_3 = t;
t = g_3;
t = log_0_3(sl, z_2, a_3, b_3, t);
if((t == NULL))
goto fail6 ;
x_2 = t;
k_3 = t;
j_3 = t;
t = (ATerm) ATmakeAppl(sym__2, v_2, j_3);
t = call_0_0(sl, t);
if((t == NULL))
goto fail6 ;
t = x_2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm read_from_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "read_from_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm7 = t;
ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL;
if(match_cons(t, sym_FILE_1))
{
s_2 = ATgetArgument(t, 0);
}
else
goto label14 ;
u_2 = t;
t = s_2;
t = file_exists_0_0(sl, t);
if((t == NULL))
goto label14 ;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto label14 ;
t_2 = t;
t = u_2;
t = t_2;
goto label13 ;
label14 :
t = trm7;
{
ATerm q_2 = NULL,r_2 = NULL;
if(!(match_cons(t, sym_stdin_0)))
goto fail5 ;
r_2 = t;
t = term27;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto fail5 ;
q_2 = t;
t = r_2;
t = q_2;
goto label13 ;
}
label13 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm can_write_repository_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "can_write_repository_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm6 = t;
t = file_exists_0_0(sl, t);
if((t == NULL))
goto label12 ;
t = can_write_file_0_0(sl, t);
if((t == NULL))
goto fail4 ;
else
goto label11 ;
label12 :
t = trm6;
goto label11 ;
label11 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_store_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_store_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
e_2 = t;
t = term17;
c_2 = t;
t = e_2;
f_2 = t;
t = term19;
d_2 = t;
t = f_2;
t = log_0_2(sl, c_2, d_2, t);
if((t == NULL))
goto fail3 ;
t = term21;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail3 ;
{
ATerm trm4 = t;
ATerm b_2 = NULL;
b_2 = t;
{
ATerm trm5 = t;
t = file_exists_0_0(sl, t);
if((t == NULL))
goto label10 ;
t = can_write_file_0_0(sl, t);
if((t == NULL))
goto label8 ;
else
goto label9 ;
label10 :
t = trm5;
goto label9 ;
label9 :
;
t = b_2;
}
{
ATerm g_2 = NULL,i_2 = NULL,h_2 = NULL,j_2 = NULL;
i_2 = t;
g_2 = t;
j_2 = t;
t = term23;
t = table_getlist_0_0(sl, t);
if((t == NULL))
goto fail3 ;
h_2 = t;
t = j_2;
t = (ATerm) ATmakeAppl(sym__2, g_2, h_2);
t = WriteToBinaryFile_0_0(sl, t);
if((t == NULL))
goto fail3 ;
else
goto label7 ;
}
label8 :
t = trm4;
{
ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL;
m_2 = t;
t = term7;
k_2 = t;
t = m_2;
n_2 = t;
p_2 = t;
o_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term25, o_2);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail3 ;
l_2 = t;
t = n_2;
t = log_0_2(sl, k_2, l_2, t);
if((t == NULL))
goto fail3 ;
goto fail3 ;
}
label7 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm read_repository_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "read_repository_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
ATerm m_1 = NULL;
m_1 = t;
t = can_read_file_0_0(sl, t);
if((t == NULL))
goto label1 ;
t = m_1;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto fail2 ;
else
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
ATerm n_1 = NULL;
n_1 = t;
t = file_exists_0_0(sl, t);
if((t == NULL))
goto label3 ;
t = n_1;
{
ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL;
r_1 = t;
t = term7;
p_1 = t;
t = r_1;
s_1 = t;
u_1 = t;
t_1 = t;
t = (ATerm) ATmakeAppl(sym__2, term9, t_1);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail2 ;
q_1 = t;
t = s_1;
t = log_0_2(sl, p_1, q_1, t);
if((t == NULL))
goto fail2 ;
else
goto label2 ;
}
label3 :
t = trm1;
{
ATerm trm2 = t;
ATerm o_1 = NULL;
o_1 = t;
{
ATerm trm3 = t;
t = term11;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label6 ;
goto label4 ;
label6 :
t = trm3;
goto label5 ;
label5 :
;
t = o_1;
}
{
ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL;
x_1 = t;
t = term7;
v_1 = t;
t = x_1;
y_1 = t;
a_2 = t;
z_1 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term13), z_1), term15);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail2 ;
w_1 = t;
t = y_1;
t = log_0_2(sl, v_1, w_1, t);
if((t == NULL))
goto fail2 ;
else
goto label2 ;
}
label4 :
t = trm2;
goto label2 ;
}
label2 :
;
t = (ATerm) ATempty;
goto label0 ;
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
ATerm xtc_new_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_new_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_1 = NULL,i_1 = NULL,k_1 = NULL,l_1 = NULL,j_1 = NULL;
l_1 = t;
t = tmpnam_0_0(sl, t);
if((t == NULL))
goto fail0 ;
k_1 = t;
t = l_1;
t = k_1;
h_1 = t;
j_1 = t;
t = (ATerm) ATmakeAppl(sym__2, h_1, term1);
t = fopen_0_0(sl, t);
if((t == NULL))
goto fail0 ;
i_1 = t;
t = (ATerm) ATmakeAppl(sym__2, h_1, term3);
{
struct str_closure v_82 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(v_82);
t = assert_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
t = i_1;
t = fclose_0_0(sl, t);
if((t == NULL))
goto fail0 ;
t = j_1;
}
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
t = term5;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
