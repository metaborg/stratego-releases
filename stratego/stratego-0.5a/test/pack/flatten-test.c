#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,l_4);
VARDECL(AFun,o_1);
VARDECL(AFun,i_1);
VARDECL(AFun,o_0);
VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_y_4);
PROCDECL(_stratego_z_4);
PROCDECL(_stratego_a_5);
PROCDECL(_stratego_b_5);
PROCDECL(_stratego_c_5);
PROCDECL(_stratego_d_5);
PROCDECL(_stratego_e_5);
PROCDECL(_stratego_f_5);
PROCDECL(_stratego_g_5);
PROCDECL(_stratego_h_5);
PROCDECL(_stratego_i_5);
PROCDECL(_stratego_j_5);

PROC(_stratego_init_afuns)
  MOVE(l_4,ATmakeAFun("Nil",0,0));
  MOVE(o_1,ATmakeAFun("Imports",1,0));
  MOVE(i_1,ATmakeAFun("Module",2,0));
  MOVE(o_0,ATmakeAFun("Cons",2,0));
  MOVE(g_0,ATmakeAFun("TNil",0,0));
  MOVE(f_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_y_4);
  Ccall(_stratego_e_5);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_z_4);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_a_5);
  goto c_0;
  a_0 :
  Cpop();
  c_0 :
ENDPROC

PROC(_stratego_y_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_z_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_a_5)
  Tdupl();
  Ccall(_stratego_b_5);
  Tset(MakeInt(1));
  Ccall(_stratego_d_5);
  Tpop();
ENDPROC

PROC(_stratego_b_5)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_c_5);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_c_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_d_5)
  _ST_exit();
ENDPROC

