#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,v_26);
VARDECL(AFun,t_26);
VARDECL(AFun,v_25);
VARDECL(AFun,m_20);
VARDECL(AFun,f_20);
VARDECL(AFun,w_19);
VARDECL(AFun,d_18);
VARDECL(AFun,n_17);
VARDECL(AFun,r_16);
VARDECL(AFun,z_15);
VARDECL(AFun,s_15);
VARDECL(AFun,e_15);
VARDECL(AFun,u_14);
VARDECL(AFun,q_14);
VARDECL(AFun,l_4);
VARDECL(AFun,f_4);
VARDECL(AFun,j_1);
VARDECL(AFun,u_0);
VARDECL(AFun,m_0);
VARDECL(AFun,g_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_h_33);
PROCDECL(_stratego_i_33);
PROCDECL(_stratego_j_33);
PROCDECL(_stratego_k_33);
PROCDECL(_stratego_l_33);
PROCDECL(_stratego_m_33);
PROCDECL(_stratego_n_33);
PROCDECL(_stratego_o_33);
PROCDECL(_stratego_p_33);
PROCDECL(_stratego_q_33);
PROCDECL(_stratego_r_33);
PROCDECL(_stratego_s_33);
PROCDECL(_stratego_t_33);
PROCDECL(_stratego_u_33);
PROCDECL(_stratego_v_33);
PROCDECL(_stratego_w_33);
PROCDECL(_stratego_x_33);
PROCDECL(_stratego_y_33);
PROCDECL(_stratego_z_33);
PROCDECL(_stratego_a_34);
PROCDECL(_stratego_b_34);
PROCDECL(_stratego_c_34);
PROCDECL(_stratego_d_34);
PROCDECL(_stratego_e_34);
PROCDECL(_stratego_f_34);
PROCDECL(_stratego_g_34);
PROCDECL(_stratego_h_34);
PROCDECL(_stratego_i_34);
PROCDECL(_stratego_j_34);
PROCDECL(_stratego_k_34);
PROCDECL(_stratego_l_34);
PROCDECL(_stratego_m_34);
PROCDECL(_stratego_n_34);
PROCDECL(_stratego_o_34);
PROCDECL(_stratego_p_34);
PROCDECL(_stratego_q_34);

PROC(_stratego_init_afuns)
  MOVE(v_26,ATmakeAFun("CLibDir",1,0));
  MOVE(t_26,ATmakeAFun("Dir",1,0));
  MOVE(v_25,ATmakeAFun("CInclDir",1,0));
  MOVE(m_20,ATmakeAFun("Specification",1,0));
  MOVE(f_20,ATmakeAFun("Main",1,0));
  MOVE(w_19,ATmakeAFun("AST",0,0));
  MOVE(d_18,ATmakeAFun("TNil",0,0));
  MOVE(n_17,ATmakeAFun("Output",1,0));
  MOVE(r_16,ATmakeAFun("ExecDir",1,0));
  MOVE(z_15,ATmakeAFun("InclDir",1,0));
  MOVE(s_15,ATmakeAFun("Verbose",0,0));
  MOVE(e_15,ATmakeAFun("DeclVersion",1,0));
  MOVE(u_14,ATmakeAFun("Version",0,0));
  MOVE(q_14,ATmakeAFun("Help",0,0));
  MOVE(l_4,ATmakeAFun("Nil",0,0));
  MOVE(f_4,ATmakeAFun("Input",1,0));
  MOVE(j_1,ATmakeAFun("NORM",0,0));
  MOVE(u_0,ATmakeAFun("Undefined",1,0));
  MOVE(m_0,ATmakeAFun("Cons",2,0));
  MOVE(g_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_h_33);
ENDPROC

