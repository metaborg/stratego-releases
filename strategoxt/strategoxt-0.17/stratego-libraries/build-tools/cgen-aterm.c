#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_FunctionName_0;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym_FunctionName_0 = ATmakeSymbol("FunctionName", 0, ATfalse);
ATprotectSymbol(sym_FunctionName_0);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
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
term0 = (ATerm) ATmakeInt(15);
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(sym_FunctionName_0);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("--name           Function name for getting the ATerm", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym__2, term7, term9);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("error: option --name is required", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("_0_0(ATerm t) {\n  static ATerm result = NULL;\n  static char parsetable[] = {\n    ", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n#include <aterm1.h>\n\nATerm ", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol(");\n    if(result != NULL) {\n      ATprotect(&result);\n    }\n  }\n  return result;\n}\n", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("\n  0 };\n\n  if(result == NULL) {\n      result = ATreadFromSharedString(parsetable, ", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol(",", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm splitmap_1_1 (StrSL sl, StrCL x_44, ATerm w_44, ATerm t);
ATerm length_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL m_42, ATerm t);
ATerm Snd_0_0 (StrSL sl, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL t_20, ATerm t);
ATerm fputs_0_0 (StrSL sl, ATerm t);
ATerm stdout_stream_0_0 (StrSL sl, ATerm t);
ATerm write_to_shared_string_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm input_wrap_2_0 (StrSL sl, StrCL s_9, StrCL t_9, ATerm t);
ATerm OptionOneCheck_1_0 (StrSL sl, StrCL n_8, ATerm t);
ATerm OptionCheck_2_1 (StrSL sl, StrCL i_8, StrCL j_8, ATerm h_8, ATerm t);
ATerm OptionHandler_1_0 (StrSL sl, StrCL d_8, ATerm t);
ATerm ArgOption_2_1 (StrSL sl, StrCL z_7, StrCL a_8, ATerm y_7, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
ATerm fputstrings_0_0 (StrSL sl, ATerm t);
ATerm print_elem_0_0 (StrSL sl, ATerm t);
ATerm print_newline_0_0 (StrSL sl, ATerm t);
ATerm print_footer_0_1 (StrSL sl, ATerm y_0, ATerm t);
ATerm print_header_0_1 (StrSL sl, ATerm s_0, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm functionname_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
ATerm main_cgen_aterm_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_cgen_aterm_0_0(sl, t);
if((t == NULL))
goto fail16 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm fputstrings_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fputstrings_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm n_1 = NULL,o_1 = NULL;
sl_init_var(0, o_1);
{
struct str_closure j_64 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(j_64);
if(match_cons(t, sym__2))
{
n_1 = ATgetArgument(t, 0);
if((o_1 == NULL))
{
o_1 = ATgetArgument(t, 1);
}
else
if((o_1 != ATgetArgument(t, 1)))
goto fail14 ;
}
else
goto fail14 ;
t = n_1;
t = map_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto fail14 ;
}
}
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
{
ATerm p_1 = NULL,q_1 = NULL;
q_1 = t;
p_1 = t;
if((sl_readvar(0, sl) == NULL))
goto fail15 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, p_1, sl_readvar(0, sl));
}
t = fputs_0_0(sl_up(sl), t);
if((t == NULL))
goto fail15 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm print_elem_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "print_elem_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_1 = NULL,j_1 = NULL,i_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL;
j_1 = t;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail13 ;
h_1 = t;
t = j_1;
k_1 = t;
t = stdout_stream_0_0(sl, t);
if((t == NULL))
goto fail13 ;
i_1 = t;
t = k_1;
t = (ATerm) ATmakeAppl(sym__2, h_1, i_1);
t = fputs_0_0(sl, t);
if((t == NULL))
goto fail13 ;
m_1 = t;
t = stdout_stream_0_0(sl, t);
if((t == NULL))
goto fail13 ;
l_1 = t;
t = m_1;
t = (ATerm) ATmakeAppl(sym__2, term25, l_1);
t = fputs_0_0(sl, t);
if((t == NULL))
goto fail13 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
ATerm print_newline_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "print_newline_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_1 = NULL,f_1 = NULL,g_1 = NULL;
e_1 = t;
g_1 = t;
t = stdout_stream_0_0(sl, t);
if((t == NULL))
goto fail12 ;
f_1 = t;
t = g_1;
t = (ATerm) ATmakeAppl(sym__2, term23, f_1);
t = fputs_0_0(sl, t);
if((t == NULL))
goto fail12 ;
t = e_1;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
ATerm print_footer_0_1 (StrSL sl, ATerm y_0, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "print_footer_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_0 = NULL,a_1 = NULL,c_1 = NULL,b_1 = NULL,d_1 = NULL;
z_0 = t;
c_1 = t;
t = y_0;
t = length_0_0(sl, t);
if((t == NULL))
goto fail11 ;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail11 ;
a_1 = t;
t = c_1;
d_1 = t;
t = stdout_stream_0_0(sl, t);
if((t == NULL))
goto fail11 ;
b_1 = t;
t = d_1;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term19), a_1), term21), b_1);
t = fputstrings_0_0(sl, t);
if((t == NULL))
goto fail11 ;
t = z_0;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm print_header_0_1 (StrSL sl, ATerm s_0, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "print_header_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_0 = NULL,u_0 = NULL,w_0 = NULL,v_0 = NULL,x_0 = NULL;
t_0 = t;
w_0 = t;
t = term3;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail10 ;
u_0 = t;
t = w_0;
x_0 = t;
t = stdout_stream_0_0(sl, t);
if((t == NULL))
goto fail10 ;
v_0 = t;
t = x_0;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term15), u_0), term17), v_0);
t = fputstrings_0_0(sl, t);
if((t == NULL))
goto fail10 ;
t = t_0;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm functionname_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "functionname_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
ATerm m_0 = NULL,n_0 = NULL;
struct str_closure e_64 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(e_64);
struct str_closure f_64 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(f_64);
n_0 = t;
t = term5;
m_0 = t;
t = n_0;
t = ArgOption_2_1(sl, lifted5_cl, lifted6_cl, m_0, t);
if((t == NULL))
goto label3 ;
goto label2 ;
label3 :
t = trm1;
{
ATerm q_0 = NULL,r_0 = NULL;
struct str_closure h_64 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(h_64);
struct str_closure i_64 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(i_64);
r_0 = t;
t = term13;
q_0 = t;
t = r_0;
t = OptionCheck_2_1(sl, lifted8_cl, lifted9_cl, q_0, t);
if((t == NULL))
goto fail3 ;
else
goto label2 ;
}
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_64 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(g_64);
t = OptionOneCheck_1_0(sl_up(sl), lifted10_cl, t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--name", 0, ATtrue))))
goto fail9 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail7 ;
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
{
struct str_closure d_64 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(d_64);
t = OptionHandler_1_0(sl_up(sl), lifted7_cl, t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_0 = NULL,p_0 = NULL;
p_0 = t;
o_0 = t;
t = (ATerm) ATmakeAppl(sym__2, term3, o_0);
t = set_config_0_0(sl_up(sl_up(sl)), t);
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
if(!((ATgetSymbol(t) == ATmakeSymbol("--name", 0, ATtrue))))
goto fail4 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_cgen_aterm_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_cgen_aterm_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm f_0 = NULL;
sl_init_var(0, f_0);
{
struct str_closure b_64 = { &(functionname_option_0_0) , sl };
StrCL lifted0_cl = &(b_64);
struct str_closure c_64 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(c_64);
t = input_wrap_2_0(sl, lifted0_cl, lifted1_cl, t);
if((t == NULL))
goto fail0 ;
}
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
ATerm i_0 = NULL,j_0 = NULL,g_0 = NULL,h_0 = NULL;
j_0 = t;
t = write_to_shared_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail1 ;
i_0 = t;
t = j_0;
t = i_0;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail1 ;
g_0 = t;
if((sl_readvar(0, sl) == NULL))
goto fail1 ;
else
{
t = print_header_0_1(sl_up(sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail1 ;
}
t = g_0;
{
struct str_closure a_64 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(a_64);
t = repeat_1_0(sl_up(sl), lifted2_cl, t);
if((t == NULL))
goto fail1 ;
h_0 = t;
if((sl_readvar(0, sl) == NULL))
goto fail1 ;
else
{
t = print_footer_0_1(sl_up(sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail1 ;
}
t = h_0;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
ATerm k_0 = NULL,l_0 = NULL;
l_0 = t;
t = term1;
k_0 = t;
t = l_0;
{
struct str_closure y_63 = { &(print_elem_0_0) , sl_up(sl_up(sl)) };
StrCL lifted3_cl = &(y_63);
t = splitmap_1_1(sl_up(sl_up(sl)), lifted3_cl, k_0, t);
if((t == NULL))
goto label1 ;
t = print_newline_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label1 ;
t = Snd_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label1 ;
}
goto label0 ;
label1 :
t = trm0;
{
struct str_closure z_63 = { &(print_elem_0_0) , sl_up(sl_up(sl)) };
StrCL lifted4_cl = &(z_63);
t = map_1_0(sl_up(sl_up(sl)), lifted4_cl, t);
if((t == NULL))
goto fail2 ;
goto fail2 ;
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
static void register_strategies (void)
{
int initial_size = 117;
int max_load = 75;
struct str_closure * closures;
int closures_index = 0;
if((strategy_table == NULL))
strategy_table = ATtableCreate(initial_size, max_load);
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 33));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(splitmap_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("splitmap_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(length_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("length_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Snd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Snd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(repeat_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repeat_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fputs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fputs_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(stdout_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("stdout_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_to_shared_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_shared_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(input_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("input_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(OptionOneCheck_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("OptionOneCheck_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(OptionCheck_2_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("OptionCheck_2_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(OptionHandler_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("OptionHandler_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_2_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_2_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fputstrings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fputstrings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(print_elem_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("print_elem_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(print_newline_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("print_newline_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(print_footer_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("print_footer_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(print_header_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("print_header_0_1", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(functionname_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("functionname_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_cgen_aterm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_cgen_aterm_0_0", 0, ATtrue)), &(closures[closures_index]));
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
