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
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(sym_Error_0);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol(" cannot be read.", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("repository ", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(sym_stdin_0);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym_Vomit_0);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol(" at ", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("Found ", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(sym_XTC_0);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(sym_Debug_0);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol(", ", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("Tools : ", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("Version : ", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("--path", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("Path : ", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("Location : ", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("Registering imports", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("Importing", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(sym_Import_0);
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(sym_stdout_0);
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(sym_TEMP_0);
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(sym__2, term27, term63);
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(sym_Scopes_0);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(sym__2, term5, term67);
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeInt(0);
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("--check", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("--check        check tool dependencies", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration found for: ", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeInt(1);
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("All tools available", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(sym_Repository_0);
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository ", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("Read repository ", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("Registered repository as imported", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(sym__2, term27, term57);
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("Loading repository", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(sym__2, term27, term89);
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("Loaded repository ", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
}
#include <srts/init-stratego-module.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm stderr_0_0 (StrSL sl, ATerm t);
ATerm stdout_0_0 (StrSL sl, ATerm t);
ATerm table_append_0_0 (StrSL sl, ATerm t);
ATerm table_union_0_0 (StrSL sl, ATerm t);
ATerm table_putlist_1_0 (StrSL sl, StrCL p_59, ATerm t);
ATerm table_get_0_0 (StrSL sl, ATerm t);
ATerm table_put_0_0 (StrSL sl, ATerm t);
ATerm lookup_table_0_1 (StrSL sl, ATerm o_59, ATerm t);
ATerm hashtable_get_0_1 (StrSL sl, ATerm p_56, ATerm t);
ATerm hashtable_put_0_2 (StrSL sl, ATerm n_56, ATerm o_56, ATerm t);
ATerm assert_1_0 (StrSL sl, StrCL l_55, ATerm t);
ATerm end_scope_1_0 (StrSL sl, StrCL i_55, ATerm t);
ATerm begin_scope_1_0 (StrSL sl, StrCL h_55, ATerm t);
ATerm separate_by_0_1 (StrSL sl, ATerm e_53, ATerm t);
ATerm fetch_1_0 (StrSL sl, StrCL f_52, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL z_51, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm remove_all_1_0 (StrSL sl, StrCL z_50, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL v_50, ATerm t);
ATerm restore_always_2_0 (StrSL sl, StrCL n_31, StrCL o_31, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL f_31, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL t_27, ATerm t);
ATerm filter_text_file_2_0 (StrSL sl, StrCL l_22, StrCL m_22, ATerm t);
ATerm getenv_0_0 (StrSL sl, ATerm t);
ATerm remove_file_0_0 (StrSL sl, ATerm t);
ATerm dirname_0_0 (StrSL sl, ATerm t);
ATerm tmpnam_0_0 (StrSL sl, ATerm t);
ATerm fclose_0_0 (StrSL sl, ATerm t);
ATerm fopen_0_0 (StrSL sl, ATerm t);
ATerm exit_0_0 (StrSL sl, ATerm t);
ATerm echo_0_0 (StrSL sl, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL x_21, ATerm t);
ATerm fprint_0_0 (StrSL sl, ATerm t);
ATerm WriteToTextFile_0_0 (StrSL sl, ATerm t);
ATerm WriteToBinaryFile_0_0 (StrSL sl, ATerm t);
ATerm ReadFromFile_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm report_failure_1_0 (StrSL sl, StrCL s_17, ATerm t);
ATerm output_options_0_0 (StrSL sl, ATerm t);
ATerm input_options_0_0 (StrSL sl, ATerm t);
ATerm io_options_0_0 (StrSL sl, ATerm t);
ATerm option_wrap_5_0 (StrSL sl, StrCL l_17, StrCL m_17, StrCL n_17, StrCL o_17, StrCL p_17, ATerm t);
ATerm option_wrap_2_0 (StrSL sl, StrCL f_17, StrCL g_17, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL f_14, StrCL g_14, StrCL h_14, ATerm t);
ATerm system_about_0_0 (StrSL sl, ATerm t);
ATerm system_usage_0_0 (StrSL sl, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm q_12, ATerm r_12, ATerm t);
ATerm log_0_3 (StrSL sl, ATerm n_12, ATerm o_12, ATerm p_12, ATerm t);
ATerm rename_file_0_0 (StrSL sl, ATerm t);
ATerm copy_file_0_0 (StrSL sl, ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (StrSL sl, ATerm t);
ATerm XTC_0_0 (StrSL sl, ATerm t);
ATerm Imported_1_0 (StrSL sl, StrCL z_9, ATerm t);
ATerm Import_0_0 (StrSL sl, ATerm t);
ATerm Repository_0_0 (StrSL sl, ATerm t);
ATerm Tool_1_0 (StrSL sl, StrCL y_9, ATerm t);
ATerm TempDirs_0_0 (StrSL sl, ATerm t);
ATerm TempFiles_0_0 (StrSL sl, ATerm t);
ATerm TEMP_0_0 (StrSL sl, ATerm t);
ATerm DIR_1_0 (StrSL sl, StrCL x_9, ATerm t);
ATerm FILE_1_0 (StrSL sl, StrCL w_9, ATerm t);
ATerm xtc_load_0_0 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
ATerm xtc_import_0_0 (StrSL sl, ATerm t);
ATerm xtc_read_0_0 (StrSL sl, ATerm t);
ATerm xtc_location_0_0 (StrSL sl, ATerm t);
ATerm xtc_filter_text_file_2_0 (StrSL sl, StrCL p_8, StrCL q_8, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
ATerm xtc_check_dependencies_0_0 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
ATerm check_options_1_0 (StrSL sl, StrCL h_8, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
ATerm xtc_output_wrap_2_0 (StrSL sl, StrCL e_8, StrCL f_8, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
ATerm xtc_output_wrap_1_0 (StrSL sl, StrCL d_8, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
ATerm xtc_input_wrap_2_0 (StrSL sl, StrCL b_8, StrCL c_8, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
ATerm xtc_input_wrap_1_0 (StrSL sl, StrCL a_8, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
ATerm xtc_iowrap_2_0 (StrSL sl, StrCL y_7, StrCL z_7, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
ATerm xtc_iowrap_1_0 (StrSL sl, StrCL x_7, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_5_0 (StrSL sl, StrCL s_7, StrCL t_7, StrCL u_7, StrCL v_7, StrCL w_7, ATerm t);
ATerm xtc_io_wrap_3_0 (StrSL sl, StrCL p_7, StrCL q_7, StrCL r_7, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_2_0 (StrSL sl, StrCL n_7, StrCL o_7, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_1_0 (StrSL sl, StrCL m_7, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
ATerm xtc_output_1_0 (StrSL sl, StrCL l_7, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
ATerm xtc_input_1_0 (StrSL sl, StrCL i_7, ATerm t);
ATerm xtc_io_exit_0_0 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
ATerm xtc_io_1_0 (StrSL sl, StrCL f_7, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
ATerm xtc_exit_0_0 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
ATerm xtc_temp_files_1_0 (StrSL sl, StrCL a_7, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
ATerm xtc_remove_temporaries_0_0 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
ATerm xtc_write_output_0_0 (StrSL sl, ATerm t);
ATerm xtc_ensure_file_0_0 (StrSL sl, ATerm t);
ATerm copy_to_1_0 (StrSL sl, StrCL e_10, ATerm t);
ATerm rename_to_1_0 (StrSL sl, StrCL d_10, ATerm t);
ATerm xtc_find_file_0_0 (StrSL sl, ATerm t);
ATerm print_to_0_0 (StrSL sl, ATerm t);
ATerm write_to_text_0_0 (StrSL sl, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm register_import_0_0 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
ATerm xtc_register_path_0_3 (StrSL sl, ATerm a_10, ATerm b_10, ATerm c_10, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm xtc_register_0_3 (StrSL sl, ATerm i_3, ATerm j_3, ATerm k_3, ATerm t);
ATerm xtc_register_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_path_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_loc_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
ATerm xtc_find_version_loc_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_silent_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_warning_0_0 (StrSL sl, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
ATerm read_repository_file_0_0 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm xtc_new_file_0_0 (StrSL sl, ATerm t);
ATerm XTC_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "XTC_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_XTC_0)))
goto fail102 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
ATerm Imported_1_0 (StrSL sl, StrCL z_9, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Imported_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_77 = NULL,p_77 = NULL,r_77 = NULL;
ATerm trm66;
trm66 = (ATerm) ATgetAnnotations(t);
if((trm66 == NULL))
trm66 = (ATerm) ATempty;
if(match_cons(t, sym_Imported_1))
{
p_77 = ATgetArgument(t, 0);
}
else
goto fail101 ;
q_77 = trm66;
t = p_77;
t = cl_fun(z_9)(cl_sl(z_9), t);
if((t == NULL))
goto fail101 ;
r_77 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Imported_1, r_77), q_77);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
ATerm Import_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Import_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_Import_0)))
goto fail100 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
ATerm Repository_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Repository_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_Repository_0)))
goto fail99 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
ATerm Tool_1_0 (StrSL sl, StrCL y_9, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Tool_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_77 = NULL,l_77 = NULL,n_77 = NULL;
ATerm trm65;
trm65 = (ATerm) ATgetAnnotations(t);
if((trm65 == NULL))
trm65 = (ATerm) ATempty;
if(match_cons(t, sym_Tool_1))
{
l_77 = ATgetArgument(t, 0);
}
else
goto fail98 ;
m_77 = trm65;
t = l_77;
t = cl_fun(y_9)(cl_sl(y_9), t);
if((t == NULL))
goto fail98 ;
n_77 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Tool_1, n_77), m_77);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
ATerm TempDirs_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "TempDirs_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_TempDirs_0)))
goto fail97 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
ATerm TempFiles_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "TempFiles_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_TempFiles_0)))
goto fail96 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
ATerm TEMP_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "TEMP_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_TEMP_0)))
goto fail95 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
ATerm DIR_1_0 (StrSL sl, StrCL x_9, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "DIR_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_77 = NULL,i_77 = NULL,k_77 = NULL;
ATerm trm64;
trm64 = (ATerm) ATgetAnnotations(t);
if((trm64 == NULL))
trm64 = (ATerm) ATempty;
if(match_cons(t, sym_DIR_1))
{
i_77 = ATgetArgument(t, 0);
}
else
goto fail94 ;
j_77 = trm64;
t = i_77;
t = cl_fun(x_9)(cl_sl(x_9), t);
if((t == NULL))
goto fail94 ;
k_77 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_DIR_1, k_77), j_77);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
ATerm FILE_1_0 (StrSL sl, StrCL w_9, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "FILE_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_77 = NULL,f_77 = NULL,h_77 = NULL;
ATerm trm63;
trm63 = (ATerm) ATgetAnnotations(t);
if((trm63 == NULL))
trm63 = (ATerm) ATempty;
if(match_cons(t, sym_FILE_1))
{
f_77 = ATgetArgument(t, 0);
}
else
goto fail93 ;
g_77 = trm63;
t = f_77;
t = cl_fun(w_9)(cl_sl(w_9), t);
if((t == NULL))
goto fail93 ;
h_77 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FILE_1, h_77), g_77);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_load_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_load_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,n_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
q_9 = t;
t = term17;
o_9 = t;
t = q_9;
r_9 = t;
t = term101;
p_9 = t;
t = r_9;
t = log_0_2(sl, o_9, p_9, t);
if((t == NULL))
goto fail92 ;
n_9 = t;
{
ATerm trm62 = t;
t = term103;
t = table_get_0_0(sl, t);
if((t == NULL))
goto label100 ;
goto label99 ;
label100 :
t = trm62;
t = xtc_location_0_0(sl, t);
if((t == NULL))
goto fail92 ;
t = xtc_read_0_0(sl, t);
if((t == NULL))
goto fail92 ;
t = xtc_import_0_0(sl, t);
if((t == NULL))
goto fail92 ;
else
goto label99 ;
label99 :
;
t = n_9;
u_9 = t;
t = term17;
s_9 = t;
t = u_9;
v_9 = t;
t = term105;
t_9 = t;
t = v_9;
t = log_0_2(sl, s_9, t_9, t);
if((t == NULL))
goto fail92 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_import_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_import_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_9 = NULL;
m_9 = t;
{
struct str_closure w_80 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(w_80);
t = repeat_1_0(sl, lifted55_cl, t);
if((t == NULL))
goto fail90 ;
t = m_9;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term99;
t = table_get_0_0(sl_up(sl), t);
if((t == NULL))
goto fail91 ;
{
struct str_closure v_80 = { &(xtc_read_0_0) , sl_up(sl) };
StrCL lifted56_cl = &(v_80);
t = filter_1_0(sl_up(sl), lifted56_cl, t);
if((t == NULL))
goto fail91 ;
{
ATerm trm61 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label98 ;
goto fail91 ;
label98 :
t = trm61;
goto label97 ;
label97 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_read_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_read_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
s_8 = t;
{
ATerm trm60 = t;
t = (ATerm) ATmakeAppl(sym__2, term27, (ATerm) ATmakeAppl(sym_Imported_1, s_8));
t = table_get_0_0(sl, t);
if((t == NULL))
goto label96 ;
goto fail89 ;
label96 :
t = trm60;
goto label95 ;
label95 :
;
t_8 = t;
t = (ATerm) ATmakeAppl(sym__3, term27, term89, (ATerm) ATinsert(ATempty, s_8));
t = table_put_0_0(sl, t);
if((t == NULL))
goto fail89 ;
t = t_8;
w_8 = t;
t = term17;
u_8 = t;
t = w_8;
x_8 = t;
t = (ATerm) ATmakeAppl(sym__2, term91, s_8);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail89 ;
v_8 = t;
t = x_8;
t = log_0_2(sl, u_8, v_8, t);
if((t == NULL))
goto fail89 ;
t = read_repository_file_0_0(sl, t);
if((t == NULL))
goto fail89 ;
a_9 = t;
t = term17;
y_8 = t;
t = a_9;
b_9 = t;
t = (ATerm) ATmakeAppl(sym__2, term93, s_8);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail89 ;
z_8 = t;
t = b_9;
t = log_0_2(sl, y_8, z_8, t);
if((t == NULL))
goto fail89 ;
d_9 = t;
c_9 = t;
t = (ATerm) ATmakeAppl(sym__2, term27, c_9);
{
struct str_closure u_80 = { &(table_append_0_0) , sl };
StrCL lifted54_cl = &(u_80);
t = table_putlist_1_0(sl, lifted54_cl, t);
if((t == NULL))
goto fail89 ;
g_9 = t;
t = term17;
e_9 = t;
t = g_9;
h_9 = t;
t = term95;
f_9 = t;
t = h_9;
t = log_0_2(sl, e_9, f_9, t);
if((t == NULL))
goto fail89 ;
t = (ATerm) ATmakeAppl(sym__3, term27, (ATerm)ATmakeAppl(sym_Imported_1, s_8), (ATerm) ATempty);
t = table_put_0_0(sl, t);
if((t == NULL))
goto fail89 ;
k_9 = t;
t = term17;
i_9 = t;
t = k_9;
l_9 = t;
t = term97;
j_9 = t;
t = l_9;
t = log_0_2(sl, i_9, j_9, t);
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
ATerm xtc_location_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_location_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm58 = t;
t = term85;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label93 ;
goto label92 ;
label93 :
t = trm58;
{
ATerm trm59 = t;
t = term87;
t = getenv_0_0(sl, t);
if((t == NULL))
goto label94 ;
goto label92 ;
label94 :
t = trm59;
t = GetInternalDefaultXtcRepository_0_0(sl, t);
if((t == NULL))
goto fail88 ;
else
goto label92 ;
}
label92 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_filter_text_file_2_0 (StrSL sl, StrCL p_8, StrCL q_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_filter_text_file_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_8 = NULL,o_8 = NULL,r_8 = NULL;
if(match_cons(t, sym_FILE_1))
{
n_8 = ATgetArgument(t, 0);
}
else
goto fail87 ;
r_8 = t;
t = n_8;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail87 ;
o_8 = t;
t = (ATerm) ATmakeAppl(sym__2, n_8, o_8);
t = filter_text_file_2_0(sl, p_8, q_8, t);
if((t == NULL))
goto fail87 ;
t = r_8;
t = (ATerm) ATmakeAppl(sym_FILE_1, o_8);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_check_dependencies_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_check_dependencies_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_8 = NULL;
ATerm trm54 = t;
ATerm l_8 = NULL;
l_8 = t;
t = term75;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label86 ;
k_8 = t;
t = l_8;
t = k_8;
{
struct str_closure s_80 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(s_80);
t = filter_1_0(sl, lifted52_cl, t);
if((t == NULL))
goto fail84 ;
{
ATerm trm56 = t;
ATerm m_8 = NULL;
m_8 = t;
{
ATerm trm57 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label91 ;
goto label89 ;
label91 :
t = trm57;
goto label90 ;
label90 :
;
t = m_8;
}
{
struct str_closure t_80 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(t_80);
t = debug_1_0(sl, lifted53_cl, t);
if((t == NULL))
goto fail84 ;
t = term81;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail84 ;
else
goto label85 ;
}
label89 :
t = trm56;
t = term83;
t = echo_0_0(sl, t);
if((t == NULL))
goto fail84 ;
t = term73;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail84 ;
else
goto label85 ;
}
}
label86 :
t = trm54;
goto label85 ;
label85 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term79;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm55 = t;
t = xtc_find_silent_0_0(sl_up(sl), t);
if((t == NULL))
goto label88 ;
goto fail85 ;
label88 :
t = trm55;
goto label87 ;
label87 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
ATerm check_options_1_0 (StrSL sl, StrCL h_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "check_options_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, h_8);
{
struct str_closure p_80 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(p_80);
struct str_closure q_80 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(q_80);
struct str_closure r_80 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(r_80);
t = Option_3_0(sl, lifted49_cl, lifted50_cl, lifted51_cl, t);
if((t == NULL))
goto fail80 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term77;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_8 = NULL,i_8 = NULL,j_8 = NULL;
g_8 = t;
j_8 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail82 ;
i_8 = t;
t = j_8;
t = (ATerm) ATmakeAppl(sym__2, term75, i_8);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail82 ;
t = g_8;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--check", 0, ATtrue))))
goto fail81 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_output_wrap_2_0 (StrSL sl, StrCL e_8, StrCL f_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_output_wrap_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, e_8);
sl_init_fun(1, f_8);
{
struct str_closure l_80 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(l_80);
struct str_closure o_80 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(o_80);
t = option_wrap_2_0(sl, lifted45_cl, lifted46_cl, t);
if((t == NULL))
goto fail75 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_80 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(k_80);
t = xtc_temp_files_1_0(sl_up(sl), lifted47_cl, t);
if((t == NULL))
goto fail77 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_80 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(j_80);
t = sl_fun(1, sl_up(sl))(sl_fun_sl(1, sl_up(sl)), t);
if((t == NULL))
goto fail78 ;
t = copy_to_1_0(sl_up(sl_up(sl)), lifted48_cl, t);
if((t == NULL))
goto fail78 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm53 = t;
t = term61;
t = get_config_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label84 ;
goto label83 ;
label84 :
t = trm53;
t = term59;
goto label83 ;
label83 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm52 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label82 ;
goto label81 ;
label82 :
t = trm52;
t = output_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail76 ;
else
goto label81 ;
label81 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_output_wrap_1_0 (StrSL sl, StrCL d_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_output_wrap_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, d_8);
{
struct str_closure h_80 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(h_80);
struct str_closure i_80 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(i_80);
t = option_wrap_2_0(sl, lifted41_cl, lifted42_cl, t);
if((t == NULL))
goto fail70 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_80 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(g_80);
t = xtc_temp_files_1_0(sl_up(sl), lifted43_cl, t);
if((t == NULL))
goto fail72 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_80 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(f_80);
t = sl_fun(0, sl_up(sl))(sl_fun_sl(0, sl_up(sl)), t);
if((t == NULL))
goto fail73 ;
t = copy_to_1_0(sl_up(sl_up(sl)), lifted44_cl, t);
if((t == NULL))
goto fail73 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm51 = t;
t = term61;
t = get_config_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label80 ;
goto label79 ;
label80 :
t = trm51;
t = term59;
goto label79 ;
label79 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm50 = t;
goto label78 ;
goto label77 ;
label78 :
t = trm50;
t = output_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail71 ;
else
goto label77 ;
label77 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_input_wrap_2_0 (StrSL sl, StrCL b_8, StrCL c_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_input_wrap_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, b_8);
sl_init_fun(1, c_8);
{
struct str_closure d_80 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(d_80);
struct str_closure e_80 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(e_80);
t = option_wrap_2_0(sl, lifted39_cl, lifted40_cl, t);
if((t == NULL))
goto fail67 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_input_1_0(sl_up(sl), sl_fun_cl(1, sl), t);
if((t == NULL))
goto fail69 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm49 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label76 ;
goto label75 ;
label76 :
t = trm49;
t = input_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail68 ;
else
goto label75 ;
label75 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_input_wrap_1_0 (StrSL sl, StrCL a_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_input_wrap_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, a_8);
{
struct str_closure b_80 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(b_80);
struct str_closure c_80 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(c_80);
t = option_wrap_2_0(sl, lifted37_cl, lifted38_cl, t);
if((t == NULL))
goto fail64 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_input_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail66 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm48 = t;
goto label74 ;
goto label73 ;
label74 :
t = trm48;
t = input_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail65 ;
else
goto label73 ;
label73 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_iowrap_2_0 (StrSL sl, StrCL y_7, StrCL z_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_iowrap_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, y_7);
sl_init_fun(1, z_7);
{
struct str_closure z_79 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(z_79);
struct str_closure a_80 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(a_80);
t = option_wrap_2_0(sl, lifted35_cl, lifted36_cl, t);
if((t == NULL))
goto fail61 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_io_1_0(sl_up(sl), sl_fun_cl(1, sl), t);
if((t == NULL))
goto fail63 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm47 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label72 ;
goto label71 ;
label72 :
t = trm47;
t = io_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail62 ;
else
goto label71 ;
label71 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_iowrap_1_0 (StrSL sl, StrCL x_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_iowrap_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, x_7);
{
struct str_closure x_79 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(x_79);
struct str_closure y_79 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(y_79);
t = option_wrap_2_0(sl, lifted33_cl, lifted34_cl, t);
if((t == NULL))
goto fail58 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_io_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail60 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm46 = t;
goto label70 ;
goto label69 ;
label70 :
t = trm46;
t = io_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail59 ;
else
goto label69 ;
label69 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_io_wrap_5_0 (StrSL sl, StrCL s_7, StrCL t_7, StrCL u_7, StrCL v_7, StrCL w_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_io_wrap_5_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(3);
sl_init_fun(0, s_7);
sl_init_fun(1, v_7);
sl_init_fun(2, w_7);
{
struct str_closure u_79 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(u_79);
struct str_closure v_79 = { &(_Id) , sl };
StrCL lifted31_cl = &(v_79);
struct str_closure w_79 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(w_79);
t = option_wrap_5_0(sl, lifted30_cl, t_7, u_7, lifted31_cl, lifted32_cl, t);
if((t == NULL))
goto fail55 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_check_dependencies_0_0(sl_up(sl), t);
if((t == NULL))
goto fail57 ;
t = xtc_io_1_0(sl_up(sl), sl_fun_cl(2, sl), t);
if((t == NULL))
goto fail57 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm44 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label67 ;
goto label66 ;
label67 :
t = trm44;
{
ATerm trm45 = t;
t = io_options_0_0(sl_up(sl), t);
if((t == NULL))
goto label68 ;
goto label66 ;
label68 :
t = trm45;
t = check_options_1_0(sl_up(sl), sl_fun_cl(1, sl), t);
if((t == NULL))
goto fail56 ;
else
goto label66 ;
}
label66 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_io_wrap_3_0 (StrSL sl, StrCL p_7, StrCL q_7, StrCL r_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_io_wrap_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_79 = { &(system_usage_0_0) , sl };
StrCL lifted28_cl = &(s_79);
struct str_closure t_79 = { &(system_about_0_0) , sl };
StrCL lifted29_cl = &(t_79);
t = xtc_io_wrap_5_0(sl, p_7, lifted28_cl, lifted29_cl, q_7, r_7, t);
if((t == NULL))
goto fail54 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_io_wrap_2_0 (StrSL sl, StrCL n_7, StrCL o_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_io_wrap_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, n_7);
sl_init_fun(1, o_7);
{
struct str_closure q_79 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(q_79);
struct str_closure r_79 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(r_79);
t = option_wrap_2_0(sl, lifted26_cl, lifted27_cl, t);
if((t == NULL))
goto fail51 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_io_1_0(sl_up(sl), sl_fun_cl(1, sl), t);
if((t == NULL))
goto fail53 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm43 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label65 ;
goto label64 ;
label65 :
t = trm43;
t = io_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail52 ;
else
goto label64 ;
label64 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_io_wrap_1_0 (StrSL sl, StrCL m_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_io_wrap_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, m_7);
{
struct str_closure o_79 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(o_79);
struct str_closure p_79 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(p_79);
t = option_wrap_2_0(sl, lifted24_cl, lifted25_cl, t);
if((t == NULL))
goto fail48 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xtc_io_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail50 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm42 = t;
goto label63 ;
goto label62 ;
label63 :
t = trm42;
t = io_options_0_0(sl_up(sl), t);
if((t == NULL))
goto fail49 ;
else
goto label62 ;
label62 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_output_1_0 (StrSL sl, StrCL l_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_output_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, l_7);
{
struct str_closure n_79 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(n_79);
t = xtc_temp_files_1_0(sl, lifted22_cl, t);
if((t == NULL))
goto fail45 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_79 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(m_79);
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail46 ;
t = copy_to_1_0(sl_up(sl), lifted23_cl, t);
if((t == NULL))
goto fail46 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm41 = t;
t = term61;
t = get_config_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label61 ;
goto label60 ;
label61 :
t = trm41;
t = term59;
goto label60 ;
label60 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_input_1_0 (StrSL sl, StrCL i_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_input_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, i_7);
{
struct str_closure l_79 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(l_79);
t = xtc_temp_files_1_0(sl, lifted21_cl, t);
if((t == NULL))
goto fail43 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm40 = t;
ATerm j_7 = NULL,k_7 = NULL;
k_7 = t;
t = term71;
t = get_config_0_0(sl_up(sl), t);
if((t == NULL))
goto label59 ;
j_7 = t;
t = k_7;
t = (ATerm) ATmakeAppl(sym_FILE_1, j_7);
goto label58 ;
label59 :
t = trm40;
t = term15;
goto label58 ;
label58 :
;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail44 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
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
goto fail42 ;
t = term73;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto fail42 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_io_1_0 (StrSL sl, StrCL f_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_io_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, f_7);
{
struct str_closure k_79 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(k_79);
t = xtc_temp_files_1_0(sl, lifted19_cl, t);
if((t == NULL))
goto fail40 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm38 = t;
ATerm trm39 = t;
ATerm g_7 = NULL,h_7 = NULL;
h_7 = t;
t = term71;
t = get_config_0_0(sl_up(sl), t);
if((t == NULL))
goto label57 ;
g_7 = t;
t = h_7;
t = (ATerm) ATmakeAppl(sym_FILE_1, g_7);
goto label56 ;
label57 :
t = trm39;
t = term15;
goto label56 ;
label56 :
;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label55 ;
t = xtc_write_output_0_0(sl_up(sl), t);
if((t == NULL))
goto label55 ;
goto label54 ;
label55 :
t = trm38;
{
struct str_closure j_79 = { &(xtc_exit_0_0) , sl_up(sl) };
StrCL lifted20_cl = &(j_79);
t = SSL_stacktrace_get_all_frame_names();
if((t == NULL))
goto fail41 ;
t = report_failure_1_0(sl_up(sl), lifted20_cl, t);
if((t == NULL))
goto fail41 ;
else
goto label54 ;
}
label54 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
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
ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
sl_init_var(0, c_7);
sl_init_var(1, d_7);
b_7 = t;
{
struct str_closure i_79 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(i_79);
t = repeat_1_0(sl, lifted15_cl, t);
if((t == NULL))
goto fail36 ;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail36 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_7 = NULL;
struct str_closure d_79 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(d_79);
e_7 = t;
t = term69;
t = table_get_0_0(sl_up(sl), t);
if((t == NULL))
goto fail37 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetFirst((ATermList) t);
}
else
if((sl_readvar(1, sl) != ATgetFirst((ATermList) t)))
goto fail37 ;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = (ATerm) ATgetNext((ATermList) t);
}
else
if((sl_readvar(0, sl) != (ATerm) ATgetNext((ATermList) t)))
goto fail37 ;
}
else
goto fail37 ;
if((sl_readvar(1, sl) == NULL))
goto fail37 ;
else
{
t = sl_readvar(1, sl);
}
{
struct str_closure g_79 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(g_79);
t = map_1_0(sl_up(sl), lifted16_cl, t);
if((t == NULL))
goto fail37 ;
t = e_7;
t = end_scope_1_0(sl_up(sl), lifted18_cl, t);
if((t == NULL))
goto fail37 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_79 = { &(remove_file_0_0) , sl_up(sl_up(sl)) };
StrCL lifted17_cl = &(f_79);
t = try_1_0(sl_up(sl_up(sl)), lifted17_cl, t);
if((t == NULL))
goto fail39 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term5;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_temp_files_1_0 (StrSL sl, StrCL a_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_temp_files_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm x_6 = NULL,y_6 = NULL;
sl_init_var(0, x_6);
sl_init_var(1, y_6);
{
struct str_closure a_79 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(a_79);
struct str_closure b_79 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(b_79);
t = begin_scope_1_0(sl, lifted10_cl, t);
if((t == NULL))
goto fail31 ;
t = restore_always_2_0(sl, a_7, lifted11_cl, t);
if((t == NULL))
goto fail31 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
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
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_6 = NULL;
struct str_closure v_78 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(v_78);
z_6 = t;
{
ATerm trm37 = t;
t = term69;
t = table_get_0_0(sl_up(sl), t);
if((t == NULL))
goto label53 ;
goto label52 ;
label53 :
t = trm37;
t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
goto label52 ;
label52 :
;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetFirst((ATermList) t);
}
else
if((sl_readvar(1, sl) != ATgetFirst((ATermList) t)))
goto fail32 ;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = (ATerm) ATgetNext((ATermList) t);
}
else
if((sl_readvar(0, sl) != (ATerm) ATgetNext((ATermList) t)))
goto fail32 ;
}
else
goto fail32 ;
if((sl_readvar(1, sl) == NULL))
goto fail32 ;
else
{
t = sl_readvar(1, sl);
}
{
struct str_closure y_78 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(y_78);
t = map_1_0(sl_up(sl), lifted12_cl, t);
if((t == NULL))
goto fail32 ;
t = z_6;
t = end_scope_1_0(sl_up(sl), lifted14_cl, t);
if((t == NULL))
goto fail32 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_78 = { &(remove_file_0_0) , sl_up(sl_up(sl)) };
StrCL lifted13_cl = &(w_78);
t = try_1_0(sl_up(sl_up(sl)), lifted13_cl, t);
if((t == NULL))
goto fail34 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term5;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_remove_temporaries_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_remove_temporaries_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_6 = NULL,w_6 = NULL;
w_6 = t;
t = term65;
t = table_get_0_0(sl, t);
if((t == NULL))
goto fail29 ;
v_6 = t;
{
struct str_closure u_78 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(u_78);
t = map_1_0(sl, lifted8_cl, t);
if((t == NULL))
goto fail29 ;
t = w_6;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_78 = { &(remove_file_0_0) , sl_up(sl) };
StrCL lifted9_cl = &(t_78);
t = try_1_0(sl_up(sl), lifted9_cl, t);
if((t == NULL))
goto fail30 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_write_output_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_write_output_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm33 = t;
struct str_closure s_78 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(s_78);
if(match_cons(t, sym_FILE_1))
{
ATerm trm35 = ATgetArgument(t, 0);
}
else
goto label47 ;
t = copy_to_1_0(sl, lifted7_cl, t);
if((t == NULL))
goto label47 ;
goto label46 ;
label47 :
t = trm33;
{
ATerm t_6 = NULL,u_6 = NULL;
if(!(match_cons(t, sym_stdin_0)))
goto fail27 ;
u_6 = t;
t = term61;
{
ATerm trm36 = t;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label51 ;
goto label50 ;
label51 :
t = trm36;
t = term59;
goto label50 ;
label50 :
;
t_6 = t;
t = u_6;
t = (ATerm) ATmakeAppl(sym__2, term15, t_6);
t = copy_file_0_0(sl, t);
if((t == NULL))
goto fail27 ;
else
goto label46 ;
}
}
label46 :
;
}
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
ATerm trm34 = t;
t = term61;
t = get_config_0_0(sl_up(sl), t);
if((t == NULL))
goto label49 ;
goto label48 ;
label49 :
t = trm34;
t = term59;
goto label48 ;
label48 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_ensure_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_ensure_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm31 = t;
if(match_cons(t, sym_FILE_1))
{
ATerm trm32 = ATgetArgument(t, 0);
}
else
goto label45 ;
goto label44 ;
label45 :
t = trm31;
{
ATerm r_6 = NULL,s_6 = NULL;
if(!(match_cons(t, sym_stdin_0)))
goto fail26 ;
s_6 = t;
t = term3;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail26 ;
r_6 = t;
t = s_6;
t = (ATerm) ATmakeAppl(sym__2, term15, r_6);
t = copy_file_0_0(sl, t);
if((t == NULL))
goto fail26 ;
t = (ATerm) ATmakeAppl(sym_FILE_1, r_6);
goto label44 ;
}
label44 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
ATerm copy_to_1_0 (StrSL sl, StrCL e_10, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "copy_to_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm25 = t;
ATerm o_6 = NULL,q_6 = NULL;
if(match_cons(t, sym_FILE_1))
{
o_6 = ATgetArgument(t, 0);
}
else
goto label35 ;
q_6 = t;
t = cl_fun(e_10)(cl_sl(e_10), t);
if((t == NULL))
goto label35 ;
if(!((o_6 == t)))
goto label35 ;
t = q_6;
t = (ATerm) ATmakeAppl(sym_FILE_1, o_6);
goto label34 ;
label35 :
t = trm25;
{
ATerm trm26 = t;
ATerm k_6 = NULL,l_6 = NULL,n_6 = NULL;
if(match_cons(t, sym_FILE_1))
{
k_6 = ATgetArgument(t, 0);
}
else
goto label36 ;
n_6 = t;
t = cl_fun(e_10)(cl_sl(e_10), t);
if((t == NULL))
goto label36 ;
l_6 = t;
{
ATerm trm27 = t;
ATerm trm28 = t;
t = stdout_0_0(sl, t);
if((t == NULL))
goto label40 ;
goto label39 ;
label40 :
t = trm28;
{
ATerm trm29 = t;
t = stderr_0_0(sl, t);
if((t == NULL))
goto label41 ;
goto label39 ;
label41 :
t = trm29;
if((k_6 == t))
goto label39 ;
else
goto label38 ;
}
label39 :
;
goto label36 ;
label38 :
t = trm27;
goto label37 ;
label37 :
;
t = (ATerm) ATmakeAppl(sym__2, k_6, l_6);
t = copy_file_0_0(sl, t);
if((t == NULL))
goto label36 ;
t = n_6;
t = (ATerm) ATmakeAppl(sym_FILE_1, k_6);
}
goto label34 ;
label36 :
t = trm26;
{
ATerm g_6 = NULL,h_6 = NULL,j_6 = NULL;
if(match_cons(t, sym_FILE_1))
{
g_6 = ATgetArgument(t, 0);
}
else
goto fail25 ;
j_6 = t;
t = cl_fun(e_10)(cl_sl(e_10), t);
if((t == NULL))
goto fail25 ;
h_6 = t;
{
ATerm trm30 = t;
t = stdout_0_0(sl, t);
if((t == NULL))
goto label43 ;
goto label42 ;
label43 :
t = trm30;
t = stderr_0_0(sl, t);
if((t == NULL))
goto fail25 ;
else
goto label42 ;
label42 :
;
t = (ATerm) ATmakeAppl(sym__2, g_6, h_6);
t = copy_file_0_0(sl, t);
if((t == NULL))
goto fail25 ;
t = j_6;
t = (ATerm) ATmakeAppl(sym_FILE_1, g_6);
goto label34 ;
}
}
}
label34 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
ATerm rename_to_1_0 (StrSL sl, StrCL d_10, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rename_to_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm21 = t;
ATerm d_6 = NULL,f_6 = NULL;
if(match_cons(t, sym_FILE_1))
{
d_6 = ATgetArgument(t, 0);
}
else
goto label28 ;
f_6 = t;
t = cl_fun(d_10)(cl_sl(d_10), t);
if((t == NULL))
goto label28 ;
if(!((d_6 == t)))
goto label28 ;
t = f_6;
t = (ATerm) ATmakeAppl(sym_FILE_1, d_6);
goto label27 ;
label28 :
t = trm21;
{
ATerm trm22 = t;
ATerm z_5 = NULL,a_6 = NULL,c_6 = NULL;
if(match_cons(t, sym_FILE_1))
{
z_5 = ATgetArgument(t, 0);
}
else
goto label29 ;
c_6 = t;
t = cl_fun(d_10)(cl_sl(d_10), t);
if((t == NULL))
goto label29 ;
a_6 = t;
{
ATerm trm23 = t;
ATerm trm24 = t;
t = stdout_0_0(sl, t);
if((t == NULL))
goto label33 ;
goto label32 ;
label33 :
t = trm24;
if((z_5 == t))
goto label32 ;
else
goto label31 ;
label32 :
;
goto label29 ;
label31 :
t = trm23;
goto label30 ;
label30 :
;
t = (ATerm) ATmakeAppl(sym__2, z_5, a_6);
t = rename_file_0_0(sl, t);
if((t == NULL))
goto label29 ;
t = c_6;
t = (ATerm) ATmakeAppl(sym_FILE_1, a_6);
}
goto label27 ;
label29 :
t = trm22;
{
ATerm w_5 = NULL,y_5 = NULL;
if(match_cons(t, sym_FILE_1))
{
w_5 = ATgetArgument(t, 0);
}
else
goto fail24 ;
y_5 = t;
t = cl_fun(d_10)(cl_sl(d_10), t);
if((t == NULL))
goto fail24 ;
if(!(match_cons(t, sym_stdout_0)))
goto fail24 ;
t = (ATerm) ATmakeAppl(sym__2, w_5, term59);
t = copy_file_0_0(sl, t);
if((t == NULL))
goto fail24 ;
t = w_5;
t = remove_file_0_0(sl, t);
if((t == NULL))
goto fail24 ;
t = y_5;
t = term59;
goto label27 ;
}
}
label27 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_find_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_find_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_5 = NULL,v_5 = NULL;
v_5 = t;
t = xtc_find_0_0(sl, t);
if((t == NULL))
goto fail23 ;
u_5 = t;
t = v_5;
t = (ATerm) ATmakeAppl(sym_FILE_1, u_5);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm print_to_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "print_to_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL;
o_5 = t;
r_5 = t;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail22 ;
n_5 = t;
t = (ATerm) ATmakeAppl(sym__2, n_5, term1);
t = fopen_0_0(sl, t);
if((t == NULL))
goto fail22 ;
p_5 = t;
{
ATerm trm20 = t;
ATerm q_5 = NULL;
q_5 = t;
t = o_5;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label26 ;
t = q_5;
t = (ATerm) ATinsert(ATempty, o_5);
goto label25 ;
label26 :
t = trm20;
t = o_5;
goto label25 ;
label25 :
;
t_5 = t;
s_5 = t;
t = (ATerm) ATmakeAppl(sym__2, p_5, s_5);
t = fprint_0_0(sl, t);
if((t == NULL))
goto fail22 ;
t = p_5;
t = fclose_0_0(sl, t);
if((t == NULL))
goto fail22 ;
t = r_5;
t = (ATerm) ATmakeAppl(sym_FILE_1, n_5);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm write_to_text_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "write_to_text_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL;
l_5 = t;
m_5 = t;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail21 ;
k_5 = t;
t = (ATerm) ATmakeAppl(sym__2, k_5, l_5);
t = WriteToTextFile_0_0(sl, t);
if((t == NULL))
goto fail21 ;
t = m_5;
t = (ATerm) ATmakeAppl(sym_FILE_1, k_5);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm write_to_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "write_to_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
i_5 = t;
j_5 = t;
t = xtc_new_file_0_0(sl, t);
if((t == NULL))
goto fail20 ;
h_5 = t;
t = (ATerm) ATmakeAppl(sym__2, h_5, i_5);
t = WriteToBinaryFile_0_0(sl, t);
if((t == NULL))
goto fail20 ;
t = j_5;
t = (ATerm) ATmakeAppl(sym_FILE_1, h_5);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm register_import_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "register_import_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
t = term51;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail19 ;
p_4 = t;
u_4 = t;
t = term17;
r_4 = t;
t = u_4;
v_4 = t;
t = term53;
s_4 = t;
t = v_4;
w_4 = t;
y_4 = t;
x_4 = t;
t_4 = t;
t = w_4;
t = log_0_3(sl, r_4, s_4, t_4, t);
if((t == NULL))
goto fail19 ;
t = term51;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail19 ;
q_4 = t;
c_5 = t;
t = term17;
z_4 = t;
t = c_5;
d_5 = t;
t = term55;
a_5 = t;
t = d_5;
e_5 = t;
g_5 = t;
f_5 = t;
b_5 = t;
t = e_5;
t = log_0_3(sl, z_4, a_5, b_5, t);
if((t == NULL))
goto fail19 ;
t = (ATerm) ATmakeAppl(sym__3, term27, term57, q_4);
t = table_union_0_0(sl, t);
if((t == NULL))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_register_path_0_3 (StrSL sl, ATerm a_10, ATerm b_10, ATerm c_10, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_register_path_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, b_10);
sl_init_var(1, c_10);
{
ATerm trm12 = t;
ATerm n_4 = NULL;
n_4 = t;
t = a_10;
t = is_list_0_0(sl, t);
if((t == NULL))
goto label19 ;
t = a_10;
{
struct str_closure m_78 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(m_78);
t = map_1_0(sl, lifted3_cl, t);
if((t == NULL))
goto label19 ;
t = n_4;
}
goto label18 ;
label19 :
t = trm12;
{
ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,i_4 = NULL,j_4 = NULL;
x_3 = t;
t = a_10;
{
ATerm trm13 = t;
t = is_list_0_0(sl, t);
if((t == NULL))
goto label21 ;
goto fail14 ;
label21 :
t = trm13;
goto label20 ;
label20 :
;
t = xtc_load_0_0(sl, t);
if((t == NULL))
goto fail14 ;
b_4 = t;
d_4 = t;
t = term27;
c_4 = t;
t = d_4;
t = lookup_table_0_1(sl, c_4, t);
if((t == NULL))
goto fail14 ;
a_4 = t;
t = b_4;
t = a_4;
v_3 = t;
{
ATerm trm14 = t;
ATerm y_3 = NULL,e_4 = NULL,f_4 = NULL;
y_3 = t;
t = v_3;
f_4 = t;
t = (ATerm) ATmakeAppl(sym_Tool_1, a_10);
e_4 = t;
t = f_4;
t = hashtable_get_0_1(sl, e_4, t);
if((t == NULL))
goto label23 ;
u_3 = t;
t = y_3;
t = u_3;
{
struct str_closure p_78 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(p_78);
t = remove_all_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto fail14 ;
{
ATerm trm16 = t;
ATerm z_3 = NULL;
z_3 = t;
{
struct str_closure q_78 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(q_78);
t = fetch_1_0(sl, lifted5_cl, t);
if((t == NULL))
goto label24 ;
t = z_3;
}
{
struct str_closure r_78 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(r_78);
t = fetch_1_0(sl, lifted6_cl, t);
if((t == NULL))
goto fail14 ;
else
goto label22 ;
}
label24 :
t = trm16;
{
ATerm g_4 = NULL,h_4 = NULL;
h_4 = t;
g_4 = t;
if(((b_10 == NULL) || (c_10 == NULL)))
goto fail14 ;
else
{
ATerm trm19;
trm19 = CheckATermList(g_4);
if((trm19 == NULL))
goto fail14 ;
t = (ATerm) ATinsert((ATermList)trm19, (ATerm) ATmakeAppl(sym__2, b_10, c_10));
goto label22 ;
}
}
}
}
label23 :
t = trm14;
if(((b_10 == NULL) || (c_10 == NULL)))
goto fail14 ;
else
{
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_10, c_10));
goto label22 ;
}
label22 :
;
w_3 = t;
t = v_3;
j_4 = t;
t = (ATerm) ATmakeAppl(sym_Tool_1, a_10);
i_4 = t;
t = j_4;
t = hashtable_put_0_2(sl, i_4, w_3, t);
if((t == NULL))
goto fail14 ;
t = x_3;
goto label18 ;
}
}
}
label18 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
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
goto fail18 ;
{
ATerm trm18 = ATgetArgument(t, 1);
}
}
else
goto fail18 ;
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail18 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), sl_readvar(1, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
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
goto fail17 ;
{
ATerm trm17 = ATgetArgument(t, 1);
}
}
else
goto fail17 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym__2))
{
ATerm trm15 = ATgetArgument(t, 0);
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(t, 1);
}
else
if((sl_readvar(1, sl) != ATgetArgument(t, 1)))
goto fail16 ;
}
else
goto fail16 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_4 = NULL;
o_4 = t;
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail15 ;
else
{
t = xtc_register_path_0_3(sl_up(sl), o_4, sl_readvar(0, sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail15 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_register_0_3 (StrSL sl, ATerm i_3, ATerm j_3, ATerm k_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_register_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, j_3);
sl_init_var(1, k_3);
{
ATerm l_3 = NULL;
l_3 = t;
t = i_3;
{
ATerm trm11 = t;
t = is_list_0_0(sl, t);
if((t == NULL))
goto label17 ;
goto label16 ;
label17 :
t = trm11;
{
ATerm n_3 = NULL,o_3 = NULL;
o_3 = t;
n_3 = t;
t = (ATerm) ATinsert(ATempty, n_3);
goto label16 ;
}
label16 :
;
{
struct str_closure l_78 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(l_78);
t = map_1_0(sl, lifted2_cl, t);
if((t == NULL))
goto fail12 ;
t = l_3;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_3 = NULL,p_3 = NULL,q_3 = NULL;
m_3 = t;
q_3 = t;
if((sl_readvar(1, sl) == NULL))
goto fail13 ;
else
{
t = (ATerm) ATmakeAppl(sym__3, sl_readvar(1, sl), term49, m_3);
}
t = conc_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail13 ;
p_3 = t;
t = q_3;
if((sl_readvar(0, sl) == NULL))
goto fail13 ;
else
{
t = xtc_register_path_0_3(sl_up(sl), m_3, sl_readvar(0, sl), p_3, t);
if((t == NULL))
goto fail13 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_register_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_register_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
t = term29;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail11 ;
m_2 = t;
q_2 = t;
t = term31;
o_2 = t;
t = q_2;
r_2 = t;
t_2 = t;
t = m_2;
v_2 = t;
t = term33;
u_2 = t;
t = v_2;
t = separate_by_0_1(sl, u_2, t);
if((t == NULL))
goto fail11 ;
s_2 = t;
t = t_2;
{
ATerm trm9;
trm9 = CheckATermList(s_2);
if((trm9 == NULL))
goto fail11 ;
t = (ATerm) ATinsert((ATermList)trm9, term35);
p_2 = t;
t = r_2;
t = log_0_2(sl, o_2, p_2, t);
if((t == NULL))
goto fail11 ;
t = term37;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail11 ;
k_2 = t;
y_2 = t;
t = term31;
w_2 = t;
t = y_2;
z_2 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, k_2), term39);
x_2 = t;
t = z_2;
t = log_0_2(sl, w_2, x_2, t);
if((t == NULL))
goto fail11 ;
{
ATerm trm10 = t;
ATerm n_2 = NULL;
n_2 = t;
t = term41;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label15 ;
t = n_2;
{
ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
t = term41;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail11 ;
j_2 = t;
c_3 = t;
t = term31;
a_3 = t;
t = c_3;
d_3 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, j_2), term43);
b_3 = t;
t = d_3;
t = log_0_2(sl, a_3, b_3, t);
if((t == NULL))
goto fail11 ;
t = xtc_register_path_0_3(sl, m_2, k_2, j_2, t);
if((t == NULL))
goto fail11 ;
else
goto label14 ;
}
label15 :
t = trm10;
{
ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL;
t = term45;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail11 ;
l_2 = t;
g_3 = t;
t = term31;
e_3 = t;
t = g_3;
h_3 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, l_2), term47);
f_3 = t;
t = h_3;
t = log_0_2(sl, e_3, f_3, t);
if((t == NULL))
goto fail11 ;
t = xtc_register_0_3(sl, m_2, k_2, l_2, t);
if((t == NULL))
goto fail11 ;
else
goto label14 ;
}
label14 :
;
t = m_2;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
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
goto fail10 ;
t = dirname_0_0(sl, t);
if((t == NULL))
goto fail10 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_find_loc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_find_loc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL;
f_2 = t;
i_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term27, (ATerm) ATmakeAppl(sym_Tool_1, f_2));
t = table_get_0_0(sl, t);
if((t == NULL))
goto fail9 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm7 = ATgetFirst((ATermList) t);
if(match_cons(trm7, sym__2))
{
g_2 = ATgetArgument(trm7, 0);
h_2 = ATgetArgument(trm7, 1);
}
else
goto fail9 ;
{
ATerm trm8 = (ATerm) ATgetNext((ATermList) t);
}
}
else
goto fail9 ;
t = i_2;
t = h_2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
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
ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL;
sl_init_var(0, c_2);
sl_init_var(1, d_2);
if(match_cons(t, sym__2))
{
b_2 = ATgetArgument(t, 0);
if((c_2 == NULL))
{
c_2 = ATgetArgument(t, 1);
}
else
if((c_2 != ATgetArgument(t, 1)))
goto fail7 ;
}
else
goto fail7 ;
e_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term27, (ATerm) ATmakeAppl(sym_Tool_1, b_2));
t = table_get_0_0(sl, t);
if((t == NULL))
goto fail7 ;
{
struct str_closure g_78 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(g_78);
t = fetch_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto fail7 ;
t = e_2;
if((d_2 == NULL))
goto fail7 ;
else
{
t = d_2;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
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
goto fail8 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(t, 1);
}
else
if((sl_readvar(1, sl) != ATgetArgument(t, 1)))
goto fail8 ;
}
else
goto fail8 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
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
goto fail6 ;
{
ATerm trm6 = t;
t = xtc_find_version_loc_0_0(sl, t);
if((t == NULL))
goto label13 ;
goto label12 ;
label13 :
t = trm6;
t = xtc_find_loc_0_0(sl, t);
if((t == NULL))
goto fail6 ;
else
goto label12 ;
label12 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_find_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_find_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_1 = NULL;
ATerm trm4 = t;
ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL;
o_1 = t;
t = xtc_load_0_0(sl, t);
if((t == NULL))
goto label9 ;
{
ATerm trm5 = t;
t = xtc_find_version_loc_0_0(sl, t);
if((t == NULL))
goto label11 ;
goto label10 ;
label11 :
t = trm5;
t = xtc_find_loc_0_0(sl, t);
if((t == NULL))
goto label9 ;
else
goto label10 ;
label10 :
;
r_1 = t;
t = term17;
p_1 = t;
t = r_1;
s_1 = t;
u_1 = t;
t_1 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_1), term19), o_1), term21);
q_1 = t;
t = s_1;
t = log_0_2(sl, p_1, q_1, t);
if((t == NULL))
goto label9 ;
}
goto label8 ;
label9 :
t = trm4;
{
ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL;
x_1 = t;
t = term9;
v_1 = t;
t = x_1;
y_1 = t;
a_2 = t;
z_1 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term23), z_1), term25);
w_1 = t;
t = y_1;
t = log_0_2(sl, v_1, w_1, t);
if((t == NULL))
goto fail5 ;
goto fail5 ;
}
label8 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
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
goto fail4 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm read_from_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "read_from_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm3 = t;
ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL;
if(match_cons(t, sym_FILE_1))
{
l_1 = ATgetArgument(t, 0);
}
else
goto label7 ;
n_1 = t;
t = l_1;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto label7 ;
m_1 = t;
t = n_1;
t = m_1;
goto label6 ;
label7 :
t = trm3;
{
ATerm j_1 = NULL,k_1 = NULL;
if(!(match_cons(t, sym_stdin_0)))
goto fail3 ;
k_1 = t;
t = term15;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto fail3 ;
j_1 = t;
t = k_1;
t = j_1;
goto label6 ;
}
label6 :
;
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
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
ATerm c_1 = NULL;
c_1 = t;
{
ATerm trm2 = t;
t = term7;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label5 ;
goto label3 ;
label5 :
t = trm2;
goto label4 ;
label4 :
;
t = c_1;
}
{
ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL;
f_1 = t;
t = term9;
d_1 = t;
t = f_1;
g_1 = t;
i_1 = t;
h_1 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term11), h_1), term13);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail2 ;
e_1 = t;
t = g_1;
t = log_0_2(sl, d_1, e_1, t);
if((t == NULL))
goto fail2 ;
else
goto label2 ;
}
label3 :
t = trm1;
goto label2 ;
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
ATerm x_0 = NULL,y_0 = NULL,a_1 = NULL,b_1 = NULL,z_0 = NULL;
b_1 = t;
t = tmpnam_0_0(sl, t);
if((t == NULL))
goto fail0 ;
a_1 = t;
t = b_1;
t = a_1;
x_0 = t;
z_0 = t;
t = (ATerm) ATmakeAppl(sym__2, x_0, term1);
t = fopen_0_0(sl, t);
if((t == NULL))
goto fail0 ;
y_0 = t;
t = (ATerm) ATmakeAppl(sym__2, x_0, term3);
{
struct str_closure f_78 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(f_78);
t = assert_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
t = y_0;
t = fclose_0_0(sl, t);
if((t == NULL))
goto fail0 ;
t = z_0;
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
