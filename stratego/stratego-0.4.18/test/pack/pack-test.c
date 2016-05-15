#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,h_6);
VARDECL(AFun,b_1);
VARDECL(AFun,n_0);
VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_h_13);
PROCDECL(_stratego_i_13);
PROCDECL(_stratego_j_13);
PROCDECL(_stratego_k_13);
PROCDECL(_stratego_l_13);
PROCDECL(_stratego_m_13);
PROCDECL(_stratego_n_13);
PROCDECL(_stratego_o_13);
PROCDECL(_stratego_p_13);
PROCDECL(_stratego_q_13);
PROCDECL(_stratego_r_13);
PROCDECL(_stratego_s_13);
PROCDECL(_stratego_t_13);
PROCDECL(_stratego_u_13);
PROCDECL(_stratego_v_13);
PROCDECL(_stratego_w_13);

PROC(_stratego_init_afuns)
  MOVE(h_6,ATmakeAFun("Nil",0,0));
  MOVE(b_1,ATmakeAFun("Imports",1,0));
  MOVE(n_0,ATmakeAFun("Cons",2,0));
  MOVE(g_0,ATmakeAFun("TNil",0,0));
  MOVE(f_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_h_13);
  Ccall(_stratego_n_13);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_i_13);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_j_13);
  goto c_0;
  a_0 :
  Cpop();
  c_0 :
ENDPROC

PROC(_stratego_h_13)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_i_13)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_j_13)
  Tdupl();
  Ccall(_stratego_k_13);
  Tset(MakeInt(1));
  Ccall(_stratego_m_13);
  Tpop();
ENDPROC

PROC(_stratego_k_13)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_l_13);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_l_13)
  _ST_printnl();
ENDPROC

PROC(_stratego_m_13)
  _ST_exit();
ENDPROC

