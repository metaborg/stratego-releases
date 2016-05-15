#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,x_0);
VARDECL(AFun,w_0);
VARDECL(AFun,v_0);
VARDECL(AFun,u_0);
VARDECL(AFun,t_0);
VARDECL(AFun,m_0);
VARDECL(AFun,f_0);
VARDECL(AFun,e_0);
PROCDECL(_stratego_l_5);
PROCDECL(_stratego_m_5);
PROCDECL(_stratego_n_5);
PROCDECL(_stratego_o_5);
PROCDECL(_stratego_p_5);
PROCDECL(_stratego_q_5);
PROCDECL(_stratego_r_5);
PROCDECL(_stratego_s_5);
PROCDECL(_stratego_t_5);
PROCDECL(_stratego_u_5);
PROCDECL(_stratego_v_5);
PROCDECL(_stratego_w_5);
PROCDECL(_stratego_x_5);
PROCDECL(_stratego_y_5);
PROCDECL(_stratego_z_5);
PROCDECL(_stratego_a_6);
PROCDECL(_stratego_b_6);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(x_0,ATmakeAFun("TNil",0,0));
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(v_0,ATmakeAFun("Cons",2,0));
  MOVE(u_0,ATmakeAFun("stderr",0,0));
  MOVE(t_0,ATmakeAFun("TCons",2,0));
  MOVE(m_0,ATmakeAFun("If",3,0));
  MOVE(f_0,ATmakeAFun("Skip",0,0));
  MOVE(e_0,ATmakeAFun("If",2,0));
ENDPROC

