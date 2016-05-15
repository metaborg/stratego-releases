#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT

PROCDECL(_stratego_main);
PROCDECL(_stratego_a_8);
PROCDECL(_stratego_b_8);
PROCDECL(_stratego_c_8);
PROCDECL(_stratego_d_8);
PROCDECL(_stratego_e_8);
PROCDECL(_stratego_f_8);
PROCDECL(_stratego_g_8);
PROCDECL(_stratego_h_8);
PROCDECL(_stratego_i_8);
PROCDECL(_stratego_j_8);
PROCDECL(_stratego_k_8);
PROCDECL(_stratego_l_8);
PROCDECL(_stratego_m_8);
PROCDECL(_stratego_n_8);
PROCDECL(_stratego_o_8);
PROCDECL(_stratego_p_8);
PROCDECL(_stratego_q_8);
PROCDECL(_stratego_r_8);
PROCDECL(_stratego_s_8);
PROCDECL(_stratego_t_8);
PROCDECL(_stratego_v_8);
PROCDECL(_stratego_w_8);

PROC(_stratego_main)
  Ccall(_stratego_a_8);
ENDPROC

PROC(_stratego_a_8)
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(a_0);
  x_23 :
  Cpush(d_0);
  Cpush(f_0);
  Ccall(_stratego_b_8);
  goto e_0;
  f_0 :
  Ccall(_stratego_c_8);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_0);
  goto x_23;
  h_0 :
  AllBuild();
  goto g_0;
  e_0 :
  Cpop();
  g_0 :
  goto b_0;
  d_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFun(0,1,"Cons",2,&&fail);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(o_0);
  goto y_23;
  o_0 :
  goto m_0;
  y_23 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  m_0 :
  Epopd(0,3);
  goto i_0;
  b_0 :
  Cpop();
  i_0 :
  Return();
  a_0 :
  AllBuild();
  Cpush(q_0);
  Ccall(_stratego_d_8);
  goto p_0;
  q_0 :
  Ccontinue(r_0);
  Epushd(0,6);
  Ccall(_stratego_i_8);
  Tdupl();
  Ccall(_stratego_k_8);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,7);
  MoveTop(1,1);
  Ccall(_stratego_r_8);
  MoveTop(1,3);
  Move(1,2,1,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_v_8);
  MoveTop(1,5);
  Move(1,4,1,5);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_w_8);
  MoveTop(1,7);
  Move(1,6,1,7);
  NotNULLd(1,2);
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App3("Size",App1("Constructors",Egetd(1,2)),App1("Rules",Egetd(1,4)),App1("Strategies",Egetd(1,6))));
  Epopd(1,7);
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_k_8);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto j_0;
  j_0 :
  TestFun(0,2,"TCons",2,&&fail);
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto k_0;
  k_0 :
  TestFun(0,4,"TCons",2,&&fail);
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto l_0;
  l_0 :
  TestFun(0,6,"TNil",0,&&fail);
  Rpush(t_0);
  goto e_24;
  t_0 :
  goto s_0;
  e_24 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  s_0 :
  Ccall(_stratego_l_8);
  Ccall(_stratego_o_8);
  Epopd(0,6);
  goto p_0;
  r_0 :
  Ccall(_stratego_p_8);
  goto u_0;
  p_0 :
  Cpop();
  u_0 :
ENDPROC

