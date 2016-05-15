#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,u_1);
VARDECL(AFun,o_1);
VARDECL(AFun,g_1);
VARDECL(AFun,f_1);
VARDECL(AFun,e_1);
VARDECL(AFun,d_1);
VARDECL(AFun,c_1);
VARDECL(AFun,p_0);
VARDECL(AFun,i_0);
VARDECL(AFun,h_0);
VARDECL(AFun,g_0);
PROCDECL(_stratego_n_2);
PROCDECL(_stratego_o_2);
PROCDECL(_stratego_p_2);
PROCDECL(_stratego_q_2);
PROCDECL(_stratego_r_2);
PROCDECL(_stratego_s_2);
PROCDECL(_stratego_t_2);
PROCDECL(_stratego_u_2);
PROCDECL(_stratego_v_2);
PROCDECL(_stratego_w_2);
PROCDECL(_stratego_x_2);
PROCDECL(_stratego_y_2);
PROCDECL(_stratego_z_2);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(u_1,ATmakeAFun("C",0,0));
  MOVE(o_1,ATmakeAFun("G",2,0));
  MOVE(g_1,ATmakeAFun("TNil",0,0));
  MOVE(f_1,ATmakeAFun("Nil",0,0));
  MOVE(e_1,ATmakeAFun("Cons",2,0));
  MOVE(d_1,ATmakeAFun("stderr",0,0));
  MOVE(c_1,ATmakeAFun("TCons",2,0));
  MOVE(p_0,ATmakeAFun("B",0,0));
  MOVE(i_0,ATmakeAFun("D",0,0));
  MOVE(h_0,ATmakeAFun("A",0,0));
  MOVE(g_0,ATmakeAFun("F",2,0));
ENDPROC

PROC(_stratego_n_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("failure-in-case2"));
  Ccall(_stratego_p_2);
  Tpop();
  Cpush(b_0);
  Tdupl();
  Cpush(d_0);
  Epushd(1,4);
  Tset((ATerm)ATmakeAppl2(g_0,(ATerm)ATmakeAppl0(h_0),(ATerm)ATmakeAppl0(i_0)));
  MoveTop(1,1);
  goto l_0;
  l_0 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_0;
  m_0 :
  TestFunFC(p_0,&&o_0,Egetd(1,3));
  goto w_0;
  w_0 :
  TestFunFC(h_0,&&q_0,Egetd(1,2));
  Cpush(s_0);
  Rpush(t_0);
  goto e_0;
  t_0 :
  goto r_0;
  s_0 :
  Rpush(v_0);
  goto f_0;
  v_0 :
  goto u_0;
  r_0 :
  Cpop();
  u_0 :
  goto n_0;
  q_0 :
  Rpush(n_0);
  goto f_0;
  o_0 :
  goto z_0;
  z_0 :
  TestFunFC(h_0,&&fail,Egetd(1,2));
  Rpush(n_0);
  goto e_0;
  n_0 :
  goto k_0;
  f_0 :
  Tset((ATerm)ATmakeAppl0(p_0));
  Return();
  k_0 :
  goto j_0;
  e_0 :
  Tset((ATerm)ATmakeAppl0(h_0));
  Return();
  j_0 :
  MoveTop(1,4);
  Move(0,1,1,4);
  Epopd(1,4);
  goto c_0;
  d_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_p_2);
  Ccall(_stratego_o_2);
  goto x_0;
  c_0 :
  Cpop();
  x_0 :
  Tset((ATerm)ATmakeAppl0(h_0));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(h_0));
  MoveTop(0,2);
  Tpop();
  Cpush(a_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto y_0;
  a_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(d_1),(ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl2(e_1,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(e_1,Egetd(1,1),(ATerm)ATmakeAppl0(f_1))),(ATerm)ATmakeAppl0(g_1))));
  Ccall(_stratego_z_2);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(d_1),(ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl2(e_1,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(e_1,Egetd(1,1),(ATerm)ATmakeAppl0(f_1))),(ATerm)ATmakeAppl0(g_1))));
  Ccall(_stratego_z_2);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_o_2);
  goto b_1;
  y_0 :
  Cpop();
  b_1 :
  Tpop();
  Ccall(_stratego_s_2);
  goto a_0;
  b_0 :
  Ccall(_stratego_q_2);
  goto h_1;
  a_0 :
  Cpop();
  h_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_o_2)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto j_4;
  j_4 :
  TestFunFC(c_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto k_4;
  k_4 :
  TestFunFC(c_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto l_4;
  l_4 :
  TestFunFC(g_1,&&fail,Egetd(0,6));
  Rpush(j_1);
  goto i_4;
  j_1 :
  goto i_1;
  i_4 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  i_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_p_2)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(d_1),(ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl2(e_1,Egetd(0,1),(ATerm)ATmakeAppl0(f_1)),(ATerm)ATmakeAppl0(g_1))));
  Ccall(_stratego_z_2);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_q_2)
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_1,Egetd(0,1),(ATerm)ATmakeAppl2(c_1,MakeInt(1),(ATerm)ATmakeAppl0(g_1))));
  Ccall(_stratego_r_2);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_w_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_r_2)
  _ST_add();
ENDPROC

