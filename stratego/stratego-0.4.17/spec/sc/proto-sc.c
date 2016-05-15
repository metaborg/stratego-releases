#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,n_24);
VARDECL(AFun,l_24);
VARDECL(AFun,k_23);
VARDECL(AFun,c_20);
VARDECL(AFun,s_19);
VARDECL(AFun,j_19);
VARDECL(AFun,e_18);
VARDECL(AFun,u_17);
VARDECL(AFun,b_17);
VARDECL(AFun,l_16);
VARDECL(AFun,v_15);
VARDECL(AFun,f_15);
VARDECL(AFun,w_14);
VARDECL(AFun,s_14);
VARDECL(AFun,l_4);
VARDECL(AFun,f_4);
VARDECL(AFun,j_1);
VARDECL(AFun,u_0);
VARDECL(AFun,m_0);
VARDECL(AFun,g_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_n_26);
PROCDECL(_stratego_o_26);
PROCDECL(_stratego_p_26);
PROCDECL(_stratego_q_26);
PROCDECL(_stratego_r_26);
PROCDECL(_stratego_s_26);
PROCDECL(_stratego_t_26);
PROCDECL(_stratego_u_26);
PROCDECL(_stratego_v_26);
PROCDECL(_stratego_w_26);
PROCDECL(_stratego_x_26);
PROCDECL(_stratego_y_26);
PROCDECL(_stratego_z_26);
PROCDECL(_stratego_a_27);
PROCDECL(_stratego_b_27);
PROCDECL(_stratego_c_27);
PROCDECL(_stratego_d_27);
PROCDECL(_stratego_e_27);
PROCDECL(_stratego_f_27);
PROCDECL(_stratego_g_27);
PROCDECL(_stratego_h_27);
PROCDECL(_stratego_i_27);
PROCDECL(_stratego_j_27);
PROCDECL(_stratego_k_27);
PROCDECL(_stratego_l_27);
PROCDECL(_stratego_m_27);
PROCDECL(_stratego_n_27);
PROCDECL(_stratego_o_27);
PROCDECL(_stratego_p_27);
PROCDECL(_stratego_q_27);
PROCDECL(_stratego_r_27);
PROCDECL(_stratego_s_27);
PROCDECL(_stratego_t_27);
PROCDECL(_stratego_u_27);
PROCDECL(_stratego_v_27);
PROCDECL(_stratego_w_27);

PROC(_stratego_init_afuns)
  MOVE(n_24,ATmakeAFun("CLibDir",1,0));
  MOVE(l_24,ATmakeAFun("Dir",1,0));
  MOVE(k_23,ATmakeAFun("CInclDir",1,0));
  MOVE(c_20,ATmakeAFun("Specification",1,0));
  MOVE(s_19,ATmakeAFun("Main",1,0));
  MOVE(j_19,ATmakeAFun("AST",0,0));
  MOVE(e_18,ATmakeAFun("TNil",0,0));
  MOVE(u_17,ATmakeAFun("Output",1,0));
  MOVE(b_17,ATmakeAFun("ExecDir",1,0));
  MOVE(l_16,ATmakeAFun("InclDir",1,0));
  MOVE(v_15,ATmakeAFun("Verbose",0,0));
  MOVE(f_15,ATmakeAFun("DeclVersion",1,0));
  MOVE(w_14,ATmakeAFun("Version",0,0));
  MOVE(s_14,ATmakeAFun("Help",0,0));
  MOVE(l_4,ATmakeAFun("Nil",0,0));
  MOVE(f_4,ATmakeAFun("Input",1,0));
  MOVE(j_1,ATmakeAFun("NORM",0,0));
  MOVE(u_0,ATmakeAFun("Undefined",1,0));
  MOVE(m_0,ATmakeAFun("Cons",2,0));
  MOVE(g_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_n_26);
ENDPROC

PROC(_stratego_n_26)
  Cpush(b_0);
  Ccall(_stratego_o_26);
  goto a_0;
  b_0 :
  Ccall(_stratego_x_26);
  Tset(MakeInt(1));
  Ccall(_stratego_w_27);
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
  Ccall(_stratego_v_26);
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
  Ccall(_stratego_w_26);
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
  Ccall(_stratego_x_26);
  Tset(MakeInt(1));
  Ccall(_stratego_w_27);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  goto e_0;
  f_0 :
  Ccontinue(a_1);
  Ccall(_stratego_z_26);
  Ccall(_stratego_b_27);
  Ccall(_stratego_e_27);
  Ccall(_stratego_g_27);
  Ccall(_stratego_j_27);
  Ccall(_stratego_k_27);
  Ccall(_stratego_m_27);
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
  Ccall(_stratego_u_27);
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
  Ccall(_stratego_s_27);
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  goto b_1;
  c_1 :
  goto m_1;
  b_1 :
  Cpop();
  m_1 :
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("compilation succeeded"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_v_27);
  Tset(MakeInt(0));
  Ccall(_stratego_w_27);
  goto e_0;
  a_1 :
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("compilation failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_v_27);
  Tset(MakeInt(1));
  Ccall(_stratego_w_27);
  goto n_1;
  e_0 :
  Cpop();
  n_1 :
ENDPROC

PROC(_stratego_o_26)
  Epushd(0,4);
  Tdupl();
  Epushd(1,1);
  Rpush(o_1);
  o_9 :
  Cpush(q_1);
  Ccall(_stratego_p_26);
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
  goto p_9;
  y_1 :
  goto w_1;
  x_1 :
  Rpush(a_2);
  goto q_9;
  a_2 :
  goto z_1;
  w_1 :
  Cpop();
  z_1 :
  goto u_1;
  v_1 :
  Rpush(u_1);
  goto q_9;
  u_1 :
  goto t_1;
  q_9 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(b_2);
  goto o_9;
  b_2 :
  Return();
  t_1 :
  goto s_1;
  p_9 :
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
  y_9 :
  Cpush(f_2);
  Ccall(_stratego_p_26);
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
  goto z_9;
  n_2 :
  goto l_2;
  m_2 :
  Rpush(p_2);
  goto b_10;
  p_2 :
  goto o_2;
  l_2 :
  Cpop();
  o_2 :
  goto j_2;
  k_2 :
  Rpush(j_2);
  goto b_10;
  j_2 :
  goto i_2;
  b_10 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(q_2);
  goto y_9;
  q_2 :
  Return();
  i_2 :
  goto h_2;
  z_9 :
  Epushd(3,3);
  MoveTop(3,1);
  goto t_5;
  t_5 :
  TestFunFC(m_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_2);
  goto a_10;
  s_2 :
  goto r_2;
  a_10 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_2);
  goto y_9;
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
  d_10 :
  Cpush(w_2);
  Ccall(_stratego_p_26);
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
  goto e_10;
  e_3 :
  goto c_3;
  d_3 :
  Rpush(g_3);
  goto g_10;
  g_3 :
  goto f_3;
  c_3 :
  Cpop();
  f_3 :
  goto a_3;
  b_3 :
  Rpush(a_3);
  goto g_10;
  a_3 :
  goto z_2;
  g_10 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(h_3);
  goto d_10;
  h_3 :
  Return();
  z_2 :
  goto y_2;
  e_10 :
  Epushd(3,3);
  MoveTop(3,1);
  goto a_6;
  a_6 :
  TestFunFC(m_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_3);
  goto f_10;
  j_3 :
  goto i_3;
  f_10 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_3);
  goto d_10;
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
  j_10 :
  Cpush(n_3);
  Cpush(p_3);
  Ccall(_stratego_p_26);
  goto o_3;
  p_3 :
  Cpush(s_3);
  Ccall(_stratego_q_26);
  goto r_3;
  s_3 :
  Ccall(_stratego_u_26);
  goto t_3;
  r_3 :
  Cpop();
  t_3 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_3);
  goto j_10;
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
  goto k_10;
  x_3 :
  goto w_3;
  k_10 :
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
  l_10 :
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
  goto m_10;
  e_4 :
  goto d_4;
  m_10 :
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
  goto l_10;
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

