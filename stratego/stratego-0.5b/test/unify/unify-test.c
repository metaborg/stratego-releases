#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,n_12);
VARDECL(AFun,h_8);
VARDECL(AFun,l_4);
VARDECL(AFun,v_2);
VARDECL(AFun,j_0);
VARDECL(AFun,i_0);
VARDECL(AFun,f_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_w_2);
PROCDECL(_stratego_x_2);
PROCDECL(_stratego_y_2);
PROCDECL(_stratego_z_2);
PROCDECL(_stratego_a_3);
PROCDECL(_stratego_b_3);
PROCDECL(_stratego_c_3);
PROCDECL(_stratego_d_3);
PROCDECL(_stratego_e_3);
PROCDECL(_stratego_f_3);
PROCDECL(_stratego_g_3);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(n_12,ATmakeAFun("stdout",0,0));
  MOVE(h_8,ATmakeAFun("Var",1,0));
  MOVE(l_4,ATmakeAFun("stdin",0,0));
  MOVE(v_2,ATmakeAFun("stderr",0,0));
  MOVE(j_0,ATmakeAFun("TCons",2,0));
  MOVE(i_0,ATmakeAFun("Cons",2,0));
  MOVE(f_0,ATmakeAFun("Nil",0,0));
  MOVE(c_0,ATmakeAFun("TNil",0,0));
ENDPROC