PROC(_stratego_h_33)
  Cpush(b_0);
  Ccall(_stratego_i_33);
  goto a_0;
  b_0 :
  Ccall(_stratego_r_33);
  Tset(MakeInt(1));
  Ccall(_stratego_q_34);
  goto d_0;
  a_0 :
  Cpop();
  d_0 :
  Cpush(f_0);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tdupl();
  h_0 :
  TestFunTop(m_0);
  Cpush(k_0);
  Arg(0);
  Cpush(o_0);
  Ccall(_stratego_p_33);
  goto n_0;
  o_0 :
  Ccontinue(r_0);
  Epushd(0,2);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(u_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(t_0);
  goto e_5;
  t_0 :
  goto s_0;
  e_5 :
  Return();
  s_0 :
  Epopd(0,2);
  goto n_0;
  r_0 :
  Ccall(_stratego_q_33);
  goto v_0;
  n_0 :
  Cpop();
  v_0 :
  Tpop();
  Cpop();
  goto l_0;
  k_0 :
  Arg(1);
  Tdrop();
  goto h_0;
  l_0 :
  Tpop();
  Ccall(_stratego_r_33);
  Tset(MakeInt(1));
  Ccall(_stratego_q_34);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  goto e_0;
  f_0 :
  Ccontinue(a_1);
  Ccall(_stratego_t_33);
  Ccall(_stratego_v_33);
  Ccall(_stratego_a_34);
  Ccall(_stratego_c_34);
  Ccall(_stratego_d_34);
  Ccall(_stratego_e_34);
  Ccall(_stratego_g_34);
  Cpush(c_1);
  Cpush(d_1);
  Tdupl();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(e_1);
  f_5 :
  Cpush(g_1);
  Epushd(0,3);
  MoveTop(0,1);
  goto i_0;
  i_0 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto j_0;
  j_0 :
  TestFunFC(j_1,&&fail,Egetd(0,2));
  Rpush(i_1);
  goto h_5;
  i_1 :
  goto h_1;
  h_5 :
  Return();
  h_1 :
  Epopd(0,3);
  goto f_1;
  g_1 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_1);
  goto f_5;
  l_1 :
  AllBuild();
  goto k_1;
  f_1 :
  Cpop();
  k_1 :
  Return();
  e_1 :
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  d_1 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_34);
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  goto b_1;
  c_1 :
  goto m_1;
  b_1 :
  Cpop();
  m_1 :
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("compilation succeeded"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_p_34);
  Tset(MakeInt(0));
  Ccall(_stratego_q_34);
  goto e_0;
  a_1 :
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("compilation failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_p_34);
  Tset(MakeInt(1));
  Ccall(_stratego_q_34);
  goto n_1;
  e_0 :
  Cpop();
  n_1 :
ENDPROC

PROC(_stratego_i_33)
  Epushd(0,4);
  Tdupl();
  Epushd(1,1);
  Rpush(o_1);
  o_9 :
  Cpush(q_1);
  Ccall(_stratego_j_33);
  goto p_1;
  q_1 :
  Epushd(2,3);
  MoveTop(2,1);
  goto k_5;
  k_5 :
  TestFunFC(m_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_5;
  o_5 :
  TestStr(2,2,"-I",&&v_1);
  Cpush(x_1);
  Rpush(y_1);
  goto q_9;
  y_1 :
  goto w_1;
  x_1 :
  Rpush(a_2);
  goto s_9;
  a_2 :
  goto z_1;
  w_1 :
  Cpop();
  z_1 :
  goto u_1;
  v_1 :
  Rpush(u_1);
  goto s_9;
  u_1 :
  goto t_1;
  s_9 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(b_2);
  goto o_9;
  b_2 :
  Return();
  t_1 :
  goto s_1;
  q_9 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_2);
  goto o_9;
  c_2 :
  AllBuild();
  AllBuild();
  Return();
  s_1 :
  Epopd(2,3);
  goto r_1;
  p_1 :
  Cpop();
  r_1 :
  Return();
  o_1 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,1);
  Rpush(d_2);
  u_9 :
  Cpush(f_2);
  Ccall(_stratego_j_33);
  goto e_2;
  f_2 :
  Epushd(2,3);
  MoveTop(2,1);
  goto u_5;
  u_5 :
  TestFunFC(m_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_5;
  v_5 :
  TestStr(2,2,"-CI",&&k_2);
  Cpush(m_2);
  Rpush(n_2);
  goto v_9;
  n_2 :
  goto l_2;
  m_2 :
  Rpush(p_2);
  goto x_9;
  p_2 :
  goto o_2;
  l_2 :
  Cpop();
  o_2 :
  goto j_2;
  k_2 :
  Rpush(j_2);
  goto x_9;
  j_2 :
  goto i_2;
  x_9 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(q_2);
  goto u_9;
  q_2 :
  Return();
  i_2 :
  goto h_2;
  v_9 :
  Epushd(3,3);
  MoveTop(3,1);
  goto t_5;
  t_5 :
  TestFunFC(m_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_2);
  goto w_9;
  s_2 :
  goto r_2;
  w_9 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_2);
  goto u_9;
  t_2 :
  AllBuild();
  Return();
  r_2 :
  Epopd(3,3);
  Return();
  h_2 :
  Epopd(2,3);
  goto g_2;
  e_2 :
  Cpop();
  g_2 :
  Return();
  d_2 :
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,1);
  Rpush(u_2);
  z_9 :
  Cpush(w_2);
  Ccall(_stratego_j_33);
  goto v_2;
  w_2 :
  Epushd(2,3);
  MoveTop(2,1);
  goto b_6;
  b_6 :
  TestFunFC(m_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto c_6;
  c_6 :
  TestStr(2,2,"-CL",&&b_3);
  Cpush(d_3);
  Rpush(e_3);
  goto a_10;
  e_3 :
  goto c_3;
  d_3 :
  Rpush(g_3);
  goto c_10;
  g_3 :
  goto f_3;
  c_3 :
  Cpop();
  f_3 :
  goto a_3;
  b_3 :
  Rpush(a_3);
  goto c_10;
  a_3 :
  goto z_2;
  c_10 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(h_3);
  goto z_9;
  h_3 :
  Return();
  z_2 :
  goto y_2;
  a_10 :
  Epushd(3,3);
  MoveTop(3,1);
  goto a_6;
  a_6 :
  TestFunFC(m_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_3);
  goto b_10;
  j_3 :
  goto i_3;
  b_10 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_3);
  goto z_9;
  k_3 :
  AllBuild();
  Return();
  i_3 :
  Epopd(3,3);
  Return();
  y_2 :
  Epopd(2,3);
  goto x_2;
  v_2 :
  Cpop();
  x_2 :
  Return();
  u_2 :
  MoveTop(1,1);
  Move(0,3,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Program",Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(l_3);
  f_10 :
  Cpush(n_3);
  Cpush(p_3);
  Ccall(_stratego_j_33);
  goto o_3;
  p_3 :
  Cpush(s_3);
  Ccall(_stratego_k_33);
  goto r_3;
  s_3 :
  Ccall(_stratego_o_33);
  goto t_3;
  r_3 :
  Cpop();
  t_3 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_3);
  goto f_10;
  u_3 :
  AllBuild();
  goto q_3;
  o_3 :
  Cpop();
  q_3 :
  goto m_3;
  n_3 :
  Epushd(1,3);
  MoveTop(1,1);
  goto g_6;
  g_6 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(x_3);
  goto g_10;
  x_3 :
  goto w_3;
  g_10 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Cons",App1("Undefined",Egetd(1,2)),Egetd(1,3)));
  Return();
  w_3 :
  Epopd(1,3);
  goto v_3;
  m_3 :
  Cpop();
  v_3 :
  Return();
  l_3 :
  AllBuild();
  Cpush(z_3);
  Epushd(1,1);
  Rpush(a_4);
  h_10 :
  Cpush(c_4);
  Epushd(2,4);
  MoveTop(2,1);
  goto i_6;
  i_6 :
  TestFunFC(m_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto j_6;
  j_6 :
  TestFunFC(f_4,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(e_4);
  goto i_10;
  e_4 :
  goto d_4;
  i_10 :
  Move(0,4,2,3);
  Return();
  d_4 :
  Epopd(2,4);
  goto b_4;
  c_4 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_4);
  goto h_10;
  h_4 :
  AllBuild();
  goto g_4;
  b_4 :
  Cpop();
  g_4 :
  Return();
  a_4 :
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(1,1);
  NotNULLd(0,4);
  Tset(App2("TCons",App2("Cons",App1("InclDir",Egetd(0,1)),App2("Cons",App1("CInclDir",Egetd(0,2)),App2("Cons",App1("CLibDir",Egetd(0,3)),Egetd(1,1)))),App2("TCons",App2("TCons",Egetd(0,4),App2("TCons",ATmakeString(".r"),App0("TNil"))),App0("TNil"))));
  Epopd(1,1);
  goto y_3;
  z_3 :
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Cons",App0("Help"),Egetd(1,1)),App2("TCons",ATmakeString(""),App0("TNil"))));
  Epopd(1,1);
  goto i_4;
  y_3 :
  Cpop();
  i_4 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_j_33)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_10;
  t_10 :
  TestFunFC(l_4,&&fail,Egetd(0,1));
  Rpush(k_4);
  goto v_10;
  k_4 :
  goto j_4;
  v_10 :
  Return();
  j_4 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_33)
  Epushd(0,5);
  MoveTop(0,3);
  goto z_12;
  z_12 :
  TestFunFC(m_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto a_13;
  a_13 :
  TestFunFC(m_0,&&y_4,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(a_5);
  Rpush(b_5);
  goto b_16;
  b_5 :
  goto z_4;
  a_5 :
  Ccontinue(c_5);
  Rpush(d_5);
  goto f_16;
  d_5 :
  goto z_4;
  c_5 :
  Ccontinue(g_5);
  Rpush(i_5);
  goto i_16;
  i_5 :
  goto z_4;
  g_5 :
  Ccontinue(j_5);
  Rpush(l_5);
  goto m_16;
  l_5 :
  goto z_4;
  j_5 :
  Ccontinue(m_5);
  Rpush(n_5);
  goto p_16;
  n_5 :
  goto z_4;
  m_5 :
  Ccontinue(p_5);
  Rpush(q_5);
  goto s_16;
  q_5 :
  goto z_4;
  p_5 :
  Ccontinue(r_5);
  Rpush(s_5);
  goto v_16;
  s_5 :
  goto z_4;
  r_5 :
  Ccontinue(w_5);
  Rpush(x_5);
  goto y_16;
  x_5 :
  goto z_4;
  w_5 :
  Ccontinue(y_5);
  Rpush(z_5);
  goto d_17;
  z_5 :
  goto z_4;
  y_5 :
  Ccontinue(d_6);
  Rpush(e_6);
  goto h_17;
  e_6 :
  goto z_4;
  d_6 :
  Rpush(h_6);
  goto l_17;
  h_6 :
  goto f_6;
  z_4 :
  Cpop();
  f_6 :
  goto x_4;
  y_4 :
  Cpush(l_6);
  Rpush(q_6);
  goto s_16;
  q_6 :
  goto k_6;
  l_6 :
  Ccontinue(r_6);
  Rpush(a_7);
  goto v_16;
  a_7 :
  goto k_6;
  r_6 :
  Rpush(c_7);
  goto l_17;
  c_7 :
  goto b_7;
  k_6 :
  Cpop();
  b_7 :
  goto x_4;
  x_4 :
  goto w_4;
  l_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_12;
  x_12 :
  TestStr(1,1,"--ast",&&fail);
  Rpush(e_7);
  goto m_17;
  e_7 :
  goto d_7;
  m_17 :
  Return();
  d_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("AST"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("AST"),Egetd(0,5)));
  Return();
  w_4 :
  goto v_4;
  h_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_12;
  t_12 :
  TestStr(1,1,"-m",&&fail);
  Rpush(g_7);
  goto i_17;
  g_7 :
  goto f_7;
  i_17 :
  Return();
  f_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Main",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Main",Egetd(0,1)),Egetd(0,2)));
  Return();
  v_4 :
  goto u_4;
  d_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_12;
  p_12 :
  TestStr(1,1,"--main",&&fail);
  Rpush(i_7);
  goto e_17;
  i_7 :
  goto h_7;
  e_17 :
  Return();
  h_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Main",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Main",Egetd(0,1)),Egetd(0,2)));
  Return();
  u_4 :
  goto t_4;
  y_16 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto k_12;
  k_12 :
  TestStr(2,1,"-i",&&fail);
  Rpush(k_7);
  goto z_16;
  k_7 :
  goto j_7;
  z_16 :
  Return();
  j_7 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_l_33);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Input",Egetd(1,1)));
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(1,1)),Egetd(0,2)));
  Epopd(1,1);
  Return();
  t_4 :
  goto s_4;
  v_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_12;
  h_12 :
  TestStr(1,1,"-norm",&&fail);
  Rpush(m_7);
  goto w_16;
  m_7 :
  goto l_7;
  w_16 :
  Return();
  l_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("NORM"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("NORM"),Egetd(0,5)));
  Return();
  s_4 :
  goto r_4;
  s_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_12;
  e_12 :
  TestStr(1,1,"-CC",&&fail);
  Rpush(o_7);
  goto t_16;
  o_7 :
  goto n_7;
  t_16 :
  Return();
  n_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("CC"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("CC"),Egetd(0,5)));
  Return();
  r_4 :
  goto q_4;
  p_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_12;
  b_12 :
  TestStr(1,1,"-CL",&&fail);
  Rpush(q_7);
  goto q_16;
  q_7 :
  goto p_7;
  q_16 :
  Return();
  p_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Ignore"));
  NotNULLd(0,2);
  Tset(App2("Cons",App0("Ignore"),Egetd(0,2)));
  Return();
  q_4 :
  goto p_4;
  m_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_11;
  y_11 :
  TestStr(1,1,"-CI",&&fail);
  Rpush(a_8);
  goto n_16;
  a_8 :
  goto r_7;
  n_16 :
  Return();
  r_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Ignore"));
  NotNULLd(0,2);
  Tset(App2("Cons",App0("Ignore"),Egetd(0,2)));
  Return();
  p_4 :
  goto o_4;
  i_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_11;
  v_11 :
  TestStr(1,1,"--Include",&&fail);
  Rpush(c_8);
  goto j_16;
  c_8 :
  goto b_8;
  j_16 :
  Return();
  b_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Ignore"));
  NotNULLd(0,2);
  Tset(App2("Cons",App0("Ignore"),Egetd(0,2)));
  Return();
  o_4 :
  goto n_4;
  f_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_11;
  s_11 :
  TestStr(1,1,"-I",&&fail);
  Rpush(e_8);
  goto g_16;
  e_8 :
  goto d_8;
  g_16 :
  Return();
  d_8 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Ignore"));
  NotNULLd(0,2);
  Tset(App2("Cons",App0("Ignore"),Egetd(0,2)));
  Return();
  n_4 :
  goto m_4;
  b_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_11;
  o_11 :
  TestStr(1,1,"-e",&&fail);
  Rpush(g_8);
  goto c_16;
  g_8 :
  goto f_8;
  c_16 :
  Return();
  f_8 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("ExecDir",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("ExecDir",Egetd(0,1)),Egetd(0,2)));
  Return();
  m_4 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_l_33)
  Ccall(_stratego_m_33);
  Cpush(i_8);
  Rpush(j_8);
  u_17 :
  Cpush(n_8);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_8);
  goto u_17;
  r_8 :
  AllBuild();
  goto k_8;
  n_8 :
  Epushd(0,3);
  MoveTop(0,1);
  goto p_17;
  p_17 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto q_17;
  q_17 :
  TestInt(0,2,46,&&fail);
  Rpush(b_9);
  goto v_17;
  b_9 :
  goto z_8;
  v_17 :
  Tset(App0("Nil"));
  Return();
  z_8 :
  Epopd(0,3);
  goto s_8;
  k_8 :
  Cpop();
  s_8 :
  Return();
  j_8 :
  goto h_8;
  i_8 :
  goto c_9;
  h_8 :
  Cpop();
  c_9 :
  Ccall(_stratego_n_33);
