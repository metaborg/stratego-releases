#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,v_17);
VARDECL(AFun,m_11);
VARDECL(AFun,k_9);
VARDECL(AFun,b_8);
VARDECL(AFun,l_5);
VARDECL(AFun,w_4);
VARDECL(AFun,o_2);
VARDECL(AFun,g_2);
VARDECL(AFun,y_1);
VARDECL(AFun,x_1);
VARDECL(AFun,q_1);
VARDECL(AFun,l_1);
VARDECL(AFun,e_1);
VARDECL(AFun,d_1);
VARDECL(AFun,v_0);
VARDECL(AFun,o_0);
VARDECL(AFun,k_0);
VARDECL(AFun,f_0);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(v_17,ATmakeAFun("Nil",0,0));
  MOVE(m_11,ATmakeAFun("Undefined",1,0));
  MOVE(k_9,ATmakeAFun("Help",0,0));
  MOVE(b_8,ATmakeAFun("Input",1,0));
  MOVE(l_5,ATmakeAFun("Binary",0,0));
  MOVE(w_4,ATmakeAFun("Output",1,0));
  MOVE(o_2,ATmakeAFun("Program",1,0));
  MOVE(g_2,ATmakeAFun("Runtime",1,0));
  MOVE(y_1,ATmakeAFun("Silent",0,0));
  MOVE(x_1,ATmakeAFun("Cons",2,0));
  MOVE(q_1,ATmakeAFun("TCons",2,0));
  MOVE(l_1,ATmakeAFun("TNil",0,0));
  MOVE(e_1,ATmakeAFun("Not",1,0));
  MOVE(d_1,ATmakeAFun("Atom",1,0));
  MOVE(v_0,ATmakeAFun("And",2,0));
  MOVE(o_0,ATmakeAFun("Or",2,0));
  MOVE(k_0,ATmakeAFun("True",0,0));
  MOVE(f_0,ATmakeAFun("False",0,0));
ENDPROC

PROC(_stratego_s_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_0;
  b_0 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  Rpush(e_0);
  goto a_0;
  e_0 :
  goto d_0;
  a_0 :
  Return();
  d_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_0;
  j_0 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  Rpush(h_0);
  goto i_0;
  h_0 :
  goto g_0;
  i_0 :
  Return();
  g_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_3)
  Rpush(l_0);
  w_5 :
  Cpush(n_0);
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Rpush(p_0);
  goto w_5;
  p_0 :
  OneNextSon();
  Rpush(q_0);
  goto w_5;
  q_0 :
  AllBuild();
  goto m_0;
  n_0 :
  Ccontinue(r_0);
  Rpush(s_0);
  x_5 :
  Cpush(u_0);
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  Rpush(w_0);
  goto x_5;
  w_0 :
  OneNextSon();
  Rpush(x_0);
  goto x_5;
  x_0 :
  AllBuild();
  goto t_0;
  u_0 :
  Ccontinue(y_0);
  Epushd(0,3);
  MoveTop(0,1);
  goto n_4;
  n_4 :
  TestFunFC(d_1,&&c_1,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(b_1);
  goto k_3;
  c_1 :
  TestFunFC(e_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto o_4;
  o_4 :
  TestFunFC(d_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(b_1);
  goto m_4;
  b_1 :
  goto a_1;
  m_4 :
  Return();
  a_1 :
  goto z_0;
  k_3 :
  Return();
  z_0 :
  Epopd(0,3);
  goto t_0;
  y_0 :
  Ccontinue(f_1);
  Ccall(_stratego_t_3);
  goto t_0;
  f_1 :
  Ccontinue(g_1);
  Ccall(_stratego_s_3);
  goto t_0;
  g_1 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a conjunct: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_4);
  Epopd(0,1);
  Tpop();
  goto h_1;
  t_0 :
  Cpop();
  h_1 :
  Return();
  s_0 :
  goto m_0;
  r_0 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Not a disjunct: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_f_4);
  Epopd(0,1);
  Tpop();
  goto i_1;
  m_0 :
  Cpop();
  i_1 :
  Return();
  l_0 :
ENDPROC

PROC(_stratego_v_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_5;
  z_5 :
  TestFunFC(l_1,&&fail,Egetd(0,1));
  Rpush(k_1);
  goto y_5;
  k_1 :
  goto j_1;
  y_5 :
  Return();
  j_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_3)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_f_4);
  Tset(MakeInt(1));
  Ccall(_stratego_e_4);
