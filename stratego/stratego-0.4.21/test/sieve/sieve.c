#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,p_12);
VARDECL(AFun,g_12);
VARDECL(AFun,s_11);
VARDECL(AFun,f_11);
VARDECL(AFun,s_10);
VARDECL(AFun,d_9);
VARDECL(AFun,w_8);
VARDECL(AFun,s_8);
VARDECL(AFun,h_4);
VARDECL(AFun,b_4);
VARDECL(AFun,m_3);
VARDECL(AFun,g_3);
VARDECL(AFun,e_3);
VARDECL(AFun,y_2);
VARDECL(AFun,r_2);
VARDECL(AFun,n_1);
VARDECL(AFun,b_1);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
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
PROCDECL(_stratego_u_9);
PROCDECL(_stratego_v_9);
PROCDECL(_stratego_w_9);
PROCDECL(_stratego_x_9);
PROCDECL(_stratego_y_9);

PROC(_stratego_init_afuns)
  MOVE(p_12,ATmakeAFun("Runtime",1,0));
  MOVE(g_12,ATmakeAFun("Silent",0,0));
  MOVE(s_11,ATmakeAFun("Binary",0,0));
  MOVE(f_11,ATmakeAFun("Output",1,0));
  MOVE(s_10,ATmakeAFun("Input",1,0));
  MOVE(d_9,ATmakeAFun("Program",1,0));
  MOVE(w_8,ATmakeAFun("Help",0,0));
  MOVE(s_8,ATmakeAFun("Undefined",1,0));
  MOVE(h_4,ATmakeAFun("Nil",0,0));
  MOVE(b_4,ATmakeAFun("TNil",0,0));
  MOVE(m_3,ATmakeAFun("take",2,0));
  MOVE(g_3,ATmakeAFun("filter",2,0));
  MOVE(e_3,ATmakeAFun("sieve",1,0));
  MOVE(y_2,ATmakeAFun("from",1,0));
  MOVE(r_2,ATmakeAFun("primes",0,0));
  MOVE(n_1,ATmakeAFun("cons",2,0));
  MOVE(b_1,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(b_0);
  m_2 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_e_9);
  goto f_0;
  g_0 :
  Ccall(_stratego_f_9);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto m_2;
  i_0 :
  AllBuild();
  goto h_0;
  f_0 :
  Cpop();
  h_0 :
  goto d_0;
  e_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(l_0);
  goto n_2;
  l_0 :
  goto k_0;
  n_2 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  k_0 :
  Epopd(0,3);
  goto j_0;
  d_0 :
  Cpop();
  j_0 :
  Return();
  b_0 :
  AllBuild();
  Cpush(s_0);
  Ccall(_stratego_g_9);
  goto r_0;
  s_0 :
  Ccontinue(x_0);
  Epushd(0,6);
  Ccall(_stratego_l_9);
  Tdupl();
  Ccall(_stratego_n_9);
  Tpop();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Rpush(c_1);
  o_2 :
  Cpush(m_1);
  TestFunTop(n_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_1);
  goto o_2;
  o_1 :
  AllBuild();
  goto k_1;
  m_1 :
  AllInit();
  q_1 :
  AllNextSon(&&r_1);
  Rpush(s_1);
  goto o_2;
  s_1 :
  goto q_1;
  r_1 :
  AllBuild();
  goto p_1;
  k_1 :
  Cpop();
  p_1 :
  Cpush(u_1);
  Epushd(1,7);
  MoveTop(1,3);
  goto m_0;
  m_0 :
  TestFunFC(r_2,&&l_2,Egetd(1,3));
  Rpush(k_2);
  goto p_2;
  l_2 :
  TestFunFC(y_2,&&x_2,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  Rpush(k_2);
  goto q_2;
  x_2 :
  TestFunFC(e_3,&&a_3,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  goto n_0;
  n_0 :
  TestFunFC(n_1,&&fail,Egetd(1,4));
  MoveArg(1,1,1,4,0);
  MoveArg(1,2,1,4,1);
  Rpush(k_2);
  goto s_2;
  a_3 :
  TestFunFC(g_3,&&f_3,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto o_0;
  o_0 :
  TestFunFC(n_1,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  Cpush(i_3);
  Rpush(j_3);
  goto t_2;
  j_3 :
  goto h_3;
  i_3 :
  Rpush(l_3);
  goto u_2;
  l_3 :
  goto k_3;
  h_3 :
  Cpop();
  k_3 :
  goto k_2;
  f_3 :
  TestFunFC(m_3,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto p_0;
  p_0 :
  TestFunFC(n_1,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto q_0;
  q_0 :
  TestInt(1,4,0,&&n_3);
  Cpush(p_3);
  Rpush(q_3);
  goto v_2;
  q_3 :
  goto o_3;
  p_3 :
  Rpush(s_3);
  goto w_2;
  s_3 :
  goto r_3;
  o_3 :
  Cpop();
  r_3 :
  goto k_2;
  n_3 :
  Rpush(k_2);
  goto w_2;
  k_2 :
  goto j_2;
  w_2 :
  Epushd(2,1);
  Tdupl();
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",MakeInt(0),App0("TNil"))));
  Ccall(_stratego_y_9);
  Tpop();
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_x_9);
  MoveTop(2,1);
  NotNULLd(1,6);
  NotNULLd(2,1);
  NotNULLd(1,7);
  Tset(App2("cons",Egetd(1,6),App2("take",Egetd(2,1),Egetd(1,7))));
  Epopd(2,1);
  Return();
  j_2 :
  goto b_2;
  v_2 :
  Tset(App0("nil"));
  Return();
  b_2 :
  goto z_1;
  u_2 :
  Tdupl();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  Cpush(t_3);
  Tdupl();
  Ccall(_stratego_v_9);
  Cpop();
  Crestore();
  Cjump();
  t_3 :
  Tpop();
  NotNULLd(1,6);
  NotNULLd(1,4);
  NotNULLd(1,7);
  Tset(App2("cons",Egetd(1,6),App2("filter",Egetd(1,4),Egetd(1,7))));
  Return();
  z_1 :
  goto y_1;
  t_2 :
  Tdupl();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  Ccall(_stratego_v_9);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,7);
  Tset(App2("filter",Egetd(1,4),Egetd(1,7)));
  Return();
  y_1 :
  goto x_1;
  s_2 :
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("cons",Egetd(1,1),App1("sieve",App2("filter",Egetd(1,1),Egetd(1,2)))));
  Return();
  x_1 :
  goto w_1;
  q_2 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_u_9);
  MoveTop(2,1);
  NotNULLd(1,4);
  NotNULLd(2,1);
  Tset(App2("cons",Egetd(1,4),App1("from",Egetd(2,1))));
  Epopd(2,1);
  Return();
  w_1 :
  goto v_1;
  p_2 :
  Tset(App1("sieve",App1("from",MakeInt(2))));
  Return();
  v_1 :
  Rpush(v_3);
  goto o_2;
  v_3 :
  Epopd(1,7);
  goto t_1;
  u_1 :
  goto w_3;
  t_1 :
  Cpop();
  w_3 :
  Return();
  c_1 :
  OneNextSon();
  Ccall(_stratego_t_9);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_n_9);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto t_0;
  t_0 :
  TestFunFC(b_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto u_0;
  u_0 :
  TestFunFC(b_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto v_0;
  v_0 :
  TestFunFC(b_4,&&fail,Egetd(0,6));
  Rpush(z_3);
  goto z_2;
  z_3 :
  goto y_3;
  z_2 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  y_3 :
  Ccall(_stratego_o_9);
  Ccall(_stratego_r_9);
  Epopd(0,6);
  goto r_0;
  x_0 :
  Ccall(_stratego_s_9);
  goto c_4;
  r_0 :
  Cpop();
  c_4 :
ENDPROC

PROC(_stratego_e_9)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_3;
  b_3 :
  TestFunFC(h_4,&&fail,Egetd(0,1));
  Rpush(f_4);
  goto d_3;
  f_4 :
  goto e_4;
  d_3 :
  Return();
  e_4 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_9)
  Epushd(0,5);
  MoveTop(0,3);
  goto d_10;
  d_10 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto e_10;
  e_10 :
  TestFunFC(a_0,&&c_5,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(e_5);
  Rpush(f_5);
  goto b_14;
  f_5 :
  goto d_5;
  e_5 :
  Ccontinue(g_5);
  Rpush(h_5);
  goto e_14;
  h_5 :
  goto d_5;
  g_5 :
  Ccontinue(i_5);
  Rpush(j_5);
  goto h_14;
  j_5 :
  goto d_5;
  i_5 :
  Ccontinue(k_5);
  Rpush(l_5);
  goto k_14;
  l_5 :
  goto d_5;
  k_5 :
  Ccontinue(m_5);
  Rpush(n_5);
  goto n_14;
  n_5 :
  goto d_5;
  m_5 :
  Ccontinue(o_5);
  Rpush(p_5);
  goto q_14;
  p_5 :
  goto d_5;
  o_5 :
  Ccontinue(q_5);
  Rpush(r_5);
  goto u_14;
  r_5 :
  goto d_5;
  q_5 :
  Ccontinue(s_5);
  Rpush(t_5);
  goto y_14;
  t_5 :
  goto d_5;
  s_5 :
  Ccontinue(u_5);
  Rpush(v_5);
  goto c_15;
  v_5 :
  goto d_5;
  u_5 :
  Ccontinue(w_5);
  Rpush(x_5);
  goto g_15;
  x_5 :
  goto d_5;
  w_5 :
  Ccontinue(y_5);
  Rpush(z_5);
  goto k_15;
  z_5 :
  goto d_5;
  y_5 :
  Ccontinue(a_6);
  Rpush(b_6);
  goto n_15;
  b_6 :
  goto d_5;
  a_6 :
  Ccontinue(c_6);
  Rpush(d_6);
  goto q_15;
  d_6 :
  goto d_5;
  c_6 :
  Ccontinue(e_6);
  Rpush(f_6);
  goto t_15;
  f_6 :
  goto d_5;
  e_6 :
  Rpush(h_6);
  goto w_15;
  h_6 :
  goto g_6;
  d_5 :
  Cpop();
  g_6 :
  goto b_5;
  c_5 :
  Cpush(j_6);
  Rpush(k_6);
  goto b_14;
  k_6 :
  goto i_6;
  j_6 :
  Ccontinue(l_6);
  Rpush(m_6);
  goto e_14;
  m_6 :
  goto i_6;
  l_6 :
  Ccontinue(n_6);
  Rpush(o_6);
  goto h_14;
  o_6 :
  goto i_6;
  n_6 :
  Ccontinue(p_6);
  Rpush(q_6);
  goto k_14;
  q_6 :
  goto i_6;
  p_6 :
  Ccontinue(r_6);
  Rpush(s_6);
  goto n_14;
  s_6 :
  goto i_6;
  r_6 :
  Ccontinue(t_6);
  Rpush(u_6);
  goto k_15;
  u_6 :
  goto i_6;
  t_6 :
  Ccontinue(v_6);
  Rpush(w_6);
  goto n_15;
  w_6 :
  goto i_6;
  v_6 :
  Ccontinue(x_6);
  Rpush(y_6);
  goto q_15;
  y_6 :
  goto i_6;
  x_6 :
  Ccontinue(z_6);
  Rpush(a_7);
  goto t_15;
  a_7 :
  goto i_6;
  z_6 :
  Rpush(c_7);
  goto w_15;
  c_7 :
  goto b_7;
  i_6 :
  Cpop();
  b_7 :
  goto b_5;
  b_5 :
  goto a_5;
  w_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_10;
  b_10 :
  TestStr(1,1,"-?",&&fail);
  Rpush(e_7);
  goto x_15;
  e_7 :
  goto d_7;
  x_15 :
  Return();
  d_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  a_5 :
  goto y_4;
  t_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_8;
  y_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(g_7);
  goto u_15;
  g_7 :
  goto f_7;
  u_15 :
  Return();
  f_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  y_4 :
  goto x_4;
  q_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_8;
  v_8 :
  TestStr(1,1,"--help",&&fail);
  Rpush(i_7);
  goto r_15;
  i_7 :
  goto h_7;
  r_15 :
  Return();
  h_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  x_4 :
  goto w_4;
  n_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_8;
  r_8 :
  TestStr(1,1,"-s",&&fail);
  Rpush(k_7);
  goto o_15;
  k_7 :
  goto j_7;
  o_15 :
  Return();
  j_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  w_4 :
  goto u_4;
  k_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_8;
  l_8 :
  TestStr(1,1,"-b",&&fail);
  Rpush(m_7);
  goto l_15;
  m_7 :
  goto l_7;
  l_15 :
  Return();
  l_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  u_4 :
  goto t_4;
  g_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_8;
  g_8 :
  TestStr(1,1,"--output",&&fail);
  Rpush(o_7);
  goto h_15;
  o_7 :
  goto n_7;
  h_15 :
  Return();
  n_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  t_4 :
  goto s_4;
  c_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_4;
  z_4 :
  TestStr(1,1,"-o",&&fail);
  Rpush(q_7);
  goto d_15;
  q_7 :
  goto p_7;
  d_15 :
  Return();
  p_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  s_4 :
  goto q_4;
  y_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_4;
  v_4 :
  TestStr(1,1,"--input",&&fail);
  Rpush(s_7);
  goto z_14;
  s_7 :
  goto r_7;
  z_14 :
  Return();
  r_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  q_4 :
  goto p_4;
  u_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_4;
  r_4 :
  TestStr(1,1,"-i",&&fail);
  Rpush(u_7);
  goto v_14;
  u_7 :
  goto t_7;
  v_14 :
  Return();
  t_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  p_4 :
  goto o_4;
  q_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_4;
  n_4 :
  TestStr(1,1,"@version",&&fail);
  Rpush(w_7);
  goto r_14;
  w_7 :
  goto v_7;
  r_14 :
  Return();
  v_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  o_4 :
  goto m_4;
  n_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_4;
  g_4 :
  TestStr(1,1,"--version",&&fail);
  Rpush(y_7);
  goto o_14;
  y_7 :
  goto x_7;
  o_14 :
  Return();
  x_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  m_4 :
  goto l_4;
  k_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_4;
  d_4 :
  TestStr(1,1,"-v",&&fail);
  Rpush(a_8);
  goto l_14;
  a_8 :
  goto z_7;
  l_14 :
  Return();
  z_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  l_4 :
  goto k_4;
  h_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_4;
  a_4 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(c_8);
  goto i_14;
  c_8 :
  goto b_8;
  i_14 :
  Return();
  b_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  k_4 :
  goto j_4;
  e_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_3;
  x_3 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(e_8);
  goto f_14;
  e_8 :
  goto d_8;
  f_14 :
  Return();
  d_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  j_4 :
  goto i_4;
  b_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_3;
  u_3 :
  TestStr(1,1,"-S",&&fail);
  Rpush(h_8);
  goto c_14;
  h_8 :
  goto f_8;
  c_14 :
  Return();
  f_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  i_4 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_g_9)
  Tdupl();
  i_8 :
  TestFunTop(a_0);
  Cpush(j_8);
  Arg(0);
  Cpush(n_8);
  Ccall(_stratego_h_9);
  goto m_8;
  n_8 :
  Epushd(0,2);
  MoveTop(0,1);
  goto a_16;
  a_16 :
  TestFunFC(s_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(q_8);
  goto e_16;
  q_8 :
  goto p_8;
  e_16 :
  Return();
  p_8 :
  Epopd(0,2);
  goto o_8;
  m_8 :
  Cpop();
  o_8 :
  Tpop();
  Cpop();
  goto k_8;
  j_8 :
  Arg(1);
  Tdrop();
  goto i_8;
  k_8 :
  Tpop();
  Ccall(_stratego_i_9);
ENDPROC

PROC(_stratego_h_9)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_16;
  g_16 :
  TestFunFC(w_8,&&fail,Egetd(0,1));
  Rpush(u_8);
  goto i_16;
  u_8 :
  goto t_8;
  i_16 :
  Return();
  t_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_9)
  Epushd(0,1);
  Tdupl();
  Rpush(x_8);
  r_16 :
  Cpush(a_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_16;
  k_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_16;
  l_16 :
  TestFunFC(d_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_9);
  goto s_16;
  c_9 :
  goto b_9;
  s_16 :
  Move(0,1,1,3);
  Return();
  b_9 :
  Epopd(1,4);
  goto z_8;
  a_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_10);
  goto r_16;
  a_10 :
  AllBuild();
  goto z_9;
  z_8 :
  Cpop();
  z_9 :
  Return();
  x_8 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_j_9);
  Tset(MakeInt(1));
  Ccall(_stratego_k_9);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_9)
  _ST_printnl();
