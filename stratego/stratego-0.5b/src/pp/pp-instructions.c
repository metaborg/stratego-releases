#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,x_22);
VARDECL(AFun,l_22);
VARDECL(AFun,y_20);
VARDECL(AFun,n_20);
VARDECL(AFun,z_19);
VARDECL(AFun,j_19);
VARDECL(AFun,c_19);
VARDECL(AFun,e_18);
VARDECL(AFun,t_14);
VARDECL(AFun,x_13);
VARDECL(AFun,n_13);
VARDECL(AFun,j_13);
VARDECL(AFun,m_12);
VARDECL(AFun,m_11);
VARDECL(AFun,o_10);
VARDECL(AFun,w_9);
VARDECL(AFun,q_9);
VARDECL(AFun,o_9);
VARDECL(AFun,m_9);
VARDECL(AFun,h_9);
VARDECL(AFun,d_9);
VARDECL(AFun,b_9);
VARDECL(AFun,z_8);
VARDECL(AFun,r_8);
VARDECL(AFun,q_8);
VARDECL(AFun,n_8);
VARDECL(AFun,i_8);
VARDECL(AFun,d_8);
VARDECL(AFun,y_7);
VARDECL(AFun,w_7);
VARDECL(AFun,r_7);
VARDECL(AFun,o_7);
VARDECL(AFun,m_7);
VARDECL(AFun,k_7);
VARDECL(AFun,i_7);
VARDECL(AFun,g_7);
VARDECL(AFun,e_7);
VARDECL(AFun,a_7);
VARDECL(AFun,x_6);
VARDECL(AFun,z_2);
VARDECL(AFun,e_2);
VARDECL(AFun,s_1);
VARDECL(AFun,e_1);
VARDECL(AFun,y_0);
VARDECL(AFun,j_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_m_5);
PROCDECL(_stratego_n_5);
PROCDECL(_stratego_o_5);
PROCDECL(_stratego_p_5);
PROCDECL(_stratego_q_5);
PROCDECL(_stratego_r_5);
PROCDECL(_stratego_s_5);
PROCDECL(_stratego_t_5);
PROCDECL(_stratego_u_5);
PROCDECL(_stratego_v_5);
PROCDECL(_stratego_w_5);
PROCDECL(_stratego_x_5);
PROCDECL(_stratego_y_5);
PROCDECL(_stratego_z_5);
PROCDECL(_stratego_a_6);
PROCDECL(_stratego_b_6);
PROCDECL(_stratego_c_6);
PROCDECL(_stratego_d_6);
PROCDECL(_stratego_e_6);
PROCDECL(_stratego_f_6);
PROCDECL(_stratego_g_6);
PROCDECL(_stratego_h_6);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(x_22,ATmakeAFun("Block",1,0));
  MOVE(l_22,ATmakeAFun("stdout",0,0));
  MOVE(y_20,ATmakeAFun("Statistics",0,0));
  MOVE(n_20,ATmakeAFun("Binary",0,0));
  MOVE(z_19,ATmakeAFun("Output",1,0));
  MOVE(j_19,ATmakeAFun("DeclVersion",1,0));
  MOVE(c_19,ATmakeAFun("Version",0,0));
  MOVE(e_18,ATmakeAFun("Verbose",0,0));
  MOVE(t_14,ATmakeAFun("Undefined",1,0));
  MOVE(x_13,ATmakeAFun("Help",0,0));
  MOVE(n_13,ATmakeAFun("stdin",0,0));
  MOVE(j_13,ATmakeAFun("Input",1,0));
  MOVE(m_12,ATmakeAFun("Program",1,0));
  MOVE(m_11,ATmakeAFun("Runtime",1,0));
  MOVE(o_10,ATmakeAFun("Silent",0,0));
  MOVE(w_9,ATmakeAFun("stderr",0,0));
  MOVE(q_9,ATmakeAFun("TestStr",4,0));
  MOVE(o_9,ATmakeAFun("TestReal",4,0));
  MOVE(m_9,ATmakeAFun("TestInt",4,0));
  MOVE(h_9,ATmakeAFun("VARDECL",2,0));
  MOVE(d_9,ATmakeAFun("MOVE",2,0));
  MOVE(b_9,ATmakeAFun("TestFunTop",1,0));
  MOVE(z_8,ATmakeAFun("Egetd",2,0));
  MOVE(r_8,ATmakeAFun("VAR",1,0));
  MOVE(q_8,ATmakeAFun("TestFunFC",3,0));
  MOVE(n_8,ATmakeAFun("Iprim",1,0));
  MOVE(i_8,ATmakeAFun("Cpush",1,0));
  MOVE(d_8,ATmakeAFun("SomeNextSon",1,0));
  MOVE(y_7,ATmakeAFun("OneNextSon",1,0));
  MOVE(w_7,ATmakeAFun("ThreadNextSon",1,0));
  MOVE(r_7,ATmakeAFun("AllNextSon",1,0));
  MOVE(o_7,ATmakeAFun("Rpush",1,0));
  MOVE(m_7,ATmakeAFun("Ccall",2,0));
  MOVE(k_7,ATmakeAFun("ENDPROC",0,0));
  MOVE(i_7,ATmakeAFun("PROCDECL",1,0));
  MOVE(g_7,ATmakeAFun("PROC",1,0));
  MOVE(e_7,ATmakeAFun("Label",1,0));
  MOVE(a_7,ATmakeAFun("Ccontinue",1,0));
  MOVE(x_6,ATmakeAFun("Goto",1,0));
  MOVE(z_2,ATmakeAFun("Nil",0,0));
  MOVE(e_2,ATmakeAFun("ATmakeInt",1,0));
  MOVE(s_1,ATmakeAFun("ATmakeReal",1,0));
  MOVE(e_1,ATmakeAFun("ATmakeApplN",2,0));
  MOVE(y_0,ATmakeAFun("TCons",2,0));
  MOVE(j_0,ATmakeAFun("Cons",2,0));
  MOVE(c_0,ATmakeAFun("TNil",0,0));
ENDPROC

