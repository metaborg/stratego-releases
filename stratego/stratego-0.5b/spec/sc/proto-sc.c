#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,x_30);
VARDECL(AFun,t_29);
VARDECL(AFun,m_26);
VARDECL(AFun,j_26);
VARDECL(AFun,x_25);
VARDECL(AFun,v_21);
VARDECL(AFun,j_21);
VARDECL(AFun,u_20);
VARDECL(AFun,a_20);
VARDECL(AFun,z_13);
VARDECL(AFun,w_13);
VARDECL(AFun,o_13);
VARDECL(AFun,y_12);
VARDECL(AFun,x_10);
VARDECL(AFun,c_10);
VARDECL(AFun,w_9);
VARDECL(AFun,v_9);
VARDECL(AFun,u_9);
VARDECL(AFun,t_9);
VARDECL(AFun,s_9);
VARDECL(AFun,l_9);
VARDECL(AFun,f_4);
VARDECL(AFun,w_3);
VARDECL(AFun,t_3);
VARDECL(AFun,h_3);
VARDECL(AFun,h_2);
VARDECL(AFun,g_2);
VARDECL(AFun,e_2);
VARDECL(AFun,u_1);
VARDECL(AFun,c_1);
VARDECL(AFun,t_0);
VARDECL(AFun,j_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_y_14);
PROCDECL(_stratego_z_14);
PROCDECL(_stratego_c_15);
PROCDECL(_stratego_d_15);
PROCDECL(_stratego_e_15);
PROCDECL(_stratego_f_15);
PROCDECL(_stratego_g_15);
PROCDECL(_stratego_h_15);
PROCDECL(_stratego_i_15);
PROCDECL(_stratego_j_15);
PROCDECL(_stratego_k_15);
PROCDECL(_stratego_l_15);
PROCDECL(_stratego_m_15);
PROCDECL(_stratego_n_15);
PROCDECL(_stratego_o_15);
PROCDECL(_stratego_p_15);
PROCDECL(_stratego_q_15);
PROCDECL(_stratego_r_15);
PROCDECL(_stratego_s_15);
PROCDECL(_stratego_t_15);
PROCDECL(_stratego_u_15);
PROCDECL(_stratego_v_15);
PROCDECL(_stratego_w_15);
PROCDECL(_stratego_x_15);
PROCDECL(_stratego_y_15);
PROCDECL(_stratego_z_15);
PROCDECL(_stratego_a_16);
PROCDECL(_stratego_b_16);
PROCDECL(_stratego_c_16);
PROCDECL(_stratego_d_16);
PROCDECL(_stratego_e_16);
PROCDECL(_stratego_f_16);
PROCDECL(_stratego_g_16);
PROCDECL(_stratego_h_16);
PROCDECL(_stratego_i_16);
PROCDECL(_stratego_j_16);
PROCDECL(_stratego_k_16);
PROCDECL(_stratego_l_16);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(x_30,ATmakeAFun("Undefined",1,0));
  MOVE(t_29,ATmakeAFun("Program",1,0));
  MOVE(m_26,ATmakeAFun("NORM",0,0));
  MOVE(j_26,ATmakeAFun("CC",0,0));
  MOVE(x_25,ATmakeAFun("Ignore",0,0));
  MOVE(v_21,ATmakeAFun("Statistics",0,0));
  MOVE(j_21,ATmakeAFun("Binary",0,0));
  MOVE(u_20,ATmakeAFun("Input",1,0));
  MOVE(a_20,ATmakeAFun("Silent",0,0));
  MOVE(z_13,ATmakeAFun("Help",0,0));
  MOVE(w_13,ATmakeAFun("Version",0,0));
  MOVE(o_13,ATmakeAFun("DeclVersion",1,0));
  MOVE(y_12,ATmakeAFun("Verbose",0,0));
  MOVE(x_10,ATmakeAFun("InclDir",1,0));
  MOVE(c_10,ATmakeAFun("AST",0,0));
  MOVE(w_9,ATmakeAFun("SVar",1,0));
  MOVE(v_9,ATmakeAFun("Call",2,0));
  MOVE(u_9,ATmakeAFun("SDef",3,0));
  MOVE(t_9,ATmakeAFun("Strategies",1,0));
  MOVE(s_9,ATmakeAFun("Specification",1,0));
  MOVE(l_9,ATmakeAFun("Main",1,0));
  MOVE(f_4,ATmakeAFun("ExecDir",1,0));
  MOVE(w_3,ATmakeAFun("FRONTEND",0,0));
  MOVE(t_3,ATmakeAFun("FUSION",0,0));
  MOVE(h_3,ATmakeAFun("CInclDir",1,0));
  MOVE(h_2,ATmakeAFun("Output",1,0));
  MOVE(g_2,ATmakeAFun("CLibDir",1,0));
  MOVE(e_2,ATmakeAFun("Dir",1,0));
  MOVE(u_1,ATmakeAFun("stderr",0,0));
  MOVE(c_1,ATmakeAFun("Nil",0,0));
  MOVE(t_0,ATmakeAFun("TCons",2,0));
  MOVE(j_0,ATmakeAFun("Cons",2,0));
  MOVE(c_0,ATmakeAFun("TNil",0,0));
ENDPROC

PROC(_stratego_y_14)
  _ST_exit();
ENDPROC

PROC(_stratego_z_14)
  _ST_printnl();
ENDPROC

PROC(_stratego_c_15)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_0;
  n_0 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  Rpush(b_0);
  goto v_6;
  b_0 :
  goto a_0;
  v_6 :
  Return();
  a_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_15)
  Rpush(d_0);
  d_8 :
  Cpush(f_0);
  Ccall(_stratego_j_16);
  goto e_0;
  f_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto x_6;
  x_6 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(i_0);
  goto e_8;
  i_0 :
  goto h_0;
  e_8 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(k_0);
  f_8 :
  Cpush(m_0);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_0);
  goto f_8;
  o_0 :
  AllBuild();
  goto l_0;
  m_0 :
  Ccall(_stratego_j_16);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_0);
  goto d_8;
  q_0 :
  goto p_0;
  l_0 :
  Cpop();
  p_0 :
  Return();
  k_0 :
  Return();
  h_0 :
  Epopd(0,3);
  goto g_0;
  e_0 :
  Cpop();
  g_0 :
  Return();
  d_0 :
ENDPROC

