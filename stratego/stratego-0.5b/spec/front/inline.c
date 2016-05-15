#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,d_41);
VARDECL(AFun,m_40);
VARDECL(AFun,n_39);
VARDECL(AFun,f_39);
VARDECL(AFun,i_32);
VARDECL(AFun,h_31);
VARDECL(AFun,c_30);
VARDECL(AFun,t_29);
VARDECL(AFun,y_27);
VARDECL(AFun,a_27);
VARDECL(AFun,w_26);
VARDECL(AFun,j_26);
VARDECL(AFun,v_25);
VARDECL(AFun,w_24);
VARDECL(AFun,i_24);
VARDECL(AFun,j_17);
VARDECL(AFun,h_17);
VARDECL(AFun,w_16);
VARDECL(AFun,t_16);
VARDECL(AFun,f_9);
VARDECL(AFun,e_9);
VARDECL(AFun,t_6);
VARDECL(AFun,p_6);
VARDECL(AFun,s_1);
VARDECL(AFun,r_1);
VARDECL(AFun,p_1);
VARDECL(AFun,w_0);
VARDECL(AFun,v_0);
VARDECL(AFun,k_0);
VARDECL(AFun,j_0);
VARDECL(AFun,e_0);
VARDECL(AFun,c_0);
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
PROCDECL(_stratego_o_12);
PROCDECL(_stratego_p_12);
PROCDECL(_stratego_q_12);
PROCDECL(_stratego_r_12);
PROCDECL(_stratego_s_12);
PROCDECL(_stratego_t_12);
PROCDECL(_stratego_u_12);
PROCDECL(_stratego_v_12);
PROCDECL(_stratego_w_12);
PROCDECL(_stratego_x_12);
PROCDECL(_stratego_y_12);
PROCDECL(_stratego_z_12);
PROCDECL(_stratego_a_13);
PROCDECL(_stratego_b_13);
PROCDECL(_stratego_c_13);
PROCDECL(_stratego_d_13);
PROCDECL(_stratego_e_13);
PROCDECL(_stratego_f_13);
PROCDECL(_stratego_g_13);
PROCDECL(_stratego_h_13);
PROCDECL(_stratego_i_13);
PROCDECL(_stratego_j_13);
PROCDECL(_stratego_k_13);
PROCDECL(_stratego_l_13);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(d_41,ATmakeAFun("Statistics",0,0));
  MOVE(m_40,ATmakeAFun("DeclVersion",1,0));
  MOVE(n_39,ATmakeAFun("Version",0,0));
  MOVE(f_39,ATmakeAFun("Verbose",0,0));
  MOVE(i_32,ATmakeAFun("Undefined",1,0));
  MOVE(h_31,ATmakeAFun("Help",0,0));
  MOVE(c_30,ATmakeAFun("stdin",0,0));
  MOVE(t_29,ATmakeAFun("Input",1,0));
  MOVE(y_27,ATmakeAFun("Binary",0,0));
  MOVE(a_27,ATmakeAFun("stdout",0,0));
  MOVE(w_26,ATmakeAFun("Output",1,0));
  MOVE(j_26,ATmakeAFun("Program",1,0));
  MOVE(v_25,ATmakeAFun("Runtime",1,0));
  MOVE(w_24,ATmakeAFun("Silent",0,0));
  MOVE(i_24,ATmakeAFun("stderr",0,0));
  MOVE(j_17,ATmakeAFun("Match",1,0));
  MOVE(h_17,ATmakeAFun("Seq",2,0));
  MOVE(w_16,ATmakeAFun("Id",0,0));
  MOVE(t_16,ATmakeAFun("Fail",0,0));
  MOVE(f_9,ATmakeAFun("Rule",3,0));
  MOVE(e_9,ATmakeAFun("LRule",1,0));
  MOVE(t_6,ATmakeAFun("Scope",2,0));
  MOVE(p_6,ATmakeAFun("Var",1,0));
  MOVE(s_1,ATmakeAFun("Rec",2,0));
  MOVE(r_1,ATmakeAFun("SDef",3,0));
  MOVE(p_1,ATmakeAFun("Let",2,0));
  MOVE(w_0,ATmakeAFun("SVar",1,0));
  MOVE(v_0,ATmakeAFun("Call",2,0));
  MOVE(k_0,ATmakeAFun("Cons",2,0));
  MOVE(j_0,ATmakeAFun("Nil",0,0));
  MOVE(e_0,ATmakeAFun("TNil",0,0));
  MOVE(c_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_a_12)
  Epushd(0,7);
  MoveTop(0,1);
  goto m_13;
  m_13 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto n_13;
  n_13 :
  TestFunFC(c_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto o_13;
  o_13 :
  TestFunFC(e_0,&&d_0,Egetd(0,5));
  Rpush(b_0);
  goto a_15;
  d_0 :
  TestFunFC(c_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto p_13;
  p_13 :
  TestFunFC(e_0,&&fail,Egetd(0,7));
  Rpush(b_0);
  goto b_15;
  b_0 :
  goto a_0;
  a_15 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  b_15 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,2),(ATerm)ATmakeAppl2(c_0,Egetd(0,4),(ATerm)ATmakeAppl0(e_0))));
  Rpush(f_0);
  c_15 :
  Epushd(2,9);
  MoveTop(2,1);
  goto h_2;
  h_2 :
  TestFunFC(c_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto a_3;
  a_3 :
  TestFunFC(j_0,&&i_0,Egetd(2,2));
  goto b_3;
  b_3 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto q_6;
  q_6 :
  TestFunFC(j_0,&&fail,Egetd(2,6));
  goto r_6;
  r_6 :
  TestFunFC(e_0,&&fail,Egetd(2,9));
  Rpush(h_0);
  goto d_15;
  i_0 :
  TestFunFC(k_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto d_7;
  d_7 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto e_7;
  e_7 :
  TestFunFC(k_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto r_11;
  r_11 :
  TestFunFC(e_0,&&fail,Egetd(2,9));
  Rpush(h_0);
  goto e_15;
  h_0 :
  goto g_0;
  d_15 :
  Tset((ATerm)ATmakeAppl0(j_0));
  Return();
  e_15 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_0,Egetd(2,3),(ATerm)ATmakeAppl2(c_0,Egetd(2,7),(ATerm)ATmakeAppl0(e_0))),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_0,Egetd(2,4),(ATerm)ATmakeAppl2(c_0,Egetd(2,8),(ATerm)ATmakeAppl0(e_0))),(ATerm)ATmakeAppl0(e_0))));
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Rpush(m_0);
  goto c_15;
  m_0 :
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto e_2;
  e_2 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto f_2;
  f_2 :
  TestFunFC(c_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto g_2;
  g_2 :
  TestFunFC(e_0,&&fail,Egetd(3,5));
  Rpush(n_0);
  goto f_15;
  n_0 :
  goto l_0;
  f_15 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(3,2),Egetd(3,4)));
  Return();
  l_0 :
  Epopd(3,5);
  Return();
  g_0 :
  Epopd(2,9);
  Return();
  f_0 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,1),(ATerm)ATmakeAppl2(c_0,Egetd(0,6),(ATerm)ATmakeAppl0(e_0))));
  Epopd(1,1);
  Return();
  a_0 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_b_12)
  Epushd(0,5);
  Ccall(_stratego_a_12);
  MoveTop(0,1);
  goto p_15;
  p_15 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto q_15;
  q_15 :
  TestFunFC(c_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto r_15;
  r_15 :
  TestFunFC(e_0,&&fail,Egetd(0,5));
  Rpush(p_0);
  goto o_16;
  p_0 :
  goto o_0;
  o_16 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(q_0);
  p_16 :
  Cpush(s_0);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,4);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto m_15;
  m_15 :
  TestFunFC(v_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto n_15;
  n_15 :
  TestFunFC(w_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto o_15;
  o_15 :
  TestFunFC(j_0,&&fail,Egetd(2,4));
  Rpush(u_0);
  goto r_16;
  u_0 :
  goto t_0;
  r_16 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Move(1,2,2,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  t_0 :
  Epopd(2,4);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,2),(ATerm)ATmakeAppl2(c_0,Egetd(1,3),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_i_12);
  Epopd(1,3);
  goto r_0;
  s_0 :
  AllInit();
  y_0 :
  AllNextSon(&&z_0);
  Rpush(a_1);
  goto p_16;
  a_1 :
  goto y_0;
  z_0 :
  AllBuild();
  goto x_0;
  r_0 :
  Cpop();
  x_0 :
  Return();
  q_0 :
  Return();
  o_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_c_12)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(j_0),(ATerm)ATmakeAppl0(e_0))));
  Rpush(b_1);
  y_24 :
  Rpush(c_1);
  z_24 :
  Epushd(1,5);
  MoveTop(1,1);
  goto m_19;
  m_19 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto n_19;
  n_19 :
  TestFunFC(c_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto o_19;
  o_19 :
  TestFunFC(e_0,&&fail,Egetd(1,5));
  Cpush(g_1);
  Rpush(h_1);
  goto a_25;
  h_1 :
  goto f_1;
  g_1 :
  Ccontinue(i_1);
  Rpush(j_1);
  goto b_25;
  j_1 :
  goto f_1;
  i_1 :
  Rpush(l_1);
  goto c_25;
  l_1 :
  goto k_1;
  f_1 :
  Cpop();
  k_1 :
  goto e_1;
  e_1 :
  goto d_1;
  a_25 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(w_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(2,1),(ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_i_12);
  Epopd(2,1);
  AllBuild();
  Return();
  b_25 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,12);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,2);
  goto g_17;
  g_17 :
  TestFunFC(p_1,&&o_1,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  Rpush(n_1);
  goto g_25;
  o_1 :
  TestFunFC(r_1,&&q_1,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  MoveArg(3,1,3,2,2);
  Rpush(n_1);
  goto h_25;
  q_1 :
  TestFunFC(s_1,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  Rpush(n_1);
  goto i_25;
  n_1 :
  goto m_1;
  g_25 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(t_1);
  j_25 :
  Cpush(v_1);
  Ccall(_stratego_k_13);
  goto u_1;
  v_1 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(4,4);
  MoveTop(4,1);
  goto f_17;
  f_17 :
  TestFunFC(r_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(y_1);
  goto k_25;
  y_1 :
  goto x_1;
  k_25 :
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Return();
  x_1 :
  Epopd(4,4);
  OneNextSon();
  Rpush(z_1);
  goto j_25;
  z_1 :
  AllBuild();
  goto w_1;
  u_1 :
  Cpop();
  w_1 :
  Return();
  t_1 :
  Return();
  h_25 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Return();
  i_25 :
  NotNULLd(3,3);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(3,3),(ATerm)ATmakeAppl0(j_0)));
  Return();
  m_1 :
  MoveTop(3,5);
  Move(2,1,3,5);
  Rpush(a_2);
  m_25 :
  Cpush(c_2);
  Ccall(_stratego_k_13);
  goto b_2;
  c_2 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_12);
  OneNextSon();
  Rpush(i_2);
  goto m_25;
  i_2 :
  AllBuild();
  goto d_2;
  b_2 :
  Cpop();
  d_2 :
  Return();
  a_2 :
  MoveTop(3,6);
  Move(2,2,3,6);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(2,1),(ATerm)ATmakeAppl2(c_0,Egetd(2,2),(ATerm)ATmakeAppl0(e_0))));
  Rpush(j_2);
  o_25 :
  Epushd(4,9);
  MoveTop(4,1);
  goto p_17;
  p_17 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto q_17;
  q_17 :
  TestFunFC(j_0,&&m_2,Egetd(4,2));
  goto r_17;
  r_17 :
  TestFunFC(c_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto s_17;
  s_17 :
  TestFunFC(j_0,&&fail,Egetd(4,6));
  goto t_17;
  t_17 :
  TestFunFC(e_0,&&fail,Egetd(4,9));
  Rpush(l_2);
  goto p_25;
  m_2 :
  TestFunFC(k_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto u_17;
  u_17 :
  TestFunFC(c_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto v_17;
  v_17 :
  TestFunFC(k_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto w_17;
  w_17 :
  TestFunFC(e_0,&&fail,Egetd(4,9));
  Rpush(l_2);
  goto q_25;
  l_2 :
  goto k_2;
  p_25 :
  Tset((ATerm)ATmakeAppl0(j_0));
  Return();
  q_25 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_0,Egetd(4,3),(ATerm)ATmakeAppl2(c_0,Egetd(4,7),(ATerm)ATmakeAppl0(e_0))),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_0,Egetd(4,4),(ATerm)ATmakeAppl2(c_0,Egetd(4,8),(ATerm)ATmakeAppl0(e_0))),(ATerm)ATmakeAppl0(e_0))));
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Rpush(o_2);
  goto o_25;
  o_2 :
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto m_17;
  m_17 :
  TestFunFC(c_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto n_17;
  n_17 :
  TestFunFC(c_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto o_17;
  o_17 :
  TestFunFC(e_0,&&fail,Egetd(5,5));
  Rpush(p_2);
  goto r_25;
  p_2 :
  goto n_2;
  r_25 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(5,2),Egetd(5,4)));
  Return();
  n_2 :
  Epopd(5,5);
  Return();
  k_2 :
  Epopd(4,9);
  Return();
  j_2 :
  MoveTop(3,7);
  NotNULLd(3,7);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(3,7),(ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl0(e_0))));
  MoveTop(3,8);
  goto a_18;
  a_18 :
  TestFunFC(c_0,&&fail,Egetd(3,8));
  MoveArg(3,9,3,8,0);
  MoveArg(3,10,3,8,1);
  goto b_18;
  b_18 :
  TestFunFC(c_0,&&fail,Egetd(3,10));
  MoveArg(3,11,3,10,0);
  MoveArg(3,12,3,10,1);
  goto c_18;
  c_18 :
  TestFunFC(e_0,&&fail,Egetd(3,12));
  Rpush(r_2);
  goto t_25;
  r_2 :
  goto q_2;
  t_25 :
  Epushd(4,1);
  NotNULLd(3,9);
  Tset(Egetd(3,9));
  Rpush(s_2);
  u_25 :
  Cpush(u_2);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_2);
  goto u_25;
  v_2 :
  AllBuild();
  goto t_2;
  u_2 :
  Ccall(_stratego_k_13);
  NotNULLd(3,11);
  Tset(Egetd(3,11));
  goto w_2;
  t_2 :
  Cpop();
  w_2 :
  Return();
  s_2 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  q_2 :
  Epopd(3,12);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(y_2);
  TestFunTop(p_1);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,2);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(3,1),(ATerm)ATmakeAppl2(c_0,Egetd(2,2),(ATerm)ATmakeAppl0(e_0))));
  Rpush(z_2);
  z_25 :
  Epushd(4,9);
  MoveTop(4,1);
  goto r_18;
  r_18 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto s_18;
  s_18 :
  TestFunFC(j_0,&&e_3,Egetd(4,2));
  goto t_18;
  t_18 :
  TestFunFC(c_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto u_18;
  u_18 :
  TestFunFC(j_0,&&fail,Egetd(4,6));
  goto v_18;
  v_18 :
  TestFunFC(e_0,&&fail,Egetd(4,9));
  Rpush(d_3);
  goto a_26;
  e_3 :
  TestFunFC(k_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto w_18;
  w_18 :
  TestFunFC(c_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto x_18;
  x_18 :
  TestFunFC(k_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto y_18;
  y_18 :
  TestFunFC(e_0,&&fail,Egetd(4,9));
  Rpush(d_3);
  goto b_26;
  d_3 :
  goto c_3;
  a_26 :
  Tset((ATerm)ATmakeAppl0(j_0));
  Return();
  b_26 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_0,Egetd(4,3),(ATerm)ATmakeAppl2(c_0,Egetd(4,7),(ATerm)ATmakeAppl0(e_0))),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_0,Egetd(4,4),(ATerm)ATmakeAppl2(c_0,Egetd(4,8),(ATerm)ATmakeAppl0(e_0))),(ATerm)ATmakeAppl0(e_0))));
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(6,8);
  MoveTop(6,1);
  goto j_18;
  j_18 :
  TestFunFC(c_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,6,6,1,1);
  goto k_18;
  k_18 :
  TestFunFC(r_1,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  MoveArg(6,5,6,2,2);
  goto l_18;
  l_18 :
  TestFunFC(c_0,&&fail,Egetd(6,6));
  MoveArg(6,7,6,6,0);
  MoveArg(6,8,6,6,1);
  goto m_18;
  m_18 :
  TestFunFC(e_0,&&fail,Egetd(6,8));
  Rpush(h_3);
  goto c_26;
  h_3 :
  goto g_3;
  c_26 :
  NotNULLd(6,7);
  NotNULLd(6,4);
  NotNULLd(6,5);
  Tset((ATerm)ATmakeAppl3(r_1,Egetd(6,7),Egetd(6,4),Egetd(6,5)));
  Return();
  g_3 :
  Epopd(6,8);
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Rpush(i_3);
  goto z_25;
  i_3 :
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto o_18;
  o_18 :
  TestFunFC(c_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto p_18;
  p_18 :
  TestFunFC(c_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto q_18;
  q_18 :
  TestFunFC(e_0,&&fail,Egetd(5,5));
  Rpush(j_3);
  goto d_26;
  j_3 :
  goto f_3;
  d_26 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(5,2),Egetd(5,4)));
  Return();
  f_3 :
  Epopd(5,5);
  Return();
  c_3 :
  Epopd(4,9);
  Return();
  z_2 :
  Epopd(3,1);
  OneNextSon();
  AllBuild();
  goto x_2;
  y_2 :
  Ccontinue(k_3);
  TestFunTop(r_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto x_2;
  k_3 :
  TestFunTop(s_1);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto a_19;
  a_19 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(n_3);
  goto e_26;
  n_3 :
  goto m_3;
  e_26 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  m_3 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  goto l_3;
  x_2 :
  Cpop();
  l_3 :
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(2,4),(ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl2(c_0,Egetd(2,3),(ATerm)ATmakeAppl0(e_0)))));
  MoveTop(2,5);
  goto h_19;
  h_19 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto i_19;
  i_19 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto j_19;
  j_19 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto k_19;
  k_19 :
  TestFunFC(e_0,&&fail,Egetd(2,11));
  Rpush(p_3);
  goto l_26;
  p_3 :
  goto o_3;
  l_26 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Cpush(r_3);
  TestFunTop(p_1);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(3,1),(ATerm)ATmakeAppl2(c_0,Egetd(2,10),(ATerm)ATmakeAppl0(e_0))));
  Rpush(s_3);
  goto y_24;
  s_3 :
  Epopd(3,1);
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(3,1),(ATerm)ATmakeAppl2(c_0,Egetd(2,10),(ATerm)ATmakeAppl0(e_0))));
  Rpush(t_3);
  goto y_24;
  t_3 :
  Epopd(3,1);
  AllBuild();
  goto q_3;
  r_3 :
  Ccontinue(u_3);
  TestFunTop(r_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(3,1),(ATerm)ATmakeAppl2(c_0,Egetd(2,10),(ATerm)ATmakeAppl0(e_0))));
  Rpush(v_3);
  goto y_24;
  v_3 :
  Epopd(3,1);
  AllBuild();
  goto q_3;
  u_3 :
  TestFunTop(s_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(3,1),(ATerm)ATmakeAppl2(c_0,Egetd(2,10),(ATerm)ATmakeAppl0(e_0))));
  Rpush(x_3);
  goto y_24;
  x_3 :
  Epopd(3,1);
  AllBuild();
  goto w_3;
  q_3 :
  Cpop();
  w_3 :
  Return();
  o_3 :
  Epopd(2,11);
  Return();
  c_25 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  y_3 :
  AllNextSon(&&z_3);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(2,1),(ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl0(e_0))));
  Rpush(a_4);
  goto z_24;
  a_4 :
  Epopd(2,1);
  goto y_3;
  z_3 :
  AllBuild();
  Return();
  d_1 :
  Epopd(1,5);
  Return();
  c_1 :
  Return();
  b_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_12)
  Epushd(0,7);
  MoveTop(0,1);
  goto d_28;
  d_28 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto e_28;
  e_28 :
  TestFunFC(c_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto f_28;
  f_28 :
  TestFunFC(c_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto g_28;
  g_28 :
  TestFunFC(e_0,&&fail,Egetd(0,6));
  Rpush(c_4);
  goto m_30;
  c_4 :
  goto b_4;
  m_30 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto t_26;
  t_26 :
  TestFunFC(c_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto e_27;
  e_27 :
  TestFunFC(c_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto f_27;
  f_27 :
  TestFunFC(e_0,&&fail,Egetd(2,5));
  Rpush(e_4);
  goto n_30;
  e_4 :
  goto d_4;
  n_30 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  d_4 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto h_27;
  h_27 :
  TestFunFC(c_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto i_27;
  i_27 :
  TestFunFC(c_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto j_27;
  j_27 :
  TestFunFC(e_0,&&fail,Egetd(2,5));
  Rpush(g_4);
  goto o_30;
  g_4 :
  goto f_4;
  o_30 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  f_4 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,2),(ATerm)ATmakeAppl2(c_0,Egetd(1,3),(ATerm)ATmakeAppl0(e_0))));
  Rpush(h_4);
  p_30 :
  Epushd(2,9);
  MoveTop(2,1);
  goto q_27;
  q_27 :
  TestFunFC(c_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto r_27;
  r_27 :
  TestFunFC(j_0,&&k_4,Egetd(2,2));
  goto s_27;
  s_27 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto t_27;
  t_27 :
  TestFunFC(j_0,&&fail,Egetd(2,6));
  goto u_27;
  u_27 :
  TestFunFC(e_0,&&fail,Egetd(2,9));
  Rpush(j_4);
  goto q_30;
  k_4 :
  TestFunFC(k_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto v_27;
  v_27 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto w_27;
  w_27 :
  TestFunFC(k_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto x_27;
  x_27 :
  TestFunFC(e_0,&&fail,Egetd(2,9));
  Rpush(j_4);
  goto r_30;
  j_4 :
  goto i_4;
  q_30 :
  Tset((ATerm)ATmakeAppl0(j_0));
  Return();
  r_30 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_0,Egetd(2,3),(ATerm)ATmakeAppl2(c_0,Egetd(2,7),(ATerm)ATmakeAppl0(e_0))),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_0,Egetd(2,4),(ATerm)ATmakeAppl2(c_0,Egetd(2,8),(ATerm)ATmakeAppl0(e_0))),(ATerm)ATmakeAppl0(e_0))));
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Rpush(m_4);
  goto p_30;
  m_4 :
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto n_27;
  n_27 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto o_27;
  o_27 :
  TestFunFC(c_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto p_27;
  p_27 :
  TestFunFC(e_0,&&fail,Egetd(3,5));
  Rpush(n_4);
  goto s_30;
  n_4 :
  goto l_4;
  s_30 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(3,2),Egetd(3,4)));
  Return();
  l_4 :
  Epopd(3,5);
  Return();
  i_4 :
  Epopd(2,9);
  Return();
  h_4 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl2(c_0,Egetd(0,7),(ATerm)ATmakeAppl0(e_0))));
  MoveTop(1,5);
  goto a_28;
  a_28 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto b_28;
  b_28 :
  TestFunFC(c_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto c_28;
  c_28 :
  TestFunFC(e_0,&&fail,Egetd(1,9));
  Rpush(p_4);
  goto u_30;
  p_4 :
  goto o_4;
  u_30 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(q_4);
  v_30 :
  Cpush(s_4);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_4);
  goto v_30;
  t_4 :
  AllBuild();
  goto r_4;
  s_4 :
  Ccall(_stratego_k_13);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto u_4;
  r_4 :
  Cpop();
  u_4 :
  Return();
  q_4 :
  Return();
  o_4 :
  Epopd(1,9);
  Return();
  b_4 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_e_12)
  Epushd(0,5);
  MoveTop(0,5);
  goto m_31;
  m_31 :
  TestFunFC(c_0,&&x_4,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto n_31;
  n_31 :
  TestFunFC(c_0,&&y_4,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto o_31;
  o_31 :
  TestFunFC(e_0,&&z_4,Egetd(0,4));
  Cpush(b_5);
  Rpush(c_5);
  goto e_33;
  c_5 :
  goto a_5;
  b_5 :
  Rpush(e_5);
  goto f_33;
  e_5 :
  goto d_5;
  a_5 :
  Cpop();
  d_5 :
  goto w_4;
  z_4 :
  Rpush(w_4);
  goto f_33;
  y_4 :
  Rpush(w_4);
  goto f_33;
  x_4 :
  Rpush(w_4);
  goto f_33;
  w_4 :
  goto v_4;
  e_33 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(f_5);
  g_33 :
  Cpush(h_5);
  Ccall(_stratego_k_13);
  goto g_5;
  h_5 :
  Ccontinue(i_5);
  Epushd(1,3);
  MoveTop(1,1);
  goto b_31;
  b_31 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(k_5);
  goto h_33;
  k_5 :
  goto j_5;
  h_33 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(l_5);
  i_33 :
  Cpush(n_5);
  Epushd(2,3);
  MoveTop(2,1);
  goto a_31;
  a_31 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(p_5);
  goto j_33;
  p_5 :
  goto o_5;
  j_33 :
  Move(1,2,2,2);
  Return();
  o_5 :
  Epopd(2,3);
  goto m_5;
  n_5 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_5);
  goto i_33;
  r_5 :
  AllBuild();
  goto q_5;
  m_5 :
  Cpop();
  q_5 :
  Return();
  l_5 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(s_5);
  goto g_33;
  s_5 :
  Return();
  j_5 :
  Epopd(1,3);
  goto g_5;
  i_5 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_5);
  goto g_33;
  u_5 :
  AllBuild();
  goto t_5;
  g_5 :
  Cpop();
  t_5 :
  Return();
  f_5 :
  Return();
  f_33 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(j_0),(ATerm)ATmakeAppl2(c_0,Egetd(0,5),(ATerm)ATmakeAppl0(e_0))));
  Rpush(v_5);
  k_33 :
  Cpush(x_5);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Cpush(z_5);
  Epushd(1,7);
  MoveTop(1,1);
  goto d_31;
  d_31 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto e_31;
  e_31 :
  TestFunFC(c_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto f_31;
  f_31 :
  TestFunFC(c_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto g_31;
  g_31 :
  TestFunFC(e_0,&&fail,Egetd(1,6));
  Rpush(b_6);
  goto l_33;
  b_6 :
  goto a_6;
  l_33 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  a_6 :
  Epopd(1,7);
  goto y_5;
  z_5 :
  Ccall(_stratego_d_12);
  goto c_6;
  y_5 :
  Cpop();
  c_6 :
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  goto w_5;
  x_5 :
  Epushd(1,7);
  MoveTop(1,1);
  goto i_31;
  i_31 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto j_31;
  j_31 :
  TestFunFC(c_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto k_31;
  k_31 :
  TestFunFC(k_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto l_31;
  l_31 :
  TestFunFC(e_0,&&fail,Egetd(1,7));
  Rpush(f_6);
  goto m_33;
  f_6 :
  goto e_6;
  m_33 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(k_0,Egetd(1,5),Egetd(1,2)),(ATerm)ATmakeAppl2(c_0,Egetd(1,6),(ATerm)ATmakeAppl0(e_0))));
  Return();
  e_6 :
  Epopd(1,7);
  goto d_6;
  w_5 :
  Cpop();
  d_6 :
  Cpush(h_6);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_k_13);
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  goto g_6;
  h_6 :
  Rpush(j_6);
  goto k_33;
  j_6 :
  goto i_6;
  g_6 :
  Cpop();
  i_6 :
  Return();
  v_5 :
  Return();
  v_4 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_f_12)
  Rpush(k_6);
  y_37 :
  Cpush(m_6);
  Epushd(0,2);
  MoveTop(0,1);
  goto o_33;
  o_33 :
  TestFunFC(p_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(o_6);
  goto z_37;
  o_6 :
  goto n_6;
  z_37 :
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(0,2),(ATerm)ATmakeAppl0(j_0)));
  Return();
  n_6 :
  Epopd(0,2);
  goto l_6;
  m_6 :
  Ccontinue(s_6);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_g_12);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(t_6);
  TravInit();
  OneNextSon();
  Tset((ATerm)ATmakeAppl0(j_0));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(u_6);
  goto y_37;
  u_6 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,2),(ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_e_12);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto v_33;
  v_33 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_33;
  w_33 :
  TestFunFC(c_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto x_33;
  x_33 :
  TestFunFC(e_0,&&fail,Egetd(1,5));
  Rpush(w_6);
  goto f_38;
  w_6 :
  goto v_6;
  f_38 :
  Move(0,3,1,4);
  Return();
  v_6 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(x_6);
  g_38 :
  Cpush(z_6);
  Ccall(_stratego_k_13);
  Tset((ATerm)ATmakeAppl0(j_0));
  goto y_6;
  z_6 :
  Epushd(1,3);
  MoveTop(1,1);
  goto j_34;
  j_34 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(c_7);
  goto h_38;
  c_7 :
  goto b_7;
  h_38 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(f_7);
  goto g_38;
  f_7 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,2),(ATerm)ATmakeAppl2(c_0,Egetd(2,1),(ATerm)ATmakeAppl0(e_0))));
  MoveTop(2,2);
  goto g_34;
  g_34 :
  TestFunFC(c_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto h_34;
  h_34 :
  TestFunFC(c_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto i_34;
  i_34 :
  TestFunFC(e_0,&&fail,Egetd(2,6));
  Rpush(h_7);
  goto k_38;
  h_7 :
  goto g_7;
  k_38 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(i_7);
  l_38 :
  Cpush(k_7);
  Ccall(_stratego_k_13);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto j_7;
  k_7 :
  Ccontinue(l_7);
  Epushd(3,3);
  MoveTop(3,1);
  goto f_34;
  f_34 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(n_7);
  goto m_38;
  n_7 :
  goto m_7;
  m_38 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(o_7);
  n_38 :
  Cpush(q_7);
  Epushd(4,3);
  MoveTop(4,1);
  goto e_34;
  e_34 :
  TestFunFC(k_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(s_7);
  goto o_38;
  s_7 :
  goto r_7;
  o_38 :
  Move(3,2,4,2);
  Return();
  r_7 :
  Epopd(4,3);
  goto p_7;
  q_7 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_7);
  goto n_38;
  u_7 :
  AllBuild();
  goto t_7;
  p_7 :
  Cpop();
  t_7 :
  Return();
  o_7 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(v_7);
  goto l_38;
  v_7 :
  Return();
  m_7 :
  Epopd(3,3);
  goto j_7;
  l_7 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_7);
  goto l_38;
  x_7 :
  AllBuild();
  goto w_7;
  j_7 :
  Cpop();
  w_7 :
  Return();
  i_7 :
  Return();
  g_7 :
  Epopd(2,6);
  Return();
  b_7 :
  Epopd(1,3);
  goto a_7;
  y_6 :
  Cpop();
  a_7 :
  Return();
  x_6 :
  Epopd(0,3);
  goto l_6;
  s_6 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto m_34;
  m_34 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto n_34;
  n_34 :
  TestFunFC(c_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto o_34;
  o_34 :
  TestFunFC(e_0,&&fail,Egetd(1,5));
  Rpush(a_8);
  goto q_38;
  a_8 :
  goto z_7;
  q_38 :
  Move(0,2,1,4);
  Return();
  z_7 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(b_8);
  r_38 :
  Cpush(d_8);
  Ccall(_stratego_k_13);
  Tset((ATerm)ATmakeAppl0(j_0));
  goto c_8;
  d_8 :
  Epushd(1,3);
  MoveTop(1,1);
  goto a_35;
  a_35 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(g_8);
  goto s_38;
  g_8 :
  goto f_8;
  s_38 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(h_8);
  goto y_37;
  h_8 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(i_8);
  goto r_38;
  i_8 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(2,1),(ATerm)ATmakeAppl2(c_0,Egetd(2,2),(ATerm)ATmakeAppl0(e_0))));
  MoveTop(2,3);
  goto x_34;
  x_34 :
  TestFunFC(c_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto y_34;
  y_34 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto z_34;
  z_34 :
  TestFunFC(e_0,&&fail,Egetd(2,7));
  Rpush(k_8);
  goto v_38;
  k_8 :
  goto j_8;
  v_38 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(l_8);
  w_38 :
  Cpush(n_8);
  Ccall(_stratego_k_13);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto m_8;
  n_8 :
  Ccontinue(o_8);
  Epushd(3,3);
  MoveTop(3,1);
  goto w_34;
  w_34 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(q_8);
  goto x_38;
  q_8 :
  goto p_8;
  x_38 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(r_8);
  y_38 :
  Cpush(t_8);
  Epushd(4,3);
  MoveTop(4,1);
  goto v_34;
  v_34 :
  TestFunFC(k_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(v_8);
  goto z_38;
  v_8 :
  goto u_8;
  z_38 :
  Move(3,2,4,2);
  Return();
  u_8 :
  Epopd(4,3);
  goto s_8;
  t_8 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_8);
  goto y_38;
  x_8 :
  AllBuild();
  goto w_8;
  s_8 :
  Cpop();
  w_8 :
  Return();
  r_8 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(y_8);
  goto w_38;
  y_8 :
  Return();
  p_8 :
  Epopd(3,3);
  goto m_8;
  o_8 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_9);
  goto w_38;
  a_9 :
  AllBuild();
  goto z_8;
  m_8 :
  Cpop();
  z_8 :
  Return();
  l_8 :
  Return();
  j_8 :
  Epopd(2,7);
  Return();
  f_8 :
  Epopd(1,3);
  goto e_8;
  c_8 :
  Cpop();
  e_8 :
  Return();
  b_8 :
  Epopd(0,2);
  goto y_7;
  l_6 :
  Cpop();
  y_7 :
  Return();
  k_6 :