PROC(_stratego_p_26)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_10;
  q_10 :
  TestFunFC(l_4,&&fail,Egetd(0,1));
  Rpush(k_4);
  goto s_10;
  k_4 :
  goto j_4;
  s_10 :
  Return();
  j_4 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_26)
  Epushd(0,5);
  MoveTop(0,3);
  goto q_12;
  q_12 :
  TestFunFC(m_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto r_12;
  r_12 :
  TestFunFC(m_0,&&y_4,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(a_5);
  Rpush(b_5);
  goto t_15;
  b_5 :
  goto z_4;
  a_5 :
  Ccontinue(c_5);
  Rpush(d_5);
  goto x_15;
  d_5 :
  goto z_4;
  c_5 :
  Ccontinue(g_5);
  Rpush(i_5);
  goto a_16;
  i_5 :
  goto z_4;
  g_5 :
  Ccontinue(j_5);
  Rpush(l_5);
  goto d_16;
  l_5 :
  goto z_4;
  j_5 :
  Ccontinue(m_5);
  Rpush(n_5);
  goto g_16;
  n_5 :
  goto z_4;
  m_5 :
  Ccontinue(p_5);
  Rpush(q_5);
  goto j_16;
  q_5 :
  goto z_4;
  p_5 :
  Ccontinue(r_5);
  Rpush(s_5);
  goto m_16;
  s_5 :
  goto z_4;
  r_5 :
  Ccontinue(w_5);
  Rpush(x_5);
  goto p_16;
  x_5 :
  goto z_4;
  w_5 :
  Ccontinue(y_5);
  Rpush(z_5);
  goto u_16;
  z_5 :
  goto z_4;
  y_5 :
  Ccontinue(d_6);
  Rpush(e_6);
  goto y_16;
  e_6 :
  goto z_4;
  d_6 :
  Rpush(h_6);
  goto c_17;
  h_6 :
  goto f_6;
  z_4 :
  Cpop();
  f_6 :
  goto x_4;
  y_4 :
  Cpush(l_6);
  Rpush(q_6);
  goto j_16;
  q_6 :
  goto k_6;
  l_6 :
  Ccontinue(r_6);
  Rpush(a_7);
  goto m_16;
  a_7 :
  goto k_6;
  r_6 :
  Rpush(c_7);
  goto c_17;
  c_7 :
  goto b_7;
  k_6 :
  Cpop();
  b_7 :
  goto x_4;
  x_4 :
  goto w_4;
  c_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_12;
  o_12 :
  TestStr(1,1,"--ast",&&fail);
  Rpush(e_7);
  goto d_17;
  e_7 :
  goto d_7;
  d_17 :
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
  y_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_12;
  k_12 :
  TestStr(1,1,"-m",&&fail);
  Rpush(g_7);
  goto z_16;
  g_7 :
  goto f_7;
  z_16 :
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
  u_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_12;
  g_12 :
  TestStr(1,1,"--main",&&fail);
  Rpush(i_7);
  goto v_16;
  i_7 :
  goto h_7;
  v_16 :
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
  p_16 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto b_12;
  b_12 :
  TestStr(2,1,"-i",&&fail);
  Rpush(k_7);
  goto q_16;
  k_7 :
  goto j_7;
  q_16 :
  Return();
  j_7 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_r_26);
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
  m_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_11;
  y_11 :
  TestStr(1,1,"-norm",&&fail);
  Rpush(m_7);
  goto n_16;
  m_7 :
  goto l_7;
  n_16 :
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
  j_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_11;
  v_11 :
  TestStr(1,1,"-CC",&&fail);
  Rpush(p_7);
  goto k_16;
  p_7 :
  goto n_7;
  k_16 :
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
  g_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_11;
  s_11 :
  TestStr(1,1,"-CL",&&fail);
  Rpush(r_7);
  goto h_16;
  r_7 :
  goto q_7;
  h_16 :
  Return();
  q_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Ignore"));
  NotNULLd(0,2);
  Tset(App2("Cons",App0("Ignore"),Egetd(0,2)));
  Return();
  q_4 :
  goto p_4;
  d_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_11;
  p_11 :
  TestStr(1,1,"-CI",&&fail);
  Rpush(t_7);
  goto e_16;
  t_7 :
  goto s_7;
  e_16 :
  Return();
  s_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Ignore"));
  NotNULLd(0,2);
  Tset(App2("Cons",App0("Ignore"),Egetd(0,2)));
  Return();
  p_4 :
  goto o_4;
  a_16 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_11;
  m_11 :
  TestStr(1,1,"--Include",&&fail);
  Rpush(v_7);
  goto b_16;
  v_7 :
  goto u_7;
  b_16 :
  Return();
  u_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Ignore"));
  NotNULLd(0,2);
  Tset(App2("Cons",App0("Ignore"),Egetd(0,2)));
  Return();
  o_4 :
  goto n_4;
  x_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_11;
  j_11 :
  TestStr(1,1,"-I",&&fail);
  Rpush(x_7);
  goto y_15;
  x_7 :
  goto w_7;
  y_15 :
  Return();
  w_7 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Ignore"));
  NotNULLd(0,2);
  Tset(App2("Cons",App0("Ignore"),Egetd(0,2)));
  Return();
  n_4 :
  goto m_4;
  t_15 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_11;
  f_11 :
  TestStr(1,1,"-e",&&fail);
  Rpush(z_7);
  goto u_15;
  z_7 :
  goto y_7;
  u_15 :
  Return();
  y_7 :
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

PROC(_stratego_r_26)
  Ccall(_stratego_s_26);
  Cpush(b_8);
  Rpush(c_8);
  l_17 :
  Cpush(h_8);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_8);
  goto l_17;
  m_8 :
  AllBuild();
  goto f_8;
  h_8 :
  Epushd(0,3);
  MoveTop(0,1);
  goto g_17;
  g_17 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto h_17;
  h_17 :
  TestInt(0,2,46,&&fail);
  Rpush(p_8);
  goto m_17;
  p_8 :
  goto o_8;
  m_17 :
  Tset(App0("Nil"));
  Return();
  o_8 :
  Epopd(0,3);
  goto n_8;
  f_8 :
  Cpop();
  n_8 :
  Return();
  c_8 :
  goto a_8;
  b_8 :
  goto s_8;
  a_8 :
  Cpop();
  s_8 :
  Ccall(_stratego_t_26);