PROC(_stratego_m_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_0;
  u_0 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  Rpush(b_0);
  goto i_4;
  b_0 :
  goto a_0;
  i_4 :
  Return();
  a_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_5)
  Rpush(d_0);
  o_6 :
  Cpush(f_0);
  Ccall(_stratego_h_6);
  goto e_0;
  f_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto i_6;
  i_6 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(i_0);
  goto p_6;
  i_0 :
  goto h_0;
  p_6 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(k_0);
  q_6 :
  Cpush(m_0);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_0);
  goto q_6;
  n_0 :
  AllBuild();
  goto l_0;
  m_0 :
  Ccall(_stratego_h_6);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(p_0);
  goto o_6;
  p_0 :
  goto o_0;
  l_0 :
  Cpop();
  o_0 :
  Return();
  k_0 :
  Return();
  h_0 :
  Epopd(0,3);
  goto g_0;
  e_0 :
  Cpop();
  g_0 :
  Return();
  d_0 :
ENDPROC

PROC(_stratego_o_5)
  _ST_add();
ENDPROC

PROC(_stratego_p_5)
  Rpush(q_0);
  b_7 :
  Cpush(s_0);
  Ccall(_stratego_h_6);
  Tset(MakeInt(0));
  goto r_0;
  s_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto t_6;
  t_6 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(w_0);
  goto c_7;
  w_0 :
  goto v_0;
  c_7 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(x_0);
  goto b_7;
  x_0 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(y_0,Egetd(1,1),(ATerm)ATmakeAppl2(y_0,MakeInt(1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_o_5);
  Epopd(1,1);
  Return();
  v_0 :
  Epopd(0,3);
  goto t_0;
  r_0 :
  Cpop();
  t_0 :
  Return();
  q_0 :
ENDPROC

PROC(_stratego_q_5)
  _ST_is_real();
ENDPROC

PROC(_stratego_r_5)
  _ST_is_string();
ENDPROC

PROC(_stratego_s_5)
  _ST_is_int();
ENDPROC

PROC(_stratego_t_5)
  Rpush(z_0);
  y_11 :
  Epushd(0,3);
  MoveTop(0,3);
  goto v_8;
  v_8 :
  TestFunFC(e_1,&&d_1,Egetd(0,3));
  MoveArg(0,2,0,3,0);
  MoveArg(0,1,0,3,1);
  Cpush(g_1);
  Rpush(h_1);
  goto z_11;
  h_1 :
  goto f_1;
  g_1 :
  Ccontinue(i_1);
  Rpush(j_1);
  goto a_12;
  j_1 :
  goto f_1;
  i_1 :
  Ccontinue(k_1);
  Rpush(l_1);
  goto b_12;
  l_1 :
  goto f_1;
  k_1 :
  Ccontinue(m_1);
  Rpush(n_1);
  goto c_12;
  n_1 :
  goto f_1;
  m_1 :
  Rpush(q_1);
  goto f_12;
  q_1 :
  goto p_1;
  f_1 :
  Cpop();
  p_1 :
  goto b_1;
  d_1 :
  TestFunFC(s_1,&&r_1,Egetd(0,3));
  MoveArg(0,2,0,3,0);
  Cpush(u_1);
  Rpush(v_1);
  goto z_11;
  v_1 :
  goto t_1;
  u_1 :
  Ccontinue(w_1);
  Rpush(x_1);
  goto a_12;
  x_1 :
  goto t_1;
  w_1 :
  Ccontinue(y_1);
  Rpush(z_1);
  goto b_12;
  z_1 :
  goto t_1;
  y_1 :
  Ccontinue(a_2);
  Rpush(b_2);
  goto d_12;
  b_2 :
  goto t_1;
  a_2 :
  Rpush(d_2);
  goto f_12;
  d_2 :
  goto c_2;
  t_1 :
  Cpop();
  c_2 :
  goto b_1;
  r_1 :
  TestFunFC(e_2,&&c_1,Egetd(0,3));
  MoveArg(0,2,0,3,0);
  Cpush(g_2);
  Rpush(h_2);
  goto z_11;
  h_2 :
  goto f_2;
  g_2 :
  Ccontinue(i_2);
  Rpush(j_2);
  goto a_12;
  j_2 :
  goto f_2;
  i_2 :
  Ccontinue(k_2);
  Rpush(l_2);
  goto b_12;
  l_2 :
  goto f_2;
  k_2 :
  Ccontinue(m_2);
  Rpush(n_2);
  goto e_12;
  n_2 :
  goto f_2;
  m_2 :
  Rpush(p_2);
  goto f_12;
  p_2 :
  goto o_2;
  f_2 :
  Cpop();
  o_2 :
  goto b_1;
  c_1 :
  Cpush(r_2);
  Rpush(s_2);
  goto z_11;
  s_2 :
  goto q_2;
  r_2 :
  Ccontinue(t_2);
  Rpush(u_2);
  goto a_12;
  u_2 :
  goto q_2;
  t_2 :
  Ccontinue(v_2);
  Rpush(w_2);
  goto b_12;
  w_2 :
  goto q_2;
  v_2 :
  Rpush(y_2);
  goto f_12;
  y_2 :
  goto x_2;
  q_2 :
  Cpop();
  x_2 :
  goto b_1;
  b_1 :
  goto a_1;
  z_11 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_s_5);
  Tpop();
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(0,3),(ATerm)ATmakeAppl0(z_2)));
  Return();
  a_12 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_r_5);
  Tpop();
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(j_0,ATmakeString("\""),(ATerm)ATmakeAppl2(j_0,Egetd(0,3),(ATerm)ATmakeAppl2(j_0,ATmakeString("\""),(ATerm)ATmakeAppl0(z_2)))));
  Return();
  b_12 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_q_5);
  Tpop();
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(0,3),(ATerm)ATmakeAppl0(z_2)));
  Return();
  c_12 :
  Epushd(1,8);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_p_5);
  MoveTop(1,1);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(a_3);
  h_12 :
  Cpush(c_3);
  Ccall(_stratego_h_6);
  goto b_3;
  c_3 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Rpush(e_3);
  goto y_11;
  e_3 :
  OneNextSon();
  Rpush(f_3);
  goto h_12;
  f_3 :
  AllBuild();
  goto d_3;
  b_3 :
  Cpop();
  d_3 :
  Return();
  a_3 :
  MoveTop(1,2);
  NotNULLd(0,2);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,Egetd(0,2),(ATerm)ATmakeAppl0(z_2)),Egetd(1,2)));
  Cpush(h_3);
  Ccall(_stratego_h_6);
  goto g_3;
  h_3 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_3);
  j_12 :
  Cpush(l_3);
  Ccall(_stratego_h_6);
  goto k_3;
  l_3 :
  Epushd(2,3);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_3);
  goto j_12;
  o_3 :
  AllBuild();
  MoveTop(2,1);
  goto p_7;
  p_7 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(p_3);
  goto k_12;
  p_3 :
  goto n_3;
  k_12 :
  Tset((ATerm)ATmakeAppl2(j_0,ATmakeString(","),(ATerm)ATmakeAppl0(z_2)));
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString(","),(ATerm)ATmakeAppl0(z_2)),(ATerm)ATmakeAppl2(j_0,Egetd(2,2),Egetd(2,3))));
  Return();
  n_3 :
  Epopd(2,3);
  goto m_3;
  k_3 :
  Cpop();
  m_3 :
  Return();
  j_3 :
  AllBuild();
  goto i_3;
  g_3 :
  Cpop();
  i_3 :
  Ccall(_stratego_n_5);
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(y_0,Egetd(1,3),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl2(j_0,ATmakeString(")"),(ATerm)ATmakeAppl0(z_2)),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,4);
  goto t_7;
  t_7 :
  TestFunFC(y_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto u_7;
  u_7 :
  TestFunFC(y_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto v_7;
  v_7 :
  TestFunFC(c_0,&&fail,Egetd(1,8));
  Rpush(r_3);
  goto n_12;
  r_3 :
  goto q_3;
  n_12 :
  Epushd(2,1);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  Rpush(s_3);
  o_12 :
  Cpush(u_3);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_3);
  goto o_12;
  v_3 :
  AllBuild();
  goto t_3;
  u_3 :
  Ccall(_stratego_h_6);
  NotNULLd(1,7);
  Tset(Egetd(1,7));
  goto w_3;
  t_3 :
  Cpop();
  w_3 :
  Return();
  s_3 :
  MoveTop(2,1);
  NotNULLd(1,1);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(j_0,ATmakeString("(ATerm)ATmakeAppl"),(ATerm)ATmakeAppl2(j_0,Egetd(1,1),(ATerm)ATmakeAppl2(j_0,ATmakeString("("),Egetd(2,1)))));
  Epopd(2,1);
  Return();
  q_3 :
  Epopd(1,8);
  Return();
  d_12 :
  Epushd(1,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(x_3);
  goto y_11;
  x_3 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(y_0,Egetd(1,1),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl2(j_0,ATmakeString(")"),(ATerm)ATmakeAppl0(z_2)),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,2);
  goto z_7;
  z_7 :
  TestFunFC(y_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto a_8;
  a_8 :
  TestFunFC(y_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto b_8;
  b_8 :
  TestFunFC(c_0,&&fail,Egetd(1,6));
  Rpush(z_3);
  goto r_12;
  z_3 :
  goto y_3;
  r_12 :
  Epushd(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(a_4);
  s_12 :
  Cpush(c_4);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_4);
  goto s_12;
  d_4 :
  AllBuild();
  goto b_4;
  c_4 :
  Ccall(_stratego_h_6);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto e_4;
  b_4 :
  Cpop();
  e_4 :
  Return();
  a_4 :
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(j_0,ATmakeString("(ATerm)ATmakeReal("),Egetd(2,1)));
  Epopd(2,1);
  Return();
  y_3 :
  Epopd(1,6);
  Return();
  e_12 :
  Epushd(1,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(f_4);
  goto y_11;
  f_4 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(y_0,Egetd(1,1),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl2(j_0,ATmakeString(")"),(ATerm)ATmakeAppl0(z_2)),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,2);
  goto f_8;
  f_8 :
  TestFunFC(y_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto g_8;
  g_8 :
  TestFunFC(y_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto h_8;
  h_8 :
  TestFunFC(c_0,&&fail,Egetd(1,6));
  Rpush(h_4);
  goto v_12;
  h_4 :
  goto g_4;
  v_12 :
  Epushd(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(j_4);
  w_12 :
  Cpush(l_4);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_4);
  goto w_12;
  m_4 :
  AllBuild();
  goto k_4;
  l_4 :
  Ccall(_stratego_h_6);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto n_4;
  k_4 :
  Cpop();
  n_4 :
  Return();
  j_4 :
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(j_0,ATmakeString("(ATerm)ATmakeInt("),Egetd(2,1)));
  Epopd(2,1);
  Return();
  g_4 :
  Epopd(1,6);
  Return();
  f_12 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto j_8;
  j_8 :
  TestFunFC(y_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto k_8;
  k_8 :
  TestFunFC(y_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto l_8;
  l_8 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(p_4);
  goto y_12;
  p_4 :
  goto o_4;
  y_12 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  o_4 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(q_4);
  z_12 :
  Cpush(s_4);
  Ccall(_stratego_h_6);
  goto r_4;
  s_4 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Rpush(u_4);
  goto y_11;
  u_4 :
  OneNextSon();
  Rpush(v_4);
  goto z_12;
  v_4 :
  AllBuild();
  goto t_4;
  r_4 :
  Cpop();
  t_4 :
  Return();
  q_4 :
  Cpush(x_4);
  Ccall(_stratego_h_6);
  goto w_4;
  x_4 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_4);
  a_13 :
  Cpush(b_5);
  Ccall(_stratego_h_6);
  goto a_5;
  b_5 :
  Epushd(2,3);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_5);
  goto a_13;
  e_5 :
  AllBuild();
  MoveTop(2,1);
  goto o_8;
  o_8 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(f_5);
  goto b_13;
  f_5 :
  goto d_5;
  b_13 :
  Tset((ATerm)ATmakeAppl2(j_0,ATmakeString(","),(ATerm)ATmakeAppl0(z_2)));
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString(","),(ATerm)ATmakeAppl0(z_2)),(ATerm)ATmakeAppl2(j_0,Egetd(2,2),Egetd(2,3))));
  Return();
  d_5 :
  Epopd(2,3);
  goto c_5;
  a_5 :
  Cpop();
  c_5 :
  Return();
  z_4 :
  AllBuild();
  goto y_4;
  w_4 :
  Cpop();
  y_4 :
  Ccall(_stratego_n_5);
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(y_0,Egetd(1,3),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl2(j_0,ATmakeString(")"),(ATerm)ATmakeAppl0(z_2)),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,4);
  goto s_8;
  s_8 :
  TestFunFC(y_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto t_8;
  t_8 :
  TestFunFC(y_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto u_8;
  u_8 :
  TestFunFC(c_0,&&fail,Egetd(1,8));
  Rpush(h_5);
  goto e_13;
  h_5 :
  goto g_5;
  e_13 :
  Epushd(2,1);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  Rpush(i_5);
  f_13 :
  Cpush(k_5);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_5);
  goto f_13;
  l_5 :
  AllBuild();
  goto j_5;
  k_5 :
  Ccall(_stratego_h_6);
  NotNULLd(1,7);
  Tset(Egetd(1,7));
  goto m_6;
  j_5 :
  Cpop();
  m_6 :
  Return();
  i_5 :
  MoveTop(2,1);
  NotNULLd(1,1);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(1,1),(ATerm)ATmakeAppl2(j_0,ATmakeString("("),Egetd(2,1))));
  Epopd(2,1);
  Return();
  g_5 :
  Epopd(1,8);
  Return();
  a_1 :
  Epopd(0,3);
  Return();
  z_0 :
