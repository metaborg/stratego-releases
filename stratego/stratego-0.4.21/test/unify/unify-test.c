#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,n_4);
VARDECL(AFun,y_1);
VARDECL(AFun,q_0);
VARDECL(AFun,p_0);
VARDECL(AFun,j_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_h_6);
PROCDECL(_stratego_i_6);
PROCDECL(_stratego_j_6);
PROCDECL(_stratego_k_6);
PROCDECL(_stratego_l_6);
PROCDECL(_stratego_m_6);
PROCDECL(_stratego_n_6);
PROCDECL(_stratego_o_6);
PROCDECL(_stratego_p_6);
PROCDECL(_stratego_q_6);
PROCDECL(_stratego_r_6);

PROC(_stratego_init_afuns)
  MOVE(n_4,ATmakeAFun("Nil",0,0));
  MOVE(y_1,ATmakeAFun("Var",1,0));
  MOVE(q_0,ATmakeAFun("TNil",0,0));
  MOVE(p_0,ATmakeAFun("Cons",2,0));
  MOVE(j_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,2);
  Tset(App0("stdin"));
  Ccall(_stratego_h_6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(g_0);
  k_7 :
  Cpush(i_0);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(1,7);
  MoveTop(1,1);
  goto c_0;
  c_0 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto d_0;
  d_0 :
  TestFunFC(j_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto e_0;
  e_0 :
  TestFunFC(j_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto f_0;
  f_0 :
  TestFunFC(q_0,&&fail,Egetd(1,6));
  Rpush(o_0);
  goto l_7;
  o_0 :
  goto k_0;
  l_7 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  k_0 :
  Epopd(1,7);
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_6);
  AllBuild();
  AllBuild();
  goto h_0;
  i_0 :
  Ccontinue(r_0);
  Epushd(1,11);
  MoveTop(1,1);
  goto k_1;
  k_1 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,9,1,1,1);
  goto l_1;
  l_1 :
  TestFunFC(p_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,8,1,2,1);
  goto m_1;
  m_1 :
  TestFunFC(j_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto n_1;
  n_1 :
  TestFunFC(j_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto o_1;
  o_1 :
  TestFunFC(q_0,&&fail,Egetd(1,7));
  goto p_1;
  p_1 :
  TestFunFC(j_0,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  MoveArg(1,11,1,9,1);
  goto q_1;
  q_1 :
  TestFunFC(q_0,&&fail,Egetd(1,11));
  Cpush(w_0);
  Rpush(b_1);
  goto m_7;
  b_1 :
  goto v_0;
  w_0 :
  Rpush(i_1);
  goto y_7;
  i_1 :
  goto g_1;
  v_0 :
  Cpop();
  g_1 :
  goto u_0;
  u_0 :
  goto t_0;
  y_7 :
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Cpush(r_1);
  Tdupl();
  Epushd(3,2);
  MoveTop(3,1);
  goto h_1;
  h_1 :
  TestFunFC(y_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(x_1);
  goto z_7;
  x_1 :
  goto w_1;
  z_7 :
  Return();
  w_1 :
  Epopd(3,2);
  Cpop();
  Crestore();
  Cjump();
  r_1 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  MoveTop(2,1);
  goto j_1;
  j_1 :
  TestFunFC(y_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(i_2);
  goto a_8;
  i_2 :
  goto a_2;
  a_8 :
  Return();
  a_2 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,6);
  NotNULLd(1,4);
  NotNULLd(1,8);
  NotNULLd(1,10);
  Tset(App2("TCons",App2("Cons",App2("TCons",Egetd(1,6),App2("TCons",Egetd(1,4),App0("TNil"))),Egetd(1,8)),App2("TCons",Egetd(1,10),App0("TNil"))));
  Return();
  t_0 :
  goto s_0;
  m_7 :
  Epushd(2,2);
  Tdupl();
  Epushd(3,2);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  MoveTop(3,1);
  goto f_1;
  f_1 :
  TestFunFC(y_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(w_2);
  goto n_7;
  w_2 :
  goto v_2;
  n_7 :
  Epushd(4,10);
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  Cpush(x_2);
  Tdupl();
  Epushd(5,5);
  MoveTop(5,1);
  goto l_0;
  l_0 :
  TestFunFC(j_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto m_0;
  m_0 :
  TestFunFC(j_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto n_0;
  n_0 :
  TestFunFC(q_0,&&fail,Egetd(5,5));
  Rpush(i_3);
  goto o_7;
  i_3 :
  goto y_2;
  o_7 :
  NotNULLd(5,4);
  Tset(Egetd(5,4));
  Rpush(u_3);
  j_3 :
  Cpush(q_3);
  Epushd(6,1);
  MoveTop(6,1);
  Move(5,2,6,1);
  Epopd(6,1);
  Cpop();
  goto t_3;
  q_3 :
  IsAppl();
  MatchTravInit();
  r_3 :
  OneMatchNextSon();
  Cpush(r_3);
  Rpush(s_3);
  goto j_3;
  s_3 :
  Cpop();
  MatchTravEnd();
  t_3 :
  Return();
  u_3 :
  Return();
  y_2 :
  Epopd(5,5);
  Cpop();
  Crestore();
  Cjump();
  x_2 :
  NotNULLd(1,4);
  NotNULLd(1,6);
  NotNULLd(1,10);
  NotNULLd(1,8);
  Tset(App2("TCons",App2("Cons",App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))),App0("Nil")),App2("TCons",App2("TCons",Egetd(1,10),App2("TCons",Egetd(1,8),App0("TNil"))),App0("TNil"))));
  Ccall(_stratego_n_6);
  MoveTop(4,1);
  goto y_0;
  y_0 :
  TestFunFC(j_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto z_0;
  z_0 :
  TestFunFC(j_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto a_1;
  a_1 :
  TestFunFC(q_0,&&fail,Egetd(4,5));
  Rpush(x_3);
  goto r_7;
  x_3 :
  goto w_3;
  r_7 :
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(y_3);
  s_7 :
  Cpush(a_4);
  Epushd(5,3);
  MoveTop(5,1);
  Tdupl();
  Epushd(6,2);
  NotNULLd(5,1);
  Tset(Egetd(5,1));
  MoveTop(6,1);
  goto x_0;
  x_0 :
  TestFunFC(y_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  Rpush(c_4);
  goto u_7;
  c_4 :
  goto b_4;
  u_7 :
  Epushd(7,1);
  MoveTop(7,1);
  Move(5,2,7,1);
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Move(5,3,4,2);
  Epopd(7,1);
  Return();
  b_4 :
  Epopd(6,2);
  Tpop();
  NotNULLd(5,2);
  NotNULLd(5,3);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,3),App0("TNil"))));
  Ccall(_stratego_o_6);
  Epopd(5,3);
  goto z_3;
  a_4 :
  AllInit();
  e_4 :
  AllNextSon(&&f_4);
  Rpush(g_4);
  goto s_7;
  g_4 :
  goto e_4;
  f_4 :
  AllBuild();
  goto d_4;
  z_3 :
  Cpop();
  d_4 :
  Return();
  y_3 :
  Return();
  w_3 :
  MoveTop(4,6);
  goto c_1;
  c_1 :
  TestFunFC(j_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto d_1;
  d_1 :
  TestFunFC(j_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto e_1;
  e_1 :
  TestFunFC(q_0,&&fail,Egetd(4,10));
  Rpush(h_4);
  goto x_7;
  h_4 :
  goto v_3;
  x_7 :
  Move(2,1,4,7);
  Move(2,2,4,9);
  Return();
  v_3 :
  Epopd(4,10);
  Return();
  v_2 :
  Epopd(3,2);
  Tpop();
  NotNULLd(2,2);
  NotNULLd(1,4);
  NotNULLd(1,6);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",App2("Cons",App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))),Egetd(2,1)),App0("TNil"))));
  Epopd(2,2);
  Return();
  s_0 :
  Epopd(1,11);
  goto h_0;
  r_0 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_6);
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_6);
  AllBuild();
  AllBuild();
  goto i_4;
  h_0 :
  Cpop();
  i_4 :
  Cpush(k_4);
  Epushd(1,5);
  MoveTop(1,1);
  goto s_1;
  s_1 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto t_1;
  t_1 :
  TestFunFC(n_4,&&fail,Egetd(1,2));
  goto u_1;
  u_1 :
  TestFunFC(j_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto v_1;
  v_1 :
  TestFunFC(q_0,&&fail,Egetd(1,5));
  Rpush(m_4);
  goto b_8;
  m_4 :
  goto l_4;
  b_8 :
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Return();
  l_4 :
  Epopd(1,5);
  goto j_4;
  k_4 :
  Rpush(p_4);
  goto k_7;
  p_4 :
  goto o_4;
  j_4 :
  Cpop();
  o_4 :
  Return();
  g_0 :
  MoveTop(0,2);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Ccall(_stratego_i_6);
  Epopd(0,2);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_j_6);
  goto q_4;
  a_0 :
  Cpop();
  q_4 :
ENDPROC

PROC(_stratego_h_6)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_i_6)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_j_6)
  Tdupl();
  Ccall(_stratego_k_6);
  Tset(MakeInt(1));
  Ccall(_stratego_m_6);
  Tpop();
ENDPROC

PROC(_stratego_k_6)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_l_6);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_l_6)
  _ST_printnl();