ENDPROC

PROC(_stratego_s_26)
  _ST_explode_string();
ENDPROC

PROC(_stratego_t_26)
  _ST_implode_string();
ENDPROC

PROC(_stratego_u_26)
  Epushd(0,5);
  MoveTop(0,3);
  goto o_24;
  o_24 :
  TestFunFC(m_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto p_24;
  p_24 :
  TestFunFC(m_0,&&w_9,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(c_10);
  Rpush(h_10);
  goto q_30;
  h_10 :
  goto x_9;
  c_10 :
  Ccontinue(i_10);
  Rpush(n_10);
  goto t_30;
  n_10 :
  goto x_9;
  i_10 :
  Ccontinue(o_10);
  Rpush(p_10);
  goto w_30;
  p_10 :
  goto x_9;
  o_10 :
  Ccontinue(t_10);
  Rpush(u_10);
  goto z_30;
  u_10 :
  goto x_9;
  t_10 :
  Ccontinue(v_10);
  Rpush(w_10);
  goto c_31;
  w_10 :
  goto x_9;
  v_10 :
  Ccontinue(x_10);
  Rpush(y_10);
  goto f_31;
  y_10 :
  goto x_9;
  x_10 :
  Ccontinue(z_10);
  Rpush(a_11);
  goto j_31;
  a_11 :
  goto x_9;
  z_10 :
  Ccontinue(b_11);
  Rpush(c_11);
  goto n_31;
  c_11 :
  goto x_9;
  b_11 :
  Ccontinue(d_11);
  Rpush(e_11);
  goto r_31;
  e_11 :
  goto x_9;
  d_11 :
  Ccontinue(g_11);
  Rpush(h_11);
  goto v_31;
  h_11 :
  goto x_9;
  g_11 :
  Ccontinue(i_11);
  Rpush(k_11);
  goto z_31;
  k_11 :
  goto x_9;
  i_11 :
  Ccontinue(l_11);
  Rpush(n_11);
  goto c_32;
  n_11 :
  goto x_9;
  l_11 :
  Ccontinue(o_11);
  Rpush(q_11);
  goto f_32;
  q_11 :
  goto x_9;
  o_11 :
  Ccontinue(r_11);
  Rpush(t_11);
  goto i_32;
  t_11 :
  goto x_9;
  r_11 :
  Rpush(w_11);
  goto l_32;
  w_11 :
  goto u_11;
  x_9 :
  Cpop();
  u_11 :
  goto v_9;
  w_9 :
  Cpush(z_11);
  Rpush(a_12);
  goto q_30;
  a_12 :
  goto x_11;
  z_11 :
  Ccontinue(c_12);
  Rpush(d_12);
  goto t_30;
  d_12 :
  goto x_11;
  c_12 :
  Ccontinue(e_12);
  Rpush(f_12);
  goto w_30;
  f_12 :
  goto x_11;
  e_12 :
  Ccontinue(h_12);
  Rpush(i_12);
  goto z_30;
  i_12 :
  goto x_11;
  h_12 :
  Ccontinue(j_12);
  Rpush(l_12);
  goto c_31;
  l_12 :
  goto x_11;
  j_12 :
  Ccontinue(m_12);
  Rpush(n_12);
  goto z_31;
  n_12 :
  goto x_11;
  m_12 :
  Ccontinue(p_12);
  Rpush(x_12);
  goto c_32;
  x_12 :
  goto x_11;
  p_12 :
  Ccontinue(y_12);
  Rpush(z_12);
  goto f_32;
  z_12 :
  goto x_11;
  y_12 :
  Ccontinue(b_13);
  Rpush(c_13);
  goto i_32;
  c_13 :
  goto x_11;
  b_13 :
  Rpush(e_13);
  goto l_32;
  e_13 :
  goto d_13;
  x_11 :
  Cpop();
  d_13 :
  goto v_9;
  v_9 :
  goto u_9;
  l_32 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_24;
  k_24 :
  TestStr(1,1,"-?",&&fail);
  Rpush(g_13);
  goto m_32;
  g_13 :
  goto f_13;
  m_32 :
  Return();
  f_13 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  u_9 :
  goto t_9;
  i_32 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_24;
  h_24 :
  TestStr(1,1,"-h",&&fail);
  Rpush(j_13);
  goto j_32;
  j_13 :
  goto h_13;
  j_32 :
  Return();
  h_13 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  t_9 :
  goto s_9;
  f_32 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_24;
  c_24 :
  TestStr(1,1,"--help",&&fail);
  Rpush(l_13);
  goto g_32;
  l_13 :
  goto k_13;
  g_32 :
  Return();
  k_13 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  s_9 :
  goto r_9;
  c_32 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_23;
  y_23 :
  TestStr(1,1,"-s",&&fail);
  Rpush(n_13);
  goto d_32;
  n_13 :
  goto m_13;
  d_32 :
  Return();
  m_13 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  r_9 :
  goto n_9;
  z_31 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_23;
  v_23 :
  TestStr(1,1,"-b",&&fail);
  Rpush(q_13);
  goto a_32;
  q_13 :
  goto p_13;
  a_32 :
  Return();
  p_13 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  n_9 :
  goto l_9;
  v_31 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_23;
  o_23 :
  TestStr(1,1,"--output",&&fail);
  Rpush(s_13);
  goto w_31;
  s_13 :
  goto r_13;
  w_31 :
  Return();
  r_13 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  l_9 :
  goto g_9;
  r_31 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_20;
  f_20 :
  TestStr(1,1,"-o",&&fail);
  Rpush(v_13);
  goto s_31;
  v_13 :
  goto t_13;
  s_31 :
  Return();
  t_13 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  g_9 :
  goto f_9;
  n_31 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_20;
  b_20 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_13);
  goto o_31;
  x_13 :
  goto w_13;
  o_31 :
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
  f_9 :
  goto e_9;
  j_31 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_19;
  x_19 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_13);
  goto k_31;
  z_13 :
  goto y_13;
  k_31 :
  Return();
  y_13 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  e_9 :
  goto d_9;
  f_31 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_19;
  t_19 :
  TestStr(1,1,"@version",&&fail);
  Rpush(c_14);
  goto g_31;
  c_14 :
  goto b_14;
  g_31 :
  Return();
  b_14 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  d_9 :
  goto c_9;
  c_31 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_19;
  q_19 :
  TestStr(1,1,"--version",&&fail);
  Rpush(e_14);
  goto d_31;
  e_14 :
  goto d_14;
  d_31 :
  Return();
  d_14 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  c_9 :
  goto b_9;
  z_30 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_18;
  v_18 :
  TestStr(1,1,"-v",&&fail);
  Rpush(h_14);
  goto a_31;
  h_14 :
  goto g_14;
  a_31 :
  Return();
  g_14 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_9 :
  goto a_9;
  w_30 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_18;
  m_18 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(j_14);
  goto x_30;
  j_14 :
  goto i_14;
  x_30 :
  Return();
  i_14 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  a_9 :
  goto x_8;
  t_30 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_18;
  g_18 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(m_14);
  goto u_30;
  m_14 :
  goto l_14;
  u_30 :
  Return();
  l_14 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_8 :
  goto w_8;
  q_30 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_18;
  d_18 :
  TestStr(1,1,"-S",&&fail);
  Rpush(o_14);
  goto r_30;
  o_14 :
  goto n_14;
  r_30 :
  Return();
  n_14 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  w_8 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_v_26)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_32;
  p_32 :
  TestFunFC(s_14,&&fail,Egetd(0,1));
  Rpush(r_14);
  goto r_32;
  r_14 :
  goto p_14;
  r_32 :
  Return();
  p_14 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_26)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_32;
  t_32 :
  TestFunFC(w_14,&&fail,Egetd(0,1));
  Rpush(v_14);
  goto v_32;
  v_14 :
  goto u_14;
  v_32 :
  Return();
  u_14 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_26)
  Ccall(_stratego_y_26);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Usage: sc [options] -i file