ENDPROC

PROC(_stratego_u_5)
  Epushd(0,8);
  MoveTop(0,4);
  goto c_14;
  c_14 :
  TestFunFC(x_6,&&s_6,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(r_6);
  goto d_17;
  s_6 :
  TestFunFC(a_7,&&y_6,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(r_6);
  goto e_17;
  y_6 :
  TestFunFC(e_7,&&d_7,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(r_6);
  goto f_17;
  d_7 :
  TestFunFC(g_7,&&f_7,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(r_6);
  goto g_17;
  f_7 :
  TestFunFC(i_7,&&h_7,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(r_6);
  goto h_17;
  h_7 :
  TestFunFC(k_7,&&j_7,Egetd(0,4));
  Rpush(r_6);
  goto i_17;
  j_7 :
  TestFunFC(m_7,&&l_7,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto d_14;
  d_14 :
  TestFunFC(z_2,&&fail,Egetd(0,6));
  Rpush(r_6);
  goto j_17;
  l_7 :
  TestFunFC(o_7,&&n_7,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(r_6);
  goto k_17;
  n_7 :
  TestFunFC(r_7,&&q_7,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(r_6);
  goto l_17;
  q_7 :
  TestFunFC(w_7,&&s_7,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(r_6);
  goto m_17;
  s_7 :
  TestFunFC(y_7,&&x_7,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(r_6);
  goto n_17;
  x_7 :
  TestFunFC(d_8,&&c_8,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(r_6);
  goto o_17;
  c_8 :
  TestFunFC(i_8,&&e_8,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(r_6);
  goto p_17;
  e_8 :
  TestFunFC(n_8,&&m_8,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(r_6);
  goto q_17;
  m_8 :
  TestFunFC(q_8,&&p_8,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  goto e_14;
  e_14 :
  TestFunFC(r_8,&&fail,Egetd(0,5));
  MoveArg(0,3,0,5,0);
  goto f_14;
  f_14 :
  TestFunFC(z_8,&&fail,Egetd(0,7));
  MoveArg(0,1,0,7,0);
  MoveArg(0,2,0,7,1);
  Rpush(r_6);
  goto r_17;
  p_8 :
  TestFunFC(b_9,&&a_9,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto g_14;
  g_14 :
  TestFunFC(r_8,&&fail,Egetd(0,5));
  MoveArg(0,3,0,5,0);
  Rpush(r_6);
  goto s_17;
  a_9 :
  TestFunFC(d_9,&&c_9,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  Rpush(r_6);
  goto t_17;
  c_9 :
  TestFunFC(h_9,&&f_9,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  Rpush(r_6);
  goto u_17;
  f_9 :
  TestFunFC(m_9,&&l_9,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  MoveArg(0,8,0,4,3);
  Rpush(r_6);
  goto v_17;
  l_9 :
  TestFunFC(o_9,&&n_9,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  MoveArg(0,8,0,4,3);
  Rpush(r_6);
  goto w_17;
  n_9 :
  TestFunFC(q_9,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  MoveArg(0,7,0,4,2);
  MoveArg(0,8,0,4,3);
  Rpush(r_6);
  goto x_17;
  r_6 :
  goto n_6;
  d_17 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,ATmakeString("goto "),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(";"),(ATerm)ATmakeAppl0(z_2))))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  e_17 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,ATmakeString("Ccontinue("),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(");"),(ATerm)ATmakeAppl0(z_2))))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  f_17 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(" :"),(ATerm)ATmakeAppl0(z_2)))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  g_17 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(z_2),(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("PROC(_stratego_"),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(")"),(ATerm)ATmakeAppl0(z_2)))),(ATerm)ATmakeAppl0(z_2))));
  Return();
  h_17 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("PROCDECL(_stratego_"),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(");"),(ATerm)ATmakeAppl0(z_2)))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  i_17 :
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("ENDPROC"),(ATerm)ATmakeAppl0(z_2)),(ATerm)ATmakeAppl0(z_2)));
  Return();
  j_17 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,ATmakeString("Ccall("),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(");"),(ATerm)ATmakeAppl0(z_2))))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  k_17 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,ATmakeString("Rpush("),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(");"),(ATerm)ATmakeAppl0(z_2))))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  l_17 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,ATmakeString("AllNextSon(&&"),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(");"),(ATerm)ATmakeAppl0(z_2))))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  m_17 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,ATmakeString("ThreadNextSon(&&"),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(");"),(ATerm)ATmakeAppl0(z_2))))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  n_17 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,ATmakeString("OneNextSon(&&"),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(");"),(ATerm)ATmakeAppl0(z_2))))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  o_17 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,ATmakeString("SomeNextSon(&&"),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(");"),(ATerm)ATmakeAppl0(z_2))))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  p_17 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,ATmakeString("Cpush("),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(");"),(ATerm)ATmakeAppl0(z_2))))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  q_17 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString("();"),(ATerm)ATmakeAppl0(z_2)))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  r_17 :
  NotNULLd(0,3);
  NotNULLd(0,6);
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,ATmakeString("TestFunFC("),(ATerm)ATmakeAppl2(j_0,Egetd(0,3),(ATerm)ATmakeAppl2(j_0,ATmakeString(",&&"),(ATerm)ATmakeAppl2(j_0,Egetd(0,6),(ATerm)ATmakeAppl2(j_0,ATmakeString(",Egetd("),(ATerm)ATmakeAppl2(j_0,Egetd(0,1),(ATerm)ATmakeAppl2(j_0,ATmakeString(","),(ATerm)ATmakeAppl2(j_0,Egetd(0,2),(ATerm)ATmakeAppl2(j_0,ATmakeString("));"),(ATerm)ATmakeAppl0(z_2))))))))))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  s_17 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,ATmakeString("TestFunTop("),(ATerm)ATmakeAppl2(j_0,Egetd(0,3),(ATerm)ATmakeAppl2(j_0,ATmakeString(");"),(ATerm)ATmakeAppl0(z_2))))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  t_17 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,ATmakeString("MOVE("),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(","),(ATerm)ATmakeAppl2(j_0,Egetd(0,6),(ATerm)ATmakeAppl2(j_0,ATmakeString(");"),(ATerm)ATmakeAppl0(z_2))))))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  u_17 :
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("VARDECL(AFun,"),(ATerm)ATmakeAppl2(j_0,Egetd(0,6),(ATerm)ATmakeAppl2(j_0,ATmakeString(");"),(ATerm)ATmakeAppl0(z_2)))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  v_17 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,ATmakeString("TestInt("),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(","),(ATerm)ATmakeAppl2(j_0,Egetd(0,6),(ATerm)ATmakeAppl2(j_0,ATmakeString(","),(ATerm)ATmakeAppl2(j_0,Egetd(0,7),(ATerm)ATmakeAppl2(j_0,ATmakeString(",&&"),(ATerm)ATmakeAppl2(j_0,Egetd(0,8),(ATerm)ATmakeAppl2(j_0,ATmakeString(");"),(ATerm)ATmakeAppl0(z_2))))))))))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  w_17 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,ATmakeString("TestReal("),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(","),(ATerm)ATmakeAppl2(j_0,Egetd(0,6),(ATerm)ATmakeAppl2(j_0,ATmakeString(","),(ATerm)ATmakeAppl2(j_0,Egetd(0,7),(ATerm)ATmakeAppl2(j_0,ATmakeString(",&&"),(ATerm)ATmakeAppl2(j_0,Egetd(0,8),(ATerm)ATmakeAppl2(j_0,ATmakeString(");"),(ATerm)ATmakeAppl0(z_2))))))))))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  x_17 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),(ATerm)ATmakeAppl2(j_0,ATmakeString("TestStr("),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl2(j_0,ATmakeString(","),(ATerm)ATmakeAppl2(j_0,Egetd(0,6),(ATerm)ATmakeAppl2(j_0,ATmakeString(",\""),(ATerm)ATmakeAppl2(j_0,Egetd(0,7),(ATerm)ATmakeAppl2(j_0,ATmakeString("\",&&"),(ATerm)ATmakeAppl2(j_0,Egetd(0,8),(ATerm)ATmakeAppl2(j_0,ATmakeString(");"),(ATerm)ATmakeAppl0(z_2))))))))))),(ATerm)ATmakeAppl0(z_2)));
  Return();
  n_6 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_v_5)
  _ST_open_file();
