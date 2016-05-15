#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,r_28);
VARDECL(AFun,m_28);
VARDECL(AFun,p_18);
VARDECL(AFun,k_18);
VARDECL(AFun,n_17);
VARDECL(AFun,n_13);
VARDECL(AFun,m_13);
VARDECL(AFun,j_12);
VARDECL(AFun,i_12);
VARDECL(AFun,h_12);
VARDECL(AFun,o_10);
VARDECL(AFun,z_8);
VARDECL(AFun,i_8);
VARDECL(AFun,w_7);
VARDECL(AFun,j_7);
VARDECL(AFun,u_6);
VARDECL(AFun,i_6);
VARDECL(AFun,z_5);
VARDECL(AFun,w_5);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,p_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_y_28);
PROCDECL(_stratego_z_28);
PROCDECL(_stratego_a_29);
PROCDECL(_stratego_b_29);
PROCDECL(_stratego_c_29);
PROCDECL(_stratego_d_29);
PROCDECL(_stratego_e_29);
PROCDECL(_stratego_f_29);
PROCDECL(_stratego_g_29);
PROCDECL(_stratego_h_29);
PROCDECL(_stratego_k_29);
PROCDECL(_stratego_l_29);
PROCDECL(_stratego_m_29);
PROCDECL(_stratego_n_29);
PROCDECL(_stratego_o_29);
PROCDECL(_stratego_p_29);
PROCDECL(_stratego_q_29);
PROCDECL(_stratego_r_29);
PROCDECL(_stratego_s_29);
PROCDECL(_stratego_t_29);
PROCDECL(_stratego_u_29);
PROCDECL(_stratego_v_29);
PROCDECL(_stratego_w_29);
PROCDECL(_stratego_x_29);
PROCDECL(_stratego_f_30);
PROCDECL(_stratego_g_30);
PROCDECL(_stratego_h_30);
PROCDECL(_stratego_i_30);
PROCDECL(_stratego_j_30);
PROCDECL(_stratego_k_30);
PROCDECL(_stratego_l_30);
PROCDECL(_stratego_m_30);
PROCDECL(_stratego_n_30);
PROCDECL(_stratego_o_30);

PROC(_stratego_init_afuns)
  MOVE(r_28,ATmakeAFun("Rec",2,0));
  MOVE(m_28,ATmakeAFun("Let",2,0));
  MOVE(p_18,ATmakeAFun("Rule",3,0));
  MOVE(k_18,ATmakeAFun("LRule",1,0));
  MOVE(n_17,ATmakeAFun("Var",1,0));
  MOVE(n_13,ATmakeAFun("SVar",1,0));
  MOVE(m_13,ATmakeAFun("Call",2,0));
  MOVE(j_12,ATmakeAFun("Match",1,0));
  MOVE(i_12,ATmakeAFun("Seq",2,0));
  MOVE(h_12,ATmakeAFun("Scope",2,0));
  MOVE(o_10,ATmakeAFun("SDef",3,0));
  MOVE(z_8,ATmakeAFun("Runtime",1,0));
  MOVE(i_8,ATmakeAFun("Silent",0,0));
  MOVE(w_7,ATmakeAFun("Binary",0,0));
  MOVE(j_7,ATmakeAFun("Output",1,0));
  MOVE(u_6,ATmakeAFun("Input",1,0));
  MOVE(i_6,ATmakeAFun("Program",1,0));
  MOVE(z_5,ATmakeAFun("Help",0,0));
  MOVE(w_5,ATmakeAFun("Undefined",1,0));
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(s_0,ATmakeAFun("TNil",0,0));
  MOVE(p_0,ATmakeAFun("TCons",2,0));
  MOVE(a_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_y_28);
ENDPROC

PROC(_stratego_y_28)
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
  y_3 :
  Cpush(e_0);
  Cpush(g_0);
  Ccall(_stratego_z_28);
  goto f_0;
  g_0 :
  Ccall(_stratego_a_29);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_0);
  goto y_3;
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
  goto z_3;
  l_0 :
  goto k_0;
  z_3 :
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
  Cpush(n_0);
  Ccall(_stratego_b_29);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_g_29);
  Tdupl();
  Ccall(_stratego_k_29);
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_29);
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_k_29);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto q_2;
  q_2 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto v_2;
  v_2 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto w_2;
  w_2 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(r_0);
  goto b_4;
  r_0 :
  goto q_0;
  b_4 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  q_0 :
  Ccall(_stratego_l_29);
  Ccall(_stratego_o_29);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_p_29);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_z_28)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_4;
  j_4 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto l_4;
  v_0 :
  goto u_0;
  l_4 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_29)
  Epushd(0,5);
  MoveTop(0,3);
  goto r_8;
  r_8 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto s_8;
  s_8 :
  TestFunFC(a_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto d_15;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto g_15;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto j_15;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto m_15;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto p_15;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto s_15;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto w_15;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto c_16;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto r_16;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto v_16;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto b_17;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto e_17;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto j_17;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(r_2);
  goto p_17;
  r_2 :
  goto o_1;
  p_2 :
  Rpush(t_2);
  goto s_17;
  t_2 :
  goto s_2;
  o_1 :
  Cpop();
  s_2 :
  goto m_1;
  n_1 :
  Cpush(y_2);
  Rpush(z_2);
  goto d_15;
  z_2 :
  goto u_2;
  y_2 :
  Ccontinue(a_3);
  Rpush(b_3);
  goto g_15;
  b_3 :
  goto u_2;
  a_3 :
  Ccontinue(c_3);
  Rpush(d_3);
  goto j_15;
  d_3 :
  goto u_2;
  c_3 :
  Ccontinue(e_3);
  Rpush(i_3);
  goto m_15;
  i_3 :
  goto u_2;
  e_3 :
  Ccontinue(j_3);
  Rpush(q_3);
  goto p_15;
  q_3 :
  goto u_2;
  j_3 :
  Ccontinue(r_3);
  Rpush(s_3);
  goto b_17;
  s_3 :
  goto u_2;
  r_3 :
  Ccontinue(u_3);
  Rpush(v_3);
  goto e_17;
  v_3 :
  goto u_2;
  u_3 :
  Ccontinue(w_3);
  Rpush(x_3);
  goto j_17;
  x_3 :
  goto u_2;
  w_3 :
  Ccontinue(a_4);
  Rpush(c_4);
  goto p_17;
  c_4 :
  goto u_2;
  a_4 :
  Rpush(e_4);
  goto s_17;
  e_4 :
  goto d_4;
  u_2 :
  Cpop();
  d_4 :
  goto m_1;
  m_1 :
  goto l_1;
  s_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_8;
  p_8 :
  TestStr(1,1,"-?",&&fail);
  Rpush(g_4);
  goto w_17;
  g_4 :
  goto f_4;
  w_17 :
  Return();
  f_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  p_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_8;
  m_8 :
  TestStr(1,1,"-h",&&fail);
  Rpush(i_4);
  goto q_17;
  i_4 :
  goto h_4;
  q_17 :
  Return();
  h_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  j_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_7;
  q_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(n_4);
  goto k_17;
  n_4 :
  goto m_4;
  k_17 :
  Return();
  m_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  e_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_7;
  n_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(p_4);
  goto f_17;
  p_4 :
  goto o_4;
  f_17 :
  Return();
  o_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  b_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_7;
  i_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(r_4);
  goto c_17;
  r_4 :
  goto q_4;
  c_17 :
  Return();
  q_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  v_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_7;
  d_7 :
  TestStr(1,1,"--output",&&fail);
  Rpush(t_4);
  goto w_16;
  t_4 :
  goto s_4;
  w_16 :
  Return();
  s_4 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  g_1 :
  goto f_1;
  r_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_6;
  z_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_4);
  goto s_16;
  v_4 :
  goto u_4;
  s_16 :
  Return();
  u_4 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  f_1 :
  goto e_1;
  c_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_6;
  v_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_4);
  goto d_16;
  x_4 :
  goto w_4;
  d_16 :
  Return();
  w_4 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  e_1 :
  goto d_1;
  w_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_6;
  q_6 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_4);
  goto x_15;
  z_4 :
  goto y_4;
  x_15 :
  Return();
  y_4 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  d_1 :
  goto c_1;
  s_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_6;
  k_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_5);
  goto t_15;
  b_5 :
  goto a_5;
  t_15 :
  Return();
  a_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  c_1 :
  goto b_1;
  p_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_6;
  h_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_5);
  goto q_15;
  d_5 :
  goto c_5;
  q_15 :
  Return();
  c_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  m_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_6;
  e_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_5);
  goto n_15;
  f_5 :
  goto e_5;
  n_15 :
  Return();
  e_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  j_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_6;
  b_6 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_5);
  goto k_15;
  h_5 :
  goto g_5;
  k_15 :
  Return();
  g_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  g_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_5;
  u_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(j_5);
  goto h_15;
  j_5 :
  goto i_5;
  h_15 :
  Return();
  i_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  d_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_5;
  q_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(l_5);
  goto e_15;
  l_5 :
  goto k_5;
  e_15 :
  Return();
  k_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_b_29)
  Tdupl();
  m_5 :
  TestFunTop(a_0);
  Cpush(n_5);
  Arg(0);
  Cpush(r_5);
  Ccall(_stratego_c_29);
  goto p_5;
  r_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto f_18;
  f_18 :
  TestFunFC(w_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(v_5);
  goto o_18;
  v_5 :
  goto t_5;
  o_18 :
  Return();
  t_5 :
  Epopd(0,2);
  goto s_5;
  p_5 :
  Cpop();
  s_5 :
  Tpop();
  Cpop();
  goto o_5;
  n_5 :
  Arg(1);
  Tdrop();
  goto m_5;
  o_5 :
  Tpop();
  Ccall(_stratego_d_29);
ENDPROC

PROC(_stratego_c_29)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_18;
  q_18 :
  TestFunFC(z_5,&&fail,Egetd(0,1));
  Rpush(y_5);
  goto s_18;
  y_5 :
  goto x_5;
  s_18 :
  Return();
  x_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_29)
  Epushd(0,1);
  Tdupl();
  Rpush(a_6);
  i_19 :
  Cpush(d_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto v_18;
  v_18 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto w_18;
  w_18 :
  TestFunFC(i_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_6);
  goto j_19;
  g_6 :
  goto f_6;
  j_19 :
  Move(0,1,1,3);
  Return();
  f_6 :
  Epopd(1,4);
  goto c_6;
  d_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_6);
  goto i_19;
  l_6 :
  AllBuild();
  goto j_6;
  c_6 :
  Cpop();
  j_6 :
  Return();
  a_6 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_e_29);
  Tset(MakeInt(1));
  Ccall(_stratego_f_29);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_29)
  _ST_printnl();
