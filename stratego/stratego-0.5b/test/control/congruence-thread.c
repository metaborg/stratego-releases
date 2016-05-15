#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,n_3);
VARDECL(AFun,i_3);
VARDECL(AFun,h_3);
VARDECL(AFun,g_3);
VARDECL(AFun,x_2);
VARDECL(AFun,k_1);
VARDECL(AFun,f_1);
VARDECL(AFun,e_1);
VARDECL(AFun,r_0);
VARDECL(AFun,q_0);
VARDECL(AFun,p_0);
VARDECL(AFun,o_0);
VARDECL(AFun,n_0);
PROCDECL(_stratego_f_5);
PROCDECL(_stratego_g_5);
PROCDECL(_stratego_h_5);
PROCDECL(_stratego_i_5);
PROCDECL(_stratego_j_5);
PROCDECL(_stratego_k_5);
PROCDECL(_stratego_l_5);
PROCDECL(_stratego_m_5);
PROCDECL(_stratego_n_5);
PROCDECL(_stratego_o_5);
PROCDECL(_stratego_p_5);
PROCDECL(_stratego_q_5);
PROCDECL(_stratego_r_5);
PROCDECL(_stratego_s_5);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(n_3,ATmakeAFun("Succ",1,0));
  MOVE(i_3,ATmakeAFun("Zero",0,0));
  MOVE(h_3,ATmakeAFun("Id",0,0));
  MOVE(g_3,ATmakeAFun("If",3,0));
  MOVE(x_2,ATmakeAFun("stderr",0,0));
  MOVE(k_1,ATmakeAFun("KW",1,0));
  MOVE(f_1,ATmakeAFun("TNil",0,0));
  MOVE(e_1,ATmakeAFun("TCons",2,0));
  MOVE(r_0,ATmakeAFun("Nil",0,0));
  MOVE(q_0,ATmakeAFun("lit",1,0));
  MOVE(p_0,ATmakeAFun("sort",1,0));
  MOVE(o_0,ATmakeAFun("Cons",2,0));
  MOVE(n_0,ATmakeAFun("Pair",2,0));
ENDPROC

