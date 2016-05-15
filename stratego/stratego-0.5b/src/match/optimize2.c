#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,p_45);
VARDECL(AFun,z_44);
VARDECL(AFun,u_44);
VARDECL(AFun,i_44);
VARDECL(AFun,x_38);
VARDECL(AFun,z_37);
VARDECL(AFun,g_37);
VARDECL(AFun,u_36);
VARDECL(AFun,r_34);
VARDECL(AFun,d_34);
VARDECL(AFun,y_33);
VARDECL(AFun,i_33);
VARDECL(AFun,c_32);
VARDECL(AFun,w_30);
VARDECL(AFun,t_29);
VARDECL(AFun,n_27);
VARDECL(AFun,j_27);
VARDECL(AFun,t_26);
VARDECL(AFun,s_26);
VARDECL(AFun,l_26);
VARDECL(AFun,j_26);
VARDECL(AFun,v_24);
VARDECL(AFun,k_22);
VARDECL(AFun,q_21);
VARDECL(AFun,m_17);
VARDECL(AFun,h_17);
VARDECL(AFun,f_17);
VARDECL(AFun,d_17);
VARDECL(AFun,w_16);
VARDECL(AFun,f_15);
VARDECL(AFun,d_15);
VARDECL(AFun,a_15);
VARDECL(AFun,g_14);
VARDECL(AFun,x_13);
VARDECL(AFun,w_13);
VARDECL(AFun,v_13);
VARDECL(AFun,u_13);
VARDECL(AFun,t_13);
VARDECL(AFun,s_13);
VARDECL(AFun,j_13);
VARDECL(AFun,g_13);
VARDECL(AFun,e_13);
VARDECL(AFun,a_13);
VARDECL(AFun,x_12);
VARDECL(AFun,u_12);
VARDECL(AFun,o_12);
VARDECL(AFun,x_8);
VARDECL(AFun,v_8);
VARDECL(AFun,u_8);
VARDECL(AFun,y_2);
VARDECL(AFun,r_0);
VARDECL(AFun,q_0);
VARDECL(AFun,n_0);
VARDECL(AFun,m_0);
VARDECL(AFun,l_0);
VARDECL(AFun,f_0);
VARDECL(AFun,e_0);
VARDECL(AFun,d_0);
PROCDECL(_stratego_r_9);
PROCDECL(_stratego_s_9);
PROCDECL(_stratego_t_9);
PROCDECL(_stratego_x_9);
PROCDECL(_stratego_y_9);
PROCDECL(_stratego_z_9);
PROCDECL(_stratego_a_10);
PROCDECL(_stratego_b_10);
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
PROCDECL(_stratego_a_12);
PROCDECL(_stratego_b_12);
PROCDECL(_stratego_c_12);
PROCDECL(_stratego_d_12);
PROCDECL(_stratego_e_12);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(p_45,ATmakeAFun("Statistics",0,0));
  MOVE(z_44,ATmakeAFun("DeclVersion",1,0));
  MOVE(u_44,ATmakeAFun("Version",0,0));
  MOVE(i_44,ATmakeAFun("Verbose",0,0));
  MOVE(x_38,ATmakeAFun("Undefined",1,0));
  MOVE(z_37,ATmakeAFun("Help",0,0));
  MOVE(g_37,ATmakeAFun("stdin",0,0));
  MOVE(u_36,ATmakeAFun("Input",1,0));
  MOVE(r_34,ATmakeAFun("Binary",0,0));
  MOVE(d_34,ATmakeAFun("stdout",0,0));
  MOVE(y_33,ATmakeAFun("Output",1,0));
  MOVE(i_33,ATmakeAFun("Program",1,0));
  MOVE(c_32,ATmakeAFun("Runtime",1,0));
  MOVE(w_30,ATmakeAFun("Silent",0,0));
  MOVE(t_29,ATmakeAFun("stderr",0,0));
  MOVE(n_27,ATmakeAFun("DontInline",0,0));
  MOVE(j_27,ATmakeAFun("SDef",4,0));
  MOVE(t_26,ATmakeAFun("Matrix",2,0));
  MOVE(s_26,ATmakeAFun("Case",4,0));
  MOVE(l_26,ATmakeAFun("SVar",1,0));
  MOVE(j_26,ATmakeAFun("Call",2,0));
  MOVE(v_24,ATmakeAFun("SDef",3,0));
  MOVE(k_22,ATmakeAFun("Wld",0,0));
  MOVE(q_21,ATmakeAFun("All",1,0));
  MOVE(m_17,ATmakeAFun("Cong",2,0));
  MOVE(h_17,ATmakeAFun("Path",2,0));
  MOVE(f_17,ATmakeAFun("One",1,0));
  MOVE(d_17,ATmakeAFun("Some",1,0));
  MOVE(w_16,ATmakeAFun("Rec",2,0));
  MOVE(f_15,ATmakeAFun("Test",1,0));
  MOVE(d_15,ATmakeAFun("Not",1,0));
  MOVE(a_15,ATmakeAFun("Where",1,0));
  MOVE(g_14,ATmakeAFun("Match",1,0));
  MOVE(x_13,ATmakeAFun("Let",2,0));
  MOVE(w_13,ATmakeAFun("LChoice",2,0));
  MOVE(v_13,ATmakeAFun("Choice",2,0));
  MOVE(u_13,ATmakeAFun("Fail",0,0));
  MOVE(t_13,ATmakeAFun("Id",0,0));
  MOVE(s_13,ATmakeAFun("BAM",3,0));
  MOVE(j_13,ATmakeAFun("AM",2,0));
  MOVE(g_13,ATmakeAFun("MA",2,0));
  MOVE(e_13,ATmakeAFun("BA",2,0));
  MOVE(a_13,ATmakeAFun("Lets",2,0));
  MOVE(x_12,ATmakeAFun("LChoices",1,0));
  MOVE(u_12,ATmakeAFun("Choices",1,0));
  MOVE(o_12,ATmakeAFun("Seqs",1,0));
  MOVE(x_8,ATmakeAFun("Assign",2,0));
  MOVE(v_8,ATmakeAFun("Assign",1,0));
  MOVE(u_8,ATmakeAFun("Build",1,0));
  MOVE(y_2,ATmakeAFun("Seq",2,0));
  MOVE(r_0,ATmakeAFun("TNil",0,0));
  MOVE(q_0,ATmakeAFun("TCons",2,0));
  MOVE(n_0,ATmakeAFun("Nil",0,0));
  MOVE(m_0,ATmakeAFun("Cons",2,0));
  MOVE(l_0,ATmakeAFun("Var",1,0));
  MOVE(f_0,ATmakeAFun("Rule",3,0));
  MOVE(e_0,ATmakeAFun("LRule",1,0));
  MOVE(d_0,ATmakeAFun("Scope",2,0));
ENDPROC

