#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,u_27);
VARDECL(AFun,w_23);
VARDECL(AFun,n_23);
VARDECL(AFun,a_23);
VARDECL(AFun,p_22);
VARDECL(AFun,e_22);
VARDECL(AFun,t_21);
VARDECL(AFun,l_21);
VARDECL(AFun,d_21);
VARDECL(AFun,v_19);
VARDECL(AFun,t_19);
VARDECL(AFun,r_19);
VARDECL(AFun,o_19);
VARDECL(AFun,m_19);
VARDECL(AFun,j_19);
VARDECL(AFun,h_19);
VARDECL(AFun,e_19);
VARDECL(AFun,c_19);
VARDECL(AFun,x_18);
VARDECL(AFun,n_18);
VARDECL(AFun,f_18);
VARDECL(AFun,y_17);
VARDECL(AFun,v_17);
VARDECL(AFun,t_17);
VARDECL(AFun,r_17);
VARDECL(AFun,o_17);
VARDECL(AFun,j_17);
VARDECL(AFun,h_17);
VARDECL(AFun,f_17);
VARDECL(AFun,c_17);
VARDECL(AFun,a_17);
VARDECL(AFun,x_16);
VARDECL(AFun,s_16);
VARDECL(AFun,r_16);
VARDECL(AFun,p_16);
VARDECL(AFun,z_15);
VARDECL(AFun,q_15);
VARDECL(AFun,k_15);
VARDECL(AFun,g_15);
VARDECL(AFun,k_14);
VARDECL(AFun,s_12);
VARDECL(AFun,o_12);
VARDECL(AFun,g_12);
VARDECL(AFun,v_11);
VARDECL(AFun,s_11);
VARDECL(AFun,g_11);
VARDECL(AFun,w_9);
VARDECL(AFun,t_9);
VARDECL(AFun,q_9);
VARDECL(AFun,e_9);
VARDECL(AFun,b_9);
VARDECL(AFun,f_6);
VARDECL(AFun,c_6);
VARDECL(AFun,z_5);
VARDECL(AFun,p_5);
VARDECL(AFun,m_5);
VARDECL(AFun,n_3);
VARDECL(AFun,k_3);
VARDECL(AFun,f_3);
VARDECL(AFun,c_3);
VARDECL(AFun,z_2);
VARDECL(AFun,v_2);
VARDECL(AFun,t_2);
VARDECL(AFun,r_2);
VARDECL(AFun,f_2);
VARDECL(AFun,w_1);
VARDECL(AFun,t_1);
VARDECL(AFun,q_1);
VARDECL(AFun,i_1);
VARDECL(AFun,b_1);
VARDECL(AFun,v_0);
VARDECL(AFun,q_0);
VARDECL(AFun,m_0);
VARDECL(AFun,h_0);
VARDECL(AFun,f_0);
PROCDECL(_stratego_q_3);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(u_27,ATmakeAFun("Nil",0,0));
  MOVE(w_23,ATmakeAFun("Undefined",1,0));
  MOVE(n_23,ATmakeAFun("Help",0,0));
  MOVE(a_23,ATmakeAFun("Input",1,0));
  MOVE(p_22,ATmakeAFun("Binary",0,0));
  MOVE(e_22,ATmakeAFun("Output",1,0));
  MOVE(t_21,ATmakeAFun("Program",1,0));
  MOVE(l_21,ATmakeAFun("Runtime",1,0));
  MOVE(d_21,ATmakeAFun("Silent",0,0));
  MOVE(v_19,ATmakeAFun("Tset",1,0));
  MOVE(t_19,ATmakeAFun("NotNULLd",2,0));
  MOVE(r_19,ATmakeAFun("Ccontinue",1,0));
  MOVE(o_19,ATmakeAFun("MoveTop",2,0));
  MOVE(m_19,ATmakeAFun("Move",4,0));
  MOVE(j_19,ATmakeAFun("TestReal",4,0));
  MOVE(h_19,ATmakeAFun("TestInt",4,0));
  MOVE(e_19,ATmakeAFun("TestStr",4,0));
  MOVE(c_19,ATmakeAFun("MoveArg",5,0));
  MOVE(x_18,ATmakeAFun("SomeNextSon",1,0));
  MOVE(n_18,ATmakeAFun("Rpush",1,0));
  MOVE(f_18,ATmakeAFun("Label",1,0));
  MOVE(y_17,ATmakeAFun("Iprim",1,0));
  MOVE(v_17,ATmakeAFun("Goto",1,0));
  MOVE(t_17,ATmakeAFun("Epushd",2,0));
  MOVE(r_17,ATmakeAFun("Epopd",2,0));
  MOVE(o_17,ATmakeAFun("Cpush",1,0));
  MOVE(j_17,ATmakeAFun("BuildVard",2,0));
  MOVE(h_17,ATmakeAFun("BuildStr",1,0));
  MOVE(f_17,ATmakeAFun("BuildInt",1,0));
  MOVE(c_17,ATmakeAFun("BuildFun",2,0));
  MOVE(a_17,ATmakeAFun("Arg",1,0));
  MOVE(x_16,ATmakeAFun("AllNextSon",1,0));
  MOVE(s_16,ATmakeAFun("MOVE",2,0));
  MOVE(r_16,ATmakeAFun("TestFunTop",1,0));
  MOVE(p_16,ATmakeAFun("TestFunFC",3,0));
  MOVE(z_15,ATmakeAFun("Ccall",2,0));
  MOVE(q_15,ATmakeAFun("PROC",1,0));
  MOVE(k_15,ATmakeAFun("PROCDECL",1,0));
  MOVE(g_15,ATmakeAFun("VARDECL",2,0));
  MOVE(k_14,ATmakeAFun("Block",1,0));
  MOVE(s_12,ATmakeAFun("ENDPROC",0,0));
  MOVE(o_12,ATmakeAFun("AllBuild",0,0));
  MOVE(g_12,ATmakeAFun("AllInit",0,0));
  MOVE(v_11,ATmakeAFun("Cjump",0,0));
  MOVE(s_11,ATmakeAFun("Cpop",0,0));
  MOVE(g_11,ATmakeAFun("Crestore",0,0));
  MOVE(w_9,ATmakeAFun("IsAppl",0,0));
  MOVE(t_9,ATmakeAFun("OneBuild",0,0));
  MOVE(q_9,ATmakeAFun("OneInit",0,0));
  MOVE(e_9,ATmakeAFun("OneMatchNextSon",0,0));
  MOVE(b_9,ATmakeAFun("OneNextSon",0,0));
  MOVE(f_6,ATmakeAFun("Return",0,0));
  MOVE(c_6,ATmakeAFun("Tdrop",0,0));
  MOVE(z_5,ATmakeAFun("Tdupl",0,0));
  MOVE(p_5,ATmakeAFun("Tduplinv",0,0));
  MOVE(m_5,ATmakeAFun("Tpop",0,0));
  MOVE(n_3,ATmakeAFun("Tpush",0,0));
  MOVE(k_3,ATmakeAFun("TravInit",0,0));
  MOVE(f_3,ATmakeAFun("SomeInit",0,0));
  MOVE(c_3,ATmakeAFun("CounterOK",0,0));
  MOVE(z_2,ATmakeAFun("SomeBuild",0,0));
  MOVE(v_2,ATmakeAFun("MakeInt",1,0));
  MOVE(t_2,ATmakeAFun("ATmakeString",1,0));
  MOVE(r_2,ATmakeAFun("Egetd",2,0));
  MOVE(f_2,ATmakeAFun("TNil",0,0));
  MOVE(w_1,ATmakeAFun("Cons",2,0));
  MOVE(t_1,ATmakeAFun("TCons",2,0));
  MOVE(q_1,ATmakeAFun("AppN",2,0));
  MOVE(i_1,ATmakeAFun("App6",7,0));
  MOVE(b_1,ATmakeAFun("App5",6,0));
  MOVE(v_0,ATmakeAFun("App4",5,0));
  MOVE(q_0,ATmakeAFun("App3",4,0));
  MOVE(m_0,ATmakeAFun("App2",3,0));
  MOVE(h_0,ATmakeAFun("App1",2,0));
  MOVE(f_0,ATmakeAFun("App0",1,0));
