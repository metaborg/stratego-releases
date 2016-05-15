#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,j_1);
VARDECL(AFun,h_1);
VARDECL(AFun,g_1);
VARDECL(AFun,f_1);
VARDECL(AFun,e_1);
VARDECL(AFun,x_0);
VARDECL(AFun,r_0);
VARDECL(AFun,j_0);
VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
VARDECL(AFun,e_0);
PROCDECL(_stratego_r_2);
PROCDECL(_stratego_s_2);
PROCDECL(_stratego_t_2);
PROCDECL(_stratego_u_2);
PROCDECL(_stratego_v_2);
PROCDECL(_stratego_w_2);
PROCDECL(_stratego_x_2);
PROCDECL(_stratego_y_2);
PROCDECL(_stratego_z_2);
PROCDECL(_stratego_a_3);
PROCDECL(_stratego_b_3);
PROCDECL(_stratego_c_3);
PROCDECL(_stratego_d_3);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(j_1,ATmakeAFun("TNil",0,0));
  MOVE(h_1,ATmakeAFun("Nil",0,0));
  MOVE(g_1,ATmakeAFun("Cons",2,0));
  MOVE(f_1,ATmakeAFun("stderr",0,0));
  MOVE(e_1,ATmakeAFun("TCons",2,0));
  MOVE(x_0,ATmakeAFun("H",3,0));
  MOVE(r_0,ATmakeAFun("A",0,0));
  MOVE(j_0,ATmakeAFun("C",0,0));
  MOVE(g_0,ATmakeAFun("G",2,0));
  MOVE(f_0,ATmakeAFun("B",0,0));
  MOVE(e_0,ATmakeAFun("F",2,0));
ENDPROC

PROC(_stratego_r_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("as-pattern2"));
  Ccall(_stratego_t_2);
  Tpop();
  Cpush(b_0);
  Tdupl();
  Cpush(d_0);
  Epushd(1,6);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl2(g_0,(ATerm)ATmakeAppl0(j_0),(ATerm)ATmakeAppl0(f_0))));
  MoveTop(1,1);
  goto o_0;
  o_0 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_0;
  p_0 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_0;
  z_0 :
  TestFunFC(f_0,&&n_0,Egetd(1,5));
  goto c_1;
  c_1 :
  TestFunFC(r_0,&&q_0,Egetd(1,4));
  Cpush(t_0);
  Rpush(u_0);
  goto h_0;
  u_0 :
  goto s_0;
  t_0 :
  Rpush(w_0);
  goto i_0;
  w_0 :
  goto v_0;
  s_0 :
  Cpop();
  v_0 :
  goto m_0;
  q_0 :
  Rpush(m_0);
  goto i_0;
  n_0 :
  goto i_1;
  i_1 :
  TestFunFC(r_0,&&fail,Egetd(1,4));
  Rpush(m_0);
  goto h_0;
  m_0 :
  goto l_0;
  i_0 :
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl3(x_0,Egetd(1,2),Egetd(1,4),(ATerm)ATmakeAppl0(f_0)));
  Return();
  l_0 :
  goto k_0;
  h_0 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset((ATerm)ATmakeAppl3(x_0,Egetd(1,2),Egetd(1,3),Egetd(1,5)));
  Return();
  k_0 :
  MoveTop(1,6);
  Move(0,1,1,6);
  Epopd(1,6);
  goto c_0;
  d_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_t_2);
  Ccall(_stratego_s_2);
  goto y_0;
  c_0 :
  Cpop();
  y_0 :
  Tset((ATerm)ATmakeAppl3(x_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(j_0),(ATerm)ATmakeAppl0(f_0)));
  Tdupl();
  Tset((ATerm)ATmakeAppl3(x_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl0(j_0),(ATerm)ATmakeAppl0(f_0)));
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
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(f_1),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(g_1,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(g_1,Egetd(1,1),(ATerm)ATmakeAppl0(h_1))),(ATerm)ATmakeAppl0(j_1))));
  Ccall(_stratego_d_3);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(f_1),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(g_1,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(g_1,Egetd(1,1),(ATerm)ATmakeAppl0(h_1))),(ATerm)ATmakeAppl0(j_1))));
  Ccall(_stratego_d_3);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_s_2);
  goto d_1;
  a_1 :
  Cpop();
  d_1 :
  Tpop();
  Ccall(_stratego_w_2);
  goto a_0;
  b_0 :
  Ccall(_stratego_u_2);
  goto k_1;
  a_0 :
  Cpop();
  k_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_s_2)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto t_4;
  t_4 :
  TestFunFC(e_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto u_4;
  u_4 :
  TestFunFC(e_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto v_4;
  v_4 :
  TestFunFC(j_1,&&fail,Egetd(0,6));
  Rpush(m_1);
  goto s_4;
  m_1 :
  goto l_1;
  s_4 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  l_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_t_2)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(f_1),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(g_1,Egetd(0,1),(ATerm)ATmakeAppl0(h_1)),(ATerm)ATmakeAppl0(j_1))));
  Ccall(_stratego_d_3);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_u_2)
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
  Tset((ATerm)ATmakeAppl2(e_1,Egetd(0,1),(ATerm)ATmakeAppl2(e_1,MakeInt(1),(ATerm)ATmakeAppl0(j_1))));
  Ccall(_stratego_v_2);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_v_2)
  _ST_add();
