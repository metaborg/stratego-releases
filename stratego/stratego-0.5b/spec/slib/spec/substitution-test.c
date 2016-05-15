#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,c_2);
VARDECL(AFun,c_1);
VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
VARDECL(AFun,e_0);
PROCDECL(_stratego_n_2);
PROCDECL(_stratego_o_2);
PROCDECL(_stratego_p_2);
PROCDECL(_stratego_q_2);
PROCDECL(_stratego_r_2);
PROCDECL(_stratego_s_2);
PROCDECL(_stratego_t_2);
PROCDECL(_stratego_u_2);
PROCDECL(_stratego_v_2);
PROCDECL(_stratego_w_2);
PROCDECL(_stratego_x_2);
PROCDECL(_stratego_y_2);
PROCDECL(_stratego_z_2);
PROCDECL(_stratego_a_3);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(c_2,ATmakeAFun("TVar",1,0));
  MOVE(c_1,ATmakeAFun("Nil",0,0));
  MOVE(g_0,ATmakeAFun("TNil",0,0));
  MOVE(f_0,ATmakeAFun("Cons",2,0));
  MOVE(e_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_n_2)
  Rpush(a_0);
  k_3 :
  Epushd(0,11);
  MoveTop(0,5);
  goto b_1;
  b_1 :
  TestFunFC(e_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto h_1;
  h_1 :
  TestFunFC(e_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto i_1;
  i_1 :
  TestFunFC(f_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto o_1;
  o_1 :
  TestFunFC(g_0,&&fail,Egetd(0,11));
  goto p_1;
  p_1 :
  TestFunFC(e_0,&&h_0,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto s_1;
  s_1 :
  TestFunFC(e_0,&&i_0,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto t_1;
  t_1 :
  TestFunFC(g_0,&&j_0,Egetd(0,4));
  Cpush(l_0);
  Rpush(m_0);
  goto p_0;
  m_0 :
  goto k_0;
  l_0 :
  Rpush(o_0);
  goto a_1;
  o_0 :
  goto n_0;
  k_0 :
  Cpop();
  n_0 :
  goto d_0;
  j_0 :
  Rpush(d_0);
  goto a_1;
  i_0 :
  Rpush(d_0);
  goto a_1;
  h_0 :
  Rpush(d_0);
  goto a_1;
  d_0 :
  goto c_0;
  a_1 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(q_0);
  goto k_3;
  q_0 :
  Return();
  c_0 :
  goto b_0;
  p_0 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  b_0 :
  Epopd(0,11);
  Return();
  a_0 :
ENDPROC

PROC(_stratego_o_2)
  Epushd(0,7);
  MoveTop(0,1);
  goto c_4;
  c_4 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto d_4;
  d_4 :
  TestFunFC(e_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto e_4;
  e_4 :
  TestFunFC(g_0,&&u_0,Egetd(0,5));
  Rpush(t_0);
  goto l_3;
  u_0 :
  TestFunFC(e_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto f_4;
  f_4 :
  TestFunFC(g_0,&&fail,Egetd(0,7));
  Rpush(t_0);
  goto m_3;
  t_0 :
  goto s_0;
  m_3 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(v_0);
  q_5 :
  Epushd(2,9);
  MoveTop(2,1);
  goto t_3;
  t_3 :
  TestFunFC(e_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto u_3;
  u_3 :
  TestFunFC(c_1,&&z_0,Egetd(2,2));
  goto v_3;
  v_3 :
  TestFunFC(e_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto w_3;
  w_3 :
  TestFunFC(c_1,&&fail,Egetd(2,6));
  goto x_3;
  x_3 :
  TestFunFC(g_0,&&fail,Egetd(2,9));
  Rpush(y_0);
  goto n_3;
  z_0 :
  TestFunFC(f_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto y_3;
  y_3 :
  TestFunFC(e_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto z_3;
  z_3 :
  TestFunFC(f_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto a_4;
  a_4 :
  TestFunFC(g_0,&&fail,Egetd(2,9));
  Rpush(y_0);
  goto o_3;
  y_0 :
  goto x_0;
  o_3 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Rpush(e_1);
  goto q_5;
  e_1 :
  OneNextSon();
  Ccall(_stratego_x_2);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto q_3;
  q_3 :
  TestFunFC(e_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto r_3;
  r_3 :
  TestFunFC(e_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto s_3;
  s_3 :
  TestFunFC(g_0,&&fail,Egetd(3,5));
  Rpush(f_1);
  goto p_3;
  f_1 :
  goto d_1;
  p_3 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  d_1 :
  Epopd(3,5);
  Return();
  x_0 :
  goto w_0;
  n_3 :
  Tset(App0("Nil"));
  Return();
  w_0 :
  Epopd(2,9);
  Return();
  v_0 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  s_0 :
  goto r_0;
  l_3 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  r_0 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_p_2)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto t_5;
  t_5 :
  TestFunFC(e_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto u_5;
  u_5 :
  TestFunFC(e_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto v_5;
  v_5 :
  TestFunFC(g_0,&&fail,Egetd(0,6));
  Rpush(j_1);
  goto s_5;
  j_1 :
  goto g_1;
  s_5 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  g_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_q_2)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_a_3);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_r_2)
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_s_2);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_x_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_s_2)
  _ST_add();
ENDPROC

PROC(_stratego_t_2)
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_s_2);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_u_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_q_2);
  Tpop();
  Cpush(l_1);
  Tdupl();
  Cpush(n_1);
  Epushd(1,6);
  Tset(App2("TCons",App2("Cons",App1("TVar",ATmakeString("b")),App0("Nil")),App2("TCons",App2("Cons",App1("TVar",ATmakeString("e")),App0("Nil")),App2("TCons",App2("Typed",App1("Var",ATmakeString("a")),App2("Forall",ATmakeString("b"),App1("TVar",ATmakeString("b")))),App0("TNil")))));
  Ccall(_stratego_o_2);
  MoveTop(1,1);
  goto b_7;
  b_7 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_7;
  c_7 :
  TestFunFC(e_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto d_7;
  d_7 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  Rpush(r_1);
  goto v_6;
  r_1 :
  goto q_1;
  v_6 :
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(v_1);
  k_9 :
  Cpush(x_1);
  Epushd(2,3);
  MoveTop(2,1);
  Tdupl();
  Epushd(3,2);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  MoveTop(3,1);
  goto a_7;
  a_7 :
  TestFunFC(c_2,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(b_2);
  goto x_6;
  b_2 :
  goto a_2;
  x_6 :
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Move(2,3,1,2);
  Epopd(4,1);
  Return();
  a_2 :
  Epopd(3,2);
  Tpop();
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  Ccall(_stratego_n_2);
  Epopd(2,3);
  goto w_1;
  x_1 :
  AllInit();
  e_2 :
  AllNextSon(&&h_2);
  Rpush(i_2);
  goto k_9;
  i_2 :
  goto e_2;
  h_2 :
  AllBuild();
  goto d_2;
  w_1 :
  Cpop();
  d_2 :
  Return();
  v_1 :
  Return();
  q_1 :
  MoveTop(1,6);
  Move(0,1,1,6);
  Epopd(1,6);
  goto m_1;
  n_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_q_2);
  Ccall(_stratego_p_2);
  goto j_2;
  m_1 :
  Cpop();
  j_2 :
  Tset(App2("Typed",App1("Var",ATmakeString("a")),App2("Forall",ATmakeString("b"),App1("TVar",ATmakeString("e")))));
  Tdupl();
  Tset(App2("Typed",App1("Var",ATmakeString("a")),App2("Forall",ATmakeString("b"),App1("TVar",ATmakeString("e")))));
  MoveTop(0,2);
  Tpop();
  Cpush(m_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto l_2;
  m_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_3);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_3);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_p_2);
  goto g_3;
  l_2 :
  Cpop();
  g_3 :
  Tpop();
  Ccall(_stratego_t_2);
  goto k_1;
  l_1 :
  Ccall(_stratego_r_2);
  goto i_3;
  k_1 :
  Cpop();
  i_3 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_2)
  _ST_exit();
ENDPROC

PROC(_stratego_w_2)
  Cpush(b_4);
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto m_9;
  m_9 :
  TestInt(0,1,0,&&fail);
  Rpush(p_4);
  goto l_9;
  p_4 :
  goto n_4;
  l_9 :
  Return();
  n_4 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_x_2);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_v_2);
  goto j_3;
  b_4 :
  Tset(MakeInt(1));
  Ccall(_stratego_v_2);
  goto q_4;
  j_3 :
  Cpop();
  q_4 :
ENDPROC

PROC(_stratego_x_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_9;
  p_9 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  Rpush(s_4);
  goto o_9;
  s_4 :
  goto r_4;
  o_9 :
  Return();
  r_4 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_2)
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_3);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_3);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_x_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_z_2)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_a_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("substitution-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_3);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_z_2);
  Ccall(_stratego_u_2);
  Ccall(_stratego_y_2);
  Ccall(_stratego_w_2);
ENDPROC

DOIT