PROC(_stratego_b_8)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_0;
  n_0 :
  TestFun(0,1,"Nil",0,&&fail);
  Rpush(w_0);
  goto f_24;
  w_0 :
  goto v_0;
  f_24 :
  Return();
  v_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_8)
  Epushd(0,5);
  MoveTop(0,3);
  goto n_7;
  n_7 :
  TestFun(0,3,"Cons",2,&&fail);
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto o_7;
  o_7 :
  TestFun(0,5,"Cons",2,&&n_1);
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto g_24;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto j_24;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto m_24;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto p_24;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto s_24;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto v_24;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto z_24;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto d_25;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto h_25;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto l_25;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto p_25;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto s_25;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto v_25;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto y_25;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto b_26;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto g_24;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(w_2);
  Rpush(x_2);
  goto j_24;
  x_2 :
  goto t_2;
  w_2 :
  Ccontinue(y_2);
  Rpush(z_2);
  goto m_24;
  z_2 :
  goto t_2;
  y_2 :
  Ccontinue(a_3);
  Rpush(b_3);
  goto p_24;
  b_3 :
  goto t_2;
  a_3 :
  Ccontinue(c_3);
  Rpush(d_3);
  goto s_24;
  d_3 :
  goto t_2;
  c_3 :
  Ccontinue(e_3);
  Rpush(f_3);
  goto p_25;
  f_3 :
  goto t_2;
  e_3 :
  Ccontinue(g_3);
  Rpush(h_3);
  goto s_25;
  h_3 :
  goto t_2;
  g_3 :
  Ccontinue(i_3);
  Rpush(j_3);
  goto v_25;
  j_3 :
  goto t_2;
  i_3 :
  Ccontinue(k_3);
  Rpush(l_3);
  goto y_25;
  l_3 :
  goto t_2;
  k_3 :
  Rpush(n_3);
  goto b_26;
  n_3 :
  goto m_3;
  t_2 :
  Cpop();
  m_3 :
  goto m_1;
  m_1 :
  goto l_1;
  b_26 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_7;
  l_7 :
  TestStr(1,1,"-?",&&fail);
  Rpush(p_3);
  goto c_26;
  p_3 :
  goto o_3;
  c_26 :
  Return();
  o_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  y_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_7;
  g_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(r_3);
  goto z_25;
  r_3 :
  goto q_3;
  z_25 :
  Return();
  q_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  v_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_7;
  d_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(t_3);
  goto w_25;
  t_3 :
  goto s_3;
  w_25 :
  Return();
  s_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  s_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_6;
  y_6 :
  TestStr(1,1,"-s",&&fail);
  Rpush(v_3);
  goto t_25;
  v_3 :
  goto u_3;
  t_25 :
  Return();
  u_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  p_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_6;
  r_6 :
  TestStr(1,1,"-b",&&fail);
  Rpush(x_3);
  goto q_25;
  x_3 :
  goto w_3;
  q_25 :
  Return();
  w_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  l_25 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto g_6;
  g_6 :
  TestStr(2,1,"--output",&&fail);
  Rpush(a_4);
  goto m_25;
  a_4 :
  goto y_3;
  m_25 :
  Return();
  y_3 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  g_1 :
  goto f_1;
  h_25 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto c_6;
  c_6 :
  TestStr(2,1,"-o",&&fail);
  Rpush(c_4);
  goto i_25;
  c_4 :
  goto b_4;
  i_25 :
  Return();
  b_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  f_1 :
  goto e_1;
  d_25 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto w_5;
  w_5 :
  TestStr(2,1,"--input",&&fail);
  Rpush(e_4);
  goto e_25;
  e_4 :
  goto d_4;
  e_25 :
  Return();
  d_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  e_1 :
  goto d_1;
  z_24 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto d_5;
  d_5 :
  TestStr(2,1,"-i",&&fail);
  Rpush(h_4);
  goto a_25;
  h_4 :
  goto f_4;
  a_25 :
  Return();
  f_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  d_1 :
  goto c_1;
  v_24 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto z_4;
  z_4 :
  TestStr(2,1,"@version",&&fail);
  Rpush(k_4);
  goto w_24;
  k_4 :
  goto i_4;
  w_24 :
  Return();
  i_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  c_1 :
  goto b_1;
  s_24 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_4;
  u_4 :
  TestStr(1,1,"--version",&&fail);
  Rpush(m_4);
  goto t_24;
  m_4 :
  goto l_4;
  t_24 :
  Return();
  l_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  p_24 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_4;
  r_4 :
  TestStr(1,1,"-v",&&fail);
  Rpush(o_4);
  goto q_24;
  o_4 :
  goto n_4;
  q_24 :
  Return();
  n_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  m_24 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_4;
  j_4 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(q_4);
  goto n_24;
  q_4 :
  goto p_4;
  n_24 :
  Return();
  p_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  j_24 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_4;
  g_4 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(t_4);
  goto k_24;
  t_4 :
  goto s_4;
  k_24 :
  Return();
  s_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  g_24 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_3;
  z_3 :
  TestStr(1,1,"-S",&&fail);
  Rpush(w_4);
  goto h_24;
  w_4 :
  goto v_4;
  h_24 :
  Return();
  v_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_d_8)
  Tdupl();
  x_4 :
  MatchFun("Cons",2);
  Cpush(y_4);
  Arg(0);
  Cpush(c_5);
  Ccall(_stratego_e_8);
  goto b_5;
  c_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto x_8;
  x_8 :
  TestFun(0,1,"Undefined",1,&&fail);
  MoveArg(0,2,0,1,0);
  Rpush(g_5);
  goto f_26;
  g_5 :
  goto f_5;
  f_26 :
  Return();
  f_5 :
  Epopd(0,2);
  goto e_5;
  b_5 :
  Cpop();
  e_5 :
  Tpop();
  Cpop();
  goto a_5;
  y_4 :
  Arg(1);
  Tdrop();
  goto x_4;
  a_5 :
  Tpop();
  Ccall(_stratego_f_8);
