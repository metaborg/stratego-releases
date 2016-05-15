#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,d_3);
VARDECL(AFun,b_1);
VARDECL(AFun,m_0);
VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_u_4);
PROCDECL(_stratego_v_4);
PROCDECL(_stratego_w_4);
PROCDECL(_stratego_x_4);
PROCDECL(_stratego_y_4);
PROCDECL(_stratego_z_4);
PROCDECL(_stratego_e_5);
PROCDECL(_stratego_f_5);
PROCDECL(_stratego_g_5);
PROCDECL(_stratego_h_5);
PROCDECL(_stratego_i_5);
PROCDECL(_stratego_j_5);
PROCDECL(_stratego_k_5);
PROCDECL(_stratego_l_5);
PROCDECL(_stratego_m_5);
PROCDECL(_stratego_n_5);

PROC(_stratego_init_afuns)
  MOVE(d_3,ATmakeAFun("Nil",0,0));
  MOVE(b_1,ATmakeAFun("Imports",1,0));
  MOVE(m_0,ATmakeAFun("Cons",2,0));
  MOVE(g_0,ATmakeAFun("TNil",0,0));
  MOVE(f_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_u_4);
  Ccall(_stratego_e_5);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_v_4);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_w_4);
  goto c_0;
  a_0 :
  Cpop();
  c_0 :
ENDPROC

PROC(_stratego_u_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_v_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_w_4)
  Tdupl();
  Ccall(_stratego_x_4);
  Tset(MakeInt(1));
  Ccall(_stratego_z_4);
  Tpop();
ENDPROC

PROC(_stratego_x_4)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_y_4);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_y_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_z_4)
  _ST_exit();
ENDPROC

