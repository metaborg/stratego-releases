#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,p_12);
VARDECL(AFun,g_12);
VARDECL(AFun,s_11);
VARDECL(AFun,f_11);
VARDECL(AFun,s_10);
VARDECL(AFun,x_9);
VARDECL(AFun,o_9);
VARDECL(AFun,k_9);
VARDECL(AFun,l_2);
VARDECL(AFun,h_2);
VARDECL(AFun,v_1);
VARDECL(AFun,p_1);
VARDECL(AFun,n_1);
VARDECL(AFun,l_1);
VARDECL(AFun,j_1);
VARDECL(AFun,s_0);
VARDECL(AFun,o_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_a_4);
PROCDECL(_stratego_b_4);
PROCDECL(_stratego_c_4);
PROCDECL(_stratego_d_4);
PROCDECL(_stratego_e_4);
PROCDECL(_stratego_f_4);
PROCDECL(_stratego_g_4);
PROCDECL(_stratego_h_4);
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

PROC(_stratego_init_afuns)
  MOVE(p_12,ATmakeAFun("Runtime",1,0));
  MOVE(g_12,ATmakeAFun("Silent",0,0));
  MOVE(s_11,ATmakeAFun("Binary",0,0));
  MOVE(f_11,ATmakeAFun("Output",1,0));
  MOVE(s_10,ATmakeAFun("Input",1,0));
  MOVE(x_9,ATmakeAFun("Program",1,0));
  MOVE(o_9,ATmakeAFun("Help",0,0));
  MOVE(k_9,ATmakeAFun("Undefined",1,0));
  MOVE(l_2,ATmakeAFun("Nil",0,0));
  MOVE(h_2,ATmakeAFun("TNil",0,0));
  MOVE(v_1,ATmakeAFun("take",2,0));
  MOVE(p_1,ATmakeAFun("filter",2,0));
  MOVE(n_1,ATmakeAFun("sieve",1,0));
  MOVE(l_1,ATmakeAFun("from",1,0));
  MOVE(j_1,ATmakeAFun("primes",0,0));
  MOVE(s_0,ATmakeAFun("cons",2,0));
  MOVE(o_0,ATmakeAFun("TCons",2,0));
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
  y_6 :
  Cpush(d_0);
  Cpush(f_0);
  Ccall(_stratego_a_4);
  goto e_0;
  f_0 :
  Ccall(_stratego_b_4);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_0);
  goto y_6;
  h_0 :
  AllBuild();
  goto g_0;
  e_0 :
  Cpop();
  g_0 :
  goto c_0;
  d_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto o_2;
  o_2 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(k_0);
  goto z_6;
  k_0 :
  goto j_0;
  z_6 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  j_0 :
  Epopd(0,3);
  goto i_0;
  c_0 :
  Cpop();
  i_0 :
  Return();
  b_0 :
  AllBuild();
  Cpush(m_0);
  Ccall(_stratego_c_4);
  goto l_0;
  m_0 :
  Ccontinue(n_0);
  Epushd(0,6);
  Ccall(_stratego_h_4);
  Tdupl();
  Ccall(_stratego_j_4);
  Tpop();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Rpush(p_0);
  a_7 :
  Cpush(r_0);
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_0);
  goto a_7;
  t_0 :
  AllBuild();
  goto q_0;
  r_0 :
  AllInit();
  v_0 :
  AllNextSon(&&w_0);
  Rpush(x_0);
  goto a_7;
  x_0 :
  goto v_0;
  w_0 :
  AllBuild();
  goto u_0;
  q_0 :
  Cpop();
  u_0 :
  Cpush(z_0);
  Epushd(1,7);
  MoveTop(1,3);
  goto y_4;
  y_4 :
  TestFunFC(j_1,&&i_1,Egetd(1,3));
  Rpush(h_1);
  goto b_7;
  i_1 :
  TestFunFC(l_1,&&k_1,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  Rpush(h_1);
  goto c_7;
  k_1 :
  TestFunFC(n_1,&&m_1,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  goto z_4;
  z_4 :
  TestFunFC(s_0,&&fail,Egetd(1,4));
  MoveArg(1,1,1,4,0);
  MoveArg(1,2,1,4,1);
  Rpush(h_1);
  goto e_7;
  m_1 :
  TestFunFC(p_1,&&o_1,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto a_5;
  a_5 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  Cpush(r_1);
  Rpush(s_1);
  goto f_7;
  s_1 :
  goto q_1;
  r_1 :
  Rpush(u_1);
  goto g_7;
  u_1 :
  goto t_1;
  q_1 :
  Cpop();
  t_1 :
  goto h_1;
  o_1 :
  TestFunFC(v_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto b_5;
  b_5 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto c_5;
  c_5 :
  TestInt(1,4,0,&&w_1);
  Cpush(y_1);
  Rpush(z_1);
  goto h_7;
  z_1 :
  goto x_1;
  y_1 :
  Rpush(b_2);
  goto i_7;
  b_2 :
  goto a_2;
  x_1 :
  Cpop();
  a_2 :
  goto h_1;
  w_1 :
  Rpush(h_1);
  goto i_7;
  h_1 :
  goto g_1;
  i_7 :
  Epushd(2,1);
  Tdupl();
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",MakeInt(0),App0("TNil"))));
  Ccall(_stratego_u_4);
  Tpop();
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_t_4);
  MoveTop(2,1);
  NotNULLd(1,6);
  NotNULLd(2,1);
  NotNULLd(1,7);
  Tset(App2("cons",Egetd(1,6),App2("take",Egetd(2,1),Egetd(1,7))));
  Epopd(2,1);
  Return();
  g_1 :
  goto f_1;
  h_7 :
  Tset(App0("nil"));
  Return();
  f_1 :
  goto e_1;
  g_7 :
  Tdupl();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  Cpush(c_2);
  Tdupl();
  Ccall(_stratego_r_4);
  Cpop();
  Crestore();
  Cjump();
  c_2 :
  Tpop();
  NotNULLd(1,6);
  NotNULLd(1,4);
  NotNULLd(1,7);
  Tset(App2("cons",Egetd(1,6),App2("filter",Egetd(1,4),Egetd(1,7))));
  Return();
  e_1 :
  goto d_1;
  f_7 :
  Tdupl();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  Ccall(_stratego_r_4);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,7);
  Tset(App2("filter",Egetd(1,4),Egetd(1,7)));
  Return();
  d_1 :
  goto c_1;
  e_7 :
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("cons",Egetd(1,1),App1("sieve",App2("filter",Egetd(1,1),Egetd(1,2)))));
  Return();
  c_1 :
  goto b_1;
  c_7 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_q_4);
  MoveTop(2,1);
  NotNULLd(1,4);
  NotNULLd(2,1);
  Tset(App2("cons",Egetd(1,4),App1("from",Egetd(2,1))));
  Epopd(2,1);
  Return();
  b_1 :
  goto a_1;
  b_7 :
  Tset(App1("sieve",App1("from",MakeInt(2))));
  Return();
  a_1 :
  Rpush(d_2);
  goto a_7;
  d_2 :
  Epopd(1,7);
  goto y_0;
  z_0 :
  goto e_2;
  y_0 :
  Cpop();
  e_2 :
  Return();
  p_0 :
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_j_4);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto f_5;
  f_5 :
  TestFunFC(o_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto g_5;
  g_5 :
  TestFunFC(o_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto h_5;
  h_5 :
  TestFunFC(h_2,&&fail,Egetd(0,6));
  Rpush(g_2);
  goto l_7;
  g_2 :
  goto f_2;
  l_7 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  f_2 :
  Ccall(_stratego_k_4);
  Ccall(_stratego_n_4);
  Epopd(0,6);
  goto l_0;
  n_0 :
  Ccall(_stratego_o_4);
  goto i_2;
  l_0 :
  Cpop();
  i_2 :
ENDPROC

PROC(_stratego_a_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_7;
  n_7 :
  TestFunFC(l_2,&&fail,Egetd(0,1));
  Rpush(k_2);
  goto p_7;
  k_2 :
  goto j_2;
  p_7 :
  Return();
  j_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_4)
  Epushd(0,5);
  MoveTop(0,3);
  goto d_10;
  d_10 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto e_10;
  e_10 :
  TestFunFC(a_0,&&d_3,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(f_3);
  Rpush(g_3);
  goto b_14;
  g_3 :
  goto e_3;
  f_3 :
  Ccontinue(h_3);
  Rpush(i_3);
  goto e_14;
  i_3 :
  goto e_3;
  h_3 :
  Ccontinue(j_3);
  Rpush(k_3);
  goto h_14;
  k_3 :
  goto e_3;
  j_3 :
  Ccontinue(l_3);
  Rpush(m_3);
  goto k_14;
  m_3 :
  goto e_3;
  l_3 :
  Ccontinue(n_3);
  Rpush(o_3);
  goto n_14;
  o_3 :
  goto e_3;
  n_3 :
  Ccontinue(p_3);
  Rpush(q_3);
  goto q_14;
  q_3 :
  goto e_3;
  p_3 :
  Ccontinue(r_3);
  Rpush(s_3);
  goto u_14;
  s_3 :
  goto e_3;
  r_3 :
  Ccontinue(t_3);
  Rpush(u_3);
  goto y_14;
  u_3 :
  goto e_3;
  t_3 :
  Ccontinue(v_3);
  Rpush(w_3);
  goto c_15;
  w_3 :
  goto e_3;
  v_3 :
  Ccontinue(x_3);
  Rpush(y_3);
  goto g_15;
  y_3 :
  goto e_3;
  x_3 :
  Ccontinue(z_3);
  Rpush(v_4);
  goto k_15;
  v_4 :
  goto e_3;
  z_3 :
  Ccontinue(w_4);
  Rpush(x_4);
  goto n_15;
  x_4 :
  goto e_3;
  w_4 :
  Ccontinue(d_5);
  Rpush(e_5);
  goto q_15;
  e_5 :
  goto e_3;
  d_5 :
  Ccontinue(j_5);
  Rpush(n_5);
  goto t_15;
  n_5 :
  goto e_3;
  j_5 :
  Rpush(w_5);
  goto w_15;
  w_5 :
  goto o_5;
  e_3 :
  Cpop();
  o_5 :
  goto c_3;
  d_3 :
  Cpush(z_5);
  Rpush(a_6);
  goto b_14;
  a_6 :
  goto y_5;
  z_5 :
  Ccontinue(b_6);
  Rpush(c_6);
  goto e_14;
  c_6 :
  goto y_5;
  b_6 :
  Ccontinue(d_6);
  Rpush(e_6);
  goto h_14;
  e_6 :
  goto y_5;
  d_6 :
  Ccontinue(f_6);
  Rpush(g_6);
  goto k_14;
  g_6 :
  goto y_5;
  f_6 :
  Ccontinue(h_6);
  Rpush(i_6);
  goto n_14;
  i_6 :
  goto y_5;
  h_6 :
  Ccontinue(j_6);
  Rpush(k_6);
  goto k_15;
  k_6 :
  goto y_5;
  j_6 :
  Ccontinue(l_6);
  Rpush(n_6);
  goto n_15;
  n_6 :
  goto y_5;
  l_6 :
  Ccontinue(v_6);
  Rpush(w_6);
  goto q_15;
  w_6 :
  goto y_5;
  v_6 :
  Ccontinue(x_6);
  Rpush(d_7);
  goto t_15;
  d_7 :
  goto y_5;
  x_6 :
  Rpush(k_7);
  goto w_15;
  k_7 :
  goto j_7;
  y_5 :
  Cpop();
  j_7 :
  goto c_3;
  c_3 :
  goto b_3;
  w_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_10;
  b_10 :
  TestStr(1,1,"-?",&&fail);
  Rpush(q_7);
  goto x_15;
  q_7 :
  goto m_7;
  x_15 :
  Return();
  m_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  b_3 :
  goto a_3;
  t_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_9;
  y_9 :
  TestStr(1,1,"-h",&&fail);
  Rpush(s_7);
  goto u_15;
  s_7 :
  goto r_7;
  u_15 :
  Return();
  r_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  a_3 :
  goto z_2;
  q_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_9;
  v_9 :
  TestStr(1,1,"--help",&&fail);
  Rpush(u_7);
  goto r_15;
  u_7 :
  goto t_7;
  r_15 :
  Return();
  t_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  z_2 :
  goto y_2;
  n_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_9;
  s_9 :
  TestStr(1,1,"-s",&&fail);
  Rpush(w_7);
  goto o_15;
  w_7 :
  goto v_7;
  o_15 :
  Return();
  v_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  y_2 :
  goto x_2;
  k_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_9;
  p_9 :
  TestStr(1,1,"-b",&&fail);
  Rpush(y_7);
  goto l_15;
  y_7 :
  goto x_7;
  l_15 :
  Return();
  x_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  x_2 :
  goto w_2;
  g_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_9;
  l_9 :
  TestStr(1,1,"--output",&&fail);
  Rpush(a_8);
  goto h_15;
  a_8 :
  goto z_7;
  h_15 :
  Return();
  z_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  w_2 :
  goto v_2;
  c_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_9;
  h_9 :
  TestStr(1,1,"-o",&&fail);
  Rpush(c_8);
  goto d_15;
  c_8 :
  goto b_8;
  d_15 :
  Return();
  b_8 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  v_2 :
  goto u_2;
  y_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_9;
  d_9 :
  TestStr(1,1,"--input",&&fail);
  Rpush(e_8);
  goto z_14;
  e_8 :
  goto d_8;
  z_14 :
  Return();
  d_8 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  u_2 :
  goto t_2;
  u_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_8;
  z_8 :
  TestStr(1,1,"-i",&&fail);
  Rpush(h_8);
  goto v_14;
  h_8 :
  goto f_8;
  v_14 :
  Return();
  f_8 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  t_2 :
  goto s_2;
  q_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_8;
  v_8 :
  TestStr(1,1,"@version",&&fail);
  Rpush(k_8);
  goto r_14;
  k_8 :
  goto i_8;
  r_14 :
  Return();
  i_8 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  s_2 :
  goto r_2;
  n_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_8;
  s_8 :
  TestStr(1,1,"--version",&&fail);
  Rpush(n_8);
  goto o_14;
  n_8 :
  goto l_8;
  o_14 :
  Return();
  l_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  r_2 :
  goto q_2;
  k_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_8;
  p_8 :
  TestStr(1,1,"-v",&&fail);
  Rpush(q_8);
  goto l_14;
  q_8 :
  goto o_8;
  l_14 :
  Return();
  o_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  q_2 :
  goto p_2;
  h_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_8;
  m_8 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(t_8);
  goto i_14;
  t_8 :
  goto r_8;
  i_14 :
  Return();
  r_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  p_2 :
  goto n_2;
  e_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_8;
  j_8 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(w_8);
  goto f_14;
  w_8 :
  goto u_8;
  f_14 :
  Return();
  u_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  n_2 :
  goto m_2;
  b_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_8;
  g_8 :
  TestStr(1,1,"-S",&&fail);
  Rpush(y_8);
  goto c_14;
  y_8 :
  goto x_8;
  c_14 :
  Return();
  x_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  m_2 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_c_4)
  Tdupl();
  a_9 :
  TestFunTop(a_0);
  Cpush(b_9);
  Arg(0);
  Cpush(f_9);
  Ccall(_stratego_d_4);
  goto e_9;
  f_9 :
  Epushd(0,2);
  MoveTop(0,1);
  goto a_16;
  a_16 :
  TestFunFC(k_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(j_9);
  goto e_16;
  j_9 :
  goto i_9;
  e_16 :
  Return();
  i_9 :
  Epopd(0,2);
  goto g_9;
  e_9 :
  Cpop();
  g_9 :
  Tpop();
  Cpop();
  goto c_9;
  b_9 :
  Arg(1);
  Tdrop();
  goto a_9;
  c_9 :
  Tpop();
  Ccall(_stratego_e_4);
ENDPROC

PROC(_stratego_d_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_16;
  g_16 :
  TestFunFC(o_9,&&fail,Egetd(0,1));
  Rpush(n_9);
  goto i_16;
  n_9 :
  goto m_9;
  i_16 :
  Return();
  m_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_4)
  Epushd(0,1);
  Tdupl();
  Rpush(q_9);
  r_16 :
  Cpush(t_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_16;
  k_16 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_16;
  l_16 :
  TestFunFC(x_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(w_9);
  goto s_16;
  w_9 :
  goto u_9;
  s_16 :
  Move(0,1,1,3);
  Return();
  u_9 :
  Epopd(1,4);
  goto r_9;
  t_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_10);
  goto r_16;
  a_10 :
  AllBuild();
  goto z_9;
  r_9 :
  Cpop();
  z_9 :
  Return();
  q_9 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_f_4);
  Tset(MakeInt(1));
  Ccall(_stratego_g_4);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_g_4)
  _ST_exit();
ENDPROC

PROC(_stratego_h_4)
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
  Ccall(_stratego_i_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_i_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_j_4)
  _ST_dtime();
ENDPROC

PROC(_stratego_k_4)
  Epushd(0,1);
  Tdupl();
  TestFunTop(o_0);
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
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  AllBuild();
  Cpush(l_11);
  TestFunTop(o_0);
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
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_4);
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  AllBuild();
  goto k_11;
  l_11 :
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_4);
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  AllBuild();
  goto w_11;
  k_11 :
  Cpop();
  w_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_m_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_n_4)
  Epushd(0,2);
  Tdupl();
  Cpush(y_11);
  TestFunTop(o_0);
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
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  AllBuild();
  TestFunTop(o_0);
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
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  AllBuild();
  TestFunTop(o_0);
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
  TestFunFC(x_9,&&fail,Egetd(1,2));
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
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_p_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_f_4);
  goto x_11;
  y_11 :
  goto b_13;
  x_11 :
  Cpop();
  b_13 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_g_4);
  Epopd(0,2);
ENDPROC

PROC(_stratego_o_4)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_f_4);
  Tset(MakeInt(1));
  Ccall(_stratego_g_4);
ENDPROC

PROC(_stratego_p_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_20;
  c_20 :
  TestFunFC(h_2,&&fail,Egetd(0,1));
  Rpush(d_13);
  goto e_20;
  d_13 :
  goto c_13;
  e_20 :
  Return();
  c_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_4)
  _ST_add();
ENDPROC

PROC(_stratego_r_4)
  Epushd(0,5);
  MoveTop(0,1);
  goto i_20;
  i_20 :
  TestFunFC(o_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto j_20;
  j_20 :
  TestFunFC(o_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto k_20;
  k_20 :
  TestFunFC(h_2,&&fail,Egetd(0,5));
  Rpush(g_13);
  goto t_20;
  g_13 :
  goto f_13;
  t_20 :
  Epushd(1,1);
  NotNULLd(0,4);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",Egetd(0,2),App0("TNil"))));
  Ccall(_stratego_s_4);
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

PROC(_stratego_s_4)
  _ST_mod();
ENDPROC

PROC(_stratego_t_4)
  _ST_minus();
ENDPROC

PROC(_stratego_u_4)
  _ST_gt();
ENDPROC

DOIT

