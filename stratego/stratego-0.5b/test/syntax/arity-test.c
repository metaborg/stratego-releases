#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,h_12);
VARDECL(AFun,f_12);
VARDECL(AFun,b_11);
VARDECL(AFun,d_10);
VARDECL(AFun,v_9);
VARDECL(AFun,r_9);
VARDECL(AFun,m_5);
VARDECL(AFun,y_3);
VARDECL(AFun,r_2);
VARDECL(AFun,n_2);
VARDECL(AFun,c_2);
VARDECL(AFun,u_1);
VARDECL(AFun,q_1);
VARDECL(AFun,f_1);
VARDECL(AFun,x_0);
VARDECL(AFun,p_0);
VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
VARDECL(AFun,e_0);
VARDECL(AFun,d_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_a_3);
PROCDECL(_stratego_b_3);
PROCDECL(_stratego_c_3);
PROCDECL(_stratego_d_3);
PROCDECL(_stratego_e_3);
PROCDECL(_stratego_f_3);
PROCDECL(_stratego_l_3);
PROCDECL(_stratego_m_3);
PROCDECL(_stratego_n_3);
PROCDECL(_stratego_o_3);
PROCDECL(_stratego_r_3);
PROCDECL(_stratego_s_3);
PROCDECL(_stratego_t_3);
PROCDECL(_stratego_u_3);
PROCDECL(_stratego_v_3);
PROCDECL(_stratego_w_3);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(h_12,ATmakeAFun("Zero",0,0));
  MOVE(f_12,ATmakeAFun("Six",6,0));
  MOVE(b_11,ATmakeAFun("Statistics",0,0));
  MOVE(d_10,ATmakeAFun("DeclVersion",1,0));
  MOVE(v_9,ATmakeAFun("Version",0,0));
  MOVE(r_9,ATmakeAFun("Verbose",0,0));
  MOVE(m_5,ATmakeAFun("Undefined",1,0));
  MOVE(y_3,ATmakeAFun("Help",0,0));
  MOVE(r_2,ATmakeAFun("stdin",0,0));
  MOVE(n_2,ATmakeAFun("Input",1,0));
  MOVE(c_2,ATmakeAFun("Binary",0,0));
  MOVE(u_1,ATmakeAFun("stdout",0,0));
  MOVE(q_1,ATmakeAFun("Output",1,0));
  MOVE(f_1,ATmakeAFun("Program",1,0));
  MOVE(x_0,ATmakeAFun("Runtime",1,0));
  MOVE(p_0,ATmakeAFun("Silent",0,0));
  MOVE(g_0,ATmakeAFun("Nil",0,0));
  MOVE(f_0,ATmakeAFun("Cons",2,0));
  MOVE(e_0,ATmakeAFun("stderr",0,0));
  MOVE(d_0,ATmakeAFun("TCons",2,0));
  MOVE(c_0,ATmakeAFun("TNil",0,0));
ENDPROC

PROC(_stratego_a_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_2;
  s_2 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  Rpush(b_0);
  goto h_3;
  b_0 :
  goto a_0;
  h_3 :
  Return();
  a_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_3)
  Tset((ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl2(f_0,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_r_3);
  Tset(MakeInt(1));
  Ccall(_stratego_o_3);
ENDPROC

PROC(_stratego_c_3)
  Epushd(0,2);
  Tdupl();
  Cpush(i_0);
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Cpush(j_0);
  Tdupl();
  Rpush(k_0);
  o_4 :
  Cpush(m_0);
  Epushd(1,3);
  MoveTop(1,1);
  goto j_3;
  j_3 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_3;
  k_3 :
  TestFunFC(p_0,&&fail,Egetd(1,2));
  Rpush(o_0);
  goto p_4;
  o_0 :
  goto n_0;
  p_4 :
  Return();
  n_0 :
  Epopd(1,3);
  goto l_0;
  m_0 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_0);
  goto o_4;
  r_0 :
  AllBuild();
  goto q_0;
  l_0 :
  Cpop();
  q_0 :
  Return();
  k_0 :
  Cpop();
  Crestore();
  Cjump();
  j_0 :
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(s_0);
  q_4 :
  Cpush(u_0);
  Epushd(1,4);
  MoveTop(1,1);
  goto q_3;
  q_3 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto x_3;
  x_3 :
  TestFunFC(x_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(w_0);
  goto r_4;
  w_0 :
  goto v_0;
  r_4 :
  Move(0,2,1,3);
  Return();
  v_0 :
  Epopd(1,4);
  goto t_0;
  u_0 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_0);
  goto q_4;
  z_0 :
  AllBuild();
  goto y_0;
  t_0 :
  Cpop();
  y_0 :
  Return();
  s_0 :
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(a_1);
  s_4 :
  Cpush(c_1);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_3;
  z_3 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_4;
  a_4 :
  TestFunFC(f_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_1);
  goto t_4;
  e_1 :
  goto d_1;
  t_4 :
  Move(0,1,1,3);
  Return();
  d_1 :
  Epopd(1,4);
  goto b_1;
  c_1 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_1);
  goto s_4;
  h_1 :
  AllBuild();
  goto g_1;
  b_1 :
  Cpop();
  g_1 :
  Return();
  a_1 :
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl2(f_0,Egetd(0,1),(ATerm)ATmakeAppl2(f_0,ATmakeString(" ("),(ATerm)ATmakeAppl2(f_0,Egetd(0,2),(ATerm)ATmakeAppl2(f_0,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(g_0))))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_r_3);
  goto h_0;
  i_0 :
  goto i_1;
  h_0 :
  Cpop();
  i_1 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_o_3);
  Epopd(0,2);
