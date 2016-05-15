#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,f_1);
VARDECL(AFun,e_1);
VARDECL(AFun,d_1);
VARDECL(AFun,b_1);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_i_9);
PROCDECL(_stratego_j_9);
PROCDECL(_stratego_k_9);
PROCDECL(_stratego_l_9);
PROCDECL(_stratego_m_9);
PROCDECL(_stratego_n_9);
PROCDECL(_stratego_o_9);
PROCDECL(_stratego_p_9);
PROCDECL(_stratego_q_9);
PROCDECL(_stratego_r_9);
PROCDECL(_stratego_s_9);
PROCDECL(_stratego_t_9);
PROCDECL(_stratego_u_9);
PROCDECL(_stratego_v_9);
PROCDECL(_stratego_w_9);
PROCDECL(_stratego_x_9);
PROCDECL(_stratego_y_9);
PROCDECL(_stratego_z_9);

PROC(_stratego_init_afuns)
  MOVE(f_1,ATmakeAFun("If",3,0));
  MOVE(e_1,ATmakeAFun("False",0,0));
  MOVE(d_1,ATmakeAFun("True",0,0));
  MOVE(b_1,ATmakeAFun("If",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("overloading-constructors-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_9);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_j_9);
  Ccall(_stratego_o_9);
  Ccall(_stratego_v_9);
  Ccall(_stratego_w_9);
  Ccall(_stratego_x_9);
  Ccall(_stratego_y_9);
  Ccall(_stratego_z_9);
  Ccall(_stratego_k_9);
  Ccall(_stratego_m_9);
ENDPROC

PROC(_stratego_i_9)
  _ST_printnl();
ENDPROC

PROC(_stratego_j_9)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_k_9)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_9);
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
  Ccall(_stratego_i_9);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_l_9);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_l_9)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_4;
  k_4 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto m_4;
  c_0 :
  goto b_0;
  m_4 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_9)
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
  goto a_5;
  a_5 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto c_5;
  h_0 :
  goto g_0;
  c_5 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_l_9);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_n_9);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_n_9);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_n_9)
  _ST_exit();
ENDPROC

PROC(_stratego_o_9)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("eval-test1"));
  Ccall(_stratego_s_9);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Epushd(1,1);
  Tset(App2("If",App0("True"),App2("Assign",ATmakeString("x"),App1("Var",ATmakeString("y")))));
  Ccall(_stratego_u_9);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_9);
  Ccall(_stratego_t_9);
  goto o_0;
  m_0 :
  Cpop();
  o_0 :
  Tset(App2("Assign",ATmakeString("x"),App1("Var",ATmakeString("y"))));
  Tdupl();
  Tset(App2("Assign",ATmakeString("x"),App1("Var",ATmakeString("y"))));
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
  Ccall(_stratego_i_9);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_9);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_t_9);
  goto r_0;
  p_0 :
  Cpop();
  r_0 :
  Tpop();
  Ccall(_stratego_p_9);
  goto j_0;
  l_0 :
  Ccall(_stratego_r_9);
  goto s_0;
  j_0 :
  Cpop();
  s_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_p_9)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_q_9);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_l_9);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_q_9)
  _ST_add();
ENDPROC