ENDPROC

PROC(_stratego_g_12)
  Epushd(0,6);
  MoveTop(0,2);
  goto c_39;
  c_39 :
  TestFunFC(t_6,&&d_9,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(c_9);
  goto q_39;
  d_9 :
  TestFunFC(e_9,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto d_39;
  d_39 :
  TestFunFC(f_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(c_9);
  goto r_39;
  c_9 :
  goto b_9;
  q_39 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  r_39 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_f_12);
  Return();
  b_9 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_h_12)
  _ST_new();
ENDPROC

PROC(_stratego_i_12)
  Rpush(g_9);
  q_40 :
  Epushd(0,11);
  MoveTop(0,5);
  goto u_39;
  u_39 :
  TestFunFC(c_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto v_39;
  v_39 :
  TestFunFC(c_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto w_39;
  w_39 :
  TestFunFC(k_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto x_39;
  x_39 :
  TestFunFC(e_0,&&fail,Egetd(0,11));
  goto y_39;
  y_39 :
  TestFunFC(c_0,&&j_9,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto z_39;
  z_39 :
  TestFunFC(c_0,&&k_9,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto a_40;
  a_40 :
  TestFunFC(e_0,&&l_9,Egetd(0,4));
  Cpush(n_9);
  Rpush(o_9);
  goto r_40;
  o_9 :
  goto m_9;
  n_9 :
  Rpush(q_9);
  goto s_40;
  q_9 :
  goto p_9;
  m_9 :
  Cpop();
  p_9 :
  goto i_9;
  l_9 :
  Rpush(i_9);
  goto s_40;
  k_9 :
  Rpush(i_9);
  goto s_40;
  j_9 :
  Rpush(i_9);
  goto s_40;
  i_9 :
  goto h_9;
  r_40 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  s_40 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,6),(ATerm)ATmakeAppl2(c_0,Egetd(0,10),(ATerm)ATmakeAppl0(e_0))));
  Rpush(r_9);
  goto q_40;
  r_9 :
  Return();
  h_9 :
  Epopd(0,11);
  Return();
  g_9 :
ENDPROC

PROC(_stratego_j_12)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(j_0),(ATerm)ATmakeAppl0(e_0))));
  Rpush(s_9);
  a_45 :
  Rpush(t_9);
  b_45 :
  Epushd(1,5);
  MoveTop(1,1);
  goto e_42;
  e_42 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_42;
  f_42 :
  TestFunFC(c_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto g_42;
  g_42 :
  TestFunFC(e_0,&&fail,Egetd(1,5));
  Cpush(x_9);
  Rpush(y_9);
  goto c_45;
  y_9 :
  goto w_9;
  x_9 :
  Ccontinue(z_9);
  Rpush(a_10);
  goto d_45;
  a_10 :
  goto w_9;
  z_9 :
  Rpush(c_10);
  goto e_45;
  c_10 :
  goto b_10;
  w_9 :
  Cpop();
  b_10 :
  goto v_9;
  v_9 :
  goto u_9;
  c_45 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(p_6);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(2,1),(ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_i_12);
  Epopd(2,1);
  AllBuild();
  Return();
  d_45 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_g_12);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(d_10);
  j_45 :
  Cpush(f_10);
  Ccall(_stratego_k_13);
  goto e_10;
  f_10 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_12);
  OneNextSon();
  Rpush(h_10);
  goto j_45;
  h_10 :
  AllBuild();
  goto g_10;
  e_10 :
  Cpop();
  g_10 :
  Return();
  d_10 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(2,1),(ATerm)ATmakeAppl2(c_0,Egetd(2,2),(ATerm)ATmakeAppl0(e_0))));
  Rpush(i_10);
  l_45 :
  Epushd(4,9);
  MoveTop(4,1);
  goto i_41;
  i_41 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto j_41;
  j_41 :
  TestFunFC(j_0,&&l_10,Egetd(4,2));
  goto k_41;
  k_41 :
  TestFunFC(c_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto l_41;
  l_41 :
  TestFunFC(j_0,&&fail,Egetd(4,6));
  goto m_41;
  m_41 :
  TestFunFC(e_0,&&fail,Egetd(4,9));
  Rpush(k_10);
  goto m_45;
  l_10 :
  TestFunFC(k_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto n_41;
  n_41 :
  TestFunFC(c_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto o_41;
  o_41 :
  TestFunFC(k_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto p_41;
  p_41 :
  TestFunFC(e_0,&&fail,Egetd(4,9));
  Rpush(k_10);
  goto n_45;
  k_10 :
  goto j_10;
  m_45 :
  Tset((ATerm)ATmakeAppl0(j_0));
  Return();
  n_45 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_0,Egetd(4,3),(ATerm)ATmakeAppl2(c_0,Egetd(4,7),(ATerm)ATmakeAppl0(e_0))),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_0,Egetd(4,4),(ATerm)ATmakeAppl2(c_0,Egetd(4,8),(ATerm)ATmakeAppl0(e_0))),(ATerm)ATmakeAppl0(e_0))));
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Rpush(n_10);
  goto l_45;
  n_10 :
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto f_41;
  f_41 :
  TestFunFC(c_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto g_41;
  g_41 :
  TestFunFC(c_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto h_41;
  h_41 :
  TestFunFC(e_0,&&fail,Egetd(5,5));
  Rpush(o_10);
  goto o_45;
  o_10 :
  goto m_10;
  o_45 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(5,2),Egetd(5,4)));
  Return();
  m_10 :
  Epopd(5,5);
  Return();
  j_10 :
  Epopd(4,9);
  Return();
  i_10 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(3,3),(ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl0(e_0))));
  MoveTop(3,4);
  goto t_41;
  t_41 :
  TestFunFC(c_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto u_41;
  u_41 :
  TestFunFC(c_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto v_41;
  v_41 :
  TestFunFC(e_0,&&fail,Egetd(3,8));
  Rpush(q_10);
  goto q_45;
  q_10 :
  goto p_10;
  q_45 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(r_10);
  r_45 :
  Cpush(t_10);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_10);
  goto r_45;
  u_10 :
  AllBuild();
  goto s_10;
  t_10 :
  Ccall(_stratego_k_13);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto v_10;
  s_10 :
  Cpop();
  v_10 :
  Return();
  r_10 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  p_10 :
  Epopd(3,8);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(t_6);
  TravInit();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(2,4),(ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl2(c_0,Egetd(2,3),(ATerm)ATmakeAppl0(e_0)))));
  MoveTop(2,5);
  goto z_41;
  z_41 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto a_42;
  a_42 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto b_42;
  b_42 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto c_42;
  c_42 :
  TestFunFC(e_0,&&fail,Egetd(2,11));
  Rpush(x_10);
  goto u_45;
  x_10 :
  goto w_10;
  u_45 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  TestFunTop(t_6);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(3,1),(ATerm)ATmakeAppl2(c_0,Egetd(2,10),(ATerm)ATmakeAppl0(e_0))));
  Rpush(y_10);
  goto a_45;
  y_10 :
  Epopd(3,1);
  AllBuild();
  Return();
  w_10 :
  Epopd(2,11);
  Return();
  e_45 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  z_10 :
  AllNextSon(&&a_11);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(2,1),(ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl0(e_0))));
  Rpush(b_11);
  goto b_45;
  b_11 :
  Epopd(2,1);
  goto z_10;
  a_11 :
  AllBuild();
  Return();
  u_9 :
  Epopd(1,5);
  Return();
  t_9 :
  Return();
  s_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_12)
  Ccall(_stratego_j_12);
  Ccall(_stratego_c_12);