PROC(_stratego_f_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("congruence-thread-test2"));
  Ccall(_stratego_i_5);
  Tpop();
  Cpush(k_0);
  Tdupl();
  Cpush(m_0);
  Epushd(1,1);
  Tset((ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl1(p_0,ATmakeString("Do")),(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("1")),(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl1(p_0,ATmakeString("Plus")),(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("2")),(ATerm)ATmakeAppl0(r_0))))),MakeInt(1)));
  Cpush(t_0);
  Rpush(u_0);
  v_9 :
  Epushd(2,5);
  MoveTop(2,3);
  goto x_1;
  x_1 :
  TestFunFC(n_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_2;
  s_2 :
  TestFunFC(o_0,&&y_0,Egetd(2,4));
  MoveArg(2,1,2,4,0);
  MoveArg(2,2,2,4,1);
  Rpush(x_0);
  goto a_0;
  y_0 :
  TestFunFC(r_0,&&fail,Egetd(2,4));
  Rpush(x_0);
  goto b_0;
  x_0 :
  goto w_0;
  b_0 :
  NotNULLd(2,5);
  Tset((ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl0(r_0),Egetd(2,5)));
  Return();
  w_0 :
  goto v_0;
  a_0 :
  Epushd(3,3);
  NotNULLd(2,1);
  NotNULLd(2,5);
  Tset((ATerm)ATmakeAppl2(n_0,Egetd(2,1),Egetd(2,5)));
  Cpush(b_1);
  Epushd(4,4);
  MoveTop(4,1);
  goto e_0;
  e_0 :
  TestFunFC(n_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,4,4,1,1);
  goto f_0;
  f_0 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  Rpush(d_1);
  goto c_0;
  d_1 :
  goto c_1;
  c_0 :
  Epushd(5,1);
  NotNULLd(4,4);
  Tset((ATerm)ATmakeAppl2(e_1,Egetd(4,4),(ATerm)ATmakeAppl2(e_1,MakeInt(1),(ATerm)ATmakeAppl0(f_1))));
  Ccall(_stratego_k_5);
  MoveTop(5,1);
  NotNULLd(4,4);
  NotNULLd(5,1);
  Tset((ATerm)ATmakeAppl2(n_0,Egetd(4,4),Egetd(5,1)));
  Epopd(5,1);
  Return();
  c_1 :
  Epopd(4,4);
  goto a_1;
  b_1 :
  Ccontinue(h_1);
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(4,2);
  MoveTop(4,1);
  goto h_0;
  h_0 :
  TestFunFC(q_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(j_1);
  goto g_0;
  j_1 :
  goto i_1;
  g_0 :
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl1(k_1,Egetd(4,2)));
  Return();
  i_1 :
  Epopd(4,2);
  OneNextSon();
  AllBuild();
  goto a_1;
  h_1 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(4,2);
  MoveTop(4,1);
  goto j_0;
  j_0 :
  TestFunFC(q_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(n_1);
  goto i_0;
  n_1 :
  goto m_1;
  i_0 :
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl1(k_1,Egetd(4,2)));
  Return();
  m_1 :
  Epopd(4,2);
  OneNextSon();
  AllBuild();
  goto l_1;
  a_1 :
  Cpop();
  l_1 :
  MoveTop(3,1);
  goto w_1;
  w_1 :
  TestFunFC(n_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(o_1);
  goto g_1;
  o_1 :
  goto z_0;
  g_1 :
  Epushd(4,3);
  NotNULLd(2,2);
  NotNULLd(3,3);
  Tset((ATerm)ATmakeAppl2(n_0,Egetd(2,2),Egetd(3,3)));
  Rpush(s_1);
  goto v_9;
  s_1 :
  MoveTop(4,1);
  goto q_1;
  q_1 :
  TestFunFC(n_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(t_1);
  goto p_1;
  t_1 :
  goto r_1;
  p_1 :
  NotNULLd(3,2);
  NotNULLd(4,2);
  NotNULLd(4,3);
  Tset((ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl2(o_0,Egetd(3,2),Egetd(4,2)),Egetd(4,3)));
  Return();
  r_1 :
  Epopd(4,3);
  Return();
  z_0 :
  Epopd(3,3);
  Return();
  v_0 :
  Epopd(2,5);
  Return();
  u_0 :
  goto s_0;
  t_0 :
  Rpush(v_1);
  w_9 :
  Epushd(2,5);
  MoveTop(2,3);
  goto t_5;
  t_5 :
  TestFunFC(n_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto u_5;
  u_5 :
  TestFunFC(o_0,&&b_2,Egetd(2,4));
  MoveArg(2,1,2,4,0);
  MoveArg(2,2,2,4,1);
  Rpush(a_2);
  goto t_2;
  b_2 :
  TestFunFC(r_0,&&fail,Egetd(2,4));
  Rpush(a_2);
  goto z_2;
  a_2 :
  goto z_1;
  z_2 :
  NotNULLd(2,5);
  Tset((ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl0(r_0),Egetd(2,5)));
  Return();
  z_1 :
  goto y_1;
  t_2 :
  Epushd(3,3);
  NotNULLd(2,1);
  NotNULLd(2,5);
  Tset((ATerm)ATmakeAppl2(n_0,Egetd(2,1),Egetd(2,5)));
  Cpush(e_2);
  Epushd(4,4);
  MoveTop(4,1);
  goto w_3;
  w_3 :
  TestFunFC(n_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,4,4,1,1);
  goto x_3;
  x_3 :
  TestFunFC(p_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  Rpush(g_2);
  goto a_3;
  g_2 :
  goto f_2;
  a_3 :
  Epushd(5,1);
  NotNULLd(4,4);
  Tset((ATerm)ATmakeAppl2(e_1,Egetd(4,4),(ATerm)ATmakeAppl2(e_1,MakeInt(1),(ATerm)ATmakeAppl0(f_1))));
  Ccall(_stratego_k_5);
  MoveTop(5,1);
  NotNULLd(4,4);
  NotNULLd(5,1);
  Tset((ATerm)ATmakeAppl2(n_0,Egetd(4,4),Egetd(5,1)));
  Epopd(5,1);
  Return();
  f_2 :
  Epopd(4,4);
  goto d_2;
  e_2 :
  Ccontinue(h_2);
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(4,2);
  MoveTop(4,1);
  goto e_4;
  e_4 :
  TestFunFC(q_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(j_2);
  goto d_4;
  j_2 :
  goto i_2;
  d_4 :
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl1(k_1,Egetd(4,2)));
  Return();
  i_2 :
  Epopd(4,2);
  OneNextSon();
  AllBuild();
  goto d_2;
  h_2 :
  TestFunTop(n_0);
  TravInit();
  OneNextSon();
  Epushd(4,2);
  MoveTop(4,1);
  goto l_4;
  l_4 :
  TestFunFC(q_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(m_2);
  goto k_4;
  m_2 :
  goto l_2;
  k_4 :
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl1(k_1,Egetd(4,2)));
  Return();
  l_2 :
  Epopd(4,2);
  OneNextSon();
  AllBuild();
  goto k_2;
  d_2 :
  Cpop();
  k_2 :
  MoveTop(3,1);
  goto z_4;
  z_4 :
  TestFunFC(n_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(n_2);
  goto r_4;
  n_2 :
  goto c_2;
  r_4 :
  Epushd(4,3);
  NotNULLd(2,2);
  NotNULLd(3,3);
  Tset((ATerm)ATmakeAppl2(n_0,Egetd(2,2),Egetd(3,3)));
  Rpush(p_2);
  goto w_9;
  p_2 :
  MoveTop(4,1);
  goto y_4;
  y_4 :
  TestFunFC(n_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(q_2);
  goto s_4;
  q_2 :
  goto o_2;
  s_4 :
  NotNULLd(3,2);
  NotNULLd(4,2);
  NotNULLd(4,3);
  Tset((ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl2(o_0,Egetd(3,2),Egetd(4,2)),Egetd(4,3)));
  Return();
  o_2 :
  Epopd(4,3);
  Return();
  c_2 :
  Epopd(3,3);
  Return();
  y_1 :
  Epopd(2,5);
  Return();
  v_1 :
  goto u_1;
  s_0 :
  Cpop();
  u_1 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto l_0;
  m_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_i_5);
  Ccall(_stratego_h_5);
  goto r_2;
  l_0 :
  Cpop();
  r_2 :
  Tset((ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl2(o_0,MakeInt(1),(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl1(k_1,ATmakeString("1")),(ATerm)ATmakeAppl2(o_0,MakeInt(2),(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl1(k_1,ATmakeString("2")),(ATerm)ATmakeAppl0(r_0))))),MakeInt(3)));
  Tdupl();
  Tset((ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl2(o_0,MakeInt(1),(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl1(k_1,ATmakeString("1")),(ATerm)ATmakeAppl2(o_0,MakeInt(2),(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl1(k_1,ATmakeString("2")),(ATerm)ATmakeAppl0(r_0))))),MakeInt(3)));
  MoveTop(0,2);
  Tpop();
  Cpush(v_2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto u_2;
  v_2 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(x_2),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(o_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(o_0,Egetd(1,1),(ATerm)ATmakeAppl0(r_0))),(ATerm)ATmakeAppl0(f_1))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(x_2),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(o_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(o_0,Egetd(1,1),(ATerm)ATmakeAppl0(r_0))),(ATerm)ATmakeAppl0(f_1))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_h_5);
  goto w_2;
  u_2 :
  Cpop();
  w_2 :
  Tpop();
  Ccall(_stratego_l_5);
  goto d_0;
  k_0 :
  Ccall(_stratego_j_5);
  goto y_2;
  d_0 :
  Cpop();
  y_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_g_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("congruence-thread-test"));
  Ccall(_stratego_i_5);
  Tpop();
  Cpush(c_3);
  Tdupl();
  Cpush(e_3);
  Epushd(1,6);
  Tset((ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl3(g_3,(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl0(h_3)),(ATerm)ATmakeAppl0(i_3)));
  MoveTop(1,1);
  goto p_10;
  p_10 :
  TestFunFC(n_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,6,1,1,1);
  goto q_10;
  q_10 :
  TestFunFC(g_3,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  MoveArg(1,5,1,2,2);
  Rpush(j_3);
  goto x_9;
  j_3 :
  goto f_3;
  x_9 :
  Epushd(2,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(n_0,Egetd(1,3),Egetd(1,6)));
  MoveTop(2,1);
  goto m_10;
  m_10 :
  TestFunFC(n_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto n_10;
  n_10 :
  TestFunFC(h_3,&&fail,Egetd(2,2));
  Rpush(l_3);
  goto y_9;
  l_3 :
  goto k_3;
  y_9 :
  Epushd(3,3);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl1(n_3,Egetd(2,3))));
  MoveTop(3,1);
  goto l_10;
  l_10 :
  TestFunFC(n_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(o_3);
  goto z_9;
  o_3 :
  goto m_3;
  z_9 :
  Epushd(4,3);
  NotNULLd(1,4);
  NotNULLd(3,3);
  Tset((ATerm)ATmakeAppl2(n_0,Egetd(1,4),Egetd(3,3)));
  MoveTop(4,1);
  goto i_10;
  i_10 :
  TestFunFC(n_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto k_10;
  k_10 :
  TestFunFC(h_3,&&fail,Egetd(4,2));
  Rpush(q_3);
  goto a_10;
  q_3 :
  goto p_3;
  a_10 :
  Epushd(5,3);
  NotNULLd(4,3);
  Tset((ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl1(n_3,Egetd(4,3))));
  MoveTop(5,1);
  goto h_10;
  h_10 :
  TestFunFC(n_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(s_3);
  goto b_10;
  s_3 :
  goto r_3;
  b_10 :
  Epushd(6,3);
  NotNULLd(1,5);
  NotNULLd(5,3);
  Tset((ATerm)ATmakeAppl2(n_0,Egetd(1,5),Egetd(5,3)));
  MoveTop(6,1);
  goto f_10;
  f_10 :
  TestFunFC(n_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto g_10;
  g_10 :
  TestFunFC(h_3,&&fail,Egetd(6,2));
  Rpush(u_3);
  goto c_10;
  u_3 :
  goto t_3;
  c_10 :
  Epushd(7,3);
  NotNULLd(6,3);
  Tset((ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl1(n_3,Egetd(6,3))));
  MoveTop(7,1);
  goto e_10;
  e_10 :
  TestFunFC(n_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(y_3);
  goto d_10;
  y_3 :
  goto v_3;
  d_10 :
  NotNULLd(3,2);
  NotNULLd(5,2);
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset((ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl3(g_3,Egetd(3,2),Egetd(5,2),Egetd(7,2)),Egetd(7,3)));
  Return();
  v_3 :
  Epopd(7,3);
  Return();
  t_3 :
  Epopd(6,3);
  Return();
  r_3 :
  Epopd(5,3);
  Return();
  p_3 :
  Epopd(4,3);
  Return();
  m_3 :
  Epopd(3,3);
  Return();
  k_3 :
  MoveTop(2,4);
  Move(0,1,2,4);
  Epopd(2,4);
  Return();
  f_3 :
  Epopd(1,6);
  goto d_3;
  e_3 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_i_5);
  Ccall(_stratego_h_5);
  goto z_3;
  d_3 :
  Cpop();
  z_3 :
  Tset((ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl3(g_3,(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl0(h_3)),(ATerm)ATmakeAppl1(n_3,(ATerm)ATmakeAppl1(n_3,(ATerm)ATmakeAppl1(n_3,(ATerm)ATmakeAppl0(i_3))))));
  Tdupl();
  Tset((ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl3(g_3,(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl0(h_3)),(ATerm)ATmakeAppl1(n_3,(ATerm)ATmakeAppl1(n_3,(ATerm)ATmakeAppl1(n_3,(ATerm)ATmakeAppl0(i_3))))));
  MoveTop(0,2);
  Tpop();
  Cpush(b_4);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto a_4;
  b_4 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(x_2),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(o_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(o_0,Egetd(1,1),(ATerm)ATmakeAppl0(r_0))),(ATerm)ATmakeAppl0(f_1))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(x_2),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(o_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(o_0,Egetd(1,1),(ATerm)ATmakeAppl0(r_0))),(ATerm)ATmakeAppl0(f_1))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_h_5);
  goto c_4;
  a_4 :
  Cpop();
  c_4 :
  Tpop();
  Ccall(_stratego_l_5);
  goto b_3;
  c_3 :
  Ccall(_stratego_j_5);
  goto f_4;
  b_3 :
  Cpop();
  f_4 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_h_5)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto p_13;
  p_13 :
  TestFunFC(e_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto q_13;
  q_13 :
  TestFunFC(e_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto r_13;
  r_13 :
  TestFunFC(f_1,&&fail,Egetd(0,6));
  Rpush(h_4);
  goto o_13;
  h_4 :
  goto g_4;
  o_13 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  g_4 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_i_5)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(x_2),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(o_0,Egetd(0,1),(ATerm)ATmakeAppl0(r_0)),(ATerm)ATmakeAppl0(f_1))));
  Ccall(_stratego_s_5);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_j_5)
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_1,Egetd(0,1),(ATerm)ATmakeAppl2(e_1,MakeInt(1),(ATerm)ATmakeAppl0(f_1))));
  Ccall(_stratego_k_5);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_p_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_k_5)
  _ST_add();