ENDPROC

PROC(_stratego_w_2)
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_1,Egetd(0,1),(ATerm)ATmakeAppl2(e_1,MakeInt(1),(ATerm)ATmakeAppl0(j_1))));
  Ccall(_stratego_v_2);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_x_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("as-pattern1"));
  Ccall(_stratego_t_2);
  Tpop();
  Cpush(o_1);
  Tdupl();
  Cpush(q_1);
  Epushd(1,5);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl2(g_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl0(j_0))));
  MoveTop(1,1);
  goto x_5;
  x_5 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_5;
  y_5 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_5;
  z_5 :
  TestFunFC(r_0,&&fail,Egetd(1,4));
  Rpush(s_1);
  goto v_5;
  s_1 :
  goto r_1;
  v_5 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset((ATerm)ATmakeAppl3(x_0,Egetd(1,2),Egetd(1,3),Egetd(1,5)));
  Tdupl();
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset((ATerm)ATmakeAppl3(x_0,Egetd(1,2),Egetd(1,3),Egetd(1,5)));
  MoveTop(0,1);
  Tpop();
  Return();
  r_1 :
  Epopd(1,5);
  goto p_1;
  q_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_t_2);
  Ccall(_stratego_s_2);
  goto t_1;
  p_1 :
  Cpop();
  t_1 :
  Tset((ATerm)ATmakeAppl3(x_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl2(g_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl0(j_0)),(ATerm)ATmakeAppl0(j_0)));
  Tdupl();
  Tset((ATerm)ATmakeAppl3(x_0,(ATerm)ATmakeAppl0(f_0),(ATerm)ATmakeAppl2(g_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl0(j_0)),(ATerm)ATmakeAppl0(j_0)));
  MoveTop(0,2);
  Tpop();
  Cpush(v_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto u_1;
  v_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(f_1),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(g_1,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(g_1,Egetd(1,1),(ATerm)ATmakeAppl0(h_1))),(ATerm)ATmakeAppl0(j_1))));
  Ccall(_stratego_d_3);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(f_1),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(g_1,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(g_1,Egetd(1,1),(ATerm)ATmakeAppl0(h_1))),(ATerm)ATmakeAppl0(j_1))));
  Ccall(_stratego_d_3);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_s_2);
  goto w_1;
  u_1 :
  Cpop();
  w_1 :
  Tpop();
  Ccall(_stratego_w_2);
  goto n_1;
  o_1 :
  Ccall(_stratego_u_2);
  goto x_1;
  n_1 :
  Cpop();
  x_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_y_2)
  _ST_exit();
ENDPROC

PROC(_stratego_z_2)
  Cpush(z_1);
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto u_7;
  u_7 :
  TestInt(0,1,0,&&fail);
  Rpush(b_2);
  goto t_7;
  b_2 :
  goto a_2;
  t_7 :
  Return();
  a_2 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_y_2);
  goto y_1;
  z_1 :
  Tset(MakeInt(1));
  Ccall(_stratego_y_2);
  goto c_2;
  y_1 :
  Cpop();
  c_2 :
ENDPROC

PROC(_stratego_a_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_7;
  x_7 :
  TestFunFC(j_1,&&fail,Egetd(0,1));
  Rpush(e_2);
  goto w_7;
  e_2 :
  goto d_2;
  w_7 :
  Return();
  d_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_3)
  TestFunTop(e_1);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(f_1),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(g_1,ATmakeString("successes: "),(ATerm)ATmakeAppl2(g_1,Egetd(0,1),(ATerm)ATmakeAppl0(h_1))),(ATerm)ATmakeAppl0(j_1))));
  Ccall(_stratego_d_3);
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
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(f_1),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(g_1,ATmakeString("failures: "),(ATerm)ATmakeAppl2(g_1,Egetd(0,1),(ATerm)ATmakeAppl0(h_1))),(ATerm)ATmakeAppl0(j_1))));
  Ccall(_stratego_d_3);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_a_3);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_c_3)
  Tset((ATerm)ATmakeAppl2(e_1,MakeInt(0),(ATerm)ATmakeAppl2(e_1,MakeInt(0),(ATerm)ATmakeAppl0(j_1))));
ENDPROC

PROC(_stratego_d_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("as-pattern-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl0(f_1),(ATerm)ATmakeAppl2(e_1,(ATerm)ATmakeAppl2(g_1,ATmakeString("test suite: "),(ATerm)ATmakeAppl2(g_1,Egetd(0,1),(ATerm)ATmakeAppl0(h_1))),(ATerm)ATmakeAppl0(j_1))));
  Ccall(_stratego_d_3);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_c_3);
  Ccall(_stratego_x_2);
  Ccall(_stratego_r_2);
  Ccall(_stratego_b_3);
  Ccall(_stratego_z_2);
ENDPROC

DOIT

