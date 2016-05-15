#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,f_8);
VARDECL(AFun,t_7);
VARDECL(AFun,s_7);
VARDECL(AFun,r_7);
VARDECL(AFun,b_5);
VARDECL(AFun,j_3);
VARDECL(AFun,v_2);
VARDECL(AFun,d_1);
VARDECL(AFun,t_0);
VARDECL(AFun,o_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_r_5);
PROCDECL(_stratego_s_5);
PROCDECL(_stratego_t_5);
PROCDECL(_stratego_u_5);
PROCDECL(_stratego_v_5);
PROCDECL(_stratego_w_5);
PROCDECL(_stratego_x_5);
PROCDECL(_stratego_y_5);
PROCDECL(_stratego_z_5);
PROCDECL(_stratego_a_6);
PROCDECL(_stratego_b_6);
PROCDECL(_stratego_c_6);
PROCDECL(_stratego_d_6);
PROCDECL(_stratego_e_6);
PROCDECL(_stratego_f_6);
PROCDECL(_stratego_g_6);
PROCDECL(_stratego_h_6);

PROC(_stratego_init_afuns)
  MOVE(f_8,ATmakeAFun("Strategies",1,0));
  MOVE(t_7,ATmakeAFun("Rules",1,0));
  MOVE(s_7,ATmakeAFun("Constructors",1,0));
  MOVE(r_7,ATmakeAFun("Size",3,0));
  MOVE(b_5,ATmakeAFun("SDef",3,0));
  MOVE(j_3,ATmakeAFun("RDef",3,0));
  MOVE(v_2,ATmakeAFun("Nil",0,0));
  MOVE(d_1,ATmakeAFun("OpDecl",2,0));
  MOVE(t_0,ATmakeAFun("TNil",0,0));
  MOVE(o_0,ATmakeAFun("TCons",2,0));
  MOVE(c_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Epushd(0,3);
  MoveTop(0,1);
  goto s_0;
  s_0 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(b_0);
  goto r_3;
  b_0 :
  goto a_0;
  r_3 :
  Epushd(1,2);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(d_0);
  s_3 :
  Cpush(f_0);
  Ccall(_stratego_w_5);
  goto e_0;
  f_0 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_5);
  OneNextSon();
  Rpush(h_0);
  goto s_3;
  h_0 :
  AllBuild();
  goto g_0;
  e_0 :
  Cpop();
  g_0 :
  Return();
  d_0 :
  MoveTop(1,1);
  Ccall(_stratego_b_6);
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_d_6);
  Rpush(i_0);
  w_3 :
  Cpush(k_0);
  Ccall(_stratego_w_5);
  goto j_0;
  k_0 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(2,5);
  MoveTop(2,1);
  goto p_0;
  p_0 :
  TestFunFC(o_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto q_0;
  q_0 :
  TestFunFC(o_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_0;
  r_0 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  Rpush(n_0);
  goto z_3;
  n_0 :
  goto m_0;
  z_3 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Tdupl();
  Epushd(3,2);
  MoveTop(3,1);
  Tset(App0("stdout"));
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",ATmakeString(": "),App0("TNil"))));
  Ccall(_stratego_f_6);
  MoveTop(3,2);
  NotNULLd(3,2);
  NotNULLd(3,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",App2("Cons",Egetd(3,2),App2("Cons",Egetd(3,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_6);
  Epopd(3,2);
  Tpop();
  Return();
  m_0 :
  Epopd(2,5);
  OneNextSon();
  Rpush(u_0);
  goto w_3;
  u_0 :
  AllBuild();
  goto l_0;
  j_0 :
  Cpop();
  l_0 :
  Return();
  i_0 :
  Epopd(1,2);
  Return();
  a_0 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_r_5)
  Epushd(0,5);
  MoveTop(0,1);
  Ccall(_stratego_s_5);
  MoveTop(0,2);
  Ccall(_stratego_v_5);
  MoveTop(0,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_z_5);
  MoveTop(0,4);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_a_6);
  MoveTop(0,5);
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App3("Size",App1("Constructors",Egetd(0,3)),App1("Rules",Egetd(0,4)),App1("Strategies",Egetd(0,5))));
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App3("Size",App1("Constructors",Egetd(0,3)),App1("Rules",Egetd(0,4)),App1("Strategies",Egetd(0,5))),App0("TNil"))));
  Epopd(0,5);
ENDPROC