ENDPROC

PROC(_stratego_d_3)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_e_3)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_f_3)
  Epushd(0,1);
  Tdupl();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Cpush(k_1);
  Rpush(l_1);
  t_5 :
  Cpush(n_1);
  Epushd(1,4);
  MoveTop(1,1);
  goto v_4;
  v_4 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto w_4;
  w_4 :
  TestFunFC(q_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_1);
  goto u_5;
  p_1 :
  goto o_1;
  u_5 :
  Move(0,1,1,3);
  Return();
  o_1 :
  Epopd(1,4);
  goto m_1;
  n_1 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_1);
  goto t_5;
  s_1 :
  AllBuild();
  goto r_1;
  m_1 :
  Cpop();
  r_1 :
  Return();
  l_1 :
  goto j_1;
  k_1 :
  Tset((ATerm)ATmakeAppl0(u_1));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(u_1));
  MoveTop(0,1);
  Tpop();
  goto t_1;
  j_1 :
  Cpop();
  t_1 :
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(0,1),(ATerm)ATmakeAppl2(d_0,Egetd(1,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  Cpush(w_1);
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(x_1);
  z_5 :
  Cpush(z_1);
  Epushd(1,3);
  MoveTop(1,1);
  goto c_5;
  c_5 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_5;
  d_5 :
  TestFunFC(c_2,&&fail,Egetd(1,2));
  Rpush(b_2);
  goto a_6;
  b_2 :
  goto a_2;
  a_6 :
  Return();
  a_2 :
  Epopd(1,3);
  goto y_1;
  z_1 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_2);
  goto z_5;
  e_2 :
  AllBuild();
  goto d_2;
  y_1 :
  Cpop();
  d_2 :
  Return();
  x_1 :
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_3);
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  goto v_1;
  w_1 :
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_3);
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  goto f_2;
  v_1 :
  Cpop();
  f_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_3)
  _ST_dtime();
ENDPROC

PROC(_stratego_m_3)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_n_3)
  Epushd(0,3);
  Tdupl();
  Cpush(h_2);
  Rpush(i_2);
  u_6 :
  Cpush(k_2);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_6;
  c_6 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_6;
  d_6 :
  TestFunFC(n_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_2);
  goto v_6;
  m_2 :
  goto l_2;
  v_6 :
  Move(0,1,1,3);
  Return();
  l_2 :
  Epopd(1,4);
  goto j_2;
  k_2 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_2);
  goto u_6;
  p_2 :
  AllBuild();
  goto o_2;
  j_2 :
  Cpop();
  o_2 :
  Return();
  i_2 :
  goto g_2;
  h_2 :
  Tset((ATerm)ATmakeAppl0(r_2));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(r_2));
  MoveTop(0,1);
  Tpop();
  goto q_2;
  g_2 :
  Cpop();
  q_2 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_m_3);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(0,2),(ATerm)ATmakeAppl2(d_0,Egetd(0,3),(ATerm)ATmakeAppl0(c_0))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_o_3)
  _ST_exit();
ENDPROC