ENDPROC

PROC(_stratego_l_12)
  _ST_add();
ENDPROC

PROC(_stratego_m_12)
  Rpush(c_11);
  h_46 :
  Cpush(e_11);
  Ccall(_stratego_k_13);
  Tset(MakeInt(0));
  goto d_11;
  e_11 :
  Epushd(0,3);
  MoveTop(0,1);
  goto z_45;
  z_45 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(h_11);
  goto i_46;
  h_11 :
  goto g_11;
  i_46 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(i_11);
  goto h_46;
  i_11 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,1),(ATerm)ATmakeAppl2(c_0,MakeInt(1),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_l_12);
  Epopd(1,1);
  Return();
  g_11 :
  Epopd(0,3);
  goto f_11;
  d_11 :
  Cpop();
  f_11 :
  Return();
  c_11 :
ENDPROC

PROC(_stratego_n_12)
  Epushd(0,8);
  MoveTop(0,1);
  goto d_48;
  d_48 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto e_48;
  e_48 :
  TestFunFC(v_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto f_48;
  f_48 :
  TestFunFC(w_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto g_48;
  g_48 :
  TestFunFC(c_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto h_48;
  h_48 :
  TestFunFC(e_0,&&fail,Egetd(0,8));
  Cpush(m_11);
  Rpush(n_11);
  goto n_51;
  n_11 :
  goto l_11;
  m_11 :
  Rpush(p_11);
  goto o_51;
  p_11 :
  goto o_11;
  l_11 :
  Cpop();
  o_11 :
  goto k_11;
  k_11 :
  goto j_11;
  n_51 :
  Epushd(1,11);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Ccall(_stratego_m_12);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(q_11);
  q_51 :
  Cpush(t_11);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  TestFunTop(r_1);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  Move(0,4,3,1);
  Epopd(3,1);
  OneNextSon();
  Epushd(3,1);
  Tdupl();
  Epushd(4,1);
  Ccall(_stratego_m_12);
  MoveTop(4,1);
  Move(1,1,4,1);
  Epopd(4,1);
  Tpop();
  MoveTop(3,1);
  Move(1,2,3,1);
  Epopd(3,1);
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  Move(1,3,3,1);
  Epopd(3,1);
  AllBuild();
  OneNextSon();
  AllBuild();
  goto s_11;
  t_11 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_11);
  goto q_51;
  v_11 :
  AllBuild();
  goto u_11;
  s_11 :
  Cpop();
  u_11 :
  Return();
  q_11 :
  Epopd(2,1);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_k_12);
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,2),(ATerm)ATmakeAppl2(c_0,Egetd(0,5),(ATerm)ATmakeAppl2(c_0,Egetd(0,7),(ATerm)ATmakeAppl0(e_0)))));
  MoveTop(1,5);
  goto s_47;
  s_47 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto t_47;
  t_47 :
  TestFunFC(c_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto u_47;
  u_47 :
  TestFunFC(c_0,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  MoveArg(1,11,1,9,1);
  goto v_47;
  v_47 :
  TestFunFC(e_0,&&fail,Egetd(1,11));
  Rpush(x_11);
  goto w_51;
  x_11 :
  goto w_11;
  w_51 :
  Epushd(2,7);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,6),(ATerm)ATmakeAppl2(c_0,Egetd(1,8),(ATerm)ATmakeAppl0(e_0))));
  Rpush(y_11);
  x_51 :
  Epushd(3,9);
  MoveTop(3,1);
  goto d_47;
  d_47 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,5,3,1,1);
  goto e_47;
  e_47 :
  TestFunFC(j_0,&&z_13,Egetd(3,2));
  goto g_47;
  g_47 :
  TestFunFC(c_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,9,3,5,1);
  goto h_47;
  h_47 :
  TestFunFC(j_0,&&fail,Egetd(3,6));
  goto i_47;
  i_47 :
  TestFunFC(e_0,&&fail,Egetd(3,9));
  Rpush(x_13);
  goto y_51;
  z_13 :
  TestFunFC(k_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto j_47;
  j_47 :
  TestFunFC(c_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,9,3,5,1);
  goto k_47;
  k_47 :
  TestFunFC(k_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto l_47;
  l_47 :
  TestFunFC(e_0,&&fail,Egetd(3,9));
  Rpush(x_13);
  goto z_51;
  x_13 :
  goto z_11;
  y_51 :
  Tset((ATerm)ATmakeAppl0(j_0));
  Return();
  z_51 :
  Epushd(4,5);
  NotNULLd(3,3);
  NotNULLd(3,7);
  NotNULLd(3,4);
  NotNULLd(3,8);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_0,Egetd(3,3),(ATerm)ATmakeAppl2(c_0,Egetd(3,7),(ATerm)ATmakeAppl0(e_0))),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_0,Egetd(3,4),(ATerm)ATmakeAppl2(c_0,Egetd(3,8),(ATerm)ATmakeAppl0(e_0))),(ATerm)ATmakeAppl0(e_0))));
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(5,5);
  MoveTop(5,1);
  goto w_46;
  w_46 :
  TestFunFC(c_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto x_46;
  x_46 :
  TestFunFC(c_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto y_46;
  y_46 :
  TestFunFC(e_0,&&fail,Egetd(5,5));
  Rpush(c_14);
  goto a_52;
  c_14 :
  goto b_14;
  a_52 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset((ATerm)ATmakeAppl3(r_1,Egetd(5,2),(ATerm)ATmakeAppl0(j_0),Egetd(5,4)));
  Return();
  b_14 :
  Epopd(5,5);
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Rpush(d_14);
  goto x_51;
  d_14 :
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  MoveTop(4,1);
  goto a_47;
  a_47 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto b_47;
  b_47 :
  TestFunFC(c_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto c_47;
  c_47 :
  TestFunFC(e_0,&&fail,Egetd(4,5));
  Rpush(n_14);
  goto b_52;
  n_14 :
  goto a_14;
  b_52 :
  NotNULLd(4,2);
  NotNULLd(4,4);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(4,2),Egetd(4,4)));
  Return();
  a_14 :
  Epopd(4,5);
  Return();
  z_11 :
  Epopd(3,9);
  Return();
  y_11 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,10);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(2,1),(ATerm)ATmakeAppl2(c_0,Egetd(1,10),(ATerm)ATmakeAppl0(e_0))));
  MoveTop(2,2);
  goto o_47;
  o_47 :
  TestFunFC(c_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto p_47;
  p_47 :
  TestFunFC(c_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto q_47;
  q_47 :
  TestFunFC(e_0,&&fail,Egetd(2,6));
  Rpush(p_14);
  goto d_52;
  p_14 :
  goto o_14;
  d_52 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(q_14);
  e_52 :
  Cpush(x_14);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_14);
  goto e_52;
  z_14 :
  AllBuild();
  goto w_14;
  x_14 :
  Ccall(_stratego_k_13);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto g_15;
  w_14 :
  Cpop();
  g_15 :
  Return();
  q_14 :
  Return();
  o_14 :
  MoveTop(2,7);
  NotNULLd(1,4);
  NotNULLd(2,7);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,4),(ATerm)ATmakeAppl2(c_0,Egetd(2,7),(ATerm)ATmakeAppl0(e_0))));
  Epopd(2,7);
  Return();
  w_11 :
  Epopd(1,11);
  Return();
  o_51 :
  Epushd(1,1);
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(h_15);
  g_52 :
  Cpush(j_15);
  Epushd(2,9);
  MoveTop(2,1);
  goto x_47;
  x_47 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,9,2,1,1);
  goto y_47;
  y_47 :
  TestFunFC(r_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  MoveArg(2,5,2,2,2);
  goto z_47;
  z_47 :
  TestFunFC(j_0,&&fail,Egetd(2,4));
  goto a_48;
  a_48 :
  TestFunFC(v_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,8,2,5,1);
  goto b_48;
  b_48 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  goto c_48;
  c_48 :
  TestFunFC(j_0,&&fail,Egetd(2,8));
  Rpush(l_15);
  goto h_52;
  l_15 :
  goto k_15;
  h_52 :
  Move(0,4,2,3);
  Move(1,1,2,7);
  Return();
  k_15 :
  Epopd(2,9);
  goto i_15;
  j_15 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_15);
  goto g_52;
  x_15 :
  AllBuild();
  goto w_15;
  i_15 :
  Cpop();
  w_15 :
  Return();
  h_15 :
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(v_0,(ATerm)ATmakeAppl1(w_0,Egetd(1,1)),Egetd(0,5)),(ATerm)ATmakeAppl2(c_0,Egetd(0,7),(ATerm)ATmakeAppl0(e_0))));
  Epopd(1,1);
  Return();
  j_11 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_o_12)
  Rpush(y_15);
  w_52 :
  Epushd(0,5);
  Cpush(c_16);
  b_16 :
  Ccall(_stratego_n_12);
  Tduplinv();
  goto b_16;
  c_16 :
  MoveTop(0,1);
  goto k_52;
  k_52 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto l_52;
  l_52 :
  TestFunFC(c_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto m_52;
  m_52 :
  TestFunFC(e_0,&&fail,Egetd(0,5));
  Rpush(e_16);
  goto y_52;
  e_16 :
  goto z_15;
  y_52 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  AllInit();
  l_16 :
  AllNextSon(&&m_16);
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(1,1),(ATerm)ATmakeAppl2(c_0,Egetd(0,4),(ATerm)ATmakeAppl0(e_0))));
  Rpush(n_16);
  goto w_52;
  n_16 :
  Epopd(1,1);
  goto l_16;
  m_16 :
  AllBuild();
  Return();
  z_15 :
  Epopd(0,5);
  Return();
  y_15 :