ENDPROC

PROC(_stratego_e_8)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_8;
  z_8 :
  TestFun(0,1,"Help",0,&&fail);
  Rpush(i_5);
  goto g_26;
  i_5 :
  goto h_5;
  g_26 :
  Return();
  h_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_8)
  Epushd(0,1);
  Tdupl();
  Rpush(j_5);
  h_26 :
  Cpush(l_5);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_9;
  b_9 :
  TestFun(1,1,"Cons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_9;
  c_9 :
  TestFun(1,2,"Program",1,&&fail);
  MoveArg(1,3,1,2,0);
  Rpush(n_5);
  goto i_26;
  n_5 :
  goto m_5;
  i_26 :
  Move(0,1,1,3);
  Return();
  m_5 :
  Epopd(1,4);
  goto k_5;
  l_5 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_5);
  goto h_26;
  p_5 :
  AllBuild();
  goto o_5;
  k_5 :
  Cpop();
  o_5 :
  Return();
  j_5 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_g_8);
  Tset(MakeInt(1));
  Ccall(_stratego_h_8);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_8)
  _ST_printnl();
ENDPROC

PROC(_stratego_h_8)
  _ST_exit();
ENDPROC

PROC(_stratego_i_8)
  Epushd(0,4);
  Tdupl();
  Cpush(r_5);
  Rpush(s_5);
  j_26 :
  Cpush(u_5);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_9;
  e_9 :
  TestFun(1,1,"Cons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_9;
  f_9 :
  TestFun(1,2,"Input",1,&&fail);
  MoveArg(1,3,1,2,0);
  Rpush(x_5);
  goto k_26;
  x_5 :
  goto v_5;
  k_26 :
  Move(0,1,1,3);
  Return();
  v_5 :
  Epopd(1,4);
  goto t_5;
  u_5 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_5);
  goto j_26;
  z_5 :
  AllBuild();
  goto y_5;
  t_5 :
  Cpop();
  y_5 :
  Return();
  s_5 :
  goto q_5;
  r_5 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto a_6;
  q_5 :
  Cpop();
  a_6 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_j_8);
  MoveTop(0,4);
  Move(0,3,0,4);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,4);
ENDPROC

PROC(_stratego_j_8)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_k_8)
  _ST_dtime();
ENDPROC

