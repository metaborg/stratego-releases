#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,d_15);
VARDECL(AFun,c_15);
VARDECL(AFun,a_15);
VARDECL(AFun,y_14);
VARDECL(AFun,w_14);
VARDECL(AFun,u_14);
VARDECL(AFun,r_14);
VARDECL(AFun,q_14);
VARDECL(AFun,p_14);
VARDECL(AFun,n_14);
VARDECL(AFun,l_14);
VARDECL(AFun,i_14);
VARDECL(AFun,g_14);
VARDECL(AFun,e_14);
VARDECL(AFun,b_14);
VARDECL(AFun,z_13);
VARDECL(AFun,x_13);
VARDECL(AFun,v_13);
VARDECL(AFun,s_13);
VARDECL(AFun,q_13);
VARDECL(AFun,o_13);
VARDECL(AFun,m_13);
VARDECL(AFun,k_13);
VARDECL(AFun,k_11);
VARDECL(AFun,a_11);
VARDECL(AFun,j_10);
VARDECL(AFun,w_9);
VARDECL(AFun,p_8);
VARDECL(AFun,m_8);
VARDECL(AFun,x_3);
VARDECL(AFun,h_3);
VARDECL(AFun,k_2);
VARDECL(AFun,p_1);
VARDECL(AFun,u_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_s_8);
PROCDECL(_stratego_t_8);
PROCDECL(_stratego_u_8);
PROCDECL(_stratego_v_8);
PROCDECL(_stratego_w_8);
PROCDECL(_stratego_y_8);
PROCDECL(_stratego_z_8);
PROCDECL(_stratego_a_9);
PROCDECL(_stratego_b_9);
PROCDECL(_stratego_c_9);
PROCDECL(_stratego_d_9);
PROCDECL(_stratego_e_9);
PROCDECL(_stratego_f_9);
PROCDECL(_stratego_g_9);
PROCDECL(_stratego_h_9);
PROCDECL(_stratego_i_9);
PROCDECL(_stratego_j_9);
PROCDECL(_stratego_k_9);
PROCDECL(_stratego_l_9);
PROCDECL(_stratego_m_9);
PROCDECL(_stratego_n_9);
PROCDECL(_stratego_o_9);
PROCDECL(_stratego_p_9);
PROCDECL(_stratego_q_9);
PROCDECL(_stratego_r_9);
PROCDECL(_stratego_s_9);
PROCDECL(_stratego_t_9);

