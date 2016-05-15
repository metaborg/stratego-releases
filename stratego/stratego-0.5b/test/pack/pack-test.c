#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,n_17);
VARDECL(AFun,l_17);
VARDECL(AFun,c_17);
VARDECL(AFun,f_7);
VARDECL(AFun,k_0);
VARDECL(AFun,i_0);
VARDECL(AFun,h_0);
VARDECL(AFun,e_0);
PROCDECL(_stratego_u_4);
PROCDECL(_stratego_v_4);
PROCDECL(_stratego_w_4);
PROCDECL(_stratego_x_4);
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
PROCDECL(_stratego_m_5);
PROCDECL(_stratego_n_5);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(n_17,ATmakeAFun("stdout",0,0));
  MOVE(l_17,ATmakeAFun("stdin",0,0));
  MOVE(c_17,ATmakeAFun("stderr",0,0));
  MOVE(f_7,ATmakeAFun("Imports",1,0));
  MOVE(k_0,ATmakeAFun("Nil",0,0));
  MOVE(i_0,ATmakeAFun("TNil",0,0));
  MOVE(h_0,ATmakeAFun("TCons",2,0));
  MOVE(e_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_u_4)
  _ST_implode_string();
ENDPROC

PROC(_stratego_v_4)
  _ST_explode_string();
ENDPROC

PROC(_stratego_w_4)
  Rpush(a_0);
  o_0 :
  Cpush(c_0);
  Ccall(_stratego_b_5);
  goto b_0;
  c_0 :
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  OneNextSon();
  Rpush(f_0);
  goto o_0;
  f_0 :
  AllBuild();
  goto d_0;
  b_0 :
  Cpop();
  d_0 :
  Return();
  a_0 :
  Ccall(_stratego_y_4);
  Ccall(_stratego_u_4);
ENDPROC

