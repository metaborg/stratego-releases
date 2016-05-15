#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,f_45);
VARDECL(AFun,d_44);
VARDECL(AFun,i_43);
VARDECL(AFun,c_43);
VARDECL(AFun,s_37);
VARDECL(AFun,j_37);
VARDECL(AFun,t_36);
VARDECL(AFun,n_36);
VARDECL(AFun,j_35);
VARDECL(AFun,l_34);
VARDECL(AFun,b_34);
VARDECL(AFun,h_33);
VARDECL(AFun,q_32);
VARDECL(AFun,l_30);
VARDECL(AFun,z_29);
VARDECL(AFun,t_26);
VARDECL(AFun,n_25);
VARDECL(AFun,m_25);
VARDECL(AFun,s_22);
VARDECL(AFun,r_22);
VARDECL(AFun,i_22);
VARDECL(AFun,d_22);
VARDECL(AFun,g_20);
VARDECL(AFun,f_17);
VARDECL(AFun,a_17);
VARDECL(AFun,y_12);
VARDECL(AFun,w_12);
VARDECL(AFun,u_12);
VARDECL(AFun,p_12);
VARDECL(AFun,n_12);
VARDECL(AFun,g_11);
VARDECL(AFun,f_11);
VARDECL(AFun,c_11);
VARDECL(AFun,w_10);
VARDECL(AFun,v_10);
VARDECL(AFun,u_10);
VARDECL(AFun,t_10);
VARDECL(AFun,s_10);
VARDECL(AFun,r_10);
VARDECL(AFun,q_10);
VARDECL(AFun,p_10);
VARDECL(AFun,l_10);
VARDECL(AFun,a_10);
VARDECL(AFun,y_9);
VARDECL(AFun,v_9);
VARDECL(AFun,s_9);
VARDECL(AFun,p_9);
VARDECL(AFun,u_6);
VARDECL(AFun,s_6);
VARDECL(AFun,r_6);
VARDECL(AFun,p_6);
VARDECL(AFun,r_0);
VARDECL(AFun,q_0);
VARDECL(AFun,n_0);
VARDECL(AFun,m_0);
VARDECL(AFun,l_0);
VARDECL(AFun,f_0);
VARDECL(AFun,e_0);
VARDECL(AFun,d_0);
PROCDECL(_stratego_c_10);
PROCDECL(_stratego_d_10);
PROCDECL(_stratego_e_10);
PROCDECL(_stratego_f_10);
PROCDECL(_stratego_g_10);
PROCDECL(_stratego_h_10);
PROCDECL(_stratego_i_10);
PROCDECL(_stratego_j_10);
PROCDECL(_stratego_k_10);
PROCDECL(_stratego_k_11);
PROCDECL(_stratego_l_11);
PROCDECL(_stratego_m_11);
PROCDECL(_stratego_r_11);
PROCDECL(_stratego_s_11);
PROCDECL(_stratego_t_11);
PROCDECL(_stratego_u_11);
PROCDECL(_stratego_v_11);
PROCDECL(_stratego_w_11);
PROCDECL(_stratego_x_11);
PROCDECL(_stratego_y_11);
PROCDECL(_stratego_z_11);
PROCDECL(_stratego_f_12);
PROCDECL(_stratego_g_12);
PROCDECL(_stratego_q_12);
PROCDECL(_stratego_r_12);
PROCDECL(_stratego_s_12);
PROCDECL(_stratego_k_13);
PROCDECL(_stratego_l_13);
PROCDECL(_stratego_m_13);
PROCDECL(_stratego_n_13);
PROCDECL(_stratego_o_13);
PROCDECL(_stratego_p_13);
PROCDECL(_stratego_q_13);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(f_45,ATmakeAFun("Statistics",0,0));
  MOVE(d_44,ATmakeAFun("DeclVersion",1,0));
  MOVE(i_43,ATmakeAFun("Version",0,0));
  MOVE(c_43,ATmakeAFun("Verbose",0,0));
  MOVE(s_37,ATmakeAFun("Undefined",1,0));
  MOVE(j_37,ATmakeAFun("Help",0,0));
  MOVE(t_36,ATmakeAFun("stdin",0,0));
  MOVE(n_36,ATmakeAFun("Input",1,0));
  MOVE(j_35,ATmakeAFun("Binary",0,0));
  MOVE(l_34,ATmakeAFun("stdout",0,0));
  MOVE(b_34,ATmakeAFun("Output",1,0));
  MOVE(h_33,ATmakeAFun("Program",1,0));
  MOVE(q_32,ATmakeAFun("Runtime",1,0));
  MOVE(l_30,ATmakeAFun("Silent",0,0));
  MOVE(z_29,ATmakeAFun("stderr",0,0));
  MOVE(t_26,ATmakeAFun("Op",2,0));
  MOVE(n_25,ATmakeAFun("DontInline",0,0));
  MOVE(m_25,ATmakeAFun("SDef",4,0));
  MOVE(s_22,ATmakeAFun("Matrix",2,0));
  MOVE(r_22,ATmakeAFun("Case",4,0));
  MOVE(i_22,ATmakeAFun("SVar",1,0));
  MOVE(d_22,ATmakeAFun("Call",2,0));
  MOVE(g_20,ATmakeAFun("SDef",3,0));
  MOVE(f_17,ATmakeAFun("Wld",0,0));
  MOVE(a_17,ATmakeAFun("All",1,0));
  MOVE(y_12,ATmakeAFun("Cong",2,0));
  MOVE(w_12,ATmakeAFun("Path",2,0));
  MOVE(u_12,ATmakeAFun("One",1,0));
  MOVE(p_12,ATmakeAFun("Some",1,0));
  MOVE(n_12,ATmakeAFun("Rec",2,0));
  MOVE(g_11,ATmakeAFun("Test",1,0));
  MOVE(f_11,ATmakeAFun("Not",1,0));
  MOVE(c_11,ATmakeAFun("Where",1,0));
  MOVE(w_10,ATmakeAFun("Match",1,0));
  MOVE(v_10,ATmakeAFun("Let",2,0));
  MOVE(u_10,ATmakeAFun("LChoice",2,0));
  MOVE(t_10,ATmakeAFun("Choice",2,0));
  MOVE(s_10,ATmakeAFun("Fail",0,0));
  MOVE(r_10,ATmakeAFun("Id",0,0));
  MOVE(q_10,ATmakeAFun("BAM",3,0));
  MOVE(p_10,ATmakeAFun("AM",2,0));
  MOVE(l_10,ATmakeAFun("MA",2,0));
  MOVE(a_10,ATmakeAFun("BA",2,0));
  MOVE(y_9,ATmakeAFun("Lets",2,0));
  MOVE(v_9,ATmakeAFun("LChoices",1,0));
  MOVE(s_9,ATmakeAFun("Choices",1,0));
  MOVE(p_9,ATmakeAFun("Seqs",1,0));
  MOVE(u_6,ATmakeAFun("Assign",2,0));
  MOVE(s_6,ATmakeAFun("Assign",1,0));
  MOVE(r_6,ATmakeAFun("Build",1,0));
  MOVE(p_6,ATmakeAFun("Seq",2,0));
  MOVE(r_0,ATmakeAFun("TNil",0,0));
  MOVE(q_0,ATmakeAFun("TCons",2,0));
  MOVE(n_0,ATmakeAFun("Nil",0,0));
  MOVE(m_0,ATmakeAFun("Cons",2,0));
  MOVE(l_0,ATmakeAFun("Var",1,0));
  MOVE(f_0,ATmakeAFun("Rule",3,0));
  MOVE(e_0,ATmakeAFun("LRule",1,0));
  MOVE(d_0,ATmakeAFun("Scope",2,0));
ENDPROC