PROC(_stratego_e_15)
  Epushd(0,5);
  MoveTop(0,1);
  goto x_11;
  x_11 :
  TestFunFC(t_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto y_11;
  y_11 :
  TestFunFC(t_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto z_11;
  z_11 :
  TestFunFC(c_0,&&fail,Egetd(0,5));
  Rpush(s_0);
  goto c_14;
  s_0 :
  goto r_0;
  c_14 :
  Move(0,2,0,4);
  Return();
  r_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_f_15)
  Epushd(0,9);
  MoveTop(0,1);
  goto g_14;
  g_14 :
  TestFunFC(t_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto l_14;
  l_14 :
  TestFunFC(t_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto m_14;
  m_14 :
  TestFunFC(t_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto a_15;
  a_15 :
  TestFunFC(j_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto b_15;
  b_15 :
  TestFunFC(c_0,&&fail,Egetd(0,9));
  goto m_16;
  m_16 :
  TestInt(0,7,32,&&w_0);
  Cpush(y_0);
  Rpush(z_0);
  goto f_17;
  z_0 :
  goto x_0;
  y_0 :
  Rpush(b_1);
  goto g_17;
  b_1 :
  goto a_1;
  x_0 :
  Cpop();
  a_1 :
  goto v_0;
  w_0 :
  Rpush(v_0);
  goto g_17;
  v_0 :
  goto u_0;
  f_17 :
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_g_15);
  Ccall(_stratego_f_16);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,8);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,Egetd(1,1),Egetd(0,2)),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,Egetd(0,8),(ATerm)ATmakeAppl0(c_0)))));
  Epopd(1,1);
  Return();
  g_17 :
  Tdupl();
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,7),(ATerm)ATmakeAppl2(t_0,MakeInt(32),(ATerm)ATmakeAppl0(c_0))));
  Cpush(d_1);
  Tdupl();
  Ccall(_stratego_e_15);
  Cpop();
  Crestore();
  Cjump();
  d_1 :
  Tpop();
  NotNULLd(0,2);
  NotNULLd(0,7);
  NotNULLd(0,4);
  NotNULLd(0,8);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,2),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,Egetd(0,7),Egetd(0,4)),(ATerm)ATmakeAppl2(t_0,Egetd(0,8),(ATerm)ATmakeAppl0(c_0)))));
  Return();
  u_0 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_g_15)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl0(c_0))));
  Rpush(f_1);
  m_18 :
  Cpush(h_1);
  Epushd(1,7);
  MoveTop(1,1);
  goto k_17;
  k_17 :
  TestFunFC(t_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto l_17;
  l_17 :
  TestFunFC(j_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto m_17;
  m_17 :
  TestFunFC(t_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto n_17;
  n_17 :
  TestFunFC(c_0,&&fail,Egetd(1,7));
  Rpush(j_1);
  goto n_18;
  j_1 :
  goto i_1;
  n_18 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(1,4),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,Egetd(1,3),Egetd(1,6)),(ATerm)ATmakeAppl0(c_0))));
  Rpush(k_1);
  goto m_18;
  k_1 :
  Return();
  i_1 :
  Epopd(1,7);
  goto g_1;
  h_1 :
  goto l_1;
  g_1 :
  Cpop();
  l_1 :
  Return();
  f_1 :
  MoveTop(0,2);
  goto p_17;
  p_17 :
  TestFunFC(t_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto q_17;
  q_17 :
  TestFunFC(c_1,&&fail,Egetd(0,3));
  goto r_17;
  r_17 :
  TestFunFC(t_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto s_17;
  s_17 :
  TestFunFC(c_0,&&fail,Egetd(0,6));
  Rpush(m_1);
  goto o_18;
  m_1 :
  goto e_1;
  o_18 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  e_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_h_15)
  Epushd(0,1);
  Ccall(_stratego_g_16);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl0(c_0)))));
  Rpush(n_1);
  l_19 :
  Cpush(p_1);
  Epushd(1,7);
  MoveTop(1,1);
  goto s_18;
  s_18 :
  TestFunFC(t_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto t_18;
  t_18 :
  TestFunFC(t_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto u_18;
  u_18 :
  TestFunFC(t_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto v_18;
  v_18 :
  TestFunFC(c_1,&&fail,Egetd(1,6));
  goto w_18;
  w_18 :
  TestFunFC(c_0,&&fail,Egetd(1,7));
  Rpush(r_1);
  goto m_19;
  r_1 :
  goto q_1;
  m_19 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_g_15);
  Ccall(_stratego_f_16);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(2,1),Egetd(1,2)));
  Ccall(_stratego_g_15);
  Epopd(2,1);
  Return();
  q_1 :
  Epopd(1,7);
  goto o_1;
  p_1 :
  Ccall(_stratego_f_15);
  Rpush(t_1);
  goto l_19;
  t_1 :
  goto s_1;
  o_1 :
  Cpop();
  s_1 :
  Return();
  n_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_15)
  Epushd(0,5);
  Tdupl();
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("linking"),(ATerm)ATmakeAppl0(c_1)),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_z_14);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(v_1);
  r_21 :
  Cpush(x_1);
  Ccall(_stratego_j_16);
  goto w_1;
  x_1 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Cpush(a_2);
  Epushd(1,2);
  MoveTop(1,1);
  goto r_19;
  r_19 :
  TestFunFC(e_2,&&d_2,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(c_2);
  goto s_21;
  d_2 :
  TestFunFC(g_2,&&f_2,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(c_2);
  goto t_21;
  f_2 :
  TestFunFC(h_2,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(c_2);
  goto u_21;
  c_2 :
  goto b_2;
  s_21 :
  Move(0,1,1,2);
  Return();
  t_21 :
  Move(0,2,1,2);
  Return();
  u_21 :
  Move(0,3,1,2);
  Return();
  b_2 :
  Epopd(1,2);
  goto z_1;
  a_2 :
  goto i_2;
  z_1 :
  Cpop();
  i_2 :
  OneNextSon();
  Rpush(j_2);
  goto r_21;
  j_2 :
  AllBuild();
  goto y_1;
  w_1 :
  Cpop();
  y_1 :
  Return();
  v_1 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_w_15);
  MoveTop(1,1);
  Move(0,4,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Cpush(l_2);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  goto k_2;
  l_2 :
  goto m_2;
  k_2 :
  Cpop();
  m_2 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(""));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_w_15);
  MoveTop(1,1);
  Move(0,5,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(n_2);
  x_21 :
  Cpush(p_2);
  Ccall(_stratego_j_16);
  goto o_2;
  p_2 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_15);
  OneNextSon();
  Rpush(r_2);
  goto x_21;
  r_2 :
  AllBuild();
  goto q_2;
  o_2 :
  Cpop();
  q_2 :
  Return();
  n_2 :
  Ccall(_stratego_d_15);
  MoveTop(1,1);
  NotNULLd(0,4);
  NotNULLd(0,5);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,Egetd(0,4),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(0,5),(ATerm)ATmakeAppl0(c_1)))),(ATerm)ATmakeAppl2(t_0,Egetd(1,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,2);
  goto f_20;
  f_20 :
  TestFunFC(t_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto g_20;
  g_20 :
  TestFunFC(t_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto h_20;
  h_20 :
  TestFunFC(c_0,&&fail,Egetd(1,6));
  Rpush(t_2);
  goto z_21;
  t_2 :
  goto s_2;
  z_21 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(u_2);
  a_22 :
  Cpush(w_2);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_2);
  goto a_22;
  x_2 :
  AllBuild();
  goto v_2;
  w_2 :
  Ccall(_stratego_j_16);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  goto y_2;
  v_2 :
  Cpop();
  y_2 :
  Return();
  u_2 :
  Ccall(_stratego_j_15);
  Return();
  s_2 :
  Epopd(1,6);
  Tpop();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_15)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,ATmakeString("gcc"),(ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_v_15);
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_15)
  Epushd(0,3);
  Tdupl();
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("compiling"),(ATerm)ATmakeAppl0(c_1)),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_z_14);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(z_2);
  b_23 :
  Cpush(b_3);
  Ccall(_stratego_j_16);
  goto a_3;
  b_3 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Cpush(e_3);
  Epushd(1,2);
  MoveTop(1,1);
  goto g_22;
  g_22 :
  TestFunFC(h_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(g_3);
  goto c_23;
  g_3 :
  goto f_3;
  c_23 :
  Move(0,1,1,2);
  Return();
  f_3 :
  Epopd(1,2);
  goto d_3;
  e_3 :
  goto i_3;
  d_3 :
  Cpop();
  i_3 :
  OneNextSon();
  Rpush(j_3);
  goto b_23;
  j_3 :
  AllBuild();
  goto c_3;
  a_3 :
  Cpop();
  c_3 :
  Return();
  z_2 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_w_15);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".o"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_w_15);
  MoveTop(1,1);
  Move(0,3,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-c"),(ATerm)ATmakeAppl2(j_0,Egetd(0,2),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(0,3),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,1);
  goto k_22;
  k_22 :
  TestFunFC(t_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_22;
  l_22 :
  TestFunFC(t_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto m_22;
  m_22 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(l_3);
  goto f_23;
  l_3 :
  goto k_3;
  f_23 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(m_3);
  g_23 :
  Cpush(o_3);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_3);
  goto g_23;
  p_3 :
  AllBuild();
  goto n_3;
  o_3 :
  Ccall(_stratego_j_16);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto q_3;
  n_3 :
  Cpop();
  q_3 :
  Return();
  m_3 :
  Ccall(_stratego_j_15);
  Return();
  k_3 :
  Epopd(1,5);
  Tpop();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Epopd(0,3);
ENDPROC

PROC(_stratego_l_15)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_23;
  i_23 :
  TestFunFC(t_3,&&fail,Egetd(0,1));
  Rpush(s_3);
  goto k_23;
  s_3 :
  goto r_3;
  k_23 :
  Return();
  r_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_15)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_1),(ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_z_14);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_n_15)
  Tdupl();
  Ccall(_stratego_m_15);
  Tset(MakeInt(1));
  Ccall(_stratego_y_14);
  Tpop();
ENDPROC

