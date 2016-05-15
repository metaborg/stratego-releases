#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,r_22);
VARDECL(AFun,x_21);
VARDECL(AFun,m_15);
VARDECL(AFun,x_14);
VARDECL(AFun,u_14);
VARDECL(AFun,r_14);
VARDECL(AFun,y_10);
VARDECL(AFun,t_10);
VARDECL(AFun,o_10);
VARDECL(AFun,j_10);
VARDECL(AFun,g_10);
VARDECL(AFun,y_9);
VARDECL(AFun,t_9);
VARDECL(AFun,a_7);
VARDECL(AFun,x_6);
VARDECL(AFun,s_6);
VARDECL(AFun,f_2);
VARDECL(AFun,o_1);
VARDECL(AFun,d_1);
VARDECL(AFun,v_0);
VARDECL(AFun,o_0);
VARDECL(AFun,k_0);
VARDECL(AFun,f_0);
PROCDECL(_stratego_r_11);
PROCDECL(_stratego_s_11);
PROCDECL(_stratego_t_11);
PROCDECL(_stratego_u_11);
PROCDECL(_stratego_v_11);
PROCDECL(_stratego_w_11);
PROCDECL(_stratego_x_11);
PROCDECL(_stratego_y_11);
PROCDECL(_stratego_z_11);
PROCDECL(_stratego_a_12);
PROCDECL(_stratego_b_12);
PROCDECL(_stratego_c_12);
PROCDECL(_stratego_d_12);
PROCDECL(_stratego_e_12);
PROCDECL(_stratego_f_12);
PROCDECL(_stratego_g_12);
PROCDECL(_stratego_h_12);
PROCDECL(_stratego_i_12);
PROCDECL(_stratego_j_12);
PROCDECL(_stratego_k_12);
PROCDECL(_stratego_l_12);
PROCDECL(_stratego_m_12);
PROCDECL(_stratego_n_12);
PROCDECL(_stratego_s_12);
PROCDECL(_stratego_t_12);
PROCDECL(_stratego_u_12);
PROCDECL(_stratego_v_12);
PROCDECL(_stratego_w_12);
PROCDECL(_stratego_x_12);
PROCDECL(_stratego_g_13);
PROCDECL(_stratego_h_13);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(r_22,ATmakeAFun("stdout",0,0));
  MOVE(x_21,ATmakeAFun("stdin",0,0));
  MOVE(m_15,ATmakeAFun("Undefined",1,0));
  MOVE(x_14,ATmakeAFun("Dependency",1,0));
  MOVE(u_14,ATmakeAFun("NoDependency",0,0));
  MOVE(r_14,ATmakeAFun("Include",1,0));
  MOVE(y_10,ATmakeAFun("Statistics",0,0));
  MOVE(t_10,ATmakeAFun("Binary",0,0));
  MOVE(o_10,ATmakeAFun("Output",1,0));
  MOVE(j_10,ATmakeAFun("Input",1,0));
  MOVE(g_10,ATmakeAFun("DeclVersion",1,0));
  MOVE(y_9,ATmakeAFun("Verbose",0,0));
  MOVE(t_9,ATmakeAFun("Silent",0,0));
  MOVE(a_7,ATmakeAFun("Help",0,0));
  MOVE(x_6,ATmakeAFun("Version",0,0));
  MOVE(s_6,ATmakeAFun("Program",1,0));
  MOVE(f_2,ATmakeAFun("stderr",0,0));
  MOVE(o_1,ATmakeAFun("TCons",2,0));
  MOVE(d_1,ATmakeAFun("Imports",1,0));
  MOVE(v_0,ATmakeAFun("Specification",1,0));
  MOVE(o_0,ATmakeAFun("TNil",0,0));
  MOVE(k_0,ATmakeAFun("Nil",0,0));
  MOVE(f_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_r_11)
  Ccall(_stratego_l_12);
  Cpush(b_0);
  Rpush(c_0);
  t_4 :
  Cpush(e_0);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_0);
  goto t_4;
  g_0 :
  AllBuild();
  goto d_0;
  e_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto y_3;
  y_3 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto b_4;
  b_4 :
  TestInt(0,2,46,&&fail);
  Rpush(j_0);
  goto u_4;
  j_0 :
  goto i_0;
  u_4 :
  Tset((ATerm)ATmakeAppl0(k_0));
  Return();
  i_0 :
  Epopd(0,3);
  goto h_0;
  d_0 :
  Cpop();
  h_0 :
  Return();
  c_0 :
  goto a_0;
  b_0 :
  goto l_0;
  a_0 :
  Cpop();
  l_0 :
  Ccall(_stratego_j_12);
ENDPROC