ENDPROC

PROC(_stratego_m_33)
  _ST_explode_string();
ENDPROC

PROC(_stratego_n_33)
  _ST_implode_string();
ENDPROC

PROC(_stratego_o_33)
  Epushd(0,5);
  MoveTop(0,3);
  goto k_21;
  k_21 :
  TestFunFC(m_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto l_21;
  l_21 :
  TestFunFC(m_0,&&e_10,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(k_10);
  Rpush(l_10);
  goto d_25;
  l_10 :
  goto j_10;
  k_10 :
  Ccontinue(m_10);
  Rpush(n_10);
  goto g_25;
  n_10 :
  goto j_10;
  m_10 :
  Ccontinue(o_10);
  Rpush(p_10);
  goto k_25;
  p_10 :
  goto j_10;
  o_10 :
  Ccontinue(q_10);
  Rpush(r_10);
  goto y_25;
  r_10 :
  goto j_10;
  q_10 :
  Ccontinue(s_10);
  Rpush(w_10);
  goto r_27;
  w_10 :
  goto j_10;
  s_10 :
  Ccontinue(x_10);
  Rpush(y_10);
  goto f_30;
  y_10 :
  goto j_10;
  x_10 :
  Ccontinue(z_10);
  Rpush(a_11);
  goto j_30;
  a_11 :
  goto j_10;
  z_10 :
  Ccontinue(b_11);
  Rpush(c_11);
  goto n_30;
  c_11 :
  goto j_10;
  b_11 :
  Ccontinue(d_11);
  Rpush(e_11);
  goto u_30;
  e_11 :
  goto j_10;
  d_11 :
  Ccontinue(f_11);
  Rpush(g_11);
  goto z_30;
  g_11 :
  goto j_10;
  f_11 :
  Ccontinue(h_11);
  Rpush(i_11);
  goto g_31;
  i_11 :
  goto j_10;
  h_11 :
  Ccontinue(j_11);
  Rpush(k_11);
  goto k_31;
  k_11 :
  goto j_10;
  j_11 :
  Ccontinue(l_11);
  Rpush(m_11);
  goto n_31;
  m_11 :
  goto j_10;
  l_11 :
  Ccontinue(n_11);
  Rpush(p_11);
  goto q_31;
  p_11 :
  goto j_10;
  n_11 :
  Rpush(r_11);
  goto e_32;
  r_11 :
  goto q_11;
  j_10 :
  Cpop();
  q_11 :
  goto d_10;
  e_10 :
  Cpush(u_11);
  Rpush(w_11);
  goto d_25;
  w_11 :
  goto t_11;
  u_11 :
  Ccontinue(x_11);
  Rpush(z_11);
  goto g_25;
  z_11 :
  goto t_11;
  x_11 :
  Ccontinue(a_12);
  Rpush(c_12);
  goto k_25;
  c_12 :
  goto t_11;
  a_12 :
  Ccontinue(d_12);
  Rpush(f_12);
  goto y_25;
  f_12 :
  goto t_11;
  d_12 :
  Ccontinue(g_12);
  Rpush(i_12);
  goto r_27;
  i_12 :
  goto t_11;
  g_12 :
  Ccontinue(j_12);
  Rpush(l_12);
  goto g_31;
  l_12 :
  goto t_11;
  j_12 :
  Ccontinue(m_12);
  Rpush(n_12);
  goto k_31;
  n_12 :
  goto t_11;
  m_12 :
  Ccontinue(o_12);
  Rpush(q_12);
  goto n_31;
  q_12 :
  goto t_11;
  o_12 :
  Ccontinue(r_12);
  Rpush(s_12);
  goto q_31;
  s_12 :
  goto t_11;
  r_12 :
  Rpush(v_12);
  goto e_32;
  v_12 :
  goto u_12;
  t_11 :
  Cpop();
  u_12 :
  goto d_10;
  d_10 :
  goto y_9;
  e_32 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_21;
  i_21 :
  TestStr(1,1,"-?",&&fail);
  Rpush(y_12);
  goto f_32;
  y_12 :
  goto w_12;
  f_32 :
  Return();
  w_12 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  y_9 :
  goto t_9;
  q_31 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_21;
  f_21 :
  TestStr(1,1,"-h",&&fail);
  Rpush(h_13);
  goto t_31;
  h_13 :
  goto g_13;
  t_31 :
  Return();
  g_13 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  t_9 :
  goto r_9;
  n_31 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_21;
  c_21 :
  TestStr(1,1,"--help",&&fail);
  Rpush(k_13);
  goto o_31;
  k_13 :
  goto i_13;
  o_31 :
  Return();
  i_13 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  r_9 :
  goto p_9;
  k_31 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_20;
  z_20 :
  TestStr(1,1,"-s",&&fail);
  Rpush(m_13);
  goto l_31;
  m_13 :
  goto l_13;
  l_31 :
  Return();
  l_13 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  p_9 :
  goto n_9;
  g_31 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_20;
  w_20 :
  TestStr(1,1,"-b",&&fail);
  Rpush(o_13);
  goto i_31;
  o_13 :
  goto n_13;
  i_31 :
  Return();
  n_13 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  n_9 :
  goto m_9;
  z_30 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_20;
  s_20 :
  TestStr(1,1,"--output",&&fail);
  Rpush(q_13);
  goto a_31;
  q_13 :
  goto p_13;
  a_31 :
  Return();
  p_13 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  m_9 :
  goto l_9;
  u_30 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_20;
  d_20 :
  TestStr(1,1,"-o",&&fail);
  Rpush(t_13);
  goto w_30;
  t_13 :
  goto s_13;
  w_30 :
  Return();
  s_13 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  l_9 :
  goto k_9;
  n_30 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_19;
  s_19 :
  TestStr(1,1,"--input",&&fail);
  Rpush(v_13);
  goto o_30;
  v_13 :
  goto u_13;
  o_30 :
  Return();
  u_13 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  k_9 :
  goto j_9;
  j_30 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_19;
  f_19 :
  TestStr(1,1,"-i",&&fail);
  Rpush(y_13);
  goto k_30;
  y_13 :
  goto w_13;
  k_30 :
  Return();
  w_13 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  j_9 :
  goto i_9;
  f_30 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_19;
  b_19 :
  TestStr(1,1,"@version",&&fail);
  Rpush(a_14);
  goto g_30;
  a_14 :
  goto z_13;
  g_30 :
  Return();
  z_13 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  i_9 :
  goto h_9;
  r_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_18;
  y_18 :
  TestStr(1,1,"--version",&&fail);
  Rpush(c_14);
  goto d_30;
  c_14 :
  goto b_14;
  d_30 :
  Return();
  b_14 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  h_9 :
  goto g_9;
  y_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_18;
  v_18 :
  TestStr(1,1,"-v",&&fail);
  Rpush(f_14);
  goto z_25;
  f_14 :
  goto e_14;
  z_25 :
  Return();
  e_14 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  g_9 :
  goto f_9;
  k_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_18;
  s_18 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_14);
  goto w_25;
  h_14 :
  goto g_14;
  w_25 :
  Return();
  g_14 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  f_9 :
  goto e_9;
  g_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_18;
  p_18 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(k_14);
  goto h_25;
  k_14 :
  goto i_14;
  h_25 :
  Return();
  i_14 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  e_9 :
  goto d_9;
  d_25 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_18;
  m_18 :
  TestStr(1,1,"-S",&&fail);
  Rpush(m_14);
  goto e_25;
  m_14 :
  goto l_14;
  e_25 :
  Return();
  l_14 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  d_9 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_33)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_32;
  i_32 :
  TestFunFC(q_14,&&fail,Egetd(0,1));
  Rpush(p_14);
  goto o_32;
  p_14 :
  goto n_14;
  o_32 :
  Return();
  n_14 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_33)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_32;
  q_32 :
  TestFunFC(u_14,&&fail,Egetd(0,1));
  Rpush(s_14);
  goto s_32;
  s_14 :
  goto r_14;
  s_32 :
  Return();
  r_14 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_33)
  Ccall(_stratego_s_33);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Usage: sc [options] -i file\n"),App2("Cons",ATmakeString("Options:\n"),App2("Cons",ATmakeString("  -i spec     Compile specification spec\n"),App2("Cons",ATmakeString("  -o target   Name executable target\n"),App2("Cons",ATmakeString("  --main s    Name main strategy [default: main]\n"),App2("Cons",ATmakeString("  -I dir      Look in dir for imported Stratego modules\n"),App2("Cons",ATmakeString("  -CI dir     Look in dir for C include files\n"),App2("Cons",ATmakeString("  -CL dir     Look in dir for C object libraries\n"),App2("Cons",ATmakeString("  --ast       Output abstract syntax of specification\n"),App2("Cons",ATmakeString("  -h|--help   Display this message"),App0("Nil"))))))))))),App0("TNil"))));
  Ccall(_stratego_p_34);
