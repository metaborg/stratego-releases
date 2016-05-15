#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,l_18);
VARDECL(AFun,i_18);
VARDECL(AFun,b_18);
VARDECL(AFun,a_18);
VARDECL(AFun,s_17);
VARDECL(AFun,d_17);
VARDECL(AFun,i_12);
VARDECL(AFun,e_11);
VARDECL(AFun,n_10);
VARDECL(AFun,a_10);
VARDECL(AFun,o_9);
VARDECL(AFun,c_9);
VARDECL(AFun,v_8);
VARDECL(AFun,r_8);
VARDECL(AFun,y_0);
VARDECL(AFun,u_0);
VARDECL(AFun,r_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_i_4);
PROCDECL(_stratego_j_4);
PROCDECL(_stratego_k_4);
PROCDECL(_stratego_l_4);
PROCDECL(_stratego_m_4);
PROCDECL(_stratego_n_4);
PROCDECL(_stratego_o_4);
PROCDECL(_stratego_p_4);
PROCDECL(_stratego_q_4);
PROCDECL(_stratego_r_4);
PROCDECL(_stratego_s_4);
PROCDECL(_stratego_t_4);
PROCDECL(_stratego_u_4);
PROCDECL(_stratego_v_4);
PROCDECL(_stratego_w_4);
PROCDECL(_stratego_x_4);
PROCDECL(_stratego_y_4);
PROCDECL(_stratego_z_4);
PROCDECL(_stratego_a_5);
PROCDECL(_stratego_b_5);

PROC(_stratego_init_afuns)
  MOVE(l_18,ATmakeAFun("False",0,0));
  MOVE(i_18,ATmakeAFun("True",0,0));
  MOVE(b_18,ATmakeAFun("Not",1,0));
  MOVE(a_18,ATmakeAFun("Atom",1,0));
  MOVE(s_17,ATmakeAFun("And",2,0));
  MOVE(d_17,ATmakeAFun("Or",2,0));
  MOVE(i_12,ATmakeAFun("Runtime",1,0));
  MOVE(e_11,ATmakeAFun("Silent",0,0));
  MOVE(n_10,ATmakeAFun("Binary",0,0));
  MOVE(a_10,ATmakeAFun("Output",1,0));
  MOVE(o_9,ATmakeAFun("Input",1,0));
  MOVE(c_9,ATmakeAFun("Program",1,0));
  MOVE(v_8,ATmakeAFun("Help",0,0));
  MOVE(r_8,ATmakeAFun("Undefined",1,0));
  MOVE(y_0,ATmakeAFun("Nil",0,0));
  MOVE(u_0,ATmakeAFun("TNil",0,0));
  MOVE(r_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_i_4);
ENDPROC