ENDPROC

PROC(_stratego_p_12)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_53;
  b_53 :
  TestFunFC(t_16,&&fail,Egetd(0,1));
  Rpush(s_16);
  goto d_53;
  s_16 :
  goto q_16;
  d_53 :
  Return();
  q_16 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_12)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_53;
  f_53 :
  TestFunFC(w_16,&&fail,Egetd(0,1));
  Rpush(v_16);
  goto h_53;
  v_16 :
  goto u_16;
  h_53 :
  Return();
  u_16 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_12)
  Rpush(x_16);
  c_54 :
  Cpush(z_16);
  Ccall(_stratego_q_12);
  goto y_16;
  z_16 :
  Ccontinue(a_17);
  Ccall(_stratego_p_12);
  goto y_16;
  a_17 :
  Epushd(0,11);
  MoveTop(0,4);
  goto l_53;
  l_53 :
  TestFunFC(h_17,&&e_17,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,11,0,4,1);
  goto m_53;
  m_53 :
  TestFunFC(j_17,&&i_17,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(d_17);
  goto d_54;
  i_17 :
  TestFunFC(t_6,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto n_53;
  n_53 :
  TestFunFC(h_17,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,10,0,7,1);
  goto o_53;
  o_53 :
  TestFunFC(j_17,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  Rpush(d_17);
  goto f_54;
  e_17 :
  TestFunFC(t_6,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,11,0,4,1);
  goto p_53;
  p_53 :
  TestFunFC(h_17,&&fail,Egetd(0,11));
  MoveArg(0,1,0,11,0);
  MoveArg(0,3,0,11,1);
  goto q_53;
  q_53 :
  TestFunFC(j_17,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_17);
  goto e_54;
  d_17 :
  goto c_17;
  d_54 :
  Return();
  e_54 :
  Return();
  f_54 :
  Return();
  c_17 :
  Epopd(0,11);
  goto b_17;
  y_16 :
  Cpop();
  b_17 :
  Return();
  x_16 :
ENDPROC

PROC(_stratego_s_12)
  Cpush(l_17);
  Epushd(0,6);
  MoveTop(0,1);
  goto h_54;
  h_54 :
  TestFunFC(r_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,6,0,1,2);
  goto i_54;
  i_54 :
  TestFunFC(k_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(y_17);
  goto s_54;
  y_17 :
  goto x_17;
  s_54 :
  Return();
  x_17 :
  Epopd(0,6);
  goto k_17;
  l_17 :
  TestFunTop(r_1);
  TravInit();
  OneNextSon();
  Cpush(d_18);
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  goto k_54;
  k_54 :
  TestStr(0,1,"main",&&fail);
  Rpush(f_18);
  goto t_54;
  f_18 :
  goto e_18;
  t_54 :
  Return();
  e_18 :
  Epopd(0,1);
  Cpop();
  Crestore();
  Cjump();
  d_18 :
  OneNextSon();
  Ccall(_stratego_k_13);
  OneNextSon();
  Ccall(_stratego_r_12);
  AllBuild();
  goto z_17;
  k_17 :
  Cpop();
  z_17 :
ENDPROC

PROC(_stratego_t_12)
  Epushd(0,3);
  MoveTop(0,1);
  Rpush(g_18);
  s_55 :
  Cpush(i_18);
  Ccall(_stratego_k_13);
  goto h_18;
  i_18 :
  Ccontinue(n_18);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Cpush(z_18);
  Tdupl();
  Ccall(_stratego_s_12);
  Cpop();
  Crestore();
  Cjump();
  z_18 :
  OneNextSon();
  Rpush(b_19);
  goto s_55;
  b_19 :
  AllBuild();
  goto h_18;
  n_18 :
  Epushd(1,3);
  MoveTop(1,1);
  goto w_54;
  w_54 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(e_19);
  goto t_55;
  e_19 :
  goto d_19;
  t_55 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(f_19);
  goto s_55;
  f_19 :
  Return();
  d_19 :
  Epopd(1,3);
  goto c_19;
  h_18 :
  Cpop();
  c_19 :
  Return();
  g_18 :
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(g_19);
  v_55 :
  Cpush(q_19);
  Ccall(_stratego_k_13);
  goto l_19;
  q_19 :
  Ccontinue(w_19);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_12);
  OneNextSon();
  Rpush(x_19);
  goto v_55;
  x_19 :
  AllBuild();
  goto l_19;
  w_19 :
  Epushd(1,3);
  MoveTop(1,1);
  goto z_54;
  z_54 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(b_20);
  goto w_55;
  b_20 :
  goto a_20;
  w_55 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(c_20);
  goto v_55;
  c_20 :
  Return();
  a_20 :
  Epopd(1,3);
  goto z_19;
  l_19 :
  Cpop();
  z_19 :
  Return();
  g_19 :
  Cpush(d_20);
  Tdupl();
  Ccall(_stratego_k_13);
  Cpop();
  Crestore();
  Cjump();
  d_20 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,2),(ATerm)ATmakeAppl2(c_0,Egetd(0,3),(ATerm)ATmakeAppl0(e_0))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_u_12)
  Epushd(0,4);
  Cpush(f_20);
  e_20 :
  Ccall(_stratego_t_12);
  Ccall(_stratego_o_12);
  Tduplinv();
  goto e_20;
  f_20 :
  MoveTop(0,1);
  Tdupl();
  Epushd(1,3);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(n_20);
  o_58 :
  Cpush(t_20);
  Ccall(_stratego_k_13);
  goto o_20;
  t_20 :
  Ccontinue(u_20);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto d_56;
  d_56 :
  TestFunFC(r_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(w_20);
  goto p_58;
  w_20 :
  goto v_20;
  p_58 :
  Epushd(3,1);
  Tdupl();
  Cpush(x_20);
  Tdupl();
  Epushd(4,1);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(4,1);
  goto b_56;
  b_56 :
  TestStr(4,1,"main",&&fail);
  Rpush(z_20);
  goto q_58;
  z_20 :
  goto y_20;
  q_58 :
  Return();
  y_20 :
  Epopd(4,1);
  Cpop();
  Crestore();
  Cjump();
  x_20 :
  Tpop();
  Tset((ATerm)ATmakeAppl0(e_0));
  Ccall(_stratego_h_12);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(2,2),(ATerm)ATmakeAppl2(c_0,Egetd(3,1),(ATerm)ATmakeAppl0(e_0))));
  Epopd(3,1);
  Return();
  v_20 :
  Epopd(2,4);
  OneNextSon();
  Rpush(a_21);
  goto o_58;
  a_21 :
  AllBuild();
  goto o_20;
  u_20 :
  Epushd(2,3);
  MoveTop(2,1);
  goto f_56;
  f_56 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_21);
  goto s_58;
  o_21 :
  goto c_21;
  s_58 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(p_21);
  goto o_58;
  p_21 :
  Return();
  c_21 :
  Epopd(2,3);
  goto b_21;
  o_20 :
  Cpop();
  b_21 :
  Return();
  n_20 :
  MoveTop(1,1);
  Move(0,2,1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(q_21);
  u_58 :
  Cpush(x_21);
  Ccall(_stratego_k_13);
  goto r_21;
  x_21 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(v_0,(ATerm)ATmakeAppl1(w_0,Egetd(2,1)),(ATerm)ATmakeAppl0(j_0)));
  Epopd(2,1);
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(a_22);
  goto u_58;
  a_22 :
  AllBuild();
  goto y_21;
  r_21 :
  Cpop();
  y_21 :
  Return();
  q_21 :
  MoveTop(1,2);
  Move(0,3,1,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(g_22);
  x_58 :
  Cpush(k_22);
  Ccall(_stratego_k_13);
  goto h_22;
  k_22 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto s_56;
  s_56 :
  TestFunFC(r_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(n_22);
  goto y_58;
  n_22 :
  goto m_22;
  y_58 :
  Epushd(3,2);
  Tdupl();
  Cpush(y_22);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(z_22);
  z_58 :
  Cpush(b_23);
  Epushd(4,7);
  MoveTop(4,1);
  goto l_56;
  l_56 :
  TestFunFC(k_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,7,4,1,1);
  goto m_56;
  m_56 :
  TestFunFC(c_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto n_56;
  n_56 :
  TestFunFC(c_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto o_56;
  o_56 :
  TestFunFC(e_0,&&fail,Egetd(4,6));
  Rpush(l_23);
  goto a_59;
  l_23 :
  goto k_23;
  a_59 :
  Move(2,2,4,3);
  Move(3,1,4,5);
  Return();
  k_23 :
  Epopd(4,7);
  goto a_23;
  b_23 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_23);
  goto z_58;
  s_23 :
  AllBuild();
  goto m_23;
  a_23 :
  Cpop();
  m_23 :
  Return();
  z_22 :
  goto o_22;
  y_22 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Move(3,1,2,2);
  goto t_23;
  o_22 :
  Cpop();
  t_23 :
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  NotNULLd(0,3);
  NotNULLd(2,4);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,3),(ATerm)ATmakeAppl2(c_0,Egetd(2,4),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_b_12);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(2,3);
  NotNULLd(3,2);
  Tset((ATerm)ATmakeAppl3(r_1,Egetd(3,1),Egetd(2,3),Egetd(3,2)));
  Epopd(3,2);
  Return();
  m_22 :
  Epopd(2,4);
  OneNextSon();
  Rpush(x_23);
  goto x_58;
  x_23 :
  AllBuild();
  goto l_22;
  h_22 :
  Cpop();
  l_22 :
  Return();
  g_22 :
  MoveTop(1,3);
  Move(0,4,1,3);
  Epopd(1,3);
  Tpop();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Epopd(0,4);
ENDPROC

PROC(_stratego_v_12)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_59;
  g_59 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  Rpush(a_24);
  goto i_59;
  a_24 :
  goto y_23;
  i_59 :
  Return();
  y_23 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_12)
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(i_24),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(k_0,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(j_0)),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_f_13);
  Tset(MakeInt(1));
  Ccall(_stratego_e_13);
