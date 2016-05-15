#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,c_1);
VARDECL(AFun,b_1);
VARDECL(AFun,a_1);
VARDECL(AFun,v_0);
VARDECL(AFun,u_0);
VARDECL(AFun,t_0);
VARDECL(AFun,l_0);
VARDECL(AFun,k_0);
VARDECL(AFun,j_0);
VARDECL(AFun,h_0);
VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
VARDECL(AFun,e_0);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(c_1,ATmakeAFun("Nil",0,0));
  MOVE(b_1,ATmakeAFun("Cons",2,0));
  MOVE(a_1,ATmakeAFun("stderr",0,0));
  MOVE(v_0,ATmakeAFun("Ann",2,0));
  MOVE(u_0,ATmakeAFun("TNil",0,0));
  MOVE(t_0,ATmakeAFun("TCons",2,0));
  MOVE(l_0,ATmakeAFun("C",0,0));
  MOVE(k_0,ATmakeAFun("B",0,0));
  MOVE(j_0,ATmakeAFun("H",1,0));
  MOVE(h_0,ATmakeAFun("A",0,0));
  MOVE(g_0,ATmakeAFun("G",1,0));
  MOVE(f_0,ATmakeAFun("F",3,0));
  MOVE(e_0,ATmakeAFun("Pair",2,0));
ENDPROC

