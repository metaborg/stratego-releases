#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,d_13);
VARDECL(AFun,k_5);
VARDECL(AFun,z_2);
VARDECL(AFun,k_2);
VARDECL(AFun,z_1);
VARDECL(AFun,o_1);
VARDECL(AFun,d_1);
VARDECL(AFun,v_0);
VARDECL(AFun,n_0);
VARDECL(AFun,m_0);
VARDECL(AFun,f_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_a_3);
PROCDECL(_stratego_b_3);
PROCDECL(_stratego_c_3);
PROCDECL(_stratego_d_3);
PROCDECL(_stratego_e_3);
PROCDECL(_stratego_f_3);
PROCDECL(_stratego_g_3);
PROCDECL(_stratego_h_3);
PROCDECL(_stratego_i_3);
PROCDECL(_stratego_j_3);
PROCDECL(_stratego_k_3);
PROCDECL(_stratego_l_3);
PROCDECL(_stratego_m_3);
PROCDECL(_stratego_n_3);
PROCDECL(_stratego_o_3);
PROCDECL(_stratego_p_3);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(d_13,ATmakeAFun("Nil",0,0));
  MOVE(k_5,ATmakeAFun("Undefined",1,0));
  MOVE(z_2,ATmakeAFun("Help",0,0));
  MOVE(k_2,ATmakeAFun("Input",1,0));
  MOVE(z_1,ATmakeAFun("Binary",0,0));
  MOVE(o_1,ATmakeAFun("Output",1,0));
  MOVE(d_1,ATmakeAFun("Program",1,0));
  MOVE(v_0,ATmakeAFun("Runtime",1,0));
  MOVE(n_0,ATmakeAFun("Silent",0,0));
  MOVE(m_0,ATmakeAFun("Cons",2,0));
  MOVE(f_0,ATmakeAFun("TCons",2,0));
  MOVE(c_0,ATmakeAFun("TNil",0,0));
ENDPROC

PROC(_stratego_a_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_2;
  s_2 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  Rpush(b_0);
  goto r_2;
  b_0 :
  goto a_0;
  r_2 :
  Return();
  a_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_3)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_k_3);
  Tset(MakeInt(1));
  Ccall(_stratego_j_3);
ENDPROC

PROC(_stratego_c_3)
  Epushd(0,2);
  Tdupl();
  Cpush(e_0);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(g_0);
  Tdupl();
  Rpush(h_0);
  n_4 :
  Cpush(j_0);
  Epushd(1,3);
  MoveTop(1,1);
  goto s_3;
  s_3 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto t_3;
  t_3 :
  TestFunFC(n_0,&&fail,Egetd(1,2));
  Rpush(l_0);
  goto r_3;
  l_0 :
  goto k_0;
  r_3 :
  Return();
  k_0 :
  Epopd(1,3);
  goto i_0;
  j_0 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_0);
  goto n_4;
  p_0 :
  AllBuild();
  goto o_0;
  i_0 :
  Cpop();
  o_0 :
  Return();
  h_0 :
  Cpop();
  Crestore();
  Cjump();
  g_0 :
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Rpush(q_0);
  o_4 :
  Cpush(s_0);
  Epushd(1,4);
  MoveTop(1,1);
  goto v_3;
  v_3 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto w_3;
  w_3 :
  TestFunFC(v_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(u_0);
  goto u_3;
  u_0 :
  goto t_0;
  u_3 :
  Move(0,2,1,3);
  Return();
  t_0 :
  Epopd(1,4);
  goto r_0;
  s_0 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_0);
  goto o_4;
  x_0 :
  AllBuild();
  goto w_0;
  r_0 :
  Cpop();
  w_0 :
  Return();
  q_0 :
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Rpush(y_0);
  p_4 :
  Cpush(a_1);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_3;
  y_3 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_3;
  z_3 :
  TestFunFC(d_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_1);
  goto x_3;
  c_1 :
  goto b_1;
  x_3 :
  Move(0,1,1,3);
  Return();
  b_1 :
  Epopd(1,4);
  goto z_0;
  a_1 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_1);
  goto p_4;
  f_1 :
  AllBuild();
  goto e_1;
  z_0 :
  Cpop();
  e_1 :
  Return();
  y_0 :
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_k_3);
  goto d_0;
  e_0 :
  goto g_1;
  d_0 :
  Cpop();
  g_1 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_j_3);
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
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(i_1);
  Rpush(j_1);
  p_5 :
  Cpush(l_1);
  Epushd(1,4);
  MoveTop(1,1);
  goto r_4;
  r_4 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto s_4;
  s_4 :
  TestFunFC(o_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(n_1);
  goto q_4;
  n_1 :
  goto m_1;
  q_4 :
  Move(0,1,1,3);
  Return();
  m_1 :
  Epopd(1,4);
  goto k_1;
  l_1 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_1);
  goto p_5;
  q_1 :
  AllBuild();
  goto p_1;
  k_1 :
  Cpop();
  p_1 :
  Return();
  j_1 :
  goto h_1;
  i_1 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto r_1;
  h_1 :
  Cpop();
  r_1 :
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  Cpush(t_1);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Rpush(u_1);
  q_5 :
  Cpush(w_1);
  Epushd(1,3);
  MoveTop(1,1);
  goto y_4;
  y_4 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_4;
  z_4 :
  TestFunFC(z_1,&&fail,Egetd(1,2));
  Rpush(y_1);
  goto x_4;
  y_1 :
  goto x_1;
  x_4 :
  Return();
  x_1 :
  Epopd(1,3);
  goto v_1;
  w_1 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_2);
  goto q_5;
  b_2 :
  AllBuild();
  goto a_2;
  v_1 :
  Cpop();
  a_2 :
  Return();
  u_1 :
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_3);
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  goto s_1;
  t_1 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_3);
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  goto c_2;
  s_1 :
  Cpop();
  c_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_3)
  _ST_dtime();