PROC(_stratego_l_8)
  Epushd(0,1);
  Tdupl();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(d_6);
  Rpush(e_6);
  p_26 :
  Cpush(h_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto l_9;
  l_9 :
  TestFun(1,1,"Cons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto m_9;
  m_9 :
  TestFun(1,2,"Output",1,&&fail);
  MoveArg(1,3,1,2,0);
  Rpush(j_6);
  goto q_26;
  j_6 :
  goto i_6;
  q_26 :
  Move(0,1,1,3);
  Return();
  i_6 :
  Epopd(1,4);
  goto f_6;
  h_6 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_6);
  goto p_26;
  l_6 :
  AllBuild();
  goto k_6;
  f_6 :
  Cpop();
  k_6 :
  Return();
  e_6 :
  goto b_6;
  d_6 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto m_6;
  b_6 :
  Cpop();
  m_6 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  Cpush(o_6);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(p_6);
  v_26 :
  Cpush(s_6);
  Epushd(1,3);
  MoveTop(1,1);
  goto s_9;
  s_9 :
  TestFun(1,1,"Cons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto t_9;
  t_9 :
  TestFun(1,2,"Binary",0,&&fail);
  Rpush(u_6);
  goto w_26;
  u_6 :
  goto t_6;
  w_26 :
  Return();
  t_6 :
  Epopd(1,3);
  goto q_6;
  s_6 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_6);
  goto v_26;
  w_6 :
  AllBuild();
  goto v_6;
  q_6 :
  Cpop();
  v_6 :
  Return();
  p_6 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_8);
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  goto n_6;
  o_6 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_8);
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  goto x_6;
  n_6 :
  Cpop();
  x_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_8)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_n_8)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_o_8)
  Epushd(0,2);
  Tdupl();
  Cpush(a_7);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(b_7);
  Tdupl();
  Rpush(c_7);
  x_26 :
  Cpush(f_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto v_9;
  v_9 :
  TestFun(1,1,"Cons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_9;
  w_9 :
  TestFun(1,2,"Silent",0,&&fail);
  Rpush(i_7);
  goto y_26;
  i_7 :
  goto h_7;
  y_26 :
  Return();
  h_7 :
  Epopd(1,3);
  goto e_7;
  f_7 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_7);
  goto x_26;
  k_7 :
  AllBuild();
  goto j_7;
  e_7 :
  Cpop();
  j_7 :
  Return();
  c_7 :
  Cpop();
  Crestore();
  Cjump();
  b_7 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(m_7);
  z_26 :
  Cpush(q_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_9;
  y_9 :
  TestFun(1,1,"Cons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_9;
  z_9 :
  TestFun(1,2,"Runtime",1,&&fail);
  MoveArg(1,3,1,2,0);
  Rpush(s_7);
  goto a_27;
  s_7 :
  goto r_7;
  a_27 :
  Move(0,2,1,3);
  Return();
  r_7 :
  Epopd(1,4);
  goto p_7;
  q_7 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_7);
  goto z_26;
  u_7 :
  AllBuild();
  goto t_7;
  p_7 :
  Cpop();
  t_7 :
  Return();
  m_7 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(v_7);
  b_27 :
  Cpush(x_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_10;
  b_10 :
  TestFun(1,1,"Cons",2,&&fail);
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_10;
  c_10 :
  TestFun(1,2,"Program",1,&&fail);
  MoveArg(1,3,1,2,0);
  Rpush(z_7);
  goto c_27;
  z_7 :
  goto y_7;
  c_27 :
  Move(0,1,1,3);
  Return();
  y_7 :
  Epopd(1,4);
  goto w_7;
  x_7 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_8);
  goto b_27;
  y_8 :
  AllBuild();
  goto u_8;
  w_7 :
  Cpop();
  u_8 :
  Return();
  v_7 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_8);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_g_8);
  goto z_6;
  a_7 :
  goto a_9;
  z_6 :
  Cpop();
  a_9 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_h_8);
  Epopd(0,2);
ENDPROC

PROC(_stratego_p_8)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_g_8);
  Tset(MakeInt(1));
  Ccall(_stratego_h_8);
ENDPROC

