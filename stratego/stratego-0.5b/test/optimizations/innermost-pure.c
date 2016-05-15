#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,o_0);
VARDECL(AFun,n_0);
VARDECL(AFun,m_0);
VARDECL(AFun,h_0);
VARDECL(AFun,g_0);
VARDECL(AFun,e_0);
VARDECL(AFun,d_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_i_2);
PROCDECL(_stratego_j_2);
PROCDECL(_stratego_k_2);
PROCDECL(_stratego_l_2);
PROCDECL(_stratego_m_2);
PROCDECL(_stratego_n_2);
PROCDECL(_stratego_o_2);
PROCDECL(_stratego_p_2);
PROCDECL(_stratego_q_2);
PROCDECL(_stratego_r_2);
PROCDECL(_stratego_s_2);
PROCDECL(_stratego_t_2);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(o_0,ATmakeAFun("Zero",0,0));
  MOVE(n_0,ATmakeAFun("Succ",1,0));
  MOVE(m_0,ATmakeAFun("Plus",2,0));
  MOVE(h_0,ATmakeAFun("Nil",0,0));
  MOVE(g_0,ATmakeAFun("Cons",2,0));
  MOVE(e_0,ATmakeAFun("stderr",0,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(c_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_i_2)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto y_0;
  y_0 :
  TestFunFC(c_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto z_0;
  z_0 :
  TestFunFC(c_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto a_1;
  a_1 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(b_0);
  goto f_0;
  b_0 :
  goto a_0;
  f_0 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  a_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_j_2)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(g_0,Egetd(0,1),(ATerm)ATmakeAppl0(h_0)),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_t_2);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_k_2)
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl2(c_0,MakeInt(1),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_l_2);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_q_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_l_2)
  _ST_add();
ENDPROC