PROC(_stratego_s_5)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("parse-mod"),App2("TCons",App2("Cons",ATmakeString("-silent"),App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString("-o"),App2("Cons",ATmakeString("pm.bla"),App0("Nil")))))),App0("TNil"))));
  Ccall(_stratego_t_5);
  Tset(ATmakeString("pm.bla"));
  Ccall(_stratego_u_5);
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_5)
  _ST_call();
ENDPROC

PROC(_stratego_u_5)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_v_5)
  Rpush(v_0);
  l_9 :
  Epushd(0,3);
  MoveTop(0,3);
  goto a_8;
  a_8 :
  TestFunFC(d_1,&&z_0,Egetd(0,3));
  MoveArg(0,1,0,3,0);
  MoveArg(0,2,0,3,1);
  Cpush(f_1);
  Rpush(g_1);
  goto m_9;
  g_1 :
  goto e_1;
  f_1 :
  Rpush(i_1);
  goto o_9;
  i_1 :
  goto h_1;
  e_1 :
  Cpop();
  h_1 :
  goto y_0;
  z_0 :
  Rpush(y_0);
  goto o_9;
  y_0 :
  goto x_0;
  o_9 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto l_7;
  l_7 :
  TestFunFC(o_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto m_7;
  m_7 :
  TestFunFC(o_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto n_7;
  n_7 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  Rpush(k_1);
  goto p_9;
  k_1 :
  goto j_1;
  p_9 :
  Move(1,1,2,4);
  Return();
  j_1 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(l_1);
  q_9 :
  Cpush(n_1);
  Ccall(_stratego_w_5);
  Tset(App0("Nil"));
  goto m_1;
  n_1 :
  Epushd(2,3);
  MoveTop(2,1);
  goto z_7;
  z_7 :
  TestFunFC(c_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(s_1);
  goto r_9;
  s_1 :
  goto r_1;
  r_9 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(t_1);
  goto l_9;
  t_1 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(u_1);
  goto q_9;
  u_1 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto w_7;
  w_7 :
  TestFunFC(o_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto x_7;
  x_7 :
  TestFunFC(o_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto y_7;
  y_7 :
  TestFunFC(t_0,&&fail,Egetd(3,7));
  Rpush(b_2);
  goto u_9;
  b_2 :
  goto v_1;
  u_9 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(c_2);
  v_9 :
  Cpush(e_2);
  Ccall(_stratego_w_5);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto d_2;
  e_2 :
  Ccontinue(f_2);
  Epushd(4,3);
  MoveTop(4,1);
  goto v_7;
  v_7 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(h_2);
  goto w_9;
  h_2 :
  goto g_2;
  w_9 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(i_2);
  x_9 :
  Cpush(k_2);
  Epushd(5,3);
  MoveTop(5,1);
  goto u_7;
  u_7 :
  TestFunFC(c_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(m_2);
  goto y_9;
  m_2 :
  goto l_2;
  y_9 :
  Move(4,2,5,2);
  Return();
  l_2 :
  Epopd(5,3);
  goto j_2;
  k_2 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_2);
  goto x_9;
  o_2 :
  AllBuild();
  goto n_2;
  j_2 :
  Cpop();
  n_2 :
  Return();
  i_2 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(p_2);
  goto v_9;
  p_2 :
  Return();
  g_2 :
  Epopd(4,3);
  goto d_2;
  f_2 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_2);
  goto v_9;
  r_2 :
  AllBuild();
  goto q_2;
  d_2 :
  Cpop();
  q_2 :
  Return();
  c_2 :
  Return();
  v_1 :
  Epopd(3,7);
  Return();
  r_1 :
  Epopd(2,3);
  goto p_1;
  m_1 :
  Cpop();
  p_1 :
  Return();
  l_1 :
  Epopd(1,1);
  Return();
  x_0 :
  goto w_0;
  m_9 :
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  Return();
  w_0 :
  Epopd(0,3);
  Return();
  v_0 :
  Ccall(_stratego_x_5);
ENDPROC

PROC(_stratego_w_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_10;
  a_10 :
  TestFunFC(v_2,&&fail,Egetd(0,1));
  Rpush(u_2);
  goto c_10;
  u_2 :
  goto t_2;
  c_10 :
  Return();
  t_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_5)
  Rpush(w_2);
  n_10 :
  Cpush(y_2);
  Ccall(_stratego_w_5);
  Tset(MakeInt(0));
  goto x_2;
  y_2 :
  Epushd(0,3);
  MoveTop(0,1);
  goto f_10;
  f_10 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(c_3);
  goto o_10;
  c_3 :
  goto b_3;
  o_10 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(d_3);
  goto n_10;
  d_3 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_y_5);
  Epopd(1,1);
  Return();
  b_3 :
  Epopd(0,3);
  goto z_2;
  x_2 :
  Cpop();
  z_2 :
  Return();
  w_2 :
ENDPROC

PROC(_stratego_y_5)
  _ST_add();
ENDPROC

PROC(_stratego_z_5)
  Rpush(e_3);
  v_12 :
  Epushd(0,4);
  MoveTop(0,4);
  goto j_11;
  j_11 :
  TestFunFC(j_3,&&i_3,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  MoveArg(0,3,0,4,2);
  Cpush(l_3);
  Rpush(m_3);
  goto w_12;
  m_3 :
  goto k_3;
  l_3 :
  Rpush(o_3);
  goto y_12;
  o_3 :
  goto n_3;
  k_3 :
  Cpop();
  n_3 :
  goto h_3;
  i_3 :
  Rpush(h_3);
  goto y_12;
  h_3 :
  goto g_3;
  y_12 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  _ST_explode_term();
  MoveTop(2,1);
  goto u_10;
  u_10 :
  TestFunFC(o_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_10;
  v_10 :
  TestFunFC(o_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_10;
  w_10 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  Rpush(q_3);
  goto z_12;
  q_3 :
  goto p_3;
  z_12 :
  Move(1,1,2,4);
  Return();
  p_3 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(t_3);
  a_13 :
  Cpush(v_3);
  Ccall(_stratego_w_5);
  Tset(App0("Nil"));
  goto u_3;
  v_3 :
  Epushd(2,3);
  MoveTop(2,1);
  goto i_11;
  i_11 :
  TestFunFC(c_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(a_4);
  goto b_13;
  a_4 :
  goto y_3;
  b_13 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(b_4);
  goto v_12;
  b_4 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(c_4);
  goto a_13;
  c_4 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto f_11;
  f_11 :
  TestFunFC(o_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto g_11;
  g_11 :
  TestFunFC(o_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto h_11;
  h_11 :
  TestFunFC(t_0,&&fail,Egetd(3,7));
  Rpush(e_4);
  goto e_13;
  e_4 :
  goto d_4;
  e_13 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(f_4);
  f_13 :
  Cpush(h_4);
  Ccall(_stratego_w_5);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto g_4;
  h_4 :
  Ccontinue(i_4);
  Epushd(4,3);
  MoveTop(4,1);
  goto e_11;
  e_11 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(k_4);
  goto g_13;
  k_4 :
  goto j_4;
  g_13 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(l_4);
  h_13 :
  Cpush(n_4);
  Epushd(5,3);
  MoveTop(5,1);
  goto d_11;
  d_11 :
  TestFunFC(c_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(p_4);
  goto i_13;
  p_4 :
  goto o_4;
  i_13 :
  Move(4,2,5,2);
  Return();
  o_4 :
  Epopd(5,3);
  goto m_4;
  n_4 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_4);
  goto h_13;
  r_4 :
  AllBuild();
  goto q_4;
  m_4 :
  Cpop();
  q_4 :
  Return();
  l_4 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(s_4);
  goto f_13;
  s_4 :
  Return();
  j_4 :
  Epopd(4,3);
  goto g_4;
  i_4 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_4);
  goto f_13;
  u_4 :
  AllBuild();
  goto t_4;
  g_4 :
  Cpop();
  t_4 :
  Return();
  f_4 :
  Return();
  d_4 :
  Epopd(3,7);
  Return();
  y_3 :
  Epopd(2,3);
  goto x_3;
  u_3 :
  Cpop();
  x_3 :
  Return();
  t_3 :
  Epopd(1,1);
  Return();
  g_3 :
  goto f_3;
  w_12 :
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  Return();
  f_3 :
  Epopd(0,4);
  Return();
  e_3 :
  Ccall(_stratego_x_5);
ENDPROC

PROC(_stratego_a_6)
  Rpush(v_4);
  s_15 :
  Epushd(0,4);
  MoveTop(0,4);
  goto g_14;
  g_14 :
  TestFunFC(b_5,&&a_5,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  MoveArg(0,3,0,4,2);
  Cpush(d_5);
  Rpush(e_5);
  goto t_15;
  e_5 :
  goto c_5;
  d_5 :
  Rpush(g_5);
  goto v_15;
  g_5 :
  goto f_5;
  c_5 :
  Cpop();
  f_5 :
  goto z_4;
  a_5 :
  Rpush(z_4);
  goto v_15;
  z_4 :
  goto x_4;
  v_15 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  _ST_explode_term();
  MoveTop(2,1);
  goto n_13;
  n_13 :
  TestFunFC(o_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_13;
  o_13 :
  TestFunFC(o_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_13;
  p_13 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  Rpush(i_5);
  goto w_15;
  i_5 :
  goto h_5;
  w_15 :
  Move(1,1,2,4);
  Return();
  h_5 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(j_5);
  x_15 :
  Cpush(l_5);
  Ccall(_stratego_w_5);
  Tset(App0("Nil"));
  goto k_5;
  l_5 :
  Epushd(2,3);
  MoveTop(2,1);
  goto f_14;
  f_14 :
  TestFunFC(c_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_5);
  goto y_15;
  o_5 :
  goto n_5;
  y_15 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(p_5);
  goto s_15;
  p_5 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(q_5);
  goto x_15;
  q_5 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto c_14;
  c_14 :
  TestFunFC(o_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto d_14;
  d_14 :
  TestFunFC(o_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto e_14;
  e_14 :
  TestFunFC(t_0,&&fail,Egetd(3,7));
  Rpush(j_6);
  goto b_16;
  j_6 :
  goto i_6;
  b_16 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(k_6);
  c_16 :
  Cpush(o_6);
  Ccall(_stratego_w_5);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto m_6;
  o_6 :
  Ccontinue(q_6);
  Epushd(4,3);
  MoveTop(4,1);
  goto b_14;
  b_14 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(t_6);
  goto d_16;
  t_6 :
  goto s_6;
  d_16 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(u_6);
  e_16 :
  Cpush(w_6);
  Epushd(5,3);
  MoveTop(5,1);
  goto a_14;
  a_14 :
  TestFunFC(c_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(y_6);
  goto f_16;
  y_6 :
  goto x_6;
  f_16 :
  Move(4,2,5,2);
  Return();
  x_6 :
  Epopd(5,3);
  goto v_6;
  w_6 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_7);
  goto e_16;
  a_7 :
  AllBuild();
  goto z_6;
  v_6 :
  Cpop();
  z_6 :
  Return();
  u_6 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(b_7);
  goto c_16;
  b_7 :
  Return();
  s_6 :
  Epopd(4,3);
  goto m_6;
  q_6 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_7);
  goto c_16;
  d_7 :
  AllBuild();
  goto c_7;
  m_6 :
  Cpop();
  c_7 :
  Return();
  k_6 :
  Return();
  i_6 :
  Epopd(3,7);
  Return();
  n_5 :
  Epopd(2,3);
  goto m_5;
  k_5 :
  Cpop();
  m_5 :
  Return();
  j_5 :
  Epopd(1,1);
  Return();
  x_4 :
  goto w_4;
  t_15 :
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  Return();
  w_4 :
  Epopd(0,4);
  Return();
  v_4 :
  Ccall(_stratego_x_5);
ENDPROC

PROC(_stratego_b_6)
  Rpush(f_7);
  u_18 :
  Cpush(h_7);
  Ccall(_stratego_w_5);
  Tset(App2("TCons",ATmakeString("all"),App2("TCons",App3("Size",App1("Constructors",MakeInt(0)),App1("Rules",MakeInt(0)),App1("Strategies",MakeInt(0))),App0("TNil"))));
  goto g_7;
  h_7 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_17;
  c_17 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(k_7);
  goto v_18;
  k_7 :
  goto j_7;
  v_18 :
  Epushd(1,25);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Rpush(p_7);
  goto u_18;
  p_7 :
  OneNextSon();
  Ccall(_stratego_c_6);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto l_16;
  l_16 :
  TestFunFC(o_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,13,1,1,1);
  goto m_16;
  m_16 :
  TestFunFC(o_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto n_16;
  n_16 :
  TestFunFC(o_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,12,1,4,1);
  goto o_16;
  o_16 :
  TestFunFC(r_7,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,8,1,5,1);
  MoveArg(1,10,1,5,2);
  goto p_16;
  p_16 :
  TestFunFC(s_7,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  goto q_16;
  q_16 :
  TestFunFC(t_7,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  goto r_16;
  r_16 :
  TestFunFC(f_8,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  goto s_16;
  s_16 :
  TestFunFC(t_0,&&fail,Egetd(1,12));
  goto t_16;
  t_16 :
  TestFunFC(o_0,&&fail,Egetd(1,13));
  MoveArg(1,14,1,13,0);
  MoveArg(1,25,1,13,1);
  goto u_16;
  u_16 :
  TestFunFC(o_0,&&fail,Egetd(1,14));
  MoveArg(1,15,1,14,0);
  MoveArg(1,16,1,14,1);
  goto v_16;
  v_16 :
  TestFunFC(o_0,&&fail,Egetd(1,16));
  MoveArg(1,17,1,16,0);
  MoveArg(1,24,1,16,1);
  goto w_16;
  w_16 :
  TestFunFC(r_7,&&fail,Egetd(1,17));
  MoveArg(1,18,1,17,0);
  MoveArg(1,20,1,17,1);
  MoveArg(1,22,1,17,2);
  goto x_16;
  x_16 :
  TestFunFC(s_7,&&fail,Egetd(1,18));
  MoveArg(1,19,1,18,0);
  goto y_16;
  y_16 :
  TestFunFC(t_7,&&fail,Egetd(1,20));
  MoveArg(1,21,1,20,0);
  goto z_16;
  z_16 :
  TestFunFC(f_8,&&fail,Egetd(1,22));
  MoveArg(1,23,1,22,0);
  goto a_17;
  a_17 :
  TestFunFC(t_0,&&fail,Egetd(1,24));
  goto b_17;
  b_17 :
  TestFunFC(t_0,&&fail,Egetd(1,25));
  Rpush(q_7);
  goto w_18;
  q_7 :
  goto o_7;
  w_18 :
  Epushd(2,3);
  NotNULLd(1,7);
  NotNULLd(1,19);
  Tset(App2("TCons",Egetd(1,7),App2("TCons",Egetd(1,19),App0("TNil"))));
  Ccall(_stratego_y_5);
  MoveTop(2,1);
  NotNULLd(1,9);
  NotNULLd(1,21);
  Tset(App2("TCons",Egetd(1,9),App2("TCons",Egetd(1,21),App0("TNil"))));
  Ccall(_stratego_y_5);
  MoveTop(2,2);
  NotNULLd(1,11);
  NotNULLd(1,23);
  Tset(App2("TCons",Egetd(1,11),App2("TCons",Egetd(1,23),App0("TNil"))));
  Ccall(_stratego_y_5);
  MoveTop(2,3);
  NotNULLd(1,15);
  NotNULLd(2,1);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(1,15),App2("TCons",App3("Size",App1("Constructors",Egetd(2,1)),App1("Rules",Egetd(2,2)),App1("Strategies",Egetd(2,3))),App0("TNil"))));
  Epopd(2,3);
  Return();
  o_7 :
  Epopd(1,25);
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

PROC(_stratego_c_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_19;
  b_19 :
  TestFunFC(t_0,&&fail,Egetd(0,1));
  Rpush(q_8);
  goto d_19;
  q_8 :
  goto h_8;
  d_19 :
  Return();
  h_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_6)
  Epushd(0,7);
  MoveTop(0,1);
  goto g_19;
  g_19 :
  TestFunFC(o_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto h_19;
  h_19 :
  TestFunFC(o_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto j_19;
  j_19 :
  TestFunFC(v_2,&&b_9,Egetd(0,4));
  goto k_19;
  k_19 :
  TestFunFC(t_0,&&fail,Egetd(0,7));
  Rpush(v_8);
  goto b_20;
  b_9 :
  TestFunFC(c_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto l_19;
  l_19 :
  TestFunFC(t_0,&&fail,Egetd(0,7));
  Rpush(v_8);
  goto c_20;
  v_8 :
  goto t_8;
  c_20 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,5),Egetd(0,6))));
  Return();
  t_8 :
  goto r_8;
  b_20 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  r_8 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_e_6)
  _ST_printnl();
ENDPROC

PROC(_stratego_f_6)
  Epushd(0,5);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_6);
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_6);
  OneNextSon();
  Ccall(_stratego_c_6);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto e_20;
  e_20 :
  TestFunFC(o_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto f_20;
  f_20 :
  TestFunFC(o_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto g_20;
  g_20 :
  TestFunFC(t_0,&&fail,Egetd(0,5));
  Rpush(g_9);
  goto o_20;
  g_9 :
  goto c_9;
  o_20 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(h_9);
  p_20 :
  Cpush(s_9);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_9);
  goto p_20;
  t_9 :
  AllBuild();
  goto n_9;
  s_9 :
  Ccall(_stratego_w_5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto z_9;
  n_9 :
  Cpop();
  z_9 :
  Return();
  h_9 :
  Ccall(_stratego_h_6);
  Return();
  c_9 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_g_6)
  _ST_explode_string();
ENDPROC

PROC(_stratego_h_6)
  _ST_implode_string();
ENDPROC