PROC(_stratego_o_15)
  Epushd(0,1);
  MoveTop(0,1);
  goto y_23;
  y_23 :
  TestFunFC(w_3,&&fail,Egetd(0,1));
  Rpush(v_3);
  goto a_24;
  v_3 :
  goto u_3;
  a_24 :
  Return();
  u_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_15)
  Epushd(0,3);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(x_3);
  u_41 :
  Cpush(z_3);
  Ccall(_stratego_j_16);
  goto y_3;
  z_3 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Cpush(c_4);
  Epushd(1,2);
  MoveTop(1,1);
  goto c_24;
  c_24 :
  TestFunFC(f_4,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(e_4);
  goto v_41;
  e_4 :
  goto d_4;
  v_41 :
  Move(0,1,1,2);
  Return();
  d_4 :
  Epopd(1,2);
  goto b_4;
  c_4 :
  goto g_4;
  b_4 :
  Cpop();
  g_4 :
  OneNextSon();
  Rpush(h_4);
  goto u_41;
  h_4 :
  AllBuild();
  goto a_4;
  y_3 :
  Cpop();
  a_4 :
  Return();
  x_3 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".s1"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/frontend"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,ATmakeString("/frontend"),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset((ATerm)ATmakeAppl0(c_1));
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(j_0,Egetd(1,1),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(1,2),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto l_24;
  l_24 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto m_24;
  m_24 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto n_24;
  n_24 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(j_4);
  goto c_42;
  j_4 :
  goto i_4;
  c_42 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(k_4);
  d_42 :
  Cpush(m_4);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_4);
  goto d_42;
  n_4 :
  AllBuild();
  goto l_4;
  m_4 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto o_4;
  l_4 :
  Cpop();
  o_4 :
  Return();
  k_4 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  i_4 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Cpush(q_4);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(r_4);
  f_42 :
  Cpush(t_4);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_15);
  OneNextSon();
  AllBuild();
  goto s_4;
  t_4 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_4);
  goto f_42;
  v_4 :
  AllBuild();
  goto u_4;
  s_4 :
  Cpop();
  u_4 :
  Return();
  r_4 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Cpush(x_4);
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".sdefs"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/extract-all"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,ATmakeString("/extract-all"),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset((ATerm)ATmakeAppl0(c_1));
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(j_0,Egetd(1,1),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(1,2),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto w_24;
  w_24 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto x_24;
  x_24 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto y_24;
  y_24 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(z_4);
  goto m_42;
  z_4 :
  goto y_4;
  m_42 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(a_5);
  n_42 :
  Cpush(c_5);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_5);
  goto n_42;
  d_5 :
  AllBuild();
  goto b_5;
  c_5 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto e_5;
  b_5 :
  Cpop();
  e_5 :
  Return();
  a_5 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  y_4 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Epopd(1,2);
  goto w_4;
  x_4 :
  Tset((ATerm)ATmakeAppl2(j_0,ATmakeString("extracting all definitions failed"),(ATerm)ATmakeAppl0(c_1)));
  Ccall(_stratego_n_15);
  goto f_5;
  w_4 :
  Cpop();
  f_5 :
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,3,1,1);
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("abstract syntax (after frontend) written to "),(ATerm)ATmakeAppl2(j_0,Egetd(0,2),(ATerm)ATmakeAppl2(j_0,Egetd(0,3),(ATerm)ATmakeAppl0(c_1)))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_z_14);
  Tset(MakeInt(0));
  Ccall(_stratego_y_14);
  goto p_4;
  q_4 :
  goto g_5;
  p_4 :
  Cpop();
  g_5 :
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(1,8);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".s2"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/extract"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,ATmakeString("/extract"),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset((ATerm)ATmakeAppl0(c_1));
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(j_0,Egetd(1,1),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(1,2),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto j_25;
  j_25 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto k_25;
  k_25 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto l_25;
  l_25 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(i_5);
  goto x_42;
  i_5 :
  goto h_5;
  x_42 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(j_5);
  y_42 :
  Cpush(l_5);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_5);
  goto y_42;
  m_5 :
  AllBuild();
  goto k_5;
  l_5 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto n_5;
  k_5 :
  Cpop();
  n_5 :
  Return();
  j_5 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  h_5 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,3,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".s"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,4,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/inline"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,ATmakeString("/inline"),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset((ATerm)ATmakeAppl0(c_1));
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(j_0,Egetd(1,3),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(1,4),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto u_25;
  u_25 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto v_25;
  v_25 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto w_25;
  w_25 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(p_5);
  goto g_43;
  p_5 :
  goto o_5;
  g_43 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(q_5);
  h_43 :
  Cpush(s_5);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_5);
  goto h_43;
  t_5 :
  AllBuild();
  goto r_5;
  s_5 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto u_5;
  r_5 :
  Cpop();
  u_5 :
  Return();
  q_5 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  o_5 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,5,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,6,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/Stratego-Normal-Format"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,ATmakeString("/Stratego-Normal-Format"),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset((ATerm)ATmakeAppl0(c_1));
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(j_0,Egetd(1,5),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(1,6),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto f_26;
  f_26 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto g_26;
  g_26 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto h_26;
  h_26 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(w_5);
  goto p_43;
  w_5 :
  goto v_5;
  p_43 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(x_5);
  q_43 :
  Cpush(z_5);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_6);
  goto q_43;
  a_6 :
  AllBuild();
  goto y_5;
  z_5 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto b_6;
  y_5 :
  Cpop();
  b_6 :
  Return();
  x_5 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  v_5 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,7,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".so1"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,8,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/optimize1"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,ATmakeString("/optimize1"),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset((ATerm)ATmakeAppl0(c_1));
  NotNULLd(1,7);
  NotNULLd(1,8);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(j_0,Egetd(1,7),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(1,8),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto q_26;
  q_26 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto r_26;
  r_26 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto s_26;
  s_26 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(d_6);
  goto y_43;
  d_6 :
  goto c_6;
  y_43 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(e_6);
  z_43 :
  Cpush(g_6);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_6);
  goto z_43;
  h_6 :
  AllBuild();
  goto f_6;
  g_6 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto i_6;
  f_6 :
  Cpop();
  i_6 :
  Return();
  e_6 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  c_6 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Epopd(1,8);
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Cpush(k_6);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(l_6);
  b_44 :
  Cpush(n_6);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_15);
  OneNextSon();
  AllBuild();
  goto m_6;
  n_6 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_6);
  goto b_44;
  p_6 :
  AllBuild();
  goto o_6;
  m_6 :
  Cpop();
  o_6 :
  Return();
  l_6 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".so2"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/fusion"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,ATmakeString("/fusion"),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset((ATerm)ATmakeAppl0(c_1));
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(j_0,Egetd(1,1),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(1,2),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto b_27;
  b_27 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto c_27;
  c_27 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto d_27;
  d_27 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(r_6);
  goto i_44;
  r_6 :
  goto q_6;
  i_44 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(s_6);
  j_44 :
  Cpush(w_6);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_6);
  goto j_44;
  z_6 :
  AllBuild();
  goto t_6;
  w_6 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto a_7;
  t_6 :
  Cpop();
  a_7 :
  Return();
  s_6 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  q_6 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  goto j_6;
  k_6 :
  goto b_7;
  j_6 :
  Cpop();
  b_7 :
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(1,14);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".so3"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/compile-match"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,ATmakeString("/compile-match"),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset((ATerm)ATmakeAppl0(c_1));
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(j_0,Egetd(1,1),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(1,2),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto m_27;
  m_27 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto n_27;
  n_27 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto o_27;
  o_27 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(f_7);
  goto r_44;
  f_7 :
  goto c_7;
  r_44 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(g_7);
  s_44 :
  Cpush(i_7);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_7);
  goto s_44;
  j_7 :
  AllBuild();
  goto h_7;
  i_7 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto k_7;
  h_7 :
  Cpop();
  k_7 :
  Return();
  g_7 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  c_7 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,3,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".so4"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,4,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/optimize2"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,ATmakeString("/optimize2"),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset((ATerm)ATmakeAppl0(c_1));
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(j_0,Egetd(1,3),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(1,4),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto x_27;
  x_27 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto y_27;
  y_27 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto z_27;
  z_27 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(m_7);
  goto a_45;
  m_7 :
  goto l_7;
  a_45 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(n_7);
  b_45 :
  Cpush(p_7);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_7);
  goto b_45;
  q_7 :
  AllBuild();
  goto o_7;
  p_7 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto r_7;
  o_7 :
  Cpop();
  r_7 :
  Return();
  n_7 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  l_7 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,5,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,6,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/Stratego-Optimized-Format"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,ATmakeString("/Stratego-Optimized-Format"),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset((ATerm)ATmakeAppl0(c_1));
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(j_0,Egetd(1,5),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(1,6),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto i_28;
  i_28 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto j_28;
  j_28 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto k_28;
  k_28 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(t_7);
  goto j_45;
  t_7 :
  goto s_7;
  j_45 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(u_7);
  k_45 :
  Cpush(w_7);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_7);
  goto k_45;
  x_7 :
  AllBuild();
  goto v_7;
  w_7 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto y_7;
  v_7 :
  Cpop();
  y_7 :
  Return();
  u_7 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  s_7 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,7,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".i1"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,8,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/backend"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,ATmakeString("/backend"),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset((ATerm)ATmakeAppl0(c_1));
  NotNULLd(1,7);
  NotNULLd(1,8);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(j_0,Egetd(1,7),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(1,8),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto t_28;
  t_28 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto u_28;
  u_28 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto v_28;
  v_28 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(a_8);
  goto s_45;
  a_8 :
  goto z_7;
  s_45 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(b_8);
  t_45 :
  Cpush(g_8);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_8);
  goto t_45;
  h_8 :
  AllBuild();
  goto c_8;
  g_8 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto i_8;
  c_8 :
  Cpop();
  i_8 :
  Return();
  b_8 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  z_7 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,9,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,10,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/Abstract-Machine-Format"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,ATmakeString("/Abstract-Machine-Format"),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset((ATerm)ATmakeAppl0(c_1));
  NotNULLd(1,9);
  NotNULLd(1,10);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(j_0,Egetd(1,9),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(1,10),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto e_29;
  e_29 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto f_29;
  f_29 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto g_29;
  g_29 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(k_8);
  goto b_46;
  k_8 :
  goto j_8;
  b_46 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(l_8);
  c_46 :
  Cpush(n_8);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_8);
  goto c_46;
  o_8 :
  AllBuild();
  goto m_8;
  n_8 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto p_8;
  m_8 :
  Cpop();
  p_8 :
  Return();
  l_8 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  j_8 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,11,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".i"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,12,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/postprocess"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,ATmakeString("/postprocess"),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset((ATerm)ATmakeAppl0(c_1));
  NotNULLd(1,11);
  NotNULLd(1,12);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(j_0,Egetd(1,11),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(1,12),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto p_29;
  p_29 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto q_29;
  q_29 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto r_29;
  r_29 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(r_8);
  goto k_46;
  r_8 :
  goto q_8;
  k_46 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(s_8);
  l_46 :
  Cpush(u_8);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_8);
  goto l_46;
  v_8 :
  AllBuild();
  goto t_8;
  u_8 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto w_8;
  t_8 :
  Cpop();
  w_8 :
  Return();
  s_8 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  q_8 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,13,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".c"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,14,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,6);
  Tset(ATmakeString("/pp-instructions"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,ATmakeString("/pp-instructions"),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset((ATerm)ATmakeAppl0(c_1));
  NotNULLd(1,13);
  NotNULLd(1,14);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(j_0,Egetd(1,13),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(1,14),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto a_30;
  a_30 :
  TestFunFC(t_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto b_30;
  b_30 :
  TestFunFC(t_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto c_30;
  c_30 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(y_8);
  goto t_46;
  y_8 :
  goto x_8;
  t_46 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(z_8);
  u_46 :
  Cpush(b_9);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_9);
  goto u_46;
  c_9 :
  AllBuild();
  goto a_9;
  b_9 :
  Ccall(_stratego_j_16);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto d_9;
  a_9 :
  Cpop();
  d_9 :
  Return();
  z_8 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  x_8 :
  Ccall(_stratego_v_15);
  Epopd(2,6);
  Tpop();
  Epopd(1,14);
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Epopd(0,3);
ENDPROC

PROC(_stratego_q_15)
  Epushd(0,1);
  Cpush(f_9);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(g_9);
  a_49 :
  Cpush(i_9);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_46;
  x_46 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_46;
  y_46 :
  TestFunFC(l_9,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(k_9);
  goto b_49;
  k_9 :
  goto j_9;
  b_49 :
  Move(0,1,1,3);
  Return();
  j_9 :
  Epopd(1,4);
  goto h_9;
  i_9 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_9);
  goto a_49;
  n_9 :
  AllBuild();
  goto m_9;
  h_9 :
  Cpop();
  m_9 :
  Return();
  g_9 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".tree1"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(1,1),(ATerm)ATmakeAppl2(t_0,Egetd(1,2),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,1);
  goto g_47;
  g_47 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto h_47;
  h_47 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto i_47;
  i_47 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(p_9);
  goto e_49;
  p_9 :
  goto o_9;
  e_49 :
  Epushd(3,1);
  Tdupl();
  Epushd(4,2);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_u_15);
  MoveTop(4,1);
  goto f_47;
  f_47 :
  TestFunFC(s_9,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  Rpush(r_9);
  goto f_49;
  r_9 :
  goto q_9;
  f_49 :
  NotNULLd(0,1);
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl1(s_9,(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(t_9,(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl3(u_9,ATmakeString("main"),(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(v_9,(ATerm)ATmakeAppl1(w_9,Egetd(0,1)),(ATerm)ATmakeAppl0(c_1))),(ATerm)ATmakeAppl0(c_1))),Egetd(4,2))));
  Tdupl();
  NotNULLd(0,1);
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl1(s_9,(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(t_9,(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl3(u_9,ATmakeString("main"),(ATerm)ATmakeAppl0(c_1),(ATerm)ATmakeAppl2(v_9,(ATerm)ATmakeAppl1(w_9,Egetd(0,1)),(ATerm)ATmakeAppl0(c_1))),(ATerm)ATmakeAppl0(c_1))),Egetd(4,2))));
  MoveTop(3,1);
  Tpop();
  Return();
  q_9 :
  Epopd(4,2);
  Tpop();
  Tdupl();
  NotNULLd(2,4);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,4),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_t_15);
  Tpop();
  Epopd(3,1);
  Return();
  o_9 :
  Epopd(2,5);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  goto e_9;
  f_9 :
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".tree1"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(1,1),(ATerm)ATmakeAppl2(t_0,Egetd(1,2),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,1);
  goto n_47;
  n_47 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_47;
  o_47 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_47;
  p_47 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(z_9);
  goto k_49;
  z_9 :
  goto y_9;
  k_49 :
  Epushd(3,1);
  Tdupl();
  Epushd(4,1);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_u_15);
  MoveTop(4,1);
  Move(3,1,4,1);
  Epopd(4,1);
  Tpop();
  Tdupl();
  NotNULLd(2,4);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,4),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_t_15);
  Tpop();
  Epopd(3,1);
  Return();
  y_9 :
  Epopd(2,5);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  goto x_9;
  e_9 :
  Cpop();
  x_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_15)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_49;
  n_49 :
  TestFunFC(c_10,&&fail,Egetd(0,1));
  Rpush(b_10);
  goto p_49;
  b_10 :
  goto a_10;
  p_49 :
  Return();
  a_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_15)
  Epushd(0,2);
  Cpush(e_10);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(f_10);
  w_49 :
  Cpush(h_10);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_15);
  OneNextSon();
  AllBuild();
  goto g_10;
  h_10 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_10);
  goto w_49;
  j_10 :
  AllBuild();
  goto i_10;
  g_10 :
  Cpop();
  i_10 :
  Return();
  f_10 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("abstract syntax (after parsing) written to "),(ATerm)ATmakeAppl2(j_0,Egetd(0,1),(ATerm)ATmakeAppl2(j_0,Egetd(0,2),(ATerm)ATmakeAppl0(c_1)))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_z_14);
  Tset(MakeInt(0));
  Ccall(_stratego_y_14);
  goto d_10;
  e_10 :
  goto k_10;
  d_10 :
  Cpop();
  k_10 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_t_15)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_u_15)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_v_15)
  _ST_call();