PROC(_stratego_init_afuns)
  MOVE(d_15,ATmakeAFun("TestStr",4,0));
  MOVE(c_15,ATmakeAFun("TestReal",4,0));
  MOVE(a_15,ATmakeAFun("TestInt",4,0));
  MOVE(y_14,ATmakeAFun("VARDECL",2,0));
  MOVE(w_14,ATmakeAFun("MOVE",2,0));
  MOVE(u_14,ATmakeAFun("TestFunTop",1,0));
  MOVE(r_14,ATmakeAFun("Egetd",2,0));
  MOVE(q_14,ATmakeAFun("VAR",1,0));
  MOVE(p_14,ATmakeAFun("TestFunFC",3,0));
  MOVE(n_14,ATmakeAFun("Iprim",1,0));
  MOVE(l_14,ATmakeAFun("Cpush",1,0));
  MOVE(i_14,ATmakeAFun("SomeNextSon",1,0));
  MOVE(g_14,ATmakeAFun("OneNextSon",1,0));
  MOVE(e_14,ATmakeAFun("ThreadNextSon",1,0));
  MOVE(b_14,ATmakeAFun("AllNextSon",1,0));
  MOVE(z_13,ATmakeAFun("Rpush",1,0));
  MOVE(x_13,ATmakeAFun("Ccall",2,0));
  MOVE(v_13,ATmakeAFun("ENDPROC",0,0));
  MOVE(s_13,ATmakeAFun("PROCDECL",1,0));
  MOVE(q_13,ATmakeAFun("PROC",1,0));
  MOVE(o_13,ATmakeAFun("Label",1,0));
  MOVE(m_13,ATmakeAFun("Ccontinue",1,0));
  MOVE(k_13,ATmakeAFun("Goto",1,0));
  MOVE(k_11,ATmakeAFun("Runtime",1,0));
  MOVE(a_11,ATmakeAFun("Silent",0,0));
  MOVE(j_10,ATmakeAFun("Input",1,0));
  MOVE(w_9,ATmakeAFun("Program",1,0));
  MOVE(p_8,ATmakeAFun("Help",0,0));
  MOVE(m_8,ATmakeAFun("Undefined",1,0));
  MOVE(x_3,ATmakeAFun("Nil",0,0));
  MOVE(h_3,ATmakeAFun("TNil",0,0));
  MOVE(k_2,ATmakeAFun("Block",1,0));
  MOVE(p_1,ATmakeAFun("Output",1,0));
  MOVE(u_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Epushd(0,1);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Program",Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(b_0);
  z_2 :
  Cpush(g_0);
  Cpush(i_0);
  Ccall(_stratego_s_8);
  goto h_0;
  i_0 :
  Ccall(_stratego_t_8);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_0);
  goto z_2;
  k_0 :
  AllBuild();
  goto j_0;
  h_0 :
  Cpop();
  j_0 :
  goto d_0;
  g_0 :
  Epushd(1,3);
  MoveTop(1,1);
  goto c_0;
  c_0 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(n_0);
  goto a_3;
  n_0 :
  goto m_0;
  a_3 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Cons",App1("Undefined",Egetd(1,2)),Egetd(1,3)));
  Return();
  m_0 :
  Epopd(1,3);
  goto l_0;
  d_0 :
  Cpop();
  l_0 :
  Return();
  b_0 :
  AllBuild();
  Cpush(s_0);
  Ccall(_stratego_u_8);
  goto r_0;
  s_0 :
  Ccontinue(t_0);
  Epushd(1,6);
  Ccall(_stratego_a_9);
  Tdupl();
  Ccall(_stratego_c_9);
  Tpop();
  Tdupl();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Cpush(a_1);
  Rpush(e_1);
  b_3 :
  Cpush(l_1);
  Epushd(2,4);
  MoveTop(2,1);
  goto e_0;
  e_0 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto f_0;
  f_0 :
  TestFunFC(p_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(o_1);
  goto f_6;
  o_1 :
  goto n_1;
  f_6 :
  Move(0,1,2,3);
  Return();
  n_1 :
  Epopd(2,4);
  goto f_1;
  l_1 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_1);
  goto b_3;
  r_1 :
  AllBuild();
  goto q_1;
  f_1 :
  Cpop();
  q_1 :
  Return();
  e_1 :
  goto v_0;
  a_1 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto t_1;
  v_0 :
  Cpop();
  t_1 :
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_9);
  AllBuild();
  AllBuild();
  Tpop();
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_f_9);
  Tpop();
  Tdupl();
  Tset(App2("Cons",App2("Cons",ATmakeString("#include <stratego.h>"),App0("Nil")),App2("Cons",App2("Cons",ATmakeString("#include <stratego-lib.h>"),App0("Nil")),App2("Cons",App2("Cons",ATmakeString("#include <stratego-ext.h>"),App0("Nil")),App2("Cons",App0("Nil"),App2("Cons",App2("Cons",ATmakeString("DOIT"),App0("Nil")),App2("Cons",App0("Nil"),App0("Nil"))))))));
  Rpush(v_1);
  h_6 :
  Cpush(c_2);
  Ccall(_stratego_s_8);
  goto b_2;
  c_2 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(2,1),App0("TNil"))));
  Ccall(_stratego_y_8);
  Epopd(2,1);
  Tpop();
  OneNextSon();
  Rpush(g_2);
  goto h_6;
  g_2 :
  AllBuild();
  goto e_2;
  b_2 :
  Cpop();
  e_2 :
  Return();
  v_1 :
  Tpop();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Rpush(h_2);
  n_6 :
  Cpush(j_2);
  TestFunTop(k_2);
  TravInit();
  OneNextSon();
  Rpush(l_2);
  o_6 :
  Cpush(n_2);
  Ccall(_stratego_s_8);
  goto m_2;
  n_2 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(w_2);
  goto n_6;
  w_2 :
  OneNextSon();
  Rpush(x_2);
  goto o_6;
  x_2 :
  AllBuild();
  goto o_2;
  m_2 :
  Cpop();
  o_2 :
  Return();
  l_2 :
  AllBuild();
  goto i_2;
  j_2 :
  Tdupl();
  Cpush(d_3);
  Ccall(_stratego_g_9);
  goto c_3;
  d_3 :
  Epushd(2,7);
  MoveTop(2,1);
  Ccall(_stratego_h_9);
  MoveTop(2,2);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",App2("Cons",ATmakeString(";"),App0("Nil")),App0("TNil"))));
  MoveTop(2,3);
  goto o_0;
  o_0 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_0;
  p_0 :
  TestFunFC(u_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto q_0;
  q_0 :
  TestFunFC(h_3,&&fail,Egetd(2,7));
  Rpush(g_3);
  goto r_6;
  g_3 :
  goto f_3;
  r_6 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(i_3);
  w_6 :
  Cpush(k_3);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_3);
  goto w_6;
  l_3 :
  AllBuild();
  goto j_3;
  k_3 :
  Ccall(_stratego_s_8);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto m_3;
  j_3 :
  Cpop();
  m_3 :
  Return();
  i_3 :
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),Egetd(3,1)),App0("Nil")));
  Epopd(3,1);
  Return();
  f_3 :
  Epopd(2,7);
  goto e_3;
  c_3 :
  Cpop();
  e_3 :
  Rpush(n_3);
  d_7 :
  Cpush(p_3);
  Ccall(_stratego_s_8);
  goto o_3;
  p_3 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(2,1),App0("TNil"))));
  Ccall(_stratego_y_8);
  Epopd(2,1);
  Tpop();
  OneNextSon();
  Rpush(r_3);
  goto d_7;
  r_3 :
  AllBuild();
  goto q_3;
  o_3 :
  Cpop();
  q_3 :
  Return();
  n_3 :
  Tpop();
  goto y_2;
  i_2 :
  Cpop();
  y_2 :
  Return();
  h_2 :
  OneNextSon();
  Ccall(_stratego_t_9);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_9);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  MoveTop(1,2);
  goto w_0;
  w_0 :
  TestFunFC(u_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto x_0;
  x_0 :
  TestFunFC(u_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto y_0;
  y_0 :
  TestFunFC(h_3,&&fail,Egetd(1,6));
  Rpush(t_3);
  goto q_7;
  t_3 :
  goto s_3;
  q_7 :
  NotNULLd(1,1);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(1,1)),Egetd(1,3)),App2("TCons",Egetd(1,5),App0("TNil"))));
  Return();
  s_3 :
  Ccall(_stratego_d_9);
  Epopd(1,6);
  goto r_0;
  t_0 :
  Ccall(_stratego_e_9);
  goto u_3;
  r_0 :
  Cpop();
  u_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_8)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_7;
  s_7 :
  TestFunFC(x_3,&&fail,Egetd(0,1));
  Rpush(w_3);
  goto u_7;
  w_3 :
  goto v_3;
  u_7 :
  Return();
  v_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_8)
  Epushd(0,5);
  MoveTop(0,3);
  goto z_11;
  z_11 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto a_12;
  a_12 :
  TestFunFC(a_0,&&o_4,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(q_4);
  Rpush(r_4);
  goto d_17;
  r_4 :
  goto p_4;
  q_4 :
  Ccontinue(s_4);
  Rpush(t_4);
  goto g_17;
  t_4 :
  goto p_4;
  s_4 :
  Ccontinue(u_4);
  Rpush(v_4);
  goto j_17;
  v_4 :
  goto p_4;
  u_4 :
  Ccontinue(w_4);
  Rpush(x_4);
  goto m_17;
  x_4 :
  goto p_4;
  w_4 :
  Ccontinue(y_4);
  Rpush(z_4);
  goto p_17;
  z_4 :
  goto p_4;
  y_4 :
  Ccontinue(a_5);
  Rpush(b_5);
  goto s_17;
  b_5 :
  goto p_4;
  a_5 :
  Ccontinue(c_5);
  Rpush(d_5);
  goto w_17;
  d_5 :
  goto p_4;
  c_5 :
  Ccontinue(e_5);
  Rpush(f_5);
  goto a_18;
  f_5 :
  goto p_4;
  e_5 :
  Ccontinue(g_5);
  Rpush(h_5);
  goto e_18;
  h_5 :
  goto p_4;
  g_5 :
  Ccontinue(i_5);
  Rpush(j_5);
  goto i_18;
  j_5 :
  goto p_4;
  i_5 :
  Ccontinue(k_5);
  Rpush(l_5);
  goto o_18;
  l_5 :
  goto p_4;
  k_5 :
  Ccontinue(m_5);
  Rpush(n_5);
  goto t_18;
  n_5 :
  goto p_4;
  m_5 :
  Ccontinue(o_5);
  Rpush(p_5);
  goto w_18;
  p_5 :
  goto p_4;
  o_5 :
  Ccontinue(q_5);
  Rpush(r_5);
  goto z_18;
  r_5 :
  goto p_4;
  q_5 :
  Rpush(t_5);
  goto c_19;
  t_5 :
  goto s_5;
  p_4 :
  Cpop();
  s_5 :
  goto n_4;
  o_4 :
  Cpush(v_5);
  Rpush(w_5);
  goto d_17;
  w_5 :
  goto u_5;
  v_5 :
  Ccontinue(x_5);
  Rpush(y_5);
  goto g_17;
  y_5 :
  goto u_5;
  x_5 :
  Ccontinue(z_5);
  Rpush(a_6);
  goto j_17;
  a_6 :
  goto u_5;
  z_5 :
  Ccontinue(b_6);
  Rpush(c_6);
  goto m_17;
  c_6 :
  goto u_5;
  b_6 :
  Ccontinue(d_6);
  Rpush(e_6);
  goto p_17;
  e_6 :
  goto u_5;
  d_6 :
  Ccontinue(g_6);
  Rpush(i_6);
  goto o_18;
  i_6 :
  goto u_5;
  g_6 :
  Ccontinue(j_6);
  Rpush(k_6);
  goto t_18;
  k_6 :
  goto u_5;
  j_6 :
  Ccontinue(l_6);
  Rpush(m_6);
  goto w_18;
  m_6 :
  goto u_5;
  l_6 :
  Ccontinue(p_6);
  Rpush(q_6);
  goto z_18;
  q_6 :
  goto u_5;
  p_6 :
  Rpush(t_6);
  goto c_19;
  t_6 :
  goto s_6;
  u_5 :
  Cpop();
  s_6 :
  goto n_4;
  n_4 :
  goto m_4;
  c_19 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_11;
  x_11 :
  TestStr(1,1,"-?",&&fail);
  Rpush(v_6);
  goto d_19;
  v_6 :
  goto u_6;
  d_19 :
  Return();
  u_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  m_4 :
  goto l_4;
  z_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_11;
  u_11 :
  TestStr(1,1,"-h",&&fail);
  Rpush(y_6);
  goto a_19;
  y_6 :
  goto x_6;
  a_19 :
  Return();
  x_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_4 :
  goto k_4;
  w_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_11;
  r_11 :
  TestStr(1,1,"--help",&&fail);
  Rpush(a_7);
  goto x_18;
  a_7 :
  goto z_6;
  x_18 :
  Return();
  z_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_4 :
  goto j_4;
  t_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_11;
  o_11 :
  TestStr(1,1,"-s",&&fail);
  Rpush(c_7);
  goto u_18;
  c_7 :
  goto b_7;
  u_18 :
  Return();
  b_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  j_4 :
  goto i_4;
  o_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_11;
  l_11 :
  TestStr(1,1,"-b",&&fail);
  Rpush(f_7);
  goto r_18;
  f_7 :
  goto e_7;
  r_18 :
  Return();
  e_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  i_4 :
  goto h_4;
  i_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_11;
  h_11 :
  TestStr(1,1,"--output",&&fail);
  Rpush(h_7);
  goto l_18;
  h_7 :
  goto g_7;
  l_18 :
  Return();
  g_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  h_4 :
  goto g_4;
  e_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_11;
  d_11 :
  TestStr(1,1,"-o",&&fail);
  Rpush(j_7);
  goto f_18;
  j_7 :
  goto i_7;
  f_18 :
  Return();
  i_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  g_4 :
  goto f_4;
  a_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_10;
  z_10 :
  TestStr(1,1,"--input",&&fail);
  Rpush(l_7);
  goto b_18;
  l_7 :
  goto k_7;
  b_18 :
  Return();
  k_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  f_4 :
  goto e_4;
  w_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_10;
  v_10 :
  TestStr(1,1,"-i",&&fail);
  Rpush(n_7);
  goto x_17;
  n_7 :
  goto m_7;
  x_17 :
  Return();
  m_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  e_4 :
  goto d_4;
  s_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_10;
  r_10 :
  TestStr(1,1,"@version",&&fail);
  Rpush(p_7);
  goto t_17;
  p_7 :
  goto o_7;
  t_17 :
  Return();
  o_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  d_4 :
  goto c_4;
  p_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_10;
  o_10 :
  TestStr(1,1,"--version",&&fail);
  Rpush(v_7);
  goto q_17;
  v_7 :
  goto r_7;
  q_17 :
  Return();
  r_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  c_4 :
  goto b_4;
  m_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_10;
  l_10 :
  TestStr(1,1,"-v",&&fail);
  Rpush(x_7);
  goto n_17;
  x_7 :
  goto w_7;
  n_17 :
  Return();
  w_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_4 :
  goto a_4;
  j_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_10;
  i_10 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(z_7);
  goto k_17;
  z_7 :
  goto y_7;
  k_17 :
  Return();
  y_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  a_4 :
  goto z_3;
  g_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_10;
  f_10 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(b_8);
  goto h_17;
  b_8 :
  goto a_8;
  h_17 :
  Return();
  a_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  z_3 :
  goto y_3;
  d_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_10;
  c_10 :
  TestStr(1,1,"-S",&&fail);
  Rpush(d_8);
  goto e_17;
  d_8 :
  goto c_8;
  e_17 :
  Return();
  c_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_3 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_u_8)
  Tdupl();
  e_8 :
  TestFunTop(a_0);
  Cpush(f_8);
  Arg(0);
  Cpush(i_8);
  Ccall(_stratego_v_8);
  goto h_8;
  i_8 :
  Epushd(0,2);
  MoveTop(0,1);
  goto g_19;
  g_19 :
  TestFunFC(m_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_8);
  goto k_19;
  l_8 :
  goto k_8;
  k_19 :
  Return();
  k_8 :
  Epopd(0,2);
  goto j_8;
  h_8 :
  Cpop();
  j_8 :
  Tpop();
  Cpop();
  goto g_8;
  f_8 :
  Arg(1);
  Tdrop();
  goto e_8;
  g_8 :
  Tpop();
  Ccall(_stratego_w_8);