PROC(_stratego_q_3)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("postorder-number"));
  Ccall(_stratego_u_3);
  Tpop();
  Cpush(b_0);
  Tdupl();
  Cpush(d_0);
  Epushd(1,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl3(f_0,(ATerm)ATmakeAppl1(g_0,(ATerm)ATmakeAppl0(h_0)),(ATerm)ATmakeAppl1(j_0,(ATerm)ATmakeAppl0(k_0)),(ATerm)ATmakeAppl0(l_0)),MakeInt(0)));
  Rpush(m_0);
  k_5 :
  Epushd(2,3);
  ThreadInit();
  o_0 :
  ThreadNextSon(&&q_0);
  Rpush(r_0);
  goto k_5;
  r_0 :
  ThreadSetEnv();
  goto o_0;
  q_0 :
  ThreadBuild();
  MoveTop(2,1);
  goto p_0;
  p_0 :
  TestFunFC(e_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(s_0);
  goto i_0;
  s_0 :
  goto n_0;
  i_0 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,3),(ATerm)ATmakeAppl2(t_0,MakeInt(1),(ATerm)ATmakeAppl0(u_0))));
  Ccall(_stratego_s_3);
  MoveTop(3,1);
  NotNULLd(2,3);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(v_0,Egetd(2,3),Egetd(2,2)),Egetd(3,1)));
  Epopd(3,1);
  Return();
  n_0 :
  Epopd(2,3);
  Return();
  m_0 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto c_0;
  d_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_u_3);
  Ccall(_stratego_t_3);
  goto w_0;
  c_0 :
  Cpop();
  w_0 :
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(v_0,MakeInt(5),(ATerm)ATmakeAppl3(f_0,(ATerm)ATmakeAppl2(v_0,MakeInt(1),(ATerm)ATmakeAppl1(g_0,(ATerm)ATmakeAppl2(v_0,MakeInt(0),(ATerm)ATmakeAppl0(h_0)))),(ATerm)ATmakeAppl2(v_0,MakeInt(3),(ATerm)ATmakeAppl1(j_0,(ATerm)ATmakeAppl2(v_0,MakeInt(2),(ATerm)ATmakeAppl0(k_0)))),(ATerm)ATmakeAppl2(v_0,MakeInt(4),(ATerm)ATmakeAppl0(l_0)))),MakeInt(6)));
  Tdupl();
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(v_0,MakeInt(5),(ATerm)ATmakeAppl3(f_0,(ATerm)ATmakeAppl2(v_0,MakeInt(1),(ATerm)ATmakeAppl1(g_0,(ATerm)ATmakeAppl2(v_0,MakeInt(0),(ATerm)ATmakeAppl0(h_0)))),(ATerm)ATmakeAppl2(v_0,MakeInt(3),(ATerm)ATmakeAppl1(j_0,(ATerm)ATmakeAppl2(v_0,MakeInt(2),(ATerm)ATmakeAppl0(k_0)))),(ATerm)ATmakeAppl2(v_0,MakeInt(4),(ATerm)ATmakeAppl0(l_0)))),MakeInt(6)));
  MoveTop(0,2);
  Tpop();
  Cpush(y_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto x_0;
  y_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(a_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(b_1,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(b_1,Egetd(1,1),(ATerm)ATmakeAppl0(c_1))),(ATerm)ATmakeAppl0(u_0))));
  Ccall(_stratego_d_4);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(a_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(b_1,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(b_1,Egetd(1,1),(ATerm)ATmakeAppl0(c_1))),(ATerm)ATmakeAppl0(u_0))));
  Ccall(_stratego_d_4);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_t_3);
  goto z_0;
  x_0 :
  Cpop();
  z_0 :
  Tpop();
  Ccall(_stratego_w_3);
  goto a_0;
  b_0 :
  Ccall(_stratego_v_3);
  goto d_1;
  a_0 :
  Cpop();
  d_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_r_3)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("preorder-number"));
  Ccall(_stratego_u_3);
  Tpop();
  Cpush(f_1);
  Tdupl();
  Cpush(h_1);
  Epushd(1,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl3(f_0,(ATerm)ATmakeAppl1(g_0,(ATerm)ATmakeAppl0(h_0)),(ATerm)ATmakeAppl1(j_0,(ATerm)ATmakeAppl0(k_0)),(ATerm)ATmakeAppl0(l_0)),MakeInt(0)));
  Rpush(i_1);
  y_7 :
  Epushd(2,3);
  MoveTop(2,1);
  goto s_5;
  s_5 :
  TestFunFC(e_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(k_1);
  goto m_5;
  k_1 :
  goto j_1;
  m_5 :
  Epushd(3,7);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,3),(ATerm)ATmakeAppl2(t_0,MakeInt(1),(ATerm)ATmakeAppl0(u_0))));
  Ccall(_stratego_s_3);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(2,2),Egetd(3,1)));
  ThreadInit();
  l_1 :
  ThreadNextSon(&&m_1);
  Rpush(n_1);
  goto y_7;
  n_1 :
  ThreadSetEnv();
  goto l_1;
  m_1 :
  ThreadBuild();
  MoveTop(3,2);
  NotNULLd(2,3);
  NotNULLd(3,2);
  Tset((ATerm)ATmakeAppl2(v_0,Egetd(2,3),Egetd(3,2)));
  MoveTop(3,3);
  goto q_5;
  q_5 :
  TestFunFC(v_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto r_5;
  r_5 :
  TestFunFC(e_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(p_1);
  goto p_5;
  p_1 :
  goto o_1;
  p_5 :
  NotNULLd(3,4);
  NotNULLd(3,6);
  NotNULLd(3,7);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(v_0,Egetd(3,4),Egetd(3,6)),Egetd(3,7)));
  Return();
  o_1 :
  Epopd(3,7);
  Return();
  j_1 :
  Epopd(2,3);
  Return();
  i_1 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto g_1;
  h_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_u_3);
  Ccall(_stratego_t_3);
  goto q_1;
  g_1 :
  Cpop();
  q_1 :
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(v_0,MakeInt(0),(ATerm)ATmakeAppl3(f_0,(ATerm)ATmakeAppl2(v_0,MakeInt(1),(ATerm)ATmakeAppl1(g_0,(ATerm)ATmakeAppl2(v_0,MakeInt(2),(ATerm)ATmakeAppl0(h_0)))),(ATerm)ATmakeAppl2(v_0,MakeInt(3),(ATerm)ATmakeAppl1(j_0,(ATerm)ATmakeAppl2(v_0,MakeInt(4),(ATerm)ATmakeAppl0(k_0)))),(ATerm)ATmakeAppl2(v_0,MakeInt(5),(ATerm)ATmakeAppl0(l_0)))),MakeInt(6)));
  Tdupl();
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(v_0,MakeInt(0),(ATerm)ATmakeAppl3(f_0,(ATerm)ATmakeAppl2(v_0,MakeInt(1),(ATerm)ATmakeAppl1(g_0,(ATerm)ATmakeAppl2(v_0,MakeInt(2),(ATerm)ATmakeAppl0(h_0)))),(ATerm)ATmakeAppl2(v_0,MakeInt(3),(ATerm)ATmakeAppl1(j_0,(ATerm)ATmakeAppl2(v_0,MakeInt(4),(ATerm)ATmakeAppl0(k_0)))),(ATerm)ATmakeAppl2(v_0,MakeInt(5),(ATerm)ATmakeAppl0(l_0)))),MakeInt(6)));
  MoveTop(0,2);
  Tpop();
  Cpush(s_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto r_1;
  s_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(a_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(b_1,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(b_1,Egetd(1,1),(ATerm)ATmakeAppl0(c_1))),(ATerm)ATmakeAppl0(u_0))));
  Ccall(_stratego_d_4);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(a_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(b_1,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(b_1,Egetd(1,1),(ATerm)ATmakeAppl0(c_1))),(ATerm)ATmakeAppl0(u_0))));
  Ccall(_stratego_d_4);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_t_3);
  goto t_1;
  r_1 :
  Cpop();
  t_1 :
  Tpop();
  Ccall(_stratego_w_3);
  goto e_1;
  f_1 :
  Ccall(_stratego_v_3);
  goto u_1;
  e_1 :
  Cpop();
  u_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_s_3)
  _ST_add();