PROC(_stratego_s_2)
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_1,Egetd(0,1),(ATerm)ATmakeAppl2(c_1,MakeInt(1),(ATerm)ATmakeAppl0(g_1))));
  Ccall(_stratego_r_2);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_w_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_t_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("failure-in-case1"));
  Ccall(_stratego_p_2);
  Tpop();
  Cpush(l_1);
  Tdupl();
  Cpush(n_1);
  Epushd(1,6);
  Tset((ATerm)ATmakeAppl2(g_0,(ATerm)ATmakeAppl0(h_0),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl0(p_0),(ATerm)ATmakeAppl0(i_0))));
  MoveTop(1,1);
  goto n_5;
  n_5 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_5;
  o_5 :
  TestFunFC(o_1,&&s_1,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto p_5;
  p_5 :
  TestFunFC(u_1,&&t_1,Egetd(1,5));
  goto q_5;
  q_5 :
  TestFunFC(p_0,&&v_1,Egetd(1,4));
  goto r_5;
  r_5 :
  TestFunFC(h_0,&&w_1,Egetd(1,2));
  Cpush(y_1);
  Rpush(z_1);
  goto l_5;
  z_1 :
  goto x_1;
  y_1 :
  Rpush(b_2);
  goto m_5;
  b_2 :
  goto a_2;
  x_1 :
  Cpop();
  a_2 :
  goto r_1;
  w_1 :
  Rpush(r_1);
  goto m_5;
  v_1 :
  goto s_5;
  s_5 :
  TestFunFC(h_0,&&fail,Egetd(1,2));
  Rpush(r_1);
  goto l_5;
  t_1 :
  goto t_5;
  t_5 :
  c_2 :
  goto s_5;
  s_1 :
  goto s_5;
  r_1 :
  goto q_1;
  m_5 :
  Tset((ATerm)ATmakeAppl0(p_0));
  Return();
  q_1 :
  goto p_1;
  l_5 :
  Tset((ATerm)ATmakeAppl0(h_0));
  Return();
  p_1 :
  MoveTop(1,6);
  Move(0,1,1,6);
  Epopd(1,6);
  goto m_1;
  n_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_p_2);
  Ccall(_stratego_o_2);
  goto d_2;
  m_1 :
  Cpop();
  d_2 :
  Tset((ATerm)ATmakeAppl0(h_0));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(h_0));
  MoveTop(0,2);
  Tpop();
  Cpush(f_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto e_2;
  f_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(d_1),(ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl2(e_1,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(e_1,Egetd(1,1),(ATerm)ATmakeAppl0(f_1))),(ATerm)ATmakeAppl0(g_1))));
  Ccall(_stratego_z_2);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(d_1),(ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl2(e_1,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(e_1,Egetd(1,1),(ATerm)ATmakeAppl0(f_1))),(ATerm)ATmakeAppl0(g_1))));
  Ccall(_stratego_z_2);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_o_2);
  goto g_2;
  e_2 :
  Cpop();
  g_2 :
  Tpop();
  Ccall(_stratego_s_2);
  goto k_1;
  l_1 :
  Ccall(_stratego_q_2);
  goto h_2;
  k_1 :
  Cpop();
  h_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_u_2)
  _ST_exit();
ENDPROC

PROC(_stratego_v_2)
  Cpush(j_2);
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto o_7;
  o_7 :
  TestInt(0,1,0,&&fail);
  Rpush(l_2);
  goto n_7;
  l_2 :
  goto k_2;
  n_7 :
  Return();
  k_2 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_w_2);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_u_2);
  goto i_2;
  j_2 :
  Tset(MakeInt(1));
  Ccall(_stratego_u_2);
  goto m_2;
  i_2 :
  Cpop();
  m_2 :
ENDPROC

PROC(_stratego_w_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_7;
  r_7 :
  TestFunFC(g_1,&&fail,Egetd(0,1));
  Rpush(b_3);
  goto q_7;
  b_3 :
  goto a_3;
  q_7 :
  Return();
  a_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_2)
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(d_1),(ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl2(e_1,ATmakeString("successes: "),(ATerm)ATmakeAppl2(e_1,Egetd(0,1),(ATerm)ATmakeAppl0(f_1))),(ATerm)ATmakeAppl0(g_1))));
  Ccall(_stratego_z_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(c_1);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(d_1),(ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl2(e_1,ATmakeString("failures: "),(ATerm)ATmakeAppl2(e_1,Egetd(0,1),(ATerm)ATmakeAppl0(f_1))),(ATerm)ATmakeAppl0(g_1))));
  Ccall(_stratego_z_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_w_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_y_2)
  Tset((ATerm)ATmakeAppl2(c_1,MakeInt(0),(ATerm)ATmakeAppl2(c_1,MakeInt(0),(ATerm)ATmakeAppl0(g_1))));
ENDPROC

PROC(_stratego_z_2)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("match-automaton-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl0(d_1),(ATerm)ATmakeAppl2(c_1,(ATerm)ATmakeAppl2(e_1,ATmakeString("test suite: "),(ATerm)ATmakeAppl2(e_1,Egetd(0,1),(ATerm)ATmakeAppl0(f_1))),(ATerm)ATmakeAppl0(g_1))));
  Ccall(_stratego_z_2);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_y_2);
  Ccall(_stratego_t_2);
  Ccall(_stratego_n_2);
  Ccall(_stratego_x_2);
  Ccall(_stratego_v_2);
ENDPROC

DOIT

