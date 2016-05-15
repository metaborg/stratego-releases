#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,i_16);
VARDECL(AFun,h_16);
VARDECL(AFun,d_16);
VARDECL(AFun,r_12);
VARDECL(AFun,j_11);
VARDECL(AFun,u_10);
VARDECL(AFun,g_10);
VARDECL(AFun,u_9);
VARDECL(AFun,i_9);
VARDECL(AFun,c_9);
VARDECL(AFun,y_8);
VARDECL(AFun,l_1);
VARDECL(AFun,h_1);
VARDECL(AFun,y_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_u_4);
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

PROC(_stratego_init_afuns)
  MOVE(i_16,ATmakeAFun("Mul",2,0));
  MOVE(h_16,ATmakeAFun("Int",1,0));
  MOVE(d_16,ATmakeAFun("Add",2,0));
  MOVE(r_12,ATmakeAFun("Runtime",1,0));
  MOVE(j_11,ATmakeAFun("Silent",0,0));
  MOVE(u_10,ATmakeAFun("Binary",0,0));
  MOVE(g_10,ATmakeAFun("Output",1,0));
  MOVE(u_9,ATmakeAFun("Input",1,0));
  MOVE(i_9,ATmakeAFun("Program",1,0));
  MOVE(c_9,ATmakeAFun("Help",0,0));
  MOVE(y_8,ATmakeAFun("Undefined",1,0));
  MOVE(l_1,ATmakeAFun("Nil",0,0));
  MOVE(h_1,ATmakeAFun("TNil",0,0));
  MOVE(y_0,ATmakeAFun("TCons",2,0));
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
  Rpush(d_0);
  v_3 :
  Cpush(n_0);
  Cpush(p_0);
  Ccall(_stratego_u_4);
  goto o_0;
  p_0 :
  Ccall(_stratego_v_4);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_0);
  goto v_3;
  r_0 :
  AllBuild();
  goto q_0;
  o_0 :
  Cpop();
  q_0 :
  goto j_0;
  n_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(u_0);
  goto b_0;
  u_0 :
  goto t_0;
  b_0 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  t_0 :
  Epopd(0,3);
  goto s_0;
  j_0 :
  Cpop();
  s_0 :
  Return();
  d_0 :
  AllBuild();
  Cpush(w_0);
  Ccall(_stratego_w_4);
  goto v_0;
  w_0 :
  Ccontinue(x_0);
  Epushd(0,6);
  Ccall(_stratego_b_5);
  Tdupl();
  Ccall(_stratego_d_5);
  Tpop();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Rpush(z_0);
  w_3 :
  Cpush(b_1);
  a_1 :
  Ccall(_stratego_k_5);
  Tduplinv();
  goto a_1;
  b_1 :
  AllInit();
  c_1 :
  AllNextSon(&&d_1);
  Rpush(e_1);
  goto w_3;
  e_1 :
  goto c_1;
  d_1 :
  AllBuild();
  Return();
  z_0 :
  OneNextSon();
  Ccall(_stratego_j_5);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_d_5);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto f_0;
  f_0 :
  TestFunFC(y_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto g_0;
  g_0 :
  TestFunFC(y_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto h_0;
  h_0 :
  TestFunFC(h_1,&&fail,Egetd(0,6));
  Rpush(g_1);
  goto e_0;
  g_1 :
  goto f_1;
  e_0 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  f_1 :
  Ccall(_stratego_e_5);
  Ccall(_stratego_h_5);
  Epopd(0,6);
  goto v_0;
  x_0 :
  Ccall(_stratego_i_5);
  goto i_1;
  v_0 :
  Cpop();
  i_1 :
ENDPROC

PROC(_stratego_u_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_3;
  z_3 :
  TestFunFC(l_1,&&fail,Egetd(0,1));
  Rpush(k_1);
  goto y_3;
  k_1 :
  goto j_1;
  y_3 :
  Return();
  j_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_4)
  Epushd(0,5);
  MoveTop(0,3);
  goto s_7;
  s_7 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto t_7;
  t_7 :
  TestFunFC(a_0,&&c_2,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(e_2);
  Rpush(f_2);
  goto i_4;
  f_2 :
  goto d_2;
  e_2 :
  Ccontinue(g_2);
  Rpush(h_2);
  goto j_4;
  h_2 :
  goto d_2;
  g_2 :
  Ccontinue(i_2);
  Rpush(j_2);
  goto k_4;
  j_2 :
  goto d_2;
  i_2 :
  Ccontinue(k_2);
  Rpush(l_2);
  goto l_4;
  l_2 :
  goto d_2;
  k_2 :
  Ccontinue(m_2);
  Rpush(n_2);
  goto q_4;
  n_2 :
  goto d_2;
  m_2 :
  Ccontinue(o_2);
  Rpush(p_2);
  goto r_4;
  p_2 :
  goto d_2;
  o_2 :
  Ccontinue(q_2);
  Rpush(r_2);
  goto l_5;
  r_2 :
  goto d_2;
  q_2 :
  Ccontinue(s_2);
  Rpush(t_2);
  goto m_5;
  t_2 :
  goto d_2;
  s_2 :
  Ccontinue(u_2);
  Rpush(v_2);
  goto n_5;
  v_2 :
  goto d_2;
  u_2 :
  Ccontinue(w_2);
  Rpush(x_2);
  goto o_5;
  x_2 :
  goto d_2;
  w_2 :
  Ccontinue(y_2);
  Rpush(z_2);
  goto p_5;
  z_2 :
  goto d_2;
  y_2 :
  Ccontinue(a_3);
  Rpush(b_3);
  goto q_5;
  b_3 :
  goto d_2;
  a_3 :
  Ccontinue(c_3);
  Rpush(d_3);
  goto r_5;
  d_3 :
  goto d_2;
  c_3 :
  Ccontinue(e_3);
  Rpush(f_3);
  goto s_5;
  f_3 :
  goto d_2;
  e_3 :
  Rpush(i_3);
  goto t_5;
  i_3 :
  goto g_3;
  d_2 :
  Cpop();
  g_3 :
  goto b_2;
  c_2 :
  Cpush(q_3);
  Rpush(r_3);
  goto i_4;
  r_3 :
  goto p_3;
  q_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto j_4;
  t_3 :
  goto p_3;
  s_3 :
  Ccontinue(u_3);
  Rpush(a_4);
  goto k_4;
  a_4 :
  goto p_3;
  u_3 :
  Ccontinue(b_4);
  Rpush(c_4);
  goto l_4;
  c_4 :
  goto p_3;
  b_4 :
  Ccontinue(d_4);
  Rpush(e_4);
  goto q_4;
  e_4 :
  goto p_3;
  d_4 :
  Ccontinue(f_4);
  Rpush(g_4);
  goto p_5;
  g_4 :
  goto p_3;
  f_4 :
  Ccontinue(m_4);
  Rpush(n_4);
  goto q_5;
  n_4 :
  goto p_3;
  m_4 :
  Ccontinue(o_4);
  Rpush(p_4);
  goto r_5;
  p_4 :
  goto p_3;
  o_4 :
  Ccontinue(s_4);
  Rpush(t_4);
  goto s_5;
  t_4 :
  goto p_3;
  s_4 :
  Rpush(z_5);
  goto t_5;
  z_5 :
  goto w_5;
  p_3 :
  Cpop();
  w_5 :
  goto b_2;
  b_2 :
  goto a_2;
  t_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_7;
  q_7 :
  TestStr(1,1,"-?",&&fail);
  Rpush(f_6);
  goto p_7;
  f_6 :
  goto c_6;
  p_7 :
  Return();
  c_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  a_2 :
  goto z_1;
  s_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_7;
  n_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(l_6);
  goto m_7;
  l_6 :
  goto i_6;
  m_7 :
  Return();
  i_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  z_1 :
  goto y_1;
  r_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_7;
  k_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(p_6);
  goto j_7;
  p_6 :
  goto m_6;
  j_7 :
  Return();
  m_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  y_1 :
  goto x_1;
  q_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_7;
  h_7 :
  TestStr(1,1,"-s",&&fail);
  Rpush(t_6);
  goto g_7;
  t_6 :
  goto q_6;
  g_7 :
  Return();
  q_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  x_1 :
  goto w_1;
  p_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_7;
  e_7 :
  TestStr(1,1,"-b",&&fail);
  Rpush(x_6);
  goto d_7;
  x_6 :
  goto u_6;
  d_7 :
  Return();
  u_6 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  w_1 :
  goto v_1;
  o_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_7;
  a_7 :
  TestStr(1,1,"--output",&&fail);
  Rpush(b_7);
  goto z_6;
  b_7 :
  goto y_6;
  z_6 :
  Return();
  y_6 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  v_1 :
  goto u_1;
  n_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_6;
  w_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(f_7);
  goto v_6;
  f_7 :
  goto c_7;
  v_6 :
  Return();
  c_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  u_1 :
  goto t_1;
  m_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_6;
  s_6 :
  TestStr(1,1,"--input",&&fail);
  Rpush(l_7);
  goto r_6;
  l_7 :
  goto i_7;
  r_6 :
  Return();
  i_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  t_1 :
  goto s_1;
  l_5 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_6;
  o_6 :
  TestStr(1,1,"-i",&&fail);
  Rpush(r_7);
  goto n_6;
  r_7 :
  goto o_7;
  n_6 :
  Return();
  o_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  s_1 :
  goto r_1;
  r_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_6;
  k_6 :
  TestStr(1,1,"@version",&&fail);
  Rpush(a_8);
  goto j_6;
  a_8 :
  goto z_7;
  j_6 :
  Return();
  z_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  r_1 :
  goto q_1;
  q_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_6;
  h_6 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_8);
  goto g_6;
  d_8 :
  goto c_8;
  g_6 :
  Return();
  c_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  q_1 :
  goto p_1;
  l_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_6;
  e_6 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_8);
  goto d_6;
  f_8 :
  goto e_8;
  d_6 :
  Return();
  e_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  p_1 :
  goto o_1;
  k_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_6;
  b_6 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(i_8);
  goto a_6;
  i_8 :
  goto h_8;
  a_6 :
  Return();
  h_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  o_1 :
  goto n_1;
  j_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_5;
  y_5 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(k_8);
  goto x_5;
  k_8 :
  goto j_8;
  x_5 :
  Return();
  j_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  n_1 :
  goto m_1;
  i_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_5;
  v_5 :
  TestStr(1,1,"-S",&&fail);
  Rpush(n_8);
  goto u_5;
  n_8 :
  goto m_8;
  u_5 :
  Return();
  m_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  m_1 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_w_4)
  Tdupl();
  o_8 :
  TestFunTop(a_0);
  Cpush(p_8);
  Arg(0);
  Cpush(t_8);
  Ccall(_stratego_x_4);
  goto s_8;
  t_8 :
  Epushd(0,2);
  MoveTop(0,1);
  goto m_11;
  m_11 :
  TestFunFC(y_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(x_8);
  goto l_11;
  x_8 :
  goto w_8;
  l_11 :
  Return();
  w_8 :
  Epopd(0,2);
  goto u_8;
  s_8 :
  Cpop();
  u_8 :
  Tpop();
  Cpop();
  goto r_8;
  p_8 :
  Arg(1);
  Tdrop();
  goto o_8;
  r_8 :
  Tpop();
  Ccall(_stratego_y_4);
ENDPROC

PROC(_stratego_x_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_11;
  r_11 :
  TestFunFC(c_9,&&fail,Egetd(0,1));
  Rpush(a_9);
  goto q_11;
  a_9 :
  goto z_8;
  q_11 :
  Return();
  z_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_4)
  Epushd(0,1);
  Tdupl();
  Rpush(d_9);
  b_12 :
  Cpush(f_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_11;
  u_11 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_11;
  v_11 :
  TestFunFC(i_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_9);
  goto t_11;
  h_9 :
  goto g_9;
  t_11 :
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
  Rpush(l_9);
  goto b_12;
  l_9 :
  AllBuild();
  goto k_9;
  e_9 :
  Cpop();
  k_9 :
  Return();
  d_9 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_z_4);
  Tset(MakeInt(1));
  Ccall(_stratego_a_5);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_a_5)
  _ST_exit();