PROC(_stratego_e_5)
  Epushd(0,5);
  MoveTop(0,1);
  goto n_8;
  n_8 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_8;
  o_8 :
  TestFunFC(f_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto p_8;
  p_8 :
  TestFunFC(g_0,&&fail,Egetd(0,5));
  Rpush(e_0);
  goto d_15;
  e_0 :
  goto d_0;
  d_15 :
  Epushd(1,7);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App2("TCons",App0("Nil"),App0("TNil")))));
  MoveTop(1,1);
  goto j_8;
  j_8 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_8;
  k_8 :
  TestFunFC(f_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto l_8;
  l_8 :
  TestFunFC(f_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto m_8;
  m_8 :
  TestFunFC(g_0,&&fail,Egetd(1,7));
  Rpush(i_0);
  goto e_15;
  i_0 :
  goto h_0;
  e_15 :
  Epushd(2,5);
  NotNULLd(1,2);
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,2),App0("Nil")),App2("TCons",App2("Cons",Egetd(1,2),App0("Nil")),App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App2("TCons",App0("Nil"),App0("TNil")))))));
  Rpush(k_0);
  f_15 :
  Epushd(3,13);
  MoveTop(3,1);
  goto q_7;
  q_7 :
  TestFunFC(f_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,5,3,1,1);
  goto r_7;
  r_7 :
  TestFunFC(o_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto s_7;
  s_7 :
  TestFunFC(f_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto t_7;
  t_7 :
  TestFunFC(f_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto u_7;
  u_7 :
  TestFunFC(f_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto v_7;
  v_7 :
  TestFunFC(f_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto w_7;
  w_7 :
  TestFunFC(g_0,&&fail,Egetd(3,13));
  Cpush(q_0);
  Rpush(r_0);
  goto g_15;
  r_0 :
  goto p_0;
  q_0 :
  Rpush(u_0);
  goto s_16;
  u_0 :
  goto s_0;
  p_0 :
  Cpop();
  s_0 :
  goto n_0;
  n_0 :
  goto m_0;
  s_16 :
  NotNULLd(3,4);
  NotNULLd(3,6);
  NotNULLd(3,8);
  NotNULLd(3,10);
  NotNULLd(3,3);
  NotNULLd(3,12);
  Tset(App2("TCons",Egetd(3,4),App2("TCons",Egetd(3,6),App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,10),App2("TCons",App2("Cons",Egetd(3,3),Egetd(3,12)),App0("TNil")))))));
  Return();
  m_0 :
  goto l_0;
  g_15 :
  Epushd(4,8);
  Tdupl();
  Epushd(5,3);
  NotNULLd(3,3);
  NotNULLd(3,8);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,8),App0("TNil"))));
  Rpush(v_0);
  h_15 :
  Epushd(6,7);
  MoveTop(6,1);
  goto q_5;
  q_5 :
  TestFunFC(f_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto r_5;
  r_5 :
  TestFunFC(f_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,7,6,3,1);
  goto s_5;
  s_5 :
  TestFunFC(o_0,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto t_5;
  t_5 :
  TestFunFC(g_0,&&fail,Egetd(6,7));
  Cpush(a_1);
  Rpush(b_1);
  goto i_15;
  b_1 :
  goto z_0;
  a_1 :
  Rpush(d_1);
  goto k_15;
  d_1 :
  goto c_1;
  z_0 :
  Cpop();
  c_1 :
  goto y_0;
  y_0 :
  goto x_0;
  k_15 :
  NotNULLd(6,2);
  NotNULLd(6,6);
  Tset(App2("TCons",Egetd(6,2),App2("TCons",Egetd(6,6),App0("TNil"))));
  Rpush(e_1);
  goto h_15;
  e_1 :
  Return();
  x_0 :
  goto w_0;
  i_15 :
  Tdupl();
  Epushd(7,7);
  NotNULLd(6,2);
  NotNULLd(6,5);
  Tset(App2("TCons",Egetd(6,2),App2("TCons",Egetd(6,5),App0("TNil"))));
  MoveTop(7,1);
  goto m_5;
  m_5 :
  TestFunFC(f_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto n_5;
  n_5 :
  TestFunFC(f_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,7,7,3,1);
  goto o_5;
  o_5 :
  TestFunFC(i_1,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto p_5;
  p_5 :
  TestFunFC(g_0,&&fail,Egetd(7,7));
  Rpush(h_1);
  goto j_15;
  h_1 :
  goto g_1;
  j_15 :
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
  m_15 :
  Epushd(6,2);
  MoveTop(6,2);
  goto o_6;
  o_6 :
  TestFunFC(o_1,&&n_1,Egetd(6,2));
  MoveArg(6,1,6,2,0);
  Cpush(q_1);
  Rpush(r_1);
  goto n_15;
  r_1 :
  goto p_1;
  q_1 :
  Rpush(t_1);
  goto p_15;
  t_1 :
  goto s_1;
  p_1 :
  Cpop();
  s_1 :
  goto m_1;
  n_1 :
  Rpush(m_1);
  goto p_15;
  m_1 :
  goto l_1;
  p_15 :
  Epushd(7,1);
  Tdupl();
  Epushd(8,5);
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  _ST_explode_term();
  MoveTop(8,1);
  goto z_5;
  z_5 :
  TestFunFC(f_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto a_6;
  a_6 :
  TestFunFC(f_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto b_6;
  b_6 :
  TestFunFC(g_0,&&fail,Egetd(8,5));
  Rpush(v_1);
  goto q_15;
  v_1 :
  goto u_1;
  q_15 :
  Move(7,1,8,4);
  Return();
  u_1 :
  Epopd(8,5);
  Tpop();
  NotNULLd(7,1);
  Tset(Egetd(7,1));
  Rpush(w_1);
  r_15 :
  Cpush(y_1);
  Ccall(_stratego_g_5);
  Tset(App0("Nil"));
  goto x_1;
  y_1 :
  Epushd(8,3);
  MoveTop(8,1);
  goto n_6;
  n_6 :
  TestFunFC(o_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(b_2);
  goto s_15;
  b_2 :
  goto a_2;
  s_15 :
  Epushd(9,7);
  NotNULLd(8,2);
  Tset(Egetd(8,2));
  Rpush(c_2);
  goto m_15;
  c_2 :
  MoveTop(9,1);
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(d_2);
  goto r_15;
  d_2 :
  MoveTop(9,2);
  NotNULLd(9,1);
  NotNULLd(9,2);
  Tset(App2("TCons",Egetd(9,1),App2("TCons",Egetd(9,2),App0("TNil"))));
  MoveTop(9,3);
  goto k_6;
  k_6 :
  TestFunFC(f_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto l_6;
  l_6 :
  TestFunFC(f_0,&&fail,Egetd(9,5));
  MoveArg(9,6,9,5,0);
  MoveArg(9,7,9,5,1);
  goto m_6;
  m_6 :
  TestFunFC(g_0,&&fail,Egetd(9,7));
  Rpush(f_2);
  goto v_15;
  f_2 :
  goto e_2;
  v_15 :
  NotNULLd(9,4);
  Tset(Egetd(9,4));
  Rpush(g_2);
  w_15 :
  Cpush(i_2);
  Ccall(_stratego_g_5);
  NotNULLd(9,6);
  Tset(Egetd(9,6));
  goto h_2;
  i_2 :
  Ccontinue(j_2);
  Epushd(10,3);
  MoveTop(10,1);
  goto j_6;
  j_6 :
  TestFunFC(o_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(l_2);
  goto x_15;
  l_2 :
  goto k_2;
  x_15 :
  Tdupl();
  NotNULLd(9,6);
  Tset(Egetd(9,6));
  Rpush(m_2);
  y_15 :
  Cpush(o_2);
  Epushd(11,3);
  MoveTop(11,1);
  goto i_6;
  i_6 :
  TestFunFC(o_0,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  Rpush(q_2);
  goto z_15;
  q_2 :
  goto p_2;
  z_15 :
  Move(10,2,11,2);
  Return();
  p_2 :
  Epopd(11,3);
  goto n_2;
  o_2 :
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_2);
  goto y_15;
  s_2 :
  AllBuild();
  goto r_2;
  n_2 :
  Cpop();
  r_2 :
  Return();
  m_2 :
  Tpop();
  NotNULLd(10,3);
  Tset(Egetd(10,3));
  Rpush(t_2);
  goto w_15;
  t_2 :
  Return();
  k_2 :
  Epopd(10,3);
  goto h_2;
  j_2 :
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_2);
  goto w_15;
  v_2 :
  AllBuild();
  goto u_2;
  h_2 :
  Cpop();
  u_2 :
  Return();
  g_2 :
  Return();
  e_2 :
  Epopd(9,7);
  Return();
  a_2 :
  Epopd(8,3);
  goto z_1;
  x_1 :
  Cpop();
  z_1 :
  Return();
  w_1 :
  Epopd(7,1);
  Return();
  l_1 :
  goto k_1;
  n_15 :
  NotNULLd(6,1);
  Tset(Egetd(6,1));
  NotNULLd(6,1);
  Tset(App2("Cons",Egetd(6,1),App0("Nil")));
  Return();
  k_1 :
  Epopd(6,2);
  Return();
  j_1 :
  Ccall(_stratego_i_5);
  MoveTop(5,2);
  Move(4,2,5,2);
  NotNULLd(4,2);
  NotNULLd(3,6);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(3,6),App0("TNil"))));
  Ccall(_stratego_f_5);
  MoveTop(5,3);
  Move(4,3,5,3);
  Epopd(5,3);
  Tpop();
  NotNULLd(4,3);
  NotNULLd(3,4);
  Tset(App2("TCons",Egetd(4,3),App2("TCons",Egetd(3,4),App0("TNil"))));
  MoveTop(4,4);
  goto n_7;
  n_7 :
  TestFunFC(f_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto o_7;
  o_7 :
  TestFunFC(f_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto p_7;
  p_7 :
  TestFunFC(g_0,&&fail,Egetd(4,8));
  Rpush(x_2);
  goto c_16;
  x_2 :
  goto w_2;
  c_16 :
  Epushd(5,6);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  Rpush(y_2);
  d_16 :
  Cpush(a_3);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_3);
  goto d_16;
  b_3 :
  AllBuild();
  goto z_2;
  a_3 :
  Ccall(_stratego_g_5);
  NotNULLd(4,7);
  Tset(Egetd(4,7));
  goto c_3;
  z_2 :
  Cpop();
  c_3 :
  Return();
  y_2 :
  MoveTop(5,1);
  NotNULLd(4,3);
  NotNULLd(3,6);
  Tset(App2("TCons",Egetd(4,3),App2("TCons",Egetd(3,6),App0("TNil"))));
  MoveTop(5,2);
  goto k_7;
  k_7 :
  TestFunFC(f_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto l_7;
  l_7 :
  TestFunFC(f_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto m_7;
  m_7 :
  TestFunFC(g_0,&&fail,Egetd(5,6));
  Rpush(e_3);
  goto h_16;
  e_3 :
  goto d_3;
  h_16 :
  Epushd(6,4);
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Rpush(f_3);
  i_16 :
  Cpush(h_3);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_3);
  goto i_16;
  i_3 :
  AllBuild();
  goto g_3;
  h_3 :
  Ccall(_stratego_g_5);
  NotNULLd(5,5);
  Tset(Egetd(5,5));
  goto j_3;
  g_3 :
  Cpop();
  j_3 :
  Return();
  f_3 :
  MoveTop(6,1);
  NotNULLd(3,3);
  NotNULLd(4,1);
  NotNULLd(3,10);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(4,1),App2("TCons",Egetd(3,10),App0("TNil")))));
  MoveTop(6,2);
  goto j_7;
  j_7 :
  TestFunFC(f_0,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  Rpush(l_3);
  goto k_16;
  l_3 :
  goto k_3;
  k_16 :
  Epushd(7,5);
  NotNULLd(6,4);
  Tset(Egetd(6,4));
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(8,3);
  MoveTop(8,1);
  goto d_7;
  d_7 :
  TestFunFC(i_1,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(o_3);
  goto l_16;
  o_3 :
  goto n_3;
  l_16 :
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(p_3);
  m_16 :
  Cpush(r_3);
  Ccall(_stratego_g_5);
  goto q_3;
  r_3 :
  Ccontinue(s_3);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Cpush(t_3);
  Tdupl();
  Epushd(9,2);
  MoveTop(9,1);
  goto y_6;
  y_6 :
  TestFunFC(o_1,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  Rpush(v_3);
  goto n_16;
  v_3 :
  goto u_3;
  n_16 :
  Return();
  u_3 :
  Epopd(9,2);
  Cpop();
  Crestore();
  Cjump();
  t_3 :
  OneNextSon();
  Rpush(w_3);
  goto m_16;
  w_3 :
  AllBuild();
  goto q_3;
  s_3 :
  Epushd(9,3);
  MoveTop(9,1);
  goto c_7;
  c_7 :
  TestFunFC(o_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(z_3);
  goto o_16;
  z_3 :
  goto y_3;
  o_16 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(a_4);
  goto m_16;
  a_4 :
  Return();
  y_3 :
  Epopd(9,3);
  goto x_3;
  q_3 :
  Cpop();
  x_3 :
  Return();
  p_3 :
  Return();
  n_3 :
  Epopd(8,3);
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_5);
  AllBuild();
  AllBuild();
  MoveTop(7,1);
  goto g_7;
  g_7 :
  TestFunFC(f_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto h_7;
  h_7 :
  TestFunFC(f_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto i_7;
  i_7 :
  TestFunFC(g_0,&&fail,Egetd(7,5));
  Rpush(b_4);
  goto p_16;
  b_4 :
  goto m_3;
  p_16 :
  Epushd(8,1);
  NotNULLd(7,2);
  Tset(Egetd(7,2));
  Rpush(c_4);
  q_16 :
  Cpush(e_4);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_4);
  goto q_16;
  f_4 :
  AllBuild();
  goto d_4;
  e_4 :
  Ccall(_stratego_g_5);
  NotNULLd(7,4);
  Tset(Egetd(7,4));
  goto g_4;
  d_4 :
  Cpop();
  g_4 :
  Return();
  c_4 :
  MoveTop(8,1);
  NotNULLd(5,1);
  NotNULLd(6,1);
  NotNULLd(3,8);
  NotNULLd(8,1);
  NotNULLd(3,12);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(6,1),App2("TCons",Egetd(3,8),App2("TCons",Egetd(8,1),App2("TCons",Egetd(3,12),App0("TNil")))))));
  Epopd(8,1);
  Return();
  m_3 :
  Epopd(7,5);
  Return();
  k_3 :
  Epopd(6,4);
  Return();
  d_3 :
  Epopd(5,6);
  Return();
  w_2 :
  Epopd(4,8);
  Return();
  l_0 :
  Cpush(i_4);
  Epushd(4,11);
  MoveTop(4,1);
  goto y_7;
  y_7 :
  TestFunFC(f_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto z_7;
  z_7 :
  TestFunFC(l_4,&&fail,Egetd(4,2));
  goto a_8;
  a_8 :
  TestFunFC(f_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto b_8;
  b_8 :
  TestFunFC(f_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto c_8;
  c_8 :
  TestFunFC(f_0,&&fail,Egetd(4,7));
  MoveArg(4,8,4,7,0);
  MoveArg(4,9,4,7,1);
  goto d_8;
  d_8 :
  TestFunFC(f_0,&&fail,Egetd(4,9));
  MoveArg(4,10,4,9,0);
  MoveArg(4,11,4,9,1);
  goto e_8;
  e_8 :
  TestFunFC(g_0,&&fail,Egetd(4,11));
  Rpush(k_4);
  goto t_16;
  k_4 :
  goto j_4;
  t_16 :
  NotNULLd(4,8);
  NotNULLd(4,10);
  Tset(App2("TCons",Egetd(4,8),App2("TCons",Egetd(4,10),App0("TNil"))));
  Return();
  j_4 :
  Epopd(4,11);
  goto h_4;
  i_4 :
  Rpush(n_4);
  goto f_15;
  n_4 :
  goto m_4;
  h_4 :
  Cpop();
  m_4 :
  Epopd(3,13);
  Return();
  k_0 :
  MoveTop(2,1);
  goto g_8;
  g_8 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto h_8;
  h_8 :
  TestFunFC(f_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto i_8;
  i_8 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  Rpush(o_4);
  goto u_16;
  o_4 :
  goto j_0;
  u_16 :
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

PROC(_stratego_f_5)
  Epushd(0,5);
  MoveTop(0,5);
  goto l_17;
  l_17 :
  TestFunFC(f_0,&&s_4,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto m_17;
  m_17 :
  TestFunFC(f_0,&&t_4,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto n_17;
  n_17 :
  TestFunFC(g_0,&&u_4,Egetd(0,4));
  Cpush(w_4);
  Rpush(x_4);
  goto y_18;
  x_4 :
  goto v_4;
  w_4 :
  Rpush(l_5);
  goto d_19;
  l_5 :
  goto k_5;
  v_4 :
  Cpop();
  k_5 :
  goto r_4;
  u_4 :
  Rpush(r_4);
  goto d_19;
  t_4 :
  Rpush(r_4);
  goto d_19;
  s_4 :
  Rpush(r_4);
  goto d_19;
  r_4 :
  goto q_4;
  d_19 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(u_5);
  e_19 :
  Cpush(w_5);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(y_5);
  Epushd(1,7);
  MoveTop(1,1);
  goto c_17;
  c_17 :
  TestFunFC(o_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto d_17;
  d_17 :
  TestFunFC(f_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto e_17;
  e_17 :
  TestFunFC(f_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto f_17;
  f_17 :
  TestFunFC(g_0,&&fail,Egetd(1,6));
  Rpush(d_6);
  goto f_19;
  d_6 :
  goto c_6;
  f_19 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  c_6 :
  Epopd(1,7);
  goto x_5;
  y_5 :
  Ccall(_stratego_h_5);
  goto e_6;
  x_5 :
  Cpop();
  e_6 :
  OneNextSon();
  Ccall(_stratego_j_5);
  AllBuild();
  AllBuild();
  goto v_5;
  w_5 :
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
  TestFunFC(o_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto k_17;
  k_17 :
  TestFunFC(g_0,&&fail,Egetd(1,7));
  Rpush(h_6);
  goto g_19;
  h_6 :
  goto g_6;
  g_19 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  g_6 :
  Epopd(1,7);
  goto f_6;
  v_5 :
  Cpop();
  f_6 :
  Cpush(q_6);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_5);
  OneNextSon();
  Ccall(_stratego_j_5);
  AllBuild();
  AllBuild();
  goto p_6;
  q_6 :
  Rpush(s_6);
  goto e_19;
  s_6 :
  goto r_6;
  p_6 :
  Cpop();
  r_6 :
  Return();
  u_5 :
  Return();
  q_4 :
  goto p_4;
  y_18 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(t_6);
  z_18 :
  Cpush(v_6);
  Ccall(_stratego_g_5);
  goto u_6;
  v_6 :
  Ccontinue(w_6);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_17;
  a_17 :
  TestFunFC(o_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(z_6);
  goto a_19;
  z_6 :
  goto x_6;
  a_19 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(a_7);
  b_19 :
  Cpush(e_7);
  Epushd(2,3);
  MoveTop(2,1);
  goto z_16;
  z_16 :
  TestFunFC(o_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(x_7);
  goto c_19;
  x_7 :
  goto f_7;
  c_19 :
  Move(1,2,2,2);
  Return();
  f_7 :
  Epopd(2,3);
  goto b_7;
  e_7 :
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_8);
  goto b_19;
  v_8 :
  AllBuild();
  goto f_8;
  b_7 :
  Cpop();
  f_8 :
  Return();
  a_7 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(w_8);
  goto z_18;
  w_8 :
  Return();
  x_6 :
  Epopd(1,3);
  goto u_6;
  w_6 :
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_9);
  goto z_18;
  f_9 :
  AllBuild();
  goto e_9;
  u_6 :
  Cpop();
  e_9 :
  Return();
  t_6 :
  Return();
  p_4 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_g_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_19;
  i_19 :
  TestFunFC(l_4,&&fail,Egetd(0,1));
  Rpush(u_9);
  goto k_19;
  u_9 :
  goto g_9;
  k_19 :
  Return();
  g_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_5)
  Epushd(0,7);
  MoveTop(0,1);
  goto n_20;
  n_20 :
  TestFunFC(o_0,&&fail,Egetd(0,1));
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
  Rpush(w_9);
  goto r_22;
  w_9 :
  goto v_9;
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
  Rpush(y_9);
  goto s_22;
  y_9 :
  goto x_9;
  s_22 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  x_9 :
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
  Rpush(k_10);
  goto t_22;
  k_10 :
  goto z_9;
  t_22 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  z_9 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(l_10);
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
  TestFunFC(l_4,&&z_10,Egetd(2,2));
  goto c_20;
  c_20 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto d_20;
  d_20 :
  TestFunFC(l_4,&&fail,Egetd(2,6));
  goto e_20;
  e_20 :
  TestFunFC(g_0,&&fail,Egetd(2,9));
  Rpush(v_10);
  goto v_22;
  z_10 :
  TestFunFC(o_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto f_20;
  f_20 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto g_20;
  g_20 :
  TestFunFC(o_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto h_20;
  h_20 :
  TestFunFC(g_0,&&fail,Egetd(2,9));
  Rpush(v_10);
  goto w_22;
  v_10 :
  goto u_10;
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
  Rpush(b_11);
  goto u_22;
  b_11 :
  OneNextSon();
  Ccall(_stratego_j_5);
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
  Rpush(d_11);
  goto x_22;
  d_11 :
  goto a_11;
  x_22 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  a_11 :
  Epopd(3,5);
  Return();
  u_10 :
  goto t_10;
  v_22 :
  Tset(App0("Nil"));
  Return();
  t_10 :
  Epopd(2,9);
  Return();
  l_10 :
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
  Rpush(n_11);
  goto z_22;
  n_11 :
  goto m_11;
  z_22 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(p_11);
  a_23 :
  Cpush(x_11);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_11);
  goto a_23;
  y_11 :
  AllBuild();
  goto r_11;
  x_11 :
  Ccall(_stratego_g_5);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto c_12;
  r_11 :
  Cpop();
  c_12 :
  Return();
  p_11 :
  Return();
  m_11 :
  Epopd(1,9);
  Return();
  v_9 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_i_5)
  Rpush(d_12);
  i_23 :
  Cpush(p_12);
  Ccall(_stratego_g_5);
  goto o_12;
  p_12 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_23;
  c_23 :
  TestFunFC(o_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(y_12);
  goto j_23;
  y_12 :
  goto x_12;
  j_23 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(a_13);
  k_23 :
  Cpush(f_13);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_13);
  goto k_23;
  j_13 :
  AllBuild();
  goto e_13;
  f_13 :
  Ccall(_stratego_g_5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_13);
  goto i_23;
  q_13 :
  goto k_13;
  e_13 :
  Cpop();
  k_13 :
  Return();
  a_13 :
  Return();
  x_12 :
  Epopd(0,3);
  goto r_12;
  o_12 :
  Cpop();
  r_12 :
  Return();
  d_12 :
ENDPROC

PROC(_stratego_j_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_23;
  m_23 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  Rpush(x_13);
  goto o_23;
  x_13 :
  goto r_13;
  o_23 :
  Return();
  r_13 :
  Epopd(0,1);
ENDPROC

DOIT

