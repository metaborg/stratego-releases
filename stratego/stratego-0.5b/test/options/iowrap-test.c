#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,a_15);
VARDECL(AFun,z_14);
VARDECL(AFun,d_13);
VARDECL(AFun,y_12);
VARDECL(AFun,u_12);
VARDECL(AFun,f_12);
VARDECL(AFun,w_5);
VARDECL(AFun,w_4);
VARDECL(AFun,a_3);
VARDECL(AFun,s_2);
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
PROCDECL(_stratego_h_3);
PROCDECL(_stratego_i_3);
PROCDECL(_stratego_j_3);
PROCDECL(_stratego_k_3);
PROCDECL(_stratego_l_3);
PROCDECL(_stratego_m_3);
PROCDECL(_stratego_n_3);
PROCDECL(_stratego_o_3);
PROCDECL(_stratego_p_3);
PROCDECL(_stratego_q_3);
PROCDECL(_stratego_r_3);
PROCDECL(_stratego_s_3);
PROCDECL(_stratego_t_3);
PROCDECL(_stratego_u_3);
PROCDECL(_stratego_v_3);
PROCDECL(_stratego_w_3);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(a_15,ATmakeAFun("B",0,0));
  MOVE(z_14,ATmakeAFun("A",0,0));
  MOVE(d_13,ATmakeAFun("Verbose",0,0));
  MOVE(y_12,ATmakeAFun("Version",0,0));
  MOVE(u_12,ATmakeAFun("DeclVersion",1,0));
  MOVE(f_12,ATmakeAFun("Statistics",0,0));
  MOVE(w_5,ATmakeAFun("Undefined",1,0));
  MOVE(w_4,ATmakeAFun("Help",0,0));
  MOVE(a_3,ATmakeAFun("stdin",0,0));
  MOVE(s_2,ATmakeAFun("Input",1,0));
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

PROC(_stratego_h_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_2;
  m_2 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  Rpush(b_0);
  goto l_2;
  b_0 :
  goto a_0;
  l_2 :
  Return();
  a_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_3)
  Tset((ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl2(f_0,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_r_3);
  Tset(MakeInt(1));
  Ccall(_stratego_q_3);
ENDPROC

PROC(_stratego_j_3)
  Epushd(0,2);
  Tdupl();
  Cpush(i_0);
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Cpush(j_0);
  Tdupl();
  Rpush(k_0);
  n_4 :
  Cpush(m_0);
  Epushd(1,3);
  MoveTop(1,1);
  goto p_2;
  p_2 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto u_2;
  u_2 :
  TestFunFC(p_0,&&fail,Egetd(1,2));
  Rpush(o_0);
  goto o_2;
  o_0 :
  goto n_0;
  o_2 :
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
  goto n_4;
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
  Ccall(_stratego_h_3);
  AllBuild();
  AllBuild();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(s_0);
  o_4 :
  Cpush(u_0);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_2;
  y_2 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_2;
  z_2 :
  TestFunFC(x_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(w_0);
  goto v_2;
  w_0 :
  goto v_0;
  v_2 :
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
  goto o_4;
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
  Ccall(_stratego_h_3);
  AllBuild();
  AllBuild();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(a_1);
  p_4 :
  Cpush(c_1);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_3;
  y_3 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_3;
  z_3 :
  TestFunFC(f_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_1);
  goto x_3;
  e_1 :
  goto d_1;
  x_3 :
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
  goto p_4;
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
  Ccall(_stratego_h_3);
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
  Ccall(_stratego_q_3);
  Epopd(0,2);
ENDPROC

PROC(_stratego_k_3)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_l_3)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_m_3)
  Epushd(0,1);
  Tdupl();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Cpush(k_1);
  Rpush(l_1);
  p_5 :
  Cpush(n_1);
  Epushd(1,4);
  MoveTop(1,1);
  goto r_4;
  r_4 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto s_4;
  s_4 :
  TestFunFC(q_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_1);
  goto q_4;
  p_1 :
  goto o_1;
  q_4 :
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
  goto p_5;
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
  Ccall(_stratego_h_3);
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
  Ccall(_stratego_h_3);
  AllBuild();
  AllBuild();
  Cpush(w_1);
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Rpush(x_1);
  q_5 :
  Cpush(z_1);
  Epushd(1,3);
  MoveTop(1,1);
  goto y_4;
  y_4 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_4;
  z_4 :
  TestFunFC(c_2,&&fail,Egetd(1,2));
  Rpush(b_2);
  goto x_4;
  b_2 :
  goto a_2;
  x_4 :
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
  goto q_5;
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
  Ccall(_stratego_l_3);
  OneNextSon();
  Ccall(_stratego_h_3);
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
  Ccall(_stratego_k_3);
  OneNextSon();
  Ccall(_stratego_h_3);
  AllBuild();
  AllBuild();
  goto f_2;
  v_1 :
  Cpop();
  f_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_3)
  _ST_dtime();
