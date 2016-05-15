#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,h_10);
VARDECL(AFun,t_1);
VARDECL(AFun,i_1);
VARDECL(AFun,p_0);
VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_l_16);
PROCDECL(_stratego_m_16);
PROCDECL(_stratego_n_16);
PROCDECL(_stratego_o_16);
PROCDECL(_stratego_p_16);
PROCDECL(_stratego_q_16);
PROCDECL(_stratego_r_16);
PROCDECL(_stratego_u_16);
PROCDECL(_stratego_v_16);
PROCDECL(_stratego_z_16);
PROCDECL(_stratego_a_17);
PROCDECL(_stratego_e_17);

PROC(_stratego_init_afuns)
  MOVE(h_10,ATmakeAFun("Nil",0,0));
  MOVE(t_1,ATmakeAFun("Imports",1,0));
  MOVE(i_1,ATmakeAFun("Module",2,0));
  MOVE(p_0,ATmakeAFun("Cons",2,0));
  MOVE(g_0,ATmakeAFun("TNil",0,0));
  MOVE(f_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_l_16);
  Ccall(_stratego_r_16);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_m_16);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_n_16);
  goto c_0;
  a_0 :
  Cpop();
  c_0 :
ENDPROC

PROC(_stratego_l_16)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_m_16)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_n_16)
  Tdupl();
  Ccall(_stratego_o_16);
  Tset(MakeInt(1));
  Ccall(_stratego_q_16);
  Tpop();
ENDPROC

PROC(_stratego_o_16)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_p_16);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_p_16)
  _ST_printnl();
ENDPROC

PROC(_stratego_q_16)
  _ST_exit();
ENDPROC

