#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,r_24);
VARDECL(AFun,q_23);
VARDECL(AFun,g_16);
VARDECL(AFun,x_15);
VARDECL(AFun,k_15);
VARDECL(AFun,p_13);
VARDECL(AFun,z_11);
VARDECL(AFun,r_11);
VARDECL(AFun,i_11);
VARDECL(AFun,h_11);
VARDECL(AFun,f_11);
VARDECL(AFun,d_11);
VARDECL(AFun,b_11);
VARDECL(AFun,z_10);
VARDECL(AFun,x_10);
VARDECL(AFun,w_10);
VARDECL(AFun,v_10);
VARDECL(AFun,f_9);
VARDECL(AFun,c_9);
VARDECL(AFun,u_8);
VARDECL(AFun,s_8);
VARDECL(AFun,i_8);
VARDECL(AFun,d_8);
VARDECL(AFun,w_7);
VARDECL(AFun,t_7);
VARDECL(AFun,r_7);
VARDECL(AFun,k_7);
VARDECL(AFun,h_7);
VARDECL(AFun,f_7);
VARDECL(AFun,w_6);
VARDECL(AFun,l_6);
VARDECL(AFun,f_6);
VARDECL(AFun,l_2);
VARDECL(AFun,o_1);
VARDECL(AFun,c_1);
VARDECL(AFun,k_0);
VARDECL(AFun,d_0);
PROCDECL(_stratego_v_4);
PROCDECL(_stratego_w_4);
PROCDECL(_stratego_x_4);
PROCDECL(_stratego_y_4);
PROCDECL(_stratego_z_4);
PROCDECL(_stratego_a_5);
PROCDECL(_stratego_b_5);
PROCDECL(_stratego_c_5);
PROCDECL(_stratego_d_5);
PROCDECL(_stratego_e_5);
PROCDECL(_stratego_f_5);
PROCDECL(_stratego_g_5);
PROCDECL(_stratego_h_5);
PROCDECL(_stratego_i_5);
PROCDECL(_stratego_j_5);
PROCDECL(_stratego_k_5);
PROCDECL(_stratego_l_5);
PROCDECL(_stratego_m_5);
PROCDECL(_stratego_n_5);
PROCDECL(_stratego_o_5);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(r_24,ATmakeAFun("Block",1,0));
  MOVE(q_23,ATmakeAFun("Output",1,0));
  MOVE(g_16,ATmakeAFun("Undefined",1,0));
  MOVE(x_15,ATmakeAFun("Help",0,0));
  MOVE(k_15,ATmakeAFun("Input",1,0));
  MOVE(p_13,ATmakeAFun("Program",1,0));
  MOVE(z_11,ATmakeAFun("Runtime",1,0));
  MOVE(r_11,ATmakeAFun("Silent",0,0));
  MOVE(i_11,ATmakeAFun("TestStr",4,0));
  MOVE(h_11,ATmakeAFun("TestReal",4,0));
  MOVE(f_11,ATmakeAFun("TestInt",4,0));
  MOVE(d_11,ATmakeAFun("VARDECL",2,0));
  MOVE(b_11,ATmakeAFun("MOVE",2,0));
  MOVE(z_10,ATmakeAFun("TestFunTop",1,0));
  MOVE(x_10,ATmakeAFun("Egetd",2,0));
  MOVE(w_10,ATmakeAFun("VAR",1,0));
  MOVE(v_10,ATmakeAFun("TestFunFC",3,0));
  MOVE(f_9,ATmakeAFun("Iprim",1,0));
  MOVE(c_9,ATmakeAFun("Cpush",1,0));
  MOVE(u_8,ATmakeAFun("SomeNextSon",1,0));
  MOVE(s_8,ATmakeAFun("OneNextSon",1,0));
  MOVE(i_8,ATmakeAFun("ThreadNextSon",1,0));
  MOVE(d_8,ATmakeAFun("AllNextSon",1,0));
  MOVE(w_7,ATmakeAFun("Rpush",1,0));
  MOVE(t_7,ATmakeAFun("Nil",0,0));
  MOVE(r_7,ATmakeAFun("Ccall",2,0));
  MOVE(k_7,ATmakeAFun("ENDPROC",0,0));
  MOVE(h_7,ATmakeAFun("PROCDECL",1,0));
  MOVE(f_7,ATmakeAFun("PROC",1,0));
  MOVE(w_6,ATmakeAFun("Label",1,0));
  MOVE(l_6,ATmakeAFun("Ccontinue",1,0));
  MOVE(f_6,ATmakeAFun("Goto",1,0));
  MOVE(l_2,ATmakeAFun("TCons",2,0));
  MOVE(o_1,ATmakeAFun("ATmakeInt",1,0));
  MOVE(c_1,ATmakeAFun("ATmakeReal",1,0));
  MOVE(k_0,ATmakeAFun("Cons",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
ENDPROC

PROC(_stratego_v_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_0;
  x_0 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto a_0;
  c_0 :
  goto b_0;
  a_0 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_4)
  Rpush(e_0);
  v_5 :
  Cpush(g_0);
  Ccall(_stratego_o_5);
  goto f_0;
  g_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto p_5;
  p_5 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(j_0);
  goto s_3;
  j_0 :
  goto i_0;
  s_3 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(l_0);
  w_5 :
  Cpush(n_0);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_0);
  goto w_5;
  o_0 :
  AllBuild();
  goto m_0;
  n_0 :
  Ccall(_stratego_o_5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_0);
  goto v_5;
  q_0 :
  goto p_0;
  m_0 :
  Cpop();
  p_0 :
  Return();
  l_0 :
  Return();
  i_0 :
  Epopd(0,3);
  goto h_0;
  f_0 :
  Cpop();
  h_0 :
  Return();
  e_0 :
ENDPROC

PROC(_stratego_x_4)
  _ST_is_real();
ENDPROC

PROC(_stratego_y_4)
  _ST_is_string();
ENDPROC

PROC(_stratego_z_4)
  _ST_is_int();
ENDPROC

PROC(_stratego_a_5)
  Rpush(r_0);
  g_9 :
  Epushd(0,2);
  MoveTop(0,2);
  goto c_7;
  c_7 :
  TestFunFC(c_1,&&b_1,Egetd(0,2));
  MoveArg(0,1,0,2,0);
  Cpush(e_1);
  Rpush(f_1);
  goto x_5;
  f_1 :
  goto d_1;
  e_1 :
  Ccontinue(g_1);
  Rpush(h_1);
  goto y_5;
  h_1 :
  goto d_1;
  g_1 :
  Ccontinue(i_1);
  Rpush(j_1);
  goto z_5;
  j_1 :
  goto d_1;
  i_1 :
  Ccontinue(k_1);
  Rpush(l_1);
  goto a_6;
  l_1 :
  goto d_1;
  k_1 :
  Rpush(n_1);
  goto c_6;
  n_1 :
  goto m_1;
  d_1 :
  Cpop();
  m_1 :
  goto z_0;
  b_1 :
  TestFunFC(o_1,&&a_1,Egetd(0,2));
  MoveArg(0,1,0,2,0);
  Cpush(q_1);
  Rpush(r_1);
  goto x_5;
  r_1 :
  goto p_1;
  q_1 :
  Ccontinue(s_1);
  Rpush(t_1);
  goto y_5;
  t_1 :
  goto p_1;
  s_1 :
  Ccontinue(u_1);
  Rpush(v_1);
  goto z_5;
  v_1 :
  goto p_1;
  u_1 :
  Ccontinue(w_1);
  Rpush(x_1);
  goto b_6;
  x_1 :
  goto p_1;
  w_1 :
  Rpush(z_1);
  goto c_6;
  z_1 :
  goto y_1;
  p_1 :
  Cpop();
  y_1 :
  goto z_0;
  a_1 :
  Cpush(b_2);
  Rpush(c_2);
  goto x_5;
  c_2 :
  goto a_2;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto y_5;
  e_2 :
  goto a_2;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto z_5;
  g_2 :
  goto a_2;
  f_2 :
  Rpush(i_2);
  goto c_6;
  i_2 :
  goto h_2;
  a_2 :
  Cpop();
  h_2 :
  goto z_0;
  z_0 :
  goto y_0;
  c_6 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(2,1);
  goto q_6;
  q_6 :
  TestFunFC(l_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto r_6;
  r_6 :
  TestFunFC(l_2,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_6;
  s_6 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(k_2);
  goto p_6;
  k_2 :
  goto j_2;
  p_6 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  j_2 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(m_2);
  j_9 :
  Cpush(o_2);
  Ccall(_stratego_o_5);
  goto n_2;
  o_2 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Rpush(q_2);
  goto g_9;
  q_2 :
  OneNextSon();
  Rpush(r_2);
  goto j_9;
  r_2 :
  AllBuild();
  goto p_2;
  n_2 :
  Cpop();
  p_2 :
  Return();
  m_2 :
  Cpush(t_2);
  Ccall(_stratego_o_5);
  goto s_2;
  t_2 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_2);
  k_9 :
  Cpush(x_2);
  Ccall(_stratego_o_5);
  goto w_2;
  x_2 :
  Epushd(2,3);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_3);
  goto k_9;
  a_3 :
  AllBuild();
  MoveTop(2,1);
  goto v_6;
  v_6 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(b_3);
  goto t_6;
  b_3 :
  goto z_2;
  t_6 :
  Tset(App2("Cons",ATmakeString(","),App0("Nil")));
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("Cons",App2("Cons",ATmakeString(","),App0("Nil")),App2("Cons",Egetd(2,2),Egetd(2,3))));
  Return();
  z_2 :
  Epopd(2,3);
  goto y_2;
  w_2 :
  Cpop();
  y_2 :
  Return();
  v_2 :
  AllBuild();
  goto u_2;
  s_2 :
  Cpop();
  u_2 :
  Ccall(_stratego_w_4);
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,3),App2("TCons",App2("Cons",ATmakeString(")"),App0("Nil")),App0("TNil"))));
  MoveTop(1,4);
  goto z_6;
  z_6 :
  TestFunFC(l_2,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto a_7;
  a_7 :
  TestFunFC(l_2,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto b_7;
  b_7 :
  TestFunFC(d_0,&&fail,Egetd(1,8));
  Rpush(d_3);
  goto x_6;
  d_3 :
  goto c_3;
  x_6 :
  Epushd(2,1);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  Rpush(e_3);
  l_9 :
  Cpush(g_3);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_3);
  goto l_9;
  h_3 :
  AllBuild();
  goto f_3;
  g_3 :
  Ccall(_stratego_o_5);
  NotNULLd(1,7);
  Tset(Egetd(1,7));
  goto i_3;
  f_3 :
  Cpop();
  i_3 :
  Return();
  e_3 :
  MoveTop(2,1);
  NotNULLd(1,1);
  NotNULLd(2,1);
  Tset(App2("Cons",Egetd(1,1),App2("Cons",ATmakeString("("),Egetd(2,1))));
  Epopd(2,1);
  Return();
  c_3 :
  Epopd(1,8);
  Return();
  y_0 :
  goto w_0;
  b_6 :
  Epushd(1,6);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(j_3);
  goto g_9;
  j_3 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",App2("Cons",ATmakeString(")"),App0("Nil")),App0("TNil"))));
  MoveTop(1,2);
  goto m_6;
  m_6 :
  TestFunFC(l_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto n_6;
  n_6 :
  TestFunFC(l_2,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto o_6;
  o_6 :
  TestFunFC(d_0,&&fail,Egetd(1,6));
  Rpush(l_3);
  goto k_6;
  l_3 :
  goto k_3;
  k_6 :
  Epushd(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(m_3);
  i_9 :
  Cpush(o_3);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_3);
  goto i_9;
  p_3 :
  AllBuild();
  goto n_3;
  o_3 :
  Ccall(_stratego_o_5);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto q_3;
  n_3 :
  Cpop();
  q_3 :
  Return();
  m_3 :
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("Cons",ATmakeString("(ATerm)ATmakeInt("),Egetd(2,1)));
  Epopd(2,1);
  Return();
  k_3 :
  Epopd(1,6);
  Return();
  w_0 :
  goto v_0;
  a_6 :
  Epushd(1,6);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(t_3);
  goto g_9;
  t_3 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",App2("Cons",ATmakeString(")"),App0("Nil")),App0("TNil"))));
  MoveTop(1,2);
  goto g_6;
  g_6 :
  TestFunFC(l_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto h_6;
  h_6 :
  TestFunFC(l_2,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto i_6;
  i_6 :
  TestFunFC(d_0,&&fail,Egetd(1,6));
  Rpush(v_3);
  goto e_6;
  v_3 :
  goto u_3;
  e_6 :
  Epushd(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(w_3);
  h_9 :
  Cpush(y_3);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_3);
  goto h_9;
  z_3 :
  AllBuild();
  goto x_3;
  y_3 :
  Ccall(_stratego_o_5);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto a_4;
  x_3 :
  Cpop();
  a_4 :
  Return();
  w_3 :
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("Cons",ATmakeString("(ATerm)ATmakeReal("),Egetd(2,1)));
  Epopd(2,1);
  Return();
  u_3 :
  Epopd(1,6);
  Return();
  v_0 :
  goto u_0;
  z_5 :
  Tdupl();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_x_4);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  u_0 :
  goto t_0;
  y_5 :
  Tdupl();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_y_4);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("Cons",ATmakeString("\""),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString("\""),App0("Nil")))));
  Return();
  t_0 :
  goto s_0;
  x_5 :
  Tdupl();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_z_4);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  s_0 :
  Epopd(0,2);
  Return();
  r_0 :