ENDPROC

PROC(_stratego_f_29)
  _ST_exit();
ENDPROC

PROC(_stratego_g_29)
  Epushd(0,3);
  Tdupl();
  Cpush(n_6);
  Rpush(o_6);
  v_20 :
  Cpush(r_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto m_19;
  m_19 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_20;
  b_20 :
  TestFunFC(u_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_6);
  goto w_20;
  t_6 :
  goto s_6;
  w_20 :
  Move(0,1,1,3);
  Return();
  s_6 :
  Epopd(1,4);
  goto p_6;
  r_6 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_6);
  goto v_20;
  x_6 :
  AllBuild();
  goto w_6;
  p_6 :
  Cpop();
  w_6 :
  Return();
  o_6 :
  goto m_6;
  n_6 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto y_6;
  m_6 :
  Cpop();
  y_6 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_h_29);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_h_29)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_k_29)
  _ST_dtime();
ENDPROC

PROC(_stratego_l_29)
  Epushd(0,1);
  Tdupl();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(b_7);
  Rpush(c_7);
  a_22 :
  Cpush(f_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_21;
  c_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_21;
  d_21 :
  TestFunFC(j_7,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_7);
  goto b_22;
  h_7 :
  goto g_7;
  b_22 :
  Move(0,1,1,3);
  Return();
  g_7 :
  Epopd(1,4);
  goto e_7;
  f_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_7);
  goto a_22;
  l_7 :
  AllBuild();
  goto k_7;
  e_7 :
  Cpop();
  k_7 :
  Return();
  c_7 :
  goto a_7;
  b_7 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto m_7;
  a_7 :
  Cpop();
  m_7 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  Cpush(p_7);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(r_7);
  g_22 :
  Cpush(t_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto j_21;
  j_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_21;
  k_21 :
  TestFunFC(w_7,&&fail,Egetd(1,2));
  Rpush(v_7);
  goto h_22;
  v_7 :
  goto u_7;
  h_22 :
  Return();
  u_7 :
  Epopd(1,3);
  goto s_7;
  t_7 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_7);
  goto g_22;
  y_7 :
  AllBuild();
  goto x_7;
  s_7 :
  Cpop();
  x_7 :
  Return();
  r_7 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_29);
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  goto o_7;
  p_7 :
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_29);
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  goto z_7;
  o_7 :
  Cpop();
  z_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_29)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_n_29)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_o_29)
  Epushd(0,2);
  Tdupl();
  Cpush(b_8);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(c_8);
  Tdupl();
  Rpush(d_8);
  e_23 :
  Cpush(f_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto j_22;
  j_22 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_22;
  k_22 :
  TestFunFC(i_8,&&fail,Egetd(1,2));
  Rpush(h_8);
  goto f_23;
  h_8 :
  goto g_8;
  f_23 :
  Return();
  g_8 :
  Epopd(1,3);
  goto e_8;
  f_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_8);
  goto e_23;
  k_8 :
  AllBuild();
  goto j_8;
  e_8 :
  Cpop();
  j_8 :
  Return();
  d_8 :
  Cpop();
  Crestore();
  Cjump();
  c_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(l_8);
  g_23 :
  Cpush(o_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto m_22;
  m_22 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto n_22;
  n_22 :
  TestFunFC(z_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(y_8);
  goto h_23;
  y_8 :
  goto q_8;
  h_23 :
  Move(0,2,1,3);
  Return();
  q_8 :
  Epopd(1,4);
  goto n_8;
  o_8 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_9);
  goto g_23;
  c_9 :
  AllBuild();
  goto b_9;
  n_8 :
  Cpop();
  b_9 :
  Return();
  l_8 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(d_9);
  i_23 :
  Cpush(f_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto p_22;
  p_22 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto q_22;
  q_22 :
  TestFunFC(i_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_9);
  goto j_23;
  h_9 :
  goto g_9;
  j_23 :
  Move(0,1,1,3);
  Return();
  g_9 :
  Epopd(1,4);
  goto e_9;
  f_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_9);
  goto i_23;
  j_9 :
  AllBuild();
  goto i_9;
  e_9 :
  Cpop();
  i_9 :
  Return();
  d_9 :
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_e_29);
  goto a_8;
  b_8 :
  goto k_9;
  a_8 :
  Cpop();
  k_9 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_f_29);
  Epopd(0,2);
