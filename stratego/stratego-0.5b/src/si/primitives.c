#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,b_16);
VARDECL(AFun,a_16);
VARDECL(AFun,b_15);
VARDECL(AFun,l_14);
VARDECL(AFun,y_13);
VARDECL(AFun,t_13);
VARDECL(AFun,q_9);
VARDECL(AFun,b_9);
VARDECL(AFun,g_7);
VARDECL(AFun,o_6);
VARDECL(AFun,k_5);
VARDECL(AFun,k_4);
VARDECL(AFun,p_3);
VARDECL(AFun,e_3);
VARDECL(AFun,w_2);
VARDECL(AFun,o_2);
VARDECL(AFun,f_2);
VARDECL(AFun,c_1);
VARDECL(AFun,b_1);
VARDECL(AFun,y_0);
VARDECL(AFun,x_0);
VARDECL(AFun,w_0);
VARDECL(AFun,v_0);
VARDECL(AFun,u_0);
VARDECL(AFun,t_0);
VARDECL(AFun,s_0);
VARDECL(AFun,r_0);
VARDECL(AFun,q_0);
VARDECL(AFun,p_0);
VARDECL(AFun,i_0);
VARDECL(AFun,g_0);
VARDECL(AFun,e_0);
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
  MOVE(b_16,ATmakeAFun("Rules",1,0));
  MOVE(a_16,ATmakeAFun("Specification",1,0));
  MOVE(b_15,ATmakeAFun("Statistics",0,0));
  MOVE(l_14,ATmakeAFun("DeclVersion",1,0));
  MOVE(y_13,ATmakeAFun("Version",0,0));
  MOVE(t_13,ATmakeAFun("Verbose",0,0));
  MOVE(q_9,ATmakeAFun("Undefined",1,0));
  MOVE(b_9,ATmakeAFun("Help",0,0));
  MOVE(g_7,ATmakeAFun("stdin",0,0));
  MOVE(o_6,ATmakeAFun("Input",1,0));
  MOVE(k_5,ATmakeAFun("Binary",0,0));
  MOVE(k_4,ATmakeAFun("stdout",0,0));
  MOVE(p_3,ATmakeAFun("Output",1,0));
  MOVE(e_3,ATmakeAFun("Program",1,0));
  MOVE(w_2,ATmakeAFun("Runtime",1,0));
  MOVE(o_2,ATmakeAFun("Silent",0,0));
  MOVE(f_2,ATmakeAFun("stderr",0,0));
  MOVE(c_1,ATmakeAFun("TNil",0,0));
  MOVE(b_1,ATmakeAFun("TCons",2,0));
  MOVE(y_0,ATmakeAFun("Id",0,0));
  MOVE(x_0,ATmakeAFun("SVar",1,0));
  MOVE(w_0,ATmakeAFun("Call",2,0));
  MOVE(v_0,ATmakeAFun("App",2,0));
  MOVE(u_0,ATmakeAFun("Var",1,0));
  MOVE(t_0,ATmakeAFun("Str",1,0));
  MOVE(s_0,ATmakeAFun("Cons",2,0));
  MOVE(r_0,ATmakeAFun("Op",2,0));
  MOVE(q_0,ATmakeAFun("Rule",3,0));
  MOVE(p_0,ATmakeAFun("RDef",3,0));
  MOVE(i_0,ATmakeAFun("Nil",0,0));
  MOVE(g_0,ATmakeAFun("Prim",1,0));
  MOVE(e_0,ATmakeAFun("SDef",3,0));
ENDPROC