ENDPROC

PROC(_stratego_x_12)
  Epushd(0,2);
  Tdupl();
  Cpush(k_24);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Cpush(m_24);
  Tdupl();
  Rpush(o_24);
  f_60 :
  Cpush(s_24);
  Epushd(1,3);
  MoveTop(1,1);
  goto k_59;
  k_59 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_59;
  l_59 :
  TestFunFC(w_24,&&fail,Egetd(1,2));
  Rpush(u_24);
  goto g_60;
  u_24 :
  goto t_24;
  g_60 :
  Return();
  t_24 :
  Epopd(1,3);
  goto q_24;
  s_24 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_25);
  goto f_60;
  d_25 :
  AllBuild();
  goto x_24;
  q_24 :
  Cpop();
  x_24 :
  Return();
  o_24 :
  Cpop();
  Crestore();
  Cjump();
  m_24 :
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Rpush(e_25);
  h_60 :
  Cpush(l_25);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_59;
  n_59 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_59;
  o_59 :
  TestFunFC(v_25,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_25);
  goto i_60;
  s_25 :
  goto n_25;
  i_60 :
  Move(0,2,1,3);
  Return();
  n_25 :
  Epopd(1,4);
  goto f_25;
  l_25 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_25);
  goto h_60;
  x_25 :
  AllBuild();
  goto w_25;
  f_25 :
  Cpop();
  w_25 :
  Return();
  e_25 :
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Rpush(y_25);
  j_60 :
  Cpush(g_26);
  Epushd(1,4);
  MoveTop(1,1);
  goto q_59;
  q_59 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto r_59;
  r_59 :
  TestFunFC(j_26,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_26);
  goto k_60;
  i_26 :
  goto h_26;
  k_60 :
  Move(0,1,1,3);
  Return();
  h_26 :
  Epopd(1,4);
  goto f_26;
  g_26 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_26);
  goto j_60;
  m_26 :
  AllBuild();
  goto k_26;
  f_26 :
  Cpop();
  k_26 :
  Return();
  y_25 :
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(i_24),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(k_0,Egetd(0,1),(ATerm)ATmakeAppl2(k_0,ATmakeString(" ("),(ATerm)ATmakeAppl2(k_0,Egetd(0,2),(ATerm)ATmakeAppl2(k_0,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(j_0))))),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_f_13);
  goto j_24;
  k_24 :
  goto n_26;
  j_24 :
  Cpop();
  n_26 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_e_13);
  Epopd(0,2);
