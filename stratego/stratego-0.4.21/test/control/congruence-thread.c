#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,v_2);
VARDECL(AFun,r_2);
VARDECL(AFun,l_2);
VARDECL(AFun,k_2);
VARDECL(AFun,h_1);
VARDECL(AFun,r_0);
VARDECL(AFun,q_0);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_o_11);
PROCDECL(_stratego_p_11);
PROCDECL(_stratego_q_11);
PROCDECL(_stratego_r_11);
PROCDECL(_stratego_s_11);
PROCDECL(_stratego_t_11);
PROCDECL(_stratego_u_11);
PROCDECL(_stratego_v_11);
PROCDECL(_stratego_w_11);
PROCDECL(_stratego_x_11);
PROCDECL(_stratego_y_11);
PROCDECL(_stratego_z_11);
PROCDECL(_stratego_a_12);
PROCDECL(_stratego_b_12);

PROC(_stratego_init_afuns)
  MOVE(v_2,ATmakeAFun("lit",1,0));
  MOVE(r_2,ATmakeAFun("sort",1,0));
  MOVE(l_2,ATmakeAFun("Nil",0,0));
  MOVE(k_2,ATmakeAFun("Cons",2,0));
  MOVE(h_1,ATmakeAFun("Id",0,0));
  MOVE(r_0,ATmakeAFun("If",3,0));
  MOVE(q_0,ATmakeAFun("Pair",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("congruence-env-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_11);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_p_11);
  Ccall(_stratego_u_11);
  Ccall(_stratego_a_12);
  Ccall(_stratego_b_12);
  Ccall(_stratego_q_11);
  Ccall(_stratego_s_11);
ENDPROC

PROC(_stratego_o_11)
  _ST_printnl();
ENDPROC

PROC(_stratego_p_11)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_q_11)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_11);
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
  Ccall(_stratego_o_11);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_r_11);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_r_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_3;
  x_3 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto z_3;
  c_0 :
  goto b_0;
  z_3 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_11)
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
  goto b_4;
  b_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto f_4;
  h_0 :
  goto g_0;
  f_4 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_r_11);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_t_11);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_t_11);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_t_11)
  _ST_exit();
ENDPROC

PROC(_stratego_u_11)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("congruence-dist-test"));
  Ccall(_stratego_y_11);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Epushd(1,6);
  Tset(App2("Pair",App3("If",App0("Id"),App0("Id"),App0("Id")),App0("Nil")));
  MoveTop(1,1);
  goto l_4;
  l_4 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,6,1,1,1);
  goto m_4;
  m_4 :
  TestFunFC(r_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  MoveArg(1,5,1,2,2);
  Rpush(p_0);
  goto l_7;
  p_0 :
  goto o_0;
  l_7 :
  NotNULLd(1,3);
  NotNULLd(1,4);
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App3("If",App2("Pair",Egetd(1,3),Egetd(1,6)),App2("Pair",Egetd(1,4),Egetd(1,6)),App2("Pair",Egetd(1,5),Egetd(1,6))));
  Tdupl();
  NotNULLd(1,3);
  NotNULLd(1,4);
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App3("If",App2("Pair",Egetd(1,3),Egetd(1,6)),App2("Pair",Egetd(1,4),Egetd(1,6)),App2("Pair",Egetd(1,5),Egetd(1,6))));
  MoveTop(0,1);
  Tpop();
  Return();
  o_0 :
  Epopd(1,6);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_y_11);
  Ccall(_stratego_z_11);
  goto s_0;
  m_0 :
  Cpop();
  s_0 :
  Tset(App3("If",App2("Pair",App0("Id"),App0("Nil")),App2("Pair",App0("Id"),App0("Nil")),App2("Pair",App0("Id"),App0("Nil"))));
  Tdupl();
  Tset(App3("If",App2("Pair",App0("Id"),App0("Nil")),App2("Pair",App0("Id"),App0("Nil")),App2("Pair",App0("Id"),App0("Nil"))));
  MoveTop(0,2);
  Tpop();
  Cpush(u_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto t_0;
  u_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_11);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_11);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_z_11);
  goto v_0;
  t_0 :
  Cpop();
  v_0 :
  Tpop();
  Ccall(_stratego_v_11);
  goto j_0;
  l_0 :
  Ccall(_stratego_x_11);
  goto w_0;
  j_0 :
  Cpop();
  w_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_11)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_w_11);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_11);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_w_11)
  _ST_add();
ENDPROC