PROC(_stratego_l_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity6"));
  Ccall(_stratego_r_5);
  Tpop();
  Cpush(b_0);
  Tdupl();
  Cpush(d_0);
  Epushd(1,5);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  MoveTop(1,1);
  goto n_0;
  n_0 :
  TestFunFC(e_0,&&l_0,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(k_0);
  goto g_0;
  l_0 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,4,1,1,2);
  goto o_0;
  o_0 :
  TestFunFC(f_0,&&fail,Egetd(1,4));
  Rpush(k_0);
  goto h_0;
  k_0 :
  goto j_0;
  h_0 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(1,2),Egetd(1,3)));
  Return();
  j_0 :
  goto i_0;
  g_0 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl3(m_0,Egetd(1,2),Egetd(1,3),(ATerm)ATmakeAppl0(f_0)));
  Return();
  i_0 :
  MoveTop(1,5);
  Move(0,1,1,5);
  Epopd(1,5);
  goto c_0;
  d_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_r_5);
  Ccall(_stratego_q_5);
  goto p_0;
  c_0 :
  Cpop();
  p_0 :
  Tset((ATerm)ATmakeAppl3(m_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  Tdupl();
  Tset((ATerm)ATmakeAppl3(m_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  MoveTop(0,2);
  Tpop();
  Cpush(r_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto q_0;
  r_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(v_0,Egetd(1,1),(ATerm)ATmakeAppl0(w_0))),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(v_0,Egetd(1,1),(ATerm)ATmakeAppl0(w_0))),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_q_5);
  goto s_0;
  q_0 :
  Cpop();
  s_0 :
  Tpop();
  Ccall(_stratego_u_5);
  goto a_0;
  b_0 :
  Ccall(_stratego_s_5);
  goto y_0;
  a_0 :
  Cpop();
  y_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_m_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity5"));
  Ccall(_stratego_r_5);
  Tpop();
  Cpush(a_1);
  Tdupl();
  Cpush(c_1);
  Epushd(1,5);
  Tset((ATerm)ATmakeAppl3(m_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  MoveTop(1,1);
  goto w_6;
  w_6 :
  TestFunFC(e_0,&&g_1,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(f_1);
  goto u_6;
  g_1 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,4,1,1,2);
  goto x_6;
  x_6 :
  TestFunFC(f_0,&&fail,Egetd(1,4));
  Rpush(f_1);
  goto v_6;
  f_1 :
  goto e_1;
  v_6 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(1,2),Egetd(1,3)));
  Return();
  e_1 :
  goto d_1;
  u_6 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl3(m_0,Egetd(1,2),Egetd(1,3),(ATerm)ATmakeAppl0(f_0)));
  Return();
  d_1 :
  MoveTop(1,5);
  Move(0,1,1,5);
  Epopd(1,5);
  goto b_1;
  c_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_r_5);
  Ccall(_stratego_q_5);
  goto h_1;
  b_1 :
  Cpop();
  h_1 :
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  Tdupl();
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  MoveTop(0,2);
  Tpop();
  Cpush(j_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto i_1;
  j_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(v_0,Egetd(1,1),(ATerm)ATmakeAppl0(w_0))),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(v_0,Egetd(1,1),(ATerm)ATmakeAppl0(w_0))),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_q_5);
  goto k_1;
  i_1 :
  Cpop();
  k_1 :
  Tpop();
  Ccall(_stratego_u_5);
  goto z_0;
  a_1 :
  Ccall(_stratego_s_5);
  goto l_1;
  z_0 :
  Cpop();
  l_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_n_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity4"));
  Ccall(_stratego_r_5);
  Tpop();
  Cpush(n_1);
  Tdupl();
  Cpush(p_1);
  Epushd(1,4);
  Tset((ATerm)ATmakeAppl3(m_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  MoveTop(1,1);
  goto u_8;
  u_8 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,4,1,1,2);
  goto v_8;
  v_8 :
  TestFunFC(f_0,&&fail,Egetd(1,4));
  Rpush(r_1);
  goto s_8;
  r_1 :
  goto q_1;
  s_8 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(1,2),Egetd(1,3)));
  Tdupl();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(1,2),Egetd(1,3)));
  MoveTop(0,1);
  Tpop();
  Return();
  q_1 :
  Epopd(1,4);
  goto o_1;
  p_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_r_5);
  Ccall(_stratego_q_5);
  goto s_1;
  o_1 :
  Cpop();
  s_1 :
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  Tdupl();
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  MoveTop(0,2);
  Tpop();
  Cpush(u_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto t_1;
  u_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(v_0,Egetd(1,1),(ATerm)ATmakeAppl0(w_0))),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(v_0,Egetd(1,1),(ATerm)ATmakeAppl0(w_0))),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_q_5);
  goto v_1;
  t_1 :
  Cpop();
  v_1 :
  Tpop();
  Ccall(_stratego_u_5);
  goto m_1;
  n_1 :
  Ccall(_stratego_s_5);
  goto w_1;
  m_1 :
  Cpop();
  w_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_o_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity3"));
  Ccall(_stratego_r_5);
  Tpop();
  Cpush(y_1);
  Tdupl();
  Cpush(a_2);
  Epushd(1,3);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  MoveTop(1,1);
  goto q_10;
  q_10 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(c_2);
  goto o_10;
  c_2 :
  goto b_2;
  o_10 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl3(m_0,Egetd(1,2),Egetd(1,3),(ATerm)ATmakeAppl0(f_0)));
  Tdupl();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl3(m_0,Egetd(1,2),Egetd(1,3),(ATerm)ATmakeAppl0(f_0)));
  MoveTop(0,1);
  Tpop();
  Return();
  b_2 :
  Epopd(1,3);
  goto z_1;
  a_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_r_5);
  Ccall(_stratego_q_5);
  goto d_2;
  z_1 :
  Cpop();
  d_2 :
  Tset((ATerm)ATmakeAppl3(m_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  Tdupl();
  Tset((ATerm)ATmakeAppl3(m_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
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
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(v_0,Egetd(1,1),(ATerm)ATmakeAppl0(w_0))),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(v_0,Egetd(1,1),(ATerm)ATmakeAppl0(w_0))),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_q_5);
  goto g_2;
  e_2 :
  Cpop();
  g_2 :
  Tpop();
  Ccall(_stratego_u_5);
  goto x_1;
  y_1 :
  Ccall(_stratego_s_5);
  goto h_2;
  x_1 :
  Cpop();
  h_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_p_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity2"));
  Ccall(_stratego_r_5);
  Tpop();
  Cpush(j_2);
  Tdupl();
  Cpush(l_2);
  Epushd(1,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  Cpush(m_2);
  Tdupl();
  Epushd(2,4);
  MoveTop(2,1);
  goto i_12;
  i_12 :
  TestFunFC(m_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  goto j_12;
  j_12 :
  TestFunFC(f_0,&&fail,Egetd(2,4));
  Rpush(o_2);
  goto h_12;
  o_2 :
  goto n_2;
  h_12 :
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(2,2),Egetd(2,3)));
  Return();
  n_2 :
  Epopd(2,4);
  Cpop();
  Crestore();
  Cjump();
  m_2 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto k_2;
  l_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_r_5);
  Ccall(_stratego_q_5);
  goto p_2;
  k_2 :
  Cpop();
  p_2 :
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  Tdupl();
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  MoveTop(0,2);
  Tpop();
  Cpush(r_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto q_2;
  r_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(v_0,Egetd(1,1),(ATerm)ATmakeAppl0(w_0))),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(v_0,Egetd(1,1),(ATerm)ATmakeAppl0(w_0))),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_q_5);
  goto s_2;
  q_2 :
  Cpop();
  s_2 :
  Tpop();
  Ccall(_stratego_u_5);
  goto i_2;
  j_2 :
  Ccall(_stratego_s_5);
  goto t_2;
  i_2 :
  Cpop();
  t_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_q_5)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto e_14;
  e_14 :
  TestFunFC(t_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto f_14;
  f_14 :
  TestFunFC(t_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto g_14;
  g_14 :
  TestFunFC(x_0,&&fail,Egetd(0,6));
  Rpush(v_2);
  goto d_14;
  v_2 :
  goto u_2;
  d_14 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  u_2 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_r_5)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,Egetd(0,1),(ATerm)ATmakeAppl0(w_0)),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_s_5)
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
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,MakeInt(1),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_t_5);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_y_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_t_5)
  _ST_add();