PROC(_stratego_s_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_4;
  w_4 :
  TestFunFC(o_0,&&fail,Egetd(0,1));
  Rpush(n_0);
  goto b_5;
  n_0 :
  goto m_0;
  b_5 :
  Return();
  m_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_11)
  Epushd(0,1);
  Rpush(p_0);
  v_5 :
  Cpush(r_0);
  Ccall(_stratego_g_13);
  goto q_0;
  r_0 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto h_5;
  h_5 :
  TestFunFC(v_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(u_0);
  goto a_6;
  u_0 :
  goto t_0;
  a_6 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(w_0);
  b_6 :
  Cpush(y_0);
  Ccall(_stratego_g_13);
  goto x_0;
  y_0 :
  Ccontinue(z_0);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(a_1);
  Tdupl();
  Epushd(2,2);
  MoveTop(2,1);
  goto e_5;
  e_5 :
  TestFunFC(d_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(c_1);
  goto c_6;
  c_1 :
  goto b_1;
  c_6 :
  Return();
  b_1 :
  Epopd(2,2);
  Cpop();
  Crestore();
  Cjump();
  a_1 :
  OneNextSon();
  Rpush(e_1);
  goto b_6;
  e_1 :
  AllBuild();
  goto x_0;
  z_0 :
  Epushd(2,3);
  MoveTop(2,1);
  goto g_5;
  g_5 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(h_1);
  goto n_6;
  h_1 :
  goto g_1;
  n_6 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(i_1);
  goto b_6;
  i_1 :
  Return();
  g_1 :
  Epopd(2,3);
  goto f_1;
  x_0 :
  Cpop();
  f_1 :
  Return();
  w_0 :
  Return();
  t_0 :
  Epopd(1,2);
  OneNextSon();
  Rpush(j_1);
  goto v_5;
  j_1 :
  AllBuild();
  goto s_0;
  q_0 :
  Cpop();
  s_0 :
  Return();
  p_0 :
  Ccall(_stratego_k_12);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(v_0,Egetd(0,1)));
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_11)
  Rpush(k_1);
  f_13 :
  Epushd(0,3);
  MoveTop(0,1);
  goto g_8;
  g_8 :
  TestFunFC(k_0,&&n_1,Egetd(0,1));
  Rpush(m_1);
  goto i_13;
  n_1 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_1);
  goto j_13;
  m_1 :
  goto l_1;
  i_13 :
  Tset((ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl0(o_0))));
  Return();
  j_13 :
  Epushd(1,13);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(0,2),(ATerm)ATmakeAppl2(o_1,Egetd(0,3),(ATerm)ATmakeAppl0(o_0))));
  TestFunTop(o_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_1);
  TravInit();
  OneNextSon();
  Rpush(q_1);
  goto f_13;
  q_1 :
  OneNextSon();
  Ccall(_stratego_s_11);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto r_7;
  r_7 :
  TestFunFC(o_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto s_7;
  s_7 :
  TestFunFC(o_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto t_7;
  t_7 :
  TestFunFC(o_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto u_7;
  u_7 :
  TestFunFC(o_0,&&fail,Egetd(1,6));
  goto v_7;
  v_7 :
  TestFunFC(o_1,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,13,1,7,1);
  goto w_7;
  w_7 :
  TestFunFC(o_1,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto b_8;
  b_8 :
  TestFunFC(o_1,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto c_8;
  c_8 :
  TestFunFC(o_0,&&fail,Egetd(1,12));
  goto f_8;
  f_8 :
  TestFunFC(o_0,&&fail,Egetd(1,13));
  Rpush(r_1);
  goto k_13;
  r_1 :
  goto p_1;
  k_13 :
  NotNULLd(1,3);
  NotNULLd(1,9);
  NotNULLd(1,5);
  NotNULLd(1,11);
  Tset((ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(f_0,Egetd(1,3),Egetd(1,9)),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(f_0,Egetd(1,5),Egetd(1,11)),(ATerm)ATmakeAppl0(o_0))));
  Return();
  p_1 :
  Epopd(1,13);
  Return();
  l_1 :
  Epopd(0,3);
  Return();
  k_1 :
ENDPROC

PROC(_stratego_v_11)
  Epushd(0,6);
  MoveTop(0,1);
  goto q_13;
  q_13 :
  TestFunFC(o_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_13;
  r_13 :
  TestFunFC(o_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto s_13;
  s_13 :
  TestFunFC(v_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto t_13;
  t_13 :
  TestFunFC(o_0,&&fail,Egetd(0,6));
  Rpush(t_1);
  goto j_14;
  t_1 :
  goto s_1;
  j_14 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(u_1);
  k_14 :
  Cpush(w_1);
  Ccall(_stratego_g_13);
  goto v_1;
  w_1 :
  Ccontinue(x_1);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto n_13;
  n_13 :
  TestFunFC(d_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(z_1);
  goto l_14;
  z_1 :
  goto y_1;
  l_14 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  y_1 :
  Epopd(1,2);
  OneNextSon();
  Rpush(a_2);
  goto k_14;
  a_2 :
  AllBuild();
  goto v_1;
  x_1 :
  Epushd(1,3);
  MoveTop(1,1);
  goto p_13;
  p_13 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(d_2);
  goto m_14;
  d_2 :
  goto c_2;
  m_14 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(e_2);
  goto k_14;
  e_2 :
  Return();
  c_2 :
  Epopd(1,3);
  goto b_2;
  v_1 :
  Cpop();
  b_2 :
  Return();
  u_1 :
  Ccall(_stratego_k_12);
  Return();
  s_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_w_11)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl0(f_2),(ATerm)ATmakeAppl2(o_1,Egetd(0,1),(ATerm)ATmakeAppl0(o_0))));
  Ccall(_stratego_g_12);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_x_11)
  Tdupl();
  Ccall(_stratego_w_11);
  Tset(MakeInt(1));
  Ccall(_stratego_t_12);
  Tpop();
ENDPROC

PROC(_stratego_y_11)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_z_11)
  _ST_file_exists();
ENDPROC

PROC(_stratego_a_12)
  _ST_call();
ENDPROC

PROC(_stratego_b_12)
  Epushd(0,5);
  TestFunTop(o_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_12);
  OneNextSon();
  TestFunTop(o_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_12);
  OneNextSon();
  Ccall(_stratego_s_11);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto a_15;
  a_15 :
  TestFunFC(o_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto b_15;
  b_15 :
  TestFunFC(o_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_15;
  c_15 :
  TestFunFC(o_0,&&fail,Egetd(0,5));
  Rpush(h_2);
  goto k_15;
  h_2 :
  goto g_2;
  k_15 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(i_2);
  l_15 :
  Cpush(k_2);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_2);
  goto l_15;
  l_2 :
  AllBuild();
  goto j_2;
  k_2 :
  Ccall(_stratego_g_13);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto m_2;
  j_2 :
  Cpop();
  m_2 :
  Return();
  i_2 :
  Ccall(_stratego_j_12);
  Return();
  g_2 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_c_12)
  _ST_int_to_string();
ENDPROC

PROC(_stratego_d_12)
  _ST_get_pid();
ENDPROC

PROC(_stratego_e_12)
  Epushd(0,7);
  MoveTop(0,1);
  goto o_16;
  o_16 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto p_16;
  p_16 :
  TestFunFC(o_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto r_16;
  r_16 :
  TestFunFC(o_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto s_16;
  s_16 :
  TestFunFC(o_0,&&fail,Egetd(0,6));
  Rpush(o_2);
  goto t_18;
  o_2 :
  goto n_2;
  t_18 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto o_15;
  o_15 :
  TestFunFC(o_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto p_15;
  p_15 :
  TestFunFC(o_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_15;
  q_15 :
  TestFunFC(o_0,&&fail,Egetd(2,5));
  Rpush(q_2);
  goto u_18;
  q_2 :
  goto p_2;
  u_18 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  p_2 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto s_15;
  s_15 :
  TestFunFC(o_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto t_15;
  t_15 :
  TestFunFC(o_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto u_15;
  u_15 :
  TestFunFC(o_0,&&fail,Egetd(2,5));
  Rpush(s_2);
  goto v_18;
  s_2 :
  goto r_2;
  v_18 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  r_2 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(1,2),(ATerm)ATmakeAppl2(o_1,Egetd(1,3),(ATerm)ATmakeAppl0(o_0))));
  Rpush(t_2);
  w_18 :
  Epushd(2,9);
  MoveTop(2,1);
  goto b_16;
  b_16 :
  TestFunFC(o_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto c_16;
  c_16 :
  TestFunFC(k_0,&&w_2,Egetd(2,2));
  goto d_16;
  d_16 :
  TestFunFC(o_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto e_16;
  e_16 :
  TestFunFC(k_0,&&fail,Egetd(2,6));
  goto f_16;
  f_16 :
  TestFunFC(o_0,&&fail,Egetd(2,9));
  Rpush(v_2);
  goto x_18;
  w_2 :
  TestFunFC(f_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto g_16;
  g_16 :
  TestFunFC(o_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto h_16;
  h_16 :
  TestFunFC(f_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto i_16;
  i_16 :
  TestFunFC(o_0,&&fail,Egetd(2,9));
  Rpush(v_2);
  goto y_18;
  v_2 :
  goto u_2;
  x_18 :
  Tset((ATerm)ATmakeAppl0(k_0));
  Return();
  y_18 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(o_1,Egetd(2,3),(ATerm)ATmakeAppl2(o_1,Egetd(2,7),(ATerm)ATmakeAppl0(o_0))),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(o_1,Egetd(2,4),(ATerm)ATmakeAppl2(o_1,Egetd(2,8),(ATerm)ATmakeAppl0(o_0))),(ATerm)ATmakeAppl0(o_0))));
  TestFunTop(o_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_1);
  TravInit();
  OneNextSon();
  Rpush(y_2);
  goto w_18;
  y_2 :
  OneNextSon();
  Ccall(_stratego_s_11);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto y_15;
  y_15 :
  TestFunFC(o_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto z_15;
  z_15 :
  TestFunFC(o_1,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto a_16;
  a_16 :
  TestFunFC(o_0,&&fail,Egetd(3,5));
  Rpush(z_2);
  goto z_18;
  z_2 :
  goto x_2;
  z_18 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(f_0,Egetd(3,2),Egetd(3,4)));
  Return();
  x_2 :
  Epopd(3,5);
  Return();
  u_2 :
  Epopd(2,9);
  Return();
  t_2 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(1,4),(ATerm)ATmakeAppl2(o_1,Egetd(0,7),(ATerm)ATmakeAppl0(o_0))));
  MoveTop(1,5);
  goto l_16;
  l_16 :
  TestFunFC(o_1,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto m_16;
  m_16 :
  TestFunFC(o_1,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto n_16;
  n_16 :
  TestFunFC(o_0,&&fail,Egetd(1,9));
  Rpush(b_3);
  goto b_19;
  b_3 :
  goto a_3;
  b_19 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(c_3);
  c_19 :
  Cpush(e_3);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_3);
  goto c_19;
  f_3 :
  AllBuild();
  goto d_3;
  e_3 :
  Ccall(_stratego_g_13);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto g_3;
  d_3 :
  Cpop();
  g_3 :
  Return();
  c_3 :
  Return();
  a_3 :
  Epopd(1,9);
  Return();
  n_2 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_f_12)
  Epushd(0,5);
  MoveTop(0,5);
  goto t_19;
  t_19 :
  TestFunFC(o_1,&&j_3,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto u_19;
  u_19 :
  TestFunFC(o_1,&&k_3,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto v_19;
  v_19 :
  TestFunFC(o_0,&&l_3,Egetd(0,4));
  Cpush(n_3);
  Rpush(o_3);
  goto f_21;
  o_3 :
  goto m_3;
  n_3 :
  Rpush(q_3);
  goto g_21;
  q_3 :
  goto p_3;
  m_3 :
  Cpop();
  p_3 :
  goto i_3;
  l_3 :
  Rpush(i_3);
  goto g_21;
  k_3 :
  Rpush(i_3);
  goto g_21;
  j_3 :
  Rpush(i_3);
  goto g_21;
  i_3 :
  goto h_3;
  f_21 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(r_3);
  h_21 :
  Cpush(t_3);
  Ccall(_stratego_g_13);
  goto s_3;
  t_3 :
  Ccontinue(u_3);
  Epushd(1,3);
  MoveTop(1,1);
  goto i_19;
  i_19 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(w_3);
  goto i_21;
  w_3 :
  goto v_3;
  i_21 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(x_3);
  j_21 :
  Cpush(a_4);
  Epushd(2,3);
  MoveTop(2,1);
  goto h_19;
  h_19 :
  TestFunFC(f_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(e_4);
  goto m_21;
  e_4 :
  goto d_4;
  m_21 :
  Move(1,2,2,2);
  Return();
  d_4 :
  Epopd(2,3);
  goto z_3;
  a_4 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_4);
  goto j_21;
  g_4 :
  AllBuild();
  goto f_4;
  z_3 :
  Cpop();
  f_4 :
  Return();
  x_3 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(h_4);
  goto h_21;
  h_4 :
  Return();
  v_3 :
  Epopd(1,3);
  goto s_3;
  u_3 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_4);
  goto h_21;
  j_4 :
  AllBuild();
  goto i_4;
  s_3 :
  Cpop();
  i_4 :
  Return();
  r_3 :
  Return();
  g_21 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl2(o_1,Egetd(0,5),(ATerm)ATmakeAppl0(o_0))));
  Rpush(k_4);
  n_21 :
  Cpush(m_4);
  TestFunTop(o_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_1);
  TravInit();
  OneNextSon();
  Cpush(o_4);
  Epushd(1,7);
  MoveTop(1,1);
  goto k_19;
  k_19 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto l_19;
  l_19 :
  TestFunFC(o_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto m_19;
  m_19 :
  TestFunFC(o_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto n_19;
  n_19 :
  TestFunFC(o_0,&&fail,Egetd(1,6));
  Rpush(q_4);
  goto o_21;
  q_4 :
  goto p_4;
  o_21 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  p_4 :
  Epopd(1,7);
  goto n_4;
  o_4 :
  Ccall(_stratego_e_12);
  goto v_4;
  n_4 :
  Cpop();
  v_4 :
  OneNextSon();
  Ccall(_stratego_s_11);
  AllBuild();
  AllBuild();
  goto l_4;
  m_4 :
  Epushd(1,7);
  MoveTop(1,1);
  goto p_19;
  p_19 :
  TestFunFC(o_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_19;
  q_19 :
  TestFunFC(o_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto r_19;
  r_19 :
  TestFunFC(f_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto s_19;
  s_19 :
  TestFunFC(o_0,&&fail,Egetd(1,7));
  Rpush(a_5);
  goto p_21;
  a_5 :
  goto z_4;
  p_21 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(f_0,Egetd(1,5),Egetd(1,2)),(ATerm)ATmakeAppl2(o_1,Egetd(1,6),(ATerm)ATmakeAppl0(o_0))));
  Return();
  z_4 :
  Epopd(1,7);
  goto y_4;
  l_4 :
  Cpop();
  y_4 :
  Cpush(d_5);
  TestFunTop(o_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_13);
  OneNextSon();
  Ccall(_stratego_s_11);
  AllBuild();
  AllBuild();
  goto c_5;
  d_5 :
  Rpush(i_5);
  goto n_21;
  i_5 :
  goto f_5;
  c_5 :
  Cpop();
  f_5 :
  Return();
  k_4 :
  Return();
  h_3 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_g_12)
  _ST_printnl();
ENDPROC

PROC(_stratego_h_12)
  _ST_dtime();
ENDPROC

PROC(_stratego_i_12)
  _ST_open_file();
ENDPROC

PROC(_stratego_j_12)
  _ST_implode_string();
ENDPROC

PROC(_stratego_k_12)
  Rpush(l_5);
  z_21 :
  Cpush(s_5);
  Ccall(_stratego_g_13);
  goto r_5;
  s_5 :
  Epushd(0,3);
  MoveTop(0,1);
  goto r_21;
  r_21 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(x_5);
  goto a_22;
  x_5 :
  goto w_5;
  a_22 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(y_5);
  b_22 :
  Cpush(d_6);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_6);
  goto b_22;
  e_6 :
  AllBuild();
  goto z_5;
  d_6 :
  Ccall(_stratego_g_13);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(g_6);
  goto z_21;
  g_6 :
  goto f_6;
  z_5 :
  Cpop();
  f_6 :
  Return();
  y_5 :
  Return();
  w_5 :
  Epopd(0,3);
  goto u_5;
  r_5 :
  Cpop();
  u_5 :
  Return();
  l_5 :
ENDPROC

PROC(_stratego_l_12)
  _ST_explode_string();
ENDPROC

PROC(_stratego_m_12)
  Rpush(h_6);
  c_22 :
  Cpush(j_6);
  Ccall(_stratego_g_13);
  goto i_6;
  j_6 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_12);
  OneNextSon();
  Rpush(l_6);
  goto c_22;
  l_6 :
  AllBuild();
  goto k_6;
  i_6 :
  Cpop();
  k_6 :
  Return();
  h_6 :
  Ccall(_stratego_k_12);
  Ccall(_stratego_j_12);
ENDPROC

PROC(_stratego_n_12)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_s_12)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_t_12)
  _ST_exit();
ENDPROC

PROC(_stratego_u_12)
  Epushd(0,1);
  Rpush(m_6);
  l_22 :
  Cpush(p_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_22;
  e_22 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_22;
  f_22 :
  TestFunFC(s_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_6);
  goto m_22;
  r_6 :
  goto q_6;
  m_22 :
  Move(0,1,1,3);
  Return();
  q_6 :
  Epopd(1,4);
  goto o_6;
  p_6 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_6);
  goto l_22;
  u_6 :
  AllBuild();
  goto t_6;
  o_6 :
  Cpop();
  t_6 :
  Return();
  m_6 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl0(f_2),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(f_0,ATmakeString("usage : "),(ATerm)ATmakeAppl2(f_0,Egetd(0,1),(ATerm)ATmakeAppl2(f_0,ATmakeString(" [-S] [-I dir] [-i file]"),(ATerm)ATmakeAppl2(f_0,ATmakeString(" [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl2(f_0,ATmakeString(" [-dep target | -nodep]"),(ATerm)ATmakeAppl0(k_0)))))),(ATerm)ATmakeAppl0(o_0))));
  Ccall(_stratego_g_12);
  Tset(MakeInt(1));
  Ccall(_stratego_t_12);
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_12)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_22;
  o_22 :
  TestFunFC(x_6,&&fail,Egetd(0,1));
  Rpush(w_6);
  goto q_22;
  w_6 :
  goto v_6;
  q_22 :
  Return();
  v_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_12)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_22;
  s_22 :
  TestFunFC(a_7,&&fail,Egetd(0,1));
  Rpush(z_6);
  goto u_22;
  z_6 :
  goto y_6;
  u_22 :
  Return();
  y_6 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_12)
  Epushd(0,5);
  MoveTop(0,3);
  goto i_25;
  i_25 :
  TestFunFC(f_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto j_25;
  j_25 :
  TestFunFC(f_0,&&d_7,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(f_7);
  Rpush(g_7);
  goto c_29;
  g_7 :
  goto e_7;
  f_7 :
  Ccontinue(h_7);
  Rpush(i_7);
  goto d_29;
  i_7 :
  goto e_7;
  h_7 :
  Ccontinue(j_7);
  Rpush(k_7);
  goto e_29;
  k_7 :
  goto e_7;
  j_7 :
  Ccontinue(l_7);
  Rpush(m_7);
  goto f_29;
  m_7 :
  goto e_7;
  l_7 :
  Ccontinue(n_7);
  Rpush(o_7);
  goto g_29;
  o_7 :
  goto e_7;
  n_7 :
  Ccontinue(p_7);
  Rpush(q_7);
  goto h_29;
  q_7 :
  goto e_7;
  p_7 :
  Ccontinue(x_7);
  Rpush(y_7);
  goto i_29;
  y_7 :
  goto e_7;
  x_7 :
  Ccontinue(z_7);
  Rpush(a_8);
  goto j_29;
  a_8 :
  goto e_7;
  z_7 :
  Ccontinue(d_8);
  Rpush(e_8);
  goto k_29;
  e_8 :
  goto e_7;
  d_8 :
  Ccontinue(i_8);
  Rpush(j_8);
  goto l_29;
  j_8 :
  goto e_7;
  i_8 :
  Ccontinue(k_8);
  Rpush(l_8);
  goto m_29;
  l_8 :
  goto e_7;
  k_8 :
  Ccontinue(m_8);
  Rpush(n_8);
  goto n_29;
  n_8 :
  goto e_7;
  m_8 :
  Ccontinue(o_8);
  Rpush(p_8);
  goto o_29;
  p_8 :
  goto e_7;
  o_8 :
  Ccontinue(q_8);
  Rpush(r_8);
  goto p_29;
  r_8 :
  goto e_7;
  q_8 :
  Rpush(t_8);
  goto q_29;
  t_8 :
  goto s_8;
  e_7 :
  Cpop();
  s_8 :
  goto c_7;
  d_7 :
  Cpush(v_8);
  Rpush(w_8);
  goto c_29;
  w_8 :
  goto u_8;
  v_8 :
  Ccontinue(x_8);
  Rpush(y_8);
  goto d_29;
  y_8 :
  goto u_8;
  x_8 :
  Ccontinue(z_8);
  Rpush(a_9);
  goto e_29;
  a_9 :
  goto u_8;
  z_8 :
  Ccontinue(b_9);
  Rpush(c_9);
  goto f_29;
  c_9 :
  goto u_8;
  b_9 :
  Ccontinue(d_9);
  Rpush(e_9);
  goto g_29;
  e_9 :
  goto u_8;
  d_9 :
  Ccontinue(f_9);
  Rpush(g_9);
  goto m_29;
  g_9 :
  goto u_8;
  f_9 :
  Ccontinue(h_9);
  Rpush(i_9);
  goto n_29;
  i_9 :
  goto u_8;
  h_9 :
  Ccontinue(j_9);
  Rpush(k_9);
  goto o_29;
  k_9 :
  goto u_8;
  j_9 :
  Ccontinue(n_9);
  Rpush(o_9);
  goto p_29;
  o_9 :
  goto u_8;
  n_9 :
  Rpush(q_9);
  goto q_29;
  q_9 :
  goto p_9;
  u_8 :
  Cpop();
  p_9 :
  goto c_7;
  c_7 :
  goto b_7;
  c_29 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_23;
  l_23 :
  TestStr(1,1,"-S",&&fail);
  Rpush(s_9);
  goto r_29;
  s_9 :
  goto r_9;
  r_29 :
  Return();
  r_9 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_9));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(t_9),Egetd(0,5)));
  Return();
  d_29 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_23;
  o_23 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(v_9);
  goto t_29;
  v_9 :
  goto u_9;
  t_29 :
  Return();
  u_9 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_9));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(t_9),Egetd(0,5)));
  Return();
  e_29 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_23;
  r_23 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(x_9);
  goto v_29;
  x_9 :
  goto w_9;
  v_29 :
  Return();
  w_9 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(y_9));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(y_9),Egetd(0,5)));
  Return();
  f_29 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_23;
  u_23 :
  TestStr(1,1,"-v",&&fail);
  Rpush(a_10);
  goto x_29;
  a_10 :
  goto z_9;
  x_29 :
  Return();
  z_9 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_6));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(x_6),Egetd(0,5)));
  Return();
  g_29 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_23;
  x_23 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_10);
  goto z_29;
  d_10 :
  goto b_10;
  z_29 :
  Return();
  b_10 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_6));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(x_6),Egetd(0,5)));
  Return();
  h_29 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_24;
  a_24 :
  TestStr(1,1,"@version",&&fail);
  Rpush(f_10);
  goto b_30;
  f_10 :
  goto e_10;
  b_30 :
  Return();
  e_10 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(g_10,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(g_10,Egetd(0,1)),Egetd(0,2)));
  Return();
  i_29 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_24;
  e_24 :
  TestStr(1,1,"-i",&&fail);
  Rpush(i_10);
  goto e_30;
  i_10 :
  goto h_10;
  e_30 :
  Return();
  h_10 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(j_10,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(j_10,Egetd(0,1)),Egetd(0,2)));
  Return();
  j_29 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_24;
  i_24 :
  TestStr(1,1,"--input",&&fail);
  Rpush(l_10);
  goto h_30;
  l_10 :
  goto k_10;
  h_30 :
  Return();
  k_10 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(j_10,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(j_10,Egetd(0,1)),Egetd(0,2)));
  Return();
  k_29 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_24;
  m_24 :
  TestStr(1,1,"-o",&&fail);
  Rpush(n_10);
  goto k_30;
  n_10 :
  goto m_10;
  k_30 :
  Return();
  m_10 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(o_10,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(o_10,Egetd(0,1)),Egetd(0,2)));
  Return();
  l_29 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_24;
  q_24 :
  TestStr(1,1,"--output",&&fail);
  Rpush(q_10);
  goto n_30;
  q_10 :
  goto p_10;
  n_30 :
  Return();
  p_10 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(o_10,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(o_10,Egetd(0,1)),Egetd(0,2)));
  Return();
  m_29 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_24;
  u_24 :
  TestStr(1,1,"-b",&&fail);
  Rpush(s_10);
  goto q_30;
  s_10 :
  goto r_10;
  q_30 :
  Return();
  r_10 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_10));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(t_10),Egetd(0,5)));
  Return();
  n_29 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_24;
  x_24 :
  TestStr(1,1,"-s",&&fail);
  Rpush(x_10);
  goto s_30;
  x_10 :
  goto w_10;
  s_30 :
  Return();
  w_10 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(y_10));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(y_10),Egetd(0,5)));
  Return();
  o_29 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_25;
  a_25 :
  TestStr(1,1,"--help",&&fail);
  Rpush(a_11);
  goto u_30;
  a_11 :
  goto z_10;
  u_30 :
  Return();
  z_10 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(a_7));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(a_7),Egetd(0,5)));
  Return();
  p_29 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_25;
  d_25 :
  TestStr(1,1,"-h",&&fail);
  Rpush(e_11);
  goto w_30;
  e_11 :
  goto d_11;
  w_30 :
  Return();
  d_11 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(a_7));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(a_7),Egetd(0,5)));
  Return();
  q_29 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_25;
  g_25 :
  TestStr(1,1,"-?",&&fail);
  Rpush(g_11);
  goto y_30;
  g_11 :
  goto f_11;
  y_30 :
  Return();
  f_11 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(a_7));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(a_7),Egetd(0,5)));
  Return();
  b_7 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_g_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_31;
  b_31 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  Rpush(i_11);
  goto d_31;
  i_11 :
  goto h_11;
  d_31 :
  Return();
  h_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_13)
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(s_6,Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(j_11);
  f_33 :
  Cpush(l_11);
  Cpush(o_11);
  Ccall(_stratego_g_13);
  goto n_11;
  o_11 :
  Cpush(b_13);
  Ccall(_stratego_x_12);
  goto q_11;
  b_13 :
  Epushd(0,5);
  MoveTop(0,1);
  goto t_31;
  t_31 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto u_31;
  u_31 :
  TestFunFC(f_0,&&l_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Cpush(o_13);
  Rpush(a_14);
  goto g_33;
  a_14 :
  goto m_13;
  o_13 :
  Ccontinue(d_14);
  Rpush(h_14);
  goto h_33;
  h_14 :
  goto m_13;
  d_14 :
  Rpush(n_14);
  goto i_33;
  n_14 :
  goto i_14;
  m_13 :
  Cpop();
  i_14 :
  goto e_13;
  l_13 :
  Rpush(e_13);
  goto h_33;
  e_13 :
  goto d_13;
  g_33 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(1,1);
  goto j_31;
  j_31 :
  TestStr(1,1,"-I",&&fail);
  Rpush(p_14);
  goto j_33;
  p_14 :
  goto o_14;
  j_33 :
  Return();
  o_14 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(r_14,Egetd(0,4)));
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(r_14,Egetd(0,4)),Egetd(0,5)));
  Return();
  h_33 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(1,1);
  goto n_31;
  n_31 :
  TestStr(1,1,"-nodep",&&fail);
  Rpush(t_14);
  goto m_33;
  t_14 :
  goto s_14;
  m_33 :
  Return();
  s_14 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(u_14));
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(u_14),Egetd(0,3)));
  Return();
  i_33 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(1,1);
  goto q_31;
  q_31 :
  TestStr(1,1,"-dep",&&fail);
  Rpush(w_14);
  goto o_33;
  w_14 :
  goto v_14;
  o_33 :
  Return();
  v_14 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(x_14,Egetd(0,4)));
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(x_14,Egetd(0,4)),Egetd(0,5)));
  Return();
  d_13 :
  Epopd(0,5);
  goto c_13;
  q_11 :
  Cpop();
  c_13 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_14);
  goto f_33;
  y_14 :
  AllBuild();
  goto p_11;
  n_11 :
  Cpop();
  p_11 :
  goto k_11;
  l_11 :
  Epushd(0,3);
  MoveTop(0,1);
  goto w_31;
  w_31 :
  TestFunFC(f_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(j_15);
  goto r_33;
  j_15 :
  goto i_15;
  r_33 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(m_15,Egetd(0,2)),Egetd(0,3)));
  Return();
  i_15 :
  Epopd(0,3);
  goto z_14;
  k_11 :
  Cpop();
  z_14 :
  Return();
  j_11 :
  AllBuild();
