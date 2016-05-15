#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,q_5);
VARDECL(AFun,f_1);
VARDECL(AFun,e_1);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_f_9);
PROCDECL(_stratego_g_9);
PROCDECL(_stratego_h_9);
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

PROC(_stratego_init_afuns)
  MOVE(q_5,ATmakeAFun("Nil",0,0));
  MOVE(f_1,ATmakeAFun("TNil",0,0));
  MOVE(e_1,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Epushd(0,7);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Program",Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(b_0);
  v_10 :
  Cpush(d_0);
  Cpush(g_0);
  Ccall(_stratego_f_9);
  goto f_0;
  g_0 :
  Epushd(1,5);
  MoveTop(1,1);
  goto l_0;
  l_0 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_0;
  m_0 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  Cpush(q_0);
  Rpush(r_0);
  goto w_10;
  r_0 :
  goto p_0;
  q_0 :
  Rpush(t_0);
  goto a_11;
  t_0 :
  goto s_0;
  p_0 :
  Cpop();
  s_0 :
  goto n_0;
  n_0 :
  goto k_0;
  a_11 :
  Epushd(2,2);
  Tdupl();
  Epushd(3,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,1);
  goto i_0;
  i_0 :
  TestStr(3,1,"-disj",&&fail);
  Rpush(v_0);
  goto b_11;
  v_0 :
  goto u_0;
  b_11 :
  Return();
  u_0 :
  Epopd(3,1);
  Tpop();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_g_9);
  MoveTop(2,1);
  Move(0,2,2,1);
  MoveTop(2,2);
  NotNULLd(2,2);
  NotNULLd(1,5);
  Tset(App2("Cons",Egetd(2,2),Egetd(1,5)));
  Epopd(2,2);
  Return();
  k_0 :
  goto j_0;
  w_10 :
  Epushd(2,2);
  Tdupl();
  Epushd(3,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,1);
  goto e_0;
  e_0 :
  TestStr(3,1,"-conj",&&fail);
  Rpush(x_0);
  goto x_10;
  x_0 :
  goto w_0;
  x_10 :
  Return();
  w_0 :
  Epopd(3,1);
  Tpop();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_g_9);
  MoveTop(2,1);
  Move(0,1,2,1);
  MoveTop(2,2);
  NotNULLd(2,2);
  NotNULLd(1,5);
  Tset(App2("Cons",Egetd(2,2),Egetd(1,5)));
  Epopd(2,2);
  Return();
  j_0 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_0);
  goto v_10;
  y_0 :
  AllBuild();
  Epopd(1,5);
  goto h_0;
  f_0 :
  Cpop();
  h_0 :
  goto c_0;
  d_0 :
  Epushd(1,3);
  MoveTop(1,1);
  goto o_0;
  o_0 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(b_1);
  goto e_11;
  b_1 :
  goto a_1;
  e_11 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Cons",App1("Undefined",Egetd(1,2)),Egetd(1,3)));
  Return();
  a_1 :
  Epopd(1,3);
  goto z_0;
  c_0 :
  Cpop();
  z_0 :
  Return();
  b_0 :
  AllBuild();
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",App1("Atom",ATmakeString("b")),App0("TNil"))));
  MoveTop(0,3);
  goto z_2;
  z_2 :
  TestFunFC(e_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto a_3;
  a_3 :
  TestFunFC(e_1,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto b_3;
  b_3 :
  TestFunFC(f_1,&&fail,Egetd(0,7));
  Rpush(d_1);
  goto f_11;
  d_1 :
  goto c_1;
  f_11 :
  Epushd(1,1);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",Egetd(0,6),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(g_1);
  g_11 :
  Epushd(2,7);
  MoveTop(2,1);
  goto m_2;
  m_2 :
  TestFunFC(e_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto n_2;
  n_2 :
  TestFunFC(e_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_2;
  o_2 :
  TestFunFC(e_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto p_2;
  p_2 :
  TestFunFC(f_1,&&fail,Egetd(2,7));
  Rpush(i_1);
  goto h_11;
  i_1 :
  goto h_1;
  h_11 :
  Epushd(3,7);
  Tdupl();
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_l_9);
  Tpop();
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_k_9);
  MoveTop(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App1("Atom",ATmakeString("a")),App0("TNil"))));
  MoveTop(3,2);
  goto c_2;
  c_2 :
  TestFunFC(e_1,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto d_2;
  d_2 :
  TestFunFC(e_1,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto e_2;
  e_2 :
  TestFunFC(f_1,&&fail,Egetd(3,6));
  Rpush(k_1);
  goto k_11;
  k_1 :
  goto j_1;
  k_11 :
  Epushd(4,1);
  NotNULLd(3,3);
  NotNULLd(3,5);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(l_1);
  l_11 :
  Epushd(5,7);
  MoveTop(5,1);
  goto r_1;
  r_1 :
  TestFunFC(e_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto s_1;
  s_1 :
  TestFunFC(e_1,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto t_1;
  t_1 :
  TestFunFC(e_1,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto u_1;
  u_1 :
  TestFunFC(f_1,&&fail,Egetd(5,7));
  Rpush(w_1);
  goto m_11;
  w_1 :
  goto v_1;
  m_11 :
  Epushd(6,2);
  Tdupl();
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_l_9);
  Tpop();
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_k_9);
  MoveTop(6,1);
  NotNULLd(5,4);
  Tset(Egetd(5,4));
  Tset(App0("TNil"));
  Ccall(_stratego_p_9);
  MoveTop(6,2);
  NotNULLd(6,1);
  NotNULLd(6,2);
  NotNULLd(5,4);
  NotNULLd(5,6);
  Tset(App2("TCons",Egetd(6,1),App2("TCons",Egetd(5,4),App2("TCons",App2("Cons",App2("Or",Egetd(6,2),Egetd(5,4)),Egetd(5,6)),App0("TNil")))));
  Cpush(f_2);
  Epushd(7,7);
  MoveTop(7,1);
  goto m_1;
  m_1 :
  TestFunFC(e_1,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto n_1;
  n_1 :
  TestInt(7,2,0,&&fail);
  goto o_1;
  o_1 :
  TestFunFC(e_1,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto p_1;
  p_1 :
  TestFunFC(e_1,&&fail,Egetd(7,5));
  MoveArg(7,6,7,5,0);
  MoveArg(7,7,7,5,1);
  goto q_1;
  q_1 :
  TestFunFC(f_1,&&fail,Egetd(7,7));
  Rpush(q_2);
  goto r_11;
  q_2 :
  goto g_2;
  r_11 :
  NotNULLd(7,6);
  Tset(Egetd(7,6));
  Return();
  g_2 :
  Epopd(7,7);
  goto b_2;
  f_2 :
  Rpush(w_2);
  goto l_11;
  w_2 :
  goto r_2;
  b_2 :
  Cpop();
  r_2 :
  Epopd(6,2);
  Return();
  v_1 :
  Epopd(5,7);
  Return();
  l_1 :
  Rpush(x_2);
  s_11 :
  Cpush(f_3);
  Ccall(_stratego_f_9);
  Tset(App0("False"));
  goto y_2;
  f_3 :
  Epushd(5,3);
  MoveTop(5,1);
  goto a_2;
  a_2 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(n_3);
  goto t_11;
  n_3 :
  goto m_3;
  t_11 :
  Epushd(6,5);
  NotNULLd(5,2);
  NotNULLd(5,3);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,3),App0("TNil"))));
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Rpush(s_3);
  goto s_11;
  s_3 :
  OneNextSon();
  Ccall(_stratego_o_9);
  AllBuild();
  AllBuild();
  MoveTop(6,1);
  goto x_1;
  x_1 :
  TestFunFC(e_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto y_1;
  y_1 :
  TestFunFC(e_1,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto z_1;
  z_1 :
  TestFunFC(f_1,&&fail,Egetd(6,5));
  Rpush(t_3);
  goto u_11;
  t_3 :
  goto r_3;
  u_11 :
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset(App2("Or",Egetd(6,2),Egetd(6,4)));
  Return();
  r_3 :
  Epopd(6,5);
  Return();
  m_3 :
  Epopd(5,3);
  goto l_3;
  y_2 :
  Cpop();
  l_3 :
  Return();
  x_2 :
  MoveTop(4,1);
  NotNULLd(4,1);
  NotNULLd(2,4);
  Tset(App2("And",Egetd(4,1),Egetd(2,4)));
  Epopd(4,1);
  Return();
  j_1 :
  MoveTop(3,7);
  NotNULLd(3,1);
  NotNULLd(2,4);
  NotNULLd(3,7);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,4),App2("TCons",App2("Cons",Egetd(3,7),Egetd(2,6)),App0("TNil")))));
  Cpush(y_3);
  Epushd(4,7);
  MoveTop(4,1);
  goto h_2;
  h_2 :
  TestFunFC(e_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto i_2;
  i_2 :
  TestInt(4,2,0,&&fail);
  goto j_2;
  j_2 :
  TestFunFC(e_1,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto k_2;
  k_2 :
  TestFunFC(e_1,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto l_2;
  l_2 :
  TestFunFC(f_1,&&fail,Egetd(4,7));
  Rpush(d_4);
  goto x_11;
  d_4 :
  goto c_4;
  x_11 :
  NotNULLd(4,6);
  Tset(Egetd(4,6));
  Return();
  c_4 :
  Epopd(4,7);
  goto u_3;
  y_3 :
  Rpush(k_4);
  goto g_11;
  k_4 :
  goto j_4;
  u_3 :
  Cpop();
  j_4 :
  Epopd(3,7);
  Return();
  h_1 :
  Epopd(2,7);
  Return();
  g_1 :
  Rpush(s_4);
  y_11 :
  Cpush(u_4);
  Ccall(_stratego_f_9);
  Tset(App0("True"));
  goto t_4;
  u_4 :
  Epushd(2,3);
  MoveTop(2,1);
  goto v_2;
  v_2 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(y_4);
  goto z_11;
  y_4 :
  goto x_4;
  z_11 :
  Epushd(3,5);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Rpush(d_5);
  goto y_11;
  d_5 :
  OneNextSon();
  Ccall(_stratego_o_9);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto s_2;
  s_2 :
  TestFunFC(e_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto t_2;
  t_2 :
  TestFunFC(e_1,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto u_2;
  u_2 :
  TestFunFC(f_1,&&fail,Egetd(3,5));
  Rpush(g_5);
  goto a_12;
  g_5 :
  goto c_5;
  a_12 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("And",Egetd(3,2),Egetd(3,4)));
  Return();
  c_5 :
  Epopd(3,5);
  Return();
  x_4 :
  Epopd(2,3);
  goto w_4;
  t_4 :
  Cpop();
  w_4 :
  Return();
  s_4 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_r_9);
  Epopd(1,1);
  Return();
  c_1 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_f_9)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_12;
  f_12 :
  TestFunFC(q_5,&&fail,Egetd(0,1));
  Rpush(p_5);
  goto h_12;
  p_5 :
  goto h_5;
  h_12 :
  Return();
  h_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_9)
  Epushd(0,6);
  Ccall(_stratego_h_9);
  MoveTop(0,1);
  Tset(MakeInt(0));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",MakeInt(0),App2("TCons",Egetd(0,1),App0("TNil"))));
  Cpush(u_5);
  Rpush(v_5);
  b_16 :
  Cpush(y_5);
  Cpush(g_6);
  Epushd(1,7);
  MoveTop(1,1);
  goto p_12;
  p_12 :
  TestFunFC(e_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_12;
  q_12 :
  TestFunFC(e_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto r_12;
  r_12 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto s_12;
  s_12 :
  TestFunFC(f_1,&&fail,Egetd(1,7));
  Rpush(i_6);
  goto c_16;
  i_6 :
  goto h_6;
  c_16 :
  Epushd(2,3);
  Tdupl();
  NotNULLd(1,5);
  Tset(App2("TCons",Egetd(1,5),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_l_9);
  NotNULLd(1,5);
  Tset(App2("TCons",Egetd(1,5),App2("TCons",MakeInt(57),App0("TNil"))));
  Ccall(_stratego_m_9);
  Tpop();
  NotNULLd(1,2);
  Tset(App2("TCons",MakeInt(10),App2("TCons",Egetd(1,2),App0("TNil"))));
  Ccall(_stratego_j_9);
  MoveTop(2,1);
  NotNULLd(1,5);
  Tset(App2("TCons",Egetd(1,5),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_k_9);
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Ccall(_stratego_i_9);
  MoveTop(2,3);
  NotNULLd(2,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(1,6),App0("TNil"))));
  Rpush(j_6);
  goto b_16;
  j_6 :
  Epopd(2,3);
  Return();
  h_6 :
  Epopd(1,7);
  goto z_5;
  g_6 :
  goto k_6;
  z_5 :
  Cpop();
  k_6 :
  goto x_5;
  y_5 :
  Ccontinue(l_6);
  Epushd(1,7);
  MoveTop(1,1);
  goto x_12;
  x_12 :
  TestFunFC(e_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_12;
  y_12 :
  TestFunFC(e_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto z_12;
  z_12 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto a_13;
  a_13 :
  TestFunFC(f_1,&&fail,Egetd(1,7));
  Rpush(n_6);
  goto g_16;
  n_6 :
  goto m_6;
  g_16 :
  Epushd(2,3);
  Tdupl();
  NotNULLd(1,5);
  Tset(App2("TCons",Egetd(1,5),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_l_9);
  NotNULLd(1,5);
  Tset(App2("TCons",Egetd(1,5),App2("TCons",MakeInt(57),App0("TNil"))));
  Ccall(_stratego_m_9);
  Tpop();
  NotNULLd(1,2);
  Tset(App2("TCons",MakeInt(10),App2("TCons",Egetd(1,2),App0("TNil"))));
  Ccall(_stratego_j_9);
  MoveTop(2,1);
  NotNULLd(1,5);
  Tset(App2("TCons",Egetd(1,5),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_k_9);
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Ccall(_stratego_i_9);
  MoveTop(2,3);
  NotNULLd(2,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(1,6),App0("TNil"))));
  Rpush(o_6);
  goto b_16;
  o_6 :
  Epopd(2,3);
  Return();
  m_6 :
  Epopd(1,7);
  goto x_5;
  l_6 :
  goto p_6;
  x_5 :
  Cpop();
  p_6 :
  Return();
  v_5 :
  goto t_5;
  u_5 :
  Rpush(r_6);
  k_16 :
  Cpush(t_6);
  Epushd(1,7);
  MoveTop(1,1);
  goto f_13;
  f_13 :
  TestFunFC(e_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_13;
  g_13 :
  TestFunFC(e_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto h_13;
  h_13 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto i_13;
  i_13 :
  TestFunFC(f_1,&&fail,Egetd(1,7));
  Rpush(v_6);
  goto l_16;
  v_6 :
  goto u_6;
  l_16 :
  Epushd(2,3);
  Tdupl();
  NotNULLd(1,5);
  Tset(App2("TCons",Egetd(1,5),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_l_9);
  NotNULLd(1,5);
  Tset(App2("TCons",Egetd(1,5),App2("TCons",MakeInt(57),App0("TNil"))));
  Ccall(_stratego_m_9);
  Tpop();
  NotNULLd(1,2);
  Tset(App2("TCons",MakeInt(10),App2("TCons",Egetd(1,2),App0("TNil"))));
  Ccall(_stratego_j_9);
  MoveTop(2,1);
  NotNULLd(1,5);
  Tset(App2("TCons",Egetd(1,5),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_k_9);
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Ccall(_stratego_i_9);
  MoveTop(2,3);
  NotNULLd(2,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(1,6),App0("TNil"))));
  Rpush(w_6);
  goto k_16;
  w_6 :
  Epopd(2,3);
  Return();
  u_6 :
  Epopd(1,7);
  goto s_6;
  t_6 :
  goto x_6;
  s_6 :
  Cpop();
  x_6 :
  Return();
  r_6 :
  goto q_6;
  t_5 :
  Cpop();
  q_6 :
  MoveTop(0,2);
  goto k_13;
  k_13 :
  TestFunFC(e_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto l_13;
  l_13 :
  TestFunFC(e_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto m_13;
  m_13 :
  TestFunFC(q_5,&&fail,Egetd(0,5));
  goto n_13;
  n_13 :
  TestFunFC(f_1,&&fail,Egetd(0,6));
  Rpush(y_6);
  goto p_16;
  y_6 :
  goto r_5;
  p_16 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  r_5 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_h_9)
  _ST_explode_string();
ENDPROC

PROC(_stratego_i_9)
  _ST_add();
ENDPROC

PROC(_stratego_j_9)
  _ST_mul();
ENDPROC

PROC(_stratego_k_9)
  _ST_subt();
ENDPROC

PROC(_stratego_l_9)
  _ST_geq();
ENDPROC

PROC(_stratego_m_9)
  Cpush(z_6);
  Tdupl();
  Ccall(_stratego_n_9);
  Cpop();
  Crestore();
  Cjump();
  z_6 :
ENDPROC

PROC(_stratego_n_9)
  _ST_gt();
ENDPROC

PROC(_stratego_o_9)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_16;
  r_16 :
  TestFunFC(f_1,&&fail,Egetd(0,1));
  Rpush(b_7);
  goto t_16;
  b_7 :
  goto a_7;
  t_16 :
  Return();
  a_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_9)
  Epushd(0,1);
  Tset(App0("TNil"));
  Ccall(_stratego_q_9);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Atom",Egetd(0,1)));
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_9)
  _ST_new();
ENDPROC

PROC(_stratego_r_9)
  _ST_WriteToTextFile();
ENDPROC

DOIT