PROC(_stratego_i_4)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(d_0);
  d_5 :
  Cpush(g_0);
  Cpush(i_0);
  Ccall(_stratego_j_4);
  goto h_0;
  i_0 :
  Ccall(_stratego_k_4);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_0);
  goto d_5;
  k_0 :
  AllBuild();
  goto j_0;
  h_0 :
  Cpop();
  j_0 :
  goto f_0;
  g_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(n_0);
  goto b_0;
  n_0 :
  goto m_0;
  b_0 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  m_0 :
  Epopd(0,3);
  goto l_0;
  f_0 :
  Cpop();
  l_0 :
  Return();
  d_0 :
  AllBuild();
  Cpush(p_0);
  Ccall(_stratego_l_4);
  goto o_0;
  p_0 :
  Ccontinue(q_0);
  Epushd(0,6);
  Ccall(_stratego_q_4);
  Tdupl();
  Ccall(_stratego_s_4);
  Tpop();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_4);
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_s_4);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto v_2;
  v_2 :
  TestFunFC(r_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_2;
  x_2 :
  TestFunFC(r_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto y_2;
  y_2 :
  TestFunFC(u_0,&&fail,Egetd(0,6));
  Rpush(t_0);
  goto e_0;
  t_0 :
  goto s_0;
  e_0 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  s_0 :
  Ccall(_stratego_t_4);
  Ccall(_stratego_w_4);
  Epopd(0,6);
  goto o_0;
  q_0 :
  Ccall(_stratego_x_4);
  goto v_0;
  o_0 :
  Cpop();
  v_0 :
ENDPROC

PROC(_stratego_j_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_5;
  f_5 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  Rpush(x_0);
  goto e_5;
  x_0 :
  goto w_0;
  e_5 :
  Return();
  w_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_4)
  Epushd(0,5);
  MoveTop(0,3);
  goto u_7;
  u_7 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto v_7;
  v_7 :
  TestFunFC(a_0,&&p_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(r_1);
  Rpush(s_1);
  goto h_5;
  s_1 :
  goto q_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto i_5;
  u_1 :
  goto q_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto j_5;
  w_1 :
  goto q_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto k_5;
  y_1 :
  goto q_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto l_5;
  a_2 :
  goto q_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto m_5;
  c_2 :
  goto q_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto n_5;
  e_2 :
  goto q_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto o_5;
  g_2 :
  goto q_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto p_5;
  i_2 :
  goto q_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto q_5;
  k_2 :
  goto q_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto r_5;
  m_2 :
  goto q_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto s_5;
  o_2 :
  goto q_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto t_5;
  q_2 :
  goto q_1;
  p_2 :
  Ccontinue(r_2);
  Rpush(s_2);
  goto u_5;
  s_2 :
  goto q_1;
  r_2 :
  Rpush(u_2);
  goto v_5;
  u_2 :
  goto t_2;
  q_1 :
  Cpop();
  t_2 :
  goto o_1;
  p_1 :
  Cpush(a_3);
  Rpush(d_3);
  goto h_5;
  d_3 :
  goto w_2;
  a_3 :
  Ccontinue(e_3);
  Rpush(f_3);
  goto i_5;
  f_3 :
  goto w_2;
  e_3 :
  Ccontinue(h_3);
  Rpush(i_3);
  goto j_5;
  i_3 :
  goto w_2;
  h_3 :
  Ccontinue(j_3);
  Rpush(o_3);
  goto k_5;
  o_3 :
  goto w_2;
  j_3 :
  Ccontinue(p_3);
  Rpush(q_3);
  goto l_5;
  q_3 :
  goto w_2;
  p_3 :
  Ccontinue(r_3);
  Rpush(s_3);
  goto r_5;
  s_3 :
  goto w_2;
  r_3 :
  Ccontinue(t_3);
  Rpush(w_3);
  goto s_5;
  w_3 :
  goto w_2;
  t_3 :
  Ccontinue(x_3);
  Rpush(y_3);
  goto t_5;
  y_3 :
  goto w_2;
  x_3 :
  Ccontinue(z_3);
  Rpush(a_4);
  goto u_5;
  a_4 :
  goto w_2;
  z_3 :
  Rpush(d_4);
  goto v_5;
  d_4 :
  goto c_4;
  w_2 :
  Cpop();
  c_4 :
  goto o_1;
  o_1 :
  goto n_1;
  v_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_7;
  s_7 :
  TestStr(1,1,"-?",&&fail);
  Rpush(f_4);
  goto r_7;
  f_4 :
  goto e_4;
  r_7 :
  Return();
  e_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  n_1 :
  goto m_1;
  u_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_7;
  p_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(h_4);
  goto o_7;
  h_4 :
  goto g_4;
  o_7 :
  Return();
  g_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  m_1 :
  goto l_1;
  t_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_7;
  m_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(y_5);
  goto l_7;
  y_5 :
  goto c_5;
  l_7 :
  Return();
  c_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  s_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_7;
  j_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(e_6);
  goto i_7;
  e_6 :
  goto b_6;
  i_7 :
  Return();
  b_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  r_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_7;
  g_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(k_6);
  goto f_7;
  k_6 :
  goto h_6;
  f_7 :
  Return();
  h_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  q_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_7;
  c_7 :
  TestStr(1,1,"--output",&&fail);
  Rpush(o_6);
  goto b_7;
  o_6 :
  goto n_6;
  b_7 :
  Return();
  n_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  i_1 :
  goto h_1;
  p_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_6;
  y_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(s_6);
  goto x_6;
  s_6 :
  goto r_6;
  x_6 :
  Return();
  r_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  h_1 :
  goto g_1;
  o_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_6;
  u_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(w_6);
  goto t_6;
  w_6 :
  goto v_6;
  t_6 :
  Return();
  v_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  g_1 :
  goto f_1;
  n_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_6;
  q_6 :
  TestStr(1,1,"-i",&&fail);
  Rpush(a_7);
  goto p_6;
  a_7 :
  goto z_6;
  p_6 :
  Return();
  z_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  f_1 :
  goto e_1;
  m_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_6;
  m_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(e_7);
  goto l_6;
  e_7 :
  goto d_7;
  l_6 :
  Return();
  d_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  e_1 :
  goto d_1;
  l_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_6;
  j_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(k_7);
  goto i_6;
  k_7 :
  goto h_7;
  i_6 :
  Return();
  h_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  d_1 :
  goto c_1;
  k_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_6;
  g_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(q_7);
  goto f_6;
  q_7 :
  goto n_7;
  f_6 :
  Return();
  n_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  c_1 :
  goto b_1;
  j_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_6;
  d_6 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(b_8);
  goto c_6;
  b_8 :
  goto t_7;
  c_6 :
  Return();
  t_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  i_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_6;
  a_6 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(e_8);
  goto z_5;
  e_8 :
  goto c_8;
  z_5 :
  Return();
  c_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  h_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_5;
  x_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(g_8);
  goto w_5;
  g_8 :
  goto f_8;
  w_5 :
  Return();
  f_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  z_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_l_4)
  Tdupl();
  h_8 :
  TestFunTop(a_0);
  Cpush(j_8);
  Arg(0);
  Cpush(m_8);
  Ccall(_stratego_m_4);
  goto l_8;
  m_8 :
  Epushd(0,2);
  MoveTop(0,1);
  goto o_11;
  o_11 :
  TestFunFC(r_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(q_8);
  goto n_11;
  q_8 :
  goto p_8;
  n_11 :
  Return();
  p_8 :
  Epopd(0,2);
  goto o_8;
  l_8 :
  Cpop();
  o_8 :
  Tpop();
  Cpop();
  goto k_8;
  j_8 :
  Arg(1);
  Tdrop();
  goto h_8;
  k_8 :
  Tpop();
  Ccall(_stratego_n_4);
ENDPROC

PROC(_stratego_m_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_11;
  t_11 :
  TestFunFC(v_8,&&fail,Egetd(0,1));
  Rpush(u_8);
  goto s_11;
  u_8 :
  goto t_8;
  s_11 :
  Return();
  t_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_4)
  Epushd(0,1);
  Tdupl();
  Rpush(w_8);
  d_12 :
  Cpush(z_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto w_11;
  w_11 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto x_11;
  x_11 :
  TestFunFC(c_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_9);
  goto v_11;
  b_9 :
  goto a_9;
  v_11 :
  Move(0,1,1,3);
  Return();
  a_9 :
  Epopd(1,4);
  goto y_8;
  z_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_9);
  goto d_12;
  f_9 :
  AllBuild();
  goto e_9;
  y_8 :
  Cpop();
  e_9 :
  Return();
  w_8 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_o_4);
  Tset(MakeInt(1));
  Ccall(_stratego_p_4);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_p_4)
  _ST_exit();
ENDPROC

PROC(_stratego_q_4)
  Epushd(0,3);
  Tdupl();
  Cpush(h_9);
  Rpush(i_9);
  x_12 :
  Cpush(k_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_12;
  f_12 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto g_12;
  g_12 :
  TestFunFC(o_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(n_9);
  goto e_12;
  n_9 :
  goto m_9;
  e_12 :
  Move(0,1,1,3);
  Return();
  m_9 :
  Epopd(1,4);
  goto j_9;
  k_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_9);
  goto x_12;
  q_9 :
  AllBuild();
  goto p_9;
  j_9 :
  Cpop();
  p_9 :
  Return();
  i_9 :
  goto g_9;
  h_9 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto r_9;
  g_9 :
  Cpop();
  r_9 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_r_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_r_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_s_4)
  _ST_dtime();
ENDPROC

PROC(_stratego_t_4)
  Epushd(0,1);
  Tdupl();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Cpush(u_9);
  Rpush(v_9);
  x_13 :
  Cpush(x_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_12;
  z_12 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_13;
  a_13 :
  TestFunFC(a_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(z_9);
  goto y_12;
  z_9 :
  goto y_9;
  y_12 :
  Move(0,1,1,3);
  Return();
  y_9 :
  Epopd(1,4);
  goto w_9;
  x_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_10);
  goto x_13;
  d_10 :
  AllBuild();
  goto c_10;
  w_9 :
  Cpop();
  c_10 :
  Return();
  v_9 :
  goto s_9;
  u_9 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto e_10;
  s_9 :
  Cpop();
  e_10 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  Cpush(g_10);
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Rpush(h_10);
  y_13 :
  Cpush(k_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto g_13;
  g_13 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_13;
  h_13 :
  TestFunFC(n_10,&&fail,Egetd(1,2));
  Rpush(m_10);
  goto f_13;
  m_10 :
  goto l_10;
  f_13 :
  Return();
  l_10 :
  Epopd(1,3);
  goto i_10;
  k_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_10);
  goto y_13;
  p_10 :
  AllBuild();
  goto o_10;
  i_10 :
  Cpop();
  o_10 :
  Return();
  h_10 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  goto f_10;
  g_10 :
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  goto r_10;
  f_10 :
  Cpop();
  r_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_v_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_w_4)
  Epushd(0,2);
  Tdupl();
  Cpush(t_10);
  Cpush(w_10);
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Cpush(x_10);
  Tdupl();
  Rpush(y_10);
  p_15 :
  Cpush(b_11);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_14;
  a_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_14;
  b_14 :
  TestFunFC(e_11,&&fail,Egetd(1,2));
  Rpush(d_11);
  goto z_13;
  d_11 :
  goto c_11;
  z_13 :
  Return();
  c_11 :
  Epopd(1,3);
  goto z_10;
  b_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_11);
  goto p_15;
  h_11 :
  AllBuild();
  goto g_11;
  z_10 :
  Cpop();
  g_11 :
  Return();
  y_10 :
  Cpop();
  Crestore();
  Cjump();
  x_10 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Rpush(i_11);
  q_15 :
  Cpush(l_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_14;
  d_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_14;
  e_14 :
  TestFunFC(i_12,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_12);
  goto c_14;
  h_12 :
  goto m_11;
  c_14 :
  Move(0,2,1,3);
  Return();
  m_11 :
  Epopd(1,4);
  goto j_11;
  l_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_12);
  goto q_15;
  k_12 :
  AllBuild();
  goto j_12;
  j_11 :
  Cpop();
  j_12 :
  Return();
  i_11 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Rpush(q_12);
  r_15 :
  Cpush(t_12);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_14;
  g_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_14;
  h_14 :
  TestFunFC(c_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(w_12);
  goto f_14;
  w_12 :
  goto u_12;
  f_14 :
  Move(0,1,1,3);
  Return();
  u_12 :
  Epopd(1,4);
  goto s_12;
  t_12 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_13);
  goto r_15;
  c_13 :
  AllBuild();
  goto b_13;
  s_12 :
  Cpop();
  b_13 :
  Return();
  q_12 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_o_4);
  goto u_10;
  w_10 :
  goto d_13;
  u_10 :
  Cpop();
  d_13 :
  goto s_10;
  t_10 :
  Ccontinue(e_13);
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Cpush(n_13);
  Tdupl();
  Rpush(p_13);
  s_15 :
  Cpush(r_13);
  Epushd(1,3);
  MoveTop(1,1);
  goto j_14;
  j_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_14;
  k_14 :
  TestFunFC(e_11,&&fail,Egetd(1,2));
  Rpush(t_13);
  goto i_14;
  t_13 :
  goto s_13;
  i_14 :
  Return();
  s_13 :
  Epopd(1,3);
  goto q_13;
  r_13 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_16);
  goto s_15;
  d_16 :
  AllBuild();
  goto c_16;
  q_13 :
  Cpop();
  c_16 :
  Return();
  p_13 :
  Cpop();
  Crestore();
  Cjump();
  n_13 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Rpush(e_16);
  t_15 :
  Cpush(g_16);
  Epushd(1,4);
  MoveTop(1,1);
  goto m_14;
  m_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto n_14;
  n_14 :
  TestFunFC(i_12,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_16);
  goto l_14;
  i_16 :
  goto h_16;
  l_14 :
  Move(0,2,1,3);
  Return();
  h_16 :
  Epopd(1,4);
  goto f_16;
  g_16 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_16);
  goto t_15;
  k_16 :
  AllBuild();
  goto j_16;
  f_16 :
  Cpop();
  j_16 :
  Return();
  e_16 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Rpush(l_16);
  u_15 :
  Cpush(r_16);
  Epushd(1,4);
  MoveTop(1,1);
  goto p_14;
  p_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto q_14;
  q_14 :
  TestFunFC(c_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_16);
  goto o_14;
  t_16 :
  goto s_16;
  o_14 :
  Move(0,1,1,3);
  Return();
  s_16 :
  Epopd(1,4);
  goto q_16;
  r_16 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_16);
  goto u_15;
  v_16 :
  AllBuild();
  goto u_16;
  q_16 :
  Cpop();
  u_16 :
  Return();
  l_16 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_o_4);
  goto s_10;
  e_13 :
  goto w_16;
  s_10 :
  Cpop();
  w_16 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_p_4);
  Epopd(0,2);
