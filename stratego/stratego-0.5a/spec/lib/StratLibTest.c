#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,q_18);
VARDECL(AFun,k_6);
VARDECL(AFun,r_4);
VARDECL(AFun,p_4);
VARDECL(AFun,o_4);
VARDECL(AFun,c_1);
VARDECL(AFun,v_0);
VARDECL(AFun,u_0);
VARDECL(AFun,p_0);
VARDECL(AFun,j_0);
VARDECL(AFun,i_0);
VARDECL(AFun,h_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_m_11);
PROCDECL(_stratego_n_11);
PROCDECL(_stratego_o_11);
PROCDECL(_stratego_p_11);
PROCDECL(_stratego_q_11);
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
PROCDECL(_stratego_l_12);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(q_18,ATmakeAFun("Call",2,0));
  MOVE(k_6,ATmakeAFun("SVar",1,0));
  MOVE(r_4,ATmakeAFun("Rec",2,0));
  MOVE(p_4,ATmakeAFun("SDef",3,0));
  MOVE(o_4,ATmakeAFun("Let",2,0));
  MOVE(c_1,ATmakeAFun("Cons",2,0));
  MOVE(v_0,ATmakeAFun("TNil",0,0));
  MOVE(u_0,ATmakeAFun("TCons",2,0));
  MOVE(p_0,ATmakeAFun("Var",1,0));
  MOVE(j_0,ATmakeAFun("Rule",3,0));
  MOVE(i_0,ATmakeAFun("LRule",1,0));
  MOVE(h_0,ATmakeAFun("Scope",2,0));
  MOVE(c_0,ATmakeAFun("Nil",0,0));
ENDPROC

