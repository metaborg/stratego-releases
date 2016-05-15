#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,f_3);
VARDECL(AFun,e_3);
VARDECL(AFun,e_2);
VARDECL(AFun,e_1);
VARDECL(AFun,r_0);
VARDECL(AFun,q_0);
VARDECL(AFun,p_0);
VARDECL(AFun,o_0);
VARDECL(AFun,j_0);
VARDECL(AFun,i_0);
VARDECL(AFun,h_0);
VARDECL(AFun,e_0);
VARDECL(AFun,d_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_s_1);
PROCDECL(_stratego_t_1);
PROCDECL(_stratego_u_1);
PROCDECL(_stratego_v_1);
PROCDECL(_stratego_w_1);
PROCDECL(_stratego_x_1);
PROCDECL(_stratego_y_1);
PROCDECL(_stratego_z_1);
PROCDECL(_stratego_a_2);
PROCDECL(_stratego_b_2);
PROCDECL(_stratego_c_2);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(f_3,ATmakeAFun("stdout",0,0));
  MOVE(e_3,ATmakeAFun("stdin",0,0));
  MOVE(e_2,ATmakeAFun("stderr",0,0));
  MOVE(e_1,ATmakeAFun("A",1,0));
  MOVE(r_0,ATmakeAFun("Nil",0,0));
  MOVE(q_0,ATmakeAFun("If",3,0));
  MOVE(p_0,ATmakeAFun("ENDIF",1,0));
  MOVE(o_0,ATmakeAFun("IF",1,0));
  MOVE(j_0,ATmakeAFun("Loop",3,0));
  MOVE(i_0,ATmakeAFun("ENDLOOP",1,0));
  MOVE(h_0,ATmakeAFun("LOOP",1,0));
  MOVE(e_0,ATmakeAFun("TNil",0,0));
  MOVE(d_0,ATmakeAFun("Cons",2,0));
  MOVE(c_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_s_1)
  Epushd(0,11);
  MoveTop(0,1);
  goto m_2;
  m_2 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto n_2;
  n_2 :
  TestFunFC(c_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,11,0,3,1);
  goto o_2;
  o_2 :
  TestFunFC(d_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto p_2;
  p_2 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto q_2;
  q_2 :
  TestFunFC(d_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto r_2;
  r_2 :
  TestFunFC(e_0,&&fail,Egetd(0,11));
  Rpush(b_0);
  goto w_3;
  b_0 :
  goto a_0;
  w_3 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,9);
  NotNULLd(0,9);
  NotNULLd(0,7);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,9),(ATerm)ATmakeAppl2(c_0,Egetd(0,7),(ATerm)ATmakeAppl2(c_0,Egetd(0,5),(ATerm)ATmakeAppl0(e_0)))));
  MoveTop(2,1);
  goto g_2;
  g_2 :
  TestFunFC(c_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto h_2;
  h_2 :
  TestFunFC(h_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto i_2;
  i_2 :
  TestFunFC(c_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto j_2;
  j_2 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,9,2,6,1);
  goto k_2;
  k_2 :
  TestFunFC(i_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  goto l_2;
  l_2 :
  TestFunFC(e_0,&&fail,Egetd(2,9));
  Rpush(g_0);
  goto x_3;
  g_0 :
  goto f_0;
  x_3 :
  NotNULLd(2,3);
  NotNULLd(2,8);
  NotNULLd(2,5);
  Tset((ATerm)ATmakeAppl3(j_0,Egetd(2,3),Egetd(2,8),Egetd(2,5)));
  Tdupl();
  NotNULLd(2,3);
  NotNULLd(2,8);
  NotNULLd(2,5);
  Tset((ATerm)ATmakeAppl3(j_0,Egetd(2,3),Egetd(2,8),Egetd(2,5)));
  MoveTop(1,1);
  Tpop();
  Return();
  f_0 :
  Epopd(2,9);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,2),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(d_0,Egetd(1,1),Egetd(0,10)),(ATerm)ATmakeAppl0(e_0))));
  Epopd(1,1);
  Return();
  a_0 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_t_1)
  Epushd(0,11);
  MoveTop(0,1);
  goto i_4;
  i_4 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto j_4;
  j_4 :
  TestFunFC(c_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,11,0,3,1);
  goto k_4;
  k_4 :
  TestFunFC(d_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto l_4;
  l_4 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto m_4;
  m_4 :
  TestFunFC(d_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto n_4;
  n_4 :
  TestFunFC(e_0,&&fail,Egetd(0,11));
  Rpush(l_0);
  goto s_5;
  l_0 :
  goto k_0;
  s_5 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,9);
  NotNULLd(0,9);
  NotNULLd(0,7);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,9),(ATerm)ATmakeAppl2(c_0,Egetd(0,7),(ATerm)ATmakeAppl2(c_0,Egetd(0,5),(ATerm)ATmakeAppl0(e_0)))));
  MoveTop(2,1);
  goto c_4;
  c_4 :
  TestFunFC(c_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto d_4;
  d_4 :
  TestFunFC(o_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto e_4;
  e_4 :
  TestFunFC(c_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto f_4;
  f_4 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,9,2,6,1);
  goto g_4;
  g_4 :
  TestFunFC(p_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  goto h_4;
  h_4 :
  TestFunFC(e_0,&&fail,Egetd(2,9));
  Rpush(n_0);
  goto t_5;
  n_0 :
  goto m_0;
  t_5 :
  NotNULLd(2,3);
  NotNULLd(2,8);
  NotNULLd(2,5);
  Tset((ATerm)ATmakeAppl3(q_0,Egetd(2,3),Egetd(2,8),Egetd(2,5)));
  Tdupl();
  NotNULLd(2,3);
  NotNULLd(2,8);
  NotNULLd(2,5);
  Tset((ATerm)ATmakeAppl3(q_0,Egetd(2,3),Egetd(2,8),Egetd(2,5)));
  MoveTop(1,1);
  Tpop();
  Return();
  m_0 :
  Epopd(2,9);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,2),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(d_0,Egetd(1,1),Egetd(0,10)),(ATerm)ATmakeAppl0(e_0))));
  Epopd(1,1);
  Return();
  k_0 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_u_1)
  Epushd(0,6);
  MoveTop(0,1);
  Tset((ATerm)ATmakeAppl0(r_0));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl0(e_0))));
  Cpush(u_0);
  t_0 :
  Cpush(w_0);
  Ccall(_stratego_t_1);
  goto v_0;
  w_0 :
  Ccontinue(x_0);
  Ccall(_stratego_s_1);
  goto v_0;
  x_0 :
  Epushd(1,7);
  MoveTop(1,1);
  goto f_6;
  f_6 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto g_6;
  g_6 :
  TestFunFC(d_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto h_6;
  h_6 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto i_6;
  i_6 :
  TestFunFC(e_0,&&fail,Egetd(1,7));
  Rpush(a_1);
  goto q_7;
  a_1 :
  goto z_0;
  q_7 :
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  MoveTop(2,1);
  goto e_6;
  e_6 :
  TestFunFC(e_1,&&d_1,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(c_1);
  goto r_7;
  d_1 :
  TestFunFC(o_0,&&f_1,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(c_1);
  goto s_7;
  f_1 :
  TestFunFC(p_0,&&g_1,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(c_1);
  goto t_7;
  g_1 :
  TestFunFC(h_0,&&h_1,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(c_1);
  goto u_7;
  h_1 :
  TestFunFC(i_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(c_1);
  goto v_7;
  c_1 :
  goto b_1;
  r_7 :
  Return();
  s_7 :
  Return();
  t_7 :
  Return();
  u_7 :
  Return();
  v_7 :
  Return();
  b_1 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(d_0,Egetd(1,3),Egetd(1,6)),(ATerm)ATmakeAppl0(e_0))));
  Return();
  z_0 :
  Epopd(1,7);
  goto y_0;
  v_0 :
  Cpop();
  y_0 :
  Tduplinv();
  goto t_0;
  u_0 :
  MoveTop(0,2);
  goto k_6;
  k_6 :
  TestFunFC(c_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto l_6;
  l_6 :
  TestFunFC(c_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  Rpush(i_1);
  goto w_7;
  i_1 :
  goto s_0;
  w_7 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  s_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_v_1)
  Epushd(0,13);
  MoveTop(0,6);
  goto c_8;
  c_8 :
  TestFunFC(c_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,11,0,6,1);
  goto d_8;
  d_8 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,10,0,7,1);
  goto e_8;
  e_8 :
  TestFunFC(h_0,&&l_1,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  goto f_8;
  f_8 :
  TestFunFC(c_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto g_8;
  g_8 :
  TestFunFC(e_0,&&fail,Egetd(0,13));
  Rpush(k_1);
  goto b_10;
  l_1 :
  TestFunFC(i_0,&&m_1,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  goto h_8;
  h_8 :
  TestFunFC(c_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto i_8;
  i_8 :
  TestFunFC(d_0,&&fail,Egetd(0,12));
  MoveArg(0,1,0,12,0);
  MoveArg(0,2,0,12,1);
  goto j_8;
  j_8 :
  TestFunFC(d_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto k_8;
  k_8 :
  TestFunFC(h_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto l_8;
  l_8 :
  TestFunFC(e_0,&&fail,Egetd(0,13));
  Rpush(k_1);
  goto c_10;
  m_1 :
  TestFunFC(o_0,&&n_1,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  goto m_8;
  m_8 :
  TestFunFC(c_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto n_8;
  n_8 :
  TestFunFC(e_0,&&fail,Egetd(0,13));
  Rpush(k_1);
  goto d_10;
  n_1 :
  TestFunFC(p_0,&&o_1,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  goto o_8;
  o_8 :
  TestFunFC(c_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto p_8;
  p_8 :
  TestFunFC(d_0,&&fail,Egetd(0,12));
  MoveArg(0,1,0,12,0);
  MoveArg(0,2,0,12,1);
  goto q_8;
  q_8 :
  TestFunFC(d_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto r_8;
  r_8 :
  TestFunFC(o_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto s_8;
  s_8 :
  TestFunFC(e_0,&&fail,Egetd(0,13));
  Rpush(k_1);
  goto e_10;
  o_1 :
  TestFunFC(e_1,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  goto t_8;
  t_8 :
  TestFunFC(c_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto u_8;
  u_8 :
  TestFunFC(e_0,&&fail,Egetd(0,13));
  Rpush(k_1);
  goto f_10;
  k_1 :
  goto j_1;
  b_10 :
  NotNULLd(0,10);
  NotNULLd(0,9);
  NotNULLd(0,12);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,10),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl1(h_0,Egetd(0,9)),Egetd(0,12)),(ATerm)ATmakeAppl0(e_0))));
  Return();
  c_10 :
  NotNULLd(0,10);
  NotNULLd(0,4);
  NotNULLd(0,9);
  NotNULLd(0,1);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,10),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl3(j_0,Egetd(0,4),Egetd(0,9),Egetd(0,1)),Egetd(0,5)),(ATerm)ATmakeAppl0(e_0))));
  Return();
  d_10 :
  NotNULLd(0,10);
  NotNULLd(0,9);
  NotNULLd(0,12);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,10),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl1(o_0,Egetd(0,9)),Egetd(0,12)),(ATerm)ATmakeAppl0(e_0))));
  Return();
  e_10 :
  NotNULLd(0,10);
  NotNULLd(0,4);
  NotNULLd(0,9);
  NotNULLd(0,1);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,10),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl3(q_0,Egetd(0,4),Egetd(0,9),Egetd(0,1)),Egetd(0,5)),(ATerm)ATmakeAppl0(e_0))));
  Return();
  f_10 :
  NotNULLd(0,10);
  NotNULLd(0,9);
  NotNULLd(0,12);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,10),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl1(e_1,Egetd(0,9)),Egetd(0,12)),(ATerm)ATmakeAppl0(e_0))));
  Return();
  j_1 :
  Epopd(0,13);