ENDPROC

PROC(_stratego_y_12)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_z_12)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_a_13)
  Epushd(0,1);
  Tdupl();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Cpush(p_26);
  Rpush(q_26);
  k_61 :
  Cpush(s_26);
  Epushd(1,4);
  MoveTop(1,1);
  goto m_60;
  m_60 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto n_60;
  n_60 :
  TestFunFC(w_26,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_26);
  goto l_61;
  v_26 :
  goto u_26;
  l_61 :
  Move(0,1,1,3);
  Return();
  u_26 :
  Epopd(1,4);
  goto r_26;
  s_26 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_26);
  goto k_61;
  y_26 :
  AllBuild();
  goto x_26;
  r_26 :
  Cpop();
  x_26 :
  Return();
  q_26 :
  goto o_26;
  p_26 :
  Tset((ATerm)ATmakeAppl0(a_27));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(a_27));
  MoveTop(0,1);
  Tpop();
  goto z_26;
  o_26 :
  Cpop();
  z_26 :
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl2(c_0,Egetd(1,1),(ATerm)ATmakeAppl0(e_0))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  Cpush(c_27);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Rpush(d_27);
  q_61 :
  Cpush(k_27);
  Epushd(1,3);
  MoveTop(1,1);
  goto t_60;
  t_60 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto u_60;
  u_60 :
  TestFunFC(y_27,&&fail,Egetd(1,2));
  Rpush(m_27);
  goto r_61;
  m_27 :
  goto l_27;
  r_61 :
  Return();
  l_27 :
  Epopd(1,3);
  goto g_27;
  k_27 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_28);
  goto q_61;
  r_28 :
  AllBuild();
  goto z_27;
  g_27 :
  Cpop();
  z_27 :
  Return();
  d_27 :
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_12);
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  goto b_27;
  c_27 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_12);
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  goto s_28;
  b_27 :
  Cpop();
  s_28 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_13)
  _ST_dtime();