ENDPROC

PROC(_stratego_q_3)
  Rpush(a_0);
  h_6 :
  Cpush(e_0);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto d_0;
  e_0 :
  Ccontinue(g_0);
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Rpush(i_0);
  goto h_6;
  i_0 :
  AllBuild();
  goto d_0;
  g_0 :
  Ccontinue(l_0);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Rpush(n_0);
  goto h_6;
  n_0 :
  OneNextSon();
  Rpush(o_0);
  goto h_6;
  o_0 :
  AllBuild();
  goto d_0;
  l_0 :
  Ccontinue(p_0);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Rpush(r_0);
  goto h_6;
  r_0 :
  OneNextSon();
  Rpush(s_0);
  goto h_6;
  s_0 :
  OneNextSon();
  Rpush(t_0);
  goto h_6;
  t_0 :
  AllBuild();
  goto d_0;
  p_0 :
  Ccontinue(u_0);
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Rpush(w_0);
  goto h_6;
  w_0 :
  OneNextSon();
  Rpush(x_0);
  goto h_6;
  x_0 :
  OneNextSon();
  Rpush(y_0);
  goto h_6;
  y_0 :
  OneNextSon();
  Rpush(z_0);
  goto h_6;
  z_0 :
  AllBuild();
  goto d_0;
  u_0 :
  Ccontinue(a_1);
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Rpush(c_1);
  goto h_6;
  c_1 :
  OneNextSon();
  Rpush(d_1);
  goto h_6;
  d_1 :
  OneNextSon();
  Rpush(e_1);
  goto h_6;
  e_1 :
  OneNextSon();
  Rpush(f_1);
  goto h_6;
  f_1 :
  OneNextSon();
  Rpush(g_1);
  goto h_6;
  g_1 :
  AllBuild();
  goto d_0;
  a_1 :
  Ccontinue(h_1);
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Rpush(j_1);
  goto h_6;
  j_1 :
  OneNextSon();
  Rpush(k_1);
  goto h_6;
  k_1 :
  OneNextSon();
  Rpush(l_1);
  goto h_6;
  l_1 :
  OneNextSon();
  Rpush(m_1);
  goto h_6;
  m_1 :
  OneNextSon();
  Rpush(n_1);
  goto h_6;
  n_1 :
  OneNextSon();
  Rpush(o_1);
  goto h_6;
  o_1 :
  AllBuild();
  goto d_0;
  h_1 :
  Ccontinue(p_1);
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Rpush(r_1);
  goto h_6;
  r_1 :
  AllBuild();
  goto d_0;
  p_1 :
  Ccontinue(s_1);
  _ST_explode_term();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestStr(0,1,"ATmakeList",&&fail);
  Rpush(v_1);
  goto b_0;
  v_1 :
  goto u_1;
  b_0 :
  Return();
  u_1 :
  Epopd(0,1);
  OneNextSon();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Rpush(x_1);
  i_6 :
  Cpush(z_1);
  Ccall(_stratego_f_5);
  goto y_1;
  z_1 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Rpush(b_2);
  goto h_6;
  b_2 :
  OneNextSon();
  Rpush(c_2);
  goto i_6;
  c_2 :
  AllBuild();
  goto a_2;
  y_1 :
  Cpop();
  a_2 :
  Return();
  x_1 :
  AllBuild();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto k_0;
  k_0 :
  TestFunFC(f_2,&&fail,Egetd(0,1));
  Rpush(e_2);
  goto j_0;
  e_2 :
  goto d_2;
  j_0 :
  Return();
  d_2 :
  Epopd(0,1);
  AllBuild();
  AllBuild();
  _ST_mkterm();
  goto d_0;
  s_1 :
  Ccontinue(g_2);
  _ST_explode_term();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto i_3;
  i_3 :
  TestStr(0,1,"ATmakeReal",&&fail);
  Rpush(i_2);
  goto h_3;
  i_2 :
  goto h_2;
  h_3 :
  Return();
  h_2 :
  Epopd(0,1);
  OneNextSon();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_f_5);
  AllBuild();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto h_5;
  h_5 :
  TestFunFC(f_2,&&fail,Egetd(0,1));
  Rpush(k_2);
  goto g_5;
  k_2 :
  goto j_2;
  g_5 :
  Return();
  j_2 :
  Epopd(0,1);
  AllBuild();
  AllBuild();
  _ST_mkterm();
  goto d_0;
  g_2 :
  Ccontinue(l_2);
  _ST_explode_term();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto j_5;
  j_5 :
  TestStr(0,1,"ATmakeInt",&&fail);
  Rpush(n_2);
  goto i_5;
  n_2 :
  goto m_2;
  i_5 :
  Return();
  m_2 :
  Epopd(0,1);
  OneNextSon();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_f_5);
  AllBuild();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto l_5;
  l_5 :
  TestFunFC(f_2,&&fail,Egetd(0,1));
  Rpush(p_2);
  goto k_5;
  p_2 :
  goto o_2;
  k_5 :
  Return();
  o_2 :
  Epopd(0,1);
  AllBuild();
  AllBuild();
  _ST_mkterm();
  goto d_0;
  l_2 :
  Ccontinue(q_2);
  TestFunTop(r_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  AllBuild();
  goto d_0;
  q_2 :
  Ccontinue(s_2);
  TestFunTop(t_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto d_0;
  s_2 :
  Ccontinue(u_2);
  TestFunTop(v_2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  AllBuild();
  goto d_0;
  u_2 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a build-term-expression: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_5);
  Epopd(0,1);
  Tpop();
  goto w_2;
  d_0 :
  Cpop();
  w_2 :
  Return();
  a_0 :
ENDPROC

PROC(_stratego_r_3)
  _ST_is_int();
ENDPROC

PROC(_stratego_s_3)
  _ST_is_string();
ENDPROC

PROC(_stratego_t_3)
  _ST_is_real();
ENDPROC

PROC(_stratego_u_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_6;
  k_6 :
  TestFunFC(z_2,&&fail,Egetd(0,1));
  Rpush(y_2);
  goto j_6;
  y_2 :
  goto x_2;
  j_6 :
  Return();
  x_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_6;
  n_6 :
  TestFunFC(c_3,&&fail,Egetd(0,1));
  Rpush(b_3);
  goto m_6;
  b_3 :
  goto a_3;
  m_6 :
  Return();
  a_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_6;
  q_6 :
  TestFunFC(f_3,&&fail,Egetd(0,1));
  Rpush(e_3);
  goto p_6;
  e_3 :
  goto d_3;
  p_6 :
  Return();
  d_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_6;
  t_6 :
  TestFunFC(k_3,&&fail,Egetd(0,1));
  Rpush(j_3);
  goto s_6;
  j_3 :
  goto g_3;
  s_6 :
  Return();
  g_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_6;
  w_6 :
  TestFunFC(n_3,&&fail,Egetd(0,1));
  Rpush(m_3);
  goto v_6;
  m_3 :
  goto l_3;
  v_6 :
  Return();
  l_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_6;
  z_6 :
  TestFunFC(m_5,&&fail,Egetd(0,1));
  Rpush(p_3);
  goto y_6;
  p_3 :
  goto o_3;
  y_6 :
  Return();
  o_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_7;
  c_7 :
  TestFunFC(p_5,&&fail,Egetd(0,1));
  Rpush(o_5);
  goto b_7;
  o_5 :
  goto n_5;
  b_7 :
  Return();
  n_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_7;
  f_7 :
  TestFunFC(z_5,&&fail,Egetd(0,1));
  Rpush(y_5);
  goto e_7;
  y_5 :
  goto q_5;
  e_7 :
  Return();
  q_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_7;
  i_7 :
  TestFunFC(c_6,&&fail,Egetd(0,1));
  Rpush(b_6);
  goto h_7;
  b_6 :
  goto a_6;
  h_7 :
  Return();
  a_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_7;
  l_7 :
  TestFunFC(f_6,&&fail,Egetd(0,1));
  Rpush(e_6);
  goto k_7;
  e_6 :
  goto d_6;
  k_7 :
  Return();
  d_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_7;
  o_7 :
  TestFunFC(b_9,&&fail,Egetd(0,1));
  Rpush(a_9);
  goto n_7;
  a_9 :
  goto g_6;
  n_7 :
  Return();
  g_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_7;
  r_7 :
  TestFunFC(e_9,&&fail,Egetd(0,1));
  Rpush(d_9);
  goto q_7;
  d_9 :
  goto c_9;
  q_7 :
  Return();
  c_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_7;
  u_7 :
  TestFunFC(q_9,&&fail,Egetd(0,1));
  Rpush(p_9);
  goto t_7;
  p_9 :
  goto o_9;
  t_7 :
  Return();
  o_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_7;
  x_7 :
  TestFunFC(t_9,&&fail,Egetd(0,1));
  Rpush(s_9);
  goto w_7;
  s_9 :
  goto r_9;
  w_7 :
  Return();
  r_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_8;
  a_8 :
  TestFunFC(w_9,&&fail,Egetd(0,1));
  Rpush(v_9);
  goto z_7;
  v_9 :
  goto u_9;
  z_7 :
  Return();
  u_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_8;
  d_8 :
  TestFunFC(g_11,&&fail,Egetd(0,1));
  Rpush(f_11);
  goto c_8;
  f_11 :
  goto e_11;
  c_8 :
  Return();
  e_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_8;
  g_8 :
  TestFunFC(s_11,&&fail,Egetd(0,1));
  Rpush(q_11);
  goto f_8;
  q_11 :
  goto h_11;
  f_8 :
  Return();
  h_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_8;
  j_8 :
  TestFunFC(v_11,&&fail,Egetd(0,1));
  Rpush(u_11);
  goto i_8;
  u_11 :
  goto t_11;
  i_8 :
  Return();
  t_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_8;
  m_8 :
  TestFunFC(g_12,&&fail,Egetd(0,1));
  Rpush(f_12);
  goto l_8;
  f_12 :
  goto w_11;
  l_8 :
  Return();
  w_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_8;
  p_8 :
  TestFunFC(o_12,&&fail,Egetd(0,1));
  Rpush(i_12);
  goto o_8;
  i_12 :
  goto h_12;
  o_8 :
  Return();
  h_12 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_8;
  s_8 :
  TestFunFC(s_12,&&fail,Egetd(0,1));
  Rpush(r_12);
  goto r_8;
  r_12 :
  goto q_12;
  r_8 :
  Return();
  q_12 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_4)
  Epushd(0,1);
  Rpush(u_12);
  x_9 :
  Cpush(h_14);
  TestFunTop(k_14);
  TravInit();
  OneNextSon();
  Rpush(n_14);
  y_9 :
  Cpush(t_14);
  Ccall(_stratego_f_5);
  goto q_14;
  t_14 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Rpush(x_14);
  goto x_9;
  x_14 :
  OneNextSon();
  Rpush(y_14);
  goto y_9;
  y_14 :
  AllBuild();
  goto u_14;
  q_14 :
  Cpop();
  u_14 :
  Return();
  n_14 :
  AllBuild();
  goto e_14;
  h_14 :
  Ccontinue(b_15);
  Epushd(1,3);
  MoveTop(1,1);
  goto v_8;
  v_8 :
  TestFunFC(g_15,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(f_15);
  goto u_8;
  f_15 :
  goto c_15;
  u_8 :
  Move(0,1,1,2);
  Return();
  c_15 :
  Epopd(1,3);
  goto e_14;
  b_15 :
  Ccontinue(j_15);
  TestFunTop(k_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto e_14;
  j_15 :
  Ccontinue(n_15);
  TestFunTop(q_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto e_14;
  n_15 :
  Ccontinue(t_15);
  Ccall(_stratego_o_4);
  goto e_14;
  t_15 :
  Ccontinue(w_15);
  TestFunTop(z_15);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_f_5);
  AllBuild();
  goto e_14;
  w_15 :
  Ccontinue(h_16);
  Epushd(1,4);
  MoveTop(1,2);
  goto z_8;
  z_8 :
  TestFunFC(p_16,&&n_16,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  MoveArg(1,1,1,2,2);
  Rpush(m_16);
  goto w_8;
  n_16 :
  TestFunFC(r_16,&&q_16,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_16);
  goto x_8;
  q_16 :
  TestFunFC(s_16,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  Rpush(m_16);
  goto y_8;
  m_16 :
  goto l_16;
  y_8 :
  Return();
  l_16 :
  goto k_16;
  x_8 :
  Return();
  k_16 :
  goto i_16;
  w_8 :
  Return();
  i_16 :
  Epopd(1,4);
  goto e_14;
  h_16 :
  Ccontinue(u_16);
  Ccall(_stratego_n_4);
  goto e_14;
  u_16 :
  Ccontinue(v_16);
  Ccall(_stratego_m_4);
  goto e_14;
  v_16 :
  Ccontinue(w_16);
  TestFunTop(x_16);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto e_14;
  w_16 :
  Ccontinue(z_16);
  TestFunTop(a_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  AllBuild();
  goto e_14;
  z_16 :
  Ccontinue(b_17);
  TestFunTop(c_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  AllBuild();
  goto e_14;
  b_17 :
  Ccontinue(e_17);
  TestFunTop(f_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  AllBuild();
  goto e_14;
  e_17 :
  Ccontinue(g_17);
  TestFunTop(h_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto e_14;
  g_17 :
  Ccontinue(i_17);
  TestFunTop(j_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  AllBuild();
  goto e_14;
  i_17 :
  Ccontinue(k_17);
  Ccall(_stratego_l_4);
  goto e_14;
  k_17 :
  Ccontinue(m_17);
  Ccall(_stratego_k_4);
  goto e_14;
  m_17 :
  Ccontinue(n_17);
  TestFunTop(o_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto e_14;
  n_17 :
  Ccontinue(p_17);
  Ccall(_stratego_j_4);
  goto e_14;
  p_17 :
  Ccontinue(q_17);
  TestFunTop(r_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  AllBuild();
  goto e_14;
  q_17 :
  Ccontinue(s_17);
  TestFunTop(t_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  AllBuild();
  goto e_14;
  s_17 :
  Ccontinue(u_17);
  TestFunTop(v_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto e_14;
  u_17 :
  Ccontinue(x_17);
  TestFunTop(y_17);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto e_14;
  x_17 :
  Ccontinue(z_17);
  Ccall(_stratego_i_4);
  goto e_14;
  z_17 :
  Ccontinue(a_18);
  Ccall(_stratego_i_4);
  goto e_14;
  a_18 :
  Ccontinue(b_18);
  Ccall(_stratego_i_4);
  goto e_14;
  b_18 :
  Ccontinue(c_18);
  Ccall(_stratego_i_4);
  goto e_14;
  c_18 :
  Ccontinue(d_18);
  TestFunTop(f_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto e_14;
  d_18 :
  Ccontinue(g_18);
  Ccall(_stratego_h_4);
  goto e_14;
  g_18 :
  Ccontinue(h_18);
  Ccall(_stratego_g_4);
  goto e_14;
  h_18 :
  Ccontinue(i_18);
  Ccall(_stratego_f_4);
  goto e_14;
  i_18 :
  Ccontinue(j_18);
  Ccall(_stratego_e_4);
  goto e_14;
  j_18 :
  Ccontinue(k_18);
  Ccall(_stratego_d_4);
  goto e_14;
  k_18 :
  Ccontinue(l_18);
  TestFunTop(n_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto e_14;
  l_18 :
  Ccontinue(o_18);
  Ccall(_stratego_c_4);
  goto e_14;
  o_18 :
  Ccontinue(p_18);
  Ccall(_stratego_b_4);
  goto e_14;
  p_18 :
  Ccontinue(q_18);
  Ccall(_stratego_a_4);
  goto e_14;
  q_18 :
  Ccontinue(r_18);
  Ccall(_stratego_z_3);
  goto e_14;
  r_18 :
  Ccontinue(s_18);
  Ccall(_stratego_y_3);
  goto e_14;
  s_18 :
  Ccontinue(t_18);
  Ccall(_stratego_x_3);
  goto e_14;
  t_18 :
  Ccontinue(v_18);
  Ccall(_stratego_w_3);
  goto e_14;
  v_18 :
  Ccontinue(w_18);
  TestFunTop(x_18);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto e_14;
  w_18 :
  Ccontinue(y_18);
  Ccall(_stratego_v_3);
  goto e_14;
  y_18 :
  Ccontinue(z_18);
  Ccall(_stratego_u_3);
  goto e_14;
  z_18 :
  Ccontinue(a_19);
  TestFunTop(c_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  AllBuild();
  goto e_14;
  a_19 :
  Ccontinue(d_19);
  TestFunTop(e_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto e_14;
  d_19 :
  Ccontinue(f_19);
  TestFunTop(h_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto e_14;
  f_19 :
  Ccontinue(i_19);
  TestFunTop(j_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto e_14;
  i_19 :
  Ccontinue(k_19);
  TestFunTop(m_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  AllBuild();
  goto e_14;
  k_19 :
  Ccontinue(n_19);
  TestFunTop(o_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  AllBuild();
  goto e_14;
  n_19 :
  Ccontinue(p_19);
  TestFunTop(r_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_3);
  AllBuild();
  goto e_14;
  p_19 :
  Ccontinue(s_19);
  TestFunTop(t_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_3);
  OneNextSon();
  Ccall(_stratego_r_3);
  AllBuild();
  goto e_14;
  s_19 :
  Ccontinue(u_19);
  TestFunTop(v_19);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_3);
  AllBuild();
  goto e_14;
  u_19 :
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not an instruction: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_a_5);
  Epopd(1,1);
  Tpop();
  goto x_19;
  e_14 :
  Cpop();
  x_19 :
  Return();
  u_12 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_10;
  a_10 :
  TestFunFC(f_2,&&fail,Egetd(0,1));
  Rpush(c_20);
  goto z_9;
  c_20 :
  goto y_19;
  z_9 :
  Return();
  y_19 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_4)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_a_5);
  Tset(MakeInt(1));
  Ccall(_stratego_z_4);
ENDPROC

PROC(_stratego_s_4)
  Epushd(0,2);
  Tdupl();
  Cpush(l_20);
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Cpush(p_20);
  Tdupl();
  Rpush(q_20);
  y_10 :
  Cpush(z_20);
  Epushd(1,3);
  MoveTop(1,1);
  goto d_10;
  d_10 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_10;
  e_10 :
  TestFunFC(d_21,&&fail,Egetd(1,2));
  Rpush(c_21);
  goto c_10;
  c_21 :
  goto b_21;
  c_10 :
  Return();
  b_21 :
  Epopd(1,3);
  goto y_20;
  z_20 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_21);
  goto y_10;
  f_21 :
  AllBuild();
  goto e_21;
  y_20 :
  Cpop();
  e_21 :
  Return();
  q_20 :
  Cpop();
  Crestore();
  Cjump();
  p_20 :
  OneNextSon();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_4);
  AllBuild();
  AllBuild();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Rpush(g_21);
  z_10 :
  Cpush(i_21);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_10;
  g_10 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_10;
  h_10 :
  TestFunFC(l_21,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(k_21);
  goto f_10;
  k_21 :
  goto j_21;
  f_10 :
  Move(0,2,1,3);
  Return();
  j_21 :
  Epopd(1,4);
  goto h_21;
  i_21 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_21);
  goto z_10;
  n_21 :
  AllBuild();
  goto m_21;
  h_21 :
  Cpop();
  m_21 :
  Return();
  g_21 :
  OneNextSon();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_4);
  AllBuild();
  AllBuild();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Rpush(o_21);
  a_11 :
  Cpush(q_21);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_10;
  j_10 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_10;
  k_10 :
  TestFunFC(t_21,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_21);
  goto i_10;
  s_21 :
  goto r_21;
  i_10 :
  Move(0,1,1,3);
  Return();
  r_21 :
  Epopd(1,4);
  goto p_21;
  q_21 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_21);
  goto a_11;
  v_21 :
  AllBuild();
  goto u_21;
  p_21 :
  Cpop();
  u_21 :
  Return();
  o_21 :
  OneNextSon();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_a_5);
  goto f_20;
  l_20 :
  goto w_21;
  f_20 :
  Cpop();
  w_21 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_z_4);
  Epopd(0,2);
ENDPROC

PROC(_stratego_t_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_u_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_v_4)
  Epushd(0,1);
  Tdupl();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Cpush(y_21);
  Rpush(z_21);
  a_12 :
  Cpush(b_22);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_11;
  c_11 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_11;
  d_11 :
  TestFunFC(e_22,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_22);
  goto b_11;
  d_22 :
  goto c_22;
  b_11 :
  Move(0,1,1,3);
  Return();
  c_22 :
  Epopd(1,4);
  goto a_22;
  b_22 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_22);
  goto a_12;
  g_22 :
  AllBuild();
  goto f_22;
  a_22 :
  Cpop();
  f_22 :
  Return();
  z_21 :
  goto x_21;
  y_21 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto h_22;
  x_21 :
  Cpop();
  h_22 :
  OneNextSon();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_4);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_q_4);
  AllBuild();
  AllBuild();
  Cpush(j_22);
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Rpush(k_22);
  b_12 :
  Cpush(m_22);
  Epushd(1,3);
  MoveTop(1,1);
  goto j_11;
  j_11 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_11;
  k_11 :
  TestFunFC(p_22,&&fail,Egetd(1,2));
  Rpush(o_22);
  goto i_11;
  o_22 :
  goto n_22;
  i_11 :
  Return();
  n_22 :
  Epopd(1,3);
  goto l_22;
  m_22 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_22);
  goto b_12;
  r_22 :
  AllBuild();
  goto q_22;
  l_22 :
  Cpop();
  q_22 :
  Return();
  k_22 :
  OneNextSon();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_4);
  OneNextSon();
  Ccall(_stratego_q_4);
  AllBuild();
  AllBuild();
  goto i_22;
  j_22 :
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_4);
  OneNextSon();
  Ccall(_stratego_q_4);
  AllBuild();
  AllBuild();
  goto s_22;
  i_22 :
  Cpop();
  s_22 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_4)
  _ST_dtime();
ENDPROC

PROC(_stratego_x_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_y_4)
  Epushd(0,3);
  Tdupl();
  Cpush(u_22);
  Rpush(v_22);
  v_12 :
  Cpush(x_22);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_12;
  d_12 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_12;
  e_12 :
  TestFunFC(a_23,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(z_22);
  goto c_12;
  z_22 :
  goto y_22;
  c_12 :
  Move(0,1,1,3);
  Return();
  y_22 :
  Epopd(1,4);
  goto w_22;
  x_22 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_23);
  goto v_12;
  c_23 :
  AllBuild();
  goto b_23;
  w_22 :
  Cpop();
  b_23 :
  Return();
  v_22 :
  goto t_22;
  u_22 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto d_23;
  t_22 :
  Cpop();
  d_23 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_x_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_z_4)
  _ST_exit();
ENDPROC

PROC(_stratego_a_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_b_5)
  Epushd(0,1);
  Tdupl();
  Rpush(e_23);
  e_13 :
  Cpush(g_23);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_12;
  x_12 :
  TestFunFC(w_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_12;
  y_12 :
  TestFunFC(t_21,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_23);
  goto w_12;
  i_23 :
  goto h_23;
  w_12 :
  Move(0,1,1,3);
  Return();
  h_23 :
  Epopd(1,4);
  goto f_23;
  g_23 :
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_23);
  goto e_13;
  k_23 :
  AllBuild();
  goto j_23;
  f_23 :
  Cpop();
  j_23 :
  Return();
  e_23 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_a_5);
  Tset(MakeInt(1));
  Ccall(_stratego_z_4);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_13;
  g_13 :
  TestFunFC(n_23,&&fail,Egetd(0,1));
  Rpush(m_23);
  goto f_13;
  m_23 :
  goto l_23;
  f_13 :
  Return();
  l_23 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_5)
  Tdupl();
  o_23 :
  TestFunTop(w_1);
  Cpush(p_23);
  Arg(0);
  Cpush(s_23);
  Ccall(_stratego_c_5);
  goto r_23;
  s_23 :
  Epushd(0,2);
  MoveTop(0,1);
  goto j_13;
  j_13 :
  TestFunFC(w_23,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(v_23);
  goto i_13;
  v_23 :
  goto u_23;
  i_13 :
  Return();
  u_23 :
  Epopd(0,2);
  goto t_23;
  r_23 :
  Cpop();
  t_23 :
  Tpop();
  Cpop();
  goto q_23;
  p_23 :
  Arg(1);
  Tdrop();
  goto o_23;
  q_23 :
  Tpop();
  Ccall(_stratego_b_5);
ENDPROC

PROC(_stratego_e_5)
  Epushd(0,5);
  MoveTop(0,3);
  goto a_16;
  a_16 :
  TestFunFC(w_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto b_16;
  b_16 :
  TestFunFC(w_1,&&n_24,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_24);
  Rpush(q_24);
  goto n_13;
  q_24 :
  goto o_24;
  p_24 :
  Ccontinue(r_24);
  Rpush(s_24);
  goto o_13;
  s_24 :
  goto o_24;
  r_24 :
  Ccontinue(t_24);
  Rpush(u_24);
  goto p_13;
  u_24 :
  goto o_24;
  t_24 :
  Ccontinue(v_24);
  Rpush(w_24);
  goto q_13;
  w_24 :
  goto o_24;
  v_24 :
  Ccontinue(x_24);
  Rpush(y_24);
  goto r_13;
  y_24 :
  goto o_24;
  x_24 :
  Ccontinue(z_24);
  Rpush(a_25);
  goto s_13;
  a_25 :
  goto o_24;
  z_24 :
  Ccontinue(b_25);
  Rpush(c_25);
  goto t_13;
  c_25 :
  goto o_24;
  b_25 :
  Ccontinue(d_25);
  Rpush(e_25);
  goto u_13;
  e_25 :
  goto o_24;
  d_25 :
  Ccontinue(f_25);
  Rpush(g_25);
  goto v_13;
  g_25 :
  goto o_24;
  f_25 :
  Ccontinue(h_25);
  Rpush(i_25);
  goto w_13;
  i_25 :
  goto o_24;
  h_25 :
  Ccontinue(j_25);
  Rpush(k_25);
  goto x_13;
  k_25 :
  goto o_24;
  j_25 :
  Ccontinue(l_25);
  Rpush(m_25);
  goto y_13;
  m_25 :
  goto o_24;
  l_25 :
  Ccontinue(n_25);
  Rpush(o_25);
  goto z_13;
  o_25 :
  goto o_24;
  n_25 :
  Ccontinue(p_25);
  Rpush(q_25);
  goto a_14;
  q_25 :
  goto o_24;
  p_25 :
  Rpush(s_25);
  goto b_14;
  s_25 :
  goto r_25;
  o_24 :
  Cpop();
  r_25 :
  goto m_24;
  n_24 :
  Cpush(u_25);
  Rpush(v_25);
  goto n_13;
  v_25 :
  goto t_25;
  u_25 :
  Ccontinue(w_25);
  Rpush(x_25);
  goto o_13;
  x_25 :
  goto t_25;
  w_25 :
  Ccontinue(y_25);
  Rpush(z_25);
  goto p_13;
  z_25 :
  goto t_25;
  y_25 :
  Ccontinue(a_26);
  Rpush(b_26);
  goto q_13;
  b_26 :
  goto t_25;
  a_26 :
  Ccontinue(c_26);
  Rpush(d_26);
  goto r_13;
  d_26 :
  goto t_25;
  c_26 :
  Ccontinue(e_26);
  Rpush(f_26);
  goto x_13;
  f_26 :
  goto t_25;
  e_26 :
  Ccontinue(g_26);
  Rpush(h_26);
  goto y_13;
  h_26 :
  goto t_25;
  g_26 :
  Ccontinue(i_26);
  Rpush(j_26);
  goto z_13;
  j_26 :
  goto t_25;
  i_26 :
  Ccontinue(k_26);
  Rpush(l_26);
  goto a_14;
  l_26 :
  goto t_25;
  k_26 :
  Rpush(n_26);
  goto b_14;
  n_26 :
  goto m_26;
  t_25 :
  Cpop();
  m_26 :
  goto m_24;
  m_24 :
  goto l_24;
  b_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_15;
  y_15 :
  TestStr(1,1,"-?",&&fail);
  Rpush(p_26);
  goto x_15;
  p_26 :
  goto o_26;
  x_15 :
  Return();
  o_26 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_24 :
  goto k_24;
  a_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_15;
  v_15 :
  TestStr(1,1,"-h",&&fail);
  Rpush(r_26);
  goto u_15;
  r_26 :
  goto q_26;
  u_15 :
  Return();
  q_26 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_24 :
  goto j_24;
  z_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_15;
  s_15 :
  TestStr(1,1,"--help",&&fail);
  Rpush(t_26);
  goto r_15;
  t_26 :
  goto s_26;
  r_15 :
  Return();
  s_26 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_24 :
  goto i_24;
  y_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_15;
  p_15 :
  TestStr(1,1,"-s",&&fail);
  Rpush(v_26);
  goto o_15;
  v_26 :
  goto u_26;
  o_15 :
  Return();
  u_26 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_24 :
  goto h_24;
  x_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_15;
  m_15 :
  TestStr(1,1,"-b",&&fail);
  Rpush(x_26);
  goto l_15;
  x_26 :
  goto w_26;
  l_15 :
  Return();
  w_26 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_24 :
  goto g_24;
  w_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_15;
  i_15 :
  TestStr(1,1,"--output",&&fail);
  Rpush(z_26);
  goto h_15;
  z_26 :
  goto y_26;
  h_15 :
  Return();
  y_26 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  g_24 :
  goto f_24;
  v_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_15;
  e_15 :
  TestStr(1,1,"-o",&&fail);
  Rpush(b_27);
  goto d_15;
  b_27 :
  goto a_27;
  d_15 :
  Return();
  a_27 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  f_24 :
  goto e_24;
  u_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_15;
  a_15 :
  TestStr(1,1,"--input",&&fail);
  Rpush(d_27);
  goto z_14;
  d_27 :
  goto c_27;
  z_14 :
  Return();
  c_27 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  e_24 :
  goto d_24;
  t_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_14;
  w_14 :
  TestStr(1,1,"-i",&&fail);
  Rpush(f_27);
  goto v_14;
  f_27 :
  goto e_27;
  v_14 :
  Return();
  e_27 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  d_24 :
  goto c_24;
  s_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_14;
  s_14 :
  TestStr(1,1,"@version",&&fail);
  Rpush(h_27);
  goto r_14;
  h_27 :
  goto g_27;
  r_14 :
  Return();
  g_27 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  c_24 :
  goto b_24;
  r_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_14;
  p_14 :
  TestStr(1,1,"--version",&&fail);
  Rpush(j_27);
  goto o_14;
  j_27 :
  goto i_27;
  o_14 :
  Return();
  i_27 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_24 :
  goto a_24;
  q_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_14;
  m_14 :
  TestStr(1,1,"-v",&&fail);
  Rpush(l_27);
  goto l_14;
  l_27 :
  goto k_27;
  l_14 :
  Return();
  k_27 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_24 :
  goto z_23;
  p_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_14;
  j_14 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(n_27);
  goto i_14;
  n_27 :
  goto m_27;
  i_14 :
  Return();
  m_27 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_23 :
  goto y_23;
  o_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_14;
  g_14 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(p_27);
  goto f_14;
  p_27 :
  goto o_27;
  f_14 :
  Return();
  o_27 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_23 :
  goto x_23;
  n_13 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_14;
  d_14 :
  TestStr(1,1,"-S",&&fail);
  Rpush(r_27);
  goto c_14;
  r_27 :
  goto q_27;
  c_14 :
  Return();
  q_27 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_23 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_f_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_20;
  a_20 :
  TestFunFC(u_27,&&fail,Egetd(0,1));
  Rpush(t_27);
  goto z_19;
  t_27 :
  goto s_27;
  z_19 :
  Return();
  s_27 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(v_27);
  a_21 :
  Cpush(x_27);
  Cpush(z_27);
  Ccall(_stratego_f_5);
  goto y_27;
  z_27 :
  Ccall(_stratego_e_5);
  TestFunTop(w_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_28);
  goto a_21;
  b_28 :
  AllBuild();
  goto a_28;
  y_27 :
  Cpop();
  a_28 :
  goto w_27;
  x_27 :
  Epushd(0,3);
  MoveTop(0,1);
  goto e_20;
  e_20 :
  TestFunFC(w_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(e_28);
  goto d_20;
  e_28 :
  goto d_28;
  d_20 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  d_28 :
  Epopd(0,3);
  goto c_28;
  w_27 :
  Cpop();
  c_28 :
  Return();
  v_27 :
  AllBuild();
  Cpush(g_28);
  Ccall(_stratego_d_5);
  goto f_28;
  g_28 :
  Ccontinue(h_28);
  Epushd(0,6);
  Ccall(_stratego_y_4);
  Tdupl();
  Ccall(_stratego_w_4);
  Tpop();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_4);
  OneNextSon();
  Ccall(_stratego_q_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_w_4);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto h_20;
  h_20 :
  TestFunFC(t_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto i_20;
  i_20 :
  TestFunFC(t_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto j_20;
  j_20 :
  TestFunFC(f_2,&&fail,Egetd(0,6));
  Rpush(j_28);
  goto g_20;
  j_28 :
  goto i_28;
  g_20 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  i_28 :
  Ccall(_stratego_v_4);
  Ccall(_stratego_s_4);
  Epopd(0,6);
  goto f_28;
  h_28 :
  Ccall(_stratego_r_4);
  goto k_28;
  f_28 :
  Cpop();
  k_28 :
ENDPROC

DOIT

