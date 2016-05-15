#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,v_9);
VARDECL(AFun,u_9);
VARDECL(AFun,y_4);
VARDECL(AFun,l_4);
VARDECL(AFun,t_2);
VARDECL(AFun,p_1);
VARDECL(AFun,i_1);
VARDECL(AFun,d_1);
VARDECL(AFun,b_1);
VARDECL(AFun,a_1);
VARDECL(AFun,k_0);
VARDECL(AFun,j_0);
PROCDECL(_stratego_z_12);
PROCDECL(_stratego_a_13);
PROCDECL(_stratego_b_13);
PROCDECL(_stratego_d_13);
PROCDECL(_stratego_g_13);
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
PROCDECL(_stratego_x_13);
PROCDECL(_stratego_y_13);
PROCDECL(_stratego_z_13);
PROCDECL(_stratego_a_14);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(v_9,ATmakeAFun("Rule",3,0));
  MOVE(u_9,ATmakeAFun("LRule",1,0));
  MOVE(y_4,ATmakeAFun("Var",1,0));
  MOVE(l_4,ATmakeAFun("Scope",2,0));
  MOVE(t_2,ATmakeAFun("SVar",1,0));
  MOVE(p_1,ATmakeAFun("Nil",0,0));
  MOVE(i_1,ATmakeAFun("Cons",2,0));
  MOVE(d_1,ATmakeAFun("Rec",2,0));
  MOVE(b_1,ATmakeAFun("SDef",3,0));
  MOVE(a_1,ATmakeAFun("Let",2,0));
  MOVE(k_0,ATmakeAFun("TNil",0,0));
  MOVE(j_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_z_12)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(d_0);
  r_16 :
  Rpush(e_0);
  s_16 :
  Epushd(1,5);
  MoveTop(1,1);
  goto i_8;
  i_8 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_9;
  d_9 :
  TestFunFC(j_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto e_9;
  e_9 :
  TestFunFC(k_0,&&fail,Egetd(1,5));
  Cpush(m_0);
  Rpush(n_0);
  goto u_1;
  n_0 :
  goto l_0;
  m_0 :
  Ccontinue(o_0);
  Rpush(p_0);
  goto f_3;
  p_0 :
  goto l_0;
  o_0 :
  Rpush(r_0);
  goto g_3;
  r_0 :
  goto q_0;
  l_0 :
  Cpop();
  q_0 :
  goto i_0;
  i_0 :
  goto h_0;
  g_3 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  s_0 :
  AllNextSon(&&t_0);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(u_0);
  goto s_16;
  u_0 :
  Epopd(2,1);
  goto s_0;
  t_0 :
  AllBuild();
  Return();
  h_0 :
  goto g_0;
  f_3 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,15);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,5);
  goto y_3;
  y_3 :
  TestFunFC(a_1,&&z_0,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto b_4;
  b_4 :
  TestFunFC(b_1,&&fail,Egetd(3,6));
  MoveArg(3,1,3,6,0);
  MoveArg(3,2,3,6,1);
  MoveArg(3,3,3,6,2);
  Rpush(y_0);
  goto r_3;
  z_0 :
  TestFunFC(b_1,&&c_1,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  MoveArg(3,4,3,5,2);
  Rpush(y_0);
  goto s_3;
  c_1 :
  TestFunFC(d_1,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(y_0);
  goto x_3;
  y_0 :
  goto x_0;
  x_3 :
  NotNULLd(3,6);
  Tset(App2("Cons",Egetd(3,6),App0("Nil")));
  Return();
  x_0 :
  goto w_0;
  s_3 :
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  Return();
  w_0 :
  goto v_0;
  r_3 :
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Return();
  v_0 :
  MoveTop(3,8);
  Move(2,1,3,8);
  Rpush(e_1);
  t_16 :
  Cpush(g_1);
  Ccall(_stratego_n_13);
  goto f_1;
  g_1 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_13);
  OneNextSon();
  Rpush(j_1);
  goto t_16;
  j_1 :
  AllBuild();
  goto h_1;
  f_1 :
  Cpop();
  h_1 :
  Return();
  e_1 :
  MoveTop(3,9);
  Move(2,2,3,9);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(k_1);
  u_16 :
  Epushd(4,9);
  MoveTop(4,1);
  goto t_4;
  t_4 :
  TestFunFC(j_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto u_4;
  u_4 :
  TestFunFC(p_1,&&o_1,Egetd(4,2));
  goto v_4;
  v_4 :
  TestFunFC(j_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto h_5;
  h_5 :
  TestFunFC(p_1,&&fail,Egetd(4,6));
  goto i_5;
  i_5 :
  TestFunFC(k_0,&&fail,Egetd(4,9));
  Rpush(n_1);
  goto n_4;
  o_1 :
  TestFunFC(i_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto j_5;
  j_5 :
  TestFunFC(j_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto k_5;
  k_5 :
  TestFunFC(i_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto n_5;
  n_5 :
  TestFunFC(k_0,&&fail,Egetd(4,9));
  Rpush(n_1);
  goto o_4;
  n_1 :
  goto m_1;
  o_4 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Rpush(r_1);
  goto u_16;
  r_1 :
  OneNextSon();
  Ccall(_stratego_x_13);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto q_4;
  q_4 :
  TestFunFC(j_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto r_4;
  r_4 :
  TestFunFC(j_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto s_4;
  s_4 :
  TestFunFC(k_0,&&fail,Egetd(5,5));
  Rpush(s_1);
  goto p_4;
  s_1 :
  goto q_1;
  p_4 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  q_1 :
  Epopd(5,5);
  Return();
  m_1 :
  goto l_1;
  n_4 :
  Tset(App0("Nil"));
  Return();
  l_1 :
  Epopd(4,9);
  Return();
  k_1 :
  MoveTop(3,10);
  NotNULLd(3,10);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,10),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,11);
  goto u_5;
  u_5 :
  TestFunFC(j_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto v_5;
  v_5 :
  TestFunFC(j_0,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto b_6;
  b_6 :
  TestFunFC(k_0,&&fail,Egetd(3,15));
  Rpush(v_1);
  goto s_5;
  v_1 :
  goto t_1;
  s_5 :
  Epushd(4,1);
  NotNULLd(3,12);
  Tset(Egetd(3,12));
  Rpush(w_1);
  v_16 :
  Cpush(y_1);
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_1);
  goto v_16;
  z_1 :
  AllBuild();
  goto x_1;
  y_1 :
  Ccall(_stratego_n_13);
  NotNULLd(3,14);
  Tset(Egetd(3,14));
  goto a_2;
  x_1 :
  Cpop();
  a_2 :
  Return();
  w_1 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  t_1 :
  Epopd(3,15);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(c_2);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto x_6;
  x_6 :
  TestFunFC(i_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(e_2);
  goto w_6;
  e_2 :
  goto d_2;
  w_6 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  d_2 :
  Epopd(3,3);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  goto b_2;
  c_2 :
  Ccontinue(f_2);
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto b_2;
  f_2 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto d_7;
  d_7 :
  TestFunFC(i_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(i_2);
  goto c_7;
  i_2 :
  goto h_2;
  c_7 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  h_2 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  goto g_2;
  b_2 :
  Cpop();
  g_2 :
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto r_7;
  r_7 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto s_7;
  s_7 :
  TestFunFC(j_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto a_8;
  a_8 :
  TestFunFC(j_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto b_8;
  b_8 :
  TestFunFC(k_0,&&fail,Egetd(2,11));
  Rpush(k_2);
  goto f_7;
  k_2 :
  goto j_2;
  f_7 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Cpush(m_2);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,8),App0("TNil"))));
  Rpush(n_2);
  goto r_16;
  n_2 :
  Epopd(3,1);
  AllBuild();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(o_2);
  goto r_16;
  o_2 :
  Epopd(3,1);
  AllBuild();
  goto l_2;
  m_2 :
  Ccontinue(p_2);
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(q_2);
  goto r_16;
  q_2 :
  Epopd(3,1);
  AllBuild();
  goto l_2;
  p_2 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(s_2);
  goto r_16;
  s_2 :
  Epopd(3,1);
  AllBuild();
  goto r_2;
  l_2 :
  Cpop();
  r_2 :
  Return();
  j_2 :
  Epopd(2,11);
  Return();
  g_0 :
  goto f_0;
  u_1 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_h_13);
  Epopd(2,1);
  AllBuild();
  Return();
  f_0 :
  Epopd(1,5);
  Return();
  e_0 :
  Return();
  d_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_13)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(u_2);
  c_21 :
  Rpush(v_2);
  d_21 :
  Epushd(1,5);
  MoveTop(1,1);
  goto h_18;
  h_18 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_18;
  i_18 :
  TestFunFC(j_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto j_18;
  j_18 :
  TestFunFC(k_0,&&fail,Egetd(1,5));
  Cpush(b_3);
  Rpush(c_3);
  goto x_16;
  c_3 :
  goto a_3;
  b_3 :
  Ccontinue(d_3);
  Rpush(e_3);
  goto y_16;
  e_3 :
  goto a_3;
  d_3 :
  Rpush(i_3);
  goto z_16;
  i_3 :
  goto h_3;
  a_3 :
  Cpop();
  h_3 :
  goto z_2;
  z_2 :
  goto y_2;
  z_16 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  j_3 :
  AllNextSon(&&k_3);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(l_3);
  goto d_21;
  l_3 :
  Epopd(2,1);
  goto j_3;
  k_3 :
  AllBuild();
  Return();
  y_2 :
  goto x_2;
  y_16 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_m_13);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(m_3);
  e_21 :
  Cpush(o_3);
  Ccall(_stratego_n_13);
  goto n_3;
  o_3 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_13);
  OneNextSon();
  Rpush(q_3);
  goto e_21;
  q_3 :
  AllBuild();
  goto p_3;
  n_3 :
  Cpop();
  p_3 :
  Return();
  m_3 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(t_3);
  f_21 :
  Epushd(4,9);
  MoveTop(4,1);
  goto l_17;
  l_17 :
  TestFunFC(j_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto m_17;
  m_17 :
  TestFunFC(p_1,&&z_3,Egetd(4,2));
  goto n_17;
  n_17 :
  TestFunFC(j_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto o_17;
  o_17 :
  TestFunFC(p_1,&&fail,Egetd(4,6));
  goto p_17;
  p_17 :
  TestFunFC(k_0,&&fail,Egetd(4,9));
  Rpush(w_3);
  goto f_17;
  z_3 :
  TestFunFC(i_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto q_17;
  q_17 :
  TestFunFC(j_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto r_17;
  r_17 :
  TestFunFC(i_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto s_17;
  s_17 :
  TestFunFC(k_0,&&fail,Egetd(4,9));
  Rpush(w_3);
  goto g_17;
  w_3 :
  goto v_3;
  g_17 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Rpush(c_4);
  goto f_21;
  c_4 :
  OneNextSon();
  Ccall(_stratego_x_13);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto i_17;
  i_17 :
  TestFunFC(j_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto j_17;
  j_17 :
  TestFunFC(j_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto k_17;
  k_17 :
  TestFunFC(k_0,&&fail,Egetd(5,5));
  Rpush(d_4);
  goto h_17;
  d_4 :
  goto a_4;
  h_17 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  a_4 :
  Epopd(5,5);
  Return();
  v_3 :
  goto u_3;
  f_17 :
  Tset(App0("Nil"));
  Return();
  u_3 :
  Epopd(4,9);
  Return();
  t_3 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto w_17;
  w_17 :
  TestFunFC(j_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto x_17;
  x_17 :
  TestFunFC(j_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto y_17;
  y_17 :
  TestFunFC(k_0,&&fail,Egetd(3,8));
  Rpush(f_4);
  goto u_17;
  f_4 :
  goto e_4;
  u_17 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(g_4);
  g_21 :
  Cpush(i_4);
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_4);
  goto g_21;
  j_4 :
  AllBuild();
  goto h_4;
  i_4 :
  Ccall(_stratego_n_13);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto k_4;
  h_4 :
  Cpop();
  k_4 :
  Return();
  g_4 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  e_4 :
  Epopd(3,8);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(l_4);
  TravInit();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto c_18;
  c_18 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto d_18;
  d_18 :
  TestFunFC(j_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto e_18;
  e_18 :
  TestFunFC(j_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto f_18;
  f_18 :
  TestFunFC(k_0,&&fail,Egetd(2,11));
  Rpush(w_4);
  goto a_18;
  w_4 :
  goto m_4;
  a_18 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  TestFunTop(l_4);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(x_4);
  goto c_21;
  x_4 :
  Epopd(3,1);
  AllBuild();
  Return();
  m_4 :
  Epopd(2,11);
  Return();
  x_2 :
  goto w_2;
  x_16 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(y_4);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_h_13);
  Epopd(2,1);
  AllBuild();
  Return();
  w_2 :
  Epopd(1,5);
  Return();
  v_2 :
  Return();
  u_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_13)
  Ccall(_stratego_a_13);
  Ccall(_stratego_z_12);
ENDPROC

PROC(_stratego_d_13)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("srename-test1"));
  Ccall(_stratego_q_13);
  Tpop();
  Cpush(a_5);
  Tdupl();
  Cpush(c_5);
  Epushd(1,1);
  Tset(App3("SDef",ATmakeString("downup"),App2("Cons",ATmakeString("s1"),App2("Cons",ATmakeString("s2"),App0("Nil"))),App2("Rec",ATmakeString("x"),App2("Seq",App2("Call",App1("SVar",ATmakeString("s1")),App0("Nil")),App2("Seq",App1("All",App2("Call",App1("SVar",ATmakeString("x")),App0("Nil"))),App2("Call",App1("SVar",ATmakeString("s2")),App0("Nil")))))));
  Ccall(_stratego_b_13);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto b_5;
  c_5 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_q_13);
  Ccall(_stratego_p_13);
  goto d_5;
  b_5 :
  Cpop();
  d_5 :
  Tset(App3("SDef",ATmakeString("downup"),App2("Cons",ATmakeString("a_0"),App2("Cons",ATmakeString("b_0"),App0("Nil"))),App2("Rec",ATmakeString("c_0"),App2("Seq",App2("Call",App1("SVar",ATmakeString("a_0")),App0("Nil")),App2("Seq",App1("All",App2("Call",App1("SVar",ATmakeString("c_0")),App0("Nil"))),App2("Call",App1("SVar",ATmakeString("b_0")),App0("Nil")))))));
  Tdupl();
  Tset(App3("SDef",ATmakeString("downup"),App2("Cons",ATmakeString("a_0"),App2("Cons",ATmakeString("b_0"),App0("Nil"))),App2("Rec",ATmakeString("c_0"),App2("Seq",App2("Call",App1("SVar",ATmakeString("a_0")),App0("Nil")),App2("Seq",App1("All",App2("Call",App1("SVar",ATmakeString("c_0")),App0("Nil"))),App2("Call",App1("SVar",ATmakeString("b_0")),App0("Nil")))))));
  MoveTop(0,2);
  Tpop();
  Cpush(f_5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto e_5;
  f_5 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_14);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_14);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_p_13);
  goto g_5;
  e_5 :
  Cpop();
  g_5 :
  Tpop();
  Ccall(_stratego_t_13);
  goto z_4;
  a_5 :
  Ccall(_stratego_r_13);
  goto l_5;
  z_4 :
  Cpop();
  l_5 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_g_13)
  _ST_new();
ENDPROC

PROC(_stratego_h_13)
  Rpush(m_5);
  r_23 :
  Epushd(0,11);
  MoveTop(0,5);
  goto v_22;
  v_22 :
  TestFunFC(j_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto w_22;
  w_22 :
  TestFunFC(j_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto x_22;
  x_22 :
  TestFunFC(i_1,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto y_22;
  y_22 :
  TestFunFC(k_0,&&fail,Egetd(0,11));
  goto z_22;
  z_22 :
  TestFunFC(j_0,&&r_5,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto a_23;
  a_23 :
  TestFunFC(j_0,&&t_5,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto b_23;
  b_23 :
  TestFunFC(k_0,&&w_5,Egetd(0,4));
  Cpush(y_5);
  Rpush(z_5);
  goto t_22;
  z_5 :
  goto x_5;
  y_5 :
  Rpush(c_6);
  goto u_22;
  c_6 :
  goto a_6;
  x_5 :
  Cpop();
  a_6 :
  goto q_5;
  w_5 :
  Rpush(q_5);
  goto u_22;
  t_5 :
  Rpush(q_5);
  goto u_22;
  r_5 :
  Rpush(q_5);
  goto u_22;
  q_5 :
  goto p_5;
  u_22 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(d_6);
  goto r_23;
  d_6 :
  Return();
  p_5 :
  goto o_5;
  t_22 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  o_5 :
  Epopd(0,11);
  Return();
  m_5 :
ENDPROC

PROC(_stratego_i_13)
  Epushd(0,7);
  MoveTop(0,1);
  goto j_24;
  j_24 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto k_24;
  k_24 :
  TestFunFC(j_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto l_24;
  l_24 :
  TestFunFC(k_0,&&h_6,Egetd(0,5));
  Rpush(g_6);
  goto s_23;
  h_6 :
  TestFunFC(j_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto m_24;
  m_24 :
  TestFunFC(k_0,&&fail,Egetd(0,7));
  Rpush(g_6);
  goto t_23;
  g_6 :
  goto f_6;
  t_23 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(i_6);
  x_25 :
  Epushd(2,9);
  MoveTop(2,1);
  goto a_24;
  a_24 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto b_24;
  b_24 :
  TestFunFC(p_1,&&m_6,Egetd(2,2));
  goto c_24;
  c_24 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto d_24;
  d_24 :
  TestFunFC(p_1,&&fail,Egetd(2,6));
  goto e_24;
  e_24 :
  TestFunFC(k_0,&&fail,Egetd(2,9));
  Rpush(l_6);
  goto u_23;
  m_6 :
  TestFunFC(i_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto f_24;
  f_24 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto g_24;
  g_24 :
  TestFunFC(i_1,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto h_24;
  h_24 :
  TestFunFC(k_0,&&fail,Egetd(2,9));
  Rpush(l_6);
  goto v_23;
  l_6 :
  goto k_6;
  v_23 :
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
  Rpush(o_6);
  goto x_25;
  o_6 :
  OneNextSon();
  Ccall(_stratego_x_13);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto x_23;
  x_23 :
  TestFunFC(j_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto y_23;
  y_23 :
  TestFunFC(j_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto z_23;
  z_23 :
  TestFunFC(k_0,&&fail,Egetd(3,5));
  Rpush(p_6);
  goto w_23;
  p_6 :
  goto n_6;
  w_23 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  n_6 :
  Epopd(3,5);
  Return();
  k_6 :
  goto j_6;
  u_23 :
  Tset(App0("Nil"));
  Return();
  j_6 :
  Epopd(2,9);
  Return();
  i_6 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  f_6 :
  goto e_6;
  s_23 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  e_6 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_j_13)
  Epushd(0,5);
  Ccall(_stratego_i_13);
  MoveTop(0,1);
  goto t_27;
  t_27 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto u_27;
  u_27 :
  TestFunFC(j_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto v_27;
  v_27 :
  TestFunFC(k_0,&&fail,Egetd(0,5));
  Rpush(r_6);
  goto z_25;
  r_6 :
  goto q_6;
  z_25 :
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(s_6);
  e_31 :
  Rpush(t_6);
  f_31 :
  Epushd(1,5);
  MoveTop(1,1);
  goto q_27;
  q_27 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_27;
  r_27 :
  TestFunFC(j_0,&&b_7,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto s_27;
  s_27 :
  TestFunFC(k_0,&&e_7,Egetd(1,5));
  Cpush(h_7);
  Rpush(i_7);
  goto a_26;
  i_7 :
  goto g_7;
  h_7 :
  Ccontinue(j_7);
  Rpush(k_7);
  goto b_26;
  k_7 :
  goto g_7;
  j_7 :
  Ccontinue(l_7);
  Rpush(m_7);
  goto c_26;
  m_7 :
  goto g_7;
  l_7 :
  Rpush(o_7);
  goto d_26;
  o_7 :
  goto n_7;
  g_7 :
  Cpop();
  n_7 :
  goto a_7;
  e_7 :
  Rpush(a_7);
  goto b_26;
  b_7 :
  Rpush(a_7);
  goto b_26;
  a_7 :
  goto z_6;
  d_26 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  p_7 :
  AllNextSon(&&q_7);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(t_7);
  goto f_31;
  t_7 :
  Epopd(2,1);
  goto p_7;
  q_7 :
  AllBuild();
  Return();
  z_6 :
  goto y_6;
  c_26 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_m_13);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(u_7);
  g_31 :
  Cpush(w_7);
  Ccall(_stratego_n_13);
  goto v_7;
  w_7 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_13);
  OneNextSon();
  Rpush(y_7);
  goto g_31;
  y_7 :
  AllBuild();
  goto x_7;
  v_7 :
  Cpop();
  x_7 :
  Return();
  u_7 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(z_7);
  h_31 :
  Epushd(4,9);
  MoveTop(4,1);
  goto u_26;
  u_26 :
  TestFunFC(j_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto v_26;
  v_26 :
  TestFunFC(p_1,&&f_8,Egetd(4,2));
  goto w_26;
  w_26 :
  TestFunFC(j_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto x_26;
  x_26 :
  TestFunFC(p_1,&&fail,Egetd(4,6));
  goto y_26;
  y_26 :
  TestFunFC(k_0,&&fail,Egetd(4,9));
  Rpush(e_8);
  goto o_26;
  f_8 :
  TestFunFC(i_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto z_26;
  z_26 :
  TestFunFC(j_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto a_27;
  a_27 :
  TestFunFC(i_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto b_27;
  b_27 :
  TestFunFC(k_0,&&fail,Egetd(4,9));
  Rpush(e_8);
  goto p_26;
  e_8 :
  goto d_8;
  p_26 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Rpush(h_8);
  goto h_31;
  h_8 :
  OneNextSon();
  Ccall(_stratego_x_13);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto r_26;
  r_26 :
  TestFunFC(j_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto s_26;
  s_26 :
  TestFunFC(j_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto t_26;
  t_26 :
  TestFunFC(k_0,&&fail,Egetd(5,5));
  Rpush(j_8);
  goto q_26;
  j_8 :
  goto g_8;
  q_26 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  g_8 :
  Epopd(5,5);
  Return();
  d_8 :
  goto c_8;
  o_26 :
  Tset(App0("Nil"));
  Return();
  c_8 :
  Epopd(4,9);
  Return();
  z_7 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto f_27;
  f_27 :
  TestFunFC(j_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto g_27;
  g_27 :
  TestFunFC(j_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto h_27;
  h_27 :
  TestFunFC(k_0,&&fail,Egetd(3,8));
  Rpush(l_8);
  goto d_27;
  l_8 :
  goto k_8;
  d_27 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(m_8);
  i_31 :
  Cpush(o_8);
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_8);
  goto i_31;
  p_8 :
  AllBuild();
  goto n_8;
  o_8 :
  Ccall(_stratego_n_13);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto q_8;
  n_8 :
  Cpop();
  q_8 :
  Return();
  m_8 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  k_8 :
  Epopd(3,8);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(l_4);
  TravInit();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto l_27;
  l_27 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto m_27;
  m_27 :
  TestFunFC(j_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto n_27;
  n_27 :
  TestFunFC(j_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto o_27;
  o_27 :
  TestFunFC(k_0,&&fail,Egetd(2,11));
  Rpush(s_8);
  goto j_27;
  s_8 :
  goto r_8;
  j_27 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  TestFunTop(l_4);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(t_8);
  goto e_31;
  t_8 :
  Epopd(3,1);
  AllBuild();
  Return();
  r_8 :
  Epopd(2,11);
  Return();
  y_6 :
  goto v_6;
  b_26 :
  Epushd(2,2);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Tdupl();
  Epushd(3,2);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,1);
  goto l_26;
  l_26 :
  TestFunFC(y_4,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(v_8);
  goto i_26;
  v_8 :
  goto u_8;
  i_26 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Move(2,1,3,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(2,2,0,2);
  Return();
  u_8 :
  Epopd(3,2);
  Tpop();
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Ccall(_stratego_h_13);
  Epopd(2,2);
  Return();
  v_6 :
  goto u_6;
  a_26 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(y_4);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_h_13);
  Epopd(2,1);
  AllBuild();
  Return();
  u_6 :
  Epopd(1,5);
  Return();
  t_6 :
  Return();
  s_6 :
  Return();
  q_6 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_k_13)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("tsubstitute-test1"));
  Ccall(_stratego_q_13);
  Tpop();
  Cpush(x_8);
  Tdupl();
  Cpush(z_8);
  Epushd(1,1);
  Tset(App2("TCons",App2("Cons",App2("TCons",ATmakeString("x"),App2("TCons",App1("Var",ATmakeString("a")),App0("TNil"))),App2("Cons",App2("TCons",ATmakeString("y"),App2("TCons",App2("Op",ATmakeString("Add"),App2("Cons",App1("Var",ATmakeString("y")),App2("Cons",App1("Var",ATmakeString("z")),App0("Nil")))),App0("TNil"))),App0("Nil"))),App2("TCons",App2("Op",ATmakeString("BinExp"),App2("Cons",App1("Var",ATmakeString("x")),App2("Cons",App1("Str",ATmakeString("*")),App2("Cons",App1("Var",ATmakeString("y")),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_j_13);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto y_8;
  z_8 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_q_13);
  Ccall(_stratego_p_13);
  goto a_9;
  y_8 :
  Cpop();
  a_9 :
  Tset(App2("Op",ATmakeString("BinExp"),App2("Cons",App1("Var",ATmakeString("a")),App2("Cons",App1("Str",ATmakeString("*")),App2("Cons",App2("Op",ATmakeString("Add"),App2("Cons",App1("Var",ATmakeString("y")),App2("Cons",App1("Var",ATmakeString("z")),App0("Nil")))),App0("Nil"))))));
  Tdupl();
  Tset(App2("Op",ATmakeString("BinExp"),App2("Cons",App1("Var",ATmakeString("a")),App2("Cons",App1("Str",ATmakeString("*")),App2("Cons",App2("Op",ATmakeString("Add"),App2("Cons",App1("Var",ATmakeString("y")),App2("Cons",App1("Var",ATmakeString("z")),App0("Nil")))),App0("Nil"))))));
  MoveTop(0,2);
  Tpop();
  Cpush(c_9);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto b_9;
  c_9 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_14);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_14);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_p_13);
  goto f_9;
  b_9 :
  Cpop();
  f_9 :
  Tpop();
  Ccall(_stratego_t_13);
  goto w_8;
  x_8 :
  Ccall(_stratego_r_13);
  goto g_9;
  w_8 :
  Cpop();
  g_9 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_l_13)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("tvars-test2"));
  Ccall(_stratego_q_13);
  Tpop();
  Cpush(i_9);
  Tdupl();
  Cpush(k_9);
  Epushd(1,1);
  Tset(App1("Real",(ATerm)ATmakeReal(1.10)));
  Ccall(_stratego_o_13);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto j_9;
  k_9 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_q_13);
  Ccall(_stratego_p_13);
  goto l_9;
  j_9 :
  Cpop();
  l_9 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(0,2);
  Tpop();
  Cpush(n_9);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto m_9;
  n_9 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_14);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_14);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_p_13);
  goto o_9;
  m_9 :
  Cpop();
  o_9 :
  Tpop();
  Ccall(_stratego_t_13);
  goto h_9;
  i_9 :
  Ccall(_stratego_r_13);
  goto p_9;
  h_9 :
  Cpop();
  p_9 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_m_13)
  Epushd(0,6);
  MoveTop(0,2);
  goto j_34;
  j_34 :
  TestFunFC(l_4,&&t_9,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(s_9);
  goto h_34;
  t_9 :
  TestFunFC(u_9,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto k_34;
  k_34 :
  TestFunFC(v_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(s_9);
  goto i_34;
  s_9 :
  goto r_9;
  i_34 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_o_13);
  Return();
  r_9 :
  goto q_9;
  h_34 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  q_9 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_n_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_34;
  x_34 :
  TestFunFC(p_1,&&fail,Egetd(0,1));
  Rpush(y_9);
  goto w_34;
  y_9 :
  goto w_9;
  w_34 :
  Return();
  w_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_13)
  Rpush(z_9);
  h_40 :
  Cpush(d_10);
  Epushd(0,2);
  MoveTop(0,1);
  goto a_35;
  a_35 :
  TestFunFC(y_4,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(f_10);
  goto z_34;
  f_10 :
  goto e_10;
  z_34 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  e_10 :
  Epopd(0,2);
  goto a_10;
  d_10 :
  Ccontinue(g_10);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_m_13);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(l_4);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,7);
  MoveTop(1,1);
  Rpush(h_10);
  goto h_40;
  h_10 :
  MoveTop(1,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  MoveTop(1,3);
  goto k_35;
  k_35 :
  TestFunFC(j_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto l_35;
  l_35 :
  TestFunFC(j_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto m_35;
  m_35 :
  TestFunFC(k_0,&&fail,Egetd(1,7));
  Rpush(j_10);
  goto f_35;
  j_10 :
  goto i_10;
  f_35 :
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(l_10);
  i_40 :
  Cpush(n_10);
  Ccall(_stratego_n_13);
  goto m_10;
  n_10 :
  Ccontinue(o_10);
  Epushd(2,3);
  MoveTop(2,1);
  goto j_35;
  j_35 :
  TestFunFC(i_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(s_10);
  goto g_35;
  s_10 :
  goto r_10;
  g_35 :
  Tdupl();
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(t_10);
  j_40 :
  Cpush(v_10);
  Epushd(3,3);
  MoveTop(3,1);
  goto i_35;
  i_35 :
  TestFunFC(i_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(x_10);
  goto h_35;
  x_10 :
  goto w_10;
  h_35 :
  Move(2,2,3,2);
  Return();
  w_10 :
  Epopd(3,3);
  goto u_10;
  v_10 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_11);
  goto j_40;
  a_11 :
  AllBuild();
  goto z_10;
  u_10 :
  Cpop();
  z_10 :
  Return();
  t_10 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(b_11);
  goto i_40;
  b_11 :
  Return();
  r_10 :
  Epopd(2,3);
  goto m_10;
  o_10 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_11);
  goto i_40;
  d_11 :
  AllBuild();
  goto c_11;
  m_10 :
  Cpop();
  c_11 :
  Return();
  l_10 :
  Return();
  i_10 :
  Epopd(1,7);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto p_35;
  p_35 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_35;
  q_35 :
  TestFunFC(j_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto r_35;
  r_35 :
  TestFunFC(k_0,&&fail,Egetd(1,5));
  Rpush(f_11);
  goto o_35;
  f_11 :
  goto e_11;
  o_35 :
  Move(0,3,1,4);
  Return();
  e_11 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(g_11);
  k_40 :
  Cpush(i_11);
  Ccall(_stratego_n_13);
  Tset(App0("Nil"));
  goto h_11;
  i_11 :
  Epushd(1,3);
  MoveTop(1,1);
  goto d_36;
  d_36 :
  TestFunFC(i_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(l_11);
  goto s_35;
  l_11 :
  goto k_11;
  s_35 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(m_11);
  goto k_40;
  m_11 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto a_36;
  a_36 :
  TestFunFC(j_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto b_36;
  b_36 :
  TestFunFC(j_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto c_36;
  c_36 :
  TestFunFC(k_0,&&fail,Egetd(2,6));
  Rpush(o_11);
  goto v_35;
  o_11 :
  goto n_11;
  v_35 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(w_11);
  l_40 :
  Cpush(a_12);
  Ccall(_stratego_n_13);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto z_11;
  a_12 :
  Ccontinue(b_12);
  Epushd(3,3);
  MoveTop(3,1);
  goto z_35;
  z_35 :
  TestFunFC(i_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(d_12);
  goto w_35;
  d_12 :
  goto c_12;
  w_35 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(f_12);
  m_40 :
  Cpush(h_12);
  Epushd(4,3);
  MoveTop(4,1);
  goto y_35;
  y_35 :
  TestFunFC(i_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(j_12);
  goto x_35;
  j_12 :
  goto i_12;
  x_35 :
  Move(3,2,4,2);
  Return();
  i_12 :
  Epopd(4,3);
  goto g_12;
  h_12 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_12);
  goto m_40;
  l_12 :
  AllBuild();
  goto k_12;
  g_12 :
  Cpop();
  k_12 :
  Return();
  f_12 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(m_12);
  goto l_40;
  m_12 :
  Return();
  c_12 :
  Epopd(3,3);
  goto z_11;
  b_12 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_12);
  goto l_40;
  o_12 :
  AllBuild();
  goto n_12;
  z_11 :
  Cpop();
  n_12 :
  Return();
  w_11 :
  Return();
  n_11 :
  Epopd(2,6);
  Return();
  k_11 :
  Epopd(1,3);
  goto j_11;
  h_11 :
  Cpop();
  j_11 :
  Return();
  g_11 :
  Epopd(0,3);
  goto a_10;
  g_10 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto g_36;
  g_36 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_36;
  h_36 :
  TestFunFC(j_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto i_36;
  i_36 :
  TestFunFC(k_0,&&fail,Egetd(1,5));
  Rpush(r_12);
  goto f_36;
  r_12 :
  goto q_12;
  f_36 :
  Move(0,2,1,4);
  Return();
  q_12 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(s_12);
  n_40 :
  Cpush(u_12);
  Ccall(_stratego_n_13);
  Tset(App0("Nil"));
  goto t_12;
  u_12 :
  Epushd(1,3);
  MoveTop(1,1);
  goto u_36;
  u_36 :
  TestFunFC(i_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(y_12);
  goto j_36;
  y_12 :
  goto x_12;
  j_36 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(i_14);
  goto h_40;
  i_14 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(j_14);
  goto n_40;
  j_14 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto r_36;
  r_36 :
  TestFunFC(j_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_36;
  s_36 :
  TestFunFC(j_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto t_36;
  t_36 :
  TestFunFC(k_0,&&fail,Egetd(2,7));
  Rpush(l_14);
  goto m_36;
  l_14 :
  goto k_14;
  m_36 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(r_14);
  o_40 :
  Cpush(u_14);
  Ccall(_stratego_n_13);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto s_14;
  u_14 :
  Ccontinue(v_14);
  Epushd(3,3);
  MoveTop(3,1);
  goto q_36;
  q_36 :
  TestFunFC(i_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(x_14);
  goto n_36;
  x_14 :
  goto w_14;
  n_36 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(y_14);
  p_40 :
  Cpush(a_15);
  Epushd(4,3);
  MoveTop(4,1);
  goto p_36;
  p_36 :
  TestFunFC(i_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(h_15);
  goto o_36;
  h_15 :
  goto g_15;
  o_36 :
  Move(3,2,4,2);
  Return();
  g_15 :
  Epopd(4,3);
  goto z_14;
  a_15 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_15);
  goto p_40;
  n_15 :
  AllBuild();
  goto m_15;
  z_14 :
  Cpop();
  m_15 :
  Return();
  y_14 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(r_15);
  goto o_40;
  r_15 :
  Return();
  w_14 :
  Epopd(3,3);
  goto s_14;
  v_14 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_15);
  goto o_40;
  u_15 :
  AllBuild();
  goto s_15;
  s_14 :
  Cpop();
  s_15 :
  Return();
  r_14 :
  Return();
  k_14 :
  Epopd(2,7);
  Return();
  x_12 :
  Epopd(1,3);
  goto v_12;
  t_12 :
  Cpop();
  v_12 :
  Return();
  s_12 :
  Epopd(0,2);
  goto p_12;
  a_10 :
  Cpop();
  p_12 :
  Return();
  z_9 :
ENDPROC

PROC(_stratego_p_13)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto s_40;
  s_40 :
  TestFunFC(j_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto t_40;
  t_40 :
  TestFunFC(j_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto u_40;
  u_40 :
  TestFunFC(k_0,&&fail,Egetd(0,6));
  Rpush(d_16);
  goto r_40;
  d_16 :
  goto c_16;
  r_40 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  c_16 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_q_13)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_a_14);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_r_13)
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_s_13);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_x_13);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_s_13)
  _ST_add();
ENDPROC

PROC(_stratego_t_13)
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_s_13);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_13);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_u_13)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("tvars-test1"));
  Ccall(_stratego_q_13);
  Tpop();
  Cpush(g_16);
  Tdupl();
  Cpush(k_16);
  Epushd(1,1);
  Tset(App1("Int",MakeInt(1)));
  Ccall(_stratego_o_13);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto i_16;
  k_16 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_q_13);
  Ccall(_stratego_p_13);
  goto m_16;
  i_16 :
  Cpop();
  m_16 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(0,2);
  Tpop();
  Cpush(o_16);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto n_16;
  o_16 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_14);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_14);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_p_13);
  goto q_16;
  n_16 :
  Cpop();
  q_16 :
  Tpop();
  Ccall(_stratego_t_13);
  goto e_16;
  g_16 :
  Ccall(_stratego_r_13);
  goto w_16;
  e_16 :
  Cpop();
  w_16 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_13)
  _ST_exit();
ENDPROC

PROC(_stratego_w_13)
  Cpush(b_17);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto h_43;
  h_43 :
  TestInt(0,1,0,&&fail);
  Rpush(d_17);
  goto g_43;
  d_17 :
  goto c_17;
  g_43 :
  Return();
  c_17 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_x_13);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_v_13);
  goto a_17;
  b_17 :
  Tset(MakeInt(1));
  Ccall(_stratego_v_13);
  goto e_17;
  a_17 :
  Cpop();
  e_17 :
ENDPROC

PROC(_stratego_x_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_43;
  k_43 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  Rpush(v_17);
  goto j_43;
  v_17 :
  goto t_17;
  j_43 :
  Return();
  t_17 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_13)
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_14);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_14);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_x_13);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_z_13)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_a_14)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("stratlib-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_14);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_z_13);
  Ccall(_stratego_u_13);
  Ccall(_stratego_l_13);
  Ccall(_stratego_k_13);
  Ccall(_stratego_d_13);
  Ccall(_stratego_y_13);
  Ccall(_stratego_w_13);
ENDPROC

DOIT