"),App2("Cons",ATmakeString("Options:
"),App2("Cons",ATmakeString("  -i spec     Compile specification spec
"),App2("Cons",ATmakeString("  -o target   Name executable target
"),App2("Cons",ATmakeString("  --main s    Name main strategy [default: main]
"),App2("Cons",ATmakeString("  -I dir      Look in dir for imported Stratego modules
"),App2("Cons",ATmakeString("  -CI dir     Look in dir for C include files
"),App2("Cons",ATmakeString("  -CL dir     Look in dir for C object libraries
"),App2("Cons",ATmakeString("  --ast       Output abstract syntax of specification
"),App2("Cons",ATmakeString("  -h|--help   Display this message"),App0("Nil"))))))))))),App0("TNil"))));
  Ccall(_stratego_v_27);
ENDPROC

PROC(_stratego_y_26)
  Epushd(0,1);
  Cpush(y_14);
  Rpush(z_14);
  g_33 :
  Cpush(c_15);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_32;
  x_32 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_32;
  y_32 :
  TestFunFC(f_15,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_15);
  goto h_33;
  e_15 :
  goto d_15;
  h_33 :
  Move(0,1,1,3);
  Return();
  d_15 :
  Epopd(1,4);
  goto b_15;
  c_15 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_15);
  goto g_33;
  h_15 :
  AllBuild();
  goto g_15;
  b_15 :
  Cpop();
  g_15 :
  Return();
  z_14 :
  goto x_14;
  y_14 :
  Tset(ATmakeString(""));
  Tdupl();
  Tset(ATmakeString(""));
  MoveTop(0,1);
  Tpop();
  goto j_15;
  x_14 :
  Cpop();
  j_15 :
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("sc version "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_v_27);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_26)
  Cpush(l_15);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tdupl();
  m_15 :
  TestFunTop(m_0);
  Cpush(n_15);
  Arg(0);
  Ccall(_stratego_a_27);
  Tpop();
  Cpop();
  goto o_15;
  n_15 :
  Arg(1);
  Tdrop();
  goto m_15;
  o_15 :
  Tpop();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_26);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  goto k_15;
  l_15 :
  goto p_15;
  k_15 :
  Cpop();
  p_15 :
ENDPROC

PROC(_stratego_a_27)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_33;
  l_33 :
  TestFunFC(v_15,&&fail,Egetd(0,1));
  Rpush(s_15);
  goto n_33;
  s_15 :
  goto r_15;
  n_33 :
  Return();
  r_15 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_27)
  Epushd(0,3);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(w_15);
  h_36 :
  Cpush(c_16);
  Epushd(1,4);
  MoveTop(1,1);
  goto p_33;
  p_33 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto q_33;
  q_33 :
  TestFunFC(l_16,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_16);
  goto i_36;
  i_16 :
  goto f_16;
  i_36 :
  Move(0,3,1,3);
  Return();
  f_16 :
  Epopd(1,4);
  goto z_15;
  c_16 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_16);
  goto h_36;
  r_16 :
  AllBuild();
  goto o_16;
  z_15 :
  Cpop();
  o_16 :
  Return();
  w_15 :
  Rpush(s_16);
  j_36 :
  Cpush(w_16);
  Epushd(1,4);
  MoveTop(1,1);
  goto s_33;
  s_33 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto t_33;
  t_33 :
  TestFunFC(b_17,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(a_17);
  goto k_36;
  a_17 :
  goto x_16;
  k_36 :
  Move(0,1,1,3);
  Return();
  x_16 :
  Epopd(1,4);
  goto t_16;
  w_16 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_17);
  goto j_36;
  f_17 :
  AllBuild();
  goto e_17;
  t_16 :
  Cpop();
  e_17 :
  Return();
  s_16 :
  Cpush(o_17);
  Rpush(p_17);
  l_36 :
  Cpush(r_17);
  Epushd(1,4);
  MoveTop(1,1);
  goto v_33;
  v_33 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto w_33;
  w_33 :
  TestFunFC(u_17,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_17);
  goto m_36;
  t_17 :
  goto s_17;
  m_36 :
  Move(0,2,1,3);
  Return();
  s_17 :
  Epopd(1,4);
  goto q_17;
  r_17 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_17);
  goto l_36;
  w_17 :
  AllBuild();
  goto v_17;
  q_17 :
  Cpop();
  v_17 :
  Return();
  p_17 :
  goto n_17;
  o_17 :
  goto x_17;
  n_17 :
  Cpop();
  x_17 :
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_27);
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
  Ccall(_stratego_c_27);
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
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
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
  Ccall(_stratego_c_27);
  MoveTop(2,1);
  Tset(App0("TNil"));
  Cpush(z_17);
  NotNULLd(0,2);
  Tset(App2("Cons",ATmakeString("-dep"),App2("Cons",Egetd(0,2),App0("Nil"))));
  goto y_17;
  z_17 :
  Tset(App0("Nil"));
  goto a_18;
  y_17 :
  Cpop();
  a_18 :
  MoveTop(2,2);
  NotNULLd(2,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",App2("Cons",ATmakeString("--silent"),Egetd(0,3)),App0("TNil"))));
  MoveTop(2,3);
  goto f_34;
  f_34 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto g_34;
  g_34 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto h_34;
  h_34 :
  TestFunFC(e_18,&&fail,Egetd(2,7));
  Rpush(c_18);
  goto t_36;
  c_18 :
  goto b_18;
  t_36 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(f_18);
  u_36 :
  Cpush(i_18);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_18);
  goto u_36;
  j_18 :
  AllBuild();
  goto h_18;
  i_18 :
  Ccall(_stratego_p_26);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto k_18;
  h_18 :
  Cpop();
  k_18 :
  Return();
  f_18 :
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,1),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,2),App0("Nil"))))),App0("TNil"))));
  Epopd(3,1);
  Return();
  b_18 :
  MoveTop(2,8);
  goto k_34;
  k_34 :
  TestFunFC(g_0,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  MoveArg(2,10,2,8,1);
  goto l_34;
  l_34 :
  TestFunFC(g_0,&&fail,Egetd(2,10));
  MoveArg(2,11,2,10,0);
  MoveArg(2,12,2,10,1);
  goto m_34;
  m_34 :
  TestFunFC(e_18,&&fail,Egetd(2,12));
  Rpush(n_18);
  goto w_36;
  n_18 :
  goto l_18;
  w_36 :
  Epushd(3,1);
  NotNULLd(2,9);
  Tset(Egetd(2,9));
  Rpush(o_18);
  x_36 :
  Cpush(q_18);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_18);
  goto x_36;
  r_18 :
  AllBuild();
  goto p_18;
  q_18 :
  Ccall(_stratego_p_26);
  NotNULLd(2,11);
  Tset(Egetd(2,11));
  goto s_18;
  p_18 :
  Cpop();
  s_18 :
  Return();
  o_18 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  l_18 :
  Ccall(_stratego_d_27);
  Epopd(2,12);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Epopd(0,3);