PROC(_stratego_q_8)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_10;
  e_10 :
  TestFun(0,1,"TNil",0,&&fail);
  Rpush(g_9);
  goto d_27;
  g_9 :
  goto d_9;
  d_27 :
  Return();
  d_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_8)
  Rpush(h_9);
  e_27 :
  Epushd(0,3);
  MoveTop(0,3);
  goto y_10;
  y_10 :
  TestFun(0,3,"OpDecl",2,&&n_9);
  MoveArg(0,1,0,3,0);
  MoveArg(0,2,0,3,1);
  Cpush(p_9);
  Rpush(q_9);
  goto f_27;
  q_9 :
  goto o_9;
  p_9 :
  Rpush(u_9);
  goto h_27;
  u_9 :
  goto r_9;
  o_9 :
  Cpop();
  r_9 :
  goto k_9;
  n_9 :
  Rpush(k_9);
  goto h_27;
  k_9 :
  goto j_9;
  h_27 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto j_10;
  j_10 :
  TestFun(2,1,"TCons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto k_10;
  k_10 :
  TestFun(2,3,"TCons",2,&&fail);
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto l_10;
  l_10 :
  TestFun(2,5,"TNil",0,&&fail);
  Rpush(a_10);
  goto i_27;
  a_10 :
  goto x_9;
  i_27 :
  Move(1,1,2,4);
  Return();
  x_9 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(d_10);
  j_27 :
  Cpush(g_10);
  Ccall(_stratego_b_8);
  Tset(App0("Nil"));
  goto f_10;
  g_10 :
  Epushd(2,3);
  MoveTop(2,1);
  goto x_10;
  x_10 :
  TestFun(2,1,"Cons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(m_10);
  goto k_27;
  m_10 :
  goto i_10;
  k_27 :
  Epushd(3,9);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(n_10);
  goto e_27;
  n_10 :
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(o_10);
  goto j_27;
  o_10 :
  MoveTop(3,4);
  Move(3,3,3,4);
  NotNULLd(3,1);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,3),App0("TNil"))));
  MoveTop(3,5);
  goto u_10;
  u_10 :
  TestFun(3,5,"TCons",2,&&fail);
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto v_10;
  v_10 :
  TestFun(3,7,"TCons",2,&&fail);
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto w_10;
  w_10 :
  TestFun(3,9,"TNil",0,&&fail);
  Rpush(q_10);
  goto n_27;
  q_10 :
  goto p_10;
  n_27 :
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(r_10);
  o_27 :
  Cpush(a_11);
  Ccall(_stratego_b_8);
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  goto z_10;
  a_11 :
  Ccontinue(c_11);
  Epushd(4,3);
  MoveTop(4,1);
  goto t_10;
  t_10 :
  TestFun(4,1,"Cons",2,&&fail);
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(e_11);
  goto p_27;
  e_11 :
  goto d_11;
  p_27 :
  Tdupl();
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  Rpush(f_11);
  q_27 :
  Cpush(k_11);
  Epushd(5,3);
  MoveTop(5,1);
  goto s_10;
  s_10 :
  TestFun(5,1,"Cons",2,&&fail);
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(m_11);
  goto r_27;
  m_11 :
  goto l_11;
  r_27 :
  Move(4,2,5,2);
  Return();
  l_11 :
  Epopd(5,3);
  goto j_11;
  k_11 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_11);
  goto q_27;
  o_11 :
  AllBuild();
  goto n_11;
  j_11 :
  Cpop();
  n_11 :
  Return();
  f_11 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(w_11);
  goto o_27;
  w_11 :
  Return();
  d_11 :
  Epopd(4,3);
  goto z_10;
  c_11 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_11);
  goto o_27;
  y_11 :
  AllBuild();
  goto x_11;
  z_10 :
  Cpop();
  x_11 :
  Return();
  r_10 :
  Return();
  p_10 :
  Epopd(3,9);
  Return();
  i_10 :
  Epopd(2,3);
  goto h_10;
  f_10 :
  Cpop();
  h_10 :
  Return();
  d_10 :
  Epopd(1,1);
  Return();
  j_9 :
  goto i_9;
  f_27 :
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  Return();
  i_9 :
  Epopd(0,3);
  Return();
  h_9 :
  Ccall(_stratego_s_8);
ENDPROC

PROC(_stratego_s_8)
  Rpush(z_11);
  s_27 :
  Cpush(e_12);
  Ccall(_stratego_b_8);
  Tset(MakeInt(0));
  goto d_12;
  e_12 :
  Epushd(0,3);
  MoveTop(0,1);
  goto b_11;
  b_11 :
  TestFun(0,1,"Cons",2,&&fail);
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(h_12);
  goto t_27;
  h_12 :
  goto g_12;
  t_27 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(i_12);
  goto s_27;
  i_12 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_t_8);
  Epopd(1,1);
  Return();
  g_12 :
  Epopd(0,3);
  goto f_12;
  d_12 :
  Cpop();
  f_12 :
  Return();
  z_11 :
ENDPROC

