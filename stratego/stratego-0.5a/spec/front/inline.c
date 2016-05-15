#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,a_39);
VARDECL(AFun,g_38);
VARDECL(AFun,u_36);
VARDECL(AFun,c_35);
VARDECL(AFun,s_33);
VARDECL(AFun,w_31);
VARDECL(AFun,g_31);
VARDECL(AFun,j_30);
VARDECL(AFun,b_20);
VARDECL(AFun,a_20);
VARDECL(AFun,z_18);
VARDECL(AFun,m_18);
VARDECL(AFun,x_8);
VARDECL(AFun,w_8);
VARDECL(AFun,m_6);
VARDECL(AFun,k_6);
VARDECL(AFun,b_2);
VARDECL(AFun,z_1);
VARDECL(AFun,y_1);
VARDECL(AFun,y_0);
VARDECL(AFun,x_0);
VARDECL(AFun,m_0);
VARDECL(AFun,l_0);
VARDECL(AFun,f_0);
VARDECL(AFun,d_0);
PROCDECL(_stratego_e_11);
PROCDECL(_stratego_f_11);
PROCDECL(_stratego_g_11);
PROCDECL(_stratego_h_11);
PROCDECL(_stratego_i_11);
PROCDECL(_stratego_j_11);
PROCDECL(_stratego_k_11);
PROCDECL(_stratego_l_11);
PROCDECL(_stratego_m_11);
PROCDECL(_stratego_n_11);
PROCDECL(_stratego_o_11);
PROCDECL(_stratego_p_11);
PROCDECL(_stratego_q_11);
PROCDECL(_stratego_r_11);
PROCDECL(_stratego_s_11);
PROCDECL(_stratego_t_11);
PROCDECL(_stratego_u_11);
PROCDECL(_stratego_v_11);
PROCDECL(_stratego_w_11);
PROCDECL(_stratego_x_11);
PROCDECL(_stratego_y_11);
PROCDECL(_stratego_z_11);
PROCDECL(_stratego_a_12);
PROCDECL(_stratego_b_12);
PROCDECL(_stratego_c_12);
PROCDECL(_stratego_d_12);
PROCDECL(_stratego_e_12);
PROCDECL(_stratego_f_12);
PROCDECL(_stratego_g_12);
PROCDECL(_stratego_h_12);
PROCDECL(_stratego_i_12);
PROCDECL(_stratego_j_12);
PROCDECL(_stratego_k_12);
PROCDECL(_stratego_l_12);
PROCDECL(_stratego_m_12);
PROCDECL(_stratego_n_12);
PROCDECL(_stratego_o_12);
PROCDECL(_stratego_p_12);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(a_39,ATmakeAFun("Undefined",1,0));
  MOVE(g_38,ATmakeAFun("Help",0,0));
  MOVE(u_36,ATmakeAFun("Input",1,0));
  MOVE(c_35,ATmakeAFun("Binary",0,0));
  MOVE(s_33,ATmakeAFun("Output",1,0));
  MOVE(w_31,ATmakeAFun("Program",1,0));
  MOVE(g_31,ATmakeAFun("Runtime",1,0));
  MOVE(j_30,ATmakeAFun("Silent",0,0));
  MOVE(b_20,ATmakeAFun("Match",1,0));
  MOVE(a_20,ATmakeAFun("Seq",2,0));
  MOVE(z_18,ATmakeAFun("Id",0,0));
  MOVE(m_18,ATmakeAFun("Fail",0,0));
  MOVE(x_8,ATmakeAFun("Rule",3,0));
  MOVE(w_8,ATmakeAFun("LRule",1,0));
  MOVE(m_6,ATmakeAFun("Scope",2,0));
  MOVE(k_6,ATmakeAFun("Var",1,0));
  MOVE(b_2,ATmakeAFun("Rec",2,0));
  MOVE(z_1,ATmakeAFun("SDef",3,0));
  MOVE(y_1,ATmakeAFun("Let",2,0));
  MOVE(y_0,ATmakeAFun("SVar",1,0));
  MOVE(x_0,ATmakeAFun("Call",2,0));
  MOVE(m_0,ATmakeAFun("Cons",2,0));
  MOVE(l_0,ATmakeAFun("Nil",0,0));
  MOVE(f_0,ATmakeAFun("TNil",0,0));
  MOVE(d_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_e_11)
  Epushd(0,7);
  MoveTop(0,1);
  goto z_12;
  z_12 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_13;
  a_13 :
  TestFunFC(d_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto b_13;
  b_13 :
  TestFunFC(f_0,&&e_0,Egetd(0,5));
  Rpush(c_0);
  goto e_2;
  e_0 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto c_13;
  c_13 :
  TestFunFC(f_0,&&fail,Egetd(0,7));
  Rpush(c_0);
  goto f_2;
  c_0 :
  goto b_0;
  f_2 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(g_0);
  n_14 :
  Epushd(2,9);
  MoveTop(2,1);
  goto q_12;
  q_12 :
  TestFunFC(d_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto r_12;
  r_12 :
  TestFunFC(l_0,&&k_0,Egetd(2,2));
  goto s_12;
  s_12 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto t_12;
  t_12 :
  TestFunFC(l_0,&&fail,Egetd(2,6));
  goto u_12;
  u_12 :
  TestFunFC(f_0,&&fail,Egetd(2,9));
  Rpush(j_0);
  goto u_5;
  k_0 :
  TestFunFC(m_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto v_12;
  v_12 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto w_12;
  w_12 :
  TestFunFC(m_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto x_12;
  x_12 :
  TestFunFC(f_0,&&fail,Egetd(2,9));
  Rpush(j_0);
  goto v_5;
  j_0 :
  goto i_0;
  v_5 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(o_0);
  goto n_14;
  o_0 :
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto i_6;
  i_6 :
  TestFunFC(d_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto v_10;
  v_10 :
  TestFunFC(d_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_10;
  w_10 :
  TestFunFC(f_0,&&fail,Egetd(3,5));
  Rpush(p_0);
  goto h_6;
  p_0 :
  goto n_0;
  h_6 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  n_0 :
  Epopd(3,5);
  Return();
  i_0 :
  goto h_0;
  u_5 :
  Tset(App0("Nil"));
  Return();
  h_0 :
  Epopd(2,9);
  Return();
  g_0 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  b_0 :
  goto a_0;
  e_2 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  a_0 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_f_11)
  Epushd(0,5);
  Ccall(_stratego_e_11);
  MoveTop(0,1);
  goto w_14;
  w_14 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto x_14;
  x_14 :
  TestFunFC(d_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto y_14;
  y_14 :
  TestFunFC(f_0,&&fail,Egetd(0,5));
  Rpush(r_0);
  goto o_14;
  r_0 :
  goto q_0;
  o_14 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(s_0);
  v_15 :
  Cpush(u_0);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,4);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto t_14;
  t_14 :
  TestFunFC(x_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto u_14;
  u_14 :
  TestFunFC(y_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto v_14;
  v_14 :
  TestFunFC(l_0,&&fail,Egetd(2,4));
  Rpush(w_0);
  goto q_14;
  w_0 :
  goto v_0;
  q_14 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Move(1,2,2,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  v_0 :
  Epopd(2,4);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_m_11);
  Epopd(1,3);
  goto t_0;
  u_0 :
  AllInit();
  a_1 :
  AllNextSon(&&b_1);
  Rpush(c_1);
  goto v_15;
  c_1 :
  goto a_1;
  b_1 :
  AllBuild();
  goto z_0;
  t_0 :
  Cpop();
  z_0 :
  Return();
  s_0 :
  Return();
  q_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_g_11)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(d_1);
  w_21 :
  Rpush(e_1);
  x_21 :
  Epushd(1,5);
  MoveTop(1,1);
  goto t_17;
  t_17 :
  TestFunFC(d_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto u_17;
  u_17 :
  TestFunFC(d_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto v_17;
  v_17 :
  TestFunFC(f_0,&&fail,Egetd(1,5));
  Cpush(k_1);
  Rpush(l_1);
  goto x_15;
  l_1 :
  goto j_1;
  k_1 :
  Ccontinue(m_1);
  Rpush(n_1);
  goto y_15;
  n_1 :
  goto j_1;
  m_1 :
  Rpush(p_1);
  goto z_15;
  p_1 :
  goto o_1;
  j_1 :
  Cpop();
  o_1 :
  goto i_1;
  i_1 :
  goto h_1;
  z_15 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  q_1 :
  AllNextSon(&&r_1);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(s_1);
  goto x_21;
  s_1 :
  Epopd(2,1);
  goto q_1;
  r_1 :
  AllBuild();
  Return();
  h_1 :
  goto g_1;
  y_15 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,15);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,5);
  goto g_16;
  g_16 :
  TestFunFC(y_1,&&x_1,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto h_16;
  h_16 :
  TestFunFC(z_1,&&fail,Egetd(3,6));
  MoveArg(3,1,3,6,0);
  MoveArg(3,2,3,6,1);
  MoveArg(3,3,3,6,2);
  Rpush(w_1);
  goto d_16;
  x_1 :
  TestFunFC(z_1,&&a_2,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  MoveArg(3,4,3,5,2);
  Rpush(w_1);
  goto e_16;
  a_2 :
  TestFunFC(b_2,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(w_1);
  goto f_16;
  w_1 :
  goto v_1;
  f_16 :
  NotNULLd(3,6);
  Tset(App2("Cons",Egetd(3,6),App0("Nil")));
  Return();
  v_1 :
  goto u_1;
  e_16 :
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  Return();
  u_1 :
  goto t_1;
  d_16 :
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Return();
  t_1 :
  MoveTop(3,8);
  Move(2,1,3,8);
  Rpush(c_2);
  y_21 :
  Cpush(g_2);
  Ccall(_stratego_o_12);
  goto d_2;
  g_2 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_11);
  OneNextSon();
  Rpush(i_2);
  goto y_21;
  i_2 :
  AllBuild();
  goto h_2;
  d_2 :
  Cpop();
  h_2 :
  Return();
  c_2 :
  MoveTop(3,9);
  Move(2,2,3,9);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(j_2);
  z_21 :
  Epushd(4,9);
  MoveTop(4,1);
  goto q_16;
  q_16 :
  TestFunFC(d_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto r_16;
  r_16 :
  TestFunFC(l_0,&&n_2,Egetd(4,2));
  goto s_16;
  s_16 :
  TestFunFC(d_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto t_16;
  t_16 :
  TestFunFC(l_0,&&fail,Egetd(4,6));
  goto u_16;
  u_16 :
  TestFunFC(f_0,&&fail,Egetd(4,9));
  Rpush(m_2);
  goto k_16;
  n_2 :
  TestFunFC(m_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto v_16;
  v_16 :
  TestFunFC(d_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto w_16;
  w_16 :
  TestFunFC(m_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto x_16;
  x_16 :
  TestFunFC(f_0,&&fail,Egetd(4,9));
  Rpush(m_2);
  goto l_16;
  m_2 :
  goto l_2;
  l_16 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(p_2);
  goto z_21;
  p_2 :
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto n_16;
  n_16 :
  TestFunFC(d_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto o_16;
  o_16 :
  TestFunFC(d_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto p_16;
  p_16 :
  TestFunFC(f_0,&&fail,Egetd(5,5));
  Rpush(q_2);
  goto m_16;
  q_2 :
  goto o_2;
  m_16 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  o_2 :
  Epopd(5,5);
  Return();
  l_2 :
  goto k_2;
  k_16 :
  Tset(App0("Nil"));
  Return();
  k_2 :
  Epopd(4,9);
  Return();
  j_2 :
  MoveTop(3,10);
  NotNULLd(3,10);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,10),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,11);
  goto b_17;
  b_17 :
  TestFunFC(d_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto c_17;
  c_17 :
  TestFunFC(d_0,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto d_17;
  d_17 :
  TestFunFC(f_0,&&fail,Egetd(3,15));
  Rpush(s_2);
  goto z_16;
  s_2 :
  goto r_2;
  z_16 :
  Epushd(4,1);
  NotNULLd(3,12);
  Tset(Egetd(3,12));
  Rpush(t_2);
  a_22 :
  Cpush(v_2);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_2);
  goto a_22;
  w_2 :
  AllBuild();
  goto u_2;
  v_2 :
  Ccall(_stratego_o_12);
  NotNULLd(3,14);
  Tset(Egetd(3,14));
  goto x_2;
  u_2 :
  Cpop();
  x_2 :
  Return();
  t_2 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  r_2 :
  Epopd(3,15);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(z_2);
  TestFunTop(y_1);
  TravInit();
  OneNextSon();
  TestFunTop(z_1);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto f_17;
  f_17 :
  TestFunFC(m_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(b_3);
  goto e_17;
  b_3 :
  goto a_3;
  e_17 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  a_3 :
  Epopd(3,3);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  goto y_2;
  z_2 :
  Ccontinue(c_3);
  TestFunTop(z_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto y_2;
  c_3 :
  TestFunTop(b_2);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto h_17;
  h_17 :
  TestFunFC(m_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(f_3);
  goto g_17;
  f_3 :
  goto e_3;
  g_17 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  e_3 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  goto d_3;
  y_2 :
  Cpop();
  d_3 :
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto o_17;
  o_17 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto p_17;
  p_17 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto q_17;
  q_17 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto r_17;
  r_17 :
  TestFunFC(f_0,&&fail,Egetd(2,11));
  Rpush(h_3);
  goto j_17;
  h_3 :
  goto g_3;
  j_17 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Cpush(j_3);
  TestFunTop(y_1);
  TravInit();
  OneNextSon();
  TestFunTop(z_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,8),App0("TNil"))));
  Rpush(k_3);
  goto w_21;
  k_3 :
  Epopd(3,1);
  AllBuild();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(l_3);
  goto w_21;
  l_3 :
  Epopd(3,1);
  AllBuild();
  goto i_3;
  j_3 :
  Ccontinue(m_3);
  TestFunTop(z_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(n_3);
  goto w_21;
  n_3 :
  Epopd(3,1);
  AllBuild();
  goto i_3;
  m_3 :
  TestFunTop(b_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(p_3);
  goto w_21;
  p_3 :
  Epopd(3,1);
  AllBuild();
  goto o_3;
  i_3 :
  Cpop();
  o_3 :
  Return();
  g_3 :
  Epopd(2,11);
  Return();
  g_1 :
  goto f_1;
  x_15 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_m_11);
  Epopd(2,1);
  AllBuild();
  Return();
  f_1 :
  Epopd(1,5);
  Return();
  e_1 :
  Return();
  d_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_11)
  Epushd(0,7);
  MoveTop(0,1);
  goto d_23;
  d_23 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto e_23;
  e_23 :
  TestFunFC(d_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto f_23;
  f_23 :
  TestFunFC(d_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto g_23;
  g_23 :
  TestFunFC(f_0,&&fail,Egetd(0,6));
  Rpush(r_3);
  goto b_22;
  r_3 :
  goto q_3;
  b_22 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto d_22;
  d_22 :
  TestFunFC(d_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto e_22;
  e_22 :
  TestFunFC(d_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto f_22;
  f_22 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  Rpush(t_3);
  goto c_22;
  t_3 :
  goto s_3;
  c_22 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  s_3 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto h_22;
  h_22 :
  TestFunFC(d_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto i_22;
  i_22 :
  TestFunFC(d_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto j_22;
  j_22 :
  TestFunFC(f_0,&&fail,Egetd(2,5));
  Rpush(v_3);
  goto g_22;
  v_3 :
  goto u_3;
  g_22 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  u_3 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(w_3);
  h_25 :
  Epushd(2,9);
  MoveTop(2,1);
  goto q_22;
  q_22 :
  TestFunFC(d_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto r_22;
  r_22 :
  TestFunFC(l_0,&&a_4,Egetd(2,2));
  goto s_22;
  s_22 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto t_22;
  t_22 :
  TestFunFC(l_0,&&fail,Egetd(2,6));
  goto u_22;
  u_22 :
  TestFunFC(f_0,&&fail,Egetd(2,9));
  Rpush(z_3);
  goto k_22;
  a_4 :
  TestFunFC(m_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto v_22;
  v_22 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto w_22;
  w_22 :
  TestFunFC(m_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto x_22;
  x_22 :
  TestFunFC(f_0,&&fail,Egetd(2,9));
  Rpush(z_3);
  goto l_22;
  z_3 :
  goto y_3;
  l_22 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(c_4);
  goto h_25;
  c_4 :
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto n_22;
  n_22 :
  TestFunFC(d_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto o_22;
  o_22 :
  TestFunFC(d_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto p_22;
  p_22 :
  TestFunFC(f_0,&&fail,Egetd(3,5));
  Rpush(d_4);
  goto m_22;
  d_4 :
  goto b_4;
  m_22 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  b_4 :
  Epopd(3,5);
  Return();
  y_3 :
  goto x_3;
  k_22 :
  Tset(App0("Nil"));
  Return();
  x_3 :
  Epopd(2,9);
  Return();
  w_3 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto a_23;
  a_23 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto b_23;
  b_23 :
  TestFunFC(d_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto c_23;
  c_23 :
  TestFunFC(f_0,&&fail,Egetd(1,9));
  Rpush(f_4);
  goto z_22;
  f_4 :
  goto e_4;
  z_22 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(g_4);
  i_25 :
  Cpush(i_4);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_4);
  goto i_25;
  j_4 :
  AllBuild();
  goto h_4;
  i_4 :
  Ccall(_stratego_o_12);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto k_4;
  h_4 :
  Cpop();
  k_4 :
  Return();
  g_4 :
  Return();
  e_4 :
  Epopd(1,9);
  Return();
  q_3 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_i_11)
  Epushd(0,5);
  MoveTop(0,5);
  goto e_26;
  e_26 :
  TestFunFC(d_0,&&o_4,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto f_26;
  f_26 :
  TestFunFC(d_0,&&p_4,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto g_26;
  g_26 :
  TestFunFC(f_0,&&q_4,Egetd(0,4));
  Cpush(s_4);
  Rpush(t_4);
  goto j_25;
  t_4 :
  goto r_4;
  s_4 :
  Rpush(v_4);
  goto k_25;
  v_4 :
  goto u_4;
  r_4 :
  Cpop();
  u_4 :
  goto n_4;
  q_4 :
  Rpush(n_4);
  goto k_25;
  p_4 :
  Rpush(n_4);
  goto k_25;
  o_4 :
  Rpush(n_4);
  goto k_25;
  n_4 :
  goto m_4;
  k_25 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(w_4);
  c_28 :
  Cpush(y_4);
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Cpush(a_5);
  Epushd(1,7);
  MoveTop(1,1);
  goto q_25;
  q_25 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto r_25;
  r_25 :
  TestFunFC(d_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto s_25;
  s_25 :
  TestFunFC(d_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto t_25;
  t_25 :
  TestFunFC(f_0,&&fail,Egetd(1,6));
  Rpush(c_5);
  goto p_25;
  c_5 :
  goto b_5;
  p_25 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  b_5 :
  Epopd(1,7);
  goto z_4;
  a_5 :
  Ccall(_stratego_h_11);
  goto d_5;
  z_4 :
  Cpop();
  d_5 :
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  goto x_4;
  y_4 :
  Epushd(1,7);
  MoveTop(1,1);
  goto v_25;
  v_25 :
  TestFunFC(d_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_25;
  w_25 :
  TestFunFC(d_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto c_26;
  c_26 :
  TestFunFC(m_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto d_26;
  d_26 :
  TestFunFC(f_0,&&fail,Egetd(1,7));
  Rpush(g_5);
  goto u_25;
  g_5 :
  goto f_5;
  u_25 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  f_5 :
  Epopd(1,7);
  goto e_5;
  x_4 :
  Cpop();
  e_5 :
  Cpush(i_5);
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_12);
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  goto h_5;
  i_5 :
  Rpush(k_5);
  goto c_28;
  k_5 :
  goto j_5;
  h_5 :
  Cpop();
  j_5 :
  Return();
  w_4 :
  Return();
  m_4 :
  goto l_4;
  j_25 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(l_5);
  a_28 :
  Cpush(n_5);
  Ccall(_stratego_o_12);
  goto m_5;
  n_5 :
  Ccontinue(o_5);
  Epushd(1,3);
  MoveTop(1,1);
  goto o_25;
  o_25 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(q_5);
  goto l_25;
  q_5 :
  goto p_5;
  l_25 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(r_5);
  b_28 :
  Cpush(t_5);
  Epushd(2,3);
  MoveTop(2,1);
  goto n_25;
  n_25 :
  TestFunFC(m_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(x_5);
  goto m_25;
  x_5 :
  goto w_5;
  m_25 :
  Move(1,2,2,2);
  Return();
  w_5 :
  Epopd(2,3);
  goto s_5;
  t_5 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_5);
  goto b_28;
  z_5 :
  AllBuild();
  goto y_5;
  s_5 :
  Cpop();
  y_5 :
  Return();
  r_5 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(a_6);
  goto a_28;
  a_6 :
  Return();
  p_5 :
  Epopd(1,3);
  goto m_5;
  o_5 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_6);
  goto a_28;
  c_6 :
  AllBuild();
  goto b_6;
  m_5 :
  Cpop();
  b_6 :
  Return();
  l_5 :
  Return();
  l_4 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_11)
  Rpush(d_6);
  z_32 :
  Cpush(f_6);
  Epushd(0,2);
  MoveTop(0,1);
  goto e_28;
  e_28 :
  TestFunFC(k_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(j_6);
  goto d_28;
  j_6 :
  goto g_6;
  d_28 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  g_6 :
  Epopd(0,2);
  goto e_6;
  f_6 :
  Ccontinue(l_6);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_k_11);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(m_6);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(n_6);
  goto z_32;
  n_6 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_i_11);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto l_28;
  l_28 :
  TestFunFC(d_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_28;
  m_28 :
  TestFunFC(d_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto n_28;
  n_28 :
  TestFunFC(f_0,&&fail,Egetd(1,5));
  Rpush(p_6);
  goto k_28;
  p_6 :
  goto o_6;
  k_28 :
  Move(0,3,1,4);
  Return();
  o_6 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_6);
  a_33 :
  Cpush(s_6);
  Ccall(_stratego_o_12);
  Tset(App0("Nil"));
  goto r_6;
  s_6 :
  Epushd(1,3);
  MoveTop(1,1);
  goto z_28;
  z_28 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(v_6);
  goto o_28;
  v_6 :
  goto u_6;
  o_28 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(w_6);
  goto a_33;
  w_6 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto w_28;
  w_28 :
  TestFunFC(d_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto x_28;
  x_28 :
  TestFunFC(d_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto y_28;
  y_28 :
  TestFunFC(f_0,&&fail,Egetd(2,6));
  Rpush(y_6);
  goto r_28;
  y_6 :
  goto x_6;
  r_28 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(z_6);
  b_33 :
  Cpush(b_7);
  Ccall(_stratego_o_12);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto a_7;
  b_7 :
  Ccontinue(c_7);
  Epushd(3,3);
  MoveTop(3,1);
  goto v_28;
  v_28 :
  TestFunFC(m_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(e_7);
  goto s_28;
  e_7 :
  goto d_7;
  s_28 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(f_7);
  c_33 :
  Cpush(h_7);
  Epushd(4,3);
  MoveTop(4,1);
  goto u_28;
  u_28 :
  TestFunFC(m_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(j_7);
  goto t_28;
  j_7 :
  goto i_7;
  t_28 :
  Move(3,2,4,2);
  Return();
  i_7 :
  Epopd(4,3);
  goto g_7;
  h_7 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_7);
  goto c_33;
  l_7 :
  AllBuild();
  goto k_7;
  g_7 :
  Cpop();
  k_7 :
  Return();
  f_7 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(m_7);
  goto b_33;
  m_7 :
  Return();
  d_7 :
  Epopd(3,3);
  goto a_7;
  c_7 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_7);
  goto b_33;
  o_7 :
  AllBuild();
  goto n_7;
  a_7 :
  Cpop();
  n_7 :
  Return();
  z_6 :
  Return();
  x_6 :
  Epopd(2,6);
  Return();
  u_6 :
  Epopd(1,3);
  goto t_6;
  r_6 :
  Cpop();
  t_6 :
  Return();
  q_6 :
  Epopd(0,3);
  goto e_6;
  l_6 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto e_29;
  e_29 :
  TestFunFC(d_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_29;
  f_29 :
  TestFunFC(d_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto j_29;
  j_29 :
  TestFunFC(f_0,&&fail,Egetd(1,5));
  Rpush(r_7);
  goto d_29;
  r_7 :
  goto q_7;
  d_29 :
  Move(0,2,1,4);
  Return();
  q_7 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(s_7);
  d_33 :
  Cpush(u_7);
  Ccall(_stratego_o_12);
  Tset(App0("Nil"));
  goto t_7;
  u_7 :
  Epushd(1,3);
  MoveTop(1,1);
  goto v_29;
  v_29 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(x_7);
  goto k_29;
  x_7 :
  goto w_7;
  k_29 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(y_7);
  goto z_32;
  y_7 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(z_7);
  goto d_33;
  z_7 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto s_29;
  s_29 :
  TestFunFC(d_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto t_29;
  t_29 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto u_29;
  u_29 :
  TestFunFC(f_0,&&fail,Egetd(2,7));
  Rpush(b_8);
  goto n_29;
  b_8 :
  goto a_8;
  n_29 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(c_8);
  e_33 :
  Cpush(e_8);
  Ccall(_stratego_o_12);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto d_8;
  e_8 :
  Ccontinue(f_8);
  Epushd(3,3);
  MoveTop(3,1);
  goto r_29;
  r_29 :
  TestFunFC(m_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(h_8);
  goto o_29;
  h_8 :
  goto g_8;
  o_29 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(i_8);
  f_33 :
  Cpush(k_8);
  Epushd(4,3);
  MoveTop(4,1);
  goto q_29;
  q_29 :
  TestFunFC(m_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(m_8);
  goto p_29;
  m_8 :
  goto l_8;
  p_29 :
  Move(3,2,4,2);
  Return();
  l_8 :
  Epopd(4,3);
  goto j_8;
  k_8 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_8);
  goto f_33;
  o_8 :
  AllBuild();
  goto n_8;
  j_8 :
  Cpop();
  n_8 :
  Return();
  i_8 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(p_8);
  goto e_33;
  p_8 :
  Return();
  g_8 :
  Epopd(3,3);
  goto d_8;
  f_8 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_8);
  goto e_33;
  r_8 :
  AllBuild();
  goto q_8;
  d_8 :
  Cpop();
  q_8 :
  Return();
  c_8 :
  Return();
  a_8 :
  Epopd(2,7);
  Return();
  w_7 :
  Epopd(1,3);
  goto v_7;
  t_7 :
  Cpop();
  v_7 :
  Return();
  s_7 :
  Epopd(0,2);
  goto p_7;
  e_6 :
  Cpop();
  p_7 :
  Return();
  d_6 :
ENDPROC

PROC(_stratego_k_11)
  Epushd(0,6);
  MoveTop(0,2);
  goto i_33;
  i_33 :
  TestFunFC(m_6,&&v_8,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(u_8);
  goto g_33;
  v_8 :
  TestFunFC(w_8,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto j_33;
  j_33 :
  TestFunFC(x_8,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(u_8);
  goto h_33;
  u_8 :
  goto t_8;
  h_33 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_j_11);
  Return();
  t_8 :
  goto s_8;
  g_33 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  s_8 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_l_11)
  _ST_new();
ENDPROC

PROC(_stratego_m_11)
  Rpush(y_8);
  t_34 :
  Epushd(0,11);
  MoveTop(0,5);
  goto x_33;
  x_33 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto y_33;
  y_33 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto z_33;
  z_33 :
  TestFunFC(m_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto a_34;
  a_34 :
  TestFunFC(f_0,&&fail,Egetd(0,11));
  goto b_34;
  b_34 :
  TestFunFC(d_0,&&c_9,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto c_34;
  c_34 :
  TestFunFC(d_0,&&d_9,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto d_34;
  d_34 :
  TestFunFC(f_0,&&e_9,Egetd(0,4));
  Cpush(g_9);
  Rpush(h_9);
  goto v_33;
  h_9 :
  goto f_9;
  g_9 :
  Rpush(j_9);
  goto w_33;
  j_9 :
  goto i_9;
  f_9 :
  Cpop();
  i_9 :
  goto b_9;
  e_9 :
  Rpush(b_9);
  goto w_33;
  d_9 :
  Rpush(b_9);
  goto w_33;
  c_9 :
  Rpush(b_9);
  goto w_33;
  b_9 :
  goto a_9;
  w_33 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(k_9);
  goto t_34;
  k_9 :
  Return();
  a_9 :
  goto z_8;
  v_33 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  z_8 :
  Epopd(0,11);
  Return();
  y_8 :
ENDPROC

PROC(_stratego_n_11)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(l_9);
  b_39 :
  Rpush(m_9);
  c_39 :
  Epushd(1,5);
  MoveTop(1,1);
  goto f_36;
  f_36 :
  TestFunFC(d_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_36;
  g_36 :
  TestFunFC(d_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto h_36;
  h_36 :
  TestFunFC(f_0,&&fail,Egetd(1,5));
  Cpush(s_9);
  Rpush(t_9);
  goto v_34;
  t_9 :
  goto r_9;
  s_9 :
  Ccontinue(u_9);
  Rpush(v_9);
  goto w_34;
  v_9 :
  goto r_9;
  u_9 :
  Rpush(x_9);
  goto x_34;
  x_9 :
  goto w_9;
  r_9 :
  Cpop();
  w_9 :
  goto q_9;
  q_9 :
  goto p_9;
  x_34 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  y_9 :
  AllNextSon(&&z_9);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(a_10);
  goto c_39;
  a_10 :
  Epopd(2,1);
  goto y_9;
  z_9 :
  AllBuild();
  Return();
  p_9 :
  goto o_9;
  w_34 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_k_11);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(b_10);
  d_39 :
  Cpush(d_10);
  Ccall(_stratego_o_12);
  goto c_10;
  d_10 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_11);
  OneNextSon();
  Rpush(f_10);
  goto d_39;
  f_10 :
  AllBuild();
  goto e_10;
  c_10 :
  Cpop();
  e_10 :
  Return();
  b_10 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(g_10);
  e_39 :
  Epushd(4,9);
  MoveTop(4,1);
  goto j_35;
  j_35 :
  TestFunFC(d_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto k_35;
  k_35 :
  TestFunFC(l_0,&&k_10,Egetd(4,2));
  goto l_35;
  l_35 :
  TestFunFC(d_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto m_35;
  m_35 :
  TestFunFC(l_0,&&fail,Egetd(4,6));
  goto n_35;
  n_35 :
  TestFunFC(f_0,&&fail,Egetd(4,9));
  Rpush(j_10);
  goto d_35;
  k_10 :
  TestFunFC(m_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto o_35;
  o_35 :
  TestFunFC(d_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto p_35;
  p_35 :
  TestFunFC(m_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto q_35;
  q_35 :
  TestFunFC(f_0,&&fail,Egetd(4,9));
  Rpush(j_10);
  goto e_35;
  j_10 :
  goto i_10;
  e_35 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(m_10);
  goto e_39;
  m_10 :
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto g_35;
  g_35 :
  TestFunFC(d_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto h_35;
  h_35 :
  TestFunFC(d_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto i_35;
  i_35 :
  TestFunFC(f_0,&&fail,Egetd(5,5));
  Rpush(n_10);
  goto f_35;
  n_10 :
  goto l_10;
  f_35 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  l_10 :
  Epopd(5,5);
  Return();
  i_10 :
  goto h_10;
  d_35 :
  Tset(App0("Nil"));
  Return();
  h_10 :
  Epopd(4,9);
  Return();
  g_10 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto u_35;
  u_35 :
  TestFunFC(d_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto v_35;
  v_35 :
  TestFunFC(d_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto w_35;
  w_35 :
  TestFunFC(f_0,&&fail,Egetd(3,8));
  Rpush(p_10);
  goto s_35;
  p_10 :
  goto o_10;
  s_35 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(q_10);
  f_39 :
  Cpush(s_10);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_10);
  goto f_39;
  t_10 :
  AllBuild();
  goto r_10;
  s_10 :
  Ccall(_stratego_o_12);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto u_10;
  r_10 :
  Cpop();
  u_10 :
  Return();
  q_10 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  o_10 :
  Epopd(3,8);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(m_6);
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
  goto a_36;
  a_36 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto b_36;
  b_36 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto c_36;
  c_36 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto d_36;
  d_36 :
  TestFunFC(f_0,&&fail,Egetd(2,11));
  Rpush(y_10);
  goto y_35;
  y_10 :
  goto x_10;
  y_35 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  TestFunTop(m_6);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(z_10);
  goto b_39;
  z_10 :
  Epopd(3,1);
  AllBuild();
  Return();
  x_10 :
  Epopd(2,11);
  Return();
  o_9 :
  goto n_9;
  v_34 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(k_6);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_m_11);
  Epopd(2,1);
  AllBuild();
  Return();
  n_9 :
  Epopd(1,5);
  Return();
  m_9 :
  Return();
  l_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_11)
  Ccall(_stratego_n_11);
  Ccall(_stratego_g_11);
ENDPROC

PROC(_stratego_p_11)
  _ST_add();
ENDPROC

PROC(_stratego_q_11)
  Rpush(a_11);
  q_39 :
  Cpush(c_11);
  Ccall(_stratego_o_12);
  Tset(MakeInt(0));
  goto b_11;
  c_11 :
  Epushd(0,3);
  MoveTop(0,1);
  goto i_39;
  i_39 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(k_13);
  goto g_39;
  k_13 :
  goto y_12;
  g_39 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(m_13);
  goto q_39;
  m_13 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_p_11);
  Epopd(1,1);
  Return();
  y_12 :
  Epopd(0,3);
  goto d_11;
  b_11 :
  Cpop();
  d_11 :
  Return();
  a_11 :
ENDPROC

PROC(_stratego_r_11)
  Epushd(0,8);
  MoveTop(0,1);
  goto j_41;
  j_41 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto k_41;
  k_41 :
  TestFunFC(x_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto l_41;
  l_41 :
  TestFunFC(y_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto m_41;
  m_41 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto n_41;
  n_41 :
  TestFunFC(f_0,&&fail,Egetd(0,8));
  Cpush(a_14);
  Rpush(b_14);
  goto r_39;
  b_14 :
  goto q_13;
  a_14 :
  Rpush(d_14);
  goto s_39;
  d_14 :
  goto c_14;
  q_13 :
  Cpop();
  c_14 :
  goto p_13;
  p_13 :
  goto o_13;
  s_39 :
  Epushd(1,1);
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(j_14);
  v_44 :
  Cpush(m_14);
  Epushd(2,9);
  MoveTop(2,1);
  goto d_41;
  d_41 :
  TestFunFC(m_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,9,2,1,1);
  goto e_41;
  e_41 :
  TestFunFC(z_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  MoveArg(2,5,2,2,2);
  goto f_41;
  f_41 :
  TestFunFC(l_0,&&fail,Egetd(2,4));
  goto g_41;
  g_41 :
  TestFunFC(x_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,8,2,5,1);
  goto h_41;
  h_41 :
  TestFunFC(y_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  goto i_41;
  i_41 :
  TestFunFC(l_0,&&fail,Egetd(2,8));
  Rpush(r_14);
  goto c_41;
  r_14 :
  goto p_14;
  c_41 :
  Move(0,4,2,3);
  Move(1,1,2,7);
  Return();
  p_14 :
  Epopd(2,9);
  goto k_14;
  m_14 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_15);
  goto v_44;
  e_15 :
  AllBuild();
  goto s_14;
  k_14 :
  Cpop();
  s_14 :
  Return();
  j_14 :
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset(App2("TCons",App2("Call",App1("SVar",Egetd(1,1)),Egetd(0,5)),App2("TCons",Egetd(0,7),App0("TNil"))));
  Epopd(1,1);
  Return();
  o_13 :
  goto n_13;
  r_39 :
  Epushd(1,11);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Ccall(_stratego_q_11);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Tdupl();
  f_15 :
  TestFunTop(m_0);
  Cpush(h_15);
  Arg(0);
  TestFunTop(z_1);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  Move(0,4,3,1);
  Epopd(3,1);
  OneNextSon();
  Epushd(3,1);
  Tdupl();
  Epushd(4,1);
  Ccall(_stratego_q_11);
  MoveTop(4,1);
  Move(1,1,4,1);
  Epopd(4,1);
  Tpop();
  MoveTop(3,1);
  Move(1,2,3,1);
  Epopd(3,1);
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  Move(1,3,3,1);
  Epopd(3,1);
  AllBuild();
  Tpop();
  Cpop();
  goto m_15;
  h_15 :
  Arg(1);
  Tdrop();
  goto f_15;
  m_15 :
  Tpop();
  Epopd(2,1);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_o_11);
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,7),App0("TNil")))));
  MoveTop(1,5);
  goto y_40;
  y_40 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto z_40;
  z_40 :
  TestFunFC(d_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto a_41;
  a_41 :
  TestFunFC(d_0,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  MoveArg(1,11,1,9,1);
  goto b_41;
  b_41 :
  TestFunFC(f_0,&&fail,Egetd(1,11));
  Rpush(o_15);
  goto z_39;
  o_15 :
  goto n_15;
  z_39 :
  Epushd(2,7);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset(App2("TCons",Egetd(1,6),App2("TCons",Egetd(1,8),App0("TNil"))));
  Rpush(p_15);
  t_44 :
  Epushd(3,9);
  MoveTop(3,1);
  goto k_40;
  k_40 :
  TestFunFC(d_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,5,3,1,1);
  goto l_40;
  l_40 :
  TestFunFC(l_0,&&w_15,Egetd(3,2));
  goto m_40;
  m_40 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,9,3,5,1);
  goto n_40;
  n_40 :
  TestFunFC(l_0,&&fail,Egetd(3,6));
  goto o_40;
  o_40 :
  TestFunFC(f_0,&&fail,Egetd(3,9));
  Rpush(u_15);
  goto a_40;
  w_15 :
  TestFunFC(m_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto p_40;
  p_40 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,9,3,5,1);
  goto q_40;
  q_40 :
  TestFunFC(m_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto r_40;
  r_40 :
  TestFunFC(f_0,&&fail,Egetd(3,9));
  Rpush(u_15);
  goto b_40;
  u_15 :
  goto t_15;
  b_40 :
  Epushd(4,5);
  NotNULLd(3,3);
  NotNULLd(3,7);
  NotNULLd(3,4);
  NotNULLd(3,8);
  Tset(App2("TCons",App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(3,4),App2("TCons",Egetd(3,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Epushd(5,5);
  MoveTop(5,1);
  goto d_40;
  d_40 :
  TestFunFC(d_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto e_40;
  e_40 :
  TestFunFC(d_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto f_40;
  f_40 :
  TestFunFC(f_0,&&fail,Egetd(5,5));
  Rpush(c_16);
  goto c_40;
  c_16 :
  goto b_16;
  c_40 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App3("SDef",Egetd(5,2),App0("Nil"),Egetd(5,4)));
  Return();
  b_16 :
  Epopd(5,5);
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(i_16);
  goto t_44;
  i_16 :
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  MoveTop(4,1);
  goto h_40;
  h_40 :
  TestFunFC(d_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto i_40;
  i_40 :
  TestFunFC(d_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto j_40;
  j_40 :
  TestFunFC(f_0,&&fail,Egetd(4,5));
  Rpush(j_16);
  goto g_40;
  j_16 :
  goto a_16;
  g_40 :
  NotNULLd(4,2);
  NotNULLd(4,4);
  Tset(App2("Cons",Egetd(4,2),Egetd(4,4)));
  Return();
  a_16 :
  Epopd(4,5);
  Return();
  t_15 :
  goto s_15;
  a_40 :
  Tset(App0("Nil"));
  Return();
  s_15 :
  Epopd(3,9);
  Return();
  p_15 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,10);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,10),App0("TNil"))));
  MoveTop(2,2);
  goto u_40;
  u_40 :
  TestFunFC(d_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto v_40;
  v_40 :
  TestFunFC(d_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto w_40;
  w_40 :
  TestFunFC(f_0,&&fail,Egetd(2,6));
  Rpush(a_17);
  goto t_40;
  a_17 :
  goto y_16;
  t_40 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(i_17);
  u_44 :
  Cpush(l_17);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_17);
  goto u_44;
  m_17 :
  AllBuild();
  goto k_17;
  l_17 :
  Ccall(_stratego_o_12);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto n_17;
  k_17 :
  Cpop();
  n_17 :
  Return();
  i_17 :
  Return();
  y_16 :
  MoveTop(2,7);
  NotNULLd(1,4);
  NotNULLd(2,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,7),App0("TNil"))));
  Epopd(2,7);
  Return();
  n_15 :
  Epopd(1,11);
  Return();
  n_13 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_s_11)
  Rpush(s_17);
  k_45 :
  Epushd(0,5);
  Cpush(e_18);
  d_18 :
  Ccall(_stratego_r_11);
  Tduplinv();
  goto d_18;
  e_18 :
  MoveTop(0,1);
  goto y_44;
  y_44 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto z_44;
  z_44 :
  TestFunFC(d_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto a_45;
  a_45 :
  TestFunFC(f_0,&&fail,Egetd(0,5));
  Rpush(g_18);
  goto w_44;
  g_18 :
  goto x_17;
  w_44 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  AllInit();
  h_18 :
  AllNextSon(&&i_18);
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(j_18);
  goto k_45;
  j_18 :
  Epopd(1,1);
  goto h_18;
  i_18 :
  AllBuild();
  Return();
  x_17 :
  Epopd(0,5);
  Return();
  s_17 :
ENDPROC

PROC(_stratego_t_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_45;
  n_45 :
  TestFunFC(m_18,&&fail,Egetd(0,1));
  Rpush(l_18);
  goto m_45;
  l_18 :
  goto k_18;
  m_45 :
  Return();
  k_18 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_45;
  q_45 :
  TestFunFC(z_18,&&fail,Egetd(0,1));
  Rpush(y_18);
  goto p_45;
  y_18 :
  goto x_18;
  p_45 :
  Return();
  x_18 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_11)
  Rpush(a_19);
  n_46 :
  Cpush(c_19);
  Ccall(_stratego_u_11);
  goto b_19;
  c_19 :
  Ccontinue(d_19);
  Ccall(_stratego_t_11);
  goto b_19;
  d_19 :
  Epushd(0,11);
  MoveTop(0,4);
  goto v_45;
  v_45 :
  TestFunFC(m_6,&&u_19,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,11,0,4,1);
  goto w_45;
  w_45 :
  TestFunFC(a_20,&&fail,Egetd(0,11));
  MoveArg(0,1,0,11,0);
  MoveArg(0,3,0,11,1);
  goto y_45;
  y_45 :
  TestFunFC(b_20,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(t_19);
  goto t_45;
  u_19 :
  TestFunFC(a_20,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,11,0,4,1);
  goto z_45;
  z_45 :
  TestFunFC(b_20,&&d_20,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(t_19);
  goto s_45;
  d_20 :
  TestFunFC(m_6,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto a_46;
  a_46 :
  TestFunFC(a_20,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,10,0,7,1);
  goto b_46;
  b_46 :
  TestFunFC(b_20,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  Rpush(t_19);
  goto u_45;
  t_19 :
  goto s_19;
  u_45 :
  Return();
  s_19 :
  goto r_19;
  t_45 :
  Return();
  r_19 :
  goto f_19;
  s_45 :
  Return();
  f_19 :
  Epopd(0,11);
  goto e_19;
  b_19 :
  Cpop();
  e_19 :
  Return();
  a_19 :
ENDPROC

PROC(_stratego_w_11)
  Cpush(k_20);
  Epushd(0,6);
  MoveTop(0,1);
  goto p_46;
  p_46 :
  TestFunFC(z_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,6,0,1,2);
  goto q_46;
  q_46 :
  TestFunFC(m_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(m_20);
  goto o_46;
  m_20 :
  goto l_20;
  o_46 :
  Return();
  l_20 :
  Epopd(0,6);
  goto j_20;
  k_20 :
  TestFunTop(z_1);
  TravInit();
  OneNextSon();
  Cpush(s_20);
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  goto s_46;
  s_46 :
  TestStr(0,1,"main",&&fail);
  Rpush(x_20);
  goto r_46;
  x_20 :
  goto w_20;
  r_46 :
  Return();
  w_20 :
  Epopd(0,1);
  Cpop();
  Crestore();
  Cjump();
  s_20 :
  OneNextSon();
  Ccall(_stratego_o_12);
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  goto r_20;
  j_20 :
  Cpop();
  r_20 :
ENDPROC

PROC(_stratego_x_11)
  Epushd(0,3);
  MoveTop(0,1);
  Rpush(z_20);
  x_47 :
  Cpush(i_21);
  Ccall(_stratego_o_12);
  goto h_21;
  i_21 :
  Ccontinue(j_21);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Cpush(l_21);
  Tdupl();
  Ccall(_stratego_w_11);
  Cpop();
  Crestore();
  Cjump();
  l_21 :
  OneNextSon();
  Rpush(n_21);
  goto x_47;
  n_21 :
  AllBuild();
  goto h_21;
  j_21 :
  Epushd(1,3);
  MoveTop(1,1);
  goto c_47;
  c_47 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(s_21);
  goto b_47;
  s_21 :
  goto r_21;
  b_47 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(t_21);
  goto x_47;
  t_21 :
  Return();
  r_21 :
  Epopd(1,3);
  goto p_21;
  h_21 :
  Cpop();
  p_21 :
  Return();
  z_20 :
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(v_21);
  y_47 :
  Cpush(r_23);
  Ccall(_stratego_o_12);
  goto y_22;
  r_23 :
  Ccontinue(s_23);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_11);
  OneNextSon();
  Rpush(t_23);
  goto y_47;
  t_23 :
  AllBuild();
  goto y_22;
  s_23 :
  Epushd(1,3);
  MoveTop(1,1);
  goto f_47;
  f_47 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(p_24);
  goto e_47;
  p_24 :
  goto o_24;
  e_47 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(q_24);
  goto y_47;
  q_24 :
  Return();
  o_24 :
  Epopd(1,3);
  goto n_24;
  y_22 :
  Cpop();
  n_24 :
  Return();
  v_21 :
  Cpush(w_24);
  Tdupl();
  Ccall(_stratego_o_12);
  Cpop();
  Crestore();
  Cjump();
  w_24 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_y_11)
  Epushd(0,4);
  Cpush(z_24);
  x_24 :
  Ccall(_stratego_x_11);
  Ccall(_stratego_s_11);
  Tduplinv();
  goto x_24;
  z_24 :
  MoveTop(0,1);
  Tdupl();
  Epushd(1,3);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(f_25);
  o_50 :
  Cpush(x_25);
  Ccall(_stratego_o_12);
  goto g_25;
  x_25 :
  Ccontinue(y_25);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto e_48;
  e_48 :
  TestFunFC(z_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(a_26);
  goto a_48;
  a_26 :
  goto z_25;
  a_48 :
  Epushd(3,1);
  Tdupl();
  Cpush(b_26);
  Tdupl();
  Epushd(4,1);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(4,1);
  goto c_48;
  c_48 :
  TestStr(4,1,"main",&&fail);
  Rpush(m_26);
  goto b_48;
  m_26 :
  goto l_26;
  b_48 :
  Return();
  l_26 :
  Epopd(4,1);
  Cpop();
  Crestore();
  Cjump();
  b_26 :
  Tpop();
  Tset(App0("TNil"));
  Ccall(_stratego_l_11);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  z_25 :
  Epopd(2,4);
  OneNextSon();
  Rpush(n_26);
  goto o_50;
  n_26 :
  AllBuild();
  goto g_25;
  y_25 :
  Epushd(2,3);
  MoveTop(2,1);
  goto g_48;
  g_48 :
  TestFunFC(m_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(q_26);
  goto f_48;
  q_26 :
  goto p_26;
  f_48 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(r_26);
  goto o_50;
  r_26 :
  Return();
  p_26 :
  Epopd(2,3);
  goto o_26;
  g_25 :
  Cpop();
  o_26 :
  Return();
  f_25 :
  MoveTop(1,1);
  Move(0,2,1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(s_26);
  p_50 :
  Cpush(u_26);
  Ccall(_stratego_o_12);
  goto t_26;
  u_26 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("Call",App1("SVar",Egetd(2,1)),App0("Nil")));
  Epopd(2,1);
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(x_26);
  goto p_50;
  x_26 :
  AllBuild();
  goto w_26;
  t_26 :
  Cpop();
  w_26 :
  Return();
  s_26 :
  MoveTop(1,2);
  Move(0,3,1,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(b_27);
  q_50 :
  Cpush(g_27);
  Ccall(_stratego_o_12);
  goto c_27;
  g_27 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto t_48;
  t_48 :
  TestFunFC(z_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(y_27);
  goto k_48;
  y_27 :
  goto x_27;
  k_48 :
  Epushd(3,2);
  Tdupl();
  Cpush(f_28);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(g_28);
  r_50 :
  Cpush(i_28);
  Epushd(4,7);
  MoveTop(4,1);
  goto m_48;
  m_48 :
  TestFunFC(m_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,7,4,1,1);
  goto n_48;
  n_48 :
  TestFunFC(d_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto o_48;
  o_48 :
  TestFunFC(d_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto p_48;
  p_48 :
  TestFunFC(f_0,&&fail,Egetd(4,6));
  Rpush(p_28);
  goto l_48;
  p_28 :
  goto j_28;
  l_48 :
  Move(2,2,4,3);
  Move(3,1,4,5);
  Return();
  j_28 :
  Epopd(4,7);
  goto h_28;
  i_28 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_29);
  goto r_50;
  a_29 :
  AllBuild();
  goto q_28;
  h_28 :
  Cpop();
  q_28 :
  Return();
  g_28 :
  goto z_27;
  f_28 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Move(3,1,2,2);
  goto b_29;
  z_27 :
  Cpop();
  b_29 :
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  NotNULLd(0,3);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_f_11);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(2,3);
  NotNULLd(3,2);
  Tset(App3("SDef",Egetd(3,1),Egetd(2,3),Egetd(3,2)));
  Epopd(3,2);
  Return();
  x_27 :
  Epopd(2,4);
  OneNextSon();
  Rpush(c_29);
  goto q_50;
  c_29 :
  AllBuild();
  goto o_27;
  c_27 :
  Cpop();
  o_27 :
  Return();
  b_27 :
  MoveTop(1,3);
  Move(0,4,1,3);
  Epopd(1,3);
  Tpop();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Epopd(0,4);
ENDPROC

PROC(_stratego_z_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_50;
  t_50 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  Rpush(h_29);
  goto s_50;
  h_29 :
  goto g_29;
  s_50 :
  Return();
  g_29 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_12)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_j_12);
  Tset(MakeInt(1));
  Ccall(_stratego_i_12);
ENDPROC

PROC(_stratego_b_12)
  Epushd(0,2);
  Tdupl();
  Cpush(l_29);
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Cpush(m_29);
  Tdupl();
  Rpush(y_29);
  r_51 :
  Cpush(e_30);
  Epushd(1,3);
  MoveTop(1,1);
  goto w_50;
  w_50 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto x_50;
  x_50 :
  TestFunFC(j_30,&&fail,Egetd(1,2));
  Rpush(g_30);
  goto v_50;
  g_30 :
  goto f_30;
  v_50 :
  Return();
  f_30 :
  Epopd(1,3);
  goto c_30;
  e_30 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_30);
  goto r_51;
  t_30 :
  AllBuild();
  goto s_30;
  c_30 :
  Cpop();
  s_30 :
  Return();
  y_29 :
  Cpop();
  Crestore();
  Cjump();
  m_29 :
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(u_30);
  s_51 :
  Cpush(x_30);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_50;
  z_50 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_51;
  a_51 :
  TestFunFC(g_31,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_31);
  goto y_50;
  e_31 :
  goto d_31;
  y_50 :
  Move(0,2,1,3);
  Return();
  d_31 :
  Epopd(1,4);
  goto v_30;
  x_30 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_31);
  goto s_51;
  k_31 :
  AllBuild();
  goto j_31;
  v_30 :
  Cpop();
  j_31 :
  Return();
  u_30 :
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(q_31);
  t_51 :
  Cpush(t_31);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_51;
  c_51 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_51;
  d_51 :
  TestFunFC(w_31,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_31);
  goto b_51;
  v_31 :
  goto u_31;
  b_51 :
  Move(0,1,1,3);
  Return();
  u_31 :
  Epopd(1,4);
  goto s_31;
  t_31 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_32);
  goto t_51;
  f_32 :
  AllBuild();
  goto e_32;
  s_31 :
  Cpop();
  e_32 :
  Return();
  q_31 :
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_j_12);
  goto i_29;
  l_29 :
  goto h_32;
  i_29 :
  Cpop();
  h_32 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_i_12);
  Epopd(0,2);
ENDPROC

PROC(_stratego_c_12)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_d_12)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_e_12)
  Epushd(0,1);
  Tdupl();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Cpush(p_32);
  Rpush(q_32);
  t_52 :
  Cpush(v_32);
  Epushd(1,4);
  MoveTop(1,1);
  goto v_51;
  v_51 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto w_51;
  w_51 :
  TestFunFC(s_33,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_33);
  goto u_51;
  r_33 :
  goto q_33;
  u_51 :
  Move(0,1,1,3);
  Return();
  q_33 :
  Epopd(1,4);
  goto u_32;
  v_32 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_33);
  goto t_52;
  u_33 :
  AllBuild();
  goto t_33;
  u_32 :
  Cpop();
  t_33 :
  Return();
  q_32 :
  goto j_32;
  p_32 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto p_34;
  j_32 :
  Cpop();
  p_34 :
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  Cpush(s_34);
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(u_34);
  u_52 :
  Cpush(z_34);
  Epushd(1,3);
  MoveTop(1,1);
  goto c_52;
  c_52 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_52;
  d_52 :
  TestFunFC(c_35,&&fail,Egetd(1,2));
  Rpush(b_35);
  goto b_52;
  b_35 :
  goto a_35;
  b_52 :
  Return();
  a_35 :
  Epopd(1,3);
  goto y_34;
  z_34 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_35);
  goto u_52;
  t_35 :
  AllBuild();
  goto r_35;
  y_34 :
  Cpop();
  r_35 :
  Return();
  u_34 :
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_12);
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  goto r_34;
  s_34 :
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_12);
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  goto x_35;
  r_34 :
  Cpop();
  x_35 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_12)
  _ST_dtime();
ENDPROC

PROC(_stratego_g_12)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_h_12)
  Epushd(0,3);
  Tdupl();
  Cpush(e_36);
  Rpush(j_36);
  o_53 :
  Cpush(q_36);
  Epushd(1,4);
  MoveTop(1,1);
  goto w_52;
  w_52 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto x_52;
  x_52 :
  TestFunFC(u_36,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_36);
  goto v_52;
  t_36 :
  goto s_36;
  v_52 :
  Move(0,1,1,3);
  Return();
  s_36 :
  Epopd(1,4);
  goto p_36;
  q_36 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_36);
  goto o_53;
  w_36 :
  AllBuild();
  goto v_36;
  p_36 :
  Cpop();
  v_36 :
  Return();
  j_36 :
  goto z_35;
  e_36 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto x_36;
  z_35 :
  Cpop();
  x_36 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_g_12);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_i_12)
  _ST_exit();
ENDPROC

PROC(_stratego_j_12)
  _ST_printnl();
ENDPROC

PROC(_stratego_k_12)
  Epushd(0,1);
  Tdupl();
  Rpush(y_36);
  x_53 :
  Cpush(o_37);
  Epushd(1,4);
  MoveTop(1,1);
  goto q_53;
  q_53 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto r_53;
  r_53 :
  TestFunFC(w_31,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(q_37);
  goto p_53;
  q_37 :
  goto p_37;
  p_53 :
  Move(0,1,1,3);
  Return();
  p_37 :
  Epopd(1,4);
  goto n_37;
  o_37 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_37);
  goto x_53;
  x_37 :
  AllBuild();
  goto w_37;
  n_37 :
  Cpop();
  w_37 :
  Return();
  y_36 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_j_12);
  Tset(MakeInt(1));
  Ccall(_stratego_i_12);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_12)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_53;
  z_53 :
  TestFunFC(g_38,&&fail,Egetd(0,1));
  Rpush(c_38);
  goto y_53;
  c_38 :
  goto z_37;
  y_53 :
  Return();
  z_37 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_12)
  Tdupl();
  h_38 :
  TestFunTop(m_0);
  Cpush(k_38);
  Arg(0);
  Cpush(u_38);
  Ccall(_stratego_l_12);
  goto t_38;
  u_38 :
  Epushd(0,2);
  MoveTop(0,1);
  goto c_54;
  c_54 :
  TestFunFC(a_39,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(y_38);
  goto b_54;
  y_38 :
  goto x_38;
  b_54 :
  Return();
  x_38 :
  Epopd(0,2);
  goto w_38;
  t_38 :
  Cpop();
  w_38 :
  Tpop();
  Cpop();
  goto s_38;
  k_38 :
  Arg(1);
  Tdrop();
  goto h_38;
  s_38 :
  Tpop();
  Ccall(_stratego_k_12);
ENDPROC

PROC(_stratego_n_12)
  Epushd(0,5);
  MoveTop(0,3);
  goto u_56;
  u_56 :
  TestFunFC(m_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto v_56;
  v_56 :
  TestFunFC(m_0,&&q_42,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(s_42);
  Rpush(c_43);
  goto g_54;
  c_43 :
  goto r_42;
  s_42 :
  Ccontinue(d_43);
  Rpush(e_43);
  goto h_54;
  e_43 :
  goto r_42;
  d_43 :
  Ccontinue(f_43);
  Rpush(l_43);
  goto i_54;
  l_43 :
  goto r_42;
  f_43 :
  Ccontinue(m_43);
  Rpush(s_43);
  goto j_54;
  s_43 :
  goto r_42;
  m_43 :
  Ccontinue(t_43);
  Rpush(v_43);
  goto k_54;
  v_43 :
  goto r_42;
  t_43 :
  Ccontinue(b_44);
  Rpush(c_44);
  goto l_54;
  c_44 :
  goto r_42;
  b_44 :
  Ccontinue(e_44);
  Rpush(f_44);
  goto m_54;
  f_44 :
  goto r_42;
  e_44 :
  Ccontinue(g_44);
  Rpush(h_44);
  goto n_54;
  h_44 :
  goto r_42;
  g_44 :
  Ccontinue(x_44);
  Rpush(g_45);
  goto o_54;
  g_45 :
  goto r_42;
  x_44 :
  Ccontinue(h_45);
  Rpush(j_45);
  goto p_54;
  j_45 :
  goto r_42;
  h_45 :
  Ccontinue(x_45);
  Rpush(a_47);
  goto q_54;
  a_47 :
  goto r_42;
  x_45 :
  Ccontinue(d_47);
  Rpush(g_47);
  goto r_54;
  g_47 :
  goto r_42;
  d_47 :
  Ccontinue(i_47);
  Rpush(m_47);
  goto s_54;
  m_47 :
  goto r_42;
  i_47 :
  Ccontinue(n_47);
  Rpush(p_47);
  goto t_54;
  p_47 :
  goto r_42;
  n_47 :
  Rpush(u_47);
  goto u_54;
  u_47 :
  goto t_47;
  r_42 :
  Cpop();
  t_47 :
  goto i_42;
  q_42 :
  Cpush(z_47);
  Rpush(d_48);
  goto g_54;
  d_48 :
  goto w_47;
  z_47 :
  Ccontinue(h_48);
  Rpush(i_48);
  goto h_54;
  i_48 :
  goto w_47;
  h_48 :
  Ccontinue(j_48);
  Rpush(q_48);
  goto i_54;
  q_48 :
  goto w_47;
  j_48 :
  Ccontinue(r_48);
  Rpush(s_48);
  goto j_54;
  s_48 :
  goto w_47;
  r_48 :
  Ccontinue(u_48);
  Rpush(v_48);
  goto k_54;
  v_48 :
  goto w_47;
  u_48 :
  Ccontinue(x_48);
  Rpush(f_49);
  goto q_54;
  f_49 :
  goto w_47;
  x_48 :
  Ccontinue(i_49);
  Rpush(m_49);
  goto r_54;
  m_49 :
  goto w_47;
  i_49 :
  Ccontinue(n_49);
  Rpush(q_49);
  goto s_54;
  q_49 :
  goto w_47;
  n_49 :
  Ccontinue(w_49);
  Rpush(x_49);
  goto t_54;
  x_49 :
  goto w_47;
  w_49 :
  Rpush(h_50);
  goto u_54;
  h_50 :
  goto y_49;
  w_47 :
  Cpop();
  y_49 :
  goto i_42;
  i_42 :
  goto y_41;
  u_54 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_56;
  s_56 :
  TestStr(1,1,"-?",&&fail);
  Rpush(j_50);
  goto r_56;
  j_50 :
  goto i_50;
  r_56 :
  Return();
  i_50 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  y_41 :
  goto x_41;
  t_54 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_56;
  p_56 :
  TestStr(1,1,"-h",&&fail);
  Rpush(x_51);
  goto o_56;
  x_51 :
  goto l_50;
  o_56 :
  Return();
  l_50 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  x_41 :
  goto w_41;
  s_54 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_56;
  m_56 :
  TestStr(1,1,"--help",&&fail);
  Rpush(z_51);
  goto l_56;
  z_51 :
  goto y_51;
  l_56 :
  Return();
  y_51 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  w_41 :
  goto x_40;
  r_54 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_56;
  j_56 :
  TestStr(1,1,"-s",&&fail);
  Rpush(j_52);
  goto i_56;
  j_52 :
  goto a_52;
  i_56 :
  Return();
  a_52 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  x_40 :
  goto s_40;
  q_54 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_56;
  g_56 :
  TestStr(1,1,"-b",&&fail);
  Rpush(m_52);
  goto f_56;
  m_52 :
  goto l_52;
  f_56 :
  Return();
  l_52 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  s_40 :
  goto y_39;
  p_54 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_56;
  c_56 :
  TestStr(1,1,"--output",&&fail);
  Rpush(o_52);
  goto b_56;
  o_52 :
  goto n_52;
  b_56 :
  Return();
  n_52 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  y_39 :
  goto x_39;
  o_54 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_55;
  y_55 :
  TestStr(1,1,"-o",&&fail);
  Rpush(y_52);
  goto x_55;
  y_52 :
  goto p_52;
  x_55 :
  Return();
  p_52 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  x_39 :
  goto w_39;
  n_54 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_55;
  u_55 :
  TestStr(1,1,"--input",&&fail);
  Rpush(a_53);
  goto t_55;
  a_53 :
  goto z_52;
  t_55 :
  Return();
  z_52 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  w_39 :
  goto v_39;
  m_54 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_55;
  q_55 :
  TestStr(1,1,"-i",&&fail);
  Rpush(h_53);
  goto p_55;
  h_53 :
  goto b_53;
  p_55 :
  Return();
  b_53 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  v_39 :
  goto u_39;
  l_54 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_55;
  m_55 :
  TestStr(1,1,"@version",&&fail);
  Rpush(k_53);
  goto k_55;
  k_53 :
  goto j_53;
  k_55 :
  Return();
  j_53 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  u_39 :
  goto t_39;
  k_54 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_55;
  i_55 :
  TestStr(1,1,"--version",&&fail);
  Rpush(n_53);
  goto h_55;
  n_53 :
  goto l_53;
  h_55 :
  Return();
  l_53 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  t_39 :
  goto p_39;
  j_54 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_55;
  f_55 :
  TestStr(1,1,"-v",&&fail);
  Rpush(a_55);
  goto e_55;
  a_55 :
  goto x_54;
  e_55 :
  Return();
  x_54 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  p_39 :
  goto n_39;
  i_54 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_55;
  c_55 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(g_55);
  goto b_55;
  g_55 :
  goto d_55;
  b_55 :
  Return();
  d_55 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  n_39 :
  goto m_39;
  h_54 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_54;
  z_54 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(l_55);
  goto y_54;
  l_55 :
  goto j_55;
  y_54 :
  Return();
  j_55 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  m_39 :
  goto h_39;
  g_54 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_54;
  w_54 :
  TestStr(1,1,"-S",&&fail);
  Rpush(o_55);
  goto v_54;
  o_55 :
  goto n_55;
  v_54 :
  Return();
  n_55 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  h_39 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_12)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_60;
  o_60 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  Rpush(s_55);
  goto n_60;
  s_55 :
  goto r_55;
  n_60 :
  Return();
  r_55 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_12)
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(v_55);
  o_61 :
  Cpush(z_55);
  Cpush(d_56);
  Ccall(_stratego_o_12);
  goto a_56;
  d_56 :
  Ccall(_stratego_n_12);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_56);
  goto o_61;
  h_56 :
  AllBuild();
  goto e_56;
  a_56 :
  Cpop();
  e_56 :
  goto w_55;
  z_55 :
  Epushd(0,3);
  MoveTop(0,1);
  goto s_60;
  s_60 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(q_56);
  goto r_60;
  q_56 :
  goto n_56;
  r_60 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  n_56 :
  Epopd(0,3);
  goto k_56;
  w_55 :
  Cpop();
  k_56 :
  Return();
  v_55 :
  AllBuild();
  Cpush(b_57);
  Ccall(_stratego_m_12);
  goto t_56;
  b_57 :
  Ccontinue(c_57);
  Epushd(0,6);
  Ccall(_stratego_h_12);
  Tdupl();
  Ccall(_stratego_f_12);
  Tpop();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_11);
  OneNextSon();
  Ccall(_stratego_z_11);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_f_12);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto v_60;
  v_60 :
  TestFunFC(d_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto w_60;
  w_60 :
  TestFunFC(d_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto x_60;
  x_60 :
  TestFunFC(f_0,&&fail,Egetd(0,6));
  Rpush(f_57);
  goto u_60;
  f_57 :
  goto e_57;
  u_60 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  e_57 :
  Ccall(_stratego_e_12);
  Ccall(_stratego_b_12);
  Epopd(0,6);
  goto t_56;
  c_57 :
  Ccall(_stratego_a_12);
  goto g_57;
  t_56 :
  Cpop();
  g_57 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_p_12);
ENDPROC

DOIT