ENDPROC

PROC(_stratego_l_5)
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_1,Egetd(0,1),(ATerm)ATmakeAppl2(e_1,MakeInt(1),(ATerm)ATmakeAppl0(f_1))));
  Ccall(_stratego_k_5);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_p_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_m_5)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("congruence-dist-test"));
  Ccall(_stratego_i_5);
  Tpop();
  Cpush(j_4);
  Tdupl();
  Cpush(n_4);
  Epushd(1,6);
  Tset((ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl3(g_3,(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl0(h_3)),(ATerm)ATmakeAppl0(r_0)));
  MoveTop(1,1);
  goto w_14;
  w_14 :
  TestFunFC(n_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,6,1,1,1);
  goto x_14;
  x_14 :
  TestFunFC(g_3,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  MoveArg(1,5,1,2,2);
  Rpush(p_4);
  goto r_14;
  p_4 :
  goto o_4;
  r_14 :
  NotNULLd(1,3);
  NotNULLd(1,4);
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl3(g_3,(ATerm)ATmakeAppl2(n_0,Egetd(1,3),Egetd(1,6)),(ATerm)ATmakeAppl2(n_0,Egetd(1,4),Egetd(1,6)),(ATerm)ATmakeAppl2(n_0,Egetd(1,5),Egetd(1,6))));
  Tdupl();
  NotNULLd(1,3);
  NotNULLd(1,4);
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl3(g_3,(ATerm)ATmakeAppl2(n_0,Egetd(1,3),Egetd(1,6)),(ATerm)ATmakeAppl2(n_0,Egetd(1,4),Egetd(1,6)),(ATerm)ATmakeAppl2(n_0,Egetd(1,5),Egetd(1,6))));
  MoveTop(0,1);
  Tpop();
  Return();
  o_4 :
  Epopd(1,6);
  goto m_4;
  n_4 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_i_5);
  Ccall(_stratego_h_5);
  goto q_4;
  m_4 :
  Cpop();
  q_4 :
  Tset((ATerm)ATmakeAppl3(g_3,(ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl0(r_0)),(ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl0(r_0)),(ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl0(r_0))));
  Tdupl();
  Tset((ATerm)ATmakeAppl3(g_3,(ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl0(r_0)),(ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl0(r_0)),(ATerm)ATmakeAppl2(n_0,(ATerm)ATmakeAppl0(h_3),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(0,2);
  Tpop();
  Cpush(u_4);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto t_4;
  u_4 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(x_2),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(o_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(o_0,Egetd(1,1),(ATerm)ATmakeAppl0(r_0))),(ATerm)ATmakeAppl0(f_1))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(x_2),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(o_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(o_0,Egetd(1,1),(ATerm)ATmakeAppl0(r_0))),(ATerm)ATmakeAppl0(f_1))));
  Ccall(_stratego_s_5);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_h_5);
  goto v_4;
  t_4 :
  Cpop();
  v_4 :
  Tpop();
  Ccall(_stratego_l_5);
  goto i_4;
  j_4 :
  Ccall(_stratego_j_5);
  goto w_4;
  i_4 :
  Cpop();
  w_4 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_n_5)
  _ST_exit();
