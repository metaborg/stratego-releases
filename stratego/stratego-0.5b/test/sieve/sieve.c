#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,a_18);
VARDECL(AFun,t_17);
VARDECL(AFun,b_17);
VARDECL(AFun,z_16);
VARDECL(AFun,x_16);
VARDECL(AFun,v_16);
VARDECL(AFun,x_14);
VARDECL(AFun,v_13);
VARDECL(AFun,p_13);
VARDECL(AFun,m_13);
VARDECL(AFun,x_12);
VARDECL(AFun,x_3);
VARDECL(AFun,o_3);
VARDECL(AFun,e_3);
VARDECL(AFun,r_2);
VARDECL(AFun,g_2);
VARDECL(AFun,y_1);
VARDECL(AFun,u_1);
VARDECL(AFun,j_1);
VARDECL(AFun,b_1);
VARDECL(AFun,t_0);
VARDECL(AFun,k_0);
VARDECL(AFun,j_0);
VARDECL(AFun,i_0);
VARDECL(AFun,d_0);
VARDECL(AFun,c_0);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(a_18,ATmakeAFun("nil",0,0));
  MOVE(t_17,ATmakeAFun("take",2,0));
  MOVE(b_17,ATmakeAFun("filter",2,0));
  MOVE(z_16,ATmakeAFun("sieve",1,0));
  MOVE(x_16,ATmakeAFun("from",1,0));
  MOVE(v_16,ATmakeAFun("primes",0,0));
  MOVE(x_14,ATmakeAFun("cons",2,0));
  MOVE(v_13,ATmakeAFun("Verbose",0,0));
  MOVE(p_13,ATmakeAFun("Version",0,0));
  MOVE(m_13,ATmakeAFun("DeclVersion",1,0));
  MOVE(x_12,ATmakeAFun("Statistics",0,0));
  MOVE(x_3,ATmakeAFun("Undefined",1,0));
  MOVE(o_3,ATmakeAFun("Help",0,0));
  MOVE(e_3,ATmakeAFun("stdin",0,0));
  MOVE(r_2,ATmakeAFun("Input",1,0));
  MOVE(g_2,ATmakeAFun("Binary",0,0));
  MOVE(y_1,ATmakeAFun("stdout",0,0));
  MOVE(u_1,ATmakeAFun("Output",1,0));
  MOVE(j_1,ATmakeAFun("Program",1,0));
  MOVE(b_1,ATmakeAFun("Runtime",1,0));
  MOVE(t_0,ATmakeAFun("Silent",0,0));
  MOVE(k_0,ATmakeAFun("Nil",0,0));
  MOVE(j_0,ATmakeAFun("Cons",2,0));
  MOVE(i_0,ATmakeAFun("stderr",0,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(c_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_a_4)
  _ST_minus();
ENDPROC

PROC(_stratego_b_4)
  _ST_gt();
ENDPROC

PROC(_stratego_c_4)
  _ST_mod();
ENDPROC

PROC(_stratego_d_4)
  Epushd(0,5);
  MoveTop(0,1);
  goto w_2;
  w_2 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto x_2;
  x_2 :
  TestFunFC(c_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto y_2;
  y_2 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  Rpush(b_0);
  goto t_2;
  b_0 :
  goto a_0;
  t_2 :
  Epushd(1,1);
  NotNULLd(0,4);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,4),(ATerm)ATmakeAppl2(c_0,Egetd(0,2),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_c_4);
  MoveTop(1,1);
  goto v_2;
  v_2 :
  TestInt(1,1,0,&&fail);
  Rpush(f_0);
  goto u_2;
  f_0 :
  goto e_0;
  u_2 :
  Return();
  e_0 :
  Epopd(1,1);
  Return();
  a_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_e_4)
  _ST_add();
ENDPROC

PROC(_stratego_f_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_5;
  b_5 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(h_0);
  goto a_5;
  h_0 :
  goto g_0;
  a_5 :
  Return();
  g_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_4)
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(i_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(k_0)),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_p_4);
  Tset(MakeInt(1));
  Ccall(_stratego_o_4);