PROC(_stratego_n_13)
  Epushd(0,8);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("TNil"),App2("TCons",App0("Nil"),App0("TNil")))));
  MoveTop(0,2);
  goto x_3;
  x_3 :
  TestFunFC(f_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto y_3;
  y_3 :
  TestFunFC(f_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto z_3;
  z_3 :
  TestFunFC(f_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto a_4;
  a_4 :
  TestFunFC(g_0,&&fail,Egetd(0,8));
  Rpush(e_0);
  goto o_11;
  e_0 :
  goto d_0;
  o_11 :
  Epushd(1,5);
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset(App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,7),App2("TCons",App0("Nil"),App0("TNil")))))));
  Rpush(i_0);
  p_11 :
  Epushd(2,13);
  MoveTop(2,1);
  goto e_3;
  e_3 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto f_3;
  f_3 :
  TestFunFC(n_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto g_3;
  g_3 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto h_3;
  h_3 :
  TestFunFC(f_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto i_3;
  i_3 :
  TestFunFC(f_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto j_3;
  j_3 :
  TestFunFC(f_0,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto k_3;
  k_3 :
  TestFunFC(g_0,&&fail,Egetd(2,13));
  Cpush(p_0);
  Rpush(q_0);
  goto q_11;
  q_0 :
  goto o_0;
  p_0 :
  Rpush(s_0);
  goto f_14;
  s_0 :
  goto r_0;
  o_0 :
  Cpop();
  r_0 :
  goto m_0;
  m_0 :
  goto l_0;
  f_14 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,6),App2("TCons",Egetd(2,8),App2("TCons",Egetd(2,10),App2("TCons",App2("Cons",Egetd(2,3),Egetd(2,12)),App0("TNil")))))));
  Return();
  l_0 :
  goto j_0;
  q_11 :
  Epushd(3,8);
  Tdupl();
  Epushd(4,3);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,8),App0("TNil"))));
  MoveTop(4,1);
  goto l_2;
  l_2 :
  TestFunFC(f_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(u_0);
  goto r_11;
  u_0 :
  goto t_0;
  r_11 :
  Epushd(5,3);
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Ccall(_stratego_t_13);
  MoveTop(5,1);
  Move(3,1,5,1);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Rpush(v_0);
  t_11 :
  Epushd(6,2);
  MoveTop(6,2);
  goto i_2;
  i_2 :
  TestFunFC(b_1,&&a_1,Egetd(6,2));
  MoveArg(6,1,6,2,0);
  Cpush(d_1);
  Rpush(e_1);
  goto u_11;
  e_1 :
  goto c_1;
  d_1 :
  Rpush(g_1);
  goto w_11;
  g_1 :
  goto f_1;
  c_1 :
  Cpop();
  f_1 :
  goto z_0;
  a_1 :
  Rpush(z_0);
  goto w_11;
  z_0 :
  goto y_0;
  w_11 :
  Epushd(7,1);
  Tdupl();
  Epushd(8,5);
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  _ST_explode_term();
  MoveTop(8,1);
  goto p_1;
  p_1 :
  TestFunFC(f_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto u_1;
  u_1 :
  TestFunFC(f_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto v_1;
  v_1 :
  TestFunFC(g_0,&&fail,Egetd(8,5));
  Rpush(i_1);
  goto x_11;
  i_1 :
  goto h_1;
  x_11 :
  Move(7,1,8,4);
  Return();
  h_1 :
  Epopd(8,5);
  Tpop();
  NotNULLd(7,1);
  Tset(Egetd(7,1));
  Rpush(j_1);
  z_11 :
  Cpush(l_1);
  Ccall(_stratego_o_13);
  Tset(App0("Nil"));
  goto k_1;
  l_1 :
  Epushd(8,3);
  MoveTop(8,1);
  goto h_2;
  h_2 :
  TestFunFC(n_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(o_1);
  goto a_12;
  o_1 :
  goto n_1;
  a_12 :
  Epushd(9,7);
  NotNULLd(8,2);
  Tset(Egetd(8,2));
  Rpush(q_1);
  goto t_11;
  q_1 :
  MoveTop(9,1);
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(r_1);
  goto z_11;
  r_1 :
  MoveTop(9,2);
  NotNULLd(9,1);
  NotNULLd(9,2);
  Tset(App2("TCons",Egetd(9,1),App2("TCons",Egetd(9,2),App0("TNil"))));
  MoveTop(9,3);
  goto e_2;
  e_2 :
  TestFunFC(f_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto f_2;
  f_2 :
  TestFunFC(f_0,&&fail,Egetd(9,5));
  MoveArg(9,6,9,5,0);
  MoveArg(9,7,9,5,1);
  goto g_2;
  g_2 :
  TestFunFC(g_0,&&fail,Egetd(9,7));
  Rpush(t_1);
  goto d_12;
  t_1 :
  goto s_1;
  d_12 :
  NotNULLd(9,4);
  Tset(Egetd(9,4));
  Rpush(w_1);
  k_12 :
  Cpush(y_1);
  Ccall(_stratego_o_13);
  NotNULLd(9,6);
  Tset(Egetd(9,6));
  goto x_1;
  y_1 :
  Ccontinue(z_1);
  Epushd(10,3);
  MoveTop(10,1);
  goto d_2;
  d_2 :
  TestFunFC(n_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(b_2);
  goto l_12;
  b_2 :
  goto a_2;
  l_12 :
  Tdupl();
  NotNULLd(9,6);
  Tset(Egetd(9,6));
  Rpush(j_2);
  m_12 :
  Cpush(m_2);
  Epushd(11,3);
  MoveTop(11,1);
  goto c_2;
  c_2 :
  TestFunFC(n_0,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  Rpush(o_2);
  goto n_12;
  o_2 :
  goto n_2;
  n_12 :
  Move(10,2,11,2);
  Return();
  n_2 :
  Epopd(11,3);
  goto k_2;
  m_2 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_2);
  goto m_12;
  q_2 :
  AllBuild();
  goto p_2;
  k_2 :
  Cpop();
  p_2 :
  Return();
  j_2 :
  Tpop();
  NotNULLd(10,3);
  Tset(Egetd(10,3));
  Rpush(r_2);
  goto k_12;
  r_2 :
  Return();
  a_2 :
  Epopd(10,3);
  goto x_1;
  z_1 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_2);
  goto k_12;
  x_2 :
  AllBuild();
  goto w_2;
  x_1 :
  Cpop();
  w_2 :
  Return();
  w_1 :
  Return();
  s_1 :
  Epopd(9,7);
  Return();
  n_1 :
  Epopd(8,3);
  goto m_1;
  k_1 :
  Cpop();
  m_1 :
  Return();
  j_1 :
  Epopd(7,1);
  Return();
  y_0 :
  goto x_0;
  u_11 :
  NotNULLd(6,1);
  Tset(Egetd(6,1));
  NotNULLd(6,1);
  Tset(App2("Cons",Egetd(6,1),App0("Nil")));
  Return();
  x_0 :
  Epopd(6,2);
  Return();
  v_0 :
  Ccall(_stratego_s_13);
  MoveTop(5,2);
  Move(3,2,5,2);
  NotNULLd(3,2);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(2,6),App0("TNil"))));
  Ccall(_stratego_p_13);
  MoveTop(5,3);
  Move(3,3,5,3);
  Epopd(5,3);
  Return();
  t_0 :
  Epopd(4,3);
  Tpop();
  NotNULLd(3,3);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,4),App0("TNil"))));
  MoveTop(3,4);
  goto b_3;
  b_3 :
  TestFunFC(f_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto c_3;
  c_3 :
  TestFunFC(f_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto d_3;
  d_3 :
  TestFunFC(g_0,&&fail,Egetd(3,8));
  Rpush(t_3);
  goto x_13;
  t_3 :
  goto l_3;
  x_13 :
  Epushd(4,6);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(c_4);
  y_13 :
  Cpush(l_4);
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_4);
  goto y_13;
  m_4 :
  AllBuild();
  goto k_4;
  l_4 :
  Ccall(_stratego_o_13);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto a_5;
  k_4 :
  Cpop();
  a_5 :
  Return();
  c_4 :
  MoveTop(4,1);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,6),App0("TNil"))));
  MoveTop(4,2);
  goto y_2;
  y_2 :
  TestFunFC(f_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto z_2;
  z_2 :
  TestFunFC(f_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto a_3;
  a_3 :
  TestFunFC(g_0,&&fail,Egetd(4,6));
  Rpush(c_5);
  goto a_14;
  c_5 :
  goto b_5;
  a_14 :
  Epushd(5,8);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(d_5);
  b_14 :
  Cpush(f_5);
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_5);
  goto b_14;
  m_5 :
  AllBuild();
  goto e_5;
  f_5 :
  Ccall(_stratego_o_13);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto n_5;
  e_5 :
  Cpop();
  n_5 :
  Return();
  d_5 :
  MoveTop(5,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil")))));
  MoveTop(5,2);
  goto s_2;
  s_2 :
  TestFunFC(f_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto t_2;
  t_2 :
  TestFunFC(f_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto u_2;
  u_2 :
  TestFunFC(f_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto v_2;
  v_2 :
  TestFunFC(g_0,&&fail,Egetd(5,8));
  Rpush(s_5);
  goto d_14;
  s_5 :
  goto r_5;
  d_14 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset(App2("Cons",Egetd(5,5),Egetd(5,7)));
  NotNULLd(4,1);
  NotNULLd(5,1);
  NotNULLd(2,8);
  NotNULLd(5,5);
  NotNULLd(5,7);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(5,1),App2("TCons",Egetd(2,8),App2("TCons",App2("Cons",Egetd(5,5),Egetd(5,7)),App2("TCons",Egetd(2,12),App0("TNil")))))));
  Return();
  r_5 :
  Epopd(5,8);
  Return();
  b_5 :
  Epopd(4,6);
  Return();
  l_3 :
  Epopd(3,8);
  Return();
  j_0 :
  Cpush(v_5);
  Epushd(3,11);
  MoveTop(3,1);
  goto m_3;
  m_3 :
  TestFunFC(f_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto n_3;
  n_3 :
  TestFunFC(h_6,&&fail,Egetd(3,2));
  goto o_3;
  o_3 :
  TestFunFC(f_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto p_3;
  p_3 :
  TestFunFC(f_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto q_3;
  q_3 :
  TestFunFC(f_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto r_3;
  r_3 :
  TestFunFC(f_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto s_3;
  s_3 :
  TestFunFC(g_0,&&fail,Egetd(3,11));
  Rpush(f_6);
  goto g_14;
  f_6 :
  goto e_6;
  g_14 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,10),App0("TNil"))));
  Return();
  e_6 :
  Epopd(3,11);
  goto t_5;
  v_5 :
  Rpush(p_6);
  goto p_11;
  p_6 :
  goto j_6;
  t_5 :
  Cpop();
  j_6 :
  Epopd(2,13);
  Return();
  i_0 :
  MoveTop(1,1);
  goto u_3;
  u_3 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_3;
  v_3 :
  TestFunFC(f_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto w_3;
  w_3 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  Rpush(q_6);
  goto h_14;
  q_6 :
  goto h_0;
  h_14 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  h_0 :
  Epopd(1,5);
  Return();
  d_0 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_o_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_14;
  j_14 :
  TestFunFC(h_6,&&fail,Egetd(0,1));
  Rpush(u_6);
  goto l_14;
  u_6 :
  goto t_6;
  l_14 :
  Return();
  t_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_13)
  Epushd(0,5);
  MoveTop(0,5);
  goto c_15;
  c_15 :
  TestFunFC(f_0,&&b_7,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto d_15;
  d_15 :
  TestFunFC(f_0,&&c_7,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto e_15;
  e_15 :
  TestFunFC(g_0,&&l_7,Egetd(0,4));
  Cpush(o_7);
  Rpush(u_7);
  goto q_16;
  u_7 :
  goto m_7;
  o_7 :
  Rpush(x_7);
  goto v_16;
  x_7 :
  goto v_7;
  m_7 :
  Cpop();
  v_7 :
  goto z_6;
  l_7 :
  Rpush(z_6);
  goto v_16;
  c_7 :
  Rpush(z_6);
  goto v_16;
  b_7 :
  Rpush(z_6);
  goto v_16;
  z_6 :
  goto x_6;
  v_16 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(f_8);
  w_16 :
  Cpush(h_8);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(j_8);
  Epushd(1,7);
  MoveTop(1,1);
  goto t_14;
  t_14 :
  TestFunFC(n_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto u_14;
  u_14 :
  TestFunFC(f_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto v_14;
  v_14 :
  TestFunFC(f_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto w_14;
  w_14 :
  TestFunFC(g_0,&&fail,Egetd(1,6));
  Rpush(l_8);
  goto x_16;
  l_8 :
  goto k_8;
  x_16 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  k_8 :
  Epopd(1,7);
  goto i_8;
  j_8 :
  Ccall(_stratego_q_13);
  goto m_8;
  i_8 :
  Cpop();
  m_8 :
  OneNextSon();
  Ccall(_stratego_r_13);
  AllBuild();
  AllBuild();
  goto g_8;
  h_8 :
  Epushd(1,7);
  MoveTop(1,1);
  goto y_14;
  y_14 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_14;
  z_14 :
  TestFunFC(f_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto a_15;
  a_15 :
  TestFunFC(n_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto b_15;
  b_15 :
  TestFunFC(g_0,&&fail,Egetd(1,7));
  Rpush(p_8);
  goto y_16;
  p_8 :
  goto o_8;
  y_16 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  o_8 :
  Epopd(1,7);
  goto n_8;
  g_8 :
  Cpop();
  n_8 :
  Cpush(c_9);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_13);
  OneNextSon();
  Ccall(_stratego_r_13);
  AllBuild();
  AllBuild();
  goto b_9;
  c_9 :
  Rpush(e_9);
  goto w_16;
  e_9 :
  goto d_9;
  b_9 :
  Cpop();
  d_9 :
  Return();
  f_8 :
  Return();
  x_6 :
  goto w_6;
  q_16 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(g_9);
  r_16 :
  Cpush(i_9);
  Ccall(_stratego_o_13);
  goto h_9;
  i_9 :
  Ccontinue(j_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto r_14;
  r_14 :
  TestFunFC(n_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(l_9);
  goto s_16;
  l_9 :
  goto k_9;
  s_16 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(m_9);
  t_16 :
  Cpush(o_9);
  Epushd(2,3);
  MoveTop(2,1);
  goto q_14;
  q_14 :
  TestFunFC(n_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(q_9);
  goto u_16;
  q_9 :
  goto p_9;
  u_16 :
  Move(1,2,2,2);
  Return();
  p_9 :
  Epopd(2,3);
  goto n_9;
  o_9 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_9);
  goto t_16;
  s_9 :
  AllBuild();
  goto r_9;
  n_9 :
  Cpop();
  r_9 :
  Return();
  m_9 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(t_9);
  goto r_16;
  t_9 :
  Return();
  k_9 :
  Epopd(1,3);
  goto h_9;
  j_9 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_9);
  goto r_16;
  v_9 :
  AllBuild();
  goto u_9;
  h_9 :
  Cpop();
  u_9 :
  Return();
  g_9 :
  Return();
  w_6 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_q_13)
  Epushd(0,7);
  MoveTop(0,1);
  goto c_18;
  c_18 :
  TestFunFC(n_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto d_18;
  d_18 :
  TestFunFC(f_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto e_18;
  e_18 :
  TestFunFC(f_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto f_18;
  f_18 :
  TestFunFC(g_0,&&fail,Egetd(0,6));
  Rpush(x_9);
  goto g_20;
  x_9 :
  goto w_9;
  g_20 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto b_17;
  b_17 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto c_17;
  c_17 :
  TestFunFC(f_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto d_17;
  d_17 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  Rpush(z_9);
  goto h_20;
  z_9 :
  goto y_9;
  h_20 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  y_9 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto f_17;
  f_17 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto g_17;
  g_17 :
  TestFunFC(f_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto h_17;
  h_17 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  Rpush(b_10);
  goto i_20;
  b_10 :
  goto a_10;
  i_20 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  a_10 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(c_10);
  j_20 :
  Epushd(2,9);
  MoveTop(2,1);
  goto o_17;
  o_17 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto p_17;
  p_17 :
  TestFunFC(h_6,&&g_10,Egetd(2,2));
  goto q_17;
  q_17 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto r_17;
  r_17 :
  TestFunFC(h_6,&&fail,Egetd(2,6));
  goto s_17;
  s_17 :
  TestFunFC(g_0,&&fail,Egetd(2,9));
  Rpush(f_10);
  goto k_20;
  g_10 :
  TestFunFC(n_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto u_17;
  u_17 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto v_17;
  v_17 :
  TestFunFC(n_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto w_17;
  w_17 :
  TestFunFC(g_0,&&fail,Egetd(2,9));
  Rpush(f_10);
  goto l_20;
  f_10 :
  goto e_10;
  l_20 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Rpush(i_10);
  goto j_20;
  i_10 :
  OneNextSon();
  Ccall(_stratego_r_13);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto l_17;
  l_17 :
  TestFunFC(f_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto m_17;
  m_17 :
  TestFunFC(f_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto n_17;
  n_17 :
  TestFunFC(g_0,&&fail,Egetd(3,5));
  Rpush(j_10);
  goto m_20;
  j_10 :
  goto h_10;
  m_20 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  h_10 :
  Epopd(3,5);
  Return();
  e_10 :
  goto d_10;
  k_20 :
  Tset(App0("Nil"));
  Return();
  d_10 :
  Epopd(2,9);
  Return();
  c_10 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto z_17;
  z_17 :
  TestFunFC(f_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto a_18;
  a_18 :
  TestFunFC(f_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto b_18;
  b_18 :
  TestFunFC(g_0,&&fail,Egetd(1,9));
  Rpush(l_10);
  goto o_20;
  l_10 :
  goto k_10;
  o_20 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(m_10);
  p_20 :
  Cpush(o_10);
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_10);
  goto p_20;
  p_10 :
  AllBuild();
  goto n_10;
  o_10 :
  Ccall(_stratego_o_13);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto q_10;
  n_10 :
  Cpop();
  q_10 :
  Return();
  m_10 :
  Return();
  k_10 :
  Epopd(1,9);
  Return();
  w_9 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_r_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_20;
  r_20 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  Rpush(s_10);
  goto t_20;
  s_10 :
  goto r_10;
  t_20 :
  Return();
  r_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_13)
  Rpush(t_10);
  b_21 :
  Cpush(x_10);
  Ccall(_stratego_o_13);
  goto w_10;
  x_10 :
  Epushd(0,3);
  MoveTop(0,1);
  goto v_20;
  v_20 :
  TestFunFC(n_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(a_11);
  goto c_21;
  a_11 :
  goto z_10;
  c_21 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(b_11);
  d_21 :
  Cpush(d_11);
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_11);
  goto d_21;
  e_11 :
  AllBuild();
  goto c_11;
  d_11 :
  Ccall(_stratego_o_13);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(g_11);
  goto b_21;
  g_11 :
  goto f_11;
  c_11 :
  Cpop();
  f_11 :
  Return();
  b_11 :
  Return();
  z_10 :
  Epopd(0,3);
  goto y_10;
  w_10 :
  Cpop();
  y_10 :
  Return();
  t_10 :
ENDPROC

PROC(_stratego_t_13)
  Epushd(0,6);
  MoveTop(0,1);
  Tset(ATmakeString("trm"));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("trm"),App0("TNil"))));
  MoveTop(0,2);
  goto i_21;
  i_21 :
  TestFunFC(f_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto j_21;
  j_21 :
  TestFunFC(f_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto k_21;
  k_21 :
  TestFunFC(g_0,&&fail,Egetd(0,6));
  Rpush(i_11);
  goto b_22;
  i_11 :
  goto h_11;
  b_22 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("Cons",Egetd(0,3),App2("Cons",ATmakeString("."),App2("Cons",Egetd(0,5),App0("Nil")))));
  Ccall(_stratego_u_13);
  Ccall(_stratego_h_13);
  Return();
  h_11 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_u_13)
  Rpush(l_11);
  c_22 :
  Cpush(n_11);
  Ccall(_stratego_o_13);
  goto m_11;
  n_11 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_13);
  OneNextSon();
  Rpush(v_11);
  goto c_22;
  v_11 :
  AllBuild();
  goto s_11;
  m_11 :
  Cpop();
  s_11 :
  Return();
  l_11 :
  Ccall(_stratego_s_13);
  Ccall(_stratego_w_13);
ENDPROC

PROC(_stratego_v_13)
  _ST_explode_string();
ENDPROC

PROC(_stratego_w_13)
  _ST_implode_string();
ENDPROC