PROC(_stratego_r_16)
  Epushd(0,5);
  MoveTop(0,1);
  goto s_4;
  s_4 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto t_4;
  t_4 :
  TestFunFC(f_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto u_4;
  u_4 :
  TestFunFC(g_0,&&fail,Egetd(0,5));
  Rpush(e_0);
  goto n_11;
  e_0 :
  goto d_0;
  n_11 :
  Epushd(1,7);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App2("TCons",App0("Nil"),App0("TNil")))));
  MoveTop(1,1);
  goto o_4;
  o_4 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_4;
  p_4 :
  TestFunFC(f_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto q_4;
  q_4 :
  TestFunFC(f_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto r_4;
  r_4 :
  TestFunFC(g_0,&&fail,Egetd(1,7));
  Rpush(i_0);
  goto o_11;
  i_0 :
  goto h_0;
  o_11 :
  Epushd(2,5);
  NotNULLd(1,2);
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,2),App0("Nil")),App2("TCons",App2("Cons",Egetd(1,2),App0("Nil")),App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App2("TCons",App0("Nil"),App0("TNil")))))));
  Rpush(k_0);
  p_11 :
  Epushd(3,13);
  MoveTop(3,1);
  goto v_3;
  v_3 :
  TestFunFC(f_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,5,3,1,1);
  goto w_3;
  w_3 :
  TestFunFC(p_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto x_3;
  x_3 :
  TestFunFC(f_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto y_3;
  y_3 :
  TestFunFC(f_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto z_3;
  z_3 :
  TestFunFC(f_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto a_4;
  a_4 :
  TestFunFC(f_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto b_4;
  b_4 :
  TestFunFC(g_0,&&fail,Egetd(3,13));
  Cpush(r_0);
  Rpush(s_0);
  goto q_11;
  s_0 :
  goto q_0;
  r_0 :
  Rpush(u_0);
  goto t_15;
  u_0 :
  goto t_0;
  q_0 :
  Cpop();
  t_0 :
  goto o_0;
  o_0 :
  goto n_0;
  t_15 :
  NotNULLd(3,4);
  NotNULLd(3,6);
  NotNULLd(3,8);
  NotNULLd(3,10);
  NotNULLd(3,3);
  NotNULLd(3,12);
  Tset(App2("TCons",Egetd(3,4),App2("TCons",Egetd(3,6),App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,10),App2("TCons",App2("Cons",Egetd(3,3),Egetd(3,12)),App0("TNil")))))));
  Return();
  n_0 :
  goto m_0;
  q_11 :
  Epushd(4,8);
  Tdupl();
  Epushd(5,3);
  NotNULLd(3,3);
  NotNULLd(3,8);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,8),App0("TNil"))));
  Rpush(v_0);
  r_11 :
  Epushd(6,7);
  MoveTop(6,1);
  goto r_1;
  r_1 :
  TestFunFC(f_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto w_1;
  w_1 :
  TestFunFC(f_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,7,6,3,1);
  goto x_1;
  x_1 :
  TestFunFC(p_0,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto y_1;
  y_1 :
  TestFunFC(g_0,&&fail,Egetd(6,7));
  Cpush(b_1);
  Rpush(c_1);
  goto s_11;
  c_1 :
  goto a_1;
  b_1 :
  Rpush(e_1);
  goto u_11;
  e_1 :
  goto d_1;
  a_1 :
  Cpop();
  d_1 :
  goto z_0;
  z_0 :
  goto y_0;
  u_11 :
  NotNULLd(6,2);
  NotNULLd(6,6);
  Tset(App2("TCons",Egetd(6,2),App2("TCons",Egetd(6,6),App0("TNil"))));
  Rpush(f_1);
  goto r_11;
  f_1 :
  Return();
  y_0 :
  goto w_0;
  s_11 :
  Tdupl();
  Epushd(7,7);
  NotNULLd(6,2);
  NotNULLd(6,5);
  Tset(App2("TCons",Egetd(6,2),App2("TCons",Egetd(6,5),App0("TNil"))));
  MoveTop(7,1);
  goto n_1;
  n_1 :
  TestFunFC(f_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto o_1;
  o_1 :
  TestFunFC(f_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,7,7,3,1);
  goto p_1;
  p_1 :
  TestFunFC(i_1,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto q_1;
  q_1 :
  TestFunFC(g_0,&&fail,Egetd(7,7));
  Rpush(h_1);
  goto t_11;
  h_1 :
  goto g_1;
  t_11 :
  Move(7,2,7,5);
  Return();
  g_1 :
  Epopd(7,7);
  Tpop();
  NotNULLd(6,5);
  Tset(Egetd(6,5));
  Return();
  w_0 :
  Epopd(6,7);
  Return();
  v_0 :
  MoveTop(5,1);
  Move(4,1,5,1);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Rpush(j_1);
  w_11 :
  Epushd(6,2);
  MoveTop(6,2);
  goto t_2;
  t_2 :
  TestFunFC(t_1,&&s_1,Egetd(6,2));
  MoveArg(6,1,6,2,0);
  Cpush(v_1);
  Rpush(z_1);
  goto x_11;
  z_1 :
  goto u_1;
  v_1 :
  Rpush(b_2);
  goto z_11;
  b_2 :
  goto a_2;
  u_1 :
  Cpop();
  a_2 :
  goto m_1;
  s_1 :
  Rpush(m_1);
  goto z_11;
  m_1 :
  goto l_1;
  z_11 :
  Epushd(7,1);
  Tdupl();
  Epushd(8,5);
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  _ST_explode_term();
  MoveTop(8,1);
  goto e_2;
  e_2 :
  TestFunFC(f_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto f_2;
  f_2 :
  TestFunFC(f_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto g_2;
  g_2 :
  TestFunFC(g_0,&&fail,Egetd(8,5));
  Rpush(d_2);
  goto a_12;
  d_2 :
  goto c_2;
  a_12 :
  Move(7,1,8,4);
  Return();
  c_2 :
  Epopd(8,5);
  Tpop();
  NotNULLd(7,1);
  Tset(Egetd(7,1));
  Rpush(h_2);
  b_12 :
  Cpush(j_2);
  Ccall(_stratego_v_16);
  Tset(App0("Nil"));
  goto i_2;
  j_2 :
  Epushd(8,3);
  MoveTop(8,1);
  goto s_2;
  s_2 :
  TestFunFC(p_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(m_2);
  goto c_12;
  m_2 :
  goto l_2;
  c_12 :
  Epushd(9,7);
  NotNULLd(8,2);
  Tset(Egetd(8,2));
  Rpush(u_2);
  goto w_11;
  u_2 :
  MoveTop(9,1);
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(v_2);
  goto b_12;
  v_2 :
  MoveTop(9,2);
  NotNULLd(9,1);
  NotNULLd(9,2);
  Tset(App2("TCons",Egetd(9,1),App2("TCons",Egetd(9,2),App0("TNil"))));
  MoveTop(9,3);
  goto p_2;
  p_2 :
  TestFunFC(f_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto q_2;
  q_2 :
  TestFunFC(f_0,&&fail,Egetd(9,5));
  MoveArg(9,6,9,5,0);
  MoveArg(9,7,9,5,1);
  goto r_2;
  r_2 :
  TestFunFC(g_0,&&fail,Egetd(9,7));
  Rpush(x_2);
  goto r_14;
  x_2 :
  goto w_2;
  r_14 :
  NotNULLd(9,4);
  Tset(Egetd(9,4));
  Rpush(y_2);
  s_14 :
  Cpush(a_3);
  Ccall(_stratego_v_16);
  NotNULLd(9,6);
  Tset(Egetd(9,6));
  goto z_2;
  a_3 :
  Ccontinue(b_3);
  Epushd(10,3);
  MoveTop(10,1);
  goto o_2;
  o_2 :
  TestFunFC(p_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(e_3);
  goto t_14;
  e_3 :
  goto c_3;
  t_14 :
  Tdupl();
  NotNULLd(9,6);
  Tset(Egetd(9,6));
  Rpush(h_3);
  u_14 :
  Cpush(t_3);
  Epushd(11,3);
  MoveTop(11,1);
  goto n_2;
  n_2 :
  TestFunFC(p_0,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  Rpush(c_4);
  goto v_14;
  c_4 :
  goto u_3;
  v_14 :
  Move(10,2,11,2);
  Return();
  u_3 :
  Epopd(11,3);
  goto i_3;
  t_3 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_5);
  goto u_14;
  a_5 :
  AllBuild();
  goto k_4;
  i_3 :
  Cpop();
  k_4 :
  Return();
  h_3 :
  Tpop();
  NotNULLd(10,3);
  Tset(Egetd(10,3));
  Rpush(b_5);
  goto s_14;
  b_5 :
  Return();
  c_3 :
  Epopd(10,3);
  goto z_2;
  b_3 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_5);
  goto s_14;
  k_5 :
  AllBuild();
  goto j_5;
  z_2 :
  Cpop();
  j_5 :
  Return();
  y_2 :
  Return();
  w_2 :
  Epopd(9,7);
  Return();
  l_2 :
  Epopd(8,3);
  goto k_2;
  i_2 :
  Cpop();
  k_2 :
  Return();
  h_2 :
  Epopd(7,1);
  Return();
  l_1 :
  goto k_1;
  x_11 :
  NotNULLd(6,1);
  Tset(Egetd(6,1));
  NotNULLd(6,1);
  Tset(App2("Cons",Egetd(6,1),App0("Nil")));
  Return();
  k_1 :
  Epopd(6,2);
  Return();
  j_1 :
  Ccall(_stratego_a_17);
  MoveTop(5,2);
  Move(4,2,5,2);
  NotNULLd(4,2);
  NotNULLd(3,6);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(3,6),App0("TNil"))));
  Ccall(_stratego_u_16);
  MoveTop(5,3);
  Move(4,3,5,3);
  Epopd(5,3);
  Tpop();
  NotNULLd(4,3);
  NotNULLd(3,4);
  Tset(App2("TCons",Egetd(4,3),App2("TCons",Egetd(3,4),App0("TNil"))));
  MoveTop(4,4);
  goto q_3;
  q_3 :
  TestFunFC(f_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto r_3;
  r_3 :
  TestFunFC(f_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto s_3;
  s_3 :
  TestFunFC(g_0,&&fail,Egetd(4,8));
  Rpush(z_5);
  goto y_14;
  z_5 :
  goto l_5;
  y_14 :
  Epushd(5,6);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  Rpush(a_6);
  z_14 :
  Cpush(c_6);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_6);
  goto z_14;
  d_6 :
  AllBuild();
  goto b_6;
  c_6 :
  Ccall(_stratego_v_16);
  NotNULLd(4,7);
  Tset(Egetd(4,7));
  goto e_6;
  b_6 :
  Cpop();
  e_6 :
  Return();
  a_6 :
  MoveTop(5,1);
  NotNULLd(4,3);
  NotNULLd(3,6);
  Tset(App2("TCons",Egetd(4,3),App2("TCons",Egetd(3,6),App0("TNil"))));
  MoveTop(5,2);
  goto n_3;
  n_3 :
  TestFunFC(f_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto o_3;
  o_3 :
  TestFunFC(f_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto p_3;
  p_3 :
  TestFunFC(g_0,&&fail,Egetd(5,6));
  Rpush(q_6);
  goto c_15;
  q_6 :
  goto p_6;
  c_15 :
  Epushd(6,4);
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Rpush(y_6);
  d_15 :
  Cpush(a_7);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_7);
  goto d_15;
  b_7 :
  AllBuild();
  goto z_6;
  a_7 :
  Ccall(_stratego_v_16);
  NotNULLd(5,5);
  Tset(Egetd(5,5));
  goto c_7;
  z_6 :
  Cpop();
  c_7 :
  Return();
  y_6 :
  MoveTop(6,1);
  NotNULLd(3,3);
  NotNULLd(4,1);
  NotNULLd(3,10);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(4,1),App2("TCons",Egetd(3,10),App0("TNil")))));
  MoveTop(6,2);
  goto m_3;
  m_3 :
  TestFunFC(f_0,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  Rpush(h_7);
  goto f_15;
  h_7 :
  goto g_7;
  f_15 :
  Epushd(7,5);
  NotNULLd(6,4);
  Tset(Egetd(6,4));
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(8,3);
  MoveTop(8,1);
  goto g_3;
  g_3 :
  TestFunFC(i_1,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(t_7);
  goto g_15;
  t_7 :
  goto k_7;
  g_15 :
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(u_7);
  n_15 :
  Cpush(y_7);
  Ccall(_stratego_v_16);
  goto w_7;
  y_7 :
  Ccontinue(e_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(f_8);
  Tdupl();
  Epushd(9,2);
  MoveTop(9,1);
  goto d_3;
  d_3 :
  TestFunFC(t_1,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  Rpush(k_8);
  goto o_15;
  k_8 :
  goto j_8;
  o_15 :
  Return();
  j_8 :
  Epopd(9,2);
  Cpop();
  Crestore();
  Cjump();
  f_8 :
  OneNextSon();
  Rpush(v_8);
  goto n_15;
  v_8 :
  AllBuild();
  goto w_7;
  e_8 :
  Epushd(9,3);
  MoveTop(9,1);
  goto f_3;
  f_3 :
  TestFunFC(p_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(e_9);
  goto p_15;
  e_9 :
  goto y_8;
  p_15 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(f_9);
  goto n_15;
  f_9 :
  Return();
  y_8 :
  Epopd(9,3);
  goto w_8;
  w_7 :
  Cpop();
  w_8 :
  Return();
  u_7 :
  Return();
  k_7 :
  Epopd(8,3);
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_e_17);
  AllBuild();
  AllBuild();
  MoveTop(7,1);
  goto j_3;
  j_3 :
  TestFunFC(f_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto k_3;
  k_3 :
  TestFunFC(f_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto l_3;
  l_3 :
  TestFunFC(g_0,&&fail,Egetd(7,5));
  Rpush(h_9);
  goto q_15;
  h_9 :
  goto i_7;
  q_15 :
  Epushd(8,1);
  NotNULLd(7,2);
  Tset(Egetd(7,2));
  Rpush(l_9);
  r_15 :
  Cpush(n_9);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_9);
  goto r_15;
  o_9 :
  AllBuild();
  goto m_9;
  n_9 :
  Ccall(_stratego_v_16);
  NotNULLd(7,4);
  Tset(Egetd(7,4));
  goto p_9;
  m_9 :
  Cpop();
  p_9 :
  Return();
  l_9 :
  MoveTop(8,1);
  NotNULLd(5,1);
  NotNULLd(6,1);
  NotNULLd(3,8);
  NotNULLd(8,1);
  NotNULLd(3,12);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(6,1),App2("TCons",Egetd(3,8),App2("TCons",Egetd(8,1),App2("TCons",Egetd(3,12),App0("TNil")))))));
  Epopd(8,1);
  Return();
  i_7 :
  Epopd(7,5);
  Return();
  g_7 :
  Epopd(6,4);
  Return();
  p_6 :
  Epopd(5,6);
  Return();
  l_5 :
  Epopd(4,8);
  Return();
  m_0 :
  Cpush(u_9);
  Epushd(4,11);
  MoveTop(4,1);
  goto d_4;
  d_4 :
  TestFunFC(f_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto e_4;
  e_4 :
  TestFunFC(h_10,&&fail,Egetd(4,2));
  goto f_4;
  f_4 :
  TestFunFC(f_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto g_4;
  g_4 :
  TestFunFC(f_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto h_4;
  h_4 :
  TestFunFC(f_0,&&fail,Egetd(4,7));
  MoveArg(4,8,4,7,0);
  MoveArg(4,9,4,7,1);
  goto i_4;
  i_4 :
  TestFunFC(f_0,&&fail,Egetd(4,9));
  MoveArg(4,10,4,9,0);
  MoveArg(4,11,4,9,1);
  goto j_4;
  j_4 :
  TestFunFC(g_0,&&fail,Egetd(4,11));
  Rpush(b_10);
  goto h_16;
  b_10 :
  goto a_10;
  h_16 :
  NotNULLd(4,8);
  NotNULLd(4,10);
  Tset(App2("TCons",Egetd(4,8),App2("TCons",Egetd(4,10),App0("TNil"))));
  Return();
  a_10 :
  Epopd(4,11);
  goto t_9;
  u_9 :
  Rpush(k_10);
  goto p_11;
  k_10 :
  goto i_10;
  t_9 :
  Cpop();
  i_10 :
  Epopd(3,13);
  Return();
  k_0 :
  MoveTop(2,1);
  goto l_4;
  l_4 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto m_4;
  m_4 :
  TestFunFC(f_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto n_4;
  n_4 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  Rpush(l_10);
  goto i_16;
  l_10 :
  goto j_0;
  i_16 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Return();
  j_0 :
  Epopd(2,5);
  Return();
  h_0 :
  Epopd(1,7);
  Return();
  d_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_u_16)
  Epushd(0,5);
  MoveTop(0,5);
  goto l_17;
  l_17 :
  TestFunFC(f_0,&&p_10,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto m_17;
  m_17 :
  TestFunFC(f_0,&&q_10,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto n_17;
  n_17 :
  TestFunFC(g_0,&&c_11,Egetd(0,4));
  Cpush(e_11);
  Rpush(f_11);
  goto y_18;
  f_11 :
  goto d_11;
  e_11 :
  Rpush(m_11);
  goto d_19;
  m_11 :
  goto l_11;
  d_11 :
  Cpop();
  l_11 :
  goto o_10;
  c_11 :
  Rpush(o_10);
  goto d_19;
  q_10 :
  Rpush(o_10);
  goto d_19;
  p_10 :
  Rpush(o_10);
  goto d_19;
  o_10 :
  goto n_10;
  d_19 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(v_11);
  e_19 :
  Cpush(d_12);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(f_12);
  Epushd(1,7);
  MoveTop(1,1);
  goto b_17;
  b_17 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto c_17;
  c_17 :
  TestFunFC(f_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto d_17;
  d_17 :
  TestFunFC(f_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto f_17;
  f_17 :
  TestFunFC(g_0,&&fail,Egetd(1,6));
  Rpush(h_12);
  goto f_19;
  h_12 :
  goto g_12;
  f_19 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  g_12 :
  Epopd(1,7);
  goto e_12;
  f_12 :
  Ccall(_stratego_z_16);
  goto i_12;
  e_12 :
  Cpop();
  i_12 :
  OneNextSon();
  Ccall(_stratego_e_17);
  AllBuild();
  AllBuild();
  goto y_11;
  d_12 :
  Epushd(1,7);
  MoveTop(1,1);
  goto h_17;
  h_17 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_17;
  i_17 :
  TestFunFC(f_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto j_17;
  j_17 :
  TestFunFC(p_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto k_17;
  k_17 :
  TestFunFC(g_0,&&fail,Egetd(1,7));
  Rpush(l_12);
  goto g_19;
  l_12 :
  goto k_12;
  g_19 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  k_12 :
  Epopd(1,7);
  goto j_12;
  y_11 :
  Cpop();
  j_12 :
  Cpush(n_12);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_16);
  OneNextSon();
  Ccall(_stratego_e_17);
  AllBuild();
  AllBuild();
  goto m_12;
  n_12 :
  Rpush(p_12);
  goto e_19;
  p_12 :
  goto o_12;
  m_12 :
  Cpop();
  o_12 :
  Return();
  v_11 :
  Return();
  n_10 :
  goto m_10;
  y_18 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(q_12);
  z_18 :
  Cpush(s_12);
  Ccall(_stratego_v_16);
  goto r_12;
  s_12 :
  Ccontinue(t_12);
  Epushd(1,3);
  MoveTop(1,1);
  goto x_16;
  x_16 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(v_12);
  goto a_19;
  v_12 :
  goto u_12;
  a_19 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(w_12);
  b_19 :
  Cpush(y_12);
  Epushd(2,3);
  MoveTop(2,1);
  goto w_16;
  w_16 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(a_13);
  goto c_19;
  a_13 :
  goto z_12;
  c_19 :
  Move(1,2,2,2);
  Return();
  z_12 :
  Epopd(2,3);
  goto x_12;
  y_12 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_13);
  goto b_19;
  c_13 :
  AllBuild();
  goto b_13;
  x_12 :
  Cpop();
  b_13 :
  Return();
  w_12 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(d_13);
  goto z_18;
  d_13 :
  Return();
  u_12 :
  Epopd(1,3);
  goto r_12;
  t_12 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_13);
  goto z_18;
  f_13 :
  AllBuild();
  goto e_13;
  r_12 :
  Cpop();
  e_13 :
  Return();
  q_12 :
  Return();
  m_10 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_v_16)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_19;
  i_19 :
  TestFunFC(h_10,&&fail,Egetd(0,1));
  Rpush(h_13);
  goto k_19;
  h_13 :
  goto g_13;
  k_19 :
  Return();
  g_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_16)
  Epushd(0,7);
  MoveTop(0,1);
  goto n_20;
  n_20 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto o_20;
  o_20 :
  TestFunFC(f_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto p_20;
  p_20 :
  TestFunFC(f_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto q_20;
  q_20 :
  TestFunFC(g_0,&&fail,Egetd(0,6));
  Rpush(j_13);
  goto r_22;
  j_13 :
  goto i_13;
  r_22 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto n_19;
  n_19 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_19;
  o_19 :
  TestFunFC(f_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_19;
  p_19 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  Rpush(l_13);
  goto s_22;
  l_13 :
  goto k_13;
  s_22 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  k_13 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto r_19;
  r_19 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto s_19;
  s_19 :
  TestFunFC(f_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto t_19;
  t_19 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  Rpush(n_13);
  goto t_22;
  n_13 :
  goto m_13;
  t_22 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  m_13 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(o_13);
  u_22 :
  Epushd(2,9);
  MoveTop(2,1);
  goto a_20;
  a_20 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto b_20;
  b_20 :
  TestFunFC(h_10,&&s_13,Egetd(2,2));
  goto c_20;
  c_20 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto d_20;
  d_20 :
  TestFunFC(h_10,&&fail,Egetd(2,6));
  goto e_20;
  e_20 :
  TestFunFC(g_0,&&fail,Egetd(2,9));
  Rpush(r_13);
  goto v_22;
  s_13 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto f_20;
  f_20 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto g_20;
  g_20 :
  TestFunFC(p_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto h_20;
  h_20 :
  TestFunFC(g_0,&&fail,Egetd(2,9));
  Rpush(r_13);
  goto w_22;
  r_13 :
  goto q_13;
  w_22 :
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
  Rpush(u_13);
  goto u_22;
  u_13 :
  OneNextSon();
  Ccall(_stratego_e_17);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto x_19;
  x_19 :
  TestFunFC(f_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto y_19;
  y_19 :
  TestFunFC(f_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto z_19;
  z_19 :
  TestFunFC(g_0,&&fail,Egetd(3,5));
  Rpush(v_13);
  goto x_22;
  v_13 :
  goto t_13;
  x_22 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  t_13 :
  Epopd(3,5);
  Return();
  q_13 :
  goto p_13;
  v_22 :
  Tset(App0("Nil"));
  Return();
  p_13 :
  Epopd(2,9);
  Return();
  o_13 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto k_20;
  k_20 :
  TestFunFC(f_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto l_20;
  l_20 :
  TestFunFC(f_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto m_20;
  m_20 :
  TestFunFC(g_0,&&fail,Egetd(1,9));
  Rpush(x_13);
  goto z_22;
  x_13 :
  goto w_13;
  z_22 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(y_13);
  a_23 :
  Cpush(a_14);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_14);
  goto a_23;
  b_14 :
  AllBuild();
  goto z_13;
  a_14 :
  Ccall(_stratego_v_16);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto c_14;
  z_13 :
  Cpop();
  c_14 :
  Return();
  y_13 :
  Return();
  w_13 :
  Epopd(1,9);
  Return();
  i_13 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_a_17)
  Rpush(d_14);
  i_23 :
  Cpush(f_14);
  Ccall(_stratego_v_16);
  goto e_14;
  f_14 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_23;
  c_23 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(i_14);
  goto j_23;
  i_14 :
  goto h_14;
  j_23 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(j_14);
  k_23 :
  Cpush(l_14);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_14);
  goto k_23;
  m_14 :
  AllBuild();
  goto k_14;
  l_14 :
  Ccall(_stratego_v_16);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(o_14);
  goto i_23;
  o_14 :
  goto n_14;
  k_14 :
  Cpop();
  n_14 :
  Return();
  j_14 :
  Return();
  h_14 :
  Epopd(0,3);
  goto g_14;
  e_14 :
  Cpop();
  g_14 :
  Return();
  d_14 :
ENDPROC

PROC(_stratego_e_17)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_23;
  m_23 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  Rpush(q_14);
  goto o_23;
  q_14 :
  goto p_14;
  o_23 :
  Return();
  p_14 :
  Epopd(0,1);
ENDPROC

DOIT