ENDPROC

PROC(_stratego_s_33)
  Epushd(0,1);
  Cpush(w_14);
  Rpush(x_14);
  v_34 :
  Cpush(a_15);
  Epushd(1,4);
  MoveTop(1,1);
  goto w_32;
  w_32 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto x_32;
  x_32 :
  TestFunFC(e_15,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_15);
  goto w_34;
  d_15 :
  goto b_15;
  w_34 :
  Move(0,1,1,3);
  Return();
  b_15 :
  Epopd(1,4);
  goto y_14;
  a_15 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_15);
  goto v_34;
  g_15 :
  AllBuild();
  goto f_15;
  y_14 :
  Cpop();
  f_15 :
  Return();
  x_14 :
  goto v_14;
  w_14 :
  Tset(ATmakeString(""));
  Tdupl();
  Tset(ATmakeString(""));
  MoveTop(0,1);
  Tpop();
  goto h_15;
  v_14 :
  Cpop();
  h_15 :
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("sc version "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_p_34);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_33)
  Cpush(k_15);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tdupl();
  l_15 :
  TestFunTop(m_0);
  Cpush(m_15);
  Arg(0);
  Ccall(_stratego_u_33);
  Tpop();
  Cpop();
  goto n_15;
  m_15 :
  Arg(1);
  Tdrop();
  goto l_15;
  n_15 :
  Tpop();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_33);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  goto i_15;
  k_15 :
  goto o_15;
  i_15 :
  Cpop();
  o_15 :
ENDPROC