ENDPROC

PROC(_stratego_w_15)
  Epushd(0,5);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_16);
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_16);
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto a_50;
  a_50 :
  TestFunFC(t_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto b_50;
  b_50 :
  TestFunFC(t_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_50;
  c_50 :
  TestFunFC(c_0,&&fail,Egetd(0,5));
  Rpush(m_10);
  goto k_50;
  m_10 :
  goto l_10;
  k_50 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(n_10);
  l_50 :
  Cpush(p_10);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_10);
  goto l_50;
  q_10 :
  AllBuild();
  goto o_10;
  p_10 :
  Ccall(_stratego_j_16);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto r_10;
  o_10 :
  Cpop();
  r_10 :
  Return();
  n_10 :
  Ccall(_stratego_f_16);
  Return();
  l_10 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_x_15)
  Epushd(0,3);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(s_10);
  u_54 :
  Cpush(u_10);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_50;
  n_50 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_50;
  o_50 :
  TestFunFC(x_10,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(w_10);
  goto v_54;
  w_10 :
  goto v_10;
  v_54 :
  Move(0,2,1,3);
  Return();
  v_10 :
  Epopd(1,4);
  goto t_10;
  u_10 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_10);
  goto u_54;
  z_10 :
  AllBuild();
  goto y_10;
  t_10 :
  Cpop();
  y_10 :
  Return();
  s_10 :
  Rpush(a_11);
  w_54 :
  Cpush(c_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto q_50;
  q_50 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto r_50;
  r_50 :
  TestFunFC(f_4,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_11);
  goto x_54;
  e_11 :
  goto d_11;
  x_54 :
  Move(0,1,1,3);
  Return();
  d_11 :
  Epopd(1,4);
  goto b_11;
  c_11 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_11);
  goto w_54;
  g_11 :
  AllBuild();
  goto f_11;
  b_11 :
  Cpop();
  f_11 :
  Return();
  a_11 :
  Cpush(i_11);
  Rpush(j_11);
  y_54 :
  Cpush(l_11);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_50;
  t_50 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_50;
  u_50 :
  TestFunFC(h_2,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(n_11);
  goto z_54;
  n_11 :
  goto m_11;
  z_54 :
  Move(0,3,1,3);
  Return();
  m_11 :
  Epopd(1,4);
  goto k_11;
  l_11 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_11);
  goto y_54;
  p_11 :
  AllBuild();
  goto o_11;
  k_11 :
  Cpop();
  o_11 :
  Return();
  j_11 :
  goto h_11;
  i_11 :
  goto q_11;
  h_11 :
  Cpop();
  q_11 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".tree"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  Tdupl();
  Epushd(2,12);
  Tset(ATmakeString("/pack-stratego"));
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,1),(ATerm)ATmakeAppl2(t_0,ATmakeString("/pack-stratego"),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(2,1);
  Tset((ATerm)ATmakeAppl0(c_0));
  Cpush(s_11);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(j_0,ATmakeString("-dep"),(ATerm)ATmakeAppl2(j_0,Egetd(0,3),(ATerm)ATmakeAppl0(c_1))));
  goto r_11;
  s_11 :
  Tset((ATerm)ATmakeAppl0(c_1));
  goto t_11;
  r_11 :
  Cpop();
  t_11 :
  MoveTop(2,2);
  NotNULLd(2,2);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,2),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("--silent"),Egetd(0,2)),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,3);
  goto d_51;
  d_51 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto e_51;
  e_51 :
  TestFunFC(t_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto f_51;
  f_51 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  Rpush(v_11);
  goto g_55;
  v_11 :
  goto u_11;
  g_55 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(w_11);
  h_55 :
  Cpush(d_12);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_12);
  goto h_55;
  e_12 :
  AllBuild();
  goto c_12;
  d_12 :
  Ccall(_stratego_j_16);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto f_12;
  c_12 :
  Cpop();
  f_12 :
  Return();
  w_11 :
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(j_0,Egetd(1,1),(ATerm)ATmakeAppl2(j_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(j_0,Egetd(1,2),(ATerm)ATmakeAppl0(c_1))))),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  u_11 :
  MoveTop(2,8);
  goto i_51;
  i_51 :
  TestFunFC(t_0,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  MoveArg(2,10,2,8,1);
  goto j_51;
  j_51 :
  TestFunFC(t_0,&&fail,Egetd(2,10));
  MoveArg(2,11,2,10,0);
  MoveArg(2,12,2,10,1);
  goto k_51;
  k_51 :
  TestFunFC(c_0,&&fail,Egetd(2,12));
  Rpush(h_12);
  goto j_55;
  h_12 :
  goto g_12;
  j_55 :
  Epushd(3,1);
  NotNULLd(2,9);
  Tset(Egetd(2,9));
  Rpush(i_12);
  k_55 :
  Cpush(k_12);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_12);
  goto k_55;
  l_12 :
  AllBuild();
  goto j_12;
  k_12 :
  Ccall(_stratego_j_16);
  NotNULLd(2,11);
  Tset(Egetd(2,11));
  goto m_12;
  j_12 :
  Cpop();
  m_12 :
  Return();
  i_12 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(3,1);
  Return();
  g_12 :
  Ccall(_stratego_v_15);
  Epopd(2,12);
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Cpush(o_12);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(1,5);
  MoveTop(1,1);
  goto x_51;
  x_51 :
  TestFunFC(t_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_51;
  y_51 :
  TestFunFC(t_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_51;
  z_51 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(q_12);
  goto m_55;
  q_12 :
  goto p_12;
  m_55 :
  Epushd(2,5);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".tree"));
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  MoveTop(2,1);
  goto u_51;
  u_51 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_51;
  v_51 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_51;
  w_51 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(s_12);
  goto n_55;
  s_12 :
  goto r_12;
  n_55 :
  Tdupl();
  Epushd(3,7);
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(1,2),(ATerm)ATmakeAppl2(t_0,Egetd(1,4),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(2,2),(ATerm)ATmakeAppl2(t_0,Egetd(2,4),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_15);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(3,1),(ATerm)ATmakeAppl2(t_0,Egetd(3,2),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(3,3);
  goto r_51;
  r_51 :
  TestFunFC(t_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto s_51;
  s_51 :
  TestFunFC(t_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto t_51;
  t_51 :
  TestFunFC(c_0,&&fail,Egetd(3,7));
  Rpush(u_12);
  goto q_55;
  u_12 :
  goto t_12;
  q_55 :
  Epushd(4,1);
  Tdupl();
  Epushd(5,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Ccall(_stratego_u_15);
  MoveTop(5,1);
  Move(4,1,5,1);
  Epopd(5,1);
  Tpop();
  Tdupl();
  NotNULLd(3,6);
  NotNULLd(4,1);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(3,6),(ATerm)ATmakeAppl2(t_0,Egetd(4,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_t_15);
  Tpop();
  Epopd(4,1);
  Return();
  t_12 :
  Epopd(3,7);
  Tpop();
  Return();
  r_12 :
  Epopd(2,5);
  Return();
  p_12 :
  Epopd(1,5);
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  goto n_12;
  o_12 :
  goto v_12;
  n_12 :
  Cpop();
  v_12 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_y_15)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_55;
  t_55 :
  TestFunFC(y_12,&&fail,Egetd(0,1));
  Rpush(x_12);
  goto v_55;
  x_12 :
  goto w_12;
  v_55 :
  Return();
  w_12 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_15)
  Cpush(a_13);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(b_13);
  x_55 :
  Cpush(d_13);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_15);
  OneNextSon();
  AllBuild();
  goto c_13;
  d_13 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_13);
  goto x_55;
  f_13 :
  AllBuild();
  goto e_13;
  c_13 :
  Cpop();
  e_13 :
  Return();
  b_13 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_a_16);
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  goto z_12;
  a_13 :
  goto g_13;
  z_12 :
  Cpop();
  g_13 :
ENDPROC

PROC(_stratego_a_16)
  Epushd(0,1);
  Cpush(i_13);
  Rpush(j_13);
  i_56 :
  Cpush(l_13);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_55;
  z_55 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_56;
  a_56 :
  TestFunFC(o_13,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(n_13);
  goto j_56;
  n_13 :
  goto m_13;
  j_56 :
  Move(0,1,1,3);
  Return();
  m_13 :
  Epopd(1,4);
  goto k_13;
  l_13 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_13);
  goto i_56;
  q_13 :
  AllBuild();
  goto p_13;
  k_13 :
  Cpop();
  p_13 :
  Return();
  j_13 :
  goto h_13;
  i_13 :
  Tset(ATmakeString(""));
  Tdupl();
  Tset(ATmakeString(""));
  MoveTop(0,1);
  Tpop();
  goto r_13;
  h_13 :
  Cpop();
  r_13 :
  Tdupl();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("The Stratego Compiler (version "),(ATerm)ATmakeAppl2(j_0,Egetd(0,1),(ATerm)ATmakeAppl2(j_0,ATmakeString(")"),(ATerm)ATmakeAppl0(c_1)))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_z_14);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_16)
  Ccall(_stratego_a_16);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("Usage: sc [options] -i file\n"),(ATerm)ATmakeAppl2(j_0,ATmakeString("Options:\n"),(ATerm)ATmakeAppl2(j_0,ATmakeString("  -i spec     Compile specification spec\n"),(ATerm)ATmakeAppl2(j_0,ATmakeString("  -o target   Name executable target\n"),(ATerm)ATmakeAppl2(j_0,ATmakeString("  --main s    Name main strategy [default: main]\n"),(ATerm)ATmakeAppl2(j_0,ATmakeString("  -I dir      Look in dir for imported Stratego modules\n"),(ATerm)ATmakeAppl2(j_0,ATmakeString("  -CI dir     Look in dir for C include files\n"),(ATerm)ATmakeAppl2(j_0,ATmakeString("  -CL dir     Look in dir for C object libraries\n"),(ATerm)ATmakeAppl2(j_0,ATmakeString("  --ast       Output abstract syntax of specification\n"),(ATerm)ATmakeAppl2(j_0,ATmakeString("  --norm      Do not remove intermediate files\n"),(ATerm)ATmakeAppl2(j_0,ATmakeString("  -F	    Produce all definitions pre-processed by frontend\n"),(ATerm)ATmakeAppl2(j_0,ATmakeString("  -h|--help   Display this message"),(ATerm)ATmakeAppl0(c_1))))))))))))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_z_14);