PROC(_stratego_m_2)
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl2(c_0,MakeInt(1),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_l_2);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_q_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_n_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_j_2);
  Tpop();
  Cpush(j_0);
  Tdupl();
  Cpush(l_0);
  Epushd(1,1);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(n_0,(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(n_0,(ATerm)ATmakeAppl0(o_0)),(ATerm)ATmakeAppl1(n_0,(ATerm)ATmakeAppl0(o_0)))),(ATerm)ATmakeAppl1(n_0,(ATerm)ATmakeAppl0(o_0))));
  Cpush(q_0);
  Rpush(r_0);
  t_5 :
  AllInit();
  s_0 :
  AllNextSon(&&t_0);
  Rpush(u_0);
  goto t_5;
  u_0 :
  goto s_0;
  t_0 :
  AllBuild();
  Rpush(v_0);
  u_5 :
  Cpush(x_0);
  Epushd(2,4);
  MoveTop(2,1);
  goto n_3;
  n_3 :
  TestFunFC(m_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto o_3;
  o_3 :
  TestFunFC(o_0,&&e_1,Egetd(2,2));
  Rpush(d_1);
  goto l_3;
  e_1 :
  TestFunFC(n_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(d_1);
  goto m_3;
  d_1 :
  goto c_1;
  m_3 :
  NotNULLd(2,3);
  NotNULLd(2,4);
  Tset((ATerm)ATmakeAppl1(n_0,(ATerm)ATmakeAppl2(m_0,Egetd(2,3),Egetd(2,4))));
  Return();
  c_1 :
  goto b_1;
  l_3 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Return();
  b_1 :
  Cpush(h_1);
  Rpush(i_1);
  v_5 :
  AllInit();
  j_1 :
  AllNextSon(&&k_1);
  Rpush(l_1);
  goto v_5;
  l_1 :
  goto j_1;
  k_1 :
  AllBuild();
  Rpush(m_1);
  goto u_5;
  m_1 :
  Return();
  i_1 :
  goto f_1;
  h_1 :
  Rpush(q_1);
  w_5 :
  AllInit();
  r_1 :
  AllNextSon(&&s_1);
  Rpush(t_1);
  goto w_5;
  t_1 :
  goto r_1;
  s_1 :
  AllBuild();
  Rpush(w_1);
  goto u_5;
  w_1 :
  Return();
  q_1 :
  goto p_1;
  f_1 :
  Cpop();
  p_1 :
  Epopd(2,4);
  goto w_0;
  x_0 :
  goto x_1;
  w_0 :
  Cpop();
  x_1 :
  Return();
  v_0 :
  Return();
  r_0 :
  goto p_0;
  q_0 :
  Rpush(z_1);
  x_5 :
  AllInit();
  a_2 :
  AllNextSon(&&c_2);
  Rpush(d_2);
  goto x_5;
  d_2 :
  goto a_2;
  c_2 :
  AllBuild();
  Rpush(e_2);
  y_5 :
  Cpush(g_2);
  Epushd(2,4);
  MoveTop(2,1);
  goto r_3;
  r_3 :
  TestFunFC(m_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto s_3;
  s_3 :
  TestFunFC(o_0,&&w_2,Egetd(2,2));
  Rpush(v_2);
  goto p_3;
  w_2 :
  TestFunFC(n_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(v_2);
  goto q_3;
  v_2 :
  goto u_2;
  q_3 :
  NotNULLd(2,3);
  NotNULLd(2,4);
  Tset((ATerm)ATmakeAppl1(n_0,(ATerm)ATmakeAppl2(m_0,Egetd(2,3),Egetd(2,4))));
  Return();
  u_2 :
  goto h_2;
  p_3 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Return();
  h_2 :
  Cpush(z_2);
  Rpush(a_3);
  z_5 :
  AllInit();
  b_3 :
  AllNextSon(&&c_3);
  Rpush(d_3);
  goto z_5;
  d_3 :
  goto b_3;
  c_3 :
  AllBuild();
  Rpush(e_3);
  goto y_5;
  e_3 :
  Return();
  a_3 :
  goto y_2;
  z_2 :
  Rpush(h_3);
  a_6 :
  AllInit();
  i_3 :
  AllNextSon(&&k_3);
  Rpush(t_3);
  goto a_6;
  t_3 :
  goto i_3;
  k_3 :
  AllBuild();
  Rpush(u_3);
  goto y_5;
  u_3 :
  Return();
  h_3 :
  goto f_3;
  y_2 :
  Cpop();
  f_3 :
  Epopd(2,4);
  goto f_2;
  g_2 :
  goto v_3;
  f_2 :
  Cpop();
  v_3 :
  Return();
  e_2 :
  Return();
  z_1 :
  goto y_1;
  p_0 :
  Cpop();
  y_1 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto k_0;
  l_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_j_2);
  Ccall(_stratego_i_2);
  goto w_3;
  k_0 :
  Cpop();
  w_3 :
  Tset((ATerm)ATmakeAppl1(n_0,(ATerm)ATmakeAppl1(n_0,(ATerm)ATmakeAppl1(n_0,(ATerm)ATmakeAppl1(n_0,(ATerm)ATmakeAppl0(o_0))))));
  Tdupl();
  Tset((ATerm)ATmakeAppl1(n_0,(ATerm)ATmakeAppl1(n_0,(ATerm)ATmakeAppl1(n_0,(ATerm)ATmakeAppl1(n_0,(ATerm)ATmakeAppl0(o_0))))));
  MoveTop(0,2);
  Tpop();
  Cpush(y_3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto x_3;
  y_3 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(g_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(g_0,Egetd(1,1),(ATerm)ATmakeAppl0(h_0))),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_t_2);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(g_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(g_0,Egetd(1,1),(ATerm)ATmakeAppl0(h_0))),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_t_2);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_i_2);
  goto z_3;
  x_3 :
  Cpop();
  z_3 :
  Tpop();
  Ccall(_stratego_m_2);
  goto i_0;
  j_0 :
  Ccall(_stratego_k_2);
  goto a_4;
  i_0 :
  Cpop();
  a_4 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_o_2)
  _ST_exit();
ENDPROC

PROC(_stratego_p_2)
  Cpush(c_4);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto c_6;
  c_6 :
  TestInt(0,1,0,&&fail);
  Rpush(e_4);
  goto b_6;
  e_4 :
  goto d_4;
  b_6 :
  Return();
  d_4 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_q_2);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_o_2);
  goto b_4;
  c_4 :
  Tset(MakeInt(1));
  Ccall(_stratego_o_2);
  goto f_4;
  b_4 :
  Cpop();
  f_4 :
ENDPROC

PROC(_stratego_q_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_6;
  f_6 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(n_4);
  goto e_6;
  n_4 :
  goto m_4;
  e_6 :
  Return();
  m_4 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_2)
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(g_0,ATmakeString("successes: "),(ATerm)ATmakeAppl2(g_0,Egetd(0,1),(ATerm)ATmakeAppl0(h_0))),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_t_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(g_0,ATmakeString("failures: "),(ATerm)ATmakeAppl2(g_0,Egetd(0,1),(ATerm)ATmakeAppl0(h_0))),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_t_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_q_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_s_2)
  Tset((ATerm)ATmakeAppl2(c_0,MakeInt(0),(ATerm)ATmakeAppl2(c_0,MakeInt(0),(ATerm)ATmakeAppl0(d_0))));
ENDPROC

PROC(_stratego_t_2)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("innermost-pure"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(g_0,ATmakeString("test suite: "),(ATerm)ATmakeAppl2(g_0,Egetd(0,1),(ATerm)ATmakeAppl0(h_0))),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_t_2);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_s_2);
  Ccall(_stratego_n_2);
  Ccall(_stratego_r_2);
  Ccall(_stratego_p_2);
ENDPROC

DOIT