ENDPROC

PROC(_stratego_h_4)
  Epushd(0,2);
  Tdupl();
  Cpush(m_0);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Cpush(n_0);
  Tdupl();
  Rpush(o_0);
  z_5 :
  Cpush(q_0);
  Epushd(1,3);
  MoveTop(1,1);
  goto e_5;
  e_5 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_5;
  f_5 :
  TestFunFC(t_0,&&fail,Egetd(1,2));
  Rpush(s_0);
  goto d_5;
  s_0 :
  goto r_0;
  d_5 :
  Return();
  r_0 :
  Epopd(1,3);
  goto p_0;
  q_0 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_0);
  goto z_5;
  v_0 :
  AllBuild();
  goto u_0;
  p_0 :
  Cpop();
  u_0 :
  Return();
  o_0 :
  Cpop();
  Crestore();
  Cjump();
  n_0 :
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_f_4);
  AllBuild();
  AllBuild();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Rpush(w_0);
  a_6 :
  Cpush(y_0);
  Epushd(1,4);
  MoveTop(1,1);
  goto h_5;
  h_5 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto i_5;
  i_5 :
  TestFunFC(b_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(a_1);
  goto g_5;
  a_1 :
  goto z_0;
  g_5 :
  Move(0,2,1,3);
  Return();
  z_0 :
  Epopd(1,4);
  goto x_0;
  y_0 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_1);
  goto a_6;
  d_1 :
  AllBuild();
  goto c_1;
  x_0 :
  Cpop();
  c_1 :
  Return();
  w_0 :
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_f_4);
  AllBuild();
  AllBuild();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Rpush(e_1);
  b_6 :
  Cpush(g_1);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_5;
  k_5 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_5;
  l_5 :
  TestFunFC(j_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_1);
  goto j_5;
  i_1 :
  goto h_1;
  j_5 :
  Move(0,1,1,3);
  Return();
  h_1 :
  Epopd(1,4);
  goto f_1;
  g_1 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_1);
  goto b_6;
  l_1 :
  AllBuild();
  goto k_1;
  f_1 :
  Cpop();
  k_1 :
  Return();
  e_1 :
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_f_4);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(i_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(j_0,Egetd(0,1),(ATerm)ATmakeAppl2(j_0,ATmakeString(" ("),(ATerm)ATmakeAppl2(j_0,Egetd(0,2),(ATerm)ATmakeAppl2(j_0,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(k_0))))),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_p_4);
  goto l_0;
  m_0 :
  goto m_1;
  l_0 :
  Cpop();
  m_1 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_o_4);
  Epopd(0,2);
ENDPROC

PROC(_stratego_i_4)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_j_4)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_k_4)
  Epushd(0,1);
  Tdupl();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Cpush(o_1);
  Rpush(p_1);
  b_7 :
  Cpush(r_1);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_6;
  d_6 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_6;
  e_6 :
  TestFunFC(u_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_1);
  goto c_6;
  t_1 :
  goto s_1;
  c_6 :
  Move(0,1,1,3);
  Return();
  s_1 :
  Epopd(1,4);
  goto q_1;
  r_1 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_1);
  goto b_7;
  w_1 :
  AllBuild();
  goto v_1;
  q_1 :
  Cpop();
  v_1 :
  Return();
  p_1 :
  goto n_1;
  o_1 :
  Tset((ATerm)ATmakeAppl0(y_1));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(y_1));
  MoveTop(0,1);
  Tpop();
  goto x_1;
  n_1 :
  Cpop();
  x_1 :
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_f_4);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl2(c_0,Egetd(1,1),(ATerm)ATmakeAppl0(d_0))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_f_4);
  AllBuild();
  AllBuild();
  Cpush(a_2);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Rpush(b_2);
  c_7 :
  Cpush(d_2);
  Epushd(1,3);
  MoveTop(1,1);
  goto k_6;
  k_6 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_6;
  l_6 :
  TestFunFC(g_2,&&fail,Egetd(1,2));
  Rpush(f_2);
  goto j_6;
  f_2 :
  goto e_2;
  j_6 :
  Return();
  e_2 :
  Epopd(1,3);
  goto c_2;
  d_2 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_2);
  goto c_7;
  i_2 :
  AllBuild();
  goto h_2;
  c_2 :
  Cpop();
  h_2 :
  Return();
  b_2 :
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_j_4);
  OneNextSon();
  Ccall(_stratego_f_4);
  AllBuild();
  AllBuild();
  goto z_1;
  a_2 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_4);
  OneNextSon();
  Ccall(_stratego_f_4);
  AllBuild();
  AllBuild();
  goto j_2;
  z_1 :
  Cpop();
  j_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_4)
  _ST_dtime();