ENDPROC

PROC(_stratego_x_4)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_o_4);
  Tset(MakeInt(1));
  Ccall(_stratego_p_4);
ENDPROC

PROC(_stratego_y_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_15;
  w_15 :
  TestFunFC(u_0,&&fail,Egetd(0,1));
  Rpush(y_16);
  goto v_15;
  y_16 :
  goto x_16;
  v_15 :
  Return();
  x_16 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_4)
  Rpush(a_17);
  j_17 :
  Cpush(c_17);
  TestFunTop(d_17);
  TravInit();
  OneNextSon();
  Rpush(e_17);
  goto j_17;
  e_17 :
  OneNextSon();
  Rpush(f_17);
  goto j_17;
  f_17 :
  AllBuild();
  goto b_17;
  c_17 :
  Ccontinue(g_17);
  Rpush(h_17);
  k_17 :
  Cpush(r_17);
  TestFunTop(s_17);
  TravInit();
  OneNextSon();
  Rpush(t_17);
  goto k_17;
  t_17 :
  OneNextSon();
  Rpush(u_17);
  goto k_17;
  u_17 :
  AllBuild();
  goto i_17;
  r_17 :
  Ccontinue(v_17);
  Epushd(0,3);
  MoveTop(0,1);
  goto a_16;
  a_16 :
  TestFunFC(a_18,&&z_17,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(y_17);
  goto y_15;
  z_17 :
  TestFunFC(b_18,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto b_16;
  b_16 :
  TestFunFC(a_18,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(y_17);
  goto z_15;
  y_17 :
  goto x_17;
  z_15 :
  Return();
  x_17 :
  goto w_17;
  y_15 :
  Return();
  w_17 :
  Epopd(0,3);
  goto i_17;
  v_17 :
  Ccontinue(c_18);
  Ccall(_stratego_a_5);
  goto i_17;
  c_18 :
  Ccontinue(d_18);
  Ccall(_stratego_b_5);
  goto i_17;
  d_18 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a conjunct: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_4);
  Epopd(0,1);
  Tpop();
  goto e_18;
  i_17 :
  Cpop();
  e_18 :
  Return();
  h_17 :
  goto b_17;
  g_17 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a disjunct: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_o_4);
  Epopd(0,1);
  Tpop();
  goto f_18;
  b_17 :
  Cpop();
  f_18 :
  Return();
  a_17 :
ENDPROC

PROC(_stratego_a_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_17;
  m_17 :
  TestFunFC(i_18,&&fail,Egetd(0,1));
  Rpush(h_18);
  goto l_17;
  h_18 :
  goto g_18;
  l_17 :
  Return();
  g_18 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_17;
  p_17 :
  TestFunFC(l_18,&&fail,Egetd(0,1));
  Rpush(k_18);
  goto o_17;
  k_18 :
  goto j_18;
  o_17 :
  Return();
  j_18 :
  Epopd(0,1);
ENDPROC

DOIT