ENDPROC

PROC(_stratego_x_3)
  Epushd(0,2);
  Tdupl();
  Cpush(n_1);
  Cpush(p_1);
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Cpush(r_1);
  Tdupl();
  Rpush(s_1);
  r_7 :
  Cpush(u_1);
  Epushd(1,3);
  MoveTop(1,1);
  goto c_6;
  c_6 :
  TestFunFC(x_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_6;
  d_6 :
  TestFunFC(y_1,&&fail,Egetd(1,2));
  Rpush(w_1);
  goto b_6;
  w_1 :
  goto v_1;
  b_6 :
  Return();
  v_1 :
  Epopd(1,3);
  goto t_1;
  u_1 :
  TestFunTop(x_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_2);
  goto r_7;
  a_2 :
  AllBuild();
  goto z_1;
  t_1 :
  Cpop();
  z_1 :
  Return();
  s_1 :
  Cpop();
  Crestore();
  Cjump();
  r_1 :
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_3);
  AllBuild();
  AllBuild();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Rpush(b_2);
  s_7 :
  Cpush(d_2);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_6;
  f_6 :
  TestFunFC(x_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto g_6;
  g_6 :
  TestFunFC(g_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_2);
  goto e_6;
  f_2 :
  goto e_2;
  e_6 :
  Move(0,2,1,3);
  Return();
  e_2 :
  Epopd(1,4);
  goto c_2;
  d_2 :
  TestFunTop(x_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_2);
  goto s_7;
  i_2 :
  AllBuild();
  goto h_2;
  c_2 :
  Cpop();
  h_2 :
  Return();
  b_2 :
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_3);
  AllBuild();
  AllBuild();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Rpush(j_2);
  t_7 :
  Cpush(l_2);
  Epushd(1,4);
  MoveTop(1,1);
  goto i_6;
  i_6 :
  TestFunFC(x_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto j_6;
  j_6 :
  TestFunFC(o_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(n_2);
  goto h_6;
  n_2 :
  goto m_2;
  h_6 :
  Move(0,1,1,3);
  Return();
  m_2 :
  Epopd(1,4);
  goto k_2;
  l_2 :
  TestFunTop(x_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_2);
  goto t_7;
  q_2 :
  AllBuild();
  goto p_2;
  k_2 :
  Cpop();
  p_2 :
  Return();
  j_2 :
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_3);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_f_4);
  goto o_1;
  p_1 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Ccontinue(s_2);
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Cpush(t_2);
  Tdupl();
  Rpush(u_2);
  u_7 :
  Cpush(w_2);
  Epushd(1,3);
  MoveTop(1,1);
  goto l_6;
  l_6 :
  TestFunFC(x_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_6;
  m_6 :
  TestFunFC(y_1,&&fail,Egetd(1,2));
  Rpush(y_2);
  goto k_6;
  y_2 :
  goto x_2;
  k_6 :
  Return();
  x_2 :
  Epopd(1,3);
  goto v_2;
  w_2 :
  TestFunTop(x_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_3);
  goto u_7;
  a_3 :
  AllBuild();
  goto z_2;
  v_2 :
  Cpop();
  z_2 :
  Return();
  u_2 :
  Cpop();
  Crestore();
  Cjump();
  t_2 :
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_3);
  AllBuild();
  AllBuild();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Rpush(b_3);
  v_7 :
  Cpush(d_3);
  Epushd(1,4);
  MoveTop(1,1);
  goto o_6;
  o_6 :
  TestFunFC(x_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto p_6;
  p_6 :
  TestFunFC(g_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_3);
  goto n_6;
  f_3 :
  goto e_3;
  n_6 :
  Move(0,2,1,3);
  Return();
  e_3 :
  Epopd(1,4);
  goto c_3;
  d_3 :
  TestFunTop(x_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_3);
  goto v_7;
  h_3 :
  AllBuild();
  goto g_3;
  c_3 :
  Cpop();
  g_3 :
  Return();
  b_3 :
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_3);
  AllBuild();
  AllBuild();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Rpush(i_3);
  w_7 :
  Cpush(m_3);
  Epushd(1,4);
  MoveTop(1,1);
  goto r_6;
  r_6 :
  TestFunFC(x_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto s_6;
  s_6 :
  TestFunFC(o_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_3);
  goto q_6;
  o_3 :
  goto n_3;
  q_6 :
  Move(0,1,1,3);
  Return();
  n_3 :
  Epopd(1,4);
  goto l_3;
  m_3 :
  TestFunTop(x_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_3);
  goto w_7;
  q_3 :
  AllBuild();
  goto p_3;
  l_3 :
  Cpop();
  p_3 :
  Return();
  i_3 :
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_3);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_f_4);
  goto m_1;
  s_2 :
  goto r_3;
  m_1 :
  Cpop();
  r_3 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_e_4);
  Epopd(0,2);
