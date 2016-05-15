#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,y_0);
VARDECL(AFun,x_0);
VARDECL(AFun,v_0);
VARDECL(AFun,t_0);
VARDECL(AFun,r_0);
VARDECL(AFun,q_0);
VARDECL(AFun,o_0);
VARDECL(AFun,h_0);
PROCDECL(_stratego_main);
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

PROC(_stratego_init_afuns)
  MOVE(y_0,ATmakeAFun("A",1,0));
  MOVE(x_0,ATmakeAFun("ENDIF",1,0));
  MOVE(v_0,ATmakeAFun("IF",1,0));
  MOVE(t_0,ATmakeAFun("ENDLOOP",1,0));
  MOVE(r_0,ATmakeAFun("TNil",0,0));
  MOVE(q_0,ATmakeAFun("LOOP",1,0));
  MOVE(o_0,ATmakeAFun("Cons",2,0));
  MOVE(h_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,3);
  Tset(App0("stdin"));
  Ccall(_stratego_s_1);
  MoveTop(0,1);
  Ccall(_stratego_y_1);
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_a_2);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",App0("stdout"),App2("TCons",App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))),App0("TNil"))));
  Ccall(_stratego_t_1);
  Epopd(0,3);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_u_1);
  goto c_0;
  a_0 :
  Cpop();
  c_0 :
ENDPROC

PROC(_stratego_s_1)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_t_1)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_u_1)
  Tdupl();
  Ccall(_stratego_v_1);
  Tset(MakeInt(1));
  Ccall(_stratego_x_1);
  Tpop();
ENDPROC

PROC(_stratego_v_1)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_w_1);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_w_1)
  _ST_printnl();
ENDPROC

PROC(_stratego_x_1)
  _ST_exit();
ENDPROC

