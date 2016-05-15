#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,m_0);
VARDECL(AFun,l_0);
VARDECL(AFun,k_0);
VARDECL(AFun,f_0);
VARDECL(AFun,e_0);
PROCDECL(_stratego_p_3);
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
PROCDECL(_stratego_e_4);
PROCDECL(_stratego_f_4);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(m_0,ATmakeAFun("Nil",0,0));
  MOVE(l_0,ATmakeAFun("Cons",2,0));
  MOVE(k_0,ATmakeAFun("stderr",0,0));
  MOVE(f_0,ATmakeAFun("TNil",0,0));
  MOVE(e_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_p_3)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test4"));
  Ccall(_stratego_v_3);
  Tpop();
  Cpush(b_0);
  Tdupl();
  Cpush(d_0);
  Epushd(1,1);
  Tset((ATerm)ATmakeAppl2(e_0,MakeInt(1),(ATerm)ATmakeAppl2(e_0,MakeInt(1),(ATerm)ATmakeAppl0(f_0))));
  Ccall(_stratego_x_3);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto c_0;
  d_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_v_3);
  Ccall(_stratego_u_3);
  goto g_0;
  c_0 :
  Cpop();
  g_0 :
  Tset(MakeInt(2));
  Tdupl();
  Tset(MakeInt(2));
  MoveTop(0,2);
  Tpop();
  Cpush(i_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto h_0;
  i_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(l_0,Egetd(1,1),(ATerm)ATmakeAppl0(m_0))),(ATerm)ATmakeAppl0(f_0))));
  Ccall(_stratego_f_4);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(l_0,Egetd(1,1),(ATerm)ATmakeAppl0(m_0))),(ATerm)ATmakeAppl0(f_0))));
  Ccall(_stratego_f_4);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_u_3);
  goto j_0;
  h_0 :
  Cpop();
  j_0 :
  Tpop();
  Ccall(_stratego_y_3);
  goto a_0;
  b_0 :
  Ccall(_stratego_w_3);
  goto n_0;
  a_0 :
  Cpop();
  n_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_q_3)
  Tdupl();
  Tset(ATmakeString("test3"));
  Ccall(_stratego_v_3);
  Tpop();
  Cpush(p_0);
  Tdupl();
  Cpush(r_0);
  Tset((ATerm)ATmakeAppl2(e_0,MakeInt(1),(ATerm)ATmakeAppl2(e_0,ATmakeString("a"),(ATerm)ATmakeAppl0(f_0))));
  Cpush(s_0);
  Tdupl();
  Ccall(_stratego_x_3);
  Cpop();
  Crestore();
  Cjump();
  s_0 :
  goto q_0;
  r_0 :
  Tset(ATmakeString("  succeeded (should fail)"));
  Ccall(_stratego_v_3);
  Ccall(_stratego_u_3);
  goto t_0;
  q_0 :
  Cpop();
  t_0 :
  Tpop();
  Ccall(_stratego_y_3);
  goto o_0;
  p_0 :
  Ccall(_stratego_w_3);
  goto u_0;
  o_0 :
  Cpop();
  u_0 :
ENDPROC

PROC(_stratego_r_3)
  _ST_is_real();
ENDPROC