PROC(_stratego_e_5)
  Epushd(0,8);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("TNil"),App2("TCons",App0("Nil"),App0("TNil")))));
  MoveTop(0,2);
  goto r_7;
  r_7 :
  TestFunFC(f_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto s_7;
  s_7 :
  TestFunFC(f_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto t_7;
  t_7 :
  TestFunFC(f_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto u_7;
  u_7 :
  TestFunFC(g_0,&&fail,Egetd(0,8));
  Rpush(e_0);
  goto c_13;
  e_0 :
  goto d_0;
  c_13 :
  Epushd(1,5);
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset(App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,7),App2("TCons",App0("Nil"),App0("TNil")))))));
  Rpush(i_0);
  d_13 :
  Epushd(2,13);
  MoveTop(2,1);
  goto w_6;
  w_6 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto z_6;
  z_6 :
  TestFunFC(m_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto a_7;
  a_7 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto b_7;
  b_7 :
  TestFunFC(f_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto c_7;
  c_7 :
  TestFunFC(f_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto d_7;
  d_7 :
  TestFunFC(f_0,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto e_7;
  e_7 :
  TestFunFC(g_0,&&fail,Egetd(2,13));
  Cpush(p_0);
  Rpush(q_0);
  goto e_13;
  q_0 :
  goto n_0;
  p_0 :
  Rpush(s_0);
  goto f_14;
  s_0 :
  goto r_0;
  n_0 :
  Cpop();
  r_0 :
  goto l_0;
  l_0 :
  goto k_0;
  f_14 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,6),App2("TCons",Egetd(2,8),App2("TCons",Egetd(2,10),App2("TCons",App2("Cons",Egetd(2,3),Egetd(2,12)),App0("TNil")))))));
  Return();
  k_0 :
  goto j_0;
  e_13 :
  Epushd(3,8);
  Tdupl();
  Epushd(4,3);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,8),App0("TNil"))));
  MoveTop(4,1);
  goto f_6;
  f_6 :
  TestFunFC(f_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(u_0);
  goto f_13;
  u_0 :
  goto t_0;
  f_13 :
  Epushd(5,3);
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Ccall(_stratego_k_5);
  MoveTop(5,1);
  Move(3,1,5,1);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Rpush(v_0);
  h_13 :
  Epushd(6,2);
  MoveTop(6,2);
  goto c_6;
  c_6 :
  TestFunFC(b_1,&&z_0,Egetd(6,2));
  MoveArg(6,1,6,2,0);
  Cpush(d_1);
  Rpush(e_1);
  goto i_13;
  e_1 :
  goto c_1;
  d_1 :
  Rpush(g_1);
  goto k_13;
  g_1 :
  goto f_1;
  c_1 :
  Cpop();
  f_1 :
  goto y_0;
  z_0 :
  Rpush(y_0);
  goto k_13;
  y_0 :
  goto x_0;
  k_13 :
  Epushd(7,1);
  Tdupl();
  Epushd(8,5);
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  _ST_explode_term();
  MoveTop(8,1);
  goto d_5;
  d_5 :
  TestFunFC(f_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto o_5;
  o_5 :
  TestFunFC(f_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto p_5;
  p_5 :
  TestFunFC(g_0,&&fail,Egetd(8,5));
  Rpush(i_1);
  goto l_13;
  i_1 :
  goto h_1;
  l_13 :
  Move(7,1,8,4);
  Return();
  h_1 :
  Epopd(8,5);
  Tpop();
  NotNULLd(7,1);
  Tset(Egetd(7,1));
  Rpush(j_1);
  m_13 :
  Cpush(l_1);
  Ccall(_stratego_f_5);
  Tset(App0("Nil"));
  goto k_1;
  l_1 :
  Epushd(8,3);
  MoveTop(8,1);
  goto b_6;
  b_6 :
  TestFunFC(m_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(o_1);
  goto n_13;
  o_1 :
  goto n_1;
  n_13 :
  Epushd(9,7);
  NotNULLd(8,2);
  Tset(Egetd(8,2));
  Rpush(p_1);
  goto h_13;
  p_1 :
  MoveTop(9,1);
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(q_1);
  goto m_13;
  q_1 :
  MoveTop(9,2);
  NotNULLd(9,1);
  NotNULLd(9,2);
  Tset(App2("TCons",Egetd(9,1),App2("TCons",Egetd(9,2),App0("TNil"))));
  MoveTop(9,3);
  goto y_5;
  y_5 :
  TestFunFC(f_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto z_5;
  z_5 :
  TestFunFC(f_0,&&fail,Egetd(9,5));
  MoveArg(9,6,9,5,0);
  MoveArg(9,7,9,5,1);
  goto a_6;
  a_6 :
  TestFunFC(g_0,&&fail,Egetd(9,7));
  Rpush(s_1);
  goto q_13;
  s_1 :
  goto r_1;
  q_13 :
  NotNULLd(9,4);
  Tset(Egetd(9,4));
  Rpush(t_1);
  r_13 :
  Cpush(v_1);
  Ccall(_stratego_f_5);
  NotNULLd(9,6);
  Tset(Egetd(9,6));
  goto u_1;
  v_1 :
  Ccontinue(w_1);
  Epushd(10,3);
  MoveTop(10,1);
  goto x_5;
  x_5 :
  TestFunFC(m_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(y_1);
  goto s_13;
  y_1 :
  goto x_1;
  s_13 :
  Tdupl();
  NotNULLd(9,6);
  Tset(Egetd(9,6));
  Rpush(z_1);
  t_13 :
  Cpush(b_2);
  Epushd(11,3);
  MoveTop(11,1);
  goto w_5;
  w_5 :
  TestFunFC(m_0,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  Rpush(d_2);
  goto u_13;
  d_2 :
  goto c_2;
  u_13 :
  Move(10,2,11,2);
  Return();
  c_2 :
  Epopd(11,3);
  goto a_2;
  b_2 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_2);
  goto t_13;
  f_2 :
  AllBuild();
  goto e_2;
  a_2 :
  Cpop();
  e_2 :
  Return();
  z_1 :
  Tpop();
  NotNULLd(10,3);
  Tset(Egetd(10,3));
  Rpush(g_2);
  goto r_13;
  g_2 :
  Return();
  x_1 :
  Epopd(10,3);
  goto u_1;
  w_1 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_2);
  goto r_13;
  i_2 :
  AllBuild();
  goto h_2;
  u_1 :
  Cpop();
  h_2 :
  Return();
  t_1 :
  Return();
  r_1 :
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
  x_0 :
  goto w_0;
  i_13 :
  NotNULLd(6,1);
  Tset(Egetd(6,1));
  NotNULLd(6,1);
  Tset(App2("Cons",Egetd(6,1),App0("Nil")));
  Return();
  w_0 :
  Epopd(6,2);
  Return();
  v_0 :
  Ccall(_stratego_j_5);
  MoveTop(5,2);
  Move(3,2,5,2);
  NotNULLd(3,2);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(2,6),App0("TNil"))));
  Ccall(_stratego_g_5);
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
  goto t_6;
  t_6 :
  TestFunFC(f_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto u_6;
  u_6 :
  TestFunFC(f_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto v_6;
  v_6 :
  TestFunFC(g_0,&&fail,Egetd(3,8));
  Rpush(k_2);
  goto x_13;
  k_2 :
  goto j_2;
  x_13 :
  Epushd(4,6);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(l_2);
  y_13 :
  Cpush(n_2);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_2);
  goto y_13;
  o_2 :
  AllBuild();
  goto m_2;
  n_2 :
  Ccall(_stratego_f_5);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto p_2;
  m_2 :
  Cpop();
  p_2 :
  Return();
  l_2 :
  MoveTop(4,1);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,6),App0("TNil"))));
  MoveTop(4,2);
  goto q_6;
  q_6 :
  TestFunFC(f_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto r_6;
  r_6 :
  TestFunFC(f_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto s_6;
  s_6 :
  TestFunFC(g_0,&&fail,Egetd(4,6));
  Rpush(r_2);
  goto a_14;
  r_2 :
  goto q_2;
  a_14 :
  Epushd(5,8);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(s_2);
  b_14 :
  Cpush(u_2);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_2);
  goto b_14;
  v_2 :
  AllBuild();
  goto t_2;
  u_2 :
  Ccall(_stratego_f_5);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto w_2;
  t_2 :
  Cpop();
  w_2 :
  Return();
  s_2 :
  MoveTop(5,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil")))));
  MoveTop(5,2);
  goto m_6;
  m_6 :
  TestFunFC(f_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto n_6;
  n_6 :
  TestFunFC(f_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto o_6;
  o_6 :
  TestFunFC(f_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto p_6;
  p_6 :
  TestFunFC(g_0,&&fail,Egetd(5,8));
  Rpush(y_2);
  goto d_14;
  y_2 :
  goto x_2;
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
  x_2 :
  Epopd(5,8);
  Return();
  q_2 :
  Epopd(4,6);
  Return();
  j_2 :
  Epopd(3,8);
  Return();
  j_0 :
  Cpush(a_3);
  Epushd(3,11);
  MoveTop(3,1);
  goto g_7;
  g_7 :
  TestFunFC(f_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto h_7;
  h_7 :
  TestFunFC(d_3,&&fail,Egetd(3,2));
  goto i_7;
  i_7 :
  TestFunFC(f_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto j_7;
  j_7 :
  TestFunFC(f_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto k_7;
  k_7 :
  TestFunFC(f_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto l_7;
  l_7 :
  TestFunFC(f_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto m_7;
  m_7 :
  TestFunFC(g_0,&&fail,Egetd(3,11));
  Rpush(c_3);
  goto g_14;
  c_3 :
  goto b_3;
  g_14 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,10),App0("TNil"))));
  Return();
  b_3 :
  Epopd(3,11);
  goto z_2;
  a_3 :
  Rpush(f_3);
  goto d_13;
  f_3 :
  goto e_3;
  z_2 :
  Cpop();
  e_3 :
  Epopd(2,13);
  Return();
  i_0 :
  MoveTop(1,1);
  goto o_7;
  o_7 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_7;
  p_7 :
  TestFunFC(f_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto q_7;
  q_7 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  Rpush(g_3);
  goto h_14;
  g_3 :
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

PROC(_stratego_f_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_14;
  j_14 :
  TestFunFC(d_3,&&fail,Egetd(0,1));
  Rpush(i_3);
  goto l_14;
  i_3 :
  goto h_3;
  l_14 :
  Return();
  h_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_5)
  Epushd(0,5);
  MoveTop(0,5);
  goto c_15;
  c_15 :
  TestFunFC(f_0,&&m_3,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto d_15;
  d_15 :
  TestFunFC(f_0,&&n_3,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto e_15;
  e_15 :
  TestFunFC(g_0,&&o_3,Egetd(0,4));
  Cpush(q_3);
  Rpush(r_3);
  goto q_16;
  r_3 :
  goto p_3;
  q_3 :
  Rpush(t_3);
  goto v_16;
  t_3 :
  goto s_3;
  p_3 :
  Cpop();
  s_3 :
  goto l_3;
  o_3 :
  Rpush(l_3);
  goto v_16;
  n_3 :
  Rpush(l_3);
  goto v_16;
  m_3 :
  Rpush(l_3);
  goto v_16;
  l_3 :
  goto k_3;
  v_16 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(u_3);
  w_16 :
  Cpush(w_3);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(y_3);
  Epushd(1,7);
  MoveTop(1,1);
  goto t_14;
  t_14 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
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
  Rpush(a_4);
  goto x_16;
  a_4 :
  goto z_3;
  x_16 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  z_3 :
  Epopd(1,7);
  goto x_3;
  y_3 :
  Ccall(_stratego_h_5);
  goto b_4;
  x_3 :
  Cpop();
  b_4 :
  OneNextSon();
  Ccall(_stratego_i_5);
  AllBuild();
  AllBuild();
  goto v_3;
  w_3 :
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
  TestFunFC(m_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto b_15;
  b_15 :
  TestFunFC(g_0,&&fail,Egetd(1,7));
  Rpush(e_4);
  goto y_16;
  e_4 :
  goto d_4;
  y_16 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  d_4 :
  Epopd(1,7);
  goto c_4;
  v_3 :
  Cpop();
  c_4 :
  Cpush(g_4);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_5);
  OneNextSon();
  Ccall(_stratego_i_5);
  AllBuild();
  AllBuild();
  goto f_4;
  g_4 :
  Rpush(i_4);
  goto w_16;
  i_4 :
  goto h_4;
  f_4 :
  Cpop();
  h_4 :
  Return();
  u_3 :
  Return();
  k_3 :
  goto j_3;
  q_16 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(j_4);
  r_16 :
  Cpush(l_4);
  Ccall(_stratego_f_5);
  goto k_4;
  l_4 :
  Ccontinue(m_4);
  Epushd(1,3);
  MoveTop(1,1);
  goto r_14;
  r_14 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(o_4);
  goto s_16;
  o_4 :
  goto n_4;
  s_16 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(p_4);
  t_16 :
  Cpush(r_4);
  Epushd(2,3);
  MoveTop(2,1);
  goto q_14;
  q_14 :
  TestFunFC(m_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(t_4);
  goto u_16;
  t_4 :
  goto s_4;
  u_16 :
  Move(1,2,2,2);
  Return();
  s_4 :
  Epopd(2,3);
  goto q_4;
  r_4 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_5);
  goto t_16;
  b_5 :
  AllBuild();
  goto a_5;
  q_4 :
  Cpop();
  a_5 :
  Return();
  p_4 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(c_5);
  goto r_16;
  c_5 :
  Return();
  n_4 :
  Epopd(1,3);
  goto k_4;
  m_4 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_5);
  goto r_16;
  r_5 :
  AllBuild();
  goto q_5;
  k_4 :
  Cpop();
  q_5 :
  Return();
  j_4 :
  Return();
  j_3 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_5)
  Epushd(0,7);
  MoveTop(0,1);
  goto b_18;
  b_18 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto c_18;
  c_18 :
  TestFunFC(f_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto d_18;
  d_18 :
  TestFunFC(f_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto e_18;
  e_18 :
  TestFunFC(g_0,&&fail,Egetd(0,6));
  Rpush(t_5);
  goto g_20;
  t_5 :
  goto s_5;
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
  Rpush(v_5);
  goto h_20;
  v_5 :
  goto u_5;
  h_20 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  u_5 :
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
  Rpush(e_6);
  goto i_20;
  e_6 :
  goto d_6;
  i_20 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  d_6 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(g_6);
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
  TestFunFC(d_3,&&k_6,Egetd(2,2));
  goto q_17;
  q_17 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto r_17;
  r_17 :
  TestFunFC(d_3,&&fail,Egetd(2,6));
  goto s_17;
  s_17 :
  TestFunFC(g_0,&&fail,Egetd(2,9));
  Rpush(j_6);
  goto k_20;
  k_6 :
  TestFunFC(m_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto t_17;
  t_17 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto u_17;
  u_17 :
  TestFunFC(m_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto v_17;
  v_17 :
  TestFunFC(g_0,&&fail,Egetd(2,9));
  Rpush(j_6);
  goto l_20;
  j_6 :
  goto i_6;
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
  Rpush(x_6);
  goto j_20;
  x_6 :
  OneNextSon();
  Ccall(_stratego_i_5);
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
  Rpush(y_6);
  goto m_20;
  y_6 :
  goto l_6;
  m_20 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  l_6 :
  Epopd(3,5);
  Return();
  i_6 :
  goto h_6;
  k_20 :
  Tset(App0("Nil"));
  Return();
  h_6 :
  Epopd(2,9);
  Return();
  g_6 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto y_17;
  y_17 :
  TestFunFC(f_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto z_17;
  z_17 :
  TestFunFC(f_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto a_18;
  a_18 :
  TestFunFC(g_0,&&fail,Egetd(1,9));
  Rpush(n_7);
  goto o_20;
  n_7 :
  goto f_7;
  o_20 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(w_7);
  p_20 :
  Cpush(f_8);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_8);
  goto p_20;
  g_8 :
  AllBuild();
  goto e_8;
  f_8 :
  Ccall(_stratego_f_5);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto u_8;
  e_8 :
  Cpop();
  u_8 :
  Return();
  w_7 :
  Return();
  f_7 :
  Epopd(1,9);
  Return();
  s_5 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_i_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_20;
  r_20 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  Rpush(w_8);
  goto t_20;
  w_8 :
  goto v_8;
  t_20 :
  Return();
  v_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_5)
  Rpush(x_8);
  b_21 :
  Cpush(z_8);
  Ccall(_stratego_f_5);
  goto y_8;
  z_8 :
  Epushd(0,3);
  MoveTop(0,1);
  goto v_20;
  v_20 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(l_9);
  goto c_21;
  l_9 :
  goto h_9;
  c_21 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(m_9);
  d_21 :
  Cpush(p_9);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_9);
  goto d_21;
  y_9 :
  AllBuild();
  goto n_9;
  p_9 :
  Ccall(_stratego_f_5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(b_10);
  goto b_21;
  b_10 :
  goto z_9;
  n_9 :
  Cpop();
  z_9 :
  Return();
  m_9 :
  Return();
  h_9 :
  Epopd(0,3);
  goto g_9;
  y_8 :
  Cpop();
  g_9 :
  Return();
  x_8 :
ENDPROC

PROC(_stratego_k_5)
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
  Rpush(j_10);
  goto b_22;
  j_10 :
  goto d_10;
  b_22 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("Cons",Egetd(0,3),App2("Cons",ATmakeString("."),App2("Cons",Egetd(0,5),App0("Nil")))));
  Ccall(_stratego_l_5);
  Ccall(_stratego_u_4);
  Return();
  d_10 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_l_5)
  Rpush(k_10);
  c_22 :
  Cpush(p_10);
  Ccall(_stratego_f_5);
  goto o_10;
  p_10 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_5);
  OneNextSon();
  Rpush(b_11);
  goto c_22;
  b_11 :
  AllBuild();
  goto a_11;
  o_10 :
  Cpop();
  a_11 :
  Return();
  k_10 :
  Ccall(_stratego_j_5);
  Ccall(_stratego_n_5);
ENDPROC

PROC(_stratego_m_5)
  _ST_explode_string();
ENDPROC

PROC(_stratego_n_5)
  _ST_implode_string();
ENDPROC

DOIT