PROC(_stratego_y_1)
  Epushd(0,6);
  MoveTop(0,1);
  Tset(App0("Nil"));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Cpush(f_0);
  e_0 :
  Ccall(_stratego_z_1);
  Tduplinv();
  goto e_0;
  f_0 :
  MoveTop(0,2);
  goto r_3;
  r_3 :
  TestFunFC(h_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto s_3;
  s_3 :
  TestFunFC(h_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  Rpush(g_0);
  goto l_4;
  g_0 :
  goto d_0;
  l_4 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  d_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_z_1)
  Epushd(0,13);
  MoveTop(0,6);
  goto r_4;
  r_4 :
  TestFunFC(h_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,11,0,6,1);
  goto s_4;
  s_4 :
  TestFunFC(o_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,10,0,7,1);
  goto t_4;
  t_4 :
  TestFunFC(q_0,&&p_0,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  goto u_4;
  u_4 :
  TestFunFC(h_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto v_4;
  v_4 :
  TestFunFC(r_0,&&fail,Egetd(0,13));
  Rpush(n_0);
  goto q_6;
  p_0 :
  TestFunFC(t_0,&&s_0,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  goto w_4;
  w_4 :
  TestFunFC(h_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto x_4;
  x_4 :
  TestFunFC(o_0,&&fail,Egetd(0,12));
  MoveArg(0,1,0,12,0);
  MoveArg(0,2,0,12,1);
  goto y_4;
  y_4 :
  TestFunFC(o_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto z_4;
  z_4 :
  TestFunFC(q_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto a_5;
  a_5 :
  TestFunFC(r_0,&&fail,Egetd(0,13));
  Rpush(n_0);
  goto r_6;
  s_0 :
  TestFunFC(v_0,&&u_0,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  goto b_5;
  b_5 :
  TestFunFC(h_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto c_5;
  c_5 :
  TestFunFC(r_0,&&fail,Egetd(0,13));
  Rpush(n_0);
  goto s_6;
  u_0 :
  TestFunFC(x_0,&&w_0,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  goto d_5;
  d_5 :
  TestFunFC(h_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto e_5;
  e_5 :
  TestFunFC(o_0,&&fail,Egetd(0,12));
  MoveArg(0,1,0,12,0);
  MoveArg(0,2,0,12,1);
  goto f_5;
  f_5 :
  TestFunFC(o_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto g_5;
  g_5 :
  TestFunFC(v_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto h_5;
  h_5 :
  TestFunFC(r_0,&&fail,Egetd(0,13));
  Rpush(n_0);
  goto t_6;
  w_0 :
  TestFunFC(y_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  goto i_5;
  i_5 :
  TestFunFC(h_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto j_5;
  j_5 :
  TestFunFC(r_0,&&fail,Egetd(0,13));
  Rpush(n_0);
  goto u_6;
  n_0 :
  goto m_0;
  u_6 :
  NotNULLd(0,10);
  NotNULLd(0,9);
  NotNULLd(0,12);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",App1("A",Egetd(0,9)),Egetd(0,12)),App0("TNil"))));
  Return();
  m_0 :
  goto l_0;
  t_6 :
  NotNULLd(0,10);
  NotNULLd(0,4);
  NotNULLd(0,9);
  NotNULLd(0,1);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",App3("If",Egetd(0,4),Egetd(0,9),Egetd(0,1)),Egetd(0,5)),App0("TNil"))));
  Return();
  l_0 :
  goto k_0;
  s_6 :
  NotNULLd(0,10);
  NotNULLd(0,9);
  NotNULLd(0,12);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",App1("IF",Egetd(0,9)),Egetd(0,12)),App0("TNil"))));
  Return();
  k_0 :
  goto j_0;
  r_6 :
  NotNULLd(0,10);
  NotNULLd(0,4);
  NotNULLd(0,9);
  NotNULLd(0,1);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",App3("Loop",Egetd(0,4),Egetd(0,9),Egetd(0,1)),Egetd(0,5)),App0("TNil"))));
  Return();
  j_0 :
  goto i_0;
  q_6 :
  NotNULLd(0,10);
  NotNULLd(0,9);
  NotNULLd(0,12);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",App1("LOOP",Egetd(0,9)),Egetd(0,12)),App0("TNil"))));
  Return();
  i_0 :
  Epopd(0,13);
ENDPROC

PROC(_stratego_a_2)
  Epushd(0,6);
  MoveTop(0,1);
  Tset(App0("Nil"));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Cpush(b_1);
  a_1 :
  Cpush(d_1);
  Ccall(_stratego_b_2);
  goto c_1;
  d_1 :
  Ccontinue(e_1);
  Ccall(_stratego_c_2);
  goto c_1;
  e_1 :
  Epushd(1,7);
  MoveTop(1,1);
  goto f_7;
  f_7 :
  TestFunFC(h_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto g_7;
  g_7 :
  TestFunFC(o_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto h_7;
  h_7 :
  TestFunFC(h_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto i_7;
  i_7 :
  TestFunFC(r_0,&&fail,Egetd(1,7));
  Rpush(h_1);
  goto q_8;
  h_1 :
  goto g_1;
  q_8 :
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  MoveTop(2,1);
  goto e_7;
  e_7 :
  TestFunFC(y_0,&&o_1,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(n_1);
  goto r_8;
  o_1 :
  TestFunFC(v_0,&&p_1,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(n_1);
  goto s_8;
  p_1 :
  TestFunFC(x_0,&&q_1,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(n_1);
  goto t_8;
  q_1 :
  TestFunFC(q_0,&&r_1,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(n_1);
  goto u_8;
  r_1 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(n_1);
  goto v_8;
  n_1 :
  goto m_1;
  v_8 :
  Return();
  m_1 :
  goto l_1;
  u_8 :
  Return();
  l_1 :
  goto k_1;
  t_8 :
  Return();
  k_1 :
  goto j_1;
  s_8 :
  Return();
  j_1 :
  goto i_1;
  r_8 :
  Return();
  i_1 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Return();
  g_1 :
  Epopd(1,7);
  goto f_1;
  c_1 :
  Cpop();
  f_1 :
  Tduplinv();
  goto a_1;
  b_1 :
  MoveTop(0,2);
  goto k_7;
  k_7 :
  TestFunFC(h_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto l_7;
  l_7 :
  TestFunFC(h_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  Rpush(d_2);
  goto w_8;
  d_2 :
  goto z_0;
  w_8 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  z_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_b_2)
  Epushd(0,11);
  MoveTop(0,1);
  goto g_9;
  g_9 :
  TestFunFC(h_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto h_9;
  h_9 :
  TestFunFC(h_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,11,0,3,1);
  goto i_9;
  i_9 :
  TestFunFC(o_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto j_9;
  j_9 :
  TestFunFC(o_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto k_9;
  k_9 :
  TestFunFC(o_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto l_9;
  l_9 :
  TestFunFC(r_0,&&fail,Egetd(0,11));
  Rpush(f_2);
  goto q_10;
  f_2 :
  goto e_2;
  q_10 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,9);
  NotNULLd(0,9);
  NotNULLd(0,7);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,9),App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,5),App0("TNil")))));
  MoveTop(2,1);
  goto a_9;
  a_9 :
  TestFunFC(h_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto b_9;
  b_9 :
  TestFunFC(v_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto c_9;
  c_9 :
  TestFunFC(h_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto d_9;
  d_9 :
  TestFunFC(h_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,9,2,6,1);
  goto e_9;
  e_9 :
  TestFunFC(x_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  goto f_9;
  f_9 :
  TestFunFC(r_0,&&fail,Egetd(2,9));
  Rpush(h_2);
  goto r_10;
  h_2 :
  goto g_2;
  r_10 :
  NotNULLd(2,3);
  NotNULLd(2,8);
  NotNULLd(2,5);
  Tset(App3("If",Egetd(2,3),Egetd(2,8),Egetd(2,5)));
  Tdupl();
  NotNULLd(2,3);
  NotNULLd(2,8);
  NotNULLd(2,5);
  Tset(App3("If",Egetd(2,3),Egetd(2,8),Egetd(2,5)));
  MoveTop(1,1);
  Tpop();
  Return();
  g_2 :
  Epopd(2,9);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",App2("Cons",Egetd(1,1),Egetd(0,10)),App0("TNil"))));
  Epopd(1,1);
  Return();
  e_2 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_c_2)
  Epushd(0,11);
  MoveTop(0,1);
  goto v_11;
  v_11 :
  TestFunFC(h_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto w_11;
  w_11 :
  TestFunFC(h_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,11,0,3,1);
  goto x_11;
  x_11 :
  TestFunFC(o_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto y_11;
  y_11 :
  TestFunFC(o_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto z_11;
  z_11 :
  TestFunFC(o_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto a_12;
  a_12 :
  TestFunFC(r_0,&&fail,Egetd(0,11));
  Rpush(k_2);
  goto f_13;
  k_2 :
  goto i_2;
  f_13 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,9);
  NotNULLd(0,9);
  NotNULLd(0,7);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,9),App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,5),App0("TNil")))));
  MoveTop(2,1);
  goto p_11;
  p_11 :
  TestFunFC(h_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto q_11;
  q_11 :
  TestFunFC(q_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto r_11;
  r_11 :
  TestFunFC(h_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto s_11;
  s_11 :
  TestFunFC(h_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,9,2,6,1);
  goto t_11;
  t_11 :
  TestFunFC(t_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  goto u_11;
  u_11 :
  TestFunFC(r_0,&&fail,Egetd(2,9));
  Rpush(o_2);
  goto g_13;
  o_2 :
  goto m_2;
  g_13 :
  NotNULLd(2,3);
  NotNULLd(2,8);
  NotNULLd(2,5);
  Tset(App3("Loop",Egetd(2,3),Egetd(2,8),Egetd(2,5)));
  Tdupl();
  NotNULLd(2,3);
  NotNULLd(2,8);
  NotNULLd(2,5);
  Tset(App3("Loop",Egetd(2,3),Egetd(2,8),Egetd(2,5)));
  MoveTop(1,1);
  Tpop();
  Return();
  m_2 :
  Epopd(2,9);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",App2("Cons",Egetd(1,1),Egetd(0,10)),App0("TNil"))));
  Epopd(1,1);
  Return();
  i_2 :
  Epopd(0,11);
ENDPROC

DOIT