ENDPROC

PROC(_stratego_o_5)
  Cpush(a_5);
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto a_17;
  a_17 :
  TestInt(0,1,0,&&fail);
  Rpush(c_5);
  goto z_16;
  c_5 :
  goto b_5;
  z_16 :
  Return();
  b_5 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_p_5);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_n_5);
  goto x_4;
  a_5 :
  Tset(MakeInt(1));
  Ccall(_stratego_n_5);
  goto d_5;
  x_4 :
  Cpop();
  d_5 :
ENDPROC

PROC(_stratego_p_5)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_17;
  d_17 :
  TestFunFC(f_1,&&fail,Egetd(0,1));
  Rpush(v_5);
  goto c_17;
  v_5 :
  goto e_5;
  c_17 :
  Return();
  e_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_5)
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(x_2),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(o_0,ATmakeString("successes: "),(ATerm)ATmakeAppl2(o_0,Egetd(0,1),(ATerm)ATmakeAppl0(r_0))),(ATerm)ATmakeAppl0(f_1))));
  Ccall(_stratego_s_5);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(x_2),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(o_0,ATmakeString("failures: "),(ATerm)ATmakeAppl2(o_0,Egetd(0,1),(ATerm)ATmakeAppl0(r_0))),(ATerm)ATmakeAppl0(f_1))));
  Ccall(_stratego_s_5);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_p_5);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_r_5)
  Tset((ATerm)ATmakeAppl2(e_1,MakeInt(0),(ATerm)ATmakeAppl2(e_1,MakeInt(0),(ATerm)ATmakeAppl0(f_1))));
ENDPROC

PROC(_stratego_s_5)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("congruence-env-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(x_2),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(o_0,ATmakeString("test suite: "),(ATerm)ATmakeAppl2(o_0,Egetd(0,1),(ATerm)ATmakeAppl0(r_0))),(ATerm)ATmakeAppl0(f_1))));
  Ccall(_stratego_s_5);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_r_5);
  Ccall(_stratego_m_5);
  Ccall(_stratego_g_5);
  Ccall(_stratego_f_5);
  Ccall(_stratego_q_5);
  Ccall(_stratego_o_5);
ENDPROC

DOIT