ENDPROC

PROC(_stratego_w_1)
  Epushd(0,6);
  MoveTop(0,1);
  Tset((ATerm)ATmakeAppl0(r_0));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl0(e_0))));
  Cpush(r_1);
  q_1 :
  Ccall(_stratego_v_1);
  Tduplinv();
  goto q_1;
  r_1 :
  MoveTop(0,2);
  goto k_10;
  k_10 :
  TestFunFC(c_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto l_10;
  l_10 :
  TestFunFC(c_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  Rpush(d_2);
  goto x_11;
  d_2 :
  goto p_1;
  x_11 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  p_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_x_1)
  _ST_exit();
ENDPROC

PROC(_stratego_y_1)
  _ST_printnl();
ENDPROC

PROC(_stratego_z_1)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(e_2),(ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_y_1);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_a_2)
  Tdupl();
  Ccall(_stratego_z_1);
  Tset(MakeInt(1));
  Ccall(_stratego_x_1);
  Tpop();
ENDPROC

PROC(_stratego_b_2)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_c_2)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_main)
  Cpush(d_3);
  Epushd(0,3);
  Tset((ATerm)ATmakeAppl0(e_3));
  Ccall(_stratego_c_2);
  MoveTop(0,1);
  Ccall(_stratego_w_1);
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_u_1);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(f_3),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_0,Egetd(0,2),(ATerm)ATmakeAppl2(c_0,Egetd(0,3),(ATerm)ATmakeAppl0(e_0))),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_b_2);
  Epopd(0,3);
  goto f_2;
  d_3 :
  Tset((ATerm)ATmakeAppl2(d_0,ATmakeString("** rewriting failed"),(ATerm)ATmakeAppl0(r_0)));
  Ccall(_stratego_a_2);
  goto g_3;
  f_2 :
  Cpop();
  g_3 :
ENDPROC

DOIT