PROC(_stratego_r_9)
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
  Ccall(_stratego_q_9);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_l_9);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_s_9)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_i_9);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_t_9)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto n_10;
  n_10 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto o_10;
  o_10 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto p_10;
  p_10 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(u_0);
  goto y_10;
  u_0 :
  goto t_0;
  y_10 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  t_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_u_9)
  Epushd(0,4);
  MoveTop(0,1);
  goto d_11;
  d_11 :
  TestFunFC(b_1,&&a_1,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto e_11;
  e_11 :
  TestFunFC(d_1,&&c_1,Egetd(0,2));
  Rpush(z_0);
  goto q_11;
  c_1 :
  TestFunFC(e_1,&&fail,Egetd(0,2));
  Rpush(z_0);
  goto r_11;
  a_1 :
  TestFunFC(f_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  goto f_11;
  f_11 :
  TestFunFC(d_1,&&g_1,Egetd(0,2));
  Rpush(z_0);
  goto s_11;
  g_1 :
  TestFunFC(e_1,&&fail,Egetd(0,2));
  Rpush(z_0);
  goto t_11;
  z_0 :
  goto y_0;
  t_11 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Return();
  y_0 :
  goto x_0;
  s_11 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  x_0 :
  goto w_0;
  r_11 :
  Tset(App0("Skip"));
  Return();
  w_0 :
  goto v_0;
  q_11 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  v_0 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_v_9)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("eval-test1"));
  Ccall(_stratego_s_9);
  Tpop();
  Cpush(i_1);
  Tdupl();
  Cpush(k_1);
  Epushd(1,1);
  Tset(App2("If",App0("False"),App2("Assign",ATmakeString("x"),App1("Var",ATmakeString("y")))));
  Ccall(_stratego_u_9);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto j_1;
  k_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_9);
  Ccall(_stratego_t_9);
  goto l_1;
  j_1 :
  Cpop();
  l_1 :
  Tset(App0("Skip"));
  Tdupl();
  Tset(App0("Skip"));
  MoveTop(0,2);
  Tpop();
  Cpush(n_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto m_1;
  n_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_9);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_9);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_t_9);
  goto o_1;
  m_1 :
  Cpop();
  o_1 :
  Tpop();
  Ccall(_stratego_p_9);
  goto h_1;
  i_1 :
  Ccall(_stratego_r_9);
  goto p_1;
  h_1 :
  Cpop();
  p_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_w_9)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("eval-test3"));
  Ccall(_stratego_s_9);
  Tpop();
  Cpush(r_1);
  Tdupl();
  Cpush(t_1);
  Epushd(1,1);
  Tset(App3("If",App0("True"),App2("Assign",ATmakeString("x"),App1("Var",ATmakeString("y"))),App2("Assign",ATmakeString("a"),App1("Var",ATmakeString("b")))));
  Ccall(_stratego_u_9);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto s_1;
  t_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_9);
  Ccall(_stratego_t_9);
  goto u_1;
  s_1 :
  Cpop();
  u_1 :
  Tset(App2("Assign",ATmakeString("x"),App1("Var",ATmakeString("y"))));
  Tdupl();
  Tset(App2("Assign",ATmakeString("x"),App1("Var",ATmakeString("y"))));
  MoveTop(0,2);
  Tpop();
  Cpush(x_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto w_1;
  x_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_9);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_9);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_t_9);
  goto y_1;
  w_1 :
  Cpop();
  y_1 :
  Tpop();
  Ccall(_stratego_p_9);
  goto q_1;
  r_1 :
  Ccall(_stratego_r_9);
  goto z_1;
  q_1 :
  Cpop();
  z_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_x_9)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("eval-test4"));
  Ccall(_stratego_s_9);
  Tpop();
  Cpush(b_2);
  Tdupl();
  Cpush(d_2);
  Epushd(1,1);
  Tset(App3("If",App0("False"),App2("Assign",ATmakeString("x"),App1("Var",ATmakeString("y"))),App2("Assign",ATmakeString("a"),App1("Var",ATmakeString("b")))));
  Ccall(_stratego_u_9);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto c_2;
  d_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_9);
  Ccall(_stratego_t_9);
  goto e_2;
  c_2 :
  Cpop();
  e_2 :
  Tset(App2("Assign",ATmakeString("a"),App1("Var",ATmakeString("b"))));
  Tdupl();
  Tset(App2("Assign",ATmakeString("a"),App1("Var",ATmakeString("b"))));
  MoveTop(0,2);
  Tpop();
  Cpush(g_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto f_2;
  g_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_9);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_9);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_t_9);
  goto h_2;
  f_2 :
  Cpop();
  h_2 :
  Tpop();
  Ccall(_stratego_p_9);
  goto a_2;
  b_2 :
  Ccall(_stratego_r_9);
  goto i_2;
  a_2 :
  Cpop();
  i_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_y_9)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("eval-test5"));
  Ccall(_stratego_s_9);
  Tpop();
  Cpush(k_2);
  Tdupl();
  Cpush(m_2);
  Epushd(1,5);
  Tset(App2("If",App0("True"),App2("Assign",ATmakeString("x"),App1("Var",ATmakeString("y")))));
  MoveTop(1,2);
  goto v_17;
  v_17 :
  TestFunFC(f_1,&&s_2,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  MoveArg(1,1,1,2,2);
  goto w_17;
  w_17 :
  TestFunFC(d_1,&&t_2,Egetd(1,3));
  Rpush(r_2);
  goto u_19;
  t_2 :
  TestFunFC(e_1,&&fail,Egetd(1,3));
  Rpush(r_2);
  goto v_19;
  s_2 :
  TestFunFC(b_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto x_17;
  x_17 :
  TestFunFC(d_1,&&u_2,Egetd(1,3));
  Rpush(r_2);
  goto w_19;
  u_2 :
  TestFunFC(e_1,&&fail,Egetd(1,3));
  Rpush(r_2);
  goto x_19;
  r_2 :
  goto q_2;
  x_19 :
  Tset(App0("Skip"));
  Return();
  q_2 :
  goto p_2;
  w_19 :
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Return();
  p_2 :
  goto o_2;
  v_19 :
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Return();
  o_2 :
  goto n_2;
  u_19 :
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Return();
  n_2 :
  MoveTop(1,5);
  Move(0,1,1,5);
  Epopd(1,5);
  goto l_2;
  m_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_9);
  Ccall(_stratego_t_9);
  goto v_2;
  l_2 :
  Cpop();
  v_2 :
  Tset(App2("Assign",ATmakeString("x"),App1("Var",ATmakeString("y"))));
  Tdupl();
  Tset(App2("Assign",ATmakeString("x"),App1("Var",ATmakeString("y"))));
  MoveTop(0,2);
  Tpop();
  Cpush(x_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto w_2;
  x_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_9);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_9);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_t_9);
  goto y_2;
  w_2 :
  Cpop();
  y_2 :
  Tpop();
  Ccall(_stratego_p_9);
  goto j_2;
  k_2 :
  Ccall(_stratego_r_9);
  goto z_2;
  j_2 :
  Cpop();
  z_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_z_9)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("eval-test6"));
  Ccall(_stratego_s_9);
  Tpop();
  Cpush(b_3);
  Tdupl();
  Cpush(e_3);
  Epushd(1,1);
  Tset(App2("If",App0("False"),App2("Assign",ATmakeString("x"),App1("Var",ATmakeString("y")))));
  Cpush(f_3);
  Tdupl();
  Epushd(2,4);
  MoveTop(2,1);
  goto n_20;
  n_20 :
  TestFunFC(f_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  goto o_20;
  o_20 :
  TestFunFC(d_1,&&j_3,Egetd(2,2));
  Rpush(i_3);
  goto j_22;
  j_3 :
  TestFunFC(e_1,&&fail,Egetd(2,2));
  Rpush(i_3);
  goto k_22;
  i_3 :
  goto h_3;
  k_22 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Return();
  h_3 :
  goto g_3;
  j_22 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Return();
  g_3 :
  Epopd(2,4);
  Cpop();
  Crestore();
  Cjump();
  f_3 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto c_3;
  e_3 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_9);
  Ccall(_stratego_t_9);
  goto k_3;
  c_3 :
  Cpop();
  k_3 :
  Tset(App2("If",App0("False"),App2("Assign",ATmakeString("x"),App1("Var",ATmakeString("y")))));
  Tdupl();
  Tset(App2("If",App0("False"),App2("Assign",ATmakeString("x"),App1("Var",ATmakeString("y")))));
  MoveTop(0,2);
  Tpop();
  Cpush(m_3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto l_3;
  m_3 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_9);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_9);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_t_9);
  goto n_3;
  l_3 :
  Cpop();
  n_3 :
  Tpop();
  Ccall(_stratego_p_9);
  goto a_3;
  b_3 :
  Ccall(_stratego_r_9);
  goto o_3;
  a_3 :
  Cpop();
  o_3 :
  Epopd(0,2);
ENDPROC