PROC(_stratego_u_33)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_35;
  a_35 :
  TestFunFC(s_15,&&fail,Egetd(0,1));
  Rpush(q_15);
  goto c_35;
  q_15 :
  goto p_15;
  c_35 :
  Return();
  p_15 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_33)
  Epushd(0,3);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(t_15);
  m_39 :
  Cpush(v_15);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_35;
  e_35 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_35;
  f_35 :
  TestFunFC(z_15,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(x_15);
  goto n_39;
  x_15 :
  goto w_15;
  n_39 :
  Move(0,2,1,3);
  Return();
  w_15 :
  Epopd(1,4);
  goto u_15;
  v_15 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_16);
  goto m_39;
  d_16 :
  AllBuild();
  goto a_16;
  u_15 :
  Cpop();
  a_16 :
  Return();
  t_15 :
  Rpush(e_16);
  o_39 :
  Cpush(k_16);
  Epushd(1,4);
  MoveTop(1,1);
  goto h_35;
  h_35 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto i_35;
  i_35 :
  TestFunFC(r_16,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_16);
  goto p_39;
  o_16 :
  goto l_16;
  p_39 :
  Move(0,1,1,3);
  Return();
  l_16 :
  Epopd(1,4);
  goto h_16;
  k_16 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_16);
  goto o_39;
  x_16 :
  AllBuild();
  goto u_16;
  h_16 :
  Cpop();
  u_16 :
  Return();
  e_16 :
  Cpush(b_17);
  Rpush(c_17);
  q_39 :
  Cpush(g_17);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_35;
  k_35 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_35;
  l_35 :
  TestFunFC(n_17,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(k_17);
  goto r_39;
  k_17 :
  goto j_17;
  r_39 :
  Move(0,3,1,3);
  Return();
  j_17 :
  Epopd(1,4);
  goto f_17;
  g_17 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_17);
  goto q_39;
  w_17 :
  AllBuild();
  goto o_17;
  f_17 :
  Cpop();
  o_17 :
  Return();
  c_17 :
  goto a_17;
  b_17 :
  goto x_17;
  a_17 :
  Cpop();
  x_17 :
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".tree"));
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,12);
  Tset(ATmakeString("/pack-stratego"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/pack-stratego"),App0("TNil"))));
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Tset(App0("TNil"));
  Cpush(z_17);
  NotNULLd(0,3);
  Tset(App2("Cons",ATmakeString("-dep"),App2("Cons",Egetd(0,3),App0("Nil"))));
  goto y_17;
  z_17 :
  Tset(App0("Nil"));
  goto a_18;
  y_17 :
  Cpop();
  a_18 :
  MoveTop(2,2);
  NotNULLd(2,2);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",App2("Cons",ATmakeString("--silent"),Egetd(0,2)),App0("TNil"))));
  MoveTop(2,3);
  goto u_35;
  u_35 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_35;
  v_35 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto w_35;
  w_35 :
  TestFunFC(d_18,&&fail,Egetd(2,7));
  Rpush(c_18);
  goto y_39;
  c_18 :
  goto b_18;
  y_39 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(e_18);
  z_39 :
  Cpush(g_18);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_18);
  goto z_39;
  h_18 :
  AllBuild();
  goto f_18;
  g_18 :
  Ccall(_stratego_j_33);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto i_18;
  f_18 :
  Cpop();
  i_18 :
  Return();
  e_18 :
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,1),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,2),App0("Nil"))))),App0("TNil"))));
  Epopd(3,1);
  Return();
  b_18 :
  MoveTop(2,8);
  goto z_35;
  z_35 :
  TestFunFC(g_0,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  MoveArg(2,10,2,8,1);
  goto a_36;
  a_36 :
  TestFunFC(g_0,&&fail,Egetd(2,10));
  MoveArg(2,11,2,10,0);
  MoveArg(2,12,2,10,1);
  goto b_36;
  b_36 :
  TestFunFC(d_18,&&fail,Egetd(2,12));
  Rpush(k_18);
  goto b_40;
  k_18 :
  goto j_18;
  b_40 :
  Epushd(3,1);
  NotNULLd(2,9);
  Tset(Egetd(2,9));
  Rpush(l_18);
  c_40 :
  Cpush(o_18);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_18);
  goto c_40;
  q_18 :
  AllBuild();
  goto n_18;
  o_18 :
  Ccall(_stratego_j_33);
  NotNULLd(2,11);
  Tset(Egetd(2,11));
  goto r_18;
  n_18 :
  Cpop();
  r_18 :
  Return();
  l_18 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  j_18 :
  Ccall(_stratego_x_33);
  Epopd(2,12);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Cpush(u_18);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(1,5);
  MoveTop(1,1);
  goto o_36;
  o_36 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_36;
  p_36 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto q_36;
  q_36 :
  TestFunFC(d_18,&&fail,Egetd(1,5));
  Rpush(x_18);
  goto e_40;
  x_18 :
  goto w_18;
  e_40 :
  Epushd(2,5);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".tree"));
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  MoveTop(2,1);
  goto l_36;
  l_36 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto m_36;
  m_36 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto n_36;
  n_36 :
  TestFunFC(d_18,&&fail,Egetd(2,5));
  Rpush(a_19);
  goto f_40;
  a_19 :
  goto z_18;
  f_40 :
  Tdupl();
  Epushd(3,7);
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_w_33);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_w_33);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto i_36;
  i_36 :
  TestFunFC(g_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto j_36;
  j_36 :
  TestFunFC(g_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto k_36;
  k_36 :
  TestFunFC(d_18,&&fail,Egetd(3,7));
  Rpush(d_19);
  goto i_40;
  d_19 :
  goto c_19;
  i_40 :
  Epushd(4,1);
  Tdupl();
  Epushd(5,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Ccall(_stratego_y_33);
  MoveTop(5,1);
  Move(4,1,5,1);
  Epopd(5,1);
  Tpop();
  Tdupl();
  NotNULLd(3,6);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,6),App2("TCons",Egetd(4,1),App0("TNil"))));
  Ccall(_stratego_z_33);
  Tpop();
  Epopd(4,1);
  Return();
  c_19 :
  Epopd(3,7);
  Tpop();
  Return();
  z_18 :
  Epopd(2,5);
  Return();
  w_18 :
  Epopd(1,5);
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  goto t_18;
  u_18 :
  goto e_19;
  t_18 :
  Cpop();
  e_19 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_w_33)
  Epushd(0,5);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_33);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_33);
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto l_40;
  l_40 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto m_40;
  m_40 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto n_40;
  n_40 :
  TestFunFC(d_18,&&fail,Egetd(0,5));
  Rpush(h_19);
  goto v_40;
  h_19 :
  goto g_19;
  v_40 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(i_19);
  w_40 :
  Cpush(k_19);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_19);
  goto w_40;
  l_19 :
  AllBuild();
  goto j_19;
  k_19 :
  Ccall(_stratego_j_33);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto m_19;
  j_19 :
  Cpop();
  m_19 :
  Return();
  i_19 :
  Ccall(_stratego_n_33);
  Return();
  g_19 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_x_33)
  _ST_call();
ENDPROC