ENDPROC

PROC(_stratego_p_29)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_e_29);
  Tset(MakeInt(1));
  Ccall(_stratego_f_29);
ENDPROC

PROC(_stratego_q_29)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_23;
  l_23 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(m_9);
  goto n_23;
  m_9 :
  goto l_9;
  n_23 :
  Return();
  l_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_29)
  Epushd(0,6);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,7);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(o_9);
  u_31 :
  Cpush(q_9);
  Epushd(2,9);
  MoveTop(2,1);
  goto r_23;
  r_23 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto s_23;
  s_23 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto t_23;
  t_23 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto u_23;
  u_23 :
  TestFunFC(p_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto v_23;
  v_23 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Cpush(w_9);
  Rpush(x_9);
  goto v_31;
  x_9 :
  goto v_9;
  w_9 :
  Rpush(a_10);
  goto w_31;
  a_10 :
  goto y_9;
  v_9 :
  Cpop();
  y_9 :
  goto t_9;
  t_9 :
  goto s_9;
  w_31 :
  NotNULLd(2,4);
  NotNULLd(2,3);
  NotNULLd(2,6);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",App2("Cons",Egetd(2,3),Egetd(2,6)),App2("TCons",Egetd(2,8),App0("TNil")))));
  Return();
  s_9 :
  goto r_9;
  v_31 :
  Tdupl();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Ccall(_stratego_s_29);
  Tpop();
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,6),App2("TCons",App2("Cons",Egetd(2,3),Egetd(2,8)),App0("TNil")))));
  Return();
  r_9 :
  Rpush(b_10);
  goto u_31;
  b_10 :
  Epopd(2,9);
  goto p_9;
  q_9 :
  goto c_10;
  p_9 :
  Cpop();
  c_10 :
  Return();
  o_9 :
  MoveTop(1,1);
  goto x_23;
  x_23 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_23;
  y_23 :
  TestFunFC(w_0,&&fail,Egetd(1,2));
  goto z_23;
  z_23 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto a_24;
  a_24 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto b_24;
  b_24 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(d_10);
  goto x_31;
  d_10 :
  goto n_9;
  x_31 :
  Move(0,2,1,4);
  Move(0,3,1,6);
  Return();
  n_9 :
  Epopd(1,7);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Ccall(_stratego_t_29);
  MoveTop(0,4);
  goto e_25;
  e_25 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  Rpush(g_10);
  goto y_31;
  g_10 :
  goto f_10;
  y_31 :
  Epushd(1,3);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(h_10);
  a_32 :
  Cpush(k_10);
  Ccall(_stratego_z_28);
  goto i_10;
  k_10 :
  Ccontinue(l_10);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto j_24;
  j_24 :
  TestFunFC(o_10,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(n_10);
  goto b_32;
  n_10 :
  goto m_10;
  b_32 :
  Epushd(4,1);
  Tdupl();
  Cpush(q_10);
  Tdupl();
  Epushd(5,1);
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  MoveTop(5,1);
  goto h_24;
  h_24 :
  TestStr(5,1,"main",&&fail);
  Rpush(s_10);
  goto c_32;
  s_10 :
  goto r_10;
  c_32 :
  Return();
  r_10 :
  Epopd(5,1);
  Cpop();
  Crestore();
  Cjump();
  q_10 :
  Tpop();
  Tset(App0("TNil"));
  Ccall(_stratego_f_30);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  Epopd(4,1);
  Return();
  m_10 :
  Epopd(3,4);
  OneNextSon();
  Rpush(t_10);
  goto a_32;
  t_10 :
  AllBuild();
  goto i_10;
  l_10 :
  Epushd(3,3);
  MoveTop(3,1);
  goto l_24;
  l_24 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(w_10);
  goto e_32;
  w_10 :
  goto v_10;
  e_32 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(y_10);
  goto a_32;
  y_10 :
  Return();
  v_10 :
  Epopd(3,3);
  goto u_10;
  i_10 :
  Cpop();
  u_10 :
  Return();
  h_10 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(z_10);
  g_32 :
  Cpush(b_11);
  Ccall(_stratego_z_28);
  goto a_11;
  b_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("Call",App1("SVar",Egetd(3,1)),App0("Nil")));
  Epopd(3,1);
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(d_11);
  goto g_32;
  d_11 :
  AllBuild();
  goto c_11;
  a_11 :
  Cpop();
  c_11 :
  Return();
  z_10 :
  MoveTop(2,2);
  Move(1,2,2,2);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(e_11);
  j_32 :
  Cpush(h_11);
  Ccall(_stratego_z_28);
  goto g_11;
  h_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto c_25;
  c_25 :
  TestFunFC(o_10,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(k_11);
  goto k_32;
  k_11 :
  goto j_11;
  k_32 :
  Epushd(4,2);
  Tdupl();
  Cpush(m_11);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(n_11);
  l_32 :
  Cpush(q_11);
  Epushd(5,7);
  MoveTop(5,1);
  goto r_24;
  r_24 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,7,5,1,1);
  goto s_24;
  s_24 :
  TestFunFC(p_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto t_24;
  t_24 :
  TestFunFC(p_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto v_24;
  v_24 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(s_11);
  goto m_32;
  s_11 :
  goto r_11;
  m_32 :
  Move(3,2,5,3);
  Move(4,1,5,5);
  Return();
  r_11 :
  Epopd(5,7);
  goto o_11;
  q_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_11);
  goto l_32;
  u_11 :
  AllBuild();
  goto t_11;
  o_11 :
  Cpop();
  t_11 :
  Return();
  n_11 :
  goto l_11;
  m_11 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Move(4,1,3,2);
  goto v_11;
  l_11 :
  Cpop();
  v_11 :
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,2);
  NotNULLd(3,4);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(3,4),App0("TNil"))));
  Ccall(_stratego_n_30);
  MoveTop(4,2);
  NotNULLd(4,1);
  NotNULLd(3,3);
  NotNULLd(4,2);
  Tset(App3("SDef",Egetd(4,1),Egetd(3,3),Egetd(4,2)));
  Epopd(4,2);
  Return();
  j_11 :
  Epopd(3,4);
  OneNextSon();
  Rpush(w_11);
  goto j_32;
  w_11 :
  AllBuild();
  goto i_11;
  g_11 :
  Cpop();
  i_11 :
  Return();
  e_11 :
  MoveTop(2,3);
  Move(1,3,2,3);
  Epopd(2,3);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Epopd(1,3);
  Return();
  f_10 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_s_29)
  Cpush(y_11);
  Epushd(0,6);
  MoveTop(0,1);
  goto s_32;
  s_32 :
  TestFunFC(o_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,6,0,1,2);
  goto t_32;
  t_32 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(a_12);
  goto d_34;
  a_12 :
  goto z_11;
  d_34 :
  Return();
  z_11 :
  Epopd(0,6);
  goto x_11;
  y_11 :
  Ccontinue(b_12);
  TestFunTop(o_10);
  TravInit();
  OneNextSon();
  Cpush(c_12);
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  goto v_32;
  v_32 :
  TestStr(0,1,"main",&&fail);
  Rpush(e_12);
  goto e_34;
  e_12 :
  goto d_12;
  e_34 :
  Return();
  d_12 :
  Epopd(0,1);
  Cpop();
  Crestore();
  Cjump();
  c_12 :
  OneNextSon();
  Ccall(_stratego_z_28);
  OneNextSon();
  Epushd(0,6);
  MoveTop(0,1);
  goto x_32;
  x_32 :
  TestFunFC(h_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto y_32;
  y_32 :
  TestFunFC(i_12,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto z_32;
  z_32 :
  TestFunFC(j_12,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_12);
  goto f_34;
  g_12 :
  goto f_12;
  f_34 :
  Return();
  f_12 :
  Epopd(0,6);
  AllBuild();
  goto x_11;
  b_12 :
  TestFunTop(o_10);
  TravInit();
  OneNextSon();
  Cpush(l_12);
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  goto b_33;
  b_33 :
  TestStr(0,1,"main",&&fail);
  Rpush(n_12);
  goto g_34;
  n_12 :
  goto m_12;
  g_34 :
  Return();
  m_12 :
  Epopd(0,1);
  Cpop();
  Crestore();
  Cjump();
  l_12 :
  OneNextSon();
  Ccall(_stratego_z_28);
  OneNextSon();
  Epushd(0,8);
  MoveTop(0,1);
  goto d_33;
  d_33 :
  TestFunFC(i_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,8,0,1,1);
  goto e_33;
  e_33 :
  TestFunFC(h_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto f_33;
  f_33 :
  TestFunFC(i_12,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,7,0,4,1);
  goto g_33;
  g_33 :
  TestFunFC(j_12,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(p_12);
  goto h_34;
  p_12 :
  goto o_12;
  h_34 :
  Return();
  o_12 :
  Epopd(0,8);
  AllBuild();
  goto k_12;
  x_11 :
  Cpop();
  k_12 :
ENDPROC

PROC(_stratego_t_29)
  Rpush(q_12);
  h_35 :
  Epushd(0,5);
  MoveTop(0,1);
  goto o_34;
  o_34 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto p_34;
  p_34 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto q_34;
  q_34 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(s_12);
  goto i_35;
  s_12 :
  goto r_12;
  i_35 :
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  AllInit();
  t_12 :
  AllNextSon(&&u_12);
  Epushd(2,4);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(w_12);
  goto h_35;
  w_12 :
  MoveTop(2,2);
  goto m_34;
  m_34 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  Rpush(x_12);
  goto k_35;
  x_12 :
  goto v_12;
  k_35 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Return();
  v_12 :
  Epopd(2,4);
  goto t_12;
  u_12 :
  AllBuild();
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,4),App0("TNil"))));
  Cpush(z_12);
  Rpush(b_13);
  m_35 :
  Ccall(_stratego_u_29);
  Cpush(d_13);
  Rpush(e_13);
  goto m_35;
  e_13 :
  goto c_13;
  d_13 :
  goto f_13;
  c_13 :
  Cpop();
  f_13 :
  Return();
  b_13 :
  Rpush(g_13);
  goto h_35;
  g_13 :
  goto y_12;
  z_12 :
  goto i_13;
  y_12 :
  Cpop();
  i_13 :
  Epopd(1,1);
  Return();
  r_12 :
  Epopd(0,5);
  Return();
  q_12 :