PROC(_stratego_s_3)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test2"));
  Ccall(_stratego_v_3);
  Tpop();
  Cpush(w_0);
  Tdupl();
  Cpush(y_0);
  Epushd(1,1);
  Tset((ATerm)ATmakeReal(0.60));
  Ccall(_stratego_r_3);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto x_0;
  y_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_v_3);
  Ccall(_stratego_u_3);
  goto z_0;
  x_0 :
  Cpop();
  z_0 :
  Tset((ATerm)ATmakeReal(0.60));
  Tdupl();
  Tset((ATerm)ATmakeReal(0.60));
  MoveTop(0,2);
  Tpop();
  Cpush(b_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto a_1;
  b_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(l_0,Egetd(1,1),(ATerm)ATmakeAppl0(m_0))),(ATerm)ATmakeAppl0(f_0))));
  Ccall(_stratego_f_4);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(l_0,Egetd(1,1),(ATerm)ATmakeAppl0(m_0))),(ATerm)ATmakeAppl0(f_0))));
  Ccall(_stratego_f_4);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_u_3);
  goto c_1;
  a_1 :
  Cpop();
  c_1 :
  Tpop();
  Ccall(_stratego_y_3);
  goto v_0;
  w_0 :
  Ccall(_stratego_w_3);
  goto d_1;
  v_0 :
  Cpop();
  d_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_t_3)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_v_3);
  Tpop();
  Cpush(f_1);
  Tdupl();
  Cpush(h_1);
  Epushd(1,1);
  Tset((ATerm)ATmakeReal(0.60));
  MoveTop(1,1);
  goto o_6;
  o_6 :
  j_1 :
  goto i_1;
  g_6 :
  Epushd(2,1);
  Tset((ATerm)ATmakeReal(1.20));
  MoveTop(2,1);
  goto n_6;
  n_6 :
  l_1 :
  goto k_1;
  h_6 :
  Epushd(3,5);
  _ST_explode_term();
  MoveTop(3,1);
  goto k_6;
  k_6 :
  TestFunFC(e_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto l_6;
  l_6 :
  TestFunFC(e_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto m_6;
  m_6 :
  TestFunFC(f_0,&&fail,Egetd(3,5));
  Rpush(n_1);
  goto i_6;
  n_1 :
  goto m_1;
  i_6 :
  Epushd(4,1);
  _ST_mkterm();
  MoveTop(4,1);
  Move(0,1,4,1);
  Epopd(4,1);
  Return();
  m_1 :
  Epopd(3,5);
  Return();
  k_1 :
  Epopd(2,1);
  Return();
  i_1 :
  Epopd(1,1);
  goto g_1;
  h_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_v_3);
  Ccall(_stratego_u_3);
  goto o_1;
  g_1 :
  Cpop();
  o_1 :
  Tset((ATerm)ATmakeReal(1.20));
  Tdupl();
  Tset((ATerm)ATmakeReal(1.20));
  MoveTop(0,2);
  Tpop();
  Cpush(q_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto p_1;
  q_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(l_0,Egetd(1,1),(ATerm)ATmakeAppl0(m_0))),(ATerm)ATmakeAppl0(f_0))));
  Ccall(_stratego_f_4);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(l_0,Egetd(1,1),(ATerm)ATmakeAppl0(m_0))),(ATerm)ATmakeAppl0(f_0))));
  Ccall(_stratego_f_4);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_u_3);
  goto r_1;
  p_1 :
  Cpop();
  r_1 :
  Tpop();
  Ccall(_stratego_y_3);
  goto e_1;
  f_1 :
  Ccall(_stratego_w_3);
  goto s_1;
  e_1 :
  Cpop();
  s_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_u_3)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto j_8;
  j_8 :
  TestFunFC(e_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto k_8;
  k_8 :
  TestFunFC(e_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto l_8;
  l_8 :
  TestFunFC(f_0,&&fail,Egetd(0,6));
  Rpush(u_1);
  goto i_8;
  u_1 :
  goto t_1;
  i_8 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  t_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_v_3)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(l_0,Egetd(0,1),(ATerm)ATmakeAppl0(m_0)),(ATerm)ATmakeAppl0(f_0))));
  Ccall(_stratego_f_4);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_w_3)
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(0,1),(ATerm)ATmakeAppl2(e_0,MakeInt(1),(ATerm)ATmakeAppl0(f_0))));
  Ccall(_stratego_x_3);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_c_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_x_3)
  _ST_add();
ENDPROC