PROC(_stratego_y_33)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_z_33)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_a_34)
  Epushd(0,2);
  Cpush(o_19);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tdupl();
  p_19 :
  TestFunTop(m_0);
  Cpush(q_19);
  Arg(0);
  Ccall(_stratego_b_34);
  Tpop();
  Cpop();
  goto r_19;
  q_19 :
  Arg(1);
  Tdrop();
  goto p_19;
  r_19 :
  Tpop();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("abstract syntax written to "),App2("Cons",Egetd(0,1),App2("Cons",Egetd(0,2),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_p_34);
  Tset(MakeInt(0));
  Ccall(_stratego_q_34);
  goto n_19;
  o_19 :
  goto t_19;
  n_19 :
  Cpop();
  t_19 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_b_34)
  Epushd(0,1);
  MoveTop(0,1);
  goto h_41;
  h_41 :
  TestFunFC(w_19,&&fail,Egetd(0,1));
  Rpush(v_19);
  goto j_41;
  v_19 :
  goto u_19;
  j_41 :
  Return();
  u_19 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_34)
  Epushd(0,1);
  Cpush(y_19);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(z_19);
  o_43 :
  Cpush(b_20);
  Epushd(1,4);
  MoveTop(1,1);
  goto l_41;
  l_41 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto m_41;
  m_41 :
  TestFunFC(f_20,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_20);
  goto p_43;
  e_20 :
  goto c_20;
  p_43 :
  Move(0,1,1,3);
  Return();
  c_20 :
  Epopd(1,4);
  goto a_20;
  b_20 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_20);
  goto o_43;
  h_20 :
  AllBuild();
  goto g_20;
  a_20 :
  Cpop();
  g_20 :
  Return();
  z_19 :
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".tree1"));
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(1,2),App0("TNil"))));
  MoveTop(2,1);
  goto u_41;
  u_41 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_41;
  v_41 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_41;
  w_41 :
  TestFunFC(d_18,&&fail,Egetd(2,5));
  Rpush(j_20);
  goto s_43;
  j_20 :
  goto i_20;
  s_43 :
  Epushd(3,1);
  Tdupl();
  Epushd(4,2);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_y_33);
  MoveTop(4,1);
  goto t_41;
  t_41 :
  TestFunFC(m_20,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(l_20);
  goto t_43;
  l_20 :
  goto k_20;
  t_43 :
  NotNULLd(0,1);
  NotNULLd(4,2);
  Tset(App1("Specification",App2("Cons",App1("Strategies",App2("Cons",App3("SDef",ATmakeString("main"),App0("Nil"),App2("Call",App1("SVar",Egetd(0,1)),App0("Nil"))),App0("Nil"))),Egetd(4,2))));
  Tdupl();
  NotNULLd(0,1);
  NotNULLd(4,2);
  Tset(App1("Specification",App2("Cons",App1("Strategies",App2("Cons",App3("SDef",ATmakeString("main"),App0("Nil"),App2("Call",App1("SVar",Egetd(0,1)),App0("Nil"))),App0("Nil"))),Egetd(4,2))));
  MoveTop(3,1);
  Tpop();
  Return();
  k_20 :
  Epopd(4,2);
  Tpop();
  Tdupl();
  NotNULLd(2,4);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_z_33);
  Tpop();
  Epopd(3,1);
  Return();
  i_20 :
  Epopd(2,5);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  goto x_19;
  y_19 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".tree1"));
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(1,2),App0("TNil"))));
  MoveTop(2,1);
  goto b_42;
  b_42 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto c_42;
  c_42 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto d_42;
  d_42 :
  TestFunFC(d_18,&&fail,Egetd(2,5));
  Rpush(p_20);
  goto y_43;
  p_20 :
  goto o_20;
  y_43 :
  Epushd(3,1);
  Tdupl();
  Epushd(4,1);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_y_33);
  MoveTop(4,1);
  Move(3,1,4,1);
  Epopd(4,1);
  Tpop();
  Tdupl();
  NotNULLd(2,4);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_z_33);
  Tpop();
  Epopd(3,1);
  Return();
  o_20 :
  Epopd(2,5);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  goto n_20;
  x_19 :
  Cpop();
  n_20 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_34)
  Epushd(0,1);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(q_20);
  a_59 :
  Cpush(t_20);
  Ccall(_stratego_j_33);
  goto r_20;
  t_20 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Cpush(x_20);
  Epushd(1,2);
  MoveTop(1,1);
  goto b_44;
  b_44 :
  TestFunFC(r_16,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(a_21);
  goto b_59;
  a_21 :
  goto y_20;
  b_59 :
  Move(0,1,1,2);
  Return();
  y_20 :
  Epopd(1,2);
  goto v_20;
  x_20 :
  goto b_21;
  v_20 :
  Cpop();
  b_21 :
  OneNextSon();
  Rpush(d_21);
  goto a_59;
  d_21 :
  AllBuild();
  goto u_20;
  r_20 :
  Cpop();
  u_20 :
  Return();
  q_20 :
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(1,24);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".s1"));
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/frontend"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/frontend"),App0("TNil"))));
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,1),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,2),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto k_44;
  k_44 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto l_44;
  l_44 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto m_44;
  m_44 :
  TestFunFC(d_18,&&fail,Egetd(2,6));
  Rpush(g_21);
  goto i_59;
  g_21 :
  goto e_21;
  i_59 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(h_21);
  j_59 :
  Cpush(r_21);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_21);
  goto j_59;
  s_21 :
  AllBuild();
  goto j_21;
  r_21 :
  Ccall(_stratego_j_33);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto u_21;
  j_21 :
  Cpop();
  u_21 :
  Return();
  h_21 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  e_21 :
  Ccall(_stratego_x_33);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,3,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".s2"));
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,4,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/extract"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/extract"),App0("TNil"))));
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,3),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,4),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto w_44;
  w_44 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto x_44;
  x_44 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto y_44;
  y_44 :
  TestFunFC(d_18,&&fail,Egetd(2,6));
  Rpush(w_21);
  goto r_59;
  w_21 :
  goto v_21;
  r_59 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(x_21);
  s_59 :
  Cpush(a_22);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_22);
  goto s_59;
  b_22 :
  AllBuild();
  goto z_21;
  a_22 :
  Ccall(_stratego_j_33);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto c_22;
  z_21 :
  Cpop();
  c_22 :
  Return();
  x_21 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  v_21 :
  Ccall(_stratego_x_33);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,5,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".s"));
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,6,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/inline"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/inline"),App0("TNil"))));
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,5),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,6),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto h_45;
  h_45 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto i_45;
  i_45 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto j_45;
  j_45 :
  TestFunFC(d_18,&&fail,Egetd(2,6));
  Rpush(f_22);
  goto a_60;
  f_22 :
  goto e_22;
  a_60 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(g_22);
  b_60 :
  Cpush(j_22);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_22);
  goto b_60;
  k_22 :
  AllBuild();
  goto h_22;
  j_22 :
  Ccall(_stratego_j_33);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto l_22;
  h_22 :
  Cpop();
  l_22 :
  Return();
  g_22 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  e_22 :
  Ccall(_stratego_x_33);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,7,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,8,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/Stratego-Normal-Format"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/Stratego-Normal-Format"),App0("TNil"))));
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,7);
  NotNULLd(1,8);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,7),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,8),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto s_45;
  s_45 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto t_45;
  t_45 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto u_45;
  u_45 :
  TestFunFC(d_18,&&fail,Egetd(2,6));
  Rpush(o_22);
  goto j_60;
  o_22 :
  goto m_22;
  j_60 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(p_22);
  k_60 :
  Cpush(r_22);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_22);
  goto k_60;
  s_22 :
  AllBuild();
  goto q_22;
  r_22 :
  Ccall(_stratego_j_33);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto u_22;
  q_22 :
  Cpop();
  u_22 :
  Return();
  p_22 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  m_22 :
  Ccall(_stratego_x_33);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,9,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".so1"));
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,10,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/optimize1"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/optimize1"),App0("TNil"))));
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,9);
  NotNULLd(1,10);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,9),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,10),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto d_46;
  d_46 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto e_46;
  e_46 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto f_46;
  f_46 :
  TestFunFC(d_18,&&fail,Egetd(2,6));
  Rpush(w_22);
  goto s_60;
  w_22 :
  goto v_22;
  s_60 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(x_22);
  t_60 :
  Cpush(z_22);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_23);
  goto t_60;
  a_23 :
  AllBuild();
  goto y_22;
  z_22 :
  Ccall(_stratego_j_33);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto c_23;
  y_22 :
  Cpop();
  c_23 :
  Return();
  x_22 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  v_22 :
  Ccall(_stratego_x_33);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,11,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".so2"));
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,12,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/compile-match"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/compile-match"),App0("TNil"))));
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,11);
  NotNULLd(1,12);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,11),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,12),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto o_46;
  o_46 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto p_46;
  p_46 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto q_46;
  q_46 :
  TestFunFC(d_18,&&fail,Egetd(2,6));
  Rpush(e_23);
  goto b_61;
  e_23 :
  goto d_23;
  b_61 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(f_23);
  c_61 :
  Cpush(h_23);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_23);
  goto c_61;
  i_23 :
  AllBuild();
  goto g_23;
  h_23 :
  Ccall(_stratego_j_33);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto k_23;
  g_23 :
  Cpop();
  k_23 :
  Return();
  f_23 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  d_23 :
  Ccall(_stratego_x_33);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,13,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".so3"));
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,14,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/optimize2"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/optimize2"),App0("TNil"))));
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,13);
  NotNULLd(1,14);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,13),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,14),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto z_46;
  z_46 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto a_47;
  a_47 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto b_47;
  b_47 :
  TestFunFC(d_18,&&fail,Egetd(2,6));
  Rpush(m_23);
  goto k_61;
  m_23 :
  goto l_23;
  k_61 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(n_23);
  l_61 :
  Cpush(p_23);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_23);
  goto l_61;
  q_23 :
  AllBuild();
  goto o_23;
  p_23 :
  Ccall(_stratego_j_33);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto s_23;
  o_23 :
  Cpop();
  s_23 :
  Return();
  n_23 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  l_23 :
  Ccall(_stratego_x_33);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,15,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,16,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/Stratego-Optimized-Format"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/Stratego-Optimized-Format"),App0("TNil"))));
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,15);
  NotNULLd(1,16);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,15),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,16),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto k_47;
  k_47 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto l_47;
  l_47 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto m_47;
  m_47 :
  TestFunFC(d_18,&&fail,Egetd(2,6));
  Rpush(u_23);
  goto t_61;
  u_23 :
  goto t_23;
  t_61 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(v_23);
  u_61 :
  Cpush(x_23);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_23);
  goto u_61;
  y_23 :
  AllBuild();
  goto w_23;
  x_23 :
  Ccall(_stratego_j_33);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto a_24;
  w_23 :
  Cpop();
  a_24 :
  Return();
  v_23 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  t_23 :
  Ccall(_stratego_x_33);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,17,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".i1"));
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,18,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/backend"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/backend"),App0("TNil"))));
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,17);
  NotNULLd(1,18);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,17),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,18),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto v_47;
  v_47 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto w_47;
  w_47 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto x_47;
  x_47 :
  TestFunFC(d_18,&&fail,Egetd(2,6));
  Rpush(c_24);
  goto c_62;
  c_24 :
  goto b_24;
  c_62 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(d_24);
  d_62 :
  Cpush(f_24);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_24);
  goto d_62;
  h_24 :
  AllBuild();
  goto e_24;
  f_24 :
  Ccall(_stratego_j_33);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto i_24;
  e_24 :
  Cpop();
  i_24 :
  Return();
  d_24 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  b_24 :
  Ccall(_stratego_x_33);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,19,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,20,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/Abstract-Machine-Format"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/Abstract-Machine-Format"),App0("TNil"))));
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,19);
  NotNULLd(1,20);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,19),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,20),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto g_48;
  g_48 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto h_48;
  h_48 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto i_48;
  i_48 :
  TestFunFC(d_18,&&fail,Egetd(2,6));
  Rpush(k_24);
  goto l_62;
  k_24 :
  goto j_24;
  l_62 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(m_24);
  m_62 :
  Cpush(o_24);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_24);
  goto m_62;
  p_24 :
  AllBuild();
  goto n_24;
  o_24 :
  Ccall(_stratego_j_33);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto r_24;
  n_24 :
  Cpop();
  r_24 :
  Return();
  m_24 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  j_24 :
  Ccall(_stratego_x_33);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,21,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".i"));
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,22,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/postprocess"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/postprocess"),App0("TNil"))));
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,21);
  NotNULLd(1,22);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,21),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,22),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto r_48;
  r_48 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto s_48;
  s_48 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto t_48;
  t_48 :
  TestFunFC(d_18,&&fail,Egetd(2,6));
  Rpush(t_24);
  goto u_62;
  t_24 :
  goto s_24;
  u_62 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(u_24);
  v_62 :
  Cpush(x_24);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_24);
  goto v_62;
  y_24 :
  AllBuild();
  goto w_24;
  x_24 :
  Ccall(_stratego_j_33);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto z_24;
  w_24 :
  Cpop();
  z_24 :
  Return();
  u_24 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  s_24 :
  Ccall(_stratego_x_33);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,23,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".c"));
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Move(1,24,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/pp-instructions"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/pp-instructions"),App0("TNil"))));
  Ccall(_stratego_w_33);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,23);
  NotNULLd(1,24);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,23),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,24),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto c_49;
  c_49 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto d_49;
  d_49 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto e_49;
  e_49 :
  TestFunFC(d_18,&&fail,Egetd(2,6));
  Rpush(c_25);
  goto d_63;
  c_25 :
  goto b_25;
  d_63 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(f_25);
  e_63 :
  Cpush(j_25);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_25);
  goto e_63;
  l_25 :
  AllBuild();
  goto i_25;
  j_25 :
  Ccall(_stratego_j_33);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto m_25;
  i_25 :
  Cpop();
  m_25 :
  Return();
  f_25 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  b_25 :
  Ccall(_stratego_x_33);
  Epopd(2,6);
  Tpop();
  Epopd(1,24);
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_34)
  Epushd(0,3);
  Tdupl();
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("compiling"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_p_34);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(n_25);
  c_64 :
  Cpush(p_25);
  Ccall(_stratego_j_33);
  goto o_25;
  p_25 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Cpush(s_25);
  Epushd(1,2);
  MoveTop(1,1);
  goto h_63;
  h_63 :
  TestFunFC(v_25,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(u_25);
  goto d_64;
  u_25 :
  goto t_25;
  d_64 :
  Move(0,1,1,2);
  Return();
  t_25 :
  Epopd(1,2);
  goto r_25;
  s_25 :
  goto x_25;
  r_25 :
  Cpop();
  x_25 :
  OneNextSon();
  Rpush(a_26);
  goto c_64;
  a_26 :
  AllBuild();
  goto q_25;
  o_25 :
  Cpop();
  q_25 :
  Return();
  n_25 :
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_w_33);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".o"));
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_w_33);
  MoveTop(1,1);
  Move(0,3,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App2("Cons",ATmakeString("-c"),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(0,3),App0("Nil"))))),App0("TNil"))));
  MoveTop(1,1);
  goto l_63;
  l_63 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_63;
  m_63 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto n_63;
  n_63 :
  TestFunFC(d_18,&&fail,Egetd(1,5));
  Rpush(c_26);
  goto g_64;
  c_26 :
  goto b_26;
  g_64 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(d_26);
  h_64 :
  Cpush(f_26);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_26);
  goto h_64;
  g_26 :
  AllBuild();
  goto e_26;
  f_26 :
  Ccall(_stratego_j_33);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto h_26;
  e_26 :
  Cpop();
  h_26 :
  Return();
  d_26 :
  Ccall(_stratego_f_34);
  Return();
  b_26 :
  Epopd(1,5);
  Tpop();
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Epopd(0,3);
ENDPROC