PROC(_stratego_t_8)
  _ST_add();
ENDPROC

PROC(_stratego_v_8)
  Rpush(r_12);
  v_27 :
  Epushd(0,4);
  MoveTop(0,4);
  goto v_11;
  v_11 :
  TestFun(0,4,"RDef",3,&&m_13);
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  MoveArg(0,3,0,4,2);
  Cpush(u_13);
  Rpush(v_13);
  goto w_27;
  v_13 :
  goto n_13;
  u_13 :
  Rpush(y_13);
  goto y_27;
  y_13 :
  goto x_13;
  n_13 :
  Cpop();
  x_13 :
  goto y_12;
  m_13 :
  Rpush(y_12);
  goto y_27;
  y_12 :
  goto w_12;
  y_27 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  _ST_explode_term();
  MoveTop(2,1);
  goto g_11;
  g_11 :
  TestFun(2,1,"TCons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto h_11;
  h_11 :
  TestFun(2,3,"TCons",2,&&fail);
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto i_11;
  i_11 :
  TestFun(2,5,"TNil",0,&&fail);
  Rpush(a_14);
  goto z_27;
  a_14 :
  goto z_13;
  z_27 :
  Move(1,1,2,4);
  Return();
  z_13 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(c_14);
  a_28 :
  Cpush(e_14);
  Ccall(_stratego_b_8);
  Tset(App0("Nil"));
  goto d_14;
  e_14 :
  Epushd(2,3);
  MoveTop(2,1);
  goto u_11;
  u_11 :
  TestFun(2,1,"Cons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(i_14);
  goto b_28;
  i_14 :
  goto h_14;
  b_28 :
  Epushd(3,9);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(j_14);
  goto v_27;
  j_14 :
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(k_14);
  goto a_28;
  k_14 :
  MoveTop(3,4);
  Move(3,3,3,4);
  NotNULLd(3,1);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,3),App0("TNil"))));
  MoveTop(3,5);
  goto r_11;
  r_11 :
  TestFun(3,5,"TCons",2,&&fail);
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto s_11;
  s_11 :
  TestFun(3,7,"TCons",2,&&fail);
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto t_11;
  t_11 :
  TestFun(3,9,"TNil",0,&&fail);
  Rpush(n_14);
  goto e_28;
  n_14 :
  goto m_14;
  e_28 :
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(o_14);
  f_28 :
  Cpush(r_14);
  Ccall(_stratego_b_8);
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  goto p_14;
  r_14 :
  Ccontinue(s_14);
  Epushd(4,3);
  MoveTop(4,1);
  goto q_11;
  q_11 :
  TestFun(4,1,"Cons",2,&&fail);
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(u_14);
  goto g_28;
  u_14 :
  goto t_14;
  g_28 :
  Tdupl();
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  Rpush(v_14);
  h_28 :
  Cpush(z_14);
  Epushd(5,3);
  MoveTop(5,1);
  goto p_11;
  p_11 :
  TestFun(5,1,"Cons",2,&&fail);
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(b_15);
  goto i_28;
  b_15 :
  goto a_15;
  i_28 :
  Move(4,2,5,2);
  Return();
  a_15 :
  Epopd(5,3);
  goto x_14;
  z_14 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_15);
  goto h_28;
  d_15 :
  AllBuild();
  goto c_15;
  x_14 :
  Cpop();
  c_15 :
  Return();
  v_14 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(f_15);
  goto f_28;
  f_15 :
  Return();
  t_14 :
  Epopd(4,3);
  goto p_14;
  s_14 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_15);
  goto f_28;
  i_15 :
  AllBuild();
  goto h_15;
  p_14 :
  Cpop();
  h_15 :
  Return();
  o_14 :
  Return();
  m_14 :
  Epopd(3,9);
  Return();
  h_14 :
  Epopd(2,3);
  goto f_14;
  d_14 :
  Cpop();
  f_14 :
  Return();
  c_14 :
  Epopd(1,1);
  Return();
  w_12 :
  goto v_12;
  w_27 :
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  Return();
  v_12 :
  Epopd(0,4);
  Return();
  r_12 :
  Ccall(_stratego_s_8);
ENDPROC

