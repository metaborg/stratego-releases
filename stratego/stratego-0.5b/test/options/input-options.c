#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,b_9);
VARDECL(AFun,a_9);
VARDECL(AFun,n_8);
VARDECL(AFun,m_8);
VARDECL(AFun,j_8);
VARDECL(AFun,i_8);
VARDECL(AFun,g_8);
VARDECL(AFun,f_8);
VARDECL(AFun,x_7);
VARDECL(AFun,r_7);
VARDECL(AFun,n_7);
VARDECL(AFun,a_7);
VARDECL(AFun,p_6);
VARDECL(AFun,s_5);
VARDECL(AFun,l_5);
VARDECL(AFun,e_5);
VARDECL(AFun,z_4);
VARDECL(AFun,b_1);
PROCDECL(_stratego_m_3);
PROCDECL(_stratego_n_3);
PROCDECL(_stratego_o_3);
PROCDECL(_stratego_p_3);
PROCDECL(_stratego_q_3);
PROCDECL(_stratego_r_3);
PROCDECL(_stratego_s_3);
PROCDECL(_stratego_t_3);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(b_9,ATmakeAFun("stdout",0,0));
  MOVE(a_9,ATmakeAFun("Undefined",1,0));
  MOVE(n_8,ATmakeAFun("Program",1,0));
  MOVE(m_8,ATmakeAFun("stdin",0,0));
  MOVE(j_8,ATmakeAFun("TNil",0,0));
  MOVE(i_8,ATmakeAFun("stderr",0,0));
  MOVE(g_8,ATmakeAFun("TCons",2,0));
  MOVE(f_8,ATmakeAFun("Nil",0,0));
  MOVE(x_7,ATmakeAFun("Verbose",0,0));
  MOVE(r_7,ATmakeAFun("Version",0,0));
  MOVE(n_7,ATmakeAFun("DeclVersion",1,0));
  MOVE(a_7,ATmakeAFun("Binary",0,0));
  MOVE(p_6,ATmakeAFun("Statistics",0,0));
  MOVE(s_5,ATmakeAFun("Silent",0,0));
  MOVE(l_5,ATmakeAFun("Input",1,0));
  MOVE(e_5,ATmakeAFun("Output",1,0));
  MOVE(z_4,ATmakeAFun("Help",0,0));
  MOVE(b_1,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_m_3)
  Epushd(0,5);
  MoveTop(0,3);
  goto q_6;
  q_6 :
  TestFunFC(b_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto r_6;
  r_6 :
  TestFunFC(b_1,&&c_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(e_1);
  Rpush(f_1);
  goto n_0;
  f_1 :
  goto d_1;
  e_1 :
  Ccontinue(g_1);
  Rpush(h_1);
  goto o_0;
  h_1 :
  goto d_1;
  g_1 :
  Ccontinue(i_1);
  Rpush(j_1);
  goto p_0;
  j_1 :
  goto d_1;
  i_1 :
  Ccontinue(k_1);
  Rpush(l_1);
  goto q_0;
  l_1 :
  goto d_1;
  k_1 :
  Ccontinue(m_1);
  Rpush(n_1);
  goto r_0;
  n_1 :
  goto d_1;
  m_1 :
  Ccontinue(o_1);
  Rpush(p_1);
  goto w_0;
  p_1 :
  goto d_1;
  o_1 :
  Ccontinue(q_1);
  Rpush(r_1);
  goto x_0;
  r_1 :
  goto d_1;
  q_1 :
  Ccontinue(s_1);
  Rpush(t_1);
  goto d_3;
  t_1 :
  goto d_1;
  s_1 :
  Ccontinue(u_1);
  Rpush(v_1);
  goto e_3;
  v_1 :
  goto d_1;
  u_1 :
  Ccontinue(w_1);
  Rpush(x_1);
  goto u_3;
  x_1 :
  goto d_1;
  w_1 :
  Ccontinue(y_1);
  Rpush(z_1);
  goto v_3;
  z_1 :
  goto d_1;
  y_1 :
  Ccontinue(a_2);
  Rpush(b_2);
  goto w_3;
  b_2 :
  goto d_1;
  a_2 :
  Ccontinue(c_2);
  Rpush(d_2);
  goto x_3;
  d_2 :
  goto d_1;
  c_2 :
  Ccontinue(e_2);
  Rpush(f_2);
  goto y_3;
  f_2 :
  goto d_1;
  e_2 :
  Ccontinue(g_2);
  Rpush(h_2);
  goto z_3;
  h_2 :
  goto d_1;
  g_2 :
  Ccontinue(i_2);
  Rpush(j_2);
  goto a_4;
  j_2 :
  goto d_1;
  i_2 :
  Ccontinue(k_2);
  Rpush(l_2);
  goto b_4;
  l_2 :
  goto d_1;
  k_2 :
  Ccontinue(m_2);
  Rpush(n_2);
  goto c_4;
  n_2 :
  goto d_1;
  m_2 :
  Rpush(p_2);
  goto d_4;
  p_2 :
  goto o_2;
  d_1 :
  Cpop();
  o_2 :
  goto a_1;
  c_1 :
  Cpush(r_2);
  Rpush(s_2);
  goto n_0;
  s_2 :
  goto q_2;
  r_2 :
  Ccontinue(t_2);
  Rpush(u_2);
  goto o_0;
  u_2 :
  goto q_2;
  t_2 :
  Ccontinue(v_2);
  Rpush(w_2);
  goto p_0;
  w_2 :
  goto q_2;
  v_2 :
  Ccontinue(x_2);
  Rpush(y_2);
  goto q_0;
  y_2 :
  goto q_2;
  x_2 :
  Ccontinue(z_2);
  Rpush(a_3);
  goto r_0;
  a_3 :
  goto q_2;
  z_2 :
  Ccontinue(b_3);
  Rpush(c_3);
  goto v_3;
  c_3 :
  goto q_2;
  b_3 :
  Ccontinue(f_3);
  Rpush(g_3);
  goto w_3;
  g_3 :
  goto q_2;
  f_3 :
  Ccontinue(h_3);
  Rpush(i_3);
  goto x_3;
  i_3 :
  goto q_2;
  h_3 :
  Ccontinue(j_3);
  Rpush(k_3);
  goto y_3;
  k_3 :
  goto q_2;
  j_3 :
  Ccontinue(l_3);
  Rpush(g_4);
  goto z_3;
  g_4 :
  goto q_2;
  l_3 :
  Ccontinue(j_4);
  Rpush(m_4);
  goto a_4;
  m_4 :
  goto q_2;
  j_4 :
  Rpush(s_4);
  goto d_4;
  s_4 :
  goto p_4;
  q_2 :
  Cpop();
  p_4 :
  goto a_1;
  a_1 :
  goto z_0;
  d_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_6;
  o_6 :
  TestStr(1,1,"-h",&&fail);
  Rpush(w_4);
  goto n_6;
  w_4 :
  goto v_4;
  n_6 :
  Return();
  v_4 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(z_4));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl0(z_4),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  c_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_6;
  k_6 :
  TestStr(1,1,"-o",&&fail);
  Rpush(d_5);
  goto j_6;
  d_5 :
  goto a_5;
  j_6 :
  Return();
  a_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(e_5,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl1(e_5,Egetd(0,1)),Egetd(0,2)));
  Return();
  y_0 :
  goto v_0;
  b_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_6;
  g_6 :
  TestStr(1,1,"-i",&&fail);
  Rpush(i_5);
  goto f_6;
  i_5 :
  goto h_5;
  f_6 :
  Return();
  h_5 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(l_5,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl1(l_5,Egetd(0,1)),Egetd(0,2)));
  Return();
  v_0 :
  goto u_0;
  a_4 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_6;
  d_6 :
  TestStr(1,1,"-silent",&&fail);
  Rpush(p_5);
  goto c_6;
  p_5 :
  goto m_5;
  c_6 :
  Return();
  m_5 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(s_5));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl0(s_5),Egetd(0,5)));
  Return();
  u_0 :
  goto t_0;
  z_3 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_6;
  a_6 :
  TestStr(1,1,"-?",&&fail);
  Rpush(y_5);
  goto z_5;
  y_5 :
  goto v_5;
  z_5 :
  Return();
  v_5 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(z_4));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl0(z_4),Egetd(0,5)));
  Return();
  t_0 :
  goto s_0;
  y_3 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_5;
  x_5 :
  TestStr(1,1,"-h",&&fail);
  Rpush(e_6);
  goto w_5;
  e_6 :
  goto b_6;
  w_5 :
  Return();
  b_6 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(z_4));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl0(z_4),Egetd(0,5)));
  Return();
  s_0 :
  goto m_0;
  x_3 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_5;
  u_5 :
  TestStr(1,1,"--help",&&fail);
  Rpush(i_6);
  goto t_5;
  i_6 :
  goto h_6;
  t_5 :
  Return();
  h_6 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(z_4));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl0(z_4),Egetd(0,5)));
  Return();
  m_0 :
  goto l_0;
  w_3 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_5;
  r_5 :
  TestStr(1,1,"-s",&&fail);
  Rpush(m_6);
  goto q_5;
  m_6 :
  goto l_6;
  q_5 :
  Return();
  l_6 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(p_6));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl0(p_6),Egetd(0,5)));
  Return();
  l_0 :
  goto k_0;
  v_3 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_5;
  o_5 :
  TestStr(1,1,"-b",&&fail);
  Rpush(y_6);
  goto n_5;
  y_6 :
  goto x_6;
  n_5 :
  Return();
  x_6 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(a_7));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl0(a_7),Egetd(0,5)));
  Return();
  k_0 :
  goto j_0;
  u_3 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_5;
  k_5 :
  TestStr(1,1,"--output",&&fail);
  Rpush(c_7);
  goto j_5;
  c_7 :
  goto b_7;
  j_5 :
  Return();
  b_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(e_5,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl1(e_5,Egetd(0,1)),Egetd(0,2)));
  Return();
  j_0 :
  goto i_0;
  e_3 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_5;
  g_5 :
  TestStr(1,1,"-o",&&fail);
  Rpush(f_7);
  goto f_5;
  f_7 :
  goto d_7;
  f_5 :
  Return();
  d_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(e_5,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl1(e_5,Egetd(0,1)),Egetd(0,2)));
  Return();
  i_0 :
  goto h_0;
  d_3 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_5;
  c_5 :
  TestStr(1,1,"--input",&&fail);
  Rpush(h_7);
  goto b_5;
  h_7 :
  goto g_7;
  b_5 :
  Return();
  g_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(l_5,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl1(l_5,Egetd(0,1)),Egetd(0,2)));
  Return();
  h_0 :
  goto g_0;
  x_0 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_4;
  y_4 :
  TestStr(1,1,"-i",&&fail);
  Rpush(k_7);
  goto x_4;
  k_7 :
  goto i_7;
  x_4 :
  Return();
  i_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(l_5,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl1(l_5,Egetd(0,1)),Egetd(0,2)));
  Return();
  g_0 :
  goto f_0;
  w_0 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_4;
  u_4 :
  TestStr(1,1,"@version",&&fail);
  Rpush(m_7);
  goto t_4;
  m_7 :
  goto l_7;
  t_4 :
  Return();
  l_7 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(n_7,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl1(n_7,Egetd(0,1)),Egetd(0,2)));
  Return();
  f_0 :
  goto e_0;
  r_0 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_4;
  r_4 :
  TestStr(1,1,"--version",&&fail);
  Rpush(q_7);
  goto q_4;
  q_7 :
  goto p_7;
  q_4 :
  Return();
  p_7 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(r_7));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl0(r_7),Egetd(0,5)));
  Return();
  e_0 :
  goto d_0;
  q_0 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_4;
  o_4 :
  TestStr(1,1,"-v",&&fail);
  Rpush(u_7);
  goto n_4;
  u_7 :
  goto s_7;
  n_4 :
  Return();
  s_7 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(r_7));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl0(r_7),Egetd(0,5)));
  Return();
  d_0 :
  goto c_0;
  p_0 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_4;
  l_4 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(w_7);
  goto k_4;
  w_7 :
  goto v_7;
  k_4 :
  Return();
  v_7 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_7));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl0(x_7),Egetd(0,5)));
  Return();
  c_0 :
  goto b_0;
  o_0 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_4;
  i_4 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(a_8);
  goto h_4;
  a_8 :
  goto y_7;
  h_4 :
  Return();
  y_7 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(s_5));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl0(s_5),Egetd(0,5)));
  Return();
  b_0 :
  goto a_0;
  n_0 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_4;
  f_4 :
  TestStr(1,1,"-S",&&fail);
  Rpush(c_8);
  goto e_4;
  c_8 :
  goto b_8;
  e_4 :
  Return();
  b_8 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(s_5));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl0(s_5),Egetd(0,5)));
  Return();
  a_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_11;
  k_11 :
  TestFunFC(f_8,&&fail,Egetd(0,1));
  Rpush(e_8);
  goto j_11;
  e_8 :
  goto d_8;
  j_11 :
  Return();
  d_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_3)
  _ST_exit();
