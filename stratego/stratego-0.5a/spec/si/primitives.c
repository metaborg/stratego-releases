#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,r_9);
VARDECL(AFun,t_8);
VARDECL(AFun,i_6);
VARDECL(AFun,p_4);
VARDECL(AFun,g_3);
VARDECL(AFun,v_2);
VARDECL(AFun,n_2);
VARDECL(AFun,f_2);
VARDECL(AFun,a_1);
VARDECL(AFun,t_0);
VARDECL(AFun,s_0);
VARDECL(AFun,j_0);
VARDECL(AFun,h_0);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(r_9,ATmakeAFun("Undefined",1,0));
  MOVE(t_8,ATmakeAFun("Help",0,0));
  MOVE(i_6,ATmakeAFun("Input",1,0));
  MOVE(p_4,ATmakeAFun("Binary",0,0));
  MOVE(g_3,ATmakeAFun("Output",1,0));
  MOVE(v_2,ATmakeAFun("Program",1,0));
  MOVE(n_2,ATmakeAFun("Runtime",1,0));
  MOVE(f_2,ATmakeAFun("Silent",0,0));
  MOVE(a_1,ATmakeAFun("Cons",2,0));
  MOVE(t_0,ATmakeAFun("TNil",0,0));
  MOVE(s_0,ATmakeAFun("TCons",2,0));
  MOVE(j_0,ATmakeAFun("Nil",0,0));
  MOVE(h_0,ATmakeAFun("Prim",1,0));
  MOVE(f_0,ATmakeAFun("SDef",3,0));
ENDPROC