ENDPROC

PROC(_stratego_b_5)
  Epushd(0,8);
  MoveTop(0,4);
  goto h_10;
  h_10 :
  TestFunFC(f_6,&&d_6,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(u_5);
  goto m_9;
  d_6 :
  TestFunFC(l_6,&&j_6,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(u_5);
  goto n_9;
  j_6 :
  TestFunFC(w_6,&&u_6,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(u_5);
  goto o_9;
  u_6 :
  TestFunFC(f_7,&&y_6,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(u_5);
  goto p_9;
  y_6 :
  TestFunFC(h_7,&&g_7,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(u_5);
  goto q_9;
  g_7 :
  TestFunFC(k_7,&&i_7,Egetd(0,4));
  Rpush(u_5);
  goto r_9;
  i_7 :
  TestFunFC(r_7,&&q_7,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto i_10;
  i_10 :
  TestFunFC(t_7,&&fail,Egetd(0,6));
  Rpush(u_5);
  goto s_9;
  q_7 :
  TestFunFC(w_7,&&u_7,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(u_5);
  goto t_9;
  u_7 :
  TestFunFC(d_8,&&c_8,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(u_5);
  goto u_9;
  c_8 :
  TestFunFC(i_8,&&f_8,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(u_5);
  goto v_9;
  f_8 :
  TestFunFC(s_8,&&r_8,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(u_5);
  goto w_9;
  r_8 :
  TestFunFC(u_8,&&t_8,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(u_5);
  goto x_9;
  t_8 :
  TestFunFC(c_9,&&w_8,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(u_5);
  goto y_9;
  w_8 :
  TestFunFC(f_9,&&d_9,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(u_5);
  goto z_9;
  d_9 :
  TestFunFC(v_10,&&u_10,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  goto j_10;
  j_10 :
  TestFunFC(w_10,&&fail,Egetd(0,5));
  MoveArg(0,3,0,5,0);
  goto k_10;
  k_10 :
  TestFunFC(x_10,&&fail,Egetd(0,7));
  MoveArg(0,1,0,7,0);
  MoveArg(0,2,0,7,1);
  Rpush(u_5);
  goto a_10;
  u_10 :
  TestFunFC(z_10,&&y_10,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto l_10;
  l_10 :
  TestFunFC(w_10,&&fail,Egetd(0,5));
  MoveArg(0,3,0,5,0);
  Rpush(u_5);
  goto b_10;
  y_10 :
  TestFunFC(b_11,&&a_11,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  Rpush(u_5);
  goto c_10;
  a_11 :
  TestFunFC(d_11,&&c_11,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  Rpush(u_5);
  goto d_10;
  c_11 :
  TestFunFC(f_11,&&e_11,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  MoveArg(0,8,0,4,3);
  Rpush(u_5);
  goto e_10;
  e_11 :
  TestFunFC(h_11,&&g_11,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  MoveArg(0,8,0,4,3);
  Rpush(u_5);
  goto f_10;
  g_11 :
  TestFunFC(i_11,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  MoveArg(0,8,0,4,3);
  Rpush(u_5);
  goto g_10;
  u_5 :
  goto t_5;
  g_10 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("TestStr("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(",\""),App2("Cons",Egetd(0,7),App2("Cons",ATmakeString("\",&&"),App2("Cons",Egetd(0,8),App2("Cons",ATmakeString(");"),App0("Nil"))))))))))),App0("Nil")));
  Return();
  t_5 :
  goto u_4;
  f_10 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("TestReal("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,7),App2("Cons",ATmakeString(",&&"),App2("Cons",Egetd(0,8),App2("Cons",ATmakeString(");"),App0("Nil"))))))))))),App0("Nil")));
  Return();
  u_4 :
  goto t_4;
  e_10 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("TestInt("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,7),App2("Cons",ATmakeString(",&&"),App2("Cons",Egetd(0,8),App2("Cons",ATmakeString(");"),App0("Nil"))))))))))),App0("Nil")));
  Return();
  t_4 :
  goto s_4;
  d_10 :
  NotNULLd(0,6);
  Tset(App2("Cons",App2("Cons",ATmakeString("VARDECL(AFun,"),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(");"),App0("Nil")))),App0("Nil")));
  Return();
  s_4 :
  goto r_4;
  c_10 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("MOVE("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(");"),App0("Nil"))))))),App0("Nil")));
  Return();
  r_4 :
  goto q_4;
  b_10 :
  NotNULLd(0,3);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("TestFunTop("),App2("Cons",Egetd(0,3),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  q_4 :
  goto p_4;
  a_10 :
  NotNULLd(0,3);
  NotNULLd(0,6);
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("TestFunFC("),App2("Cons",Egetd(0,3),App2("Cons",ATmakeString(",&&"),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(",Egetd("),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString("));"),App0("Nil"))))))))))),App0("Nil")));
  Return();
  p_4 :
  goto o_4;
  z_9 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString("();"),App0("Nil")))),App0("Nil")));
  Return();
  o_4 :
  goto n_4;
  y_9 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("Cpush("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  n_4 :
  goto m_4;
  x_9 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("SomeNextSon(&&"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  m_4 :
  goto l_4;
  w_9 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("OneNextSon(&&"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  l_4 :
  goto k_4;
  v_9 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("ThreadNextSon(&&"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  k_4 :
  goto j_4;
  u_9 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("AllNextSon(&&"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  j_4 :
  goto i_4;
  t_9 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("Rpush("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  i_4 :
  goto h_4;
  s_9 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("Ccall("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  h_4 :
  goto g_4;
  r_9 :
  Tset(App2("Cons",App2("Cons",ATmakeString("ENDPROC"),App0("Nil")),App0("Nil")));
  Return();
  g_4 :
  goto f_4;
  q_9 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("PROCDECL(_stratego_"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil")))),App0("Nil")));
  Return();
  f_4 :
  goto e_4;
  p_9 :
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Nil"),App2("Cons",App2("Cons",ATmakeString("PROC(_stratego_"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(")"),App0("Nil")))),App0("Nil"))));
  Return();
  e_4 :
  goto d_4;
  o_9 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(" :"),App0("Nil")))),App0("Nil")));
  Return();
  d_4 :
  goto c_4;
  n_9 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("Ccontinue("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  c_4 :
  goto b_4;
  m_9 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("goto "),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(";"),App0("Nil"))))),App0("Nil")));
  Return();
  b_4 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_c_5)
  _ST_open_file();