PROC(_stratego_w_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_0;
  p_0 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  Rpush(b_0);
  goto o_0;
  b_0 :
  goto a_0;
  o_0 :
  Return();
  a_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_1;
  e_1 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  Rpush(e_0);
  goto d_1;
  e_0 :
  goto d_0;
  d_1 :
  Return();
  d_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_2)
  Epushd(0,7);
  MoveTop(0,1);
  goto w_3;
  w_3 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto x_3;
  x_3 :
  TestFunFC(j_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto y_3;
  y_3 :
  TestFunFC(j_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto z_3;
  z_3 :
  TestFunFC(c_0,&&fail,Egetd(0,6));
  Rpush(h_0);
  goto g_1;
  h_0 :
  goto g_0;
  g_1 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto i_1;
  i_1 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_1;
  j_1 :
  TestFunFC(j_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto k_1;
  k_1 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(l_0);
  goto h_1;
  l_0 :
  goto k_0;
  h_1 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  k_0 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto m_1;
  m_1 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto n_1;
  n_1 :
  TestFunFC(j_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_1;
  q_1 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(n_0);
  goto l_1;
  n_0 :
  goto m_0;
  l_1 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  m_0 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(1,2),(ATerm)ATmakeAppl2(j_0,Egetd(1,3),(ATerm)ATmakeAppl0(c_0))));
  Rpush(q_0);
  a_6 :
  Epushd(2,9);
  MoveTop(2,1);
  goto j_3;
  j_3 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto k_3;
  k_3 :
  TestFunFC(f_0,&&u_0,Egetd(2,2));
  goto l_3;
  l_3 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto m_3;
  m_3 :
  TestFunFC(f_0,&&fail,Egetd(2,6));
  goto n_3;
  n_3 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(t_0);
  goto r_1;
  u_0 :
  TestFunFC(i_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto o_3;
  o_3 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto p_3;
  p_3 :
  TestFunFC(i_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto q_3;
  q_3 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(t_0);
  goto j_2;
  t_0 :
  goto s_0;
  j_2 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,Egetd(2,3),(ATerm)ATmakeAppl2(j_0,Egetd(2,7),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,Egetd(2,4),(ATerm)ATmakeAppl2(j_0,Egetd(2,8),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Rpush(w_0);
  goto a_6;
  w_0 :
  OneNextSon();
  Ccall(_stratego_w_2);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto l_2;
  l_2 :
  TestFunFC(j_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto h_3;
  h_3 :
  TestFunFC(j_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto i_3;
  i_3 :
  TestFunFC(c_0,&&fail,Egetd(3,5));
  Rpush(x_0);
  goto k_2;
  x_0 :
  goto v_0;
  k_2 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(i_0,Egetd(3,2),Egetd(3,4)));
  Return();
  v_0 :
  Epopd(3,5);
  Return();
  s_0 :
  goto r_0;
  r_1 :
  Tset((ATerm)ATmakeAppl0(f_0));
  Return();
  r_0 :
  Epopd(2,9);
  Return();
  q_0 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(1,4),(ATerm)ATmakeAppl2(j_0,Egetd(0,7),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,5);
  goto t_3;
  t_3 :
  TestFunFC(j_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto u_3;
  u_3 :
  TestFunFC(j_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto v_3;
  v_3 :
  TestFunFC(c_0,&&fail,Egetd(1,9));
  Rpush(z_0);
  goto s_3;
  z_0 :
  goto y_0;
  s_3 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(a_1);
  b_6 :
  Cpush(o_1);
  TestFunTop(i_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_1);
  goto b_6;
  p_1 :
  AllBuild();
  goto b_1;
  o_1 :
  Ccall(_stratego_x_2);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto s_1;
  b_1 :
  Cpop();
  s_1 :
  Return();
  a_1 :
  Return();
  y_0 :
  Epopd(1,9);
  Return();
  g_0 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_z_2)
  Rpush(t_1);
  a_7 :
  Epushd(0,11);
  MoveTop(0,5);
  goto e_6;
  e_6 :
  TestFunFC(j_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto f_6;
  f_6 :
  TestFunFC(j_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto g_6;
  g_6 :
  TestFunFC(i_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto h_6;
  h_6 :
  TestFunFC(c_0,&&fail,Egetd(0,11));
  goto i_6;
  i_6 :
  TestFunFC(j_0,&&x_1,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto j_6;
  j_6 :
  TestFunFC(j_0,&&y_1,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto k_6;
  k_6 :
  TestFunFC(c_0,&&z_1,Egetd(0,4));
  Cpush(b_2);
  Rpush(c_2);
  goto c_6;
  c_2 :
  goto a_2;
  b_2 :
  Rpush(e_2);
  goto d_6;
  e_2 :
  goto d_2;
  a_2 :
  Cpop();
  d_2 :
  goto w_1;
  z_1 :
  Rpush(w_1);
  goto d_6;
  y_1 :
  Rpush(w_1);
  goto d_6;
  x_1 :
  Rpush(w_1);
  goto d_6;
  w_1 :
  goto v_1;
  d_6 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(0,6),(ATerm)ATmakeAppl2(j_0,Egetd(0,10),(ATerm)ATmakeAppl0(c_0))));
  Rpush(f_2);
  goto a_7;
  f_2 :
  Return();
  v_1 :
  goto u_1;
  c_6 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  u_1 :
  Epopd(0,11);
  Return();
  t_1 :
ENDPROC

PROC(_stratego_a_3)
  Epushd(0,7);
  MoveTop(0,1);
  goto s_7;
  s_7 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto t_7;
  t_7 :
  TestFunFC(j_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto u_7;
  u_7 :
  TestFunFC(c_0,&&m_2,Egetd(0,5));
  Rpush(i_2);
  goto b_7;
  m_2 :
  TestFunFC(j_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto v_7;
  v_7 :
  TestFunFC(c_0,&&fail,Egetd(0,7));
  Rpush(i_2);
  goto c_7;
  i_2 :
  goto h_2;
  c_7 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(0,2),(ATerm)ATmakeAppl2(j_0,Egetd(0,4),(ATerm)ATmakeAppl0(c_0))));
  Rpush(n_2);
  g_9 :
  Epushd(2,9);
  MoveTop(2,1);
  goto j_7;
  j_7 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto k_7;
  k_7 :
  TestFunFC(f_0,&&r_2,Egetd(2,2));
  goto l_7;
  l_7 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto m_7;
  m_7 :
  TestFunFC(f_0,&&fail,Egetd(2,6));
  goto n_7;
  n_7 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(q_2);
  goto d_7;
  r_2 :
  TestFunFC(i_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto o_7;
  o_7 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto p_7;
  p_7 :
  TestFunFC(i_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto q_7;
  q_7 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(q_2);
  goto e_7;
  q_2 :
  goto p_2;
  e_7 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,Egetd(2,3),(ATerm)ATmakeAppl2(j_0,Egetd(2,7),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,Egetd(2,4),(ATerm)ATmakeAppl2(j_0,Egetd(2,8),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Rpush(t_2);
  goto g_9;
  t_2 :
  OneNextSon();
  Ccall(_stratego_w_2);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto g_7;
  g_7 :
  TestFunFC(j_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto h_7;
  h_7 :
  TestFunFC(j_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto i_7;
  i_7 :
  TestFunFC(c_0,&&fail,Egetd(3,5));
  Rpush(u_2);
  goto f_7;
  u_2 :
  goto s_2;
  f_7 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(i_0,Egetd(3,2),Egetd(3,4)));
  Return();
  s_2 :
  Epopd(3,5);
  Return();
  p_2 :
  goto o_2;
  d_7 :
  Tset((ATerm)ATmakeAppl0(f_0));
  Return();
  o_2 :
  Epopd(2,9);
  Return();
  n_2 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(1,1),(ATerm)ATmakeAppl2(j_0,Egetd(0,6),(ATerm)ATmakeAppl0(c_0))));
  Epopd(1,1);
  Return();
  h_2 :
  goto g_2;
  b_7 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  g_2 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_b_3)
  _ST_exit();
ENDPROC

PROC(_stratego_c_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_d_3)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(v_2),(ATerm)ATmakeAppl2(j_0,Egetd(0,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_c_3);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_e_3)
  Tdupl();
  Ccall(_stratego_d_3);
  Tset(MakeInt(1));
  Ccall(_stratego_b_3);
  Tpop();
ENDPROC

PROC(_stratego_f_3)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_g_3)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_main)
  Cpush(k_4);
  Epushd(0,2);
  Tset((ATerm)ATmakeAppl0(l_4));
  Ccall(_stratego_g_3);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(0,1),(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(c_0))));
  Rpush(m_4);
  q_14 :
  Cpush(h_5);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(1,7);
  MoveTop(1,1);
  goto s_9;
  s_9 :
  TestFunFC(i_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto t_9;
  t_9 :
  TestFunFC(j_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto u_9;
  u_9 :
  TestFunFC(j_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto v_9;
  v_9 :
  TestFunFC(c_0,&&fail,Egetd(1,6));
  Rpush(j_5);
  goto r_9;
  j_5 :
  goto i_5;
  r_9 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  i_5 :
  Epopd(1,7);
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_w_2);
  AllBuild();
  AllBuild();
  goto g_5;
  h_5 :
  Ccontinue(p_5);
  Epushd(1,11);
  MoveTop(1,1);
  goto w_10;
  w_10 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,9,1,1,1);
  goto x_10;
  x_10 :
  TestFunFC(i_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,8,1,2,1);
  goto y_10;
  y_10 :
  TestFunFC(j_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_10;
  z_10 :
  TestFunFC(j_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto a_11;
  a_11 :
  TestFunFC(c_0,&&fail,Egetd(1,7));
  goto b_11;
  b_11 :
  TestFunFC(j_0,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  MoveArg(1,11,1,9,1);
  goto c_11;
  c_11 :
  TestFunFC(c_0,&&fail,Egetd(1,11));
  Cpush(w_6);
  Rpush(y_6);
  goto w_9;
  y_6 :
  goto z_5;
  w_6 :
  Rpush(r_7);
  goto x_9;
  r_7 :
  goto z_6;
  z_5 :
  Cpop();
  z_6 :
  goto y_5;
  y_5 :
  goto s_5;
  x_9 :
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Cpush(d_8);
  Tdupl();
  Epushd(3,2);
  MoveTop(3,1);
  goto t_10;
  t_10 :
  TestFunFC(h_8,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(g_8);
  goto s_10;
  g_8 :
  goto f_8;
  s_10 :
  Return();
  f_8 :
  Epopd(3,2);
  Cpop();
  Crestore();
  Cjump();
  d_8 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  MoveTop(2,1);
  goto v_10;
  v_10 :
  TestFunFC(h_8,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(j_8);
  goto u_10;
  j_8 :
  goto i_8;
  u_10 :
  Return();
  i_8 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,6);
  NotNULLd(1,4);
  NotNULLd(1,8);
  NotNULLd(1,10);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(i_0,(ATerm)ATmakeAppl2(j_0,Egetd(1,6),(ATerm)ATmakeAppl2(j_0,Egetd(1,4),(ATerm)ATmakeAppl0(c_0))),Egetd(1,8)),(ATerm)ATmakeAppl2(j_0,Egetd(1,10),(ATerm)ATmakeAppl0(c_0))));
  Return();
  s_5 :
  goto q_5;
  w_9 :
  Epushd(2,2);
  Tdupl();
  Epushd(3,2);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  MoveTop(3,1);
  goto r_10;
  r_10 :
  TestFunFC(h_8,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(u_8);
  goto y_9;
  u_8 :
  goto t_8;
  y_9 :
  Epushd(4,10);
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(1,4),(ATerm)ATmakeAppl2(j_0,Egetd(1,6),(ATerm)ATmakeAppl0(c_0))));
  Cpush(v_8);
  Tdupl();
  Epushd(5,5);
  MoveTop(5,1);
  goto b_10;
  b_10 :
  TestFunFC(j_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto c_10;
  c_10 :
  TestFunFC(j_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto d_10;
  d_10 :
  TestFunFC(c_0,&&fail,Egetd(5,5));
  Rpush(c_9);
  goto z_9;
  c_9 :
  goto w_8;
  z_9 :
  NotNULLd(5,4);
  Tset(Egetd(5,4));
  Rpush(l_9);
  d_9 :
  Cpush(f_9);
  Epushd(6,1);
  MoveTop(6,1);
  Move(5,2,6,1);
  Epopd(6,1);
  Cpop();
  goto j_9;
  f_9 :
  IsAppl();
  MatchTravInit();
  h_9 :
  OneMatchNextSon();
  Cpush(h_9);
  Rpush(i_9);
  goto d_9;
  i_9 :
  Cpop();
  MatchTravEnd();
  j_9 :
  Return();
  l_9 :
  Return();
  w_8 :
  Epopd(5,5);
  Cpop();
  Crestore();
  Cjump();
  v_8 :
  NotNULLd(1,4);
  NotNULLd(1,6);
  NotNULLd(1,10);
  NotNULLd(1,8);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(i_0,(ATerm)ATmakeAppl2(j_0,Egetd(1,4),(ATerm)ATmakeAppl2(j_0,Egetd(1,6),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(f_0)),(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,Egetd(1,10),(ATerm)ATmakeAppl2(j_0,Egetd(1,8),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_a_3);
  MoveTop(4,1);
  goto k_10;
  k_10 :
  TestFunFC(j_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto l_10;
  l_10 :
  TestFunFC(j_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto m_10;
  m_10 :
  TestFunFC(c_0,&&fail,Egetd(4,5));
  Rpush(o_9);
  goto e_10;
  o_9 :
  goto n_9;
  e_10 :
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(p_9);
  s_14 :
  Cpush(a_10);
  Epushd(5,3);
  MoveTop(5,1);
  Tdupl();
  Epushd(6,2);
  NotNULLd(5,1);
  Tset(Egetd(5,1));
  MoveTop(6,1);
  goto j_10;
  j_10 :
  TestFunFC(h_8,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  Rpush(h_10);
  goto g_10;
  h_10 :
  goto f_10;
  g_10 :
  Epushd(7,1);
  MoveTop(7,1);
  Move(5,2,7,1);
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Move(5,3,4,2);
  Epopd(7,1);
  Return();
  f_10 :
  Epopd(6,2);
  Tpop();
  NotNULLd(5,2);
  NotNULLd(5,3);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(5,2),(ATerm)ATmakeAppl2(j_0,Egetd(5,3),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_z_2);
  Epopd(5,3);
  goto q_9;
  a_10 :
  AllInit();
  e_11 :
  AllNextSon(&&f_11);
  Rpush(g_11);
  goto s_14;
  g_11 :
  goto e_11;
  f_11 :
  AllBuild();
  goto i_10;
  q_9 :
  Cpop();
  i_10 :
  Return();
  p_9 :
  Return();
  n_9 :
  MoveTop(4,6);
  goto o_10;
  o_10 :
  TestFunFC(j_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto p_10;
  p_10 :
  TestFunFC(j_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto q_10;
  q_10 :
  TestFunFC(c_0,&&fail,Egetd(4,10));
  Rpush(h_11);
  goto n_10;
  h_11 :
  goto m_9;
  n_10 :
  Move(2,1,4,7);
  Move(2,2,4,9);
  Return();
  m_9 :
  Epopd(4,10);
  Return();
  t_8 :
  Epopd(3,2);
  Tpop();
  NotNULLd(2,2);
  NotNULLd(1,4);
  NotNULLd(1,6);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(2,2),(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(i_0,(ATerm)ATmakeAppl2(j_0,Egetd(1,4),(ATerm)ATmakeAppl2(j_0,Egetd(1,6),(ATerm)ATmakeAppl0(c_0))),Egetd(2,1)),(ATerm)ATmakeAppl0(c_0))));
  Epopd(2,2);
  Return();
  q_5 :
  Epopd(1,11);
  goto g_5;
  p_5 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_2);
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_w_2);
  AllBuild();
  AllBuild();
  goto i_11;
  g_5 :
  Cpop();
  i_11 :
  Cpush(o_11);
  Epushd(1,5);
  MoveTop(1,1);
  goto j_11;
  j_11 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_11;
  k_11 :
  TestFunFC(f_0,&&fail,Egetd(1,2));
  goto l_11;
  l_11 :
  TestFunFC(j_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto m_11;
  m_11 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(r_11);
  goto d_11;
  r_11 :
  goto p_11;
  d_11 :
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Return();
  p_11 :
  Epopd(1,5);
  goto n_11;
  o_11 :
  Rpush(m_12);
  goto q_14;
  m_12 :
  goto z_11;
  n_11 :
  Cpop();
  z_11 :
  Return();
  m_4 :
  MoveTop(0,2);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(n_12),(ATerm)ATmakeAppl2(j_0,Egetd(0,2),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_f_3);
  Epopd(0,2);
  goto r_3;
  k_4 :
  Tset((ATerm)ATmakeAppl2(i_0,ATmakeString("** rewriting failed"),(ATerm)ATmakeAppl0(f_0)));
  Ccall(_stratego_e_3);
  goto o_12;
  r_3 :
  Cpop();
  o_12 :
ENDPROC

DOIT