ENDPROC

PROC(_stratego_w_5)
  Tset((ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl0(w_9),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(z_2)),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_c_6);
  Tset(MakeInt(1));
  Ccall(_stratego_b_6);
ENDPROC

PROC(_stratego_x_5)
  Epushd(0,2);
  Tdupl();
  Cpush(z_9);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Cpush(a_10);
  Tdupl();
  Rpush(c_10);
  u_18 :
  Cpush(j_10);
  Epushd(1,3);
  MoveTop(1,1);
  goto z_17;
  z_17 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto a_18;
  a_18 :
  TestFunFC(o_10,&&fail,Egetd(1,2));
  Rpush(m_10);
  goto v_18;
  m_10 :
  goto l_10;
  v_18 :
  Return();
  l_10 :
  Epopd(1,3);
  goto i_10;
  j_10 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_10);
  goto u_18;
  v_10 :
  AllBuild();
  goto u_10;
  i_10 :
  Cpop();
  u_10 :
  Return();
  c_10 :
  Cpop();
  Crestore();
  Cjump();
  a_10 :
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_5);
  AllBuild();
  AllBuild();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Rpush(x_10);
  w_18 :
  Cpush(j_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_18;
  c_18 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_18;
  d_18 :
  TestFunFC(m_11,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_11);
  goto x_18;
  l_11 :
  goto k_11;
  x_18 :
  Move(0,2,1,3);
  Return();
  k_11 :
  Epopd(1,4);
  goto a_11;
  j_11 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_11);
  goto w_18;
  u_11 :
  AllBuild();
  goto o_11;
  a_11 :
  Cpop();
  o_11 :
  Return();
  x_10 :
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_5);
  AllBuild();
  AllBuild();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Rpush(v_11);
  y_18 :
  Cpush(g_12);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_18;
  f_18 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto g_18;
  g_18 :
  TestFunFC(m_12,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(l_12);
  goto z_18;
  l_12 :
  goto i_12;
  z_18 :
  Move(0,1,1,3);
  Return();
  i_12 :
  Epopd(1,4);
  goto x_11;
  g_12 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_12);
  goto y_18;
  q_12 :
  AllBuild();
  goto p_12;
  x_11 :
  Cpop();
  p_12 :
  Return();
  v_11 :
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_5);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl0(w_9),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl2(j_0,Egetd(0,1),(ATerm)ATmakeAppl2(j_0,ATmakeString(" ("),(ATerm)ATmakeAppl2(j_0,Egetd(0,2),(ATerm)ATmakeAppl2(j_0,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(z_2))))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_c_6);
  goto x_9;
  z_9 :
  goto t_12;
  x_9 :
  Cpop();
  t_12 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_b_6);
  Epopd(0,2);