ENDPROC

PROC(_stratego_d_5)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_j_5);
  Tset(MakeInt(1));
  Ccall(_stratego_i_5);
ENDPROC

PROC(_stratego_e_5)
  Epushd(0,2);
  Tdupl();
  Cpush(k_11);
  TestFunTop(l_2);
  TravInit();
  OneNextSon();
  Cpush(l_11);
  Tdupl();
  Rpush(m_11);
  x_12 :
  Cpush(o_11);
  Epushd(1,3);
  MoveTop(1,1);
  goto c_12;
  c_12 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_12;
  d_12 :
  TestFunFC(r_11,&&fail,Egetd(1,2));
  Rpush(q_11);
  goto b_12;
  q_11 :
  goto p_11;
  b_12 :
  Return();
  p_11 :
  Epopd(1,3);
  goto n_11;
  o_11 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_11);
  goto x_12;
  t_11 :
  AllBuild();
  goto s_11;
  n_11 :
  Cpop();
  s_11 :
  Return();
  m_11 :
  Cpop();
  Crestore();
  Cjump();
  l_11 :
  OneNextSon();
  TestFunTop(l_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  AllBuild();
  TestFunTop(l_2);
  TravInit();
  OneNextSon();
  Rpush(u_11);
  y_12 :
  Cpush(w_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_12;
  f_12 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto g_12;
  g_12 :
  TestFunFC(z_11,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(y_11);
  goto e_12;
  y_11 :
  goto x_11;
  e_12 :
  Move(0,2,1,3);
  Return();
  x_11 :
  Epopd(1,4);
  goto v_11;
  w_11 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_13);
  goto y_12;
  d_13 :
  AllBuild();
  goto a_12;
  v_11 :
  Cpop();
  a_12 :
  Return();
  u_11 :
  OneNextSon();
  TestFunTop(l_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  AllBuild();
  TestFunTop(l_2);
  TravInit();
  OneNextSon();
  Rpush(e_13);
  z_12 :
  Cpush(g_13);
  Epushd(1,4);
  MoveTop(1,1);
  goto i_12;
  i_12 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto j_12;
  j_12 :
  TestFunFC(p_13,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_13);
  goto h_12;
  o_13 :
  goto m_13;
  h_12 :
  Move(0,1,1,3);
  Return();
  m_13 :
  Epopd(1,4);
  goto f_13;
  g_13 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_13);
  goto z_12;
  s_13 :
  AllBuild();
  goto q_13;
  f_13 :
  Cpop();
  q_13 :
  Return();
  e_13 :
  OneNextSon();
  TestFunTop(l_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_j_5);
  goto j_11;
  k_11 :
  goto c_15;
  j_11 :
  Cpop();
  c_15 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_i_5);
  Epopd(0,2);
ENDPROC

PROC(_stratego_f_5)
  _ST_dtime();
ENDPROC

PROC(_stratego_g_5)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_h_5)
  Epushd(0,3);
  Tdupl();
  Cpush(e_15);
  Rpush(f_15);
  t_13 :
  Cpush(h_15);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_13;
  b_13 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_13;
  c_13 :
  TestFunFC(k_15,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(j_15);
  goto a_13;
  j_15 :
  goto i_15;
  a_13 :
  Move(0,1,1,3);
  Return();
  i_15 :
  Epopd(1,4);
  goto g_15;
  h_15 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_15);
  goto t_13;
  m_15 :
  AllBuild();
  goto l_15;
  g_15 :
  Cpop();
  l_15 :
  Return();
  f_15 :
  goto d_15;
  e_15 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto n_15;
  d_15 :
  Cpop();
  n_15 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_g_5);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_i_5)
  _ST_exit();