PROC(_stratego_c_10)
  Epushd(0,6);
  MoveTop(0,2);
  goto m_7;
  m_7 :
  TestFunFC(d_0,&&c_0,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(b_0);
  goto k_8;
  c_0 :
  TestFunFC(e_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto n_7;
  n_7 :
  TestFunFC(f_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(b_0);
  goto l_8;
  b_0 :
  goto a_0;
  k_8 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  l_8 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_d_10);
  Return();
  a_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_d_10)
  Rpush(g_0);
  v_16 :
  Cpush(i_0);
  Epushd(0,2);
  MoveTop(0,1);
  goto n_8;
  n_8 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(k_0);
  goto w_16;
  k_0 :
  goto j_0;
  w_16 :
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(m_0,Egetd(0,2),(ATerm)ATmakeAppl0(n_0)));
  Return();
  j_0 :
  Epopd(0,2);
  goto h_0;
  i_0 :
  Ccontinue(o_0);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_c_10);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Tset((ATerm)ATmakeAppl0(n_0));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(p_0);
  goto v_16;
  p_0 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(1,2),(ATerm)ATmakeAppl2(q_0,Egetd(0,1),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_i_10);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto m_9;
  m_9 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto n_9;
  n_9 :
  TestFunFC(q_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto o_9;
  o_9 :
  TestFunFC(r_0,&&fail,Egetd(1,5));
  Rpush(t_0);
  goto c_17;
  t_0 :
  goto s_0;
  c_17 :
  Move(0,3,1,4);
  Return();
  s_0 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(u_0);
  d_17 :
  Cpush(w_0);
  Ccall(_stratego_p_13);
  Tset((ATerm)ATmakeAppl0(n_0));
  goto v_0;
  w_0 :
  Epushd(1,3);
  MoveTop(1,1);
  goto q_11;
  q_11 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(z_0);
  goto e_17;
  z_0 :
  goto y_0;
  e_17 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(a_1);
  goto d_17;
  a_1 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(1,2),(ATerm)ATmakeAppl2(q_0,Egetd(2,1),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(2,2);
  goto n_11;
  n_11 :
  TestFunFC(q_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto o_11;
  o_11 :
  TestFunFC(q_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto p_11;
  p_11 :
  TestFunFC(r_0,&&fail,Egetd(2,6));
  Rpush(c_1);
  goto h_17;
  c_1 :
  goto b_1;
  h_17 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(d_1);
  i_17 :
  Cpush(f_1);
  Ccall(_stratego_p_13);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto e_1;
  f_1 :
  Ccontinue(g_1);
  Epushd(3,3);
  MoveTop(3,1);
  goto n_10;
  n_10 :
  TestFunFC(m_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(i_1);
  goto j_17;
  i_1 :
  goto h_1;
  j_17 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(j_1);
  k_17 :
  Cpush(l_1);
  Epushd(4,3);
  MoveTop(4,1);
  goto m_10;
  m_10 :
  TestFunFC(m_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(n_1);
  goto l_17;
  n_1 :
  goto m_1;
  l_17 :
  Move(3,2,4,2);
  Return();
  m_1 :
  Epopd(4,3);
  goto k_1;
  l_1 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_1);
  goto k_17;
  p_1 :
  AllBuild();
  goto o_1;
  k_1 :
  Cpop();
  o_1 :
  Return();
  j_1 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(q_1);
  goto i_17;
  q_1 :
  Return();
  h_1 :
  Epopd(3,3);
  goto e_1;
  g_1 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_1);
  goto i_17;
  s_1 :
  AllBuild();
  goto r_1;
  e_1 :
  Cpop();
  r_1 :
  Return();
  d_1 :
  Return();
  b_1 :
  Epopd(2,6);
  Return();
  y_0 :
  Epopd(1,3);
  goto x_0;
  v_0 :
  Cpop();
  x_0 :
  Return();
  u_0 :
  Epopd(0,3);
  goto h_0;
  o_0 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto c_12;
  c_12 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_12;
  d_12 :
  TestFunFC(q_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto e_12;
  e_12 :
  TestFunFC(r_0,&&fail,Egetd(1,5));
  Rpush(v_1);
  goto n_17;
  v_1 :
  goto u_1;
  n_17 :
  Move(0,2,1,4);
  Return();
  u_1 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(w_1);
  o_17 :
  Cpush(y_1);
  Ccall(_stratego_p_13);
  Tset((ATerm)ATmakeAppl0(n_0));
  goto x_1;
  y_1 :
  Epushd(1,3);
  MoveTop(1,1);
  goto x_13;
  x_13 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(b_2);
  goto p_17;
  b_2 :
  goto a_2;
  p_17 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(c_2);
  goto v_16;
  c_2 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(d_2);
  goto o_17;
  d_2 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(2,1),(ATerm)ATmakeAppl2(q_0,Egetd(2,2),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(2,3);
  goto u_13;
  u_13 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_13;
  v_13 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto w_13;
  w_13 :
  TestFunFC(r_0,&&fail,Egetd(2,7));
  Rpush(f_2);
  goto s_17;
  f_2 :
  goto e_2;
  s_17 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(g_2);
  t_17 :
  Cpush(i_2);
  Ccall(_stratego_p_13);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto h_2;
  i_2 :
  Ccontinue(j_2);
  Epushd(3,3);
  MoveTop(3,1);
  goto t_13;
  t_13 :
  TestFunFC(m_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_2);
  goto u_17;
  l_2 :
  goto k_2;
  u_17 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(m_2);
  v_17 :
  Cpush(o_2);
  Epushd(4,3);
  MoveTop(4,1);
  goto s_13;
  s_13 :
  TestFunFC(m_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(q_2);
  goto w_17;
  q_2 :
  goto p_2;
  w_17 :
  Move(3,2,4,2);
  Return();
  p_2 :
  Epopd(4,3);
  goto n_2;
  o_2 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_2);
  goto v_17;
  s_2 :
  AllBuild();
  goto r_2;
  n_2 :
  Cpop();
  r_2 :
  Return();
  m_2 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(t_2);
  goto t_17;
  t_2 :
  Return();
  k_2 :
  Epopd(3,3);
  goto h_2;
  j_2 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_2);
  goto t_17;
  v_2 :
  AllBuild();
  goto u_2;
  h_2 :
  Cpop();
  u_2 :
  Return();
  g_2 :
  Return();
  e_2 :
  Epopd(2,7);
  Return();
  a_2 :
  Epopd(1,3);
  goto z_1;
  x_1 :
  Cpop();
  z_1 :
  Return();
  w_1 :
  Epopd(0,2);
  goto t_1;
  h_0 :
  Cpop();
  t_1 :
  Return();
  g_0 :
ENDPROC

PROC(_stratego_e_10)
  Rpush(w_2);
  v_18 :
  Epushd(0,11);
  MoveTop(0,5);
  goto z_17;
  z_17 :
  TestFunFC(q_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto a_18;
  a_18 :
  TestFunFC(q_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto b_18;
  b_18 :
  TestFunFC(m_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto c_18;
  c_18 :
  TestFunFC(r_0,&&fail,Egetd(0,11));
  goto d_18;
  d_18 :
  TestFunFC(q_0,&&z_2,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto e_18;
  e_18 :
  TestFunFC(q_0,&&a_3,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto f_18;
  f_18 :
  TestFunFC(r_0,&&b_3,Egetd(0,4));
  Cpush(d_3);
  Rpush(e_3);
  goto w_18;
  e_3 :
  goto c_3;
  d_3 :
  Rpush(g_3);
  goto x_18;
  g_3 :
  goto f_3;
  c_3 :
  Cpop();
  f_3 :
  goto y_2;
  b_3 :
  Rpush(y_2);
  goto x_18;
  a_3 :
  Rpush(y_2);
  goto x_18;
  z_2 :
  Rpush(y_2);
  goto x_18;
  y_2 :
  goto x_2;
  w_18 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  x_18 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,6),(ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl0(r_0))));
  Rpush(h_3);
  goto v_18;
  h_3 :
  Return();
  x_2 :
  Epopd(0,11);
  Return();
  w_2 :
ENDPROC

PROC(_stratego_f_10)
  Epushd(0,7);
  MoveTop(0,1);
  goto p_19;
  p_19 :
  TestFunFC(q_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto q_19;
  q_19 :
  TestFunFC(q_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto r_19;
  r_19 :
  TestFunFC(r_0,&&k_3,Egetd(0,5));
  Rpush(j_3);
  goto f_21;
  k_3 :
  TestFunFC(q_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto s_19;
  s_19 :
  TestFunFC(r_0,&&fail,Egetd(0,7));
  Rpush(j_3);
  goto g_21;
  j_3 :
  goto i_3;
  f_21 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  g_21 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,2),(ATerm)ATmakeAppl2(q_0,Egetd(0,4),(ATerm)ATmakeAppl0(r_0))));
  Rpush(l_3);
  h_21 :
  Epushd(2,9);
  MoveTop(2,1);
  goto g_19;
  g_19 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto h_19;
  h_19 :
  TestFunFC(n_0,&&o_3,Egetd(2,2));
  goto i_19;
  i_19 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto j_19;
  j_19 :
  TestFunFC(n_0,&&fail,Egetd(2,6));
  goto k_19;
  k_19 :
  TestFunFC(r_0,&&fail,Egetd(2,9));
  Rpush(n_3);
  goto i_21;
  o_3 :
  TestFunFC(m_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto l_19;
  l_19 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto m_19;
  m_19 :
  TestFunFC(m_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto n_19;
  n_19 :
  TestFunFC(r_0,&&fail,Egetd(2,9));
  Rpush(n_3);
  goto j_21;
  n_3 :
  goto m_3;
  i_21 :
  Tset((ATerm)ATmakeAppl0(n_0));
  Return();
  j_21 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(q_0,Egetd(2,3),(ATerm)ATmakeAppl2(q_0,Egetd(2,7),(ATerm)ATmakeAppl0(r_0))),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(q_0,Egetd(2,4),(ATerm)ATmakeAppl2(q_0,Egetd(2,8),(ATerm)ATmakeAppl0(r_0))),(ATerm)ATmakeAppl0(r_0))));
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(q_3);
  goto h_21;
  q_3 :
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto d_19;
  d_19 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto e_19;
  e_19 :
  TestFunFC(q_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto f_19;
  f_19 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  Rpush(r_3);
  goto k_21;
  r_3 :
  goto p_3;
  k_21 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(m_0,Egetd(3,2),Egetd(3,4)));
  Return();
  p_3 :
  Epopd(3,5);
  Return();
  m_3 :
  Epopd(2,9);
  Return();
  l_3 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(1,1),(ATerm)ATmakeAppl2(q_0,Egetd(0,6),(ATerm)ATmakeAppl0(r_0))));
  Epopd(1,1);
  Return();
  i_3 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_g_10)
  Epushd(0,5);
  Ccall(_stratego_f_10);
  MoveTop(0,1);
  goto s_21;
  s_21 :
  TestFunFC(q_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto t_21;
  t_21 :
  TestFunFC(q_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto u_21;
  u_21 :
  TestFunFC(r_0,&&fail,Egetd(0,5));
  Rpush(t_3);
  goto l_22;
  t_3 :
  goto s_3;
  l_22 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(u_3);
  m_22 :
  Cpush(w_3);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto r_21;
  r_21 :
  TestFunFC(l_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(y_3);
  goto o_22;
  y_3 :
  goto x_3;
  o_22 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Move(1,2,2,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  x_3 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(1,2),(ATerm)ATmakeAppl2(q_0,Egetd(1,3),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_e_10);
  Epopd(1,3);
  goto v_3;
  w_3 :
  AllInit();
  a_4 :
  AllNextSon(&&b_4);
  Rpush(c_4);
  goto m_22;
  c_4 :
  goto a_4;
  b_4 :
  AllBuild();
  goto z_3;
  v_3 :
  Cpop();
  z_3 :
  Return();
  u_3 :
  Return();
  s_3 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_10)
  Epushd(0,7);
  MoveTop(0,1);
  goto t_23;
  t_23 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto u_23;
  u_23 :
  TestFunFC(q_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto v_23;
  v_23 :
  TestFunFC(q_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto w_23;
  w_23 :
  TestFunFC(r_0,&&fail,Egetd(0,6));
  Rpush(e_4);
  goto x_25;
  e_4 :
  goto d_4;
  x_25 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto t_22;
  t_22 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto u_22;
  u_22 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_22;
  v_22 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  Rpush(g_4);
  goto y_25;
  g_4 :
  goto f_4;
  y_25 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  f_4 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto x_22;
  x_22 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto y_22;
  y_22 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto z_22;
  z_22 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  Rpush(i_4);
  goto z_25;
  i_4 :
  goto h_4;
  z_25 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  h_4 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(1,2),(ATerm)ATmakeAppl2(q_0,Egetd(1,3),(ATerm)ATmakeAppl0(r_0))));
  Rpush(j_4);
  a_26 :
  Epushd(2,9);
  MoveTop(2,1);
  goto g_23;
  g_23 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto h_23;
  h_23 :
  TestFunFC(n_0,&&m_4,Egetd(2,2));
  goto i_23;
  i_23 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto j_23;
  j_23 :
  TestFunFC(n_0,&&fail,Egetd(2,6));
  goto k_23;
  k_23 :
  TestFunFC(r_0,&&fail,Egetd(2,9));
  Rpush(l_4);
  goto g_26;
  m_4 :
  TestFunFC(m_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto l_23;
  l_23 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto m_23;
  m_23 :
  TestFunFC(m_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto n_23;
  n_23 :
  TestFunFC(r_0,&&fail,Egetd(2,9));
  Rpush(l_4);
  goto h_26;
  l_4 :
  goto k_4;
  g_26 :
  Tset((ATerm)ATmakeAppl0(n_0));
  Return();
  h_26 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(q_0,Egetd(2,3),(ATerm)ATmakeAppl2(q_0,Egetd(2,7),(ATerm)ATmakeAppl0(r_0))),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(q_0,Egetd(2,4),(ATerm)ATmakeAppl2(q_0,Egetd(2,8),(ATerm)ATmakeAppl0(r_0))),(ATerm)ATmakeAppl0(r_0))));
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(o_4);
  goto a_26;
  o_4 :
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto d_23;
  d_23 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto e_23;
  e_23 :
  TestFunFC(q_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto f_23;
  f_23 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  Rpush(p_4);
  goto i_26;
  p_4 :
  goto n_4;
  i_26 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(m_0,Egetd(3,2),Egetd(3,4)));
  Return();
  n_4 :
  Epopd(3,5);
  Return();
  k_4 :
  Epopd(2,9);
  Return();
  j_4 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(1,4),(ATerm)ATmakeAppl2(q_0,Egetd(0,7),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(1,5);
  goto q_23;
  q_23 :
  TestFunFC(q_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto r_23;
  r_23 :
  TestFunFC(q_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto s_23;
  s_23 :
  TestFunFC(r_0,&&fail,Egetd(1,9));
  Rpush(r_4);
  goto k_26;
  r_4 :
  goto q_4;
  k_26 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(s_4);
  l_26 :
  Cpush(u_4);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_4);
  goto l_26;
  v_4 :
  AllBuild();
  goto t_4;
  u_4 :
  Ccall(_stratego_p_13);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto w_4;
  t_4 :
  Cpop();
  w_4 :
  Return();
  s_4 :
  Return();
  q_4 :
  Epopd(1,9);
  Return();
  d_4 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_i_10)
  Epushd(0,5);
  MoveTop(0,5);
  goto t_27;
  t_27 :
  TestFunFC(q_0,&&z_4,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto u_27;
  u_27 :
  TestFunFC(q_0,&&a_5,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto v_27;
  v_27 :
  TestFunFC(r_0,&&b_5,Egetd(0,4));
  Cpush(d_5);
  Rpush(e_5);
  goto f_29;
  e_5 :
  goto c_5;
  d_5 :
  Rpush(g_5);
  goto g_29;
  g_5 :
  goto f_5;
  c_5 :
  Cpop();
  f_5 :
  goto y_4;
  b_5 :
  Rpush(y_4);
  goto g_29;
  a_5 :
  Rpush(y_4);
  goto g_29;
  z_4 :
  Rpush(y_4);
  goto g_29;
  y_4 :
  goto x_4;
  f_29 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(h_5);
  h_29 :
  Cpush(j_5);
  Ccall(_stratego_p_13);
  goto i_5;
  j_5 :
  Ccontinue(k_5);
  Epushd(1,3);
  MoveTop(1,1);
  goto z_26;
  z_26 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(m_5);
  goto i_29;
  m_5 :
  goto l_5;
  i_29 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(n_5);
  j_29 :
  Cpush(p_5);
  Epushd(2,3);
  MoveTop(2,1);
  goto y_26;
  y_26 :
  TestFunFC(m_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(r_5);
  goto k_29;
  r_5 :
  goto q_5;
  k_29 :
  Move(1,2,2,2);
  Return();
  q_5 :
  Epopd(2,3);
  goto o_5;
  p_5 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_5);
  goto j_29;
  t_5 :
  AllBuild();
  goto s_5;
  o_5 :
  Cpop();
  s_5 :
  Return();
  n_5 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(u_5);
  goto h_29;
  u_5 :
  Return();
  l_5 :
  Epopd(1,3);
  goto i_5;
  k_5 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_5);
  goto h_29;
  w_5 :
  AllBuild();
  goto v_5;
  i_5 :
  Cpop();
  v_5 :
  Return();
  h_5 :
  Return();
  g_29 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl0(n_0),(ATerm)ATmakeAppl2(q_0,Egetd(0,5),(ATerm)ATmakeAppl0(r_0))));
  Rpush(x_5);
  l_29 :
  Cpush(z_5);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Cpush(b_6);
  Epushd(1,7);
  MoveTop(1,1);
  goto k_27;
  k_27 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto l_27;
  l_27 :
  TestFunFC(q_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto m_27;
  m_27 :
  TestFunFC(q_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto n_27;
  n_27 :
  TestFunFC(r_0,&&fail,Egetd(1,6));
  Rpush(d_6);
  goto m_29;
  d_6 :
  goto c_6;
  m_29 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  c_6 :
  Epopd(1,7);
  goto a_6;
  b_6 :
  Ccall(_stratego_h_10);
  goto e_6;
  a_6 :
  Cpop();
  e_6 :
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  goto y_5;
  z_5 :
  Epushd(1,7);
  MoveTop(1,1);
  goto p_27;
  p_27 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_27;
  q_27 :
  TestFunFC(q_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto r_27;
  r_27 :
  TestFunFC(m_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto s_27;
  s_27 :
  TestFunFC(r_0,&&fail,Egetd(1,7));
  Rpush(h_6);
  goto n_29;
  h_6 :
  goto g_6;
  n_29 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(1,5),Egetd(1,2)),(ATerm)ATmakeAppl2(q_0,Egetd(1,6),(ATerm)ATmakeAppl0(r_0))));
  Return();
  g_6 :
  Epopd(1,7);
  goto f_6;
  y_5 :
  Cpop();
  f_6 :
  Cpush(j_6);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_13);
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  goto i_6;
  j_6 :
  Rpush(l_6);
  goto l_29;
  l_6 :
  goto k_6;
  i_6 :
  Cpop();
  k_6 :
  Return();
  x_5 :
  Return();
  x_4 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_10)
  Epushd(0,17);
  MoveTop(0,9);
  goto f_31;
  f_31 :
  TestFunFC(p_6,&&o_6,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto g_31;
  g_31 :
  TestFunFC(r_6,&&q_6,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto h_31;
  h_31 :
  TestFunFC(d_0,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto i_31;
  i_31 :
  TestFunFC(p_6,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto j_31;
  j_31 :
  TestFunFC(s_6,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto k_31;
  k_31 :
  TestFunFC(l_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(n_6);
  goto z_35;
  q_6 :
  TestFunFC(s_6,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto l_31;
  l_31 :
  TestFunFC(l_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto m_31;
  m_31 :
  TestFunFC(p_6,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto n_31;
  n_31 :
  TestFunFC(r_6,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto o_31;
  o_31 :
  TestFunFC(l_0,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  Rpush(n_6);
  goto d_36;
  o_6 :
  TestFunFC(d_0,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto p_31;
  p_31 :
  TestFunFC(p_6,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto q_31;
  q_31 :
  TestFunFC(u_6,&&t_6,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  MoveArg(0,1,0,14,1);
  goto r_31;
  r_31 :
  TestFunFC(l_0,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto s_31;
  s_31 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(n_6);
  goto a_36;
  t_6 :
  TestFunFC(s_6,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto t_31;
  t_31 :
  TestFunFC(l_0,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto u_31;
  u_31 :
  TestFunFC(p_6,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto v_31;
  v_31 :
  TestFunFC(s_6,&&v_6,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto w_31;
  w_31 :
  TestFunFC(l_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(n_6);
  goto b_36;
  v_6 :
  TestFunFC(u_6,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto x_31;
  x_31 :
  TestFunFC(l_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto y_31;
  y_31 :
  TestFunFC(l_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  Rpush(n_6);
  goto c_36;
  n_6 :
  goto m_6;
  z_35 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  NotNULLd(0,14);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,5),(ATerm)ATmakeAppl2(q_0,Egetd(0,14),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(2,1);
  goto w_29;
  w_29 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto x_29;
  x_29 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto y_29;
  y_29 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  Rpush(x_6);
  goto e_36;
  x_6 :
  goto w_6;
  e_36 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(y_6);
  f_36 :
  Cpush(a_7);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  goto z_6;
  a_7 :
  IsAppl();
  OneInit();
  c_7 :
  OneNextSon();
  Cpush(c_7);
  Rpush(e_7);
  goto f_36;
  e_7 :
  Cpop();
  OneBuild();
  goto b_7;
  z_6 :
  Cpop();
  b_7 :
  Return();
  y_6 :
  NotNULLd(0,14);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,14),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,5),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_i_10);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  w_6 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,11);
  NotNULLd(0,8);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,5),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,11),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,Egetd(0,8),(ATerm)ATmakeAppl0(r_0)))));
  Ccall(_stratego_g_10);
  MoveTop(1,2);
  NotNULLd(0,11);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(p_6,(ATerm)ATmakeAppl1(r_6,Egetd(0,11)),(ATerm)ATmakeAppl2(d_0,Egetd(1,1),Egetd(1,2))));
  Epopd(1,2);
  Return();
  a_36 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,16),(ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(2,1);
  goto d_30;
  d_30 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto e_30;
  e_30 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto f_30;
  f_30 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  Rpush(g_7);
  goto j_36;
  g_7 :
  goto f_7;
  j_36 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(h_7);
  k_36 :
  Cpush(j_7);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  goto i_7;
  j_7 :
  IsAppl();
  OneInit();
  l_7 :
  OneNextSon();
  Cpush(l_7);
  Rpush(r_7);
  goto k_36;
  r_7 :
  Cpop();
  OneBuild();
  goto k_7;
  i_7 :
  Cpop();
  k_7 :
  Return();
  h_7 :
  NotNULLd(0,10);
  NotNULLd(0,16);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,16),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_i_10);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  f_7 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,16);
  NotNULLd(0,2);
  NotNULLd(0,17);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,16),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(l_0,Egetd(0,2)),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,Egetd(0,17),(ATerm)ATmakeAppl0(r_0)))));
  Ccall(_stratego_g_10);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(1,1),Egetd(1,2)));
  Epopd(1,2);
  Return();
  b_36 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,16),(ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(2,1);
  goto p_30;
  p_30 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto q_30;
  q_30 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_30;
  r_30 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  Rpush(t_7);
  goto o_36;
  t_7 :
  goto s_7;
  o_36 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(u_7);
  p_36 :
  Cpush(w_7);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  goto v_7;
  w_7 :
  IsAppl();
  OneInit();
  a_8 :
  OneNextSon();
  Cpush(a_8);
  Rpush(e_8);
  goto p_36;
  e_8 :
  Cpop();
  OneBuild();
  goto x_7;
  v_7 :
  Cpop();
  x_7 :
  Return();
  u_7 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,5),(ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(3,1);
  goto m_30;
  m_30 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto n_30;
  n_30 :
  TestFunFC(q_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto o_30;
  o_30 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  Rpush(g_8);
  goto w_36;
  g_8 :
  goto f_8;
  w_36 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(h_8);
  x_36 :
  Cpush(j_8);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  goto i_8;
  j_8 :
  IsAppl();
  OneInit();
  o_8 :
  OneNextSon();
  Cpush(o_8);
  Rpush(q_8);
  goto x_36;
  q_8 :
  Cpop();
  OneBuild();
  goto m_8;
  i_8 :
  Cpop();
  m_8 :
  Return();
  h_8 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,5),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_i_10);
  MoveTop(4,1);
  Move(1,1,4,1);
  Epopd(4,1);
  Return();
  f_8 :
  Epopd(3,5);
  Return();
  s_7 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(0,8);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,5),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(l_0,Egetd(0,16)),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,Egetd(0,8),(ATerm)ATmakeAppl0(r_0)))));
  Ccall(_stratego_g_10);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(0,16);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(1,1),(ATerm)ATmakeAppl2(p_6,(ATerm)ATmakeAppl1(s_6,(ATerm)ATmakeAppl1(l_0,Egetd(0,16))),Egetd(1,2))));
  Epopd(1,2);
  Return();
  c_36 :
  Epushd(1,3);
  Move(0,16,0,7);
  Move(1,1,0,8);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,16),(ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(2,1);
  goto b_31;
  b_31 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto c_31;
  c_31 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto d_31;
  d_31 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  Rpush(s_8);
  goto b_37;
  s_8 :
  goto r_8;
  b_37 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(t_8);
  c_37 :
  Cpush(v_8);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  goto u_8;
  v_8 :
  IsAppl();
  OneInit();
  x_8 :
  OneNextSon();
  Cpush(x_8);
  Rpush(z_8);
  goto c_37;
  z_8 :
  Cpop();
  OneBuild();
  goto w_8;
  u_8 :
  Cpop();
  w_8 :
  Return();
  t_8 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,5),(ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(3,1);
  goto y_30;
  y_30 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto z_30;
  z_30 :
  TestFunFC(q_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto a_31;
  a_31 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  Rpush(b_9);
  goto e_37;
  b_9 :
  goto a_9;
  e_37 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(c_9);
  f_37 :
  Cpush(e_9);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  goto d_9;
  e_9 :
  IsAppl();
  OneInit();
  g_9 :
  OneNextSon();
  Cpush(g_9);
  Rpush(i_9);
  goto f_37;
  i_9 :
  Cpop();
  OneBuild();
  goto f_9;
  d_9 :
  Cpop();
  f_9 :
  Return();
  c_9 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,5),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_i_10);
  MoveTop(4,1);
  Move(1,2,4,1);
  Epopd(4,1);
  Return();
  a_9 :
  Epopd(3,5);
  Return();
  r_8 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,5),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(l_0,Egetd(0,16)),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,Egetd(1,1),(ATerm)ATmakeAppl0(r_0)))));
  Ccall(_stratego_g_10);
  MoveTop(1,3);
  NotNULLd(1,2);
  NotNULLd(0,16);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(1,2),(ATerm)ATmakeAppl2(p_6,(ATerm)ATmakeAppl1(s_6,(ATerm)ATmakeAppl1(l_0,Egetd(0,16))),Egetd(1,3))));
  Epopd(1,3);
  Return();
  d_36 :
  Epushd(1,1);
  Move(0,12,0,16);
  Move(1,1,0,17);
  NotNULLd(0,12);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(p_6,(ATerm)ATmakeAppl1(s_6,(ATerm)ATmakeAppl1(l_0,Egetd(0,12))),Egetd(1,1)));
  Epopd(1,1);
  Return();
  m_6 :
  Epopd(0,17);
