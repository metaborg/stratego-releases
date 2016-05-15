#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("\"\"", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("\"a\"", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("\"abc\"", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("[]", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("[1]", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("[1, 2, 3]", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("(1)", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("(1, 2)", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("(1, 2, 3)", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo{}", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo{1}", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo{1, 2}", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo{1, 2, 3}", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("Roundtrip test ", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("explode-implode tests", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm read_from_string_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm general_options_0_0 (StrSL sl, ATerm t);
ATerm option_wrap_2_0 (StrSL sl, StrCL v_11, StrCL w_11, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL i_4, StrCL j_4, StrCL k_4, StrCL l_4, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL g_4, StrCL h_4, ATerm t);
ATerm implode_aterm_0_0 (StrSL sl, ATerm t);
ATerm explode_aterm_0_0 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm roundtrip_test_0_1 (StrSL sl, ATerm g_1, ATerm t);
ATerm roundtrip_tests_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_67 = { &(general_options_0_0) , sl };
StrCL lifted4_cl = &(v_67);
struct str_closure w_67 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(w_67);
t = option_wrap_2_0(sl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto fail6 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_67 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(t_67);
struct str_closure u_67 = { &(roundtrip_tests_0_0) , sl_up(sl) };
StrCL lifted7_cl = &(u_67);
t = test_suite_2_0(sl_up(sl), lifted6_cl, lifted7_cl, t);
if((t == NULL))
goto fail7 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term35;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm roundtrip_test_0_1 (StrSL sl, ATerm g_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "roundtrip_test_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, g_1);
{
struct str_closure n_67 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(n_67);
struct str_closure q_67 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(q_67);
struct str_closure r_67 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(r_67);
struct str_closure s_67 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(s_67);
t = apply_test_4_0(sl, lifted0_cl, lifted1_cl, lifted2_cl, lifted3_cl, t);
if((t == NULL))
goto fail1 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
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
t = sl_readvar(0, sl);
}
t = read_from_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail5 ;
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
if((sl_readvar(0, sl) == NULL))
goto fail4 ;
else
{
t = sl_readvar(0, sl);
}
t = read_from_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail4 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = explode_aterm_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
t = implode_aterm_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
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
if((sl_readvar(0, sl) == NULL))
goto fail2 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term33, sl_readvar(0, sl));
}
t = conc_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
ATerm roundtrip_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "roundtrip_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,d_0 = NULL,e_0 = NULL,f_0 = NULL,g_0 = NULL,h_0 = NULL,i_0 = NULL,j_0 = NULL,k_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL;
b_0 = t;
t = term1;
a_0 = t;
t = b_0;
t = roundtrip_test_0_1(sl, a_0, t);
if((t == NULL))
goto fail0 ;
d_0 = t;
t = term3;
c_0 = t;
t = d_0;
t = roundtrip_test_0_1(sl, c_0, t);
if((t == NULL))
goto fail0 ;
f_0 = t;
t = term5;
e_0 = t;
t = f_0;
t = roundtrip_test_0_1(sl, e_0, t);
if((t == NULL))
goto fail0 ;
h_0 = t;
t = term7;
g_0 = t;
t = h_0;
t = roundtrip_test_0_1(sl, g_0, t);
if((t == NULL))
goto fail0 ;
j_0 = t;
t = term9;
i_0 = t;
t = j_0;
t = roundtrip_test_0_1(sl, i_0, t);
if((t == NULL))
goto fail0 ;
l_0 = t;
t = term11;
k_0 = t;
t = l_0;
t = roundtrip_test_0_1(sl, k_0, t);
if((t == NULL))
goto fail0 ;
n_0 = t;
t = term13;
m_0 = t;
t = n_0;
t = roundtrip_test_0_1(sl, m_0, t);
if((t == NULL))
goto fail0 ;
p_0 = t;
t = term15;
o_0 = t;
t = p_0;
t = roundtrip_test_0_1(sl, o_0, t);
if((t == NULL))
goto fail0 ;
r_0 = t;
t = term17;
q_0 = t;
t = r_0;
t = roundtrip_test_0_1(sl, q_0, t);
if((t == NULL))
goto fail0 ;
t_0 = t;
t = term19;
s_0 = t;
t = t_0;
t = roundtrip_test_0_1(sl, s_0, t);
if((t == NULL))
goto fail0 ;
v_0 = t;
t = term21;
u_0 = t;
t = v_0;
t = roundtrip_test_0_1(sl, u_0, t);
if((t == NULL))
goto fail0 ;
x_0 = t;
t = term23;
w_0 = t;
t = x_0;
t = roundtrip_test_0_1(sl, w_0, t);
if((t == NULL))
goto fail0 ;
z_0 = t;
t = term25;
y_0 = t;
t = z_0;
t = roundtrip_test_0_1(sl, y_0, t);
if((t == NULL))
goto fail0 ;
b_1 = t;
t = term27;
a_1 = t;
t = b_1;
t = roundtrip_test_0_1(sl, a_1, t);
if((t == NULL))
goto fail0 ;
d_1 = t;
t = term29;
c_1 = t;
t = d_1;
t = roundtrip_test_0_1(sl, c_1, t);
if((t == NULL))
goto fail0 ;
f_1 = t;
t = term31;
e_1 = t;
t = f_1;
t = roundtrip_test_0_1(sl, e_1, t);
if((t == NULL))
goto fail0 ;
}
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 17));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(read_from_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(general_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("general_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(option_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("option_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_test_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_test_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_suite_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_suite_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(implode_aterm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implode_aterm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(explode_aterm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("explode_aterm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(roundtrip_test_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("roundtrip_test_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(roundtrip_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("roundtrip_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