PROC(_stratego_f_34)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("gcc"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_x_33);
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_34)
  Epushd(0,5);
  Tdupl();
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("linking"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_p_34);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(i_26);
  p_65 :
  Cpush(k_26);
  Ccall(_stratego_j_33);
  goto j_26;
  k_26 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Cpush(n_26);
  Epushd(1,2);
  MoveTop(1,1);
  goto p_64;
  p_64 :
  TestFunFC(t_26,&&s_26,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(r_26);
  goto q_65;
  s_26 :
  TestFunFC(v_26,&&u_26,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(r_26);
  goto r_65;
  u_26 :
  TestFunFC(n_17,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(r_26);
  goto s_65;
  r_26 :
  goto q_26;
  s_65 :
  Move(0,3,1,2);
  Return();
  q_26 :
  goto p_26;
  r_65 :
  Move(0,2,1,2);
  Return();
  p_26 :
  goto o_26;
  q_65 :
  Move(0,1,1,2);
  Return();
  o_26 :
  Epopd(1,2);
  goto m_26;
  n_26 :
  goto w_26;
  m_26 :
  Cpop();
  w_26 :
  OneNextSon();
  Rpush(x_26);
  goto p_65;
  x_26 :
  AllBuild();
  goto l_26;
  j_26 :
  Cpop();
  l_26 :
  Return();
  i_26 :
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_w_33);
  MoveTop(1,1);
  Move(0,4,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Cpush(z_26);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  goto y_26;
  z_26 :
  goto a_27;
  y_26 :
  Cpop();
  a_27 :
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(""));
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_w_33);
  MoveTop(1,1);
  Move(0,5,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(b_27);
  v_65 :
  Cpush(d_27);
  Ccall(_stratego_j_33);
  goto c_27;
  d_27 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_34);
  OneNextSon();
  Rpush(f_27);
  goto v_65;
  f_27 :
  AllBuild();
  goto e_27;
  c_27 :
  Cpop();
  e_27 :
  Return();
  b_27 :
  Ccall(_stratego_l_34);
  MoveTop(1,1);
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Cons",Egetd(0,4),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(0,5),App0("Nil")))),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(1,2);
  goto u_64;
  u_64 :
  TestFunFC(g_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto v_64;
  v_64 :
  TestFunFC(g_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto w_64;
  w_64 :
  TestFunFC(d_18,&&fail,Egetd(1,6));
  Rpush(h_27);
  goto x_65;
  h_27 :
  goto g_27;
  x_65 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(i_27);
  y_65 :
  Cpush(k_27);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_27);
  goto y_65;
  l_27 :
  AllBuild();
  goto j_27;
  k_27 :
  Ccall(_stratego_j_33);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto m_27;
  j_27 :
  Cpop();
  m_27 :
  Return();
  i_27 :
  Ccall(_stratego_f_34);
  Return();
  g_27 :
  Epopd(1,6);
  Tpop();
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_34)
  Epushd(0,1);
  Ccall(_stratego_m_33);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",Egetd(0,1),App0("TNil")))));
  Rpush(n_27);
  v_66 :
  Cpush(p_27);
  Epushd(1,7);
  MoveTop(1,1);
  goto c_66;
  c_66 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_66;
  d_66 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto e_66;
  e_66 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto f_66;
  f_66 :
  TestFunFC(l_4,&&fail,Egetd(1,6));
  goto g_66;
  g_66 :
  TestFunFC(d_18,&&fail,Egetd(1,7));
  Rpush(s_27);
  goto w_66;
  s_27 :
  goto q_27;
  w_66 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_i_34);
  Ccall(_stratego_n_33);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,2);
  Tset(App2("Cons",Egetd(2,1),Egetd(1,2)));
  Ccall(_stratego_i_34);
  Epopd(2,1);
  Return();
  q_27 :
  Epopd(1,7);
  goto o_27;
  p_27 :
  Ccall(_stratego_j_34);
  Rpush(u_27);
  goto v_66;
  u_27 :
  goto t_27;
  o_27 :
  Cpop();
  t_27 :
  Return();
  n_27 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_34)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(w_27);
  c_68 :
  Cpush(y_27);
  Epushd(1,7);
  MoveTop(1,1);
  goto a_67;
  a_67 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto b_67;
  b_67 :
  TestFunFC(m_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto c_67;
  c_67 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto d_67;
  d_67 :
  TestFunFC(d_18,&&fail,Egetd(1,7));
  Rpush(a_28);
  goto d_68;
  a_28 :
  goto z_27;
  d_68 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Rpush(b_28);
  goto c_68;
  b_28 :
  Return();
  z_27 :
  Epopd(1,7);
  goto x_27;
  y_27 :
  goto c_28;
  x_27 :
  Cpop();
  c_28 :
  Return();
  w_27 :
  MoveTop(0,2);
  goto f_67;
  f_67 :
  TestFunFC(g_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto g_67;
  g_67 :
  TestFunFC(l_4,&&fail,Egetd(0,3));
  goto h_67;
  h_67 :
  TestFunFC(g_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto i_67;
  i_67 :
  TestFunFC(d_18,&&fail,Egetd(0,6));
  Rpush(d_28);
  goto e_68;
  d_28 :
  goto v_27;
  e_68 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  v_27 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_j_34)
  Epushd(0,9);
  MoveTop(0,1);
  goto i_68;
  i_68 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto j_68;
  j_68 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto k_68;
  k_68 :
  TestFunFC(g_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto l_68;
  l_68 :
  TestFunFC(m_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto m_68;
  m_68 :
  TestFunFC(d_18,&&fail,Egetd(0,9));
  goto n_68;
  n_68 :
  TestInt(0,7,32,&&h_28);
  Cpush(j_28);
  Rpush(k_28);
  goto g_69;
  k_28 :
  goto i_28;
  j_28 :
  Rpush(m_28);
  goto i_69;
  m_28 :
  goto l_28;
  i_28 :
  Cpop();
  l_28 :
  goto g_28;
  h_28 :
  Rpush(g_28);
  goto i_69;
  g_28 :
  goto f_28;
  i_69 :
  Tdupl();
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",MakeInt(32),App0("TNil"))));
  Cpush(n_28);
  Tdupl();
  Ccall(_stratego_k_34);
  Cpop();
  Crestore();
  Cjump();
  n_28 :
  Tpop();
  NotNULLd(0,2);
  NotNULLd(0,7);
  NotNULLd(0,4);
  NotNULLd(0,8);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",App2("Cons",Egetd(0,7),Egetd(0,4)),App2("TCons",Egetd(0,8),App0("TNil")))));
  Return();
  f_28 :
  goto e_28;
  g_69 :
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_i_34);
  Ccall(_stratego_n_33);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,8);
  Tset(App2("TCons",App2("Cons",Egetd(1,1),Egetd(0,2)),App2("TCons",App0("Nil"),App2("TCons",Egetd(0,8),App0("TNil")))));
  Epopd(1,1);
  Return();
  e_28 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_k_34)
  Epushd(0,5);
  MoveTop(0,1);
  goto k_69;
  k_69 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto l_69;
  l_69 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto m_69;
  m_69 :
  TestFunFC(d_18,&&fail,Egetd(0,5));
  Rpush(p_28);
  goto t_69;
  p_28 :
  goto o_28;
  t_69 :
  Move(0,2,0,4);
  Return();
  o_28 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_l_34)
  Rpush(q_28);
  b_70 :
  Cpush(s_28);
  Ccall(_stratego_j_33);
  goto r_28;
  s_28 :
  Epushd(0,3);
  MoveTop(0,1);
  goto v_69;
  v_69 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(v_28);
  goto c_70;
  v_28 :
  goto u_28;
  c_70 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(w_28);
  d_70 :
  Cpush(y_28);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_28);
  goto d_70;
  z_28 :
  AllBuild();
  goto x_28;
  y_28 :
  Ccall(_stratego_j_33);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(b_29);
  goto b_70;
  b_29 :
  goto a_29;
  x_28 :
  Cpop();
  a_29 :
  Return();
  w_28 :
  Return();
  u_28 :
  Epopd(0,3);
  goto t_28;
  r_28 :
  Cpop();
  t_28 :
  Return();
  q_28 :