PROC(_stratego_w_8)
  Rpush(j_15);
  j_28 :
  Epushd(0,4);
  MoveTop(0,4);
  goto p_12;
  p_12 :
  TestFun(0,4,"SDef",3,&&p_15);
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  MoveArg(0,3,0,4,2);
  Cpush(r_15);
  Rpush(s_15);
  goto k_28;
  s_15 :
  goto q_15;
  r_15 :
  Rpush(v_15);
  goto m_28;
  v_15 :
  goto t_15;
  q_15 :
  Cpop();
  t_15 :
  goto n_15;
  p_15 :
  Rpush(n_15);
  goto m_28;
  n_15 :
  goto l_15;
  m_28 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  _ST_explode_term();
  MoveTop(2,1);
  goto a_12;
  a_12 :
  TestFun(2,1,"TCons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto b_12;
  b_12 :
  TestFun(2,3,"TCons",2,&&fail);
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto c_12;
  c_12 :
  TestFun(2,5,"TNil",0,&&fail);
  Rpush(y_15);
  goto n_28;
  y_15 :
  goto x_15;
  n_28 :
  Move(1,1,2,4);
  Return();
  x_15 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(z_15);
  o_28 :
  Cpush(b_16);
  Ccall(_stratego_b_8);
  Tset(App0("Nil"));
  goto a_16;
  b_16 :
  Epushd(2,3);
  MoveTop(2,1);
  goto o_12;
  o_12 :
  TestFun(2,1,"Cons",2,&&fail);
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(g_16);
  goto p_28;
  g_16 :
  goto f_16;
  p_28 :
  Epushd(3,9);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(h_16);
  goto j_28;
  h_16 :
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(i_16);
  goto o_28;
  i_16 :
  MoveTop(3,4);
  Move(3,3,3,4);
  NotNULLd(3,1);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,3),App0("TNil"))));
  MoveTop(3,5);
  goto l_12;
  l_12 :
  TestFun(3,5,"TCons",2,&&fail);
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto m_12;
  m_12 :
  TestFun(3,7,"TCons",2,&&fail);
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto n_12;
  n_12 :
  TestFun(3,9,"TNil",0,&&fail);
  Rpush(k_16);
  goto s_28;
  k_16 :
  goto j_16;
  s_28 :
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(m_16);
  t_28 :
  Cpush(o_16);
  Ccall(_stratego_b_8);
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  goto n_16;
  o_16 :
  Ccontinue(p_16);
  Epushd(4,3);
  MoveTop(4,1);
  goto k_12;
  k_12 :
  TestFun(4,1,"Cons",2,&&fail);
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(r_16);
  goto u_28;
  r_16 :
  goto q_16;
  u_28 :
  Tdupl();
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  Rpush(s_16);
  v_28 :
  Cpush(v_16);
  Epushd(5,3);
  MoveTop(5,1);
  goto j_12;
  j_12 :
  TestFun(5,1,"Cons",2,&&fail);
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(x_16);
  goto w_28;
  x_16 :
  goto w_16;
  w_28 :
  Move(4,2,5,2);
  Return();
  w_16 :
  Epopd(5,3);
  goto u_16;
  v_16 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_17);
  goto v_28;
  a_17 :
  AllBuild();
  goto z_16;
  u_16 :
  Cpop();
  z_16 :
  Return();
  s_16 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(b_17);
  goto t_28;
  b_17 :
  Return();
  q_16 :
  Epopd(4,3);
  goto n_16;
  p_16 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_17);
  goto t_28;
  e_17 :
  AllBuild();
  goto c_17;
  n_16 :
  Cpop();
  c_17 :
  Return();
  m_16 :
  Return();
  j_16 :
  Epopd(3,9);
  Return();
  f_16 :
  Epopd(2,3);
  goto d_16;
  a_16 :
  Cpop();
  d_16 :
  Return();
  z_15 :
  Epopd(1,1);
  Return();
  l_15 :
  goto k_15;
  k_28 :
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Cons",Egetd(1,1),App0("Nil")));
  Epopd(1,1);
  Return();
  k_15 :
  Epopd(0,4);
  Return();
  j_15 :
  Ccall(_stratego_s_8);
ENDPROC