ENDPROC

PROC(_stratego_y_5)
  _ST_dtime();
ENDPROC

PROC(_stratego_z_5)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_a_6)
  Epushd(0,3);
  Tdupl();
  Cpush(x_12);
  Rpush(c_13);
  x_19 :
  Cpush(g_13);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_19;
  d_19 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_19;
  e_19 :
  TestFunFC(j_13,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_13);
  goto y_19;
  i_13 :
  goto h_13;
  y_19 :
  Move(0,1,1,3);
  Return();
  h_13 :
  Epopd(1,4);
  goto d_13;
  g_13 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_13);
  goto x_19;
  l_13 :
  AllBuild();
  goto k_13;
  d_13 :
  Cpop();
  k_13 :
  Return();
  c_13 :
  goto u_12;
  x_12 :
  Tset((ATerm)ATmakeAppl0(n_13));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(n_13));
  MoveTop(0,1);
  Tpop();
  goto m_13;
  u_12 :
  Cpop();
  m_13 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_z_5);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(y_0,Egetd(0,2),(ATerm)ATmakeAppl2(y_0,Egetd(0,3),(ATerm)ATmakeAppl0(c_0))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_b_6)
  _ST_exit();
ENDPROC

PROC(_stratego_c_6)
  _ST_printnl();