ENDPROC

PROC(_stratego_k_10)
  Epushd(0,6);
  MoveTop(0,3);
  goto u_37;
  u_37 :
  TestFunFC(p_9,&&l_9,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto v_37;
  v_37 :
  TestFunFC(n_0,&&q_9,Egetd(0,4));
  Rpush(k_9);
  goto v_38;
  q_9 :
  TestFunFC(m_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(k_9);
  goto w_38;
  l_9 :
  TestFunFC(s_9,&&r_9,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto w_37;
  w_37 :
  TestFunFC(n_0,&&t_9,Egetd(0,4));
  Rpush(k_9);
  goto x_38;
  t_9 :
  TestFunFC(m_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(k_9);
  goto y_38;
  r_9 :
  TestFunFC(v_9,&&u_9,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto x_37;
  x_37 :
  TestFunFC(n_0,&&w_9,Egetd(0,4));
  Rpush(k_9);
  goto z_38;
  w_9 :
  TestFunFC(m_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(k_9);
  goto a_39;
  u_9 :
  TestFunFC(y_9,&&x_9,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(k_9);
  goto b_39;
  x_9 :
  TestFunFC(a_10,&&z_9,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(k_9);
  goto c_39;
  z_9 :
  TestFunFC(l_10,&&b_10,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(k_9);
  goto d_39;
  b_10 :
  TestFunFC(p_10,&&o_10,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(k_9);
  goto e_39;
  o_10 :
  TestFunFC(q_10,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(k_9);
  goto f_39;
  k_9 :
  goto j_9;
  v_38 :
  Tset((ATerm)ATmakeAppl0(r_10));
  Return();
  w_38 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(p_6,Egetd(0,1),(ATerm)ATmakeAppl1(p_9,Egetd(0,2))));
  Return();
  x_38 :
  Tset((ATerm)ATmakeAppl0(s_10));
  Return();
  y_38 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(t_10,Egetd(0,1),(ATerm)ATmakeAppl1(s_9,Egetd(0,2))));
  Return();
  z_38 :
  Tset((ATerm)ATmakeAppl0(s_10));
  Return();
  a_39 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(u_10,Egetd(0,1),(ATerm)ATmakeAppl1(v_9,Egetd(0,2))));
  Return();
  b_39 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(v_10,Egetd(0,4),Egetd(0,5)));
  Return();
  c_39 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(p_6,(ATerm)ATmakeAppl1(r_6,Egetd(0,5)),Egetd(0,4)));
  Return();
  d_39 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(p_6,(ATerm)ATmakeAppl1(w_10,Egetd(0,4)),Egetd(0,5)));
  Return();
  e_39 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(p_6,Egetd(0,4),(ATerm)ATmakeAppl1(w_10,Egetd(0,5))));
  Return();
  f_39 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl1(p_9,(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(r_6,Egetd(0,5)),(ATerm)ATmakeAppl2(m_0,Egetd(0,4),(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(w_10,Egetd(0,6)),(ATerm)ATmakeAppl0(n_0))))));
  Return();
  j_9 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_k_11)
  Epushd(0,9);
  MoveTop(0,2);
  goto m_39;
  m_39 :
  TestFunFC(t_10,&&z_10,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(y_10);
  goto k_40;
  z_10 :
  TestFunFC(u_10,&&a_11,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(y_10);
  goto l_40;
  a_11 :
  TestFunFC(c_11,&&b_11,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto n_39;
  n_39 :
  TestFunFC(c_11,&&d_11,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(y_10);
  goto m_40;
  d_11 :
  TestFunFC(p_6,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto o_39;
  o_39 :
  TestFunFC(c_11,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto p_39;
  p_39 :
  TestFunFC(p_6,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,9,0,6,1);
  goto q_39;
  q_39 :
  TestFunFC(r_6,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  Rpush(y_10);
  goto p_40;
  b_11 :
  TestFunFC(f_11,&&e_11,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto r_39;
  r_39 :
  TestFunFC(f_11,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(y_10);
  goto n_40;
  e_11 :
  TestFunFC(g_11,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto s_39;
  s_39 :
  TestFunFC(g_11,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(y_10);
  goto o_40;
  y_10 :
  goto x_10;
  k_40 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  l_40 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  m_40 :
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(c_11,Egetd(0,4)));
  Return();
  n_40 :
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(g_11,Egetd(0,4)));
  Return();
  o_40 :
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(g_11,Egetd(0,4)));
  Return();
  p_40 :
  NotNULLd(0,5);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset((ATerm)ATmakeAppl1(c_11,(ATerm)ATmakeAppl2(p_6,Egetd(0,5),(ATerm)ATmakeAppl2(p_6,(ATerm)ATmakeAppl1(r_6,Egetd(0,8)),Egetd(0,9)))));
  Return();
  x_10 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_l_11)
  Epushd(0,5);
  MoveTop(0,1);
  goto t_40;
  t_40 :
  TestFunFC(t_10,&&j_11,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto u_40;
  u_40 :
  TestFunFC(t_10,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(i_11);
  goto l_41;
  j_11 :
  TestFunFC(p_6,&&a_12,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto v_40;
  v_40 :
  TestFunFC(p_6,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(i_11);
  goto m_41;
  a_12 :
  TestFunFC(u_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto w_40;
  w_40 :
  TestFunFC(u_10,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(i_11);
  goto n_41;
  i_11 :
  goto h_11;
  l_41 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(t_10,Egetd(0,3),(ATerm)ATmakeAppl2(t_10,Egetd(0,4),Egetd(0,5))));
  Return();
  m_41 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(p_6,Egetd(0,3),(ATerm)ATmakeAppl2(p_6,Egetd(0,4),Egetd(0,5))));
  Return();
  n_41 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(u_10,Egetd(0,3),(ATerm)ATmakeAppl2(u_10,Egetd(0,4),Egetd(0,5))));
  Return();
  h_11 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_m_11)
  Epushd(0,3);
  MoveTop(0,2);
  goto f_42;
  f_42 :
  TestFunFC(g_11,&&i_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto g_42;
  g_42 :
  TestFunFC(s_10,&&fail,Egetd(0,3));
  Rpush(h_12);
  goto l_43;
  i_12 :
  TestFunFC(f_11,&&j_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto h_42;
  h_42 :
  TestFunFC(s_10,&&fail,Egetd(0,3));
  Rpush(h_12);
  goto m_43;
  j_12 :
  TestFunFC(p_6,&&k_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto i_42;
  i_42 :
  TestFunFC(s_10,&&fail,Egetd(0,3));
  Rpush(h_12);
  goto n_43;
  k_12 :
  TestFunFC(d_0,&&l_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto j_42;
  j_42 :
  TestFunFC(s_10,&&fail,Egetd(0,1));
  Rpush(h_12);
  goto o_43;
  l_12 :
  TestFunFC(n_12,&&m_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto k_42;
  k_42 :
  TestFunFC(s_10,&&fail,Egetd(0,1));
  Rpush(h_12);
  goto p_43;
  m_12 :
  TestFunFC(p_12,&&o_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto l_42;
  l_42 :
  TestFunFC(s_10,&&fail,Egetd(0,3));
  Rpush(h_12);
  goto q_43;
  o_12 :
  TestFunFC(u_12,&&t_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto m_42;
  m_42 :
  TestFunFC(s_10,&&fail,Egetd(0,3));
  Rpush(h_12);
  goto r_43;
  t_12 :
  TestFunFC(w_12,&&v_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto n_42;
  n_42 :
  TestFunFC(s_10,&&fail,Egetd(0,1));
  Rpush(h_12);
  goto s_43;
  v_12 :
  TestFunFC(y_12,&&x_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(h_12);
  goto t_43;
  x_12 :
  TestFunFC(t_10,&&z_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto o_42;
  o_42 :
  TestFunFC(s_10,&&a_13,Egetd(0,1));
  goto p_42;
  p_42 :
  TestFunFC(s_10,&&b_13,Egetd(0,3));
  Cpush(d_13);
  Rpush(e_13);
  goto u_43;
  e_13 :
  goto c_13;
  d_13 :
  Rpush(g_13);
  goto v_43;
  g_13 :
  goto f_13;
  c_13 :
  Cpop();
  f_13 :
  goto h_12;
  b_13 :
  Rpush(h_12);
  goto v_43;
  a_13 :
  goto q_42;
  q_42 :
  TestFunFC(s_10,&&fail,Egetd(0,3));
  Rpush(h_12);
  goto u_43;
  z_12 :
  TestFunFC(u_10,&&h_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto r_42;
  r_42 :
  TestFunFC(s_10,&&i_13,Egetd(0,1));
  goto s_42;
  s_42 :
  TestFunFC(s_10,&&j_13,Egetd(0,3));
  Cpush(a_14);
  Rpush(e_14);
  goto w_43;
  e_14 :
  goto r_13;
  a_14 :
  Rpush(h_14);
  goto x_43;
  h_14 :
  goto g_14;
  r_13 :
  Cpop();
  g_14 :
  goto h_12;
  j_13 :
  Rpush(h_12);
  goto x_43;
  i_13 :
  goto t_42;
  t_42 :
  TestFunFC(s_10,&&fail,Egetd(0,3));
  Rpush(h_12);
  goto w_43;
  h_13 :
  TestFunFC(c_11,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto u_42;
  u_42 :
  TestFunFC(s_10,&&fail,Egetd(0,3));
  Rpush(h_12);
  goto y_43;
  h_12 :
  goto b_12;
  l_43 :
  Tset((ATerm)ATmakeAppl0(s_10));
  Return();
  m_43 :
  Tset((ATerm)ATmakeAppl0(r_10));
  Return();
  n_43 :
  Tset((ATerm)ATmakeAppl0(s_10));
  Return();
  o_43 :
  Tset((ATerm)ATmakeAppl0(s_10));
  Return();
  p_43 :
  Tset((ATerm)ATmakeAppl0(s_10));
  Return();
  q_43 :
  Tset((ATerm)ATmakeAppl0(s_10));
  Return();
  r_43 :
  Tset((ATerm)ATmakeAppl0(s_10));
  Return();
  s_43 :
  Tset((ATerm)ATmakeAppl0(s_10));
  Return();
  t_43 :
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(i_14);
  z_43 :
  Cpush(u_14);
  Epushd(1,3);
  MoveTop(1,1);
  goto d_42;
  d_42 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_42;
  e_42 :
  TestFunFC(s_10,&&fail,Egetd(1,2));
  Rpush(w_14);
  goto a_44;
  w_14 :
  goto v_14;
  a_44 :
  Return();
  v_14 :
  Epopd(1,3);
  goto l_14;
  u_14 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_14);
  goto z_43;
  z_14 :
  AllBuild();
  goto x_14;
  l_14 :
  Cpop();
  x_14 :
  Return();
  i_14 :
  Tpop();
  Tset((ATerm)ATmakeAppl0(s_10));
  Return();
  u_43 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  v_43 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  w_43 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  x_43 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  y_43 :
  Tset((ATerm)ATmakeAppl0(s_10));
  Return();
  b_12 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_r_11)
  Epushd(0,3);
  MoveTop(0,2);
  goto l_44;
  l_44 :
  TestFunFC(g_11,&&k_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto m_44;
  m_44 :
  TestFunFC(r_10,&&fail,Egetd(0,3));
  Rpush(g_15);
  goto g_45;
  k_15 :
  TestFunFC(f_11,&&l_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto n_44;
  n_44 :
  TestFunFC(r_10,&&fail,Egetd(0,3));
  Rpush(g_15);
  goto h_45;
  l_15 :
  TestFunFC(p_6,&&r_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto o_44;
  o_44 :
  TestFunFC(r_10,&&a_16,Egetd(0,1));
  goto p_44;
  p_44 :
  TestFunFC(r_10,&&b_16,Egetd(0,3));
  Cpush(f_16);
  Rpush(l_16);
  goto i_45;
  l_16 :
  goto d_16;
  f_16 :
  Rpush(q_16);
  goto j_45;
  q_16 :
  goto m_16;
  d_16 :
  Cpop();
  m_16 :
  goto g_15;
  b_16 :
  Rpush(g_15);
  goto j_45;
  a_16 :
  goto q_44;
  q_44 :
  TestFunFC(r_10,&&fail,Egetd(0,3));
  Rpush(g_15);
  goto i_45;
  r_15 :
  TestFunFC(u_10,&&r_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto r_44;
  r_44 :
  TestFunFC(r_10,&&fail,Egetd(0,3));
  Rpush(g_15);
  goto k_45;
  r_16 :
  TestFunFC(d_0,&&x_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto s_44;
  s_44 :
  TestFunFC(r_10,&&fail,Egetd(0,1));
  Rpush(g_15);
  goto l_45;
  x_16 :
  TestFunFC(n_12,&&y_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto t_44;
  t_44 :
  TestFunFC(r_10,&&fail,Egetd(0,1));
  Rpush(g_15);
  goto m_45;
  y_16 :
  TestFunFC(a_17,&&z_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto v_44;
  v_44 :
  TestFunFC(r_10,&&fail,Egetd(0,3));
  Rpush(g_15);
  goto n_45;
  z_16 :
  TestFunFC(c_11,&&b_17,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto w_44;
  w_44 :
  TestFunFC(r_10,&&fail,Egetd(0,3));
  Rpush(g_15);
  goto o_45;
  b_17 :
  TestFunFC(w_10,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto x_44;
  x_44 :
  TestFunFC(f_17,&&fail,Egetd(0,3));
  Rpush(g_15);
  goto p_45;
  g_15 :
  goto f_15;
  g_45 :
  Tset((ATerm)ATmakeAppl0(r_10));
  Return();
  h_45 :
  Tset((ATerm)ATmakeAppl0(s_10));
  Return();
  i_45 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  j_45 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  k_45 :
  Tset((ATerm)ATmakeAppl0(r_10));
  Return();
  l_45 :
  Tset((ATerm)ATmakeAppl0(r_10));
  Return();
  m_45 :
  Tset((ATerm)ATmakeAppl0(r_10));
  Return();
  n_45 :
  Tset((ATerm)ATmakeAppl0(r_10));
  Return();
  o_45 :
  Tset((ATerm)ATmakeAppl0(r_10));
  Return();
  p_45 :
  Tset((ATerm)ATmakeAppl0(r_10));
  Return();
  f_15 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_s_11)
  Cpush(m_17);
  Ccall(_stratego_r_11);
  goto g_17;
  m_17 :
  Ccontinue(q_17);
  Ccall(_stratego_m_11);
  goto g_17;
  q_17 :
  Ccontinue(r_17);
  Ccall(_stratego_l_11);
  goto g_17;
  r_17 :
  Ccontinue(x_17);
  Ccall(_stratego_k_11);
  goto g_17;
  x_17 :
  Epushd(0,3);
  MoveTop(0,1);
  goto r_45;
  r_45 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto s_45;
  s_45 :
  TestFunFC(n_0,&&fail,Egetd(0,2));
  Rpush(t_18);
  goto x_45;
  t_18 :
  goto r_18;
  x_45 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  r_18 :
  Epopd(0,3);
  goto y_17;
  g_17 :
  Cpop();
  y_17 :
ENDPROC

PROC(_stratego_t_11)
  Cpush(y_18);
  Ccall(_stratego_s_11);
  goto u_18;
  y_18 :
  Ccontinue(z_18);
  Ccall(_stratego_k_10);
  goto u_18;
  z_18 :
  Ccontinue(a_19);
  Epushd(0,5);
  MoveTop(0,1);
  goto z_45;
  z_45 :
  TestFunFC(p_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_46;
  a_46 :
  TestFunFC(v_10,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(c_19);
  goto n_49;
  c_19 :
  goto b_19;
  n_49 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(v_10,Egetd(0,4),(ATerm)ATmakeAppl2(p_6,Egetd(0,2),Egetd(0,5))));
  Return();
  b_19 :
  Epopd(0,5);
  goto u_18;
  a_19 :
  Ccontinue(o_19);
  Ccall(_stratego_j_10);
  goto u_18;
  o_19 :
  Epushd(0,11);
  MoveTop(0,4);
  goto x_46;
  x_46 :
  TestFunFC(d_0,&&e_20,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,11,0,4,1);
  goto y_46;
  y_46 :
  TestFunFC(d_0,&&fail,Egetd(0,11));
  MoveArg(0,1,0,11,0);
  MoveArg(0,3,0,11,1);
  Rpush(d_20);
  goto o_49;
  e_20 :
  TestFunFC(p_6,&&f_20,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,11,0,4,1);
  goto z_46;
  z_46 :
  TestFunFC(r_6,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto a_47;
  a_47 :
  TestFunFC(p_6,&&fail,Egetd(0,11));
  MoveArg(0,1,0,11,0);
  MoveArg(0,3,0,11,1);
  goto b_47;
  b_47 :
  TestFunFC(r_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_20);
  goto p_49;
  f_20 :
  TestFunFC(v_10,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,11,0,4,1);
  goto c_47;
  c_47 :
  TestFunFC(m_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,10,0,5,1);
  goto d_47;
  d_47 :
  TestFunFC(g_20,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  MoveArg(0,9,0,6,2);
  goto e_47;
  e_47 :
  TestFunFC(n_0,&&fail,Egetd(0,8));
  goto f_47;
  f_47 :
  TestFunFC(n_0,&&fail,Egetd(0,10));
  Cpush(r_20);
  Rpush(s_20);
  goto q_49;
  s_20 :
  goto q_20;
  r_20 :
  Rpush(z_20);
  goto r_49;
  z_20 :
  goto t_20;
  q_20 :
  Cpop();
  t_20 :
  goto d_20;
  d_20 :
  goto c_20;
  o_49 :
  Epushd(1,5);
  NotNULLd(0,5);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,5),(ATerm)ATmakeAppl2(q_0,Egetd(0,1),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(1,1);
  goto h_46;
  h_46 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_46;
  i_46 :
  TestFunFC(q_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto j_46;
  j_46 :
  TestFunFC(r_0,&&fail,Egetd(1,5));
  Rpush(c_21);
  goto s_49;
  c_21 :
  goto a_21;
  s_49 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(d_21);
  t_49 :
  Cpush(l_21);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_21);
  goto t_49;
  m_21 :
  AllBuild();
  goto e_21;
  l_21 :
  Ccall(_stratego_p_13);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto n_21;
  e_21 :
  Cpop();
  n_21 :
  Return();
  d_21 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(2,1),Egetd(0,3)));
  Epopd(2,1);
  Return();
  a_21 :
  Epopd(1,5);
  Return();
  p_49 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(p_6,(ATerm)ATmakeAppl1(r_6,Egetd(0,2)),Egetd(0,3)));
  Return();
  q_49 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,11);
  Tset(Egetd(0,11));
  Rpush(o_21);
  v_49 :
  Cpush(q_21);
  Epushd(3,4);
  MoveTop(3,1);
  goto l_46;
  l_46 :
  TestFunFC(d_22,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,4,3,1,1);
  goto m_46;
  m_46 :
  TestFunFC(i_22,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  goto n_46;
  n_46 :
  TestFunFC(n_0,&&fail,Egetd(3,4));
  Rpush(b_22);
  goto w_49;
  b_22 :
  goto a_22;
  w_49 :
  Move(0,7,3,3);
  NotNULLd(0,9);
  Tset(Egetd(0,9));
  Return();
  a_22 :
  Epopd(3,4);
  goto p_21;
  q_21 :
  Cpush(k_22);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,3);
  goto q_46;
  q_46 :
  TestFunFC(r_22,&&q_22,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  MoveArg(3,1,3,3,2);
  MoveArg(3,2,3,3,3);
  Rpush(p_22);
  goto x_49;
  q_22 :
  TestFunFC(s_22,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(p_22);
  goto y_49;
  p_22 :
  goto n_22;
  x_49 :
  Return();
  y_49 :
  Return();
  n_22 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  k_22 :
  IsAppl();
  OneInit();
  w_22 :
  OneNextSon();
  Cpush(w_22);
  Rpush(b_23);
  goto v_49;
  b_23 :
  Cpop();
  OneBuild();
  goto j_22;
  p_21 :
  Cpop();
  j_22 :
  Return();
  o_21 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,7);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(d_22,(ATerm)ATmakeAppl1(i_22,Egetd(0,7)),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,Egetd(1,1),(ATerm)ATmakeAppl0(r_0))));
  Cpush(c_23);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,1);
  goto u_46;
  u_46 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto v_46;
  v_46 :
  TestFunFC(q_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_46;
  w_46 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  Rpush(p_23);
  goto a_50;
  p_23 :
  goto o_23;
  a_50 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(h_24);
  b_50 :
  Cpush(j_24);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,2,4,1);
  Epopd(4,1);
  goto i_24;
  j_24 :
  IsAppl();
  OneInit();
  e_25 :
  OneNextSon();
  Cpush(e_25);
  Rpush(g_25);
  goto b_50;
  g_25 :
  Cpop();
  OneBuild();
  goto d_25;
  i_24 :
  Cpop();
  d_25 :
  Return();
  h_24 :
  Return();
  o_23 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  c_23 :
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  r_49 :
  NotNULLd(0,7);
  NotNULLd(0,9);
  NotNULLd(0,11);
  Tset((ATerm)ATmakeAppl2(v_10,(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl4(m_25,(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(n_25),(ATerm)ATmakeAppl0(n_0)),Egetd(0,7),(ATerm)ATmakeAppl0(n_0),Egetd(0,9)),(ATerm)ATmakeAppl0(n_0)),Egetd(0,11)));
  Return();
  c_20 :
  Epopd(0,11);
  goto a_20;
  u_18 :
  Cpop();
  a_20 :
ENDPROC

PROC(_stratego_u_11)
  Rpush(p_25);
  r_52 :
  Cpush(w_25);
  v_25 :
  Cpush(c_26);
  Ccall(_stratego_t_11);
  goto b_26;
  c_26 :
  Epushd(0,3);
  MoveTop(0,1);
  goto i_50;
  i_50 :
  TestFunFC(y_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(f_26);
  goto t_52;
  f_26 :
  goto e_26;
  t_52 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(j_26);
  u_52 :
  Cpush(n_26);
  Ccall(_stratego_p_13);
  goto m_26;
  n_26 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,2);
  goto g_50;
  g_50 :
  TestFunFC(w_10,&&r_26,Egetd(3,2));
  MoveArg(3,1,3,2,0);
  Rpush(q_26);
  goto w_52;
  r_26 :
  TestFunFC(r_10,&&fail,Egetd(3,2));
  Rpush(q_26);
  goto x_52;
  q_26 :
  goto p_26;
  w_52 :
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Return();
  x_52 :
  Tset((ATerm)ATmakeAppl0(f_17));
  Return();
  p_26 :
  Epopd(3,2);
  OneNextSon();
  Rpush(s_26);
  goto u_52;
  s_26 :
  AllBuild();
  goto o_26;
  m_26 :
  Cpop();
  o_26 :
  Return();
  j_26 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(w_10,(ATerm)ATmakeAppl2(t_26,Egetd(0,2),Egetd(1,1))));
  Epopd(1,1);
  Return();
  e_26 :
  Epopd(0,3);
  goto d_26;
  b_26 :
  Cpop();
  d_26 :
  Tduplinv();
  goto v_25;
  w_25 :
  AllInit();
  u_26 :
  AllNextSon(&&v_26);
  Rpush(w_26);
  goto r_52;
  w_26 :
  goto u_26;
  v_26 :
  AllBuild();
  Cpush(a_27);
  x_26 :
  Cpush(c_27);
  Ccall(_stratego_t_11);
  goto b_27;
  c_27 :
  Epushd(0,3);
  MoveTop(0,1);
  goto o_50;
  o_50 :
  TestFunFC(y_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(f_27);
  goto a_53;
  f_27 :
  goto e_27;
  a_53 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(g_27);
  b_53 :
  Cpush(i_27);
  Ccall(_stratego_p_13);
  goto h_27;
  i_27 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,2);
  goto m_50;
  m_50 :
  TestFunFC(w_10,&&c_28,Egetd(3,2));
  MoveArg(3,1,3,2,0);
  Rpush(b_28);
  goto c_53;
  c_28 :
  TestFunFC(r_10,&&fail,Egetd(3,2));
  Rpush(b_28);
  goto d_53;
  b_28 :
  goto o_27;
  c_53 :
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Return();
  d_53 :
  Tset((ATerm)ATmakeAppl0(f_17));
  Return();
  o_27 :
  Epopd(3,2);
  OneNextSon();
  Rpush(g_28);
  goto b_53;
  g_28 :
  AllBuild();
  goto j_27;
  h_27 :
  Cpop();
  j_27 :
  Return();
  g_27 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(w_10,(ATerm)ATmakeAppl2(t_26,Egetd(0,2),Egetd(1,1))));
  Epopd(1,1);
  Return();
  e_27 :
  Epopd(0,3);
  goto d_27;
  b_27 :
  Cpop();
  d_27 :
  Tduplinv();
  goto x_26;
  a_27 :
  Return();
  p_25 :
  Rpush(h_28);
  f_53 :
  Cpush(t_28);
  Epushd(0,5);
  MoveTop(0,1);
  goto y_50;
  y_50 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto z_50;
  z_50 :
  TestFunFC(p_6,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(d_29);
  goto g_53;
  d_29 :
  goto c_29;
  g_53 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_d_10);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(2,1),(ATerm)ATmakeAppl2(q_0,Egetd(0,2),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(2,2);
  goto v_50;
  v_50 :
  TestFunFC(q_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto w_50;
  w_50 :
  TestFunFC(q_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto x_50;
  x_50 :
  TestFunFC(r_0,&&fail,Egetd(2,6));
  Rpush(o_29);
  goto i_53;
  o_29 :
  goto e_29;
  i_53 :
  Epushd(3,3);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(2,3),(ATerm)ATmakeAppl2(q_0,Egetd(2,5),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_i_10);
  MoveTop(3,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(2,3),(ATerm)ATmakeAppl2(q_0,Egetd(3,1),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_i_10);
  MoveTop(3,2);
  Move(1,1,3,2);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,2),(ATerm)ATmakeAppl2(q_0,Egetd(1,1),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_i_10);
  MoveTop(3,3);
  Move(1,2,3,3);
  Cpush(p_29);
  Tdupl();
  Ccall(_stratego_p_13);
  Cpop();
  Crestore();
  Cjump();
  p_29 :
  Epopd(3,3);
  Return();
  e_29 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,4);
  NotNULLd(1,2);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(1,1),(ATerm)ATmakeAppl2(p_6,Egetd(0,4),(ATerm)ATmakeAppl2(d_0,Egetd(1,2),Egetd(0,5)))));
  Epopd(1,2);
  Return();
  c_29 :
  Epopd(0,5);
  goto l_28;
  t_28 :
  goto q_29;
  l_28 :
  Cpop();
  q_29 :
  AllInit();
  r_29 :
  AllNextSon(&&s_29);
  Rpush(t_29);
  goto f_53;
  t_29 :
  goto r_29;
  s_29 :
  AllBuild();
  Return();
  h_28 :
ENDPROC

PROC(_stratego_v_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_53;
  n_53 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  Rpush(v_29);
  goto p_53;
  v_29 :
  goto u_29;
  p_53 :
  Return();
  u_29 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_11)
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl0(z_29),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_k_13);
  Tset(MakeInt(1));
  Ccall(_stratego_s_12);
ENDPROC

PROC(_stratego_x_11)
  Epushd(0,2);
  Tdupl();
  Cpush(b_30);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Cpush(c_30);
  Tdupl();
  Rpush(g_30);
  m_54 :
  Cpush(i_30);
  Epushd(1,3);
  MoveTop(1,1);
  goto r_53;
  r_53 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto s_53;
  s_53 :
  TestFunFC(l_30,&&fail,Egetd(1,2));
  Rpush(k_30);
  goto n_54;
  k_30 :
  goto j_30;
  n_54 :
  Return();
  j_30 :
  Epopd(1,3);
  goto h_30;
  i_30 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_30);
  goto m_54;
  t_30 :
  AllBuild();
  goto s_30;
  h_30 :
  Cpop();
  s_30 :
  Return();
  g_30 :
  Cpop();
  Crestore();
  Cjump();
  c_30 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(u_30);
  o_54 :
  Cpush(w_30);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_53;
  u_53 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_53;
  v_53 :
  TestFunFC(q_32,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(e_31);
  goto p_54;
  e_31 :
  goto x_30;
  p_54 :
  Move(0,2,1,3);
  Return();
  x_30 :
  Epopd(1,4);
  goto v_30;
  w_30 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_32);
  goto o_54;
  s_32 :
  AllBuild();
  goto r_32;
  v_30 :
  Cpop();
  r_32 :
  Return();
  u_30 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(t_32);
  q_54 :
  Cpush(b_33);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_53;
  x_53 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_53;
  y_53 :
  TestFunFC(h_33,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_33);
  goto r_54;
  g_33 :
  goto f_33;
  r_54 :
  Move(0,1,1,3);
  Return();
  f_33 :
  Epopd(1,4);
  goto a_33;
  b_33 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_33);
  goto q_54;
  j_33 :
  AllBuild();
  goto i_33;
  a_33 :
  Cpop();
  i_33 :
  Return();
  t_32 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl0(z_29),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,1),(ATerm)ATmakeAppl2(m_0,ATmakeString(" ("),(ATerm)ATmakeAppl2(m_0,Egetd(0,2),(ATerm)ATmakeAppl2(m_0,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(n_0))))),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_k_13);
  goto a_30;
  b_30 :
  goto q_33;
  a_30 :
  Cpop();
  q_33 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_s_12);
  Epopd(0,2);
ENDPROC

PROC(_stratego_y_11)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_z_11)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_f_12)
  Epushd(0,1);
  Tdupl();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Cpush(t_33);
  Rpush(u_33);
  r_55 :
  Cpush(y_33);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_54;
  t_54 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_54;
  u_54 :
  TestFunFC(b_34,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(a_34);
  goto s_55;
  a_34 :
  goto z_33;
  s_55 :
  Move(0,1,1,3);
  Return();
  z_33 :
  Epopd(1,4);
  goto x_33;
  y_33 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_34);
  goto r_55;
  d_34 :
  AllBuild();
  goto c_34;
  x_33 :
  Cpop();
  c_34 :
  Return();
  u_33 :
  goto r_33;
  t_33 :
  Tset((ATerm)ATmakeAppl0(l_34));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(l_34));
  MoveTop(0,1);
  Tpop();
  goto e_34;
  r_33 :
  Cpop();
  e_34 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,1),(ATerm)ATmakeAppl2(q_0,Egetd(1,1),(ATerm)ATmakeAppl0(r_0))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  Cpush(t_34);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(u_34);
  x_55 :
  Cpush(z_34);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_55;
  a_55 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_55;
  b_55 :
  TestFunFC(j_35,&&fail,Egetd(1,2));
  Rpush(b_35);
  goto y_55;
  b_35 :
  goto a_35;
  y_55 :
  Return();
  a_35 :
  Epopd(1,3);
  goto y_34;
  z_34 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_35);
  goto x_55;
  r_35 :
  AllBuild();
  goto k_35;
  y_34 :
  Cpop();
  k_35 :
  Return();
  u_34 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_11);
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  goto m_34;
  t_34 :
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_11);
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  goto s_35;
  m_34 :
  Cpop();
  s_35 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_12)
  _ST_dtime();
ENDPROC

PROC(_stratego_q_12)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_r_12)
  Epushd(0,3);
  Tdupl();
  Cpush(x_35);
  Rpush(g_36);
  s_56 :
  Cpush(i_36);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_56;
  a_56 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_56;
  b_56 :
  TestFunFC(n_36,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(m_36);
  goto t_56;
  m_36 :
  goto l_36;
  t_56 :
  Move(0,1,1,3);
  Return();
  l_36 :
  Epopd(1,4);
  goto h_36;
  i_36 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_36);
  goto s_56;
  r_36 :
  AllBuild();
  goto q_36;
  h_36 :
  Cpop();
  q_36 :
  Return();
  g_36 :
  goto w_35;
  x_35 :
  Tset((ATerm)ATmakeAppl0(t_36));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(t_36));
  MoveTop(0,1);
  Tpop();
  goto s_36;
  w_35 :
  Cpop();
  s_36 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_q_12);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,2),(ATerm)ATmakeAppl2(q_0,Egetd(0,3),(ATerm)ATmakeAppl0(r_0))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_s_12)
  _ST_exit();
ENDPROC

PROC(_stratego_k_13)
  _ST_printnl();
ENDPROC

PROC(_stratego_l_13)
  Epushd(0,1);
  Tdupl();
  Rpush(u_36);
  g_57 :
  Cpush(y_36);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_56;
  z_56 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_57;
  a_57 :
  TestFunFC(h_33,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(a_37);
  goto h_57;
  a_37 :
  goto z_36;
  h_57 :
  Move(0,1,1,3);
  Return();
  z_36 :
  Epopd(1,4);
  goto v_36;
  y_36 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_37);
  goto g_57;
  g_37 :
  AllBuild();
  goto d_37;
  v_36 :
  Cpop();
  d_37 :
  Return();
  u_36 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl0(z_29),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,ATmakeString("usage : "),(ATerm)ATmakeAppl2(m_0,Egetd(0,1),(ATerm)ATmakeAppl2(m_0,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(n_0)))),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_k_13);
  Tset(MakeInt(1));
  Ccall(_stratego_s_12);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_57;
  j_57 :
  TestFunFC(j_37,&&fail,Egetd(0,1));
  Rpush(i_37);
  goto l_57;
  i_37 :
  goto h_37;
  l_57 :
  Return();
  h_37 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_13)
  Rpush(k_37);
  q_57 :
  Cpush(m_37);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Cpush(o_37);
  Ccall(_stratego_m_13);
  goto n_37;
  o_37 :
  Epushd(0,2);
  MoveTop(0,1);
  goto n_57;
  n_57 :
  TestFunFC(s_37,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(r_37);
  goto r_57;
  r_37 :
  goto q_37;
  r_57 :
  Return();
  q_37 :
  Epopd(0,2);
  goto p_37;
  n_37 :
  Cpop();
  p_37 :
  OneNextSon();
  AllBuild();
  goto l_37;
  m_37 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_38);
  goto q_57;
  e_38 :
  AllBuild();
  goto t_37;
  l_37 :
  Cpop();
  t_37 :
  Return();
  k_37 :
  Ccall(_stratego_l_13);
ENDPROC

PROC(_stratego_o_13)
  Epushd(0,5);
  MoveTop(0,3);
  goto f_60;
  f_60 :
  TestFunFC(m_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto g_60;
  g_60 :
  TestFunFC(m_0,&&h_38,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(j_38);
  Rpush(k_38);
  goto y_63;
  k_38 :
  goto i_38;
  j_38 :
  Ccontinue(l_38);
  Rpush(m_38);
  goto z_63;
  m_38 :
  goto i_38;
  l_38 :
  Ccontinue(n_38);
  Rpush(o_38);
  goto a_64;
  o_38 :
  goto i_38;
  n_38 :
  Ccontinue(p_38);
  Rpush(q_38);
  goto b_64;
  q_38 :
  goto i_38;
  p_38 :
  Ccontinue(r_38);
  Rpush(s_38);
  goto c_64;
  s_38 :
  goto i_38;
  r_38 :
  Ccontinue(t_38);
  Rpush(u_38);
  goto d_64;
  u_38 :
  goto i_38;
  t_38 :
  Ccontinue(g_39);
  Rpush(h_39);
  goto e_64;
  h_39 :
  goto i_38;
  g_39 :
  Ccontinue(i_39);
  Rpush(j_39);
  goto f_64;
  j_39 :
  goto i_38;
  i_39 :
  Ccontinue(k_39);
  Rpush(l_39);
  goto g_64;
  l_39 :
  goto i_38;
  k_39 :
  Ccontinue(c_40);
  Rpush(d_40);
  goto h_64;
  d_40 :
  goto i_38;
  c_40 :
  Ccontinue(e_40);
  Rpush(f_40);
  goto i_64;
  f_40 :
  goto i_38;
  e_40 :
  Ccontinue(g_40);
  Rpush(h_40);
  goto j_64;
  h_40 :
  goto i_38;
  g_40 :
  Ccontinue(i_40);
  Rpush(j_40);
  goto k_64;
  j_40 :
  goto i_38;
  i_40 :
  Ccontinue(q_40);
  Rpush(r_40);
  goto l_64;
  r_40 :
  goto i_38;
  q_40 :
  Rpush(c_41);
  goto m_64;
  c_41 :
  goto s_40;
  i_38 :
  Cpop();
  s_40 :
  goto g_38;
  h_38 :
  Cpush(e_41);
  Rpush(f_41);
  goto y_63;
  f_41 :
  goto d_41;
  e_41 :
  Ccontinue(g_41);
  Rpush(h_41);
  goto z_63;
  h_41 :
  goto d_41;
  g_41 :
  Ccontinue(i_41);
  Rpush(j_41);
  goto a_64;
  j_41 :
  goto d_41;
  i_41 :
  Ccontinue(k_41);
  Rpush(o_41);
  goto b_64;
  o_41 :
  goto d_41;
  k_41 :
  Ccontinue(p_41);
  Rpush(q_41);
  goto c_64;
  q_41 :
  goto d_41;
  p_41 :
  Ccontinue(r_41);
  Rpush(s_41);
  goto i_64;
  s_41 :
  goto d_41;
  r_41 :
  Ccontinue(t_41);
  Rpush(u_41);
  goto j_64;
  u_41 :
  goto d_41;
  t_41 :
  Ccontinue(v_41);
  Rpush(w_41);
  goto k_64;
  w_41 :
  goto d_41;
  v_41 :
  Ccontinue(x_41);
  Rpush(y_41);
  goto l_64;
  y_41 :
  goto d_41;
  x_41 :
  Rpush(a_42);
  goto m_64;
  a_42 :
  goto z_41;
  d_41 :
  Cpop();
  z_41 :
  goto g_38;
  g_38 :
  goto f_38;
  y_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_58;
  i_58 :
  TestStr(1,1,"-S",&&fail);
  Rpush(c_42);
  goto n_64;
  c_42 :
  goto b_42;
  n_64 :
  Return();
  b_42 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(l_30));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(l_30),Egetd(0,5)));
  Return();
  z_63 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_58;
  l_58 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(z_42);
  goto p_64;
  z_42 :
  goto y_42;
  p_64 :
  Return();
  y_42 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(l_30));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(l_30),Egetd(0,5)));
  Return();
  a_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_58;
  o_58 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(b_43);
  goto r_64;
  b_43 :
  goto a_43;
  r_64 :
  Return();
  a_43 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(c_43));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(c_43),Egetd(0,5)));
  Return();
  b_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_58;
  r_58 :
  TestStr(1,1,"-v",&&fail);
  Rpush(h_43);
  goto t_64;
  h_43 :
  goto d_43;
  t_64 :
  Return();
  d_43 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(i_43));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(i_43),Egetd(0,5)));
  Return();
  c_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_58;
  u_58 :
  TestStr(1,1,"--version",&&fail);
  Rpush(k_43);
  goto v_64;
  k_43 :
  goto j_43;
  v_64 :
  Return();
  j_43 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(i_43));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(i_43),Egetd(0,5)));
  Return();
  d_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_58;
  x_58 :
  TestStr(1,1,"@version",&&fail);
  Rpush(c_44);
  goto x_64;
  c_44 :
  goto b_44;
  x_64 :
  Return();
  b_44 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(d_44,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(d_44,Egetd(0,1)),Egetd(0,2)));
  Return();
  e_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_59;
  b_59 :
  TestStr(1,1,"-i",&&fail);
  Rpush(f_44);
  goto a_65;
  f_44 :
  goto e_44;
  a_65 :
  Return();
  e_44 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(n_36,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(n_36,Egetd(0,1)),Egetd(0,2)));
  Return();
  f_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_59;
  f_59 :
  TestStr(1,1,"--input",&&fail);
  Rpush(h_44);
  goto d_65;
  h_44 :
  goto g_44;
  d_65 :
  Return();
  g_44 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(n_36,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(n_36,Egetd(0,1)),Egetd(0,2)));
  Return();
  g_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_59;
  j_59 :
  TestStr(1,1,"-o",&&fail);
  Rpush(j_44);
  goto g_65;
  j_44 :
  goto i_44;
  g_65 :
  Return();
  i_44 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(b_34,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(b_34,Egetd(0,1)),Egetd(0,2)));
  Return();
  h_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_59;
  n_59 :
  TestStr(1,1,"--output",&&fail);
  Rpush(u_44);
  goto j_65;
  u_44 :
  goto k_44;
  j_65 :
  Return();
  k_44 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(b_34,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(b_34,Egetd(0,1)),Egetd(0,2)));
  Return();
  i_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_59;
  r_59 :
  TestStr(1,1,"-b",&&fail);
  Rpush(c_45);
  goto m_65;
  c_45 :
  goto b_45;
  m_65 :
  Return();
  b_45 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(j_35));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(j_35),Egetd(0,5)));
  Return();
  j_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_59;
  u_59 :
  TestStr(1,1,"-s",&&fail);
  Rpush(e_45);
  goto o_65;
  e_45 :
  goto d_45;
  o_65 :
  Return();
  d_45 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(f_45));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(f_45),Egetd(0,5)));
  Return();
  k_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_59;
  x_59 :
  TestStr(1,1,"--help",&&fail);
  Rpush(w_45);
  goto q_65;
  w_45 :
  goto q_45;
  q_65 :
  Return();
  q_45 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(j_37));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(j_37),Egetd(0,5)));
  Return();
  l_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_60;
  a_60 :
  TestStr(1,1,"-h",&&fail);
  Rpush(b_46);
  goto s_65;
  b_46 :
  goto y_45;
  s_65 :
  Return();
  y_45 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(j_37));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(j_37),Egetd(0,5)));
  Return();
  m_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_60;
  d_60 :
  TestStr(1,1,"-?",&&fail);
  Rpush(d_46);
  goto u_65;
  d_46 :
  goto c_46;
  u_65 :
  Return();
  c_46 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(j_37));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(j_37),Egetd(0,5)));
  Return();
  f_38 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_65;
  x_65 :
  TestFunFC(n_0,&&fail,Egetd(0,1));
  Rpush(f_46);
  goto z_65;
  f_46 :
  goto e_46;
  z_65 :
  Return();
  e_46 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_13)
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(h_33,Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(g_46);
  z_66 :
  Cpush(o_46);
  Cpush(r_46);
  Ccall(_stratego_p_13);
  goto p_46;
  r_46 :
  Ccall(_stratego_o_13);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_46);
  goto z_66;
  t_46 :
  AllBuild();
  goto s_46;
  p_46 :
  Cpop();
  s_46 :
  goto k_46;
  o_46 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_66;
  c_66 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(n_47);
  goto a_67;
  n_47 :
  goto m_47;
  a_67 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(s_37,Egetd(0,2)),Egetd(0,3)));
  Return();
  m_47 :
  Epopd(0,3);
  goto l_47;
  k_46 :
  Cpop();
  l_47 :
  Return();
  g_46 :
  AllBuild();
  Cpush(a_48);
  Ccall(_stratego_n_13);
  goto z_47;
  a_48 :
  Ccontinue(b_48);
  Epushd(0,6);
  Ccall(_stratego_r_12);
  Tdupl();
  Ccall(_stratego_g_12);
  Tpop();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(h_48);
  b_67 :
  Cpush(k_48);
  Ccall(_stratego_p_13);
  goto i_48;
  k_48 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  TestFunTop(g_20);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_11);
  AllBuild();
  OneNextSon();
  Rpush(m_48);
  goto b_67;
  m_48 :
  AllBuild();
  goto l_48;
  i_48 :
  Cpop();
  l_48 :
  Return();
  h_48 :
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_g_12);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto f_66;
  f_66 :
  TestFunFC(q_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto g_66;
  g_66 :
  TestFunFC(q_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto h_66;
  h_66 :
  TestFunFC(r_0,&&fail,Egetd(0,6));
  Rpush(o_48);
  goto d_67;
  o_48 :
  goto n_48;
  d_67 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(q_32,Egetd(0,1)),Egetd(0,3)),(ATerm)ATmakeAppl2(q_0,Egetd(0,5),(ATerm)ATmakeAppl0(r_0))));
  Return();
  n_48 :
  Ccall(_stratego_f_12);
  Ccall(_stratego_x_11);
  Epopd(0,6);
  goto z_47;
  b_48 :
  Ccall(_stratego_w_11);
  goto p_48;
  z_47 :
  Cpop();
  p_48 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_q_13);
ENDPROC

DOIT