ENDPROC

PROC(_stratego_k_9)
  _ST_exit();
ENDPROC

PROC(_stratego_l_9)
  Epushd(0,3);
  Tdupl();
  Cpush(k_10);
  Rpush(l_10);
  m_17 :
  Cpush(o_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_16;
  u_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_16;
  v_16 :
  TestFunFC(s_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(q_10);
  goto n_17;
  q_10 :
  goto p_10;
  n_17 :
  Move(0,1,1,3);
  Return();
  p_10 :
  Epopd(1,4);
  goto n_10;
  o_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_10);
  goto m_17;
  u_10 :
  AllBuild();
  goto t_10;
  n_10 :
  Cpop();
  t_10 :
  Return();
  l_10 :
  goto c_10;
  k_10 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto v_10;
  c_10 :
  Cpop();
  v_10 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_m_9);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_m_9)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_n_9)
  _ST_dtime();
ENDPROC

PROC(_stratego_o_9)
  Epushd(0,1);
  Tdupl();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Cpush(y_10);
  Rpush(z_10);
  r_18 :
  Cpush(c_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_17;
  t_17 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_17;
  u_17 :
  TestFunFC(f_11,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_11);
  goto s_18;
  e_11 :
  goto d_11;
  s_18 :
  Move(0,1,1,3);
  Return();
  d_11 :
  Epopd(1,4);
  goto a_11;
  c_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_11);
  goto r_18;
  i_11 :
  AllBuild();
  goto h_11;
  a_11 :
  Cpop();
  h_11 :
  Return();
  z_10 :
  goto x_10;
  y_10 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto j_11;
  x_10 :
  Cpop();
  j_11 :
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_9);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_t_9);
  AllBuild();
  AllBuild();
  Cpush(l_11);
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Rpush(n_11);
  x_18 :
  Cpush(p_11);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_18;
  a_18 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_18;
  b_18 :
  TestFunFC(s_11,&&fail,Egetd(1,2));
  Rpush(r_11);
  goto y_18;
  r_11 :
  goto q_11;
  y_18 :
  Return();
  q_11 :
  Epopd(1,3);
  goto o_11;
  p_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_11);
  goto x_18;
  v_11 :
  AllBuild();
  goto t_11;
  o_11 :
  Cpop();
  t_11 :
  Return();
  n_11 :
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_9);
  OneNextSon();
  Ccall(_stratego_t_9);
  AllBuild();
  AllBuild();
  goto k_11;
  l_11 :
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_9);
  OneNextSon();
  Ccall(_stratego_t_9);
  AllBuild();
  AllBuild();
  goto w_11;
  k_11 :
  Cpop();
  w_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_9)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_q_9)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_r_9)
  Epushd(0,2);
  Tdupl();
  Cpush(y_11);
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Cpush(z_11);
  Tdupl();
  Rpush(a_12);
  v_19 :
  Cpush(d_12);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_19;
  a_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_19;
  b_19 :
  TestFunFC(g_12,&&fail,Egetd(1,2));
  Rpush(f_12);
  goto w_19;
  f_12 :
  goto e_12;
  w_19 :
  Return();
  e_12 :
  Epopd(1,3);
  goto b_12;
  d_12 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_12);
  goto v_19;
  i_12 :
  AllBuild();
  goto h_12;
  b_12 :
  Cpop();
  h_12 :
  Return();
  a_12 :
  Cpop();
  Crestore();
  Cjump();
  z_11 :
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_9);
  AllBuild();
  AllBuild();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Rpush(j_12);
  x_19 :
  Cpush(m_12);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_19;
  d_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_19;
  e_19 :
  TestFunFC(p_12,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_12);
  goto y_19;
  o_12 :
  goto n_12;
  y_19 :
  Move(0,2,1,3);
  Return();
  n_12 :
  Epopd(1,4);
  goto l_12;
  m_12 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_12);
  goto x_19;
  r_12 :
  AllBuild();
  goto q_12;
  l_12 :
  Cpop();
  q_12 :
  Return();
  j_12 :
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_9);
  AllBuild();
  AllBuild();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Rpush(t_12);
  z_19 :
  Cpush(v_12);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_19;
  g_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_19;
  h_19 :
  TestFunFC(d_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(x_12);
  goto a_20;
  x_12 :
  goto w_12;
  a_20 :
  Move(0,1,1,3);
  Return();
  w_12 :
  Epopd(1,4);
  goto u_12;
  v_12 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_13);
  goto z_19;
  a_13 :
  AllBuild();
  goto y_12;
  u_12 :
  Cpop();
  y_12 :
  Return();
  t_12 :
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_9);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_j_9);
  goto x_11;
  y_11 :
  goto b_13;
  x_11 :
  Cpop();
  b_13 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_k_9);
  Epopd(0,2);