ENDPROC

PROC(_stratego_c_13)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_d_13)
  Epushd(0,3);
  Tdupl();
  Cpush(k_29);
  Rpush(l_29);
  l_62 :
  Cpush(q_29);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_61;
  t_61 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_61;
  u_61 :
  TestFunFC(t_29,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_29);
  goto m_62;
  s_29 :
  goto r_29;
  m_62 :
  Move(0,1,1,3);
  Return();
  r_29 :
  Epopd(1,4);
  goto p_29;
  q_29 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_29);
  goto l_62;
  v_29 :
  AllBuild();
  goto u_29;
  p_29 :
  Cpop();
  u_29 :
  Return();
  l_29 :
  goto t_28;
  k_29 :
  Tset((ATerm)ATmakeAppl0(c_30));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(c_30));
  MoveTop(0,1);
  Tpop();
  goto b_30;
  t_28 :
  Cpop();
  b_30 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_c_13);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,2),(ATerm)ATmakeAppl2(c_0,Egetd(0,3),(ATerm)ATmakeAppl0(e_0))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_e_13)
  _ST_exit();
ENDPROC

PROC(_stratego_f_13)
  _ST_printnl();
ENDPROC

PROC(_stratego_g_13)
  Epushd(0,1);
  Tdupl();
  Rpush(e_30);
  z_62 :
  Cpush(l_30);
  Epushd(1,4);
  MoveTop(1,1);
  goto s_62;
  s_62 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto t_62;
  t_62 :
  TestFunFC(j_26,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(w_30);
  goto a_63;
  w_30 :
  goto t_30;
  a_63 :
  Move(0,1,1,3);
  Return();
  t_30 :
  Epopd(1,4);
  goto k_30;
  l_30 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_30);
  goto z_62;
  y_30 :
  AllBuild();
  goto x_30;
  k_30 :
  Cpop();
  x_30 :
  Return();
  e_30 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(i_24),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(k_0,ATmakeString("usage : "),(ATerm)ATmakeAppl2(k_0,Egetd(0,1),(ATerm)ATmakeAppl2(k_0,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(j_0)))),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_f_13);
  Tset(MakeInt(1));
  Ccall(_stratego_e_13);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_63;
  c_63 :
  TestFunFC(h_31,&&fail,Egetd(0,1));
  Rpush(c_31);
  goto e_63;
  c_31 :
  goto z_30;
  e_63 :
  Return();
  z_30 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_13)
  Rpush(u_31);
  j_63 :
  Cpush(w_31);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Cpush(b_32);
  Ccall(_stratego_h_13);
  goto a_32;
  b_32 :
  Epushd(0,2);
  MoveTop(0,1);
  goto g_63;
  g_63 :
  TestFunFC(i_32,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(h_32);
  goto k_63;
  h_32 :
  goto g_32;
  k_63 :
  Return();
  g_32 :
  Epopd(0,2);
  goto f_32;
  a_32 :
  Cpop();
  f_32 :
  OneNextSon();
  AllBuild();
  goto v_31;
  w_31 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_32);
  goto j_63;
  k_32 :
  AllBuild();
  goto j_32;
  v_31 :
  Cpop();
  j_32 :
  Return();
  u_31 :
  Ccall(_stratego_g_13);
ENDPROC