ENDPROC

PROC(_stratego_m_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_n_4)
  Epushd(0,3);
  Tdupl();
  Cpush(l_2);
  Rpush(m_2);
  w_7 :
  Cpush(o_2);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_7;
  e_7 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_7;
  f_7 :
  TestFunFC(r_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(q_2);
  goto d_7;
  q_2 :
  goto p_2;
  d_7 :
  Move(0,1,1,3);
  Return();
  p_2 :
  Epopd(1,4);
  goto n_2;
  o_2 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_3);
  goto w_7;
  a_3 :
  AllBuild();
  goto s_2;
  n_2 :
  Cpop();
  s_2 :
  Return();
  m_2 :
  goto k_2;
  l_2 :
  Tset((ATerm)ATmakeAppl0(e_3));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(e_3));
  MoveTop(0,1);
  Tpop();
  goto b_3;
  k_2 :
  Cpop();
  b_3 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_m_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,2),(ATerm)ATmakeAppl2(c_0,Egetd(0,3),(ATerm)ATmakeAppl0(d_0))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_o_4)
  _ST_exit();
ENDPROC

PROC(_stratego_p_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_q_4)
  Epushd(0,1);
  Tdupl();
  Rpush(f_3);
  f_8 :
  Cpush(h_3);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_7;
  y_7 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_7;
  z_7 :
  TestFunFC(j_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(j_3);
  goto x_7;
  j_3 :
  goto i_3;
  x_7 :
  Move(0,1,1,3);
  Return();
  i_3 :
  Epopd(1,4);
  goto g_3;
  h_3 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_3);
  goto f_8;
  l_3 :
  AllBuild();
  goto k_3;
  g_3 :
  Cpop();
  k_3 :
  Return();
  f_3 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(i_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("usage : "),(ATerm)ATmakeAppl2(j_0,Egetd(0,1),(ATerm)ATmakeAppl2(j_0,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(k_0)))),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_p_4);
  Tset(MakeInt(1));
  Ccall(_stratego_o_4);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto h_8;
  h_8 :
  TestFunFC(o_3,&&fail,Egetd(0,1));
  Rpush(n_3);
  goto g_8;
  n_3 :
  goto m_3;
  g_8 :
  Return();
  m_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_4)
  Tdupl();
  p_3 :
  TestFunTop(j_0);
  Cpush(q_3);
  Arg(0);
  Cpush(t_3);
  Ccall(_stratego_r_4);
  goto s_3;
  t_3 :
  Epushd(0,2);
  MoveTop(0,1);
  goto k_8;
  k_8 :
  TestFunFC(x_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(w_3);
  goto j_8;
  w_3 :
  goto v_3;
  j_8 :
  Return();
  v_3 :
  Epopd(0,2);
  goto u_3;
  s_3 :
  Cpop();
  u_3 :
  Tpop();
  Cpop();
  goto r_3;
  q_3 :
  Arg(1);
  Tdrop();
  goto p_3;
  r_3 :
  Tpop();
  Ccall(_stratego_q_4);
ENDPROC

PROC(_stratego_t_4)
  Epushd(0,5);
  MoveTop(0,3);
  goto b_11;
  b_11 :
  TestFunFC(j_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_11;
  c_11 :
  TestFunFC(j_0,&&i_7,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_7);
  Rpush(r_7);
  goto o_8;
  r_7 :
  goto j_7;
  p_7 :
  Ccontinue(s_7);
  Rpush(t_7);
  goto p_8;
  t_7 :
  goto j_7;
  s_7 :
  Ccontinue(v_7);
  Rpush(f_9);
  goto q_8;
  f_9 :
  goto j_7;
  v_7 :
  Ccontinue(i_9);
  Rpush(l_9);
  goto r_8;
  l_9 :
  goto j_7;
  i_9 :
  Ccontinue(o_9);
  Rpush(r_9);
  goto s_8;
  r_9 :
  goto j_7;
  o_9 :
  Ccontinue(u_9);
  Rpush(v_9);
  goto t_8;
  v_9 :
  goto j_7;
  u_9 :
  Ccontinue(y_9);
  Rpush(z_9);
  goto u_8;
  z_9 :
  goto j_7;
  y_9 :
  Ccontinue(c_10);
  Rpush(d_10);
  goto v_8;
  d_10 :
  goto j_7;
  c_10 :
  Ccontinue(g_10);
  Rpush(h_10);
  goto w_8;
  h_10 :
  goto j_7;
  g_10 :
  Ccontinue(k_10);
  Rpush(l_10);
  goto x_8;
  l_10 :
  goto j_7;
  k_10 :
  Ccontinue(o_10);
  Rpush(r_10);
  goto y_8;
  r_10 :
  goto j_7;
  o_10 :
  Ccontinue(u_10);
  Rpush(x_10);
  goto z_8;
  x_10 :
  goto j_7;
  u_10 :
  Ccontinue(a_11);
  Rpush(i_11);
  goto a_9;
  i_11 :
  goto j_7;
  a_11 :
  Ccontinue(j_11);
  Rpush(l_11);
  goto b_9;
  l_11 :
  goto j_7;
  j_11 :
  Rpush(n_11);
  goto c_9;
  n_11 :
  goto m_11;
  j_7 :
  Cpop();
  m_11 :
  goto h_7;
  i_7 :
  Cpush(q_11);
  Rpush(r_11);
  goto o_8;
  r_11 :
  goto o_11;
  q_11 :
  Ccontinue(s_11);
  Rpush(t_11);
  goto p_8;
  t_11 :
  goto o_11;
  s_11 :
  Ccontinue(v_11);
  Rpush(w_11);
  goto q_8;
  w_11 :
  goto o_11;
  v_11 :
  Ccontinue(x_11);
  Rpush(y_11);
  goto r_8;
  y_11 :
  goto o_11;
  x_11 :
  Ccontinue(a_12);
  Rpush(b_12);
  goto s_8;
  b_12 :
  goto o_11;
  a_12 :
  Ccontinue(c_12);
  Rpush(d_12);
  goto y_8;
  d_12 :
  goto o_11;
  c_12 :
  Ccontinue(f_12);
  Rpush(g_12);
  goto z_8;
  g_12 :
  goto o_11;
  f_12 :
  Ccontinue(h_12);
  Rpush(i_12);
  goto a_9;
  i_12 :
  goto o_11;
  h_12 :
  Ccontinue(j_12);
  Rpush(l_12);
  goto b_9;
  l_12 :
  goto o_11;
  j_12 :
  Rpush(n_12);
  goto c_9;
  n_12 :
  goto m_12;
  o_11 :
  Cpop();
  m_12 :
  goto h_7;
  h_7 :
  goto g_7;
  c_9 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_10;
  z_10 :
  TestStr(1,1,"-?",&&fail);
  Rpush(p_12);
  goto y_10;
  p_12 :
  goto o_12;
  y_10 :
  Return();
  o_12 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(o_3));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(o_3),Egetd(0,5)));
  Return();
  g_7 :
  goto x_6;
  b_9 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_10;
  w_10 :
  TestStr(1,1,"-h",&&fail);
  Rpush(r_12);
  goto v_10;
  r_12 :
  goto q_12;
  v_10 :
  Return();
  q_12 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(o_3));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(o_3),Egetd(0,5)));
  Return();
  x_6 :
  goto w_6;
  a_9 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_10;
  t_10 :
  TestStr(1,1,"--help",&&fail);
  Rpush(u_12);
  goto s_10;
  u_12 :
  goto t_12;
  s_10 :
  Return();
  t_12 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(o_3));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(o_3),Egetd(0,5)));
  Return();
  w_6 :
  goto v_6;
  z_8 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_10;
  q_10 :
  TestStr(1,1,"-s",&&fail);
  Rpush(w_12);
  goto p_10;
  w_12 :
  goto v_12;
  p_10 :
  Return();
  v_12 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_12));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(x_12),Egetd(0,5)));
  Return();
  v_6 :
  goto u_6;
  y_8 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_10;
  n_10 :
  TestStr(1,1,"-b",&&fail);
  Rpush(z_12);
  goto m_10;
  z_12 :
  goto y_12;
  m_10 :
  Return();
  y_12 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(g_2));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(g_2),Egetd(0,5)));
  Return();
  u_6 :
  goto t_6;
  x_8 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_10;
  j_10 :
  TestStr(1,1,"--output",&&fail);
  Rpush(c_13);
  goto i_10;
  c_13 :
  goto b_13;
  i_10 :
  Return();
  b_13 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(u_1,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(u_1,Egetd(0,1)),Egetd(0,2)));
  Return();
  t_6 :
  goto r_6;
  w_8 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_10;
  f_10 :
  TestStr(1,1,"-o",&&fail);
  Rpush(e_13);
  goto e_10;
  e_13 :
  goto d_13;
  e_10 :
  Return();
  d_13 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(u_1,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(u_1,Egetd(0,1)),Egetd(0,2)));
  Return();
  r_6 :
  goto i_6;
  v_8 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_10;
  b_10 :
  TestStr(1,1,"--input",&&fail);
  Rpush(g_13);
  goto a_10;
  g_13 :
  goto f_13;
  a_10 :
  Return();
  f_13 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(r_2,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(r_2,Egetd(0,1)),Egetd(0,2)));
  Return();
  i_6 :
  goto h_6;
  u_8 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_9;
  x_9 :
  TestStr(1,1,"-i",&&fail);
  Rpush(j_13);
  goto w_9;
  j_13 :
  goto h_13;
  w_9 :
  Return();
  h_13 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(r_2,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(r_2,Egetd(0,1)),Egetd(0,2)));
  Return();
  h_6 :
  goto g_6;
  t_8 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_9;
  t_9 :
  TestStr(1,1,"@version",&&fail);
  Rpush(l_13);
  goto s_9;
  l_13 :
  goto k_13;
  s_9 :
  Return();
  k_13 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(m_13,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(m_13,Egetd(0,1)),Egetd(0,2)));
  Return();
  g_6 :
  goto f_6;
  s_8 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_9;
  q_9 :
  TestStr(1,1,"--version",&&fail);
  Rpush(o_13);
  goto p_9;
  o_13 :
  goto n_13;
  p_9 :
  Return();
  n_13 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(p_13));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(p_13),Egetd(0,5)));
  Return();
  f_6 :
  goto y_4;
  r_8 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_9;
  n_9 :
  TestStr(1,1,"-v",&&fail);
  Rpush(s_13);
  goto m_9;
  s_13 :
  goto r_13;
  m_9 :
  Return();
  r_13 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(p_13));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(p_13),Egetd(0,5)));
  Return();
  y_4 :
  goto x_4;
  q_8 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_9;
  k_9 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(u_13);
  goto j_9;
  u_13 :
  goto t_13;
  j_9 :
  Return();
  t_13 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(v_13));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(v_13),Egetd(0,5)));
  Return();
  x_4 :
  goto z_3;
  p_8 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_9;
  h_9 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(x_13);
  goto g_9;
  x_13 :
  goto w_13;
  g_9 :
  Return();
  w_13 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_0));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(t_0),Egetd(0,5)));
  Return();
  z_3 :
  goto y_3;
  o_8 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_9;
  e_9 :
  TestStr(1,1,"-S",&&fail);
  Rpush(a_14);
  goto d_9;
  a_14 :
  goto y_13;
  d_9 :
  Return();
  y_13 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_0));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(t_0),Egetd(0,5)));
  Return();
  y_3 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_u_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_15;
  a_15 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  Rpush(c_14);
  goto z_14;
  c_14 :
  goto b_14;
  z_14 :
  Return();
  b_14 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(j_1,Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(d_14);
  n_17 :
  Cpush(f_14);
  Cpush(i_14);
  Ccall(_stratego_u_4);
  goto g_14;
  i_14 :
  Ccall(_stratego_t_4);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_14);
  goto n_17;
  k_14 :
  AllBuild();
  goto j_14;
  g_14 :
  Cpop();
  j_14 :
  goto e_14;
  f_14 :
  Epushd(0,3);
  MoveTop(0,1);
  goto e_15;
  e_15 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(o_14);
  goto d_15;
  o_14 :
  goto n_14;
  d_15 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(x_3,Egetd(0,2)),Egetd(0,3)));
  Return();
  n_14 :
  Epopd(0,3);
  goto l_14;
  e_14 :
  Cpop();
  l_14 :
  Return();
  d_14 :
  AllBuild();
  Cpush(q_14);
  Ccall(_stratego_s_4);
  goto p_14;
  q_14 :
  Ccontinue(s_14);
  Epushd(0,6);
  Ccall(_stratego_n_4);
  Tdupl();
  Ccall(_stratego_l_4);
  Tpop();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Rpush(t_14);
  o_17 :
  Cpush(v_14);
  TestFunTop(x_14);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_14);
  goto o_17;
  y_14 :
  AllBuild();
  goto u_14;
  v_14 :
  AllInit();
  m_15 :
  AllNextSon(&&n_15);
  Rpush(t_15);
  goto o_17;
  t_15 :
  goto m_15;
  n_15 :
  AllBuild();
  goto c_15;
  u_14 :
  Cpop();
  c_15 :
  Cpush(d_16);
  Epushd(1,7);
  MoveTop(1,3);
  goto o_15;
  o_15 :
  TestFunFC(v_16,&&u_16,Egetd(1,3));
  Rpush(t_16);
  goto f_15;
  u_16 :
  TestFunFC(x_16,&&w_16,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  Rpush(t_16);
  goto g_15;
  w_16 :
  TestFunFC(z_16,&&y_16,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  goto p_15;
  p_15 :
  TestFunFC(x_14,&&fail,Egetd(1,4));
  MoveArg(1,1,1,4,0);
  MoveArg(1,2,1,4,1);
  Rpush(t_16);
  goto h_15;
  y_16 :
  TestFunFC(b_17,&&a_17,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto q_15;
  q_15 :
  TestFunFC(x_14,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  Cpush(l_17);
  Rpush(m_17);
  goto i_15;
  m_17 :
  goto d_17;
  l_17 :
  Rpush(q_17);
  goto j_15;
  q_17 :
  goto p_17;
  d_17 :
  Cpop();
  p_17 :
  goto t_16;
  a_17 :
  TestFunFC(b_17,&&r_17,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto q_15;
  r_17 :
  TestFunFC(t_17,&&s_17,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto r_15;
  r_15 :
  TestFunFC(x_14,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto s_15;
  s_15 :
  TestInt(1,4,0,&&u_17);
  Cpush(w_17);
  Rpush(x_17);
  goto k_15;
  x_17 :
  goto v_17;
  w_17 :
  Rpush(z_17);
  goto l_15;
  z_17 :
  goto y_17;
  v_17 :
  Cpop();
  y_17 :
  goto t_16;
  u_17 :
  Rpush(t_16);
  goto l_15;
  s_17 :
  TestFunFC(t_17,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto r_15;
  t_16 :
  goto s_16;
  l_15 :
  Epushd(2,1);
  Tdupl();
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl2(c_0,MakeInt(0),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_b_4);
  Tpop();
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl2(c_0,MakeInt(1),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_a_4);
  MoveTop(2,1);
  NotNULLd(1,6);
  NotNULLd(2,1);
  NotNULLd(1,7);
  Tset((ATerm)ATmakeAppl2(x_14,Egetd(1,6),(ATerm)ATmakeAppl2(t_17,Egetd(2,1),Egetd(1,7))));
  Epopd(2,1);
  Return();
  s_16 :
  goto r_16;
  k_15 :
  Tset((ATerm)ATmakeAppl0(a_18));
  Return();
  r_16 :
  goto q_16;
  j_15 :
  Tdupl();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl2(c_0,Egetd(1,6),(ATerm)ATmakeAppl0(d_0))));
  Cpush(b_18);
  Tdupl();
  Ccall(_stratego_d_4);
  Cpop();
  Crestore();
  Cjump();
  b_18 :
  Tpop();
  NotNULLd(1,6);
  NotNULLd(1,4);
  NotNULLd(1,7);
  Tset((ATerm)ATmakeAppl2(x_14,Egetd(1,6),(ATerm)ATmakeAppl2(b_17,Egetd(1,4),Egetd(1,7))));
  Return();
  q_16 :
  goto p_16;
  i_15 :
  Tdupl();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl2(c_0,Egetd(1,6),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_d_4);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,7);
  Tset((ATerm)ATmakeAppl2(b_17,Egetd(1,4),Egetd(1,7)));
  Return();
  p_16 :
  goto o_16;
  h_15 :
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(x_14,Egetd(1,1),(ATerm)ATmakeAppl1(z_16,(ATerm)ATmakeAppl2(b_17,Egetd(1,1),Egetd(1,2)))));
  Return();
  o_16 :
  goto m_16;
  g_15 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl2(c_0,MakeInt(1),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_e_4);
  MoveTop(2,1);
  NotNULLd(1,4);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(x_14,Egetd(1,4),(ATerm)ATmakeAppl1(x_16,Egetd(2,1))));
  Epopd(2,1);
  Return();
  m_16 :
  goto e_16;
  f_15 :
  Tset((ATerm)ATmakeAppl1(z_16,(ATerm)ATmakeAppl1(x_16,MakeInt(2))));
  Return();
  e_16 :
  Rpush(c_18);
  goto o_17;
  c_18 :
  Epopd(1,7);
  goto z_15;
  d_16 :
  goto d_18;
  z_15 :
  Cpop();
  d_18 :
  Return();
  t_14 :
  OneNextSon();
  Ccall(_stratego_f_4);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_l_4);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto v_15;
  v_15 :
  TestFunFC(c_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto w_15;
  w_15 :
  TestFunFC(c_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto x_15;
  x_15 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(f_18);
  goto u_15;
  f_18 :
  goto e_18;
  u_15 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(b_1,Egetd(0,1)),Egetd(0,3)),(ATerm)ATmakeAppl2(c_0,Egetd(0,5),(ATerm)ATmakeAppl0(d_0))));
  Return();
  e_18 :
  Ccall(_stratego_k_4);
  Ccall(_stratego_h_4);
  Epopd(0,6);
  goto p_14;
  s_14 :
  Ccall(_stratego_g_4);
  goto g_18;
  p_14 :
  Cpop();
  g_18 :
ENDPROC

DOIT

