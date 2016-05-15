#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,o_27);
VARDECL(AFun,b_27);
VARDECL(AFun,w_26);
VARDECL(AFun,t_26);
VARDECL(AFun,y_22);
VARDECL(AFun,x_21);
VARDECL(AFun,k_21);
VARDECL(AFun,g_21);
VARDECL(AFun,t_20);
VARDECL(AFun,k_20);
VARDECL(AFun,f_20);
VARDECL(AFun,t_19);
VARDECL(AFun,j_19);
VARDECL(AFun,z_18);
VARDECL(AFun,b_18);
VARDECL(AFun,y_17);
VARDECL(AFun,v_17);
VARDECL(AFun,t_17);
VARDECL(AFun,q_17);
VARDECL(AFun,o_17);
VARDECL(AFun,m_17);
VARDECL(AFun,j_17);
VARDECL(AFun,h_17);
VARDECL(AFun,c_17);
VARDECL(AFun,o_16);
VARDECL(AFun,g_16);
VARDECL(AFun,a_16);
VARDECL(AFun,y_15);
VARDECL(AFun,w_15);
VARDECL(AFun,m_15);
VARDECL(AFun,a_15);
VARDECL(AFun,t_14);
VARDECL(AFun,r_14);
VARDECL(AFun,j_14);
VARDECL(AFun,h_14);
VARDECL(AFun,d_14);
VARDECL(AFun,z_13);
VARDECL(AFun,q_13);
VARDECL(AFun,p_13);
VARDECL(AFun,n_13);
VARDECL(AFun,a_13);
VARDECL(AFun,a_12);
VARDECL(AFun,u_11);
VARDECL(AFun,p_11);
VARDECL(AFun,z_10);
VARDECL(AFun,m_10);
VARDECL(AFun,j_10);
VARDECL(AFun,f_10);
VARDECL(AFun,y_9);
VARDECL(AFun,m_9);
VARDECL(AFun,a_9);
VARDECL(AFun,o_8);
VARDECL(AFun,c_8);
VARDECL(AFun,q_7);
VARDECL(AFun,e_7);
VARDECL(AFun,v_6);
VARDECL(AFun,s_6);
VARDECL(AFun,g_6);
VARDECL(AFun,d_6);
VARDECL(AFun,a_6);
VARDECL(AFun,q_5);
VARDECL(AFun,n_5);
VARDECL(AFun,h_5);
VARDECL(AFun,o_3);
VARDECL(AFun,l_3);
VARDECL(AFun,h_3);
VARDECL(AFun,e_3);
VARDECL(AFun,d_3);
VARDECL(AFun,b_3);
VARDECL(AFun,z_2);
VARDECL(AFun,x_2);
VARDECL(AFun,l_2);
VARDECL(AFun,a_2);
VARDECL(AFun,w_1);
VARDECL(AFun,r_1);
VARDECL(AFun,o_1);
VARDECL(AFun,g_1);
VARDECL(AFun,z_0);
VARDECL(AFun,t_0);
VARDECL(AFun,o_0);
VARDECL(AFun,j_0);
VARDECL(AFun,g_0);
VARDECL(AFun,e_0);
PROCDECL(_stratego_r_3);
PROCDECL(_stratego_s_3);
PROCDECL(_stratego_t_3);
PROCDECL(_stratego_u_3);
PROCDECL(_stratego_v_3);
PROCDECL(_stratego_w_3);
PROCDECL(_stratego_x_3);
PROCDECL(_stratego_y_3);
PROCDECL(_stratego_z_3);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(o_27,ATmakeAFun("Statistics",0,0));
  MOVE(b_27,ATmakeAFun("DeclVersion",1,0));
  MOVE(w_26,ATmakeAFun("Version",0,0));
  MOVE(t_26,ATmakeAFun("Verbose",0,0));
  MOVE(y_22,ATmakeAFun("Undefined",1,0));
  MOVE(x_21,ATmakeAFun("Help",0,0));
  MOVE(k_21,ATmakeAFun("stdin",0,0));
  MOVE(g_21,ATmakeAFun("Input",1,0));
  MOVE(t_20,ATmakeAFun("Binary",0,0));
  MOVE(k_20,ATmakeAFun("stdout",0,0));
  MOVE(f_20,ATmakeAFun("Output",1,0));
  MOVE(t_19,ATmakeAFun("Program",1,0));
  MOVE(j_19,ATmakeAFun("Runtime",1,0));
  MOVE(z_18,ATmakeAFun("Silent",0,0));
  MOVE(b_18,ATmakeAFun("Tset",1,0));
  MOVE(y_17,ATmakeAFun("NotNULLd",2,0));
  MOVE(v_17,ATmakeAFun("Ccontinue",1,0));
  MOVE(t_17,ATmakeAFun("MoveTop",2,0));
  MOVE(q_17,ATmakeAFun("Move",4,0));
  MOVE(o_17,ATmakeAFun("TestReal",4,0));
  MOVE(m_17,ATmakeAFun("TestInt",4,0));
  MOVE(j_17,ATmakeAFun("TestStr",4,0));
  MOVE(h_17,ATmakeAFun("MoveArg",5,0));
  MOVE(c_17,ATmakeAFun("SomeNextSon",1,0));
  MOVE(o_16,ATmakeAFun("Rpush",1,0));
  MOVE(g_16,ATmakeAFun("Label",1,0));
  MOVE(a_16,ATmakeAFun("Iprim",1,0));
  MOVE(y_15,ATmakeAFun("Goto",1,0));
  MOVE(w_15,ATmakeAFun("Epushd",2,0));
  MOVE(m_15,ATmakeAFun("Epopd",2,0));
  MOVE(a_15,ATmakeAFun("Cpush",1,0));
  MOVE(t_14,ATmakeAFun("BuildVard",2,0));
  MOVE(r_14,ATmakeAFun("BuildStr",1,0));
  MOVE(j_14,ATmakeAFun("BuildInt",1,0));
  MOVE(h_14,ATmakeAFun("BuildFun",2,0));
  MOVE(d_14,ATmakeAFun("Arg",1,0));
  MOVE(z_13,ATmakeAFun("AllNextSon",1,0));
  MOVE(q_13,ATmakeAFun("MOVE",2,0));
  MOVE(p_13,ATmakeAFun("TestFunTop",1,0));
  MOVE(n_13,ATmakeAFun("TestFunFC",3,0));
  MOVE(a_13,ATmakeAFun("Ccall",2,0));
  MOVE(a_12,ATmakeAFun("PROC",1,0));
  MOVE(u_11,ATmakeAFun("PROCDECL",1,0));
  MOVE(p_11,ATmakeAFun("VARDECL",2,0));
  MOVE(z_10,ATmakeAFun("Block",1,0));
  MOVE(m_10,ATmakeAFun("ENDPROC",0,0));
  MOVE(j_10,ATmakeAFun("AllBuild",0,0));
  MOVE(f_10,ATmakeAFun("AllInit",0,0));
  MOVE(y_9,ATmakeAFun("Cjump",0,0));
  MOVE(m_9,ATmakeAFun("Cpop",0,0));
  MOVE(a_9,ATmakeAFun("Crestore",0,0));
  MOVE(o_8,ATmakeAFun("IsAppl",0,0));
  MOVE(c_8,ATmakeAFun("OneBuild",0,0));
  MOVE(q_7,ATmakeAFun("OneInit",0,0));
  MOVE(e_7,ATmakeAFun("OneMatchNextSon",0,0));
  MOVE(v_6,ATmakeAFun("OneNextSon",0,0));
  MOVE(s_6,ATmakeAFun("Return",0,0));
  MOVE(g_6,ATmakeAFun("Tdrop",0,0));
  MOVE(d_6,ATmakeAFun("Tdupl",0,0));
  MOVE(a_6,ATmakeAFun("Tduplinv",0,0));
  MOVE(q_5,ATmakeAFun("Tpop",0,0));
  MOVE(n_5,ATmakeAFun("Tpush",0,0));
  MOVE(h_5,ATmakeAFun("TravInit",0,0));
  MOVE(o_3,ATmakeAFun("SomeInit",0,0));
  MOVE(l_3,ATmakeAFun("CounterOK",0,0));
  MOVE(h_3,ATmakeAFun("SomeBuild",0,0));
  MOVE(e_3,ATmakeAFun("Nil",0,0));
  MOVE(d_3,ATmakeAFun("stderr",0,0));
  MOVE(b_3,ATmakeAFun("MakeInt",1,0));
  MOVE(z_2,ATmakeAFun("ATmakeString",1,0));
  MOVE(x_2,ATmakeAFun("Egetd",2,0));
  MOVE(l_2,ATmakeAFun("TNil",0,0));
  MOVE(a_2,ATmakeAFun("TCons",2,0));
  MOVE(w_1,ATmakeAFun("Cons",2,0));
  MOVE(r_1,ATmakeAFun("ATmakeApplN",2,0));
  MOVE(o_1,ATmakeAFun("AppN",2,0));
  MOVE(g_1,ATmakeAFun("App6",7,0));
  MOVE(z_0,ATmakeAFun("App5",6,0));
  MOVE(t_0,ATmakeAFun("App4",5,0));
  MOVE(o_0,ATmakeAFun("App3",4,0));
  MOVE(j_0,ATmakeAFun("App2",3,0));
  MOVE(g_0,ATmakeAFun("App1",2,0));
  MOVE(e_0,ATmakeAFun("App0",1,0));