ENDPROC

PROC(_stratego_o_3)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_p_3)
  Epushd(0,3);
  Tdupl();
  Cpush(h_2);
  Rpush(i_2);
  k_6 :
  Cpush(k_2);
  Epushd(1,4);
  MoveTop(1,1);
  goto s_5;
  s_5 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto t_5;
  t_5 :
  TestFunFC(s_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_2);
  goto r_5;
  r_2 :
  goto q_2;
  r_5 :
  Move(0,1,1,3);
  Return();
  q_2 :
  Epopd(1,4);
  goto j_2;
  k_2 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_2);
  goto k_6;
  w_2 :
  AllBuild();
  goto t_2;
  j_2 :
  Cpop();
  t_2 :
  Return();
  i_2 :
  goto g_2;
  h_2 :
  Tset((ATerm)ATmakeAppl0(a_3));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(a_3));
  MoveTop(0,1);
  Tpop();
  goto x_2;
  g_2 :
  Cpop();
  x_2 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_o_3);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(0,2),(ATerm)ATmakeAppl2(d_0,Egetd(0,3),(ATerm)ATmakeAppl0(c_0))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_q_3)
  _ST_exit();
ENDPROC

PROC(_stratego_r_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_s_3)
  Epushd(0,1);
  Tdupl();
  Rpush(b_3);
  t_6 :
  Cpush(d_3);
  Epushd(1,4);
  MoveTop(1,1);
  goto m_6;
  m_6 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto n_6;
  n_6 :
  TestFunFC(f_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_3);
  goto l_6;
  f_3 :
  goto e_3;
  l_6 :
  Move(0,1,1,3);
  Return();
  e_3 :
  Epopd(1,4);
  goto c_3;
  d_3 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_4);
  goto t_6;
  t_4 :
  AllBuild();
  goto g_3;
  c_3 :
  Cpop();
  g_3 :
  Return();
  b_3 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl2(f_0,ATmakeString("usage : "),(ATerm)ATmakeAppl2(f_0,Egetd(0,1),(ATerm)ATmakeAppl2(f_0,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(g_0)))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_r_3);
  Tset(MakeInt(1));
  Ccall(_stratego_q_3);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto v_6;
  v_6 :
  TestFunFC(w_4,&&fail,Egetd(0,1));
  Rpush(v_4);
  goto u_6;
  v_4 :
  goto u_4;
  u_6 :
  Return();
  u_4 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_3)
  Tdupl();
  f_5 :
  TestFunTop(f_0);
  Cpush(h_5);
  Arg(0);
  Cpush(k_5);
  Ccall(_stratego_t_3);
  goto j_5;
  k_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto y_6;
  y_6 :
  TestFunFC(w_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(v_5);
  goto x_6;
  v_5 :
  goto u_5;
  x_6 :
  Return();
  u_5 :
  Epopd(0,2);
  goto l_5;
  j_5 :
  Cpop();
  l_5 :
  Tpop();
  Cpop();
  goto i_5;
  h_5 :
  Arg(1);
  Tdrop();
  goto f_5;
  i_5 :
  Tpop();
  Ccall(_stratego_s_3);
ENDPROC

PROC(_stratego_v_3)
  Epushd(0,5);
  MoveTop(0,3);
  goto p_9;
  p_9 :
  TestFunFC(f_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto q_9;
  q_9 :
  TestFunFC(f_0,&&r_8,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(v_8);
  Rpush(y_8);
  goto c_7;
  y_8 :
  goto u_8;
  v_8 :
  Ccontinue(z_8);
  Rpush(c_9);
  goto d_7;
  c_9 :
  goto u_8;
  z_8 :
  Ccontinue(f_9);
  Rpush(i_9);
  goto e_7;
  i_9 :
  goto u_8;
  f_9 :
  Ccontinue(l_9);
  Rpush(o_9);
  goto f_7;
  o_9 :
  goto u_8;
  l_9 :
  Ccontinue(w_9);
  Rpush(x_9);
  goto g_7;
  x_9 :
  goto u_8;
  w_9 :
  Ccontinue(z_9);
  Rpush(a_10);
  goto h_7;
  a_10 :
  goto u_8;
  z_9 :
  Ccontinue(b_10);
  Rpush(c_10);
  goto i_7;
  c_10 :
  goto u_8;
  b_10 :
  Ccontinue(e_10);
  Rpush(f_10);
  goto j_7;
  f_10 :
  goto u_8;
  e_10 :
  Ccontinue(g_10);
  Rpush(h_10);
  goto k_7;
  h_10 :
  goto u_8;
  g_10 :
  Ccontinue(j_10);
  Rpush(k_10);
  goto l_7;
  k_10 :
  goto u_8;
  j_10 :
  Ccontinue(l_10);
  Rpush(m_10);
  goto m_7;
  m_10 :
  goto u_8;
  l_10 :
  Ccontinue(o_10);
  Rpush(p_10);
  goto n_7;
  p_10 :
  goto u_8;
  o_10 :
  Ccontinue(q_10);
  Rpush(r_10);
  goto o_7;
  r_10 :
  goto u_8;
  q_10 :
  Ccontinue(t_10);
  Rpush(u_10);
  goto p_7;
  u_10 :
  goto u_8;
  t_10 :
  Rpush(w_10);
  goto q_7;
  w_10 :
  goto v_10;
  u_8 :
  Cpop();
  v_10 :
  goto q_8;
  r_8 :
  Cpush(z_10);
  Rpush(a_11);
  goto c_7;
  a_11 :
  goto x_10;
  z_10 :
  Ccontinue(b_11);
  Rpush(c_11);
  goto d_7;
  c_11 :
  goto x_10;
  b_11 :
  Ccontinue(d_11);
  Rpush(e_11);
  goto e_7;
  e_11 :
  goto x_10;
  d_11 :
  Ccontinue(f_11);
  Rpush(h_11);
  goto f_7;
  h_11 :
  goto x_10;
  f_11 :
  Ccontinue(i_11);
  Rpush(j_11);
  goto g_7;
  j_11 :
  goto x_10;
  i_11 :
  Ccontinue(k_11);
  Rpush(l_11);
  goto m_7;
  l_11 :
  goto x_10;
  k_11 :
  Ccontinue(m_11);
  Rpush(n_11);
  goto n_7;
  n_11 :
  goto x_10;
  m_11 :
  Ccontinue(p_11);
  Rpush(q_11);
  goto o_7;
  q_11 :
  goto x_10;
  p_11 :
  Ccontinue(r_11);
  Rpush(s_11);
  goto p_7;
  s_11 :
  goto x_10;
  r_11 :
  Rpush(u_11);
  goto q_7;
  u_11 :
  goto t_11;
  x_10 :
  Cpop();
  t_11 :
  goto q_8;
  q_8 :
  goto n_8;
  q_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_9;
  n_9 :
  TestStr(1,1,"-?",&&fail);
  Rpush(x_11);
  goto m_9;
  x_11 :
  goto v_11;
  m_9 :
  Return();
  v_11 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(w_4));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(w_4),Egetd(0,5)));
  Return();
  n_8 :
  goto m_8;
  p_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_9;
  k_9 :
  TestStr(1,1,"-h",&&fail);
  Rpush(z_11);
  goto j_9;
  z_11 :
  goto y_11;
  j_9 :
  Return();
  y_11 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(w_4));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(w_4),Egetd(0,5)));
  Return();
  m_8 :
  goto j_8;
  o_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_9;
  h_9 :
  TestStr(1,1,"--help",&&fail);
  Rpush(b_12);
  goto g_9;
  b_12 :
  goto a_12;
  g_9 :
  Return();
  a_12 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(w_4));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(w_4),Egetd(0,5)));
  Return();
  j_8 :
  goto i_8;
  n_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_9;
  e_9 :
  TestStr(1,1,"-s",&&fail);
  Rpush(d_12);
  goto d_9;
  d_12 :
  goto c_12;
  d_9 :
  Return();
  c_12 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(f_12));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(f_12),Egetd(0,5)));
  Return();
  i_8 :
  goto f_8;
  m_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_9;
  b_9 :
  TestStr(1,1,"-b",&&fail);
  Rpush(h_12);
  goto a_9;
  h_12 :
  goto g_12;
  a_9 :
  Return();
  g_12 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(c_2));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(c_2),Egetd(0,5)));
  Return();
  f_8 :
  goto c_8;
  l_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_8;
  x_8 :
  TestStr(1,1,"--output",&&fail);
  Rpush(j_12);
  goto w_8;
  j_12 :
  goto i_12;
  w_8 :
  Return();
  i_12 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(q_1,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_1,Egetd(0,1)),Egetd(0,2)));
  Return();
  c_8 :
  goto z_7;
  k_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_8;
  t_8 :
  TestStr(1,1,"-o",&&fail);
  Rpush(m_12);
  goto s_8;
  m_12 :
  goto k_12;
  s_8 :
  Return();
  k_12 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(q_1,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_1,Egetd(0,1)),Egetd(0,2)));
  Return();
  z_7 :
  goto w_7;
  j_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_8;
  p_8 :
  TestStr(1,1,"--input",&&fail);
  Rpush(o_12);
  goto o_8;
  o_12 :
  goto n_12;
  o_8 :
  Return();
  n_12 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(s_2,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_2,Egetd(0,1)),Egetd(0,2)));
  Return();
  w_7 :
  goto t_7;
  i_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_8;
  l_8 :
  TestStr(1,1,"-i",&&fail);
  Rpush(r_12);
  goto k_8;
  r_12 :
  goto p_12;
  k_8 :
  Return();
  p_12 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(s_2,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_2,Egetd(0,1)),Egetd(0,2)));
  Return();
  t_7 :
  goto j_6;
  h_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_8;
  h_8 :
  TestStr(1,1,"@version",&&fail);
  Rpush(t_12);
  goto g_8;
  t_12 :
  goto s_12;
  g_8 :
  Return();
  s_12 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(u_12,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(u_12,Egetd(0,1)),Egetd(0,2)));
  Return();
  j_6 :
  goto h_6;
  g_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_8;
  e_8 :
  TestStr(1,1,"--version",&&fail);
  Rpush(x_12);
  goto d_8;
  x_12 :
  goto w_12;
  d_8 :
  Return();
  w_12 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(y_12));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(y_12),Egetd(0,5)));
  Return();
  h_6 :
  goto g_6;
  f_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_8;
  b_8 :
  TestStr(1,1,"-v",&&fail);
  Rpush(a_13);
  goto a_8;
  a_13 :
  goto z_12;
  a_8 :
  Return();
  z_12 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(y_12));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(y_12),Egetd(0,5)));
  Return();
  g_6 :
  goto f_6;
  e_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_7;
  y_7 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(c_13);
  goto x_7;
  c_13 :
  goto b_13;
  x_7 :
  Return();
  b_13 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(d_13));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(d_13),Egetd(0,5)));
  Return();
  f_6 :
  goto d_6;
  d_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_7;
  v_7 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(g_13);
  goto u_7;
  g_13 :
  goto e_13;
  u_7 :
  Return();
  e_13 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(p_0));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(p_0),Egetd(0,5)));
  Return();
  d_6 :
  goto x_5;
  c_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_7;
  s_7 :
  TestStr(1,1,"-S",&&fail);
  Rpush(i_13);
  goto r_7;
  i_13 :
  goto h_13;
  r_7 :
  Return();
  h_13 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(p_0));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(p_0),Egetd(0,5)));
  Return();
  x_5 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_w_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_13;
  o_13 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  Rpush(l_13);
  goto n_13;
  l_13 :
  goto j_13;
  n_13 :
  Return();
  j_13 :
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
  Rpush(m_13);
  r_14 :
  Cpush(v_13);
  Cpush(f_14);
  Ccall(_stratego_w_3);
  goto b_14;
  f_14 :
  Ccall(_stratego_v_3);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_14);
  goto r_14;
  p_14 :
  AllBuild();
  goto g_14;
  b_14 :
  Cpop();
  g_14 :
  goto q_13;
  v_13 :
  Epushd(0,3);
  MoveTop(0,1);
  goto s_13;
  s_13 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(t_14);
  goto r_13;
  t_14 :
  goto s_14;
  r_13 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(w_5,Egetd(0,2)),Egetd(0,3)));
  Return();
  s_14 :
  Epopd(0,3);
  goto q_14;
  q_13 :
  Cpop();
  q_14 :
  Return();
  m_13 :
  AllBuild();
  Cpush(v_14);
  Ccall(_stratego_u_3);
  goto u_14;
  v_14 :
  Ccontinue(w_14);
  Epushd(0,6);
  Ccall(_stratego_p_3);
  Tdupl();
  Ccall(_stratego_n_3);
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
  goto u_13;
  u_13 :
  TestFunFC(z_14,&&fail,Egetd(1,1));
  Rpush(y_14);
  goto t_13;
  y_14 :
  goto x_14;
  t_13 :
  Tset((ATerm)ATmakeAppl0(a_15));
  Return();
  x_14 :
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_h_3);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_n_3);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto x_13;
  x_13 :
  TestFunFC(d_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto y_13;
  y_13 :
  TestFunFC(d_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto z_13;
  z_13 :
  TestFunFC(c_0,&&fail,Egetd(0,6));
  Rpush(c_15);
  goto w_13;
  c_15 :
  goto b_15;
  w_13 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(d_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(x_0,Egetd(0,1)),Egetd(0,3)),(ATerm)ATmakeAppl2(d_0,Egetd(0,5),(ATerm)ATmakeAppl0(c_0))));
  Return();
  b_15 :
  Ccall(_stratego_m_3);
  Ccall(_stratego_j_3);
  Epopd(0,6);
  goto u_14;
  w_14 :
  Ccall(_stratego_i_3);
  goto d_15;
  u_14 :
  Cpop();
  d_15 :
ENDPROC

DOIT