ENDPROC

PROC(_stratego_v_8)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_19;
  m_19 :
  TestFunFC(p_8,&&fail,Egetd(0,1));
  Rpush(o_8);
  goto o_19;
  o_8 :
  goto n_8;
  o_19 :
  Return();
  n_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_8)
  Epushd(0,1);
  Tdupl();
  Rpush(q_8);
  x_19 :
  Cpush(x_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto q_19;
  q_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto r_19;
  r_19 :
  TestFunFC(w_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_9);
  goto y_19;
  v_9 :
  goto u_9;
  y_19 :
  Move(0,1,1,3);
  Return();
  u_9 :
  Epopd(1,4);
  goto r_8;
  x_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_9);
  goto x_19;
  y_9 :
  AllBuild();
  goto x_9;
  r_8 :
  Cpop();
  x_9 :
  Return();
  q_8 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_y_8);
  Tset(MakeInt(1));
  Ccall(_stratego_z_8);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_8)
  _ST_printnl();
ENDPROC

PROC(_stratego_z_8)
  _ST_exit();
ENDPROC

PROC(_stratego_a_9)
  Epushd(0,3);
  Tdupl();
  Cpush(a_10);
  Rpush(b_10);
  v_20 :
  Cpush(e_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_20;
  a_20 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_20;
  b_20 :
  TestFunFC(j_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_10);
  goto w_20;
  h_10 :
  goto g_10;
  w_20 :
  Move(0,1,1,3);
  Return();
  g_10 :
  Epopd(1,4);
  goto d_10;
  e_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_10);
  goto v_20;
  m_10 :
  AllBuild();
  goto k_10;
  d_10 :
  Cpop();
  k_10 :
  Return();
  b_10 :
  goto z_9;
  a_10 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto n_10;
  z_9 :
  Cpop();
  n_10 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_b_9);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_b_9)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_c_9)
  _ST_dtime();
