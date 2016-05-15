#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,v_49);
VARDECL(AFun,d_49);
VARDECL(AFun,e_47);
VARDECL(AFun,c_45);
VARDECL(AFun,w_43);
VARDECL(AFun,k_42);
VARDECL(AFun,f_40);
VARDECL(AFun,w_38);
VARDECL(AFun,a_18);
VARDECL(AFun,s_8);
VARDECL(AFun,h_1);
VARDECL(AFun,a_1);
VARDECL(AFun,z_0);
VARDECL(AFun,s_0);
VARDECL(AFun,q_0);
VARDECL(AFun,p_0);
VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
PROCDECL(_stratego_l_21);
PROCDECL(_stratego_m_21);
PROCDECL(_stratego_n_21);
PROCDECL(_stratego_o_21);
PROCDECL(_stratego_p_21);
PROCDECL(_stratego_q_21);
PROCDECL(_stratego_r_21);
PROCDECL(_stratego_s_21);
PROCDECL(_stratego_t_21);
PROCDECL(_stratego_u_21);
PROCDECL(_stratego_v_21);
PROCDECL(_stratego_d_22);
PROCDECL(_stratego_e_22);
PROCDECL(_stratego_f_22);
PROCDECL(_stratego_g_22);
PROCDECL(_stratego_h_22);
PROCDECL(_stratego_i_22);
PROCDECL(_stratego_j_22);
PROCDECL(_stratego_l_22);
PROCDECL(_stratego_m_22);
PROCDECL(_stratego_n_22);
PROCDECL(_stratego_o_22);
PROCDECL(_stratego_p_22);
PROCDECL(_stratego_q_22);
PROCDECL(_stratego_r_22);
PROCDECL(_stratego_s_22);
PROCDECL(_stratego_t_22);
PROCDECL(_stratego_x_22);
PROCDECL(_stratego_a_23);
PROCDECL(_stratego_b_23);
PROCDECL(_stratego_c_23);
PROCDECL(_stratego_d_23);
PROCDECL(_stratego_e_23);
PROCDECL(_stratego_f_23);
PROCDECL(_stratego_g_23);
PROCDECL(_stratego_h_23);
PROCDECL(_stratego_p_23);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(v_49,ATmakeAFun("Undefined",1,0));
  MOVE(d_49,ATmakeAFun("Help",0,0));
  MOVE(e_47,ATmakeAFun("Input",1,0));
  MOVE(c_45,ATmakeAFun("Binary",0,0));
  MOVE(w_43,ATmakeAFun("Output",1,0));
  MOVE(k_42,ATmakeAFun("Program",1,0));
  MOVE(f_40,ATmakeAFun("Runtime",1,0));
  MOVE(w_38,ATmakeAFun("Silent",0,0));
  MOVE(a_18,ATmakeAFun("Mod",2,0));
  MOVE(s_8,ATmakeAFun("Nil",0,0));
  MOVE(h_1,ATmakeAFun("Cons",2,0));
  MOVE(a_1,ATmakeAFun("TNil",0,0));
  MOVE(z_0,ATmakeAFun("TCons",2,0));
  MOVE(s_0,ATmakeAFun("Rec",2,0));
  MOVE(q_0,ATmakeAFun("SDef",3,0));
  MOVE(p_0,ATmakeAFun("Let",2,0));
  MOVE(g_0,ATmakeAFun("SVar",1,0));
  MOVE(f_0,ATmakeAFun("Call",2,0));
ENDPROC