PROC(_stratego_m_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_2;
  q_2 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  Rpush(b_0);
  goto p_2;
  b_0 :
  goto a_0;
  p_2 :
  Return();
  a_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_11)
  Epushd(0,6);
  MoveTop(0,2);
  goto j_3;
  j_3 :
  TestFunFC(h_0,&&g_0,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(f_0);
  goto w_2;
  g_0 :
  TestFunFC(i_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto k_3;
  k_3 :
  TestFunFC(j_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(f_0);
  goto x_2;
  f_0 :
  goto e_0;
  x_2 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_o_11);
  Return();
  e_0 :
  goto d_0;
  w_2 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  d_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_o_11)
  Rpush(k_0);
  t_15 :
  Cpush(m_0);
  Epushd(0,2);
  MoveTop(0,1);
  goto n_6;
  n_6 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(o_0);
  goto m_6;
  o_0 :
  goto n_0;
  m_6 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  n_0 :
  Epopd(0,2);
  goto l_0;
  m_0 :
  Ccontinue(q_0);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_n_11);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(r_0);
  goto t_15;
  r_0 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_y_11);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto e_7;
  e_7 :
  TestFunFC(u_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_7;
  h_7 :
  TestFunFC(u_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto i_7;
  i_7 :
  TestFunFC(v_0,&&fail,Egetd(1,5));
  Rpush(t_0);
  goto d_7;
  t_0 :
  goto s_0;
  d_7 :
  Move(0,3,1,4);
  Return();
  s_0 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(w_0);
  u_15 :
  Cpush(y_0);
  Ccall(_stratego_m_11);
  Tset(App0("Nil"));
  goto x_0;
  y_0 :
  Epushd(1,3);
  MoveTop(1,1);
  goto y_8;
  y_8 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(b_1);
  goto j_7;
  b_1 :
  goto a_1;
  j_7 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(d_1);
  goto u_15;
  d_1 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto o_8;
  o_8 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto w_8;
  w_8 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto x_8;
  x_8 :
  TestFunFC(v_0,&&fail,Egetd(2,6));
  Rpush(f_1);
  goto m_7;
  f_1 :
  goto e_1;
  m_7 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(g_1);
  v_15 :
  Cpush(i_1);
  Ccall(_stratego_m_11);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto h_1;
  i_1 :
  Ccontinue(j_1);
  Epushd(3,3);
  MoveTop(3,1);
  goto v_7;
  v_7 :
  TestFunFC(c_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_1);
  goto n_7;
  l_1 :
  goto k_1;
  n_7 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(m_1);
  w_15 :
  Cpush(o_1);
  Epushd(4,3);
  MoveTop(4,1);
  goto r_7;
  r_7 :
  TestFunFC(c_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(q_1);
  goto q_7;
  q_1 :
  goto p_1;
  q_7 :
  Move(3,2,4,2);
  Return();
  p_1 :
  Epopd(4,3);
  goto n_1;
  o_1 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_1);
  goto w_15;
  s_1 :
  AllBuild();
  goto r_1;
  n_1 :
  Cpop();
  r_1 :
  Return();
  m_1 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(t_1);
  goto v_15;
  t_1 :
  Return();
  k_1 :
  Epopd(3,3);
  goto h_1;
  j_1 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_1);
  goto v_15;
  v_1 :
  AllBuild();
  goto u_1;
  h_1 :
  Cpop();
  u_1 :
  Return();
  g_1 :
  Return();
  e_1 :
  Epopd(2,6);
  Return();
  a_1 :
  Epopd(1,3);
  goto z_0;
  x_0 :
  Cpop();
  z_0 :
  Return();
  w_0 :
  Epopd(0,3);
  goto l_0;
  q_0 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto g_9;
  g_9 :
  TestFunFC(u_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_9;
  h_9 :
  TestFunFC(u_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto s_9;
  s_9 :
  TestFunFC(v_0,&&fail,Egetd(1,5));
  Rpush(y_1);
  goto e_9;
  y_1 :
  goto x_1;
  e_9 :
  Move(0,2,1,4);
  Return();
  x_1 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(z_1);
  x_15 :
  Cpush(b_2);
  Ccall(_stratego_m_11);
  Tset(App0("Nil"));
  goto a_2;
  b_2 :
  Epushd(1,3);
  MoveTop(1,1);
  goto q_12;
  q_12 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(e_2);
  goto x_10;
  e_2 :
  goto d_2;
  x_10 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(f_2);
  goto t_15;
  f_2 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(g_2);
  goto x_15;
  g_2 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto n_12;
  n_12 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_12;
  o_12 :
  TestFunFC(u_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto p_12;
  p_12 :
  TestFunFC(v_0,&&fail,Egetd(2,7));
  Rpush(i_2);
  goto a_11;
  i_2 :
  goto h_2;
  a_11 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(j_2);
  y_15 :
  Cpush(l_2);
  Ccall(_stratego_m_11);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto k_2;
  l_2 :
  Ccontinue(m_2);
  Epushd(3,3);
  MoveTop(3,1);
  goto m_12;
  m_12 :
  TestFunFC(c_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(o_2);
  goto r_11;
  o_2 :
  goto n_2;
  r_11 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(r_2);
  z_15 :
  Cpush(t_2);
  Epushd(4,3);
  MoveTop(4,1);
  goto k_12;
  k_12 :
  TestFunFC(c_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(y_2);
  goto s_11;
  y_2 :
  goto u_2;
  s_11 :
  Move(3,2,4,2);
  Return();
  u_2 :
  Epopd(4,3);
  goto s_2;
  t_2 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_3);
  goto z_15;
  a_3 :
  AllBuild();
  goto z_2;
  s_2 :
  Cpop();
  z_2 :
  Return();
  r_2 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(b_3);
  goto y_15;
  b_3 :
  Return();
  n_2 :
  Epopd(3,3);
  goto k_2;
  m_2 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_3);
  goto y_15;
  d_3 :
  AllBuild();
  goto c_3;
  k_2 :
  Cpop();
  c_3 :
  Return();
  j_2 :
  Return();
  h_2 :
  Epopd(2,7);
  Return();
  d_2 :
  Epopd(1,3);
  goto c_2;
  a_2 :
  Cpop();
  c_2 :
  Return();
  z_1 :
  Epopd(0,2);
  goto w_1;
  l_0 :
  Cpop();
  w_1 :
  Return();
  k_0 :
ENDPROC

PROC(_stratego_p_11)
  Ccall(_stratego_o_11);
ENDPROC

PROC(_stratego_q_11)
  _ST_new();
ENDPROC

PROC(_stratego_t_11)
  Rpush(e_3);
  y_16 :
  Epushd(0,11);
  MoveTop(0,5);
  goto c_16;
  c_16 :
  TestFunFC(u_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto d_16;
  d_16 :
  TestFunFC(u_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto e_16;
  e_16 :
  TestFunFC(c_1,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto f_16;
  f_16 :
  TestFunFC(v_0,&&fail,Egetd(0,11));
  goto g_16;
  g_16 :
  TestFunFC(u_0,&&i_3,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto h_16;
  h_16 :
  TestFunFC(u_0,&&l_3,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto i_16;
  i_16 :
  TestFunFC(v_0,&&m_3,Egetd(0,4));
  Cpush(o_3);
  Rpush(p_3);
  goto a_16;
  p_3 :
  goto n_3;
  o_3 :
  Rpush(r_3);
  goto b_16;
  r_3 :
  goto q_3;
  n_3 :
  Cpop();
  q_3 :
  goto h_3;
  m_3 :
  Rpush(h_3);
  goto b_16;
  l_3 :
  Rpush(h_3);
  goto b_16;
  i_3 :
  Rpush(h_3);
  goto b_16;
  h_3 :
  goto g_3;
  b_16 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(s_3);
  goto y_16;
  s_3 :
  Return();
  g_3 :
  goto f_3;
  a_16 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  f_3 :
  Epopd(0,11);
  Return();
  e_3 :
ENDPROC

PROC(_stratego_u_11)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(t_3);
  z_22 :
  Rpush(u_3);
  a_23 :
  Epushd(1,5);
  MoveTop(1,1);
  goto x_18;
  x_18 :
  TestFunFC(u_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_18;
  y_18 :
  TestFunFC(u_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_18;
  z_18 :
  TestFunFC(v_0,&&fail,Egetd(1,5));
  Cpush(a_4);
  Rpush(b_4);
  goto a_17;
  b_4 :
  goto z_3;
  a_4 :
  Ccontinue(c_4);
  Rpush(d_4);
  goto b_17;
  d_4 :
  goto z_3;
  c_4 :
  Rpush(f_4);
  goto c_17;
  f_4 :
  goto e_4;
  z_3 :
  Cpop();
  e_4 :
  goto y_3;
  y_3 :
  goto x_3;
  c_17 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  g_4 :
  AllNextSon(&&h_4);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(i_4);
  goto a_23;
  i_4 :
  Epopd(2,1);
  goto g_4;
  h_4 :
  AllBuild();
  Return();
  x_3 :
  goto w_3;
  b_17 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,15);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,5);
  goto j_17;
  j_17 :
  TestFunFC(o_4,&&n_4,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto k_17;
  k_17 :
  TestFunFC(p_4,&&fail,Egetd(3,6));
  MoveArg(3,1,3,6,0);
  MoveArg(3,2,3,6,1);
  MoveArg(3,3,3,6,2);
  Rpush(m_4);
  goto g_17;
  n_4 :
  TestFunFC(p_4,&&q_4,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  MoveArg(3,4,3,5,2);
  Rpush(m_4);
  goto h_17;
  q_4 :
  TestFunFC(r_4,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(m_4);
  goto i_17;
  m_4 :
  goto l_4;
  i_17 :
  NotNULLd(3,6);
  Tset(App2("Cons",Egetd(3,6),App0("Nil")));
  Return();
  l_4 :
  goto k_4;
  h_17 :
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  Return();
  k_4 :
  goto j_4;
  g_17 :
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Return();
  j_4 :
  MoveTop(3,8);
  Move(2,1,3,8);
  Rpush(s_4);
  b_23 :
  Cpush(u_4);
  Ccall(_stratego_m_11);
  goto t_4;
  u_4 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_11);
  OneNextSon();
  Rpush(w_4);
  goto b_23;
  w_4 :
  AllBuild();
  goto v_4;
  t_4 :
  Cpop();
  v_4 :
  Return();
  s_4 :
  MoveTop(3,9);
  Move(2,2,3,9);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(x_4);
  c_23 :
  Epushd(4,9);
  MoveTop(4,1);
  goto u_17;
  u_17 :
  TestFunFC(u_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto v_17;
  v_17 :
  TestFunFC(c_0,&&b_5,Egetd(4,2));
  goto w_17;
  w_17 :
  TestFunFC(u_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto x_17;
  x_17 :
  TestFunFC(c_0,&&fail,Egetd(4,6));
  goto y_17;
  y_17 :
  TestFunFC(v_0,&&fail,Egetd(4,9));
  Rpush(a_5);
  goto o_17;
  b_5 :
  TestFunFC(c_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto z_17;
  z_17 :
  TestFunFC(u_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto a_18;
  a_18 :
  TestFunFC(c_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto b_18;
  b_18 :
  TestFunFC(v_0,&&fail,Egetd(4,9));
  Rpush(a_5);
  goto p_17;
  a_5 :
  goto z_4;
  p_17 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Rpush(d_5);
  goto c_23;
  d_5 :
  OneNextSon();
  Ccall(_stratego_w_11);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto r_17;
  r_17 :
  TestFunFC(u_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto s_17;
  s_17 :
  TestFunFC(u_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto t_17;
  t_17 :
  TestFunFC(v_0,&&fail,Egetd(5,5));
  Rpush(e_5);
  goto q_17;
  e_5 :
  goto c_5;
  q_17 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  c_5 :
  Epopd(5,5);
  Return();
  z_4 :
  goto y_4;
  o_17 :
  Tset(App0("Nil"));
  Return();
  y_4 :
  Epopd(4,9);
  Return();
  x_4 :
  MoveTop(3,10);
  NotNULLd(3,10);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,10),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,11);
  goto f_18;
  f_18 :
  TestFunFC(u_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto g_18;
  g_18 :
  TestFunFC(u_0,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto h_18;
  h_18 :
  TestFunFC(v_0,&&fail,Egetd(3,15));
  Rpush(g_5);
  goto d_18;
  g_5 :
  goto f_5;
  d_18 :
  Epushd(4,1);
  NotNULLd(3,12);
  Tset(Egetd(3,12));
  Rpush(h_5);
  d_23 :
  Cpush(j_5);
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_5);
  goto d_23;
  n_5 :
  AllBuild();
  goto i_5;
  j_5 :
  Ccall(_stratego_m_11);
  NotNULLd(3,14);
  Tset(Egetd(3,14));
  goto o_5;
  i_5 :
  Cpop();
  o_5 :
  Return();
  h_5 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  f_5 :
  Epopd(3,15);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(q_5);
  TestFunTop(o_4);
  TravInit();
  OneNextSon();
  TestFunTop(p_4);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto j_18;
  j_18 :
  TestFunFC(c_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_5);
  goto i_18;
  s_5 :
  goto r_5;
  i_18 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  r_5 :
  Epopd(3,3);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  goto p_5;
  q_5 :
  Ccontinue(t_5);
  TestFunTop(p_4);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto p_5;
  t_5 :
  TestFunTop(r_4);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto l_18;
  l_18 :
  TestFunFC(c_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(y_5);
  goto k_18;
  y_5 :
  goto x_5;
  k_18 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  x_5 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  goto u_5;
  p_5 :
  Cpop();
  u_5 :
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto s_18;
  s_18 :
  TestFunFC(u_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto t_18;
  t_18 :
  TestFunFC(u_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto u_18;
  u_18 :
  TestFunFC(u_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto v_18;
  v_18 :
  TestFunFC(v_0,&&fail,Egetd(2,11));
  Rpush(a_6);
  goto n_18;
  a_6 :
  goto z_5;
  n_18 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Cpush(c_6);
  TestFunTop(o_4);
  TravInit();
  OneNextSon();
  TestFunTop(p_4);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,8),App0("TNil"))));
  Rpush(d_6);
  goto z_22;
  d_6 :
  Epopd(3,1);
  AllBuild();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(e_6);
  goto z_22;
  e_6 :
  Epopd(3,1);
  AllBuild();
  goto b_6;
  c_6 :
  Ccontinue(f_6);
  TestFunTop(p_4);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(h_6);
  goto z_22;
  h_6 :
  Epopd(3,1);
  AllBuild();
  goto b_6;
  f_6 :
  TestFunTop(r_4);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(j_6);
  goto z_22;
  j_6 :
  Epopd(3,1);
  AllBuild();
  goto i_6;
  b_6 :
  Cpop();
  i_6 :
  Return();
  z_5 :
  Epopd(2,11);
  Return();
  w_3 :
  goto v_3;
  a_17 :
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
  Ccall(_stratego_t_11);
  Epopd(2,1);
  AllBuild();
  Return();
  v_3 :
  Epopd(1,5);
  Return();
  u_3 :
  Return();
  t_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_11)
  Ccall(_stratego_u_11);
ENDPROC

PROC(_stratego_w_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_23;
  f_23 :
  TestFunFC(v_0,&&fail,Egetd(0,1));
  Rpush(o_6);
  goto e_23;
  o_6 :
  goto l_6;
  e_23 :
  Return();
  l_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_11)
  Epushd(0,7);
  MoveTop(0,1);
  goto j_24;
  j_24 :
  TestFunFC(c_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto k_24;
  k_24 :
  TestFunFC(u_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto l_24;
  l_24 :
  TestFunFC(u_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto m_24;
  m_24 :
  TestFunFC(v_0,&&fail,Egetd(0,6));
  Rpush(q_6);
  goto h_23;
  q_6 :
  goto p_6;
  h_23 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto j_23;
  j_23 :
  TestFunFC(u_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto k_23;
  k_23 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto l_23;
  l_23 :
  TestFunFC(v_0,&&fail,Egetd(2,5));
  Rpush(s_6);
  goto i_23;
  s_6 :
  goto r_6;
  i_23 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  r_6 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto n_23;
  n_23 :
  TestFunFC(u_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_23;
  o_23 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_23;
  p_23 :
  TestFunFC(v_0,&&fail,Egetd(2,5));
  Rpush(u_6);
  goto m_23;
  u_6 :
  goto t_6;
  m_23 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  t_6 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(v_6);
  n_26 :
  Epushd(2,9);
  MoveTop(2,1);
  goto w_23;
  w_23 :
  TestFunFC(u_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto x_23;
  x_23 :
  TestFunFC(c_0,&&z_6,Egetd(2,2));
  goto y_23;
  y_23 :
  TestFunFC(u_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto z_23;
  z_23 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  goto a_24;
  a_24 :
  TestFunFC(v_0,&&fail,Egetd(2,9));
  Rpush(y_6);
  goto q_23;
  z_6 :
  TestFunFC(c_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto b_24;
  b_24 :
  TestFunFC(u_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto c_24;
  c_24 :
  TestFunFC(c_1,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto d_24;
  d_24 :
  TestFunFC(v_0,&&fail,Egetd(2,9));
  Rpush(y_6);
  goto r_23;
  y_6 :
  goto x_6;
  r_23 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Rpush(b_7);
  goto n_26;
  b_7 :
  OneNextSon();
  Ccall(_stratego_w_11);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto t_23;
  t_23 :
  TestFunFC(u_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto u_23;
  u_23 :
  TestFunFC(u_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto v_23;
  v_23 :
  TestFunFC(v_0,&&fail,Egetd(3,5));
  Rpush(c_7);
  goto s_23;
  c_7 :
  goto a_7;
  s_23 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  a_7 :
  Epopd(3,5);
  Return();
  x_6 :
  goto w_6;
  q_23 :
  Tset(App0("Nil"));
  Return();
  w_6 :
  Epopd(2,9);
  Return();
  v_6 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto g_24;
  g_24 :
  TestFunFC(u_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto h_24;
  h_24 :
  TestFunFC(u_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto i_24;
  i_24 :
  TestFunFC(v_0,&&fail,Egetd(1,9));
  Rpush(g_7);
  goto f_24;
  g_7 :
  goto f_7;
  f_24 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(k_7);
  o_26 :
  Cpush(o_7);
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_7);
  goto o_26;
  p_7 :
  AllBuild();
  goto l_7;
  o_7 :
  Ccall(_stratego_m_11);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto s_7;
  l_7 :
  Cpop();
  s_7 :
  Return();
  k_7 :
  Return();
  f_7 :
  Epopd(1,9);
  Return();
  p_6 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_y_11)
  Epushd(0,5);
  MoveTop(0,5);
  goto f_27;
  f_27 :
  TestFunFC(u_0,&&x_7,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto g_27;
  g_27 :
  TestFunFC(u_0,&&y_7,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto h_27;
  h_27 :
  TestFunFC(v_0,&&z_7,Egetd(0,4));
  Cpush(b_8);
  Rpush(c_8);
  goto p_26;
  c_8 :
  goto a_8;
  b_8 :
  Rpush(e_8);
  goto q_26;
  e_8 :
  goto d_8;
  a_8 :
  Cpop();
  d_8 :
  goto w_7;
  z_7 :
  Rpush(w_7);
  goto q_26;
  y_7 :
  Rpush(w_7);
  goto q_26;
  x_7 :
  Rpush(w_7);
  goto q_26;
  w_7 :
  goto u_7;
  q_26 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(f_8);
  t_28 :
  Cpush(h_8);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Cpush(j_8);
  Epushd(1,7);
  MoveTop(1,1);
  goto w_26;
  w_26 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto x_26;
  x_26 :
  TestFunFC(u_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto y_26;
  y_26 :
  TestFunFC(u_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto z_26;
  z_26 :
  TestFunFC(v_0,&&fail,Egetd(1,6));
  Rpush(l_8);
  goto v_26;
  l_8 :
  goto k_8;
  v_26 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  k_8 :
  Epopd(1,7);
  goto i_8;
  j_8 :
  Ccall(_stratego_x_11);
  goto m_8;
  i_8 :
  Cpop();
  m_8 :
  OneNextSon();
  Ccall(_stratego_w_11);
  AllBuild();
  AllBuild();
  goto g_8;
  h_8 :
  Epushd(1,7);
  MoveTop(1,1);
  goto b_27;
  b_27 :
  TestFunFC(u_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_27;
  c_27 :
  TestFunFC(u_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto d_27;
  d_27 :
  TestFunFC(c_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto e_27;
  e_27 :
  TestFunFC(v_0,&&fail,Egetd(1,7));
  Rpush(q_8);
  goto a_27;
  q_8 :
  goto p_8;
  a_27 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  p_8 :
  Epopd(1,7);
  goto n_8;
  g_8 :
  Cpop();
  n_8 :
  Cpush(s_8);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_11);
  OneNextSon();
  Ccall(_stratego_w_11);
  AllBuild();
  AllBuild();
  goto r_8;
  s_8 :
  Rpush(u_8);
  goto t_28;
  u_8 :
  goto t_8;
  r_8 :
  Cpop();
  t_8 :
  Return();
  f_8 :
  Return();
  u_7 :
  goto t_7;
  p_26 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(v_8);
  r_28 :
  Cpush(a_9);
  Ccall(_stratego_m_11);
  goto z_8;
  a_9 :
  Ccontinue(b_9);
  Epushd(1,3);
  MoveTop(1,1);
  goto u_26;
  u_26 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(d_9);
  goto r_26;
  d_9 :
  goto c_9;
  r_26 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(f_9);
  s_28 :
  Cpush(j_9);
  Epushd(2,3);
  MoveTop(2,1);
  goto t_26;
  t_26 :
  TestFunFC(c_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(l_9);
  goto s_26;
  l_9 :
  goto k_9;
  s_26 :
  Move(1,2,2,2);
  Return();
  k_9 :
  Epopd(2,3);
  goto i_9;
  j_9 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_9);
  goto s_28;
  n_9 :
  AllBuild();
  goto m_9;
  i_9 :
  Cpop();
  m_9 :
  Return();
  f_9 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(o_9);
  goto r_28;
  o_9 :
  Return();
  c_9 :
  Epopd(1,3);
  goto z_8;
  b_9 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_9);
  goto r_28;
  q_9 :
  AllBuild();
  goto p_9;
  z_8 :
  Cpop();
  p_9 :
  Return();
  v_8 :
  Return();
  t_7 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_z_11)
  Rpush(r_9);
  u_34 :
  Cpush(u_9);
  Epushd(0,2);
  MoveTop(0,1);
  goto v_28;
  v_28 :
  TestFunFC(k_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(w_9);
  goto u_28;
  w_9 :
  goto v_9;
  u_28 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  v_9 :
  Epopd(0,2);
  goto t_9;
  u_9 :
  Ccontinue(x_9);
  Epushd(0,3);
  Tdupl();
  Epushd(1,8);
  MoveTop(1,5);
  goto z_28;
  z_28 :
  TestFunFC(o_4,&&c_10,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto a_29;
  a_29 :
  TestFunFC(p_4,&&fail,Egetd(1,6));
  MoveArg(1,1,1,6,0);
  MoveArg(1,2,1,6,1);
  MoveArg(1,3,1,6,2);
  Rpush(b_10);
  goto w_28;
  c_10 :
  TestFunFC(p_4,&&d_10,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  MoveArg(1,4,1,5,2);
  Rpush(b_10);
  goto x_28;
  d_10 :
  TestFunFC(r_4,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  Rpush(b_10);
  goto y_28;
  b_10 :
  goto a_10;
  y_28 :
  NotNULLd(1,6);
  Tset(App2("Cons",Egetd(1,6),App0("Nil")));
  Return();
  a_10 :
  goto z_9;
  x_28 :
  NotNULLd(1,7);
  Tset(Egetd(1,7));
  Return();
  z_9 :
  goto y_9;
  w_28 :
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Return();
  y_9 :
  MoveTop(1,8);
  Move(0,1,1,8);
  Epopd(1,8);
  Tpop();
  Cpush(f_10);
  TestFunTop(o_4);
  TravInit();
  OneNextSon();
  TestFunTop(p_4);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Rpush(g_10);
  goto u_34;
  g_10 :
  AllBuild();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(h_10);
  goto u_34;
  h_10 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_y_11);
  Epopd(1,2);
  AllBuild();
  goto e_10;
  f_10 :
  Ccontinue(i_10);
  TestFunTop(p_4);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(j_10);
  goto u_34;
  j_10 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_y_11);
  Epopd(1,2);
  AllBuild();
  goto e_10;
  i_10 :
  TestFunTop(r_4);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(l_10);
  goto u_34;
  l_10 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_y_11);
  Epopd(1,2);
  AllBuild();
  goto k_10;
  e_10 :
  Cpop();
  k_10 :
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto n_29;
  n_29 :
  TestFunFC(u_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_29;
  o_29 :
  TestFunFC(u_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto p_29;
  p_29 :
  TestFunFC(v_0,&&fail,Egetd(1,5));
  Rpush(n_10);
  goto m_29;
  n_10 :
  goto m_10;
  m_29 :
  Move(0,3,1,4);
  Return();
  m_10 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(o_10);
  v_34 :
  Cpush(q_10);
  Ccall(_stratego_m_11);
  Tset(App0("Nil"));
  goto p_10;
  q_10 :
  Epushd(1,3);
  MoveTop(1,1);
  goto c_30;
  c_30 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(t_10);
  goto q_29;
  t_10 :
  goto s_10;
  q_29 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(u_10);
  goto v_34;
  u_10 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto z_29;
  z_29 :
  TestFunFC(u_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto a_30;
  a_30 :
  TestFunFC(u_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto b_30;
  b_30 :
  TestFunFC(v_0,&&fail,Egetd(2,6));
  Rpush(w_10);
  goto t_29;
  w_10 :
  goto v_10;
  t_29 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(y_10);
  w_34 :
  Cpush(b_11);
  Ccall(_stratego_m_11);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto z_10;
  b_11 :
  Ccontinue(c_11);
  Epushd(3,3);
  MoveTop(3,1);
  goto y_29;
  y_29 :
  TestFunFC(c_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(e_11);
  goto u_29;
  e_11 :
  goto d_11;
  u_29 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(f_11);
  x_34 :
  Cpush(h_11);
  Epushd(4,3);
  MoveTop(4,1);
  goto x_29;
  x_29 :
  TestFunFC(c_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(j_11);
  goto v_29;
  j_11 :
  goto i_11;
  v_29 :
  Move(3,2,4,2);
  Return();
  i_11 :
  Epopd(4,3);
  goto g_11;
  h_11 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_11);
  goto x_34;
  l_11 :
  AllBuild();
  goto k_11;
  g_11 :
  Cpop();
  k_11 :
  Return();
  f_11 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(t_12);
  goto w_34;
  t_12 :
  Return();
  d_11 :
  Epopd(3,3);
  goto z_10;
  c_11 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_12);
  goto w_34;
  z_12 :
  AllBuild();
  goto x_12;
  z_10 :
  Cpop();
  x_12 :
  Return();
  y_10 :
  Return();
  v_10 :
  Epopd(2,6);
  Return();
  s_10 :
  Epopd(1,3);
  goto r_10;
  p_10 :
  Cpop();
  r_10 :
  Return();
  o_10 :
  Epopd(0,3);
  goto t_9;
  x_9 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto f_30;
  f_30 :
  TestFunFC(u_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_30;
  g_30 :
  TestFunFC(u_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto h_30;
  h_30 :
  TestFunFC(v_0,&&fail,Egetd(1,5));
  Rpush(c_13);
  goto e_30;
  c_13 :
  goto b_13;
  e_30 :
  Move(0,2,1,4);
  Return();
  b_13 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(d_13);
  y_34 :
  Cpush(f_13);
  Ccall(_stratego_m_11);
  Tset(App0("Nil"));
  goto e_13;
  f_13 :
  Epushd(1,3);
  MoveTop(1,1);
  goto t_30;
  t_30 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(s_13);
  goto i_30;
  s_13 :
  goto j_13;
  i_30 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(t_13);
  goto u_34;
  t_13 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(u_13);
  goto y_34;
  u_13 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto q_30;
  q_30 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_30;
  r_30 :
  TestFunFC(u_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto s_30;
  s_30 :
  TestFunFC(v_0,&&fail,Egetd(2,7));
  Rpush(x_13);
  goto l_30;
  x_13 :
  goto v_13;
  l_30 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(d_14);
  z_34 :
  Cpush(i_14);
  Ccall(_stratego_m_11);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto e_14;
  i_14 :
  Ccontinue(j_14);
  Epushd(3,3);
  MoveTop(3,1);
  goto p_30;
  p_30 :
  TestFunFC(c_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(y_14);
  goto m_30;
  y_14 :
  goto p_14;
  m_30 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(z_14);
  a_35 :
  Cpush(d_15);
  Epushd(4,3);
  MoveTop(4,1);
  goto o_30;
  o_30 :
  TestFunFC(c_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(k_15);
  goto n_30;
  k_15 :
  goto j_15;
  n_30 :
  Move(3,2,4,2);
  Return();
  j_15 :
  Epopd(4,3);
  goto b_15;
  d_15 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_15);
  goto a_35;
  p_15 :
  AllBuild();
  goto o_15;
  b_15 :
  Cpop();
  o_15 :
  Return();
  z_14 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(u_16);
  goto z_34;
  u_16 :
  Return();
  p_14 :
  Epopd(3,3);
  goto e_14;
  j_14 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_16);
  goto z_34;
  x_16 :
  AllBuild();
  goto w_16;
  e_14 :
  Cpop();
  w_16 :
  Return();
  d_14 :
  Return();
  v_13 :
  Epopd(2,7);
  Return();
  j_13 :
  Epopd(1,3);
  goto g_13;
  e_13 :
  Cpop();
  g_13 :
  Return();
  d_13 :
  Epopd(0,2);
  goto a_13;
  t_9 :
  Cpop();
  a_13 :
  Return();
  r_9 :
ENDPROC

PROC(_stratego_a_12)
  Ccall(_stratego_z_11);
ENDPROC

PROC(_stratego_b_12)
  _ST_add();
ENDPROC

PROC(_stratego_c_12)
  Rpush(z_16);
  l_35 :
  Cpush(e_17);
  Ccall(_stratego_m_11);
  Tset(MakeInt(0));
  goto d_17;
  e_17 :
  Epushd(0,3);
  MoveTop(0,1);
  goto d_35;
  d_35 :
  TestFunFC(c_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_17);
  goto b_35;
  m_17 :
  goto l_17;
  b_35 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(n_17);
  goto l_35;
  n_17 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_b_12);
  Epopd(1,1);
  Return();
  l_17 :
  Epopd(0,3);
  goto f_17;
  d_17 :
  Cpop();
  f_17 :
  Return();
  z_16 :
ENDPROC

PROC(_stratego_d_12)
  Rpush(c_18);
  k_47 :
  Epushd(0,8);
  MoveTop(0,1);
  Cpush(m_18);
  Epushd(1,4);
  MoveTop(1,1);
  goto p_35;
  p_35 :
  TestFunFC(q_18,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto q_35;
  q_35 :
  TestFunFC(k_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_18);
  goto n_35;
  p_18 :
  goto o_18;
  n_35 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_c_12);
  MoveTop(2,1);
  NotNULLd(1,3);
  NotNULLd(2,1);
  Tset(App2("Cons",App2("TCons",Egetd(1,3),App2("TCons",Egetd(2,1),App0("TNil"))),App0("Nil")));
  Epopd(2,1);
  Return();
  o_18 :
  Epopd(1,4);
  goto e_18;
  m_18 :
  Tset(App0("Nil"));
  goto r_18;
  e_18 :
  Cpop();
  r_18 :
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(b_19);
  Epushd(1,3);
  Tdupl();
  Epushd(2,8);
  MoveTop(2,5);
  goto v_35;
  v_35 :
  TestFunFC(o_4,&&m_19,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto w_35;
  w_35 :
  TestFunFC(p_4,&&fail,Egetd(2,6));
  MoveArg(2,1,2,6,0);
  MoveArg(2,2,2,6,1);
  MoveArg(2,3,2,6,2);
  Rpush(l_19);
  goto s_35;
  m_19 :
  TestFunFC(p_4,&&n_19,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  MoveArg(2,4,2,5,2);
  Rpush(l_19);
  goto t_35;
  n_19 :
  TestFunFC(r_4,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  Rpush(l_19);
  goto u_35;
  l_19 :
  goto k_19;
  u_35 :
  NotNULLd(2,6);
  Tset(App2("Cons",Egetd(2,6),App0("Nil")));
  Return();
  k_19 :
  goto i_19;
  t_35 :
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Return();
  i_19 :
  goto h_19;
  s_35 :
  NotNULLd(2,1);
  Tset(App2("Cons",Egetd(2,1),App0("Nil")));
  Return();
  h_19 :
  MoveTop(2,8);
  Move(1,1,2,8);
  Epopd(2,8);
  Tpop();
  Cpush(p_19);
  TestFunTop(o_4);
  TravInit();
  OneNextSon();
  TestFunTop(p_4);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Rpush(q_19);
  goto k_47;
  q_19 :
  AllBuild();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(b_20);
  goto k_47;
  b_20 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto m_36;
  m_36 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto n_36;
  n_36 :
  TestFunFC(u_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto o_36;
  o_36 :
  TestFunFC(v_0,&&fail,Egetd(2,7));
  Rpush(d_20);
  goto b_36;
  d_20 :
  goto c_20;
  b_36 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(e_20);
  l_47 :
  Cpush(g_20);
  Ccall(_stratego_m_11);
  goto f_20;
  g_20 :
  Ccontinue(h_20);
  Epushd(3,3);
  MoveTop(3,1);
  goto l_36;
  l_36 :
  TestFunFC(c_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_20);
  goto c_36;
  j_20 :
  goto i_20;
  c_36 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(v_20);
  m_47 :
  Cpush(x_20);
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto f_36;
  f_36 :
  TestFunFC(u_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto g_36;
  g_36 :
  TestFunFC(u_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto h_36;
  h_36 :
  TestFunFC(u_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto i_36;
  i_36 :
  TestFunFC(v_0,&&fail,Egetd(4,7));
  goto j_36;
  j_36 :
  TestFunFC(u_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto k_36;
  k_36 :
  TestFunFC(v_0,&&fail,Egetd(4,10));
  Rpush(e_21);
  goto e_36;
  e_21 :
  goto y_20;
  e_36 :
  Move(4,4,4,9);
  Return();
  y_20 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto w_20;
  x_20 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_21);
  goto m_47;
  h_21 :
  AllBuild();
  goto f_21;
  w_20 :
  Cpop();
  f_21 :
  Return();
  v_20 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(n_21);
  goto l_47;
  n_21 :
  Return();
  i_20 :
  Epopd(3,3);
  goto f_20;
  h_20 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_21);
  goto l_47;
  t_21 :
  AllBuild();
  goto o_21;
  f_20 :
  Cpop();
  o_21 :
  Return();
  e_20 :
  Return();
  c_20 :
  Epopd(2,7);
  AllBuild();
  goto o_19;
  p_19 :
  Ccontinue(u_21);
  TestFunTop(p_4);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(y_21);
  goto k_47;
  y_21 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto d_37;
  d_37 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto e_37;
  e_37 :
  TestFunFC(u_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto f_37;
  f_37 :
  TestFunFC(v_0,&&fail,Egetd(2,7));
  Rpush(b_22);
  goto s_36;
  b_22 :
  goto z_21;
  s_36 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(g_22);
  n_47 :
  Cpush(l_22);
  Ccall(_stratego_m_11);
  goto k_22;
  l_22 :
  Ccontinue(m_22);
  Epushd(3,3);
  MoveTop(3,1);
  goto c_37;
  c_37 :
  TestFunFC(c_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(q_22);
  goto t_36;
  q_22 :
  goto o_22;
  t_36 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(s_22);
  o_47 :
  Cpush(v_22);
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto w_36;
  w_36 :
  TestFunFC(u_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto x_36;
  x_36 :
  TestFunFC(u_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto y_36;
  y_36 :
  TestFunFC(u_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto z_36;
  z_36 :
  TestFunFC(v_0,&&fail,Egetd(4,7));
  goto a_37;
  a_37 :
  TestFunFC(u_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto b_37;
  b_37 :
  TestFunFC(v_0,&&fail,Egetd(4,10));
  Rpush(y_22);
  goto v_36;
  y_22 :
  goto w_22;
  v_36 :
  Move(4,4,4,9);
  Return();
  w_22 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto u_22;
  v_22 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_24);
  goto o_47;
  x_24 :
  AllBuild();
  goto e_24;
  u_22 :
  Cpop();
  e_24 :
  Return();
  s_22 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(y_24);
  goto n_47;
  y_24 :
  Return();
  o_22 :
  Epopd(3,3);
  goto k_22;
  m_22 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_25);
  goto n_47;
  t_25 :
  AllBuild();
  goto z_24;
  k_22 :
  Cpop();
  z_24 :
  Return();
  g_22 :
  Return();
  z_21 :
  Epopd(2,7);
  AllBuild();
  goto o_19;
  u_21 :
  TestFunTop(r_4);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(v_25);
  goto k_47;
  v_25 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto u_37;
  u_37 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_37;
  v_37 :
  TestFunFC(u_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto w_37;
  w_37 :
  TestFunFC(v_0,&&fail,Egetd(2,7));
  Rpush(c_26);
  goto j_37;
  c_26 :
  goto w_25;
  j_37 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(d_26);
  p_47 :
  Cpush(l_26);
  Ccall(_stratego_m_11);
  goto f_26;
  l_26 :
  Ccontinue(m_26);
  Epushd(3,3);
  MoveTop(3,1);
  goto t_37;
  t_37 :
  TestFunFC(c_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(o_27);
  goto k_37;
  o_27 :
  goto n_27;
  k_37 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(s_27);
  q_47 :
  Cpush(x_27);
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto n_37;
  n_37 :
  TestFunFC(u_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto o_37;
  o_37 :
  TestFunFC(u_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto p_37;
  p_37 :
  TestFunFC(u_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto q_37;
  q_37 :
  TestFunFC(v_0,&&fail,Egetd(4,7));
  goto r_37;
  r_37 :
  TestFunFC(u_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto s_37;
  s_37 :
  TestFunFC(v_0,&&fail,Egetd(4,10));
  Rpush(o_28);
  goto m_37;
  o_28 :
  goto f_28;
  m_37 :
  Move(4,4,4,9);
  Return();
  f_28 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto t_27;
  x_27 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_28);
  goto q_47;
  q_28 :
  AllBuild();
  goto p_28;
  t_27 :
  Cpop();
  p_28 :
  Return();
  s_27 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(b_29);
  goto p_47;
  b_29 :
  Return();
  n_27 :
  Epopd(3,3);
  goto f_26;
  m_26 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_29);
  goto p_47;
  d_29 :
  AllBuild();
  goto c_29;
  f_26 :
  Cpop();
  c_29 :
  Return();
  d_26 :
  Return();
  w_25 :
  Epopd(2,7);
  AllBuild();
  goto u_25;
  o_19 :
  Cpop();
  u_25 :
  MoveTop(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  _ST_explode_term();
  MoveTop(2,1);
  goto z_37;
  z_37 :
  TestFunFC(u_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto a_38;
  a_38 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto b_38;
  b_38 :
  TestFunFC(v_0,&&fail,Egetd(2,5));
  Rpush(f_29);
  goto y_37;
  f_29 :
  goto e_29;
  y_37 :
  Move(1,3,2,4);
  Return();
  e_29 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(g_29);
  r_47 :
  Cpush(i_29);
  Ccall(_stratego_m_11);
  Tset(App0("Nil"));
  goto h_29;
  i_29 :
  Epushd(2,3);
  MoveTop(2,1);
  goto n_38;
  n_38 :
  TestFunFC(c_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(l_29);
  goto c_38;
  l_29 :
  goto k_29;
  c_38 :
  Epushd(3,6);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(r_29);
  goto r_47;
  r_29 :
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(3,1),App0("TNil"))));
  MoveTop(3,2);
  goto k_38;
  k_38 :
  TestFunFC(u_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto l_38;
  l_38 :
  TestFunFC(u_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto m_38;
  m_38 :
  TestFunFC(v_0,&&fail,Egetd(3,6));
  Rpush(w_29);
  goto f_38;
  w_29 :
  goto s_29;
  f_38 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(d_30);
  s_47 :
  Cpush(k_30);
  Ccall(_stratego_m_11);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  goto j_30;
  k_30 :
  Ccontinue(w_30);
  Epushd(4,3);
  MoveTop(4,1);
  goto j_38;
  j_38 :
  TestFunFC(c_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(g_31);
  goto g_38;
  g_31 :
  goto f_31;
  g_38 :
  Tdupl();
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(h_31);
  t_47 :
  Cpush(j_31);
  Epushd(5,3);
  MoveTop(5,1);
  goto i_38;
  i_38 :
  TestFunFC(c_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(l_31);
  goto h_38;
  l_31 :
  goto k_31;
  h_38 :
  Move(4,2,5,2);
  Return();
  k_31 :
  Epopd(5,3);
  goto i_31;
  j_31 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_31);
  goto t_47;
  n_31 :
  AllBuild();
  goto m_31;
  i_31 :
  Cpop();
  m_31 :
  Return();
  h_31 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(q_31);
  goto s_47;
  q_31 :
  Return();
  f_31 :
  Epopd(4,3);
  goto j_30;
  w_30 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_31);
  goto s_47;
  t_31 :
  AllBuild();
  goto s_31;
  j_30 :
  Cpop();
  s_31 :
  Return();
  d_30 :
  Return();
  s_29 :
  Epopd(3,6);
  Return();
  k_29 :
  Epopd(2,3);
  goto j_29;
  h_29 :
  Cpop();
  j_29 :
  Return();
  g_29 :
  Epopd(1,3);
  goto w_18;
  b_19 :
  Epushd(1,2);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  _ST_explode_term();
  MoveTop(2,1);
  goto q_38;
  q_38 :
  TestFunFC(u_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto r_38;
  r_38 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_38;
  s_38 :
  TestFunFC(v_0,&&fail,Egetd(2,5));
  Rpush(y_31);
  goto p_38;
  y_31 :
  goto w_31;
  p_38 :
  Move(1,2,2,4);
  Return();
  w_31 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(z_31);
  u_47 :
  Cpush(c_32);
  Ccall(_stratego_m_11);
  Tset(App0("Nil"));
  goto a_32;
  c_32 :
  Epushd(2,3);
  MoveTop(2,1);
  goto e_39;
  e_39 :
  TestFunFC(c_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(g_32);
  goto t_38;
  g_32 :
  goto f_32;
  t_38 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(j_32);
  goto k_47;
  j_32 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(s_32);
  goto u_47;
  s_32 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto b_39;
  b_39 :
  TestFunFC(u_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto c_39;
  c_39 :
  TestFunFC(u_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto d_39;
  d_39 :
  TestFunFC(v_0,&&fail,Egetd(3,7));
  Rpush(u_32);
  goto w_38;
  u_32 :
  goto t_32;
  w_38 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(v_32);
  v_47 :
  Cpush(y_32);
  Ccall(_stratego_m_11);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto w_32;
  y_32 :
  Ccontinue(e_33);
  Epushd(4,3);
  MoveTop(4,1);
  goto a_39;
  a_39 :
  TestFunFC(c_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(j_33);
  goto x_38;
  j_33 :
  goto f_33;
  x_38 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(k_33);
  w_47 :
  Cpush(z_33);
  Epushd(5,3);
  MoveTop(5,1);
  goto z_38;
  z_38 :
  TestFunFC(c_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(c_34);
  goto y_38;
  c_34 :
  goto a_34;
  y_38 :
  Move(4,2,5,2);
  Return();
  a_34 :
  Epopd(5,3);
  goto q_33;
  z_33 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_34);
  goto w_47;
  k_34 :
  AllBuild();
  goto e_34;
  q_33 :
  Cpop();
  e_34 :
  Return();
  k_33 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(l_34);
  goto v_47;
  l_34 :
  Return();
  f_33 :
  Epopd(4,3);
  goto w_32;
  e_33 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_34);
  goto v_47;
  q_34 :
  AllBuild();
  goto p_34;
  w_32 :
  Cpop();
  p_34 :
  Return();
  v_32 :
  Return();
  t_32 :
  Epopd(3,7);
  Return();
  f_32 :
  Epopd(2,3);
  goto e_32;
  a_32 :
  Cpop();
  e_32 :
  Return();
  z_31 :
  Epopd(1,2);
  goto u_31;
  w_18 :
  Cpop();
  u_31 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  MoveTop(0,4);
  goto l_39;
  l_39 :
  TestFunFC(u_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto m_39;
  m_39 :
  TestFunFC(u_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto n_39;
  n_39 :
  TestFunFC(v_0,&&fail,Egetd(0,8));
  Rpush(h_35);
  goto g_39;
  h_35 :
  goto c_35;
  g_39 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(i_35);
  x_47 :
  Cpush(m_35);
  Ccall(_stratego_m_11);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  goto k_35;
  m_35 :
  Ccontinue(o_35);
  Epushd(1,3);
  MoveTop(1,1);
  goto k_39;
  k_39 :
  TestFunFC(c_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(x_35);
  goto h_39;
  x_35 :
  goto r_35;
  h_39 :
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(y_35);
  y_47 :
  Cpush(a_36);
  Epushd(2,3);
  MoveTop(2,1);
  goto j_39;
  j_39 :
  TestFunFC(c_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(p_36);
  goto i_39;
  p_36 :
  goto d_36;
  i_39 :
  Move(1,2,2,2);
  Return();
  d_36 :
  Epopd(2,3);
  goto z_35;
  a_36 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_36);
  goto y_47;
  r_36 :
  AllBuild();
  goto q_36;
  z_35 :
  Cpop();
  q_36 :
  Return();
  y_35 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(u_36);
  goto x_47;
  u_36 :
  Return();
  r_35 :
  Epopd(1,3);
  goto k_35;
  o_35 :
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_37);
  goto x_47;
  h_37 :
  AllBuild();
  goto g_37;
  k_35 :
  Cpop();
  g_37 :
  Return();
  i_35 :
  Return();
  c_35 :
  Epopd(0,8);
  Return();
  c_18 :
ENDPROC

PROC(_stratego_e_12)
  Ccall(_stratego_d_12);
ENDPROC

PROC(_stratego_f_12)
  _ST_exit();
ENDPROC

PROC(_stratego_g_12)
  _ST_printnl();
ENDPROC

PROC(_stratego_h_12)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_g_12);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_i_12)
  Tdupl();
  Ccall(_stratego_h_12);
  Tset(MakeInt(1));
  Ccall(_stratego_f_12);
  Tpop();
ENDPROC

PROC(_stratego_j_12)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_l_12)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_main)
  Cpush(l_37);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_l_12);
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_12);
  OneNextSon();
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_a_12);
  OneNextSon();
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_11);
  OneNextSon();
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_11);
  OneNextSon();
  Ccall(_stratego_m_11);
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_j_12);
  Epopd(0,1);
  goto i_37;
  l_37 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_i_12);
  goto x_37;
  i_37 :
  Cpop();
  x_37 :
ENDPROC

DOIT