PROC(_stratego_r_9)
  Epushd(0,6);
  MoveTop(0,2);
  goto c_8;
  c_8 :
  TestFunFC(d_0,&&c_0,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(b_0);
  goto a_9;
  c_0 :
  TestFunFC(e_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto d_8;
  d_8 :
  TestFunFC(f_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(b_0);
  goto b_9;
  b_0 :
  goto a_0;
  a_9 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  b_9 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_s_9);
  Return();
  a_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_s_9)
  Rpush(g_0);
  b_17 :
  Cpush(i_0);
  Epushd(0,2);
  MoveTop(0,1);
  goto k_9;
  k_9 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(k_0);
  goto c_17;
  k_0 :
  goto j_0;
  c_17 :
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
  Ccall(_stratego_r_9);
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
  goto b_17;
  p_0 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(1,2),(ATerm)ATmakeAppl2(q_0,Egetd(0,1),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_c_10);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto v_9;
  v_9 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_9;
  w_9 :
  TestFunFC(q_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto l_10;
  l_10 :
  TestFunFC(r_0,&&fail,Egetd(1,5));
  Rpush(t_0);
  goto i_17;
  t_0 :
  goto s_0;
  i_17 :
  Move(0,3,1,4);
  Return();
  s_0 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(u_0);
  j_17 :
  Cpush(w_0);
  Ccall(_stratego_n_13);
  Tset((ATerm)ATmakeAppl0(n_0));
  goto v_0;
  w_0 :
  Epushd(1,3);
  MoveTop(1,1);
  goto h_13;
  h_13 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(z_0);
  goto k_17;
  z_0 :
  goto y_0;
  k_17 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(a_1);
  goto j_17;
  a_1 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(1,2),(ATerm)ATmakeAppl2(q_0,Egetd(2,1),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(2,2);
  goto z_11;
  z_11 :
  TestFunFC(q_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto b_13;
  b_13 :
  TestFunFC(q_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto c_13;
  c_13 :
  TestFunFC(r_0,&&fail,Egetd(2,6));
  Rpush(c_1);
  goto n_17;
  c_1 :
  goto b_1;
  n_17 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(d_1);
  o_17 :
  Cpush(f_1);
  Ccall(_stratego_n_13);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto e_1;
  f_1 :
  Ccontinue(g_1);
  Epushd(3,3);
  MoveTop(3,1);
  goto y_11;
  y_11 :
  TestFunFC(m_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(i_1);
  goto p_17;
  i_1 :
  goto h_1;
  p_17 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(j_1);
  q_17 :
  Cpush(l_1);
  Epushd(4,3);
  MoveTop(4,1);
  goto x_11;
  x_11 :
  TestFunFC(m_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(n_1);
  goto r_17;
  n_1 :
  goto m_1;
  r_17 :
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
  goto q_17;
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
  goto o_17;
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
  goto o_17;
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
  goto p_13;
  p_13 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_13;
  q_13 :
  TestFunFC(q_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto r_13;
  r_13 :
  TestFunFC(r_0,&&fail,Egetd(1,5));
  Rpush(v_1);
  goto t_17;
  v_1 :
  goto u_1;
  t_17 :
  Move(0,2,1,4);
  Return();
  u_1 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(w_1);
  u_17 :
  Cpush(y_1);
  Ccall(_stratego_n_13);
  Tset((ATerm)ATmakeAppl0(n_0));
  goto x_1;
  y_1 :
  Epushd(1,3);
  MoveTop(1,1);
  goto d_14;
  d_14 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(b_2);
  goto v_17;
  b_2 :
  goto a_2;
  v_17 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(c_2);
  goto b_17;
  c_2 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(d_2);
  goto u_17;
  d_2 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(2,1),(ATerm)ATmakeAppl2(q_0,Egetd(2,2),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(2,3);
  goto a_14;
  a_14 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto b_14;
  b_14 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto c_14;
  c_14 :
  TestFunFC(r_0,&&fail,Egetd(2,7));
  Rpush(f_2);
  goto y_17;
  f_2 :
  goto e_2;
  y_17 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(g_2);
  z_17 :
  Cpush(i_2);
  Ccall(_stratego_n_13);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto h_2;
  i_2 :
  Ccontinue(j_2);
  Epushd(3,3);
  MoveTop(3,1);
  goto z_13;
  z_13 :
  TestFunFC(m_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_2);
  goto a_18;
  l_2 :
  goto k_2;
  a_18 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(m_2);
  b_18 :
  Cpush(o_2);
  Epushd(4,3);
  MoveTop(4,1);
  goto y_13;
  y_13 :
  TestFunFC(m_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(q_2);
  goto c_18;
  q_2 :
  goto p_2;
  c_18 :
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
  goto b_18;
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
  goto z_17;
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
  goto z_17;
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

PROC(_stratego_t_9)
  Epushd(0,7);
  MoveTop(0,3);
  goto f_18;
  f_18 :
  TestFunFC(y_2,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto g_18;
  g_18 :
  TestFunFC(d_0,&&z_2,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto h_18;
  h_18 :
  TestFunFC(d_0,&&a_3,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Cpush(c_3);
  Rpush(d_3);
  goto w_18;
  d_3 :
  goto b_3;
  c_3 :
  Rpush(f_3);
  goto x_18;
  f_3 :
  goto e_3;
  b_3 :
  Cpop();
  e_3 :
  goto x_2;
  a_3 :
  Rpush(x_2);
  goto x_18;
  z_2 :
  goto i_18;
  i_18 :
  TestFunFC(d_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(x_2);
  goto w_18;
  x_2 :
  goto w_2;
  w_18 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(0,1),(ATerm)ATmakeAppl2(y_2,Egetd(0,2),Egetd(0,5))));
  Return();
  x_18 :
  NotNULLd(0,6);
  NotNULLd(0,4);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(0,6),(ATerm)ATmakeAppl2(y_2,Egetd(0,4),Egetd(0,7))));
  Return();
  w_2 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_x_9)
  Rpush(g_3);
  a_21 :
  Cpush(i_3);
  h_3 :
  Cpush(k_3);
  Ccall(_stratego_k_10);
  goto j_3;
  k_3 :
  Ccall(_stratego_t_9);
  goto l_3;
  j_3 :
  Cpop();
  l_3 :
  Tduplinv();
  goto h_3;
  i_3 :
  AllInit();
  m_3 :
  AllNextSon(&&n_3);
  Rpush(o_3);
  goto a_21;
  o_3 :
  goto m_3;
  n_3 :
  AllBuild();
  Cpush(q_3);
  p_3 :
  Cpush(s_3);
  Ccall(_stratego_k_10);
  goto r_3;
  s_3 :
  Ccall(_stratego_t_9);
  goto t_3;
  r_3 :
  Cpop();
  t_3 :
  Tduplinv();
  goto p_3;
  q_3 :
  Return();
  g_3 :
  Rpush(u_3);
  f_21 :
  Cpush(w_3);
  Epushd(0,3);
  MoveTop(0,1);
  goto p_19;
  p_19 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(y_3);
  goto g_21;
  y_3 :
  goto x_3;
  g_21 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_s_9);
  MoveTop(2,1);
  NotNULLd(0,2);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,2),(ATerm)ATmakeAppl2(q_0,Egetd(2,1),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(2,2);
  goto e_19;
  e_19 :
  TestFunFC(q_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto f_19;
  f_19 :
  TestFunFC(q_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto g_19;
  g_19 :
  TestFunFC(r_0,&&fail,Egetd(2,6));
  Rpush(a_4);
  goto i_21;
  a_4 :
  goto z_3;
  i_21 :
  Epushd(3,2);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(2,3),(ATerm)ATmakeAppl2(q_0,Egetd(2,5),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_c_10);
  MoveTop(3,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(2,3),(ATerm)ATmakeAppl2(q_0,Egetd(3,1),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_c_10);
  MoveTop(3,2);
  Move(1,1,3,2);
  Cpush(b_4);
  Tdupl();
  Epushd(4,1);
  MoveTop(4,1);
  Move(0,2,4,1);
  Epopd(4,1);
  Cpop();
  Crestore();
  Cjump();
  b_4 :
  Epopd(3,2);
  Return();
  z_3 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(1,1),Egetd(0,3)));
  Cpush(d_4);
  Epushd(2,5);
  MoveTop(2,1);
  goto n_19;
  n_19 :
  TestFunFC(d_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_19;
  o_19 :
  TestFunFC(d_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  Rpush(f_4);
  goto m_21;
  f_4 :
  goto e_4;
  m_21 :
  Epushd(3,5);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(2,2),(ATerm)ATmakeAppl2(q_0,Egetd(2,4),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(3,1);
  goto k_19;
  k_19 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto l_19;
  l_19 :
  TestFunFC(q_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto m_19;
  m_19 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  Rpush(h_4);
  goto n_21;
  h_4 :
  goto g_4;
  n_21 :
  Epushd(4,1);
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Rpush(i_4);
  o_21 :
  Cpush(k_4);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_4);
  goto o_21;
  l_4 :
  AllBuild();
  goto j_4;
  k_4 :
  Ccall(_stratego_n_13);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  goto m_4;
  j_4 :
  Cpop();
  m_4 :
  Return();
  i_4 :
  MoveTop(4,1);
  NotNULLd(4,1);
  NotNULLd(2,5);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(4,1),Egetd(2,5)));
  Epopd(4,1);
  Return();
  g_4 :
  Epopd(3,5);
  Return();
  e_4 :
  Epopd(2,5);
  goto c_4;
  d_4 :
  goto n_4;
  c_4 :
  Cpop();
  n_4 :
  Epopd(1,1);
  Return();
  x_3 :
  Epopd(0,3);
  goto v_3;
  w_3 :
  goto o_4;
  v_3 :
  Cpop();
  o_4 :
  AllInit();
  p_4 :
  AllNextSon(&&q_4);
  Rpush(r_4);
  goto f_21;
  r_4 :
  goto p_4;
  q_4 :
  AllBuild();
  Return();
  u_3 :
ENDPROC

PROC(_stratego_y_9)
  Rpush(s_4);
  o_22 :
  Epushd(0,11);
  MoveTop(0,5);
  goto s_21;
  s_21 :
  TestFunFC(q_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto t_21;
  t_21 :
  TestFunFC(q_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto u_21;
  u_21 :
  TestFunFC(m_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto v_21;
  v_21 :
  TestFunFC(r_0,&&fail,Egetd(0,11));
  goto w_21;
  w_21 :
  TestFunFC(q_0,&&v_4,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto x_21;
  x_21 :
  TestFunFC(q_0,&&w_4,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto y_21;
  y_21 :
  TestFunFC(r_0,&&x_4,Egetd(0,4));
  Cpush(z_4);
  Rpush(a_5);
  goto p_22;
  a_5 :
  goto y_4;
  z_4 :
  Rpush(c_5);
  goto q_22;
  c_5 :
  goto b_5;
  y_4 :
  Cpop();
  b_5 :
  goto u_4;
  x_4 :
  Rpush(u_4);
  goto q_22;
  w_4 :
  Rpush(u_4);
  goto q_22;
  v_4 :
  Rpush(u_4);
  goto q_22;
  u_4 :
  goto t_4;
  p_22 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  q_22 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,6),(ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl0(r_0))));
  Rpush(d_5);
  goto o_22;
  d_5 :
  Return();
  t_4 :
  Epopd(0,11);
  Return();
  s_4 :
ENDPROC

PROC(_stratego_z_9)
  Epushd(0,7);
  MoveTop(0,1);
  goto i_23;
  i_23 :
  TestFunFC(q_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto j_23;
  j_23 :
  TestFunFC(q_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto k_23;
  k_23 :
  TestFunFC(r_0,&&g_5,Egetd(0,5));
  Rpush(f_5);
  goto w_24;
  g_5 :
  TestFunFC(q_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto l_23;
  l_23 :
  TestFunFC(r_0,&&fail,Egetd(0,7));
  Rpush(f_5);
  goto x_24;
  f_5 :
  goto e_5;
  w_24 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  x_24 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,2),(ATerm)ATmakeAppl2(q_0,Egetd(0,4),(ATerm)ATmakeAppl0(r_0))));
  Rpush(h_5);
  y_24 :
  Epushd(2,9);
  MoveTop(2,1);
  goto z_22;
  z_22 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto a_23;
  a_23 :
  TestFunFC(n_0,&&k_5,Egetd(2,2));
  goto b_23;
  b_23 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto c_23;
  c_23 :
  TestFunFC(n_0,&&fail,Egetd(2,6));
  goto d_23;
  d_23 :
  TestFunFC(r_0,&&fail,Egetd(2,9));
  Rpush(j_5);
  goto z_24;
  k_5 :
  TestFunFC(m_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto e_23;
  e_23 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto f_23;
  f_23 :
  TestFunFC(m_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto g_23;
  g_23 :
  TestFunFC(r_0,&&fail,Egetd(2,9));
  Rpush(j_5);
  goto a_25;
  j_5 :
  goto i_5;
  z_24 :
  Tset((ATerm)ATmakeAppl0(n_0));
  Return();
  a_25 :
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
  Rpush(m_5);
  goto y_24;
  m_5 :
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto w_22;
  w_22 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto x_22;
  x_22 :
  TestFunFC(q_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto y_22;
  y_22 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  Rpush(n_5);
  goto b_25;
  n_5 :
  goto l_5;
  b_25 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(m_0,Egetd(3,2),Egetd(3,4)));
  Return();
  l_5 :
  Epopd(3,5);
  Return();
  i_5 :
  Epopd(2,9);
  Return();
  h_5 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(1,1),(ATerm)ATmakeAppl2(q_0,Egetd(0,6),(ATerm)ATmakeAppl0(r_0))));
  Epopd(1,1);
  Return();
  e_5 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_a_10)
  Epushd(0,5);
  Ccall(_stratego_z_9);
  MoveTop(0,1);
  goto j_25;
  j_25 :
  TestFunFC(q_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto k_25;
  k_25 :
  TestFunFC(q_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto l_25;
  l_25 :
  TestFunFC(r_0,&&fail,Egetd(0,5));
  Rpush(p_5);
  goto h_26;
  p_5 :
  goto o_5;
  h_26 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(q_5);
  i_26 :
  Cpush(s_5);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto i_25;
  i_25 :
  TestFunFC(l_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(u_5);
  goto k_26;
  u_5 :
  goto t_5;
  k_26 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Move(1,2,2,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  t_5 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(1,2),(ATerm)ATmakeAppl2(q_0,Egetd(1,3),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_y_9);
  Epopd(1,3);
  goto r_5;
  s_5 :
  AllInit();
  w_5 :
  AllNextSon(&&x_5);
  Rpush(y_5);
  goto i_26;
  y_5 :
  goto w_5;
  x_5 :
  AllBuild();
  goto v_5;
  r_5 :
  Cpop();
  v_5 :
  Return();
  q_5 :
  Return();
  o_5 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_b_10)
  Epushd(0,7);
  MoveTop(0,1);
  goto g_28;
  g_28 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto h_28;
  h_28 :
  TestFunFC(q_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto i_28;
  i_28 :
  TestFunFC(q_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto j_28;
  j_28 :
  TestFunFC(r_0,&&fail,Egetd(0,6));
  Rpush(a_6);
  goto k_30;
  a_6 :
  goto z_5;
  k_30 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto p_26;
  p_26 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto y_26;
  y_26 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto z_26;
  z_26 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  Rpush(c_6);
  goto l_30;
  c_6 :
  goto b_6;
  l_30 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  b_6 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto k_27;
  k_27 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto l_27;
  l_27 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto m_27;
  m_27 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  Rpush(e_6);
  goto m_30;
  e_6 :
  goto d_6;
  m_30 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  d_6 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(1,2),(ATerm)ATmakeAppl2(q_0,Egetd(1,3),(ATerm)ATmakeAppl0(r_0))));
  Rpush(f_6);
  n_30 :
  Epushd(2,9);
  MoveTop(2,1);
  goto t_27;
  t_27 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto u_27;
  u_27 :
  TestFunFC(n_0,&&i_6,Egetd(2,2));
  goto v_27;
  v_27 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto w_27;
  w_27 :
  TestFunFC(n_0,&&fail,Egetd(2,6));
  goto x_27;
  x_27 :
  TestFunFC(r_0,&&fail,Egetd(2,9));
  Rpush(h_6);
  goto o_30;
  i_6 :
  TestFunFC(m_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto y_27;
  y_27 :
  TestFunFC(q_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto z_27;
  z_27 :
  TestFunFC(m_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto a_28;
  a_28 :
  TestFunFC(r_0,&&fail,Egetd(2,9));
  Rpush(h_6);
  goto p_30;
  h_6 :
  goto g_6;
  o_30 :
  Tset((ATerm)ATmakeAppl0(n_0));
  Return();
  p_30 :
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
  Rpush(k_6);
  goto n_30;
  k_6 :
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto q_27;
  q_27 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto r_27;
  r_27 :
  TestFunFC(q_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto s_27;
  s_27 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  Rpush(l_6);
  goto q_30;
  l_6 :
  goto j_6;
  q_30 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(m_0,Egetd(3,2),Egetd(3,4)));
  Return();
  j_6 :
  Epopd(3,5);
  Return();
  g_6 :
  Epopd(2,9);
  Return();
  f_6 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(1,4),(ATerm)ATmakeAppl2(q_0,Egetd(0,7),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(1,5);
  goto d_28;
  d_28 :
  TestFunFC(q_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto e_28;
  e_28 :
  TestFunFC(q_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto f_28;
  f_28 :
  TestFunFC(r_0,&&fail,Egetd(1,9));
  Rpush(n_6);
  goto s_30;
  n_6 :
  goto m_6;
  s_30 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(o_6);
  t_30 :
  Cpush(q_6);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_6);
  goto t_30;
  r_6 :
  AllBuild();
  goto p_6;
  q_6 :
  Ccall(_stratego_n_13);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto s_6;
  p_6 :
  Cpop();
  s_6 :
  Return();
  o_6 :
  Return();
  m_6 :
  Epopd(1,9);
  Return();
  z_5 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_c_10)
  Epushd(0,5);
  MoveTop(0,5);
  goto k_31;
  k_31 :
  TestFunFC(q_0,&&v_6,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto l_31;
  l_31 :
  TestFunFC(q_0,&&w_6,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto m_31;
  m_31 :
  TestFunFC(r_0,&&x_6,Egetd(0,4));
  Cpush(z_6);
  Rpush(a_7);
  goto w_32;
  a_7 :
  goto y_6;
  z_6 :
  Rpush(c_7);
  goto x_32;
  c_7 :
  goto b_7;
  y_6 :
  Cpop();
  b_7 :
  goto u_6;
  x_6 :
  Rpush(u_6);
  goto x_32;
  w_6 :
  Rpush(u_6);
  goto x_32;
  v_6 :
  Rpush(u_6);
  goto x_32;
  u_6 :
  goto t_6;
  w_32 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(d_7);
  y_32 :
  Cpush(f_7);
  Ccall(_stratego_n_13);
  goto e_7;
  f_7 :
  Ccontinue(g_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto z_30;
  z_30 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(i_7);
  goto z_32;
  i_7 :
  goto h_7;
  z_32 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(j_7);
  a_33 :
  Cpush(l_7);
  Epushd(2,3);
  MoveTop(2,1);
  goto y_30;
  y_30 :
  TestFunFC(m_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(n_7);
  goto b_33;
  n_7 :
  goto m_7;
  b_33 :
  Move(1,2,2,2);
  Return();
  m_7 :
  Epopd(2,3);
  goto k_7;
  l_7 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_7);
  goto a_33;
  p_7 :
  AllBuild();
  goto o_7;
  k_7 :
  Cpop();
  o_7 :
  Return();
  j_7 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(q_7);
  goto y_32;
  q_7 :
  Return();
  h_7 :
  Epopd(1,3);
  goto e_7;
  g_7 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_7);
  goto y_32;
  s_7 :
  AllBuild();
  goto r_7;
  e_7 :
  Cpop();
  r_7 :
  Return();
  d_7 :
  Return();
  x_32 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl0(n_0),(ATerm)ATmakeAppl2(q_0,Egetd(0,5),(ATerm)ATmakeAppl0(r_0))));
  Rpush(t_7);
  c_33 :
  Cpush(v_7);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Cpush(x_7);
  Epushd(1,7);
  MoveTop(1,1);
  goto b_31;
  b_31 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto c_31;
  c_31 :
  TestFunFC(q_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto d_31;
  d_31 :
  TestFunFC(q_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto e_31;
  e_31 :
  TestFunFC(r_0,&&fail,Egetd(1,6));
  Rpush(z_7);
  goto d_33;
  z_7 :
  goto y_7;
  d_33 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  y_7 :
  Epopd(1,7);
  goto w_7;
  x_7 :
  Ccall(_stratego_b_10);
  goto a_8;
  w_7 :
  Cpop();
  a_8 :
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  goto u_7;
  v_7 :
  Epushd(1,7);
  MoveTop(1,1);
  goto g_31;
  g_31 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_31;
  h_31 :
  TestFunFC(q_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto i_31;
  i_31 :
  TestFunFC(m_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto j_31;
  j_31 :
  TestFunFC(r_0,&&fail,Egetd(1,7));
  Rpush(l_8);
  goto e_33;
  l_8 :
  goto g_8;
  e_33 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(1,5),Egetd(1,2)),(ATerm)ATmakeAppl2(q_0,Egetd(1,6),(ATerm)ATmakeAppl0(r_0))));
  Return();
  g_8 :
  Epopd(1,7);
  goto b_8;
  u_7 :
  Cpop();
  b_8 :
  Cpush(n_8);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_13);
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  goto m_8;
  n_8 :
  Rpush(p_8);
  goto c_33;
  p_8 :
  goto o_8;
  m_8 :
  Cpop();
  o_8 :
  Return();
  t_7 :
  Return();
  t_6 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_d_10)
  Epushd(0,17);
  MoveTop(0,9);
  goto b_35;
  b_35 :
  TestFunFC(y_2,&&s_8,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto c_35;
  c_35 :
  TestFunFC(u_8,&&t_8,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto d_35;
  d_35 :
  TestFunFC(d_0,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto e_35;
  e_35 :
  TestFunFC(y_2,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto f_35;
  f_35 :
  TestFunFC(v_8,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto g_35;
  g_35 :
  TestFunFC(l_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(r_8);
  goto v_39;
  t_8 :
  TestFunFC(v_8,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto h_35;
  h_35 :
  TestFunFC(l_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto i_35;
  i_35 :
  TestFunFC(y_2,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto j_35;
  j_35 :
  TestFunFC(u_8,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto k_35;
  k_35 :
  TestFunFC(l_0,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  Rpush(r_8);
  goto z_39;
  s_8 :
  TestFunFC(d_0,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto l_35;
  l_35 :
  TestFunFC(y_2,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto m_35;
  m_35 :
  TestFunFC(x_8,&&w_8,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  MoveArg(0,1,0,14,1);
  goto n_35;
  n_35 :
  TestFunFC(l_0,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto o_35;
  o_35 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(r_8);
  goto w_39;
  w_8 :
  TestFunFC(v_8,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto p_35;
  p_35 :
  TestFunFC(l_0,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto q_35;
  q_35 :
  TestFunFC(y_2,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto r_35;
  r_35 :
  TestFunFC(v_8,&&y_8,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto s_35;
  s_35 :
  TestFunFC(l_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(r_8);
  goto x_39;
  y_8 :
  TestFunFC(x_8,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto t_35;
  t_35 :
  TestFunFC(l_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto u_35;
  u_35 :
  TestFunFC(l_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  Rpush(r_8);
  goto y_39;
  r_8 :
  goto q_8;
  v_39 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  NotNULLd(0,14);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,5),(ATerm)ATmakeAppl2(q_0,Egetd(0,14),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(2,1);
  goto n_33;
  n_33 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_33;
  o_33 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_33;
  p_33 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  Rpush(c_9);
  goto a_40;
  c_9 :
  goto z_8;
  a_40 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(d_9);
  b_40 :
  Cpush(f_9);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  goto e_9;
  f_9 :
  IsAppl();
  OneInit();
  h_9 :
  OneNextSon();
  Cpush(h_9);
  Rpush(j_9);
  goto b_40;
  j_9 :
  Cpop();
  OneBuild();
  goto g_9;
  e_9 :
  Cpop();
  g_9 :
  Return();
  d_9 :
  NotNULLd(0,14);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,14),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,5),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_c_10);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  z_8 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,11);
  NotNULLd(0,8);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,5),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,11),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,Egetd(0,8),(ATerm)ATmakeAppl0(r_0)))));
  Ccall(_stratego_a_10);
  MoveTop(1,2);
  NotNULLd(0,11);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(y_2,(ATerm)ATmakeAppl1(u_8,Egetd(0,11)),(ATerm)ATmakeAppl2(d_0,Egetd(1,1),Egetd(1,2))));
  Epopd(1,2);
  Return();
  w_39 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,16),(ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(2,1);
  goto w_33;
  w_33 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto x_33;
  x_33 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto b_34;
  b_34 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  Rpush(m_9);
  goto f_40;
  m_9 :
  goto l_9;
  f_40 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(n_9);
  g_40 :
  Cpush(p_9);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  goto o_9;
  p_9 :
  IsAppl();
  OneInit();
  u_9 :
  OneNextSon();
  Cpush(u_9);
  Rpush(n_10);
  goto g_40;
  n_10 :
  Cpop();
  OneBuild();
  goto q_9;
  o_9 :
  Cpop();
  q_9 :
  Return();
  n_9 :
  NotNULLd(0,10);
  NotNULLd(0,16);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,16),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_c_10);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  l_9 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,16);
  NotNULLd(0,2);
  NotNULLd(0,17);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,16),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(l_0,Egetd(0,2)),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,Egetd(0,17),(ATerm)ATmakeAppl0(r_0)))));
  Ccall(_stratego_a_10);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(1,1),Egetd(1,2)));
  Epopd(1,2);
  Return();
  x_39 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,16),(ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(2,1);
  goto l_34;
  l_34 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto m_34;
  m_34 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto n_34;
  n_34 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  Rpush(p_10);
  goto k_40;
  p_10 :
  goto o_10;
  k_40 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(q_10);
  l_40 :
  Cpush(s_10);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  goto r_10;
  s_10 :
  IsAppl();
  OneInit();
  u_10 :
  OneNextSon();
  Cpush(u_10);
  Rpush(w_10);
  goto l_40;
  w_10 :
  Cpop();
  OneBuild();
  goto t_10;
  r_10 :
  Cpop();
  t_10 :
  Return();
  q_10 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,5),(ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(3,1);
  goto i_34;
  i_34 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto j_34;
  j_34 :
  TestFunFC(q_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto k_34;
  k_34 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  Rpush(y_10);
  goto n_40;
  y_10 :
  goto x_10;
  n_40 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(z_10);
  o_40 :
  Cpush(b_11);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  goto a_11;
  b_11 :
  IsAppl();
  OneInit();
  d_11 :
  OneNextSon();
  Cpush(d_11);
  Rpush(f_11);
  goto o_40;
  f_11 :
  Cpop();
  OneBuild();
  goto c_11;
  a_11 :
  Cpop();
  c_11 :
  Return();
  z_10 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,5),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_c_10);
  MoveTop(4,1);
  Move(1,1,4,1);
  Epopd(4,1);
  Return();
  x_10 :
  Epopd(3,5);
  Return();
  o_10 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(0,8);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,5),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(l_0,Egetd(0,16)),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,Egetd(0,8),(ATerm)ATmakeAppl0(r_0)))));
  Ccall(_stratego_a_10);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(0,16);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(1,1),(ATerm)ATmakeAppl2(y_2,(ATerm)ATmakeAppl1(v_8,(ATerm)ATmakeAppl1(l_0,Egetd(0,16))),Egetd(1,2))));
  Epopd(1,2);
  Return();
  y_39 :
  Epushd(1,3);
  Move(0,16,0,7);
  Move(1,1,0,8);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,16),(ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(2,1);
  goto x_34;
  x_34 :
  TestFunFC(q_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto y_34;
  y_34 :
  TestFunFC(q_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto z_34;
  z_34 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  Rpush(h_11);
  goto s_40;
  h_11 :
  goto g_11;
  s_40 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(i_11);
  t_40 :
  Cpush(n_11);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  goto j_11;
  n_11 :
  IsAppl();
  OneInit();
  p_11 :
  OneNextSon();
  Cpush(p_11);
  Rpush(r_11);
  goto t_40;
  r_11 :
  Cpop();
  OneBuild();
  goto o_11;
  j_11 :
  Cpop();
  o_11 :
  Return();
  i_11 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,5),(ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(3,1);
  goto u_34;
  u_34 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto v_34;
  v_34 :
  TestFunFC(q_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_34;
  w_34 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  Rpush(t_11);
  goto v_40;
  t_11 :
  goto s_11;
  v_40 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(u_11);
  w_40 :
  Cpush(w_11);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  goto v_11;
  w_11 :
  IsAppl();
  OneInit();
  i_12 :
  OneNextSon();
  Cpush(i_12);
  Rpush(k_12);
  goto w_40;
  k_12 :
  Cpop();
  OneBuild();
  goto h_12;
  v_11 :
  Cpop();
  h_12 :
  Return();
  u_11 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,10),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,5),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_c_10);
  MoveTop(4,1);
  Move(1,2,4,1);
  Epopd(4,1);
  Return();
  s_11 :
  Epopd(3,5);
  Return();
  g_11 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,5),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(l_0,Egetd(0,16)),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,Egetd(1,1),(ATerm)ATmakeAppl0(r_0)))));
  Ccall(_stratego_a_10);
  MoveTop(1,3);
  NotNULLd(1,2);
  NotNULLd(0,16);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(1,2),(ATerm)ATmakeAppl2(y_2,(ATerm)ATmakeAppl1(v_8,(ATerm)ATmakeAppl1(l_0,Egetd(0,16))),Egetd(1,3))));
  Epopd(1,3);
  Return();
  z_39 :
  Epushd(1,1);
  Move(0,12,0,16);
  Move(1,1,0,17);
  NotNULLd(0,12);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(y_2,(ATerm)ATmakeAppl1(v_8,(ATerm)ATmakeAppl1(l_0,Egetd(0,12))),Egetd(1,1)));
  Epopd(1,1);
  Return();
  q_8 :
  Epopd(0,17);
ENDPROC

PROC(_stratego_e_10)
  Epushd(0,6);
  MoveTop(0,3);
  goto l_41;
  l_41 :
  TestFunFC(o_12,&&n_12,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto m_41;
  m_41 :
  TestFunFC(n_0,&&p_12,Egetd(0,4));
  Rpush(m_12);
  goto m_42;
  p_12 :
  TestFunFC(m_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(m_12);
  goto n_42;
  n_12 :
  TestFunFC(u_12,&&t_12,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto n_41;
  n_41 :
  TestFunFC(n_0,&&v_12,Egetd(0,4));
  Rpush(m_12);
  goto o_42;
  v_12 :
  TestFunFC(m_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(m_12);
  goto p_42;
  t_12 :
  TestFunFC(x_12,&&w_12,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto o_41;
  o_41 :
  TestFunFC(n_0,&&y_12,Egetd(0,4));
  Rpush(m_12);
  goto q_42;
  y_12 :
  TestFunFC(m_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(m_12);
  goto r_42;
  w_12 :
  TestFunFC(a_13,&&z_12,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(m_12);
  goto s_42;
  z_12 :
  TestFunFC(e_13,&&d_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(m_12);
  goto t_42;
  d_13 :
  TestFunFC(g_13,&&f_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(m_12);
  goto u_42;
  f_13 :
  TestFunFC(j_13,&&i_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(m_12);
  goto v_42;
  i_13 :
  TestFunFC(s_13,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(m_12);
  goto w_42;
  m_12 :
  goto l_12;
  m_42 :
  Tset((ATerm)ATmakeAppl0(t_13));
  Return();
  n_42 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(y_2,Egetd(0,1),(ATerm)ATmakeAppl1(o_12,Egetd(0,2))));
  Return();
  o_42 :
  Tset((ATerm)ATmakeAppl0(u_13));
  Return();
  p_42 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(v_13,Egetd(0,1),(ATerm)ATmakeAppl1(u_12,Egetd(0,2))));
  Return();
  q_42 :
  Tset((ATerm)ATmakeAppl0(u_13));
  Return();
  r_42 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(w_13,Egetd(0,1),(ATerm)ATmakeAppl1(x_12,Egetd(0,2))));
  Return();
  s_42 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(x_13,Egetd(0,4),Egetd(0,5)));
  Return();
  t_42 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(y_2,(ATerm)ATmakeAppl1(u_8,Egetd(0,5)),Egetd(0,4)));
  Return();
  u_42 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(y_2,(ATerm)ATmakeAppl1(g_14,Egetd(0,4)),Egetd(0,5)));
  Return();
  v_42 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(y_2,Egetd(0,4),(ATerm)ATmakeAppl1(g_14,Egetd(0,5))));
  Return();
  w_42 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl1(o_12,(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(u_8,Egetd(0,5)),(ATerm)ATmakeAppl2(m_0,Egetd(0,4),(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(g_14,Egetd(0,6)),(ATerm)ATmakeAppl0(n_0))))));
  Return();
  l_12 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_f_10)
  Epushd(0,9);
  MoveTop(0,2);
  goto d_43;
  d_43 :
  TestFunFC(v_13,&&n_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(m_14);
  goto b_44;
  n_14 :
  TestFunFC(w_13,&&o_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(m_14);
  goto c_44;
  o_14 :
  TestFunFC(a_15,&&r_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto e_43;
  e_43 :
  TestFunFC(a_15,&&b_15,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(m_14);
  goto d_44;
  b_15 :
  TestFunFC(y_2,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto f_43;
  f_43 :
  TestFunFC(a_15,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto g_43;
  g_43 :
  TestFunFC(y_2,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,9,0,6,1);
  goto h_43;
  h_43 :
  TestFunFC(u_8,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  Rpush(m_14);
  goto g_44;
  r_14 :
  TestFunFC(d_15,&&c_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto i_43;
  i_43 :
  TestFunFC(d_15,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(m_14);
  goto e_44;
  c_15 :
  TestFunFC(f_15,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto j_43;
  j_43 :
  TestFunFC(f_15,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(m_14);
  goto f_44;
  m_14 :
  goto k_14;
  b_44 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  c_44 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  d_44 :
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(a_15,Egetd(0,4)));
  Return();
  e_44 :
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(f_15,Egetd(0,4)));
  Return();
  f_44 :
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(f_15,Egetd(0,4)));
  Return();
  g_44 :
  NotNULLd(0,5);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset((ATerm)ATmakeAppl1(a_15,(ATerm)ATmakeAppl2(y_2,Egetd(0,5),(ATerm)ATmakeAppl2(y_2,(ATerm)ATmakeAppl1(u_8,Egetd(0,8)),Egetd(0,9)))));
  Return();
  k_14 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_g_10)
  Epushd(0,5);
  MoveTop(0,1);
  goto k_44;
  k_44 :
  TestFunFC(v_13,&&q_15,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto l_44;
  l_44 :
  TestFunFC(v_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(m_15);
  goto d_45;
  q_15 :
  TestFunFC(y_2,&&r_15,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto m_44;
  m_44 :
  TestFunFC(y_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(m_15);
  goto e_45;
  r_15 :
  TestFunFC(w_13,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto n_44;
  n_44 :
  TestFunFC(w_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(m_15);
  goto f_45;
  m_15 :
  goto l_15;
  d_45 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(v_13,Egetd(0,3),(ATerm)ATmakeAppl2(v_13,Egetd(0,4),Egetd(0,5))));
  Return();
  e_45 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(y_2,Egetd(0,3),(ATerm)ATmakeAppl2(y_2,Egetd(0,4),Egetd(0,5))));
  Return();
  f_45 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_13,Egetd(0,3),(ATerm)ATmakeAppl2(w_13,Egetd(0,4),Egetd(0,5))));
  Return();
  l_15 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_10)
  Epushd(0,3);
  MoveTop(0,2);
  goto x_45;
  x_45 :
  TestFunFC(f_15,&&h_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto y_45;
  y_45 :
  TestFunFC(u_13,&&fail,Egetd(0,3));
  Rpush(g_16);
  goto d_47;
  h_16 :
  TestFunFC(d_15,&&j_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto z_45;
  z_45 :
  TestFunFC(u_13,&&fail,Egetd(0,3));
  Rpush(g_16);
  goto e_47;
  j_16 :
  TestFunFC(y_2,&&l_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto a_46;
  a_46 :
  TestFunFC(u_13,&&fail,Egetd(0,3));
  Rpush(g_16);
  goto f_47;
  l_16 :
  TestFunFC(d_0,&&r_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto b_46;
  b_46 :
  TestFunFC(u_13,&&fail,Egetd(0,1));
  Rpush(g_16);
  goto g_47;
  r_16 :
  TestFunFC(w_16,&&s_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto c_46;
  c_46 :
  TestFunFC(u_13,&&fail,Egetd(0,1));
  Rpush(g_16);
  goto h_47;
  s_16 :
  TestFunFC(d_17,&&x_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto d_46;
  d_46 :
  TestFunFC(u_13,&&fail,Egetd(0,3));
  Rpush(g_16);
  goto i_47;
  x_16 :
  TestFunFC(f_17,&&e_17,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto e_46;
  e_46 :
  TestFunFC(u_13,&&fail,Egetd(0,3));
  Rpush(g_16);
  goto j_47;
  e_17 :
  TestFunFC(h_17,&&g_17,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto f_46;
  f_46 :
  TestFunFC(u_13,&&fail,Egetd(0,1));
  Rpush(g_16);
  goto k_47;
  g_17 :
  TestFunFC(m_17,&&l_17,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(g_16);
  goto l_47;
  l_17 :
  TestFunFC(v_13,&&s_17,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto g_46;
  g_46 :
  TestFunFC(u_13,&&w_17,Egetd(0,1));
  goto h_46;
  h_46 :
  TestFunFC(u_13,&&x_17,Egetd(0,3));
  Cpush(e_18);
  Rpush(q_18);
  goto m_47;
  q_18 :
  goto d_18;
  e_18 :
  Rpush(s_18);
  goto n_47;
  s_18 :
  goto r_18;
  d_18 :
  Cpop();
  r_18 :
  goto g_16;
  x_17 :
  Rpush(g_16);
  goto n_47;
  w_17 :
  goto i_46;
  i_46 :
  TestFunFC(u_13,&&fail,Egetd(0,3));
  Rpush(g_16);
  goto m_47;
  s_17 :
  TestFunFC(w_13,&&t_18,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto j_46;
  j_46 :
  TestFunFC(u_13,&&u_18,Egetd(0,1));
  goto k_46;
  k_46 :
  TestFunFC(u_13,&&v_18,Egetd(0,3));
  Cpush(z_18);
  Rpush(a_19);
  goto o_47;
  a_19 :
  goto y_18;
  z_18 :
  Rpush(c_19);
  goto p_47;
  c_19 :
  goto b_19;
  y_18 :
  Cpop();
  b_19 :
  goto g_16;
  v_18 :
  Rpush(g_16);
  goto p_47;
  u_18 :
  goto l_46;
  l_46 :
  TestFunFC(u_13,&&fail,Egetd(0,3));
  Rpush(g_16);
  goto o_47;
  t_18 :
  TestFunFC(a_15,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto m_46;
  m_46 :
  TestFunFC(u_13,&&fail,Egetd(0,3));
  Rpush(g_16);
  goto q_47;
  g_16 :
  goto x_15;
  d_47 :
  Tset((ATerm)ATmakeAppl0(u_13));
  Return();
  e_47 :
  Tset((ATerm)ATmakeAppl0(t_13));
  Return();
  f_47 :
  Tset((ATerm)ATmakeAppl0(u_13));
  Return();
  g_47 :
  Tset((ATerm)ATmakeAppl0(u_13));
  Return();
  h_47 :
  Tset((ATerm)ATmakeAppl0(u_13));
  Return();
  i_47 :
  Tset((ATerm)ATmakeAppl0(u_13));
  Return();
  j_47 :
  Tset((ATerm)ATmakeAppl0(u_13));
  Return();
  k_47 :
  Tset((ATerm)ATmakeAppl0(u_13));
  Return();
  l_47 :
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(d_19);
  r_47 :
  Cpush(i_19);
  Epushd(1,3);
  MoveTop(1,1);
  goto v_45;
  v_45 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_45;
  w_45 :
  TestFunFC(u_13,&&fail,Egetd(1,2));
  Rpush(t_19);
  goto s_47;
  t_19 :
  goto j_19;
  s_47 :
  Return();
  j_19 :
  Epopd(1,3);
  goto h_19;
  i_19 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_19);
  goto r_47;
  x_19 :
  AllBuild();
  goto u_19;
  h_19 :
  Cpop();
  u_19 :
  Return();
  d_19 :
  Tpop();
  Tset((ATerm)ATmakeAppl0(u_13));
  Return();
  m_47 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  n_47 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  o_47 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  p_47 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  q_47 :
  Tset((ATerm)ATmakeAppl0(u_13));
  Return();
  x_15 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_i_10)
  Epushd(0,3);
  MoveTop(0,2);
  goto d_48;
  d_48 :
  TestFunFC(f_15,&&g_20,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto e_48;
  e_48 :
  TestFunFC(t_13,&&fail,Egetd(0,3));
  Rpush(e_20);
  goto x_48;
  g_20 :
  TestFunFC(d_15,&&o_20,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto f_48;
  f_48 :
  TestFunFC(t_13,&&fail,Egetd(0,3));
  Rpush(e_20);
  goto y_48;
  o_20 :
  TestFunFC(y_2,&&p_20,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto g_48;
  g_48 :
  TestFunFC(t_13,&&q_20,Egetd(0,1));
  goto h_48;
  h_48 :
  TestFunFC(t_13,&&w_20,Egetd(0,3));
  Cpush(z_20);
  Rpush(d_21);
  goto z_48;
  d_21 :
  goto x_20;
  z_20 :
  Rpush(h_21);
  goto a_49;
  h_21 :
  goto e_21;
  x_20 :
  Cpop();
  e_21 :
  goto e_20;
  w_20 :
  Rpush(e_20);
  goto a_49;
  q_20 :
  goto i_48;
  i_48 :
  TestFunFC(t_13,&&fail,Egetd(0,3));
  Rpush(e_20);
  goto z_48;
  p_20 :
  TestFunFC(w_13,&&j_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto j_48;
  j_48 :
  TestFunFC(t_13,&&fail,Egetd(0,3));
  Rpush(e_20);
  goto b_49;
  j_21 :
  TestFunFC(d_0,&&k_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto k_48;
  k_48 :
  TestFunFC(t_13,&&fail,Egetd(0,1));
  Rpush(e_20);
  goto c_49;
  k_21 :
  TestFunFC(w_16,&&l_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto l_48;
  l_48 :
  TestFunFC(t_13,&&fail,Egetd(0,1));
  Rpush(e_20);
  goto d_49;
  l_21 :
  TestFunFC(q_21,&&p_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto m_48;
  m_48 :
  TestFunFC(t_13,&&fail,Egetd(0,3));
  Rpush(e_20);
  goto e_49;
  p_21 :
  TestFunFC(a_15,&&r_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto n_48;
  n_48 :
  TestFunFC(t_13,&&fail,Egetd(0,3));
  Rpush(e_20);
  goto f_49;
  r_21 :
  TestFunFC(g_14,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto o_48;
  o_48 :
  TestFunFC(k_22,&&fail,Egetd(0,3));
  Rpush(e_20);
  goto g_49;
  e_20 :
  goto d_20;
  x_48 :
  Tset((ATerm)ATmakeAppl0(t_13));
  Return();
  y_48 :
  Tset((ATerm)ATmakeAppl0(u_13));
  Return();
  z_48 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  a_49 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  b_49 :
  Tset((ATerm)ATmakeAppl0(t_13));
  Return();
  c_49 :
  Tset((ATerm)ATmakeAppl0(t_13));
  Return();
  d_49 :
  Tset((ATerm)ATmakeAppl0(t_13));
  Return();
  e_49 :
  Tset((ATerm)ATmakeAppl0(t_13));
  Return();
  f_49 :
  Tset((ATerm)ATmakeAppl0(t_13));
  Return();
  g_49 :
  Tset((ATerm)ATmakeAppl0(t_13));
  Return();
  d_20 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_j_10)
  Cpush(n_22);
  Ccall(_stratego_i_10);
  goto m_22;
  n_22 :
  Ccontinue(r_22);
  Ccall(_stratego_h_10);
  goto m_22;
  r_22 :
  Ccontinue(s_22);
  Ccall(_stratego_g_10);
  goto m_22;
  s_22 :
  Ccontinue(t_22);
  Ccall(_stratego_f_10);
  goto m_22;
  t_22 :
  Epushd(0,3);
  MoveTop(0,1);
  goto i_49;
  i_49 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto j_49;
  j_49 :
  TestFunFC(n_0,&&fail,Egetd(0,2));
  Rpush(h_23);
  goto o_49;
  h_23 :
  goto v_22;
  o_49 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  v_22 :
  Epopd(0,3);
  goto u_22;
  m_22 :
  Cpop();
  u_22 :
ENDPROC

PROC(_stratego_k_10)
  Cpush(v_23);
  Ccall(_stratego_j_10);
  goto t_23;
  v_23 :
  Ccontinue(w_23);
  Ccall(_stratego_e_10);
  goto t_23;
  w_23 :
  Ccontinue(x_23);
  Epushd(0,5);
  MoveTop(0,1);
  goto q_49;
  q_49 :
  TestFunFC(y_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_49;
  r_49 :
  TestFunFC(x_13,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(z_23);
  goto f_53;
  z_23 :
  goto y_23;
  f_53 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(x_13,Egetd(0,4),(ATerm)ATmakeAppl2(y_2,Egetd(0,2),Egetd(0,5))));
  Return();
  y_23 :
  Epopd(0,5);
  goto t_23;
  x_23 :
  Ccontinue(j_24);
  Ccall(_stratego_d_10);
  goto t_23;
  j_24 :
  Epushd(0,11);
  MoveTop(0,4);
  goto o_50;
  o_50 :
  TestFunFC(d_0,&&s_24,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,11,0,4,1);
  goto p_50;
  p_50 :
  TestFunFC(d_0,&&fail,Egetd(0,11));
  MoveArg(0,1,0,11,0);
  MoveArg(0,3,0,11,1);
  Rpush(m_24);
  goto g_53;
  s_24 :
  TestFunFC(y_2,&&t_24,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,11,0,4,1);
  goto q_50;
  q_50 :
  TestFunFC(u_8,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto r_50;
  r_50 :
  TestFunFC(y_2,&&fail,Egetd(0,11));
  MoveArg(0,1,0,11,0);
  MoveArg(0,3,0,11,1);
  goto s_50;
  s_50 :
  TestFunFC(u_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(m_24);
  goto h_53;
  t_24 :
  TestFunFC(x_13,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,11,0,4,1);
  goto t_50;
  t_50 :
  TestFunFC(m_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,10,0,5,1);
  goto u_50;
  u_50 :
  TestFunFC(v_24,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  MoveArg(0,9,0,6,2);
  goto v_50;
  v_50 :
  TestFunFC(n_0,&&fail,Egetd(0,8));
  goto w_50;
  w_50 :
  TestFunFC(n_0,&&fail,Egetd(0,10));
  Cpush(d_25);
  Rpush(e_25);
  goto i_53;
  e_25 :
  goto c_25;
  d_25 :
  Rpush(g_25);
  goto j_53;
  g_25 :
  goto f_25;
  c_25 :
  Cpop();
  f_25 :
  goto m_24;
  m_24 :
  goto l_24;
  g_53 :
  Epushd(1,5);
  NotNULLd(0,5);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,5),(ATerm)ATmakeAppl2(q_0,Egetd(0,1),(ATerm)ATmakeAppl0(r_0))));
  MoveTop(1,1);
  goto y_49;
  y_49 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_49;
  z_49 :
  TestFunFC(q_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto a_50;
  a_50 :
  TestFunFC(r_0,&&fail,Egetd(1,5));
  Rpush(r_25);
  goto k_53;
  r_25 :
  goto h_25;
  k_53 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(s_25);
  l_53 :
  Cpush(z_25);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_26);
  goto l_53;
  a_26 :
  AllBuild();
  goto u_25;
  z_25 :
  Ccall(_stratego_n_13);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto b_26;
  u_25 :
  Cpop();
  b_26 :
  Return();
  s_25 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(d_0,Egetd(2,1),Egetd(0,3)));
  Epopd(2,1);
  Return();
  h_25 :
  Epopd(1,5);
  Return();
  h_53 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(y_2,(ATerm)ATmakeAppl1(u_8,Egetd(0,2)),Egetd(0,3)));
  Return();
  i_53 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,11);
  Tset(Egetd(0,11));
  Rpush(c_26);
  n_53 :
  Cpush(e_26);
  Epushd(3,4);
  MoveTop(3,1);
  goto c_50;
  c_50 :
  TestFunFC(j_26,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,4,3,1,1);
  goto d_50;
  d_50 :
  TestFunFC(l_26,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  goto e_50;
  e_50 :
  TestFunFC(n_0,&&fail,Egetd(3,4));
  Rpush(g_26);
  goto o_53;
  g_26 :
  goto f_26;
  o_53 :
  Move(0,7,3,3);
  NotNULLd(0,9);
  Tset(Egetd(0,9));
  Return();
  f_26 :
  Epopd(3,4);
  goto d_26;
  e_26 :
  Cpush(n_26);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,3);
  goto h_50;
  h_50 :
  TestFunFC(s_26,&&r_26,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  MoveArg(3,1,3,3,2);
  MoveArg(3,2,3,3,3);
  Rpush(q_26);
  goto p_53;
  r_26 :
  TestFunFC(t_26,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(q_26);
  goto q_53;
  q_26 :
  goto o_26;
  p_53 :
  Return();
  q_53 :
  Return();
  o_26 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  n_26 :
  IsAppl();
  OneInit();
  u_26 :
  OneNextSon();
  Cpush(u_26);
  Rpush(w_26);
  goto n_53;
  w_26 :
  Cpop();
  OneBuild();
  goto m_26;
  d_26 :
  Cpop();
  m_26 :
  Return();
  c_26 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,7);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(j_26,(ATerm)ATmakeAppl1(l_26,Egetd(0,7)),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl2(q_0,Egetd(1,1),(ATerm)ATmakeAppl0(r_0))));
  Cpush(x_26);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,1);
  goto l_50;
  l_50 :
  TestFunFC(q_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto m_50;
  m_50 :
  TestFunFC(q_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto n_50;
  n_50 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  Rpush(b_27);
  goto s_53;
  b_27 :
  goto a_27;
  s_53 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(c_27);
  t_53 :
  Cpush(e_27);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,2,4,1);
  Epopd(4,1);
  goto d_27;
  e_27 :
  IsAppl();
  OneInit();
  g_27 :
  OneNextSon();
  Cpush(g_27);
  Rpush(i_27);
  goto t_53;
  i_27 :
  Cpop();
  OneBuild();
  goto f_27;
  d_27 :
  Cpop();
  f_27 :
  Return();
  c_27 :
  Return();
  a_27 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  x_26 :
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  j_53 :
  NotNULLd(0,7);
  NotNULLd(0,9);
  NotNULLd(0,11);
  Tset((ATerm)ATmakeAppl2(x_13,(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl4(j_27,(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(n_27),(ATerm)ATmakeAppl0(n_0)),Egetd(0,7),(ATerm)ATmakeAppl0(n_0),Egetd(0,9)),(ATerm)ATmakeAppl0(n_0)),Egetd(0,11)));
  Return();
  l_24 :
  Epopd(0,11);
  goto k_24;
  t_23 :
  Cpop();
  k_24 :
ENDPROC

PROC(_stratego_k_11)
  Rpush(o_27);
  v_53 :
  Cpush(b_28);
  p_27 :
  Ccall(_stratego_k_10);
  Tduplinv();
  goto p_27;
  b_28 :
  AllInit();
  c_28 :
  AllNextSon(&&u_28);
  Rpush(v_28);
  goto v_53;
  v_28 :
  goto c_28;
  u_28 :
  AllBuild();
  Cpush(q_29);
  w_28 :
  Ccall(_stratego_k_10);
  Tduplinv();
  goto w_28;
  q_29 :
  Return();
  o_27 :
ENDPROC

PROC(_stratego_l_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_53;
  z_53 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  Rpush(s_29);
  goto b_54;
  s_29 :
  goto r_29;
  b_54 :
  Return();
  r_29 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_11)
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl0(t_29),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(n_0)),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_r_12);
  Tset(MakeInt(1));
  Ccall(_stratego_q_12);
ENDPROC

PROC(_stratego_a_12)
  Epushd(0,2);
  Tdupl();
  Cpush(a_30);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Cpush(c_30);
  Tdupl();
  Rpush(i_30);
  y_54 :
  Cpush(r_30);
  Epushd(1,3);
  MoveTop(1,1);
  goto d_54;
  d_54 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_54;
  e_54 :
  TestFunFC(w_30,&&fail,Egetd(1,2));
  Rpush(v_30);
  goto z_54;
  v_30 :
  goto u_30;
  z_54 :
  Return();
  u_30 :
  Epopd(1,3);
  goto j_30;
  r_30 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_31);
  goto y_54;
  a_31 :
  AllBuild();
  goto x_30;
  j_30 :
  Cpop();
  x_30 :
  Return();
  i_30 :
  Cpop();
  Crestore();
  Cjump();
  c_30 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(f_31);
  a_55 :
  Cpush(t_31);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_54;
  g_54 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_54;
  h_54 :
  TestFunFC(c_32,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(y_31);
  goto b_55;
  y_31 :
  goto x_31;
  b_55 :
  Move(0,2,1,3);
  Return();
  x_31 :
  Epopd(1,4);
  goto s_31;
  t_31 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_32);
  goto a_55;
  t_32 :
  AllBuild();
  goto k_32;
  s_31 :
  Cpop();
  k_32 :
  Return();
  f_31 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(u_32);
  c_55 :
  Cpush(f_33);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_54;
  j_54 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_54;
  k_54 :
  TestFunFC(i_33,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_33);
  goto d_55;
  h_33 :
  goto g_33;
  d_55 :
  Move(0,1,1,3);
  Return();
  g_33 :
  Epopd(1,4);
  goto v_32;
  f_33 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_33);
  goto c_55;
  k_33 :
  AllBuild();
  goto j_33;
  v_32 :
  Cpop();
  j_33 :
  Return();
  u_32 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl0(t_29),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,Egetd(0,1),(ATerm)ATmakeAppl2(m_0,ATmakeString(" ("),(ATerm)ATmakeAppl2(m_0,Egetd(0,2),(ATerm)ATmakeAppl2(m_0,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(n_0))))),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_r_12);
  goto z_29;
  a_30 :
  goto l_33;
  z_29 :
  Cpop();
  l_33 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_q_12);
  Epopd(0,2);
ENDPROC

PROC(_stratego_b_12)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_c_12)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_d_12)
  Epushd(0,1);
  Tdupl();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Cpush(q_33);
  Rpush(r_33);
  d_56 :
  Cpush(t_33);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_55;
  f_55 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto g_55;
  g_55 :
  TestFunFC(y_33,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_33);
  goto e_56;
  v_33 :
  goto u_33;
  e_56 :
  Move(0,1,1,3);
  Return();
  u_33 :
  Epopd(1,4);
  goto s_33;
  t_33 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_34);
  goto d_56;
  a_34 :
  AllBuild();
  goto z_33;
  s_33 :
  Cpop();
  z_33 :
  Return();
  r_33 :
  goto m_33;
  q_33 :
  Tset((ATerm)ATmakeAppl0(d_34));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(d_34));
  MoveTop(0,1);
  Tpop();
  goto c_34;
  m_33 :
  Cpop();
  c_34 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_l_11);
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
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  Cpush(f_34);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(g_34);
  j_56 :
  Cpush(o_34);
  Epushd(1,3);
  MoveTop(1,1);
  goto m_55;
  m_55 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto n_55;
  n_55 :
  TestFunFC(r_34,&&fail,Egetd(1,2));
  Rpush(q_34);
  goto k_56;
  q_34 :
  goto p_34;
  k_56 :
  Return();
  p_34 :
  Epopd(1,3);
  goto h_34;
  o_34 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_34);
  goto j_56;
  t_34 :
  AllBuild();
  goto s_34;
  h_34 :
  Cpop();
  s_34 :
  Return();
  g_34 :
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_12);
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  goto e_34;
  f_34 :
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_12);
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  goto a_35;
  e_34 :
  Cpop();
  a_35 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_12)
  _ST_dtime();
ENDPROC

PROC(_stratego_f_12)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_g_12)
  Epushd(0,3);
  Tdupl();
  Cpush(n_36);
  Rpush(o_36);
  e_57 :
  Cpush(r_36);
  Epushd(1,4);
  MoveTop(1,1);
  goto m_56;
  m_56 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto n_56;
  n_56 :
  TestFunFC(u_36,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_36);
  goto f_57;
  t_36 :
  goto s_36;
  f_57 :
  Move(0,1,1,3);
  Return();
  s_36 :
  Epopd(1,4);
  goto p_36;
  r_36 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_37);
  goto e_57;
  b_37 :
  AllBuild();
  goto v_36;
  p_36 :
  Cpop();
  v_36 :
  Return();
  o_36 :
  goto m_36;
  n_36 :
  Tset((ATerm)ATmakeAppl0(g_37));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(g_37));
  MoveTop(0,1);
  Tpop();
  goto c_37;
  m_36 :
  Cpop();
  c_37 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_f_12);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(q_0,Egetd(0,2),(ATerm)ATmakeAppl2(q_0,Egetd(0,3),(ATerm)ATmakeAppl0(r_0))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_q_12)
  _ST_exit();
ENDPROC

PROC(_stratego_r_12)
  _ST_printnl();
ENDPROC

PROC(_stratego_s_12)
  Epushd(0,1);
  Tdupl();
  Rpush(h_37);
  s_57 :
  Cpush(j_37);
  Epushd(1,4);
  MoveTop(1,1);
  goto l_57;
  l_57 :
  TestFunFC(m_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto m_57;
  m_57 :
  TestFunFC(i_33,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_37);
  goto t_57;
  r_37 :
  goto k_37;
  t_57 :
  Move(0,1,1,3);
  Return();
  k_37 :
  Epopd(1,4);
  goto i_37;
  j_37 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_37);
  goto s_57;
  w_37 :
  AllBuild();
  goto s_37;
  i_37 :
  Cpop();
  s_37 :
  Return();
  h_37 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl0(t_29),(ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,ATmakeString("usage : "),(ATerm)ATmakeAppl2(m_0,Egetd(0,1),(ATerm)ATmakeAppl2(m_0,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(n_0)))),(ATerm)ATmakeAppl0(r_0))));
  Ccall(_stratego_r_12);
  Tset(MakeInt(1));
  Ccall(_stratego_q_12);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto v_57;
  v_57 :
  TestFunFC(z_37,&&fail,Egetd(0,1));
  Rpush(y_37);
  goto x_57;
  y_37 :
  goto x_37;
  x_57 :
  Return();
  x_37 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_13)
  Rpush(a_38);
  c_58 :
  Cpush(i_38);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Cpush(q_38);
  Ccall(_stratego_k_13);
  goto p_38;
  q_38 :
  Epushd(0,2);
  MoveTop(0,1);
  goto z_57;
  z_57 :
  TestFunFC(x_38,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(w_38);
  goto d_58;
  w_38 :
  goto v_38;
  d_58 :
  Return();
  v_38 :
  Epopd(0,2);
  goto u_38;
  p_38 :
  Cpop();
  u_38 :
  OneNextSon();
  AllBuild();
  goto h_38;
  i_38 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_39);
  goto c_58;
  g_39 :
  AllBuild();
  goto f_39;
  h_38 :
  Cpop();
  f_39 :
  Return();
  a_38 :
  Ccall(_stratego_s_12);
ENDPROC

PROC(_stratego_m_13)
  Epushd(0,5);
  MoveTop(0,3);
  goto r_60;
  r_60 :
  TestFunFC(m_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto s_60;
  s_60 :
  TestFunFC(m_0,&&s_39,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(c_40);
  Rpush(d_40);
  goto k_64;
  d_40 :
  goto t_39;
  c_40 :
  Ccontinue(e_40);
  Rpush(h_40);
  goto l_64;
  h_40 :
  goto t_39;
  e_40 :
  Ccontinue(i_40);
  Rpush(j_40);
  goto m_64;
  j_40 :
  goto t_39;
  i_40 :
  Ccontinue(m_40);
  Rpush(p_40);
  goto n_64;
  p_40 :
  goto t_39;
  m_40 :
  Ccontinue(q_40);
  Rpush(r_40);
  goto o_64;
  r_40 :
  goto t_39;
  q_40 :
  Ccontinue(u_40);
  Rpush(x_40);
  goto p_64;
  x_40 :
  goto t_39;
  u_40 :
  Ccontinue(y_40);
  Rpush(z_40);
  goto q_64;
  z_40 :
  goto t_39;
  y_40 :
  Ccontinue(a_41);
  Rpush(b_41);
  goto r_64;
  b_41 :
  goto t_39;
  a_41 :
  Ccontinue(c_41);
  Rpush(d_41);
  goto s_64;
  d_41 :
  goto t_39;
  c_41 :
  Ccontinue(e_41);
  Rpush(f_41);
  goto t_64;
  f_41 :
  goto t_39;
  e_41 :
  Ccontinue(g_41);
  Rpush(h_41);
  goto u_64;
  h_41 :
  goto t_39;
  g_41 :
  Ccontinue(i_41);
  Rpush(j_41);
  goto v_64;
  j_41 :
  goto t_39;
  i_41 :
  Ccontinue(k_41);
  Rpush(v_41);
  goto w_64;
  v_41 :
  goto t_39;
  k_41 :
  Ccontinue(w_41);
  Rpush(x_41);
  goto x_64;
  x_41 :
  goto t_39;
  w_41 :
  Rpush(z_41);
  goto y_64;
  z_41 :
  goto y_41;
  t_39 :
  Cpop();
  y_41 :
  goto o_39;
  s_39 :
  Cpush(b_42);
  Rpush(c_42);
  goto k_64;
  c_42 :
  goto a_42;
  b_42 :
  Ccontinue(d_42);
  Rpush(e_42);
  goto l_64;
  e_42 :
  goto a_42;
  d_42 :
  Ccontinue(f_42);
  Rpush(g_42);
  goto m_64;
  g_42 :
  goto a_42;
  f_42 :
  Ccontinue(h_42);
  Rpush(i_42);
  goto n_64;
  i_42 :
  goto a_42;
  h_42 :
  Ccontinue(j_42);
  Rpush(k_42);
  goto o_64;
  k_42 :
  goto a_42;
  j_42 :
  Ccontinue(l_42);
  Rpush(x_42);
  goto u_64;
  x_42 :
  goto a_42;
  l_42 :
  Ccontinue(y_42);
  Rpush(z_42);
  goto v_64;
  z_42 :
  goto a_42;
  y_42 :
  Ccontinue(a_43);
  Rpush(b_43);
  goto w_64;
  b_43 :
  goto a_42;
  a_43 :
  Ccontinue(c_43);
  Rpush(t_43);
  goto x_64;
  t_43 :
  goto a_42;
  c_43 :
  Rpush(v_43);
  goto y_64;
  v_43 :
  goto u_43;
  a_42 :
  Cpop();
  u_43 :
  goto o_39;
  o_39 :
  goto n_39;
  k_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_58;
  u_58 :
  TestStr(1,1,"-S",&&fail);
  Rpush(x_43);
  goto z_64;
  x_43 :
  goto w_43;
  z_64 :
  Return();
  w_43 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(w_30));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(w_30),Egetd(0,5)));
  Return();
  l_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_58;
  x_58 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(z_43);
  goto b_65;
  z_43 :
  goto y_43;
  b_65 :
  Return();
  y_43 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(w_30));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(w_30),Egetd(0,5)));
  Return();
  m_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_59;
  a_59 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(h_44);
  goto d_65;
  h_44 :
  goto a_44;
  d_65 :
  Return();
  a_44 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(i_44));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(i_44),Egetd(0,5)));
  Return();
  n_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_59;
  d_59 :
  TestStr(1,1,"-v",&&fail);
  Rpush(t_44);
  goto f_65;
  t_44 :
  goto j_44;
  f_65 :
  Return();
  j_44 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(u_44));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(u_44),Egetd(0,5)));
  Return();
  o_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_59;
  g_59 :
  TestStr(1,1,"--version",&&fail);
  Rpush(w_44);
  goto h_65;
  w_44 :
  goto v_44;
  h_65 :
  Return();
  v_44 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(u_44));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(u_44),Egetd(0,5)));
  Return();
  p_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_59;
  j_59 :
  TestStr(1,1,"@version",&&fail);
  Rpush(y_44);
  goto j_65;
  y_44 :
  goto x_44;
  j_65 :
  Return();
  x_44 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(z_44,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(z_44,Egetd(0,1)),Egetd(0,2)));
  Return();
  q_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_59;
  n_59 :
  TestStr(1,1,"-i",&&fail);
  Rpush(b_45);
  goto m_65;
  b_45 :
  goto a_45;
  m_65 :
  Return();
  a_45 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(u_36,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(u_36,Egetd(0,1)),Egetd(0,2)));
  Return();
  r_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_59;
  r_59 :
  TestStr(1,1,"--input",&&fail);
  Rpush(g_45);
  goto p_65;
  g_45 :
  goto c_45;
  p_65 :
  Return();
  c_45 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(u_36,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(u_36,Egetd(0,1)),Egetd(0,2)));
  Return();
  s_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_59;
  v_59 :
  TestStr(1,1,"-o",&&fail);
  Rpush(i_45);
  goto s_65;
  i_45 :
  goto h_45;
  s_65 :
  Return();
  h_45 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(y_33,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(y_33,Egetd(0,1)),Egetd(0,2)));
  Return();
  t_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_59;
  z_59 :
  TestStr(1,1,"--output",&&fail);
  Rpush(k_45);
  goto v_65;
  k_45 :
  goto j_45;
  v_65 :
  Return();
  j_45 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(y_33,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(y_33,Egetd(0,1)),Egetd(0,2)));
  Return();
  u_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_60;
  d_60 :
  TestStr(1,1,"-b",&&fail);
  Rpush(m_45);
  goto y_65;
  m_45 :
  goto l_45;
  y_65 :
  Return();
  l_45 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(r_34));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(r_34),Egetd(0,5)));
  Return();
  v_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_60;
  g_60 :
  TestStr(1,1,"-s",&&fail);
  Rpush(o_45);
  goto a_66;
  o_45 :
  goto n_45;
  a_66 :
  Return();
  n_45 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(p_45));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(p_45),Egetd(0,5)));
  Return();
  w_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_60;
  j_60 :
  TestStr(1,1,"--help",&&fail);
  Rpush(r_45);
  goto c_66;
  r_45 :
  goto q_45;
  c_66 :
  Return();
  q_45 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(z_37));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(z_37),Egetd(0,5)));
  Return();
  x_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_60;
  m_60 :
  TestStr(1,1,"-h",&&fail);
  Rpush(t_45);
  goto e_66;
  t_45 :
  goto s_45;
  e_66 :
  Return();
  s_45 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(z_37));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(z_37),Egetd(0,5)));
  Return();
  y_64 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_60;
  p_60 :
  TestStr(1,1,"-?",&&fail);
  Rpush(q_46);
  goto g_66;
  q_46 :
  goto u_45;
  g_66 :
  Return();
  u_45 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(z_37));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl0(z_37),Egetd(0,5)));
  Return();
  n_39 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto j_66;
  j_66 :
  TestFunFC(n_0,&&fail,Egetd(0,1));
  Rpush(s_46);
  goto l_66;
  s_46 :
  goto r_46;
  l_66 :
  Return();
  r_46 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_13)
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(i_33,Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(t_46);
  l_67 :
  Cpush(v_46);
  Cpush(a_47);
  Ccall(_stratego_n_13);
  goto z_46;
  a_47 :
  Ccall(_stratego_m_13);
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_47);
  goto l_67;
  c_47 :
  AllBuild();
  goto b_47;
  z_46 :
  Cpop();
  b_47 :
  goto u_46;
  v_46 :
  Epushd(0,3);
  MoveTop(0,1);
  goto o_66;
  o_66 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(v_47);
  goto m_67;
  v_47 :
  goto u_47;
  m_67 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(x_38,Egetd(0,2)),Egetd(0,3)));
  Return();
  u_47 :
  Epopd(0,3);
  goto t_47;
  u_46 :
  Cpop();
  t_47 :
  Return();
  t_46 :
  AllBuild();
  Cpush(x_47);
  Ccall(_stratego_l_13);
  goto w_47;
  x_47 :
  Ccontinue(y_47);
  Epushd(0,6);
  Ccall(_stratego_g_12);
  Tdupl();
  Ccall(_stratego_e_12);
  Tpop();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  Rpush(z_47);
  n_67 :
  Cpush(b_48);
  Ccall(_stratego_n_13);
  goto a_48;
  b_48 :
  TestFunTop(m_0);
  TravInit();
  OneNextSon();
  TestFunTop(v_24);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_k_11);
  Ccall(_stratego_x_9);
  AllBuild();
  OneNextSon();
  Rpush(s_48);
  goto n_67;
  s_48 :
  AllBuild();
  goto c_48;
  a_48 :
  Cpop();
  c_48 :
  Return();
  z_47 :
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_e_12);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto r_66;
  r_66 :
  TestFunFC(q_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto s_66;
  s_66 :
  TestFunFC(q_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto t_66;
  t_66 :
  TestFunFC(r_0,&&fail,Egetd(0,6));
  Rpush(u_48);
  goto p_67;
  u_48 :
  goto t_48;
  p_67 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(q_0,(ATerm)ATmakeAppl2(m_0,(ATerm)ATmakeAppl1(c_32,Egetd(0,1)),Egetd(0,3)),(ATerm)ATmakeAppl2(q_0,Egetd(0,5),(ATerm)ATmakeAppl0(r_0))));
  Return();
  t_48 :
  Ccall(_stratego_d_12);
  Ccall(_stratego_a_12);
  Epopd(0,6);
  goto w_47;
  y_47 :
  Ccall(_stratego_m_11);
  goto v_48;
  w_47 :
  Cpop();
  v_48 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_o_13);
ENDPROC

DOIT