ENDPROC

PROC(_stratego_c_27)
  Epushd(0,5);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_26);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_26);
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto a_37;
  a_37 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto b_37;
  b_37 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_37;
  c_37 :
  TestFunFC(e_18,&&fail,Egetd(0,5));
  Rpush(u_18);
  goto k_37;
  u_18 :
  goto t_18;
  k_37 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(w_18);
  l_37 :
  Cpush(y_18);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_18);
  goto l_37;
  z_18 :
  AllBuild();
  goto x_18;
  y_18 :
  Ccall(_stratego_p_26);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto a_19;
  x_18 :
  Cpop();
  a_19 :
  Return();
  w_18 :
  Ccall(_stratego_t_26);
  Return();
  t_18 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_d_27)
  _ST_call();
ENDPROC

PROC(_stratego_e_27)
  Epushd(0,2);
  Cpush(c_19);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tdupl();
  d_19 :
  TestFunTop(m_0);
  Cpush(e_19);
  Arg(0);
  Ccall(_stratego_f_27);
  Tpop();
  Cpop();
  goto f_19;
  e_19 :
  Arg(1);
  Tdrop();
  goto d_19;
  f_19 :
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
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("abstract syntax written to "),App2("Cons",Egetd(0,1),App2("Cons",Egetd(0,2),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_v_27);
  Tset(MakeInt(0));
  Ccall(_stratego_w_27);
  goto b_19;
  c_19 :
  goto g_19;
  b_19 :
  Cpop();
  g_19 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_f_27)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_37;
  w_37 :
  TestFunFC(j_19,&&fail,Egetd(0,1));
  Rpush(i_19);
  goto y_37;
  i_19 :
  goto h_19;
  y_37 :
  Return();
  h_19 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_27)
  Epushd(0,1);
  Cpush(l_19);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(m_19);
  d_40 :
  Cpush(o_19);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_38;
  a_38 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_38;
  b_38 :
  TestFunFC(s_19,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_19);
  goto e_40;
  r_19 :
  goto p_19;
  e_40 :
  Move(0,1,1,3);
  Return();
  p_19 :
  Epopd(1,4);
  goto n_19;
  o_19 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_19);
  goto d_40;
  v_19 :
  AllBuild();
  goto u_19;
  n_19 :
  Cpop();
  u_19 :
  Return();
  m_19 :
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_27);
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
  Ccall(_stratego_c_27);
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
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
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
  goto j_38;
  j_38 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto k_38;
  k_38 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto l_38;
  l_38 :
  TestFunFC(e_18,&&fail,Egetd(2,5));
  Rpush(y_19);
  goto h_40;
  y_19 :
  goto w_19;
  h_40 :
  Epushd(3,1);
  Tdupl();
  Epushd(4,2);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_h_27);
  MoveTop(4,1);
  goto i_38;
  i_38 :
  TestFunFC(c_20,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(a_20);
  goto i_40;
  a_20 :
  goto z_19;
  i_40 :
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
  z_19 :
  Epopd(4,2);
  Tpop();
  Tdupl();
  NotNULLd(2,4);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_i_27);
  Tpop();
  Epopd(3,1);
  Return();
  w_19 :
  Epopd(2,5);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  goto k_19;
  l_19 :
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
  Ccall(_stratego_c_27);
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
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
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
  goto q_38;
  q_38 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto r_38;
  r_38 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_38;
  s_38 :
  TestFunFC(e_18,&&fail,Egetd(2,5));
  Rpush(g_20);
  goto n_40;
  g_20 :
  goto e_20;
  n_40 :
  Epushd(3,1);
  Tdupl();
  Epushd(4,1);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_h_27);
  MoveTop(4,1);
  Move(3,1,4,1);
  Epopd(4,1);
  Tpop();
  Tdupl();
  NotNULLd(2,4);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_i_27);
  Tpop();
  Epopd(3,1);
  Return();
  e_20 :
  Epopd(2,5);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  goto d_20;
  k_19 :
  Cpop();
  d_20 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_27)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_i_27)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_j_27)
  Epushd(0,1);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(h_20);
  r_51 :
  Cpush(j_20);
  Ccall(_stratego_p_26);
  goto i_20;
  j_20 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Cpush(m_20);
  Epushd(1,2);
  MoveTop(1,1);
  goto q_40;
  q_40 :
  TestFunFC(b_17,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(o_20);
  goto s_51;
  o_20 :
  goto n_20;
  s_51 :
  Move(0,1,1,2);
  Return();
  n_20 :
  Epopd(1,2);
  goto l_20;
  m_20 :
  goto p_20;
  l_20 :
  Cpop();
  p_20 :
  OneNextSon();
  Rpush(q_20);
  goto r_51;
  q_20 :
  AllBuild();
  goto k_20;
  i_20 :
  Cpop();
  k_20 :
  Return();
  h_20 :
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(1,18);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
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
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
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
  Ccall(_stratego_c_27);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,1),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,2),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto z_40;
  z_40 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto a_41;
  a_41 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto b_41;
  b_41 :
  TestFunFC(e_18,&&fail,Egetd(2,6));
  Rpush(s_20);
  goto z_51;
  s_20 :
  goto r_20;
  z_51 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(t_20);
  a_52 :
  Cpush(v_20);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_20);
  goto a_52;
  w_20 :
  AllBuild();
  goto u_20;
  v_20 :
  Ccall(_stratego_p_26);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto x_20;
  u_20 :
  Cpop();
  x_20 :
  Return();
  t_20 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  r_20 :
  Ccall(_stratego_d_27);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
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
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
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
  Ccall(_stratego_c_27);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,3),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,4),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto k_41;
  k_41 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto l_41;
  l_41 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto m_41;
  m_41 :
  TestFunFC(e_18,&&fail,Egetd(2,6));
  Rpush(z_20);
  goto i_52;
  z_20 :
  goto y_20;
  i_52 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(a_21);
  j_52 :
  Cpush(c_21);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_21);
  goto j_52;
  d_21 :
  AllBuild();
  goto b_21;
  c_21 :
  Ccall(_stratego_p_26);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto e_21;
  b_21 :
  Cpop();
  e_21 :
  Return();
  a_21 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  y_20 :
  Ccall(_stratego_d_27);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
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
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
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
  Ccall(_stratego_c_27);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,5),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,6),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto v_41;
  v_41 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto w_41;
  w_41 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto x_41;
  x_41 :
  TestFunFC(e_18,&&fail,Egetd(2,6));
  Rpush(g_21);
  goto r_52;
  g_21 :
  goto f_21;
  r_52 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(h_21);
  s_52 :
  Cpush(j_21);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_21);
  goto s_52;
  k_21 :
  AllBuild();
  goto i_21;
  j_21 :
  Ccall(_stratego_p_26);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto l_21;
  i_21 :
  Cpop();
  l_21 :
  Return();
  h_21 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  f_21 :
  Ccall(_stratego_d_27);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
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
  Tset(ATmakeString(".so1"));
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
  MoveTop(2,1);
  Move(1,8,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/optimizer"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/optimizer"),App0("TNil"))));
  Ccall(_stratego_c_27);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,7);
  NotNULLd(1,8);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,7),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,8),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto g_42;
  g_42 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto h_42;
  h_42 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto i_42;
  i_42 :
  TestFunFC(e_18,&&fail,Egetd(2,6));
  Rpush(n_21);
  goto a_53;
  n_21 :
  goto m_21;
  a_53 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(o_21);
  b_53 :
  Cpush(q_21);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_21);
  goto b_53;
  r_21 :
  AllBuild();
  goto p_21;
  q_21 :
  Ccall(_stratego_p_26);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto s_21;
  p_21 :
  Cpop();
  s_21 :
  Return();
  o_21 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  m_21 :
  Ccall(_stratego_d_27);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
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
  Tset(ATmakeString(".so2"));
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
  MoveTop(2,1);
  Move(1,10,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/matching-tree"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/matching-tree"),App0("TNil"))));
  Ccall(_stratego_c_27);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,9);
  NotNULLd(1,10);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,9),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,10),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto r_42;
  r_42 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto s_42;
  s_42 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto u_42;
  u_42 :
  TestFunFC(e_18,&&fail,Egetd(2,6));
  Rpush(u_21);
  goto j_53;
  u_21 :
  goto t_21;
  j_53 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(v_21);
  k_53 :
  Cpush(x_21);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_21);
  goto k_53;
  y_21 :
  AllBuild();
  goto w_21;
  x_21 :
  Ccall(_stratego_p_26);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto z_21;
  w_21 :
  Cpop();
  z_21 :
  Return();
  v_21 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  t_21 :
  Ccall(_stratego_d_27);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
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
  Tset(ATmakeString(".so1"));
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
  MoveTop(2,1);
  Move(1,12,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/optimizer"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/optimizer"),App0("TNil"))));
  Ccall(_stratego_c_27);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,11);
  NotNULLd(1,12);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,11),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,12),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto d_43;
  d_43 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto e_43;
  e_43 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto f_43;
  f_43 :
  TestFunFC(e_18,&&fail,Egetd(2,6));
  Rpush(b_22);
  goto s_53;
  b_22 :
  goto a_22;
  s_53 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(c_22);
  t_53 :
  Cpush(e_22);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_22);
  goto t_53;
  f_22 :
  AllBuild();
  goto d_22;
  e_22 :
  Ccall(_stratego_p_26);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto g_22;
  d_22 :
  Cpop();
  g_22 :
  Return();
  c_22 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  a_22 :
  Ccall(_stratego_d_27);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
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
  Tset(ATmakeString(".i1"));
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
  MoveTop(2,1);
  Move(1,14,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/backend"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/backend"),App0("TNil"))));
  Ccall(_stratego_c_27);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,13);
  NotNULLd(1,14);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,13),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,14),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto o_43;
  o_43 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto p_43;
  p_43 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto q_43;
  q_43 :
  TestFunFC(e_18,&&fail,Egetd(2,6));
  Rpush(i_22);
  goto b_54;
  i_22 :
  goto h_22;
  b_54 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(j_22);
  c_54 :
  Cpush(l_22);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_22);
  goto c_54;
  m_22 :
  AllBuild();
  goto k_22;
  l_22 :
  Ccall(_stratego_p_26);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto n_22;
  k_22 :
  Cpop();
  n_22 :
  Return();
  j_22 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  h_22 :
  Ccall(_stratego_d_27);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
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
  Tset(ATmakeString(".i"));
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
  MoveTop(2,1);
  Move(1,16,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/postprocess"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString("/postprocess"),App0("TNil"))));
  Ccall(_stratego_c_27);
  MoveTop(2,1);
  Tset(App0("Nil"));
  NotNULLd(1,15);
  NotNULLd(1,16);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,15),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,16),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,2);
  goto z_43;
  z_43 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto a_44;
  a_44 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto b_44;
  b_44 :
  TestFunFC(e_18,&&fail,Egetd(2,6));
  Rpush(p_22);
  goto k_54;
  p_22 :
  goto o_22;
  k_54 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(q_22);
  l_54 :
  Cpush(s_22);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_22);
  goto l_54;
  t_22 :
  AllBuild();
  goto r_22;
  s_22 :
  Ccall(_stratego_p_26);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto u_22;
  r_22 :
  Cpop();
  u_22 :
  Return();
  q_22 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  o_22 :
  Ccall(_stratego_d_27);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
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
  Tset(ATmakeString(".c"));
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_c_27);
  MoveTop(2,1);
  Move(1,18,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,5);
  Tset(ATmakeString("pp-instructions"));
  Tset(App0("Nil"));
  NotNULLd(1,17);
  NotNULLd(1,18);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(1,17),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(1,18),App0("Nil"))))),App0("TNil"))));
  MoveTop(2,1);
  goto i_44;
  i_44 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_44;
  j_44 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto k_44;
  k_44 :
  TestFunFC(e_18,&&fail,Egetd(2,5));
  Rpush(w_22);
  goto r_54;
  w_22 :
  goto v_22;
  r_54 :
  Epushd(3,1);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(x_22);
  s_54 :
  Cpush(z_22);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_23);
  goto s_54;
  a_23 :
  AllBuild();
  goto y_22;
  z_22 :
  Ccall(_stratego_p_26);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  goto b_23;
  y_22 :
  Cpop();
  b_23 :
  Return();
  x_22 :
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("pp-instructions"),App2("TCons",Egetd(3,1),App0("TNil"))));
  Epopd(3,1);
  Return();
  v_22 :
  Ccall(_stratego_d_27);
  Epopd(2,5);
  Tpop();
  Epopd(1,18);
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_27)
  Epushd(0,3);
  Tdupl();
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("compiling"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_v_27);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(c_23);
  q_55 :
  Cpush(e_23);
  Ccall(_stratego_p_26);
  goto d_23;
  e_23 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Cpush(h_23);
  Epushd(1,2);
  MoveTop(1,1);
  goto v_54;
  v_54 :
  TestFunFC(k_23,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(j_23);
  goto r_55;
  j_23 :
  goto i_23;
  r_55 :
  Move(0,1,1,2);
  Return();
  i_23 :
  Epopd(1,2);
  goto g_23;
  h_23 :
  goto l_23;
  g_23 :
  Cpop();
  l_23 :
  OneNextSon();
  Rpush(m_23);
  goto q_55;
  m_23 :
  AllBuild();
  goto f_23;
  d_23 :
  Cpop();
  f_23 :
  Return();
  c_23 :
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_27);
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
  Ccall(_stratego_c_27);
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
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_c_27);
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
  goto z_54;
  z_54 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto a_55;
  a_55 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto b_55;
  b_55 :
  TestFunFC(e_18,&&fail,Egetd(1,5));
  Rpush(p_23);
  goto u_55;
  p_23 :
  goto n_23;
  u_55 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(q_23);
  v_55 :
  Cpush(s_23);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_23);
  goto v_55;
  t_23 :
  AllBuild();
  goto r_23;
  s_23 :
  Ccall(_stratego_p_26);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto u_23;
  r_23 :
  Cpop();
  u_23 :
  Return();
  q_23 :
  Ccall(_stratego_l_27);
  Return();
  n_23 :
  Epopd(1,5);
  Tpop();
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Epopd(0,3);
ENDPROC