ENDPROC

PROC(_stratego_t_3)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto b_8;
  b_8 :
  TestFunFC(t_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto c_8;
  c_8 :
  TestFunFC(t_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto d_8;
  d_8 :
  TestFunFC(u_0,&&fail,Egetd(0,6));
  Rpush(w_1);
  goto a_8;
  w_1 :
  goto v_1;
  a_8 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  v_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_u_3)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(a_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(b_1,Egetd(0,1),(ATerm)ATmakeAppl0(c_1)),(ATerm)ATmakeAppl0(u_0))));
  Ccall(_stratego_d_4);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_v_3)
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,MakeInt(1),(ATerm)ATmakeAppl0(u_0))));
  Ccall(_stratego_s_3);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_a_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_w_3)
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,MakeInt(1),(ATerm)ATmakeAppl0(u_0))));
  Ccall(_stratego_s_3);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_x_3)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("simple-test"));
  Ccall(_stratego_u_3);
  Tpop();
  Cpush(y_1);
  Tdupl();
  Cpush(a_2);
  Epushd(1,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl3(f_0,(ATerm)ATmakeAppl1(g_0,(ATerm)ATmakeAppl0(h_0)),(ATerm)ATmakeAppl1(j_0,(ATerm)ATmakeAppl0(k_0)),(ATerm)ATmakeAppl0(l_0)),MakeInt(0)));
  ThreadInit();
  b_2 :
  ThreadNextSon(&&c_2);
  Epushd(2,3);
  MoveTop(2,1);
  goto g_9;
  g_9 :
  TestFunFC(e_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(e_2);
  goto e_9;
  e_2 :
  goto d_2;
  e_9 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,3),(ATerm)ATmakeAppl2(t_0,MakeInt(1),(ATerm)ATmakeAppl0(u_0))));
  Ccall(_stratego_s_3);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(2,2),Egetd(3,1)));
  Epopd(3,1);
  Return();
  d_2 :
  Epopd(2,3);
  ThreadSetEnv();
  goto b_2;
  c_2 :
  ThreadBuild();
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto z_1;
  a_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_u_3);
  Ccall(_stratego_t_3);
  goto f_2;
  z_1 :
  Cpop();
  f_2 :
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl3(f_0,(ATerm)ATmakeAppl1(g_0,(ATerm)ATmakeAppl0(h_0)),(ATerm)ATmakeAppl1(j_0,(ATerm)ATmakeAppl0(k_0)),(ATerm)ATmakeAppl0(l_0)),MakeInt(3)));
  Tdupl();
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl3(f_0,(ATerm)ATmakeAppl1(g_0,(ATerm)ATmakeAppl0(h_0)),(ATerm)ATmakeAppl1(j_0,(ATerm)ATmakeAppl0(k_0)),(ATerm)ATmakeAppl0(l_0)),MakeInt(3)));
  MoveTop(0,2);
  Tpop();
  Cpush(h_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto g_2;
  h_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(a_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(b_1,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(b_1,Egetd(1,1),(ATerm)ATmakeAppl0(c_1))),(ATerm)ATmakeAppl0(u_0))));
  Ccall(_stratego_d_4);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(a_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(b_1,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(b_1,Egetd(1,1),(ATerm)ATmakeAppl0(c_1))),(ATerm)ATmakeAppl0(u_0))));
  Ccall(_stratego_d_4);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_t_3);
  goto i_2;
  g_2 :
  Cpop();
  i_2 :
  Tpop();
  Ccall(_stratego_w_3);
  goto x_1;
  y_1 :
  Ccall(_stratego_v_3);
  goto j_2;
  x_1 :
  Cpop();
  j_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_y_3)
  _ST_exit();
