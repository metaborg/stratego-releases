#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,u_2);
VARDECL(AFun,j_1);
VARDECL(AFun,a_1);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_o_8);
PROCDECL(_stratego_p_8);
PROCDECL(_stratego_q_8);
PROCDECL(_stratego_r_8);
PROCDECL(_stratego_s_8);
PROCDECL(_stratego_t_8);
PROCDECL(_stratego_u_8);
PROCDECL(_stratego_v_8);
PROCDECL(_stratego_w_8);
PROCDECL(_stratego_x_8);
PROCDECL(_stratego_y_8);
PROCDECL(_stratego_z_8);
PROCDECL(_stratego_a_9);
PROCDECL(_stratego_b_9);
PROCDECL(_stratego_c_9);
PROCDECL(_stratego_d_9);

PROC(_stratego_init_afuns)
  MOVE(u_2,ATmakeAFun("Typed",2,0));
  MOVE(j_1,ATmakeAFun("Nil",0,0));
  MOVE(a_1,ATmakeAFun("Cons",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("unification-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_8);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_p_8);
  Ccall(_stratego_u_8);
  Ccall(_stratego_d_9);
  Ccall(_stratego_q_8);
  Ccall(_stratego_s_8);
ENDPROC

PROC(_stratego_o_8)
  _ST_printnl();
ENDPROC

PROC(_stratego_p_8)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_q_8)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_8);
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
  Ccall(_stratego_o_8);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_r_8);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_r_8)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_4;
  m_4 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto o_4;
  c_0 :
  goto b_0;
  o_4 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_8)
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
  goto q_4;
  q_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto s_4;
  h_0 :
  goto g_0;
  s_4 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_r_8);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_t_8);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_t_8);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_t_8)
  _ST_exit();
ENDPROC

PROC(_stratego_u_8)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test0"));
  Ccall(_stratego_y_8);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Epushd(1,1);
  Tset(App2("Cons",App2("TCons",App2("Typed",App1("Var",ATmakeString("a")),App2("Forall",ATmakeString("b"),App1("TVar",ATmakeString("b")))),App2("TCons",App2("Typed",App1("Var",ATmakeString("a")),App2("Forall",ATmakeString("b"),App1("TVar",ATmakeString("b")))),App0("TNil"))),App0("Nil")));
  Ccall(_stratego_a_9);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_y_8);
  Ccall(_stratego_z_8);
  goto o_0;
  m_0 :
  Cpop();
  o_0 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(0,2);
  Tpop();
  Cpush(q_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto p_0;
  q_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_8);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_8);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_z_8);
  goto r_0;
  p_0 :
  Cpop();
  r_0 :
  Tpop();
  Ccall(_stratego_v_8);
  goto j_0;
  l_0 :
  Ccall(_stratego_x_8);
  goto s_0;
  j_0 :
  Cpop();
  s_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_8)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_w_8);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_8);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_w_8)
  _ST_add();
ENDPROC