PROC(_stratego_x_4)
  Epushd(0,6);
  MoveTop(0,1);
  Tset(ATmakeString("trm"));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(h_0,Egetd(0,1),(ATerm)ATmakeAppl2(h_0,ATmakeString("trm"),(ATerm)ATmakeAppl0(i_0))));
  MoveTop(0,2);
  goto w_0;
  w_0 :
  TestFunFC(h_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_0;
  x_0 :
  TestFunFC(h_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto y_0;
  y_0 :
  TestFunFC(i_0,&&fail,Egetd(0,6));
  Rpush(j_0);
  goto v_0;
  j_0 :
  goto g_0;
  v_0 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(0,3),(ATerm)ATmakeAppl2(e_0,ATmakeString("."),(ATerm)ATmakeAppl2(e_0,Egetd(0,5),(ATerm)ATmakeAppl0(k_0)))));
  Ccall(_stratego_w_4);
  Ccall(_stratego_n_5);
  Return();
  g_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_y_4)
  Rpush(l_0);
  h_2 :
  Cpush(n_0);
  Ccall(_stratego_b_5);
  goto m_0;
  n_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto n_1;
  n_1 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(r_0);
  goto m_1;
  r_0 :
  goto q_0;
  m_1 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(s_0);
  i_2 :
  Cpush(u_0);
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_1);
  goto i_2;
  a_1 :
  AllBuild();
  goto t_0;
  u_0 :
  Ccall(_stratego_b_5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(c_1);
  goto h_2;
  c_1 :
  goto b_1;
  t_0 :
  Cpop();
  b_1 :
  Return();
  s_0 :
  Return();
  q_0 :
  Epopd(0,3);
  goto p_0;
  m_0 :
  Cpop();
  p_0 :
  Return();
  l_0 :
ENDPROC

PROC(_stratego_z_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_5;
  i_5 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  Rpush(e_1);
  goto j_2;
  e_1 :
  goto d_1;
  j_2 :
  Return();
  d_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_5)
  Epushd(0,7);
  MoveTop(0,1);
  goto o_6;
  o_6 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto p_6;
  p_6 :
  TestFunFC(h_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto q_6;
  q_6 :
  TestFunFC(h_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto r_6;
  r_6 :
  TestFunFC(i_0,&&fail,Egetd(0,6));
  Rpush(l_1);
  goto k_5;
  l_1 :
  goto k_1;
  k_5 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto o_5;
  o_5 :
  TestFunFC(h_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto p_5;
  p_5 :
  TestFunFC(h_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_5;
  q_5 :
  TestFunFC(i_0,&&fail,Egetd(2,5));
  Rpush(p_1);
  goto l_5;
  p_1 :
  goto o_1;
  l_5 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  o_1 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto s_5;
  s_5 :
  TestFunFC(h_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto t_5;
  t_5 :
  TestFunFC(h_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto u_5;
  u_5 :
  TestFunFC(i_0,&&fail,Egetd(2,5));
  Rpush(t_1);
  goto r_5;
  t_1 :
  goto q_1;
  r_5 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  q_1 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(h_0,Egetd(1,2),(ATerm)ATmakeAppl2(h_0,Egetd(1,3),(ATerm)ATmakeAppl0(i_0))));
  Rpush(u_1);
  u_8 :
  Epushd(2,9);
  MoveTop(2,1);
  goto b_6;
  b_6 :
  TestFunFC(h_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto c_6;
  c_6 :
  TestFunFC(k_0,&&z_1,Egetd(2,2));
  goto d_6;
  d_6 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto e_6;
  e_6 :
  TestFunFC(k_0,&&fail,Egetd(2,6));
  goto f_6;
  f_6 :
  TestFunFC(i_0,&&fail,Egetd(2,9));
  Rpush(y_1);
  goto v_5;
  z_1 :
  TestFunFC(e_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto g_6;
  g_6 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto h_6;
  h_6 :
  TestFunFC(e_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto i_6;
  i_6 :
  TestFunFC(i_0,&&fail,Egetd(2,9));
  Rpush(y_1);
  goto w_5;
  y_1 :
  goto w_1;
  w_5 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(h_0,(ATerm)ATmakeAppl2(h_0,Egetd(2,3),(ATerm)ATmakeAppl2(h_0,Egetd(2,7),(ATerm)ATmakeAppl0(i_0))),(ATerm)ATmakeAppl2(h_0,(ATerm)ATmakeAppl2(h_0,Egetd(2,4),(ATerm)ATmakeAppl2(h_0,Egetd(2,8),(ATerm)ATmakeAppl0(i_0))),(ATerm)ATmakeAppl0(i_0))));
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Rpush(b_2);
  goto u_8;
  b_2 :
  OneNextSon();
  Ccall(_stratego_z_4);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto y_5;
  y_5 :
  TestFunFC(h_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto z_5;
  z_5 :
  TestFunFC(h_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto a_6;
  a_6 :
  TestFunFC(i_0,&&fail,Egetd(3,5));
  Rpush(c_2);
  goto x_5;
  c_2 :
  goto a_2;
  x_5 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(3,2),Egetd(3,4)));
  Return();
  a_2 :
  Epopd(3,5);
  Return();
  w_1 :
  goto v_1;
  v_5 :
  Tset((ATerm)ATmakeAppl0(k_0));
  Return();
  v_1 :
  Epopd(2,9);
  Return();
  u_1 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(h_0,Egetd(1,4),(ATerm)ATmakeAppl2(h_0,Egetd(0,7),(ATerm)ATmakeAppl0(i_0))));
  MoveTop(1,5);
  goto l_6;
  l_6 :
  TestFunFC(h_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto m_6;
  m_6 :
  TestFunFC(h_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto n_6;
  n_6 :
  TestFunFC(i_0,&&fail,Egetd(1,9));
  Rpush(e_2);
  goto k_6;
  e_2 :
  goto d_2;
  k_6 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(f_2);
  v_8 :
  Cpush(k_2);
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_2);
  goto v_8;
  l_2 :
  AllBuild();
  goto g_2;
  k_2 :
  Ccall(_stratego_b_5);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto m_2;
  g_2 :
  Cpop();
  m_2 :
  Return();
  f_2 :
  Return();
  d_2 :
  Epopd(1,9);
  Return();
  k_1 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_b_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_8;
  x_8 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  Rpush(o_2);
  goto w_8;
  o_2 :
  goto n_2;
  w_8 :
  Return();
  n_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_5)
  Epushd(0,5);
  MoveTop(0,5);
  goto p_9;
  p_9 :
  TestFunFC(h_0,&&s_2,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto q_9;
  q_9 :
  TestFunFC(h_0,&&t_2,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto r_9;
  r_9 :
  TestFunFC(i_0,&&u_2,Egetd(0,4));
  Cpush(w_2);
  Rpush(x_2);
  goto z_8;
  x_2 :
  goto v_2;
  w_2 :
  Rpush(z_2);
  goto a_9;
  z_2 :
  goto y_2;
  v_2 :
  Cpop();
  y_2 :
  goto r_2;
  u_2 :
  Rpush(r_2);
  goto a_9;
  t_2 :
  Rpush(r_2);
  goto a_9;
  s_2 :
  Rpush(r_2);
  goto a_9;
  r_2 :
  goto q_2;
  a_9 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(h_0,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl2(h_0,Egetd(0,5),(ATerm)ATmakeAppl0(i_0))));
  Rpush(a_3);
  d_11 :
  Cpush(c_3);
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Cpush(e_3);
  Epushd(1,7);
  MoveTop(1,1);
  goto g_9;
  g_9 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto h_9;
  h_9 :
  TestFunFC(h_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto i_9;
  i_9 :
  TestFunFC(h_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto j_9;
  j_9 :
  TestFunFC(i_0,&&fail,Egetd(1,6));
  Rpush(g_3);
  goto f_9;
  g_3 :
  goto f_3;
  f_9 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  f_3 :
  Epopd(1,7);
  goto d_3;
  e_3 :
  Ccall(_stratego_a_5);
  goto h_3;
  d_3 :
  Cpop();
  h_3 :
  OneNextSon();
  Ccall(_stratego_z_4);
  AllBuild();
  AllBuild();
  goto b_3;
  c_3 :
  Epushd(1,7);
  MoveTop(1,1);
  goto l_9;
  l_9 :
  TestFunFC(h_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_9;
  m_9 :
  TestFunFC(h_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto n_9;
  n_9 :
  TestFunFC(e_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto o_9;
  o_9 :
  TestFunFC(i_0,&&fail,Egetd(1,7));
  Rpush(k_3);
  goto k_9;
  k_3 :
  goto j_3;
  k_9 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(h_0,(ATerm)ATmakeAppl2(e_0,Egetd(1,5),Egetd(1,2)),(ATerm)ATmakeAppl2(h_0,Egetd(1,6),(ATerm)ATmakeAppl0(i_0))));
  Return();
  j_3 :
  Epopd(1,7);
  goto i_3;
  b_3 :
  Cpop();
  i_3 :
  Cpush(m_3);
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_5);
  OneNextSon();
  Ccall(_stratego_z_4);
  AllBuild();
  AllBuild();
  goto l_3;
  m_3 :
  Rpush(o_3);
  goto d_11;
  o_3 :
  goto n_3;
  l_3 :
  Cpop();
  n_3 :
  Return();
  a_3 :
  Return();
  q_2 :
  goto p_2;
  z_8 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(p_3);
  b_11 :
  Cpush(r_3);
  Ccall(_stratego_b_5);
  goto q_3;
  r_3 :
  Ccontinue(s_3);
  Epushd(1,3);
  MoveTop(1,1);
  goto e_9;
  e_9 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(u_3);
  goto b_9;
  u_3 :
  goto t_3;
  b_9 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(v_3);
  c_11 :
  Cpush(x_3);
  Epushd(2,3);
  MoveTop(2,1);
  goto d_9;
  d_9 :
  TestFunFC(e_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(z_3);
  goto c_9;
  z_3 :
  goto y_3;
  c_9 :
  Move(1,2,2,2);
  Return();
  y_3 :
  Epopd(2,3);
  goto w_3;
  x_3 :
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_4);
  goto c_11;
  b_4 :
  AllBuild();
  goto a_4;
  w_3 :
  Cpop();
  a_4 :
  Return();
  v_3 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(c_4);
  goto b_11;
  c_4 :
  Return();
  t_3 :
  Epopd(1,3);
  goto q_3;
  s_3 :
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_4);
  goto b_11;
  e_4 :
  AllBuild();
  goto d_4;
  q_3 :
  Cpop();
  d_4 :
  Return();
  p_3 :
  Return();
  p_2 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_d_5)
  Epushd(0,8);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(h_0,Egetd(0,1),(ATerm)ATmakeAppl2(h_0,(ATerm)ATmakeAppl0(i_0),(ATerm)ATmakeAppl2(h_0,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl0(i_0)))));
  MoveTop(0,2);
  goto q_13;
  q_13 :
  TestFunFC(h_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto r_13;
  r_13 :
  TestFunFC(h_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto s_13;
  s_13 :
  TestFunFC(h_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto t_13;
  t_13 :
  TestFunFC(i_0,&&fail,Egetd(0,8));
  Rpush(g_4);
  goto f_11;
  g_4 :
  goto f_4;
  f_11 :
  Epushd(1,5);
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(h_0,(ATerm)ATmakeAppl2(e_0,Egetd(0,3),(ATerm)ATmakeAppl0(k_0)),(ATerm)ATmakeAppl2(h_0,(ATerm)ATmakeAppl2(e_0,Egetd(0,3),(ATerm)ATmakeAppl0(k_0)),(ATerm)ATmakeAppl2(h_0,Egetd(0,5),(ATerm)ATmakeAppl2(h_0,Egetd(0,7),(ATerm)ATmakeAppl2(h_0,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl0(i_0)))))));
  Rpush(i_4);
  d_19 :
  Epushd(2,13);
  MoveTop(2,1);
  goto x_12;
  x_12 :
  TestFunFC(h_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto y_12;
  y_12 :
  TestFunFC(e_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto z_12;
  z_12 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto a_13;
  a_13 :
  TestFunFC(h_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto b_13;
  b_13 :
  TestFunFC(h_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto c_13;
  c_13 :
  TestFunFC(h_0,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto d_13;
  d_13 :
  TestFunFC(i_0,&&fail,Egetd(2,13));
  Cpush(n_4);
  Rpush(o_4);
  goto g_11;
  o_4 :
  goto m_4;
  n_4 :
  Rpush(q_4);
  goto h_11;
  q_4 :
  goto p_4;
  m_4 :
  Cpop();
  p_4 :
  goto l_4;
  l_4 :
  goto k_4;
  h_11 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset((ATerm)ATmakeAppl2(h_0,Egetd(2,4),(ATerm)ATmakeAppl2(h_0,Egetd(2,6),(ATerm)ATmakeAppl2(h_0,Egetd(2,8),(ATerm)ATmakeAppl2(h_0,Egetd(2,10),(ATerm)ATmakeAppl2(h_0,(ATerm)ATmakeAppl2(e_0,Egetd(2,3),Egetd(2,12)),(ATerm)ATmakeAppl0(i_0)))))));
  Return();
  k_4 :
  goto j_4;
  g_11 :
  Epushd(3,8);
  Tdupl();
  Epushd(4,3);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(h_0,Egetd(2,3),(ATerm)ATmakeAppl2(h_0,Egetd(2,8),(ATerm)ATmakeAppl0(i_0))));
  MoveTop(4,1);
  goto g_12;
  g_12 :
  TestFunFC(h_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(s_4);
  goto i_11;
  s_4 :
  goto r_4;
  i_11 :
  Epushd(5,3);
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Ccall(_stratego_x_4);
  MoveTop(5,1);
  Move(3,1,5,1);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Rpush(t_4);
  e_19 :
  Epushd(6,2);
  MoveTop(6,2);
  goto d_12;
  d_12 :
  TestFunFC(f_7,&&e_7,Egetd(6,2));
  MoveArg(6,1,6,2,0);
  Cpush(a_8);
  Rpush(b_8);
  goto k_11;
  b_8 :
  goto g_7;
  a_8 :
  Rpush(d_8);
  goto l_11;
  d_8 :
  goto c_8;
  g_7 :
  Cpop();
  c_8 :
  goto d_7;
  e_7 :
  Rpush(d_7);
  goto l_11;
  d_7 :
  goto c_7;
  l_11 :
  Epushd(7,1);
  Tdupl();
  Epushd(8,5);
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  _ST_explode_term();
  MoveTop(8,1);
  goto o_11;
  o_11 :
  TestFunFC(h_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto p_11;
  p_11 :
  TestFunFC(h_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto q_11;
  q_11 :
  TestFunFC(i_0,&&fail,Egetd(8,5));
  Rpush(k_8);
  goto n_11;
  k_8 :
  goto j_8;
  n_11 :
  Move(7,1,8,4);
  Return();
  j_8 :
  Epopd(8,5);
  Tpop();
  NotNULLd(7,1);
  Tset(Egetd(7,1));
  Rpush(m_8);
  f_19 :
  Cpush(t_8);
  Ccall(_stratego_b_5);
  Tset((ATerm)ATmakeAppl0(k_0));
  goto s_8;
  t_8 :
  Epushd(8,3);
  MoveTop(8,1);
  goto c_12;
  c_12 :
  TestFunFC(e_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(c_10);
  goto r_11;
  c_10 :
  goto y_9;
  r_11 :
  Epushd(9,7);
  NotNULLd(8,2);
  Tset(Egetd(8,2));
  Rpush(d_10);
  goto e_19;
  d_10 :
  MoveTop(9,1);
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(h_10);
  goto f_19;
  h_10 :
  MoveTop(9,2);
  NotNULLd(9,1);
  NotNULLd(9,2);
  Tset((ATerm)ATmakeAppl2(h_0,Egetd(9,1),(ATerm)ATmakeAppl2(h_0,Egetd(9,2),(ATerm)ATmakeAppl0(i_0))));
  MoveTop(9,3);
  goto z_11;
  z_11 :
  TestFunFC(h_0,&&fail,Egetd(9,3));
  MoveArg(9,4,9,3,0);
  MoveArg(9,5,9,3,1);
  goto a_12;
  a_12 :
  TestFunFC(h_0,&&fail,Egetd(9,5));
  MoveArg(9,6,9,5,0);
  MoveArg(9,7,9,5,1);
  goto b_12;
  b_12 :
  TestFunFC(i_0,&&fail,Egetd(9,7));
  Rpush(y_10);
  goto u_11;
  y_10 :
  goto p_10;
  u_11 :
  NotNULLd(9,4);
  Tset(Egetd(9,4));
  Rpush(z_10);
  g_19 :
  Cpush(e_11);
  Ccall(_stratego_b_5);
  NotNULLd(9,6);
  Tset(Egetd(9,6));
  goto a_11;
  e_11 :
  Ccontinue(j_11);
  Epushd(10,3);
  MoveTop(10,1);
  goto y_11;
  y_11 :
  TestFunFC(e_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(s_11);
  goto v_11;
  s_11 :
  goto m_11;
  v_11 :
  Tdupl();
  NotNULLd(9,6);
  Tset(Egetd(9,6));
  Rpush(t_11);
  h_19 :
  Cpush(f_12);
  Epushd(11,3);
  MoveTop(11,1);
  goto x_11;
  x_11 :
  TestFunFC(e_0,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  Rpush(k_12);
  goto w_11;
  k_12 :
  goto i_12;
  w_11 :
  Move(10,2,11,2);
  Return();
  i_12 :
  Epopd(11,3);
  goto e_12;
  f_12 :
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_13);
  goto h_19;
  v_13 :
  AllBuild();
  goto m_12;
  e_12 :
  Cpop();
  m_12 :
  Return();
  t_11 :
  Tpop();
  NotNULLd(10,3);
  Tset(Egetd(10,3));
  Rpush(d_14);
  goto g_19;
  d_14 :
  Return();
  m_11 :
  Epopd(10,3);
  goto a_11;
  j_11 :
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_14);
  goto g_19;
  f_14 :
  AllBuild();
  goto e_14;
  a_11 :
  Cpop();
  e_14 :
  Return();
  z_10 :
  Return();
  p_10 :
  Epopd(9,7);
  Return();
  y_9 :
  Epopd(8,3);
  goto x_9;
  s_8 :
  Cpop();
  x_9 :
  Return();
  m_8 :
  Epopd(7,1);
  Return();
  c_7 :
  goto j_6;
  k_11 :
  NotNULLd(6,1);
  Tset(Egetd(6,1));
  NotNULLd(6,1);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(6,1),(ATerm)ATmakeAppl0(k_0)));
  Return();
  j_6 :
  Epopd(6,2);
  Return();
  t_4 :
  Ccall(_stratego_y_4);
  MoveTop(5,2);
  Move(3,2,5,2);
  NotNULLd(3,2);
  NotNULLd(2,6);
  Tset((ATerm)ATmakeAppl2(h_0,Egetd(3,2),(ATerm)ATmakeAppl2(h_0,Egetd(2,6),(ATerm)ATmakeAppl0(i_0))));
  Ccall(_stratego_c_5);
  MoveTop(5,3);
  Move(3,3,5,3);
  Epopd(5,3);
  Return();
  r_4 :
  Epopd(4,3);
  Tpop();
  NotNULLd(3,3);
  NotNULLd(2,4);
  Tset((ATerm)ATmakeAppl2(h_0,Egetd(3,3),(ATerm)ATmakeAppl2(h_0,Egetd(2,4),(ATerm)ATmakeAppl0(i_0))));
  MoveTop(3,4);
  goto u_12;
  u_12 :
  TestFunFC(h_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto v_12;
  v_12 :
  TestFunFC(h_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto w_12;
  w_12 :
  TestFunFC(i_0,&&fail,Egetd(3,8));
  Rpush(u_14);
  goto h_12;
  u_14 :
  goto t_14;
  h_12 :
  Epushd(4,6);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(v_14);
  i_19 :
  Cpush(x_14);
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_14);
  goto i_19;
  y_14 :
  AllBuild();
  goto w_14;
  x_14 :
  Ccall(_stratego_b_5);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto f_15;
  w_14 :
  Cpop();
  f_15 :
  Return();
  v_14 :
  MoveTop(4,1);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset((ATerm)ATmakeAppl2(h_0,Egetd(3,3),(ATerm)ATmakeAppl2(h_0,Egetd(2,6),(ATerm)ATmakeAppl0(i_0))));
  MoveTop(4,2);
  goto r_12;
  r_12 :
  TestFunFC(h_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto s_12;
  s_12 :
  TestFunFC(h_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto t_12;
  t_12 :
  TestFunFC(i_0,&&fail,Egetd(4,6));
  Rpush(k_15);
  goto j_12;
  k_15 :
  goto g_15;
  j_12 :
  Epushd(5,8);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(l_15);
  j_19 :
  Cpush(o_15);
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_15);
  goto j_19;
  x_15 :
  AllBuild();
  goto m_15;
  o_15 :
  Ccall(_stratego_b_5);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto y_15;
  m_15 :
  Cpop();
  y_15 :
  Return();
  l_15 :
  MoveTop(5,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset((ATerm)ATmakeAppl2(h_0,Egetd(2,3),(ATerm)ATmakeAppl2(h_0,Egetd(3,1),(ATerm)ATmakeAppl2(h_0,Egetd(2,10),(ATerm)ATmakeAppl0(i_0)))));
  MoveTop(5,2);
  goto n_12;
  n_12 :
  TestFunFC(h_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto o_12;
  o_12 :
  TestFunFC(h_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto p_12;
  p_12 :
  TestFunFC(h_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto q_12;
  q_12 :
  TestFunFC(i_0,&&fail,Egetd(5,8));
  Rpush(c_16);
  goto l_12;
  c_16 :
  goto a_16;
  l_12 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(5,5),Egetd(5,7)));
  NotNULLd(4,1);
  NotNULLd(5,1);
  NotNULLd(2,8);
  NotNULLd(5,5);
  NotNULLd(5,7);
  NotNULLd(2,12);
  Tset((ATerm)ATmakeAppl2(h_0,Egetd(4,1),(ATerm)ATmakeAppl2(h_0,Egetd(5,1),(ATerm)ATmakeAppl2(h_0,Egetd(2,8),(ATerm)ATmakeAppl2(h_0,(ATerm)ATmakeAppl2(e_0,Egetd(5,5),Egetd(5,7)),(ATerm)ATmakeAppl2(h_0,Egetd(2,12),(ATerm)ATmakeAppl0(i_0)))))));
  Return();
  a_16 :
  Epopd(5,8);
  Return();
  g_15 :
  Epopd(4,6);
  Return();
  t_14 :
  Epopd(3,8);
  Return();
  j_4 :
  Cpush(j_16);
  Epushd(3,11);
  MoveTop(3,1);
  goto f_13;
  f_13 :
  TestFunFC(h_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto g_13;
  g_13 :
  TestFunFC(k_0,&&fail,Egetd(3,2));
  goto h_13;
  h_13 :
  TestFunFC(h_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto i_13;
  i_13 :
  TestFunFC(h_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto j_13;
  j_13 :
  TestFunFC(h_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto k_13;
  k_13 :
  TestFunFC(h_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto l_13;
  l_13 :
  TestFunFC(i_0,&&fail,Egetd(3,11));
  Rpush(o_16);
  goto e_13;
  o_16 :
  goto n_16;
  e_13 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset((ATerm)ATmakeAppl2(h_0,Egetd(3,8),(ATerm)ATmakeAppl2(h_0,Egetd(3,10),(ATerm)ATmakeAppl0(i_0))));
  Return();
  n_16 :
  Epopd(3,11);
  goto i_16;
  j_16 :
  Rpush(s_16);
  goto d_19;
  s_16 :
  goto r_16;
  i_16 :
  Cpop();
  r_16 :
  Epopd(2,13);
  Return();
  i_4 :
  MoveTop(1,1);
  goto n_13;
  n_13 :
  TestFunFC(h_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_13;
  o_13 :
  TestFunFC(h_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto p_13;
  p_13 :
  TestFunFC(i_0,&&fail,Egetd(1,5));
  Rpush(b_17);
  goto m_13;
  b_17 :
  goto h_4;
  m_13 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  h_4 :
  Epopd(1,5);
  Return();
  f_4 :
  Epopd(0,8);
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
  Tset((ATerm)ATmakeAppl2(h_0,(ATerm)ATmakeAppl0(c_17),(ATerm)ATmakeAppl2(h_0,Egetd(0,1),(ATerm)ATmakeAppl0(i_0))));
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

PROC(_stratego_m_5)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_n_5)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_main)
  Cpush(k_17);
  Epushd(0,1);
  Tset((ATerm)ATmakeAppl0(l_17));
  Ccall(_stratego_n_5);
  Ccall(_stratego_d_5);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(h_0,(ATerm)ATmakeAppl0(n_17),(ATerm)ATmakeAppl2(h_0,Egetd(0,1),(ATerm)ATmakeAppl0(i_0))));
  Ccall(_stratego_m_5);
  Epopd(0,1);
  goto e_17;
  k_17 :
  Tset((ATerm)ATmakeAppl2(e_0,ATmakeString("** rewriting failed"),(ATerm)ATmakeAppl0(k_0)));
  Ccall(_stratego_h_5);
  goto v_17;
  e_17 :
  Cpop();
  v_17 :
ENDPROC

DOIT

