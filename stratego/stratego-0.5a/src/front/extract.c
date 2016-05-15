#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,b_48);
VARDECL(AFun,p_46);
VARDECL(AFun,n_44);
VARDECL(AFun,g_43);
VARDECL(AFun,v_40);
VARDECL(AFun,z_38);
VARDECL(AFun,n_37);
VARDECL(AFun,q_36);
VARDECL(AFun,c_17);
VARDECL(AFun,q_7);
VARDECL(AFun,h_1);
VARDECL(AFun,a_1);
VARDECL(AFun,z_0);
VARDECL(AFun,s_0);
VARDECL(AFun,q_0);
VARDECL(AFun,p_0);
VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
PROCDECL(_stratego_c_19);
PROCDECL(_stratego_d_19);
PROCDECL(_stratego_e_19);
PROCDECL(_stratego_f_19);
PROCDECL(_stratego_g_19);
PROCDECL(_stratego_h_19);
PROCDECL(_stratego_i_19);
PROCDECL(_stratego_j_19);
PROCDECL(_stratego_k_19);
PROCDECL(_stratego_p_19);
PROCDECL(_stratego_q_19);
PROCDECL(_stratego_r_19);
PROCDECL(_stratego_s_19);
PROCDECL(_stratego_t_19);
PROCDECL(_stratego_u_19);
PROCDECL(_stratego_x_19);
PROCDECL(_stratego_y_19);
PROCDECL(_stratego_z_19);
PROCDECL(_stratego_a_20);
PROCDECL(_stratego_b_20);
PROCDECL(_stratego_c_20);
PROCDECL(_stratego_d_20);
PROCDECL(_stratego_e_20);
PROCDECL(_stratego_f_20);
PROCDECL(_stratego_g_20);
PROCDECL(_stratego_h_20);
PROCDECL(_stratego_i_20);
PROCDECL(_stratego_j_20);
PROCDECL(_stratego_k_20);
PROCDECL(_stratego_l_20);
PROCDECL(_stratego_m_20);
PROCDECL(_stratego_n_20);
PROCDECL(_stratego_o_20);
PROCDECL(_stratego_p_20);
PROCDECL(_stratego_q_20);
PROCDECL(_stratego_r_20);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(b_48,ATmakeAFun("Undefined",1,0));
  MOVE(p_46,ATmakeAFun("Help",0,0));
  MOVE(n_44,ATmakeAFun("Input",1,0));
  MOVE(g_43,ATmakeAFun("Binary",0,0));
  MOVE(v_40,ATmakeAFun("Output",1,0));
  MOVE(z_38,ATmakeAFun("Program",1,0));
  MOVE(n_37,ATmakeAFun("Runtime",1,0));
  MOVE(q_36,ATmakeAFun("Silent",0,0));
  MOVE(c_17,ATmakeAFun("Mod",2,0));
  MOVE(q_7,ATmakeAFun("Nil",0,0));
  MOVE(h_1,ATmakeAFun("Cons",2,0));
  MOVE(a_1,ATmakeAFun("TNil",0,0));
  MOVE(z_0,ATmakeAFun("TCons",2,0));
  MOVE(s_0,ATmakeAFun("Rec",2,0));
  MOVE(q_0,ATmakeAFun("SDef",3,0));
  MOVE(p_0,ATmakeAFun("Let",2,0));
  MOVE(g_0,ATmakeAFun("SVar",1,0));
  MOVE(f_0,ATmakeAFun("Call",2,0));
ENDPROC