PROC(_stratego_l_21)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_c_23);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_m_21)
  Rpush(a_0);
  h_29 :
  Epushd(0,8);
  MoveTop(0,1);
  Cpush(c_0);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_4;
  y_4 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_4;
  z_4 :
  TestFunFC(g_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_0);
  goto w_4;
  e_0 :
  goto d_0;
  w_4 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_j_22);
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
  goto e_5;
  e_5 :
  TestFunFC(p_0,&&o_0,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto f_5;
  f_5 :
  TestFunFC(q_0,&&fail,Egetd(2,6));
  MoveArg(2,1,2,6,0);
  MoveArg(2,2,2,6,1);
  MoveArg(2,3,2,6,2);
  Rpush(n_0);
  goto b_5;
  o_0 :
  TestFunFC(q_0,&&r_0,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  MoveArg(2,4,2,5,2);
  Rpush(n_0);
  goto c_5;
  r_0 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  Rpush(n_0);
  goto d_5;
  n_0 :
  goto m_0;
  d_5 :
  NotNULLd(2,6);
  Tset(App2("Cons",Egetd(2,6),App0("Nil")));
  Return();
  m_0 :
  goto l_0;
  c_5 :
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Return();
  l_0 :
  goto k_0;
  b_5 :
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
  goto h_29;
  v_0 :
  AllBuild();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(w_0);
  goto h_29;
  w_0 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto k_6;
  k_6 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto l_6;
  l_6 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto m_6;
  m_6 :
  TestFunFC(a_1,&&fail,Egetd(2,7));
  Rpush(y_0);
  goto k_5;
  y_0 :
  goto x_0;
  k_5 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(b_1);
  i_29 :
  Cpush(d_1);
  Ccall(_stratego_h_23);
  goto c_1;
  d_1 :
  Ccontinue(e_1);
  Epushd(3,3);
  MoveTop(3,1);
  goto j_6;
  j_6 :
  TestFunFC(h_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(g_1);
  goto l_5;
  g_1 :
  goto f_1;
  l_5 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(i_1);
  j_29 :
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
  goto o_5;
  o_5 :
  TestFunFC(z_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto p_5;
  p_5 :
  TestFunFC(z_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto u_5;
  u_5 :
  TestFunFC(z_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto v_5;
  v_5 :
  TestFunFC(a_1,&&fail,Egetd(4,7));
  goto w_5;
  w_5 :
  TestFunFC(z_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto i_6;
  i_6 :
  TestFunFC(a_1,&&fail,Egetd(4,10));
  Rpush(m_1);
  goto n_5;
  m_1 :
  goto l_1;
  n_5 :
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
  goto j_29;
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
  goto i_29;
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
  goto i_29;
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
  goto h_29;
  t_1 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto f_8;
  f_8 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto g_8;
  g_8 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto h_8;
  h_8 :
  TestFunFC(a_1,&&fail,Egetd(2,7));
  Rpush(v_1);
  goto q_6;
  v_1 :
  goto u_1;
  q_6 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(w_1);
  k_29 :
  Cpush(y_1);
  Ccall(_stratego_h_23);
  goto x_1;
  y_1 :
  Ccontinue(z_1);
  Epushd(3,3);
  MoveTop(3,1);
  goto e_8;
  e_8 :
  TestFunFC(h_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(c_2);
  goto r_6;
  c_2 :
  goto a_2;
  r_6 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(d_2);
  l_29 :
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
  goto u_6;
  u_6 :
  TestFunFC(z_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto v_6;
  v_6 :
  TestFunFC(z_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto x_6;
  x_6 :
  TestFunFC(z_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto y_6;
  y_6 :
  TestFunFC(a_1,&&fail,Egetd(4,7));
  goto c_8;
  c_8 :
  TestFunFC(z_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto d_8;
  d_8 :
  TestFunFC(a_1,&&fail,Egetd(4,10));
  Rpush(h_2);
  goto t_6;
  h_2 :
  goto g_2;
  t_6 :
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
  goto l_29;
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
  goto k_29;
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
  goto k_29;
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
  goto h_29;
  o_2 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto i_9;
  i_9 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto x_10;
  x_10 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto y_10;
  y_10 :
  TestFunFC(a_1,&&fail,Egetd(2,7));
  Rpush(q_2);
  goto l_8;
  q_2 :
  goto p_2;
  l_8 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(r_2);
  m_29 :
  Cpush(t_2);
  Ccall(_stratego_h_23);
  goto s_2;
  t_2 :
  Ccontinue(u_2);
  Epushd(3,3);
  MoveTop(3,1);
  goto e_9;
  e_9 :
  TestFunFC(h_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(w_2);
  goto m_8;
  w_2 :
  goto v_2;
  m_8 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(x_2);
  n_29 :
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
  goto w_8;
  w_8 :
  TestFunFC(z_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto x_8;
  x_8 :
  TestFunFC(z_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto y_8;
  y_8 :
  TestFunFC(z_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto z_8;
  z_8 :
  TestFunFC(a_1,&&fail,Egetd(4,7));
  goto a_9;
  a_9 :
  TestFunFC(z_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto d_9;
  d_9 :
  TestFunFC(a_1,&&fail,Egetd(4,10));
  Rpush(b_3);
  goto v_8;
  b_3 :
  goto a_3;
  v_8 :
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
  goto n_29;
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
  goto m_29;
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
  goto m_29;
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
  goto v_11;
  v_11 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto w_11;
  w_11 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto x_11;
  x_11 :
  TestFunFC(a_1,&&fail,Egetd(2,5));
  Rpush(i_3);
  goto a_11;
  i_3 :
  goto h_3;
  a_11 :
  Move(1,3,2,4);
  Return();
  h_3 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(j_3);
  o_29 :
  Cpush(l_3);
  Ccall(_stratego_h_23);
  Tset(App0("Nil"));
  goto k_3;
  l_3 :
  Epushd(2,3);
  MoveTop(2,1);
  goto p_15;
  p_15 :
  TestFunFC(h_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_3);
  goto y_11;
  o_3 :
  goto n_3;
  y_11 :
  Epushd(3,6);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(p_3);
  goto o_29;
  p_3 :
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(3,1),App0("TNil"))));
  MoveTop(3,2);
  goto j_15;
  j_15 :
  TestFunFC(z_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto n_15;
  n_15 :
  TestFunFC(z_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto o_15;
  o_15 :
  TestFunFC(a_1,&&fail,Egetd(3,6));
  Rpush(r_3);
  goto y_13;
  r_3 :
  goto q_3;
  y_13 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(s_3);
  p_29 :
  Cpush(u_3);
  Ccall(_stratego_h_23);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  goto t_3;
  u_3 :
  Ccontinue(v_3);
  Epushd(4,3);
  MoveTop(4,1);
  goto r_14;
  r_14 :
  TestFunFC(h_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(x_3);
  goto z_13;
  x_3 :
  goto w_3;
  z_13 :
  Tdupl();
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(y_3);
  q_29 :
  Cpush(a_4);
  Epushd(5,3);
  MoveTop(5,1);
  goto q_14;
  q_14 :
  TestFunFC(h_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(c_4);
  goto a_14;
  c_4 :
  goto b_4;
  a_14 :
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
  goto q_29;
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
  goto p_29;
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
  goto p_29;
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
  goto s_15;
  s_15 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto t_15;
  t_15 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto x_15;
  x_15 :
  TestFunFC(a_1,&&fail,Egetd(2,5));
  Rpush(k_4);
  goto r_15;
  k_4 :
  goto j_4;
  r_15 :
  Move(1,2,2,4);
  Return();
  j_4 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(l_4);
  r_29 :
  Cpush(n_4);
  Ccall(_stratego_h_23);
  Tset(App0("Nil"));
  goto m_4;
  n_4 :
  Epushd(2,3);
  MoveTop(2,1);
  goto q_16;
  q_16 :
  TestFunFC(h_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(q_4);
  goto a_16;
  q_4 :
  goto p_4;
  a_16 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(r_4);
  goto h_29;
  r_4 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(s_4);
  goto r_29;
  s_4 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto n_16;
  n_16 :
  TestFunFC(z_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto o_16;
  o_16 :
  TestFunFC(z_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto p_16;
  p_16 :
  TestFunFC(a_1,&&fail,Egetd(3,7));
  Rpush(u_4);
  goto i_16;
  u_4 :
  goto t_4;
  i_16 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(v_4);
  t_29 :
  Cpush(a_5);
  Ccall(_stratego_h_23);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto x_4;
  a_5 :
  Ccontinue(g_5);
  Epushd(4,3);
  MoveTop(4,1);
  goto m_16;
  m_16 :
  TestFunFC(h_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(i_5);
  goto j_16;
  i_5 :
  goto h_5;
  j_16 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(j_5);
  u_29 :
  Cpush(q_5);
  Epushd(5,3);
  MoveTop(5,1);
  goto l_16;
  l_16 :
  TestFunFC(h_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(s_5);
  goto k_16;
  s_5 :
  goto r_5;
  k_16 :
  Move(4,2,5,2);
  Return();
  r_5 :
  Epopd(5,3);
  goto m_5;
  q_5 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_5);
  goto u_29;
  x_5 :
  AllBuild();
  goto t_5;
  m_5 :
  Cpop();
  t_5 :
  Return();
  j_5 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(y_5);
  goto t_29;
  y_5 :
  Return();
  h_5 :
  Epopd(4,3);
  goto x_4;
  g_5 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_6);
  goto t_29;
  a_6 :
  AllBuild();
  goto z_5;
  x_4 :
  Cpop();
  z_5 :
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
  goto x_16;
  x_16 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto y_16;
  y_16 :
  TestFunFC(z_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto z_16;
  z_16 :
  TestFunFC(a_1,&&fail,Egetd(0,8));
  Rpush(c_6);
  goto s_16;
  c_6 :
  goto b_6;
  s_16 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(d_6);
  v_29 :
  Cpush(f_6);
  Ccall(_stratego_h_23);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  goto e_6;
  f_6 :
  Ccontinue(g_6);
  Epushd(1,3);
  MoveTop(1,1);
  goto w_16;
  w_16 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(n_6);
  goto t_16;
  n_6 :
  goto h_6;
  t_16 :
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(o_6);
  w_29 :
  Cpush(s_6);
  Epushd(2,3);
  MoveTop(2,1);
  goto v_16;
  v_16 :
  TestFunFC(h_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(z_6);
  goto u_16;
  z_6 :
  goto w_6;
  u_16 :
  Move(1,2,2,2);
  Return();
  w_6 :
  Epopd(2,3);
  goto p_6;
  s_6 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_7);
  goto w_29;
  b_7 :
  AllBuild();
  goto a_7;
  p_6 :
  Cpop();
  a_7 :
  Return();
  o_6 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(c_7);
  goto v_29;
  c_7 :
  Return();
  h_6 :
  Epopd(1,3);
  goto e_6;
  g_6 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_7);
  goto v_29;
  e_7 :
  AllBuild();
  goto d_7;
  e_6 :
  Cpop();
  d_7 :
  Return();
  d_6 :
  Return();
  b_6 :
  Epopd(0,8);
  Return();
  a_0 :
ENDPROC

PROC(_stratego_n_21)
  Rpush(f_7);
  p_30 :
  Cpush(h_7);
  Ccall(_stratego_h_23);
  Tset(App0("Fail"));
  goto g_7;
  h_7 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_30;
  c_30 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(k_7);
  goto x_29;
  k_7 :
  goto j_7;
  x_29 :
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
  Rpush(m_7);
  goto p_30;
  m_7 :
  OneNextSon();
  Ccall(_stratego_n_22);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto z_29;
  z_29 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto a_30;
  a_30 :
  TestFunFC(z_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto b_30;
  b_30 :
  TestFunFC(a_1,&&fail,Egetd(1,5));
  Rpush(n_7);
  goto y_29;
  n_7 :
  goto l_7;
  y_29 :
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("Choice",Egetd(1,2),Egetd(1,4)));
  Return();
  l_7 :
  Epopd(1,5);
  Return();
  j_7 :
  Epopd(0,3);
  goto i_7;
  g_7 :
  Cpop();
  i_7 :
  Return();
  f_7 :
ENDPROC

PROC(_stratego_o_21)
  Rpush(o_7);
  o_31 :
  Epushd(0,11);
  MoveTop(0,5);
  goto s_30;
  s_30 :
  TestFunFC(z_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto t_30;
  t_30 :
  TestFunFC(z_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto u_30;
  u_30 :
  TestFunFC(h_1,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto v_30;
  v_30 :
  TestFunFC(a_1,&&fail,Egetd(0,11));
  goto w_30;
  w_30 :
  TestFunFC(z_0,&&s_7,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto x_30;
  x_30 :
  TestFunFC(z_0,&&t_7,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto y_30;
  y_30 :
  TestFunFC(a_1,&&u_7,Egetd(0,4));
  Cpush(w_7);
  Rpush(x_7);
  goto q_30;
  x_7 :
  goto v_7;
  w_7 :
  Rpush(z_7);
  goto r_30;
  z_7 :
  goto y_7;
  v_7 :
  Cpop();
  y_7 :
  goto r_7;
  u_7 :
  Rpush(r_7);
  goto r_30;
  t_7 :
  Rpush(r_7);
  goto r_30;
  s_7 :
  Rpush(r_7);
  goto r_30;
  r_7 :
  goto q_7;
  r_30 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(a_8);
  goto o_31;
  a_8 :
  Return();
  q_7 :
  goto p_7;
  q_30 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  p_7 :
  Epopd(0,11);
  Return();
  o_7 :
ENDPROC

PROC(_stratego_p_21)
  Epushd(0,7);
  MoveTop(0,1);
  goto g_32;
  g_32 :
  TestFunFC(z_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto h_32;
  h_32 :
  TestFunFC(z_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto i_32;
  i_32 :
  TestFunFC(a_1,&&k_8,Egetd(0,5));
  Rpush(j_8);
  goto p_31;
  k_8 :
  TestFunFC(z_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto j_32;
  j_32 :
  TestFunFC(a_1,&&fail,Egetd(0,7));
  Rpush(j_8);
  goto q_31;
  j_8 :
  goto i_8;
  q_31 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(n_8);
  u_33 :
  Epushd(2,9);
  MoveTop(2,1);
  goto x_31;
  x_31 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto y_31;
  y_31 :
  TestFunFC(s_8,&&r_8,Egetd(2,2));
  goto z_31;
  z_31 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto a_32;
  a_32 :
  TestFunFC(s_8,&&fail,Egetd(2,6));
  goto b_32;
  b_32 :
  TestFunFC(a_1,&&fail,Egetd(2,9));
  Rpush(q_8);
  goto r_31;
  r_8 :
  TestFunFC(h_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto c_32;
  c_32 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto d_32;
  d_32 :
  TestFunFC(h_1,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto e_32;
  e_32 :
  TestFunFC(a_1,&&fail,Egetd(2,9));
  Rpush(q_8);
  goto s_31;
  q_8 :
  goto p_8;
  s_31 :
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
  Rpush(u_8);
  goto u_33;
  u_8 :
  OneNextSon();
  Ccall(_stratego_n_22);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto u_31;
  u_31 :
  TestFunFC(z_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto v_31;
  v_31 :
  TestFunFC(z_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_31;
  w_31 :
  TestFunFC(a_1,&&fail,Egetd(3,5));
  Rpush(b_9);
  goto t_31;
  b_9 :
  goto t_8;
  t_31 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  t_8 :
  Epopd(3,5);
  Return();
  p_8 :
  goto o_8;
  r_31 :
  Tset(App0("Nil"));
  Return();
  o_8 :
  Epopd(2,9);
  Return();
  n_8 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  i_8 :
  goto b_8;
  p_31 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  b_8 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_q_21)
  Epushd(0,5);
  Ccall(_stratego_p_21);
  MoveTop(0,1);
  goto d_34;
  d_34 :
  TestFunFC(z_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto e_34;
  e_34 :
  TestFunFC(z_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto f_34;
  f_34 :
  TestFunFC(a_1,&&fail,Egetd(0,5));
  Rpush(f_9);
  goto v_33;
  f_9 :
  goto c_9;
  v_33 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(g_9);
  y_34 :
  Cpush(j_9);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,4);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto a_34;
  a_34 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto b_34;
  b_34 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto c_34;
  c_34 :
  TestFunFC(s_8,&&fail,Egetd(2,4));
  Rpush(l_9);
  goto x_33;
  l_9 :
  goto k_9;
  x_33 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Move(1,2,2,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  k_9 :
  Epopd(2,4);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_o_21);
  Epopd(1,3);
  goto h_9;
  j_9 :
  AllInit();
  n_9 :
  AllNextSon(&&o_9);
  Rpush(p_9);
  goto y_34;
  p_9 :
  goto n_9;
  o_9 :
  AllBuild();
  goto m_9;
  h_9 :
  Cpop();
  m_9 :
  Return();
  g_9 :
  Return();
  c_9 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_r_21)
  Epushd(0,6);
  MoveTop(0,1);
  goto i_35;
  i_35 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto j_35;
  j_35 :
  TestFunFC(s_8,&&t_9,Egetd(0,6));
  goto k_35;
  k_35 :
  TestFunFC(q_0,&&u_9,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Cpush(w_9);
  Rpush(x_9);
  goto z_34;
  x_9 :
  goto v_9;
  w_9 :
  Rpush(z_9);
  goto a_35;
  z_9 :
  goto y_9;
  v_9 :
  Cpop();
  y_9 :
  goto s_9;
  u_9 :
  Rpush(s_9);
  goto z_34;
  t_9 :
  goto l_35;
  l_35 :
  TestFunFC(q_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(s_9);
  goto a_35;
  s_9 :
  goto r_9;
  a_35 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(a_10);
  o_36 :
  Cpush(c_10);
  Ccall(_stratego_h_23);
  goto b_10;
  c_10 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_21);
  OneNextSon();
  Rpush(e_10);
  goto o_36;
  e_10 :
  AllBuild();
  goto d_10;
  b_10 :
  Cpop();
  d_10 :
  Return();
  a_10 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(f_10);
  p_36 :
  Cpush(h_10);
  Ccall(_stratego_h_23);
  goto g_10;
  h_10 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("Call",App1("SVar",Egetd(3,1)),App0("Nil")));
  Epopd(3,1);
  OneNextSon();
  Rpush(j_10);
  goto p_36;
  j_10 :
  AllBuild();
  goto i_10;
  g_10 :
  Cpop();
  i_10 :
  Return();
  f_10 :
  MoveTop(2,2);
  Move(1,2,2,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(k_10);
  q_36 :
  Cpush(m_10);
  Ccall(_stratego_h_23);
  goto l_10;
  m_10 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto f_35;
  f_35 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(p_10);
  goto e_35;
  p_10 :
  goto o_10;
  e_35 :
  Epushd(4,2);
  Move(0,3,3,2);
  Move(4,1,3,3);
  Move(4,2,3,4);
  NotNULLd(4,1);
  NotNULLd(1,2);
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(1,2),App2("TCons",Egetd(4,2),App0("TNil")))));
  Ccall(_stratego_q_21);
  Epopd(4,2);
  Return();
  o_10 :
  Epopd(3,4);
  OneNextSon();
  Rpush(q_10);
  goto q_36;
  q_10 :
  AllBuild();
  goto n_10;
  l_10 :
  Cpop();
  n_10 :
  Return();
  k_10 :
  MoveTop(2,3);
  Move(1,3,2,3);
  Epopd(2,3);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_n_21);
  MoveTop(1,4);
  NotNULLd(0,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App3("SDef",Egetd(0,3),Egetd(1,1),Egetd(1,4)));
  Epopd(1,4);
  Return();
  r_9 :
  goto q_9;
  z_34 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  q_9 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_s_21)
  Rpush(r_10);
  y_36 :
  Cpush(t_10);
  Ccall(_stratego_h_23);
  goto s_10;
  t_10 :
  Epushd(0,3);
  MoveTop(0,1);
  goto s_36;
  s_36 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(w_10);
  goto r_36;
  w_10 :
  goto v_10;
  r_36 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(z_10);
  z_36 :
  Cpush(c_11);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_11);
  goto z_36;
  d_11 :
  AllBuild();
  goto b_11;
  c_11 :
  Ccall(_stratego_h_23);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(f_11);
  goto y_36;
  f_11 :
  goto e_11;
  b_11 :
  Cpop();
  e_11 :
  Return();
  z_10 :
  Return();
  v_10 :
  Epopd(0,3);
  goto u_10;
  s_10 :
  Cpop();
  u_10 :
  Return();
  r_10 :
ENDPROC

PROC(_stratego_t_21)
  Rpush(g_11);
  k_37 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_37;
  c_37 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto d_37;
  d_37 :
  TestFunFC(s_8,&&k_11,Egetd(0,3));
  Cpush(m_11);
  Rpush(n_11);
  goto a_37;
  n_11 :
  goto l_11;
  m_11 :
  Rpush(p_11);
  goto b_37;
  p_11 :
  goto o_11;
  l_11 :
  Cpop();
  o_11 :
  goto j_11;
  k_11 :
  Rpush(j_11);
  goto b_37;
  j_11 :
  goto i_11;
  b_37 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_11);
  goto k_37;
  q_11 :
  Return();
  i_11 :
  goto h_11;
  a_37 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  h_11 :
  Epopd(0,3);
  Return();
  g_11 :
ENDPROC

PROC(_stratego_u_21)
  _ST_new();
ENDPROC

PROC(_stratego_v_21)
  _ST_subt();
ENDPROC

PROC(_stratego_d_22)
  _ST_geq();
ENDPROC

PROC(_stratego_e_22)
  Epushd(0,7);
  MoveTop(0,1);
  goto u_41;
  u_41 :
  TestFunFC(z_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto v_41;
  v_41 :
  TestFunFC(z_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto w_41;
  w_41 :
  TestStr(0,4,"D",&&z_11);
  goto x_41;
  x_41 :
  TestFunFC(z_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto y_41;
  y_41 :
  TestFunFC(a_1,&&fail,Egetd(0,7));
  Rpush(u_11);
  goto l_37;
  z_11 :
  TestStr(0,4,"T",&&fail);
  goto z_41;
  z_41 :
  TestFunFC(z_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto a_42;
  a_42 :
  TestFunFC(a_1,&&fail,Egetd(0,7));
  goto b_42;
  b_42 :
  TestInt(0,6,0,&&a_12);
  Cpush(c_12);
  Rpush(d_12);
  goto m_37;
  d_12 :
  goto b_12;
  c_12 :
  Rpush(f_12);
  goto n_37;
  f_12 :
  goto e_12;
  b_12 :
  Cpop();
  e_12 :
  goto u_11;
  a_12 :
  Rpush(u_11);
  goto n_37;
  u_11 :
  goto t_11;
  n_37 :
  Epushd(1,10);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_i_22);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",App0("TNil"),App0("TNil"))));
  MoveTop(2,2);
  goto q_41;
  q_41 :
  TestFunFC(z_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto r_41;
  r_41 :
  TestFunFC(z_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto s_41;
  s_41 :
  TestFunFC(a_1,&&fail,Egetd(2,6));
  Rpush(h_12);
  goto l_39;
  h_12 :
  goto g_12;
  l_39 :
  Epushd(3,3);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(j_12);
  z_50 :
  Epushd(4,7);
  MoveTop(4,1);
  goto v_39;
  v_39 :
  TestFunFC(z_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto w_39;
  w_39 :
  TestFunFC(z_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto x_39;
  x_39 :
  TestFunFC(z_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto y_39;
  y_39 :
  TestFunFC(a_1,&&fail,Egetd(4,7));
  Rpush(l_12);
  goto m_39;
  l_12 :
  goto k_12;
  m_39 :
  Epushd(5,2);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_d_22);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_v_21);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Ccall(_stratego_u_21);
  MoveTop(5,2);
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,2);
  NotNULLd(4,6);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",Egetd(5,2),Egetd(4,6)),App0("TNil")))));
  Cpush(n_12);
  Epushd(6,7);
  MoveTop(6,1);
  goto q_39;
  q_39 :
  TestFunFC(z_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto r_39;
  r_39 :
  TestInt(6,2,0,&&fail);
  goto s_39;
  s_39 :
  TestFunFC(z_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto t_39;
  t_39 :
  TestFunFC(z_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto u_39;
  u_39 :
  TestFunFC(a_1,&&fail,Egetd(6,7));
  Rpush(p_12);
  goto p_39;
  p_12 :
  goto o_12;
  p_39 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  o_12 :
  Epopd(6,7);
  goto m_12;
  n_12 :
  Rpush(r_12);
  goto z_50;
  r_12 :
  goto q_12;
  m_12 :
  Cpop();
  q_12 :
  Epopd(5,2);
  Return();
  k_12 :
  Epopd(4,7);
  Return();
  j_12 :
  MoveTop(3,1);
  goto p_41;
  p_41 :
  TestFunFC(h_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_12);
  goto z_39;
  s_12 :
  goto i_12;
  z_39 :
  Epushd(4,14);
  Move(1,2,3,2);
  Move(1,3,3,3);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_t_21);
  MoveTop(4,1);
  Move(1,1,4,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",App2("Cons",Egetd(1,2),Egetd(1,3)),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(t_12);
  a_51 :
  Epushd(5,9);
  MoveTop(5,1);
  goto o_40;
  o_40 :
  TestFunFC(z_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,5,5,1,1);
  goto p_40;
  p_40 :
  TestFunFC(z_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,9,5,5,1);
  goto q_40;
  q_40 :
  TestFunFC(s_8,&&x_12,Egetd(5,6));
  goto r_40;
  r_40 :
  TestFunFC(a_1,&&fail,Egetd(5,9));
  goto s_40;
  s_40 :
  y_12 :
  Rpush(w_12);
  goto b_40;
  x_12 :
  TestFunFC(h_1,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto t_40;
  t_40 :
  TestFunFC(h_1,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto u_40;
  u_40 :
  TestFunFC(a_1,&&fail,Egetd(5,9));
  Rpush(w_12);
  goto c_40;
  w_12 :
  goto v_12;
  c_40 :
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
  goto h_40;
  h_40 :
  TestFunFC(z_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto i_40;
  i_40 :
  TestFunFC(z_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto j_40;
  j_40 :
  TestFunFC(a_1,&&fail,Egetd(7,5));
  Rpush(b_13);
  goto d_40;
  b_13 :
  goto a_13;
  d_40 :
  Epushd(8,3);
  Tdupl();
  Epushd(9,3);
  Ccall(_stratego_u_21);
  MoveTop(9,1);
  Move(8,1,9,1);
  Ccall(_stratego_u_21);
  MoveTop(9,2);
  Move(8,2,9,2);
  Ccall(_stratego_u_21);
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
  a_13 :
  Epopd(7,5);
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Rpush(c_13);
  goto a_51;
  c_13 :
  OneNextSon();
  Ccall(_stratego_n_22);
  AllBuild();
  AllBuild();
  MoveTop(6,1);
  goto l_40;
  l_40 :
  TestFunFC(z_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto m_40;
  m_40 :
  TestFunFC(z_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto n_40;
  n_40 :
  TestFunFC(a_1,&&fail,Egetd(6,5));
  Rpush(d_13);
  goto k_40;
  d_13 :
  goto z_12;
  k_40 :
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset(App2("Cons",Egetd(6,2),Egetd(6,4)));
  Return();
  z_12 :
  Epopd(6,5);
  Return();
  v_12 :
  goto u_12;
  b_40 :
  Tset(App0("Nil"));
  Return();
  u_12 :
  Epopd(5,9);
  Return();
  t_12 :
  Rpush(f_13);
  b_51 :
  Cpush(h_13);
  Epushd(5,8);
  MoveTop(5,1);
  Rpush(i_13);
  c_51 :
  Cpush(k_13);
  Ccall(_stratego_h_23);
  goto j_13;
  k_13 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto x_40;
  x_40 :
  TestFunFC(z_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(n_13);
  goto w_40;
  n_13 :
  goto m_13;
  w_40 :
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Return();
  m_13 :
  Epopd(6,3);
  OneNextSon();
  Rpush(o_13);
  goto c_51;
  o_13 :
  AllBuild();
  goto l_13;
  j_13 :
  Cpop();
  l_13 :
  Return();
  i_13 :
  MoveTop(5,2);
  NotNULLd(5,1);
  Tset(Egetd(5,1));
  Rpush(p_13);
  d_51 :
  Cpush(r_13);
  Ccall(_stratego_h_23);
  goto q_13;
  r_13 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto a_41;
  a_41 :
  TestFunFC(z_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(u_13);
  goto z_40;
  u_13 :
  goto t_13;
  z_40 :
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Return();
  t_13 :
  Epopd(6,3);
  OneNextSon();
  Rpush(v_13);
  goto d_51;
  v_13 :
  AllBuild();
  goto s_13;
  q_13 :
  Cpop();
  s_13 :
  Return();
  p_13 :
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
  Rpush(x_13);
  goto b_51;
  x_13 :
  OneNextSon();
  Ccall(_stratego_n_22);
  AllBuild();
  AllBuild();
  MoveTop(5,4);
  goto e_41;
  e_41 :
  TestFunFC(z_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto f_41;
  f_41 :
  TestFunFC(z_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto g_41;
  g_41 :
  TestFunFC(a_1,&&fail,Egetd(5,8));
  Rpush(b_14);
  goto d_41;
  b_14 :
  goto w_13;
  d_41 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset(App2("TCons",Egetd(5,5),Egetd(5,7)));
  Return();
  w_13 :
  Epopd(5,8);
  goto g_13;
  h_13 :
  Rpush(d_14);
  e_51 :
  Cpush(f_14);
  Ccall(_stratego_h_23);
  goto e_14;
  f_14 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_22);
  OneNextSon();
  Rpush(h_14);
  goto e_51;
  h_14 :
  AllBuild();
  goto g_14;
  e_14 :
  Cpop();
  g_14 :
  Return();
  d_14 :
  Tset(App0("TNil"));
  goto c_14;
  g_13 :
  Cpop();
  c_14 :
  Return();
  f_13 :
  MoveTop(4,2);
  goto i_41;
  i_41 :
  TestFunFC(z_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto j_41;
  j_41 :
  TestFunFC(z_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto k_41;
  k_41 :
  TestFunFC(z_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto l_41;
  l_41 :
  TestFunFC(z_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto m_41;
  m_41 :
  TestFunFC(z_0,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,12,4,10,1);
  goto n_41;
  n_41 :
  TestFunFC(z_0,&&fail,Egetd(4,12));
  MoveArg(4,13,4,12,0);
  MoveArg(4,14,4,12,1);
  goto o_41;
  o_41 :
  TestFunFC(a_1,&&fail,Egetd(4,14));
  Rpush(i_14);
  goto h_41;
  i_14 :
  goto e_13;
  h_41 :
  Move(1,4,4,3);
  Move(1,5,4,5);
  Move(1,6,4,7);
  Move(1,7,4,9);
  Move(1,8,4,11);
  Move(1,9,4,13);
  Return();
  e_13 :
  Epopd(4,14);
  Return();
  i_12 :
  Epopd(3,3);
  Return();
  g_12 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,3);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset(App2("Cons",Egetd(1,3),App2("Cons",Egetd(1,6),App2("Cons",Egetd(1,8),App0("Nil")))));
  Ccall(_stratego_s_21);
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
  t_11 :
  goto s_11;
  m_37 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_u_21);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App3("SDef",App2("Mod",Egetd(0,2),ATmakeString("T")),App0("Nil"),App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App1("SRule",App3("Rule",App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),App0("Nil")),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),App0("Nil")),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App0("Id"))))));
  Epopd(1,1);
  Return();
  s_11 :
  goto r_11;
  l_37 :
  Epushd(1,12);
  Tdupl();
  Epushd(2,6);
  Ccall(_stratego_u_21);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",App1("Var",Egetd(1,1)),App0("TNil"))));
  MoveTop(2,2);
  goto b_39;
  b_39 :
  TestFunFC(z_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto c_39;
  c_39 :
  TestFunFC(z_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto d_39;
  d_39 :
  TestFunFC(a_1,&&fail,Egetd(2,6));
  Rpush(k_14);
  goto p_37;
  k_14 :
  goto j_14;
  p_37 :
  Epushd(3,13);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(l_14);
  t_50 :
  Epushd(4,7);
  MoveTop(4,1);
  goto d_38;
  d_38 :
  TestFunFC(z_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto e_38;
  e_38 :
  TestFunFC(z_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto f_38;
  f_38 :
  TestFunFC(z_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto g_38;
  g_38 :
  TestFunFC(a_1,&&fail,Egetd(4,7));
  Rpush(n_14);
  goto q_37;
  n_14 :
  goto m_14;
  q_37 :
  Epushd(5,4);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_d_22);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_v_21);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Tdupl();
  Epushd(6,3);
  Ccall(_stratego_u_21);
  MoveTop(6,1);
  Move(5,2,6,1);
  Ccall(_stratego_u_21);
  MoveTop(6,2);
  Move(5,3,6,2);
  Ccall(_stratego_u_21);
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
  Cpush(p_14);
  Epushd(6,7);
  MoveTop(6,1);
  goto y_37;
  y_37 :
  TestFunFC(z_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto z_37;
  z_37 :
  TestInt(6,2,0,&&fail);
  goto a_38;
  a_38 :
  TestFunFC(z_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto b_38;
  b_38 :
  TestFunFC(z_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto c_38;
  c_38 :
  TestFunFC(a_1,&&fail,Egetd(6,7));
  Rpush(t_14);
  goto x_37;
  t_14 :
  goto s_14;
  x_37 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  s_14 :
  Epopd(6,7);
  goto o_14;
  p_14 :
  Rpush(v_14);
  goto t_50;
  v_14 :
  goto u_14;
  o_14 :
  Cpop();
  u_14 :
  Epopd(5,4);
  Return();
  m_14 :
  Epopd(4,7);
  Return();
  l_14 :
  Rpush(x_14);
  u_50 :
  Cpush(z_14);
  Epushd(4,8);
  MoveTop(4,1);
  Rpush(a_15);
  v_50 :
  Cpush(c_15);
  Ccall(_stratego_h_23);
  goto b_15;
  c_15 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto j_38;
  j_38 :
  TestFunFC(z_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(f_15);
  goto i_38;
  f_15 :
  goto e_15;
  i_38 :
  NotNULLd(5,2);
  Tset(Egetd(5,2));
  Return();
  e_15 :
  Epopd(5,3);
  OneNextSon();
  Rpush(g_15);
  goto v_50;
  g_15 :
  AllBuild();
  goto d_15;
  b_15 :
  Cpop();
  d_15 :
  Return();
  a_15 :
  MoveTop(4,2);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Rpush(h_15);
  w_50 :
  Cpush(k_15);
  Ccall(_stratego_h_23);
  goto i_15;
  k_15 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto m_38;
  m_38 :
  TestFunFC(z_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(q_15);
  goto l_38;
  q_15 :
  goto m_15;
  l_38 :
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Return();
  m_15 :
  Epopd(5,3);
  OneNextSon();
  Rpush(u_15);
  goto w_50;
  u_15 :
  AllBuild();
  goto l_15;
  i_15 :
  Cpop();
  l_15 :
  Return();
  h_15 :
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
  Rpush(w_15);
  goto u_50;
  w_15 :
  OneNextSon();
  Ccall(_stratego_n_22);
  AllBuild();
  AllBuild();
  MoveTop(4,4);
  goto p_38;
  p_38 :
  TestFunFC(z_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto q_38;
  q_38 :
  TestFunFC(z_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto r_38;
  r_38 :
  TestFunFC(a_1,&&fail,Egetd(4,8));
  Rpush(y_15);
  goto o_38;
  y_15 :
  goto v_15;
  o_38 :
  NotNULLd(4,5);
  NotNULLd(4,7);
  Tset(App2("TCons",Egetd(4,5),Egetd(4,7)));
  Return();
  v_15 :
  Epopd(4,8);
  goto y_14;
  z_14 :
  Rpush(b_16);
  x_50 :
  Cpush(d_16);
  Ccall(_stratego_h_23);
  goto c_16;
  d_16 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_22);
  OneNextSon();
  Rpush(f_16);
  goto x_50;
  f_16 :
  AllBuild();
  goto e_16;
  c_16 :
  Cpop();
  e_16 :
  Return();
  b_16 :
  Tset(App0("TNil"));
  goto z_15;
  y_14 :
  Cpop();
  z_15 :
  Return();
  x_14 :
  MoveTop(3,1);
  goto t_38;
  t_38 :
  TestFunFC(z_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto u_38;
  u_38 :
  TestFunFC(z_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto v_38;
  v_38 :
  TestFunFC(z_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto x_38;
  x_38 :
  TestFunFC(z_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto y_38;
  y_38 :
  TestFunFC(z_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto z_38;
  z_38 :
  TestFunFC(z_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto a_39;
  a_39 :
  TestFunFC(a_1,&&fail,Egetd(3,13));
  Rpush(g_16);
  goto s_38;
  g_16 :
  goto w_14;
  s_38 :
  Move(1,2,3,2);
  Move(1,3,3,4);
  Move(1,4,3,6);
  Move(1,5,3,8);
  Move(1,6,3,10);
  Move(1,7,3,12);
  Return();
  w_14 :
  Epopd(3,13);
  Return();
  j_14 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  MoveTop(1,8);
  goto g_39;
  g_39 :
  TestFunFC(z_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto h_39;
  h_39 :
  TestFunFC(z_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto i_39;
  i_39 :
  TestFunFC(a_1,&&fail,Egetd(1,12));
  Rpush(r_16);
  goto e_39;
  r_16 :
  goto h_16;
  e_39 :
  Epushd(2,1);
  NotNULLd(1,9);
  Tset(Egetd(1,9));
  Rpush(b_17);
  y_50 :
  Cpush(h_17);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_17);
  goto y_50;
  j_17 :
  AllBuild();
  goto g_17;
  h_17 :
  Ccall(_stratego_h_23);
  NotNULLd(1,11);
  Tset(Egetd(1,11));
  goto l_17;
  g_17 :
  Cpop();
  l_17 :
  Return();
  b_17 :
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
  h_16 :
  Epopd(1,12);
  Return();
  r_11 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_f_22)
  Epushd(0,11);
  MoveTop(0,3);
  goto t_51;
  t_51 :
  TestFunFC(z_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,9,0,3,1);
  goto u_51;
  u_51 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto v_51;
  v_51 :
  TestFunFC(z_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto w_51;
  w_51 :
  TestFunFC(a_1,&&fail,Egetd(0,8));
  goto x_51;
  x_51 :
  TestFunFC(z_0,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,11,0,9,1);
  goto y_51;
  y_51 :
  TestFunFC(a_1,&&fail,Egetd(0,11));
  goto z_51;
  z_51 :
  TestInt(0,7,0,&&y_17);
  goto a_52;
  a_52 :
  TestFunFC(a_18,&&z_17,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(c_18);
  Rpush(d_18);
  goto f_51;
  d_18 :
  goto b_18;
  c_18 :
  Ccontinue(e_18);
  Rpush(f_18);
  goto g_51;
  f_18 :
  goto b_18;
  e_18 :
  Rpush(h_18);
  goto h_51;
  h_18 :
  goto g_18;
  b_18 :
  Cpop();
  g_18 :
  goto x_17;
  z_17 :
  Cpush(j_18);
  Rpush(k_18);
  goto g_51;
  k_18 :
  goto i_18;
  j_18 :
  Rpush(m_18);
  goto h_51;
  m_18 :
  goto l_18;
  i_18 :
  Cpop();
  l_18 :
  goto x_17;
  y_17 :
  goto b_52;
  b_52 :
  TestFunFC(a_18,&&n_18,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_18);
  Rpush(q_18);
  goto f_51;
  q_18 :
  goto o_18;
  p_18 :
  Rpush(s_18);
  goto g_51;
  s_18 :
  goto r_18;
  o_18 :
  Cpop();
  r_18 :
  goto x_17;
  n_18 :
  Rpush(x_17);
  goto g_51;
  x_17 :
  goto w_17;
  h_51 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(t_18);
  t_53 :
  Cpush(v_18);
  Ccall(_stratego_h_23);
  goto u_18;
  v_18 :
  Ccontinue(w_18);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto p_51;
  p_51 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(y_18);
  goto o_51;
  y_18 :
  goto x_18;
  o_51 :
  Move(0,5,3,2);
  Return();
  x_18 :
  Epopd(3,4);
  OneNextSon();
  Rpush(z_18);
  goto t_53;
  z_18 :
  AllBuild();
  goto u_18;
  w_18 :
  Epushd(3,3);
  MoveTop(3,1);
  goto r_51;
  r_51 :
  TestFunFC(h_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(d_19);
  goto q_51;
  d_19 :
  goto c_19;
  q_51 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(e_19);
  goto t_53;
  e_19 :
  Return();
  c_19 :
  Epopd(3,3);
  goto a_19;
  u_18 :
  Cpop();
  a_19 :
  Return();
  t_18 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_r_21);
  Epopd(1,1);
  Return();
  w_17 :
  goto v_17;
  g_51 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(f_19);
  s_53 :
  Cpush(h_19);
  Ccall(_stratego_h_23);
  goto g_19;
  h_19 :
  Ccontinue(i_19);
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
  Ccall(_stratego_j_22);
  MoveTop(3,1);
  Move(0,7,3,1);
  Epopd(3,1);
  Tpop();
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(j_19);
  goto s_53;
  j_19 :
  AllBuild();
  goto g_19;
  i_19 :
  Epushd(3,3);
  MoveTop(3,1);
  goto m_51;
  m_51 :
  TestFunFC(h_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(m_19);
  goto l_51;
  m_19 :
  goto l_19;
  l_51 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(n_19);
  goto s_53;
  n_19 :
  Return();
  l_19 :
  Epopd(3,3);
  goto k_19;
  g_19 :
  Cpop();
  k_19 :
  Return();
  f_19 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_r_21);
  Epopd(1,1);
  Return();
  v_17 :
  goto u_17;
  f_51 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,7),App0("TNil")))));
  Ccall(_stratego_e_22);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  u_17 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_g_22)
  Epushd(0,7);
  MoveTop(0,1);
  goto w_54;
  w_54 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto x_54;
  x_54 :
  TestFunFC(z_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto y_54;
  y_54 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto z_54;
  z_54 :
  TestFunFC(a_1,&&fail,Egetd(0,6));
  Rpush(p_19);
  goto u_53;
  p_19 :
  goto o_19;
  u_53 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto w_53;
  w_53 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto x_53;
  x_53 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto y_53;
  y_53 :
  TestFunFC(a_1,&&fail,Egetd(2,5));
  Rpush(r_19);
  goto v_53;
  r_19 :
  goto q_19;
  v_53 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  q_19 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto a_54;
  a_54 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto b_54;
  b_54 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto c_54;
  c_54 :
  TestFunFC(a_1,&&fail,Egetd(2,5));
  Rpush(t_19);
  goto z_53;
  t_19 :
  goto s_19;
  z_53 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  s_19 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(u_19);
  a_57 :
  Epushd(2,9);
  MoveTop(2,1);
  goto j_54;
  j_54 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto k_54;
  k_54 :
  TestFunFC(s_8,&&y_19,Egetd(2,2));
  goto l_54;
  l_54 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto m_54;
  m_54 :
  TestFunFC(s_8,&&fail,Egetd(2,6));
  goto n_54;
  n_54 :
  TestFunFC(a_1,&&fail,Egetd(2,9));
  Rpush(x_19);
  goto d_54;
  y_19 :
  TestFunFC(h_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto o_54;
  o_54 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto p_54;
  p_54 :
  TestFunFC(h_1,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto q_54;
  q_54 :
  TestFunFC(a_1,&&fail,Egetd(2,9));
  Rpush(x_19);
  goto e_54;
  x_19 :
  goto w_19;
  e_54 :
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
  Rpush(a_20);
  goto a_57;
  a_20 :
  OneNextSon();
  Ccall(_stratego_n_22);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto g_54;
  g_54 :
  TestFunFC(z_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto h_54;
  h_54 :
  TestFunFC(z_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto i_54;
  i_54 :
  TestFunFC(a_1,&&fail,Egetd(3,5));
  Rpush(b_20);
  goto f_54;
  b_20 :
  goto z_19;
  f_54 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  z_19 :
  Epopd(3,5);
  Return();
  w_19 :
  goto v_19;
  d_54 :
  Tset(App0("Nil"));
  Return();
  v_19 :
  Epopd(2,9);
  Return();
  u_19 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto t_54;
  t_54 :
  TestFunFC(z_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto u_54;
  u_54 :
  TestFunFC(z_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto v_54;
  v_54 :
  TestFunFC(a_1,&&fail,Egetd(1,9));
  Rpush(d_20);
  goto s_54;
  d_20 :
  goto c_20;
  s_54 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(e_20);
  b_57 :
  Cpush(g_20);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_20);
  goto b_57;
  h_20 :
  AllBuild();
  goto f_20;
  g_20 :
  Ccall(_stratego_h_23);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto i_20;
  f_20 :
  Cpop();
  i_20 :
  Return();
  e_20 :
  Return();
  c_20 :
  Epopd(1,9);
  Return();
  o_19 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_h_22)
  Epushd(0,5);
  MoveTop(0,5);
  goto s_57;
  s_57 :
  TestFunFC(z_0,&&o_20,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto t_57;
  t_57 :
  TestFunFC(z_0,&&p_20,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto u_57;
  u_57 :
  TestFunFC(a_1,&&q_20,Egetd(0,4));
  Cpush(s_20);
  Rpush(w_20);
  goto c_57;
  w_20 :
  goto r_20;
  s_20 :
  Rpush(y_20);
  goto d_57;
  y_20 :
  goto x_20;
  r_20 :
  Cpop();
  x_20 :
  goto m_20;
  q_20 :
  Rpush(m_20);
  goto d_57;
  p_20 :
  Rpush(m_20);
  goto d_57;
  o_20 :
  Rpush(m_20);
  goto d_57;
  m_20 :
  goto k_20;
  d_57 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(z_20);
  g_59 :
  Cpush(d_21);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Cpush(f_21);
  Epushd(1,7);
  MoveTop(1,1);
  goto j_57;
  j_57 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto k_57;
  k_57 :
  TestFunFC(z_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto l_57;
  l_57 :
  TestFunFC(z_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto m_57;
  m_57 :
  TestFunFC(a_1,&&fail,Egetd(1,6));
  Rpush(h_21);
  goto i_57;
  h_21 :
  goto g_21;
  i_57 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  g_21 :
  Epopd(1,7);
  goto e_21;
  f_21 :
  Ccall(_stratego_g_22);
  goto i_21;
  e_21 :
  Cpop();
  i_21 :
  OneNextSon();
  Ccall(_stratego_n_22);
  AllBuild();
  AllBuild();
  goto c_21;
  d_21 :
  Epushd(1,7);
  MoveTop(1,1);
  goto o_57;
  o_57 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_57;
  p_57 :
  TestFunFC(z_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto q_57;
  q_57 :
  TestFunFC(h_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto r_57;
  r_57 :
  TestFunFC(a_1,&&fail,Egetd(1,7));
  Rpush(z_21);
  goto n_57;
  z_21 :
  goto k_21;
  n_57 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  k_21 :
  Epopd(1,7);
  goto j_21;
  c_21 :
  Cpop();
  j_21 :
  Cpush(c_22);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_23);
  OneNextSon();
  Ccall(_stratego_n_22);
  AllBuild();
  AllBuild();
  goto a_22;
  c_22 :
  Rpush(y_22);
  goto g_59;
  y_22 :
  goto w_22;
  a_22 :
  Cpop();
  w_22 :
  Return();
  z_20 :
  Return();
  k_20 :
  goto j_20;
  c_57 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(z_22);
  e_59 :
  Cpush(j_23);
  Ccall(_stratego_h_23);
  goto i_23;
  j_23 :
  Ccontinue(k_23);
  Epushd(1,3);
  MoveTop(1,1);
  goto h_57;
  h_57 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(m_23);
  goto e_57;
  m_23 :
  goto l_23;
  e_57 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(u_23);
  f_59 :
  Cpush(y_23);
  Epushd(2,3);
  MoveTop(2,1);
  goto g_57;
  g_57 :
  TestFunFC(h_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(a_24);
  goto f_57;
  a_24 :
  goto z_23;
  f_57 :
  Move(1,2,2,2);
  Return();
  z_23 :
  Epopd(2,3);
  goto w_23;
  y_23 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_24);
  goto f_59;
  h_24 :
  AllBuild();
  goto b_24;
  w_23 :
  Cpop();
  b_24 :
  Return();
  u_23 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(i_24);
  goto e_59;
  i_24 :
  Return();
  l_23 :
  Epopd(1,3);
  goto i_23;
  k_23 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_24);
  goto e_59;
  n_24 :
  AllBuild();
  goto m_24;
  i_23 :
  Cpop();
  m_24 :
  Return();
  z_22 :
  Return();
  j_20 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_i_22)
  _ST_add();
ENDPROC

PROC(_stratego_j_22)
  Rpush(p_24);
  r_59 :
  Cpush(b_25);
  Ccall(_stratego_h_23);
  Tset(MakeInt(0));
  goto z_24;
  b_25 :
  Epushd(0,3);
  MoveTop(0,1);
  goto j_59;
  j_59 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(f_25);
  goto h_59;
  f_25 :
  goto e_25;
  h_59 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(l_25);
  goto r_59;
  l_25 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_i_22);
  Epopd(1,1);
  Return();
  e_25 :
  Epopd(0,3);
  goto d_25;
  z_24 :
  Cpop();
  d_25 :
  Return();
  p_24 :
ENDPROC

PROC(_stratego_l_22)
  Rpush(m_25);
  n_61 :
  Cpush(r_25);
  Ccall(_stratego_h_23);
  Tset(App0("Nil"));
  goto q_25;
  r_25 :
  Epushd(0,3);
  MoveTop(0,1);
  goto g_60;
  g_60 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(g_26);
  goto s_59;
  g_26 :
  goto d_26;
  s_59 :
  Epushd(1,9);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(1,1);
  goto x_59;
  x_59 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,4,1,1,2);
  Rpush(r_26);
  goto t_59;
  r_26 :
  goto q_26;
  t_59 :
  Epushd(2,2);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_j_22);
  MoveTop(2,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(s_26);
  goto n_61;
  s_26 :
  MoveTop(2,2);
  NotNULLd(1,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",App2("Cons",App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))),App0("Nil")),App2("TCons",Egetd(2,2),App0("TNil"))));
  Epopd(2,2);
  Return();
  q_26 :
  MoveTop(1,5);
  goto d_60;
  d_60 :
  TestFunFC(z_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto e_60;
  e_60 :
  TestFunFC(z_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto f_60;
  f_60 :
  TestFunFC(a_1,&&fail,Egetd(1,9));
  Rpush(u_26);
  goto y_59;
  u_26 :
  goto p_26;
  y_59 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(a_27);
  o_61 :
  Cpush(f_27);
  Ccall(_stratego_h_23);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto b_27;
  f_27 :
  Ccontinue(g_27);
  Epushd(2,3);
  MoveTop(2,1);
  goto c_60;
  c_60 :
  TestFunFC(h_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(v_27);
  goto z_59;
  v_27 :
  goto m_27;
  z_59 :
  Tdupl();
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  Rpush(w_27);
  p_61 :
  Cpush(a_28);
  Epushd(3,3);
  MoveTop(3,1);
  goto b_60;
  b_60 :
  TestFunFC(h_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(h_28);
  goto a_60;
  h_28 :
  goto g_28;
  a_60 :
  Move(2,2,3,2);
  Return();
  g_28 :
  Epopd(3,3);
  goto y_27;
  a_28 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_28);
  goto p_61;
  m_28 :
  AllBuild();
  goto l_28;
  y_27 :
  Cpop();
  l_28 :
  Return();
  w_27 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(r_28);
  goto o_61;
  r_28 :
  Return();
  m_27 :
  Epopd(2,3);
  goto b_27;
  g_27 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_28);
  goto o_61;
  y_28 :
  AllBuild();
  goto x_28;
  b_27 :
  Cpop();
  x_28 :
  Return();
  a_27 :
  Return();
  p_26 :
  Epopd(1,9);
  Return();
  d_26 :
  Epopd(0,3);
  goto t_25;
  q_25 :
  Cpop();
  t_25 :
  Return();
  m_25 :
ENDPROC

PROC(_stratego_m_22)
  Epushd(0,9);
  MoveTop(0,1);
  Ccall(_stratego_l_22);
  MoveTop(0,2);
  NotNULLd(0,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil")))));
  MoveTop(0,3);
  goto q_63;
  q_63 :
  TestFunFC(z_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto r_63;
  r_63 :
  TestFunFC(z_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto s_63;
  s_63 :
  TestFunFC(z_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,9,0,7,1);
  goto t_63;
  t_63 :
  TestFunFC(a_1,&&fail,Egetd(0,9));
  Rpush(d_29);
  goto s_61;
  d_29 :
  goto c_29;
  s_61 :
  Epushd(1,7);
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,8);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",Egetd(0,4),App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,8),App2("TCons",App0("Nil"),App0("TNil")))))));
  Rpush(h_30);
  c_68 :
  Epushd(2,13);
  MoveTop(2,1);
  goto o_62;
  o_62 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto p_62;
  p_62 :
  TestFunFC(h_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto q_62;
  q_62 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto r_62;
  r_62 :
  TestFunFC(z_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto s_62;
  s_62 :
  TestFunFC(z_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto t_62;
  t_62 :
  TestFunFC(z_0,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto u_62;
  u_62 :
  TestFunFC(a_1,&&fail,Egetd(2,13));
  Cpush(n_31);
  Rpush(f_32);
  goto t_61;
  f_32 :
  goto m_31;
  n_31 :
  Rpush(t_32);
  goto u_61;
  t_32 :
  goto r_32;
  m_31 :
  Cpop();
  r_32 :
  goto k_31;
  k_31 :
  goto o_30;
  u_61 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,6),App2("TCons",Egetd(2,8),App2("TCons",Egetd(2,10),App2("TCons",App2("Cons",Egetd(2,3),Egetd(2,12)),App0("TNil")))))));
  Return();
  o_30 :
  goto n_30;
  t_61 :
  Epushd(3,8);
  Tdupl();
  Epushd(4,3);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,8),App0("TNil"))));
  Ccall(_stratego_f_22);
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Ccall(_stratego_m_21);
  MoveTop(4,2);
  Move(3,2,4,2);
  NotNULLd(3,2);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(2,6),App0("TNil"))));
  Ccall(_stratego_h_22);
  MoveTop(4,3);
  Move(3,3,4,3);
  Epopd(4,3);
  Tpop();
  NotNULLd(3,3);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,4),App0("TNil"))));
  MoveTop(3,4);
  goto l_62;
  l_62 :
  TestFunFC(z_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto m_62;
  m_62 :
  TestFunFC(z_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto n_62;
  n_62 :
  TestFunFC(a_1,&&fail,Egetd(3,8));
  Rpush(v_32);
  goto y_61;
  v_32 :
  goto u_32;
  y_61 :
  Epushd(4,6);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(w_32);
  d_68 :
  Cpush(h_33);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_33);
  goto d_68;
  i_33 :
  AllBuild();
  goto x_32;
  h_33 :
  Ccall(_stratego_h_23);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto j_33;
  x_32 :
  Cpop();
  j_33 :
  Return();
  w_32 :
  MoveTop(4,1);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,6),App0("TNil"))));
  MoveTop(4,2);
  goto i_62;
  i_62 :
  TestFunFC(z_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto j_62;
  j_62 :
  TestFunFC(z_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto k_62;
  k_62 :
  TestFunFC(a_1,&&fail,Egetd(4,6));
  Rpush(q_33);
  goto a_62;
  q_33 :
  goto k_33;
  a_62 :
  Epushd(5,8);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(r_33);
  e_68 :
  Cpush(w_33);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_33);
  goto e_68;
  y_33 :
  AllBuild();
  goto t_33;
  w_33 :
  Ccall(_stratego_h_23);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto z_33;
  t_33 :
  Cpop();
  z_33 :
  Return();
  r_33 :
  MoveTop(5,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil")))));
  MoveTop(5,2);
  goto e_62;
  e_62 :
  TestFunFC(z_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto f_62;
  f_62 :
  TestFunFC(z_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto g_62;
  g_62 :
  TestFunFC(z_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto h_62;
  h_62 :
  TestFunFC(a_1,&&fail,Egetd(5,8));
  Rpush(m_34);
  goto c_62;
  m_34 :
  goto l_34;
  c_62 :
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
  l_34 :
  Epopd(5,8);
  Return();
  k_33 :
  Epopd(4,6);
  Return();
  u_32 :
  Epopd(3,8);
  Return();
  n_30 :
  Cpush(v_34);
  Epushd(3,11);
  MoveTop(3,1);
  goto w_62;
  w_62 :
  TestFunFC(z_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto x_62;
  x_62 :
  TestFunFC(s_8,&&fail,Egetd(3,2));
  goto y_62;
  y_62 :
  TestFunFC(z_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto z_62;
  z_62 :
  TestFunFC(z_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto a_63;
  a_63 :
  TestFunFC(z_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto b_63;
  b_63 :
  TestFunFC(z_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto c_63;
  c_63 :
  TestFunFC(a_1,&&fail,Egetd(3,11));
  Rpush(x_34);
  goto v_62;
  x_34 :
  goto w_34;
  v_62 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,10),App0("TNil"))));
  Return();
  w_34 :
  Epopd(3,11);
  goto o_34;
  v_34 :
  Rpush(c_35);
  goto c_68;
  c_35 :
  goto b_35;
  o_34 :
  Cpop();
  b_35 :
  Epopd(2,13);
  Return();
  h_30 :
  MoveTop(1,1);
  goto l_63;
  l_63 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_63;
  m_63 :
  TestFunFC(z_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto n_63;
  n_63 :
  TestFunFC(s_8,&&g_35,Egetd(1,4));
  goto o_63;
  o_63 :
  TestFunFC(a_1,&&fail,Egetd(1,7));
  Rpush(d_35);
  goto d_63;
  g_35 :
  TestFunFC(h_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto p_63;
  p_63 :
  TestFunFC(a_1,&&fail,Egetd(1,7));
  Rpush(d_35);
  goto e_63;
  d_35 :
  goto g_30;
  e_63 :
  Tdupl();
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App2("Cons",Egetd(1,5),Egetd(1,6)));
  Rpush(h_35);
  f_68 :
  Cpush(t_35);
  Ccall(_stratego_h_23);
  goto s_35;
  t_35 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,3);
  goto h_63;
  h_63 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto i_63;
  i_63 :
  TestFunFC(z_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto j_63;
  j_63 :
  TestFunFC(a_1,&&fail,Egetd(2,7));
  goto k_63;
  k_63 :
  TestFunFC(a_18,&&d_36,Egetd(2,4));
  MoveArg(2,1,2,4,0);
  MoveArg(2,2,2,4,1);
  Cpush(w_36);
  Rpush(x_36);
  goto f_63;
  x_36 :
  goto n_36;
  w_36 :
  Rpush(i_37);
  goto g_63;
  i_37 :
  goto h_37;
  n_36 :
  Cpop();
  h_37 :
  goto x_35;
  d_36 :
  Rpush(x_35);
  goto g_63;
  x_35 :
  goto w_35;
  g_63 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  Tset(App2("Cons",ATmakeString("error: operator "),App2("Cons",Egetd(2,4),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(2,6),App2("Cons",ATmakeString(" undefined "),App0("Nil")))))));
  Ccall(_stratego_l_21);
  Return();
  w_35 :
  goto v_35;
  f_63 :
  NotNULLd(2,1);
  NotNULLd(2,2);
  NotNULLd(2,6);
  Tset(App2("Cons",ATmakeString("error: operator "),App2("Cons",Egetd(2,1),App2("Cons",ATmakeString("^"),App2("Cons",Egetd(2,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(2,6),App2("Cons",ATmakeString(" undefined "),App0("Nil")))))))));
  Ccall(_stratego_l_21);
  Return();
  v_35 :
  Epopd(2,7);
  OneNextSon();
  Rpush(j_37);
  goto f_68;
  j_37 :
  AllBuild();
  goto u_35;
  s_35 :
  Cpop();
  u_35 :
  Return();
  h_35 :
  Tpop();
  Tset(MakeInt(1));
  Ccall(_stratego_b_23);
  Return();
  g_30 :
  goto s_29;
  d_63 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  s_29 :
  Epopd(1,7);
  Return();
  c_29 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_n_22)
  Epushd(0,1);
  MoveTop(0,1);
  goto h_68;
  h_68 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  Rpush(r_37);
  goto g_68;
  r_37 :
  goto o_37;
  g_68 :
  Return();
  o_37 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_22)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_c_23);
  Tset(MakeInt(1));
  Ccall(_stratego_b_23);
ENDPROC

PROC(_stratego_p_22)
  Epushd(0,2);
  Tdupl();
  Cpush(t_37);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Cpush(u_37);
  Tdupl();
  Rpush(v_37);
  f_69 :
  Cpush(h_38);
  Epushd(1,3);
  MoveTop(1,1);
  goto k_68;
  k_68 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_68;
  l_68 :
  TestFunFC(w_38,&&fail,Egetd(1,2));
  Rpush(n_38);
  goto j_68;
  n_38 :
  goto k_38;
  j_68 :
  Return();
  k_38 :
  Epopd(1,3);
  goto w_37;
  h_38 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_39);
  goto f_69;
  j_39 :
  AllBuild();
  goto f_39;
  w_37 :
  Cpop();
  f_39 :
  Return();
  v_37 :
  Cpop();
  Crestore();
  Cjump();
  u_37 :
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_n_22);
  AllBuild();
  AllBuild();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Rpush(k_39);
  g_69 :
  Cpush(o_39);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_68;
  n_68 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_68;
  o_68 :
  TestFunFC(f_40,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_40);
  goto m_68;
  e_40 :
  goto a_40;
  m_68 :
  Move(0,2,1,3);
  Return();
  a_40 :
  Epopd(1,4);
  goto n_39;
  o_39 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_40);
  goto g_69;
  v_40 :
  AllBuild();
  goto g_40;
  n_39 :
  Cpop();
  g_40 :
  Return();
  k_39 :
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_n_22);
  AllBuild();
  AllBuild();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Rpush(y_40);
  h_69 :
  Cpush(c_41);
  Epushd(1,4);
  MoveTop(1,1);
  goto q_68;
  q_68 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto r_68;
  r_68 :
  TestFunFC(k_42,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_42);
  goto p_68;
  e_42 :
  goto t_41;
  p_68 :
  Move(0,1,1,3);
  Return();
  t_41 :
  Epopd(1,4);
  goto b_41;
  c_41 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_42);
  goto h_69;
  z_42 :
  AllBuild();
  goto l_42;
  b_41 :
  Cpop();
  l_42 :
  Return();
  y_40 :
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_n_22);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_c_23);
  goto s_37;
  t_37 :
  goto a_43;
  s_37 :
  Cpop();
  a_43 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_b_23);
  Epopd(0,2);
ENDPROC

PROC(_stratego_q_22)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_r_22)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_s_22)
  Epushd(0,1);
  Tdupl();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Cpush(j_43);
  Rpush(k_43);
  h_70 :
  Cpush(n_43);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_69;
  j_69 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_69;
  k_69 :
  TestFunFC(w_43,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_43);
  goto i_69;
  v_43 :
  goto o_43;
  i_69 :
  Move(0,1,1,3);
  Return();
  o_43 :
  Epopd(1,4);
  goto m_43;
  n_43 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_44);
  goto h_70;
  f_44 :
  AllBuild();
  goto e_44;
  m_43 :
  Cpop();
  e_44 :
  Return();
  k_43 :
  goto i_43;
  j_43 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto h_44;
  i_43 :
  Cpop();
  h_44 :
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_n_22);
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
  Ccall(_stratego_n_22);
  AllBuild();
  AllBuild();
  Cpush(m_44);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Rpush(o_44);
  i_70 :
  Cpush(t_44);
  Epushd(1,3);
  MoveTop(1,1);
  goto q_69;
  q_69 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_69;
  r_69 :
  TestFunFC(c_45,&&fail,Egetd(1,2));
  Rpush(b_45);
  goto p_69;
  b_45 :
  goto v_44;
  p_69 :
  Return();
  v_44 :
  Epopd(1,3);
  goto s_44;
  t_44 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_45);
  goto i_70;
  w_45 :
  AllBuild();
  goto v_45;
  s_44 :
  Cpop();
  v_45 :
  Return();
  o_44 :
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_22);
  OneNextSon();
  Ccall(_stratego_n_22);
  AllBuild();
  AllBuild();
  goto l_44;
  m_44 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_22);
  OneNextSon();
  Ccall(_stratego_n_22);
  AllBuild();
  AllBuild();
  goto y_45;
  l_44 :
  Cpop();
  y_45 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_22)
  _ST_dtime();
ENDPROC

PROC(_stratego_x_22)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_a_23)
  Epushd(0,3);
  Tdupl();
  Cpush(c_46);
  Rpush(d_46);
  c_71 :
  Cpush(u_46);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_70;
  k_70 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_70;
  l_70 :
  TestFunFC(e_47,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_47);
  goto j_70;
  d_47 :
  goto v_46;
  j_70 :
  Move(0,1,1,3);
  Return();
  v_46 :
  Epopd(1,4);
  goto o_46;
  u_46 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_47);
  goto c_71;
  h_47 :
  AllBuild();
  goto f_47;
  o_46 :
  Cpop();
  f_47 :
  Return();
  d_46 :
  goto z_45;
  c_46 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto j_47;
  z_45 :
  Cpop();
  j_47 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_x_22);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_b_23)
  _ST_exit();
ENDPROC

PROC(_stratego_c_23)
  _ST_printnl();
ENDPROC

PROC(_stratego_d_23)
  Epushd(0,1);
  Tdupl();
  Rpush(r_47);
  l_71 :
  Cpush(g_48);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_71;
  e_71 :
  TestFunFC(h_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_71;
  f_71 :
  TestFunFC(k_42,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_48);
  goto d_71;
  i_48 :
  goto h_48;
  d_71 :
  Move(0,1,1,3);
  Return();
  h_48 :
  Epopd(1,4);
  goto s_47;
  g_48 :
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_48);
  goto l_71;
  p_48 :
  AllBuild();
  goto j_48;
  s_47 :
  Cpop();
  j_48 :
  Return();
  r_47 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_c_23);
  Tset(MakeInt(1));
  Ccall(_stratego_b_23);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_23)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_71;
  n_71 :
  TestFunFC(d_49,&&fail,Egetd(0,1));
  Rpush(c_49);
  goto m_71;
  c_49 :
  goto q_48;
  m_71 :
  Return();
  q_48 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_23)
  Tdupl();
  f_49 :
  TestFunTop(h_1);
  Cpush(j_49);
  Arg(0);
  Cpush(n_49);
  Ccall(_stratego_e_23);
  goto m_49;
  n_49 :
  Epushd(0,2);
  MoveTop(0,1);
  goto q_71;
  q_71 :
  TestFunFC(v_49,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(t_49);
  goto p_71;
  t_49 :
  goto s_49;
  p_71 :
  Return();
  s_49 :
  Epopd(0,2);
  goto o_49;
  m_49 :
  Cpop();
  o_49 :
  Tpop();
  Cpop();
  goto k_49;
  j_49 :
  Arg(1);
  Tdrop();
  goto f_49;
  k_49 :
  Tpop();
  Ccall(_stratego_d_23);
ENDPROC

PROC(_stratego_g_23)
  Epushd(0,5);
  MoveTop(0,3);
  goto h_74;
  h_74 :
  TestFunFC(h_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto i_74;
  i_74 :
  TestFunFC(h_1,&&c_53,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(f_53);
  Rpush(g_53);
  goto u_71;
  g_53 :
  goto d_53;
  f_53 :
  Ccontinue(p_53);
  Rpush(q_53);
  goto v_71;
  q_53 :
  goto d_53;
  p_53 :
  Ccontinue(r_54);
  Rpush(k_55);
  goto w_71;
  k_55 :
  goto d_53;
  r_54 :
  Ccontinue(l_55);
  Rpush(m_55);
  goto x_71;
  m_55 :
  goto d_53;
  l_55 :
  Ccontinue(g_56);
  Rpush(h_56);
  goto y_71;
  h_56 :
  goto d_53;
  g_56 :
  Ccontinue(i_56);
  Rpush(j_56);
  goto z_71;
  j_56 :
  goto d_53;
  i_56 :
  Ccontinue(p_56);
  Rpush(q_56);
  goto a_72;
  q_56 :
  goto d_53;
  p_56 :
  Ccontinue(s_56);
  Rpush(y_56);
  goto b_72;
  y_56 :
  goto d_53;
  s_56 :
  Ccontinue(z_56);
  Rpush(a_58);
  goto c_72;
  a_58 :
  goto d_53;
  z_56 :
  Ccontinue(b_58);
  Rpush(f_58);
  goto d_72;
  f_58 :
  goto d_53;
  b_58 :
  Ccontinue(g_58);
  Rpush(k_58);
  goto e_72;
  k_58 :
  goto d_53;
  g_58 :
  Ccontinue(s_58);
  Rpush(b_59);
  goto f_72;
  b_59 :
  goto d_53;
  s_58 :
  Ccontinue(c_59);
  Rpush(d_59);
  goto g_72;
  d_59 :
  goto d_53;
  c_59 :
  Ccontinue(i_59);
  Rpush(n_59);
  goto h_72;
  n_59 :
  goto d_53;
  i_59 :
  Rpush(q_59);
  goto i_72;
  q_59 :
  goto o_59;
  d_53 :
  Cpop();
  o_59 :
  goto v_52;
  c_53 :
  Cpush(v_59);
  Rpush(w_59);
  goto u_71;
  w_59 :
  goto u_59;
  v_59 :
  Ccontinue(k_60);
  Rpush(l_60);
  goto v_71;
  l_60 :
  goto u_59;
  k_60 :
  Ccontinue(q_60);
  Rpush(r_60);
  goto w_71;
  r_60 :
  goto u_59;
  q_60 :
  Ccontinue(t_60);
  Rpush(u_60);
  goto x_71;
  u_60 :
  goto u_59;
  t_60 :
  Ccontinue(v_60);
  Rpush(x_60);
  goto y_71;
  x_60 :
  goto u_59;
  v_60 :
  Ccontinue(d_61);
  Rpush(e_61);
  goto e_72;
  e_61 :
  goto u_59;
  d_61 :
  Ccontinue(i_61);
  Rpush(j_61);
  goto f_72;
  j_61 :
  goto u_59;
  i_61 :
  Ccontinue(q_61);
  Rpush(r_61);
  goto g_72;
  r_61 :
  goto u_59;
  q_61 :
  Ccontinue(v_61);
  Rpush(w_61);
  goto h_72;
  w_61 :
  goto u_59;
  v_61 :
  Rpush(z_61);
  goto i_72;
  z_61 :
  goto x_61;
  u_59 :
  Cpop();
  x_61 :
  goto v_52;
  v_52 :
  goto u_52;
  i_72 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_74;
  f_74 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_62);
  goto e_74;
  d_62 :
  goto b_62;
  e_74 :
  Return();
  b_62 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  u_52 :
  goto t_52;
  h_72 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_74;
  c_74 :
  TestStr(1,1,"-h",&&fail);
  Rpush(x_63);
  goto b_74;
  x_63 :
  goto v_63;
  b_74 :
  Return();
  v_63 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  t_52 :
  goto q_52;
  g_72 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_73;
  z_73 :
  TestStr(1,1,"--help",&&fail);
  Rpush(g_64);
  goto y_73;
  g_64 :
  goto f_64;
  y_73 :
  Return();
  f_64 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  q_52 :
  goto p_52;
  f_72 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_73;
  w_73 :
  TestStr(1,1,"-s",&&fail);
  Rpush(v_64);
  goto v_73;
  v_64 :
  goto h_64;
  v_73 :
  Return();
  h_64 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  p_52 :
  goto o_52;
  e_72 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_73;
  t_73 :
  TestStr(1,1,"-b",&&fail);
  Rpush(x_64);
  goto s_73;
  x_64 :
  goto w_64;
  s_73 :
  Return();
  w_64 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  o_52 :
  goto n_52;
  d_72 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_73;
  p_73 :
  TestStr(1,1,"--output",&&fail);
  Rpush(z_64);
  goto o_73;
  z_64 :
  goto y_64;
  o_73 :
  Return();
  y_64 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  n_52 :
  goto s_51;
  c_72 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_73;
  l_73 :
  TestStr(1,1,"-o",&&fail);
  Rpush(m_65);
  goto k_73;
  m_65 :
  goto a_65;
  k_73 :
  Return();
  a_65 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  s_51 :
  goto n_51;
  b_72 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_73;
  h_73 :
  TestStr(1,1,"--input",&&fail);
  Rpush(p_65);
  goto g_73;
  p_65 :
  goto n_65;
  g_73 :
  Return();
  n_65 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  n_51 :
  goto k_51;
  a_72 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_73;
  d_73 :
  TestStr(1,1,"-i",&&fail);
  Rpush(w_65);
  goto c_73;
  w_65 :
  goto v_65;
  c_73 :
  Return();
  v_65 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  k_51 :
  goto j_51;
  z_71 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_72;
  z_72 :
  TestStr(1,1,"@version",&&fail);
  Rpush(g_66);
  goto y_72;
  g_66 :
  goto y_65;
  y_72 :
  Return();
  y_65 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  j_51 :
  goto i_51;
  y_71 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_72;
  w_72 :
  TestStr(1,1,"--version",&&fail);
  Rpush(i_66);
  goto v_72;
  i_66 :
  goto h_66;
  v_72 :
  Return();
  h_66 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  i_51 :
  goto s_50;
  x_71 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_72;
  t_72 :
  TestStr(1,1,"-v",&&fail);
  Rpush(k_66);
  goto s_72;
  k_66 :
  goto j_66;
  s_72 :
  Return();
  j_66 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  s_50 :
  goto d_50;
  w_71 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_72;
  q_72 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(m_66);
  goto p_72;
  m_66 :
  goto l_66;
  p_72 :
  Return();
  l_66 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  d_50 :
  goto c_50;
  v_71 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_72;
  n_72 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(o_66);
  goto m_72;
  o_66 :
  goto n_66;
  m_72 :
  Return();
  n_66 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  c_50 :
  goto w_49;
  u_71 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_72;
  k_72 :
  TestStr(1,1,"-S",&&fail);
  Rpush(b_67);
  goto j_72;
  b_67 :
  goto p_66;
  j_72 :
  Return();
  p_66 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  w_49 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_23)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_78;
  b_78 :
  TestFunFC(s_8,&&fail,Egetd(0,1));
  Rpush(d_67);
  goto a_78;
  d_67 :
  goto c_67;
  a_78 :
  Return();
  c_67 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_23)
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(e_67);
  b_79 :
  Cpush(n_67);
  Cpush(p_67);
  Ccall(_stratego_h_23);
  goto o_67;
  p_67 :
  Ccall(_stratego_g_23);
  TestFunTop(h_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_67);
  goto b_79;
  y_67 :
  AllBuild();
  goto x_67;
  o_67 :
  Cpop();
  x_67 :
  goto m_67;
  n_67 :
  Epushd(0,3);
  MoveTop(0,1);
  goto f_78;
  f_78 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(b_68);
  goto e_78;
  b_68 :
  goto a_68;
  e_78 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  a_68 :
  Epopd(0,3);
  goto z_67;
  m_67 :
  Cpop();
  z_67 :
  Return();
  e_67 :
  AllBuild();
  Cpush(m_69);
  Ccall(_stratego_f_23);
  goto l_69;
  m_69 :
  Ccontinue(n_69);
  Epushd(0,6);
  Ccall(_stratego_a_23);
  Tdupl();
  Ccall(_stratego_t_22);
  Tpop();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_22);
  OneNextSon();
  Ccall(_stratego_n_22);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_t_22);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto i_78;
  i_78 :
  TestFunFC(z_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto j_78;
  j_78 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto k_78;
  k_78 :
  TestFunFC(a_1,&&fail,Egetd(0,6));
  Rpush(x_69);
  goto h_78;
  x_69 :
  goto o_69;
  h_78 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  o_69 :
  Ccall(_stratego_s_22);
  Ccall(_stratego_p_22);
  Epopd(0,6);
  goto l_69;
  n_69 :
  Ccall(_stratego_o_22);
  goto z_69;
  l_69 :
  Cpop();
  z_69 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_p_23);
ENDPROC

DOIT

