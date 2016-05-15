#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_module_3;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_unparameterized_1;
static Symbol sym_parameterized_2;
static Symbol sym_definition_1;
static void init_module_constructors (void)
{
sym_module_3 = ATmakeSymbol("module", 3, ATfalse);
ATprotectSymbol(sym_module_3);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_unparameterized_1 = ATmakeSymbol("unparameterized", 1, ATfalse);
ATprotectSymbol(sym_unparameterized_1);
sym_parameterized_2 = ATmakeSymbol("parameterized", 2, ATfalse);
ATprotectSymbol(sym_parameterized_2);
sym_definition_1 = ATmakeSymbol("definition", 1, ATfalse);
ATprotectSymbol(sym_definition_1);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("sglri", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-desugar", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.baf", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("core-sdf-parenthesize", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("-d", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("-d dir    Destination directory", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("SDF", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeInt(0);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdf", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("mkdir", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm separate_by_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL w_58, ATerm t);
ATerm dirname_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL m_22, StrCL n_22, StrCL o_22, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm readdir_0_0 (StrSL sl, ATerm t);
ATerm call_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_2_0 (StrSL sl, StrCL t_15, StrCL u_15, ATerm t);
ATerm xtc_exit_0_0 (StrSL sl, ATerm t);
ATerm xtc_temp_files_1_0 (StrSL sl, StrCL o_15, ATerm t);
ATerm copy_to_1_0 (StrSL sl, StrCL n_15, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL t_14, StrCL u_14, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm shell_mkdir_0_0 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
ATerm save_sdf_module_to_file_0_0 (StrSL sl, ATerm t);
ATerm unpack_sdf_0_0 (StrSL sl, ATerm t);
ATerm get_destination_dir_0_0 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
ATerm unpack_sdf_options_0_0 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm xtc_pp_sdf2_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm xtc_parse_sdf2_0_1 (StrSL sl, ATerm n_7, ATerm t);
ATerm add_arg_flags_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
ATerm xtc_sglri_0_2 (StrSL sl, ATerm s_6, ATerm t_6, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm xtc_ast2abox_1_0 (StrSL sl, StrCL o_5, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_102 = { &(unpack_sdf_options_0_0) , sl };
StrCL lifted20_cl = &(q_102);
struct str_closure r_102 = { &(unpack_sdf_0_0) , sl };
StrCL lifted21_cl = &(r_102);
t = xtc_io_wrap_2_0(sl, lifted20_cl, lifted21_cl, t);
if((t == NULL))
goto fail24 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
ATerm shell_mkdir_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "shell_mkdir_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_8 = NULL;
f_8 = t;
{
ATerm trm11 = t;
t = readdir_0_0(sl, t);
if((t == NULL))
goto label7 ;
goto label6 ;
label7 :
t = trm11;
{
ATerm g_8 = NULL,h_8 = NULL;
h_8 = t;
g_8 = t;
t = (ATerm) ATmakeAppl(sym__2, term37, (ATerm) ATinsert(ATinsert(ATempty, g_8), term5));
t = call_0_0(sl, t);
if((t == NULL))
goto fail23 ;
else
goto label6 ;
}
label6 :
;
t = f_8;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm save_sdf_module_to_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "save_sdf_module_to_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,p_101 = NULL;
sl_init_var(0, w_7);
sl_init_var(1, x_7);
{
struct str_closure p_102 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(p_102);
y_7 = t;
if(match_cons(t, sym_module_3))
{
p_101 = ATgetArgument(t, 0);
{
ATerm trm7 = ATgetArgument(t, 1);
}
{
ATerm trm8 = ATgetArgument(t, 2);
}
}
else
goto fail20 ;
t = p_101;
{
ATerm trm9 = t;
ATerm q_101 = NULL;
if(match_cons(t, sym_unparameterized_1))
{
q_101 = ATgetArgument(t, 0);
}
else
goto label5 ;
t = q_101;
goto label4 ;
label5 :
t = trm9;
{
ATerm r_101 = NULL;
if(match_cons(t, sym_parameterized_2))
{
r_101 = ATgetArgument(t, 0);
{
ATerm trm10 = ATgetArgument(t, 1);
}
}
else
goto fail20 ;
t = r_101;
goto label4 ;
}
label4 :
;
if((w_7 == NULL))
{
w_7 = t;
}
else
if((w_7 != t))
goto fail20 ;
t = y_7;
t = xtc_temp_files_1_0(sl, lifted18_cl, t);
if((t == NULL))
goto fail20 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
struct str_closure o_102 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(o_102);
t = write_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail21 ;
t = xtc_pp_sdf2_0_0(sl_up(sl), t);
if((t == NULL))
goto fail21 ;
z_7 = t;
b_8 = t;
t = get_destination_dir_0_0(sl_up(sl), t);
if((t == NULL))
goto fail21 ;
a_8 = t;
t = b_8;
if((sl_readvar(0, sl) == NULL))
goto fail21 ;
else
{
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term33), sl_readvar(0, sl)), term35), a_8);
}
t = concat_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail21 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail21 ;
t = dirname_0_0(sl_up(sl), t);
if((t == NULL))
goto fail21 ;
t = shell_mkdir_0_0(sl_up(sl), t);
if((t == NULL))
goto fail21 ;
t = z_7;
t = copy_to_1_0(sl_up(sl), lifted19_cl, t);
if((t == NULL))
goto fail21 ;
}
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
if((sl_readvar(1, sl_up(sl)) == NULL))
goto fail22 ;
else
{
t = sl_readvar(1, sl_up(sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm unpack_sdf_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "unpack_sdf_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL;
g_101 = t;
t = term29;
f_101 = t;
t = g_101;
t = xtc_parse_sdf2_0_1(sl, f_101, t);
if((t == NULL))
goto fail19 ;
t = read_from_0_0(sl, t);
if((t == NULL))
goto fail19 ;
{
ATerm trm6;
trm6 = (ATerm) ATgetAnnotations(t);
if((trm6 == NULL))
trm6 = (ATerm) ATempty;
if(match_cons(t, sym_definition_1))
{
i_101 = ATgetArgument(t, 0);
}
else
goto fail19 ;
h_101 = trm6;
t = i_101;
{
struct str_closure n_102 = { &(save_sdf_module_to_file_0_0) , sl };
StrCL lifted17_cl = &(n_102);
t = map_1_0(sl, lifted17_cl, t);
if((t == NULL))
goto fail19 ;
j_101 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_definition_1, j_101), h_101);
t = term31;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto fail19 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_destination_dir_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_destination_dir_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm5 = t;
t = term23;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label3 ;
goto label2 ;
label3 :
t = trm5;
t = term27;
goto label2 ;
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm unpack_sdf_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "unpack_sdf_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_102 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(j_102);
struct str_closure k_102 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(k_102);
struct str_closure m_102 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(m_102);
t = ArgOption_3_0(sl, lifted14_cl, lifted15_cl, lifted16_cl, t);
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
t = term25;
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
ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
t_7 = t;
v_7 = t;
u_7 = t;
t = (ATerm) ATmakeAppl(sym__2, term23, u_7);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail16 ;
t = t_7;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-d", 0, ATtrue))))
goto fail15 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_pp_sdf2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_pp_sdf2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_102 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(c_102);
struct str_closure d_102 = { &(pass_verbose_0_0) , sl };
StrCL lifted13_cl = &(d_102);
struct str_closure e_102 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(e_102);
struct str_closure f_102 = { &(pass_verbose_0_0) , sl };
StrCL lifted8_cl = &(f_102);
t = xtc_transform_2_0(sl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail9 ;
{
struct str_closure g_102 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(g_102);
struct str_closure h_102 = { &(pass_verbose_0_0) , sl };
StrCL lifted10_cl = &(h_102);
t = xtc_transform_2_0(sl, lifted9_cl, lifted10_cl, t);
if((t == NULL))
goto fail9 ;
{
struct str_closure i_102 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(i_102);
t = xtc_ast2abox_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto fail9 ;
t = xtc_transform_2_0(sl, lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto fail9 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term21);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term17;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_parse_sdf2_0_1 (StrSL sl, ATerm n_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_parse_sdf2_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_7 = NULL,p_7 = NULL;
struct str_closure z_101 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(z_101);
struct str_closure a_102 = { &(pass_verbose_0_0) , sl };
StrCL lifted6_cl = &(a_102);
p_7 = t;
t = term13;
o_7 = t;
t = p_7;
t = xtc_sglri_0_2(sl, o_7, n_7, t);
if((t == NULL))
goto fail7 ;
t = xtc_transform_2_0(sl, lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto fail7 ;
}
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
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm add_arg_flags_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "add_arg_flags_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
if(match_cons(t, sym__2))
{
ATerm trm2 = ATgetArgument(t, 0);
ATerm trm3 = ATgetArgument(t, 1);
if(!(((ATgetType(trm3) == AT_LIST) && ATisEmpty(trm3))))
goto label1 ;
}
else
goto label1 ;
t = (ATerm) ATempty;
goto label0 ;
label1 :
t = trm1;
{
ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL;
if(match_cons(t, sym__2))
{
y_6 = ATgetArgument(t, 0);
z_6 = ATgetArgument(t, 1);
}
else
goto fail6 ;
b_7 = t;
t = z_6;
d_7 = t;
c_7 = t;
t = (ATerm) ATmakeAppl(sym__2, y_6, c_7);
t = separate_by_0_0(sl, t);
if((t == NULL))
goto fail6 ;
a_7 = t;
t = b_7;
{
ATerm trm4;
trm4 = CheckATermList(a_7);
if((trm4 == NULL))
goto fail6 ;
t = (ATerm) ATinsert((ATermList)trm4, y_6);
goto label0 ;
}
}
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_sglri_0_2 (StrSL sl, ATerm s_6, ATerm t_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_sglri_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, s_6);
sl_init_var(1, t_6);
{
struct str_closure x_101 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(x_101);
struct str_closure y_101 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(y_101);
t = xtc_transform_2_0(sl, lifted3_cl, lifted4_cl, t);
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
{
ATerm u_6 = NULL,w_6 = NULL,v_6 = NULL,x_6 = NULL;
w_6 = t;
if((sl_readvar(0, sl) == NULL))
goto fail5 ;
else
{
t = sl_readvar(0, sl);
}
t = xtc_find_0_0(sl_up(sl), t);
if((t == NULL))
goto fail5 ;
u_6 = t;
t = w_6;
x_6 = t;
t = term3;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail5 ;
v_6 = t;
t = x_6;
if((sl_readvar(1, sl) == NULL))
goto fail5 ;
else
{
ATerm trm0;
trm0 = CheckATermList(v_6);
if((trm0 == NULL))
goto fail5 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm0, sl_readvar(1, sl)), term9), u_6), term5);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_ast2abox_1_0 (StrSL sl, StrCL o_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_ast2abox_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, o_5);
{
struct str_closure v_101 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(v_101);
struct str_closure w_101 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(w_101);
t = xtc_transform_2_0(sl, lifted0_cl, lifted1_cl, t);
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
{
ATerm p_5 = NULL,r_5 = NULL,q_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL;
r_5 = t;
t = term3;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
p_5 = t;
t = r_5;
s_5 = t;
t = term3;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail2 ;
{
struct str_closure u_101 = { &(xtc_find_0_0) , sl_up(sl) };
StrCL lifted2_cl = &(u_101);
t = map_1_0(sl_up(sl), lifted2_cl, t);
if((t == NULL))
goto fail2 ;
u_5 = t;
t_5 = t;
t = (ATerm) ATmakeAppl(sym__2, term5, t_5);
t = add_arg_flags_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
q_5 = t;
t = s_5;
t = (ATerm) ATmakeAppl(sym__2, p_5, q_5);
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
}
}
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 44));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(separate_by_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("separate_by_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dirname_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dirname_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(readdir_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("readdir_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(call_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("call_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_temp_files_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_temp_files_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(copy_to_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("copy_to_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_to_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_find_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_find_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(shell_mkdir_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("shell_mkdir_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(save_sdf_module_to_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("save_sdf_module_to_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(unpack_sdf_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("unpack_sdf_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_destination_dir_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_destination_dir_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(unpack_sdf_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("unpack_sdf_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_pp_sdf2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_pp_sdf2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_parse_sdf2_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_parse_sdf2_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_arg_flags_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_arg_flags_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_sglri_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_sglri_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_ast2abox_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_ast2abox_1_0", 0, ATtrue)), &(closures[closures_index]));
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
