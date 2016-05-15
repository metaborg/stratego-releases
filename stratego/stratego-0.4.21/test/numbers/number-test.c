#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_s_5);
PROCDECL(_stratego_t_5);
PROCDECL(_stratego_u_5);
PROCDECL(_stratego_v_5);
PROCDECL(_stratego_w_5);
PROCDECL(_stratego_x_5);
PROCDECL(_stratego_y_5);
PROCDECL(_stratego_z_5);
PROCDECL(_stratego_a_6);
PROCDECL(_stratego_b_6);
PROCDECL(_stratego_c_6);
PROCDECL(_stratego_d_6);
PROCDECL(_stratego_e_6);
PROCDECL(_stratego_f_6);
PROCDECL(_stratego_g_6);
PROCDECL(_stratego_h_6);
PROCDECL(_stratego_i_6);

PROC(_stratego_init_afuns)
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("number-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_t_5);
  Ccall(_stratego_y_5);
  Ccall(_stratego_e_6);
  Ccall(_stratego_f_6);
  Ccall(_stratego_h_6);
  Ccall(_stratego_i_6);
  Ccall(_stratego_u_5);
  Ccall(_stratego_w_5);
ENDPROC

PROC(_stratego_s_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_t_5)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_u_5)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_v_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_4;
  e_4 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto g_4;
  c_0 :
  goto b_0;
  g_4 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_5)
  Cpush(f_0);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto u_4;
  u_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto w_4;
  h_0 :
  goto g_0;
  w_4 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_x_5);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_x_5);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_x_5)
  _ST_exit();
ENDPROC

PROC(_stratego_y_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test0"));
  Ccall(_stratego_c_6);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Epushd(1,5);
  Tset((ATerm)ATmakeReal(0.60));
  _ST_explode_term();
  MoveTop(1,1);
  goto z_4;
  z_4 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto a_5;
  a_5 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto b_5;
  b_5 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(p_0);
  goto t_7;
  p_0 :
  goto o_0;
  t_7 :
  Epushd(2,1);
  _ST_mkterm();
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  Return();
  o_0 :
  Epopd(1,5);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_c_6);
  Ccall(_stratego_d_6);
  goto q_0;
  m_0 :
  Cpop();
  q_0 :
  Tset((ATerm)ATmakeReal(0.60));
  Tdupl();
  Tset((ATerm)ATmakeReal(0.60));
  MoveTop(0,2);
  Tpop();
  Cpush(s_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto r_0;
  s_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_d_6);
  goto t_0;
  r_0 :
  Cpop();
  t_0 :
  Tpop();
  Ccall(_stratego_z_5);
  goto j_0;
  l_0 :
  Ccall(_stratego_b_6);
  goto u_0;
  j_0 :
  Cpop();
  u_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_z_5)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_a_6);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_a_6)
  _ST_add();
ENDPROC

