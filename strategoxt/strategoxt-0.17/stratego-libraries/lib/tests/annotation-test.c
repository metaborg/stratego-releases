#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Anno_2;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
ATprotectSymbol(sym_Anno_2);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("string-test", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("get-annotations-2", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeInt(1);
ATprotect(&(term5));
term5 = (ATerm) ATmakeInt(2);
ATprotect(&(term6));
term6 = term5;
ATprotect(&(term7));
term7 = term4;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("get-annos-1", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("get-annos-2", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("get-annotations-1", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("set-annotations-2", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("set-annos-1", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("set-annos-2", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("set-annotations-1", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("rm-annotations-2", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("rm-annotations-1", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("has-annotations-2", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("has-annos-1", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("has-annos-2", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("has-annotations-1", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("if-annotations-2", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeInt(10);
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeInt(20);
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("if-annotations-1", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("strip-annos-2", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("strip-annos-1", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("preserve-annotation-2", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("preserve-annos-1", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("preserve-annos-2", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("preserve-annotation-1", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("catch-annos-2", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("catch-annos-1", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm preserve_annos_1_0 (StrSL sl, StrCL c_13, ATerm t);
ATerm preserve_annotation_1_0 (StrSL sl, StrCL b_13, ATerm t);
ATerm catch_annos_0_0 (StrSL sl, ATerm t);
ATerm strip_annos_0_0 (StrSL sl, ATerm t);
ATerm if_annotation_2_0 (StrSL sl, StrCL z_12, StrCL a_13, ATerm t);
ATerm has_annotation_0_0 (StrSL sl, ATerm t);
ATerm has_annos_0_0 (StrSL sl, ATerm t);
ATerm rm_annotations_0_0 (StrSL sl, ATerm t);
ATerm set_annotations_0_0 (StrSL sl, ATerm t);
ATerm set_annos_0_0 (StrSL sl, ATerm t);
ATerm get_annotations_0_0 (StrSL sl, ATerm t);
ATerm get_annos_0_0 (StrSL sl, ATerm t);
ATerm apply_and_fail_3_0 (StrSL sl, StrCL b_2, StrCL c_2, StrCL d_2, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL q_1, StrCL r_1, StrCL s_1, StrCL t_1, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL o_1, StrCL p_1, ATerm t);
static ATerm lifted99 (StrSL sl, ATerm t);
static ATerm lifted98 (StrSL sl, ATerm t);
static ATerm lifted96 (StrSL sl, ATerm t);
static ATerm lifted103 (StrSL sl, ATerm t);
static ATerm lifted102 (StrSL sl, ATerm t);
static ATerm lifted100 (StrSL sl, ATerm t);
ATerm catch_annotation_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted90 (StrSL sl, ATerm t);
static ATerm lifted89 (StrSL sl, ATerm t);
static ATerm lifted88 (StrSL sl, ATerm t);
static ATerm lifted87 (StrSL sl, ATerm t);
static ATerm lifted86 (StrSL sl, ATerm t);
static ATerm lifted85 (StrSL sl, ATerm t);
static ATerm lifted84 (StrSL sl, ATerm t);
static ATerm lifted83 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted79 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
static ATerm lifted95 (StrSL sl, ATerm t);
static ATerm lifted94 (StrSL sl, ATerm t);
static ATerm lifted93 (StrSL sl, ATerm t);
static ATerm lifted92 (StrSL sl, ATerm t);
static ATerm lifted91 (StrSL sl, ATerm t);
ATerm preserve_annotation_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
ATerm strip_annotation_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
ATerm if_annotation_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
ATerm has_annotation_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
ATerm rm_annotation_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm set_annotation_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
ATerm get_annotation_tests_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm catch_annotation_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "catch_annotation_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_68 = { &(lifted100) , &(frame) };
StrCL lifted100_cl = &(a_68);
struct str_closure d_68 = { &(catch_annos_0_0) , sl };
StrCL lifted101_cl = &(d_68);
struct str_closure e_68 = { &(lifted102) , &(frame) };
StrCL lifted102_cl = &(e_68);
struct str_closure f_68 = { &(lifted103) , &(frame) };
StrCL lifted103_cl = &(f_68);
struct str_closure g_68 = { &(lifted96) , &(frame) };
StrCL lifted96_cl = &(g_68);
struct str_closure h_68 = { &(catch_annos_0_0) , sl };
StrCL lifted97_cl = &(h_68);
struct str_closure i_68 = { &(lifted98) , &(frame) };
StrCL lifted98_cl = &(i_68);
struct str_closure j_68 = { &(lifted99) , &(frame) };
StrCL lifted99_cl = &(j_68);
t = apply_test_4_0(sl, lifted96_cl, lifted97_cl, lifted98_cl, lifted99_cl, t);
if((t == NULL))
goto fail88 ;
t = apply_test_4_0(sl, lifted100_cl, lifted101_cl, lifted102_cl, lifted103_cl, t);
if((t == NULL))
goto fail88 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted99 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted99";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Anno_2, term6, (ATerm) ATinsert(ATempty, term6))), (ATerm) ATmakeAppl(sym_Anno_2, term7, (ATerm) ATinsert(ATempty, term7)));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted98 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted98";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) SRTS_setAnnotations(term5, (ATerm) ATinsert(ATempty, term6))), (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATempty, term7)));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted96 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted96";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted103 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted103";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term6), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted102 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted102";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term6), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted100 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted100";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term55;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
ATerm preserve_annotation_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "preserve_annotation_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_65 = { &(lifted91) , &(frame) };
StrCL lifted91_cl = &(m_65);
struct str_closure u_65 = { &(lifted92) , &(frame) };
StrCL lifted92_cl = &(u_65);
struct str_closure v_65 = { &(lifted94) , &(frame) };
StrCL lifted94_cl = &(v_65);
struct str_closure g_66 = { &(lifted95) , &(frame) };
StrCL lifted95_cl = &(g_66);
struct str_closure f_67 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(f_67);
struct str_closure g_67 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(g_67);
struct str_closure m_67 = { &(lifted79) , &(frame) };
StrCL lifted79_cl = &(m_67);
struct str_closure n_67 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(n_67);
t = apply_test_4_0(sl, lifted76_cl, lifted77_cl, lifted79_cl, lifted80_cl, t);
if((t == NULL))
goto fail67 ;
{
struct str_closure r_67 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(r_67);
struct str_closure s_67 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(s_67);
struct str_closure t_67 = { &(lifted84) , &(frame) };
StrCL lifted84_cl = &(t_67);
struct str_closure u_67 = { &(lifted85) , &(frame) };
StrCL lifted85_cl = &(u_67);
t = apply_test_4_0(sl, lifted81_cl, lifted82_cl, lifted84_cl, lifted85_cl, t);
if((t == NULL))
goto fail67 ;
{
struct str_closure w_67 = { &(lifted86) , &(frame) };
StrCL lifted86_cl = &(w_67);
struct str_closure x_67 = { &(lifted87) , &(frame) };
StrCL lifted87_cl = &(x_67);
struct str_closure y_67 = { &(lifted89) , &(frame) };
StrCL lifted89_cl = &(y_67);
struct str_closure z_67 = { &(lifted90) , &(frame) };
StrCL lifted90_cl = &(z_67);
t = apply_test_4_0(sl, lifted86_cl, lifted87_cl, lifted89_cl, lifted90_cl, t);
if((t == NULL))
goto fail67 ;
t = apply_test_4_0(sl, lifted91_cl, lifted92_cl, lifted94_cl, lifted95_cl, t);
if((t == NULL))
goto fail67 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted90 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted90";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term5, (ATerm) ATinsert(ATempty, term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted89 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted89";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATempty, term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted87 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted87";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_67 = { &(lifted88) , &(frame) };
StrCL lifted88_cl = &(v_67);
t = preserve_annotation_1_0(sl_up(sl), lifted88_cl, t);
if((t == NULL))
goto fail84 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted88 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted88";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 1))))
goto fail85 ;
t = term6;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted86 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted86";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted85 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted85";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term6;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted84 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted84";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted82 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted82";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_67 = { &(lifted83) , &(frame) };
StrCL lifted83_cl = &(q_67);
t = preserve_annos_1_0(sl_up(sl), lifted83_cl, t);
if((t == NULL))
goto fail79 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted83 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted83";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 1))))
goto fail80 ;
t = term6;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term5, (ATerm) ATinsert(ATempty, term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted79 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted79";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATempty, term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_66 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(h_66);
t = preserve_annos_1_0(sl_up(sl), lifted78_cl, t);
if((t == NULL))
goto fail74 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 1))))
goto fail75 ;
t = term6;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term49;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted95 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted95";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term6;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted94 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted94";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted92 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted92";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_65 = { &(lifted93) , &(frame) };
StrCL lifted93_cl = &(l_65);
t = preserve_annotation_1_0(sl_up(sl), lifted93_cl, t);
if((t == NULL))
goto fail69 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted93 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted93";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 1))))
goto fail70 ;
t = term6;
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
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
ATerm strip_annotation_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strip_annotation_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_64 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(x_64);
struct str_closure y_64 = { &(strip_annos_0_0) , sl };
StrCL lifted73_cl = &(y_64);
struct str_closure z_64 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(z_64);
struct str_closure a_65 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(a_65);
struct str_closure d_65 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(d_65);
struct str_closure e_65 = { &(strip_annos_0_0) , sl };
StrCL lifted69_cl = &(e_65);
struct str_closure j_65 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(j_65);
struct str_closure k_65 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(k_65);
t = apply_test_4_0(sl, lifted68_cl, lifted69_cl, lifted70_cl, lifted71_cl, t);
if((t == NULL))
goto fail60 ;
t = apply_test_4_0(sl, lifted72_cl, lifted73_cl, lifted74_cl, lifted75_cl, t);
if((t == NULL))
goto fail60 ;
}
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
t = (ATerm) ATinsert(ATinsert(ATempty, term6), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) SRTS_setAnnotations(term5, (ATerm) ATinsert(ATempty, term6))), (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATempty, term7)));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term45;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term6), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term6), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
ATerm if_annotation_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "if_annotation_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_64 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(n_64);
struct str_closure o_64 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(o_64);
struct str_closure p_64 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(p_64);
struct str_closure q_64 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(q_64);
struct str_closure t_64 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(t_64);
struct str_closure u_64 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(u_64);
struct str_closure v_64 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(v_64);
struct str_closure w_64 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(w_64);
t = apply_test_4_0(sl, lifted56_cl, lifted57_cl, lifted60_cl, lifted61_cl, t);
if((t == NULL))
goto fail47 ;
t = apply_test_4_0(sl, lifted62_cl, lifted63_cl, lifted66_cl, lifted67_cl, t);
if((t == NULL))
goto fail47 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term37;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATempty, term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_64 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(r_64);
struct str_closure s_64 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(s_64);
t = if_annotation_2_0(sl_up(sl), lifted58_cl, lifted59_cl, t);
if((t == NULL))
goto fail55 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term37;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted67 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted67";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_64 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(l_64);
struct str_closure m_64 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(m_64);
t = if_annotation_2_0(sl_up(sl), lifted64_cl, lifted65_cl, t);
if((t == NULL))
goto fail49 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term37;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term35;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
ATerm has_annotation_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "has_annotation_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_63 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(x_63);
struct str_closure y_63 = { &(has_annotation_0_0) , sl };
StrCL lifted54_cl = &(y_63);
struct str_closure z_63 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(z_63);
struct str_closure a_64 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(a_64);
struct str_closure b_64 = { &(has_annos_0_0) , sl };
StrCL lifted43_cl = &(b_64);
struct str_closure c_64 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(c_64);
struct str_closure d_64 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(d_64);
t = apply_test_4_0(sl, lifted42_cl, lifted43_cl, lifted44_cl, lifted45_cl, t);
if((t == NULL))
goto fail36 ;
{
struct str_closure e_64 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(e_64);
struct str_closure f_64 = { &(has_annos_0_0) , sl };
StrCL lifted47_cl = &(f_64);
struct str_closure g_64 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(g_64);
t = apply_and_fail_3_0(sl, lifted46_cl, lifted47_cl, lifted48_cl, t);
if((t == NULL))
goto fail36 ;
{
struct str_closure h_64 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(h_64);
struct str_closure i_64 = { &(has_annotation_0_0) , sl };
StrCL lifted50_cl = &(i_64);
struct str_closure j_64 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(j_64);
struct str_closure k_64 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(k_64);
t = apply_test_4_0(sl, lifted49_cl, lifted50_cl, lifted51_cl, lifted52_cl, t);
if((t == NULL))
goto fail36 ;
t = apply_and_fail_3_0(sl, lifted53_cl, lifted54_cl, lifted55_cl, t);
if((t == NULL))
goto fail36 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATempty, term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATempty, term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATempty, term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATempty, term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
ATerm rm_annotation_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rm_annotation_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_63 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(p_63);
struct str_closure q_63 = { &(rm_annotations_0_0) , sl };
StrCL lifted39_cl = &(q_63);
struct str_closure r_63 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(r_63);
struct str_closure s_63 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(s_63);
struct str_closure t_63 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(t_63);
struct str_closure u_63 = { &(rm_annotations_0_0) , sl };
StrCL lifted35_cl = &(u_63);
struct str_closure v_63 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(v_63);
struct str_closure w_63 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(w_63);
t = apply_test_4_0(sl, lifted34_cl, lifted35_cl, lifted36_cl, lifted37_cl, t);
if((t == NULL))
goto fail29 ;
t = apply_test_4_0(sl, lifted38_cl, lifted39_cl, lifted40_cl, lifted41_cl, t);
if((t == NULL))
goto fail29 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATempty, term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term25;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATinsert(ATempty, term6), term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_annotation_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_annotation_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_62 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(y_62);
struct str_closure a_63 = { &(set_annotations_0_0) , sl };
StrCL lifted31_cl = &(a_63);
struct str_closure b_63 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(b_63);
struct str_closure c_63 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(c_63);
struct str_closure d_63 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(d_63);
struct str_closure e_63 = { &(set_annos_0_0) , sl };
StrCL lifted19_cl = &(e_63);
struct str_closure f_63 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(f_63);
struct str_closure g_63 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(g_63);
t = apply_test_4_0(sl, lifted18_cl, lifted19_cl, lifted20_cl, lifted21_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure h_63 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(h_63);
struct str_closure i_63 = { &(set_annos_0_0) , sl };
StrCL lifted23_cl = &(i_63);
struct str_closure j_63 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(j_63);
struct str_closure k_63 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(k_63);
t = apply_test_4_0(sl, lifted22_cl, lifted23_cl, lifted24_cl, lifted25_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure l_63 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(l_63);
struct str_closure m_63 = { &(set_annotations_0_0) , sl };
StrCL lifted27_cl = &(m_63);
struct str_closure n_63 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(n_63);
struct str_closure o_63 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(o_63);
t = apply_test_4_0(sl, lifted26_cl, lifted27_cl, lifted28_cl, lifted29_cl, t);
if((t == NULL))
goto fail16 ;
t = apply_test_4_0(sl, lifted30_cl, lifted31_cl, lifted32_cl, lifted33_cl, t);
if((t == NULL))
goto fail16 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATempty, term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__2, term7, (ATerm) ATinsert(ATempty, term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATinsert(ATempty, term6), term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__2, term7, (ATerm) ATinsert(ATinsert(ATempty, term6), term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATempty, term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__2, term7, (ATerm) ATinsert(ATempty, term7));
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
t = term17;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATinsert(ATempty, term6), term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATmakeAppl(sym__2, term7, (ATerm) ATinsert(ATinsert(ATempty, term6), term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_annotation_tests_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_annotation_tests_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_62 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(i_62);
struct str_closure j_62 = { &(get_annotations_0_0) , sl };
StrCL lifted15_cl = &(j_62);
struct str_closure k_62 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(k_62);
struct str_closure l_62 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(l_62);
struct str_closure m_62 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(m_62);
struct str_closure n_62 = { &(get_annos_0_0) , sl };
StrCL lifted3_cl = &(n_62);
struct str_closure o_62 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(o_62);
struct str_closure p_62 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(p_62);
t = apply_test_4_0(sl, lifted2_cl, lifted3_cl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure q_62 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(q_62);
struct str_closure r_62 = { &(get_annos_0_0) , sl };
StrCL lifted7_cl = &(r_62);
struct str_closure s_62 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(s_62);
struct str_closure t_62 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(t_62);
t = apply_test_4_0(sl, lifted6_cl, lifted7_cl, lifted8_cl, lifted9_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure u_62 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(u_62);
struct str_closure v_62 = { &(get_annotations_0_0) , sl };
StrCL lifted11_cl = &(v_62);
struct str_closure w_62 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(w_62);
struct str_closure x_62 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(x_62);
t = apply_test_4_0(sl, lifted10_cl, lifted11_cl, lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto fail3 ;
t = apply_test_4_0(sl, lifted14_cl, lifted15_cl, lifted16_cl, lifted17_cl, t);
if((t == NULL))
goto fail3 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
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
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATempty, term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term13;
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
t = (ATerm) ATinsert(ATinsert(ATempty, term6), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATinsert(ATempty, term6), term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATempty, term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term6), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) SRTS_setAnnotations(term4, (ATerm) ATinsert(ATinsert(ATempty, term6), term7));
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
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
t = get_annotation_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = set_annotation_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = rm_annotation_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = has_annotation_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = if_annotation_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = strip_annotation_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = preserve_annotation_tests_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = catch_annotation_tests_0_0(sl_up(sl), t);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 110));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(preserve_annos_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("preserve_annos_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(preserve_annotation_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("preserve_annotation_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(catch_annos_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("catch_annos_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strip_annos_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strip_annos_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_annotation_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_annotation_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(has_annotation_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("has_annotation_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(has_annos_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("has_annos_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rm_annotations_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rm_annotations_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_annotations_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_annotations_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_annos_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_annos_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_annotations_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_annotations_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_annos_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_annos_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted99);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted99", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted98);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted98", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted96);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted96", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted103);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted103", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted102);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted102", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted100);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted100", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(catch_annotation_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("catch_annotation_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted90);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted90", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted89);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted89", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted88);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted88", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted87);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted87", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted86);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted86", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted85);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted85", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted84);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted84", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted83);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted83", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted82);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted82", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted81);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted81", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted80);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted80", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted79);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted79", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted78);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted78", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted77);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted77", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted76);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted76", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted95);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted95", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted94);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted94", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted93);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted93", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted92);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted92", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted91);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted91", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(preserve_annotation_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("preserve_annotation_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted71);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted71", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted70);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted70", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted68);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted68", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted75);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted75", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted74);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted74", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted72);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted72", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(strip_annotation_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("strip_annotation_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted61);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted61", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(if_annotation_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_annotation_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted48);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted48", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted55);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted55", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted53);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted53", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(has_annotation_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("has_annotation_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted37);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted37", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted34);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted34", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted38);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted38", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rm_annotation_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rm_annotation_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted33);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted33", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_annotation_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_annotation_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_annotation_tests_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_annotation_tests_0_0", 0, ATtrue)), &(closures[closures_index]));
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