PROC(_stratego_j_13)
  Epushd(0,5);
  MoveTop(0,3);
  goto y_65;
  y_65 :
  TestFunFC(k_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto z_65;
  z_65 :
  TestFunFC(k_0,&&c_33,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(n_33);
  Rpush(p_33);
  goto r_69;
  p_33 :
  goto d_33;
  n_33 :
  Ccontinue(q_33);
  Rpush(r_33);
  goto s_69;
  r_33 :
  goto d_33;
  q_33 :
  Ccontinue(s_33);
  Rpush(t_33);
  goto t_69;
  t_33 :
  goto d_33;
  s_33 :
  Ccontinue(u_33);
  Rpush(y_33);
  goto u_69;
  y_33 :
  goto d_33;
  u_33 :
  Ccontinue(z_33);
  Rpush(a_34);
  goto v_69;
  a_34 :
  goto d_33;
  z_33 :
  Ccontinue(b_34);
  Rpush(c_34);
  goto w_69;
  c_34 :
  goto d_33;
  b_34 :
  Ccontinue(d_34);
  Rpush(k_34);
  goto x_69;
  k_34 :
  goto d_33;
  d_34 :
  Ccontinue(l_34);
  Rpush(p_34);
  goto y_69;
  p_34 :
  goto d_33;
  l_34 :
  Ccontinue(q_34);
  Rpush(r_34);
  goto z_69;
  r_34 :
  goto d_33;
  q_34 :
  Ccontinue(s_34);
  Rpush(t_34);
  goto a_70;
  t_34 :
  goto d_33;
  s_34 :
  Ccontinue(u_34);
  Rpush(d_35);
  goto b_70;
  d_35 :
  goto d_33;
  u_34 :
  Ccontinue(h_35);
  Rpush(j_35);
  goto c_70;
  j_35 :
  goto d_33;
  h_35 :
  Ccontinue(k_35);
  Rpush(l_35);
  goto d_70;
  l_35 :
  goto d_33;
  k_35 :
  Ccontinue(o_35);
  Rpush(x_35);
  goto e_70;
  x_35 :
  goto d_33;
  o_35 :
  Rpush(z_35);
  goto f_70;
  z_35 :
  goto y_35;
  d_33 :
  Cpop();
  y_35 :
  goto b_33;
  c_33 :
  Cpush(c_36);
  Rpush(i_36);
  goto r_69;
  i_36 :
  goto a_36;
  c_36 :
  Ccontinue(j_36);
  Rpush(n_36);
  goto s_69;
  n_36 :
  goto a_36;
  j_36 :
  Ccontinue(o_36);
  Rpush(u_36);
  goto t_69;
  u_36 :
  goto a_36;
  o_36 :
  Ccontinue(d_37);
  Rpush(e_37);
  goto u_69;
  e_37 :
  goto a_36;
  d_37 :
  Ccontinue(g_37);
  Rpush(i_37);
  goto v_69;
  i_37 :
  goto a_36;
  g_37 :
  Ccontinue(o_37);
  Rpush(p_37);
  goto b_70;
  p_37 :
  goto a_36;
  o_37 :
  Ccontinue(t_37);
  Rpush(u_37);
  goto c_70;
  u_37 :
  goto a_36;
  t_37 :
  Ccontinue(a_38);
  Rpush(b_38);
  goto d_70;
  b_38 :
  goto a_36;
  a_38 :
  Ccontinue(c_38);
  Rpush(d_38);
  goto e_70;
  d_38 :
  goto a_36;
  c_38 :
  Rpush(i_38);
  goto f_70;
  i_38 :
  goto e_38;
  a_36 :
  Cpop();
  e_38 :
  goto b_33;
  b_33 :
  goto s_32;
  r_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_64;
  b_64 :
  TestStr(1,1,"-S",&&fail);
  Rpush(p_38);
  goto g_70;
  p_38 :
  goto j_38;
  g_70 :
  Return();
  j_38 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(w_24));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(w_24),Egetd(0,5)));
  Return();
  s_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_64;
  e_64 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(u_38);
  goto i_70;
  u_38 :
  goto t_38;
  i_70 :
  Return();
  t_38 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(w_24));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(w_24),Egetd(0,5)));
  Return();
  t_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_64;
  h_64 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(b_39);
  goto k_70;
  b_39 :
  goto a_39;
  k_70 :
  Return();
  a_39 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(f_39));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(f_39),Egetd(0,5)));
  Return();
  u_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_64;
  k_64 :
  TestStr(1,1,"-v",&&fail);
  Rpush(m_39);
  goto m_70;
  m_39 :
  goto l_39;
  m_70 :
  Return();
  l_39 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(n_39));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(n_39),Egetd(0,5)));
  Return();
  v_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_64;
  n_64 :
  TestStr(1,1,"--version",&&fail);
  Rpush(p_39);
  goto o_70;
  p_39 :
  goto o_39;
  o_70 :
  Return();
  o_39 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(n_39));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(n_39),Egetd(0,5)));
  Return();
  w_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_64;
  q_64 :
  TestStr(1,1,"@version",&&fail);
  Rpush(t_39);
  goto q_70;
  t_39 :
  goto s_39;
  q_70 :
  Return();
  s_39 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(m_40,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(m_40,Egetd(0,1)),Egetd(0,2)));
  Return();
  x_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_64;
  u_64 :
  TestStr(1,1,"-i",&&fail);
  Rpush(p_40);
  goto t_70;
  p_40 :
  goto o_40;
  t_70 :
  Return();
  o_40 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(t_29,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(t_29,Egetd(0,1)),Egetd(0,2)));
  Return();
  y_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_64;
  y_64 :
  TestStr(1,1,"--input",&&fail);
  Rpush(u_40);
  goto w_70;
  u_40 :
  goto t_40;
  w_70 :
  Return();
  t_40 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(t_29,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(t_29,Egetd(0,1)),Egetd(0,2)));
  Return();
  z_69 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_65;
  c_65 :
  TestStr(1,1,"-o",&&fail);
  Rpush(w_40);
  goto z_70;
  w_40 :
  goto v_40;
  z_70 :
  Return();
  v_40 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(w_26,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(w_26,Egetd(0,1)),Egetd(0,2)));
  Return();
  a_70 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_65;
  g_65 :
  TestStr(1,1,"--output",&&fail);
  Rpush(y_40);
  goto c_71;
  y_40 :
  goto x_40;
  c_71 :
  Return();
  x_40 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(w_26,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(w_26,Egetd(0,1)),Egetd(0,2)));
  Return();
  b_70 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_65;
  k_65 :
  TestStr(1,1,"-b",&&fail);
  Rpush(a_41);
  goto f_71;
  a_41 :
  goto z_40;
  f_71 :
  Return();
  z_40 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(y_27));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(y_27),Egetd(0,5)));
  Return();
  c_70 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_65;
  n_65 :
  TestStr(1,1,"-s",&&fail);
  Rpush(c_41);
  goto h_71;
  c_41 :
  goto b_41;
  h_71 :
  Return();
  b_41 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(d_41));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(d_41),Egetd(0,5)));
  Return();
  d_70 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_65;
  q_65 :
  TestStr(1,1,"--help",&&fail);
  Rpush(q_41);
  goto j_71;
  q_41 :
  goto e_41;
  j_71 :
  Return();
  e_41 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(h_31));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(h_31),Egetd(0,5)));
  Return();
  e_70 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_65;
  t_65 :
  TestStr(1,1,"-h",&&fail);
  Rpush(s_41);
  goto l_71;
  s_41 :
  goto r_41;
  l_71 :
  Return();
  r_41 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(h_31));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(h_31),Egetd(0,5)));
  Return();
  f_70 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_65;
  w_65 :
  TestStr(1,1,"-?",&&fail);
  Rpush(x_41);
  goto n_71;
  x_41 :
  goto w_41;
  n_71 :
  Return();
  w_41 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(h_31));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(h_31),Egetd(0,5)));
  Return();
  s_32 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_k_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_71;
  q_71 :
  TestFunFC(j_0,&&fail,Egetd(0,1));
  Rpush(d_42);
  goto s_71;
  d_42 :
  goto y_41;
  s_71 :
  Return();
  y_41 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_13)
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(j_26,Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(i_42);
  s_72 :
  Cpush(p_42);
  Cpush(s_42);
  Ccall(_stratego_k_13);
  goto r_42;
  s_42 :
  Ccall(_stratego_j_13);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_42);
  goto s_72;
  u_42 :
  AllBuild();
  goto t_42;
  r_42 :
  Cpop();
  t_42 :
  goto o_42;
  p_42 :
  Epushd(0,3);
  MoveTop(0,1);
  goto v_71;
  v_71 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(x_42);
  goto t_72;
  x_42 :
  goto w_42;
  t_72 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(i_32,Egetd(0,2)),Egetd(0,3)));
  Return();
  w_42 :
  Epopd(0,3);
  goto v_42;
  o_42 :
  Cpop();
  v_42 :
  Return();
  i_42 :
  AllBuild();
  Cpush(n_43);
  Ccall(_stratego_i_13);
  goto m_43;
  n_43 :
  Ccontinue(o_43);
  Epushd(0,6);
  Ccall(_stratego_d_13);
  Tdupl();
  Ccall(_stratego_b_13);
  Tpop();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_u_12);
  OneNextSon();
  Ccall(_stratego_v_12);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_b_13);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto y_71;
  y_71 :
  TestFunFC(c_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto z_71;
  z_71 :
  TestFunFC(c_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto a_72;
  a_72 :
  TestFunFC(e_0,&&fail,Egetd(0,6));
  Rpush(v_43);
  goto v_72;
  v_43 :
  goto p_43;
  v_72 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(v_25,Egetd(0,1)),Egetd(0,3)),(ATerm)ATmakeAppl2(c_0,Egetd(0,5),(ATerm)ATmakeAppl0(e_0))));
  Return();
  p_43 :
  Ccall(_stratego_a_13);
  Ccall(_stratego_x_12);
  Epopd(0,6);
  goto m_43;
  o_43 :
  Ccall(_stratego_w_12);
  goto w_43;
  m_43 :
  Cpop();
  w_43 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_l_13);
ENDPROC

DOIT