PROC(_stratego_y_3)
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(0,1),(ATerm)ATmakeAppl2(e_0,MakeInt(1),(ATerm)ATmakeAppl0(f_0))));
  Ccall(_stratego_x_3);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_z_3)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test0"));
  Ccall(_stratego_v_3);
  Tpop();
  Cpush(w_1);
  Tdupl();
  Cpush(y_1);
  Epushd(1,5);
  Tset((ATerm)ATmakeReal(0.60));
  _ST_explode_term();
  MoveTop(1,1);
  goto o_9;
  o_9 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_9;
  p_9 :
  TestFunFC(e_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto q_9;
  q_9 :
  TestFunFC(f_0,&&fail,Egetd(1,5));
  Rpush(a_2);
  goto m_9;
  a_2 :
  goto z_1;
  m_9 :
  Epushd(2,1);
  _ST_mkterm();
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  Return();
  z_1 :
  Epopd(1,5);
  goto x_1;
  y_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_v_3);
  Ccall(_stratego_u_3);
  goto c_2;
  x_1 :
  Cpop();
  c_2 :
  Tset((ATerm)ATmakeReal(0.60));
  Tdupl();
  Tset((ATerm)ATmakeReal(0.60));
  MoveTop(0,2);
  Tpop();
  Cpush(e_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto d_2;
  e_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(l_0,Egetd(1,1),(ATerm)ATmakeAppl0(m_0))),(ATerm)ATmakeAppl0(f_0))));
  Ccall(_stratego_f_4);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(l_0,Egetd(1,1),(ATerm)ATmakeAppl0(m_0))),(ATerm)ATmakeAppl0(f_0))));
  Ccall(_stratego_f_4);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_u_3);
  goto f_2;
  d_2 :
  Cpop();
  f_2 :
  Tpop();
  Ccall(_stratego_y_3);
  goto v_1;
  w_1 :
  Ccall(_stratego_w_3);
  goto i_2;
  v_1 :
  Cpop();
  i_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_a_4)
  _ST_exit();
ENDPROC

PROC(_stratego_b_4)
  Cpush(k_2);
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto i_11;
  i_11 :
  TestInt(0,1,0,&&fail);
  Rpush(m_2);
  goto h_11;
  m_2 :
  goto l_2;
  h_11 :
  Return();
  l_2 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_c_4);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_a_4);
  goto j_2;
  k_2 :
  Tset(MakeInt(1));
  Ccall(_stratego_a_4);
  goto n_2;
  j_2 :
  Cpop();
  n_2 :
ENDPROC

PROC(_stratego_c_4)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_11;
  l_11 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  Rpush(p_2);
  goto k_11;
  p_2 :
  goto o_2;
  k_11 :
  Return();
  o_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_4)
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("successes: "),(ATerm)ATmakeAppl2(l_0,Egetd(0,1),(ATerm)ATmakeAppl0(m_0))),(ATerm)ATmakeAppl0(f_0))));
  Ccall(_stratego_f_4);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("failures: "),(ATerm)ATmakeAppl2(l_0,Egetd(0,1),(ATerm)ATmakeAppl0(m_0))),(ATerm)ATmakeAppl0(f_0))));
  Ccall(_stratego_f_4);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_c_4);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_e_4)
  Tset((ATerm)ATmakeAppl2(e_0,MakeInt(0),(ATerm)ATmakeAppl2(e_0,MakeInt(0),(ATerm)ATmakeAppl0(f_0))));
ENDPROC

PROC(_stratego_f_4)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("number-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("test suite: "),(ATerm)ATmakeAppl2(l_0,Egetd(0,1),(ATerm)ATmakeAppl0(m_0))),(ATerm)ATmakeAppl0(f_0))));
  Ccall(_stratego_f_4);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_e_4);
  Ccall(_stratego_z_3);
  Ccall(_stratego_t_3);
  Ccall(_stratego_s_3);
  Ccall(_stratego_q_3);
  Ccall(_stratego_p_3);
  Ccall(_stratego_d_4);
  Ccall(_stratego_b_4);
ENDPROC

DOIT