ENDPROC

PROC(_stratego_h_3)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_i_3)
  Epushd(0,3);
  Tdupl();
  Cpush(e_2);
  Rpush(f_2);
  k_6 :
  Cpush(h_2);
  Epushd(1,4);
  MoveTop(1,1);
  goto s_5;
  s_5 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto t_5;
  t_5 :
  TestFunFC(k_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(j_2);
  goto r_5;
  j_2 :
  goto i_2;
  r_5 :
  Move(0,1,1,3);
  Return();
  i_2 :
  Epopd(1,4);
  goto g_2;
  h_2 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_2);
  goto k_6;
  m_2 :
  AllBuild();
  goto l_2;
  g_2 :
  Cpop();
  l_2 :
  Return();
  f_2 :
  goto d_2;
  e_2 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto n_2;
  d_2 :
  Cpop();
  n_2 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_h_3);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_j_3)
  _ST_exit();
ENDPROC

PROC(_stratego_k_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_l_3)
  Epushd(0,1);
  Tdupl();
  Rpush(o_2);
  t_6 :
  Cpush(q_2);
  Epushd(1,4);
  MoveTop(1,1);
  goto m_6;
  m_6 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto n_6;
  n_6 :
  TestFunFC(d_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(u_2);
  goto l_6;
  u_2 :
  goto t_2;
  l_6 :
  Move(0,1,1,3);
  Return();
  t_2 :
  Epopd(1,4);
  goto p_2;
  q_2 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_2);
  goto t_6;
  w_2 :
  AllBuild();
  goto v_2;
  p_2 :
  Cpop();
  v_2 :
  Return();
  o_2 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_k_3);
  Tset(MakeInt(1));
  Ccall(_stratego_j_3);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto v_6;
  v_6 :
  TestFunFC(z_2,&&fail,Egetd(0,1));
  Rpush(y_2);
  goto u_6;
  y_2 :
  goto x_2;
  u_6 :
  Return();
  x_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_3)
  Tdupl();
  t_4 :
  TestFunTop(m_0);
  Cpush(u_4);
  Arg(0);
  Cpush(f_5);
  Ccall(_stratego_m_3);
  goto w_4;
  f_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto y_6;
  y_6 :
  TestFunFC(k_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(j_5);
  goto x_6;
  j_5 :
  goto i_5;
  x_6 :
  Return();
  i_5 :
  Epopd(0,2);
  goto h_5;
  w_4 :
  Cpop();
  h_5 :
  Tpop();
  Cpop();
  goto v_4;
  u_4 :
  Arg(1);
  Tdrop();
  goto t_4;
  v_4 :
  Tpop();
  Ccall(_stratego_l_3);
ENDPROC

PROC(_stratego_o_3)
  Epushd(0,5);
  MoveTop(0,3);
  goto p_9;
  p_9 :
  TestFunFC(m_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto q_9;
  q_9 :
  TestFunFC(m_0,&&j_8,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(n_8);
  Rpush(q_8);
  goto c_7;
  q_8 :
  goto m_8;
  n_8 :
  Ccontinue(r_8);
  Rpush(u_8);
  goto d_7;
  u_8 :
  goto m_8;
  r_8 :
  Ccontinue(v_8);
  Rpush(y_8);
  goto e_7;
  y_8 :
  goto m_8;
  v_8 :
  Ccontinue(z_8);
  Rpush(c_9);
  goto f_7;
  c_9 :
  goto m_8;
  z_8 :
  Ccontinue(f_9);
  Rpush(i_9);
  goto g_7;
  i_9 :
  goto m_8;
  f_9 :
  Ccontinue(l_9);
  Rpush(o_9);
  goto h_7;
  o_9 :
  goto m_8;
  l_9 :
  Ccontinue(w_9);
  Rpush(x_9);
  goto i_7;
  x_9 :
  goto m_8;
  w_9 :
  Ccontinue(z_9);
  Rpush(a_10);
  goto j_7;
  a_10 :
  goto m_8;
  z_9 :
  Ccontinue(b_10);
  Rpush(c_10);
  goto k_7;
  c_10 :
  goto m_8;
  b_10 :
  Ccontinue(e_10);
  Rpush(f_10);
  goto l_7;
  f_10 :
  goto m_8;
  e_10 :
  Ccontinue(g_10);
  Rpush(h_10);
  goto m_7;
  h_10 :
  goto m_8;
  g_10 :
  Ccontinue(j_10);
  Rpush(k_10);
  goto n_7;
  k_10 :
  goto m_8;
  j_10 :
  Ccontinue(l_10);
  Rpush(m_10);
  goto o_7;
  m_10 :
  goto m_8;
  l_10 :
  Ccontinue(o_10);
  Rpush(p_10);
  goto p_7;
  p_10 :
  goto m_8;
  o_10 :
  Rpush(r_10);
  goto q_7;
  r_10 :
  goto q_10;
  m_8 :
  Cpop();
  q_10 :
  goto i_8;
  j_8 :
  Cpush(u_10);
  Rpush(v_10);
  goto c_7;
  v_10 :
  goto t_10;
  u_10 :
  Ccontinue(w_10);
  Rpush(x_10);
  goto d_7;
  x_10 :
  goto t_10;
  w_10 :
  Ccontinue(z_10);
  Rpush(a_11);
  goto e_7;
  a_11 :
  goto t_10;
  z_10 :
  Ccontinue(b_11);
  Rpush(c_11);
  goto f_7;
  c_11 :
  goto t_10;
  b_11 :
  Ccontinue(d_11);
  Rpush(e_11);
  goto g_7;
  e_11 :
  goto t_10;
  d_11 :
  Ccontinue(f_11);
  Rpush(h_11);
  goto m_7;
  h_11 :
  goto t_10;
  f_11 :
  Ccontinue(i_11);
  Rpush(j_11);
  goto n_7;
  j_11 :
  goto t_10;
  i_11 :
  Ccontinue(k_11);
  Rpush(l_11);
  goto o_7;
  l_11 :
  goto t_10;
  k_11 :
  Ccontinue(m_11);
  Rpush(n_11);
  goto p_7;
  n_11 :
  goto t_10;
  m_11 :
  Rpush(q_11);
  goto q_7;
  q_11 :
  goto p_11;
  t_10 :
  Cpop();
  p_11 :
  goto i_8;
  i_8 :
  goto f_8;
  q_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_9;
  n_9 :
  TestStr(1,1,"-?",&&fail);
  Rpush(s_11);
  goto m_9;
  s_11 :
  goto r_11;
  m_9 :
  Return();
  r_11 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  f_8 :
  goto c_8;
  p_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_9;
  k_9 :
  TestStr(1,1,"-h",&&fail);
  Rpush(u_11);
  goto j_9;
  u_11 :
  goto t_11;
  j_9 :
  Return();
  t_11 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  c_8 :
  goto z_7;
  o_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_9;
  h_9 :
  TestStr(1,1,"--help",&&fail);
  Rpush(x_11);
  goto g_9;
  x_11 :
  goto v_11;
  g_9 :
  Return();
  v_11 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  z_7 :
  goto w_7;
  n_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_9;
  e_9 :
  TestStr(1,1,"-s",&&fail);
  Rpush(z_11);
  goto d_9;
  z_11 :
  goto y_11;
  d_9 :
  Return();
  y_11 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  w_7 :
  goto t_7;
  m_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_9;
  b_9 :
  TestStr(1,1,"-b",&&fail);
  Rpush(b_12);
  goto a_9;
  b_12 :
  goto a_12;
  a_9 :
  Return();
  a_12 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  t_7 :
  goto j_6;
  l_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_8;
  x_8 :
  TestStr(1,1,"--output",&&fail);
  Rpush(d_12);
  goto w_8;
  d_12 :
  goto c_12;
  w_8 :
  Return();
  c_12 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  j_6 :
  goto h_6;
  k_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_8;
  t_8 :
  TestStr(1,1,"-o",&&fail);
  Rpush(g_12);
  goto s_8;
  g_12 :
  goto f_12;
  s_8 :
  Return();
  f_12 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  h_6 :
  goto g_6;
  j_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_8;
  p_8 :
  TestStr(1,1,"--input",&&fail);
  Rpush(i_12);
  goto o_8;
  i_12 :
  goto h_12;
  o_8 :
  Return();
  h_12 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  g_6 :
  goto f_6;
  i_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_8;
  l_8 :
  TestStr(1,1,"-i",&&fail);
  Rpush(k_12);
  goto k_8;
  k_12 :
  goto j_12;
  k_8 :
  Return();
  j_12 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  f_6 :
  goto d_6;
  h_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_8;
  h_8 :
  TestStr(1,1,"@version",&&fail);
  Rpush(n_12);
  goto g_8;
  n_12 :
  goto m_12;
  g_8 :
  Return();
  m_12 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  d_6 :
  goto x_5;
  g_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_8;
  e_8 :
  TestStr(1,1,"--version",&&fail);
  Rpush(p_12);
  goto d_8;
  p_12 :
  goto o_12;
  d_8 :
  Return();
  o_12 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  x_5 :
  goto w_5;
  f_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_8;
  b_8 :
  TestStr(1,1,"-v",&&fail);
  Rpush(s_12);
  goto a_8;
  s_12 :
  goto r_12;
  a_8 :
  Return();
  r_12 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  w_5 :
  goto v_5;
  e_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_7;
  y_7 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(u_12);
  goto x_7;
  u_12 :
  goto t_12;
  x_7 :
  Return();
  t_12 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  v_5 :
  goto u_5;
  d_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_7;
  v_7 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(x_12);
  goto u_7;
  x_12 :
  goto w_12;
  u_7 :
  Return();
  w_12 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  u_5 :
  goto l_5;
  c_7 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_7;
  s_7 :
  TestStr(1,1,"-S",&&fail);
  Rpush(z_12);
  goto r_7;
  z_12 :
  goto y_12;
  r_7 :
  Return();
  y_12 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  l_5 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_13;
  j_13 :
  TestFunFC(d_13,&&fail,Egetd(0,1));
  Rpush(c_13);
  goto i_13;
  c_13 :
  goto b_13;
  i_13 :
  Return();
  b_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(e_13);
  j_14 :
  Cpush(h_13);
  Cpush(o_13);
  Ccall(_stratego_p_3);
  goto l_13;
  o_13 :
  Ccall(_stratego_o_3);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_13);
  goto j_14;
  y_13 :
  AllBuild();
  goto u_13;
  l_13 :
  Cpop();
  u_13 :
  goto g_13;
  h_13 :
  Epushd(0,3);
  MoveTop(0,1);
  goto n_13;
  n_13 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(i_14);
  goto m_13;
  i_14 :
  goto h_14;
  m_13 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  h_14 :
  Epopd(0,3);
  goto z_13;
  g_13 :
  Cpop();
  z_13 :
  Return();
  e_13 :
  AllBuild();
  Cpush(l_14);
  Ccall(_stratego_n_3);
  goto k_14;
  l_14 :
  Ccontinue(m_14);
  Epushd(0,6);
  Ccall(_stratego_i_3);
  Tdupl();
  Ccall(_stratego_g_3);
  Tpop();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_g_3);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto q_13;
  q_13 :
  TestFunFC(f_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto r_13;
  r_13 :
  TestFunFC(f_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto s_13;
  s_13 :
  TestFunFC(c_0,&&fail,Egetd(0,6));
  Rpush(o_14);
  goto p_13;
  o_14 :
  goto n_14;
  p_13 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  n_14 :
  Ccall(_stratego_f_3);
  Ccall(_stratego_c_3);
  Epopd(0,6);
  goto k_14;
  m_14 :
  Ccall(_stratego_b_3);
  goto p_14;
  k_14 :
  Cpop();
  p_14 :
ENDPROC

DOIT