ENDPROC

PROC(_stratego_u_5)
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,MakeInt(1),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_t_5);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_y_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_v_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("match-arity1"));
  Ccall(_stratego_r_5);
  Tpop();
  Cpush(x_2);
  Tdupl();
  Cpush(z_2);
  Epushd(1,1);
  Tset((ATerm)ATmakeAppl3(m_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  Cpush(a_3);
  Tdupl();
  Epushd(2,3);
  MoveTop(2,1);
  goto h_15;
  h_15 :
  TestFunFC(e_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(c_3);
  goto g_15;
  c_3 :
  goto b_3;
  g_15 :
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl3(m_0,Egetd(2,2),Egetd(2,3),(ATerm)ATmakeAppl0(f_0)));
  Return();
  b_3 :
  Epopd(2,3);
  Cpop();
  Crestore();
  Cjump();
  a_3 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto y_2;
  z_2 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_r_5);
  Ccall(_stratego_q_5);
  goto f_3;
  y_2 :
  Cpop();
  f_3 :
  Tset((ATerm)ATmakeAppl3(m_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  Tdupl();
  Tset((ATerm)ATmakeAppl3(m_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(f_0)));
  MoveTop(0,2);
  Tpop();
  Cpush(h_3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto g_3;
  h_3 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(v_0,Egetd(1,1),(ATerm)ATmakeAppl0(w_0))),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(v_0,Egetd(1,1),(ATerm)ATmakeAppl0(w_0))),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_q_5);
  goto i_3;
  g_3 :
  Cpop();
  i_3 :
  Tpop();
  Ccall(_stratego_u_5);
  goto w_2;
  x_2 :
  Ccall(_stratego_s_5);
  goto j_3;
  w_2 :
  Cpop();
  j_3 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_w_5)
  _ST_exit();
ENDPROC

PROC(_stratego_x_5)
  Cpush(n_3);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto a_17;
  a_17 :
  TestInt(0,1,0,&&fail);
  Rpush(p_3);
  goto z_16;
  p_3 :
  goto o_3;
  z_16 :
  Return();
  o_3 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_y_5);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_w_5);
  goto m_3;
  n_3 :
  Tset(MakeInt(1));
  Ccall(_stratego_w_5);
  goto q_3;
  m_3 :
  Cpop();
  q_3 :
ENDPROC

PROC(_stratego_y_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_17;
  d_17 :
  TestFunFC(x_0,&&fail,Egetd(0,1));
  Rpush(s_3);
  goto c_17;
  s_3 :
  goto r_3;
  c_17 :
  Return();
  r_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_5)
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,ATmakeString("successes: "),(ATerm)ATmakeAppl2(v_0,Egetd(0,1),(ATerm)ATmakeAppl0(w_0))),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
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
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,ATmakeString("failures: "),(ATerm)ATmakeAppl2(v_0,Egetd(0,1),(ATerm)ATmakeAppl0(w_0))),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_y_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_a_6)
  Tset((ATerm)ATmakeAppl2(t_0,MakeInt(0),(ATerm)ATmakeAppl2(t_0,MakeInt(0),(ATerm)ATmakeAppl0(x_0))));
ENDPROC

PROC(_stratego_b_6)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("match-arity"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_0),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(v_0,ATmakeString("test suite: "),(ATerm)ATmakeAppl2(v_0,Egetd(0,1),(ATerm)ATmakeAppl0(w_0))),(ATerm)ATmakeAppl0(x_0))));
  Ccall(_stratego_b_6);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_a_6);
  Ccall(_stratego_v_5);
  Ccall(_stratego_p_5);
  Ccall(_stratego_o_5);
  Ccall(_stratego_n_5);
  Ccall(_stratego_m_5);
  Ccall(_stratego_l_5);
  Ccall(_stratego_z_5);
  Ccall(_stratego_x_5);
ENDPROC

DOIT