ENDPROC

PROC(_stratego_b_5)
  Epushd(0,3);
  Tdupl();
  Cpush(n_9);
  Rpush(o_9);
  v_12 :
  Cpush(q_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_12;
  d_12 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_12;
  e_12 :
  TestFunFC(u_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_9);
  goto c_12;
  t_9 :
  goto s_9;
  c_12 :
  Move(0,1,1,3);
  Return();
  s_9 :
  Epopd(1,4);
  goto p_9;
  q_9 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_9);
  goto v_12;
  w_9 :
  AllBuild();
  goto v_9;
  p_9 :
  Cpop();
  v_9 :
  Return();
  o_9 :
  goto m_9;
  n_9 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto x_9;
  m_9 :
  Cpop();
  x_9 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_c_5);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_c_5)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_d_5)
  _ST_dtime();
ENDPROC

PROC(_stratego_e_5)
  Epushd(0,1);
  Tdupl();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Cpush(a_10);
  Rpush(b_10);
  v_13 :
  Cpush(d_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_12;
  x_12 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_12;
  y_12 :
  TestFunFC(g_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_10);
  goto w_12;
  f_10 :
  goto e_10;
  w_12 :
  Move(0,1,1,3);
  Return();
  e_10 :
  Epopd(1,4);
  goto c_10;
  d_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_10);
  goto v_13;
  j_10 :
  AllBuild();
  goto i_10;
  c_10 :
  Cpop();
  i_10 :
  Return();
  b_10 :
  goto y_9;
  a_10 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto k_10;
  y_9 :
  Cpop();
  k_10 :
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_5);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_j_5);
  AllBuild();
  AllBuild();
  Cpush(m_10);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Rpush(n_10);
  w_13 :
  Cpush(q_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto e_13;
  e_13 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_13;
  f_13 :
  TestFunFC(u_10,&&fail,Egetd(1,2));
  Rpush(s_10);
  goto d_13;
  s_10 :
  goto r_10;
  d_13 :
  Return();
  r_10 :
  Epopd(1,3);
  goto p_10;
  q_10 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_10);
  goto w_13;
  w_10 :
  AllBuild();
  goto v_10;
  p_10 :
  Cpop();
  v_10 :
  Return();
  n_10 :
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_5);
  OneNextSon();
  Ccall(_stratego_j_5);
  AllBuild();
  AllBuild();
  goto l_10;
  m_10 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_5);
  OneNextSon();
  Ccall(_stratego_j_5);
  AllBuild();
  AllBuild();
  goto x_10;
  l_10 :
  Cpop();
  x_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_5)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_g_5)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_h_5)
  Epushd(0,2);
  Tdupl();
  Cpush(a_11);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Cpush(b_11);
  Tdupl();
  Rpush(c_11);
  t_14 :
  Cpush(f_11);
  Epushd(1,3);
  MoveTop(1,1);
  goto y_13;
  y_13 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_13;
  z_13 :
  TestFunFC(j_11,&&fail,Egetd(1,2));
  Rpush(h_11);
  goto x_13;
  h_11 :
  goto g_11;
  x_13 :
  Return();
  g_11 :
  Epopd(1,3);
  goto e_11;
  f_11 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_12);
  goto t_14;
  f_12 :
  AllBuild();
  goto k_11;
  e_11 :
  Cpop();
  k_11 :
  Return();
  c_11 :
  Cpop();
  Crestore();
  Cjump();
  b_11 :
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_5);
  AllBuild();
  AllBuild();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Rpush(g_12);
  u_14 :
  Cpush(i_12);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_14;
  b_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_14;
  c_14 :
  TestFunFC(r_12,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(q_12);
  goto a_14;
  q_12 :
  goto o_12;
  a_14 :
  Move(0,2,1,3);
  Return();
  o_12 :
  Epopd(1,4);
  goto h_12;
  i_12 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_12);
  goto u_14;
  u_12 :
  AllBuild();
  goto s_12;
  h_12 :
  Cpop();
  s_12 :
  Return();
  g_12 :
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_5);
  AllBuild();
  AllBuild();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Rpush(z_12);
  v_14 :
  Cpush(b_13);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_14;
  e_14 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_14;
  f_14 :
  TestFunFC(i_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_13);
  goto d_14;
  l_13 :
  goto c_13;
  d_14 :
  Move(0,1,1,3);
  Return();
  c_13 :
  Epopd(1,4);
  goto a_13;
  b_13 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_13);
  goto v_14;
  o_13 :
  AllBuild();
  goto n_13;
  a_13 :
  Cpop();
  n_13 :
  Return();
  z_12 :
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_j_5);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_z_4);
  goto z_10;
  a_11 :
  goto p_13;
  z_10 :
  Cpop();
  p_13 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_a_5);
  Epopd(0,2);