PROC(_stratego_x_11)
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
  Ccall(_stratego_w_11);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_r_11);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_y_11)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_o_11);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_z_11)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto e_9;
  e_9 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto f_9;
  f_9 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto g_9;
  g_9 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(y_0);
  goto p_9;
  y_0 :
  goto x_0;
  p_9 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  x_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_a_12)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("congruence-thread-test"));
  Ccall(_stratego_y_11);
  Tpop();
  Cpush(a_1);
  Tdupl();
  Cpush(c_1);
  Epushd(1,6);
  Tset(App2("Pair",App3("If",App0("Id"),App0("Id"),App0("Id")),App0("Zero")));
  MoveTop(1,1);
  goto i_12;
  i_12 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,6,1,1,1);
  goto j_12;
  j_12 :
  TestFunFC(r_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  MoveArg(1,5,1,2,2);
  Rpush(e_1);
  goto g_15;
  e_1 :
  goto d_1;
  g_15 :
  Epushd(2,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("Pair",Egetd(1,3),Egetd(1,6)));
  MoveTop(2,1);
  goto f_12;
  f_12 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto g_12;
  g_12 :
  TestFunFC(h_1,&&fail,Egetd(2,2));
  Rpush(g_1);
  goto h_15;
  g_1 :
  goto f_1;
  h_15 :
  Epushd(3,3);
  NotNULLd(2,3);
  Tset(App2("Pair",App0("Id"),App1("Succ",Egetd(2,3))));
  MoveTop(3,1);
  goto e_12;
  e_12 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_1);
  goto i_15;
  j_1 :
  goto i_1;
  i_15 :
  Epushd(4,3);
  NotNULLd(1,4);
  NotNULLd(3,3);
  Tset(App2("Pair",Egetd(1,4),Egetd(3,3)));
  MoveTop(4,1);
  goto c_12;
  c_12 :
  TestFunFC(q_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto d_12;
  d_12 :
  TestFunFC(h_1,&&fail,Egetd(4,2));
  Rpush(l_1);
  goto j_15;
  l_1 :
  goto k_1;
  j_15 :
  Epushd(5,3);
  NotNULLd(4,3);
  Tset(App2("Pair",App0("Id"),App1("Succ",Egetd(4,3))));
  MoveTop(5,1);
  goto j_11;
  j_11 :
  TestFunFC(q_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(n_1);
  goto k_15;
  n_1 :
  goto m_1;
  k_15 :
  Epushd(6,3);
  NotNULLd(1,5);
  NotNULLd(5,3);
  Tset(App2("Pair",Egetd(1,5),Egetd(5,3)));
  MoveTop(6,1);
  goto s_10;
  s_10 :
  TestFunFC(q_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto i_11;
  i_11 :
  TestFunFC(h_1,&&fail,Egetd(6,2));
  Rpush(p_1);
  goto l_15;
  p_1 :
  goto o_1;
  l_15 :
  Epushd(7,3);
  NotNULLd(6,3);
  Tset(App2("Pair",App0("Id"),App1("Succ",Egetd(6,3))));
  MoveTop(7,1);
  goto r_10;
  r_10 :
  TestFunFC(q_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(r_1);
  goto m_15;
  r_1 :
  goto q_1;
  m_15 :
  NotNULLd(3,2);
  NotNULLd(5,2);
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("Pair",App3("If",Egetd(3,2),Egetd(5,2),Egetd(7,2)),Egetd(7,3)));
  Return();
  q_1 :
  Epopd(7,3);
  Return();
  o_1 :
  Epopd(6,3);
  Return();
  m_1 :
  Epopd(5,3);
  Return();
  k_1 :
  Epopd(4,3);
  Return();
  i_1 :
  Epopd(3,3);
  Return();
  f_1 :
  MoveTop(2,4);
  Move(0,1,2,4);
  Epopd(2,4);
  Return();
  d_1 :
  Epopd(1,6);
  goto b_1;
  c_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_y_11);
  Ccall(_stratego_z_11);
  goto s_1;
  b_1 :
  Cpop();
  s_1 :
  Tset(App2("Pair",App3("If",App0("Id"),App0("Id"),App0("Id")),App1("Succ",App1("Succ",App1("Succ",App0("Zero"))))));
  Tdupl();
  Tset(App2("Pair",App3("If",App0("Id"),App0("Id"),App0("Id")),App1("Succ",App1("Succ",App1("Succ",App0("Zero"))))));
  MoveTop(0,2);
  Tpop();
  Cpush(u_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto t_1;
  u_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_11);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_11);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_z_11);
  goto w_1;
  t_1 :
  Cpop();
  w_1 :
  Tpop();
  Ccall(_stratego_v_11);
  goto z_0;
  a_1 :
  Ccall(_stratego_x_11);
  goto x_1;
  z_0 :
  Cpop();
  x_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_b_12)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("congruence-thread-test2"));
  Ccall(_stratego_y_11);
  Tpop();
  Cpush(z_1);
  Tdupl();
  Cpush(b_2);
  Epushd(1,1);
  Tset(App2("Pair",App2("Cons",App1("sort",ATmakeString("Do")),App2("Cons",App1("lit",ATmakeString("1")),App2("Cons",App1("sort",ATmakeString("Plus")),App2("Cons",App1("lit",ATmakeString("2")),App0("Nil"))))),MakeInt(1)));
  Cpush(d_2);
  Rpush(e_2);
  g_21 :
  Epushd(2,5);
  MoveTop(2,3);
  goto o_16;
  o_16 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_16;
  p_16 :
  TestFunFC(k_2,&&j_2,Egetd(2,4));
  MoveArg(2,1,2,4,0);
  MoveArg(2,2,2,4,1);
  Rpush(i_2);
  goto h_21;
  j_2 :
  TestFunFC(l_2,&&fail,Egetd(2,4));
  Rpush(i_2);
  goto o_21;
  i_2 :
  goto h_2;
  o_21 :
  NotNULLd(2,5);
  Tset(App2("Pair",App0("Nil"),Egetd(2,5)));
  Return();
  h_2 :
  goto g_2;
  h_21 :
  Epushd(3,3);
  NotNULLd(2,1);
  NotNULLd(2,5);
  Tset(App2("Pair",Egetd(2,1),Egetd(2,5)));
  Cpush(o_2);
  Epushd(4,4);
  MoveTop(4,1);
  goto e_16;
  e_16 :
  TestFunFC(q_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,4,4,1,1);
  goto f_16;
  f_16 :
  TestFunFC(r_2,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  Rpush(q_2);
  goto i_21;
  q_2 :
  goto p_2;
  i_21 :
  Epushd(5,1);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(4,4),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_w_11);
  MoveTop(5,1);
  NotNULLd(4,4);
  NotNULLd(5,1);
  Tset(App2("Pair",Egetd(4,4),Egetd(5,1)));
  Epopd(5,1);
  Return();
  p_2 :
  Epopd(4,4);
  goto n_2;
  o_2 :
  Ccontinue(s_2);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Epushd(4,2);
  MoveTop(4,1);
  goto h_16;
  h_16 :
  TestFunFC(v_2,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(u_2);
  goto k_21;
  u_2 :
  goto t_2;
  k_21 :
  NotNULLd(4,2);
  Tset(App1("KW",Egetd(4,2)));
  Return();
  t_2 :
  Epopd(4,2);
  OneNextSon();
  AllBuild();
  goto n_2;
  s_2 :
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Epushd(4,2);
  MoveTop(4,1);
  goto j_16;
  j_16 :
  TestFunFC(v_2,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(y_2);
  goto l_21;
  y_2 :
  goto x_2;
  l_21 :
  NotNULLd(4,2);
  Tset(App1("KW",Egetd(4,2)));
  Return();
  x_2 :
  Epopd(4,2);
  OneNextSon();
  AllBuild();
  goto w_2;
  n_2 :
  Cpop();
  w_2 :
  MoveTop(3,1);
  goto n_16;
  n_16 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(z_2);
  goto m_21;
  z_2 :
  goto m_2;
  m_21 :
  Epushd(4,3);
  NotNULLd(2,2);
  NotNULLd(3,3);
  Tset(App2("Pair",Egetd(2,2),Egetd(3,3)));
  Rpush(b_3);
  goto g_21;
  b_3 :
  MoveTop(4,1);
  goto m_16;
  m_16 :
  TestFunFC(q_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(c_3);
  goto n_21;
  c_3 :
  goto a_3;
  n_21 :
  NotNULLd(3,2);
  NotNULLd(4,2);
  NotNULLd(4,3);
  Tset(App2("Pair",App2("Cons",Egetd(3,2),Egetd(4,2)),Egetd(4,3)));
  Return();
  a_3 :
  Epopd(4,3);
  Return();
  m_2 :
  Epopd(3,3);
  Return();
  g_2 :
  Epopd(2,5);
  Return();
  e_2 :
  goto c_2;
  d_2 :
  Rpush(e_3);
  p_21 :
  Epushd(2,5);
  MoveTop(2,3);
  goto e_17;
  e_17 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto f_17;
  f_17 :
  TestFunFC(k_2,&&i_3,Egetd(2,4));
  MoveArg(2,1,2,4,0);
  MoveArg(2,2,2,4,1);
  Rpush(h_3);
  goto q_21;
  i_3 :
  TestFunFC(l_2,&&fail,Egetd(2,4));
  Rpush(h_3);
  goto x_21;
  h_3 :
  goto g_3;
  x_21 :
  NotNULLd(2,5);
  Tset(App2("Pair",App0("Nil"),Egetd(2,5)));
  Return();
  g_3 :
  goto f_3;
  q_21 :
  Epushd(3,3);
  NotNULLd(2,1);
  NotNULLd(2,5);
  Tset(App2("Pair",Egetd(2,1),Egetd(2,5)));
  Cpush(l_3);
  Epushd(4,4);
  MoveTop(4,1);
  goto u_16;
  u_16 :
  TestFunFC(q_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,4,4,1,1);
  goto v_16;
  v_16 :
  TestFunFC(r_2,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  Rpush(n_3);
  goto r_21;
  n_3 :
  goto m_3;
  r_21 :
  Epushd(5,1);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(4,4),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_w_11);
  MoveTop(5,1);
  NotNULLd(4,4);
  NotNULLd(5,1);
  Tset(App2("Pair",Egetd(4,4),Egetd(5,1)));
  Epopd(5,1);
  Return();
  m_3 :
  Epopd(4,4);
  goto k_3;
  l_3 :
  Ccontinue(o_3);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Epushd(4,2);
  MoveTop(4,1);
  goto x_16;
  x_16 :
  TestFunFC(v_2,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(q_3);
  goto t_21;
  q_3 :
  goto p_3;
  t_21 :
  NotNULLd(4,2);
  Tset(App1("KW",Egetd(4,2)));
  Return();
  p_3 :
  Epopd(4,2);
  OneNextSon();
  AllBuild();
  goto k_3;
  o_3 :
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Epushd(4,2);
  MoveTop(4,1);
  goto z_16;
  z_16 :
  TestFunFC(v_2,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(t_3);
  goto u_21;
  t_3 :
  goto s_3;
  u_21 :
  NotNULLd(4,2);
  Tset(App1("KW",Egetd(4,2)));
  Return();
  s_3 :
  Epopd(4,2);
  OneNextSon();
  AllBuild();
  goto r_3;
  k_3 :
  Cpop();
  r_3 :
  MoveTop(3,1);
  goto d_17;
  d_17 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(u_3);
  goto v_21;
  u_3 :
  goto j_3;
  v_21 :
  Epushd(4,3);
  NotNULLd(2,2);
  NotNULLd(3,3);
  Tset(App2("Pair",Egetd(2,2),Egetd(3,3)));
  Rpush(w_3);
  goto p_21;
  w_3 :
  MoveTop(4,1);
  goto c_17;
  c_17 :
  TestFunFC(q_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(a_4);
  goto w_21;
  a_4 :
  goto v_3;
  w_21 :
  NotNULLd(3,2);
  NotNULLd(4,2);
  NotNULLd(4,3);
  Tset(App2("Pair",App2("Cons",Egetd(3,2),Egetd(4,2)),Egetd(4,3)));
  Return();
  v_3 :
  Epopd(4,3);
  Return();
  j_3 :
  Epopd(3,3);
  Return();
  f_3 :
  Epopd(2,5);
  Return();
  e_3 :
  goto d_3;
  c_2 :
  Cpop();
  d_3 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto a_2;
  b_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_y_11);
  Ccall(_stratego_z_11);
  goto d_4;
  a_2 :
  Cpop();
  d_4 :
  Tset(App2("Pair",App2("Cons",MakeInt(1),App2("Cons",App1("KW",ATmakeString("1")),App2("Cons",MakeInt(2),App2("Cons",App1("KW",ATmakeString("2")),App0("Nil"))))),MakeInt(3)));
  Tdupl();
  Tset(App2("Pair",App2("Cons",MakeInt(1),App2("Cons",App1("KW",ATmakeString("1")),App2("Cons",MakeInt(2),App2("Cons",App1("KW",ATmakeString("2")),App0("Nil"))))),MakeInt(3)));
  MoveTop(0,2);
  Tpop();
  Cpush(g_4);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto e_4;
  g_4 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_11);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_11);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_z_11);
  goto h_4;
  e_4 :
  Cpop();
  h_4 :
  Tpop();
  Ccall(_stratego_v_11);
  goto y_1;
  z_1 :
  Ccall(_stratego_x_11);
  goto i_4;
  y_1 :
  Cpop();
  i_4 :
  Epopd(0,2);
ENDPROC

DOIT