ENDPROC

PROC(_stratego_c_16)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_56;
  m_56 :
  TestFunFC(w_13,&&fail,Egetd(0,1));
  Rpush(v_13);
  goto o_56;
  v_13 :
  goto s_13;
  o_56 :
  Return();
  s_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_16)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_56;
  q_56 :
  TestFunFC(z_13,&&fail,Egetd(0,1));
  Rpush(y_13);
  goto s_56;
  y_13 :
  goto x_13;
  s_56 :
  Return();
  x_13 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_16)
  Epushd(0,5);
  MoveTop(0,3);
  goto g_59;
  g_59 :
  TestFunFC(j_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto h_59;
  h_59 :
  TestFunFC(j_0,&&e_14,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(h_14);
  Rpush(i_14);
  goto z_62;
  i_14 :
  goto f_14;
  h_14 :
  Ccontinue(j_14);
  Rpush(k_14);
  goto a_63;
  k_14 :
  goto f_14;
  j_14 :
  Ccontinue(n_14);
  Rpush(o_14);
  goto b_63;
  o_14 :
  goto f_14;
  n_14 :
  Ccontinue(p_14);
  Rpush(q_14);
  goto c_63;
  q_14 :
  goto f_14;
  p_14 :
  Ccontinue(r_14);
  Rpush(s_14);
  goto d_63;
  s_14 :
  goto f_14;
  r_14 :
  Ccontinue(t_14);
  Rpush(u_14);
  goto e_63;
  u_14 :
  goto f_14;
  t_14 :
  Ccontinue(v_14);
  Rpush(w_14);
  goto f_63;
  w_14 :
  goto f_14;
  v_14 :
  Ccontinue(x_14);
  Rpush(w_16);
  goto g_63;
  w_16 :
  goto f_14;
  x_14 :
  Ccontinue(x_16);
  Rpush(y_16);
  goto h_63;
  y_16 :
  goto f_14;
  x_16 :
  Ccontinue(a_17);
  Rpush(b_17);
  goto i_63;
  b_17 :
  goto f_14;
  a_17 :
  Ccontinue(c_17);
  Rpush(d_17);
  goto j_63;
  d_17 :
  goto f_14;
  c_17 :
  Ccontinue(e_17);
  Rpush(h_17);
  goto k_63;
  h_17 :
  goto f_14;
  e_17 :
  Ccontinue(i_17);
  Rpush(j_17);
  goto l_63;
  j_17 :
  goto f_14;
  i_17 :
  Ccontinue(o_17);
  Rpush(u_17);
  goto m_63;
  u_17 :
  goto f_14;
  o_17 :
  Rpush(d_18);
  goto n_63;
  d_18 :
  goto c_18;
  f_14 :
  Cpop();
  c_18 :
  goto d_14;
  e_14 :
  Cpush(k_18);
  Rpush(l_18);
  goto z_62;
  l_18 :
  goto e_18;
  k_18 :
  Ccontinue(p_18);
  Rpush(q_18);
  goto a_63;
  q_18 :
  goto e_18;
  p_18 :
  Ccontinue(r_18);
  Rpush(y_18);
  goto b_63;
  y_18 :
  goto e_18;
  r_18 :
  Ccontinue(g_19);
  Rpush(h_19);
  goto c_63;
  h_19 :
  goto e_18;
  g_19 :
  Ccontinue(j_19);
  Rpush(k_19);
  goto d_63;
  k_19 :
  goto e_18;
  j_19 :
  Ccontinue(n_19);
  Rpush(o_19);
  goto j_63;
  o_19 :
  goto e_18;
  n_19 :
  Ccontinue(p_19);
  Rpush(q_19);
  goto k_63;
  q_19 :
  goto e_18;
  p_19 :
  Ccontinue(s_19);
  Rpush(t_19);
  goto l_63;
  t_19 :
  goto e_18;
  s_19 :
  Ccontinue(u_19);
  Rpush(v_19);
  goto m_63;
  v_19 :
  goto e_18;
  u_19 :
  Rpush(x_19);
  goto n_63;
  x_19 :
  goto w_19;
  e_18 :
  Cpop();
  w_19 :
  goto d_14;
  d_14 :
  goto b_14;
  z_62 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_57;
  j_57 :
  TestStr(1,1,"-S",&&fail);
  Rpush(z_19);
  goto o_63;
  z_19 :
  goto y_19;
  o_63 :
  Return();
  y_19 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(a_20));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(a_20),Egetd(0,5)));
  Return();
  a_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_57;
  m_57 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(c_20);
  goto q_63;
  c_20 :
  goto b_20;
  q_63 :
  Return();
  b_20 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(a_20));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(a_20),Egetd(0,5)));
  Return();
  b_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_57;
  p_57 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(e_20);
  goto s_63;
  e_20 :
  goto d_20;
  s_63 :
  Return();
  d_20 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(y_12));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(y_12),Egetd(0,5)));
  Return();
  c_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_57;
  s_57 :
  TestStr(1,1,"-v",&&fail);
  Rpush(k_20);
  goto u_63;
  k_20 :
  goto j_20;
  u_63 :
  Return();
  j_20 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(w_13));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(w_13),Egetd(0,5)));
  Return();
  d_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_57;
  v_57 :
  TestStr(1,1,"--version",&&fail);
  Rpush(m_20);
  goto w_63;
  m_20 :
  goto l_20;
  w_63 :
  Return();
  l_20 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(w_13));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(w_13),Egetd(0,5)));
  Return();
  e_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_57;
  y_57 :
  TestStr(1,1,"@version",&&fail);
  Rpush(o_20);
  goto y_63;
  o_20 :
  goto n_20;
  y_63 :
  Return();
  n_20 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(o_13,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(o_13,Egetd(0,1)),Egetd(0,2)));
  Return();
  f_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_58;
  c_58 :
  TestStr(1,1,"-i",&&fail);
  Rpush(s_20);
  goto b_64;
  s_20 :
  goto r_20;
  b_64 :
  Return();
  r_20 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(u_20,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(u_20,Egetd(0,1)),Egetd(0,2)));
  Return();
  g_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_58;
  g_58 :
  TestStr(1,1,"--input",&&fail);
  Rpush(w_20);
  goto e_64;
  w_20 :
  goto v_20;
  e_64 :
  Return();
  v_20 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(u_20,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(u_20,Egetd(0,1)),Egetd(0,2)));
  Return();
  h_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_58;
  k_58 :
  TestStr(1,1,"-o",&&fail);
  Rpush(y_20);
  goto h_64;
  y_20 :
  goto x_20;
  h_64 :
  Return();
  x_20 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(h_2,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(h_2,Egetd(0,1)),Egetd(0,2)));
  Return();
  i_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_58;
  o_58 :
  TestStr(1,1,"--output",&&fail);
  Rpush(a_21);
  goto k_64;
  a_21 :
  goto z_20;
  k_64 :
  Return();
  z_20 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(h_2,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(h_2,Egetd(0,1)),Egetd(0,2)));
  Return();
  j_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_58;
  s_58 :
  TestStr(1,1,"-b",&&fail);
  Rpush(c_21);
  goto n_64;
  c_21 :
  goto b_21;
  n_64 :
  Return();
  b_21 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(j_21));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(j_21),Egetd(0,5)));
  Return();
  k_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_58;
  v_58 :
  TestStr(1,1,"-s",&&fail);
  Rpush(q_21);
  goto p_64;
  q_21 :
  goto p_21;
  p_64 :
  Return();
  p_21 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(v_21));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(v_21),Egetd(0,5)));
  Return();
  l_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_58;
  y_58 :
  TestStr(1,1,"--help",&&fail);
  Rpush(y_21);
  goto r_64;
  y_21 :
  goto w_21;
  r_64 :
  Return();
  w_21 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(z_13));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(z_13),Egetd(0,5)));
  Return();
  m_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_59;
  b_59 :
  TestStr(1,1,"-h",&&fail);
  Rpush(d_22);
  goto t_64;
  d_22 :
  goto b_22;
  t_64 :
  Return();
  b_22 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(z_13));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(z_13),Egetd(0,5)));
  Return();
  n_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_59;
  e_59 :
  TestStr(1,1,"-?",&&fail);
  Rpush(f_22);
  goto v_64;
  f_22 :
  goto e_22;
  v_64 :
  Return();
  e_22 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(z_13));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(z_13),Egetd(0,5)));
  Return();
  b_14 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_f_16)
  _ST_implode_string();