ENDPROC

PROC(_stratego_d_9)
  Epushd(0,2);
  Tdupl();
  Cpush(q_10);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Cpush(s_10);
  Tdupl();
  Rpush(t_10);
  x_21 :
  Cpush(w_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto c_21;
  c_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_21;
  d_21 :
  TestFunFC(a_11,&&fail,Egetd(1,2));
  Rpush(y_10);
  goto y_21;
  y_10 :
  goto x_10;
  y_21 :
  Return();
  x_10 :
  Epopd(1,3);
  goto u_10;
  w_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_11);
  goto x_21;
  c_11 :
  AllBuild();
  goto b_11;
  u_10 :
  Cpop();
  b_11 :
  Return();
  t_10 :
  Cpop();
  Crestore();
  Cjump();
  s_10 :
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_9);
  AllBuild();
  AllBuild();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Rpush(e_11);
  z_21 :
  Cpush(g_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_21;
  f_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto g_21;
  g_21 :
  TestFunFC(k_11,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(j_11);
  goto a_22;
  j_11 :
  goto i_11;
  a_22 :
  Move(0,2,1,3);
  Return();
  i_11 :
  Epopd(1,4);
  goto f_11;
  g_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_11);
  goto z_21;
  n_11 :
  AllBuild();
  goto m_11;
  f_11 :
  Cpop();
  m_11 :
  Return();
  e_11 :
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_9);
  AllBuild();
  AllBuild();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Rpush(p_11);
  b_22 :
  Cpush(s_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto i_21;
  i_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto j_21;
  j_21 :
  TestFunFC(w_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_11);
  goto c_22;
  v_11 :
  goto t_11;
  c_22 :
  Move(0,1,1,3);
  Return();
  t_11 :
  Epopd(1,4);
  goto q_11;
  s_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_11);
  goto b_22;
  y_11 :
  AllBuild();
  goto w_11;
  q_11 :
  Cpop();
  w_11 :
  Return();
  p_11 :
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_9);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_y_8);
  goto p_10;
  q_10 :
  goto g_12;
  p_10 :
  Cpop();
  g_12 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_z_8);
  Epopd(0,2);