ENDPROC

PROC(_stratego_p_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_q_3)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(g_8,(ATerm)ATmakeAppl0(i_8),(ATerm)ATmakeAppl2(g_8,Egetd(0,1),(ATerm)ATmakeAppl0(j_8))));
  Ccall(_stratego_p_3);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_r_3)
  Tdupl();
  Ccall(_stratego_q_3);
  Tset(MakeInt(1));
  Ccall(_stratego_o_3);
  Tpop();
ENDPROC

PROC(_stratego_s_3)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_t_3)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_main)
  Cpush(l_8);
  Epushd(0,1);
  Tset((ATerm)ATmakeAppl0(m_8));
  Ccall(_stratego_t_3);
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(n_8,Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(o_8);
  o_12 :
  Cpush(r_8);
  Cpush(t_8);
  Ccall(_stratego_n_3);
  goto s_8;
  t_8 :
  Ccall(_stratego_m_3);
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_8);
  goto o_12;
  v_8 :
  AllBuild();
  goto u_8;
  s_8 :
  Cpop();
  u_8 :
  goto q_8;
  r_8 :
  Epushd(1,3);
  MoveTop(1,1);
  goto x_11;
  x_11 :
  TestFunFC(b_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(z_8);
  goto w_11;
  z_8 :
  goto y_8;
  w_11 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl1(a_9,Egetd(1,2)),Egetd(1,3)));
  Return();
  y_8 :
  Epopd(1,3);
  goto w_8;
  q_8 :
  Cpop();
  w_8 :
  Return();
  o_8 :
  AllBuild();
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(g_8,(ATerm)ATmakeAppl0(b_9),(ATerm)ATmakeAppl2(g_8,Egetd(0,1),(ATerm)ATmakeAppl0(j_8))));
  Ccall(_stratego_s_3);
  Epopd(0,1);
  goto k_8;
  l_8 :
  Tset((ATerm)ATmakeAppl2(b_1,ATmakeString("** rewriting failed"),(ATerm)ATmakeAppl0(f_8)));
  Ccall(_stratego_r_3);
  goto c_9;
  k_8 :
  Cpop();
  c_9 :
ENDPROC

DOIT