PROC(_stratego_r_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_s_3)
  Epushd(0,1);
  Tdupl();
  Rpush(t_2);
  i_7 :
  Cpush(v_2);
  Epushd(1,4);
  MoveTop(1,1);
  goto b_7;
  b_7 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto c_7;
  c_7 :
  TestFunFC(f_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(x_2);
  goto j_7;
  x_2 :
  goto w_2;
  j_7 :
  Move(0,1,1,3);
  Return();
  w_2 :
  Epopd(1,4);
  goto u_2;
  v_2 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_2);
  goto i_7;
  z_2 :
  AllBuild();
  goto y_2;
  u_2 :
  Cpop();
  y_2 :
  Return();
  t_2 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl2(f_0,ATmakeString("usage : "),(ATerm)ATmakeAppl2(f_0,Egetd(0,1),(ATerm)ATmakeAppl2(f_0,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(g_0)))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_r_3);
  Tset(MakeInt(1));
  Ccall(_stratego_o_3);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_7;
  l_7 :
  TestFunFC(y_3,&&fail,Egetd(0,1));
  Rpush(p_3);
  goto n_7;
  p_3 :
  goto i_3;
  n_7 :
  Return();
  i_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_3)
  Rpush(u_4);
  s_7 :
  Cpush(y_4);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(a_5);
  Ccall(_stratego_t_3);
  goto z_4;
  a_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto p_7;
  p_7 :
  TestFunFC(m_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_5);
  goto t_7;
  l_5 :
  goto j_5;
  t_7 :
  Return();
  j_5 :
  Epopd(0,2);
  goto b_5;
  z_4 :
  Cpop();
  b_5 :
  OneNextSon();
  AllBuild();
  goto x_4;
  y_4 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_5);
  goto s_7;
  o_5 :
  AllBuild();
  goto n_5;
  x_4 :
  Cpop();
  n_5 :
  Return();
  u_4 :
  Ccall(_stratego_s_3);
ENDPROC