ENDPROC

PROC(_stratego_d_6)
  Epushd(0,1);
  Tdupl();
  Rpush(o_13);
  l_20 :
  Cpush(q_13);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_20;
  e_20 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_20;
  f_20 :
  TestFunFC(m_12,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_13);
  goto m_20;
  s_13 :
  goto r_13;
  m_20 :
  Move(0,1,1,3);
  Return();
  r_13 :
  Epopd(1,4);
  goto p_13;
  q_13 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_13);
  goto l_20;
  u_13 :
  AllBuild();
  goto t_13;
  p_13 :
  Cpop();
  t_13 :
  Return();
  o_13 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl0(w_9),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("usage : "),(ATerm)ATmakeAppl2(j_0,Egetd(0,1),(ATerm)ATmakeAppl2(j_0,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(z_2)))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_c_6);
  Tset(MakeInt(1));
  Ccall(_stratego_b_6);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_20;
  o_20 :
  TestFunFC(x_13,&&fail,Egetd(0,1));
  Rpush(w_13);
  goto q_20;
  w_13 :
  goto v_13;
  q_20 :
  Return();
  v_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_6)
  Rpush(y_13);
  v_20 :
  Cpush(a_14);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Cpush(p_14);
  Ccall(_stratego_e_6);
  goto b_14;
  p_14 :
  Epushd(0,2);
  MoveTop(0,1);
  goto s_20;
  s_20 :
  TestFunFC(t_14,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(s_14);
  goto w_20;
  s_14 :
  goto r_14;
  w_20 :
  Return();
  r_14 :
  Epopd(0,2);
  goto q_14;
  b_14 :
  Cpop();
  q_14 :
  OneNextSon();
  AllBuild();
  goto z_13;
  a_14 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_14);
  goto v_20;
  v_14 :
  AllBuild();
  goto u_14;
  z_13 :
  Cpop();
  u_14 :
  Return();
  y_13 :
  Ccall(_stratego_d_6);
ENDPROC