ENDPROC

PROC(_stratego_main)
  Epushd(0,15);
  Ccall(_stratego_h_13);
  MoveTop(0,1);
  Cpush(r_15);
  Rpush(v_15);
  t_49 :
  Cpush(x_15);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(k_16);
  Ccall(_stratego_w_12);
  goto j_16;
  k_16 :
  Ccontinue(q_16);
  Epushd(1,2);
  MoveTop(1,1);
  goto u_33;
  u_33 :
  TestFunFC(m_15,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(e_17);
  goto u_49;
  e_17 :
  goto d_17;
  u_49 :
  Return();
  d_17 :
  Epopd(1,2);
  goto j_16;
  q_16 :
  Ccall(_stratego_v_12);
  goto f_17;
  j_16 :
  Cpop();
  f_17 :
  OneNextSon();
  AllBuild();
  goto w_15;
  x_15 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_18);
  goto t_49;
  a_18 :
  AllBuild();
  goto z_17;
  w_15 :
  Cpop();
  z_17 :
  Return();
  v_15 :
  Ccall(_stratego_u_12);
  goto n_15;
  r_15 :
  goto b_18;
  n_15 :
  Cpop();
  b_18 :
  Rpush(c_18);
  v_49 :
  Cpush(j_18);
  Ccall(_stratego_g_13);
  goto i_18;
  j_18 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Cpush(s_18);
  Epushd(1,2);
  MoveTop(1,1);
  goto z_33;
  z_33 :
  TestFunFC(s_6,&&e_19,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(d_19);
  goto w_49;
  e_19 :
  TestFunFC(j_10,&&f_19,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(d_19);
  goto x_49;
  f_19 :
  TestFunFC(o_10,&&g_19,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(d_19);
  goto y_49;
  g_19 :
  TestFunFC(x_14,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(d_19);
  goto z_49;
  d_19 :
  goto a_19;
  w_49 :
  Move(0,2,1,2);
  Return();
  x_49 :
  Move(0,3,1,2);
  Return();
  y_49 :
  Move(0,4,1,2);
  Return();
  z_49 :
  Move(0,5,1,2);
  Return();
  a_19 :
  Epopd(1,2);
  goto r_18;
  s_18 :
  goto j_19;
  r_18 :
  Cpop();
  j_19 :
  OneNextSon();
  Rpush(o_19);
  goto v_49;
  o_19 :
  AllBuild();
  goto l_18;
  i_18 :
  Cpop();
  l_18 :
  Return();
  c_18 :
  Rpush(b_20);
  a_50 :
  Cpush(g_20);
  Ccall(_stratego_g_13);
  goto c_20;
  g_20 :
  Ccontinue(h_20);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto b_34;
  b_34 :
  TestFunFC(r_14,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(t_20);
  goto b_50;
  t_20 :
  goto l_20;
  b_50 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  l_20 :
  Epopd(1,2);
  OneNextSon();
  Rpush(c_21);
  goto a_50;
  c_21 :
  AllBuild();
  goto c_20;
  h_20 :
  Epushd(1,3);
  MoveTop(1,1);
  goto d_34;
  d_34 :
  TestFunFC(f_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(k_21);
  goto c_50;
  k_21 :
  goto e_21;
  c_50 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(l_21);
  goto a_50;
  l_21 :
  Return();
  e_21 :
  Epopd(1,3);
  goto d_21;
  c_20 :
  Cpop();
  d_21 :
  Return();
  b_20 :
  MoveTop(0,6);
  Cpush(t_21);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  goto q_21;
  t_21 :
  Tset((ATerm)ATmakeAppl0(x_21));
  goto w_21;
  q_21 :
  Cpop();
  w_21 :
  MoveTop(0,7);
  Cpush(d_22);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto y_21;
  d_22 :
  Tset((ATerm)ATmakeAppl0(r_22));
  goto n_22;
  y_21 :
  Cpop();
  n_22 :
  MoveTop(0,8);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(0,7),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl0(o_0),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl0(o_0)))));
  MoveTop(0,9);
  goto a_39;
  a_39 :
  TestFunFC(o_1,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,11,0,9,1);
  goto b_39;
  b_39 :
  TestFunFC(o_1,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto c_39;
  c_39 :
  TestFunFC(o_1,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,15,0,13,1);
  goto d_39;
  d_39 :
  TestFunFC(o_0,&&fail,Egetd(0,15));
  Rpush(w_22);
  goto h_50;
  w_22 :
  goto v_22;
  h_50 :
  Epushd(1,5);
  NotNULLd(0,10);
  NotNULLd(0,12);
  NotNULLd(0,14);
  Tset((ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(f_0,Egetd(0,10),(ATerm)ATmakeAppl0(k_0)),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(f_0,Egetd(0,10),(ATerm)ATmakeAppl0(k_0)),(ATerm)ATmakeAppl2(o_1,Egetd(0,12),(ATerm)ATmakeAppl2(o_1,Egetd(0,14),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl0(k_0),(ATerm)ATmakeAppl0(o_0)))))));
  Rpush(y_22);
  i_50 :
  Epushd(2,13);
  MoveTop(2,1);
  goto c_37;
  c_37 :
  TestFunFC(o_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto d_37;
  d_37 :
  TestFunFC(f_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto e_37;
  e_37 :
  TestFunFC(o_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto f_37;
  f_37 :
  TestFunFC(o_1,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto g_37;
  g_37 :
  TestFunFC(o_1,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto h_37;
  h_37 :
  TestFunFC(o_1,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto i_37;
  i_37 :
  TestFunFC(o_0,&&fail,Egetd(2,13));
  Cpush(c_23);
  Rpush(d_23);
  goto j_50;
  d_23 :
  goto b_23;
  c_23 :
  Rpush(f_23);
  goto k_50;
  f_23 :
  goto e_23;
  b_23 :
  Cpop();
  e_23 :
  goto a_23;
  a_23 :
  goto z_22;
  j_50 :
  Epushd(3,8);
  Tdupl();
  Epushd(4,3);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(2,3),(ATerm)ATmakeAppl2(o_1,Egetd(2,8),(ATerm)ATmakeAppl0(o_0))));
  MoveTop(4,1);
  goto l_36;
  l_36 :
  TestFunFC(o_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(h_23);
  goto l_50;
  h_23 :
  goto g_23;
  l_50 :
  Epushd(5,3);
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Cpush(j_23);
  Epushd(6,6);
  Ccall(_stratego_r_11);
  MoveTop(6,1);
  Tset(ATmakeString("r"));
  NotNULLd(6,1);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(6,1),(ATerm)ATmakeAppl2(o_1,ATmakeString("r"),(ATerm)ATmakeAppl0(o_0))));
  MoveTop(6,2);
  goto j_35;
  j_35 :
  TestFunFC(o_1,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto k_35;
  k_35 :
  TestFunFC(o_1,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto l_35;
  l_35 :
  TestFunFC(o_0,&&fail,Egetd(6,6));
  Rpush(m_23);
  goto p_50;
  m_23 :
  goto k_23;
  p_50 :
  Epushd(7,6);
  NotNULLd(6,3);
  NotNULLd(6,5);
  Tset((ATerm)ATmakeAppl2(f_0,Egetd(6,3),(ATerm)ATmakeAppl2(f_0,ATmakeString("."),(ATerm)ATmakeAppl2(f_0,Egetd(6,5),(ATerm)ATmakeAppl0(k_0)))));
  Ccall(_stratego_m_12);
  MoveTop(7,1);
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(f_0,ATmakeString("."),Egetd(0,6)));
  NotNULLd(7,1);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(7,1),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(f_0,ATmakeString("."),Egetd(0,6)),(ATerm)ATmakeAppl0(o_0))));
  MoveTop(7,2);
  goto g_35;
  g_35 :
  TestFunFC(o_1,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto h_35;
  h_35 :
  TestFunFC(o_1,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto i_35;
  i_35 :
  TestFunFC(o_0,&&fail,Egetd(7,6));
  Rpush(p_23);
  goto u_50;
  p_23 :
  goto n_23;
  u_50 :
  Epushd(8,3);
  NotNULLd(7,5);
  Tset(Egetd(7,5));
  Rpush(q_23);
  v_50 :
  Epushd(9,3);
  MoveTop(9,1);
  goto x_34;
  x_34 :
  TestFunFC(f_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Cpush(w_23);
  Rpush(y_23);
  goto w_50;
  y_23 :
  goto v_23;
  w_23 :
  Rpush(b_24);
  goto x_50;
  b_24 :
  goto z_23;
  v_23 :
  Cpop();
  z_23 :
  goto t_23;
  t_23 :
  goto s_23;
  w_50 :
  NotNULLd(9,2);
  NotNULLd(7,3);
  Tset((ATerm)ATmakeAppl2(f_0,Egetd(9,2),(ATerm)ATmakeAppl2(f_0,ATmakeString("/"),(ATerm)ATmakeAppl2(f_0,Egetd(7,3),(ATerm)ATmakeAppl0(k_0)))));
  Ccall(_stratego_m_12);
  Ccall(_stratego_z_11);
  Return();
  x_50 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(c_24);
  goto v_50;
  c_24 :
  Return();
  s_23 :
  Epopd(9,3);
  Return();
  q_23 :
  MoveTop(8,1);
  Tdupl();
  Epushd(9,3);
  Tset((ATerm)ATmakeAppl0(o_0));
  Ccall(_stratego_d_12);
  Ccall(_stratego_c_12);
  MoveTop(9,1);
  NotNULLd(9,1);
  Tset((ATerm)ATmakeAppl2(o_1,ATmakeString("pack-stratego"),(ATerm)ATmakeAppl2(o_1,Egetd(9,1),(ATerm)ATmakeAppl0(o_0))));
  Ccall(_stratego_b_12);
  MoveTop(9,2);
  Move(8,3,9,2);
  NotNULLd(8,1);
  NotNULLd(8,3);
  Tset((ATerm)ATmakeAppl2(o_1,ATmakeString("parse-mod"),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(f_0,ATmakeString("-silent"),(ATerm)ATmakeAppl2(f_0,ATmakeString("-i"),(ATerm)ATmakeAppl2(f_0,Egetd(8,1),(ATerm)ATmakeAppl2(f_0,ATmakeString("-o"),(ATerm)ATmakeAppl2(f_0,Egetd(8,3),(ATerm)ATmakeAppl0(k_0)))))),(ATerm)ATmakeAppl0(o_0))));
  Ccall(_stratego_a_12);
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Ccall(_stratego_y_11);
  MoveTop(9,3);
  Move(8,2,9,3);
  NotNULLd(8,3);
  Tset((ATerm)ATmakeAppl2(f_0,Egetd(8,3),(ATerm)ATmakeAppl0(k_0)));
  Tdupl();
  NotNULLd(8,3);
  Tset((ATerm)ATmakeAppl2(o_1,ATmakeString("rm"),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(f_0,ATmakeString("-f"),(ATerm)ATmakeAppl2(f_0,Egetd(8,3),(ATerm)ATmakeAppl0(k_0))),(ATerm)ATmakeAppl0(o_0))));
  Ccall(_stratego_a_12);
  Tpop();
  Epopd(9,3);
  Tpop();
  NotNULLd(8,2);
  Tset(Egetd(8,2));
  NotNULLd(8,1);
  NotNULLd(8,2);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(8,1),(ATerm)ATmakeAppl2(o_1,Egetd(8,2),(ATerm)ATmakeAppl0(o_0))));
  Epopd(8,3);
  Return();
  n_23 :
  Epopd(7,6);
  Return();
  k_23 :
  Epopd(6,6);
  goto i_23;
  j_23 :
  Ccontinue(d_24);
  Epushd(6,6);
  Ccall(_stratego_r_11);
  MoveTop(6,1);
  Tset(ATmakeString("tree"));
  NotNULLd(6,1);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(6,1),(ATerm)ATmakeAppl2(o_1,ATmakeString("tree"),(ATerm)ATmakeAppl0(o_0))));
  MoveTop(6,2);
  goto e_36;
  e_36 :
  TestFunFC(o_1,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto f_36;
  f_36 :
  TestFunFC(o_1,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto g_36;
  g_36 :
  TestFunFC(o_0,&&fail,Egetd(6,6));
  Rpush(g_24);
  goto j_51;
  g_24 :
  goto f_24;
  j_51 :
  Epushd(7,6);
  NotNULLd(6,3);
  NotNULLd(6,5);
  Tset((ATerm)ATmakeAppl2(f_0,Egetd(6,3),(ATerm)ATmakeAppl2(f_0,ATmakeString("."),(ATerm)ATmakeAppl2(f_0,Egetd(6,5),(ATerm)ATmakeAppl0(k_0)))));
  Ccall(_stratego_m_12);
  MoveTop(7,1);
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(f_0,ATmakeString("."),Egetd(0,6)));
  NotNULLd(7,1);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(7,1),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(f_0,ATmakeString("."),Egetd(0,6)),(ATerm)ATmakeAppl0(o_0))));
  MoveTop(7,2);
  goto b_36;
  b_36 :
  TestFunFC(o_1,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto c_36;
  c_36 :
  TestFunFC(o_1,&&fail,Egetd(7,4));
  MoveArg(7,5,7,4,0);
  MoveArg(7,6,7,4,1);
  goto d_36;
  d_36 :
  TestFunFC(o_0,&&fail,Egetd(7,6));
  Rpush(j_24);
  goto o_51;
  j_24 :
  goto h_24;
  o_51 :
  Epushd(8,2);
  NotNULLd(7,5);
  Tset(Egetd(7,5));
  Rpush(k_24);
  p_51 :
  Epushd(9,3);
  MoveTop(9,1);
  goto x_35;
  x_35 :
  TestFunFC(f_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Cpush(p_24);
  Rpush(r_24);
  goto q_51;
  r_24 :
  goto o_24;
  p_24 :
  Rpush(t_24);
  goto r_51;
  t_24 :
  goto s_24;
  o_24 :
  Cpop();
  s_24 :
  goto n_24;
  n_24 :
  goto l_24;
  q_51 :
  NotNULLd(9,2);
  NotNULLd(7,3);
  Tset((ATerm)ATmakeAppl2(f_0,Egetd(9,2),(ATerm)ATmakeAppl2(f_0,ATmakeString("/"),(ATerm)ATmakeAppl2(f_0,Egetd(7,3),(ATerm)ATmakeAppl0(k_0)))));
  Ccall(_stratego_m_12);
  Ccall(_stratego_z_11);
  Return();
  r_51 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(v_24);
  goto p_51;
  v_24 :
  Return();
  l_24 :
  Epopd(9,3);
  Return();
  k_24 :
  MoveTop(8,1);
  Ccall(_stratego_y_11);
  MoveTop(8,2);
  NotNULLd(8,1);
  NotNULLd(8,2);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(8,1),(ATerm)ATmakeAppl2(o_1,Egetd(8,2),(ATerm)ATmakeAppl0(o_0))));
  Epopd(8,2);
  Return();
  h_24 :
  Epopd(7,6);
  Return();
  f_24 :
  Epopd(6,6);
  goto i_23;
  d_24 :
  Epushd(6,1);
  MoveTop(6,1);
  NotNULLd(6,1);
  Tset((ATerm)ATmakeAppl2(f_0,ATmakeString("module "),(ATerm)ATmakeAppl2(f_0,Egetd(6,1),(ATerm)ATmakeAppl2(f_0,ATmakeString(" not found"),(ATerm)ATmakeAppl0(k_0)))));
  Ccall(_stratego_x_11);
  Epopd(6,1);
  goto w_24;
  i_23 :
  Cpop();
  w_24 :
  MoveTop(5,1);
  Move(3,1,5,1);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Ccall(_stratego_v_11);
  MoveTop(5,2);
  Move(3,2,5,2);
  NotNULLd(3,2);
  NotNULLd(2,6);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(3,2),(ATerm)ATmakeAppl2(o_1,Egetd(2,6),(ATerm)ATmakeAppl0(o_0))));
  Ccall(_stratego_f_12);
  MoveTop(5,3);
  Move(3,3,5,3);
  Epopd(5,3);
  Return();
  g_23 :
  Epopd(4,3);
  Tpop();
  NotNULLd(3,3);
  NotNULLd(2,4);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(3,3),(ATerm)ATmakeAppl2(o_1,Egetd(2,4),(ATerm)ATmakeAppl0(o_0))));
  MoveTop(3,4);
  goto z_36;
  z_36 :
  TestFunFC(o_1,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto a_37;
  a_37 :
  TestFunFC(o_1,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto b_37;
  b_37 :
  TestFunFC(o_0,&&fail,Egetd(3,8));
  Rpush(z_24);
  goto z_51;
  z_24 :
  goto y_24;
  z_51 :
  Epushd(4,6);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(b_25);
  a_52 :
  Cpush(e_25);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_25);
  goto a_52;
  f_25 :
  AllBuild();
  goto c_25;
  e_25 :
  Ccall(_stratego_g_13);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto h_25;
  c_25 :
  Cpop();
  h_25 :
  Return();
  b_25 :
  MoveTop(4,1);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(3,3),(ATerm)ATmakeAppl2(o_1,Egetd(2,6),(ATerm)ATmakeAppl0(o_0))));
  MoveTop(4,2);
  goto w_36;
  w_36 :
  TestFunFC(o_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto x_36;
  x_36 :
  TestFunFC(o_1,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto y_36;
  y_36 :
  TestFunFC(o_0,&&fail,Egetd(4,6));
  Rpush(q_25);
  goto c_52;
  q_25 :
  goto p_25;
  c_52 :
  Epushd(5,8);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(s_25);
  d_52 :
  Cpush(u_25);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_25);
  goto d_52;
  v_25 :
  AllBuild();
  goto t_25;
  u_25 :
  Ccall(_stratego_g_13);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto x_25;
  t_25 :
  Cpop();
  x_25 :
  Return();
  s_25 :
  MoveTop(5,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(2,3),(ATerm)ATmakeAppl2(o_1,Egetd(3,1),(ATerm)ATmakeAppl2(o_1,Egetd(2,10),(ATerm)ATmakeAppl0(o_0)))));
  MoveTop(5,2);
  goto s_36;
  s_36 :
  TestFunFC(o_1,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto t_36;
  t_36 :
  TestFunFC(o_1,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto u_36;
  u_36 :
  TestFunFC(o_1,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto v_36;
  v_36 :
  TestFunFC(o_0,&&fail,Egetd(5,8));
  Rpush(z_25);
  goto f_52;
  z_25 :
  goto y_25;
  f_52 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset((ATerm)ATmakeAppl2(f_0,Egetd(5,5),Egetd(5,7)));
  NotNULLd(4,1);
  NotNULLd(5,1);
  NotNULLd(2,8);
  NotNULLd(5,5);
  NotNULLd(5,7);
  NotNULLd(2,12);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(4,1),(ATerm)ATmakeAppl2(o_1,Egetd(5,1),(ATerm)ATmakeAppl2(o_1,Egetd(2,8),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(f_0,Egetd(5,5),Egetd(5,7)),(ATerm)ATmakeAppl2(o_1,Egetd(2,12),(ATerm)ATmakeAppl0(o_0)))))));
  Return();
  y_25 :
  Epopd(5,8);
  Return();
  p_25 :
  Epopd(4,6);
  Return();
  y_24 :
  Epopd(3,8);
  Return();
  k_50 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(2,4),(ATerm)ATmakeAppl2(o_1,Egetd(2,6),(ATerm)ATmakeAppl2(o_1,Egetd(2,8),(ATerm)ATmakeAppl2(o_1,Egetd(2,10),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(f_0,Egetd(2,3),Egetd(2,12)),(ATerm)ATmakeAppl0(o_0)))))));
  Return();
  z_22 :
  Cpush(c_26);
  Epushd(3,11);
  MoveTop(3,1);
  goto k_37;
  k_37 :
  TestFunFC(o_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto l_37;
  l_37 :
  TestFunFC(k_0,&&fail,Egetd(3,2));
  goto m_37;
  m_37 :
  TestFunFC(o_1,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto n_37;
  n_37 :
  TestFunFC(o_1,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto o_37;
  o_37 :
  TestFunFC(o_1,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto p_37;
  p_37 :
  TestFunFC(o_1,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto q_37;
  q_37 :
  TestFunFC(o_0,&&fail,Egetd(3,11));
  Rpush(e_26);
  goto h_52;
  e_26 :
  goto d_26;
  h_52 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(3,8),(ATerm)ATmakeAppl2(o_1,Egetd(3,10),(ATerm)ATmakeAppl0(o_0))));
  Return();
  d_26 :
  Epopd(3,11);
  goto a_26;
  c_26 :
  Rpush(h_26);
  goto i_50;
  h_26 :
  goto f_26;
  a_26 :
  Cpop();
  f_26 :
  Epopd(2,13);
  Return();
  y_22 :
  MoveTop(1,1);
  goto x_38;
  x_38 :
  TestFunFC(o_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_38;
  y_38 :
  TestFunFC(o_1,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_38;
  z_38 :
  TestFunFC(o_0,&&fail,Egetd(1,5));
  Rpush(i_26);
  goto i_52;
  i_26 :
  goto x_22;
  i_52 :
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_u_11);
  TestFunTop(o_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(o_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_11);
  OneNextSon();
  Ccall(_stratego_s_11);
  AllBuild();
  AllBuild();
  MoveTop(2,1);
  goto u_38;
  u_38 :
  TestFunFC(o_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_38;
  v_38 :
  TestFunFC(o_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_38;
  w_38 :
  TestFunFC(o_0,&&fail,Egetd(2,5));
  Rpush(k_26);
  goto j_52;
  k_26 :
  goto j_26;
  j_52 :
  Epushd(3,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(n_26);
  Rpush(o_26);
  k_52 :
  Cpush(q_26);
  Epushd(4,3);
  MoveTop(4,1);
  goto u_37;
  u_37 :
  TestFunFC(f_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto v_37;
  v_37 :
  TestFunFC(t_10,&&fail,Egetd(4,2));
  Rpush(t_26);
  goto l_52;
  t_26 :
  goto s_26;
  l_52 :
  Return();
  s_26 :
  Epopd(4,3);
  goto p_26;
  q_26 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_26);
  goto k_52;
  v_26 :
  AllBuild();
  goto u_26;
  p_26 :
  Cpop();
  u_26 :
  Return();
  o_26 :
  NotNULLd(0,8);
  NotNULLd(2,4);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(0,8),(ATerm)ATmakeAppl2(o_1,Egetd(2,4),(ATerm)ATmakeAppl0(o_0))));
  Ccall(_stratego_s_12);
  goto m_26;
  n_26 :
  NotNULLd(0,8);
  NotNULLd(2,4);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(0,8),(ATerm)ATmakeAppl2(o_1,Egetd(2,4),(ATerm)ATmakeAppl0(o_0))));
  Ccall(_stratego_n_12);
  goto w_26;
  m_26 :
  Cpop();
  w_26 :
  Cpush(y_26);
  Epushd(4,6);
  Cpush(b_27);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  goto a_27;
  b_27 :
  Cpush(d_27);
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(e_27);
  m_52 :
  Cpush(g_27);
  Epushd(5,3);
  MoveTop(5,1);
  goto x_37;
  x_37 :
  TestFunFC(f_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto y_37;
  y_37 :
  TestFunFC(u_14,&&fail,Egetd(5,2));
  Rpush(j_27);
  goto n_52;
  j_27 :
  goto i_27;
  n_52 :
  Return();
  i_27 :
  Epopd(5,3);
  goto f_27;
  g_27 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_27);
  goto m_52;
  l_27 :
  AllBuild();
  goto k_27;
  f_27 :
  Cpop();
  k_27 :
  Return();
  e_27 :
  Cpop();
  Crestore();
  Cjump();
  d_27 :
  Ccall(_stratego_r_11);
  goto c_27;
  a_27 :
  Cpop();
  c_27 :
  MoveTop(4,1);
  Move(3,1,4,1);
  Tdupl();
  Epushd(5,1);
  MoveTop(5,1);
  NotNULLd(5,1);
  Tset((ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl0(f_2),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(f_0,ATmakeString("dependency file: "),(ATerm)ATmakeAppl2(f_0,Egetd(5,1),(ATerm)ATmakeAppl0(k_0))),(ATerm)ATmakeAppl0(o_0))));
  Ccall(_stratego_g_12);
  Epopd(5,1);
  Tpop();
  NotNULLd(0,8);
  NotNULLd(2,2);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(0,8),(ATerm)ATmakeAppl2(o_1,Egetd(2,2),(ATerm)ATmakeAppl0(o_0))));
  MoveTop(4,2);
  goto q_38;
  q_38 :
  TestFunFC(o_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto r_38;
  r_38 :
  TestFunFC(o_1,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto s_38;
  s_38 :
  TestFunFC(o_0,&&fail,Egetd(4,6));
  Rpush(n_27);
  goto u_52;
  n_27 :
  goto m_27;
  u_52 :
  Epushd(5,2);
  Tdupl();
  Epushd(6,5);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Move(5,2,3,1);
  NotNULLd(5,2);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(5,2),(ATerm)ATmakeAppl2(o_1,ATmakeString("dep"),(ATerm)ATmakeAppl0(o_0))));
  MoveTop(6,1);
  goto n_38;
  n_38 :
  TestFunFC(o_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto o_38;
  o_38 :
  TestFunFC(o_1,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto p_38;
  p_38 :
  TestFunFC(o_0,&&fail,Egetd(6,5));
  Rpush(q_27);
  goto w_52;
  q_27 :
  goto o_27;
  w_52 :
  Epushd(7,2);
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset((ATerm)ATmakeAppl2(f_0,Egetd(6,2),(ATerm)ATmakeAppl2(f_0,ATmakeString("."),(ATerm)ATmakeAppl2(f_0,Egetd(6,4),(ATerm)ATmakeAppl0(k_0)))));
  Ccall(_stratego_m_12);
  Ccall(_stratego_i_12);
  MoveTop(7,1);
  Move(5,1,7,1);
  NotNULLd(5,2);
  NotNULLd(4,5);
  Tset((ATerm)ATmakeAppl2(f_0,Egetd(5,2),(ATerm)ATmakeAppl2(f_0,ATmakeString(":"),Egetd(4,5))));
  Cpush(s_27);
  Ccall(_stratego_g_13);
  goto r_27;
  s_27 :
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_27);
  y_52 :
  Cpush(w_27);
  Ccall(_stratego_g_13);
  goto v_27;
  w_27 :
  Epushd(8,3);
  TestFunTop(f_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_28);
  goto y_52;
  a_28 :
  AllBuild();
  MoveTop(8,1);
  goto l_38;
  l_38 :
  TestFunFC(f_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(b_28);
  goto z_52;
  b_28 :
  goto z_27;
  z_52 :
  Tset(ATmakeString(" "));
  NotNULLd(8,2);
  NotNULLd(8,3);
  Tset((ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,Egetd(8,2),Egetd(8,3))));
  Return();
  z_27 :
  Epopd(8,3);
  goto y_27;
  v_27 :
  Cpop();
  y_27 :
  Return();
  u_27 :
  AllBuild();
  goto t_27;
  r_27 :
  Cpop();
  t_27 :
  MoveTop(7,2);
  NotNULLd(5,1);
  NotNULLd(7,2);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(5,1),(ATerm)ATmakeAppl2(o_1,Egetd(7,2),(ATerm)ATmakeAppl0(o_0))));
  Ccall(_stratego_g_12);
  Epopd(7,2);
  Return();
  o_27 :
  Epopd(6,5);
  Tpop();
  NotNULLd(4,3);
  NotNULLd(4,5);
  Tset((ATerm)ATmakeAppl2(o_1,Egetd(4,3),(ATerm)ATmakeAppl2(o_1,Egetd(4,5),(ATerm)ATmakeAppl0(o_0))));
  Epopd(5,2);
  Return();
  m_27 :
  Epopd(4,6);
  goto x_26;
  y_26 :
  goto c_28;
  x_26 :
  Cpop();
  c_28 :
  Ccall(_stratego_h_12);
  MoveTop(3,2);
  NotNULLd(0,2);
  NotNULLd(3,2);
  Tset((ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl0(f_2),(ATerm)ATmakeAppl2(o_1,(ATerm)ATmakeAppl2(f_0,Egetd(0,2),(ATerm)ATmakeAppl2(f_0,ATmakeString(" ("),(ATerm)ATmakeAppl2(f_0,Egetd(3,2),(ATerm)ATmakeAppl2(f_0,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(k_0))))),(ATerm)ATmakeAppl0(o_0))));
  Ccall(_stratego_g_12);
  Epopd(3,2);
  Return();
  j_26 :
  Epopd(2,5);
  Return();
  x_22 :
  Epopd(1,5);
  Return();
  v_22 :
  Epopd(0,15);
ENDPROC

DOIT