ENDPROC

PROC(_stratego_r_3)
  Rpush(a_0);
  i_6 :
  Cpush(c_0);
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto b_0;
  c_0 :
  Ccontinue(f_0);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Rpush(h_0);
  goto i_6;
  h_0 :
  AllBuild();
  goto b_0;
  f_0 :
  Ccontinue(i_0);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Rpush(k_0);
  goto i_6;
  k_0 :
  OneNextSon();
  Rpush(m_0);
  goto i_6;
  m_0 :
  AllBuild();
  goto b_0;
  i_0 :
  Ccontinue(n_0);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Rpush(p_0);
  goto i_6;
  p_0 :
  OneNextSon();
  Rpush(q_0);
  goto i_6;
  q_0 :
  OneNextSon();
  Rpush(r_0);
  goto i_6;
  r_0 :
  AllBuild();
  goto b_0;
  n_0 :
  Ccontinue(s_0);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Rpush(u_0);
  goto i_6;
  u_0 :
  OneNextSon();
  Rpush(v_0);
  goto i_6;
  v_0 :
  OneNextSon();
  Rpush(w_0);
  goto i_6;
  w_0 :
  OneNextSon();
  Rpush(x_0);
  goto i_6;
  x_0 :
  AllBuild();
  goto b_0;
  s_0 :
  Ccontinue(y_0);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Rpush(a_1);
  goto i_6;
  a_1 :
  OneNextSon();
  Rpush(b_1);
  goto i_6;
  b_1 :
  OneNextSon();
  Rpush(c_1);
  goto i_6;
  c_1 :
  OneNextSon();
  Rpush(d_1);
  goto i_6;
  d_1 :
  OneNextSon();
  Rpush(e_1);
  goto i_6;
  e_1 :
  AllBuild();
  goto b_0;
  y_0 :
  Ccontinue(f_1);
  TestFunTop(g_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Rpush(h_1);
  goto i_6;
  h_1 :
  OneNextSon();
  Rpush(i_1);
  goto i_6;
  i_1 :
  OneNextSon();
  Rpush(j_1);
  goto i_6;
  j_1 :
  OneNextSon();
  Rpush(k_1);
  goto i_6;
  k_1 :
  OneNextSon();
  Rpush(l_1);
  goto i_6;
  l_1 :
  OneNextSon();
  Rpush(m_1);
  goto i_6;
  m_1 :
  AllBuild();
  goto b_0;
  f_1 :
  Ccontinue(n_1);
  TestFunTop(o_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Rpush(p_1);
  goto i_6;
  p_1 :
  AllBuild();
  goto b_0;
  n_1 :
  Ccontinue(q_1);
  TestFunTop(r_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Rpush(s_1);
  j_6 :
  Cpush(u_1);
  Ccall(_stratego_g_5);
  goto t_1;
  u_1 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Rpush(x_1);
  goto i_6;
  x_1 :
  OneNextSon();
  Rpush(y_1);
  goto j_6;
  y_1 :
  AllBuild();
  goto v_1;
  t_1 :
  Cpop();
  v_1 :
  Return();
  s_1 :
  AllBuild();
  goto b_0;
  q_1 :
  Ccontinue(z_1);
  _ST_explode_term();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto d_0;
  d_0 :
  TestStr(0,1,"ATmakeList",&&fail);
  Rpush(c_2);
  goto k_6;
  c_2 :
  goto b_2;
  k_6 :
  Return();
  b_2 :
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Rpush(d_2);
  l_6 :
  Cpush(f_2);
  Ccall(_stratego_g_5);
  goto e_2;
  f_2 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Rpush(h_2);
  goto i_6;
  h_2 :
  OneNextSon();
  Rpush(i_2);
  goto l_6;
  i_2 :
  AllBuild();
  goto g_2;
  e_2 :
  Cpop();
  g_2 :
  Return();
  d_2 :
  AllBuild();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto l_0;
  l_0 :
  TestFunFC(l_2,&&fail,Egetd(0,1));
  Rpush(k_2);
  goto m_6;
  k_2 :
  goto j_2;
  m_6 :
  Return();
  j_2 :
  Epopd(0,1);
  AllBuild();
  AllBuild();
  _ST_mkterm();
  goto b_0;
  z_1 :
  Ccontinue(m_2);
  _ST_explode_term();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto j_3;
  j_3 :
  TestStr(0,1,"ATmakeReal",&&fail);
  Rpush(o_2);
  goto n_6;
  o_2 :
  goto n_2;
  n_6 :
  Return();
  n_2 :
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  OneNextSon();
  Ccall(_stratego_g_5);
  AllBuild();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto i_5;
  i_5 :
  TestFunFC(l_2,&&fail,Egetd(0,1));
  Rpush(q_2);
  goto o_6;
  q_2 :
  goto p_2;
  o_6 :
  Return();
  p_2 :
  Epopd(0,1);
  AllBuild();
  AllBuild();
  _ST_mkterm();
  goto b_0;
  m_2 :
  Ccontinue(r_2);
  _ST_explode_term();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto k_5;
  k_5 :
  TestStr(0,1,"ATmakeInt",&&fail);
  Rpush(t_2);
  goto p_6;
  t_2 :
  goto s_2;
  p_6 :
  Return();
  s_2 :
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_g_5);
  AllBuild();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto m_5;
  m_5 :
  TestFunFC(l_2,&&fail,Egetd(0,1));
  Rpush(v_2);
  goto q_6;
  v_2 :
  goto u_2;
  q_6 :
  Return();
  u_2 :
  Epopd(0,1);
  AllBuild();
  AllBuild();
  _ST_mkterm();
  goto b_0;
  r_2 :
  Ccontinue(w_2);
  TestFunTop(x_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto b_0;
  w_2 :
  Ccontinue(y_2);
  TestFunTop(z_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto b_0;
  y_2 :
  Ccontinue(a_3);
  TestFunTop(b_3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto b_0;
  a_3 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl0(d_3),(ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl2(w_1,ATmakeString("Not a build-term-expression: "),(ATerm)ATmakeAppl2(w_1,Egetd(0,1),(ATerm)ATmakeAppl0(e_3))),(ATerm)ATmakeAppl0(l_2))));
  Ccall(_stratego_b_5);
  Epopd(0,1);
  Tpop();
  goto c_3;
  b_0 :
  Cpop();
  c_3 :
  Return();
  a_0 :
ENDPROC

PROC(_stratego_s_3)
  _ST_is_int();
ENDPROC

PROC(_stratego_t_3)
  _ST_is_string();
ENDPROC

PROC(_stratego_u_3)
  _ST_is_real();
ENDPROC

PROC(_stratego_v_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_6;
  x_6 :
  TestFunFC(h_3,&&fail,Egetd(0,1));
  Rpush(g_3);
  goto z_6;
  g_3 :
  goto f_3;
  z_6 :
  Return();
  f_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_7;
  b_7 :
  TestFunFC(l_3,&&fail,Egetd(0,1));
  Rpush(k_3);
  goto d_7;
  k_3 :
  goto i_3;
  d_7 :
  Return();
  i_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_7;
  f_7 :
  TestFunFC(o_3,&&fail,Egetd(0,1));
  Rpush(n_3);
  goto h_7;
  n_3 :
  goto m_3;
  h_7 :
  Return();
  m_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_7;
  j_7 :
  TestFunFC(h_5,&&fail,Egetd(0,1));
  Rpush(q_3);
  goto l_7;
  q_3 :
  goto p_3;
  l_7 :
  Return();
  p_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_7;
  n_7 :
  TestFunFC(n_5,&&fail,Egetd(0,1));
  Rpush(l_5);
  goto p_7;
  l_5 :
  goto j_5;
  p_7 :
  Return();
  j_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_7;
  r_7 :
  TestFunFC(q_5,&&fail,Egetd(0,1));
  Rpush(p_5);
  goto t_7;
  p_5 :
  goto o_5;
  t_7 :
  Return();
  o_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto v_7;
  v_7 :
  TestFunFC(a_6,&&fail,Egetd(0,1));
  Rpush(z_5);
  goto x_7;
  z_5 :
  goto r_5;
  x_7 :
  Return();
  r_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_7;
  z_7 :
  TestFunFC(d_6,&&fail,Egetd(0,1));
  Rpush(c_6);
  goto b_8;
  c_6 :
  goto b_6;
  b_8 :
  Return();
  b_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_8;
  d_8 :
  TestFunFC(g_6,&&fail,Egetd(0,1));
  Rpush(f_6);
  goto f_8;
  f_6 :
  goto e_6;
  f_8 :
  Return();
  e_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto h_8;
  h_8 :
  TestFunFC(s_6,&&fail,Egetd(0,1));
  Rpush(r_6);
  goto j_8;
  r_6 :
  goto h_6;
  j_8 :
  Return();
  h_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_8;
  l_8 :
  TestFunFC(v_6,&&fail,Egetd(0,1));
  Rpush(u_6);
  goto n_8;
  u_6 :
  goto t_6;
  n_8 :
  Return();
  t_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_8;
  p_8 :
  TestFunFC(e_7,&&fail,Egetd(0,1));
  Rpush(a_7);
  goto r_8;
  a_7 :
  goto w_6;
  r_8 :
  Return();
  w_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_8;
  t_8 :
  TestFunFC(q_7,&&fail,Egetd(0,1));
  Rpush(m_7);
  goto v_8;
  m_7 :
  goto i_7;
  v_8 :
  Return();
  i_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_8;
  x_8 :
  TestFunFC(c_8,&&fail,Egetd(0,1));
  Rpush(y_7);
  goto z_8;
  y_7 :
  goto u_7;
  z_8 :
  Return();
  u_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_9;
  b_9 :
  TestFunFC(o_8,&&fail,Egetd(0,1));
  Rpush(k_8);
  goto d_9;
  k_8 :
  goto g_8;
  d_9 :
  Return();
  g_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_9;
  f_9 :
  TestFunFC(a_9,&&fail,Egetd(0,1));
  Rpush(w_8);
  goto h_9;
  w_8 :
  goto s_8;
  h_9 :
  Return();
  s_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_9;
  j_9 :
  TestFunFC(m_9,&&fail,Egetd(0,1));
  Rpush(i_9);
  goto l_9;
  i_9 :
  goto e_9;
  l_9 :
  Return();
  e_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_9;
  n_9 :
  TestFunFC(y_9,&&fail,Egetd(0,1));
  Rpush(u_9);
  goto p_9;
  u_9 :
  goto q_9;
  p_9 :
  Return();
  q_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_9;
  r_9 :
  TestFunFC(f_10,&&fail,Egetd(0,1));
  Rpush(e_10);
  goto t_9;
  e_10 :
  goto c_10;
  t_9 :
  Return();
  c_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto v_9;
  v_9 :
  TestFunFC(j_10,&&fail,Egetd(0,1));
  Rpush(i_10);
  goto x_9;
  i_10 :
  goto g_10;
  x_9 :
  Return();
  g_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_9;
  z_9 :
  TestFunFC(m_10,&&fail,Egetd(0,1));
  Rpush(l_10);
  goto b_10;
  l_10 :
  goto k_10;
  b_10 :
  Return();
  k_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_4)
  Epushd(0,1);
  Rpush(w_10);
  f_11 :
  Cpush(y_10);
  TestFunTop(z_10);
  TravInit();
  OneNextSon();
  Rpush(a_11);
  g_11 :
  Cpush(c_11);
  Ccall(_stratego_g_5);
  goto b_11;
  c_11 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Rpush(e_11);
  goto f_11;
  e_11 :
  OneNextSon();
  Rpush(l_11);
  goto g_11;
  l_11 :
  AllBuild();
  goto d_11;
  b_11 :
  Cpop();
  d_11 :
  Return();
  a_11 :
  AllBuild();
  goto x_10;
  y_10 :
  Ccontinue(m_11);
  Epushd(1,3);
  MoveTop(1,1);
  goto d_10;
  d_10 :
  TestFunFC(p_11,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(o_11);
  goto h_11;
  o_11 :
  goto n_11;
  h_11 :
  Move(0,1,1,2);
  Return();
  n_11 :
  Epopd(1,3);
  goto x_10;
  m_11 :
  Ccontinue(q_11);
  TestFunTop(u_11);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto x_10;
  q_11 :
  Ccontinue(x_11);
  TestFunTop(a_12);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto x_10;
  x_11 :
  Ccontinue(w_12);
  Ccall(_stratego_p_4);
  goto x_10;
  w_12 :
  Ccontinue(z_12);
  TestFunTop(a_13);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_g_5);
  AllBuild();
  goto x_10;
  z_12 :
  Ccontinue(b_13);
  Epushd(1,4);
  MoveTop(1,2);
  goto h_10;
  h_10 :
  TestFunFC(n_13,&&l_13,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  MoveArg(1,1,1,2,2);
  Rpush(d_13);
  goto i_11;
  l_13 :
  TestFunFC(p_13,&&o_13,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_13);
  goto j_11;
  o_13 :
  TestFunFC(q_13,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  Rpush(d_13);
  goto k_11;
  d_13 :
  goto c_13;
  i_11 :
  Return();
  j_11 :
  Return();
  k_11 :
  Return();
  c_13 :
  Epopd(1,4);
  goto x_10;
  b_13 :
  Ccontinue(r_13);
  Ccall(_stratego_o_4);
  goto x_10;
  r_13 :
  Ccontinue(x_13);
  Ccall(_stratego_n_4);
  goto x_10;
  x_13 :
  Ccontinue(y_13);
  TestFunTop(z_13);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto x_10;
  y_13 :
  Ccontinue(a_14);
  TestFunTop(d_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto x_10;
  a_14 :
  Ccontinue(g_14);
  TestFunTop(h_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto x_10;
  g_14 :
  Ccontinue(i_14);
  TestFunTop(j_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto x_10;
  i_14 :
  Ccontinue(p_14);
  TestFunTop(r_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto x_10;
  p_14 :
  Ccontinue(s_14);
  TestFunTop(t_14);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto x_10;
  s_14 :
  Ccontinue(v_14);
  Ccall(_stratego_m_4);
  goto x_10;
  v_14 :
  Ccontinue(y_14);
  Ccall(_stratego_l_4);
  goto x_10;
  y_14 :
  Ccontinue(z_14);
  TestFunTop(a_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto x_10;
  z_14 :
  Ccontinue(b_15);
  Ccall(_stratego_k_4);
  goto x_10;
  b_15 :
  Ccontinue(c_15);
  TestFunTop(m_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto x_10;
  c_15 :
  Ccontinue(q_15);
  TestFunTop(w_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto x_10;
  q_15 :
  Ccontinue(x_15);
  TestFunTop(y_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto x_10;
  x_15 :
  Ccontinue(z_15);
  TestFunTop(a_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto x_10;
  z_15 :
  Ccontinue(b_16);
  Ccall(_stratego_j_4);
  goto x_10;
  b_16 :
  Ccontinue(c_16);
  Ccall(_stratego_j_4);
  goto x_10;
  c_16 :
  Ccontinue(d_16);
  Ccall(_stratego_j_4);
  goto x_10;
  d_16 :
  Ccontinue(e_16);
  Ccall(_stratego_j_4);
  goto x_10;
  e_16 :
  Ccontinue(f_16);
  TestFunTop(g_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto x_10;
  f_16 :
  Ccontinue(h_16);
  Ccall(_stratego_i_4);
  goto x_10;
  h_16 :
  Ccontinue(i_16);
  Ccall(_stratego_h_4);
  goto x_10;
  i_16 :
  Ccontinue(j_16);
  Ccall(_stratego_g_4);
  goto x_10;
  j_16 :
  Ccontinue(k_16);
  Ccall(_stratego_f_4);
  goto x_10;
  k_16 :
  Ccontinue(l_16);
  Ccall(_stratego_e_4);
  goto x_10;
  l_16 :
  Ccontinue(n_16);
  TestFunTop(o_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto x_10;
  n_16 :
  Ccontinue(q_16);
  Ccall(_stratego_d_4);
  goto x_10;
  q_16 :
  Ccontinue(r_16);
  Ccall(_stratego_c_4);
  goto x_10;
  r_16 :
  Ccontinue(t_16);
  Ccall(_stratego_b_4);
  goto x_10;
  t_16 :
  Ccontinue(u_16);
  Ccall(_stratego_a_4);
  goto x_10;
  u_16 :
  Ccontinue(w_16);
  Ccall(_stratego_z_3);
  goto x_10;
  w_16 :
  Ccontinue(x_16);
  Ccall(_stratego_y_3);
  goto x_10;
  x_16 :
  Ccontinue(z_16);
  Ccall(_stratego_x_3);
  goto x_10;
  z_16 :
  Ccontinue(a_17);
  TestFunTop(c_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto x_10;
  a_17 :
  Ccontinue(d_17);
  Ccall(_stratego_w_3);
  goto x_10;
  d_17 :
  Ccontinue(e_17);
  Ccall(_stratego_v_3);
  goto x_10;
  e_17 :
  Ccontinue(g_17);
  TestFunTop(h_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto x_10;
  g_17 :
  Ccontinue(i_17);
  TestFunTop(j_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto x_10;
  i_17 :
  Ccontinue(k_17);
  TestFunTop(m_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto x_10;
  k_17 :
  Ccontinue(n_17);
  TestFunTop(o_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_u_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto x_10;
  n_17 :
  Ccontinue(p_17);
  TestFunTop(q_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto x_10;
  p_17 :
  Ccontinue(r_17);
  TestFunTop(t_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto x_10;
  r_17 :
  Ccontinue(u_17);
  TestFunTop(v_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  goto x_10;
  u_17 :
  Ccontinue(x_17);
  TestFunTop(y_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto x_10;
  x_17 :
  Ccontinue(z_17);
  TestFunTop(b_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  AllBuild();
  goto x_10;
  z_17 :
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl0(d_3),(ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl2(w_1,ATmakeString("Not an instruction: "),(ATerm)ATmakeAppl2(w_1,Egetd(1,1),(ATerm)ATmakeAppl0(e_3))),(ATerm)ATmakeAppl0(l_2))));
  Ccall(_stratego_b_5);
  Epopd(1,1);
  Tpop();
  goto c_18;
  x_10 :
  Cpop();
  c_18 :
  Return();
  w_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_11;
  r_11 :
  TestFunFC(l_2,&&fail,Egetd(0,1));
  Rpush(f_18);
  goto t_11;
  f_18 :
  goto e_18;
  t_11 :
  Return();
  e_18 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_4)
  Tset((ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl0(d_3),(ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl2(w_1,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(e_3)),(ATerm)ATmakeAppl0(l_2))));
  Ccall(_stratego_b_5);
  Tset(MakeInt(1));
  Ccall(_stratego_a_5);
ENDPROC

PROC(_stratego_t_4)
  Epushd(0,2);
  Tdupl();
  Cpush(i_18);
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Cpush(k_18);
  Tdupl();
  Rpush(l_18);
  q_12 :
  Cpush(v_18);
  Epushd(1,3);
  MoveTop(1,1);
  goto v_11;
  v_11 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_11;
  w_11 :
  TestFunFC(z_18,&&fail,Egetd(1,2));
  Rpush(y_18);
  goto r_12;
  y_18 :
  goto w_18;
  r_12 :
  Return();
  w_18 :
  Epopd(1,3);
  goto n_18;
  v_18 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_19);
  goto q_12;
  b_19 :
  AllBuild();
  goto a_19;
  n_18 :
  Cpop();
  a_19 :
  Return();
  l_18 :
  Cpop();
  Crestore();
  Cjump();
  k_18 :
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Rpush(d_19);
  s_12 :
  Cpush(f_19);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_11;
  y_11 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_11;
  z_11 :
  TestFunFC(j_19,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_19);
  goto t_12;
  i_19 :
  goto g_19;
  t_12 :
  Move(0,2,1,3);
  Return();
  g_19 :
  Epopd(1,4);
  goto e_19;
  f_19 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_19);
  goto s_12;
  l_19 :
  AllBuild();
  goto k_19;
  e_19 :
  Cpop();
  k_19 :
  Return();
  d_19 :
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Rpush(n_19);
  u_12 :
  Cpush(p_19);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_12;
  b_12 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_12;
  c_12 :
  TestFunFC(t_19,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_19);
  goto v_12;
  s_19 :
  goto q_19;
  v_12 :
  Move(0,1,1,3);
  Return();
  q_19 :
  Epopd(1,4);
  goto o_19;
  p_19 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_19);
  goto u_12;
  v_19 :
  AllBuild();
  goto u_19;
  o_19 :
  Cpop();
  u_19 :
  Return();
  n_19 :
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl0(d_3),(ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl2(w_1,Egetd(0,1),(ATerm)ATmakeAppl2(w_1,ATmakeString(" ("),(ATerm)ATmakeAppl2(w_1,Egetd(0,2),(ATerm)ATmakeAppl2(w_1,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(e_3))))),(ATerm)ATmakeAppl0(l_2))));
  Ccall(_stratego_b_5);
  goto h_18;
  i_18 :
  goto w_19;
  h_18 :
  Cpop();
  w_19 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_a_5);
  Epopd(0,2);
ENDPROC

PROC(_stratego_u_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_v_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_w_4)
  Epushd(0,1);
  Tdupl();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Cpush(z_19);
  Rpush(a_20);
  v_13 :
  Cpush(c_20);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_12;
  x_12 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_12;
  y_12 :
  TestFunFC(f_20,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_20);
  goto w_13;
  e_20 :
  goto d_20;
  w_13 :
  Move(0,1,1,3);
  Return();
  d_20 :
  Epopd(1,4);
  goto b_20;
  c_20 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_20);
  goto v_13;
  i_20 :
  AllBuild();
  goto h_20;
  b_20 :
  Cpop();
  h_20 :
  Return();
  a_20 :
  goto x_19;
  z_19 :
  Tset((ATerm)ATmakeAppl0(k_20));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(k_20));
  MoveTop(0,1);
  Tpop();
  goto j_20;
  x_19 :
  Cpop();
  j_20 :
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_2,Egetd(0,1),(ATerm)ATmakeAppl2(a_2,Egetd(1,1),(ATerm)ATmakeAppl0(l_2))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  Cpush(m_20);
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Rpush(n_20);
  b_14 :
  Cpush(q_20);
  Epushd(1,3);
  MoveTop(1,1);
  goto e_13;
  e_13 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_13;
  f_13 :
  TestFunFC(t_20,&&fail,Egetd(1,2));
  Rpush(s_20);
  goto c_14;
  s_20 :
  goto r_20;
  c_14 :
  Return();
  r_20 :
  Epopd(1,3);
  goto p_20;
  q_20 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_20);
  goto b_14;
  v_20 :
  AllBuild();
  goto u_20;
  p_20 :
  Cpop();
  u_20 :
  Return();
  n_20 :
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_4);
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  goto l_20;
  m_20 :
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  goto x_20;
  l_20 :
  Cpop();
  x_20 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_4)
  _ST_dtime();
ENDPROC

PROC(_stratego_y_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_z_4)
  Epushd(0,3);
  Tdupl();
  Cpush(z_20);
  Rpush(a_21);
  w_14 :
  Cpush(c_21);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_14;
  e_14 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_14;
  f_14 :
  TestFunFC(g_21,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_21);
  goto x_14;
  f_21 :
  goto d_21;
  x_14 :
  Move(0,1,1,3);
  Return();
  d_21 :
  Epopd(1,4);
  goto b_21;
  c_21 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_21);
  goto w_14;
  i_21 :
  AllBuild();
  goto h_21;
  b_21 :
  Cpop();
  h_21 :
  Return();
  a_21 :
  goto y_20;
  z_20 :
  Tset((ATerm)ATmakeAppl0(k_21));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(k_21));
  MoveTop(0,1);
  Tpop();
  goto j_21;
  y_20 :
  Cpop();
  j_21 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_y_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(a_2,Egetd(0,2),(ATerm)ATmakeAppl2(a_2,Egetd(0,3),(ATerm)ATmakeAppl0(l_2))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_a_5)
  _ST_exit();
ENDPROC

PROC(_stratego_b_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_c_5)
  Epushd(0,1);
  Tdupl();
  Rpush(m_21);
  k_15 :
  Cpush(o_21);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_15;
  d_15 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_15;
  e_15 :
  TestFunFC(t_19,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_21);
  goto l_15;
  r_21 :
  goto p_21;
  l_15 :
  Move(0,1,1,3);
  Return();
  p_21 :
  Epopd(1,4);
  goto n_21;
  o_21 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_21);
  goto k_15;
  t_21 :
  AllBuild();
  goto s_21;
  n_21 :
  Cpop();
  s_21 :
  Return();
  m_21 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl0(d_3),(ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl2(w_1,ATmakeString("usage : "),(ATerm)ATmakeAppl2(w_1,Egetd(0,1),(ATerm)ATmakeAppl2(w_1,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(e_3)))),(ATerm)ATmakeAppl0(l_2))));
  Ccall(_stratego_b_5);
  Tset(MakeInt(1));
  Ccall(_stratego_a_5);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_15;
  n_15 :
  TestFunFC(x_21,&&fail,Egetd(0,1));
  Rpush(w_21);
  goto p_15;
  w_21 :
  goto u_21;
  p_15 :
  Return();
  u_21 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_5)
  Rpush(y_21);
  u_15 :
  Cpush(b_22);
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Cpush(d_22);
  Ccall(_stratego_d_5);
  goto c_22;
  d_22 :
  Epushd(0,2);
  MoveTop(0,1);
  goto r_15;
  r_15 :
  TestFunFC(y_22,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(h_22);
  goto v_15;
  h_22 :
  goto g_22;
  v_15 :
  Return();
  g_22 :
  Epopd(0,2);
  goto e_22;
  c_22 :
  Cpop();
  e_22 :
  OneNextSon();
  AllBuild();
  goto z_21;
  b_22 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_23);
  goto u_15;
  c_23 :
  AllBuild();
  goto a_23;
  z_21 :
  Cpop();
  a_23 :
  Return();
  y_21 :
  Ccall(_stratego_c_5);
ENDPROC

PROC(_stratego_f_5)
  Epushd(0,5);
  MoveTop(0,3);
  goto o_18;
  o_18 :
  TestFunFC(w_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto p_18;
  p_18 :
  TestFunFC(w_1,&&i_23,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(l_23);
  Rpush(m_23);
  goto i_22;
  m_23 :
  goto j_23;
  l_23 :
  Ccontinue(o_23);
  Rpush(p_23);
  goto j_22;
  p_23 :
  goto j_23;
  o_23 :
  Ccontinue(r_23);
  Rpush(s_23);
  goto k_22;
  s_23 :
  goto j_23;
  r_23 :
  Ccontinue(u_23);
  Rpush(v_23);
  goto l_22;
  v_23 :
  goto j_23;
  u_23 :
  Ccontinue(x_23);
  Rpush(z_23);
  goto m_22;
  z_23 :
  goto j_23;
  x_23 :
  Ccontinue(b_24);
  Rpush(d_24);
  goto n_22;
  d_24 :
  goto j_23;
  b_24 :
  Ccontinue(f_24);
  Rpush(g_24);
  goto o_22;
  g_24 :
  goto j_23;
  f_24 :
  Ccontinue(k_24);
  Rpush(l_24);
  goto p_22;
  l_24 :
  goto j_23;
  k_24 :
  Ccontinue(n_24);
  Rpush(o_24);
  goto q_22;
  o_24 :
  goto j_23;
  n_24 :
  Ccontinue(t_24);
  Rpush(x_24);
  goto r_22;
  x_24 :
  goto j_23;
  t_24 :
  Ccontinue(y_24);
  Rpush(g_25);
  goto s_22;
  g_25 :
  goto j_23;
  y_24 :
  Ccontinue(h_25);
  Rpush(i_25);
  goto t_22;
  i_25 :
  goto j_23;
  h_25 :
  Ccontinue(l_25);
  Rpush(n_25);
  goto u_22;
  n_25 :
  goto j_23;
  l_25 :
  Ccontinue(o_25);
  Rpush(p_25);
  goto v_22;
  p_25 :
  goto j_23;
  o_25 :
  Rpush(r_25);
  goto w_22;
  r_25 :
  goto q_25;
  j_23 :
  Cpop();
  q_25 :
  goto g_23;
  i_23 :
  Cpush(t_25);
  Rpush(u_25);
  goto i_22;
  u_25 :
  goto s_25;
  t_25 :
  Ccontinue(v_25);
  Rpush(w_25);
  goto j_22;
  w_25 :
  goto s_25;
  v_25 :
  Ccontinue(x_25);
  Rpush(y_25);
  goto k_22;
  y_25 :
  goto s_25;
  x_25 :
  Ccontinue(z_25);
  Rpush(a_26);
  goto l_22;
  a_26 :
  goto s_25;
  z_25 :
  Ccontinue(b_26);
  Rpush(c_26);
  goto m_22;
  c_26 :
  goto s_25;
  b_26 :
  Ccontinue(d_26);
  Rpush(e_26);
  goto s_22;
  e_26 :
  goto s_25;
  d_26 :
  Ccontinue(f_26);
  Rpush(g_26);
  goto t_22;
  g_26 :
  goto s_25;
  f_26 :
  Ccontinue(h_26);
  Rpush(i_26);
  goto u_22;
  i_26 :
  goto s_25;
  h_26 :
  Ccontinue(j_26);
  Rpush(k_26);
  goto v_22;
  k_26 :
  goto s_25;
  j_26 :
  Rpush(m_26);
  goto w_22;
  m_26 :
  goto l_26;
  s_25 :
  Cpop();
  l_26 :
  goto g_23;
  g_23 :
  goto e_23;
  i_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_16;
  m_16 :
  TestStr(1,1,"-S",&&fail);
  Rpush(o_26);
  goto x_22;
  o_26 :
  goto n_26;
  x_22 :
  Return();
  n_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(z_18));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(z_18),Egetd(0,5)));
  Return();
  j_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_16;
  p_16 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(q_26);
  goto z_22;
  q_26 :
  goto p_26;
  z_22 :
  Return();
  p_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(z_18));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(z_18),Egetd(0,5)));
  Return();
  k_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_16;
  s_16 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(s_26);
  goto b_23;
  s_26 :
  goto r_26;
  b_23 :
  Return();
  r_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_26));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(t_26),Egetd(0,5)));
  Return();
  l_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_16;
  v_16 :
  TestStr(1,1,"-v",&&fail);
  Rpush(v_26);
  goto d_23;
  v_26 :
  goto u_26;
  d_23 :
  Return();
  u_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(w_26));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(w_26),Egetd(0,5)));
  Return();
  m_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_16;
  y_16 :
  TestStr(1,1,"--version",&&fail);
  Rpush(y_26);
  goto f_23;
  y_26 :
  goto x_26;
  f_23 :
  Return();
  x_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(w_26));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(w_26),Egetd(0,5)));
  Return();
  n_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_17;
  b_17 :
  TestStr(1,1,"@version",&&fail);
  Rpush(a_27);
  goto h_23;
  a_27 :
  goto z_26;
  h_23 :
  Return();
  z_26 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(b_27,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl1(b_27,Egetd(0,1)),Egetd(0,2)));
  Return();
  o_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_17;
  f_17 :
  TestStr(1,1,"-i",&&fail);
  Rpush(d_27);
  goto k_23;
  d_27 :
  goto c_27;
  k_23 :
  Return();
  c_27 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(g_21,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl1(g_21,Egetd(0,1)),Egetd(0,2)));
  Return();
  p_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_17;
  l_17 :
  TestStr(1,1,"--input",&&fail);
  Rpush(f_27);
  goto n_23;
  f_27 :
  goto e_27;
  n_23 :
  Return();
  e_27 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(g_21,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl1(g_21,Egetd(0,1)),Egetd(0,2)));
  Return();
  q_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_17;
  s_17 :
  TestStr(1,1,"-o",&&fail);
  Rpush(h_27);
  goto q_23;
  h_27 :
  goto g_27;
  q_23 :
  Return();
  g_27 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(f_20,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl1(f_20,Egetd(0,1)),Egetd(0,2)));
  Return();
  r_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_17;
  w_17 :
  TestStr(1,1,"--output",&&fail);
  Rpush(j_27);
  goto t_23;
  j_27 :
  goto i_27;
  t_23 :
  Return();
  i_27 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(f_20,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl1(f_20,Egetd(0,1)),Egetd(0,2)));
  Return();
  s_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_18;
  a_18 :
  TestStr(1,1,"-b",&&fail);
  Rpush(l_27);
  goto w_23;
  l_27 :
  goto k_27;
  w_23 :
  Return();
  k_27 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_20));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(t_20),Egetd(0,5)));
  Return();
  t_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_18;
  d_18 :
  TestStr(1,1,"-s",&&fail);
  Rpush(n_27);
  goto y_23;
  n_27 :
  goto m_27;
  y_23 :
  Return();
  m_27 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(o_27));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(o_27),Egetd(0,5)));
  Return();
  u_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_18;
  g_18 :
  TestStr(1,1,"--help",&&fail);
  Rpush(q_27);
  goto a_24;
  q_27 :
  goto p_27;
  a_24 :
  Return();
  p_27 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_21));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(x_21),Egetd(0,5)));
  Return();
  v_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_18;
  j_18 :
  TestStr(1,1,"-h",&&fail);
  Rpush(s_27);
  goto c_24;
  s_27 :
  goto r_27;
  c_24 :
  Return();
  r_27 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_21));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(x_21),Egetd(0,5)));
  Return();
  w_22 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_18;
  m_18 :
  TestStr(1,1,"-?",&&fail);
  Rpush(u_27);
  goto e_24;
  u_27 :
  goto t_27;
  e_24 :
  Return();
  t_27 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_21));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl0(x_21),Egetd(0,5)));
  Return();
  e_23 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_g_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto h_24;
  h_24 :
  TestFunFC(e_3,&&fail,Egetd(0,1));
  Rpush(w_27);
  goto j_24;
  w_27 :
  goto v_27;
  j_24 :
  Return();
  v_27 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(t_19,Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(x_27);
  j_25 :
  Cpush(z_27);
  Cpush(b_28);
  Ccall(_stratego_g_5);
  goto a_28;
  b_28 :
  Ccall(_stratego_f_5);
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_28);
  goto j_25;
  d_28 :
  AllBuild();
  goto c_28;
  a_28 :
  Cpop();
  c_28 :
  goto y_27;
  z_27 :
  Epushd(0,3);
  MoveTop(0,1);
  goto m_24;
  m_24 :
  TestFunFC(w_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(g_28);
  goto k_25;
  g_28 :
  goto f_28;
  k_25 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl1(y_22,Egetd(0,2)),Egetd(0,3)));
  Return();
  f_28 :
  Epopd(0,3);
  goto e_28;
  y_27 :
  Cpop();
  e_28 :
  Return();
  x_27 :
  AllBuild();
  Cpush(i_28);
  Ccall(_stratego_e_5);
  goto h_28;
  i_28 :
  Ccontinue(j_28);
  Epushd(0,6);
  Ccall(_stratego_z_4);
  Tdupl();
  Ccall(_stratego_x_4);
  Tpop();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_4);
  OneNextSon();
  Ccall(_stratego_r_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_x_4);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto p_24;
  p_24 :
  TestFunFC(a_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto q_24;
  q_24 :
  TestFunFC(a_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto r_24;
  r_24 :
  TestFunFC(l_2,&&fail,Egetd(0,6));
  Rpush(l_28);
  goto m_25;
  l_28 :
  goto k_28;
  m_25 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_2,(ATerm)ATmakeAppl2(w_1,(ATerm)ATmakeAppl1(j_19,Egetd(0,1)),Egetd(0,3)),(ATerm)ATmakeAppl2(a_2,Egetd(0,5),(ATerm)ATmakeAppl0(l_2))));
  Return();
  k_28 :
  Ccall(_stratego_w_4);
  Ccall(_stratego_t_4);
  Epopd(0,6);
  goto h_28;
  j_28 :
  Ccall(_stratego_s_4);
  goto m_28;
  h_28 :
  Cpop();
  m_28 :
ENDPROC

DOIT