ENDPROC

PROC(_stratego_e_9)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_y_8);
  Tset(MakeInt(1));
  Ccall(_stratego_z_8);
ENDPROC

PROC(_stratego_f_9)
  _ST_open_file();
ENDPROC

PROC(_stratego_g_9)
  Epushd(0,8);
  MoveTop(0,4);
  goto y_22;
  y_22 :
  TestFunFC(k_13,&&j_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(h_13);
  goto s_24;
  j_13 :
  TestFunFC(m_13,&&l_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(h_13);
  goto t_24;
  l_13 :
  TestFunFC(o_13,&&n_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(h_13);
  goto u_24;
  n_13 :
  TestFunFC(q_13,&&p_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(h_13);
  goto v_24;
  p_13 :
  TestFunFC(s_13,&&r_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(h_13);
  goto w_24;
  r_13 :
  TestFunFC(v_13,&&t_13,Egetd(0,4));
  Rpush(h_13);
  goto x_24;
  t_13 :
  TestFunFC(x_13,&&w_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto z_22;
  z_22 :
  TestFunFC(x_3,&&fail,Egetd(0,6));
  Rpush(h_13);
  goto y_24;
  w_13 :
  TestFunFC(z_13,&&y_13,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(h_13);
  goto z_24;
  y_13 :
  TestFunFC(b_14,&&a_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(h_13);
  goto a_25;
  a_14 :
  TestFunFC(e_14,&&d_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(h_13);
  goto b_25;
  d_14 :
  TestFunFC(g_14,&&f_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(h_13);
  goto c_25;
  f_14 :
  TestFunFC(i_14,&&h_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(h_13);
  goto d_25;
  h_14 :
  TestFunFC(l_14,&&j_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(h_13);
  goto e_25;
  j_14 :
  TestFunFC(n_14,&&m_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(h_13);
  goto f_25;
  m_14 :
  TestFunFC(p_14,&&o_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  goto a_23;
  a_23 :
  TestFunFC(q_14,&&fail,Egetd(0,5));
  MoveArg(0,3,0,5,0);
  goto b_23;
  b_23 :
  TestFunFC(r_14,&&fail,Egetd(0,7));
  MoveArg(0,1,0,7,0);
  MoveArg(0,2,0,7,1);
  Rpush(h_13);
  goto g_25;
  o_14 :
  TestFunFC(u_14,&&t_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto c_23;
  c_23 :
  TestFunFC(q_14,&&fail,Egetd(0,5));
  MoveArg(0,3,0,5,0);
  Rpush(h_13);
  goto h_25;
  t_14 :
  TestFunFC(w_14,&&v_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  Rpush(h_13);
  goto i_25;
  v_14 :
  TestFunFC(y_14,&&x_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  Rpush(h_13);
  goto j_25;
  x_14 :
  TestFunFC(a_15,&&z_14,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  MoveArg(0,8,0,4,3);
  Rpush(h_13);
  goto k_25;
  z_14 :
  TestFunFC(c_15,&&b_15,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  MoveArg(0,8,0,4,3);
  Rpush(h_13);
  goto l_25;
  b_15 :
  TestFunFC(d_15,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  MoveArg(0,8,0,4,3);
  Rpush(h_13);
  goto m_25;
  h_13 :
  goto g_13;
  m_25 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("TestStr("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(",\""),App2("Cons",Egetd(0,7),App2("Cons",ATmakeString("\",&&"),App2("Cons",Egetd(0,8),App2("Cons",ATmakeString(");"),App0("Nil"))))))))))),App0("Nil")));
  Return();
  g_13 :
  goto f_13;
  l_25 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("TestReal("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,7),App2("Cons",ATmakeString(",&&"),App2("Cons",Egetd(0,8),App2("Cons",ATmakeString(");"),App0("Nil"))))))))))),App0("Nil")));
  Return();
  f_13 :
  goto e_13;
  k_25 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("TestInt("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,7),App2("Cons",ATmakeString(",&&"),App2("Cons",Egetd(0,8),App2("Cons",ATmakeString(");"),App0("Nil"))))))))))),App0("Nil")));
  Return();
  e_13 :
  goto d_13;
  j_25 :
  NotNULLd(0,6);
  Tset(App2("Cons",App2("Cons",ATmakeString("VARDECL(AFun,"),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(");"),App0("Nil")))),App0("Nil")));
  Return();
  d_13 :
  goto b_13;
  i_25 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("MOVE("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(");"),App0("Nil"))))))),App0("Nil")));
  Return();
  b_13 :
  goto a_13;
  h_25 :
  NotNULLd(0,3);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("TestFunTop("),App2("Cons",Egetd(0,3),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  a_13 :
  goto z_12;
  g_25 :
  NotNULLd(0,3);
  NotNULLd(0,6);
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("TestFunFC("),App2("Cons",Egetd(0,3),App2("Cons",ATmakeString(",&&"),App2("Cons",Egetd(0,6),App2("Cons",ATmakeString(",Egetd("),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(","),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString("));"),App0("Nil"))))))))))),App0("Nil")));
  Return();
  z_12 :
  goto y_12;
  f_25 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString("();"),App0("Nil")))),App0("Nil")));
  Return();
  y_12 :
  goto w_12;
  e_25 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("Cpush("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  w_12 :
  goto v_12;
  d_25 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("SomeNextSon(&&"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  v_12 :
  goto u_12;
  c_25 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("OneNextSon(&&"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  u_12 :
  goto t_12;
  b_25 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("ThreadNextSon(&&"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  t_12 :
  goto r_12;
  a_25 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("AllNextSon(&&"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  r_12 :
  goto q_12;
  z_24 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("Rpush("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  q_12 :
  goto p_12;
  y_24 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("Ccall("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  p_12 :
  goto o_12;
  x_24 :
  Tset(App2("Cons",App2("Cons",ATmakeString("ENDPROC"),App0("Nil")),App0("Nil")));
  Return();
  o_12 :
  goto m_12;
  w_24 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("PROCDECL(_stratego_"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil")))),App0("Nil")));
  Return();
  m_12 :
  goto l_12;
  v_24 :
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Nil"),App2("Cons",App2("Cons",ATmakeString("PROC(_stratego_"),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(")"),App0("Nil")))),App0("Nil"))));
  Return();
  l_12 :
  goto k_12;
  u_24 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(" :"),App0("Nil")))),App0("Nil")));
  Return();
  k_12 :
  goto j_12;
  t_24 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("Ccontinue("),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(");"),App0("Nil"))))),App0("Nil")));
  Return();
  j_12 :
  goto h_12;
  s_24 :
  NotNULLd(0,5);
  Tset(App2("Cons",App2("Cons",ATmakeString("  "),App2("Cons",ATmakeString("goto "),App2("Cons",Egetd(0,5),App2("Cons",ATmakeString(";"),App0("Nil"))))),App0("Nil")));
  Return();
  h_12 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_h_9)
  Rpush(e_15);
  j_27 :
  Epushd(0,1);
  MoveTop(0,1);
  Cpush(g_15);
  Epushd(1,1);
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_q_9);
  Tpop();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_i_9);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  goto f_15;
  g_15 :
  Ccontinue(h_15);
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_r_9);
  Tpop();
  NotNULLd(0,1);
  Tset(App2("Cons",ATmakeString("\""),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString("\""),App0("Nil")))));
  goto f_15;
  h_15 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(2,1);
  goto s_25;
  s_25 :
  TestFunFC(u_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto t_25;
  t_25 :
  TestFunFC(u_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto u_25;
  u_25 :
  TestFunFC(h_3,&&fail,Egetd(2,5));
  Rpush(k_15);
  goto o_27;
  k_15 :
  goto j_15;
  o_27 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  j_15 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(l_15);
  p_27 :
  Cpush(n_15);
  Ccall(_stratego_s_8);
  goto m_15;
  n_15 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(p_15);
  goto j_27;
  p_15 :
  OneNextSon();
  Rpush(q_15);
  goto p_27;
  q_15 :
  AllBuild();
  goto o_15;
  m_15 :
  Cpop();
  o_15 :
  Return();
  l_15 :
  Cpush(s_15);
  Ccall(_stratego_s_8);
  goto r_15;
  s_15 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_15);
  q_27 :
  Cpush(w_15);
  Ccall(_stratego_s_8);
  goto v_15;
  w_15 :
  Epushd(2,3);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_15);
  goto q_27;
  z_15 :
  AllBuild();
  MoveTop(2,1);
  goto x_25;
  x_25 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(a_16);
  goto r_27;
  a_16 :
  goto y_15;
  r_27 :
  Tset(App2("Cons",ATmakeString(","),App0("Nil")));
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("Cons",App2("Cons",ATmakeString(","),App0("Nil")),App2("Cons",Egetd(2,2),Egetd(2,3))));
  Return();
  y_15 :
  Epopd(2,3);
  goto x_15;
  v_15 :
  Cpop();
  x_15 :
  Return();
  u_15 :
  AllBuild();
  goto t_15;
  r_15 :
  Cpop();
  t_15 :
  Ccall(_stratego_s_9);
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,3),App2("TCons",App2("Cons",ATmakeString(")"),App0("Nil")),App0("TNil"))));
  MoveTop(1,4);
  goto b_26;
  b_26 :
  TestFunFC(u_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto c_26;
  c_26 :
  TestFunFC(u_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto d_26;
  d_26 :
  TestFunFC(h_3,&&fail,Egetd(1,8));
  Rpush(c_16);
  goto u_27;
  c_16 :
  goto b_16;
  u_27 :
  Epushd(2,1);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  Rpush(d_16);
  v_27 :
  Cpush(f_16);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_16);
  goto v_27;
  h_16 :
  AllBuild();
  goto e_16;
  f_16 :
  Ccall(_stratego_s_8);
  NotNULLd(1,7);
  Tset(Egetd(1,7));
  goto i_16;
  e_16 :
  Cpop();
  i_16 :
  Return();
  d_16 :
  MoveTop(2,1);
  NotNULLd(1,1);
  NotNULLd(2,1);
  Tset(App2("Cons",Egetd(1,1),App2("Cons",ATmakeString("("),Egetd(2,1))));
  Epopd(2,1);
  Return();
  b_16 :
  Epopd(1,8);
  goto i_15;
  f_15 :
  Cpop();
  i_15 :
  Epopd(0,1);
  Return();
  e_15 :
ENDPROC

PROC(_stratego_i_9)
  Rpush(j_16);
  b_29 :
  Epushd(0,4);
  MoveTop(0,1);
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_j_9);
  MoveTop(0,2);
  Tset(MakeInt(48));
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_k_9);
  MoveTop(0,3);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_l_9);
  Ccall(_stratego_m_9);
  MoveTop(0,4);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,4),App0("TNil"))));
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  Cpush(m_16);
  Epushd(1,1);
  MoveTop(1,1);
  goto h_28;
  h_28 :
  TestInt(1,1,0,&&fail);
  Rpush(o_16);
  goto l_29;
  o_16 :
  goto n_16;
  l_29 :
  Tset(App0("Nil"));
  Return();
  n_16 :
  Epopd(1,1);
  goto k_16;
  m_16 :
  Rpush(r_16);
  goto b_29;
  r_16 :
  goto p_16;
  k_16 :
  Cpop();
  p_16 :
  OneNextSon();
  Ccall(_stratego_t_9);
  AllBuild();
  AllBuild();
  Ccall(_stratego_n_9);
  Epopd(0,4);
  Return();
  j_16 :
  Ccall(_stratego_o_9);
  Ccall(_stratego_p_9);