PROC(_stratego_v_3)
  Epushd(0,5);
  MoveTop(0,3);
  goto h_10;
  h_10 :
  TestFunFC(f_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto i_10;
  i_10 :
  TestFunFC(f_0,&&w_5,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(y_5);
  Rpush(b_6);
  goto f_14;
  b_6 :
  goto x_5;
  y_5 :
  Ccontinue(e_6);
  Rpush(f_6);
  goto g_14;
  f_6 :
  goto x_5;
  e_6 :
  Ccontinue(g_6);
  Rpush(h_6);
  goto h_14;
  h_6 :
  goto x_5;
  g_6 :
  Ccontinue(n_6);
  Rpush(p_6);
  goto i_14;
  p_6 :
  goto x_5;
  n_6 :
  Ccontinue(q_6);
  Rpush(r_6);
  goto j_14;
  r_6 :
  goto x_5;
  q_6 :
  Ccontinue(t_6);
  Rpush(w_6);
  goto k_14;
  w_6 :
  goto x_5;
  t_6 :
  Ccontinue(x_6);
  Rpush(y_6);
  goto l_14;
  y_6 :
  goto x_5;
  x_6 :
  Ccontinue(z_6);
  Rpush(a_7);
  goto m_14;
  a_7 :
  goto x_5;
  z_6 :
  Ccontinue(k_7);
  Rpush(o_7);
  goto n_14;
  o_7 :
  goto x_5;
  k_7 :
  Ccontinue(u_7);
  Rpush(v_7);
  goto o_14;
  v_7 :
  goto x_5;
  u_7 :
  Ccontinue(w_7);
  Rpush(x_7);
  goto p_14;
  x_7 :
  goto x_5;
  w_7 :
  Ccontinue(y_7);
  Rpush(z_7);
  goto q_14;
  z_7 :
  goto x_5;
  y_7 :
  Ccontinue(a_8);
  Rpush(b_8);
  goto r_14;
  b_8 :
  goto x_5;
  a_8 :
  Ccontinue(c_8);
  Rpush(d_8);
  goto s_14;
  d_8 :
  goto x_5;
  c_8 :
  Rpush(f_8);
  goto t_14;
  f_8 :
  goto e_8;
  x_5 :
  Cpop();
  e_8 :
  goto v_5;
  w_5 :
  Cpush(h_8);
  Rpush(i_8);
  goto f_14;
  i_8 :
  goto g_8;
  h_8 :
  Ccontinue(j_8);
  Rpush(l_8);
  goto g_14;
  l_8 :
  goto g_8;
  j_8 :
  Ccontinue(m_8);
  Rpush(o_8);
  goto h_14;
  o_8 :
  goto g_8;
  m_8 :
  Ccontinue(p_8);
  Rpush(r_8);
  goto i_14;
  r_8 :
  goto g_8;
  p_8 :
  Ccontinue(s_8);
  Rpush(u_8);
  goto j_14;
  u_8 :
  goto g_8;
  s_8 :
  Ccontinue(v_8);
  Rpush(x_8);
  goto p_14;
  x_8 :
  goto g_8;
  v_8 :
  Ccontinue(y_8);
  Rpush(a_9);
  goto q_14;
  a_9 :
  goto g_8;
  y_8 :
  Ccontinue(b_9);
  Rpush(c_9);
  goto r_14;
  c_9 :
  goto g_8;
  b_9 :
  Ccontinue(e_9);
  Rpush(f_9);
  goto s_14;
  f_9 :
  goto g_8;
  e_9 :
  Rpush(i_9);
  goto t_14;
  i_9 :
  goto g_9;
  g_8 :
  Cpop();
  g_9 :
  goto v_5;
  v_5 :
  goto p_5;
  f_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_8;
  k_8 :
  TestStr(1,1,"-S",&&fail);
  Rpush(k_9);
  goto u_14;
  k_9 :
  goto j_9;
  u_14 :
  Return();
  j_9 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(p_0));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(p_0),Egetd(0,5)));
  Return();
  g_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_8;
  n_8 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(n_9);
  goto w_14;
  n_9 :
  goto m_9;
  w_14 :
  Return();
  m_9 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(p_0));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(p_0),Egetd(0,5)));
  Return();
  h_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_8;
  q_8 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(q_9);
  goto y_14;
  q_9 :
  goto o_9;
  y_14 :
  Return();
  o_9 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(r_9));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_9),Egetd(0,5)));
  Return();
  i_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_8;
  t_8 :
  TestStr(1,1,"-v",&&fail);
  Rpush(u_9);
  goto a_15;
  u_9 :
  goto s_9;
  a_15 :
  Return();
  s_9 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(v_9));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(v_9),Egetd(0,5)));
  Return();
  j_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_8;
  w_8 :
  TestStr(1,1,"--version",&&fail);
  Rpush(y_9);
  goto c_15;
  y_9 :
  goto x_9;
  c_15 :
  Return();
  x_9 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(v_9));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(v_9),Egetd(0,5)));
  Return();
  k_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_8;
  z_8 :
  TestStr(1,1,"@version",&&fail);
  Rpush(b_10);
  goto e_15;
  b_10 :
  goto a_10;
  e_15 :
  Return();
  a_10 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(d_10,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(d_10,Egetd(0,1)),Egetd(0,2)));
  Return();
  l_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_9;
  d_9 :
  TestStr(1,1,"-i",&&fail);
  Rpush(g_10);
  goto h_15;
  g_10 :
  goto e_10;
  h_15 :
  Return();
  e_10 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(n_2,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(n_2,Egetd(0,1)),Egetd(0,2)));
  Return();
  m_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_9;
  h_9 :
  TestStr(1,1,"--input",&&fail);
  Rpush(p_10);
  goto k_15;
  p_10 :
  goto o_10;
  k_15 :
  Return();
  o_10 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(n_2,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(n_2,Egetd(0,1)),Egetd(0,2)));
  Return();
  n_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_9;
  l_9 :
  TestStr(1,1,"-o",&&fail);
  Rpush(s_10);
  goto n_15;
  s_10 :
  goto r_10;
  n_15 :
  Return();
  r_10 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(q_1,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_1,Egetd(0,1)),Egetd(0,2)));
  Return();
  o_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_9;
  p_9 :
  TestStr(1,1,"--output",&&fail);
  Rpush(u_10);
  goto q_15;
  u_10 :
  goto t_10;
  q_15 :
  Return();
  t_10 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(q_1,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_1,Egetd(0,1)),Egetd(0,2)));
  Return();
  p_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_9;
  t_9 :
  TestStr(1,1,"-b",&&fail);
  Rpush(x_10);
  goto t_15;
  x_10 :
  goto w_10;
  t_15 :
  Return();
  w_10 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(c_2));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(c_2),Egetd(0,5)));
  Return();
  q_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_9;
  w_9 :
  TestStr(1,1,"-s",&&fail);
  Rpush(z_10);
  goto v_15;
  z_10 :
  goto y_10;
  v_15 :
  Return();
  y_10 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_11));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(b_11),Egetd(0,5)));
  Return();
  r_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_9;
  z_9 :
  TestStr(1,1,"--help",&&fail);
  Rpush(d_11);
  goto x_15;
  d_11 :
  goto c_11;
  x_15 :
  Return();
  c_11 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(y_3));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(y_3),Egetd(0,5)));
  Return();
  s_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_10;
  c_10 :
  TestStr(1,1,"-h",&&fail);
  Rpush(g_11);
  goto z_15;
  g_11 :
  goto e_11;
  z_15 :
  Return();
  e_11 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(y_3));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(y_3),Egetd(0,5)));
  Return();
  t_14 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_10;
  f_10 :
  TestStr(1,1,"-?",&&fail);
  Rpush(i_11);
  goto b_16;
  i_11 :
  goto h_11;
  b_16 :
  Return();
  h_11 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(y_3));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(y_3),Egetd(0,5)));
  Return();
  p_5 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_w_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_16;
  e_16 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  Rpush(l_11);
  goto g_16;
  l_11 :
  goto j_11;
  g_16 :
  Return();
  j_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(f_1,Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(m_11);
  r_17 :
  Cpush(o_11);
  Cpush(r_11);
  Ccall(_stratego_w_3);
  goto p_11;
  r_11 :
  Ccall(_stratego_v_3);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_11);
  goto r_17;
  t_11 :
  AllBuild();
  goto s_11;
  p_11 :
  Cpop();
  s_11 :
  goto n_11;
  o_11 :
  Epushd(0,3);
  MoveTop(0,1);
  goto j_16;
  j_16 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(w_11);
  goto s_17;
  w_11 :
  goto v_11;
  s_17 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(m_5,Egetd(0,2)),Egetd(0,3)));
  Return();
  v_11 :
  Epopd(0,3);
  goto u_11;
  n_11 :
  Cpop();
  u_11 :
  Return();
  m_11 :
  AllBuild();
  Cpush(z_11);
  Ccall(_stratego_u_3);
  goto x_11;
  z_11 :
  Ccontinue(a_12);
  Epushd(0,6);
  Ccall(_stratego_n_3);
  Tdupl();
  Ccall(_stratego_l_3);
  Tpop();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Epushd(1,3);
  MoveTop(1,1);
  goto n_16;
  n_16 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_16;
  o_16 :
  TestInt(1,2,6,&&d_12);
  goto p_16;
  p_16 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  Rpush(c_12);
  goto t_17;
  d_12 :
  TestInt(1,2,7,&&e_12);
  goto q_16;
  q_16 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  Rpush(c_12);
  goto u_17;
  e_12 :
  TestInt(1,2,8,&&fail);
  goto r_16;
  r_16 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  Rpush(c_12);
  goto v_17;
  c_12 :
  goto b_12;
  t_17 :
  Tset((ATerm)ATmakeAppl6(f_12,(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12)));
  Return();
  u_17 :
  Tset(AppN("Seven",ATmakeList(7,(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12))));
  Return();
  v_17 :
  Tset(AppN("Eight",ATmakeList(8,(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12),(ATerm)ATmakeAppl0(h_12))));
  Return();
  b_12 :
  Epopd(1,3);
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_l_3);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto u_16;
  u_16 :
  TestFunFC(d_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto v_16;
  v_16 :
  TestFunFC(d_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto w_16;
  w_16 :
  TestFunFC(c_0,&&fail,Egetd(0,6));
  Rpush(j_12);
  goto x_17;
  j_12 :
  goto i_12;
  x_17 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(x_0,Egetd(0,1)),Egetd(0,3)),(ATerm)ATmakeAppl2(d_0,Egetd(0,5),(ATerm)ATmakeAppl0(c_0))));
  Return();
  i_12 :
  Ccall(_stratego_f_3);
  Ccall(_stratego_c_3);
  Epopd(0,6);
  goto x_11;
  a_12 :
  Ccall(_stratego_b_3);
  goto k_12;
  x_11 :
  Cpop();
  k_12 :
ENDPROC

DOIT