PROC(_stratego_c_19)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_l_20);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_d_19)
  Rpush(a_0);
  j_28 :
  Epushd(0,8);
  MoveTop(0,1);
  Cpush(c_0);
  Epushd(1,4);
  MoveTop(1,1);
  goto l_5;
  l_5 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto m_5;
  m_5 :
  TestFunFC(g_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_0);
  goto j_5;
  e_0 :
  goto d_0;
  j_5 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_j_19);
  MoveTop(2,1);
  NotNULLd(1,3);
  NotNULLd(2,1);
  Tset(App2("Cons",App2("TCons",Egetd(1,3),App2("TCons",Egetd(2,1),App0("TNil"))),App0("Nil")));
  Epopd(2,1);
  Return();
  d_0 :
  Epopd(1,4);
  goto b_0;
  c_0 :
  Tset(App0("Nil"));
  goto h_0;
  b_0 :
  Cpop();
  h_0 :
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(j_0);
  Epushd(1,3);
  Tdupl();
  Epushd(2,8);
  MoveTop(2,5);
  goto v_6;
  v_6 :
  TestFunFC(p_0,&&o_0,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto w_6;
  w_6 :
  TestFunFC(q_0,&&fail,Egetd(2,6));
  MoveArg(2,1,2,6,0);
  MoveArg(2,2,2,6,1);
  MoveArg(2,3,2,6,2);
  Rpush(n_0);
  goto s_6;
  o_0 :
  TestFunFC(q_0,&&r_0,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  MoveArg(2,4,2,5,2);
  Rpush(n_0);
  goto t_6;
  r_0 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  Rpush(n_0);
  goto u_6;
  n_0 :
  goto m_0;
  u_6 :
  NotNULLd(2,6);
  Tset(App2("Cons",Egetd(2,6),App0("Nil")));
  Return();
  m_0 :
  goto l_0;
  t_6 :
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Return();
  l_0 :
  goto k_0;
  s_6 :
  NotNULLd(2,1);
  Tset(App2("Cons",Egetd(2,1),App0("Nil")));
  Return();
  k_0 :
  MoveTop(2,8);
  Move(1,1,2,8);
  Epopd(2,8);
  Tpop();
  Cpush(u_0);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Rpush(v_0);
  goto j_28;
  v_0 :
  AllBuild();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(w_0);
  goto j_28;
  w_0 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto j_10;
  j_10 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto k_10;
  k_10 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto l_10;
  l_10 :
  TestFunFC(a_1,&&fail,Egetd(2,7));
  Rpush(y_0);
  goto v_9;
  y_0 :
  goto x_0;
  v_9 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(b_1);
  k_28 :
  Cpush(d_1);
  Ccall(_stratego_q_20);
  goto c_1;
  d_1 :
  Ccontinue(e_1);
  Epushd(3,3);
  MoveTop(3,1);
  goto i_10;
  i_10 :
  TestFunFC(h_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(g_1);
  goto w_9;
  g_1 :
  goto f_1;
  w_9 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(i_1);
  l_28 :
  Cpush(k_1);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto c_10;
  c_10 :
  TestFunFC(z_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto d_10;
  d_10 :
  TestFunFC(z_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto e_10;
  e_10 :
  TestFunFC(z_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto f_10;
  f_10 :
  TestFunFC(a_1,&&fail,Egetd(4,7));
  goto g_10;
  g_10 :
  TestFunFC(z_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto h_10;
  h_10 :
  TestFunFC(a_1,&&fail,Egetd(4,10));
  Rpush(m_1);
  goto b_10;
  m_1 :
  goto l_1;
  b_10 :
  Move(4,4,4,9);
  Return();
  l_1 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto j_1;
  k_1 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_1);
  goto l_28;
  o_1 :
  AllBuild();
  goto n_1;
  j_1 :
  Cpop();
  n_1 :
  Return();
  i_1 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(p_1);
  goto k_28;
  p_1 :
  Return();
  f_1 :
  Epopd(3,3);
  goto c_1;
  e_1 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_1);
  goto k_28;
  r_1 :
  AllBuild();
  goto q_1;
  c_1 :
  Cpop();
  q_1 :
  Return();
  b_1 :
  Return();
  x_0 :
  Epopd(2,7);
  AllBuild();
  goto t_0;
  u_0 :
  Ccontinue(s_1);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(t_1);
  goto j_28;
  t_1 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto v_11;
  v_11 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_11;
  w_11 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto x_11;
  x_11 :
  TestFunFC(a_1,&&fail,Egetd(2,7));
  Rpush(v_1);
  goto p_10;
  v_1 :
  goto u_1;
  p_10 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(w_1);
  m_28 :
  Cpush(y_1);
  Ccall(_stratego_q_20);
  goto x_1;
  y_1 :
  Ccontinue(z_1);
  Epushd(3,3);
  MoveTop(3,1);
  goto u_11;
  u_11 :
  TestFunFC(h_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(c_2);
  goto q_10;
  c_2 :
  goto a_2;
  q_10 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(d_2);
  n_28 :
  Cpush(f_2);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto t_10;
  t_10 :
  TestFunFC(z_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto u_10;
  u_10 :
  TestFunFC(z_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto v_10;
  v_10 :
  TestFunFC(z_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto a_11;
  a_11 :
  TestFunFC(a_1,&&fail,Egetd(4,7));
  goto b_11;
  b_11 :
  TestFunFC(z_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto c_11;
  c_11 :
  TestFunFC(a_1,&&fail,Egetd(4,10));
  Rpush(h_2);
  goto s_10;
  h_2 :
  goto g_2;
  s_10 :
  Move(4,4,4,9);
  Return();
  g_2 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto e_2;
  f_2 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_2);
  goto n_28;
  j_2 :
  AllBuild();
  goto i_2;
  e_2 :
  Cpop();
  i_2 :
  Return();
  d_2 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(k_2);
  goto m_28;
  k_2 :
  Return();
  a_2 :
  Epopd(3,3);
  goto x_1;
  z_1 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_2);
  goto m_28;
  m_2 :
  AllBuild();
  goto l_2;
  x_1 :
  Cpop();
  l_2 :
  Return();
  w_1 :
  Return();
  u_1 :
  Epopd(2,7);
  AllBuild();
  goto t_0;
  s_1 :
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(o_2);
  goto j_28;
  o_2 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto a_14;
  a_14 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto b_14;
  b_14 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto c_14;
  c_14 :
  TestFunFC(a_1,&&fail,Egetd(2,7));
  Rpush(q_2);
  goto p_13;
  q_2 :
  goto p_2;
  p_13 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(r_2);
  o_28 :
  Cpush(t_2);
  Ccall(_stratego_q_20);
  goto s_2;
  t_2 :
  Ccontinue(u_2);
  Epushd(3,3);
  MoveTop(3,1);
  goto z_13;
  z_13 :
  TestFunFC(h_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(w_2);
  goto q_13;
  w_2 :
  goto v_2;
  q_13 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(x_2);
  p_28 :
  Cpush(z_2);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto t_13;
  t_13 :
  TestFunFC(z_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto u_13;
  u_13 :
  TestFunFC(z_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto v_13;
  v_13 :
  TestFunFC(z_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto w_13;
  w_13 :
  TestFunFC(a_1,&&fail,Egetd(4,7));
  goto x_13;
  x_13 :
  TestFunFC(z_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto y_13;
  y_13 :
  TestFunFC(a_1,&&fail,Egetd(4,10));
  Rpush(b_3);
  goto s_13;
  b_3 :
  goto a_3;
  s_13 :
  Move(4,4,4,9);
  Return();
  a_3 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto y_2;
  z_2 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_3);
  goto p_28;
  d_3 :
  AllBuild();
  goto c_3;
  y_2 :
  Cpop();
  c_3 :
  Return();
  x_2 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(e_3);
  goto o_28;
  e_3 :
  Return();
  v_2 :
  Epopd(3,3);
  goto s_2;
  u_2 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_3);
  goto o_28;
  g_3 :
  AllBuild();
  goto f_3;
  s_2 :
  Cpop();
  f_3 :
  Return();
  r_2 :
  Return();
  p_2 :
  Epopd(2,7);
  AllBuild();
  goto n_2;
  t_0 :
  Cpop();
  n_2 :
  MoveTop(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  _ST_explode_term();
  MoveTop(2,1);
  goto f_14;
  f_14 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto g_14;
  g_14 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto h_14;
  h_14 :
  TestFunFC(a_1,&&fail,Egetd(2,5));
  Rpush(i_3);
  goto e_14;
  i_3 :
  goto h_3;
  e_14 :
  Move(1,3,2,4);
  Return();
  h_3 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(j_3);
  r_28 :
  Cpush(l_3);
  Ccall(_stratego_q_20);
  Tset(App0("Nil"));
  goto k_3;
  l_3 :
  Epushd(2,3);
  MoveTop(2,1);
  goto t_14;
  t_14 :
  TestFunFC(h_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_3);
  goto i_14;
  o_3 :
  goto n_3;
  i_14 :
  Epushd(3,6);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(p_3);
  goto r_28;
  p_3 :
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(3,1),App0("TNil"))));
  MoveTop(3,2);
  goto q_14;
  q_14 :
  TestFunFC(z_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto r_14;
  r_14 :
  TestFunFC(z_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto s_14;
  s_14 :
  TestFunFC(a_1,&&fail,Egetd(3,6));
  Rpush(r_3);
  goto l_14;
  r_3 :
  goto q_3;
  l_14 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(s_3);
  s_28 :
  Cpush(u_3);
  Ccall(_stratego_q_20);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  goto t_3;
  u_3 :
  Ccontinue(v_3);
  Epushd(4,3);
  MoveTop(4,1);
  goto p_14;
  p_14 :
  TestFunFC(h_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(x_3);
  goto m_14;
  x_3 :
  goto w_3;
  m_14 :
  Tdupl();
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(y_3);
  t_28 :
  Cpush(a_4);
  Epushd(5,3);
  MoveTop(5,1);
  goto o_14;
  o_14 :
  TestFunFC(h_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(c_4);
  goto n_14;
  c_4 :
  goto b_4;
  n_14 :
  Move(4,2,5,2);
  Return();
  b_4 :
  Epopd(5,3);
  goto z_3;
  a_4 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_4);
  goto t_28;
  e_4 :
  AllBuild();
  goto d_4;
  z_3 :
  Cpop();
  d_4 :
  Return();
  y_3 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(f_4);
  goto s_28;
  f_4 :
  Return();
  w_3 :
  Epopd(4,3);
  goto t_3;
  v_3 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_4);
  goto s_28;
  h_4 :
  AllBuild();
  goto g_4;
  t_3 :
  Cpop();
  g_4 :
  Return();
  s_3 :
  Return();
  q_3 :
  Epopd(3,6);
  Return();
  n_3 :
  Epopd(2,3);
  goto m_3;
  k_3 :
  Cpop();
  m_3 :
  Return();
  j_3 :
  Epopd(1,3);
  goto i_0;
  j_0 :
  Epushd(1,2);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  _ST_explode_term();
  MoveTop(2,1);
  goto f_15;
  f_15 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto g_15;
  g_15 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto u_15;
  u_15 :
  TestFunFC(a_1,&&fail,Egetd(2,5));
  Rpush(k_4);
  goto e_15;
  k_4 :
  goto j_4;
  e_15 :
  Move(1,2,2,4);
  Return();
  j_4 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(l_4);
  u_28 :
  Cpush(n_4);
  Ccall(_stratego_q_20);
  Tset(App0("Nil"));
  goto m_4;
  n_4 :
  Epushd(2,3);
  MoveTop(2,1);
  goto j_18;
  j_18 :
  TestFunFC(h_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(q_4);
  goto v_15;
  q_4 :
  goto p_4;
  v_15 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(r_4);
  goto j_28;
  r_4 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(s_4);
  goto u_28;
  s_4 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto g_18;
  g_18 :
  TestFunFC(z_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto h_18;
  h_18 :
  TestFunFC(z_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto i_18;
  i_18 :
  TestFunFC(a_1,&&fail,Egetd(3,7));
  Rpush(u_4);
  goto y_15;
  u_4 :
  goto t_4;
  y_15 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(v_4);
  v_28 :
  Cpush(x_4);
  Ccall(_stratego_q_20);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto w_4;
  x_4 :
  Ccontinue(y_4);
  Epushd(4,3);
  MoveTop(4,1);
  goto e_18;
  e_18 :
  TestFunFC(h_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(a_5);
  goto x_17;
  a_5 :
  goto z_4;
  x_17 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(b_5);
  w_28 :
  Cpush(d_5);
  Epushd(5,3);
  MoveTop(5,1);
  goto d_18;
  d_18 :
  TestFunFC(h_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(f_5);
  goto y_17;
  f_5 :
  goto e_5;
  y_17 :
  Move(4,2,5,2);
  Return();
  e_5 :
  Epopd(5,3);
  goto c_5;
  d_5 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_5);
  goto w_28;
  h_5 :
  AllBuild();
  goto g_5;
  c_5 :
  Cpop();
  g_5 :
  Return();
  b_5 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(i_5);
  goto v_28;
  i_5 :
  Return();
  z_4 :
  Epopd(4,3);
  goto w_4;
  y_4 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_5);
  goto v_28;
  n_5 :
  AllBuild();
  goto k_5;
  w_4 :
  Cpop();
  k_5 :
  Return();
  v_4 :
  Return();
  t_4 :
  Epopd(3,7);
  Return();
  p_4 :
  Epopd(2,3);
  goto o_4;
  m_4 :
  Cpop();
  o_4 :
  Return();
  l_4 :
  Epopd(1,2);
  goto i_4;
  i_0 :
  Cpop();
  i_4 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  MoveTop(0,4);
  goto s_18;
  s_18 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto v_18;
  v_18 :
  TestFunFC(z_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto w_18;
  w_18 :
  TestFunFC(a_1,&&fail,Egetd(0,8));
  Rpush(p_5);
  goto n_18;
  p_5 :
  goto o_5;
  n_18 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(q_5);
  x_28 :
  Cpush(s_5);
  Ccall(_stratego_q_20);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  goto r_5;
  s_5 :
  Ccontinue(t_5);
  Epushd(1,3);
  MoveTop(1,1);
  goto r_18;
  r_18 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(v_5);
  goto o_18;
  v_5 :
  goto u_5;
  o_18 :
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(w_5);
  y_28 :
  Cpush(y_5);
  Epushd(2,3);
  MoveTop(2,1);
  goto q_18;
  q_18 :
  TestFunFC(h_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(a_6);
  goto p_18;
  a_6 :
  goto z_5;
  p_18 :
  Move(1,2,2,2);
  Return();
  z_5 :
  Epopd(2,3);
  goto x_5;
  y_5 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_6);
  goto y_28;
  c_6 :
  AllBuild();
  goto b_6;
  x_5 :
  Cpop();
  b_6 :
  Return();
  w_5 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(d_6);
  goto x_28;
  d_6 :
  Return();
  u_5 :
  Epopd(1,3);
  goto r_5;
  t_5 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_6);
  goto x_28;
  f_6 :
  AllBuild();
  goto e_6;
  r_5 :
  Cpop();
  e_6 :
  Return();
  q_5 :
  Return();
  o_5 :
  Epopd(0,8);
  Return();
  a_0 :
ENDPROC

PROC(_stratego_e_19)
  Rpush(g_6);
  r_29 :
  Cpush(i_6);
  Ccall(_stratego_q_20);
  Tset(App0("Fail"));
  goto h_6;
  i_6 :
  Epushd(0,3);
  MoveTop(0,1);
  goto e_29;
  e_29 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(l_6);
  goto z_28;
  l_6 :
  goto k_6;
  z_28 :
  Epushd(1,5);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Rpush(n_6);
  goto r_29;
  n_6 :
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto b_29;
  b_29 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_29;
  c_29 :
  TestFunFC(z_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto d_29;
  d_29 :
  TestFunFC(a_1,&&fail,Egetd(1,5));
  Rpush(o_6);
  goto a_29;
  o_6 :
  goto m_6;
  a_29 :
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("Choice",Egetd(1,2),Egetd(1,4)));
  Return();
  m_6 :
  Epopd(1,5);
  Return();
  k_6 :
  Epopd(0,3);
  goto j_6;
  h_6 :
  Cpop();
  j_6 :
  Return();
  g_6 :
ENDPROC

PROC(_stratego_f_19)
  Rpush(p_6);
  y_30 :
  Epushd(0,11);
  MoveTop(0,5);
  goto u_29;
  u_29 :
  TestFunFC(z_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto v_29;
  v_29 :
  TestFunFC(z_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto w_29;
  w_29 :
  TestFunFC(h_1,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto x_29;
  x_29 :
  TestFunFC(a_1,&&fail,Egetd(0,11));
  goto y_29;
  y_29 :
  TestFunFC(z_0,&&y_6,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto z_29;
  z_29 :
  TestFunFC(z_0,&&z_6,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto a_30;
  a_30 :
  TestFunFC(a_1,&&a_7,Egetd(0,4));
  Cpush(c_7);
  Rpush(d_7);
  goto s_29;
  d_7 :
  goto b_7;
  c_7 :
  Rpush(f_7);
  goto t_29;
  f_7 :
  goto e_7;
  b_7 :
  Cpop();
  e_7 :
  goto x_6;
  a_7 :
  Rpush(x_6);
  goto t_29;
  z_6 :
  Rpush(x_6);
  goto t_29;
  y_6 :
  Rpush(x_6);
  goto t_29;
  x_6 :
  goto r_6;
  t_29 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(g_7);
  goto y_30;
  g_7 :
  Return();
  r_6 :
  goto q_6;
  s_29 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  q_6 :
  Epopd(0,11);
  Return();
  p_6 :
ENDPROC

PROC(_stratego_g_19)
  Epushd(0,7);
  MoveTop(0,1);
  goto q_31;
  q_31 :
  TestFunFC(z_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_31;
  r_31 :
  TestFunFC(z_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto s_31;
  s_31 :
  TestFunFC(a_1,&&k_7,Egetd(0,5));
  Rpush(j_7);
  goto z_30;
  k_7 :
  TestFunFC(z_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto t_31;
  t_31 :
  TestFunFC(a_1,&&fail,Egetd(0,7));
  Rpush(j_7);
  goto a_31;
  j_7 :
  goto i_7;
  a_31 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(l_7);
  e_33 :
  Epushd(2,9);
  MoveTop(2,1);
  goto h_31;
  h_31 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto i_31;
  i_31 :
  TestFunFC(q_7,&&p_7,Egetd(2,2));
  goto j_31;
  j_31 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto k_31;
  k_31 :
  TestFunFC(q_7,&&fail,Egetd(2,6));
  goto l_31;
  l_31 :
  TestFunFC(a_1,&&fail,Egetd(2,9));
  Rpush(o_7);
  goto b_31;
  p_7 :
  TestFunFC(h_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto m_31;
  m_31 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto n_31;
  n_31 :
  TestFunFC(h_1,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto o_31;
  o_31 :
  TestFunFC(a_1,&&fail,Egetd(2,9));
  Rpush(o_7);
  goto c_31;
  o_7 :
  goto n_7;
  c_31 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Rpush(s_7);
  goto e_33;
  s_7 :
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto e_31;
  e_31 :
  TestFunFC(z_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto f_31;
  f_31 :
  TestFunFC(z_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto g_31;
  g_31 :
  TestFunFC(a_1,&&fail,Egetd(3,5));
  Rpush(t_7);
  goto d_31;
  t_7 :
  goto r_7;
  d_31 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  r_7 :
  Epopd(3,5);
  Return();
  n_7 :
  goto m_7;
  b_31 :
  Tset(App0("Nil"));
  Return();
  m_7 :
  Epopd(2,9);
  Return();
  l_7 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  i_7 :
  goto h_7;
  z_30 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  h_7 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_h_19)
  Epushd(0,5);
  Ccall(_stratego_g_19);
  MoveTop(0,1);
  goto n_33;
  n_33 :
  TestFunFC(z_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_33;
  o_33 :
  TestFunFC(z_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto p_33;
  p_33 :
  TestFunFC(a_1,&&fail,Egetd(0,5));
  Rpush(v_7);
  goto f_33;
  v_7 :
  goto u_7;
  f_33 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(w_7);
  i_34 :
  Cpush(y_7);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,4);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto k_33;
  k_33 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto l_33;
  l_33 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto m_33;
  m_33 :
  TestFunFC(q_7,&&fail,Egetd(2,4));
  Rpush(a_8);
  goto h_33;
  a_8 :
  goto z_7;
  h_33 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Move(1,2,2,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  z_7 :
  Epopd(2,4);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_f_19);
  Epopd(1,3);
  goto x_7;
  y_7 :
  AllInit();
  c_8 :
  AllNextSon(&&d_8);
  Rpush(e_8);
  goto i_34;
  e_8 :
  goto c_8;
  d_8 :
  AllBuild();
  goto b_8;
  x_7 :
  Cpop();
  b_8 :
  Return();
  w_7 :
  Return();
  u_7 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_i_19)
  Epushd(0,6);
  MoveTop(0,1);
  goto s_34;
  s_34 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto t_34;
  t_34 :
  TestFunFC(q_7,&&i_8,Egetd(0,6));
  goto u_34;
  u_34 :
  TestFunFC(q_0,&&j_8,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Cpush(l_8);
  Rpush(m_8);
  goto j_34;
  m_8 :
  goto k_8;
  l_8 :
  Rpush(o_8);
  goto k_34;
  o_8 :
  goto n_8;
  k_8 :
  Cpop();
  n_8 :
  goto h_8;
  j_8 :
  Rpush(h_8);
  goto j_34;
  i_8 :
  goto v_34;
  v_34 :
  TestFunFC(q_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(h_8);
  goto k_34;
  h_8 :
  goto g_8;
  k_34 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(p_8);
  x_35 :
  Cpush(r_8);
  Ccall(_stratego_q_20);
  goto q_8;
  r_8 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_19);
  OneNextSon();
  Rpush(t_8);
  goto x_35;
  t_8 :
  AllBuild();
  goto s_8;
  q_8 :
  Cpop();
  s_8 :
  Return();
  p_8 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(u_8);
  y_35 :
  Cpush(w_8);
  Ccall(_stratego_q_20);
  goto v_8;
  w_8 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("Call",App1("SVar",Egetd(3,1)),App0("Nil")));
  Epopd(3,1);
  OneNextSon();
  Rpush(y_8);
  goto y_35;
  y_8 :
  AllBuild();
  goto x_8;
  v_8 :
  Cpop();
  x_8 :
  Return();
  u_8 :
  MoveTop(2,2);
  Move(1,2,2,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(z_8);
  z_35 :
  Cpush(b_9);
  Ccall(_stratego_q_20);
  goto a_9;
  b_9 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto p_34;
  p_34 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(e_9);
  goto o_34;
  e_9 :
  goto d_9;
  o_34 :
  Epushd(4,2);
  Move(0,3,3,2);
  Move(4,1,3,3);
  Move(4,2,3,4);
  NotNULLd(4,1);
  NotNULLd(1,2);
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(1,2),App2("TCons",Egetd(4,2),App0("TNil")))));
  Ccall(_stratego_h_19);
  Epopd(4,2);
  Return();
  d_9 :
  Epopd(3,4);
  OneNextSon();
  Rpush(f_9);
  goto z_35;
  f_9 :
  AllBuild();
  goto c_9;
  a_9 :
  Cpop();
  c_9 :
  Return();
  z_8 :
  MoveTop(2,3);
  Move(1,3,2,3);
  Epopd(2,3);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_e_19);
  MoveTop(1,4);
  NotNULLd(0,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App3("SDef",Egetd(0,3),Egetd(1,1),Egetd(1,4)));
  Epopd(1,4);
  Return();
  g_8 :
  goto f_8;
  j_34 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  f_8 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_j_19)
  Rpush(g_9);
  k_36 :
  Cpush(i_9);
  Ccall(_stratego_q_20);
  Tset(MakeInt(0));
  goto h_9;
  i_9 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_36;
  c_36 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(l_9);
  goto a_36;
  l_9 :
  goto k_9;
  a_36 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(m_9);
  goto k_36;
  m_9 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_t_19);
  Epopd(1,1);
  Return();
  k_9 :
  Epopd(0,3);
  goto j_9;
  h_9 :
  Cpop();
  j_9 :
  Return();
  g_9 :
ENDPROC

PROC(_stratego_k_19)
  Rpush(n_9);
  s_36 :
  Cpush(p_9);
  Ccall(_stratego_q_20);
  goto o_9;
  p_9 :
  Epushd(0,3);
  MoveTop(0,1);
  goto m_36;
  m_36 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(s_9);
  goto l_36;
  s_9 :
  goto r_9;
  l_36 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(t_9);
  t_36 :
  Cpush(x_9);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_9);
  goto t_36;
  y_9 :
  AllBuild();
  goto u_9;
  x_9 :
  Ccall(_stratego_q_20);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(a_10);
  goto s_36;
  a_10 :
  goto z_9;
  u_9 :
  Cpop();
  z_9 :
  Return();
  t_9 :
  Return();
  r_9 :
  Epopd(0,3);
  goto q_9;
  o_9 :
  Cpop();
  q_9 :
  Return();
  n_9 :
ENDPROC

PROC(_stratego_p_19)
  Rpush(m_10);
  e_37 :
  Epushd(0,3);
  MoveTop(0,1);
  goto w_36;
  w_36 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto x_36;
  x_36 :
  TestFunFC(q_7,&&w_10,Egetd(0,3));
  Cpush(y_10);
  Rpush(z_10);
  goto u_36;
  z_10 :
  goto x_10;
  y_10 :
  Rpush(e_11);
  goto v_36;
  e_11 :
  goto d_11;
  x_10 :
  Cpop();
  d_11 :
  goto r_10;
  w_10 :
  Rpush(r_10);
  goto v_36;
  r_10 :
  goto o_10;
  v_36 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(f_11);
  goto e_37;
  f_11 :
  Return();
  o_10 :
  goto n_10;
  u_36 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  n_10 :
  Epopd(0,3);
  Return();
  m_10 :
ENDPROC

PROC(_stratego_q_19)
  _ST_new();
ENDPROC

PROC(_stratego_r_19)
  _ST_subt();
ENDPROC

PROC(_stratego_s_19)
  _ST_geq();
ENDPROC

PROC(_stratego_t_19)
  _ST_add();
ENDPROC

PROC(_stratego_u_19)
  Epushd(0,7);
  MoveTop(0,1);
  goto n_41;
  n_41 :
  TestFunFC(z_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_41;
  o_41 :
  TestFunFC(z_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto p_41;
  p_41 :
  TestStr(0,4,"D",&&k_11);
  goto q_41;
  q_41 :
  TestFunFC(z_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto r_41;
  r_41 :
  TestFunFC(a_1,&&fail,Egetd(0,7));
  Rpush(j_11);
  goto f_37;
  k_11 :
  TestStr(0,4,"T",&&fail);
  goto s_41;
  s_41 :
  TestFunFC(z_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto t_41;
  t_41 :
  TestFunFC(a_1,&&fail,Egetd(0,7));
  goto u_41;
  u_41 :
  TestInt(0,6,0,&&l_11);
  Cpush(n_11);
  Rpush(o_11);
  goto g_37;
  o_11 :
  goto m_11;
  n_11 :
  Rpush(q_11);
  goto h_37;
  q_11 :
  goto p_11;
  m_11 :
  Cpop();
  p_11 :
  goto j_11;
  l_11 :
  Rpush(j_11);
  goto h_37;
  j_11 :
  goto i_11;
  h_37 :
  Epushd(1,10);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_t_19);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",App0("TNil"),App0("TNil"))));
  MoveTop(2,2);
  goto j_41;
  j_41 :
  TestFunFC(z_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto k_41;
  k_41 :
  TestFunFC(z_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto l_41;
  l_41 :
  TestFunFC(a_1,&&fail,Egetd(2,6));
  Rpush(s_11);
  goto f_39;
  s_11 :
  goto r_11;
  f_39 :
  Epushd(3,3);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(y_11);
  s_50 :
  Epushd(4,7);
  MoveTop(4,1);
  goto p_39;
  p_39 :
  TestFunFC(z_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto q_39;
  q_39 :
  TestFunFC(z_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto r_39;
  r_39 :
  TestFunFC(z_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto s_39;
  s_39 :
  TestFunFC(a_1,&&fail,Egetd(4,7));
  Rpush(a_12);
  goto g_39;
  a_12 :
  goto z_11;
  g_39 :
  Epushd(5,2);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_s_19);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_r_19);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Ccall(_stratego_q_19);
  MoveTop(5,2);
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,2);
  NotNULLd(4,6);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",Egetd(5,2),Egetd(4,6)),App0("TNil")))));
  Cpush(c_12);
  Epushd(6,7);
  MoveTop(6,1);
  goto k_39;
  k_39 :
  TestFunFC(z_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto l_39;
  l_39 :
  TestInt(6,2,0,&&fail);
  goto m_39;
  m_39 :
  TestFunFC(z_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto n_39;
  n_39 :
  TestFunFC(z_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto o_39;
  o_39 :
  TestFunFC(a_1,&&fail,Egetd(6,7));
  Rpush(e_12);
  goto j_39;
  e_12 :
  goto d_12;
  j_39 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  d_12 :
  Epopd(6,7);
  goto b_12;
  c_12 :
  Rpush(g_12);
  goto s_50;
  g_12 :
  goto f_12;
  b_12 :
  Cpop();
  f_12 :
  Epopd(5,2);
  Return();
  z_11 :
  Epopd(4,7);
  Return();
  y_11 :
  MoveTop(3,1);
  goto i_41;
  i_41 :
  TestFunFC(h_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(h_12);
  goto t_39;
  h_12 :
  goto t_11;
  t_39 :
  Epushd(4,14);
  Move(1,2,3,2);
  Move(1,3,3,3);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_p_19);
  MoveTop(4,1);
  Move(1,1,4,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",App2("Cons",Egetd(1,2),Egetd(1,3)),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(i_12);
  t_50 :
  Epushd(5,9);
  MoveTop(5,1);
  goto i_40;
  i_40 :
  TestFunFC(z_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,5,5,1,1);
  goto j_40;
  j_40 :
  TestFunFC(z_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,9,5,5,1);
  goto k_40;
  k_40 :
  TestFunFC(q_7,&&m_12,Egetd(5,6));
  goto l_40;
  l_40 :
  TestFunFC(a_1,&&fail,Egetd(5,9));
  goto m_40;
  m_40 :
  n_12 :
  Rpush(l_12);
  goto v_39;
  m_12 :
  TestFunFC(h_1,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto n_40;
  n_40 :
  TestFunFC(h_1,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto o_40;
  o_40 :
  TestFunFC(a_1,&&fail,Egetd(5,9));
  Rpush(l_12);
  goto w_39;
  l_12 :
  goto k_12;
  w_39 :
  Epushd(6,5);
  NotNULLd(5,3);
  NotNULLd(5,7);
  NotNULLd(5,4);
  NotNULLd(5,8);
  Tset(App2("TCons",App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(5,4),App2("TCons",Egetd(5,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Epushd(7,5);
  MoveTop(7,1);
  goto b_40;
  b_40 :
  TestFunFC(z_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto c_40;
  c_40 :
  TestFunFC(z_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto d_40;
  d_40 :
  TestFunFC(a_1,&&fail,Egetd(7,5));
  Rpush(q_12);
  goto x_39;
  q_12 :
  goto p_12;
  x_39 :
  Epushd(8,3);
  Tdupl();
  Epushd(9,3);
  Ccall(_stratego_q_19);
  MoveTop(9,1);
  Move(8,1,9,1);
  Ccall(_stratego_q_19);
  MoveTop(9,2);
  Move(8,2,9,2);
  Ccall(_stratego_q_19);
  MoveTop(9,3);
  Move(8,3,9,3);
  Epopd(9,3);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,4);
  NotNULLd(8,1);
  NotNULLd(8,2);
  NotNULLd(8,3);
  Tset(App2("TCons",App3("BAM",App2("Call",App1("SVar",Egetd(8,1)),App0("Nil")),App2("Op",ATmakeString("Pair"),App2("Cons",App1("Var",Egetd(8,2)),App2("Cons",App1("Var",Egetd(7,2)),App0("Nil")))),App2("Op",ATmakeString("Pair"),App2("Cons",App1("Var",Egetd(8,3)),App2("Cons",App1("Var",Egetd(7,4)),App0("Nil"))))),App2("TCons",Egetd(8,1),App2("TCons",Egetd(8,2),App2("TCons",App1("Var",Egetd(8,2)),App2("TCons",Egetd(8,3),App2("TCons",App1("Var",Egetd(8,3)),App0("TNil"))))))));
  Epopd(8,3);
  Return();
  p_12 :
  Epopd(7,5);
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Rpush(r_12);
  goto t_50;
  r_12 :
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  MoveTop(6,1);
  goto f_40;
  f_40 :
  TestFunFC(z_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto g_40;
  g_40 :
  TestFunFC(z_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto h_40;
  h_40 :
  TestFunFC(a_1,&&fail,Egetd(6,5));
  Rpush(s_12);
  goto e_40;
  s_12 :
  goto o_12;
  e_40 :
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset(App2("Cons",Egetd(6,2),Egetd(6,4)));
  Return();
  o_12 :
  Epopd(6,5);
  Return();
  k_12 :
  goto j_12;
  v_39 :
  Tset(App0("Nil"));
  Return();
  j_12 :
  Epopd(5,9);
  Return();
  i_12 :
  Rpush(u_12);
  u_50 :
  Cpush(w_12);
  Epushd(5,8);
  MoveTop(5,1);
  Rpush(x_12);
  v_50 :
  Cpush(z_12);
  Ccall(_stratego_q_20);
  goto y_12;
  z_12 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto r_40;
  r_40 :
  TestFunFC(z_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(c_13);
  goto q_40;
  c_13 :
  goto b_13;
  q_40 :
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Return();
  b_13 :
  Epopd(6,3);
  OneNextSon();
  Rpush(d_13);
  goto v_50;
  d_13 :
  AllBuild();
  goto a_13;
  y_12 :
  Cpop();
  a_13 :
  Return();
  x_12 :
  MoveTop(5,2);
  NotNULLd(5,1);
  Tset(Egetd(5,1));
  Rpush(e_13);
  w_50 :
  Cpush(g_13);
  Ccall(_stratego_q_20);
  goto f_13;
  g_13 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto u_40;
  u_40 :
  TestFunFC(z_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(j_13);
  goto t_40;
  j_13 :
  goto i_13;
  t_40 :
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Return();
  i_13 :
  Epopd(6,3);
  OneNextSon();
  Rpush(k_13);
  goto w_50;
  k_13 :
  AllBuild();
  goto h_13;
  f_13 :
  Cpop();
  h_13 :
  Return();
  e_13 :
  MoveTop(5,3);
  NotNULLd(5,2);
  NotNULLd(5,3);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,3),App0("TNil"))));
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Rpush(m_13);
  goto u_50;
  m_13 :
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  MoveTop(5,4);
  goto x_40;
  x_40 :
  TestFunFC(z_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto y_40;
  y_40 :
  TestFunFC(z_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto z_40;
  z_40 :
  TestFunFC(a_1,&&fail,Egetd(5,8));
  Rpush(n_13);
  goto w_40;
  n_13 :
  goto l_13;
  w_40 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset(App2("TCons",Egetd(5,5),Egetd(5,7)));
  Return();
  l_13 :
  Epopd(5,8);
  goto v_12;
  w_12 :
  Rpush(r_13);
  x_50 :
  Cpush(j_14);
  Ccall(_stratego_q_20);
  goto d_14;
  j_14 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_20);
  OneNextSon();
  Rpush(u_14);
  goto x_50;
  u_14 :
  AllBuild();
  goto k_14;
  d_14 :
  Cpop();
  k_14 :
  Return();
  r_13 :
  Tset(App0("TNil"));
  goto o_13;
  v_12 :
  Cpop();
  o_13 :
  Return();
  u_12 :
  MoveTop(4,2);
  goto b_41;
  b_41 :
  TestFunFC(z_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto c_41;
  c_41 :
  TestFunFC(z_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto d_41;
  d_41 :
  TestFunFC(z_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto e_41;
  e_41 :
  TestFunFC(z_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto f_41;
  f_41 :
  TestFunFC(z_0,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,12,4,10,1);
  goto g_41;
  g_41 :
  TestFunFC(z_0,&&fail,Egetd(4,12));
  MoveArg(4,13,4,12,0);
  MoveArg(4,14,4,12,1);
  goto h_41;
  h_41 :
  TestFunFC(a_1,&&fail,Egetd(4,14));
  Rpush(v_14);
  goto a_41;
  v_14 :
  goto t_12;
  a_41 :
  Move(1,4,4,3);
  Move(1,5,4,5);
  Move(1,6,4,7);
  Move(1,7,4,9);
  Move(1,8,4,11);
  Move(1,9,4,13);
  Return();
  t_12 :
  Epopd(4,14);
  Return();
  t_11 :
  Epopd(3,3);
  Return();
  r_11 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,3);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset(App2("Cons",Egetd(1,3),App2("Cons",Egetd(1,6),App2("Cons",Egetd(1,8),App0("Nil")))));
  Ccall(_stratego_k_19);
  MoveTop(1,10);
  NotNULLd(1,5);
  NotNULLd(1,10);
  NotNULLd(1,7);
  NotNULLd(1,2);
  NotNULLd(0,2);
  NotNULLd(1,9);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App3("SDef",App2("Mod",Egetd(0,2),ATmakeString("T")),Egetd(1,5),App2("Scope",App2("Cons",Egetd(1,2),Egetd(1,10)),App1("SRule",App3("Rule",App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),Egetd(1,7)),App2("Cons",App1("Var",Egetd(1,2)),App0("Nil")))),App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),Egetd(1,9)),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App1("Seqs",Egetd(1,4)))))));
  Epopd(1,10);
  Return();
  i_11 :
  goto h_11;
  g_37 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_q_19);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App3("SDef",App2("Mod",Egetd(0,2),ATmakeString("T")),App0("Nil"),App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App1("SRule",App3("Rule",App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),App0("Nil")),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),App0("Nil")),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App0("Id"))))));
  Epopd(1,1);
  Return();
  h_11 :
  goto g_11;
  f_37 :
  Epushd(1,12);
  Tdupl();
  Epushd(2,6);
  Ccall(_stratego_q_19);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",App1("Var",Egetd(1,1)),App0("TNil"))));
  MoveTop(2,2);
  goto v_38;
  v_38 :
  TestFunFC(z_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto w_38;
  w_38 :
  TestFunFC(z_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto x_38;
  x_38 :
  TestFunFC(a_1,&&fail,Egetd(2,6));
  Rpush(x_14);
  goto k_37;
  x_14 :
  goto w_14;
  k_37 :
  Epushd(3,13);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(y_14);
  m_50 :
  Epushd(4,7);
  MoveTop(4,1);
  goto y_37;
  y_37 :
  TestFunFC(z_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto z_37;
  z_37 :
  TestFunFC(z_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto a_38;
  a_38 :
  TestFunFC(z_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto b_38;
  b_38 :
  TestFunFC(a_1,&&fail,Egetd(4,7));
  Rpush(a_15);
  goto l_37;
  a_15 :
  goto z_14;
  l_37 :
  Epushd(5,4);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_s_19);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_r_19);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Tdupl();
  Epushd(6,3);
  Ccall(_stratego_q_19);
  MoveTop(6,1);
  Move(5,2,6,1);
  Ccall(_stratego_q_19);
  MoveTop(6,2);
  Move(5,3,6,2);
  Ccall(_stratego_q_19);
  MoveTop(6,3);
  Move(5,4,6,3);
  Epopd(6,3);
  Tpop();
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,2);
  NotNULLd(5,3);
  NotNULLd(5,4);
  NotNULLd(4,6);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",App2("TCons",App3("BAM",App2("Call",App1("SVar",Egetd(5,2)),App0("Nil")),App2("Op",ATmakeString("Pair"),App2("Cons",App1("Var",Egetd(5,3)),App2("Cons",Egetd(4,4),App0("Nil")))),App1("Var",Egetd(5,4))),App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,3),App2("TCons",App1("Var",Egetd(5,3)),App2("TCons",Egetd(5,4),App2("TCons",App1("Var",Egetd(5,4)),App0("TNil"))))))),Egetd(4,6)),App0("TNil")))));
  Cpush(c_15);
  Epushd(6,7);
  MoveTop(6,1);
  goto t_37;
  t_37 :
  TestFunFC(z_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto u_37;
  u_37 :
  TestInt(6,2,0,&&fail);
  goto v_37;
  v_37 :
  TestFunFC(z_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto w_37;
  w_37 :
  TestFunFC(z_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto x_37;
  x_37 :
  TestFunFC(a_1,&&fail,Egetd(6,7));
  Rpush(h_15);
  goto s_37;
  h_15 :
  goto d_15;
  s_37 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  d_15 :
  Epopd(6,7);
  goto b_15;
  c_15 :
  Rpush(j_15);
  goto m_50;
  j_15 :
  goto i_15;
  b_15 :
  Cpop();
  i_15 :
  Epopd(5,4);
  Return();
  z_14 :
  Epopd(4,7);
  Return();
  y_14 :
  Rpush(l_15);
  n_50 :
  Cpush(n_15);
  Epushd(4,8);
  MoveTop(4,1);
  Rpush(o_15);
  o_50 :
  Cpush(q_15);
  Ccall(_stratego_q_20);
  goto p_15;
  q_15 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto e_38;
  e_38 :
  TestFunFC(z_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(t_15);
  goto d_38;
  t_15 :
  goto s_15;
  d_38 :
  NotNULLd(5,2);
  Tset(Egetd(5,2));
  Return();
  s_15 :
  Epopd(5,3);
  OneNextSon();
  Rpush(w_15);
  goto o_50;
  w_15 :
  AllBuild();
  goto r_15;
  p_15 :
  Cpop();
  r_15 :
  Return();
  o_15 :
  MoveTop(4,2);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Rpush(x_15);
  p_50 :
  Cpush(a_16);
  Ccall(_stratego_q_20);
  goto z_15;
  a_16 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto h_38;
  h_38 :
  TestFunFC(z_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(d_16);
  goto g_38;
  d_16 :
  goto c_16;
  g_38 :
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Return();
  c_16 :
  Epopd(5,3);
  OneNextSon();
  Rpush(e_16);
  goto p_50;
  e_16 :
  AllBuild();
  goto b_16;
  z_15 :
  Cpop();
  b_16 :
  Return();
  x_15 :
  MoveTop(4,3);
  NotNULLd(4,2);
  NotNULLd(4,3);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,3),App0("TNil"))));
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Rpush(g_16);
  goto n_50;
  g_16 :
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  MoveTop(4,4);
  goto k_38;
  k_38 :
  TestFunFC(z_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto l_38;
  l_38 :
  TestFunFC(z_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto m_38;
  m_38 :
  TestFunFC(a_1,&&fail,Egetd(4,8));
  Rpush(h_16);
  goto j_38;
  h_16 :
  goto f_16;
  j_38 :
  NotNULLd(4,5);
  NotNULLd(4,7);
  Tset(App2("TCons",Egetd(4,5),Egetd(4,7)));
  Return();
  f_16 :
  Epopd(4,8);
  goto m_15;
  n_15 :
  Rpush(j_16);
  q_50 :
  Cpush(l_16);
  Ccall(_stratego_q_20);
  goto k_16;
  l_16 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_20);
  OneNextSon();
  Rpush(n_16);
  goto q_50;
  n_16 :
  AllBuild();
  goto m_16;
  k_16 :
  Cpop();
  m_16 :
  Return();
  j_16 :
  Tset(App0("TNil"));
  goto i_16;
  m_15 :
  Cpop();
  i_16 :
  Return();
  l_15 :
  MoveTop(3,1);
  goto o_38;
  o_38 :
  TestFunFC(z_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto p_38;
  p_38 :
  TestFunFC(z_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto q_38;
  q_38 :
  TestFunFC(z_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto r_38;
  r_38 :
  TestFunFC(z_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto s_38;
  s_38 :
  TestFunFC(z_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto t_38;
  t_38 :
  TestFunFC(z_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto u_38;
  u_38 :
  TestFunFC(a_1,&&fail,Egetd(3,13));
  Rpush(o_16);
  goto n_38;
  o_16 :
  goto k_15;
  n_38 :
  Move(1,2,3,2);
  Move(1,3,3,4);
  Move(1,4,3,6);
  Move(1,5,3,8);
  Move(1,6,3,10);
  Move(1,7,3,12);
  Return();
  k_15 :
  Epopd(3,13);
  Return();
  w_14 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  MoveTop(1,8);
  goto a_39;
  a_39 :
  TestFunFC(z_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto b_39;
  b_39 :
  TestFunFC(z_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto c_39;
  c_39 :
  TestFunFC(a_1,&&fail,Egetd(1,12));
  Rpush(q_16);
  goto y_38;
  q_16 :
  goto p_16;
  y_38 :
  Epushd(2,1);
  NotNULLd(1,9);
  Tset(Egetd(1,9));
  Rpush(r_16);
  r_50 :
  Cpush(t_16);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_16);
  goto r_50;
  u_16 :
  AllBuild();
  goto s_16;
  t_16 :
  Ccall(_stratego_q_20);
  NotNULLd(1,11);
  Tset(Egetd(1,11));
  goto v_16;
  s_16 :
  Cpop();
  v_16 :
  Return();
  r_16 :
  MoveTop(2,1);
  NotNULLd(1,3);
  NotNULLd(2,1);
  NotNULLd(1,5);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(1,7);
  NotNULLd(1,2);
  Tset(App3("SDef",App2("Mod",Egetd(0,2),ATmakeString("D")),Egetd(1,3),App2("Scope",App2("Cons",Egetd(1,1),Egetd(2,1)),App1("SRule",App3("Rule",App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),Egetd(1,5)),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App2("Op",Egetd(0,2),Egetd(1,7)),App1("Seqs",Egetd(1,2)))))));
  Epopd(2,1);
  Return();
  p_16 :
  Epopd(1,12);
  Return();
  g_11 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_x_19)
  Epushd(0,11);
  MoveTop(0,3);
  goto m_51;
  m_51 :
  TestFunFC(z_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,9,0,3,1);
  goto n_51;
  n_51 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto o_51;
  o_51 :
  TestFunFC(z_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto p_51;
  p_51 :
  TestFunFC(a_1,&&fail,Egetd(0,8));
  goto q_51;
  q_51 :
  TestFunFC(z_0,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,11,0,9,1);
  goto r_51;
  r_51 :
  TestFunFC(a_1,&&fail,Egetd(0,11));
  goto s_51;
  s_51 :
  TestInt(0,7,0,&&a_17);
  goto t_51;
  t_51 :
  TestFunFC(c_17,&&b_17,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(e_17);
  Rpush(f_17);
  goto y_50;
  f_17 :
  goto d_17;
  e_17 :
  Ccontinue(g_17);
  Rpush(h_17);
  goto z_50;
  h_17 :
  goto d_17;
  g_17 :
  Rpush(j_17);
  goto a_51;
  j_17 :
  goto i_17;
  d_17 :
  Cpop();
  i_17 :
  goto z_16;
  b_17 :
  Cpush(l_17);
  Rpush(m_17);
  goto z_50;
  m_17 :
  goto k_17;
  l_17 :
  Rpush(o_17);
  goto a_51;
  o_17 :
  goto n_17;
  k_17 :
  Cpop();
  n_17 :
  goto z_16;
  a_17 :
  goto u_51;
  u_51 :
  TestFunFC(c_17,&&p_17,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(r_17);
  Rpush(s_17);
  goto y_50;
  s_17 :
  goto q_17;
  r_17 :
  Rpush(u_17);
  goto z_50;
  u_17 :
  goto t_17;
  q_17 :
  Cpop();
  t_17 :
  goto z_16;
  p_17 :
  Rpush(z_16);
  goto z_50;
  z_16 :
  goto y_16;
  a_51 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(v_17);
  m_53 :
  Cpush(z_17);
  Ccall(_stratego_q_20);
  goto w_17;
  z_17 :
  Ccontinue(a_18);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto i_51;
  i_51 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(c_18);
  goto h_51;
  c_18 :
  goto b_18;
  h_51 :
  Move(0,5,3,2);
  Return();
  b_18 :
  Epopd(3,4);
  OneNextSon();
  Rpush(f_18);
  goto m_53;
  f_18 :
  AllBuild();
  goto w_17;
  a_18 :
  Epushd(3,3);
  MoveTop(3,1);
  goto k_51;
  k_51 :
  TestFunFC(h_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(m_18);
  goto j_51;
  m_18 :
  goto l_18;
  j_51 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(t_18);
  goto m_53;
  t_18 :
  Return();
  l_18 :
  Epopd(3,3);
  goto k_18;
  w_17 :
  Cpop();
  k_18 :
  Return();
  v_17 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_i_19);
  Epopd(1,1);
  Return();
  y_16 :
  goto x_16;
  z_50 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(u_18);
  l_53 :
  Cpush(y_18);
  Ccall(_stratego_q_20);
  goto x_18;
  y_18 :
  Ccontinue(z_18);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  Move(0,5,3,1);
  Epopd(3,1);
  OneNextSon();
  Tdupl();
  Epushd(3,1);
  Ccall(_stratego_j_19);
  MoveTop(3,1);
  Move(0,7,3,1);
  Epopd(3,1);
  Tpop();
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(b_19);
  goto l_53;
  b_19 :
  AllBuild();
  goto x_18;
  z_18 :
  Epushd(3,3);
  MoveTop(3,1);
  goto f_51;
  f_51 :
  TestFunFC(h_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_20);
  goto e_51;
  s_20 :
  goto w_19;
  e_51 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(u_20);
  goto l_53;
  u_20 :
  Return();
  w_19 :
  Epopd(3,3);
  goto l_19;
  x_18 :
  Cpop();
  l_19 :
  Return();
  u_18 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_i_19);
  Epopd(1,1);
  Return();
  x_16 :
  goto w_16;
  y_50 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,7),App0("TNil")))));
  Ccall(_stratego_u_19);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  w_16 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_y_19)
  Epushd(0,7);
  MoveTop(0,1);
  goto p_54;
  p_54 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto q_54;
  q_54 :
  TestFunFC(z_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto r_54;
  r_54 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto s_54;
  s_54 :
  TestFunFC(a_1,&&fail,Egetd(0,6));
  Rpush(f_21);
  goto n_53;
  f_21 :
  goto w_20;
  n_53 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto p_53;
  p_53 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto q_53;
  q_53 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_53;
  r_53 :
  TestFunFC(a_1,&&fail,Egetd(2,5));
  Rpush(h_21);
  goto o_53;
  h_21 :
  goto g_21;
  o_53 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  g_21 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto t_53;
  t_53 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto u_53;
  u_53 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_53;
  v_53 :
  TestFunFC(a_1,&&fail,Egetd(2,5));
  Rpush(j_21);
  goto s_53;
  j_21 :
  goto i_21;
  s_53 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  i_21 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(k_21);
  t_56 :
  Epushd(2,9);
  MoveTop(2,1);
  goto c_54;
  c_54 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto d_54;
  d_54 :
  TestFunFC(q_7,&&q_21,Egetd(2,2));
  goto e_54;
  e_54 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto f_54;
  f_54 :
  TestFunFC(q_7,&&fail,Egetd(2,6));
  goto g_54;
  g_54 :
  TestFunFC(a_1,&&fail,Egetd(2,9));
  Rpush(n_21);
  goto w_53;
  q_21 :
  TestFunFC(h_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto h_54;
  h_54 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto i_54;
  i_54 :
  TestFunFC(h_1,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto j_54;
  j_54 :
  TestFunFC(a_1,&&fail,Egetd(2,9));
  Rpush(n_21);
  goto x_53;
  n_21 :
  goto m_21;
  x_53 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Rpush(t_21);
  goto t_56;
  t_21 :
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto z_53;
  z_53 :
  TestFunFC(z_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto a_54;
  a_54 :
  TestFunFC(z_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto b_54;
  b_54 :
  TestFunFC(a_1,&&fail,Egetd(3,5));
  Rpush(u_21);
  goto y_53;
  u_21 :
  goto s_21;
  y_53 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  s_21 :
  Epopd(3,5);
  Return();
  m_21 :
  goto l_21;
  w_53 :
  Tset(App0("Nil"));
  Return();
  l_21 :
  Epopd(2,9);
  Return();
  k_21 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto m_54;
  m_54 :
  TestFunFC(z_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto n_54;
  n_54 :
  TestFunFC(z_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto o_54;
  o_54 :
  TestFunFC(a_1,&&fail,Egetd(1,9));
  Rpush(b_22);
  goto l_54;
  b_22 :
  goto a_22;
  l_54 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(f_22);
  u_56 :
  Cpush(i_22);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_22);
  goto u_56;
  s_22 :
  AllBuild();
  goto g_22;
  i_22 :
  Ccall(_stratego_q_20);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto u_22;
  g_22 :
  Cpop();
  u_22 :
  Return();
  f_22 :
  Return();
  a_22 :
  Epopd(1,9);
  Return();
  w_20 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_z_19)
  Epushd(0,5);
  MoveTop(0,5);
  goto l_57;
  l_57 :
  TestFunFC(z_0,&&e_23,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto m_57;
  m_57 :
  TestFunFC(z_0,&&f_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto n_57;
  n_57 :
  TestFunFC(a_1,&&j_23,Egetd(0,4));
  Cpush(m_23);
  Rpush(w_23);
  goto v_56;
  w_23 :
  goto k_23;
  m_23 :
  Rpush(a_24);
  goto w_56;
  a_24 :
  goto y_23;
  k_23 :
  Cpop();
  y_23 :
  goto y_22;
  j_23 :
  Rpush(y_22);
  goto w_56;
  f_23 :
  Rpush(y_22);
  goto w_56;
  e_23 :
  Rpush(y_22);
  goto w_56;
  y_22 :
  goto x_22;
  w_56 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(b_24);
  z_58 :
  Cpush(i_24);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Cpush(n_24);
  Epushd(1,7);
  MoveTop(1,1);
  goto c_57;
  c_57 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto d_57;
  d_57 :
  TestFunFC(z_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto e_57;
  e_57 :
  TestFunFC(z_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto f_57;
  f_57 :
  TestFunFC(a_1,&&fail,Egetd(1,6));
  Rpush(q_24);
  goto b_57;
  q_24 :
  goto o_24;
  b_57 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  o_24 :
  Epopd(1,7);
  goto j_24;
  n_24 :
  Ccall(_stratego_y_19);
  goto a_25;
  j_24 :
  Cpop();
  a_25 :
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  goto c_24;
  i_24 :
  Epushd(1,7);
  MoveTop(1,1);
  goto h_57;
  h_57 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_57;
  i_57 :
  TestFunFC(z_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto j_57;
  j_57 :
  TestFunFC(h_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto k_57;
  k_57 :
  TestFunFC(a_1,&&fail,Egetd(1,7));
  Rpush(n_25);
  goto g_57;
  n_25 :
  goto m_25;
  g_57 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  m_25 :
  Epopd(1,7);
  goto d_25;
  c_24 :
  Cpop();
  d_25 :
  Cpush(p_25);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_20);
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  goto o_25;
  p_25 :
  Rpush(x_25);
  goto z_58;
  x_25 :
  goto r_25;
  o_25 :
  Cpop();
  r_25 :
  Return();
  b_24 :
  Return();
  x_22 :
  goto w_22;
  v_56 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(y_25);
  x_58 :
  Cpush(d_26);
  Ccall(_stratego_q_20);
  goto c_26;
  d_26 :
  Ccontinue(j_26);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_57;
  a_57 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(t_26);
  goto x_56;
  t_26 :
  goto s_26;
  x_56 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(v_26);
  y_58 :
  Cpush(d_27);
  Epushd(2,3);
  MoveTop(2,1);
  goto z_56;
  z_56 :
  TestFunFC(h_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(i_27);
  goto y_56;
  i_27 :
  goto e_27;
  y_56 :
  Move(1,2,2,2);
  Return();
  e_27 :
  Epopd(2,3);
  goto x_26;
  d_27 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_27);
  goto y_58;
  o_27 :
  AllBuild();
  goto j_27;
  x_26 :
  Cpop();
  j_27 :
  Return();
  v_26 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(s_27);
  goto x_58;
  s_27 :
  Return();
  s_26 :
  Epopd(1,3);
  goto c_26;
  j_26 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_27);
  goto x_58;
  w_27 :
  AllBuild();
  goto t_27;
  c_26 :
  Cpop();
  t_27 :
  Return();
  y_25 :
  Return();
  w_22 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_a_20)
  Epushd(0,8);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App2("TCons",ATmakeString("main"),App2("TCons",MakeInt(0),App0("TNil"))),App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil")))));
  MoveTop(0,2);
  goto z_60;
  z_60 :
  TestFunFC(z_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto a_61;
  a_61 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto b_61;
  b_61 :
  TestFunFC(z_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto c_61;
  c_61 :
  TestFunFC(a_1,&&fail,Egetd(0,8));
  Rpush(y_27);
  goto b_59;
  y_27 :
  goto x_27;
  b_59 :
  Epushd(1,7);
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset(App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,7),App2("TCons",App0("Nil"),App0("TNil")))))));
  Rpush(e_28);
  j_65 :
  Epushd(2,13);
  MoveTop(2,1);
  goto x_59;
  x_59 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto y_59;
  y_59 :
  TestFunFC(h_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto z_59;
  z_59 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto a_60;
  a_60 :
  TestFunFC(z_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto b_60;
  b_60 :
  TestFunFC(z_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto c_60;
  c_60 :
  TestFunFC(z_0,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto d_60;
  d_60 :
  TestFunFC(a_1,&&fail,Egetd(2,13));
  Cpush(p_29);
  Rpush(q_29);
  goto c_59;
  q_29 :
  goto j_29;
  p_29 :
  Rpush(j_30);
  goto d_59;
  j_30 :
  goto h_30;
  j_29 :
  Cpop();
  h_30 :
  goto i_29;
  i_29 :
  goto q_28;
  d_59 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,6),App2("TCons",Egetd(2,8),App2("TCons",Egetd(2,10),App2("TCons",App2("Cons",Egetd(2,3),Egetd(2,12)),App0("TNil")))))));
  Return();
  q_28 :
  goto f_28;
  c_59 :
  Epushd(3,8);
  Tdupl();
  Epushd(4,3);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,8),App0("TNil"))));
  Ccall(_stratego_x_19);
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Ccall(_stratego_d_19);
  MoveTop(4,2);
  Move(3,2,4,2);
  NotNULLd(3,2);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(2,6),App0("TNil"))));
  Ccall(_stratego_z_19);
  MoveTop(4,3);
  Move(3,3,4,3);
  Epopd(4,3);
  Tpop();
  NotNULLd(3,3);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,4),App0("TNil"))));
  MoveTop(3,4);
  goto u_59;
  u_59 :
  TestFunFC(z_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto v_59;
  v_59 :
  TestFunFC(z_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto w_59;
  w_59 :
  TestFunFC(a_1,&&fail,Egetd(3,8));
  Rpush(p_30);
  goto h_59;
  p_30 :
  goto k_30;
  h_59 :
  Epushd(4,6);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(r_30);
  k_65 :
  Cpush(t_30);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_30);
  goto k_65;
  u_30 :
  AllBuild();
  goto s_30;
  t_30 :
  Ccall(_stratego_q_20);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto v_30;
  s_30 :
  Cpop();
  v_30 :
  Return();
  r_30 :
  MoveTop(4,1);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,6),App0("TNil"))));
  MoveTop(4,2);
  goto r_59;
  r_59 :
  TestFunFC(z_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto s_59;
  s_59 :
  TestFunFC(z_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto t_59;
  t_59 :
  TestFunFC(a_1,&&fail,Egetd(4,6));
  Rpush(x_30);
  goto j_59;
  x_30 :
  goto w_30;
  j_59 :
  Epushd(5,8);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(p_31);
  l_65 :
  Cpush(d_32);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_32);
  goto l_65;
  e_32 :
  AllBuild();
  goto b_32;
  d_32 :
  Ccall(_stratego_q_20);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto f_32;
  b_32 :
  Cpop();
  f_32 :
  Return();
  p_31 :
  MoveTop(5,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil")))));
  MoveTop(5,2);
  goto n_59;
  n_59 :
  TestFunFC(z_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto o_59;
  o_59 :
  TestFunFC(z_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto p_59;
  p_59 :
  TestFunFC(z_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto q_59;
  q_59 :
  TestFunFC(a_1,&&fail,Egetd(5,8));
  Rpush(h_32);
  goto l_59;
  h_32 :
  goto g_32;
  l_59 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset(App2("Cons",Egetd(5,5),Egetd(5,7)));
  NotNULLd(4,1);
  NotNULLd(5,1);
  NotNULLd(2,8);
  NotNULLd(5,5);
  NotNULLd(5,7);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(5,1),App2("TCons",Egetd(2,8),App2("TCons",App2("Cons",Egetd(5,5),Egetd(5,7)),App2("TCons",Egetd(2,12),App0("TNil")))))));
  Return();
  g_32 :
  Epopd(5,8);
  Return();
  w_30 :
  Epopd(4,6);
  Return();
  k_30 :
  Epopd(3,8);
  Return();
  f_28 :
  Cpush(s_32);
  Epushd(3,11);
  MoveTop(3,1);
  goto f_60;
  f_60 :
  TestFunFC(z_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto g_60;
  g_60 :
  TestFunFC(q_7,&&fail,Egetd(3,2));
  goto h_60;
  h_60 :
  TestFunFC(z_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto i_60;
  i_60 :
  TestFunFC(z_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto j_60;
  j_60 :
  TestFunFC(z_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto k_60;
  k_60 :
  TestFunFC(z_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto l_60;
  l_60 :
  TestFunFC(a_1,&&fail,Egetd(3,11));
  Rpush(u_32);
  goto e_60;
  u_32 :
  goto t_32;
  e_60 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,10),App0("TNil"))));
  Return();
  t_32 :
  Epopd(3,11);
  goto r_32;
  s_32 :
  Rpush(b_33);
  goto j_65;
  b_33 :
  goto a_33;
  r_32 :
  Cpop();
  a_33 :
  Epopd(2,13);
  Return();
  e_28 :
  MoveTop(1,1);
  goto u_60;
  u_60 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_60;
  v_60 :
  TestFunFC(z_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto w_60;
  w_60 :
  TestFunFC(q_7,&&g_33,Egetd(1,4));
  goto x_60;
  x_60 :
  TestFunFC(a_1,&&fail,Egetd(1,7));
  Rpush(d_33);
  goto m_60;
  g_33 :
  TestFunFC(h_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto y_60;
  y_60 :
  TestFunFC(a_1,&&fail,Egetd(1,7));
  Rpush(d_33);
  goto n_60;
  d_33 :
  goto a_28;
  n_60 :
  Tdupl();
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App2("Cons",Egetd(1,5),Egetd(1,6)));
  Rpush(i_33);
  m_65 :
  Cpush(v_33);
  Ccall(_stratego_q_20);
  goto j_33;
  v_33 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,3);
  goto q_60;
  q_60 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_60;
  r_60 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto s_60;
  s_60 :
  TestFunFC(a_1,&&fail,Egetd(2,7));
  goto t_60;
  t_60 :
  TestFunFC(c_17,&&h_34,Egetd(2,4));
  MoveArg(2,1,2,4,0);
  MoveArg(2,2,2,4,1);
  Cpush(m_34);
  Rpush(n_34);
  goto o_60;
  n_34 :
  goto l_34;
  m_34 :
  Rpush(r_34);
  goto p_60;
  r_34 :
  goto q_34;
  l_34 :
  Cpop();
  q_34 :
  goto g_34;
  h_34 :
  Rpush(g_34);
  goto p_60;
  g_34 :
  goto f_34;
  p_60 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  Tset(App2("Cons",ATmakeString("error: operator "),App2("Cons",Egetd(2,4),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(2,6),App2("Cons",ATmakeString(" undefined "),App0("Nil")))))));
  Ccall(_stratego_c_19);
  Return();
  f_34 :
  goto y_33;
  o_60 :
  NotNULLd(2,1);
  NotNULLd(2,2);
  NotNULLd(2,6);
  Tset(App2("Cons",ATmakeString("error: operator "),App2("Cons",Egetd(2,1),App2("Cons",ATmakeString("^"),App2("Cons",Egetd(2,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(2,6),App2("Cons",ATmakeString(" undefined "),App0("Nil")))))))));
  Ccall(_stratego_c_19);
  Return();
  y_33 :
  Epopd(2,7);
  OneNextSon();
  Rpush(c_35);
  goto m_65;
  c_35 :
  AllBuild();
  goto w_33;
  j_33 :
  Cpop();
  w_33 :
  Return();
  i_33 :
  Tpop();
  Tset(MakeInt(1));
  Ccall(_stratego_k_20);
  Return();
  a_28 :
  goto z_27;
  m_60 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  z_27 :
  Epopd(1,7);
  Return();
  x_27 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_b_20)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_65;
  o_65 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  Rpush(e_35);
  goto n_65;
  e_35 :
  goto d_35;
  n_65 :
  Return();
  d_35 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_20)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_l_20);
  Tset(MakeInt(1));
  Ccall(_stratego_k_20);
ENDPROC

PROC(_stratego_d_20)
  Epushd(0,2);
  Tdupl();
  Cpush(g_35);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Cpush(m_35);
  Tdupl();
  Rpush(w_35);
  m_66 :
  Cpush(g_36);
  Epushd(1,3);
  MoveTop(1,1);
  goto r_65;
  r_65 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto s_65;
  s_65 :
  TestFunFC(q_36,&&fail,Egetd(1,2));
  Rpush(j_36);
  goto q_65;
  j_36 :
  goto h_36;
  q_65 :
  Return();
  h_36 :
  Epopd(1,3);
  goto b_36;
  g_36 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_37);
  goto m_66;
  b_37 :
  AllBuild();
  goto r_36;
  b_36 :
  Cpop();
  r_36 :
  Return();
  w_35 :
  Cpop();
  Crestore();
  Cjump();
  m_35 :
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Rpush(c_37);
  n_66 :
  Cpush(i_37);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_65;
  u_65 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_65;
  v_65 :
  TestFunFC(n_37,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_37);
  goto t_65;
  m_37 :
  goto j_37;
  t_65 :
  Move(0,2,1,3);
  Return();
  j_37 :
  Epopd(1,4);
  goto d_37;
  i_37 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_37);
  goto n_66;
  p_37 :
  AllBuild();
  goto o_37;
  d_37 :
  Cpop();
  o_37 :
  Return();
  c_37 :
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Rpush(q_37);
  o_66 :
  Cpush(c_38);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_65;
  x_65 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_65;
  y_65 :
  TestFunFC(z_38,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_38);
  goto w_65;
  i_38 :
  goto f_38;
  w_65 :
  Move(0,1,1,3);
  Return();
  f_38 :
  Epopd(1,4);
  goto r_37;
  c_38 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_39);
  goto o_66;
  e_39 :
  AllBuild();
  goto d_39;
  r_37 :
  Cpop();
  d_39 :
  Return();
  q_37 :
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_l_20);
  goto f_35;
  g_35 :
  goto h_39;
  f_35 :
  Cpop();
  h_39 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_k_20);
  Epopd(0,2);
ENDPROC

PROC(_stratego_e_20)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_f_20)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_g_20)
  Epushd(0,1);
  Tdupl();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Cpush(u_39);
  Rpush(y_39);
  o_67 :
  Cpush(a_40);
  Epushd(1,4);
  MoveTop(1,1);
  goto q_66;
  q_66 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto r_66;
  r_66 :
  TestFunFC(v_40,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_40);
  goto p_66;
  s_40 :
  goto p_40;
  p_66 :
  Move(0,1,1,3);
  Return();
  p_40 :
  Epopd(1,4);
  goto z_39;
  a_40 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_42);
  goto o_67;
  c_42 :
  AllBuild();
  goto m_41;
  z_39 :
  Cpop();
  m_41 :
  Return();
  y_39 :
  goto i_39;
  u_39 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto d_42;
  i_39 :
  Cpop();
  d_42 :
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  Cpush(s_42);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Rpush(a_43);
  p_67 :
  Cpush(c_43);
  Epushd(1,3);
  MoveTop(1,1);
  goto x_66;
  x_66 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_66;
  y_66 :
  TestFunFC(g_43,&&fail,Egetd(1,2));
  Rpush(f_43);
  goto w_66;
  f_43 :
  goto e_43;
  w_66 :
  Return();
  e_43 :
  Epopd(1,3);
  goto b_43;
  c_43 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_43);
  goto p_67;
  o_43 :
  AllBuild();
  goto n_43;
  b_43 :
  Cpop();
  n_43 :
  Return();
  a_43 :
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_20);
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  goto r_42;
  s_42 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_20);
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  goto w_43;
  r_42 :
  Cpop();
  w_43 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_20)
  _ST_dtime();
ENDPROC

PROC(_stratego_i_20)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_j_20)
  Epushd(0,3);
  Tdupl();
  Cpush(z_43);
  Rpush(d_44);
  j_68 :
  Cpush(g_44);
  Epushd(1,4);
  MoveTop(1,1);
  goto r_67;
  r_67 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto s_67;
  s_67 :
  TestFunFC(n_44,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_44);
  goto q_67;
  l_44 :
  goto k_44;
  q_67 :
  Move(0,1,1,3);
  Return();
  k_44 :
  Epopd(1,4);
  goto e_44;
  g_44 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_44);
  goto j_68;
  u_44 :
  AllBuild();
  goto t_44;
  e_44 :
  Cpop();
  t_44 :
  Return();
  d_44 :
  goto x_43;
  z_43 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto n_45;
  x_43 :
  Cpop();
  n_45 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_i_20);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_k_20)
  _ST_exit();
ENDPROC

PROC(_stratego_l_20)
  _ST_printnl();
ENDPROC

PROC(_stratego_m_20)
  Epushd(0,1);
  Tdupl();
  Rpush(o_45);
  s_68 :
  Cpush(r_45);
  Epushd(1,4);
  MoveTop(1,1);
  goto l_68;
  l_68 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto m_68;
  m_68 :
  TestFunFC(z_38,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_45);
  goto k_68;
  t_45 :
  goto s_45;
  k_68 :
  Move(0,1,1,3);
  Return();
  s_45 :
  Epopd(1,4);
  goto p_45;
  r_45 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_45);
  goto s_68;
  x_45 :
  AllBuild();
  goto w_45;
  p_45 :
  Cpop();
  w_45 :
  Return();
  o_45 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_l_20);
  Tset(MakeInt(1));
  Ccall(_stratego_k_20);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_20)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_68;
  u_68 :
  TestFunFC(p_46,&&fail,Egetd(0,1));
  Rpush(o_46);
  goto t_68;
  o_46 :
  goto i_46;
  t_68 :
  Return();
  i_46 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_20)
  Tdupl();
  x_46 :
  TestFunTop(h_1);
  Cpush(y_46);
  Arg(0);
  Cpush(d_47);
  Ccall(_stratego_n_20);
  goto b_47;
  d_47 :
  Epushd(0,2);
  MoveTop(0,1);
  goto x_68;
  x_68 :
  TestFunFC(b_48,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(a_48);
  goto w_68;
  a_48 :
  goto m_47;
  w_68 :
  Return();
  m_47 :
  Epopd(0,2);
  goto l_47;
  b_47 :
  Cpop();
  l_47 :
  Tpop();
  Cpop();
  goto z_46;
  y_46 :
  Arg(1);
  Tdrop();
  goto x_46;
  z_46 :
  Tpop();
  Ccall(_stratego_m_20);
ENDPROC

PROC(_stratego_p_20)
  Epushd(0,5);
  MoveTop(0,3);
  goto r_71;
  r_71 :
  TestFunFC(h_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto s_71;
  s_71 :
  TestFunFC(h_1,&&w_49,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(b_51);
  Rpush(c_51);
  goto b_69;
  c_51 :
  goto l_50;
  b_51 :
  Ccontinue(d_51);
  Rpush(g_51);
  goto c_69;
  g_51 :
  goto l_50;
  d_51 :
  Ccontinue(l_51);
  Rpush(g_52);
  goto d_69;
  g_52 :
  goto l_50;
  l_51 :
  Ccontinue(h_52);
  Rpush(i_52);
  goto e_69;
  i_52 :
  goto l_50;
  h_52 :
  Ccontinue(j_52);
  Rpush(m_52);
  goto f_69;
  m_52 :
  goto l_50;
  j_52 :
  Ccontinue(n_52);
  Rpush(o_52);
  goto g_69;
  o_52 :
  goto l_50;
  n_52 :
  Ccontinue(v_52);
  Rpush(w_52);
  goto h_69;
  w_52 :
  goto l_50;
  v_52 :
  Ccontinue(y_52);
  Rpush(z_52);
  goto i_69;
  z_52 :
  goto l_50;
  y_52 :
  Ccontinue(i_53);
  Rpush(j_53);
  goto j_69;
  j_53 :
  goto l_50;
  i_53 :
  Ccontinue(k_54);
  Rpush(d_55);
  goto k_69;
  d_55 :
  goto l_50;
  k_54 :
  Ccontinue(e_55);
  Rpush(f_55);
  goto l_69;
  f_55 :
  goto l_50;
  e_55 :
  Ccontinue(z_55);
  Rpush(a_56);
  goto m_69;
  a_56 :
  goto l_50;
  z_55 :
  Ccontinue(b_56);
  Rpush(c_56);
  goto n_69;
  c_56 :
  goto l_50;
  b_56 :
  Ccontinue(i_56);
  Rpush(j_56);
  goto o_69;
  j_56 :
  goto l_50;
  i_56 :
  Rpush(r_56);
  goto p_69;
  r_56 :
  goto l_56;
  l_50 :
  Cpop();
  l_56 :
  goto v_49;
  w_49 :
  Cpush(t_57);
  Rpush(u_57);
  goto b_69;
  u_57 :
  goto s_56;
  t_57 :
  Ccontinue(y_57);
  Rpush(z_57);
  goto c_69;
  z_57 :
  goto s_56;
  y_57 :
  Ccontinue(d_58);
  Rpush(l_58);
  goto d_69;
  l_58 :
  goto s_56;
  d_58 :
  Ccontinue(u_58);
  Rpush(v_58);
  goto e_69;
  v_58 :
  goto s_56;
  u_58 :
  Ccontinue(w_58);
  Rpush(a_59);
  goto f_69;
  a_59 :
  goto s_56;
  w_58 :
  Ccontinue(e_59);
  Rpush(f_59);
  goto l_69;
  f_59 :
  goto s_56;
  e_59 :
  Ccontinue(g_59);
  Rpush(i_59);
  goto m_69;
  i_59 :
  goto s_56;
  g_59 :
  Ccontinue(k_59);
  Rpush(m_59);
  goto n_69;
  m_59 :
  goto s_56;
  k_59 :
  Ccontinue(e_61);
  Rpush(m_61);
  goto o_69;
  m_61 :
  goto s_56;
  e_61 :
  Rpush(o_61);
  goto p_69;
  o_61 :
  goto n_61;
  s_56 :
  Cpop();
  n_61 :
  goto v_49;
  v_49 :
  goto p_49;
  p_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_71;
  p_71 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_62);
  goto o_71;
  d_62 :
  goto c_62;
  o_71 :
  Return();
  c_62 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  p_49 :
  goto n_49;
  o_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_71;
  m_71 :
  TestStr(1,1,"-h",&&fail);
  Rpush(f_62);
  goto k_71;
  f_62 :
  goto e_62;
  k_71 :
  Return();
  e_62 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  n_49 :
  goto m_49;
  n_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_71;
  i_71 :
  TestStr(1,1,"--help",&&fail);
  Rpush(h_62);
  goto h_71;
  h_62 :
  goto g_62;
  h_71 :
  Return();
  g_62 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  m_49 :
  goto k_49;
  m_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_71;
  f_71 :
  TestStr(1,1,"-s",&&fail);
  Rpush(u_62);
  goto e_71;
  u_62 :
  goto t_62;
  e_71 :
  Return();
  t_62 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  k_49 :
  goto h_49;
  l_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_71;
  a_71 :
  TestStr(1,1,"-b",&&fail);
  Rpush(c_63);
  goto z_70;
  c_63 :
  goto w_62;
  z_70 :
  Return();
  w_62 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_49 :
  goto f_49;
  k_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_70;
  w_70 :
  TestStr(1,1,"--output",&&fail);
  Rpush(f_63);
  goto v_70;
  f_63 :
  goto d_63;
  v_70 :
  Return();
  d_63 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  f_49 :
  goto e_49;
  j_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_70;
  s_70 :
  TestStr(1,1,"-o",&&fail);
  Rpush(o_63);
  goto r_70;
  o_63 :
  goto n_63;
  r_70 :
  Return();
  n_63 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  e_49 :
  goto a_49;
  i_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_70;
  o_70 :
  TestStr(1,1,"--input",&&fail);
  Rpush(q_63);
  goto n_70;
  q_63 :
  goto p_63;
  n_70 :
  Return();
  p_63 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  a_49 :
  goto y_48;
  h_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_70;
  k_70 :
  TestStr(1,1,"-i",&&fail);
  Rpush(s_63);
  goto j_70;
  s_63 :
  goto r_63;
  j_70 :
  Return();
  r_63 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  y_48 :
  goto x_48;
  g_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_70;
  g_70 :
  TestStr(1,1,"@version",&&fail);
  Rpush(u_63);
  goto f_70;
  u_63 :
  goto t_63;
  f_70 :
  Return();
  t_63 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  x_48 :
  goto l_48;
  f_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_70;
  d_70 :
  TestStr(1,1,"--version",&&fail);
  Rpush(w_63);
  goto c_70;
  w_63 :
  goto v_63;
  c_70 :
  Return();
  v_63 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  l_48 :
  goto k_48;
  e_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_70;
  a_70 :
  TestStr(1,1,"-v",&&fail);
  Rpush(j_64);
  goto z_69;
  j_64 :
  goto i_64;
  z_69 :
  Return();
  i_64 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  k_48 :
  goto i_48;
  d_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_69;
  x_69 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(l_64);
  goto w_69;
  l_64 :
  goto k_64;
  w_69 :
  Return();
  k_64 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  i_48 :
  goto d_48;
  c_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_69;
  u_69 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(u_64);
  goto t_69;
  u_64 :
  goto t_64;
  t_69 :
  Return();
  t_64 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  d_48 :
  goto c_48;
  b_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_69;
  r_69 :
  TestStr(1,1,"-S",&&fail);
  Rpush(w_64);
  goto q_69;
  w_64 :
  goto v_64;
  q_69 :
  Return();
  v_64 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  c_48 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_q_20)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_75;
  l_75 :
  TestFunFC(q_7,&&fail,Egetd(0,1));
  Rpush(f_65);
  goto k_75;
  f_65 :
  goto e_65;
  k_75 :
  Return();
  e_65 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_20)
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(g_65);
  l_76 :
  Cpush(i_65);
  Cpush(t_66);
  Ccall(_stratego_q_20);
  goto s_66;
  t_66 :
  Ccall(_stratego_p_20);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_66);
  goto l_76;
  v_66 :
  AllBuild();
  goto u_66;
  s_66 :
  Cpop();
  u_66 :
  goto h_65;
  i_65 :
  Epushd(0,3);
  MoveTop(0,1);
  goto p_75;
  p_75 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(h_67);
  goto o_75;
  h_67 :
  goto g_67;
  o_75 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  g_67 :
  Epopd(0,3);
  goto e_67;
  h_65 :
  Cpop();
  e_67 :
  Return();
  g_65 :
  AllBuild();
  Cpush(j_67);
  Ccall(_stratego_o_20);
  goto i_67;
  j_67 :
  Ccontinue(k_67);
  Epushd(0,6);
  Ccall(_stratego_j_20);
  Tdupl();
  Ccall(_stratego_h_20);
  Tpop();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_a_20);
  OneNextSon();
  Ccall(_stratego_b_20);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_h_20);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto s_75;
  s_75 :
  TestFunFC(z_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto t_75;
  t_75 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto u_75;
  u_75 :
  TestFunFC(a_1,&&fail,Egetd(0,6));
  Rpush(u_67);
  goto r_75;
  u_67 :
  goto t_67;
  r_75 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  t_67 :
  Ccall(_stratego_g_20);
  Ccall(_stratego_d_20);
  Epopd(0,6);
  goto i_67;
  k_67 :
  Ccall(_stratego_c_20);
  goto v_67;
  i_67 :
  Cpop();
  v_67 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_r_20);
ENDPROC

DOIT

