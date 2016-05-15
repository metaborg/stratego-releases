#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__3;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym__3 = ATmakeSymbol("", 3, ATfalse);
ATprotectSymbol(sym__3);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-test", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-zip-test", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeInt(3);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeInt(2);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeInt(1);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeInt(6);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeInt(5);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeInt(4);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeInt(9);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeInt(8);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeInt(7);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(sym__3, term5, term11, term17);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(sym__3, term7, term13, term19);
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(sym__3, term9, term15, term21);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-unzip-test", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm tuple_unzip_1_0 (StrSL sl, StrCL u_36, ATerm t);
ATerm tuple_zip_1_0 (StrSL sl, StrCL t_36, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL q_1, StrCL r_1, StrCL s_1, StrCL t_1, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL o_1, StrCL p_1, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
ATerm tuple_unzip_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm tuple_zip_test_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm tuple_unzip_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tuple_unzip_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_62 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(o_62);
struct str_closure p_62 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(p_62);
struct str_closure q_62 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(q_62);
struct str_closure r_62 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(r_62);
t = apply_test_4_0(sl, lifted7_cl, lifted8_cl, lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term5), term7), term9), (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term11), term13), term15), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term17), term19), term21));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term23), term25), term27);
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
{
struct str_closure n_62 = { &(_Id) , sl_up(sl) };
StrCL lifted9_cl = &(n_62);
t = tuple_unzip_1_0(sl_up(sl), lifted9_cl, t);
if((t == NULL))
goto fail10 ;
}
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
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm tuple_zip_test_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tuple_zip_test_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_62 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(j_62);
struct str_closure k_62 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(k_62);
struct str_closure l_62 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(l_62);
struct str_closure m_62 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(m_62);
t = apply_test_4_0(sl, lifted2_cl, lifted3_cl, lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto fail3 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term23), term25), term27);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term5), term7), term9), (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term11), term13), term15), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term17), term19), term21));
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
struct str_closure i_62 = { &(_Id) , sl_up(sl) };
StrCL lifted4_cl = &(i_62);
t = tuple_zip_1_0(sl_up(sl), lifted4_cl, t);
if((t == NULL))
goto fail5 ;
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
struct str_closure g_62 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(g_62);
struct str_closure h_62 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(h_62);
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
t = tuple_zip_test_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = tuple_unzip_test_0_0(sl_up(sl), t);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 17));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(tuple_unzip_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tuple_unzip_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(tuple_zip_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tuple_zip_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_test_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_test_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_suite_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_suite_2_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(tuple_unzip_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tuple_unzip_test_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(tuple_zip_test_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("tuple_zip_test_0_0", 0, ATtrue)), &(closures[closures_index]));
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