PROC(_stratego_l_27)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("gcc"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_d_27);
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_27)
  Epushd(0,5);
  Tdupl();
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("linking"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_v_27);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(w_23);
  d_57 :
  Cpush(z_23);
  Ccall(_stratego_p_26);
  goto x_23;
  z_23 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Cpush(d_24);
  Epushd(1,2);
  MoveTop(1,1);
  goto d_56;
  d_56 :
  TestFunFC(l_24,&&j_24,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(i_24);
  goto e_57;
  j_24 :
  TestFunFC(n_24,&&m_24,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(i_24);
  goto f_57;
  m_24 :
  TestFunFC(u_17,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(i_24);
  goto g_57;
  i_24 :
  goto g_24;
  g_57 :
  Move(0,3,1,2);
  Return();
  g_24 :
  goto f_24;
  f_57 :
  Move(0,2,1,2);
  Return();
  f_24 :
  goto e_24;
  e_57 :
  Move(0,1,1,2);
  Return();
  e_24 :
  Epopd(1,2);
  goto b_24;
  d_24 :
  goto s_24;
  b_24 :
  Cpop();
  s_24 :
  OneNextSon();
  Rpush(u_24);
  goto d_57;
  u_24 :
  AllBuild();
  goto a_24;
  x_23 :
  Cpop();
  a_24 :
  Return();
  w_23 :
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_27);
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
  Ccall(_stratego_c_27);
  MoveTop(1,1);
  Move(0,4,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Cpush(y_24);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  goto x_24;
  y_24 :
  goto a_25;
  x_24 :
  Cpop();
  a_25 :
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(""));
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_c_27);
  MoveTop(1,1);
  Move(0,5,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(b_25);
  j_57 :
  Cpush(d_25);
  Ccall(_stratego_p_26);
  goto c_25;
  d_25 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_27);
  OneNextSon();
  Rpush(f_25);
  goto j_57;
  f_25 :
  AllBuild();
  goto e_25;
  c_25 :
  Cpop();
  e_25 :
  Return();
  b_25 :
  Ccall(_stratego_r_27);
  MoveTop(1,1);
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Cons",Egetd(0,4),App2("Cons",ATmakeString("-o"),App2("Cons",Egetd(0,5),App0("Nil")))),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(1,2);
  goto i_56;
  i_56 :
  TestFunFC(g_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto j_56;
  j_56 :
  TestFunFC(g_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto k_56;
  k_56 :
  TestFunFC(e_18,&&fail,Egetd(1,6));
  Rpush(h_25);
  goto l_57;
  h_25 :
  goto g_25;
  l_57 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(i_25);
  m_57 :
  Cpush(k_25);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_25);
  goto m_57;
  l_25 :
  AllBuild();
  goto j_25;
  k_25 :
  Ccall(_stratego_p_26);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto m_25;
  j_25 :
  Cpop();
  m_25 :
  Return();
  i_25 :
  Ccall(_stratego_l_27);
  Return();
  g_25 :
  Epopd(1,6);
  Tpop();
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_27)
  Epushd(0,1);
  Ccall(_stratego_s_26);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",Egetd(0,1),App0("TNil")))));
  Rpush(n_25);
  j_58 :
  Cpush(q_25);
  Epushd(1,7);
  MoveTop(1,1);
  goto q_57;
  q_57 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_57;
  r_57 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto s_57;
  s_57 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto t_57;
  t_57 :
  TestFunFC(l_4,&&fail,Egetd(1,6));
  goto u_57;
  u_57 :
  TestFunFC(e_18,&&fail,Egetd(1,7));
  Rpush(s_25);
  goto k_58;
  s_25 :
  goto r_25;
  k_58 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_o_27);
  Ccall(_stratego_t_26);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,2);
  Tset(App2("Cons",Egetd(2,1),Egetd(1,2)));
  Ccall(_stratego_o_27);
  Epopd(2,1);
  Return();
  r_25 :
  Epopd(1,7);
  goto p_25;
  q_25 :
  Ccall(_stratego_p_27);
  Rpush(v_25);
  goto j_58;
  v_25 :
  goto u_25;
  p_25 :
  Cpop();
  u_25 :
  Return();
  n_25 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_27)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(x_25);
  q_59 :
  Cpush(z_25);
  Epushd(1,7);
  MoveTop(1,1);
  goto o_58;
  o_58 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto p_58;
  p_58 :
  TestFunFC(m_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto q_58;
  q_58 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto r_58;
  r_58 :
  TestFunFC(e_18,&&fail,Egetd(1,7));
  Rpush(b_26);
  goto r_59;
  b_26 :
  goto a_26;
  r_59 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Rpush(c_26);
  goto q_59;
  c_26 :
  Return();
  a_26 :
  Epopd(1,7);
  goto y_25;
  z_25 :
  goto d_26;
  y_25 :
  Cpop();
  d_26 :
  Return();
  x_25 :
  MoveTop(0,2);
  goto t_58;
  t_58 :
  TestFunFC(g_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto u_58;
  u_58 :
  TestFunFC(l_4,&&fail,Egetd(0,3));
  goto v_58;
  v_58 :
  TestFunFC(g_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto w_58;
  w_58 :
  TestFunFC(e_18,&&fail,Egetd(0,6));
  Rpush(f_26);
  goto s_59;
  f_26 :
  goto w_25;
  s_59 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  w_25 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_p_27)
  Epushd(0,9);
  MoveTop(0,1);
  goto w_59;
  w_59 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto x_59;
  x_59 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto y_59;
  y_59 :
  TestFunFC(g_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto z_59;
  z_59 :
  TestFunFC(m_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto a_60;
  a_60 :
  TestFunFC(e_18,&&fail,Egetd(0,9));
  goto b_60;
  b_60 :
  TestInt(0,7,32,&&j_26);
  Cpush(l_26);
  Rpush(m_26);
  goto u_60;
  m_26 :
  goto k_26;
  l_26 :
  Rpush(y_27);
  goto w_60;
  y_27 :
  goto x_27;
  k_26 :
  Cpop();
  x_27 :
  goto i_26;
  j_26 :
  Rpush(i_26);
  goto w_60;
  i_26 :
  goto h_26;
  w_60 :
  Tdupl();
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",MakeInt(32),App0("TNil"))));
  Cpush(a_28);
  Tdupl();
  Ccall(_stratego_q_27);
  Cpop();
  Crestore();
  Cjump();
  a_28 :
  Tpop();
  NotNULLd(0,2);
  NotNULLd(0,7);
  NotNULLd(0,4);
  NotNULLd(0,8);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",App2("Cons",Egetd(0,7),Egetd(0,4)),App2("TCons",Egetd(0,8),App0("TNil")))));
  Return();
  h_26 :
  goto g_26;
  u_60 :
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_o_27);
  Ccall(_stratego_t_26);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,8);
  Tset(App2("TCons",App2("Cons",Egetd(1,1),Egetd(0,2)),App2("TCons",App0("Nil"),App2("TCons",Egetd(0,8),App0("TNil")))));
  Epopd(1,1);
  Return();
  g_26 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_q_27)
  Epushd(0,5);
  MoveTop(0,1);
  goto y_60;
  y_60 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto z_60;
  z_60 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto a_61;
  a_61 :
  TestFunFC(e_18,&&fail,Egetd(0,5));
  Rpush(c_28);
  goto h_61;
  c_28 :
  goto b_28;
  h_61 :
  Move(0,2,0,4);
  Return();
  b_28 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_r_27)
  Rpush(d_28);
  p_61 :
  Cpush(g_28);
  Ccall(_stratego_p_26);
  goto e_28;
  g_28 :
  Epushd(0,3);
  MoveTop(0,1);
  goto j_61;
  j_61 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(j_28);
  goto q_61;
  j_28 :
  goto i_28;
  q_61 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(k_28);
  r_61 :
  Cpush(m_28);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_28);
  goto r_61;
  o_28 :
  AllBuild();
  goto l_28;
  m_28 :
  Ccall(_stratego_p_26);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_28);
  goto p_61;
  q_28 :
  goto p_28;
  l_28 :
  Cpop();
  p_28 :
  Return();
  k_28 :
  Return();
  i_28 :
  Epopd(0,3);
  goto h_28;
  e_28 :
  Cpop();
  h_28 :
  Return();
  d_28 :