PROC(_stratego_s_3)
  Rpush(a_0);
  s_6 :
  Epushd(0,5);
  MoveTop(0,5);
  goto a_5;
  a_5 :
  TestFunFC(f_0,&&e_0,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  MoveArg(0,3,0,5,2);
  goto b_5;
  b_5 :
  TestFunFC(h_0,&&g_0,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto c_5;
  c_5 :
  TestFunFC(j_0,&&i_0,Egetd(0,2));
  Cpush(l_0);
  Rpush(m_0);
  goto i_3;
  m_0 :
  goto k_0;
  l_0 :
  Rpush(o_0);
  goto j_3;
  o_0 :
  goto n_0;
  k_0 :
  Cpop();
  n_0 :
  goto d_0;
  i_0 :
  Rpush(d_0);
  goto j_3;
  g_0 :
  goto d_5;
  d_5 :
  p_0 :
  Rpush(d_0);
  goto j_3;
  e_0 :
  Rpush(d_0);
  goto j_3;
  d_0 :
  goto c_0;
  j_3 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto l_4;
  l_4 :
  TestFunFC(s_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto m_4;
  m_4 :
  TestFunFC(s_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto n_4;
  n_4 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  Rpush(r_0);
  goto k_4;
  r_0 :
  goto q_0;
  k_4 :
  Move(1,1,2,4);
  Return();
  q_0 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(u_0);
  t_6 :
  Cpush(w_0);
  Ccall(_stratego_i_4);
  Tset(App0("Nil"));
  goto v_0;
  w_0 :
  Epushd(2,3);
  MoveTop(2,1);
  goto z_4;
  z_4 :
  TestFunFC(a_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(z_0);
  goto o_4;
  z_0 :
  goto y_0;
  o_4 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(b_1);
  goto s_6;
  b_1 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(c_1);
  goto t_6;
  c_1 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto w_4;
  w_4 :
  TestFunFC(s_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto x_4;
  x_4 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto y_4;
  y_4 :
  TestFunFC(t_0,&&fail,Egetd(3,7));
  Rpush(e_1);
  goto r_4;
  e_1 :
  goto d_1;
  r_4 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(f_1);
  u_6 :
  Cpush(h_1);
  Ccall(_stratego_i_4);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto g_1;
  h_1 :
  Ccontinue(i_1);
  Epushd(4,3);
  MoveTop(4,1);
  goto v_4;
  v_4 :
  TestFunFC(a_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(k_1);
  goto s_4;
  k_1 :
  goto j_1;
  s_4 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(l_1);
  v_6 :
  Cpush(n_1);
  Epushd(5,3);
  MoveTop(5,1);
  goto u_4;
  u_4 :
  TestFunFC(a_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(p_1);
  goto t_4;
  p_1 :
  goto o_1;
  t_4 :
  Move(4,2,5,2);
  Return();
  o_1 :
  Epopd(5,3);
  goto m_1;
  n_1 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_1);
  goto v_6;
  r_1 :
  AllBuild();
  goto q_1;
  m_1 :
  Cpop();
  q_1 :
  Return();
  l_1 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(s_1);
  goto u_6;
  s_1 :
  Return();
  j_1 :
  Epopd(4,3);
  goto g_1;
  i_1 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_1);
  goto u_6;
  u_1 :
  AllBuild();
  goto t_1;
  g_1 :
  Cpop();
  t_1 :
  Return();
  f_1 :
  Return();
  d_1 :
  Epopd(3,7);
  Return();
  y_0 :
  Epopd(2,3);
  goto x_0;
  v_0 :
  Cpop();
  x_0 :
  Return();
  u_0 :
  Epopd(1,1);
  Return();
  c_0 :
  goto b_0;
  i_3 :
  NotNULLd(0,4);
  NotNULLd(0,1);
  Tset(App3("RDef",ATmakeString("EvalPrim"),App0("Nil"),App3("Rule",App2("Op",ATmakeString("App"),App2("Cons",App2("Op",ATmakeString("Prim"),App2("Cons",App1("Str",Egetd(0,4)),App0("Nil"))),App2("Cons",App1("Var",ATmakeString("t")),App0("Nil")))),App2("App",App2("Call",App1("SVar",Egetd(0,1)),App0("Nil")),App1("Var",ATmakeString("t"))),App0("Id"))));
  NotNULLd(0,4);
  NotNULLd(0,1);
  Tset(App2("Cons",App3("RDef",ATmakeString("EvalPrim"),App0("Nil"),App3("Rule",App2("Op",ATmakeString("App"),App2("Cons",App2("Op",ATmakeString("Prim"),App2("Cons",App1("Str",Egetd(0,4)),App0("Nil"))),App2("Cons",App1("Var",ATmakeString("t")),App0("Nil")))),App2("App",App2("Call",App1("SVar",Egetd(0,1)),App0("Nil")),App1("Var",ATmakeString("t"))),App0("Id"))),App0("Nil")));
  Return();
  b_0 :
  Epopd(0,5);
  Return();
  a_0 :
ENDPROC

PROC(_stratego_t_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_6;
  x_6 :
  TestFunFC(t_0,&&fail,Egetd(0,1));
  Rpush(w_1);
  goto w_6;
  w_1 :
  goto v_1;
  w_6 :
  Return();
  v_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_3)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_d_4);
  Tset(MakeInt(1));
  Ccall(_stratego_c_4);
ENDPROC

PROC(_stratego_v_3)
  Epushd(0,2);
  Tdupl();
  Cpush(y_1);
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Cpush(z_1);
  Tdupl();
  Rpush(a_2);
  v_7 :
  Cpush(c_2);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_7;
  a_7 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_7;
  b_7 :
  TestFunFC(f_2,&&fail,Egetd(1,2));
  Rpush(e_2);
  goto z_6;
  e_2 :
  goto d_2;
  z_6 :
  Return();
  d_2 :
  Epopd(1,3);
  goto b_2;
  c_2 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_2);
  goto v_7;
  h_2 :
  AllBuild();
  goto g_2;
  b_2 :
  Cpop();
  g_2 :
  Return();
  a_2 :
  Cpop();
  Crestore();
  Cjump();
  z_1 :
  OneNextSon();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  AllBuild();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Rpush(i_2);
  w_7 :
  Cpush(k_2);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_7;
  d_7 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_7;
  e_7 :
  TestFunFC(n_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_2);
  goto c_7;
  m_2 :
  goto l_2;
  c_7 :
  Move(0,2,1,3);
  Return();
  l_2 :
  Epopd(1,4);
  goto j_2;
  k_2 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_2);
  goto w_7;
  p_2 :
  AllBuild();
  goto o_2;
  j_2 :
  Cpop();
  o_2 :
  Return();
  i_2 :
  OneNextSon();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  AllBuild();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Rpush(q_2);
  x_7 :
  Cpush(s_2);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_7;
  g_7 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_7;
  h_7 :
  TestFunFC(v_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(u_2);
  goto f_7;
  u_2 :
  goto t_2;
  f_7 :
  Move(0,1,1,3);
  Return();
  t_2 :
  Epopd(1,4);
  goto r_2;
  s_2 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_2);
  goto x_7;
  x_2 :
  AllBuild();
  goto w_2;
  r_2 :
  Cpop();
  w_2 :
  Return();
  q_2 :
  OneNextSon();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_d_4);
  goto x_1;
  y_1 :
  goto y_2;
  x_1 :
  Cpop();
  y_2 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_c_4);
  Epopd(0,2);
ENDPROC

PROC(_stratego_w_3)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_x_3)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_y_3)
  Epushd(0,1);
  Tdupl();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Cpush(a_3);
  Rpush(b_3);
  x_8 :
  Cpush(d_3);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_7;
  z_7 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_8;
  a_8 :
  TestFunFC(g_3,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_3);
  goto y_7;
  f_3 :
  goto e_3;
  y_7 :
  Move(0,1,1,3);
  Return();
  e_3 :
  Epopd(1,4);
  goto c_3;
  d_3 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_3);
  goto x_8;
  k_3 :
  AllBuild();
  goto h_3;
  c_3 :
  Cpop();
  h_3 :
  Return();
  b_3 :
  goto z_2;
  a_3 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto l_3;
  z_2 :
  Cpop();
  l_3 :
  OneNextSon();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  AllBuild();
  Cpush(n_3);
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Rpush(o_3);
  y_8 :
  Cpush(q_3);
  Epushd(1,3);
  MoveTop(1,1);
  goto g_8;
  g_8 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_8;
  h_8 :
  TestFunFC(p_4,&&fail,Egetd(1,2));
  Rpush(j_4);
  goto f_8;
  j_4 :
  goto r_3;
  f_8 :
  Return();
  r_3 :
  Epopd(1,3);
  goto p_3;
  q_3 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_5);
  goto y_8;
  j_5 :
  AllBuild();
  goto q_4;
  p_3 :
  Cpop();
  q_4 :
  Return();
  o_3 :
  OneNextSon();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_x_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  AllBuild();
  goto m_3;
  n_3 :
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  AllBuild();
  goto k_5;
  m_3 :
  Cpop();
  k_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_3)
  _ST_dtime();