ENDPROC

PROC(_stratego_m_6)
  _ST_exit();
ENDPROC

PROC(_stratego_n_6)
  Epushd(0,7);
  MoveTop(0,1);
  goto i_9;
  i_9 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto j_9;
  j_9 :
  TestFunFC(j_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto k_9;
  k_9 :
  TestFunFC(q_0,&&u_4,Egetd(0,5));
  Rpush(t_4);
  goto w_10;
  u_4 :
  TestFunFC(j_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto l_9;
  l_9 :
  TestFunFC(q_0,&&fail,Egetd(0,7));
  Rpush(t_4);
  goto c_11;
  t_4 :
  goto s_4;
  c_11 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(v_4);
  d_11 :
  Epushd(2,9);
  MoveTop(2,1);
  goto z_8;
  z_8 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto a_9;
  a_9 :
  TestFunFC(n_4,&&e_5,Egetd(2,2));
  goto b_9;
  b_9 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto c_9;
  c_9 :
  TestFunFC(n_4,&&fail,Egetd(2,6));
  goto d_9;
  d_9 :
  TestFunFC(q_0,&&fail,Egetd(2,9));
  Rpush(d_5);
  goto e_11;
  e_5 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto e_9;
  e_9 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto f_9;
  f_9 :
  TestFunFC(p_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto g_9;
  g_9 :
  TestFunFC(q_0,&&fail,Egetd(2,9));
  Rpush(d_5);
  goto f_11;
  d_5 :
  goto c_5;
  f_11 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Rpush(g_5);
  goto d_11;
  g_5 :
  OneNextSon();
  Ccall(_stratego_r_6);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto w_8;
  w_8 :
  TestFunFC(j_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto x_8;
  x_8 :
  TestFunFC(j_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto y_8;
  y_8 :
  TestFunFC(q_0,&&fail,Egetd(3,5));
  Rpush(h_5);
  goto g_11;
  h_5 :
  goto f_5;
  g_11 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  f_5 :
  Epopd(3,5);
  Return();
  c_5 :
  goto x_4;
  e_11 :
  Tset(App0("Nil"));
  Return();
  x_4 :
  Epopd(2,9);
  Return();
  v_4 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  s_4 :
  goto r_4;
  w_10 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  r_4 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_o_6)
  Rpush(i_5);
  g_12 :
  Epushd(0,11);
  MoveTop(0,5);
  goto k_11;
  k_11 :
  TestFunFC(j_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto l_11;
  l_11 :
  TestFunFC(j_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto m_11;
  m_11 :
  TestFunFC(p_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto n_11;
  n_11 :
  TestFunFC(q_0,&&fail,Egetd(0,11));
  goto o_11;
  o_11 :
  TestFunFC(j_0,&&p_5,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto p_11;
  p_11 :
  TestFunFC(j_0,&&q_5,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto q_11;
  q_11 :
  TestFunFC(q_0,&&u_5,Egetd(0,4));
  Cpush(w_5);
  Rpush(x_5);
  goto h_12;
  x_5 :
  goto v_5;
  w_5 :
  Rpush(z_5);
  goto i_12;
  z_5 :
  goto y_5;
  v_5 :
  Cpop();
  y_5 :
  goto o_5;
  u_5 :
  Rpush(o_5);
  goto i_12;
  q_5 :
  Rpush(o_5);
  goto i_12;
  p_5 :
  Rpush(o_5);
  goto i_12;
  o_5 :
  goto l_5;
  i_12 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(a_6);
  goto g_12;
  a_6 :
  Return();
  l_5 :
  goto j_5;
  h_12 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  j_5 :
  Epopd(0,11);
  Return();
  i_5 :
ENDPROC

PROC(_stratego_p_6)
  Epushd(0,7);
  MoveTop(0,1);
  goto l_13;
  l_13 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto m_13;
  m_13 :
  TestFunFC(j_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto n_13;
  n_13 :
  TestFunFC(j_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto o_13;
  o_13 :
  TestFunFC(q_0,&&fail,Egetd(0,6));
  Rpush(c_6);
  goto p_15;
  c_6 :
  goto b_6;
  p_15 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto l_12;
  l_12 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto m_12;
  m_12 :
  TestFunFC(j_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto n_12;
  n_12 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  Rpush(e_6);
  goto q_15;
  e_6 :
  goto d_6;
  q_15 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  d_6 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto p_12;
  p_12 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto q_12;
  q_12 :
  TestFunFC(j_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_12;
  r_12 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  Rpush(g_6);
  goto r_15;
  g_6 :
  goto f_6;
  r_15 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  f_6 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(s_6);
  s_15 :
  Epushd(2,9);
  MoveTop(2,1);
  goto y_12;
  y_12 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto z_12;
  z_12 :
  TestFunFC(n_4,&&g_7,Egetd(2,2));
  goto a_13;
  a_13 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto b_13;
  b_13 :
  TestFunFC(n_4,&&fail,Egetd(2,6));
  goto c_13;
  c_13 :
  TestFunFC(q_0,&&fail,Egetd(2,9));
  Rpush(f_7);
  goto t_15;
  g_7 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto d_13;
  d_13 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto e_13;
  e_13 :
  TestFunFC(p_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto f_13;
  f_13 :
  TestFunFC(q_0,&&fail,Egetd(2,9));
  Rpush(f_7);
  goto u_15;
  f_7 :
  goto e_7;
  u_15 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Rpush(i_7);
  goto s_15;
  i_7 :
  OneNextSon();
  Ccall(_stratego_r_6);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto v_12;
  v_12 :
  TestFunFC(j_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto w_12;
  w_12 :
  TestFunFC(j_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto x_12;
  x_12 :
  TestFunFC(q_0,&&fail,Egetd(3,5));
  Rpush(j_7);
  goto v_15;
  j_7 :
  goto h_7;
  v_15 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  h_7 :
  Epopd(3,5);
  Return();
  e_7 :
  goto c_7;
  t_15 :
  Tset(App0("Nil"));
  Return();
  c_7 :
  Epopd(2,9);
  Return();
  s_6 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto i_13;
  i_13 :
  TestFunFC(j_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto j_13;
  j_13 :
  TestFunFC(j_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto k_13;
  k_13 :
  TestFunFC(q_0,&&fail,Egetd(1,9));
  Rpush(t_7);
  goto x_15;
  t_7 :
  goto q_7;
  x_15 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(v_7);
  y_15 :
  Cpush(c_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_8);
  goto y_15;
  d_8 :
  AllBuild();
  goto w_7;
  c_8 :
  Ccall(_stratego_q_6);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto e_8;
  w_7 :
  Cpop();
  e_8 :
  Return();
  v_7 :
  Return();
  q_7 :
  Epopd(1,9);
  Return();
  b_6 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_q_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_16;
  a_16 :
  TestFunFC(n_4,&&fail,Egetd(0,1));
  Rpush(g_8);
  goto c_16;
  g_8 :
  goto f_8;
  c_16 :
  Return();
  f_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_16;
  e_16 :
  TestFunFC(q_0,&&fail,Egetd(0,1));
  Rpush(j_8);
  goto g_16;
  j_8 :
  goto h_8;
  g_16 :
  Return();
  h_8 :
  Epopd(0,1);
ENDPROC

DOIT