ENDPROC

PROC(_stratego_s_27)
  Epushd(0,5);
  MoveTop(0,1);
  goto e_62;
  e_62 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto f_62;
  f_62 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto g_62;
  g_62 :
  TestFunFC(e_18,&&fail,Egetd(0,5));
  Rpush(s_28);
  goto e_63;
  s_28 :
  goto r_28;
  e_63 :
  Tdupl();
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",App2("Cons",ATmakeString(".tree"),App2("Cons",ATmakeString(".tree1"),App2("Cons",ATmakeString(".s"),App2("Cons",ATmakeString(".s1"),App2("Cons",ATmakeString(".s2"),App2("Cons",ATmakeString(".so1"),App2("Cons",ATmakeString(".so2"),App2("Cons",ATmakeString(".i1"),App2("Cons",ATmakeString(".i"),App2("Cons",ATmakeString(".o"),App0("Nil"))))))))))),App0("TNil"))));
  Rpush(t_28);
  f_63 :
  Epushd(1,7);
  MoveTop(1,1);
  goto z_61;
  z_61 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto a_62;
  a_62 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto b_62;
  b_62 :
  TestFunFC(l_4,&&y_28,Egetd(1,4));
  goto c_62;
  c_62 :
  TestFunFC(e_18,&&fail,Egetd(1,7));
  Rpush(x_28);
  goto g_63;
  y_28 :
  TestFunFC(m_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto d_62;
  d_62 :
  TestFunFC(e_18,&&fail,Egetd(1,7));
  Rpush(x_28);
  goto h_63;
  x_28 :
  goto w_28;
  h_63 :
  Epushd(2,5);
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,5),App0("TNil"))),App2("TCons",App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,6),App0("TNil"))),App0("TNil"))));
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_27);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(a_29);
  goto f_63;
  a_29 :
  OneNextSon();
  Ccall(_stratego_u_27);
  AllBuild();
  AllBuild();
  MoveTop(2,1);
  goto w_61;
  w_61 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto x_61;
  x_61 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto y_61;
  y_61 :
  TestFunFC(e_18,&&fail,Egetd(2,5));
  Rpush(b_29);
  goto i_63;
  b_29 :
  goto z_28;
  i_63 :
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("Cons",Egetd(2,2),Egetd(2,4)));
  Return();
  z_28 :
  Epopd(2,5);
  Return();
  w_28 :
  goto u_28;
  g_63 :
  Tset(App0("Nil"));
  Return();
  u_28 :
  Epopd(1,7);
  Return();
  t_28 :
  Ccall(_stratego_t_27);
  Tpop();
  Return();
  r_28 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_t_27)
  Epushd(0,1);
  MoveTop(0,1);
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("rm"),App2("TCons",App2("Cons",ATmakeString("-f"),Egetd(0,1)),App0("TNil"))));
  Ccall(_stratego_d_27);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_27)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_63;
  o_63 :
  TestFunFC(e_18,&&fail,Egetd(0,1));
  Rpush(e_29);
  goto q_63;
  e_29 :
  goto c_29;
  q_63 :
  Return();
  c_29 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_27)
  _ST_printnl();
ENDPROC

PROC(_stratego_w_27)
  _ST_exit();
ENDPROC