ENDPROC

PROC(_stratego_i_5)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_z_4);
  Tset(MakeInt(1));
  Ccall(_stratego_a_5);
ENDPROC

PROC(_stratego_j_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_14;
  x_14 :
  TestFunFC(h_1,&&fail,Egetd(0,1));
  Rpush(r_13);
  goto w_14;
  r_13 :
  goto q_13;
  w_14 :
  Return();
  q_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_5)
  Cpush(d_15);
  Epushd(0,4);
  MoveTop(0,1);
  goto e_15;
  e_15 :
  TestFunFC(d_16,&&c_16,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto f_15;
  f_15 :
  TestFunFC(h_16,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto g_15;
  g_15 :
  TestStr(0,4,"0",&&fail);
  Rpush(b_16);
  goto z_14;
  c_16 :
  TestFunFC(i_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto k_15;
  k_15 :
  TestFunFC(h_16,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto l_15;
  l_15 :
  TestStr(0,4,"0",&&j_16);
  Rpush(b_16);
  goto a_15;
  j_16 :
  TestStr(0,4,"1",&&fail);
  Rpush(b_16);
  goto b_15;
  b_16 :
  goto j_15;
  b_15 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  j_15 :
  goto i_15;
  a_15 :
  Tset(App1("Int",ATmakeString("0")));
  Return();
  i_15 :
  goto h_15;
  z_14 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  h_15 :
  Epopd(0,4);
  goto c_15;
  d_15 :
  Epushd(0,7);
  MoveTop(0,1);
  goto o_15;
  o_15 :
  TestFunFC(i_16,&&v_16,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(u_16);
  goto m_15;
  v_16 :
  TestFunFC(d_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(u_16);
  goto n_15;
  u_16 :
  goto t_16;
  n_15 :
  NotNULLd(0,3);
  NotNULLd(0,2);
  Tset(App2("Add",Egetd(0,3),Egetd(0,2)));
  Return();
  t_16 :
  goto s_16;
  m_15 :
  NotNULLd(0,3);
  NotNULLd(0,2);
  Tset(App2("Mul",Egetd(0,3),Egetd(0,2)));
  Return();
  s_16 :
  MoveTop(0,4);
  goto s_15;
  s_15 :
  TestFunFC(d_16,&&x_16,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto t_15;
  t_15 :
  TestFunFC(h_16,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto u_15;
  u_15 :
  TestStr(0,7,"0",&&fail);
  Rpush(w_16);
  goto p_15;
  x_16 :
  TestFunFC(i_16,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto v_15;
  v_15 :
  TestFunFC(h_16,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto w_15;
  w_15 :
  TestStr(0,7,"0",&&y_16);
  Rpush(w_16);
  goto q_15;
  y_16 :
  TestStr(0,7,"1",&&fail);
  Rpush(w_16);
  goto r_15;
  w_16 :
  goto r_16;
  r_15 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  r_16 :
  goto q_16;
  q_15 :
  Tset(App1("Int",ATmakeString("0")));
  Return();
  q_16 :
  goto p_16;
  p_15 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  p_16 :
  Epopd(0,7);
  goto k_16;
  c_15 :
  Cpop();
  k_16 :
ENDPROC

DOIT

