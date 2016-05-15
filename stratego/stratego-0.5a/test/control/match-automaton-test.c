#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,z_0);
VARDECL(AFun,x_0);
VARDECL(AFun,v_0);
VARDECL(AFun,t_0);
VARDECL(AFun,r_0);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
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

PROC(_stratego_init_afuns)
  MOVE(z_0,ATmakeAFun("A",0,0));
  MOVE(x_0,ATmakeAFun("B",0,0));
  MOVE(v_0,ATmakeAFun("C",0,0));
  MOVE(t_0,ATmakeAFun("G",2,0));
  MOVE(r_0,ATmakeAFun("F",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("match-automaton-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_n_2);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_o_2);
  Ccall(_stratego_t_2);
  Ccall(_stratego_z_2);
  Ccall(_stratego_p_2);
  Ccall(_stratego_r_2);
ENDPROC

PROC(_stratego_n_2)
  _ST_printnl();
ENDPROC

PROC(_stratego_o_2)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_p_2)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_n_2);
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
  Ccall(_stratego_n_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_q_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_q_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_4;
  t_4 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto v_4;
  c_0 :
  goto b_0;
  v_4 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_2)
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
  goto x_4;
  x_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto z_4;
  h_0 :
  goto g_0;
  z_4 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_q_2);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_s_2);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_s_2);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_s_2)
  _ST_exit();
ENDPROC

PROC(_stratego_t_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("failure-in-case1"));
  Ccall(_stratego_x_2);
  Tpop();
  Cpush(k_0);
  Tdupl();
  Cpush(m_0);
  Epushd(1,6);
  Tset(App2("F",App0("A"),App2("G",App0("B"),App0("D"))));
  MoveTop(1,1);
  goto c_5;
  c_5 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_5;
  d_5 :
  TestFunFC(t_0,&&s_0,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto e_5;
  e_5 :
  TestFunFC(v_0,&&u_0,Egetd(1,5));
  goto f_5;
  f_5 :
  TestFunFC(x_0,&&w_0,Egetd(1,4));
  goto g_5;
  g_5 :
  TestFunFC(z_0,&&y_0,Egetd(1,2));
  Cpush(b_1);
  Rpush(c_1);
  goto c_7;
  c_1 :
  goto a_1;
  b_1 :
  Rpush(e_1);
  goto d_7;
  e_1 :
  goto d_1;
  a_1 :
  Cpop();
  d_1 :
  goto q_0;
  y_0 :
  Rpush(q_0);
  goto d_7;
  w_0 :
  goto h_5;
  h_5 :
  TestFunFC(z_0,&&fail,Egetd(1,2));
  Rpush(q_0);
  goto c_7;
  u_0 :
  goto i_5;
  i_5 :
  f_1 :
  goto h_5;
  s_0 :
  goto h_5;
  q_0 :
  goto o_0;
  d_7 :
  Tset(App0("B"));
  Return();
  o_0 :
  goto n_0;
  c_7 :
  Tset(App0("A"));
  Return();
  n_0 :
  MoveTop(1,6);
  Move(0,1,1,6);
  Epopd(1,6);
  goto l_0;
  m_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_x_2);
  Ccall(_stratego_y_2);
  goto g_1;
  l_0 :
  Cpop();
  g_1 :
  Tset(App0("A"));
  Tdupl();
  Tset(App0("A"));
  MoveTop(0,2);
  Tpop();
  Cpush(i_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto h_1;
  i_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_n_2);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_n_2);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_y_2);
  goto j_1;
  h_1 :
  Cpop();
  j_1 :
  Tpop();
  Ccall(_stratego_u_2);
  goto j_0;
  k_0 :
  Ccall(_stratego_w_2);
  goto k_1;
  j_0 :
  Cpop();
  k_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_u_2)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_v_2);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_v_2)
  _ST_add();
ENDPROC

PROC(_stratego_w_2)
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
  Ccall(_stratego_v_2);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_q_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_x_2)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_n_2);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_y_2)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto r_8;
  r_8 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto s_8;
  s_8 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto t_8;
  t_8 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(m_1);
  goto c_9;
  m_1 :
  goto l_1;
  c_9 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  l_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_z_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("failure-in-case2"));
  Ccall(_stratego_x_2);
  Tpop();
  Cpush(o_1);
  Tdupl();
  Cpush(q_1);
  Epushd(1,4);
  Tset(App2("F",App0("A"),App0("D")));
  MoveTop(1,1);
  goto f_9;
  f_9 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_9;
  g_9 :
  TestFunFC(x_0,&&u_1,Egetd(1,3));
  goto h_9;
  h_9 :
  TestFunFC(z_0,&&v_1,Egetd(1,2));
  Cpush(x_1);
  Rpush(y_1);
  goto b_11;
  y_1 :
  goto w_1;
  x_1 :
  Rpush(a_2);
  goto c_11;
  a_2 :
  goto z_1;
  w_1 :
  Cpop();
  z_1 :
  goto t_1;
  v_1 :
  Rpush(t_1);
  goto c_11;
  u_1 :
  goto i_9;
  i_9 :
  TestFunFC(z_0,&&fail,Egetd(1,2));
  Rpush(t_1);
  goto b_11;
  t_1 :
  goto s_1;
  c_11 :
  Tset(App0("B"));
  Return();
  s_1 :
  goto r_1;
  b_11 :
  Tset(App0("A"));
  Return();
  r_1 :
  MoveTop(1,4);
  Move(0,1,1,4);
  Epopd(1,4);
  goto p_1;
  q_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_x_2);
  Ccall(_stratego_y_2);
  goto b_2;
  p_1 :
  Cpop();
  b_2 :
  Tset(App0("A"));
  Tdupl();
  Tset(App0("A"));
  MoveTop(0,2);
  Tpop();
  Cpush(d_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto c_2;
  d_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_n_2);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_n_2);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_y_2);
  goto e_2;
  c_2 :
  Cpop();
  e_2 :
  Tpop();
  Ccall(_stratego_u_2);
  goto n_1;
  o_1 :
  Ccall(_stratego_w_2);
  goto f_2;
  n_1 :
  Cpop();
  f_2 :
  Epopd(0,2);
ENDPROC

DOIT