ENDPROC

PROC(_stratego_z_3)
  Cpush(l_2);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto d_11;
  d_11 :
  TestInt(0,1,0,&&fail);
  Rpush(n_2);
  goto c_11;
  n_2 :
  goto m_2;
  c_11 :
  Return();
  m_2 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_a_4);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_y_3);
  goto k_2;
  l_2 :
  Tset(MakeInt(1));
  Ccall(_stratego_y_3);
  goto o_2;
  k_2 :
  Cpop();
  o_2 :
ENDPROC

PROC(_stratego_a_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_11;
  g_11 :
  TestFunFC(u_0,&&fail,Egetd(0,1));
  Rpush(q_2);
  goto f_11;
  q_2 :
  goto p_2;
  f_11 :
  Return();
  p_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_4)
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(a_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(b_1,ATmakeString("successes: "),(ATerm)ATmakeAppl2(b_1,Egetd(0,1),(ATerm)ATmakeAppl0(c_1))),(ATerm)ATmakeAppl0(u_0))));
  Ccall(_stratego_d_4);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(a_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(b_1,ATmakeString("failures: "),(ATerm)ATmakeAppl2(b_1,Egetd(0,1),(ATerm)ATmakeAppl0(c_1))),(ATerm)ATmakeAppl0(u_0))));
  Ccall(_stratego_d_4);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_a_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_c_4)
  Tset((ATerm)ATmakeAppl2(t_0,MakeInt(0),(ATerm)ATmakeAppl2(t_0,MakeInt(0),(ATerm)ATmakeAppl0(u_0))));
ENDPROC

PROC(_stratego_d_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("thread-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(a_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(b_1,ATmakeString("test suite: "),(ATerm)ATmakeAppl2(b_1,Egetd(0,1),(ATerm)ATmakeAppl0(c_1))),(ATerm)ATmakeAppl0(u_0))));
  Ccall(_stratego_d_4);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_c_4);
  Ccall(_stratego_x_3);
  Ccall(_stratego_r_3);
  Ccall(_stratego_q_3);
  Ccall(_stratego_b_4);
  Ccall(_stratego_z_3);
ENDPROC

DOIT