ENDPROC

PROC(_stratego_a_4)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_b_4)
  Epushd(0,3);
  Tdupl();
  Cpush(m_5);
  Rpush(o_5);
  s_9 :
  Cpush(y_5);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_9;
  a_9 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_9;
  b_9 :
  TestFunFC(i_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_6);
  goto z_8;
  c_6 :
  goto a_6;
  z_8 :
  Move(0,1,1,3);
  Return();
  a_6 :
  Epopd(1,4);
  goto x_5;
  y_5 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_6);
  goto s_9;
  n_6 :
  AllBuild();
  goto j_6;
  x_5 :
  Cpop();
  j_6 :
  Return();
  o_5 :
  goto l_5;
  m_5 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto o_6;
  l_5 :
  Cpop();
  o_6 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_a_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_c_4)
  _ST_exit();
ENDPROC

PROC(_stratego_d_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_e_4)
  Epushd(0,1);
  Tdupl();
  Rpush(b_8);
  b_10 :
  Cpush(d_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_9;
  u_9 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_9;
  v_9 :
  TestFunFC(v_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(n_8);
  goto t_9;
  n_8 :
  goto e_8;
  t_9 :
  Move(0,1,1,3);
  Return();
  e_8 :
  Epopd(1,4);
  goto c_8;
  d_8 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_8);
  goto b_10;
  q_8 :
  AllBuild();
  goto p_8;
  c_8 :
  Cpop();
  p_8 :
  Return();
  b_8 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_d_4);
  Tset(MakeInt(1));
  Ccall(_stratego_c_4);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_10;
  d_10 :
  TestFunFC(t_8,&&fail,Egetd(0,1));
  Rpush(s_8);
  goto c_10;
  s_8 :
  goto r_8;
  c_10 :
  Return();
  r_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_4)
  Tdupl();
  c_9 :
  TestFunTop(a_1);
  Cpush(d_9);
  Arg(0);
  Cpush(l_9);
  Ccall(_stratego_f_4);
  goto f_9;
  l_9 :
  Epushd(0,2);
  MoveTop(0,1);
  goto g_10;
  g_10 :
  TestFunFC(r_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(p_9);
  goto f_10;
  p_9 :
  goto o_9;
  f_10 :
  Return();
  o_9 :
  Epopd(0,2);
  goto n_9;
  f_9 :
  Cpop();
  n_9 :
  Tpop();
  Cpop();
  goto e_9;
  d_9 :
  Arg(1);
  Tdrop();
  goto c_9;
  e_9 :
  Tpop();
  Ccall(_stratego_e_4);
ENDPROC

PROC(_stratego_h_4)
  Epushd(0,5);
  MoveTop(0,3);
  goto x_12;
  x_12 :
  TestFunFC(a_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto y_12;
  y_12 :
  TestFunFC(a_1,&&n_12,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(t_12);
  Rpush(w_12);
  goto k_10;
  w_12 :
  goto q_12;
  t_12 :
  Ccontinue(e_13);
  Rpush(f_13);
  goto l_10;
  f_13 :
  goto q_12;
  e_13 :
  Ccontinue(h_13);
  Rpush(i_13);
  goto m_10;
  i_13 :
  goto q_12;
  h_13 :
  Ccontinue(j_13);
  Rpush(k_13);
  goto n_10;
  k_13 :
  goto q_12;
  j_13 :
  Ccontinue(m_13);
  Rpush(n_13);
  goto o_10;
  n_13 :
  goto q_12;
  m_13 :
  Ccontinue(o_13);
  Rpush(p_13);
  goto p_10;
  p_13 :
  goto q_12;
  o_13 :
  Ccontinue(r_13);
  Rpush(s_13);
  goto q_10;
  s_13 :
  goto q_12;
  r_13 :
  Ccontinue(t_13);
  Rpush(u_13);
  goto r_10;
  u_13 :
  goto q_12;
  t_13 :
  Ccontinue(w_13);
  Rpush(x_13);
  goto s_10;
  x_13 :
  goto q_12;
  w_13 :
  Ccontinue(y_13);
  Rpush(z_13);
  goto t_10;
  z_13 :
  goto q_12;
  y_13 :
  Ccontinue(b_14);
  Rpush(c_14);
  goto u_10;
  c_14 :
  goto q_12;
  b_14 :
  Ccontinue(d_14);
  Rpush(e_14);
  goto v_10;
  e_14 :
  goto q_12;
  d_14 :
  Ccontinue(f_14);
  Rpush(h_14);
  goto w_10;
  h_14 :
  goto q_12;
  f_14 :
  Ccontinue(i_14);
  Rpush(j_14);
  goto x_10;
  j_14 :
  goto q_12;
  i_14 :
  Rpush(l_14);
  goto y_10;
  l_14 :
  goto k_14;
  q_12 :
  Cpop();
  k_14 :
  goto k_12;
  n_12 :
  Cpush(n_14);
  Rpush(p_14);
  goto k_10;
  p_14 :
  goto m_14;
  n_14 :
  Ccontinue(q_14);
  Rpush(r_14);
  goto l_10;
  r_14 :
  goto m_14;
  q_14 :
  Ccontinue(s_14);
  Rpush(t_14);
  goto m_10;
  t_14 :
  goto m_14;
  s_14 :
  Ccontinue(u_14);
  Rpush(v_14);
  goto n_10;
  v_14 :
  goto m_14;
  u_14 :
  Ccontinue(x_14);
  Rpush(y_14);
  goto o_10;
  y_14 :
  goto m_14;
  x_14 :
  Ccontinue(z_14);
  Rpush(a_15);
  goto u_10;
  a_15 :
  goto m_14;
  z_14 :
  Ccontinue(b_15);
  Rpush(c_15);
  goto v_10;
  c_15 :
  goto m_14;
  b_15 :
  Ccontinue(d_15);
  Rpush(e_15);
  goto w_10;
  e_15 :
  goto m_14;
  d_15 :
  Ccontinue(f_15);
  Rpush(h_15);
  goto x_10;
  h_15 :
  goto m_14;
  f_15 :
  Rpush(j_15);
  goto y_10;
  j_15 :
  goto i_15;
  m_14 :
  Cpop();
  i_15 :
  goto k_12;
  k_12 :
  goto h_12;
  y_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_12;
  v_12 :
  TestStr(1,1,"-?",&&fail);
  Rpush(l_15);
  goto u_12;
  l_15 :
  goto k_15;
  u_12 :
  Return();
  k_15 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  h_12 :
  goto g_12;
  x_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_12;
  s_12 :
  TestStr(1,1,"-h",&&fail);
  Rpush(n_15);
  goto r_12;
  n_15 :
  goto m_15;
  r_12 :
  Return();
  m_15 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  g_12 :
  goto d_12;
  w_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_12;
  p_12 :
  TestStr(1,1,"--help",&&fail);
  Rpush(p_15);
  goto o_12;
  p_15 :
  goto o_15;
  o_12 :
  Return();
  o_15 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  d_12 :
  goto c_12;
  v_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_12;
  m_12 :
  TestStr(1,1,"-s",&&fail);
  Rpush(s_15);
  goto l_12;
  s_15 :
  goto q_15;
  l_12 :
  Return();
  q_15 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  c_12 :
  goto z_11;
  u_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_12;
  j_12 :
  TestStr(1,1,"-b",&&fail);
  Rpush(u_15);
  goto i_12;
  u_15 :
  goto t_15;
  i_12 :
  Return();
  t_15 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  z_11 :
  goto y_11;
  t_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_12;
  f_12 :
  TestStr(1,1,"--output",&&fail);
  Rpush(w_15);
  goto e_12;
  w_15 :
  goto v_15;
  e_12 :
  Return();
  v_15 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  y_11 :
  goto v_11;
  s_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_12;
  b_12 :
  TestStr(1,1,"-o",&&fail);
  Rpush(z_15);
  goto a_12;
  z_15 :
  goto x_15;
  a_12 :
  Return();
  x_15 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  v_11 :
  goto u_11;
  r_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_11;
  x_11 :
  TestStr(1,1,"--input",&&fail);
  Rpush(b_16);
  goto w_11;
  b_16 :
  goto a_16;
  w_11 :
  Return();
  a_16 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  u_11 :
  goto r_11;
  q_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_11;
  t_11 :
  TestStr(1,1,"-i",&&fail);
  Rpush(e_16);
  goto s_11;
  e_16 :
  goto c_16;
  s_11 :
  Return();
  c_16 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  r_11 :
  goto q_11;
  p_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_11;
  p_11 :
  TestStr(1,1,"@version",&&fail);
  Rpush(g_16);
  goto o_11;
  g_16 :
  goto f_16;
  o_11 :
  Return();
  f_16 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  q_11 :
  goto n_11;
  o_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_11;
  m_11 :
  TestStr(1,1,"--version",&&fail);
  Rpush(j_16);
  goto l_11;
  j_16 :
  goto h_16;
  l_11 :
  Return();
  h_16 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  n_11 :
  goto k_11;
  n_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_11;
  j_11 :
  TestStr(1,1,"-v",&&fail);
  Rpush(l_16);
  goto i_11;
  l_16 :
  goto k_16;
  i_11 :
  Return();
  k_16 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  k_11 :
  goto h_11;
  m_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_11;
  g_11 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(o_16);
  goto f_11;
  o_16 :
  goto m_16;
  f_11 :
  Return();
  m_16 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  h_11 :
  goto e_11;
  l_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_11;
  d_11 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(q_16);
  goto c_11;
  q_16 :
  goto p_16;
  c_11 :
  Return();
  p_16 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  e_11 :
  goto b_11;
  k_10 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_11;
  a_11 :
  TestStr(1,1,"-S",&&fail);
  Rpush(t_16);
  goto z_10;
  t_16 :
  goto r_16;
  z_10 :
  Return();
  r_16 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  b_11 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_i_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_16;
  w_16 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  Rpush(y_16);
  goto v_16;
  y_16 :
  goto u_16;
  v_16 :
  Return();
  u_16 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(b_17);
  z_17 :
  Cpush(i_17);
  Cpush(n_17);
  Ccall(_stratego_i_4);
  goto m_17;
  n_17 :
  Ccall(_stratego_h_4);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_17);
  goto z_17;
  x_17 :
  AllBuild();
  goto p_17;
  m_17 :
  Cpop();
  p_17 :
  goto c_17;
  i_17 :
  Epushd(0,3);
  MoveTop(0,1);
  goto a_17;
  a_17 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(b_18);
  goto z_16;
  b_18 :
  goto a_18;
  z_16 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  a_18 :
  Epopd(0,3);
  goto y_17;
  c_17 :
  Cpop();
  y_17 :
  Return();
  b_17 :
  AllBuild();
  Cpush(d_18);
  Ccall(_stratego_g_4);
  goto c_18;
  d_18 :
  Ccontinue(e_18);
  Epushd(0,6);
  Ccall(_stratego_b_4);
  Tdupl();
  Ccall(_stratego_z_3);
  Tpop();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  Ccall(_stratego_s_3);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("Specification",App2("Cons",App1("Rules",Egetd(1,1)),App0("Nil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_z_3);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto e_17;
  e_17 :
  TestFunFC(s_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto f_17;
  f_17 :
  TestFunFC(s_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto g_17;
  g_17 :
  TestFunFC(t_0,&&fail,Egetd(0,6));
  Rpush(g_18);
  goto d_17;
  g_18 :
  goto f_18;
  d_17 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  f_18 :
  Ccall(_stratego_y_3);
  Ccall(_stratego_v_3);
  Epopd(0,6);
  goto c_18;
  e_18 :
  Ccall(_stratego_u_3);
  goto h_18;
  c_18 :
  Cpop();
  h_18 :
ENDPROC

DOIT