ENDPROC

PROC(_stratego_g_16)
  _ST_explode_string();
ENDPROC

PROC(_stratego_h_16)
  Ccall(_stratego_g_16);
  Cpush(i_22);
  Rpush(j_22);
  d_65 :
  Cpush(a_23);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_23);
  goto d_65;
  d_23 :
  AllBuild();
  goto z_22;
  a_23 :
  Epushd(0,3);
  MoveTop(0,1);
  goto y_64;
  y_64 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto z_64;
  z_64 :
  TestInt(0,2,46,&&fail);
  Rpush(l_23);
  goto e_65;
  l_23 :
  goto h_23;
  e_65 :
  Tset((ATerm)ATmakeAppl0(c_1));
  Return();
  h_23 :
  Epopd(0,3);
  goto e_23;
  z_22 :
  Cpop();
  e_23 :
  Return();
  j_22 :
  goto h_22;
  i_22 :
  goto m_23;
  h_22 :
  Cpop();
  m_23 :
  Ccall(_stratego_f_16);
ENDPROC

PROC(_stratego_i_16)
  Epushd(0,5);
  MoveTop(0,3);
  goto k_67;
  k_67 :
  TestFunFC(j_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto l_67;
  l_67 :
  TestFunFC(j_0,&&q_23,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(s_23);
  Rpush(t_23);
  goto w_70;
  t_23 :
  goto r_23;
  s_23 :
  Ccontinue(u_23);
  Rpush(v_23);
  goto x_70;
  v_23 :
  goto r_23;
  u_23 :
  Ccontinue(w_23);
  Rpush(x_23);
  goto y_70;
  x_23 :
  goto r_23;
  w_23 :
  Ccontinue(b_24);
  Rpush(d_24);
  goto z_70;
  d_24 :
  goto r_23;
  b_24 :
  Ccontinue(e_24);
  Rpush(f_24);
  goto a_71;
  f_24 :
  goto r_23;
  e_24 :
  Ccontinue(g_24);
  Rpush(h_24);
  goto b_71;
  h_24 :
  goto r_23;
  g_24 :
  Ccontinue(i_24);
  Rpush(j_24);
  goto c_71;
  j_24 :
  goto r_23;
  i_24 :
  Ccontinue(k_24);
  Rpush(o_24);
  goto d_71;
  o_24 :
  goto r_23;
  k_24 :
  Ccontinue(p_24);
  Rpush(q_24);
  goto e_71;
  q_24 :
  goto r_23;
  p_24 :
  Ccontinue(r_24);
  Rpush(s_24);
  goto f_71;
  s_24 :
  goto r_23;
  r_24 :
  Ccontinue(t_24);
  Rpush(u_24);
  goto g_71;
  u_24 :
  goto r_23;
  t_24 :
  Ccontinue(v_24);
  Rpush(z_24);
  goto h_71;
  z_24 :
  goto r_23;
  v_24 :
  Rpush(b_25);
  goto i_71;
  b_25 :
  goto a_25;
  r_23 :
  Cpop();
  a_25 :
  goto p_23;
  q_23 :
  Cpush(d_25);
  Rpush(e_25);
  goto b_71;
  e_25 :
  goto c_25;
  d_25 :
  Ccontinue(f_25);
  Rpush(g_25);
  goto c_71;
  g_25 :
  goto c_25;
  f_25 :
  Ccontinue(h_25);
  Rpush(i_25);
  goto g_71;
  i_25 :
  goto c_25;
  h_25 :
  Ccontinue(m_25);
  Rpush(n_25);
  goto h_71;
  n_25 :
  goto c_25;
  m_25 :
  Rpush(p_25);
  goto i_71;
  p_25 :
  goto o_25;
  c_25 :
  Cpop();
  o_25 :
  goto p_23;
  p_23 :
  goto n_23;
  w_70 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_65;
  t_65 :
  TestStr(1,1,"-e",&&fail);
  Rpush(r_25);
  goto j_71;
  r_25 :
  goto q_25;
  j_71 :
  Return();
  q_25 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(f_4,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(f_4,Egetd(0,1)),Egetd(0,2)));
  Return();
  x_70 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_65;
  x_65 :
  TestStr(1,1,"-I",&&fail);
  Rpush(t_25);
  goto m_71;
  t_25 :
  goto s_25;
  m_71 :
  Return();
  s_25 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_25));
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(x_25),Egetd(0,2)));
  Return();
  y_70 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_66;
  a_66 :
  TestStr(1,1,"--Include",&&fail);
  Rpush(z_25);
  goto o_71;
  z_25 :
  goto y_25;
  o_71 :
  Return();
  y_25 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_25));
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(x_25),Egetd(0,2)));
  Return();
  z_70 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_66;
  d_66 :
  TestStr(1,1,"-CI",&&fail);
  Rpush(b_26);
  goto q_71;
  b_26 :
  goto a_26;
  q_71 :
  Return();
  a_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_25));
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(x_25),Egetd(0,2)));
  Return();
  a_71 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_66;
  g_66 :
  TestStr(1,1,"-CL",&&fail);
  Rpush(d_26);
  goto s_71;
  d_26 :
  goto c_26;
  s_71 :
  Return();
  c_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_25));
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(x_25),Egetd(0,2)));
  Return();
  b_71 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_66;
  j_66 :
  TestStr(1,1,"-CC",&&fail);
  Rpush(i_26);
  goto u_71;
  i_26 :
  goto e_26;
  u_71 :
  Return();
  e_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(j_26));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(j_26),Egetd(0,5)));
  Return();
  c_71 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_66;
  m_66 :
  TestStr(1,1,"--norm",&&fail);
  Rpush(l_26);
  goto w_71;
  l_26 :
  goto k_26;
  w_71 :
  Return();
  k_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(m_26));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(m_26),Egetd(0,5)));
  Return();
  d_71 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto p_66;
  p_66 :
  TestStr(2,1,"-i",&&fail);
  Rpush(o_26);
  goto y_71;
  o_26 :
  goto n_26;
  y_71 :
  Return();
  n_26 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_h_16);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(u_20,Egetd(1,1)));
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(u_20,Egetd(1,1)),Egetd(0,2)));
  Epopd(1,1);
  Return();
  e_71 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_66;
  u_66 :
  TestStr(1,1,"--main",&&fail);
  Rpush(t_26);
  goto c_72;
  t_26 :
  goto p_26;
  c_72 :
  Return();
  p_26 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(l_9,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(l_9,Egetd(0,1)),Egetd(0,2)));
  Return();
  f_71 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_66;
  y_66 :
  TestStr(1,1,"-m",&&fail);
  Rpush(v_26);
  goto f_72;
  v_26 :
  goto u_26;
  f_72 :
  Return();
  u_26 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(l_9,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(l_9,Egetd(0,1)),Egetd(0,2)));
  Return();
  g_71 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_67;
  c_67 :
  TestStr(1,1,"--ast",&&fail);
  Rpush(x_26);
  goto i_72;
  x_26 :
  goto w_26;
  i_72 :
  Return();
  w_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(c_10));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(c_10),Egetd(0,5)));
  Return();
  h_71 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_67;
  f_67 :
  TestStr(1,1,"-F",&&fail);
  Rpush(z_26);
  goto k_72;
  z_26 :
  goto y_26;
  k_72 :
  Return();
  y_26 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(w_3));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(w_3),Egetd(0,5)));
  Return();
  i_71 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_67;
  i_67 :
  TestStr(1,1,"--fusion",&&fail);
  Rpush(e_27);
  goto m_72;
  e_27 :
  goto a_27;
  m_72 :
  Return();
  a_27 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_3));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(t_3),Egetd(0,5)));
  Return();
  n_23 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_16)
  Epushd(0,1);
  MoveTop(0,1);
  goto p_72;
  p_72 :
  TestFunFC(c_1,&&fail,Egetd(0,1));
  Rpush(g_27);
  goto r_72;
  g_27 :
  goto f_27;
  r_72 :
  Return();
  f_27 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_16)
  Epushd(0,4);
  Tdupl();
  Epushd(1,1);
  Rpush(h_27);
  o_75 :
  Cpush(j_27);
  Ccall(_stratego_j_16);
  goto i_27;
  j_27 :
  Epushd(2,3);
  MoveTop(2,1);
  goto u_72;
  u_72 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_72;
  v_72 :
  TestStr(2,2,"-I",&&q_27);
  Cpush(s_27);
  Rpush(t_27);
  goto p_75;
  t_27 :
  goto r_27;
  s_27 :
  Rpush(v_27);
  goto q_75;
  v_27 :
  goto u_27;
  r_27 :
  Cpop();
  u_27 :
  goto p_27;
  q_27 :
  Rpush(p_27);
  goto q_75;
  p_27 :
  goto l_27;
  p_75 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_27);
  goto o_75;
  w_27 :
  AllBuild();
  AllBuild();
  Return();
  q_75 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(a_28);
  goto o_75;
  a_28 :
  Return();
  l_27 :
  Epopd(2,3);
  goto k_27;
  i_27 :
  Cpop();
  k_27 :
  Return();
  h_27 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,1);
  Rpush(b_28);
  s_75 :
  Cpush(d_28);
  Ccall(_stratego_j_16);
  goto c_28;
  d_28 :
  Epushd(2,3);
  MoveTop(2,1);
  goto b_73;
  b_73 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto c_73;
  c_73 :
  TestStr(2,2,"-CI",&&h_28);
  Cpush(m_28);
  Rpush(n_28);
  goto t_75;
  n_28 :
  goto l_28;
  m_28 :
  Rpush(p_28);
  goto u_75;
  p_28 :
  goto o_28;
  l_28 :
  Cpop();
  o_28 :
  goto g_28;
  h_28 :
  Rpush(g_28);
  goto u_75;
  g_28 :
  goto f_28;
  t_75 :
  Epushd(3,3);
  MoveTop(3,1);
  goto a_73;
  a_73 :
  TestFunFC(j_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(r_28);
  goto v_75;
  r_28 :
  goto q_28;
  v_75 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_28);
  goto s_75;
  s_28 :
  AllBuild();
  Return();
  q_28 :
  Epopd(3,3);
  Return();
  u_75 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(w_28);
  goto s_75;
  w_28 :
  Return();
  f_28 :
  Epopd(2,3);
  goto e_28;
  c_28 :
  Cpop();
  e_28 :
  Return();
  b_28 :
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,1);
  Rpush(x_28);
  x_75 :
  Cpush(z_28);
  Ccall(_stratego_j_16);
  goto y_28;
  z_28 :
  Epushd(2,3);
  MoveTop(2,1);
  goto i_73;
  i_73 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_73;
  j_73 :
  TestStr(2,2,"-CL",&&d_29);
  Cpush(i_29);
  Rpush(j_29);
  goto y_75;
  j_29 :
  goto h_29;
  i_29 :
  Rpush(l_29);
  goto z_75;
  l_29 :
  goto k_29;
  h_29 :
  Cpop();
  k_29 :
  goto c_29;
  d_29 :
  Rpush(c_29);
  goto z_75;
  c_29 :
  goto b_29;
  y_75 :
  Epushd(3,3);
  MoveTop(3,1);
  goto h_73;
  h_73 :
  TestFunFC(j_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(n_29);
  goto a_76;
  n_29 :
  goto m_29;
  a_76 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_29);
  goto x_75;
  o_29 :
  AllBuild();
  Return();
  m_29 :
  Epopd(3,3);
  Return();
  z_75 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(s_29);
  goto x_75;
  s_29 :
  Return();
  b_29 :
  Epopd(2,3);
  goto a_29;
  y_28 :
  Cpop();
  a_29 :
  Return();
  x_28 :
  MoveTop(1,1);
  Move(0,3,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(t_29,Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(u_29);
  d_76 :
  Cpush(w_29);
  Cpush(y_29);
  Ccall(_stratego_j_16);
  goto x_29;
  y_29 :
  Cpush(l_30);
  Ccall(_stratego_i_16);
  goto k_30;
  l_30 :
  Ccall(_stratego_e_16);
  goto m_30;
  k_30 :
  Cpop();
  m_30 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_30);
  goto d_76;
  n_30 :
  AllBuild();
  goto z_29;
  x_29 :
  Cpop();
  z_29 :
  goto v_29;
  w_29 :
  Epushd(1,3);
  MoveTop(1,1);
  goto n_73;
  n_73 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(r_30);
  goto e_76;
  r_30 :
  goto q_30;
  e_76 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(x_30,Egetd(1,2)),Egetd(1,3)));
  Return();
  q_30 :
  Epopd(1,3);
  goto p_30;
  v_29 :
  Cpop();
  p_30 :
  Return();
  u_29 :
  AllBuild();
  Cpush(a_31);
  Epushd(1,1);
  Rpush(h_31);
  f_76 :
  Cpush(j_31);
  Epushd(2,4);
  MoveTop(2,1);
  goto p_73;
  p_73 :
  TestFunFC(j_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto q_73;
  q_73 :
  TestFunFC(u_20,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(m_31);
  goto g_76;
  m_31 :
  goto k_31;
  g_76 :
  Move(0,4,2,3);
  Return();
  k_31 :
  Epopd(2,4);
  goto i_31;
  j_31 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_31);
  goto f_76;
  o_31 :
  AllBuild();
  goto n_31;
  i_31 :
  Cpop();
  n_31 :
  Return();
  h_31 :
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(1,1);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(x_10,Egetd(0,1)),(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(h_3,Egetd(0,2)),(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl1(g_2,Egetd(0,3)),Egetd(1,1)))),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(t_0,Egetd(0,4),(ATerm)ATmakeAppl2(t_0,ATmakeString(".r"),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(c_0))));
  Epopd(1,1);
  goto y_30;
  a_31 :
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,(ATerm)ATmakeAppl0(z_13),Egetd(1,1)),(ATerm)ATmakeAppl2(t_0,ATmakeString(""),(ATerm)ATmakeAppl0(c_0))));
  Epopd(1,1);
  goto u_31;
  y_30 :
  Cpop();
  u_31 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_l_16)
  Cpush(x_31);
  Ccall(_stratego_k_16);
  goto v_31;
  x_31 :
  Ccall(_stratego_b_16);
  Tset(MakeInt(1));
  Ccall(_stratego_y_14);
  goto e_32;
  v_31 :
  Cpop();
  e_32 :
  Cpush(g_32);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(h_32);
  i_78 :
  Cpush(k_32);
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  Cpush(m_32);
  Ccall(_stratego_d_16);
  goto l_32;
  m_32 :
  Ccontinue(s_32);
  Epushd(0,2);
  MoveTop(0,1);
  goto k_76;
  k_76 :
  TestFunFC(x_30,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(v_32);
  goto j_78;
  v_32 :
  goto t_32;
  j_78 :
  Return();
  t_32 :
  Epopd(0,2);
  goto l_32;
  s_32 :
  Ccall(_stratego_c_16);
  goto a_33;
  l_32 :
  Cpop();
  a_33 :
  OneNextSon();
  AllBuild();
  goto i_32;
  k_32 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_33);
  goto i_78;
  c_33 :
  AllBuild();
  goto b_33;
  i_32 :
  Cpop();
  b_33 :
  Return();
  h_32 :
  Ccall(_stratego_b_16);
  Tset(MakeInt(1));
  Ccall(_stratego_y_14);
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  goto f_32;
  g_32 :
  Ccontinue(d_33);
  Ccall(_stratego_z_15);
  Ccall(_stratego_x_15);
  Ccall(_stratego_s_15);
  Ccall(_stratego_q_15);
  Ccall(_stratego_p_15);
  Ccall(_stratego_k_15);
  Ccall(_stratego_i_15);
  Cpush(g_33);
  Cpush(h_33);
  Tdupl();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(n_33);
  k_78 :
  Cpush(q_33);
  Epushd(0,3);
  MoveTop(0,1);
  goto m_76;
  m_76 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto n_76;
  n_76 :
  TestFunFC(m_26,&&fail,Egetd(0,2));
  Rpush(w_33);
  goto l_78;
  w_33 :
  goto v_33;
  l_78 :
  Return();
  v_33 :
  Epopd(0,3);
  goto o_33;
  q_33 :
  TestFunTop(j_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_33);
  goto k_78;
  y_33 :
  AllBuild();
  goto x_33;
  o_33 :
  Cpop();
  x_33 :
  Return();
  n_33 :
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  h_33 :
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(0,5);
  MoveTop(0,1);
  goto b_77;
  b_77 :
  TestFunFC(t_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto c_77;
  c_77 :
  TestFunFC(t_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto d_77;
  d_77 :
  TestFunFC(c_0,&&fail,Egetd(0,5));
  Rpush(b_34);
  goto m_78;
  b_34 :
  goto a_34;
  m_78 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,2),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString(".tree"),(ATerm)ATmakeAppl2(j_0,ATmakeString(".tree1"),(ATerm)ATmakeAppl2(j_0,ATmakeString(".s"),(ATerm)ATmakeAppl2(j_0,ATmakeString(".s1"),(ATerm)ATmakeAppl2(j_0,ATmakeString(".s2"),(ATerm)ATmakeAppl2(j_0,ATmakeString(".so1"),(ATerm)ATmakeAppl2(j_0,ATmakeString(".so2"),(ATerm)ATmakeAppl2(j_0,ATmakeString(".so3"),(ATerm)ATmakeAppl2(j_0,ATmakeString(".so4"),(ATerm)ATmakeAppl2(j_0,ATmakeString(".i1"),(ATerm)ATmakeAppl2(j_0,ATmakeString(".i"),(ATerm)ATmakeAppl2(j_0,ATmakeString(".o"),(ATerm)ATmakeAppl0(c_1))))))))))))),(ATerm)ATmakeAppl0(c_0))));
  Rpush(c_34);
  n_78 :
  Epushd(2,7);
  MoveTop(2,1);
  goto v_76;
  v_76 :
  TestFunFC(t_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto w_76;
  w_76 :
  TestFunFC(t_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,7,2,3,1);
  goto x_76;
  x_76 :
  TestFunFC(c_1,&&l_34,Egetd(2,4));
  goto y_76;
  y_76 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  Rpush(j_34);
  goto o_78;
  l_34 :
  TestFunFC(j_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto z_76;
  z_76 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  Rpush(j_34);
  goto p_78;
  j_34 :
  goto i_34;
  o_78 :
  Tset((ATerm)ATmakeAppl0(c_1));
  Return();
  p_78 :
  Epushd(3,5);
  NotNULLd(2,5);
  NotNULLd(2,2);
  NotNULLd(2,6);
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(t_0,Egetd(2,2),(ATerm)ATmakeAppl2(t_0,Egetd(2,5),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(t_0,Egetd(2,2),(ATerm)ATmakeAppl2(t_0,Egetd(2,6),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_15);
  OneNextSon();
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Rpush(r_34);
  goto n_78;
  r_34 :
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto s_76;
  s_76 :
  TestFunFC(t_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto t_76;
  t_76 :
  TestFunFC(t_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto u_76;
  u_76 :
  TestFunFC(c_0,&&fail,Egetd(3,5));
  Rpush(s_34);
  goto q_78;
  s_34 :
  goto q_34;
  q_78 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(j_0,Egetd(3,2),Egetd(3,4)));
  Return();
  q_34 :
  Epopd(3,5);
  Return();
  i_34 :
  Epopd(2,7);
  Return();
  c_34 :
  MoveTop(1,1);
  Tdupl();
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(t_0,ATmakeString("rm"),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("-f"),Egetd(1,1)),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_v_15);
  Tpop();
  Epopd(1,1);
  Tpop();
  Return();
  a_34 :
  Epopd(0,5);
  OneNextSon();
  Ccall(_stratego_c_15);
  AllBuild();
  AllBuild();
  goto f_33;
  g_33 :
  goto t_34;
  f_33 :
  Cpop();
  t_34 :
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("compilation succeeded"),(ATerm)ATmakeAppl0(c_1)),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_z_14);
  Tset(MakeInt(0));
  Ccall(_stratego_y_14);
  goto f_32;
  d_33 :
  Tset((ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl0(u_1),(ATerm)ATmakeAppl2(t_0,(ATerm)ATmakeAppl2(j_0,ATmakeString("compilation failed"),(ATerm)ATmakeAppl0(c_1)),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_z_14);
  Tset(MakeInt(1));
  Ccall(_stratego_y_14);
  goto v_34;
  f_32 :
  Cpop();
  v_34 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_l_16);
ENDPROC

DOIT