PROC(_stratego_s_3)
  Rpush(a_0);
  s_6 :
  Epushd(0,5);
  MoveTop(0,5);
  goto a_5;
  a_5 :
  TestFunFC(e_0,&&d_0,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  MoveArg(0,3,0,5,2);
  goto b_5;
  b_5 :
  TestFunFC(g_0,&&f_0,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto c_5;
  c_5 :
  TestFunFC(i_0,&&h_0,Egetd(0,2));
  Cpush(k_0);
  Rpush(l_0);
  goto t_6;
  l_0 :
  goto j_0;
  k_0 :
  Rpush(n_0);
  goto u_6;
  n_0 :
  goto m_0;
  j_0 :
  Cpop();
  m_0 :
  goto c_0;
  h_0 :
  Rpush(c_0);
  goto u_6;
  f_0 :
  goto d_5;
  d_5 :
  o_0 :
  Rpush(c_0);
  goto u_6;
  d_0 :
  Rpush(c_0);
  goto u_6;
  c_0 :
  goto b_0;
  t_6 :
  NotNULLd(0,4);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl3(p_0,ATmakeString("EvalPrim"),(ATerm)ATmakeAppl0(i_0),(ATerm)ATmakeAppl3(q_0,(ATerm)ATmakeAppl2(r_0,ATmakeString("App"),(ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl2(r_0,ATmakeString("Prim"),(ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl1(t_0,Egetd(0,4)),(ATerm)ATmakeAppl0(i_0))),(ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl1(u_0,ATmakeString("t")),(ATerm)ATmakeAppl0(i_0)))),(ATerm)ATmakeAppl2(v_0,(ATerm)ATmakeAppl2(w_0,(ATerm)ATmakeAppl1(x_0,Egetd(0,1)),(ATerm)ATmakeAppl0(i_0)),(ATerm)ATmakeAppl1(u_0,ATmakeString("t"))),(ATerm)ATmakeAppl0(y_0))));
  NotNULLd(0,4);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl3(p_0,ATmakeString("EvalPrim"),(ATerm)ATmakeAppl0(i_0),(ATerm)ATmakeAppl3(q_0,(ATerm)ATmakeAppl2(r_0,ATmakeString("App"),(ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl2(r_0,ATmakeString("Prim"),(ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl1(t_0,Egetd(0,4)),(ATerm)ATmakeAppl0(i_0))),(ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl1(u_0,ATmakeString("t")),(ATerm)ATmakeAppl0(i_0)))),(ATerm)ATmakeAppl2(v_0,(ATerm)ATmakeAppl2(w_0,(ATerm)ATmakeAppl1(x_0,Egetd(0,1)),(ATerm)ATmakeAppl0(i_0)),(ATerm)ATmakeAppl1(u_0,ATmakeString("t"))),(ATerm)ATmakeAppl0(y_0))),(ATerm)ATmakeAppl0(i_0)));
  Return();
  u_6 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto l_4;
  l_4 :
  TestFunFC(b_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto m_4;
  m_4 :
  TestFunFC(b_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto n_4;
  n_4 :
  TestFunFC(c_1,&&fail,Egetd(2,5));
  Rpush(a_1);
  goto w_6;
  a_1 :
  goto z_0;
  w_6 :
  Move(1,1,2,4);
  Return();
  z_0 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(d_1);
  x_6 :
  Cpush(f_1);
  Ccall(_stratego_i_4);
  Tset((ATerm)ATmakeAppl0(i_0));
  goto e_1;
  f_1 :
  Epushd(2,3);
  MoveTop(2,1);
  goto z_4;
  z_4 :
  TestFunFC(s_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(i_1);
  goto y_6;
  i_1 :
  goto h_1;
  y_6 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(j_1);
  goto s_6;
  j_1 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(k_1);
  goto x_6;
  k_1 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset((ATerm)ATmakeAppl2(b_1,Egetd(3,1),(ATerm)ATmakeAppl2(b_1,Egetd(3,2),(ATerm)ATmakeAppl0(c_1))));
  MoveTop(3,3);
  goto w_4;
  w_4 :
  TestFunFC(b_1,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto x_4;
  x_4 :
  TestFunFC(b_1,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto y_4;
  y_4 :
  TestFunFC(c_1,&&fail,Egetd(3,7));
  Rpush(m_1);
  goto b_7;
  m_1 :
  goto l_1;
  b_7 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(n_1);
  c_7 :
  Cpush(p_1);
  Ccall(_stratego_i_4);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto o_1;
  p_1 :
  Ccontinue(q_1);
  Epushd(4,3);
  MoveTop(4,1);
  goto v_4;
  v_4 :
  TestFunFC(s_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(s_1);
  goto d_7;
  s_1 :
  goto r_1;
  d_7 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(t_1);
  e_7 :
  Cpush(v_1);
  Epushd(5,3);
  MoveTop(5,1);
  goto u_4;
  u_4 :
  TestFunFC(s_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(x_1);
  goto f_7;
  x_1 :
  goto w_1;
  f_7 :
  Move(4,2,5,2);
  Return();
  w_1 :
  Epopd(5,3);
  goto u_1;
  v_1 :
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_1);
  goto e_7;
  z_1 :
  AllBuild();
  goto y_1;
  u_1 :
  Cpop();
  y_1 :
  Return();
  t_1 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(a_2);
  goto c_7;
  a_2 :
  Return();
  r_1 :
  Epopd(4,3);
  goto o_1;
  q_1 :
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_2);
  goto c_7;
  c_2 :
  AllBuild();
  goto b_2;
  o_1 :
  Cpop();
  b_2 :
  Return();
  n_1 :
  Return();
  l_1 :
  Epopd(3,7);
  Return();
  h_1 :
  Epopd(2,3);
  goto g_1;
  e_1 :
  Cpop();
  g_1 :
  Return();
  d_1 :
  Epopd(1,1);
  Return();
  b_0 :
  Epopd(0,5);
  Return();
  a_0 :
ENDPROC

PROC(_stratego_t_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto h_7;
  h_7 :
  TestFunFC(c_1,&&fail,Egetd(0,1));
  Rpush(e_2);
  goto j_7;
  e_2 :
  goto d_2;
  j_7 :
  Return();
  d_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_3)
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl0(f_2),(ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl2(s_0,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(i_0)),(ATerm)ATmakeAppl0(c_1))));
  Ccall(_stratego_d_4);
  Tset(MakeInt(1));
  Ccall(_stratego_c_4);
ENDPROC

PROC(_stratego_v_3)
  Epushd(0,2);
  Tdupl();
  Cpush(h_2);
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Cpush(i_2);
  Tdupl();
  Rpush(j_2);
  g_8 :
  Cpush(l_2);
  Epushd(1,3);
  MoveTop(1,1);
  goto l_7;
  l_7 :
  TestFunFC(s_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_7;
  m_7 :
  TestFunFC(o_2,&&fail,Egetd(1,2));
  Rpush(n_2);
  goto h_8;
  n_2 :
  goto m_2;
  h_8 :
  Return();
  m_2 :
  Epopd(1,3);
  goto k_2;
  l_2 :
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_2);
  goto g_8;
  q_2 :
  AllBuild();
  goto p_2;
  k_2 :
  Cpop();
  p_2 :
  Return();
  j_2 :
  Cpop();
  Crestore();
  Cjump();
  i_2 :
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  AllBuild();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Rpush(r_2);
  i_8 :
  Cpush(t_2);
  Epushd(1,4);
  MoveTop(1,1);
  goto o_7;
  o_7 :
  TestFunFC(s_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto p_7;
  p_7 :
  TestFunFC(w_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_2);
  goto j_8;
  v_2 :
  goto u_2;
  j_8 :
  Move(0,2,1,3);
  Return();
  u_2 :
  Epopd(1,4);
  goto s_2;
  t_2 :
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_2);
  goto i_8;
  y_2 :
  AllBuild();
  goto x_2;
  s_2 :
  Cpop();
  x_2 :
  Return();
  r_2 :
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  AllBuild();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Rpush(z_2);
  k_8 :
  Cpush(b_3);
  Epushd(1,4);
  MoveTop(1,1);
  goto r_7;
  r_7 :
  TestFunFC(s_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto s_7;
  s_7 :
  TestFunFC(e_3,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_3);
  goto l_8;
  d_3 :
  goto c_3;
  l_8 :
  Move(0,1,1,3);
  Return();
  c_3 :
  Epopd(1,4);
  goto a_3;
  b_3 :
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_3);
  goto k_8;
  g_3 :
  AllBuild();
  goto f_3;
  a_3 :
  Cpop();
  f_3 :
  Return();
  z_2 :
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl0(f_2),(ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl2(s_0,Egetd(0,1),(ATerm)ATmakeAppl2(s_0,ATmakeString(" ("),(ATerm)ATmakeAppl2(s_0,Egetd(0,2),(ATerm)ATmakeAppl2(s_0,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(i_0))))),(ATerm)ATmakeAppl0(c_1))));
  Ccall(_stratego_d_4);
  goto g_2;
  h_2 :
  goto h_3;
  g_2 :
  Cpop();
  h_3 :
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
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Cpush(j_3);
  Rpush(k_3);
  l_9 :
  Cpush(m_3);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_8;
  n_8 :
  TestFunFC(s_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_8;
  o_8 :
  TestFunFC(p_3,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_3);
  goto m_9;
  o_3 :
  goto n_3;
  m_9 :
  Move(0,1,1,3);
  Return();
  n_3 :
  Epopd(1,4);
  goto l_3;
  m_3 :
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_3);
  goto l_9;
  r_3 :
  AllBuild();
  goto q_3;
  l_3 :
  Cpop();
  q_3 :
  Return();
  k_3 :
  goto i_3;
  j_3 :
  Tset((ATerm)ATmakeAppl0(k_4));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(k_4));
  MoveTop(0,1);
  Tpop();
  goto j_4;
  i_3 :
  Cpop();
  j_4 :
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(b_1,Egetd(0,1),(ATerm)ATmakeAppl2(b_1,Egetd(1,1),(ATerm)ATmakeAppl0(c_1))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  AllBuild();
  Cpush(p_4);
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Rpush(q_4);
  r_9 :
  Cpush(s_4);
  Epushd(1,3);
  MoveTop(1,1);
  goto u_8;
  u_8 :
  TestFunFC(s_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_8;
  v_8 :
  TestFunFC(k_5,&&fail,Egetd(1,2));
  Rpush(j_5);
  goto s_9;
  j_5 :
  goto t_4;
  s_9 :
  Return();
  t_4 :
  Epopd(1,3);
  goto r_4;
  s_4 :
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_5);
  goto r_9;
  m_5 :
  AllBuild();
  goto l_5;
  r_4 :
  Cpop();
  l_5 :
  Return();
  q_4 :
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_x_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  AllBuild();
  goto o_4;
  p_4 :
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_3);
  OneNextSon();
  Ccall(_stratego_t_3);
  AllBuild();
  AllBuild();
  goto o_5;
  o_4 :
  Cpop();
  o_5 :
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
  Cpush(y_5);
  Rpush(a_6);
  m_10 :
  Cpush(i_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_9;
  u_9 :
  TestFunFC(s_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_9;
  v_9 :
  TestFunFC(o_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(n_6);
  goto n_10;
  n_6 :
  goto j_6;
  n_10 :
  Move(0,1,1,3);
  Return();
  j_6 :
  Epopd(1,4);
  goto c_6;
  i_6 :
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_6);
  goto m_10;
  z_6 :
  AllBuild();
  goto v_6;
  c_6 :
  Cpop();
  v_6 :
  Return();
  a_6 :
  goto x_5;
  y_5 :
  Tset((ATerm)ATmakeAppl0(g_7));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(g_7));
  MoveTop(0,1);
  Tpop();
  goto a_7;
  x_5 :
  Cpop();
  a_7 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_a_4);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(b_1,Egetd(0,2),(ATerm)ATmakeAppl2(b_1,Egetd(0,3),(ATerm)ATmakeAppl0(c_1))));
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
  Rpush(k_7);
  a_11 :
  Cpush(q_7);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_10;
  t_10 :
  TestFunFC(s_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_10;
  u_10 :
  TestFunFC(e_3,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_8);
  goto b_11;
  p_8 :
  goto m_8;
  b_11 :
  Move(0,1,1,3);
  Return();
  m_8 :
  Epopd(1,4);
  goto n_7;
  q_7 :
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_8);
  goto a_11;
  r_8 :
  AllBuild();
  goto q_8;
  n_7 :
  Cpop();
  q_8 :
  Return();
  k_7 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl0(f_2),(ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl2(s_0,ATmakeString("usage : "),(ATerm)ATmakeAppl2(s_0,Egetd(0,1),(ATerm)ATmakeAppl2(s_0,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(i_0)))),(ATerm)ATmakeAppl0(c_1))));
  Ccall(_stratego_d_4);
  Tset(MakeInt(1));
  Ccall(_stratego_c_4);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_11;
  d_11 :
  TestFunFC(b_9,&&fail,Egetd(0,1));
  Rpush(t_8);
  goto f_11;
  t_8 :
  goto s_8;
  f_11 :
  Return();
  s_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_4)
  Rpush(d_9);
  k_11 :
  Cpush(f_9);
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Cpush(h_9);
  Ccall(_stratego_f_4);
  goto g_9;
  h_9 :
  Epushd(0,2);
  MoveTop(0,1);
  goto h_11;
  h_11 :
  TestFunFC(q_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(p_9);
  goto l_11;
  p_9 :
  goto o_9;
  l_11 :
  Return();
  o_9 :
  Epopd(0,2);
  goto n_9;
  g_9 :
  Cpop();
  n_9 :
  OneNextSon();
  AllBuild();
  goto e_9;
  f_9 :
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_9);
  goto k_11;
  w_9 :
  AllBuild();
  goto t_9;
  e_9 :
  Cpop();
  t_9 :
  Return();
  d_9 :
  Ccall(_stratego_e_4);