ENDPROC

PROC(_stratego_y_3)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_z_3)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_a_4)
  Epushd(0,1);
  Tdupl();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Cpush(q_4);
  Rpush(r_4);
  w_8 :
  Cpush(t_4);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_7;
  y_7 :
  TestFunFC(x_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_7;
  z_7 :
  TestFunFC(w_4,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_4);
  goto x_7;
  v_4 :
  goto u_4;
  x_7 :
  Move(0,1,1,3);
  Return();
  u_4 :
  Epopd(1,4);
  goto s_4;
  t_4 :
  TestFunTop(x_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_4);
  goto w_8;
  y_4 :
  AllBuild();
  goto x_4;
  s_4 :
  Cpop();
  x_4 :
  Return();
  r_4 :
  goto p_4;
  q_4 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto d_5;
  p_4 :
  Cpop();
  d_5 :
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_3);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_v_3);
  AllBuild();
  AllBuild();
  Cpush(f_5);
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Rpush(g_5);
  x_8 :
  Cpush(i_5);
  Epushd(1,3);
  MoveTop(1,1);
  goto f_8;
  f_8 :
  TestFunFC(x_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_8;
  g_8 :
  TestFunFC(l_5,&&fail,Egetd(1,2));
  Rpush(k_5);
  goto e_8;
  k_5 :
  goto j_5;
  e_8 :
  Return();
  j_5 :
  Epopd(1,3);
  goto h_5;
  i_5 :
  TestFunTop(x_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_5);
  goto x_8;
  o_5 :
  AllBuild();
  goto n_5;
  h_5 :
  Cpop();
  n_5 :
  Return();
  g_5 :
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_3);
  OneNextSon();
  Ccall(_stratego_v_3);
  AllBuild();
  AllBuild();
  goto e_5;
  f_5 :
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_3);
  OneNextSon();
  Ccall(_stratego_v_3);
  AllBuild();
  AllBuild();
  goto p_5;
  e_5 :
  Cpop();
  p_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_4)
  _ST_dtime();
ENDPROC