PROC(_stratego_g_6)
  Epushd(0,5);
  MoveTop(0,3);
  goto o_23;
  o_23 :
  TestFunFC(j_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto p_23;
  p_23 :
  TestFunFC(j_0,&&y_14,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(a_15);
  Rpush(b_15);
  goto h_27;
  b_15 :
  goto z_14;
  a_15 :
  Ccontinue(c_15);
  Rpush(d_15);
  goto i_27;
  d_15 :
  goto z_14;
  c_15 :
  Ccontinue(e_15);
  Rpush(f_15);
  goto j_27;
  f_15 :
  goto z_14;
  e_15 :
  Ccontinue(g_15);
  Rpush(h_15);
  goto k_27;
  h_15 :
  goto z_14;
  g_15 :
  Ccontinue(i_15);
  Rpush(j_15);
  goto l_27;
  j_15 :
  goto z_14;
  i_15 :
  Ccontinue(k_15);
  Rpush(l_15);
  goto m_27;
  l_15 :
  goto z_14;
  k_15 :
  Ccontinue(m_15);
  Rpush(n_15);
  goto n_27;
  n_15 :
  goto z_14;
  m_15 :
  Ccontinue(o_15);
  Rpush(p_15);
  goto o_27;
  p_15 :
  goto z_14;
  o_15 :
  Ccontinue(q_15);
  Rpush(r_15);
  goto p_27;
  r_15 :
  goto z_14;
  q_15 :
  Ccontinue(s_15);
  Rpush(t_15);
  goto q_27;
  t_15 :
  goto z_14;
  s_15 :
  Ccontinue(u_15);
  Rpush(v_15);
  goto r_27;
  v_15 :
  goto z_14;
  u_15 :
  Ccontinue(w_15);
  Rpush(x_15);
  goto s_27;
  x_15 :
  goto z_14;
  w_15 :
  Ccontinue(y_15);
  Rpush(z_15);
  goto t_27;
  z_15 :
  goto z_14;
  y_15 :
  Ccontinue(a_16);
  Rpush(b_16);
  goto u_27;
  b_16 :
  goto z_14;
  a_16 :
  Rpush(d_16);
  goto v_27;
  d_16 :
  goto c_16;
  z_14 :
  Cpop();
  c_16 :
  goto x_14;
  y_14 :
  Cpush(f_16);
  Rpush(g_16);
  goto h_27;
  g_16 :
  goto e_16;
  f_16 :
  Ccontinue(h_16);
  Rpush(i_16);
  goto i_27;
  i_16 :
  goto e_16;
  h_16 :
  Ccontinue(j_16);
  Rpush(k_16);
  goto j_27;
  k_16 :
  goto e_16;
  j_16 :
  Ccontinue(l_16);
  Rpush(m_16);
  goto k_27;
  m_16 :
  goto e_16;
  l_16 :
  Ccontinue(n_16);
  Rpush(o_16);
  goto l_27;
  o_16 :
  goto e_16;
  n_16 :
  Ccontinue(p_16);
  Rpush(q_16);
  goto r_27;
  q_16 :
  goto e_16;
  p_16 :
  Ccontinue(r_16);
  Rpush(s_16);
  goto s_27;
  s_16 :
  goto e_16;
  r_16 :
  Ccontinue(t_16);
  Rpush(u_16);
  goto t_27;
  u_16 :
  goto e_16;
  t_16 :
  Ccontinue(v_16);
  Rpush(w_16);
  goto u_27;
  w_16 :
  goto e_16;
  v_16 :
  Rpush(y_16);
  goto v_27;
  y_16 :
  goto x_16;
  e_16 :
  Cpop();
  x_16 :
  goto x_14;
  x_14 :
  goto w_14;
  h_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_21;
  r_21 :
  TestStr(1,1,"-S",&&fail);
  Rpush(a_17);
  goto w_27;
  a_17 :
  goto z_16;
  w_27 :
  Return();
  z_16 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(o_10));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(o_10),Egetd(0,5)));
  Return();
  i_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_21;
  u_21 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(c_17);
  goto y_27;
  c_17 :
  goto b_17;
  y_27 :
  Return();
  b_17 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(o_10));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(o_10),Egetd(0,5)));
  Return();
  j_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_21;
  x_21 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(b_18);
  goto a_28;
  b_18 :
  goto y_17;
  a_28 :
  Return();
  y_17 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(e_18));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(e_18),Egetd(0,5)));
  Return();
  k_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_22;
  a_22 :
  TestStr(1,1,"-v",&&fail);
  Rpush(b_19);
  goto c_28;
  b_19 :
  goto a_19;
  c_28 :
  Return();
  a_19 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(c_19));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(c_19),Egetd(0,5)));
  Return();
  l_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_22;
  d_22 :
  TestStr(1,1,"--version",&&fail);
  Rpush(g_19);
  goto e_28;
  g_19 :
  goto f_19;
  e_28 :
  Return();
  f_19 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(c_19));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(c_19),Egetd(0,5)));
  Return();
  m_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_22;
  g_22 :
  TestStr(1,1,"@version",&&fail);
  Rpush(i_19);
  goto g_28;
  i_19 :
  goto h_19;
  g_28 :
  Return();
  h_19 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(j_19,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(j_19,Egetd(0,1)),Egetd(0,2)));
  Return();
  n_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_22;
  k_22 :
  TestStr(1,1,"-i",&&fail);
  Rpush(q_19);
  goto j_28;
  q_19 :
  goto k_19;
  j_28 :
  Return();
  k_19 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(j_13,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(j_13,Egetd(0,1)),Egetd(0,2)));
  Return();
  o_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_22;
  o_22 :
  TestStr(1,1,"--input",&&fail);
  Rpush(t_19);
  goto m_28;
  t_19 :
  goto s_19;
  m_28 :
  Return();
  s_19 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(j_13,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(j_13,Egetd(0,1)),Egetd(0,2)));
  Return();
  p_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_22;
  s_22 :
  TestStr(1,1,"-o",&&fail);
  Rpush(w_19);
  goto p_28;
  w_19 :
  goto u_19;
  p_28 :
  Return();
  u_19 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(z_19,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(z_19,Egetd(0,1)),Egetd(0,2)));
  Return();
  q_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_22;
  w_22 :
  TestStr(1,1,"--output",&&fail);
  Rpush(b_20);
  goto s_28;
  b_20 :
  goto a_20;
  s_28 :
  Return();
  a_20 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(z_19,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(z_19,Egetd(0,1)),Egetd(0,2)));
  Return();
  r_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_23;
  a_23 :
  TestStr(1,1,"-b",&&fail);
  Rpush(d_20);
  goto v_28;
  d_20 :
  goto c_20;
  v_28 :
  Return();
  c_20 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(n_20));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(n_20),Egetd(0,5)));
  Return();
  s_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_23;
  d_23 :
  TestStr(1,1,"-s",&&fail);
  Rpush(x_20);
  goto x_28;
  x_20 :
  goto r_20;
  x_28 :
  Return();
  r_20 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(y_20));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(y_20),Egetd(0,5)));
  Return();
  t_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_23;
  g_23 :
  TestStr(1,1,"--help",&&fail);
  Rpush(a_21);
  goto z_28;
  a_21 :
  goto z_20;
  z_28 :
  Return();
  z_20 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_13));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(x_13),Egetd(0,5)));
  Return();
  u_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_23;
  j_23 :
  TestStr(1,1,"-h",&&fail);
  Rpush(c_21);
  goto b_29;
  c_21 :
  goto b_21;
  b_29 :
  Return();
  b_21 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_13));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(x_13),Egetd(0,5)));
  Return();
  v_27 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_23;
  m_23 :
  TestStr(1,1,"-?",&&fail);
  Rpush(e_21);
  goto d_29;
  e_21 :
  goto d_21;
  d_29 :
  Return();
  d_21 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_13));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(x_13),Egetd(0,5)));
  Return();
  w_14 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_6)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_29;
  g_29 :
  TestFunFC(z_2,&&fail,Egetd(0,1));
  Rpush(g_21);
  goto i_29;
  g_21 :
  goto f_21;
  i_29 :
  Return();
  f_21 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  Epushd(0,1);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(m_12,Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(h_21);
  n_32 :
  Cpush(j_21);
  Cpush(l_21);
  Ccall(_stratego_h_6);
  goto k_21;
  l_21 :
  Ccall(_stratego_g_6);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_21);
  goto n_32;
  n_21 :
  AllBuild();
  goto m_21;
  k_21 :
  Cpop();
  m_21 :
  goto i_21;
  j_21 :
  Epushd(1,3);
  MoveTop(1,1);
  goto l_29;
  l_29 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(q_21);
  goto o_32;
  q_21 :
  goto p_21;
  o_32 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(t_14,Egetd(1,2)),Egetd(1,3)));
  Return();
  p_21 :
  Epopd(1,3);
  goto o_21;
  i_21 :
  Cpop();
  o_21 :
  Return();
  h_21 :
  AllBuild();
  Cpush(t_21);
  Ccall(_stratego_f_6);
  goto s_21;
  t_21 :
  Ccontinue(v_21);
  Epushd(1,6);
  Ccall(_stratego_a_6);
  Tdupl();
  Ccall(_stratego_y_5);
  Tpop();
  Tdupl();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Cpush(y_21);
  Rpush(z_21);
  p_32 :
  Cpush(c_22);
  Epushd(2,4);
  MoveTop(2,1);
  goto n_29;
  n_29 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto o_29;
  o_29 :
  TestFunFC(z_19,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(f_22);
  goto q_32;
  f_22 :
  goto e_22;
  q_32 :
  Move(0,1,2,3);
  Return();
  e_22 :
  Epopd(2,4);
  goto b_22;
  c_22 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_22);
  goto p_32;
  i_22 :
  AllBuild();
  goto h_22;
  b_22 :
  Cpop();
  h_22 :
  Return();
  z_21 :
  goto w_21;
  y_21 :
  Tset((ATerm)ATmakeAppl0(l_22));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(l_22));
  MoveTop(0,1);
  Tpop();
  goto j_22;
  w_21 :
  Cpop();
  j_22 :
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_5);
  AllBuild();
  AllBuild();
  Tpop();
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_v_5);
  Tpop();
  Tdupl();
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("#include <stratego.h>"),(ATerm)ATmakeAppl0(z_2)),(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("#include <stratego-lib.h>"),(ATerm)ATmakeAppl0(z_2)),(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("#include <stratego-ext.h>"),(ATerm)ATmakeAppl0(z_2)),(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(z_2),(ATerm)ATmakeAppl0(z_2))))));
  Rpush(m_22);
  s_32 :
  Cpush(p_22);
  Ccall(_stratego_h_6);
  goto n_22;
  p_22 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,1);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(y_0,Egetd(0,1),(ATerm)ATmakeAppl2(y_0,Egetd(2,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_c_6);
  Epopd(2,1);
  Tpop();
  OneNextSon();
  Rpush(r_22);
  goto s_32;
  r_22 :
  AllBuild();
  goto q_22;
  n_22 :
  Cpop();
  q_22 :
  Return();
  m_22 :
  Tpop();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Rpush(t_22);
  w_32 :
  Cpush(v_22);
  TestFunTop(x_22);
  TravInit();
  OneNextSon();
  Rpush(y_22);
  x_32 :
  Cpush(b_23);
  Ccall(_stratego_h_6);
  goto z_22;
  b_23 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Rpush(e_23);
  goto w_32;
  e_23 :
  OneNextSon();
  Rpush(f_23);
  goto x_32;
  f_23 :
  AllBuild();
  goto c_23;
  z_22 :
  Cpop();
  c_23 :
  Return();
  y_22 :
  AllBuild();
  goto u_22;
  v_22 :
  Tdupl();
  Cpush(k_23);
  Ccall(_stratego_u_5);
  goto i_23;
  k_23 :
  Epushd(2,7);
  MoveTop(2,1);
  Ccall(_stratego_t_5);
  MoveTop(2,2);
  NotNULLd(2,2);
  Tset((ATerm)ATmakeAppl2(y_0,Egetd(2,2),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl2(j_0,ATmakeString(";"),(ATerm)ATmakeAppl0(z_2)),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,3);
  goto x_29;
  x_29 :
  TestFunFC(y_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto y_29;
  y_29 :
  TestFunFC(y_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto z_29;
  z_29 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  Rpush(v_23);
  goto a_33;
  v_23 :
  goto n_23;
  a_33 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(w_23);
  b_33 :
  Cpush(z_23);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_24);
  goto b_33;
  a_24 :
  AllBuild();
  goto y_23;
  z_23 :
  Ccall(_stratego_h_6);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto b_24;
  y_23 :
  Cpop();
  b_24 :
  Return();
  w_23 :
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("  "),Egetd(3,1)),(ATerm)ATmakeAppl0(z_2)));
  Epopd(3,1);
  Return();
  n_23 :
  Epopd(2,7);
  goto l_23;
  i_23 :
  Cpop();
  l_23 :
  Rpush(d_24);
  d_33 :
  Cpush(f_24);
  Ccall(_stratego_h_6);
  goto e_24;
  f_24 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,1);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(y_0,Egetd(0,1),(ATerm)ATmakeAppl2(y_0,Egetd(2,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_c_6);
  Epopd(2,1);
  Tpop();
  OneNextSon();
  Rpush(i_24);
  goto d_33;
  i_24 :
  AllBuild();
  goto g_24;
  e_24 :
  Cpop();
  g_24 :
  Return();
  d_24 :
  Tpop();
  goto h_23;
  u_22 :
  Cpop();
  h_23 :
  Return();
  t_22 :
  OneNextSon();
  Ccall(_stratego_m_5);
  AllBuild();
  AllBuild();
  Tdupl();
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(z_2),(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("DOIT"),(ATerm)ATmakeAppl0(z_2)),(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(z_2),(ATerm)ATmakeAppl0(z_2)))));
  Rpush(j_24);
  h_33 :
  Cpush(l_24);
  Ccall(_stratego_h_6);
  goto k_24;
  l_24 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,1);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(y_0,Egetd(0,1),(ATerm)ATmakeAppl2(y_0,Egetd(2,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_c_6);
  Epopd(2,1);
  Tpop();
  OneNextSon();
  Rpush(o_24);
  goto h_33;
  o_24 :
  AllBuild();
  goto n_24;
  k_24 :
  Cpop();
  n_24 :
  Return();
  j_24 :
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_y_5);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  MoveTop(1,2);
  goto i_30;
  i_30 :
  TestFunFC(y_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto j_30;
  j_30 :
  TestFunFC(y_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto k_30;
  k_30 :
  TestFunFC(c_0,&&fail,Egetd(1,6));
  Rpush(q_24);
  goto m_33;
  q_24 :
  goto p_24;
  m_33 :
  NotNULLd(1,1);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset((ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(m_11,Egetd(1,1)),Egetd(1,3)),(ATerm)ATmakeAppl2(y_0,Egetd(1,5),(ATerm)ATmakeAppl0(c_0))));
  Return();
  p_24 :
  Ccall(_stratego_x_5);
  Epopd(1,6);
  goto s_21;
  v_21 :
  Ccall(_stratego_w_5);
  goto s_24;
  s_21 :
  Cpop();
  s_24 :
  Epopd(0,1);
ENDPROC

DOIT