PROC(_stratego_x_8)
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
  Ccall(_stratego_w_8);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_r_8);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_y_8)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_o_8);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_z_8)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto g_9;
  g_9 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto h_9;
  h_9 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto i_9;
  i_9 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(u_0);
  goto r_9;
  u_0 :
  goto t_0;
  r_9 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  t_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_a_9)
  Rpush(v_0);
  v_10 :
  Cpush(x_0);
  Epushd(0,7);
  MoveTop(0,1);
  goto t_9;
  t_9 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto u_9;
  u_9 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto v_9;
  v_9 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto w_9;
  w_9 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(z_0);
  goto w_10;
  z_0 :
  goto y_0;
  w_10 :
  Epushd(1,1);
  Move(0,3,0,5);
  Move(1,1,0,7);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  y_0 :
  Epopd(0,7);
  goto w_0;
  x_0 :
  Ccontinue(b_1);
  Ccall(_stratego_c_9);
  goto w_0;
  b_1 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("not equal: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_8);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_z_8);
  goto c_1;
  w_0 :
  Cpop();
  c_1 :
  Cpush(e_1);
  Ccall(_stratego_b_9);
  goto d_1;
  e_1 :
  Rpush(g_1);
  goto v_10;
  g_1 :
  goto f_1;
  d_1 :
  Cpop();
  f_1 :
  Return();
  v_0 :
ENDPROC

PROC(_stratego_b_9)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_11;
  d_11 :
  TestFunFC(j_1,&&fail,Egetd(0,1));
  Rpush(i_1);
  goto f_11;
  i_1 :
  goto h_1;
  f_11 :
  Return();
  h_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_9)
  Epushd(0,7);
  MoveTop(0,1);
  goto i_12;
  i_12 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto j_12;
  j_12 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto k_12;
  k_12 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto l_12;
  l_12 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(l_1);
  goto n_14;
  l_1 :
  goto k_1;
  n_14 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto i_11;
  i_11 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_11;
  j_11 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto k_11;
  k_11 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(n_1);
  goto o_14;
  n_1 :
  goto m_1;
  o_14 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  m_1 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto m_11;
  m_11 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto n_11;
  n_11 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_11;
  o_11 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(p_1);
  goto p_14;
  p_1 :
  goto o_1;
  p_14 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  o_1 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(q_1);
  q_14 :
  Epushd(2,9);
  MoveTop(2,1);
  goto v_11;
  v_11 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto w_11;
  w_11 :
  TestFunFC(j_1,&&u_1,Egetd(2,2));
  goto x_11;
  x_11 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto y_11;
  y_11 :
  TestFunFC(j_1,&&fail,Egetd(2,6));
  goto z_11;
  z_11 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(t_1);
  goto r_14;
  u_1 :
  TestFunFC(a_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto a_12;
  a_12 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto b_12;
  b_12 :
  TestFunFC(a_1,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto c_12;
  c_12 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(t_1);
  goto s_14;
  t_1 :
  goto s_1;
  s_14 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(x_1);
  goto q_14;
  x_1 :
  OneNextSon();
  Ccall(_stratego_r_8);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto s_11;
  s_11 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto t_11;
  t_11 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto u_11;
  u_11 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(y_1);
  goto t_14;
  y_1 :
  goto w_1;
  t_14 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  w_1 :
  Epopd(3,5);
  Return();
  s_1 :
  goto r_1;
  r_14 :
  Tset(App0("Nil"));
  Return();
  r_1 :
  Epopd(2,9);
  Return();
  q_1 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto f_12;
  f_12 :
  TestFunFC(a_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto g_12;
  g_12 :
  TestFunFC(a_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto h_12;
  h_12 :
  TestFunFC(d_0,&&fail,Egetd(1,9));
  Rpush(a_2);
  goto v_14;
  a_2 :
  goto z_1;
  v_14 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(b_2);
  w_14 :
  Cpush(d_2);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_2);
  goto w_14;
  e_2 :
  AllBuild();
  goto c_2;
  d_2 :
  Ccall(_stratego_b_9);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto f_2;
  c_2 :
  Cpop();
  f_2 :
  Return();
  b_2 :
  Return();
  z_1 :
  Epopd(1,9);
  Return();
  k_1 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_d_9)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_y_8);
  Tpop();
  Cpush(h_2);
  Tdupl();
  Cpush(j_2);
  Epushd(1,1);
  Tset(App2("Cons",App2("TCons",App2("Typed",App1("Var",ATmakeString("a")),App2("Forall",ATmakeString("b"),App1("TVar",ATmakeString("b")))),App2("TCons",App2("Typed",App1("Var",ATmakeString("a")),App2("Forall",ATmakeString("c"),App1("TVar",ATmakeString("c")))),App0("TNil"))),App0("Nil")));
  Rpush(k_2);
  a_18 :
  Cpush(m_2);
  Epushd(2,7);
  MoveTop(2,1);
  goto y_14;
  y_14 :
  TestFunFC(a_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,7,2,1,1);
  goto z_14;
  z_14 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto a_15;
  a_15 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto b_15;
  b_15 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(o_2);
  goto b_18;
  o_2 :
  goto n_2;
  b_18 :
  Epushd(3,1);
  Move(2,3,2,5);
  Move(3,1,2,7);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Epopd(3,1);
  Return();
  n_2 :
  Epopd(2,7);
  goto l_2;
  m_2 :
  Ccontinue(p_2);
  Cpush(r_2);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,3);
  MoveTop(2,1);
  goto d_15;
  d_15 :
  TestFunFC(u_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(t_2);
  goto c_18;
  t_2 :
  goto s_2;
  c_18 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Return();
  s_2 :
  Epopd(2,3);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,3);
  MoveTop(2,1);
  goto f_15;
  f_15 :
  TestFunFC(u_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(w_2);
  goto d_18;
  w_2 :
  goto v_2;
  d_18 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Return();
  v_2 :
  Epopd(2,3);
  OneNextSon();
  Ccall(_stratego_r_8);
  AllBuild();
  AllBuild();
  OneNextSon();
  AllBuild();
  goto q_2;
  r_2 :
  goto x_2;
  q_2 :
  Cpop();
  x_2 :
  Ccall(_stratego_c_9);
  goto l_2;
  p_2 :
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_8);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_z_8);
  goto y_2;
  l_2 :
  Cpop();
  y_2 :
  Cpush(b_3);
  Ccall(_stratego_b_9);
  goto a_3;
  b_3 :
  Rpush(d_3);
  goto a_18;
  d_3 :
  goto c_3;
  a_3 :
  Cpop();
  c_3 :
  Return();
  k_2 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto i_2;
  j_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_y_8);
  Ccall(_stratego_z_8);
  goto e_3;
  i_2 :
  Cpop();
  e_3 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(0,2);
  Tpop();
  Cpush(g_3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto f_3;
  g_3 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_8);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_8);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_z_8);
  goto h_3;
  f_3 :
  Cpop();
  h_3 :
  Tpop();
  Ccall(_stratego_v_8);
  goto g_2;
  h_2 :
  Ccall(_stratego_x_8);
  goto i_3;
  g_2 :
  Cpop();
  i_3 :
  Epopd(0,2);
ENDPROC

DOIT