ENDPROC

PROC(_stratego_j_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_k_5)
  Epushd(0,1);
  Tdupl();
  Rpush(o_15);
  c_14 :
  Cpush(q_15);
  Epushd(1,4);
  MoveTop(1,1);
  goto v_13;
  v_13 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto w_13;
  w_13 :
  TestFunFC(p_13,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_15);
  goto u_13;
  s_15 :
  goto r_15;
  u_13 :
  Move(0,1,1,3);
  Return();
  r_15 :
  Epopd(1,4);
  goto p_15;
  q_15 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_15);
  goto c_14;
  u_15 :
  AllBuild();
  goto t_15;
  p_15 :
  Cpop();
  t_15 :
  Return();
  o_15 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_j_5);
  Tset(MakeInt(1));
  Ccall(_stratego_i_5);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_14;
  e_14 :
  TestFunFC(x_15,&&fail,Egetd(0,1));
  Rpush(w_15);
  goto d_14;
  w_15 :
  goto v_15;
  d_14 :
  Return();
  v_15 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_5)
  Tdupl();
  y_15 :
  TestFunTop(k_0);
  Cpush(z_15);
  Arg(0);
  Cpush(c_16);
  Ccall(_stratego_l_5);
  goto b_16;
  c_16 :
  Epushd(0,2);
  MoveTop(0,1);
  goto h_14;
  h_14 :
  TestFunFC(g_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(f_16);
  goto g_14;
  f_16 :
  goto e_16;
  g_14 :
  Return();
  e_16 :
  Epopd(0,2);
  goto d_16;
  b_16 :
  Cpop();
  d_16 :
  Tpop();
  Cpop();
  goto a_16;
  z_15 :
  Arg(1);
  Tdrop();
  goto y_15;
  a_16 :
  Tpop();
  Ccall(_stratego_k_5);
ENDPROC

PROC(_stratego_n_5)
  Epushd(0,5);
  MoveTop(0,3);
  goto f_18;
  f_18 :
  TestFunFC(k_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto g_18;
  g_18 :
  TestFunFC(k_0,&&p_17,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(v_17);
  Rpush(y_17);
  goto l_14;
  y_17 :
  goto s_17;
  v_17 :
  Ccontinue(b_18);
  Rpush(e_18);
  goto m_14;
  e_18 :
  goto s_17;
  b_18 :
  Ccontinue(m_18);
  Rpush(n_18);
  goto n_14;
  n_18 :
  goto s_17;
  m_18 :
  Ccontinue(p_18);
  Rpush(q_18);
  goto o_14;
  q_18 :
  goto s_17;
  p_18 :
  Ccontinue(r_18);
  Rpush(s_18);
  goto p_14;
  s_18 :
  goto s_17;
  r_18 :
  Ccontinue(u_18);
  Rpush(v_18);
  goto q_14;
  v_18 :
  goto s_17;
  u_18 :
  Ccontinue(w_18);
  Rpush(x_18);
  goto r_14;
  x_18 :
  goto s_17;
  w_18 :
  Ccontinue(y_18);
  Rpush(z_18);
  goto s_14;
  z_18 :
  goto s_17;
  y_18 :
  Ccontinue(b_19);
  Rpush(c_19);
  goto t_14;
  c_19 :
  goto s_17;
  b_19 :
  Ccontinue(d_19);
  Rpush(e_19);
  goto u_14;
  e_19 :
  goto s_17;
  d_19 :
  Ccontinue(f_19);
  Rpush(g_19);
  goto v_14;
  g_19 :
  goto s_17;
  f_19 :
  Ccontinue(i_19);
  Rpush(j_19);
  goto w_14;
  j_19 :
  goto s_17;
  i_19 :
  Ccontinue(k_19);
  Rpush(l_19);
  goto x_14;
  l_19 :
  goto s_17;
  k_19 :
  Ccontinue(n_19);
  Rpush(o_19);
  goto y_14;
  o_19 :
  goto s_17;
  n_19 :
  Rpush(q_19);
  goto z_14;
  q_19 :
  goto p_19;
  s_17 :
  Cpop();
  p_19 :
  goto o_17;
  p_17 :
  Cpush(t_19);
  Rpush(u_19);
  goto l_14;
  u_19 :
  goto r_19;
  t_19 :
  Ccontinue(v_19);
  Rpush(w_19);
  goto m_14;
  w_19 :
  goto r_19;
  v_19 :
  Ccontinue(x_19);
  Rpush(y_19);
  goto n_14;
  y_19 :
  goto r_19;
  x_19 :
  Ccontinue(z_19);
  Rpush(b_20);
  goto o_14;
  b_20 :
  goto r_19;
  z_19 :
  Ccontinue(c_20);
  Rpush(d_20);
  goto p_14;
  d_20 :
  goto r_19;
  c_20 :
  Ccontinue(e_20);
  Rpush(f_20);
  goto v_14;
  f_20 :
  goto r_19;
  e_20 :
  Ccontinue(g_20);
  Rpush(h_20);
  goto w_14;
  h_20 :
  goto r_19;
  g_20 :
  Ccontinue(j_20);
  Rpush(k_20);
  goto x_14;
  k_20 :
  goto r_19;
  j_20 :
  Ccontinue(l_20);
  Rpush(m_20);
  goto y_14;
  m_20 :
  goto r_19;
  l_20 :
  Rpush(o_20);
  goto z_14;
  o_20 :
  goto n_20;
  r_19 :
  Cpop();
  n_20 :
  goto o_17;
  o_17 :
  goto l_17;
  z_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_18;
  d_18 :
  TestStr(1,1,"-?",&&fail);
  Rpush(r_20);
  goto c_18;
  r_20 :
  goto p_20;
  c_18 :
  Return();
  p_20 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_17 :
  goto k_17;
  y_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_18;
  a_18 :
  TestStr(1,1,"-h",&&fail);
  Rpush(t_20);
  goto z_17;
  t_20 :
  goto s_20;
  z_17 :
  Return();
  s_20 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_17 :
  goto h_17;
  x_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_17;
  x_17 :
  TestStr(1,1,"--help",&&fail);
  Rpush(v_20);
  goto w_17;
  v_20 :
  goto u_20;
  w_17 :
  Return();
  u_20 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  h_17 :
  goto g_17;
  w_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_17;
  u_17 :
  TestStr(1,1,"-s",&&fail);
  Rpush(x_20);
  goto t_17;
  x_20 :
  goto w_20;
  t_17 :
  Return();
  w_20 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  g_17 :
  goto d_17;
  v_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_17;
  r_17 :
  TestStr(1,1,"-b",&&fail);
  Rpush(a_21);
  goto q_17;
  a_21 :
  goto z_20;
  q_17 :
  Return();
  z_20 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  d_17 :
  goto c_17;
  u_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_17;
  n_17 :
  TestStr(1,1,"--output",&&fail);
  Rpush(c_21);
  goto m_17;
  c_21 :
  goto b_21;
  m_17 :
  Return();
  b_21 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  c_17 :
  goto z_16;
  t_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_17;
  j_17 :
  TestStr(1,1,"-o",&&fail);
  Rpush(e_21);
  goto i_17;
  e_21 :
  goto d_21;
  i_17 :
  Return();
  d_21 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  z_16 :
  goto y_16;
  s_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_17;
  f_17 :
  TestStr(1,1,"--input",&&fail);
  Rpush(g_21);
  goto e_17;
  g_21 :
  goto f_21;
  e_17 :
  Return();
  f_21 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  y_16 :
  goto v_16;
  r_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_17;
  b_17 :
  TestStr(1,1,"-i",&&fail);
  Rpush(j_21);
  goto a_17;
  j_21 :
  goto h_21;
  a_17 :
  Return();
  h_21 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  v_16 :
  goto s_16;
  q_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_16;
  x_16 :
  TestStr(1,1,"@version",&&fail);
  Rpush(l_21);
  goto w_16;
  l_21 :
  goto k_21;
  w_16 :
  Return();
  k_21 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  s_16 :
  goto p_16;
  p_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_16;
  u_16 :
  TestStr(1,1,"--version",&&fail);
  Rpush(o_21);
  goto t_16;
  o_21 :
  goto m_21;
  t_16 :
  Return();
  m_21 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  p_16 :
  goto m_16;
  o_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_16;
  r_16 :
  TestStr(1,1,"-v",&&fail);
  Rpush(q_21);
  goto q_16;
  q_21 :
  goto p_21;
  q_16 :
  Return();
  p_21 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  m_16 :
  goto j_16;
  n_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_16;
  o_16 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(t_21);
  goto n_16;
  t_21 :
  goto r_21;
  n_16 :
  Return();
  r_21 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  j_16 :
  goto i_16;
  m_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_16;
  l_16 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(v_21);
  goto k_16;
  v_21 :
  goto u_21;
  k_16 :
  Return();
  u_21 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  i_16 :
  goto h_16;
  l_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_15;
  b_15 :
  TestStr(1,1,"-S",&&fail);
  Rpush(y_21);
  goto a_15;
  y_21 :
  goto w_21;
  a_15 :
  Return();
  w_21 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  h_16 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_22;
  g_22 :
  TestFunFC(t_7,&&fail,Egetd(0,1));
  Rpush(a_22);
  goto f_22;
  a_22 :
  goto z_21;
  f_22 :
  Return();
  z_21 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  Epushd(0,1);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Program",Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(b_22);
  l_25 :
  Cpush(e_22);
  Cpush(o_22);
  Ccall(_stratego_o_5);
  goto i_22;
  o_22 :
  Ccall(_stratego_n_5);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_22);
  goto l_25;
  q_22 :
  AllBuild();
  goto p_22;
  i_22 :
  Cpop();
  p_22 :
  goto d_22;
  e_22 :
  Epushd(1,3);
  MoveTop(1,1);
  goto k_22;
  k_22 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(t_22);
  goto j_22;
  t_22 :
  goto s_22;
  j_22 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Cons",App1("Undefined",Egetd(1,2)),Egetd(1,3)));
  Return();
  s_22 :
  Epopd(1,3);
  goto r_22;
  d_22 :
  Cpop();
  r_22 :
  Return();
  b_22 :
  AllBuild();
  Cpush(z_22);
  Ccall(_stratego_m_5);
  goto v_22;
  z_22 :
  Ccontinue(a_23);
  Epushd(1,6);
  Ccall(_stratego_h_5);
  Tdupl();
  Ccall(_stratego_f_5);
  Tpop();
  Tdupl();
  TestFunTop(l_2);
  TravInit();
  OneNextSon();
  Cpush(c_23);
  Rpush(d_23);
  m_25 :
  Cpush(f_23);
  Epushd(2,4);
  MoveTop(2,1);
  goto m_22;
  m_22 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto n_22;
  n_22 :
  TestFunFC(q_23,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(p_23);
  goto l_22;
  p_23 :
  goto l_23;
  l_22 :
  Move(0,1,2,3);
  Return();
  l_23 :
  Epopd(2,4);
  goto e_23;
  f_23 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_23);
  goto m_25;
  y_23 :
  AllBuild();
  goto w_23;
  e_23 :
  Cpop();
  w_23 :
  Return();
  d_23 :
  goto b_23;
  c_23 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto z_23;
  b_23 :
  Cpop();
  z_23 :
  OneNextSon();
  TestFunTop(l_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  AllBuild();
  Tpop();
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_c_5);
  Tpop();
  Tdupl();
  Tset(App2("Cons",App2("Cons",ATmakeString("#include <stratego.h>"),App0("Nil")),App2("Cons",App2("Cons",ATmakeString("#include <stratego-lib.h>"),App0("Nil")),App2("Cons",App2("Cons",ATmakeString("#include <stratego-ext.h>"),App0("Nil")),App2("Cons",App0("Nil"),App0("Nil"))))));
  Rpush(a_24);
  n_25 :
  Cpush(c_24);
  Ccall(_stratego_o_5);
  goto b_24;
  c_24 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(2,1),App0("TNil"))));
  Ccall(_stratego_j_5);
  Epopd(2,1);
  Tpop();
  OneNextSon();
  Rpush(g_24);
  goto n_25;
  g_24 :
  AllBuild();
  goto e_24;
  b_24 :
  Cpop();
  e_24 :
  Return();
  a_24 :
  Tpop();
  TestFunTop(l_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(l_2);
  TravInit();
  OneNextSon();
  Rpush(m_24);
  o_25 :
  Cpush(p_24);
  TestFunTop(r_24);
  TravInit();
  OneNextSon();
  Rpush(s_24);
  p_25 :
  Cpush(u_24);
  Ccall(_stratego_o_5);
  goto t_24;
  u_24 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Rpush(x_24);
  goto o_25;
  x_24 :
  OneNextSon();
  Rpush(y_24);
  goto p_25;
  y_24 :
  AllBuild();
  goto v_24;
  t_24 :
  Cpop();
  v_24 :
  Return();
  s_24 :
  AllBuild();
  goto n_24;
  p_24 :
  Tdupl();
  Cpush(b_25);
  Ccall(_stratego_b_5);
  goto a_25;
  b_25 :
  Epushd(2,7);
  MoveTop(2,1);
  Ccall(_stratego_a_5);
  MoveTop(2,2);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",App2("Cons",ATmakeString(";"),App0("Nil")),App0("TNil"))));
  MoveTop(2,3);
  goto w_22;
  w_22 :
  TestFunFC(l_2,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto x_22;
  x_22 :
  TestFunFC(l_2,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto y_22;
  y_22 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(t_25);
  goto u_22;
  t_25 :
  goto k_25;
  u_22 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(u_25);
  q_25 :
  Cpush(w_25);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_25);
  goto q_25;
  x_25 :
  AllBuild();
  goto v_25;
  w_25 :
  Ccall(_stratego_o_5);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto y_25;
  v_25 :
  Cpop();
  y_25 :
  Return();
  u_25 :
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),Egetd(3,1)),App0("Nil")));
  Epopd(3,1);
  Return();
  k_25 :
  Epopd(2,7);
  goto j_25;
  a_25 :
  Cpop();
  j_25 :
  Rpush(z_25);
  r_25 :
  Cpush(b_26);
  Ccall(_stratego_o_5);
  goto a_26;
  b_26 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(2,1),App0("TNil"))));
  Ccall(_stratego_j_5);
  Epopd(2,1);
  Tpop();
  OneNextSon();
  Rpush(d_26);
  goto r_25;
  d_26 :
  AllBuild();
  goto c_26;
  a_26 :
  Cpop();
  c_26 :
  Return();
  z_25 :
  Tpop();
  goto z_24;
  n_24 :
  Cpop();
  z_24 :
  Return();
  m_24 :
  OneNextSon();
  Ccall(_stratego_v_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Tset(App2("Cons",App0("Nil"),App2("Cons",App2("Cons",ATmakeString("DOIT"),App0("Nil")),App2("Cons",App0("Nil"),App0("Nil")))));
  Rpush(e_26);
  s_25 :
  Cpush(g_26);
  Ccall(_stratego_o_5);
  goto f_26;
  g_26 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(2,1),App0("TNil"))));
  Ccall(_stratego_j_5);
  Epopd(2,1);
  Tpop();
  OneNextSon();
  Rpush(i_26);
  goto s_25;
  i_26 :
  AllBuild();
  goto h_26;
  f_26 :
  Cpop();
  h_26 :
  Return();
  e_26 :
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_f_5);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  MoveTop(1,2);
  goto h_23;
  h_23 :
  TestFunFC(l_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto i_23;
  i_23 :
  TestFunFC(l_2,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto j_23;
  j_23 :
  TestFunFC(d_0,&&fail,Egetd(1,6));
  Rpush(k_26);
  goto g_23;
  k_26 :
  goto j_26;
  g_23 :
  NotNULLd(1,1);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(1,1)),Egetd(1,3)),App2("TCons",Egetd(1,5),App0("TNil"))));
  Return();
  j_26 :
  Ccall(_stratego_e_5);
  Epopd(1,6);
  goto v_22;
  a_23 :
  Ccall(_stratego_d_5);
  goto l_26;
  v_22 :
  Cpop();
  l_26 :
  Epopd(0,1);
ENDPROC

DOIT

