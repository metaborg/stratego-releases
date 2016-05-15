#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_variables_1;
static Symbol sym_lexical_variables_1;
static Symbol sym_priorities_1;
static Symbol sym_lexical_priorities_1;
static Symbol sym_context_free_priorities_1;
static Symbol sym_label_2;
static Symbol sym_empty_0;
static Symbol sym_cf_1;
static Symbol sym_lex_1;
static Symbol sym_opt_1;
static Symbol sym_alt_2;
static Symbol sym_seq_2;
static Symbol sym_sort_1;
static Symbol sym_iter_1;
static Symbol sym_iter_star_1;
static Symbol sym_iter_sep_2;
static Symbol sym_iter_star_sep_2;
static Symbol sym_func_2;
static Symbol sym_prod_3;
static Symbol sym_lit_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym_variables_1 = ATmakeSymbol("variables", 1, ATfalse);
ATprotectSymbol(sym_variables_1);
sym_lexical_variables_1 = ATmakeSymbol("lexical-variables", 1, ATfalse);
ATprotectSymbol(sym_lexical_variables_1);
sym_priorities_1 = ATmakeSymbol("priorities", 1, ATfalse);
ATprotectSymbol(sym_priorities_1);
sym_lexical_priorities_1 = ATmakeSymbol("lexical-priorities", 1, ATfalse);
ATprotectSymbol(sym_lexical_priorities_1);
sym_context_free_priorities_1 = ATmakeSymbol("context-free-priorities", 1, ATfalse);
ATprotectSymbol(sym_context_free_priorities_1);
sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
ATprotectSymbol(sym_label_2);
sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
ATprotectSymbol(sym_empty_0);
sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
ATprotectSymbol(sym_cf_1);
sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
ATprotectSymbol(sym_lex_1);
sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
ATprotectSymbol(sym_opt_1);
sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
ATprotectSymbol(sym_alt_2);
sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
ATprotectSymbol(sym_seq_2);
sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
ATprotectSymbol(sym_sort_1);
sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
ATprotectSymbol(sym_iter_1);
sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
ATprotectSymbol(sym_iter_star_1);
sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
ATprotectSymbol(sym_iter_sep_2);
sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
ATprotectSymbol(sym_iter_star_sep_2);
sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
ATprotectSymbol(sym_func_2);
sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
ATprotectSymbol(sym_prod_3);
sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
ATprotectSymbol(sym_lit_1);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("Labels not unique in production: ", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm at_end_1_0 (StrSL sl, StrCL a_59, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL n_58, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL t_57, ATerm t);
ATerm uniq_0_0 (StrSL sl, ATerm t);
ATerm if_2_0 (StrSL sl, StrCL z_38, StrCL a_39, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL y_38, ATerm t);
ATerm alltd_1_0 (StrSL sl, StrCL k_33, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL q_29, ATerm t);
ATerm to_lower_0_0 (StrSL sl, ATerm t);
ATerm is_alphanum_0_0 (StrSL sl, ATerm t);
ATerm double_quote_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm explode_string_0_0 (StrSL sl, ATerm t);
ATerm implode_string_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_1_0 (StrSL sl, StrCL a_24, ATerm t);
ATerm label_2_0 (StrSL sl, StrCL v_14, StrCL w_14, ATerm t);
ATerm prod_3_0 (StrSL sl, StrCL m_11, StrCL n_11, StrCL o_11, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm is_sdf_keyword_0_0 (StrSL sl, ATerm t);
ATerm lcHd_0_0 (StrSL sl, ATerm t);
ATerm symbol2label_0_0 (StrSL sl, ATerm t);
ATerm sortname2label_0_0 (StrSL sl, ATerm t);
ATerm label_symbol_0_0 (StrSL sl, ATerm t);
ATerm contains_doubles_0_0 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
ATerm warn_if_labels_not_unique_0_0 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm label_production_0_0 (StrSL sl, ATerm t);
ATerm toAlphaNumFancy_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm q_7 (StrSL sl, ATerm t);
ATerm Sym2Strs_p__0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm sym2str_p__0_0 (StrSL sl, ATerm t);
ATerm label_2_0 (StrSL sl, StrCL v_14, StrCL w_14, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "label_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_97 = NULL,d_97 = NULL,e_97 = NULL,g_97 = NULL,h_97 = NULL;
ATerm trm100;
trm100 = (ATerm) ATgetAnnotations(t);
if((trm100 == NULL))
trm100 = (ATerm) ATempty;
if(match_cons(t, sym_label_2))
{
d_97 = ATgetArgument(t, 0);
e_97 = ATgetArgument(t, 1);
}
else
goto fail27 ;
f_97 = trm100;
t = d_97;
t = cl_fun(v_14)(cl_sl(v_14), t);
if((t == NULL))
goto fail27 ;
g_97 = t;
t = e_97;
t = cl_fun(w_14)(cl_sl(w_14), t);
if((t == NULL))
goto fail27 ;
h_97 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_label_2, g_97, h_97), f_97);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
ATerm prod_3_0 (StrSL sl, StrCL m_11, StrCL n_11, StrCL o_11, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prod_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL,u_85 = NULL,g_86 = NULL,h_86 = NULL;
ATerm trm99;
trm99 = (ATerm) ATgetAnnotations(t);
if((trm99 == NULL))
trm99 = (ATerm) ATempty;
if(match_cons(t, sym_prod_3))
{
q_85 = ATgetArgument(t, 0);
r_85 = ATgetArgument(t, 1);
s_85 = ATgetArgument(t, 2);
}
else
goto fail26 ;
t_85 = trm99;
t = q_85;
t = cl_fun(m_11)(cl_sl(m_11), t);
if((t == NULL))
goto fail26 ;
u_85 = t;
t = r_85;
t = cl_fun(n_11)(cl_sl(n_11), t);
if((t == NULL))
goto fail26 ;
g_86 = t;
t = s_85;
t = cl_fun(o_11)(cl_sl(o_11), t);
if((t == NULL))
goto fail26 ;
h_86 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_prod_3, u_85, g_86, h_86), t_85);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_105 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(z_105);
t = io_wrap_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto fail23 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_105 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(y_105);
t = alltd_1_0(sl_up(sl), lifted17_cl, t);
if((t == NULL))
goto fail24 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm89 = t;
ATerm trm90 = t;
ATerm m_104 = NULL,n_104 = NULL,o_104 = NULL;
ATerm trm91;
trm91 = (ATerm) ATgetAnnotations(t);
if((trm91 == NULL))
trm91 = (ATerm) ATempty;
if(match_cons(t, sym_priorities_1))
{
n_104 = ATgetArgument(t, 0);
}
else
goto label98 ;
m_104 = trm91;
t = n_104;
o_104 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_priorities_1, o_104), m_104);
goto label97 ;
label98 :
t = trm90;
{
ATerm trm92 = t;
ATerm q_104 = NULL,r_104 = NULL,s_104 = NULL;
ATerm trm93;
trm93 = (ATerm) ATgetAnnotations(t);
if((trm93 == NULL))
trm93 = (ATerm) ATempty;
if(match_cons(t, sym_context_free_priorities_1))
{
r_104 = ATgetArgument(t, 0);
}
else
goto label99 ;
q_104 = trm93;
t = r_104;
s_104 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_context_free_priorities_1, s_104), q_104);
goto label97 ;
label99 :
t = trm92;
{
ATerm trm94 = t;
ATerm u_104 = NULL,v_104 = NULL,w_104 = NULL;
ATerm trm95;
trm95 = (ATerm) ATgetAnnotations(t);
if((trm95 == NULL))
trm95 = (ATerm) ATempty;
if(match_cons(t, sym_lexical_priorities_1))
{
v_104 = ATgetArgument(t, 0);
}
else
goto label100 ;
u_104 = trm95;
t = v_104;
w_104 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lexical_priorities_1, w_104), u_104);
goto label97 ;
label100 :
t = trm94;
{
ATerm trm96 = t;
ATerm y_104 = NULL,z_104 = NULL,a_105 = NULL;
ATerm trm97;
trm97 = (ATerm) ATgetAnnotations(t);
if((trm97 == NULL))
trm97 = (ATerm) ATempty;
if(match_cons(t, sym_variables_1))
{
z_104 = ATgetArgument(t, 0);
}
else
goto label101 ;
y_104 = trm97;
t = z_104;
a_105 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_variables_1, a_105), y_104);
goto label97 ;
label101 :
t = trm96;
{
ATerm c_105 = NULL,d_105 = NULL,e_105 = NULL;
ATerm trm98;
trm98 = (ATerm) ATgetAnnotations(t);
if((trm98 == NULL))
trm98 = (ATerm) ATempty;
if(match_cons(t, sym_lexical_variables_1))
{
d_105 = ATgetArgument(t, 0);
}
else
goto label96 ;
c_105 = trm98;
t = d_105;
e_105 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lexical_variables_1, e_105), c_105);
goto label97 ;
}
}
}
}
label97 :
;
goto label95 ;
label96 :
t = trm89;
t = label_production_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail25 ;
else
goto label95 ;
label95 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_sdf_keyword_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_sdf_keyword_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm71 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("aliases", 0, ATtrue))))
goto label77 ;
goto label76 ;
label77 :
t = trm71;
{
ATerm trm72 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("lexical", 0, ATtrue))))
goto label78 ;
goto label76 ;
label78 :
t = trm72;
{
ATerm trm73 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("priorities", 0, ATtrue))))
goto label79 ;
goto label76 ;
label79 :
t = trm73;
{
ATerm trm74 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("context-free", 0, ATtrue))))
goto label80 ;
goto label76 ;
label80 :
t = trm74;
{
ATerm trm75 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("definition", 0, ATtrue))))
goto label81 ;
goto label76 ;
label81 :
t = trm75;
{
ATerm trm76 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("syntax", 0, ATtrue))))
goto label82 ;
goto label76 ;
label82 :
t = trm76;
{
ATerm trm77 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("variables", 0, ATtrue))))
goto label83 ;
goto label76 ;
label83 :
t = trm77;
{
ATerm trm78 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("module", 0, ATtrue))))
goto label84 ;
goto label76 ;
label84 :
t = trm78;
{
ATerm trm79 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("exports", 0, ATtrue))))
goto label85 ;
goto label76 ;
label85 :
t = trm79;
{
ATerm trm80 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("hiddens", 0, ATtrue))))
goto label86 ;
goto label76 ;
label86 :
t = trm80;
{
ATerm trm81 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("left", 0, ATtrue))))
goto label87 ;
goto label76 ;
label87 :
t = trm81;
{
ATerm trm82 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("right", 0, ATtrue))))
goto label88 ;
goto label76 ;
label88 :
t = trm82;
{
ATerm trm83 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("assoc", 0, ATtrue))))
goto label89 ;
goto label76 ;
label89 :
t = trm83;
{
ATerm trm84 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("non-assoc", 0, ATtrue))))
goto label90 ;
goto label76 ;
label90 :
t = trm84;
{
ATerm trm85 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("bracket", 0, ATtrue))))
goto label91 ;
goto label76 ;
label91 :
t = trm85;
{
ATerm trm86 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("sorts", 0, ATtrue))))
goto label92 ;
goto label76 ;
label92 :
t = trm86;
{
ATerm trm87 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("restrictions", 0, ATtrue))))
goto label93 ;
goto label76 ;
label93 :
t = trm87;
{
ATerm trm88 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("constructor", 0, ATtrue))))
goto label94 ;
goto label76 ;
label94 :
t = trm88;
if((ATgetSymbol(t) == ATmakeSymbol("memo", 0, ATtrue)))
goto label76 ;
else
goto fail22 ;
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
}
}
label76 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm lcHd_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lcHd_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
t = explode_string_0_0(sl, t);
if((t == NULL))
goto fail21 ;
{
ATerm trm69;
trm69 = (ATerm) ATgetAnnotations(t);
if((trm69 == NULL))
trm69 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
a_11 = ATgetFirst((ATermList) t);
b_11 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail21 ;
e_11 = trm69;
t = a_11;
t = to_lower_0_0(sl, t);
if((t == NULL))
goto fail21 ;
c_11 = t;
t = b_11;
d_11 = t;
{
ATerm trm70;
trm70 = CheckATermList(d_11);
if((trm70 == NULL))
goto fail21 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm70, c_11), e_11);
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail21 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm symbol2label_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "symbol2label_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = sym2str_p__0_0(sl, t);
if((t == NULL))
goto fail20 ;
t = lcHd_0_0(sl, t);
if((t == NULL))
goto fail20 ;
{
ATerm trm67 = t;
ATerm trm68 = t;
t = is_sdf_keyword_0_0(sl, t);
if((t == NULL))
goto label75 ;
goto label73 ;
label75 :
t = trm68;
goto label74 ;
label74 :
;
goto label72 ;
label73 :
t = trm67;
t = double_quote_0_0(sl, t);
if((t == NULL))
goto fail20 ;
else
goto label72 ;
label72 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm sortname2label_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sortname2label_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = lcHd_0_0(sl, t);
if((t == NULL))
goto fail19 ;
{
ATerm trm65 = t;
ATerm trm66 = t;
t = is_sdf_keyword_0_0(sl, t);
if((t == NULL))
goto label71 ;
goto label69 ;
label71 :
t = trm66;
goto label70 ;
label70 :
;
goto label68 ;
label69 :
t = trm65;
t = double_quote_0_0(sl, t);
if((t == NULL))
goto fail19 ;
else
goto label68 ;
label68 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm label_symbol_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "label_symbol_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm63 = t;
struct str_closure v_105 = { &(_Id) , sl };
StrCL lifted14_cl = &(v_105);
struct str_closure x_105 = { &(_Id) , sl };
StrCL lifted15_cl = &(x_105);
t = label_2_0(sl, lifted14_cl, lifted15_cl, t);
if((t == NULL))
goto label66 ;
goto label65 ;
label66 :
t = trm63;
{
ATerm trm64 = t;
ATerm u_10 = NULL,w_10 = NULL,x_10 = NULL;
if(match_cons(t, sym_sort_1))
{
u_10 = ATgetArgument(t, 0);
}
else
goto label67 ;
x_10 = t;
t = u_10;
t = sortname2label_0_0(sl, t);
if((t == NULL))
goto label67 ;
w_10 = t;
t = x_10;
t = (ATerm) ATmakeAppl(sym_label_2, w_10, (ATerm) ATmakeAppl(sym_sort_1, u_10));
goto label65 ;
label67 :
t = trm64;
{
ATerm v_10 = NULL,y_10 = NULL,z_10 = NULL;
v_10 = t;
z_10 = t;
t = symbol2label_0_0(sl, t);
if((t == NULL))
goto fail18 ;
y_10 = t;
t = z_10;
t = (ATerm) ATmakeAppl(sym_label_2, y_10, v_10);
goto label65 ;
}
}
label65 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm contains_doubles_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "contains_doubles_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_10 = NULL;
ATerm trm62 = t;
s_10 = t;
t = uniq_0_0(sl, t);
if((t == NULL))
goto label64 ;
if(!((s_10 == t)))
goto label64 ;
goto fail17 ;
label64 :
t = trm62;
goto label63 ;
label63 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm warn_if_labels_not_unique_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "warn_if_labels_not_unique_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_105 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(t_105);
struct str_closure u_105 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(u_105);
t = if_2_0(sl, lifted10_cl, lifted12_cl, t);
if((t == NULL))
goto fail12 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_105 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(s_105);
t = debug_1_0(sl_up(sl), lifted13_cl, t);
if((t == NULL))
goto fail15 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term87;
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
{
ATerm q_10 = NULL,l_104 = NULL;
q_10 = t;
if(match_cons(t, sym_prod_3))
{
l_104 = ATgetArgument(t, 0);
{
ATerm trm59 = ATgetArgument(t, 1);
}
{
ATerm trm60 = ATgetArgument(t, 2);
}
}
else
goto fail13 ;
t = l_104;
{
struct str_closure r_105 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(r_105);
t = filter_1_0(sl_up(sl), lifted11_cl, t);
if((t == NULL))
goto fail13 ;
t = contains_doubles_0_0(sl_up(sl), t);
if((t == NULL))
goto fail13 ;
t = q_10;
}
}
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
ATerm r_10 = NULL;
if(match_cons(t, sym_label_2))
{
r_10 = ATgetArgument(t, 0);
{
ATerm trm61 = ATgetArgument(t, 1);
}
}
else
goto fail14 ;
t = r_10;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm label_production_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "label_production_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_105 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(o_105);
struct str_closure p_105 = { &(_Id) , sl };
StrCL lifted8_cl = &(p_105);
struct str_closure q_105 = { &(_Id) , sl };
StrCL lifted9_cl = &(q_105);
t = prod_3_0(sl, lifted5_cl, lifted8_cl, lifted9_cl, t);
if((t == NULL))
goto fail9 ;
t = warn_if_labels_not_unique_0_0(sl, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_105 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(n_105);
t = map_1_0(sl_up(sl), lifted6_cl, t);
if((t == NULL))
goto fail10 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_105 = { &(label_symbol_0_0) , sl_up(sl_up(sl)) };
StrCL lifted7_cl = &(m_105);
t = try_1_0(sl_up(sl_up(sl)), lifted7_cl, t);
if((t == NULL))
goto fail11 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm toAlphaNumFancy_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "toAlphaNumFancy_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm21 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(",", 0, ATtrue))))
goto label25 ;
t = term15;
goto label24 ;
label25 :
t = trm21;
{
ATerm trm22 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(":", 0, ATtrue))))
goto label26 ;
t = term17;
goto label24 ;
label26 :
t = trm22;
{
ATerm trm23 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(";", 0, ATtrue))))
goto label27 ;
t = term19;
goto label24 ;
label27 :
t = trm23;
{
ATerm trm24 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("+", 0, ATtrue))))
goto label28 ;
t = term21;
goto label24 ;
label28 :
t = trm24;
{
ATerm trm25 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("++", 0, ATtrue))))
goto label29 ;
t = term23;
goto label24 ;
label29 :
t = trm25;
{
ATerm trm26 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-", 0, ATtrue))))
goto label30 ;
t = term25;
goto label24 ;
label30 :
t = trm26;
{
ATerm trm27 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("--", 0, ATtrue))))
goto label31 ;
t = term27;
goto label24 ;
label31 :
t = trm27;
{
ATerm trm28 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("*", 0, ATtrue))))
goto label32 ;
t = term29;
goto label24 ;
label32 :
t = trm28;
{
ATerm trm29 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("/", 0, ATtrue))))
goto label33 ;
t = term31;
goto label24 ;
label33 :
t = trm29;
{
ATerm trm30 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("&", 0, ATtrue))))
goto label34 ;
t = term33;
goto label24 ;
label34 :
t = trm30;
{
ATerm trm31 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("&&", 0, ATtrue))))
goto label35 ;
t = term35;
goto label24 ;
label35 :
t = trm31;
{
ATerm trm32 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("!", 0, ATtrue))))
goto label36 ;
t = term37;
goto label24 ;
label36 :
t = trm32;
{
ATerm trm33 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-", 0, ATtrue))))
goto label37 ;
t = term25;
goto label24 ;
label37 :
t = trm33;
{
ATerm trm34 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("~", 0, ATtrue))))
goto label38 ;
t = term39;
goto label24 ;
label38 :
t = trm34;
{
ATerm trm35 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("%", 0, ATtrue))))
goto label39 ;
t = term41;
goto label24 ;
label39 :
t = trm35;
{
ATerm trm36 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("<<", 0, ATtrue))))
goto label40 ;
t = term43;
goto label24 ;
label40 :
t = trm36;
{
ATerm trm37 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(">>", 0, ATtrue))))
goto label41 ;
t = term45;
goto label24 ;
label41 :
t = trm37;
{
ATerm trm38 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("!=", 0, ATtrue))))
goto label42 ;
t = term47;
goto label24 ;
label42 :
t = trm38;
{
ATerm trm39 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("<", 0, ATtrue))))
goto label43 ;
t = term49;
goto label24 ;
label43 :
t = trm39;
{
ATerm trm40 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("<=", 0, ATtrue))))
goto label44 ;
t = term51;
goto label24 ;
label44 :
t = trm40;
{
ATerm trm41 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(">", 0, ATtrue))))
goto label45 ;
t = term53;
goto label24 ;
label45 :
t = trm41;
{
ATerm trm42 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(">=", 0, ATtrue))))
goto label46 ;
t = term55;
goto label24 ;
label46 :
t = trm42;
{
ATerm trm43 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("|", 0, ATtrue))))
goto label47 ;
t = term57;
goto label24 ;
label47 :
t = trm43;
{
ATerm trm44 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("=", 0, ATtrue))))
goto label48 ;
t = term59;
goto label24 ;
label48 :
t = trm44;
{
ATerm trm45 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("==", 0, ATtrue))))
goto label49 ;
t = term59;
goto label24 ;
label49 :
t = trm45;
{
ATerm trm46 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("||", 0, ATtrue))))
goto label50 ;
t = term13;
goto label24 ;
label50 :
t = trm46;
{
ATerm trm47 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(":=", 0, ATtrue))))
goto label51 ;
t = term61;
goto label24 ;
label51 :
t = trm47;
{
ATerm trm48 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("->", 0, ATtrue))))
goto label52 ;
t = term63;
goto label24 ;
label52 :
t = trm48;
{
ATerm trm49 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("=>", 0, ATtrue))))
goto label53 ;
t = term65;
goto label24 ;
label53 :
t = trm49;
{
ATerm trm50 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("*=", 0, ATtrue))))
goto label54 ;
t = term67;
goto label24 ;
label54 :
t = trm50;
{
ATerm trm51 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("/=", 0, ATtrue))))
goto label55 ;
t = term69;
goto label24 ;
label55 :
t = trm51;
{
ATerm trm52 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("%=", 0, ATtrue))))
goto label56 ;
t = term71;
goto label24 ;
label56 :
t = trm52;
{
ATerm trm53 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("+=", 0, ATtrue))))
goto label57 ;
t = term73;
goto label24 ;
label57 :
t = trm53;
{
ATerm trm54 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-=", 0, ATtrue))))
goto label58 ;
t = term75;
goto label24 ;
label58 :
t = trm54;
{
ATerm trm55 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("<<=", 0, ATtrue))))
goto label59 ;
t = term77;
goto label24 ;
label59 :
t = trm55;
{
ATerm trm56 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol(">>=", 0, ATtrue))))
goto label60 ;
t = term79;
goto label24 ;
label60 :
t = trm56;
{
ATerm trm57 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("&=", 0, ATtrue))))
goto label61 ;
t = term81;
goto label24 ;
label61 :
t = trm57;
{
ATerm trm58 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("^=", 0, ATtrue))))
goto label62 ;
t = term83;
goto label24 ;
label62 :
t = trm58;
if(!((ATgetSymbol(t) == ATmakeSymbol("|=", 0, ATtrue))))
goto fail8 ;
t = term85;
goto label24 ;
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
}
}
}
}
}
}
}
label24 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm Sym2Strs_p__0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Sym2Strs_p__0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure l_105 = { &(q_7) , &(frame) };
StrCL q_7_cl = &(l_105);
sl_init_fun(0, q_7_cl);
t = q_7(&(frame), t);
if((t == NULL))
goto fail3 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm q_7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "q_7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm5 = t;
ATerm z_6 = NULL;
if(match_cons(t, sym_cf_1))
{
z_6 = ATgetArgument(t, 0);
}
else
goto label11 ;
t = z_6;
t = q_7(sl, t);
if((t == NULL))
goto label11 ;
goto label10 ;
label11 :
t = trm5;
{
ATerm trm6 = t;
ATerm a_7 = NULL;
if(match_cons(t, sym_lex_1))
{
a_7 = ATgetArgument(t, 0);
}
else
goto label12 ;
t = a_7;
t = q_7(sl, t);
if((t == NULL))
goto label12 ;
goto label10 ;
label12 :
t = trm6;
{
ATerm trm7 = t;
if(!(match_cons(t, sym_empty_0)))
goto label13 ;
t = (ATerm) ATinsert(ATempty, term3);
goto label10 ;
label13 :
t = trm7;
{
ATerm trm8 = t;
ATerm b_7 = NULL,c_7 = NULL;
if(match_cons(t, sym_seq_2))
{
b_7 = ATgetArgument(t, 0);
c_7 = ATgetArgument(t, 1);
}
else
goto label14 ;
{
ATerm trm9;
trm9 = CheckATermList(c_7);
if((trm9 == NULL))
goto label14 ;
t = (ATerm) ATinsert((ATermList)trm9, b_7);
t = filter_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label14 ;
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label14 ;
}
goto label10 ;
label14 :
t = trm8;
{
ATerm trm10 = t;
ATerm d_7 = NULL;
struct str_closure i_105 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(i_105);
if(match_cons(t, sym_opt_1))
{
d_7 = ATgetArgument(t, 0);
}
else
goto label15 ;
t = d_7;
t = q_7(sl, t);
if((t == NULL))
goto label15 ;
t = at_end_1_0(sl_up(sl), lifted2_cl, t);
if((t == NULL))
goto label15 ;
goto label10 ;
label15 :
t = trm10;
{
ATerm trm11 = t;
ATerm e_7 = NULL;
struct str_closure j_105 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(j_105);
if(match_cons(t, sym_iter_1))
{
e_7 = ATgetArgument(t, 0);
}
else
goto label16 ;
t = e_7;
t = q_7(sl, t);
if((t == NULL))
goto label16 ;
t = at_end_1_0(sl_up(sl), lifted3_cl, t);
if((t == NULL))
goto label16 ;
goto label10 ;
label16 :
t = trm11;
{
ATerm trm12 = t;
ATerm f_7 = NULL;
struct str_closure k_105 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(k_105);
if(match_cons(t, sym_iter_star_1))
{
f_7 = ATgetArgument(t, 0);
}
else
goto label17 ;
t = f_7;
t = q_7(sl, t);
if((t == NULL))
goto label17 ;
t = at_end_1_0(sl_up(sl), lifted4_cl, t);
if((t == NULL))
goto label17 ;
goto label10 ;
label17 :
t = trm12;
{
ATerm trm13 = t;
ATerm g_7 = NULL,h_7 = NULL,r_7 = NULL,t_7 = NULL,s_7 = NULL,u_7 = NULL;
if(match_cons(t, sym_iter_sep_2))
{
g_7 = ATgetArgument(t, 0);
h_7 = ATgetArgument(t, 1);
}
else
goto label18 ;
t_7 = t;
t = g_7;
t = q_7(sl, t);
if((t == NULL))
goto label18 ;
r_7 = t;
t = t_7;
u_7 = t;
t = h_7;
t = q_7(sl, t);
if((t == NULL))
goto label18 ;
s_7 = t;
t = u_7;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term7)), s_7), r_7);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label18 ;
goto label10 ;
label18 :
t = trm13;
{
ATerm trm14 = t;
ATerm i_7 = NULL,j_7 = NULL,v_7 = NULL,x_7 = NULL,w_7 = NULL,y_7 = NULL;
if(match_cons(t, sym_iter_star_sep_2))
{
i_7 = ATgetArgument(t, 0);
j_7 = ATgetArgument(t, 1);
}
else
goto label19 ;
x_7 = t;
t = i_7;
t = q_7(sl, t);
if((t == NULL))
goto label19 ;
v_7 = t;
t = x_7;
y_7 = t;
t = j_7;
t = q_7(sl, t);
if((t == NULL))
goto label19 ;
w_7 = t;
t = y_7;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term9)), w_7), v_7);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label19 ;
goto label10 ;
label19 :
t = trm14;
{
ATerm trm15 = t;
ATerm k_7 = NULL,l_7 = NULL,z_7 = NULL,b_8 = NULL,a_8 = NULL,c_8 = NULL;
if(match_cons(t, sym_func_2))
{
k_7 = ATgetArgument(t, 0);
l_7 = ATgetArgument(t, 1);
}
else
goto label20 ;
b_8 = t;
t = k_7;
t = filter_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label20 ;
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label20 ;
z_7 = t;
t = b_8;
c_8 = t;
t = l_7;
t = q_7(sl, t);
if((t == NULL))
goto label20 ;
a_8 = t;
t = c_8;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_8), (ATerm) ATinsert(ATempty, term11)), z_7);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label20 ;
goto label10 ;
label20 :
t = trm15;
{
ATerm trm16 = t;
ATerm m_7 = NULL,n_7 = NULL,d_8 = NULL,f_8 = NULL,e_8 = NULL,g_8 = NULL;
if(match_cons(t, sym_alt_2))
{
m_7 = ATgetArgument(t, 0);
n_7 = ATgetArgument(t, 1);
}
else
goto label21 ;
f_8 = t;
t = m_7;
t = q_7(sl, t);
if((t == NULL))
goto label21 ;
d_8 = t;
t = f_8;
g_8 = t;
t = n_7;
t = q_7(sl, t);
if((t == NULL))
goto label21 ;
e_8 = t;
t = g_8;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_8), (ATerm) ATinsert(ATempty, term13)), d_8);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label21 ;
goto label10 ;
label21 :
t = trm16;
{
ATerm trm17 = t;
ATerm o_7 = NULL;
if(match_cons(t, sym_sort_1))
{
o_7 = ATgetArgument(t, 0);
}
else
goto label22 ;
t = (ATerm) ATinsert(ATempty, o_7);
goto label10 ;
label22 :
t = trm17;
{
ATerm trm18 = t;
if(match_cons(t, sym_lit_1))
{
ATerm trm19 = ATgetArgument(t, 0);
}
else
goto label23 ;
t = (ATerm) ATempty;
goto label10 ;
label23 :
t = trm18;
{
ATerm p_7 = NULL;
if(match_cons(t, sym_label_2))
{
ATerm trm20 = ATgetArgument(t, 0);
p_7 = ATgetArgument(t, 1);
}
else
goto fail4 ;
t = p_7;
t = q_7(sl, t);
if((t == NULL))
goto fail4 ;
else
goto label10 ;
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
label10 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term9);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term5);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm sym2str_p__0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sym2str_p__0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = Sym2Strs_p__0_0(sl, t);
if((t == NULL))
goto fail0 ;
{
struct str_closure h_105 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(h_105);
t = map_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail0 ;
{
ATerm trm4 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto label9 ;
goto fail0 ;
label9 :
t = trm4;
goto label8 ;
label8 :
;
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
{
ATerm trm0 = t;
ATerm trm1 = t;
ATerm r_101 = NULL,s_101 = NULL;
r_101 = t;
s_101 = t;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto label3 ;
{
ATerm trm2 = t;
struct str_closure g_105 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(g_105);
t = map_1_0(sl_up(sl), lifted1_cl, t);
if((t == NULL))
goto label5 ;
goto label3 ;
label5 :
t = trm2;
goto label4 ;
label4 :
;
t = s_101;
t = term1;
}
goto label2 ;
label3 :
t = trm1;
t = toAlphaNumFancy_0_0(sl_up(sl), t);
if((t == NULL))
goto label1 ;
else
goto label2 ;
label2 :
;
goto label0 ;
label1 :
t = trm0;
goto label0 ;
label0 :
;
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
{
ATerm trm3 = t;
t = is_alphanum_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label7 ;
goto label6 ;
label7 :
t = trm3;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 45)))
goto label6 ;
else
goto fail2 ;
label6 :
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 44));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(concat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(at_end_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("at_end_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(uniq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("uniq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(alltd_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("alltd_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(to_lower_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("to_lower_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_alphanum_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_alphanum_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(double_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("double_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(explode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("explode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(implode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(label_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("label_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(prod_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("prod_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_sdf_keyword_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_sdf_keyword_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lcHd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lcHd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(symbol2label_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("symbol2label_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sortname2label_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sortname2label_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(label_symbol_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("label_symbol_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(contains_doubles_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("contains_doubles_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(warn_if_labels_not_unique_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("warn_if_labels_not_unique_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(label_production_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("label_production_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(toAlphaNumFancy_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("toAlphaNumFancy_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(q_7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("q_7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Sym2Strs_p__0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Sym2Strs_p__0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sym2str_p__0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sym2str_p__0_0", 0, ATtrue)), &(closures[closures_index]));
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