ENDPROC

PROC(_stratego_s_9)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_j_9);
  Tset(MakeInt(1));
  Ccall(_stratego_k_9);
ENDPROC

PROC(_stratego_t_9)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_20;
  c_20 :
  TestFunFC(b_4,&&fail,Egetd(0,1));
  Rpush(d_13);
  goto e_20;
  d_13 :
  goto c_13;
  e_20 :
  Return();
  c_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_9)
  _ST_add();
ENDPROC

PROC(_stratego_v_9)
  Epushd(0,5);
  MoveTop(0,1);
  goto i_20;
  i_20 :
  TestFunFC(b_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto j_20;
  j_20 :
  TestFunFC(b_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto k_20;
  k_20 :
  TestFunFC(b_4,&&fail,Egetd(0,5));
  Rpush(g_13);
  goto t_20;
  g_13 :
  goto f_13;
  t_20 :
  Epushd(1,1);
  NotNULLd(0,4);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",Egetd(0,2),App0("TNil"))));
  Ccall(_stratego_w_9);
  MoveTop(1,1);
  goto h_20;
  h_20 :
  TestInt(1,1,0,&&fail);
  Rpush(i_13);
  goto u_20;
  i_13 :
  goto h_13;
  u_20 :
  Return();
  h_13 :
  Epopd(1,1);
  Return();
  f_13 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_w_9)
  _ST_mod();
ENDPROC

PROC(_stratego_x_9)
  _ST_minus();
ENDPROC

PROC(_stratego_y_9)
  _ST_gt();
ENDPROC

DOIT