ENDPROC

PROC(_stratego_u_29)
  Epushd(0,8);
  MoveTop(0,1);
  goto f_37;
  f_37 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto g_37;
  g_37 :
  TestFunFC(m_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto h_37;
  h_37 :
  TestFunFC(n_13,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto i_37;
  i_37 :
  TestFunFC(p_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto j_37;
  j_37 :
  TestFunFC(s_0,&&fail,Egetd(0,8));
  Cpush(p_13);
  Rpush(q_13);
  goto o_40;
  q_13 :
  goto o_13;
  p_13 :
  Rpush(s_13);
  goto g_41;
  s_13 :
  goto r_13;
  o_13 :
  Cpop();
  r_13 :
  goto l_13;
  l_13 :
  goto k_13;
  g_41 :
  Epushd(1,1);
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(t_13);
  h_41 :
  Cpush(v_13);
  Epushd(2,9);
  MoveTop(2,1);
  goto z_36;
  z_36 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,9,2,1,1);
  goto a_37;
  a_37 :
  TestFunFC(o_10,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  MoveArg(2,5,2,2,2);
  goto b_37;
  b_37 :
  TestFunFC(w_0,&&fail,Egetd(2,4));
  goto c_37;
  c_37 :
  TestFunFC(m_13,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,8,2,5,1);
  goto d_37;
  d_37 :
  TestFunFC(n_13,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  goto e_37;
  e_37 :
  TestFunFC(w_0,&&fail,Egetd(2,8));
  Rpush(x_13);
  goto i_41;
  x_13 :
  goto w_13;
  i_41 :
  Move(0,4,2,3);
  Move(1,1,2,7);
  Return();
  w_13 :
  Epopd(2,9);
  goto u_13;
  v_13 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_14);
  goto h_41;
  a_14 :
  AllBuild();
  goto z_13;
  u_13 :
  Cpop();
  z_13 :
  Return();
  t_13 :
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset(App2("TCons",App2("Call",App1("SVar",Egetd(1,1)),Egetd(0,5)),App2("TCons",Egetd(0,7),App0("TNil"))));
  Epopd(1,1);
  Return();
  k_13 :
  goto j_13;
  o_40 :
  Epushd(1,11);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Ccall(_stratego_l_30);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Tdupl();
  b_14 :
  TestFunTop(a_0);
  Cpush(c_14);
  Arg(0);
  TestFunTop(o_10);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  Move(0,4,3,1);
  Epopd(3,1);
  OneNextSon();
  Epushd(3,1);
  Tdupl();
  Epushd(4,1);
  Ccall(_stratego_l_30);
  MoveTop(4,1);
  Move(1,1,4,1);
  Epopd(4,1);
  Tpop();
  MoveTop(3,1);
  Move(1,2,3,1);
  Epopd(3,1);
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  Move(1,3,3,1);
  Epopd(3,1);
  AllBuild();
  Tpop();
  Cpop();
  goto e_14;
  c_14 :
  Arg(1);
  Tdrop();
  goto b_14;
  e_14 :
  Tpop();
  Epopd(2,1);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_v_29);
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,7),App0("TNil")))));
  MoveTop(1,5);
  goto u_36;
  u_36 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto v_36;
  v_36 :
  TestFunFC(p_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto w_36;
  w_36 :
  TestFunFC(p_0,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  MoveArg(1,11,1,9,1);
  goto x_36;
  x_36 :
  TestFunFC(s_0,&&fail,Egetd(1,11));
  Rpush(g_14);
  goto w_40;
  g_14 :
  goto f_14;
  w_40 :
  Epushd(2,7);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset(App2("TCons",Egetd(1,6),App2("TCons",Egetd(1,8),App0("TNil"))));
  Rpush(h_14);
  x_40 :
  Epushd(3,9);
  MoveTop(3,1);
  goto g_36;
  g_36 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,5,3,1,1);
  goto h_36;
  h_36 :
  TestFunFC(w_0,&&m_14,Egetd(3,2));
  goto i_36;
  i_36 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,9,3,5,1);
  goto j_36;
  j_36 :
  TestFunFC(w_0,&&fail,Egetd(3,6));
  goto k_36;
  k_36 :
  TestFunFC(s_0,&&fail,Egetd(3,9));
  Rpush(l_14);
  goto y_40;
  m_14 :
  TestFunFC(a_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto l_36;
  l_36 :
  TestFunFC(p_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,9,3,5,1);
  goto m_36;
  m_36 :
  TestFunFC(a_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto n_36;
  n_36 :
  TestFunFC(s_0,&&fail,Egetd(3,9));
  Rpush(l_14);
  goto z_40;
  l_14 :
  goto k_14;
  z_40 :
  Epushd(4,5);
  NotNULLd(3,3);
  NotNULLd(3,7);
  NotNULLd(3,4);
  NotNULLd(3,8);
  Tset(App2("TCons",App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(3,4),App2("TCons",Egetd(3,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Epushd(5,5);
  MoveTop(5,1);
  goto z_35;
  z_35 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto a_36;
  a_36 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto b_36;
  b_36 :
  TestFunFC(s_0,&&fail,Egetd(5,5));
  Rpush(q_14);
  goto a_41;
  q_14 :
  goto p_14;
  a_41 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App3("SDef",Egetd(5,2),App0("Nil"),Egetd(5,4)));
  Return();
  p_14 :
  Epopd(5,5);
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(r_14);
  goto x_40;
  r_14 :
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  MoveTop(4,1);
  goto d_36;
  d_36 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto e_36;
  e_36 :
  TestFunFC(p_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto f_36;
  f_36 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(s_14);
  goto b_41;
  s_14 :
  goto n_14;
  b_41 :
  NotNULLd(4,2);
  NotNULLd(4,4);
  Tset(App2("Cons",Egetd(4,2),Egetd(4,4)));
  Return();
  n_14 :
  Epopd(4,5);
  Return();
  k_14 :
  goto i_14;
  y_40 :
  Tset(App0("Nil"));
  Return();
  i_14 :
  Epopd(3,9);
  Return();
  h_14 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,10);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,10),App0("TNil"))));
  MoveTop(2,2);
  goto q_36;
  q_36 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto r_36;
  r_36 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto s_36;
  s_36 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(u_14);
  goto d_41;
  u_14 :
  goto t_14;
  d_41 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(v_14);
  e_41 :
  Cpush(x_14);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_14);
  goto e_41;
  y_14 :
  AllBuild();
  goto w_14;
  x_14 :
  Ccall(_stratego_z_28);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto z_14;
  w_14 :
  Cpop();
  z_14 :
  Return();
  v_14 :
  Return();
  t_14 :
  MoveTop(2,7);
  NotNULLd(1,4);
  NotNULLd(2,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,7),App0("TNil"))));
  Epopd(2,7);
  Return();
  f_14 :
  Epopd(1,11);
  Return();
  j_13 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_v_29)
  Ccall(_stratego_w_29);
  Ccall(_stratego_k_30);
