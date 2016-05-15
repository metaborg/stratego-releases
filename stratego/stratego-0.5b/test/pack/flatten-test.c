#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,a_21);
VARDECL(AFun,z_20);
VARDECL(AFun,v_20);
VARDECL(AFun,a_8);
VARDECL(AFun,j_7);
VARDECL(AFun,d_2);
VARDECL(AFun,v_0);
VARDECL(AFun,j_0);
VARDECL(AFun,c_0);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(a_21,ATmakeAFun("stdout",0,0));
  MOVE(z_20,ATmakeAFun("stdin",0,0));
  MOVE(v_20,ATmakeAFun("stderr",0,0));
  MOVE(a_8,ATmakeAFun("Imports",1,0));
  MOVE(j_7,ATmakeAFun("Module",2,0));
  MOVE(d_2,ATmakeAFun("Nil",0,0));
  MOVE(v_0,ATmakeAFun("TCons",2,0));
  MOVE(j_0,ATmakeAFun("Cons",2,0));
  MOVE(c_0,ATmakeAFun("TNil",0,0));
ENDPROC

PROC(_stratego_y_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_0;
  r_0 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  Rpush(b_0);
  goto q_0;
  b_0 :
  goto a_0;
  q_0 :
  Return();
  a_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_4)
  Rpush(d_0);
  d_1 :
  Cpush(f_0);
  Ccall(_stratego_b_5);
  goto e_0;
  f_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto x_0;
  x_0 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(i_0);
  goto w_0;
  i_0 :
  goto h_0;
  w_0 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(k_0);
  e_1 :
  Cpush(m_0);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_0);
  goto e_1;
  n_0 :
  AllBuild();
  goto l_0;
  m_0 :
  Ccall(_stratego_b_5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(p_0);
  goto d_1;
  p_0 :
  goto o_0;
  l_0 :
  Cpop();
  o_0 :
  Return();
  k_0 :
  Return();
  h_0 :
  Epopd(0,3);
  goto g_0;
  e_0 :
  Cpop();
  g_0 :
  Return();
  d_0 :
ENDPROC

PROC(_stratego_a_5)
  Epushd(0,7);
  MoveTop(0,1);
  goto v_5;
  v_5 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto w_5;
  w_5 :
  TestFunFC(v_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_5;
  x_5 :
  TestFunFC(v_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto y_5;
  y_5 :
  TestFunFC(c_0,&&fail,Egetd(0,6));
  Rpush(u_0);
  goto f_1;
  u_0 :
  goto t_0;
  f_1 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto h_1;
  h_1 :
  TestFunFC(v_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto i_1;
  i_1 :
  TestFunFC(v_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto j_1;
  j_1 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(c_1);
  goto g_1;
  c_1 :
  goto b_1;
  g_1 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  b_1 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto l_1;
  l_1 :
  TestFunFC(v_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto m_1;
  m_1 :
  TestFunFC(v_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto n_1;
  n_1 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(q_1);
  goto k_1;
  q_1 :
  goto p_1;
  k_1 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  p_1 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(v_0,Egetd(1,2),(ATerm)ATmakeAppl2(v_0,Egetd(1,3),(ATerm)ATmakeAppl0(c_0))));
  Rpush(v_1);
  b_8 :
  Epushd(2,9);
  MoveTop(2,1);
  goto a_2;
  a_2 :
  TestFunFC(v_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto b_2;
  b_2 :
  TestFunFC(d_2,&&c_2,Egetd(2,2));
  goto k_5;
  k_5 :
  TestFunFC(v_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto l_5;
  l_5 :
  TestFunFC(d_2,&&fail,Egetd(2,6));
  goto m_5;
  m_5 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(y_1);
  goto o_1;
  c_2 :
  TestFunFC(j_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto n_5;
  n_5 :
  TestFunFC(v_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto o_5;
  o_5 :
  TestFunFC(j_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto p_5;
  p_5 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(y_1);
  goto r_1;
  y_1 :
  goto x_1;
  r_1 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(v_0,(ATerm)ATmakeAppl2(v_0,Egetd(2,3),(ATerm)ATmakeAppl2(v_0,Egetd(2,7),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl2(v_0,(ATerm)ATmakeAppl2(v_0,Egetd(2,4),(ATerm)ATmakeAppl2(v_0,Egetd(2,8),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  Rpush(f_2);
  goto b_8;
  f_2 :
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto t_1;
  t_1 :
  TestFunFC(v_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto u_1;
  u_1 :
  TestFunFC(v_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto z_1;
  z_1 :
  TestFunFC(c_0,&&fail,Egetd(3,5));
  Rpush(g_2);
  goto s_1;
  g_2 :
  goto e_2;
  s_1 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(3,2),Egetd(3,4)));
  Return();
  e_2 :
  Epopd(3,5);
  Return();
  x_1 :
  goto w_1;
  o_1 :
  Tset((ATerm)ATmakeAppl0(d_2));
  Return();
  w_1 :
  Epopd(2,9);
  Return();
  v_1 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(v_0,Egetd(1,4),(ATerm)ATmakeAppl2(v_0,Egetd(0,7),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,5);
  goto s_5;
  s_5 :
  TestFunFC(v_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto t_5;
  t_5 :
  TestFunFC(v_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto u_5;
  u_5 :
  TestFunFC(c_0,&&fail,Egetd(1,9));
  Rpush(i_2);
  goto r_5;
  i_2 :
  goto h_2;
  r_5 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(j_2);
  c_8 :
  Cpush(l_2);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_2);
  goto c_8;
  m_2 :
  AllBuild();
  goto k_2;
  l_2 :
  Ccall(_stratego_b_5);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto n_2;
  k_2 :
  Cpop();
  n_2 :
  Return();
  j_2 :
  Return();
  h_2 :
  Epopd(1,9);
  Return();
  t_0 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_b_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_8;
  e_8 :
  TestFunFC(d_2,&&fail,Egetd(0,1));
  Rpush(p_2);
  goto d_8;
  p_2 :
  goto o_2;
  d_8 :
  Return();
  o_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_5)
  Epushd(0,5);
  MoveTop(0,5);
  goto w_8;
  w_8 :
  TestFunFC(v_0,&&t_2,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto x_8;
  x_8 :
  TestFunFC(v_0,&&u_2,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto y_8;
  y_8 :
  TestFunFC(c_0,&&v_2,Egetd(0,4));
  Cpush(x_2);
  Rpush(y_2);
  goto g_8;
  y_2 :
  goto w_2;
  x_2 :
  Rpush(a_3);
  goto h_8;
  a_3 :
  goto z_2;
  w_2 :
  Cpop();
  z_2 :
  goto s_2;
  v_2 :
  Rpush(s_2);
  goto h_8;
  u_2 :
  Rpush(s_2);
  goto h_8;
  t_2 :
  Rpush(s_2);
  goto h_8;
  s_2 :
  goto r_2;
  h_8 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(v_0,(ATerm)ATmakeAppl0(d_2),(ATerm)ATmakeAppl2(v_0,Egetd(0,5),(ATerm)ATmakeAppl0(c_0))));
  Rpush(b_3);
  k_10 :
  Cpush(d_3);
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  Cpush(f_3);
  Epushd(1,7);
  MoveTop(1,1);
  goto n_8;
  n_8 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto o_8;
  o_8 :
  TestFunFC(v_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto p_8;
  p_8 :
  TestFunFC(v_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto q_8;
  q_8 :
  TestFunFC(c_0,&&fail,Egetd(1,6));
  Rpush(h_3);
  goto m_8;
  h_3 :
  goto g_3;
  m_8 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  g_3 :
  Epopd(1,7);
  goto e_3;
  f_3 :
  Ccall(_stratego_a_5);
  goto i_3;
  e_3 :
  Cpop();
  i_3 :
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  goto c_3;
  d_3 :
  Epushd(1,7);
  MoveTop(1,1);
  goto s_8;
  s_8 :
  TestFunFC(v_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto t_8;
  t_8 :
  TestFunFC(v_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto u_8;
  u_8 :
  TestFunFC(j_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto v_8;
  v_8 :
  TestFunFC(c_0,&&fail,Egetd(1,7));
  Rpush(l_3);
  goto r_8;
  l_3 :
  goto k_3;
  r_8 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(v_0,(ATerm)ATmakeAppl2(j_0,Egetd(1,5),Egetd(1,2)),(ATerm)ATmakeAppl2(v_0,Egetd(1,6),(ATerm)ATmakeAppl0(c_0))));
  Return();
  k_3 :
  Epopd(1,7);
  goto j_3;
  c_3 :
  Cpop();
  j_3 :
  Cpush(n_3);
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_5);
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  goto m_3;
  n_3 :
  Rpush(p_3);
  goto k_10;
  p_3 :
  goto o_3;
  m_3 :
  Cpop();
  o_3 :
  Return();
  b_3 :
  Return();
  r_2 :
  goto q_2;
  g_8 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(q_3);
  i_10 :
  Cpush(s_3);
  Ccall(_stratego_b_5);
  goto r_3;
  s_3 :
  Ccontinue(t_3);
  Epushd(1,3);
  MoveTop(1,1);
  goto l_8;
  l_8 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(v_3);
  goto i_8;
  v_3 :
  goto u_3;
  i_8 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(w_3);
  j_10 :
  Cpush(y_3);
  Epushd(2,3);
  MoveTop(2,1);
  goto k_8;
  k_8 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(a_4);
  goto j_8;
  a_4 :
  goto z_3;
  j_8 :
  Move(1,2,2,2);
  Return();
  z_3 :
  Epopd(2,3);
  goto x_3;
  y_3 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_4);
  goto j_10;
  c_4 :
  AllBuild();
  goto b_4;
  x_3 :
  Cpop();
  b_4 :
  Return();
  w_3 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(d_4);
  goto i_10;
  d_4 :
  Return();
  u_3 :
  Epopd(1,3);
  goto r_3;
  t_3 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_4);
  goto i_10;
  f_4 :
  AllBuild();
  goto e_4;
  r_3 :
  Cpop();
  e_4 :
  Return();
  q_3 :
  Return();
  q_2 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_d_5)
  Epushd(0,5);
  MoveTop(0,1);
  goto r_13;
  r_13 :
  TestFunFC(v_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto s_13;
  s_13 :
  TestFunFC(v_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto t_13;
  t_13 :
  TestFunFC(c_0,&&fail,Egetd(0,5));
  Rpush(h_4);
  goto l_10;
  h_4 :
  goto g_4;
  l_10 :
  Epushd(1,7);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(v_0,Egetd(0,2),(ATerm)ATmakeAppl2(v_0,Egetd(0,4),(ATerm)ATmakeAppl2(v_0,(ATerm)ATmakeAppl0(d_2),(ATerm)ATmakeAppl0(c_0)))));
  MoveTop(1,1);
  goto n_13;
  n_13 :
  TestFunFC(v_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_13;
  o_13 :
  TestFunFC(v_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto p_13;
  p_13 :
  TestFunFC(v_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto q_13;
  q_13 :
  TestFunFC(c_0,&&fail,Egetd(1,7));
  Rpush(j_4);
  goto m_10;
  j_4 :
  goto i_4;
  m_10 :
  Epushd(2,5);
  NotNULLd(1,2);
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(v_0,(ATerm)ATmakeAppl2(j_0,Egetd(1,2),(ATerm)ATmakeAppl0(d_2)),(ATerm)ATmakeAppl2(v_0,(ATerm)ATmakeAppl2(j_0,Egetd(1,2),(ATerm)ATmakeAppl0(d_2)),(ATerm)ATmakeAppl2(v_0,Egetd(1,4),(ATerm)ATmakeAppl2(v_0,Egetd(1,6),(ATerm)ATmakeAppl2(v_0,(ATerm)ATmakeAppl0(d_2),(ATerm)ATmakeAppl0(c_0)))))));
  Rpush(l_4);
  k_20 :
  Epushd(3,13);
  MoveTop(3,1);
  goto u_12;
  u_12 :
  TestFunFC(v_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,5,3,1,1);
  goto v_12;
  v_12 :
  TestFunFC(j_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto w_12;
  w_12 :
  TestFunFC(v_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto x_12;
  x_12 :
  TestFunFC(v_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto y_12;
  y_12 :
  TestFunFC(v_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto z_12;
  z_12 :
  TestFunFC(v_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto a_13;
  a_13 :
  TestFunFC(c_0,&&fail,Egetd(3,13));
  Cpush(q_4);
  Rpush(r_4);
  goto n_10;
  r_4 :
  goto p_4;
  q_4 :
  Rpush(t_4);
  goto o_10;
  t_4 :
  goto s_4;
  p_4 :
  Cpop();
  s_4 :
  goto o_4;
  o_4 :
  goto n_4;
  o_10 :
  NotNULLd(3,4);
  NotNULLd(3,6);
  NotNULLd(3,8);
  NotNULLd(3,10);
  NotNULLd(3,3);
  NotNULLd(3,12);
  Tset((ATerm)ATmakeAppl2(v_0,Egetd(3,4),(ATerm)ATmakeAppl2(v_0,Egetd(3,6),(ATerm)ATmakeAppl2(v_0,Egetd(3,8),(ATerm)ATmakeAppl2(v_0,Egetd(3,10),(ATerm)ATmakeAppl2(v_0,(ATerm)ATmakeAppl2(j_0,Egetd(3,3),Egetd(3,12)),(ATerm)ATmakeAppl0(c_0)))))));
  Return();
  n_4 :
  goto m_4;
  n_10 :
  Epushd(4,8);
  Tdupl();
  Epushd(5,3);
  NotNULLd(3,3);
  NotNULLd(3,8);
  Tset((ATerm)ATmakeAppl2(v_0,Egetd(3,3),(ATerm)ATmakeAppl2(v_0,Egetd(3,8),(ATerm)ATmakeAppl0(c_0))));
  Rpush(u_4);
  l_20 :
  Epushd(6,7);
  MoveTop(6,1);
  goto w_10;
  w_10 :
  TestFunFC(v_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto x_10;
  x_10 :
  TestFunFC(v_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,7,6,3,1);
  goto y_10;
  y_10 :
  TestFunFC(j_0,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto z_10;
  z_10 :
  TestFunFC(c_0,&&fail,Egetd(6,7));
  Cpush(j_6);
  Rpush(k_6);
  goto p_10;
  k_6 :
  goto q_5;
  j_6 :
  Rpush(f_7);
  goto q_10;
  f_7 :
  goto l_6;
  q_5 :
  Cpop();
  l_6 :
  goto x_4;
  x_4 :
  goto w_4;
  q_10 :
  NotNULLd(6,2);
  NotNULLd(6,6);
  Tset((ATerm)ATmakeAppl2(v_0,Egetd(6,2),(ATerm)ATmakeAppl2(v_0,Egetd(6,6),(ATerm)ATmakeAppl0(c_0))));
  Rpush(g_7);
  goto l_20;
  g_7 :
  Return();
  w_4 :
  goto v_4;
  p_10 :
  Tdupl();
  Epushd(7,7);
  NotNULLd(6,2);
  NotNULLd(6,5);
  Tset((ATerm)ATmakeAppl2(v_0,Egetd(6,2),(ATerm)ATmakeAppl2(v_0,Egetd(6,5),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(7,1);
  goto s_10;
  s_10 :
  TestFunFC(v_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto t_10;
  t_10 :
  TestFunFC(v_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,7,7,3,1);
  goto u_10;
  u_10 :
  TestFunFC(j_7,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto v_10;
  v_10 :
  TestFunFC(c_0,&&fail,Egetd(7,7));
  Rpush(i_7);
  goto r_10;
  i_7 :
  goto h_7;
  r_10 :
  Move(7,2,7,5);
  Return();
  h_7 :
  Epopd(7,7);
  Tpop();
  NotNULLd(6,5);
  Tset(Egetd(6,5));
  Return();
  v_4 :
  Epopd(6,7);
  Return();
  u_4 :
  MoveTop(5,1);
  Move(4,1,5,1);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Rpush(k_7);
  m_20 :
  Epushd(6,2);
  MoveTop(6,2);
  goto u_11;
  u_11 :
  TestFunFC(a_8,&&z_7,Egetd(6,2));
  MoveArg(6,1,6,2,0);
  Cpush(f_9);
  Rpush(j_9);
  goto b_11;
  j_9 :
  goto e_9;
  f_9 :
  Rpush(o_9);
  goto c_11;
  o_9 :
  goto k_9;
  e_9 :
  Cpop();
  k_9 :
  goto t_7;
  z_7 :
  Rpush(t_7);
  goto c_11;
  t_7 :
  goto r_7;
  c_11 :
  Epushd(7,1);
  Tdupl();
  Epushd(8,5);
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  _ST_explode_term();
  MoveTop(8,1);
  goto f_11;
  f_11 :
  TestFunFC(v_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto g_11;
  g_11 :
  TestFunFC(v_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto h_11;
  h_11 :
  TestFunFC(c_0,&&fail,Egetd(8,5));
  Rpush(f_10);
  goto e_11;
  f_10 :
  goto w_9;
  e_11 :
  Move(7,1,8,4);
  Return();
  w_9 :
  Epopd(8,5);
  Tpop();
  NotNULLd(7,1);
  Tset(Egetd(7,1));
  Rpush(g_10);
  n_20 :
  Cpush(a_11);
  Ccall(_stratego_b_5);
  Tset((ATerm)ATmakeAppl0(d_2));
  goto h_10;
  a_11 :
  Epushd(8,3);
  MoveTop(8,1);
  goto t_11;
  t_11 :
  TestFunFC(j_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(k_11);
  goto i_11;
  k_11 :
  goto j_11;
  i_11 :
  Epushd(9,7);
  NotNULLd(8,2);
  Tset(Egetd(8,2));
  Rpush(v_11);
  goto m_20;
  v_11 :
  MoveTop(9,1);
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(w_11);
  goto n_20;
  w_11 :
  MoveTop(9,2);
  NotNULLd(9,1);
  NotNULLd(9,2);
  Tset((ATerm)ATmakeAppl2(v_0,Egetd(9,1),(ATerm)ATmakeAppl2(v_0,Egetd(9,2),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(9,3);
  goto q_11;
  q_11 :
  TestFunFC(v_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto r_11;
  r_11 :
  TestFunFC(v_0,&&fail,Egetd(9,5));
  MoveArg(9,6,9,5,0);
  MoveArg(9,7,9,5,1);
  goto s_11;
  s_11 :
  TestFunFC(c_0,&&fail,Egetd(9,7));
  Rpush(a_12);
  goto l_11;
  a_12 :
  goto y_11;
  l_11 :
  NotNULLd(9,4);
  Tset(Egetd(9,4));
  Rpush(j_12);
  o_20 :
  Cpush(a_14);
  Ccall(_stratego_b_5);
  NotNULLd(9,6);
  Tset(Egetd(9,6));
  goto z_13;
  a_14 :
  Ccontinue(i_14);
  Epushd(10,3);
  MoveTop(10,1);
  goto p_11;
  p_11 :
  TestFunFC(j_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(k_14);
  goto m_11;
  k_14 :
  goto j_14;
  m_11 :
  Tdupl();
  NotNULLd(9,6);
  Tset(Egetd(9,6));
  Rpush(y_14);
  p_20 :
  Cpush(a_15);
  Epushd(11,3);
  MoveTop(11,1);
  goto o_11;
  o_11 :
  TestFunFC(j_0,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  Rpush(c_15);
  goto n_11;
  c_15 :
  goto b_15;
  n_11 :
  Move(10,2,11,2);
  Return();
  b_15 :
  Epopd(11,3);
  goto z_14;
  a_15 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_15);
  goto p_20;
  o_15 :
  AllBuild();
  goto d_15;
  z_14 :
  Cpop();
  d_15 :
  Return();
  y_14 :
  Tpop();
  NotNULLd(10,3);
  Tset(Egetd(10,3));
  Rpush(p_15);
  goto o_20;
  p_15 :
  Return();
  j_14 :
  Epopd(10,3);
  goto z_13;
  i_14 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_15);
  goto o_20;
  y_15 :
  AllBuild();
  goto x_15;
  z_13 :
  Cpop();
  x_15 :
  Return();
  j_12 :
  Return();
  y_11 :
  Epopd(9,7);
  Return();
  j_11 :
  Epopd(8,3);
  goto d_11;
  h_10 :
  Cpop();
  d_11 :
  Return();
  g_10 :
  Epopd(7,1);
  Return();
  r_7 :
  goto q_7;
  b_11 :
  NotNULLd(6,1);
  Tset(Egetd(6,1));
  NotNULLd(6,1);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(6,1),(ATerm)ATmakeAppl0(d_2)));
  Return();
  q_7 :
  Epopd(6,2);
  Return();
  k_7 :
  Ccall(_stratego_z_4);
  MoveTop(5,2);
  Move(4,2,5,2);
  NotNULLd(4,2);
  NotNULLd(3,6);
  Tset((ATerm)ATmakeAppl2(v_0,Egetd(4,2),(ATerm)ATmakeAppl2(v_0,Egetd(3,6),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_c_5);
  MoveTop(5,3);
  Move(4,3,5,3);
  Epopd(5,3);
  Tpop();
  NotNULLd(4,3);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(v_0,Egetd(4,3),(ATerm)ATmakeAppl2(v_0,Egetd(3,4),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(4,4);
  goto r_12;
  r_12 :
  TestFunFC(v_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto s_12;
  s_12 :
  TestFunFC(v_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto t_12;
  t_12 :
  TestFunFC(c_0,&&fail,Egetd(4,8));
  Rpush(d_16);
  goto x_11;
  d_16 :
  goto z_15;
  x_11 :
  Epushd(5,6);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  Rpush(e_16);
  q_20 :
  Cpush(h_16);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_16);
  goto q_20;
  q_16 :
  AllBuild();
  goto f_16;
  h_16 :
  Ccall(_stratego_b_5);
  NotNULLd(4,7);
  Tset(Egetd(4,7));
  goto r_16;
  f_16 :
  Cpop();
  r_16 :
  Return();
  e_16 :
  MoveTop(5,1);
  NotNULLd(4,3);
  NotNULLd(3,6);
  Tset((ATerm)ATmakeAppl2(v_0,Egetd(4,3),(ATerm)ATmakeAppl2(v_0,Egetd(3,6),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(5,2);
  goto o_12;
  o_12 :
  TestFunFC(v_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto p_12;
  p_12 :
  TestFunFC(v_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto q_12;
  q_12 :
  TestFunFC(c_0,&&fail,Egetd(5,6));
  Rpush(u_16);
  goto z_11;
  u_16 :
  goto t_16;
  z_11 :
  Epushd(6,4);
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Rpush(v_16);
  r_20 :
  Cpush(d_17);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_17);
  goto r_20;
  e_17 :
  AllBuild();
  goto x_16;
  d_17 :
  Ccall(_stratego_b_5);
  NotNULLd(5,5);
  Tset(Egetd(5,5));
  goto i_17;
  x_16 :
  Cpop();
  i_17 :
  Return();
  v_16 :
  MoveTop(6,1);
  NotNULLd(3,3);
  NotNULLd(4,1);
  NotNULLd(3,10);
  Tset((ATerm)ATmakeAppl2(v_0,Egetd(3,3),(ATerm)ATmakeAppl2(v_0,Egetd(4,1),(ATerm)ATmakeAppl2(v_0,Egetd(3,10),(ATerm)ATmakeAppl0(c_0)))));
  MoveTop(6,2);
  goto n_12;
  n_12 :
  TestFunFC(v_0,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  Rpush(u_17);
  goto b_12;
  u_17 :
  goto j_17;
  b_12 :
  Epushd(7,5);
  NotNULLd(6,4);
  Tset(Egetd(6,4));
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  Epushd(8,3);
  MoveTop(8,1);
  goto h_12;
  h_12 :
  TestFunFC(j_7,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(d_18);
  goto c_12;
  d_18 :
  goto x_17;
  c_12 :
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(e_18);
  s_20 :
  Cpush(k_18);
  Ccall(_stratego_b_5);
  goto g_18;
  k_18 :
  Ccontinue(l_18);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Cpush(p_18);
  Tdupl();
  Epushd(9,2);
  MoveTop(9,1);
  goto e_12;
  e_12 :
  TestFunFC(a_8,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  Rpush(w_18);
  goto d_12;
  w_18 :
  goto q_18;
  d_12 :
  Return();
  q_18 :
  Epopd(9,2);
  Cpop();
  Crestore();
  Cjump();
  p_18 :
  OneNextSon();
  Rpush(x_18);
  goto s_20;
  x_18 :
  AllBuild();
  goto g_18;
  l_18 :
  Epushd(9,3);
  MoveTop(9,1);
  goto g_12;
  g_12 :
  TestFunFC(j_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(g_19);
  goto f_12;
  g_19 :
  goto e_19;
  f_12 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(h_19);
  goto s_20;
  h_19 :
  Return();
  e_19 :
  Epopd(9,3);
  goto d_19;
  g_18 :
  Cpop();
  d_19 :
  Return();
  e_18 :
  Return();
  x_17 :
  Epopd(8,3);
  OneNextSon();
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  MoveTop(7,1);
  goto k_12;
  k_12 :
  TestFunFC(v_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto l_12;
  l_12 :
  TestFunFC(v_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto m_12;
  m_12 :
  TestFunFC(c_0,&&fail,Egetd(7,5));
  Rpush(i_19);
  goto i_12;
  i_19 :
  goto v_17;
  i_12 :
  Epushd(8,1);
  NotNULLd(7,2);
  Tset(Egetd(7,2));
  Rpush(j_19);
  t_20 :
  Cpush(l_19);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_19);
  goto t_20;
  m_19 :
  AllBuild();
  goto k_19;
  l_19 :
  Ccall(_stratego_b_5);
  NotNULLd(7,4);
  Tset(Egetd(7,4));
  goto n_19;
  k_19 :
  Cpop();
  n_19 :
  Return();
  j_19 :
  MoveTop(8,1);
  NotNULLd(5,1);
  NotNULLd(6,1);
  NotNULLd(3,8);
  NotNULLd(8,1);
  NotNULLd(3,12);
  Tset((ATerm)ATmakeAppl2(v_0,Egetd(5,1),(ATerm)ATmakeAppl2(v_0,Egetd(6,1),(ATerm)ATmakeAppl2(v_0,Egetd(3,8),(ATerm)ATmakeAppl2(v_0,Egetd(8,1),(ATerm)ATmakeAppl2(v_0,Egetd(3,12),(ATerm)ATmakeAppl0(c_0)))))));
  Epopd(8,1);
  Return();
  v_17 :
  Epopd(7,5);
  Return();
  j_17 :
  Epopd(6,4);
  Return();
  t_16 :
  Epopd(5,6);
  Return();
  z_15 :
  Epopd(4,8);
  Return();
  m_4 :
  Cpush(a_20);
  Epushd(4,11);
  MoveTop(4,1);
  goto c_13;
  c_13 :
  TestFunFC(v_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto d_13;
  d_13 :
  TestFunFC(d_2,&&fail,Egetd(4,2));
  goto e_13;
  e_13 :
  TestFunFC(v_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto f_13;
  f_13 :
  TestFunFC(v_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto g_13;
  g_13 :
  TestFunFC(v_0,&&fail,Egetd(4,7));
  MoveArg(4,8,4,7,0);
  MoveArg(4,9,4,7,1);
  goto h_13;
  h_13 :
  TestFunFC(v_0,&&fail,Egetd(4,9));
  MoveArg(4,10,4,9,0);
  MoveArg(4,11,4,9,1);
  goto i_13;
  i_13 :
  TestFunFC(c_0,&&fail,Egetd(4,11));
  Rpush(c_20);
  goto b_13;
  c_20 :
  goto b_20;
  b_13 :
  NotNULLd(4,8);
  NotNULLd(4,10);
  Tset((ATerm)ATmakeAppl2(v_0,Egetd(4,8),(ATerm)ATmakeAppl2(v_0,Egetd(4,10),(ATerm)ATmakeAppl0(c_0))));
  Return();
  b_20 :
  Epopd(4,11);
  goto z_19;
  a_20 :
  Rpush(j_20);
  goto k_20;
  j_20 :
  goto i_20;
  z_19 :
  Cpop();
  i_20 :
  Epopd(3,13);
  Return();
  l_4 :
  MoveTop(2,1);
  goto k_13;
  k_13 :
  TestFunFC(v_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto l_13;
  l_13 :
  TestFunFC(v_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto m_13;
  m_13 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(u_20);
  goto j_13;
  u_20 :
  goto k_4;
  j_13 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Return();
  k_4 :
  Epopd(2,5);
  Return();
  i_4 :
  Epopd(1,7);
  Return();
  g_4 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_e_5)
  _ST_exit();
ENDPROC

PROC(_stratego_f_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_g_5)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(v_0,(ATerm)ATmakeAppl0(v_20),(ATerm)ATmakeAppl2(v_0,Egetd(0,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_f_5);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_h_5)
  Tdupl();
  Ccall(_stratego_g_5);
  Tset(MakeInt(1));
  Ccall(_stratego_e_5);
  Tpop();
ENDPROC

PROC(_stratego_i_5)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_j_5)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_main)
  Cpush(y_20);
  Epushd(0,1);
  Tset((ATerm)ATmakeAppl0(z_20));
  Ccall(_stratego_j_5);
  Ccall(_stratego_d_5);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(v_0,(ATerm)ATmakeAppl0(a_21),(ATerm)ATmakeAppl2(v_0,Egetd(0,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_i_5);
  Epopd(0,1);
  goto w_20;
  y_20 :
  Tset((ATerm)ATmakeAppl2(j_0,ATmakeString("** rewriting failed"),(ATerm)ATmakeAppl0(d_2)));
  Ccall(_stratego_h_5);
  goto b_21;
  w_20 :
  Cpop();
  b_21 :
ENDPROC

DOIT