PROC(_stratego_b_6)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_a_6);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_v_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_c_6)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_d_6)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto i_9;
  i_9 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto j_9;
  j_9 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto k_9;
  k_9 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(w_0);
  goto t_9;
  w_0 :
  goto v_0;
  t_9 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  v_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_e_6)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_c_6);
  Tpop();
  Cpush(y_0);
  Tdupl();
  Cpush(a_1);
  Epushd(1,1);
  Tset((ATerm)ATmakeReal(0.60));
  MoveTop(1,1);
  goto c_10;
  c_10 :
  c_1 :
  goto b_1;
  v_11 :
  Epushd(2,1);
  Tset((ATerm)ATmakeReal(1.20));
  MoveTop(2,1);
  goto b_10;
  b_10 :
  e_1 :
  goto d_1;
  w_11 :
  Epushd(3,5);
  _ST_explode_term();
  MoveTop(3,1);
  goto y_9;
  y_9 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto z_9;
  z_9 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto a_10;
  a_10 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(g_1);
  goto x_11;
  g_1 :
  goto f_1;
  x_11 :
  Epushd(4,1);
  _ST_mkterm();
  MoveTop(4,1);
  Move(0,1,4,1);
  Epopd(4,1);
  Return();
  f_1 :
  Epopd(3,5);
  Return();
  d_1 :
  Epopd(2,1);
  Return();
  b_1 :
  Epopd(1,1);
  goto z_0;
  a_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_c_6);
  Ccall(_stratego_d_6);
  goto h_1;
  z_0 :
  Cpop();
  h_1 :
  Tset((ATerm)ATmakeReal(1.20));
  Tdupl();
  Tset((ATerm)ATmakeReal(1.20));
  MoveTop(0,2);
  Tpop();
  Cpush(j_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto i_1;
  j_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_d_6);
  goto k_1;
  i_1 :
  Cpop();
  k_1 :
  Tpop();
  Ccall(_stratego_z_5);
  goto x_0;
  y_0 :
  Ccall(_stratego_b_6);
  goto l_1;
  x_0 :
  Cpop();
  l_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_f_6)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test2"));
  Ccall(_stratego_c_6);
  Tpop();
  Cpush(n_1);
  Tdupl();
  Cpush(p_1);
  Epushd(1,1);
  Tset((ATerm)ATmakeReal(0.60));
  Ccall(_stratego_g_6);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto o_1;
  p_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_c_6);
  Ccall(_stratego_d_6);
  goto q_1;
  o_1 :
  Cpop();
  q_1 :
  Tset((ATerm)ATmakeReal(0.60));
  Tdupl();
  Tset((ATerm)ATmakeReal(0.60));
  MoveTop(0,2);
  Tpop();
  Cpush(s_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto r_1;
  s_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_d_6);
  goto t_1;
  r_1 :
  Cpop();
  t_1 :
  Tpop();
  Ccall(_stratego_z_5);
  goto m_1;
  n_1 :
  Ccall(_stratego_b_6);
  goto u_1;
  m_1 :
  Cpop();
  u_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_g_6)
  _ST_is_real();
ENDPROC

PROC(_stratego_h_6)
  Tdupl();
  Tset(ATmakeString("test3"));
  Ccall(_stratego_c_6);
  Tpop();
  Cpush(x_1);
  Tdupl();
  Cpush(z_1);
  Tset(App2("TCons",MakeInt(1),App2("TCons",ATmakeString("a"),App0("TNil"))));
  Cpush(a_2);
  Tdupl();
  Ccall(_stratego_a_6);
  Cpop();
  Crestore();
  Cjump();
  a_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_c_6);
  goto y_1;
  z_1 :
  Tset(ATmakeString("  succeeded"));
  Ccall(_stratego_c_6);
  Ccall(_stratego_d_6);
  goto b_2;
  y_1 :
  Cpop();
  b_2 :
  Tpop();
  Ccall(_stratego_z_5);
  goto w_1;
  x_1 :
  Ccall(_stratego_b_6);
  goto c_2;
  w_1 :
  Cpop();
  c_2 :
ENDPROC

PROC(_stratego_i_6)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test4"));
  Ccall(_stratego_c_6);
  Tpop();
  Cpush(e_2);
  Tdupl();
  Cpush(g_2);
  Epushd(1,1);
  Tset(App2("TCons",MakeInt(1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_a_6);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto f_2;
  g_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_c_6);
  Ccall(_stratego_d_6);
  goto h_2;
  f_2 :
  Cpop();
  h_2 :
  Tset(MakeInt(2));
  Tdupl();
  Tset(MakeInt(2));
  MoveTop(0,2);
  Tpop();
  Cpush(j_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto i_2;
  j_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_d_6);
  goto k_2;
  i_2 :
  Cpop();
  k_2 :
  Tpop();
  Ccall(_stratego_z_5);
  goto d_2;
  e_2 :
  Ccall(_stratego_b_6);
  goto l_2;
  d_2 :
  Cpop();
  l_2 :
  Epopd(0,2);
ENDPROC

DOIT