PROC(_stratego_c_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_d_4)
  Epushd(0,3);
  Tdupl();
  Cpush(r_5);
  Rpush(s_5);
  r_9 :
  Cpush(u_5);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_8;
  z_8 :
  TestFunFC(x_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_9;
  a_9 :
  TestFunFC(b_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(a_8);
  goto y_8;
  a_8 :
  goto v_5;
  y_8 :
  Move(0,1,1,3);
  Return();
  v_5 :
  Epopd(1,4);
  goto t_5;
  u_5 :
  TestFunTop(x_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_8);
  goto r_9;
  d_8 :
  AllBuild();
  goto c_8;
  t_5 :
  Cpop();
  c_8 :
  Return();
  s_5 :
  goto q_5;
  r_5 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto m_8;
  q_5 :
  Cpop();
  m_8 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_c_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_e_4)
  _ST_exit();
ENDPROC

PROC(_stratego_f_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_g_4)
  Epushd(0,1);
  Tdupl();
  Rpush(o_8);
  a_10 :
  Cpush(q_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_9;
  t_9 :
  TestFunFC(x_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_9;
  u_9 :
  TestFunFC(o_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_8);
  goto s_9;
  s_8 :
  goto r_8;
  s_9 :
  Move(0,1,1,3);
  Return();
  r_8 :
  Epopd(1,4);
  goto p_8;
  q_8 :
  TestFunTop(x_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_9);
  goto a_10;
  c_9 :
  AllBuild();
  goto b_9;
  p_8 :
  Cpop();
  b_9 :
  Return();
  o_8 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_f_4);
  Tset(MakeInt(1));
  Ccall(_stratego_e_4);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_10;
  c_10 :
  TestFunFC(k_9,&&fail,Egetd(0,1));
  Rpush(e_9);
  goto b_10;
  e_9 :
  goto d_9;
  b_10 :
  Return();
  d_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_4)
  Tdupl();
  m_9 :
  TestFunTop(x_1);
  Cpush(n_9);
  Arg(0);
  Cpush(a_11);
  Ccall(_stratego_h_4);
  goto q_9;
  a_11 :
  Epushd(0,2);
  MoveTop(0,1);
  goto f_10;
  f_10 :
  TestFunFC(m_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(j_11);
  goto e_10;
  j_11 :
  goto g_11;
  e_10 :
  Return();
  g_11 :
  Epopd(0,2);
  goto d_11;
  q_9 :
  Cpop();
  d_11 :
  Tpop();
  Cpop();
  goto o_9;
  n_9 :
  Arg(1);
  Tdrop();
  goto m_9;
  o_9 :
  Tpop();
  Ccall(_stratego_g_4);
ENDPROC

PROC(_stratego_j_4)
  Epushd(0,5);
  MoveTop(0,3);
  goto w_12;
  w_12 :
  TestFunFC(x_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto x_12;
  x_12 :
  TestFunFC(x_1,&&e_13,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(h_13);
  Rpush(i_13);
  goto j_10;
  i_13 :
  goto g_13;
  h_13 :
  Ccontinue(j_13);
  Rpush(l_13);
  goto k_10;
  l_13 :
  goto g_13;
  j_13 :
  Ccontinue(m_13);
  Rpush(n_13);
  goto l_10;
  n_13 :
  goto g_13;
  m_13 :
  Ccontinue(o_13);
  Rpush(q_13);
  goto m_10;
  q_13 :
  goto g_13;
  o_13 :
  Ccontinue(r_13);
  Rpush(s_13);
  goto n_10;
  s_13 :
  goto g_13;
  r_13 :
  Ccontinue(t_13);
  Rpush(v_13);
  goto o_10;
  v_13 :
  goto g_13;
  t_13 :
  Ccontinue(w_13);
  Rpush(x_13);
  goto p_10;
  x_13 :
  goto g_13;
  w_13 :
  Ccontinue(y_13);
  Rpush(a_14);
  goto q_10;
  a_14 :
  goto g_13;
  y_13 :
  Ccontinue(b_14);
  Rpush(c_14);
  goto r_10;
  c_14 :
  goto g_13;
  b_14 :
  Ccontinue(d_14);
  Rpush(e_14);
  goto s_10;
  e_14 :
  goto g_13;
  d_14 :
  Ccontinue(g_14);
  Rpush(h_14);
  goto t_10;
  h_14 :
  goto g_13;
  g_14 :
  Ccontinue(i_14);
  Rpush(j_14);
  goto u_10;
  j_14 :
  goto g_13;
  i_14 :
  Ccontinue(k_14);
  Rpush(l_14);
  goto v_10;
  l_14 :
  goto g_13;
  k_14 :
  Ccontinue(m_14);
  Rpush(o_14);
  goto w_10;
  o_14 :
  goto g_13;
  m_14 :
  Rpush(q_14);
  goto x_10;
  q_14 :
  goto p_14;
  g_13 :
  Cpop();
  p_14 :
  goto d_13;
  e_13 :
  Cpush(s_14);
  Rpush(t_14);
  goto j_10;
  t_14 :
  goto r_14;
  s_14 :
  Ccontinue(u_14);
  Rpush(w_14);
  goto k_10;
  w_14 :
  goto r_14;
  u_14 :
  Ccontinue(x_14);
  Rpush(y_14);
  goto l_10;
  y_14 :
  goto r_14;
  x_14 :
  Ccontinue(z_14);
  Rpush(a_15);
  goto m_10;
  a_15 :
  goto r_14;
  z_14 :
  Ccontinue(b_15);
  Rpush(c_15);
  goto n_10;
  c_15 :
  goto r_14;
  b_15 :
  Ccontinue(e_15);
  Rpush(f_15);
  goto t_10;
  f_15 :
  goto r_14;
  e_15 :
  Ccontinue(g_15);
  Rpush(h_15);
  goto u_10;
  h_15 :
  goto r_14;
  g_15 :
  Ccontinue(i_15);
  Rpush(j_15);
  goto v_10;
  j_15 :
  goto r_14;
  i_15 :
  Ccontinue(k_15);
  Rpush(m_15);
  goto w_10;
  m_15 :
  goto r_14;
  k_15 :
  Rpush(o_15);
  goto x_10;
  o_15 :
  goto n_15;
  r_14 :
  Cpop();
  n_15 :
  goto d_13;
  d_13 :
  goto v_12;
  x_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_12;
  u_12 :
  TestStr(1,1,"-?",&&fail);
  Rpush(q_15);
  goto t_12;
  q_15 :
  goto p_15;
  t_12 :
  Return();
  p_15 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  v_12 :
  goto s_12;
  w_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_12;
  r_12 :
  TestStr(1,1,"-h",&&fail);
  Rpush(t_15);
  goto q_12;
  t_15 :
  goto r_15;
  q_12 :
  Return();
  r_15 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  s_12 :
  goto p_12;
  v_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_12;
  o_12 :
  TestStr(1,1,"--help",&&fail);
  Rpush(v_15);
  goto n_12;
  v_15 :
  goto u_15;
  n_12 :
  Return();
  u_15 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  p_12 :
  goto m_12;
  u_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_12;
  l_12 :
  TestStr(1,1,"-s",&&fail);
  Rpush(y_15);
  goto k_12;
  y_15 :
  goto w_15;
  k_12 :
  Return();
  w_15 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  m_12 :
  goto j_12;
  t_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_12;
  i_12 :
  TestStr(1,1,"-b",&&fail);
  Rpush(a_16);
  goto h_12;
  a_16 :
  goto z_15;
  h_12 :
  Return();
  z_15 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  j_12 :
  goto g_12;
  s_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_12;
  e_12 :
  TestStr(1,1,"--output",&&fail);
  Rpush(d_16);
  goto d_12;
  d_16 :
  goto b_16;
  d_12 :
  Return();
  b_16 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  g_12 :
  goto f_12;
  r_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_12;
  a_12 :
  TestStr(1,1,"-o",&&fail);
  Rpush(f_16);
  goto z_11;
  f_16 :
  goto e_16;
  z_11 :
  Return();
  e_16 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  f_12 :
  goto c_12;
  q_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_11;
  w_11 :
  TestStr(1,1,"--input",&&fail);
  Rpush(i_16);
  goto v_11;
  i_16 :
  goto g_16;
  v_11 :
  Return();
  g_16 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  c_12 :
  goto b_12;
  p_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_11;
  s_11 :
  TestStr(1,1,"-i",&&fail);
  Rpush(k_16);
  goto r_11;
  k_16 :
  goto j_16;
  r_11 :
  Return();
  j_16 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  b_12 :
  goto y_11;
  o_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_11;
  o_11 :
  TestStr(1,1,"@version",&&fail);
  Rpush(n_16);
  goto n_11;
  n_16 :
  goto l_16;
  n_11 :
  Return();
  l_16 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  y_11 :
  goto x_11;
  n_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_11;
  l_11 :
  TestStr(1,1,"--version",&&fail);
  Rpush(s_16);
  goto k_11;
  s_16 :
  goto o_16;
  k_11 :
  Return();
  o_16 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  x_11 :
  goto u_11;
  m_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_11;
  i_11 :
  TestStr(1,1,"-v",&&fail);
  Rpush(b_17);
  goto h_11;
  b_17 :
  goto v_16;
  h_11 :
  Return();
  v_16 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  u_11 :
  goto t_11;
  l_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_11;
  f_11 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(g_17);
  goto e_11;
  g_17 :
  goto f_17;
  e_11 :
  Return();
  f_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  t_11 :
  goto q_11;
  k_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_11;
  c_11 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(p_17);
  goto b_11;
  p_17 :
  goto o_17;
  b_11 :
  Return();
  o_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  q_11 :
  goto p_11;
  j_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_10;
  z_10 :
  TestStr(1,1,"-S",&&fail);
  Rpush(s_17);
  goto y_10;
  s_17 :
  goto r_17;
  y_10 :
  Return();
  r_17 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  p_11 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_k_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_16;
  q_16 :
  TestFunFC(v_17,&&fail,Egetd(0,1));
  Rpush(u_17);
  goto p_16;
  u_17 :
  goto t_17;
  p_16 :
  Return();
  t_17 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_4)
  TestFunTop(x_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(w_17);
  q_17 :
  Cpush(y_17);
  Cpush(a_18);
  Ccall(_stratego_k_4);
  goto z_17;
  a_18 :
  Ccall(_stratego_j_4);
  TestFunTop(x_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_18);
  goto q_17;
  c_18 :
  AllBuild();
  goto b_18;
  z_17 :
  Cpop();
  b_18 :
  goto x_17;
  y_17 :
  Epushd(0,3);
  MoveTop(0,1);
  goto u_16;
  u_16 :
  TestFunFC(x_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(f_18);
  goto t_16;
  f_18 :
  goto e_18;
  t_16 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  e_18 :
  Epopd(0,3);
  goto d_18;
  x_17 :
  Cpop();
  d_18 :
  Return();
  w_17 :
  AllBuild();
  Cpush(h_18);
  Ccall(_stratego_i_4);
  goto g_18;
  h_18 :
  Ccontinue(i_18);
  Epushd(0,6);
  Ccall(_stratego_d_4);
  Tdupl();
  Ccall(_stratego_b_4);
  Tpop();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_3);
  OneNextSon();
  Ccall(_stratego_v_3);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_b_4);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto x_16;
  x_16 :
  TestFunFC(q_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto y_16;
  y_16 :
  TestFunFC(q_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto z_16;
  z_16 :
  TestFunFC(l_1,&&fail,Egetd(0,6));
  Rpush(k_18);
  goto w_16;
  k_18 :
  goto j_18;
  w_16 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  j_18 :
  Ccall(_stratego_a_4);
  Ccall(_stratego_x_3);
  Epopd(0,6);
  goto g_18;
  i_18 :
  Ccall(_stratego_w_3);
  goto l_18;
  g_18 :
  Cpop();
  l_18 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_l_4);
ENDPROC

DOIT