ENDPROC

PROC(_stratego_h_4)
  Epushd(0,5);
  MoveTop(0,3);
  goto z_13;
  z_13 :
  TestFunFC(s_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto a_14;
  a_14 :
  TestFunFC(s_0,&&z_9,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(h_10);
  Rpush(i_10);
  goto x_17;
  i_10 :
  goto f_10;
  h_10 :
  Ccontinue(j_10);
  Rpush(l_10);
  goto y_17;
  l_10 :
  goto f_10;
  j_10 :
  Ccontinue(o_10);
  Rpush(p_10);
  goto z_17;
  p_10 :
  goto f_10;
  o_10 :
  Ccontinue(q_10);
  Rpush(r_10);
  goto a_18;
  r_10 :
  goto f_10;
  q_10 :
  Ccontinue(s_10);
  Rpush(c_11);
  goto b_18;
  c_11 :
  goto f_10;
  s_10 :
  Ccontinue(g_11);
  Rpush(m_11);
  goto c_18;
  m_11 :
  goto f_10;
  g_11 :
  Ccontinue(n_11);
  Rpush(o_11);
  goto d_18;
  o_11 :
  goto f_10;
  n_11 :
  Ccontinue(p_11);
  Rpush(q_11);
  goto e_18;
  q_11 :
  goto f_10;
  p_11 :
  Ccontinue(r_11);
  Rpush(s_11);
  goto f_18;
  s_11 :
  goto f_10;
  r_11 :
  Ccontinue(t_11);
  Rpush(u_11);
  goto g_18;
  u_11 :
  goto f_10;
  t_11 :
  Ccontinue(v_11);
  Rpush(w_11);
  goto h_18;
  w_11 :
  goto f_10;
  v_11 :
  Ccontinue(x_11);
  Rpush(y_11);
  goto i_18;
  y_11 :
  goto f_10;
  x_11 :
  Ccontinue(z_11);
  Rpush(a_12);
  goto j_18;
  a_12 :
  goto f_10;
  z_11 :
  Ccontinue(b_12);
  Rpush(d_12);
  goto k_18;
  d_12 :
  goto f_10;
  b_12 :
  Rpush(g_12);
  goto l_18;
  g_12 :
  goto e_12;
  f_10 :
  Cpop();
  e_12 :
  goto y_9;
  z_9 :
  Cpush(j_12);
  Rpush(k_12);
  goto x_17;
  k_12 :
  goto h_12;
  j_12 :
  Ccontinue(m_12);
  Rpush(n_12);
  goto y_17;
  n_12 :
  goto h_12;
  m_12 :
  Ccontinue(p_12);
  Rpush(q_12);
  goto z_17;
  q_12 :
  goto h_12;
  p_12 :
  Ccontinue(s_12);
  Rpush(t_12);
  goto a_18;
  t_12 :
  goto h_12;
  s_12 :
  Ccontinue(u_12);
  Rpush(w_12);
  goto b_18;
  w_12 :
  goto h_12;
  u_12 :
  Ccontinue(x_12);
  Rpush(y_12);
  goto h_18;
  y_12 :
  goto h_12;
  x_12 :
  Ccontinue(a_13);
  Rpush(b_13);
  goto i_18;
  b_13 :
  goto h_12;
  a_13 :
  Ccontinue(c_13);
  Rpush(e_13);
  goto j_18;
  e_13 :
  goto h_12;
  c_13 :
  Ccontinue(f_13);
  Rpush(g_13);
  goto k_18;
  g_13 :
  goto h_12;
  f_13 :
  Rpush(j_13);
  goto l_18;
  j_13 :
  goto i_13;
  h_12 :
  Cpop();
  i_13 :
  goto y_9;
  y_9 :
  goto x_9;
  x_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_12;
  c_12 :
  TestStr(1,1,"-S",&&fail);
  Rpush(m_13);
  goto m_18;
  m_13 :
  goto k_13;
  m_18 :
  Return();
  k_13 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(o_2));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl0(o_2),Egetd(0,5)));
  Return();
  y_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_12;
  f_12 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(p_13);
  goto o_18;
  p_13 :
  goto n_13;
  o_18 :
  Return();
  n_13 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(o_2));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl0(o_2),Egetd(0,5)));
  Return();
  z_17 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_12;
  i_12 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(s_13);
  goto q_18;
  s_13 :
  goto q_13;
  q_18 :
  Return();
  q_13 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_13));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl0(t_13),Egetd(0,5)));
  Return();
  a_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_12;
  l_12 :
  TestStr(1,1,"-v",&&fail);
  Rpush(w_13);
  goto s_18;
  w_13 :
  goto v_13;
  s_18 :
  Return();
  v_13 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(y_13));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl0(y_13),Egetd(0,5)));
  Return();
  b_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_12;
  o_12 :
  TestStr(1,1,"--version",&&fail);
  Rpush(h_14);
  goto u_18;
  h_14 :
  goto g_14;
  u_18 :
  Return();
  g_14 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(y_13));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl0(y_13),Egetd(0,5)));
  Return();
  c_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_12;
  r_12 :
  TestStr(1,1,"@version",&&fail);
  Rpush(k_14);
  goto w_18;
  k_14 :
  goto j_14;
  w_18 :
  Return();
  j_14 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(l_14,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl1(l_14,Egetd(0,1)),Egetd(0,2)));
  Return();
  d_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_12;
  v_12 :
  TestStr(1,1,"-i",&&fail);
  Rpush(o_14);
  goto z_18;
  o_14 :
  goto m_14;
  z_18 :
  Return();
  m_14 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(o_6,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl1(o_6,Egetd(0,1)),Egetd(0,2)));
  Return();
  e_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_12;
  z_12 :
  TestStr(1,1,"--input",&&fail);
  Rpush(q_14);
  goto c_19;
  q_14 :
  goto p_14;
  c_19 :
  Return();
  p_14 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(o_6,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl1(o_6,Egetd(0,1)),Egetd(0,2)));
  Return();
  f_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_13;
  d_13 :
  TestStr(1,1,"-o",&&fail);
  Rpush(t_14);
  goto f_19;
  t_14 :
  goto r_14;
  f_19 :
  Return();
  r_14 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(p_3,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl1(p_3,Egetd(0,1)),Egetd(0,2)));
  Return();
  g_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_13;
  h_13 :
  TestStr(1,1,"--output",&&fail);
  Rpush(v_14);
  goto i_19;
  v_14 :
  goto u_14;
  i_19 :
  Return();
  u_14 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(p_3,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl1(p_3,Egetd(0,1)),Egetd(0,2)));
  Return();
  h_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_13;
  l_13 :
  TestStr(1,1,"-b",&&fail);
  Rpush(y_14);
  goto l_19;
  y_14 :
  goto w_14;
  l_19 :
  Return();
  w_14 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(k_5));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl0(k_5),Egetd(0,5)));
  Return();
  i_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_13;
  o_13 :
  TestStr(1,1,"-s",&&fail);
  Rpush(a_15);
  goto n_19;
  a_15 :
  goto z_14;
  n_19 :
  Return();
  z_14 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_15));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl0(b_15),Egetd(0,5)));
  Return();
  j_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_13;
  r_13 :
  TestStr(1,1,"--help",&&fail);
  Rpush(d_15);
  goto p_19;
  d_15 :
  goto c_15;
  p_19 :
  Return();
  c_15 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_9));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl0(b_9),Egetd(0,5)));
  Return();
  k_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_13;
  u_13 :
  TestStr(1,1,"-h",&&fail);
  Rpush(g_15);
  goto r_19;
  g_15 :
  goto f_15;
  r_19 :
  Return();
  f_15 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_9));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl0(b_9),Egetd(0,5)));
  Return();
  l_18 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_13;
  x_13 :
  TestStr(1,1,"-?",&&fail);
  Rpush(i_15);
  goto t_19;
  i_15 :
  goto h_15;
  t_19 :
  Return();
  h_15 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_9));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl0(b_9),Egetd(0,5)));
  Return();
  x_9 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_i_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_19;
  w_19 :
  TestFunFC(i_0,&&fail,Egetd(0,1));
  Rpush(k_15);
  goto y_19;
  k_15 :
  goto j_15;
  y_19 :
  Return();
  j_15 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(e_3,Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(l_15);
  b_21 :
  Cpush(o_15);
  Cpush(q_15);
  Ccall(_stratego_i_4);
  goto p_15;
  q_15 :
  Ccall(_stratego_h_4);
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_15);
  goto b_21;
  s_15 :
  AllBuild();
  goto r_15;
  p_15 :
  Cpop();
  r_15 :
  goto m_15;
  o_15 :
  Epushd(0,3);
  MoveTop(0,1);
  goto b_20;
  b_20 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(w_15);
  goto c_21;
  w_15 :
  goto u_15;
  c_21 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl1(q_9,Egetd(0,2)),Egetd(0,3)));
  Return();
  u_15 :
  Epopd(0,3);
  goto t_15;
  m_15 :
  Cpop();
  t_15 :
  Return();
  l_15 :
  AllBuild();
  Cpush(y_15);
  Ccall(_stratego_g_4);
  goto x_15;
  y_15 :
  Ccontinue(z_15);
  Epushd(0,6);
  Ccall(_stratego_b_4);
  Tdupl();
  Ccall(_stratego_z_3);
  Tpop();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  Ccall(_stratego_s_3);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(a_16,(ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl1(b_16,Egetd(1,1)),(ATerm)ATmakeAppl0(i_0))));
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
  goto f_20;
  f_20 :
  TestFunFC(b_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto g_20;
  g_20 :
  TestFunFC(b_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto h_20;
  h_20 :
  TestFunFC(c_1,&&fail,Egetd(0,6));
  Rpush(e_16);
  goto f_21;
  e_16 :
  goto c_16;
  f_21 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(b_1,(ATerm)ATmakeAppl2(s_0,(ATerm)ATmakeAppl1(w_2,Egetd(0,1)),Egetd(0,3)),(ATerm)ATmakeAppl2(b_1,Egetd(0,5),(ATerm)ATmakeAppl0(c_1))));
  Return();
  c_16 :
  Ccall(_stratego_y_3);
  Ccall(_stratego_v_3);
  Epopd(0,6);
  goto x_15;
  z_15 :
  Ccall(_stratego_u_3);
  goto f_16;
  x_15 :
  Cpop();
  f_16 :
ENDPROC

DOIT