ENDPROC

PROC(_stratego_m_34)
  Epushd(0,5);
  MoveTop(0,1);
  goto q_70;
  q_70 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_70;
  r_70 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto s_70;
  s_70 :
  TestFunFC(d_18,&&fail,Egetd(0,5));
  Rpush(d_29);
  goto q_71;
  d_29 :
  goto c_29;
  q_71 :
  Tdupl();
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",App2("Cons",ATmakeString(".tree"),App2("Cons",ATmakeString(".tree1"),App2("Cons",ATmakeString(".s"),App2("Cons",ATmakeString(".s1"),App2("Cons",ATmakeString(".s2"),App2("Cons",ATmakeString(".so1"),App2("Cons",ATmakeString(".so2"),App2("Cons",ATmakeString(".so3"),App2("Cons",ATmakeString(".i1"),App2("Cons",ATmakeString(".i"),App2("Cons",ATmakeString(".o"),App0("Nil")))))))))))),App0("TNil"))));
  Rpush(e_29);
  r_71 :
  Epushd(1,7);
  MoveTop(1,1);
  goto l_70;
  l_70 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_70;
  m_70 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto n_70;
  n_70 :
  TestFunFC(l_4,&&i_29,Egetd(1,4));
  goto o_70;
  o_70 :
  TestFunFC(d_18,&&fail,Egetd(1,7));
  Rpush(h_29);
  goto s_71;
  i_29 :
  TestFunFC(m_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto p_70;
  p_70 :
  TestFunFC(d_18,&&fail,Egetd(1,7));
  Rpush(h_29);
  goto t_71;
  h_29 :
  goto g_29;
  t_71 :
  Epushd(2,5);
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,5),App0("TNil"))),App2("TCons",App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,6),App0("TNil"))),App0("TNil"))));
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_33);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(k_29);
  goto r_71;
  k_29 :
  OneNextSon();
  Ccall(_stratego_o_34);
  AllBuild();
  AllBuild();
  MoveTop(2,1);
  goto i_70;
  i_70 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_70;
  j_70 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto k_70;
  k_70 :
  TestFunFC(d_18,&&fail,Egetd(2,5));
  Rpush(l_29);
  goto u_71;
  l_29 :
  goto j_29;
  u_71 :
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("Cons",Egetd(2,2),Egetd(2,4)));
  Return();
  j_29 :
  Epopd(2,5);
  Return();
  g_29 :
  goto f_29;
  s_71 :
  Tset(App0("Nil"));
  Return();
  f_29 :
  Epopd(1,7);
  Return();
  e_29 :
  Ccall(_stratego_n_34);
  Tpop();
  Return();
  c_29 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_34)
  Epushd(0,1);
  MoveTop(0,1);
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("rm"),App2("TCons",App2("Cons",ATmakeString("-f"),Egetd(0,1)),App0("TNil"))));
  Ccall(_stratego_x_33);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_34)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_72;
  a_72 :
  TestFunFC(d_18,&&fail,Egetd(0,1));
  Rpush(n_29);
  goto c_72;
  n_29 :
  goto m_29;
  c_72 :
  Return();
  m_29 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_34)
  _ST_printnl();
ENDPROC

PROC(_stratego_q_34)
  _ST_exit();
ENDPROC

DOIT