ENDPROC

PROC(_stratego_w_29)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(a_15);
  s_45 :
  Rpush(b_15);
  t_45 :
  Epushd(1,5);
  MoveTop(1,1);
  goto w_42;
  w_42 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto x_42;
  x_42 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto y_42;
  y_42 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Cpush(r_15);
  Rpush(u_15);
  goto u_45;
  u_15 :
  goto o_15;
  r_15 :
  Ccontinue(v_15);
  Rpush(y_15);
  goto y_45;
  y_15 :
  goto o_15;
  v_15 :
  Rpush(a_16);
  goto n_46;
  a_16 :
  goto z_15;
  o_15 :
  Cpop();
  z_15 :
  goto l_15;
  l_15 :
  goto i_15;
  n_46 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  b_16 :
  AllNextSon(&&e_16);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(f_16);
  goto t_45;
  f_16 :
  Epopd(2,1);
  goto b_16;
  e_16 :
  AllBuild();
  Return();
  i_15 :
  goto f_15;
  y_45 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_g_30);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(g_16);
  a_46 :
  Cpush(i_16);
  Ccall(_stratego_z_28);
  goto h_16;
  i_16 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_30);
  OneNextSon();
  Rpush(k_16);
  goto a_46;
  k_16 :
  AllBuild();
  goto j_16;
  h_16 :
  Cpop();
  j_16 :
  Return();
  g_16 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(l_16);
  c_46 :
  Epushd(4,9);
  MoveTop(4,1);
  goto z_41;
  z_41 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto b_42;
  b_42 :
  TestFunFC(w_0,&&p_16,Egetd(4,2));
  goto c_42;
  c_42 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto d_42;
  d_42 :
  TestFunFC(w_0,&&fail,Egetd(4,6));
  goto e_42;
  e_42 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(o_16);
  goto d_46;
  p_16 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto f_42;
  f_42 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto g_42;
  g_42 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto h_42;
  h_42 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(o_16);
  goto e_46;
  o_16 :
  goto n_16;
  e_46 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(t_16);
  goto c_46;
  t_16 :
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto w_41;
  w_41 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto x_41;
  x_41 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto y_41;
  y_41 :
  TestFunFC(s_0,&&fail,Egetd(5,5));
  Rpush(u_16);
  goto f_46;
  u_16 :
  goto q_16;
  f_46 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  q_16 :
  Epopd(5,5);
  Return();
  n_16 :
  goto m_16;
  d_46 :
  Tset(App0("Nil"));
  Return();
  m_16 :
  Epopd(4,9);
  Return();
  l_16 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto l_42;
  l_42 :
  TestFunFC(p_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto m_42;
  m_42 :
  TestFunFC(p_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto n_42;
  n_42 :
  TestFunFC(s_0,&&fail,Egetd(3,8));
  Rpush(y_16);
  goto h_46;
  y_16 :
  goto x_16;
  h_46 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(z_16);
  i_46 :
  Cpush(d_17);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_17);
  goto i_46;
  g_17 :
  AllBuild();
  goto a_17;
  d_17 :
  Ccall(_stratego_z_28);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto h_17;
  a_17 :
  Cpop();
  h_17 :
  Return();
  z_16 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  x_16 :
  Epopd(3,8);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(h_12);
  TravInit();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto r_42;
  r_42 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto s_42;
  s_42 :
  TestFunFC(p_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto t_42;
  t_42 :
  TestFunFC(p_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto u_42;
  u_42 :
  TestFunFC(s_0,&&fail,Egetd(2,11));
  Rpush(l_17);
  goto l_46;
  l_17 :
  goto i_17;
  l_46 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  TestFunTop(h_12);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(m_17);
  goto s_45;
  m_17 :
  Epopd(3,1);
  AllBuild();
  Return();
  i_17 :
  Epopd(2,11);
  Return();
  f_15 :
  goto c_15;
  u_45 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(n_17);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_x_29);
  Epopd(2,1);
  AllBuild();
  Return();
  c_15 :
  Epopd(1,5);
  Return();
  b_15 :
  Return();
  a_15 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_29)
  Rpush(o_17);
  p_47 :
  Epushd(0,11);
  MoveTop(0,5);
  goto r_46;
  r_46 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto s_46;
  s_46 :
  TestFunFC(p_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto t_46;
  t_46 :
  TestFunFC(a_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto u_46;
  u_46 :
  TestFunFC(s_0,&&fail,Egetd(0,11));
  goto v_46;
  v_46 :
  TestFunFC(p_0,&&v_17,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto w_46;
  w_46 :
  TestFunFC(p_0,&&x_17,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_46;
  x_46 :
  TestFunFC(s_0,&&y_17,Egetd(0,4));
  Cpush(a_18);
  Rpush(b_18);
  goto q_47;
  b_18 :
  goto z_17;
  a_18 :
  Rpush(d_18);
  goto r_47;
  d_18 :
  goto c_18;
  z_17 :
  Cpop();
  c_18 :
  goto u_17;
  y_17 :
  Rpush(u_17);
  goto r_47;
  x_17 :
  Rpush(u_17);
  goto r_47;
  v_17 :
  Rpush(u_17);
  goto r_47;
  u_17 :
  goto t_17;
  r_47 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(e_18);
  goto p_47;
  e_18 :
  Return();
  t_17 :
  goto r_17;
  q_47 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  r_17 :
  Epopd(0,11);
  Return();
  o_17 :
ENDPROC

PROC(_stratego_f_30)
  _ST_new();
ENDPROC

PROC(_stratego_g_30)
  Epushd(0,6);
  MoveTop(0,2);
  goto v_47;
  v_47 :
  TestFunFC(h_12,&&j_18,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(i_18);
  goto i_48;
  j_18 :
  TestFunFC(k_18,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto w_47;
  w_47 :
  TestFunFC(p_18,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(i_18);
  goto j_48;
  i_18 :
  goto h_18;
  j_48 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_h_30);
  Return();
  h_18 :
  goto g_18;
  i_48 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  g_18 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_h_30)
  Rpush(t_18);
  x_52 :
  Cpush(a_19);
  Epushd(0,2);
  MoveTop(0,1);
  goto l_48;
  l_48 :
  TestFunFC(n_17,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(c_19);
  goto y_52;
  c_19 :
  goto b_19;
  y_52 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  b_19 :
  Epopd(0,2);
  goto u_18;
  a_19 :
  Ccontinue(d_19);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_g_30);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(h_12);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(e_19);
  goto x_52;
  e_19 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_i_30);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto s_48;
  s_48 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto t_48;
  t_48 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto u_48;
  u_48 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(k_19);
  goto e_53;
  k_19 :
  goto f_19;
  e_53 :
  Move(0,3,1,4);
  Return();
  f_19 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(l_19);
  f_53 :
  Cpush(o_19);
  Ccall(_stratego_z_28);
  Tset(App0("Nil"));
  goto n_19;
  o_19 :
  Epushd(1,3);
  MoveTop(1,1);
  goto g_49;
  g_49 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(r_19);
  goto g_53;
  r_19 :
  goto q_19;
  g_53 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(s_19);
  goto f_53;
  s_19 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto d_49;
  d_49 :
  TestFunFC(p_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto e_49;
  e_49 :
  TestFunFC(p_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto f_49;
  f_49 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(u_19);
  goto j_53;
  u_19 :
  goto t_19;
  j_53 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(v_19);
  k_53 :
  Cpush(x_19);
  Ccall(_stratego_z_28);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto w_19;
  x_19 :
  Ccontinue(y_19);
  Epushd(3,3);
  MoveTop(3,1);
  goto c_49;
  c_49 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(a_20);
  goto l_53;
  a_20 :
  goto z_19;
  l_53 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(c_20);
  m_53 :
  Cpush(e_20);
  Epushd(4,3);
  MoveTop(4,1);
  goto b_49;
  b_49 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(g_20);
  goto n_53;
  g_20 :
  goto f_20;
  n_53 :
  Move(3,2,4,2);
  Return();
  f_20 :
  Epopd(4,3);
  goto d_20;
  e_20 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_20);
  goto m_53;
  o_20 :
  AllBuild();
  goto m_20;
  d_20 :
  Cpop();
  m_20 :
  Return();
  c_20 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(p_20);
  goto k_53;
  p_20 :
  Return();
  z_19 :
  Epopd(3,3);
  goto w_19;
  y_19 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_20);
  goto k_53;
  r_20 :
  AllBuild();
  goto q_20;
  w_19 :
  Cpop();
  q_20 :
  Return();
  v_19 :
  Return();
  t_19 :
  Epopd(2,6);
  Return();
  q_19 :
  Epopd(1,3);
  goto p_19;
  n_19 :
  Cpop();
  p_19 :
  Return();
  l_19 :
  Epopd(0,3);
  goto u_18;
  d_19 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto j_49;
  j_49 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_49;
  k_49 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto l_49;
  l_49 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(x_20);
  goto p_53;
  x_20 :
  goto u_20;
  p_53 :
  Move(0,2,1,4);
  Return();
  u_20 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(y_20);
  q_53 :
  Cpush(a_21);
  Ccall(_stratego_z_28);
  Tset(App0("Nil"));
  goto z_20;
  a_21 :
  Epushd(1,3);
  MoveTop(1,1);
  goto x_49;
  x_49 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(f_21);
  goto r_53;
  f_21 :
  goto e_21;
  r_53 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(g_21);
  goto x_52;
  g_21 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(h_21);
  goto q_53;
  h_21 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto u_49;
  u_49 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_49;
  v_49 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto w_49;
  w_49 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(q_21);
  goto u_53;
  q_21 :
  goto i_21;
  u_53 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(s_21);
  v_53 :
  Cpush(u_21);
  Ccall(_stratego_z_28);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto t_21;
  u_21 :
  Ccontinue(v_21);
  Epushd(3,3);
  MoveTop(3,1);
  goto t_49;
  t_49 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(c_22);
  goto w_53;
  c_22 :
  goto w_21;
  w_53 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(d_22);
  x_53 :
  Cpush(f_22);
  Epushd(4,3);
  MoveTop(4,1);
  goto s_49;
  s_49 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(l_22);
  goto y_53;
  l_22 :
  goto i_22;
  y_53 :
  Move(3,2,4,2);
  Return();
  i_22 :
  Epopd(4,3);
  goto e_22;
  f_22 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_23);
  goto x_53;
  k_23 :
  AllBuild();
  goto o_22;
  e_22 :
  Cpop();
  o_22 :
  Return();
  d_22 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(o_23);
  goto v_53;
  o_23 :
  Return();
  w_21 :
  Epopd(3,3);
  goto t_21;
  v_21 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_23);
  goto v_53;
  q_23 :
  AllBuild();
  goto p_23;
  t_21 :
  Cpop();
  p_23 :
  Return();
  s_21 :
  Return();
  i_21 :
  Epopd(2,7);
  Return();
  e_21 :
  Epopd(1,3);
  goto b_21;
  z_20 :
  Cpop();
  b_21 :
  Return();
  y_20 :
  Epopd(0,2);
  goto s_20;
  u_18 :
  Cpop();
  s_20 :
  Return();
  t_18 :
ENDPROC

PROC(_stratego_i_30)
  Epushd(0,5);
  MoveTop(0,5);
  goto p_54;
  p_54 :
  TestFunFC(p_0,&&e_24,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto q_54;
  q_54 :
  TestFunFC(p_0,&&f_24,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto r_54;
  r_54 :
  TestFunFC(s_0,&&g_24,Egetd(0,4));
  Cpush(k_24);
  Rpush(m_24);
  goto b_56;
  m_24 :
  goto i_24;
  k_24 :
  Rpush(o_24);
  goto g_56;
  o_24 :
  goto n_24;
  i_24 :
  Cpop();
  n_24 :
  goto d_24;
  g_24 :
  Rpush(d_24);
  goto g_56;
  f_24 :
  Rpush(d_24);
  goto g_56;
  e_24 :
  Rpush(d_24);
  goto g_56;
  d_24 :
  goto c_24;
  g_56 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(p_24);
  h_56 :
  Cpush(u_24);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Cpush(x_24);
  Epushd(1,7);
  MoveTop(1,1);
  goto g_54;
  g_54 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto h_54;
  h_54 :
  TestFunFC(p_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto i_54;
  i_54 :
  TestFunFC(p_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto j_54;
  j_54 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  Rpush(z_24);
  goto i_56;
  z_24 :
  goto y_24;
  i_56 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  y_24 :
  Epopd(1,7);
  goto w_24;
  x_24 :
  Ccall(_stratego_j_30);
  goto a_25;
  w_24 :
  Cpop();
  a_25 :
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  goto q_24;
  u_24 :
  Epushd(1,7);
  MoveTop(1,1);
  goto l_54;
  l_54 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_54;
  m_54 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto n_54;
  n_54 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto o_54;
  o_54 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(f_25);
  goto j_56;
  f_25 :
  goto d_25;
  j_56 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  d_25 :
  Epopd(1,7);
  goto b_25;
  q_24 :
  Cpop();
  b_25 :
  Cpush(h_25);
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_28);
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  goto g_25;
  h_25 :
  Rpush(j_25);
  goto h_56;
  j_25 :
  goto i_25;
  g_25 :
  Cpop();
  i_25 :
  Return();
  p_24 :
  Return();
  c_24 :
  goto w_23;
  b_56 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(k_25);
  c_56 :
  Cpush(m_25);
  Ccall(_stratego_z_28);
  goto l_25;
  m_25 :
  Ccontinue(n_25);
  Epushd(1,3);
  MoveTop(1,1);
  goto e_54;
  e_54 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(p_25);
  goto d_56;
  p_25 :
  goto o_25;
  d_56 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_25);
  e_56 :
  Cpush(t_25);
  Epushd(2,3);
  MoveTop(2,1);
  goto d_54;
  d_54 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(w_25);
  goto f_56;
  w_25 :
  goto u_25;
  f_56 :
  Move(1,2,2,2);
  Return();
  u_25 :
  Epopd(2,3);
  goto r_25;
  t_25 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_26);
  goto e_56;
  b_26 :
  AllBuild();
  goto a_26;
  r_25 :
  Cpop();
  a_26 :
  Return();
  q_25 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(c_26);
  goto c_56;
  c_26 :
  Return();
  o_25 :
  Epopd(1,3);
  goto l_25;
  n_25 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_26);
  goto c_56;
  f_26 :
  AllBuild();
  goto e_26;
  l_25 :
  Cpop();
  e_26 :
  Return();
  k_25 :
  Return();
  w_23 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_30)
  Epushd(0,7);
  MoveTop(0,1);
  goto m_57;
  m_57 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto n_57;
  n_57 :
  TestFunFC(p_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto o_57;
  o_57 :
  TestFunFC(p_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto p_57;
  p_57 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(h_26);
  goto q_59;
  h_26 :
  goto g_26;
  q_59 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto m_56;
  m_56 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto n_56;
  n_56 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_56;
  o_56 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(j_26);
  goto r_59;
  j_26 :
  goto i_26;
  r_59 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  i_26 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto q_56;
  q_56 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto r_56;
  r_56 :
  TestFunFC(p_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_56;
  s_56 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(l_26);
  goto s_59;
  l_26 :
  goto k_26;
  s_59 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  k_26 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(m_26);
  t_59 :
  Epushd(2,9);
  MoveTop(2,1);
  goto z_56;
  z_56 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto a_57;
  a_57 :
  TestFunFC(w_0,&&q_26,Egetd(2,2));
  goto b_57;
  b_57 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto c_57;
  c_57 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto d_57;
  d_57 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(p_26);
  goto u_59;
  q_26 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto e_57;
  e_57 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto f_57;
  f_57 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto g_57;
  g_57 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(p_26);
  goto v_59;
  p_26 :
  goto o_26;
  v_59 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(s_26);
  goto t_59;
  s_26 :
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto w_56;
  w_56 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto x_56;
  x_56 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto y_56;
  y_56 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(t_26);
  goto w_59;
  t_26 :
  goto r_26;
  w_59 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  r_26 :
  Epopd(3,5);
  Return();
  o_26 :
  goto n_26;
  u_59 :
  Tset(App0("Nil"));
  Return();
  n_26 :
  Epopd(2,9);
  Return();
  m_26 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto j_57;
  j_57 :
  TestFunFC(p_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto k_57;
  k_57 :
  TestFunFC(p_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto l_57;
  l_57 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Rpush(v_26);
  goto y_59;
  v_26 :
  goto u_26;
  y_59 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(w_26);
  z_59 :
  Cpush(y_26);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_26);
  goto z_59;
  z_26 :
  AllBuild();
  goto x_26;
  y_26 :
  Ccall(_stratego_z_28);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto a_27;
  x_26 :
  Cpop();
  a_27 :
  Return();
  w_26 :
  Return();
  u_26 :
  Epopd(1,9);
  Return();
  g_26 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_k_30)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(b_27);
  z_65 :
  Rpush(c_27);
  a_66 :
  Epushd(1,5);
  MoveTop(1,1);
  goto x_61;
  x_61 :
  TestFunFC(p_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_61;
  y_61 :
  TestFunFC(p_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_61;
  z_61 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Cpush(o_27);
  Rpush(p_27);
  goto b_66;
  p_27 :
  goto n_27;
  o_27 :
  Ccontinue(q_27);
  Rpush(r_27);
  goto f_66;
  r_27 :
  goto n_27;
  q_27 :
  Rpush(t_27);
  goto c_67;
  t_27 :
  goto s_27;
  n_27 :
  Cpop();
  s_27 :
  goto i_27;
  i_27 :
  goto h_27;
  c_67 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  u_27 :
  AllNextSon(&&z_27);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(a_28);
  goto a_66;
  a_28 :
  Epopd(2,1);
  goto u_27;
  z_27 :
  AllBuild();
  Return();
  h_27 :
  goto e_27;
  f_66 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,15);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,5);
  goto k_60;
  k_60 :
  TestFunFC(m_28,&&l_28,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto l_60;
  l_60 :
  TestFunFC(o_10,&&fail,Egetd(3,6));
  MoveArg(3,1,3,6,0);
  MoveArg(3,2,3,6,1);
  MoveArg(3,3,3,6,2);
  Rpush(k_28);
  goto g_66;
  l_28 :
  TestFunFC(o_10,&&n_28,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  MoveArg(3,4,3,5,2);
  Rpush(k_28);
  goto h_66;
  n_28 :
  TestFunFC(r_28,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(k_28);
  goto i_66;
  k_28 :
  goto d_28;
  i_66 :
  NotNULLd(3,6);
  Tset(App2("Cons",Egetd(3,6),App0("Nil")));
  Return();
  d_28 :
  goto c_28;
  h_66 :
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  Return();
  c_28 :
  goto b_28;
  g_66 :
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Return();
  b_28 :
  MoveTop(3,8);
  Move(2,1,3,8);
  Rpush(s_28);
  k_66 :
  Cpush(u_28);
  Ccall(_stratego_z_28);
  goto t_28;
  u_28 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_30);
  OneNextSon();
  Rpush(w_28);
  goto k_66;
  w_28 :
  AllBuild();
  goto v_28;
  t_28 :
  Cpop();
  v_28 :
  Return();
  s_28 :
  MoveTop(3,9);
  Move(2,2,3,9);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(x_28);
  m_66 :
  Epushd(4,9);
  MoveTop(4,1);
  goto u_60;
  u_60 :
  TestFunFC(p_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto v_60;
  v_60 :
  TestFunFC(w_0,&&s_30,Egetd(4,2));
  goto w_60;
  w_60 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto x_60;
  x_60 :
  TestFunFC(w_0,&&fail,Egetd(4,6));
  goto y_60;
  y_60 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(r_30);
  goto n_66;
  s_30 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto z_60;
  z_60 :
  TestFunFC(p_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto a_61;
  a_61 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto b_61;
  b_61 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(r_30);
  goto o_66;
  r_30 :
  goto d_30;
  o_66 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(b_31);
  goto m_66;
  b_31 :
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto r_60;
  r_60 :
  TestFunFC(p_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto s_60;
  s_60 :
  TestFunFC(p_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto t_60;
  t_60 :
  TestFunFC(s_0,&&fail,Egetd(5,5));
  Rpush(c_31);
  goto p_66;
  c_31 :
  goto v_30;
  p_66 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  v_30 :
  Epopd(5,5);
  Return();
  d_30 :
  goto a_30;
  n_66 :
  Tset(App0("Nil"));
  Return();
  a_30 :
  Epopd(4,9);
  Return();
  x_28 :
  MoveTop(3,10);
  NotNULLd(3,10);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,10),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,11);
  goto f_61;
  f_61 :
  TestFunFC(p_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto g_61;
  g_61 :
  TestFunFC(p_0,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto h_61;
  h_61 :
  TestFunFC(s_0,&&fail,Egetd(3,15));
  Rpush(m_31);
  goto r_66;
  m_31 :
  goto d_31;
  r_66 :
  Epushd(4,1);
  NotNULLd(3,12);
  Tset(Egetd(3,12));
  Rpush(n_31);
  s_66 :
  Cpush(p_31);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_31);
  goto s_66;
  r_31 :
  AllBuild();
  goto o_31;
  p_31 :
  Ccall(_stratego_z_28);
  NotNULLd(3,14);
  Tset(Egetd(3,14));
  goto t_31;
  o_31 :
  Cpop();
  t_31 :
  Return();
  n_31 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  d_31 :
  Epopd(3,15);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(d_32);
  TestFunTop(m_28);
  TravInit();
  OneNextSon();
  TestFunTop(o_10);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto j_61;
  j_61 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(h_32);
  goto u_66;
  h_32 :
  goto f_32;
  u_66 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  f_32 :
  Epopd(3,3);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  goto z_31;
  d_32 :
  Ccontinue(i_32);
  TestFunTop(o_10);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto z_31;
  i_32 :
  TestFunTop(r_28);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto l_61;
  l_61 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(p_32);
  goto v_66;
  p_32 :
  goto o_32;
  v_66 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  o_32 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  goto n_32;
  z_31 :
  Cpop();
  n_32 :
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto s_61;
  s_61 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto t_61;
  t_61 :
  TestFunFC(p_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto u_61;
  u_61 :
  TestFunFC(p_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto v_61;
  v_61 :
  TestFunFC(s_0,&&fail,Egetd(2,11));
  Rpush(r_32);
  goto x_66;
  r_32 :
  goto q_32;
  x_66 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Cpush(w_32);
  TestFunTop(m_28);
  TravInit();
  OneNextSon();
  TestFunTop(o_10);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,8),App0("TNil"))));
  Rpush(a_33);
  goto z_65;
  a_33 :
  Epopd(3,1);
  AllBuild();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(c_33);
  goto z_65;
  c_33 :
  Epopd(3,1);
  AllBuild();
  goto u_32;
  w_32 :
  Ccontinue(i_34);
  TestFunTop(o_10);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(j_34);
  goto z_65;
  j_34 :
  Epopd(3,1);
  AllBuild();
  goto u_32;
  i_34 :
  TestFunTop(r_28);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(l_34);
  goto z_65;
  l_34 :
  Epopd(3,1);
  AllBuild();
  goto k_34;
  u_32 :
  Cpop();
  k_34 :
  Return();
  q_32 :
  Epopd(2,11);
  Return();
  e_27 :
  goto d_27;
  b_66 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(n_13);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_x_29);
  Epopd(2,1);
  AllBuild();
  Return();
  d_27 :
  Epopd(1,5);
  Return();
  c_27 :
  Return();
  b_27 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_30)
  Rpush(n_34);
  o_67 :
  Cpush(x_34);
  Ccall(_stratego_z_28);
  Tset(MakeInt(0));
  goto w_34;
  x_34 :
  Epushd(0,3);
  MoveTop(0,1);
  goto g_67;
  g_67 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(e_35);
  goto p_67;
  e_35 :
  goto d_35;
  p_67 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(g_35);
  goto o_67;
  g_35 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_m_30);
  Epopd(1,1);
  Return();
  d_35 :
  Epopd(0,3);
  goto z_34;
  w_34 :
  Cpop();
  z_34 :
  Return();
  n_34 :
ENDPROC

PROC(_stratego_m_30)
  _ST_add();
ENDPROC

PROC(_stratego_n_30)
  Epushd(0,5);
  Ccall(_stratego_o_30);
  MoveTop(0,1);
  goto z_67;
  z_67 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_68;
  a_68 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto b_68;
  b_68 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(l_35);
  goto u_68;
  l_35 :
  goto j_35;
  u_68 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(n_35);
  v_68 :
  Cpush(p_35);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,4);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto w_67;
  w_67 :
  TestFunFC(m_13,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto x_67;
  x_67 :
  TestFunFC(n_13,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto y_67;
  y_67 :
  TestFunFC(w_0,&&fail,Egetd(2,4));
  Rpush(r_35);
  goto x_68;
  r_35 :
  goto q_35;
  x_68 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Move(1,2,2,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  q_35 :
  Epopd(2,4);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_x_29);
  Epopd(1,3);
  goto o_35;
  p_35 :
  AllInit();
  t_35 :
  AllNextSon(&&u_35);
  Rpush(v_35);
  goto v_68;
  v_35 :
  goto t_35;
  u_35 :
  AllBuild();
  goto s_35;
  o_35 :
  Cpop();
  s_35 :
  Return();
  n_35 :
  Return();
  j_35 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_30)
  Epushd(0,7);
  MoveTop(0,1);
  goto r_69;
  r_69 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto s_69;
  s_69 :
  TestFunFC(p_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto t_69;
  t_69 :
  TestFunFC(s_0,&&c_36,Egetd(0,5));
  Rpush(y_35);
  goto f_71;
  c_36 :
  TestFunFC(p_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto u_69;
  u_69 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(y_35);
  goto g_71;
  y_35 :
  goto x_35;
  g_71 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(o_36);
  h_71 :
  Epushd(2,9);
  MoveTop(2,1);
  goto i_69;
  i_69 :
  TestFunFC(p_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto j_69;
  j_69 :
  TestFunFC(w_0,&&s_37,Egetd(2,2));
  goto k_69;
  k_69 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto l_69;
  l_69 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto m_69;
  m_69 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(y_36);
  goto i_71;
  s_37 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto n_69;
  n_69 :
  TestFunFC(p_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto o_69;
  o_69 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto p_69;
  p_69 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(y_36);
  goto j_71;
  y_36 :
  goto t_36;
  j_71 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(p_0);
  TravInit();
  OneNextSon();
  Rpush(u_37);
  goto h_71;
  u_37 :
  OneNextSon();
  Ccall(_stratego_q_29);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto f_69;
  f_69 :
  TestFunFC(p_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto g_69;
  g_69 :
  TestFunFC(p_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto h_69;
  h_69 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(e_38);
  goto k_71;
  e_38 :
  goto t_37;
  k_71 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  t_37 :
  Epopd(3,5);
  Return();
  t_36 :
  goto p_36;
  i_71 :
  Tset(App0("Nil"));
  Return();
  p_36 :
  Epopd(2,9);
  Return();
  o_36 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  x_35 :
  goto w_35;
  f_71 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  w_35 :
  Epopd(0,7);
ENDPROC

DOIT