ENDPROC

PROC(_stratego_j_9)
  _ST_mod();
ENDPROC

PROC(_stratego_k_9)
  _ST_add();
ENDPROC

PROC(_stratego_l_9)
  _ST_div();
ENDPROC

PROC(_stratego_m_9)
  _ST_int();
ENDPROC

PROC(_stratego_n_9)
  Epushd(0,7);
  MoveTop(0,1);
  goto o_29;
  o_29 :
  TestFunFC(u_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto p_29;
  p_29 :
  TestFunFC(u_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto q_29;
  q_29 :
  TestFunFC(x_3,&&w_16,Egetd(0,4));
  goto r_29;
  r_29 :
  TestFunFC(h_3,&&fail,Egetd(0,7));
  Rpush(u_16);
  goto e_30;
  w_16 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto s_29;
  s_29 :
  TestFunFC(h_3,&&fail,Egetd(0,7));
  Rpush(u_16);
  goto f_30;
  u_16 :
  goto t_16;
  f_30 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,5),Egetd(0,6))));
  Return();
  t_16 :
  goto s_16;
  e_30 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  s_16 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_o_9)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(y_16);
  k_31 :
  Cpush(b_17);
  Epushd(1,7);
  MoveTop(1,1);
  goto i_30;
  i_30 :
  TestFunFC(u_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto j_30;
  j_30 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto k_30;
  k_30 :
  TestFunFC(u_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto l_30;
  l_30 :
  TestFunFC(h_3,&&fail,Egetd(1,7));
  Rpush(f_17);
  goto l_31;
  f_17 :
  goto c_17;
  l_31 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Rpush(i_17);
  goto k_31;
  i_17 :
  Return();
  c_17 :
  Epopd(1,7);
  goto z_16;
  b_17 :
  goto l_17;
  z_16 :
  Cpop();
  l_17 :
  Return();
  y_16 :
  MoveTop(0,2);
  goto n_30;
  n_30 :
  TestFunFC(u_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto o_30;
  o_30 :
  TestFunFC(x_3,&&fail,Egetd(0,3));
  goto p_30;
  p_30 :
  TestFunFC(u_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto q_30;
  q_30 :
  TestFunFC(h_3,&&fail,Egetd(0,6));
  Rpush(o_17);
  goto m_31;
  o_17 :
  goto x_16;
  m_31 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  x_16 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_p_9)
  _ST_implode_string();
ENDPROC

PROC(_stratego_q_9)
  _ST_is_int();
ENDPROC

PROC(_stratego_r_9)
  _ST_is_string();
ENDPROC

PROC(_stratego_s_9)
  Rpush(r_17);
  v_31 :
  Cpush(v_17);
  Ccall(_stratego_s_8);
  goto u_17;
  v_17 :
  Epushd(0,3);
  MoveTop(0,1);
  goto o_31;
  o_31 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(c_18);
  goto w_31;
  c_18 :
  goto z_17;
  w_31 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(d_18);
  x_31 :
  Cpush(h_18);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_18);
  goto x_31;
  j_18 :
  AllBuild();
  goto g_18;
  h_18 :
  Ccall(_stratego_s_8);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(m_18);
  goto v_31;
  m_18 :
  goto k_18;
  g_18 :
  Cpop();
  k_18 :
  Return();
  d_18 :
  Return();
  z_17 :
  Epopd(0,3);
  goto y_17;
  u_17 :
  Cpop();
  y_17 :
  Return();
  r_17 :
ENDPROC

PROC(_stratego_t_9)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_31;
  z_31 :
  TestFunFC(h_3,&&fail,Egetd(0,1));
  Rpush(p_18);
  goto b_32;
  p_18 :
  goto n_18;
  b_32 :
  Return();
  n_18 :
  Epopd(0,1);
ENDPROC
