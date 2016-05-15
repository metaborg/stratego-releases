#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,l_60);
VARDECL(AFun,g_58);
VARDECL(AFun,s_57);
VARDECL(AFun,p_57);
VARDECL(AFun,e_50);
VARDECL(AFun,v_49);
VARDECL(AFun,b_49);
VARDECL(AFun,x_48);
VARDECL(AFun,x_47);
VARDECL(AFun,a_47);
VARDECL(AFun,s_46);
VARDECL(AFun,j_45);
VARDECL(AFun,y_44);
VARDECL(AFun,j_44);
VARDECL(AFun,i_21);
VARDECL(AFun,x_15);
VARDECL(AFun,w_15);
VARDECL(AFun,u_15);
VARDECL(AFun,f_15);
VARDECL(AFun,v_14);
VARDECL(AFun,s_14);
VARDECL(AFun,r_14);
VARDECL(AFun,q_14);
VARDECL(AFun,e_14);
VARDECL(AFun,c_14);
VARDECL(AFun,a_14);
VARDECL(AFun,n_13);
VARDECL(AFun,k_13);
VARDECL(AFun,h_13);
VARDECL(AFun,o_12);
VARDECL(AFun,g_12);
VARDECL(AFun,w_11);
VARDECL(AFun,v_11);
VARDECL(AFun,u_11);
VARDECL(AFun,r_11);
VARDECL(AFun,q_11);
VARDECL(AFun,p_11);
VARDECL(AFun,k_11);
VARDECL(AFun,j_11);
VARDECL(AFun,v_10);
VARDECL(AFun,u_10);
VARDECL(AFun,s_10);
VARDECL(AFun,o_7);
VARDECL(AFun,h_7);
VARDECL(AFun,w_0);
VARDECL(AFun,v_0);
VARDECL(AFun,t_0);
VARDECL(AFun,l_0);
VARDECL(AFun,k_0);
VARDECL(AFun,j_0);
VARDECL(AFun,i_0);
VARDECL(AFun,c_0);
VARDECL(AFun,b_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_p_22);
PROCDECL(_stratego_q_22);
PROCDECL(_stratego_r_22);
PROCDECL(_stratego_s_22);
PROCDECL(_stratego_t_22);
PROCDECL(_stratego_u_22);
PROCDECL(_stratego_w_22);
PROCDECL(_stratego_x_22);
PROCDECL(_stratego_y_22);
PROCDECL(_stratego_g_23);
PROCDECL(_stratego_h_23);
PROCDECL(_stratego_i_23);
PROCDECL(_stratego_k_23);
PROCDECL(_stratego_l_23);
PROCDECL(_stratego_n_23);
PROCDECL(_stratego_o_23);
PROCDECL(_stratego_p_23);
PROCDECL(_stratego_q_23);
PROCDECL(_stratego_r_23);
PROCDECL(_stratego_c_24);
PROCDECL(_stratego_d_24);
PROCDECL(_stratego_e_24);
PROCDECL(_stratego_f_24);
PROCDECL(_stratego_g_24);
PROCDECL(_stratego_h_24);
PROCDECL(_stratego_i_24);
PROCDECL(_stratego_j_24);
PROCDECL(_stratego_k_24);
PROCDECL(_stratego_l_24);
PROCDECL(_stratego_m_24);
PROCDECL(_stratego_n_24);
PROCDECL(_stratego_o_24);
PROCDECL(_stratego_p_24);
PROCDECL(_stratego_q_24);
PROCDECL(_stratego_r_24);
PROCDECL(_stratego_s_24);
PROCDECL(_stratego_t_24);
PROCDECL(_stratego_u_24);
PROCDECL(_stratego_v_24);
PROCDECL(_stratego_w_24);
PROCDECL(_stratego_x_24);
PROCDECL(_stratego_y_24);
PROCDECL(_stratego_z_24);
PROCDECL(_stratego_a_25);
PROCDECL(_stratego_b_25);
PROCDECL(_stratego_c_25);
PROCDECL(_stratego_d_25);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(l_60,ATmakeAFun("Statistics",0,0));
  MOVE(g_58,ATmakeAFun("DeclVersion",1,0));
  MOVE(s_57,ATmakeAFun("Version",0,0));
  MOVE(p_57,ATmakeAFun("Verbose",0,0));
  MOVE(e_50,ATmakeAFun("Undefined",1,0));
  MOVE(v_49,ATmakeAFun("Help",0,0));
  MOVE(b_49,ATmakeAFun("stdin",0,0));
  MOVE(x_48,ATmakeAFun("Input",1,0));
  MOVE(x_47,ATmakeAFun("Binary",0,0));
  MOVE(a_47,ATmakeAFun("stdout",0,0));
  MOVE(s_46,ATmakeAFun("Output",1,0));
  MOVE(j_45,ATmakeAFun("Program",1,0));
  MOVE(y_44,ATmakeAFun("Runtime",1,0));
  MOVE(j_44,ATmakeAFun("Silent",0,0));
  MOVE(i_21,ATmakeAFun("Mod",2,0));
  MOVE(x_15,ATmakeAFun("StratRule",3,0));
  MOVE(w_15,ATmakeAFun("Rule",3,0));
  MOVE(u_15,ATmakeAFun("SRule",1,0));
  MOVE(f_15,ATmakeAFun("Con",3,0));
  MOVE(v_14,ATmakeAFun("Wld",0,0));
  MOVE(s_14,ATmakeAFun("LChoice",2,0));
  MOVE(r_14,ATmakeAFun("Id",0,0));
  MOVE(q_14,ATmakeAFun("AM",2,0));
  MOVE(e_14,ATmakeAFun("MA",2,0));
  MOVE(c_14,ATmakeAFun("BA",2,0));
  MOVE(a_14,ATmakeAFun("Lets",2,0));
  MOVE(n_13,ATmakeAFun("LChoices",1,0));
  MOVE(k_13,ATmakeAFun("Choices",1,0));
  MOVE(h_13,ATmakeAFun("Seqs",1,0));
  MOVE(o_12,ATmakeAFun("App",2,0));
  MOVE(g_12,ATmakeAFun("Cong",2,0));
  MOVE(w_11,ATmakeAFun("Op",2,0));
  MOVE(v_11,ATmakeAFun("Prim",1,0));
  MOVE(u_11,ATmakeAFun("BAM",3,0));
  MOVE(r_11,ATmakeAFun("Where",1,0));
  MOVE(q_11,ATmakeAFun("Seq",2,0));
  MOVE(p_11,ATmakeAFun("Scope",2,0));
  MOVE(k_11,ATmakeAFun("Var",1,0));
  MOVE(j_11,ATmakeAFun("Explode",2,0));
  MOVE(v_10,ATmakeAFun("ExplodeCong",2,0));
  MOVE(u_10,ATmakeAFun("Build",1,0));
  MOVE(s_10,ATmakeAFun("Match",1,0));
  MOVE(o_7,ATmakeAFun("Choice",2,0));
  MOVE(h_7,ATmakeAFun("Fail",0,0));
  MOVE(w_0,ATmakeAFun("Rec",2,0));
  MOVE(v_0,ATmakeAFun("SDef",3,0));
  MOVE(t_0,ATmakeAFun("Let",2,0));
  MOVE(l_0,ATmakeAFun("Nil",0,0));
  MOVE(k_0,ATmakeAFun("Cons",2,0));
  MOVE(j_0,ATmakeAFun("SVar",1,0));
  MOVE(i_0,ATmakeAFun("Call",2,0));
  MOVE(c_0,ATmakeAFun("TNil",0,0));
  MOVE(b_0,ATmakeAFun("stderr",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_p_22)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_x_24);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_q_22)
  Rpush(d_0);
  a_34 :
  Epushd(0,8);
  MoveTop(0,1);
  Cpush(f_0);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_6;
  n_6 :
  TestFunFC(i_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_6;
  o_6 :
  TestFunFC(j_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_0);
  goto c_34;
  h_0 :
  goto g_0;
  c_34 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_x_22);
  MoveTop(2,1);
  NotNULLd(1,3);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(a_0,Egetd(1,3),(ATerm)ATmakeAppl2(a_0,Egetd(2,1),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(l_0)));
  Epopd(2,1);
  Return();
  g_0 :
  Epopd(1,4);
  goto e_0;
  f_0 :
  Tset((ATerm)ATmakeAppl0(l_0));
  goto m_0;
  e_0 :
  Cpop();
  m_0 :
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(o_0);
  Epushd(1,3);
  Tdupl();
  Epushd(2,5);
  MoveTop(2,2);
  goto v_9;
  v_9 :
  TestFunFC(t_0,&&s_0,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  Rpush(r_0);
  goto f_34;
  s_0 :
  TestFunFC(v_0,&&u_0,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  MoveArg(2,1,2,2,2);
  Rpush(r_0);
  goto g_34;
  u_0 :
  TestFunFC(w_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  Rpush(r_0);
  goto h_34;
  r_0 :
  goto p_0;
  f_34 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(x_0);
  i_34 :
  Cpush(z_0);
  Ccall(_stratego_c_25);
  goto y_0;
  z_0 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto u_9;
  u_9 :
  TestFunFC(v_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(c_1);
  goto j_34;
  c_1 :
  goto b_1;
  j_34 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  b_1 :
  Epopd(3,4);
  OneNextSon();
  Rpush(d_1);
  goto i_34;
  d_1 :
  AllBuild();
  goto a_1;
  y_0 :
  Cpop();
  a_1 :
  Return();
  x_0 :
  Return();
  g_34 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Return();
  h_34 :
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(2,3),(ATerm)ATmakeAppl0(l_0)));
  Return();
  p_0 :
  MoveTop(2,5);
  Move(1,1,2,5);
  Epopd(2,5);
  Tpop();
  Cpush(f_1);
  TestFunTop(t_0);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(g_1);
  goto a_34;
  g_1 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,3);
  goto m_10;
  m_10 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto n_10;
  n_10 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto o_10;
  o_10 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  Rpush(i_1);
  goto o_34;
  i_1 :
  goto h_1;
  o_34 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(j_1);
  p_34 :
  Cpush(l_1);
  Ccall(_stratego_c_25);
  goto k_1;
  l_1 :
  Ccontinue(m_1);
  Epushd(3,3);
  MoveTop(3,1);
  goto l_10;
  l_10 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(o_1);
  goto q_34;
  o_1 :
  goto n_1;
  q_34 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(p_1);
  r_34 :
  Cpush(r_1);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,2),(ATerm)ATmakeAppl2(a_0,Egetd(4,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(4,2);
  goto f_10;
  f_10 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto g_10;
  g_10 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto h_10;
  h_10 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto i_10;
  i_10 :
  TestFunFC(c_0,&&fail,Egetd(4,7));
  goto j_10;
  j_10 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto k_10;
  k_10 :
  TestFunFC(c_0,&&fail,Egetd(4,10));
  Rpush(t_1);
  goto t_34;
  t_1 :
  goto s_1;
  t_34 :
  Move(4,4,4,9);
  Return();
  s_1 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto q_1;
  r_1 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_1);
  goto r_34;
  v_1 :
  AllBuild();
  goto u_1;
  q_1 :
  Cpop();
  u_1 :
  Return();
  p_1 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(w_1);
  goto p_34;
  w_1 :
  Return();
  n_1 :
  Epopd(3,3);
  goto k_1;
  m_1 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_1);
  goto p_34;
  y_1 :
  AllBuild();
  goto x_1;
  k_1 :
  Cpop();
  x_1 :
  Return();
  j_1 :
  Return();
  h_1 :
  Epopd(2,7);
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(z_1);
  goto a_34;
  z_1 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,3);
  goto h_11;
  h_11 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_11;
  s_11 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto t_11;
  t_11 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  Rpush(b_2);
  goto x_34;
  b_2 :
  goto a_2;
  x_34 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(c_2);
  y_34 :
  Cpush(e_2);
  Ccall(_stratego_c_25);
  goto d_2;
  e_2 :
  Ccontinue(f_2);
  Epushd(3,3);
  MoveTop(3,1);
  goto g_11;
  g_11 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(h_2);
  goto z_34;
  h_2 :
  goto g_2;
  z_34 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(i_2);
  a_35 :
  Cpush(k_2);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,2),(ATerm)ATmakeAppl2(a_0,Egetd(4,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(4,2);
  goto a_11;
  a_11 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto b_11;
  b_11 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto c_11;
  c_11 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto d_11;
  d_11 :
  TestFunFC(c_0,&&fail,Egetd(4,7));
  goto e_11;
  e_11 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto f_11;
  f_11 :
  TestFunFC(c_0,&&fail,Egetd(4,10));
  Rpush(m_2);
  goto c_35;
  m_2 :
  goto l_2;
  c_35 :
  Move(4,4,4,9);
  Return();
  l_2 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto j_2;
  k_2 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_2);
  goto a_35;
  o_2 :
  AllBuild();
  goto n_2;
  j_2 :
  Cpop();
  n_2 :
  Return();
  i_2 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(p_2);
  goto y_34;
  p_2 :
  Return();
  g_2 :
  Epopd(3,3);
  goto d_2;
  f_2 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_2);
  goto y_34;
  r_2 :
  AllBuild();
  goto q_2;
  d_2 :
  Cpop();
  q_2 :
  Return();
  c_2 :
  Return();
  a_2 :
  Epopd(2,7);
  AllBuild();
  goto e_1;
  f_1 :
  Ccontinue(s_2);
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  Tset((ATerm)ATmakeAppl0(l_0));
  OneNextSon();
  Tset((ATerm)ATmakeAppl0(l_0));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(t_2);
  goto a_34;
  t_2 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,3);
  goto w_13;
  w_13 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto x_13;
  x_13 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto y_13;
  y_13 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  Rpush(v_2);
  goto g_35;
  v_2 :
  goto u_2;
  g_35 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(w_2);
  h_35 :
  Cpush(y_2);
  Ccall(_stratego_c_25);
  goto x_2;
  y_2 :
  Ccontinue(z_2);
  Epushd(3,3);
  MoveTop(3,1);
  goto v_13;
  v_13 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(b_3);
  goto i_35;
  b_3 :
  goto a_3;
  i_35 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(c_3);
  j_35 :
  Cpush(e_3);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,2),(ATerm)ATmakeAppl2(a_0,Egetd(4,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(4,2);
  goto p_13;
  p_13 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto q_13;
  q_13 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto r_13;
  r_13 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto s_13;
  s_13 :
  TestFunFC(c_0,&&fail,Egetd(4,7));
  goto t_13;
  t_13 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto u_13;
  u_13 :
  TestFunFC(c_0,&&fail,Egetd(4,10));
  Rpush(g_3);
  goto l_35;
  g_3 :
  goto f_3;
  l_35 :
  Move(4,4,4,9);
  Return();
  f_3 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto d_3;
  e_3 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_3);
  goto j_35;
  i_3 :
  AllBuild();
  goto h_3;
  d_3 :
  Cpop();
  h_3 :
  Return();
  c_3 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(j_3);
  goto h_35;
  j_3 :
  Return();
  a_3 :
  Epopd(3,3);
  goto x_2;
  z_2 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_3);
  goto h_35;
  l_3 :
  AllBuild();
  goto k_3;
  x_2 :
  Cpop();
  k_3 :
  Return();
  w_2 :
  Return();
  u_2 :
  Epopd(2,7);
  AllBuild();
  goto e_1;
  s_2 :
  TestFunTop(w_0);
  TravInit();
  OneNextSon();
  Tset((ATerm)ATmakeAppl0(l_0));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(n_3);
  goto a_34;
  n_3 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,3);
  goto n_14;
  n_14 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_14;
  o_14 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto p_14;
  p_14 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  Rpush(p_3);
  goto p_35;
  p_3 :
  goto o_3;
  p_35 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(q_3);
  q_35 :
  Cpush(s_3);
  Ccall(_stratego_c_25);
  goto r_3;
  s_3 :
  Ccontinue(t_3);
  Epushd(3,3);
  MoveTop(3,1);
  goto m_14;
  m_14 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(v_3);
  goto r_35;
  v_3 :
  goto u_3;
  r_35 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(w_3);
  s_35 :
  Cpush(y_3);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,2),(ATerm)ATmakeAppl2(a_0,Egetd(4,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(4,2);
  goto g_14;
  g_14 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto h_14;
  h_14 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto i_14;
  i_14 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto j_14;
  j_14 :
  TestFunFC(c_0,&&fail,Egetd(4,7));
  goto k_14;
  k_14 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto l_14;
  l_14 :
  TestFunFC(c_0,&&fail,Egetd(4,10));
  Rpush(a_4);
  goto u_35;
  a_4 :
  goto z_3;
  u_35 :
  Move(4,4,4,9);
  Return();
  z_3 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto x_3;
  y_3 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_4);
  goto s_35;
  c_4 :
  AllBuild();
  goto b_4;
  x_3 :
  Cpop();
  b_4 :
  Return();
  w_3 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(d_4);
  goto q_35;
  d_4 :
  Return();
  u_3 :
  Epopd(3,3);
  goto r_3;
  t_3 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_4);
  goto q_35;
  f_4 :
  AllBuild();
  goto e_4;
  r_3 :
  Cpop();
  e_4 :
  Return();
  q_3 :
  Return();
  o_3 :
  Epopd(2,7);
  AllBuild();
  goto m_3;
  e_1 :
  Cpop();
  m_3 :
  MoveTop(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  _ST_explode_term();
  MoveTop(2,1);
  goto b_15;
  b_15 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto c_15;
  c_15 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto d_15;
  d_15 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(h_4);
  goto w_35;
  h_4 :
  goto g_4;
  w_35 :
  Move(1,3,2,4);
  Return();
  g_4 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(i_4);
  x_35 :
  Cpush(k_4);
  Ccall(_stratego_c_25);
  Tset((ATerm)ATmakeAppl0(l_0));
  goto j_4;
  k_4 :
  Epushd(2,3);
  MoveTop(2,1);
  goto f_18;
  f_18 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(n_4);
  goto y_35;
  n_4 :
  goto m_4;
  y_35 :
  Epushd(3,6);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(o_4);
  goto x_35;
  o_4 :
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl2(a_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(3,2);
  goto c_18;
  c_18 :
  TestFunFC(a_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto d_18;
  d_18 :
  TestFunFC(a_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto e_18;
  e_18 :
  TestFunFC(c_0,&&fail,Egetd(3,6));
  Rpush(q_4);
  goto b_36;
  q_4 :
  goto p_4;
  b_36 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(r_4);
  c_36 :
  Cpush(t_4);
  Ccall(_stratego_c_25);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  goto s_4;
  t_4 :
  Ccontinue(u_4);
  Epushd(4,3);
  MoveTop(4,1);
  goto u_17;
  u_17 :
  TestFunFC(k_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(w_4);
  goto d_36;
  w_4 :
  goto v_4;
  d_36 :
  Tdupl();
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(x_4);
  e_36 :
  Cpush(z_4);
  Epushd(5,3);
  MoveTop(5,1);
  goto t_17;
  t_17 :
  TestFunFC(k_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(b_5);
  goto f_36;
  b_5 :
  goto a_5;
  f_36 :
  Move(4,2,5,2);
  Return();
  a_5 :
  Epopd(5,3);
  goto y_4;
  z_4 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_5);
  goto e_36;
  d_5 :
  AllBuild();
  goto c_5;
  y_4 :
  Cpop();
  c_5 :
  Return();
  x_4 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(e_5);
  goto c_36;
  e_5 :
  Return();
  v_4 :
  Epopd(4,3);
  goto s_4;
  u_4 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_5);
  goto c_36;
  g_5 :
  AllBuild();
  goto f_5;
  s_4 :
  Cpop();
  f_5 :
  Return();
  r_4 :
  Return();
  p_4 :
  Epopd(3,6);
  Return();
  m_4 :
  Epopd(2,3);
  goto l_4;
  j_4 :
  Cpop();
  l_4 :
  Return();
  i_4 :
  Epopd(1,3);
  goto n_0;
  o_0 :
  Epushd(1,2);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  _ST_explode_term();
  MoveTop(2,1);
  goto k_18;
  k_18 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto l_18;
  l_18 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto m_18;
  m_18 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(j_5);
  goto h_36;
  j_5 :
  goto i_5;
  h_36 :
  Move(1,2,2,4);
  Return();
  i_5 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(k_5);
  i_36 :
  Cpush(m_5);
  Ccall(_stratego_c_25);
  Tset((ATerm)ATmakeAppl0(l_0));
  goto l_5;
  m_5 :
  Epushd(2,3);
  MoveTop(2,1);
  goto k_21;
  k_21 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(p_5);
  goto j_36;
  p_5 :
  goto o_5;
  j_36 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(q_5);
  goto a_34;
  q_5 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(r_5);
  goto i_36;
  r_5 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,1),(ATerm)ATmakeAppl2(a_0,Egetd(3,2),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(3,3);
  goto k_19;
  k_19 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto r_19;
  r_19 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto s_19;
  s_19 :
  TestFunFC(c_0,&&fail,Egetd(3,7));
  Rpush(t_5);
  goto m_36;
  t_5 :
  goto s_5;
  m_36 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(u_5);
  n_36 :
  Cpush(w_5);
  Ccall(_stratego_c_25);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto v_5;
  w_5 :
  Ccontinue(x_5);
  Epushd(4,3);
  MoveTop(4,1);
  goto j_19;
  j_19 :
  TestFunFC(k_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(z_5);
  goto o_36;
  z_5 :
  goto y_5;
  o_36 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(a_6);
  p_36 :
  Cpush(c_6);
  Epushd(5,3);
  MoveTop(5,1);
  goto i_19;
  i_19 :
  TestFunFC(k_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(e_6);
  goto q_36;
  e_6 :
  goto d_6;
  q_36 :
  Move(4,2,5,2);
  Return();
  d_6 :
  Epopd(5,3);
  goto b_6;
  c_6 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_6);
  goto p_36;
  g_6 :
  AllBuild();
  goto f_6;
  b_6 :
  Cpop();
  f_6 :
  Return();
  a_6 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(h_6);
  goto n_36;
  h_6 :
  Return();
  y_5 :
  Epopd(4,3);
  goto v_5;
  x_5 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_6);
  goto n_36;
  j_6 :
  AllBuild();
  goto i_6;
  v_5 :
  Cpop();
  i_6 :
  Return();
  u_5 :
  Return();
  s_5 :
  Epopd(3,7);
  Return();
  o_5 :
  Epopd(2,3);
  goto n_5;
  l_5 :
  Cpop();
  n_5 :
  Return();
  k_5 :
  Epopd(1,2);
  goto h_5;
  n_0 :
  Cpop();
  h_5 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,3),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(0,4);
  goto v_22;
  v_22 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto z_22;
  z_22 :
  TestFunFC(a_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto a_23;
  a_23 :
  TestFunFC(c_0,&&fail,Egetd(0,8));
  Rpush(l_6);
  goto s_36;
  l_6 :
  goto k_6;
  s_36 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(m_6);
  t_36 :
  Cpush(q_6);
  Ccall(_stratego_c_25);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  goto p_6;
  q_6 :
  Ccontinue(r_6);
  Epushd(1,3);
  MoveTop(1,1);
  goto h_22;
  h_22 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(t_6);
  goto u_36;
  t_6 :
  goto s_6;
  u_36 :
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(u_6);
  v_36 :
  Cpush(w_6);
  Epushd(2,3);
  MoveTop(2,1);
  goto g_22;
  g_22 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(y_6);
  goto w_36;
  y_6 :
  goto x_6;
  w_36 :
  Move(1,2,2,2);
  Return();
  x_6 :
  Epopd(2,3);
  goto v_6;
  w_6 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_7);
  goto v_36;
  a_7 :
  AllBuild();
  goto z_6;
  v_6 :
  Cpop();
  z_6 :
  Return();
  u_6 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(b_7);
  goto t_36;
  b_7 :
  Return();
  s_6 :
  Epopd(1,3);
  goto p_6;
  r_6 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_7);
  goto t_36;
  d_7 :
  AllBuild();
  goto c_7;
  p_6 :
  Cpop();
  c_7 :
  Return();
  m_6 :
  Return();
  k_6 :
  Epopd(0,8);
  Return();
  d_0 :
ENDPROC

PROC(_stratego_r_22)
  Rpush(e_7);
  q_37 :
  Cpush(g_7);
  Ccall(_stratego_c_25);
  Tset((ATerm)ATmakeAppl0(h_7));
  goto f_7;
  g_7 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_37;
  c_37 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(k_7);
  goto r_37;
  k_7 :
  goto j_7;
  r_37 :
  Epushd(1,5);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,3),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(m_7);
  goto q_37;
  m_7 :
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto z_36;
  z_36 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto a_37;
  a_37 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto b_37;
  b_37 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(n_7);
  goto s_37;
  n_7 :
  goto l_7;
  s_37 :
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(o_7,Egetd(1,2),Egetd(1,4)));
  Return();
  l_7 :
  Epopd(1,5);
  Return();
  j_7 :
  Epopd(0,3);
  goto i_7;
  f_7 :
  Cpop();
  i_7 :
  Return();
  e_7 :
ENDPROC

PROC(_stratego_s_22)
  Rpush(p_7);
  r_38 :
  Epushd(0,11);
  MoveTop(0,5);
  goto v_37;
  v_37 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto w_37;
  w_37 :
  TestFunFC(a_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto x_37;
  x_37 :
  TestFunFC(k_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto y_37;
  y_37 :
  TestFunFC(c_0,&&fail,Egetd(0,11));
  goto z_37;
  z_37 :
  TestFunFC(a_0,&&s_7,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto a_38;
  a_38 :
  TestFunFC(a_0,&&t_7,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto b_38;
  b_38 :
  TestFunFC(c_0,&&u_7,Egetd(0,4));
  Cpush(w_7);
  Rpush(x_7);
  goto s_38;
  x_7 :
  goto v_7;
  w_7 :
  Rpush(z_7);
  goto u_38;
  z_7 :
  goto y_7;
  v_7 :
  Cpop();
  y_7 :
  goto r_7;
  u_7 :
  Rpush(r_7);
  goto u_38;
  t_7 :
  Rpush(r_7);
  goto u_38;
  s_7 :
  Rpush(r_7);
  goto u_38;
  r_7 :
  goto q_7;
  s_38 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  u_38 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,6),(ATerm)ATmakeAppl2(a_0,Egetd(0,10),(ATerm)ATmakeAppl0(c_0))));
  Rpush(a_8);
  goto r_38;
  a_8 :
  Return();
  q_7 :
  Epopd(0,11);
  Return();
  p_7 :
ENDPROC

PROC(_stratego_t_22)
  Epushd(0,7);
  MoveTop(0,1);
  goto m_39;
  m_39 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto n_39;
  n_39 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto o_39;
  o_39 :
  TestFunFC(c_0,&&d_8,Egetd(0,5));
  Rpush(c_8);
  goto a_41;
  d_8 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto p_39;
  p_39 :
  TestFunFC(c_0,&&fail,Egetd(0,7));
  Rpush(c_8);
  goto b_41;
  c_8 :
  goto b_8;
  a_41 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  b_41 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,4),(ATerm)ATmakeAppl0(c_0))));
  Rpush(e_8);
  c_41 :
  Epushd(2,9);
  MoveTop(2,1);
  goto d_39;
  d_39 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto e_39;
  e_39 :
  TestFunFC(l_0,&&h_8,Egetd(2,2));
  goto f_39;
  f_39 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto g_39;
  g_39 :
  TestFunFC(l_0,&&fail,Egetd(2,6));
  goto h_39;
  h_39 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(g_8);
  goto d_41;
  h_8 :
  TestFunFC(k_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto i_39;
  i_39 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto j_39;
  j_39 :
  TestFunFC(k_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto k_39;
  k_39 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(g_8);
  goto e_41;
  g_8 :
  goto f_8;
  d_41 :
  Tset((ATerm)ATmakeAppl0(l_0));
  Return();
  e_41 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(2,3),(ATerm)ATmakeAppl2(a_0,Egetd(2,7),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(2,4),(ATerm)ATmakeAppl2(a_0,Egetd(2,8),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(j_8);
  goto c_41;
  j_8 :
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto a_39;
  a_39 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto b_39;
  b_39 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto c_39;
  c_39 :
  TestFunFC(c_0,&&fail,Egetd(3,5));
  Rpush(k_8);
  goto f_41;
  k_8 :
  goto i_8;
  f_41 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(3,2),Egetd(3,4)));
  Return();
  i_8 :
  Epopd(3,5);
  Return();
  f_8 :
  Epopd(2,9);
  Return();
  e_8 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl2(a_0,Egetd(0,6),(ATerm)ATmakeAppl0(c_0))));
  Epopd(1,1);
  Return();
  b_8 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_u_22)
  Epushd(0,5);
  Ccall(_stratego_t_22);
  MoveTop(0,1);
  goto p_41;
  p_41 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto q_41;
  q_41 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto r_41;
  r_41 :
  TestFunFC(c_0,&&fail,Egetd(0,5));
  Rpush(m_8);
  goto k_42;
  m_8 :
  goto l_8;
  k_42 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(n_8);
  l_42 :
  Cpush(p_8);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,4);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto m_41;
  m_41 :
  TestFunFC(i_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto n_41;
  n_41 :
  TestFunFC(j_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto o_41;
  o_41 :
  TestFunFC(l_0,&&fail,Egetd(2,4));
  Rpush(r_8);
  goto n_42;
  r_8 :
  goto q_8;
  n_42 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Move(1,2,2,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  q_8 :
  Epopd(2,4);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,3),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_s_22);
  Epopd(1,3);
  goto o_8;
  p_8 :
  AllInit();
  t_8 :
  AllNextSon(&&u_8);
  Rpush(v_8);
  goto l_42;
  v_8 :
  goto t_8;
  u_8 :
  AllBuild();
  goto s_8;
  o_8 :
  Cpop();
  s_8 :
  Return();
  n_8 :
  Return();
  l_8 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_w_22)
  Epushd(0,6);
  MoveTop(0,1);
  goto z_42;
  z_42 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto a_43;
  a_43 :
  TestFunFC(l_0,&&y_8,Egetd(0,6));
  goto b_43;
  b_43 :
  TestFunFC(v_0,&&z_8,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Cpush(b_9);
  Rpush(c_9);
  goto e_44;
  c_9 :
  goto a_9;
  b_9 :
  Rpush(e_9);
  goto f_44;
  e_9 :
  goto d_9;
  a_9 :
  Cpop();
  d_9 :
  goto x_8;
  z_8 :
  Rpush(x_8);
  goto e_44;
  y_8 :
  goto c_43;
  c_43 :
  TestFunFC(v_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(x_8);
  goto f_44;
  x_8 :
  goto w_8;
  e_44 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  f_44 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(f_9);
  g_44 :
  Cpush(h_9);
  Ccall(_stratego_c_25);
  goto g_9;
  h_9 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_24);
  OneNextSon();
  Rpush(j_9);
  goto g_44;
  j_9 :
  AllBuild();
  goto i_9;
  g_9 :
  Cpop();
  i_9 :
  Return();
  f_9 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(k_9);
  i_44 :
  Cpush(m_9);
  Ccall(_stratego_c_25);
  goto l_9;
  m_9 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(i_0,(ATerm)ATmakeAppl1(j_0,Egetd(3,1)),(ATerm)ATmakeAppl0(l_0)));
  Epopd(3,1);
  OneNextSon();
  Rpush(o_9);
  goto i_44;
  o_9 :
  AllBuild();
  goto n_9;
  l_9 :
  Cpop();
  n_9 :
  Return();
  k_9 :
  MoveTop(2,2);
  Move(1,2,2,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(p_9);
  l_44 :
  Cpush(r_9);
  Ccall(_stratego_c_25);
  goto q_9;
  r_9 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto w_42;
  w_42 :
  TestFunFC(v_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(w_9);
  goto m_44;
  w_9 :
  goto t_9;
  m_44 :
  Epushd(4,2);
  Move(0,3,3,2);
  Move(4,1,3,3);
  Move(4,2,3,4);
  NotNULLd(4,1);
  NotNULLd(1,2);
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(4,1),(ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl2(a_0,Egetd(4,2),(ATerm)ATmakeAppl0(c_0)))));
  Ccall(_stratego_u_22);
  Epopd(4,2);
  Return();
  t_9 :
  Epopd(3,4);
  OneNextSon();
  Rpush(x_9);
  goto l_44;
  x_9 :
  AllBuild();
  goto s_9;
  q_9 :
  Cpop();
  s_9 :
  Return();
  p_9 :
  MoveTop(2,3);
  Move(1,3,2,3);
  Epopd(2,3);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_r_22);
  MoveTop(1,4);
  NotNULLd(0,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl3(v_0,Egetd(0,3),Egetd(1,1),Egetd(1,4)));
  Epopd(1,4);
  Return();
  w_8 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_x_22)
  Rpush(y_9);
  z_44 :
  Cpush(a_10);
  Ccall(_stratego_c_25);
  Tset(MakeInt(0));
  goto z_9;
  a_10 :
  Epushd(0,3);
  MoveTop(0,1);
  goto r_44;
  r_44 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(d_10);
  goto a_45;
  d_10 :
  goto c_10;
  a_45 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(e_10);
  goto z_44;
  e_10 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl2(a_0,MakeInt(1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_h_24);
  Epopd(1,1);
  Return();
  c_10 :
  Epopd(0,3);
  goto b_10;
  z_9 :
  Cpop();
  b_10 :
  Return();
  y_9 :
ENDPROC

PROC(_stratego_y_22)
  Epushd(0,3);
  MoveTop(0,1);
  goto n_45;
  n_45 :
  TestFunFC(s_10,&&r_10,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(q_10);
  goto p_46;
  r_10 :
  TestFunFC(u_10,&&t_10,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(q_10);
  goto q_46;
  t_10 :
  TestFunFC(v_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(q_10);
  goto r_46;
  q_10 :
  goto p_10;
  p_46 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_24);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(w_10);
  t_46 :
  Cpush(y_10);
  Epushd(2,3);
  MoveTop(2,1);
  goto h_45;
  h_45 :
  TestFunFC(j_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(i_11);
  goto u_46;
  i_11 :
  goto z_10;
  u_46 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(k_11,Egetd(1,1)));
  Return();
  z_10 :
  Epopd(2,3);
  goto x_10;
  y_10 :
  IsAppl();
  OneInit();
  m_11 :
  OneNextSon();
  Cpush(m_11);
  Rpush(o_11);
  goto t_46;
  o_11 :
  Cpop();
  OneBuild();
  goto l_11;
  x_10 :
  Cpop();
  l_11 :
  Return();
  w_10 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(p_11,(ATerm)ATmakeAppl2(k_0,Egetd(1,1),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(q_11,(ATerm)ATmakeAppl1(s_10,Egetd(1,4)),(ATerm)ATmakeAppl1(r_11,(ATerm)ATmakeAppl3(u_11,(ATerm)ATmakeAppl1(v_11,ATmakeString("_ST_explode_term")),(ATerm)ATmakeAppl1(k_11,Egetd(1,1)),(ATerm)ATmakeAppl2(w_11,ATmakeString("TCons"),(ATerm)ATmakeAppl2(k_0,Egetd(1,2),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(w_11,ATmakeString("TCons"),(ATerm)ATmakeAppl2(k_0,Egetd(1,3),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(w_11,ATmakeString("TNil"),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl0(l_0)))))))));
  Epopd(1,4);
  Return();
  q_46 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_24);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(x_11);
  x_46 :
  Cpush(z_11);
  Epushd(2,3);
  MoveTop(2,1);
  goto l_45;
  l_45 :
  TestFunFC(j_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(b_12);
  goto y_46;
  b_12 :
  goto a_12;
  y_46 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(k_11,Egetd(1,1)));
  Return();
  a_12 :
  Epopd(2,3);
  goto y_11;
  z_11 :
  IsAppl();
  OneInit();
  d_12 :
  OneNextSon();
  Cpush(d_12);
  Rpush(f_12);
  goto x_46;
  f_12 :
  Cpop();
  OneBuild();
  goto c_12;
  y_11 :
  Cpop();
  c_12 :
  Return();
  x_11 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(p_11,(ATerm)ATmakeAppl2(k_0,Egetd(1,1),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(q_11,(ATerm)ATmakeAppl3(u_11,(ATerm)ATmakeAppl1(v_11,ATmakeString("_ST_mkterm")),(ATerm)ATmakeAppl2(w_11,ATmakeString("TCons"),(ATerm)ATmakeAppl2(k_0,Egetd(1,2),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(w_11,ATmakeString("TCons"),(ATerm)ATmakeAppl2(k_0,Egetd(1,3),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(w_11,ATmakeString("TNil"),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl1(k_11,Egetd(1,1))),(ATerm)ATmakeAppl1(u_10,Egetd(1,4)))));
  Epopd(1,4);
  Return();
  r_46 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(q_11,(ATerm)ATmakeAppl1(v_11,ATmakeString("_ST_explode_term")),(ATerm)ATmakeAppl2(q_11,(ATerm)ATmakeAppl2(g_12,ATmakeString("TCons"),(ATerm)ATmakeAppl2(k_0,Egetd(0,2),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(g_12,ATmakeString("TCons"),(ATerm)ATmakeAppl2(k_0,Egetd(0,3),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(g_12,ATmakeString("TNil"),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl1(v_11,ATmakeString("_ST_mkterm")))));
  Return();
  p_10 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_g_23)
  Epushd(0,2);
  MoveTop(0,1);
  goto f_47;
  f_47 :
  TestFunFC(u_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(i_12);
  goto s_47;
  i_12 :
  goto h_12;
  s_47 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_24);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(j_12);
  u_47 :
  Cpush(l_12);
  Epushd(2,3);
  MoveTop(2,1);
  goto d_47;
  d_47 :
  TestFunFC(o_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(n_12);
  goto v_47;
  n_12 :
  goto m_12;
  v_47 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(k_11,Egetd(1,1)));
  Return();
  m_12 :
  Epopd(2,3);
  goto k_12;
  l_12 :
  IsAppl();
  OneInit();
  q_12 :
  OneNextSon();
  Cpush(q_12);
  Rpush(s_12);
  goto u_47;
  s_12 :
  Cpop();
  OneBuild();
  goto p_12;
  k_12 :
  Cpop();
  p_12 :
  Return();
  j_12 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(p_11,(ATerm)ATmakeAppl2(k_0,Egetd(1,1),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(q_11,(ATerm)ATmakeAppl3(u_11,Egetd(1,2),Egetd(1,3),(ATerm)ATmakeAppl1(k_11,Egetd(1,1))),(ATerm)ATmakeAppl1(u_10,Egetd(1,4)))));
  Epopd(1,4);
  Return();
  h_12 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_h_23)
  Epushd(0,2);
  MoveTop(0,1);
  goto c_48;
  c_48 :
  TestFunFC(u_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(u_12);
  goto o_48;
  u_12 :
  goto t_12;
  o_48 :
  Epushd(1,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(v_12);
  p_48 :
  Cpush(x_12);
  Epushd(2,4);
  MoveTop(2,1);
  goto z_47;
  z_47 :
  TestFunFC(o_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto a_48;
  a_48 :
  TestFunFC(u_10,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(z_12);
  goto q_48;
  z_12 :
  goto y_12;
  q_48 :
  Move(1,2,2,3);
  Move(1,1,2,4);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  y_12 :
  Epopd(2,4);
  goto w_12;
  x_12 :
  IsAppl();
  OneInit();
  b_13 :
  OneNextSon();
  Cpush(b_13);
  Rpush(d_13);
  goto p_48;
  d_13 :
  Cpop();
  OneBuild();
  goto a_13;
  w_12 :
  Cpop();
  a_13 :
  Return();
  v_12 :
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl1(u_10,Egetd(1,3)));
  Epopd(1,3);
  Return();
  t_12 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_i_23)
  Epushd(0,6);
  MoveTop(0,3);
  goto e_49;
  e_49 :
  TestFunFC(h_13,&&g_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto f_49;
  f_49 :
  TestFunFC(l_0,&&i_13,Egetd(0,4));
  Rpush(f_13);
  goto g_50;
  i_13 :
  TestFunFC(k_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(f_13);
  goto h_50;
  g_13 :
  TestFunFC(k_13,&&j_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto g_49;
  g_49 :
  TestFunFC(l_0,&&l_13,Egetd(0,4));
  Rpush(f_13);
  goto i_50;
  l_13 :
  TestFunFC(k_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(f_13);
  goto j_50;
  j_13 :
  TestFunFC(n_13,&&m_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto h_49;
  h_49 :
  TestFunFC(l_0,&&o_13,Egetd(0,4));
  Rpush(f_13);
  goto k_50;
  o_13 :
  TestFunFC(k_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(f_13);
  goto l_50;
  m_13 :
  TestFunFC(a_14,&&z_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(f_13);
  goto m_50;
  z_13 :
  TestFunFC(c_14,&&b_14,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(f_13);
  goto n_50;
  b_14 :
  TestFunFC(e_14,&&d_14,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(f_13);
  goto o_50;
  d_14 :
  TestFunFC(q_14,&&f_14,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(f_13);
  goto p_50;
  f_14 :
  TestFunFC(u_11,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(f_13);
  goto q_50;
  f_13 :
  goto e_13;
  g_50 :
  Tset((ATerm)ATmakeAppl0(r_14));
  Return();
  h_50 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(q_11,Egetd(0,1),(ATerm)ATmakeAppl1(h_13,Egetd(0,2))));
  Return();
  i_50 :
  Tset((ATerm)ATmakeAppl0(h_7));
  Return();
  j_50 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(o_7,Egetd(0,1),(ATerm)ATmakeAppl1(k_13,Egetd(0,2))));
  Return();
  k_50 :
  Tset((ATerm)ATmakeAppl0(h_7));
  Return();
  l_50 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(s_14,Egetd(0,1),(ATerm)ATmakeAppl1(n_13,Egetd(0,2))));
  Return();
  m_50 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,4),Egetd(0,5)));
  Return();
  n_50 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(q_11,(ATerm)ATmakeAppl1(u_10,Egetd(0,5)),Egetd(0,4)));
  Return();
  o_50 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(q_11,(ATerm)ATmakeAppl1(s_10,Egetd(0,4)),Egetd(0,5)));
  Return();
  p_50 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(q_11,Egetd(0,4),(ATerm)ATmakeAppl1(s_10,Egetd(0,5))));
  Return();
  q_50 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl1(h_13,(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(u_10,Egetd(0,5)),(ATerm)ATmakeAppl2(k_0,Egetd(0,4),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(s_10,Egetd(0,6)),(ATerm)ATmakeAppl0(l_0))))));
  Return();
  e_13 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_k_23)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_50;
  s_50 :
  TestFunFC(v_14,&&fail,Egetd(0,1));
  Rpush(u_14);
  goto u_50;
  u_14 :
  goto t_14;
  u_50 :
  Return();
  t_14 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_23)
  Cpush(w_14);
  Tdupl();
  Rpush(x_14);
  b_51 :
  Cpush(z_14);
  Epushd(0,4);
  MoveTop(0,1);
  goto w_50;
  w_50 :
  TestFunFC(f_15,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(e_15);
  goto c_51;
  e_15 :
  goto a_15;
  c_51 :
  Return();
  a_15 :
  Epopd(0,4);
  goto y_14;
  z_14 :
  Ccall(_stratego_k_23);
  goto g_15;
  y_14 :
  Cpop();
  g_15 :
  AllInit();
  h_15 :
  AllNextSon(&&i_15);
  Rpush(j_15);
  goto b_51;
  j_15 :
  goto h_15;
  i_15 :
  AllBuild();
  Return();
  x_14 :
  Cpop();
  Crestore();
  Cjump();
  w_14 :
ENDPROC

PROC(_stratego_n_23)
  Cpush(k_15);
  Tdupl();
  Rpush(l_15);
  k_51 :
  Epushd(0,4);
  MoveTop(0,2);
  goto f_51;
  f_51 :
  TestFunFC(f_15,&&o_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,1,0,2,2);
  Rpush(n_15);
  goto l_51;
  o_15 :
  TestFunFC(o_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(n_15);
  goto m_51;
  n_15 :
  goto m_15;
  l_51 :
  Return();
  m_51 :
  Return();
  m_15 :
  AllInit();
  p_15 :
  AllNextSon(&&q_15);
  Rpush(r_15);
  goto k_51;
  r_15 :
  goto p_15;
  q_15 :
  AllBuild();
  Epopd(0,4);
  Return();
  l_15 :
  Cpop();
  Crestore();
  Cjump();
  k_15 :
ENDPROC

PROC(_stratego_o_23)
  Epushd(0,5);
  MoveTop(0,1);
  goto p_51;
  p_51 :
  TestFunFC(u_15,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto q_51;
  q_51 :
  TestFunFC(w_15,&&v_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(t_15);
  goto c_52;
  v_15 :
  TestFunFC(x_15,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(t_15);
  goto d_52;
  t_15 :
  goto s_15;
  c_52 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_n_23);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_l_23);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(h_13,(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(s_10,Egetd(0,3)),(ATerm)ATmakeAppl2(k_0,Egetd(0,5),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(u_10,Egetd(0,4)),(ATerm)ATmakeAppl0(l_0))))));
  Return();
  d_52 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(h_13,(ATerm)ATmakeAppl2(k_0,Egetd(0,3),(ATerm)ATmakeAppl2(k_0,Egetd(0,5),(ATerm)ATmakeAppl2(k_0,Egetd(0,4),(ATerm)ATmakeAppl0(l_0))))));
  Return();
  s_15 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_23)
  Epushd(0,5);
  MoveTop(0,1);
  goto q_52;
  q_52 :
  TestFunFC(u_15,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto r_52;
  r_52 :
  TestFunFC(w_15,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(z_15);
  goto x_53;
  z_15 :
  goto y_15;
  x_53 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_24);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(a_16);
  z_53 :
  Cpush(c_16);
  Epushd(2,5);
  MoveTop(2,1);
  goto h_52;
  h_52 :
  TestFunFC(f_15,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto i_52;
  i_52 :
  TestFunFC(k_11,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(e_16);
  goto a_54;
  e_16 :
  goto d_16;
  a_54 :
  Move(1,4,2,3);
  Move(1,2,2,4);
  Move(1,3,2,5);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl1(k_11,Egetd(1,4)));
  Return();
  d_16 :
  Epopd(2,5);
  goto b_16;
  c_16 :
  IsAppl();
  OneInit();
  g_16 :
  OneNextSon();
  Cpush(g_16);
  Rpush(i_16);
  goto z_53;
  i_16 :
  Cpop();
  OneBuild();
  goto f_16;
  b_16 :
  Cpop();
  f_16 :
  Return();
  a_16 :
  MoveTop(1,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(j_16);
  c_54 :
  Cpush(l_16);
  Epushd(2,7);
  MoveTop(2,1);
  goto l_52;
  l_52 :
  TestFunFC(f_15,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto m_52;
  m_52 :
  TestFunFC(k_11,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto n_52;
  n_52 :
  TestFunFC(i_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto o_52;
  o_52 :
  TestFunFC(l_0,&&fail,Egetd(2,7));
  Rpush(n_16);
  goto d_54;
  n_16 :
  goto m_16;
  d_54 :
  Move(1,4,2,3);
  Move(1,6,2,4);
  Move(1,7,2,6);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(k_11,Egetd(1,1)));
  Return();
  m_16 :
  Epopd(2,7);
  goto k_16;
  l_16 :
  IsAppl();
  OneInit();
  p_16 :
  OneNextSon();
  Cpush(p_16);
  Rpush(r_16);
  goto c_54;
  r_16 :
  Cpop();
  OneBuild();
  goto o_16;
  k_16 :
  Cpop();
  o_16 :
  Return();
  j_16 :
  MoveTop(1,8);
  NotNULLd(1,5);
  NotNULLd(1,8);
  NotNULLd(0,5);
  NotNULLd(1,7);
  NotNULLd(1,2);
  NotNULLd(1,6);
  NotNULLd(1,4);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(p_11,(ATerm)ATmakeAppl2(k_0,Egetd(1,1),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl1(u_15,(ATerm)ATmakeAppl3(w_15,Egetd(1,5),Egetd(1,8),(ATerm)ATmakeAppl2(q_11,Egetd(0,5),(ATerm)ATmakeAppl3(u_11,(ATerm)ATmakeAppl2(i_0,Egetd(1,7),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(u_15,(ATerm)ATmakeAppl3(w_15,Egetd(1,2),Egetd(1,6),(ATerm)ATmakeAppl0(r_14))),(ATerm)ATmakeAppl0(l_0))),(ATerm)ATmakeAppl1(k_11,Egetd(1,4)),(ATerm)ATmakeAppl1(k_11,Egetd(1,1))))))));
  Epopd(1,8);
  Return();
  y_15 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_q_23)
  Rpush(s_16);
  f_54 :
  Cpush(u_16);
  Cpush(w_16);
  Ccall(_stratego_p_23);
  Rpush(x_16);
  goto f_54;
  x_16 :
  goto v_16;
  w_16 :
  Ccontinue(y_16);
  TestFunTop(p_11);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_16);
  goto f_54;
  z_16 :
  AllBuild();
  goto v_16;
  y_16 :
  Ccall(_stratego_o_23);
  goto a_17;
  v_16 :
  Cpop();
  a_17 :
  goto t_16;
  u_16 :
  goto b_17;
  t_16 :
  Cpop();
  b_17 :
  Return();
  s_16 :
ENDPROC

PROC(_stratego_r_23)
  Rpush(c_17);
  p_54 :
  Cpush(e_17);
  Ccall(_stratego_q_23);
  goto d_17;
  e_17 :
  goto f_17;
  d_17 :
  Cpop();
  f_17 :
  Cpush(h_17);
  g_17 :
  Cpush(j_17);
  Ccall(_stratego_i_23);
  goto i_17;
  j_17 :
  Ccontinue(k_17);
  Cpush(m_17);
  Ccall(_stratego_h_23);
  goto l_17;
  m_17 :
  Ccontinue(n_17);
  Epushd(0,4);
  MoveTop(0,1);
  goto h_54;
  h_54 :
  TestFunFC(u_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto i_54;
  i_54 :
  TestFunFC(o_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_17);
  goto r_54;
  p_17 :
  goto o_17;
  r_54 :
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(q_11,(ATerm)ATmakeAppl1(u_10,Egetd(0,4)),Egetd(0,3)));
  Return();
  o_17 :
  Epopd(0,4);
  goto l_17;
  n_17 :
  Ccall(_stratego_g_23);
  goto q_17;
  l_17 :
  Cpop();
  q_17 :
  goto i_17;
  k_17 :
  Ccall(_stratego_y_22);
  goto r_17;
  i_17 :
  Cpop();
  r_17 :
  Tduplinv();
  goto g_17;
  h_17 :
  AllInit();
  s_17 :
  AllNextSon(&&v_17);
  Rpush(w_17);
  goto p_54;
  w_17 :
  goto s_17;
  v_17 :
  AllBuild();
  Return();
  c_17 :
ENDPROC

PROC(_stratego_c_24)
  Rpush(x_17);
  z_54 :
  Cpush(z_17);
  Ccall(_stratego_c_25);
  goto y_17;
  z_17 :
  Epushd(0,3);
  MoveTop(0,1);
  goto t_54;
  t_54 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(g_18);
  goto a_55;
  g_18 :
  goto b_18;
  a_55 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(h_18);
  b_55 :
  Cpush(j_18);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_18);
  goto b_55;
  n_18 :
  AllBuild();
  goto i_18;
  j_18 :
  Ccall(_stratego_c_25);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(p_18);
  goto z_54;
  p_18 :
  goto o_18;
  i_18 :
  Cpop();
  o_18 :
  Return();
  h_18 :
  Return();
  b_18 :
  Epopd(0,3);
  goto a_18;
  y_17 :
  Cpop();
  a_18 :
  Return();
  x_17 :
ENDPROC

PROC(_stratego_d_24)
  Rpush(q_18);
  m_55 :
  Epushd(0,3);
  MoveTop(0,1);
  goto e_55;
  e_55 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto f_55;
  f_55 :
  TestFunFC(l_0,&&t_18,Egetd(0,3));
  Cpush(v_18);
  Rpush(w_18);
  goto n_55;
  w_18 :
  goto u_18;
  v_18 :
  Rpush(y_18);
  goto o_55;
  y_18 :
  goto x_18;
  u_18 :
  Cpop();
  x_18 :
  goto s_18;
  t_18 :
  Rpush(s_18);
  goto o_55;
  s_18 :
  goto r_18;
  n_55 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  o_55 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(z_18);
  goto m_55;
  z_18 :
  Return();
  r_18 :
  Epopd(0,3);
  Return();
  q_18 :
ENDPROC

PROC(_stratego_e_24)
  _ST_new();
ENDPROC

PROC(_stratego_f_24)
  _ST_subt();
ENDPROC

PROC(_stratego_g_24)
  _ST_geq();
ENDPROC

PROC(_stratego_h_24)
  _ST_add();
ENDPROC

PROC(_stratego_i_24)
  Epushd(0,7);
  MoveTop(0,1);
  goto w_59;
  w_59 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto x_59;
  x_59 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto y_59;
  y_59 :
  TestStr(0,4,"D",&&c_19);
  goto z_59;
  z_59 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto a_60;
  a_60 :
  TestFunFC(c_0,&&fail,Egetd(0,7));
  Rpush(b_19);
  goto x_68;
  c_19 :
  TestStr(0,4,"T",&&fail);
  goto b_60;
  b_60 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto c_60;
  c_60 :
  TestFunFC(c_0,&&fail,Egetd(0,7));
  goto d_60;
  d_60 :
  TestInt(0,6,0,&&d_19);
  Cpush(f_19);
  Rpush(g_19);
  goto y_68;
  g_19 :
  goto e_19;
  f_19 :
  Rpush(l_19);
  goto z_68;
  l_19 :
  goto h_19;
  e_19 :
  Cpop();
  h_19 :
  goto b_19;
  d_19 :
  Rpush(b_19);
  goto z_68;
  b_19 :
  goto a_19;
  x_68 :
  Epushd(1,12);
  Tdupl();
  Epushd(2,6);
  Ccall(_stratego_e_24);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,6),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl1(k_11,Egetd(1,1)),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto e_57;
  e_57 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto f_57;
  f_57 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto g_57;
  g_57 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(n_19);
  goto b_69;
  n_19 :
  goto m_19;
  b_69 :
  Epushd(3,13);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,3),(ATerm)ATmakeAppl2(a_0,Egetd(2,5),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(l_0),(ATerm)ATmakeAppl0(c_0)))));
  Rpush(o_19);
  c_69 :
  Epushd(4,7);
  MoveTop(4,1);
  goto h_56;
  h_56 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto i_56;
  i_56 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto j_56;
  j_56 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto k_56;
  k_56 :
  TestFunFC(c_0,&&fail,Egetd(4,7));
  Rpush(q_19);
  goto d_69;
  q_19 :
  goto p_19;
  d_69 :
  Epushd(5,4);
  Tdupl();
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(4,2),(ATerm)ATmakeAppl2(a_0,MakeInt(1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_g_24);
  Tpop();
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(4,2),(ATerm)ATmakeAppl2(a_0,MakeInt(1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_f_24);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Tdupl();
  Epushd(6,3);
  Ccall(_stratego_e_24);
  MoveTop(6,1);
  Move(5,2,6,1);
  Ccall(_stratego_e_24);
  MoveTop(6,2);
  Move(5,3,6,2);
  Ccall(_stratego_e_24);
  MoveTop(6,3);
  Move(5,4,6,3);
  Epopd(6,3);
  Tpop();
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,2);
  NotNULLd(5,3);
  NotNULLd(5,4);
  NotNULLd(4,6);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(5,1),(ATerm)ATmakeAppl2(a_0,Egetd(4,4),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl3(u_11,(ATerm)ATmakeAppl2(i_0,(ATerm)ATmakeAppl1(j_0,Egetd(5,2)),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(w_11,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(k_11,Egetd(5,3)),(ATerm)ATmakeAppl2(k_0,Egetd(4,4),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl1(k_11,Egetd(5,4))),(ATerm)ATmakeAppl2(a_0,Egetd(5,2),(ATerm)ATmakeAppl2(a_0,Egetd(5,3),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl1(k_11,Egetd(5,3)),(ATerm)ATmakeAppl2(a_0,Egetd(5,4),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl1(k_11,Egetd(5,4)),(ATerm)ATmakeAppl0(c_0))))))),Egetd(4,6)),(ATerm)ATmakeAppl0(c_0)))));
  Cpush(u_19);
  Epushd(6,7);
  MoveTop(6,1);
  goto c_56;
  c_56 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto d_56;
  d_56 :
  TestInt(6,2,0,&&fail);
  goto e_56;
  e_56 :
  TestFunFC(a_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto f_56;
  f_56 :
  TestFunFC(a_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto g_56;
  g_56 :
  TestFunFC(c_0,&&fail,Egetd(6,7));
  Rpush(w_19);
  goto k_69;
  w_19 :
  goto v_19;
  k_69 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  v_19 :
  Epopd(6,7);
  goto t_19;
  u_19 :
  Rpush(y_19);
  goto c_69;
  y_19 :
  goto x_19;
  t_19 :
  Cpop();
  x_19 :
  Epopd(5,4);
  Return();
  p_19 :
  Epopd(4,7);
  Return();
  o_19 :
  Rpush(a_20);
  l_69 :
  Cpush(c_20);
  Epushd(4,8);
  MoveTop(4,1);
  Rpush(d_20);
  n_69 :
  Cpush(f_20);
  Ccall(_stratego_c_25);
  goto e_20;
  f_20 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto n_56;
  n_56 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(i_20);
  goto o_69;
  i_20 :
  goto h_20;
  o_69 :
  NotNULLd(5,2);
  Tset(Egetd(5,2));
  Return();
  h_20 :
  Epopd(5,3);
  OneNextSon();
  Rpush(j_20);
  goto n_69;
  j_20 :
  AllBuild();
  goto g_20;
  e_20 :
  Cpop();
  g_20 :
  Return();
  d_20 :
  MoveTop(4,2);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Rpush(k_20);
  q_69 :
  Cpush(m_20);
  Ccall(_stratego_c_25);
  goto l_20;
  m_20 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto q_56;
  q_56 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(p_20);
  goto r_69;
  p_20 :
  goto o_20;
  r_69 :
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Return();
  o_20 :
  Epopd(5,3);
  OneNextSon();
  Rpush(q_20);
  goto q_69;
  q_20 :
  AllBuild();
  goto n_20;
  l_20 :
  Cpop();
  n_20 :
  Return();
  k_20 :
  MoveTop(4,3);
  NotNULLd(4,2);
  NotNULLd(4,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(4,2),(ATerm)ATmakeAppl2(a_0,Egetd(4,3),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(s_20);
  goto l_69;
  s_20 :
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  MoveTop(4,4);
  goto t_56;
  t_56 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto u_56;
  u_56 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto v_56;
  v_56 :
  TestFunFC(c_0,&&fail,Egetd(4,8));
  Rpush(t_20);
  goto t_69;
  t_20 :
  goto r_20;
  t_69 :
  NotNULLd(4,5);
  NotNULLd(4,7);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(4,5),Egetd(4,7)));
  Return();
  r_20 :
  Epopd(4,8);
  goto b_20;
  c_20 :
  Rpush(v_20);
  u_69 :
  Cpush(x_20);
  Ccall(_stratego_c_25);
  goto w_20;
  x_20 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_24);
  OneNextSon();
  Rpush(z_20);
  goto u_69;
  z_20 :
  AllBuild();
  goto y_20;
  w_20 :
  Cpop();
  y_20 :
  Return();
  v_20 :
  Tset((ATerm)ATmakeAppl0(c_0));
  goto u_20;
  b_20 :
  Cpop();
  u_20 :
  Return();
  a_20 :
  MoveTop(3,1);
  goto x_56;
  x_56 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto y_56;
  y_56 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto z_56;
  z_56 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto a_57;
  a_57 :
  TestFunFC(a_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto b_57;
  b_57 :
  TestFunFC(a_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto c_57;
  c_57 :
  TestFunFC(a_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto d_57;
  d_57 :
  TestFunFC(c_0,&&fail,Egetd(3,13));
  Rpush(a_21);
  goto v_69;
  a_21 :
  goto z_19;
  v_69 :
  Move(1,2,3,2);
  Move(1,3,3,4);
  Move(1,4,3,6);
  Move(1,5,3,8);
  Move(1,6,3,10);
  Move(1,7,3,12);
  Return();
  z_19 :
  Epopd(3,13);
  Return();
  m_19 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,4),(ATerm)ATmakeAppl2(a_0,Egetd(1,6),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,8);
  goto j_57;
  j_57 :
  TestFunFC(a_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto k_57;
  k_57 :
  TestFunFC(a_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto l_57;
  l_57 :
  TestFunFC(c_0,&&fail,Egetd(1,12));
  Rpush(c_21);
  goto w_69;
  c_21 :
  goto b_21;
  w_69 :
  Epushd(2,1);
  NotNULLd(1,9);
  Tset(Egetd(1,9));
  Rpush(d_21);
  x_69 :
  Cpush(f_21);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_21);
  goto x_69;
  g_21 :
  AllBuild();
  goto e_21;
  f_21 :
  Ccall(_stratego_c_25);
  NotNULLd(1,11);
  Tset(Egetd(1,11));
  goto h_21;
  e_21 :
  Cpop();
  h_21 :
  Return();
  d_21 :
  MoveTop(2,1);
  NotNULLd(1,3);
  NotNULLd(2,1);
  NotNULLd(1,5);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(1,7);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl3(v_0,(ATerm)ATmakeAppl2(i_21,Egetd(0,2),ATmakeString("D")),Egetd(1,3),(ATerm)ATmakeAppl2(p_11,(ATerm)ATmakeAppl2(k_0,Egetd(1,1),Egetd(2,1)),(ATerm)ATmakeAppl1(u_15,(ATerm)ATmakeAppl3(w_15,(ATerm)ATmakeAppl2(w_11,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(w_11,Egetd(0,2),Egetd(1,5)),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(k_11,Egetd(1,1)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl2(w_11,Egetd(0,2),Egetd(1,7)),(ATerm)ATmakeAppl1(h_13,Egetd(1,2)))))));
  Epopd(2,1);
  Return();
  b_21 :
  Epopd(1,12);
  Return();
  y_68 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_24);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl3(v_0,(ATerm)ATmakeAppl2(i_21,Egetd(0,2),ATmakeString("T")),(ATerm)ATmakeAppl0(l_0),(ATerm)ATmakeAppl2(p_11,(ATerm)ATmakeAppl2(k_0,Egetd(1,1),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl1(u_15,(ATerm)ATmakeAppl3(w_15,(ATerm)ATmakeAppl2(w_11,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(w_11,Egetd(0,2),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(k_11,Egetd(1,1)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl2(w_11,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(w_11,Egetd(0,2),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(k_11,Egetd(1,1)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl0(r_14))))));
  Epopd(1,1);
  Return();
  z_68 :
  Epushd(1,10);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,6),(ATerm)ATmakeAppl2(a_0,MakeInt(1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_h_24);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,1),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(c_0),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto s_59;
  s_59 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto t_59;
  t_59 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto u_59;
  u_59 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(l_21);
  goto b_70;
  l_21 :
  goto j_21;
  b_70 :
  Epushd(3,3);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,3),(ATerm)ATmakeAppl2(a_0,Egetd(2,5),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(l_0),(ATerm)ATmakeAppl0(c_0)))));
  Rpush(n_21);
  c_70 :
  Epushd(4,7);
  MoveTop(4,1);
  goto y_57;
  y_57 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto z_57;
  z_57 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto a_58;
  a_58 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto b_58;
  b_58 :
  TestFunFC(c_0,&&fail,Egetd(4,7));
  Rpush(p_21);
  goto d_70;
  p_21 :
  goto o_21;
  d_70 :
  Epushd(5,2);
  Tdupl();
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(4,2),(ATerm)ATmakeAppl2(a_0,MakeInt(1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_g_24);
  Tpop();
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(4,2),(ATerm)ATmakeAppl2(a_0,MakeInt(1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_f_24);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Ccall(_stratego_e_24);
  MoveTop(5,2);
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,2);
  NotNULLd(4,6);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(5,1),(ATerm)ATmakeAppl2(a_0,Egetd(4,4),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,Egetd(5,2),Egetd(4,6)),(ATerm)ATmakeAppl0(c_0)))));
  Cpush(r_21);
  Epushd(6,7);
  MoveTop(6,1);
  goto t_57;
  t_57 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto u_57;
  u_57 :
  TestInt(6,2,0,&&fail);
  goto v_57;
  v_57 :
  TestFunFC(a_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto w_57;
  w_57 :
  TestFunFC(a_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto x_57;
  x_57 :
  TestFunFC(c_0,&&fail,Egetd(6,7));
  Rpush(t_21);
  goto g_70;
  t_21 :
  goto s_21;
  g_70 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  s_21 :
  Epopd(6,7);
  goto q_21;
  r_21 :
  Rpush(v_21);
  goto c_70;
  v_21 :
  goto u_21;
  q_21 :
  Cpop();
  u_21 :
  Epopd(5,2);
  Return();
  o_21 :
  Epopd(4,7);
  Return();
  n_21 :
  MoveTop(3,1);
  goto r_59;
  r_59 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(w_21);
  goto h_70;
  w_21 :
  goto m_21;
  h_70 :
  Epushd(4,14);
  Move(1,2,3,2);
  Move(1,3,3,3);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_d_24);
  MoveTop(4,1);
  Move(1,1,4,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,Egetd(1,2),Egetd(1,3)),(ATerm)ATmakeAppl2(a_0,Egetd(1,3),(ATerm)ATmakeAppl0(c_0))));
  Rpush(x_21);
  j_70 :
  Epushd(5,9);
  MoveTop(5,1);
  goto r_58;
  r_58 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,5,5,1,1);
  goto s_58;
  s_58 :
  TestFunFC(a_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,9,5,5,1);
  goto t_58;
  t_58 :
  TestFunFC(l_0,&&a_22,Egetd(5,6));
  goto u_58;
  u_58 :
  TestFunFC(c_0,&&fail,Egetd(5,9));
  goto v_58;
  v_58 :
  b_22 :
  Rpush(z_21);
  goto k_70;
  a_22 :
  TestFunFC(k_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto w_58;
  w_58 :
  TestFunFC(k_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto x_58;
  x_58 :
  TestFunFC(c_0,&&fail,Egetd(5,9));
  Rpush(z_21);
  goto l_70;
  z_21 :
  goto y_21;
  k_70 :
  Tset((ATerm)ATmakeAppl0(l_0));
  Return();
  l_70 :
  Epushd(6,5);
  NotNULLd(5,3);
  NotNULLd(5,7);
  NotNULLd(5,4);
  NotNULLd(5,8);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(5,3),(ATerm)ATmakeAppl2(a_0,Egetd(5,7),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(5,4),(ATerm)ATmakeAppl2(a_0,Egetd(5,8),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(7,5);
  MoveTop(7,1);
  goto k_58;
  k_58 :
  TestFunFC(a_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto l_58;
  l_58 :
  TestFunFC(a_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto m_58;
  m_58 :
  TestFunFC(c_0,&&fail,Egetd(7,5));
  Rpush(e_22);
  goto m_70;
  e_22 :
  goto d_22;
  m_70 :
  Epushd(8,3);
  Tdupl();
  Epushd(9,3);
  Ccall(_stratego_e_24);
  MoveTop(9,1);
  Move(8,1,9,1);
  Ccall(_stratego_e_24);
  MoveTop(9,2);
  Move(8,2,9,2);
  Ccall(_stratego_e_24);
  MoveTop(9,3);
  Move(8,3,9,3);
  Epopd(9,3);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,4);
  NotNULLd(8,1);
  NotNULLd(8,2);
  NotNULLd(8,3);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl3(u_11,(ATerm)ATmakeAppl2(i_0,(ATerm)ATmakeAppl1(j_0,Egetd(8,1)),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(w_11,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(k_11,Egetd(8,2)),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(k_11,Egetd(7,2)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl2(w_11,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(k_11,Egetd(8,3)),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(k_11,Egetd(7,4)),(ATerm)ATmakeAppl0(l_0))))),(ATerm)ATmakeAppl2(a_0,Egetd(8,1),(ATerm)ATmakeAppl2(a_0,Egetd(8,2),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl1(k_11,Egetd(8,2)),(ATerm)ATmakeAppl2(a_0,Egetd(8,3),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl1(k_11,Egetd(8,3)),(ATerm)ATmakeAppl0(c_0))))))));
  Epopd(8,3);
  Return();
  d_22 :
  Epopd(7,5);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(f_22);
  goto j_70;
  f_22 :
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  MoveTop(6,1);
  goto o_58;
  o_58 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto p_58;
  p_58 :
  TestFunFC(a_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto q_58;
  q_58 :
  TestFunFC(c_0,&&fail,Egetd(6,5));
  Rpush(i_22);
  goto q_70;
  i_22 :
  goto c_22;
  q_70 :
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(6,2),Egetd(6,4)));
  Return();
  c_22 :
  Epopd(6,5);
  Return();
  y_21 :
  Epopd(5,9);
  Return();
  x_21 :
  Rpush(k_22);
  r_70 :
  Cpush(m_22);
  Epushd(5,8);
  MoveTop(5,1);
  Rpush(n_22);
  t_70 :
  Cpush(c_23);
  Ccall(_stratego_c_25);
  goto o_22;
  c_23 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto a_59;
  a_59 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(u_23);
  goto u_70;
  u_23 :
  goto s_23;
  u_70 :
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Return();
  s_23 :
  Epopd(6,3);
  OneNextSon();
  Rpush(w_23);
  goto t_70;
  w_23 :
  AllBuild();
  goto m_23;
  o_22 :
  Cpop();
  m_23 :
  Return();
  n_22 :
  MoveTop(5,2);
  NotNULLd(5,1);
  Tset(Egetd(5,1));
  Rpush(e_25);
  w_70 :
  Cpush(k_25);
  Ccall(_stratego_c_25);
  goto f_25;
  k_25 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto d_59;
  d_59 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(n_25);
  goto x_70;
  n_25 :
  goto m_25;
  x_70 :
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Return();
  m_25 :
  Epopd(6,3);
  OneNextSon();
  Rpush(o_25);
  goto w_70;
  o_25 :
  AllBuild();
  goto l_25;
  f_25 :
  Cpop();
  l_25 :
  Return();
  e_25 :
  MoveTop(5,3);
  NotNULLd(5,2);
  NotNULLd(5,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(5,2),(ATerm)ATmakeAppl2(a_0,Egetd(5,3),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(q_25);
  goto r_70;
  q_25 :
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  MoveTop(5,4);
  goto g_59;
  g_59 :
  TestFunFC(a_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto h_59;
  h_59 :
  TestFunFC(a_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto i_59;
  i_59 :
  TestFunFC(c_0,&&fail,Egetd(5,8));
  Rpush(r_25);
  goto z_70;
  r_25 :
  goto p_25;
  z_70 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(5,5),Egetd(5,7)));
  Return();
  p_25 :
  Epopd(5,8);
  goto l_22;
  m_22 :
  Rpush(w_25);
  a_71 :
  Cpush(y_25);
  Ccall(_stratego_c_25);
  goto x_25;
  y_25 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_24);
  OneNextSon();
  Rpush(f_26);
  goto a_71;
  f_26 :
  AllBuild();
  goto e_26;
  x_25 :
  Cpop();
  e_26 :
  Return();
  w_25 :
  Tset((ATerm)ATmakeAppl0(c_0));
  goto u_25;
  l_22 :
  Cpop();
  u_25 :
  Return();
  k_22 :
  MoveTop(4,2);
  goto k_59;
  k_59 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto l_59;
  l_59 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto m_59;
  m_59 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto n_59;
  n_59 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto o_59;
  o_59 :
  TestFunFC(a_0,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,12,4,10,1);
  goto p_59;
  p_59 :
  TestFunFC(a_0,&&fail,Egetd(4,12));
  MoveArg(4,13,4,12,0);
  MoveArg(4,14,4,12,1);
  goto q_59;
  q_59 :
  TestFunFC(c_0,&&fail,Egetd(4,14));
  Rpush(j_26);
  goto b_71;
  j_26 :
  goto j_22;
  b_71 :
  Move(1,4,4,3);
  Move(1,5,4,5);
  Move(1,6,4,7);
  Move(1,7,4,9);
  Move(1,8,4,11);
  Move(1,9,4,13);
  Return();
  j_22 :
  Epopd(4,14);
  Return();
  m_21 :
  Epopd(3,3);
  Return();
  j_21 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,3);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(1,3),(ATerm)ATmakeAppl2(k_0,Egetd(1,6),(ATerm)ATmakeAppl2(k_0,Egetd(1,8),(ATerm)ATmakeAppl0(l_0)))));
  Ccall(_stratego_c_24);
  MoveTop(1,10);
  NotNULLd(1,5);
  NotNULLd(1,10);
  NotNULLd(1,7);
  NotNULLd(1,2);
  NotNULLd(0,2);
  NotNULLd(1,9);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl3(v_0,(ATerm)ATmakeAppl2(i_21,Egetd(0,2),ATmakeString("T")),Egetd(1,5),(ATerm)ATmakeAppl2(p_11,(ATerm)ATmakeAppl2(k_0,Egetd(1,2),Egetd(1,10)),(ATerm)ATmakeAppl1(u_15,(ATerm)ATmakeAppl3(w_15,(ATerm)ATmakeAppl2(w_11,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(w_11,Egetd(0,2),Egetd(1,7)),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(k_11,Egetd(1,2)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl2(w_11,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(w_11,Egetd(0,2),Egetd(1,9)),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(k_11,Egetd(1,1)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl1(h_13,Egetd(1,4)))))));
  Epopd(1,10);
  Return();
  a_19 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_j_24)
  Epushd(0,11);
  MoveTop(0,3);
  goto u_71;
  u_71 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,9,0,3,1);
  goto v_71;
  v_71 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto w_71;
  w_71 :
  TestFunFC(a_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto x_71;
  x_71 :
  TestFunFC(c_0,&&fail,Egetd(0,8));
  goto y_71;
  y_71 :
  TestFunFC(a_0,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,11,0,9,1);
  goto z_71;
  z_71 :
  TestFunFC(c_0,&&fail,Egetd(0,11));
  goto a_72;
  a_72 :
  TestInt(0,7,0,&&w_26);
  goto b_72;
  b_72 :
  TestFunFC(i_21,&&y_26,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(b_27);
  Rpush(c_27);
  goto t_73;
  c_27 :
  goto a_27;
  b_27 :
  Ccontinue(i_27);
  Rpush(j_27);
  goto u_73;
  j_27 :
  goto a_27;
  i_27 :
  Rpush(o_27);
  goto v_73;
  o_27 :
  goto n_27;
  a_27 :
  Cpop();
  n_27 :
  goto m_26;
  y_26 :
  Cpush(q_27);
  Rpush(s_27);
  goto u_73;
  s_27 :
  goto p_27;
  q_27 :
  Rpush(v_27);
  goto v_73;
  v_27 :
  goto u_27;
  p_27 :
  Cpop();
  u_27 :
  goto m_26;
  w_26 :
  goto c_72;
  c_72 :
  TestFunFC(i_21,&&w_27,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(h_28);
  Rpush(j_28);
  goto t_73;
  j_28 :
  goto f_28;
  h_28 :
  Rpush(l_28);
  goto u_73;
  l_28 :
  goto k_28;
  f_28 :
  Cpop();
  k_28 :
  goto m_26;
  w_27 :
  Rpush(m_26);
  goto u_73;
  m_26 :
  goto k_26;
  t_73 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,7),(ATerm)ATmakeAppl0(c_0)))));
  Ccall(_stratego_i_24);
  Ccall(_stratego_r_23);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  u_73 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(n_28);
  x_73 :
  Cpush(t_28);
  Ccall(_stratego_c_25);
  goto s_28;
  t_28 :
  Ccontinue(x_28);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  Move(0,5,3,1);
  Epopd(3,1);
  OneNextSon();
  Tdupl();
  Epushd(3,1);
  Ccall(_stratego_x_22);
  MoveTop(3,1);
  Move(0,7,3,1);
  Epopd(3,1);
  Tpop();
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(y_28);
  goto x_73;
  y_28 :
  AllBuild();
  goto s_28;
  x_28 :
  Epushd(3,3);
  MoveTop(3,1);
  goto m_71;
  m_71 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(m_29);
  goto a_74;
  m_29 :
  goto k_29;
  a_74 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(o_29);
  goto x_73;
  o_29 :
  Return();
  k_29 :
  Epopd(3,3);
  goto a_29;
  s_28 :
  Cpop();
  a_29 :
  Return();
  n_28 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_w_22);
  Epopd(1,1);
  Return();
  v_73 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(p_29);
  c_74 :
  Cpush(w_29);
  Ccall(_stratego_c_25);
  goto q_29;
  w_29 :
  Ccontinue(x_29);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto p_71;
  p_71 :
  TestFunFC(v_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(c_30);
  goto d_74;
  c_30 :
  goto b_30;
  d_74 :
  Move(0,5,3,2);
  Return();
  b_30 :
  Epopd(3,4);
  OneNextSon();
  Rpush(e_30);
  goto c_74;
  e_30 :
  AllBuild();
  goto q_29;
  x_29 :
  Epushd(3,3);
  MoveTop(3,1);
  goto r_71;
  r_71 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(m_30);
  goto e_74;
  m_30 :
  goto l_30;
  e_74 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(r_30);
  goto c_74;
  r_30 :
  Return();
  l_30 :
  Epopd(3,3);
  goto j_30;
  q_29 :
  Cpop();
  j_30 :
  Return();
  p_29 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_w_22);
  Epopd(1,1);
  Return();
  k_26 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_k_24)
  Epushd(0,7);
  MoveTop(0,1);
  goto i_75;
  i_75 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto j_75;
  j_75 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto k_75;
  k_75 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto l_75;
  l_75 :
  TestFunFC(c_0,&&fail,Egetd(0,6));
  Rpush(v_30);
  goto m_77;
  v_30 :
  goto u_30;
  m_77 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto i_74;
  i_74 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_74;
  j_74 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto k_74;
  k_74 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(x_30);
  goto n_77;
  x_30 :
  goto w_30;
  n_77 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  w_30 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto m_74;
  m_74 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto n_74;
  n_74 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_74;
  o_74 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(z_30);
  goto o_77;
  z_30 :
  goto y_30;
  o_77 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  y_30 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,3),(ATerm)ATmakeAppl0(c_0))));
  Rpush(i_31);
  p_77 :
  Epushd(2,9);
  MoveTop(2,1);
  goto v_74;
  v_74 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto w_74;
  w_74 :
  TestFunFC(l_0,&&l_31,Egetd(2,2));
  goto x_74;
  x_74 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto y_74;
  y_74 :
  TestFunFC(l_0,&&fail,Egetd(2,6));
  goto z_74;
  z_74 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(k_31);
  goto q_77;
  l_31 :
  TestFunFC(k_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto a_75;
  a_75 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto b_75;
  b_75 :
  TestFunFC(k_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto c_75;
  c_75 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(k_31);
  goto r_77;
  k_31 :
  goto j_31;
  q_77 :
  Tset((ATerm)ATmakeAppl0(l_0));
  Return();
  r_77 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(2,3),(ATerm)ATmakeAppl2(a_0,Egetd(2,7),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(2,4),(ATerm)ATmakeAppl2(a_0,Egetd(2,8),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(t_31);
  goto p_77;
  t_31 :
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto s_74;
  s_74 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto t_74;
  t_74 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto u_74;
  u_74 :
  TestFunFC(c_0,&&fail,Egetd(3,5));
  Rpush(u_31);
  goto s_77;
  u_31 :
  goto n_31;
  s_77 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(3,2),Egetd(3,4)));
  Return();
  n_31 :
  Epopd(3,5);
  Return();
  j_31 :
  Epopd(2,9);
  Return();
  i_31 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,4),(ATerm)ATmakeAppl2(a_0,Egetd(0,7),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,5);
  goto f_75;
  f_75 :
  TestFunFC(a_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto g_75;
  g_75 :
  TestFunFC(a_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto h_75;
  h_75 :
  TestFunFC(c_0,&&fail,Egetd(1,9));
  Rpush(z_31);
  goto u_77;
  z_31 :
  goto y_31;
  u_77 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(f_32);
  v_77 :
  Cpush(p_32);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_32);
  goto v_77;
  r_32 :
  AllBuild();
  goto o_32;
  p_32 :
  Ccall(_stratego_c_25);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto t_32;
  o_32 :
  Cpop();
  t_32 :
  Return();
  f_32 :
  Return();
  y_31 :
  Epopd(1,9);
  Return();
  u_30 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_l_24)
  Epushd(0,5);
  MoveTop(0,5);
  goto m_78;
  m_78 :
  TestFunFC(a_0,&&e_33,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto n_78;
  n_78 :
  TestFunFC(a_0,&&f_33,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto o_78;
  o_78 :
  TestFunFC(c_0,&&k_33,Egetd(0,4));
  Cpush(r_33);
  Rpush(v_33);
  goto y_79;
  v_33 :
  goto q_33;
  r_33 :
  Rpush(b_34);
  goto z_79;
  b_34 :
  goto w_33;
  q_33 :
  Cpop();
  w_33 :
  goto a_33;
  k_33 :
  Rpush(a_33);
  goto z_79;
  f_33 :
  Rpush(a_33);
  goto z_79;
  e_33 :
  Rpush(a_33);
  goto z_79;
  a_33 :
  goto z_32;
  y_79 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(d_34);
  a_80 :
  Cpush(k_34);
  Ccall(_stratego_c_25);
  goto e_34;
  k_34 :
  Ccontinue(l_34);
  Epushd(1,3);
  MoveTop(1,1);
  goto b_78;
  b_78 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(n_34);
  goto b_80;
  n_34 :
  goto m_34;
  b_80 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(s_34);
  c_80 :
  Cpush(v_34);
  Epushd(2,3);
  MoveTop(2,1);
  goto a_78;
  a_78 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(b_35);
  goto d_80;
  b_35 :
  goto w_34;
  d_80 :
  Move(1,2,2,2);
  Return();
  w_34 :
  Epopd(2,3);
  goto u_34;
  v_34 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_35);
  goto c_80;
  e_35 :
  AllBuild();
  goto d_35;
  u_34 :
  Cpop();
  d_35 :
  Return();
  s_34 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(f_35);
  goto a_80;
  f_35 :
  Return();
  m_34 :
  Epopd(1,3);
  goto e_34;
  l_34 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_35);
  goto a_80;
  m_35 :
  AllBuild();
  goto k_35;
  e_34 :
  Cpop();
  k_35 :
  Return();
  d_34 :
  Return();
  z_79 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(l_0),(ATerm)ATmakeAppl2(a_0,Egetd(0,5),(ATerm)ATmakeAppl0(c_0))));
  Rpush(n_35);
  e_80 :
  Cpush(t_35);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(z_35);
  Epushd(1,7);
  MoveTop(1,1);
  goto d_78;
  d_78 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto e_78;
  e_78 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto f_78;
  f_78 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto g_78;
  g_78 :
  TestFunFC(c_0,&&fail,Egetd(1,6));
  Rpush(g_36);
  goto f_80;
  g_36 :
  goto a_36;
  f_80 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  a_36 :
  Epopd(1,7);
  goto v_35;
  z_35 :
  Ccall(_stratego_k_24);
  goto k_36;
  v_35 :
  Cpop();
  k_36 :
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  goto o_35;
  t_35 :
  Epushd(1,7);
  MoveTop(1,1);
  goto i_78;
  i_78 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto j_78;
  j_78 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto k_78;
  k_78 :
  TestFunFC(k_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto l_78;
  l_78 :
  TestFunFC(c_0,&&fail,Egetd(1,7));
  Rpush(x_36);
  goto g_80;
  x_36 :
  goto r_36;
  g_80 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,Egetd(1,5),Egetd(1,2)),(ATerm)ATmakeAppl2(a_0,Egetd(1,6),(ATerm)ATmakeAppl0(c_0))));
  Return();
  r_36 :
  Epopd(1,7);
  goto l_36;
  o_35 :
  Cpop();
  l_36 :
  Cpush(g_37);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_25);
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  goto y_36;
  g_37 :
  Rpush(n_37);
  goto e_80;
  n_37 :
  goto h_37;
  y_36 :
  Cpop();
  h_37 :
  Return();
  n_35 :
  Return();
  z_32 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_m_24)
  Epushd(0,8);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,ATmakeString("main"),(ATerm)ATmakeAppl2(a_0,MakeInt(0),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(l_0),(ATerm)ATmakeAppl0(c_0)))));
  MoveTop(0,2);
  goto g_82;
  g_82 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto h_82;
  h_82 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto i_82;
  i_82 :
  TestFunFC(a_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto j_82;
  j_82 :
  TestFunFC(c_0,&&fail,Egetd(0,8));
  Rpush(p_37);
  goto u_86;
  p_37 :
  goto o_37;
  u_86 :
  Epushd(1,7);
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,Egetd(0,3),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,Egetd(0,3),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(a_0,Egetd(0,5),(ATerm)ATmakeAppl2(a_0,Egetd(0,7),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(l_0),(ATerm)ATmakeAppl0(c_0)))))));
  Rpush(u_37);
  v_86 :
  Epushd(2,13);
  MoveTop(2,1);
  goto e_81;
  e_81 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto f_81;
  f_81 :
  TestFunFC(k_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto g_81;
  g_81 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto h_81;
  h_81 :
  TestFunFC(a_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto i_81;
  i_81 :
  TestFunFC(a_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto j_81;
  j_81 :
  TestFunFC(a_0,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto k_81;
  k_81 :
  TestFunFC(c_0,&&fail,Egetd(2,13));
  Cpush(t_38);
  Rpush(v_38);
  goto w_86;
  v_38 :
  goto q_38;
  t_38 :
  Rpush(x_38);
  goto x_86;
  x_38 :
  goto w_38;
  q_38 :
  Cpop();
  w_38 :
  goto p_38;
  p_38 :
  goto n_38;
  w_86 :
  Epushd(3,8);
  Tdupl();
  Epushd(4,3);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,3),(ATerm)ATmakeAppl2(a_0,Egetd(2,8),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_j_24);
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Ccall(_stratego_q_22);
  MoveTop(4,2);
  Move(3,2,4,2);
  NotNULLd(3,2);
  NotNULLd(2,6);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,2),(ATerm)ATmakeAppl2(a_0,Egetd(2,6),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_l_24);
  MoveTop(4,3);
  Move(3,3,4,3);
  Epopd(4,3);
  Tpop();
  NotNULLd(3,3);
  NotNULLd(2,4);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,3),(ATerm)ATmakeAppl2(a_0,Egetd(2,4),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(3,4);
  goto b_81;
  b_81 :
  TestFunFC(a_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto c_81;
  c_81 :
  TestFunFC(a_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto d_81;
  d_81 :
  TestFunFC(c_0,&&fail,Egetd(3,8));
  Rpush(z_38);
  goto b_87;
  z_38 :
  goto y_38;
  b_87 :
  Epushd(4,6);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(l_39);
  c_87 :
  Cpush(z_39);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_40);
  goto c_87;
  a_40 :
  AllBuild();
  goto x_39;
  z_39 :
  Ccall(_stratego_c_25);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto b_40;
  x_39 :
  Cpop();
  b_40 :
  Return();
  l_39 :
  MoveTop(4,1);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,3),(ATerm)ATmakeAppl2(a_0,Egetd(2,6),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(4,2);
  goto y_80;
  y_80 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto z_80;
  z_80 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto a_81;
  a_81 :
  TestFunFC(c_0,&&fail,Egetd(4,6));
  Rpush(d_40);
  goto e_87;
  d_40 :
  goto c_40;
  e_87 :
  Epushd(5,8);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(n_40);
  f_87 :
  Cpush(p_40);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_40);
  goto f_87;
  q_40 :
  AllBuild();
  goto o_40;
  p_40 :
  Ccall(_stratego_c_25);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto w_40;
  o_40 :
  Cpop();
  w_40 :
  Return();
  n_40 :
  MoveTop(5,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,3),(ATerm)ATmakeAppl2(a_0,Egetd(3,1),(ATerm)ATmakeAppl2(a_0,Egetd(2,10),(ATerm)ATmakeAppl0(c_0)))));
  MoveTop(5,2);
  goto u_80;
  u_80 :
  TestFunFC(a_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto v_80;
  v_80 :
  TestFunFC(a_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto w_80;
  w_80 :
  TestFunFC(a_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto x_80;
  x_80 :
  TestFunFC(c_0,&&fail,Egetd(5,8));
  Rpush(z_40);
  goto h_87;
  z_40 :
  goto x_40;
  h_87 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(5,5),Egetd(5,7)));
  NotNULLd(4,1);
  NotNULLd(5,1);
  NotNULLd(2,8);
  NotNULLd(5,5);
  NotNULLd(5,7);
  NotNULLd(2,12);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(4,1),(ATerm)ATmakeAppl2(a_0,Egetd(5,1),(ATerm)ATmakeAppl2(a_0,Egetd(2,8),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,Egetd(5,5),Egetd(5,7)),(ATerm)ATmakeAppl2(a_0,Egetd(2,12),(ATerm)ATmakeAppl0(c_0)))))));
  Return();
  x_40 :
  Epopd(5,8);
  Return();
  c_40 :
  Epopd(4,6);
  Return();
  y_38 :
  Epopd(3,8);
  Return();
  x_86 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,4),(ATerm)ATmakeAppl2(a_0,Egetd(2,6),(ATerm)ATmakeAppl2(a_0,Egetd(2,8),(ATerm)ATmakeAppl2(a_0,Egetd(2,10),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,Egetd(2,3),Egetd(2,12)),(ATerm)ATmakeAppl0(c_0)))))));
  Return();
  n_38 :
  Cpush(h_41);
  Epushd(3,11);
  MoveTop(3,1);
  goto m_81;
  m_81 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto n_81;
  n_81 :
  TestFunFC(l_0,&&fail,Egetd(3,2));
  goto o_81;
  o_81 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto p_81;
  p_81 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto q_81;
  q_81 :
  TestFunFC(a_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto r_81;
  r_81 :
  TestFunFC(a_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto s_81;
  s_81 :
  TestFunFC(c_0,&&fail,Egetd(3,11));
  Rpush(j_41);
  goto j_87;
  j_41 :
  goto i_41;
  j_87 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,8),(ATerm)ATmakeAppl2(a_0,Egetd(3,10),(ATerm)ATmakeAppl0(c_0))));
  Return();
  i_41 :
  Epopd(3,11);
  goto g_41;
  h_41 :
  Rpush(l_41);
  goto v_86;
  l_41 :
  goto k_41;
  g_41 :
  Cpop();
  k_41 :
  Epopd(2,13);
  Return();
  u_37 :
  MoveTop(1,1);
  goto b_82;
  b_82 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_82;
  c_82 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto d_82;
  d_82 :
  TestFunFC(l_0,&&y_41,Egetd(1,4));
  goto e_82;
  e_82 :
  TestFunFC(c_0,&&fail,Egetd(1,7));
  Rpush(x_41);
  goto k_87;
  y_41 :
  TestFunFC(k_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto f_82;
  f_82 :
  TestFunFC(c_0,&&fail,Egetd(1,7));
  Rpush(x_41);
  goto l_87;
  x_41 :
  goto t_37;
  k_87 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  l_87 :
  Tdupl();
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(1,5),Egetd(1,6)));
  Rpush(a_42);
  m_87 :
  Cpush(i_42);
  Ccall(_stratego_c_25);
  goto h_42;
  i_42 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,3);
  goto x_81;
  x_81 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto y_81;
  y_81 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto z_81;
  z_81 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  goto a_82;
  a_82 :
  TestFunFC(i_21,&&p_42,Egetd(2,4));
  MoveArg(2,1,2,4,0);
  MoveArg(2,2,2,4,1);
  Cpush(r_42);
  Rpush(s_42);
  goto n_87;
  s_42 :
  goto q_42;
  r_42 :
  Rpush(u_42);
  goto o_87;
  u_42 :
  goto t_42;
  q_42 :
  Cpop();
  t_42 :
  goto o_42;
  p_42 :
  Rpush(o_42);
  goto o_87;
  o_42 :
  goto m_42;
  n_87 :
  NotNULLd(2,1);
  NotNULLd(2,2);
  NotNULLd(2,6);
  Tset((ATerm)ATmakeAppl2(k_0,ATmakeString("error: operator "),(ATerm)ATmakeAppl2(k_0,Egetd(2,1),(ATerm)ATmakeAppl2(k_0,ATmakeString("^"),(ATerm)ATmakeAppl2(k_0,Egetd(2,2),(ATerm)ATmakeAppl2(k_0,ATmakeString("/"),(ATerm)ATmakeAppl2(k_0,Egetd(2,6),(ATerm)ATmakeAppl2(k_0,ATmakeString(" undefined "),(ATerm)ATmakeAppl0(l_0)))))))));
  Ccall(_stratego_p_22);
  Return();
  o_87 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  Tset((ATerm)ATmakeAppl2(k_0,ATmakeString("error: operator "),(ATerm)ATmakeAppl2(k_0,Egetd(2,4),(ATerm)ATmakeAppl2(k_0,ATmakeString("/"),(ATerm)ATmakeAppl2(k_0,Egetd(2,6),(ATerm)ATmakeAppl2(k_0,ATmakeString(" undefined "),(ATerm)ATmakeAppl0(l_0)))))));
  Ccall(_stratego_p_22);
  Return();
  m_42 :
  Epopd(2,7);
  OneNextSon();
  Rpush(v_42);
  goto m_87;
  v_42 :
  AllBuild();
  goto j_42;
  h_42 :
  Cpop();
  j_42 :
  Return();
  a_42 :
  Tpop();
  Tset(MakeInt(1));
  Ccall(_stratego_w_24);
  Return();
  t_37 :
  Epopd(1,7);
  Return();
  o_37 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_n_24)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_87;
  q_87 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  Rpush(y_42);
  goto s_87;
  y_42 :
  goto x_42;
  s_87 :
  Return();
  x_42 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_24)
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_x_24);
  Tset(MakeInt(1));
  Ccall(_stratego_w_24);
ENDPROC

PROC(_stratego_p_24)
  Epushd(0,2);
  Tdupl();
  Cpush(k_43);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(l_43);
  Tdupl();
  Rpush(m_43);
  p_88 :
  Cpush(t_43);
  Epushd(1,3);
  MoveTop(1,1);
  goto u_87;
  u_87 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_87;
  v_87 :
  TestFunFC(j_44,&&fail,Egetd(1,2));
  Rpush(h_44);
  goto q_88;
  h_44 :
  goto d_44;
  q_88 :
  Return();
  d_44 :
  Epopd(1,3);
  goto n_43;
  t_43 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_44);
  goto p_88;
  n_44 :
  AllBuild();
  goto k_44;
  n_43 :
  Cpop();
  k_44 :
  Return();
  m_43 :
  Cpop();
  Crestore();
  Cjump();
  l_43 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(o_44);
  r_88 :
  Cpush(q_44);
  Epushd(1,4);
  MoveTop(1,1);
  goto x_87;
  x_87 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto y_87;
  y_87 :
  TestFunFC(y_44,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(w_44);
  goto s_88;
  w_44 :
  goto v_44;
  s_88 :
  Move(0,2,1,3);
  Return();
  v_44 :
  Epopd(1,4);
  goto p_44;
  q_44 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_45);
  goto r_88;
  c_45 :
  AllBuild();
  goto b_45;
  p_44 :
  Cpop();
  b_45 :
  Return();
  o_44 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(d_45);
  t_88 :
  Cpush(f_45);
  Epushd(1,4);
  MoveTop(1,1);
  goto a_88;
  a_88 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto b_88;
  b_88 :
  TestFunFC(j_45,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(i_45);
  goto u_88;
  i_45 :
  goto g_45;
  u_88 :
  Move(0,1,1,3);
  Return();
  g_45 :
  Epopd(1,4);
  goto e_45;
  f_45 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_45);
  goto t_88;
  m_45 :
  AllBuild();
  goto k_45;
  e_45 :
  Cpop();
  k_45 :
  Return();
  d_45 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,Egetd(0,1),(ATerm)ATmakeAppl2(k_0,ATmakeString(" ("),(ATerm)ATmakeAppl2(k_0,Egetd(0,2),(ATerm)ATmakeAppl2(k_0,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(l_0))))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_x_24);
  goto j_43;
  k_43 :
  goto r_45;
  j_43 :
  Cpop();
  r_45 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_w_24);
  Epopd(0,2);
ENDPROC

PROC(_stratego_q_24)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_r_24)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_s_24)
  Epushd(0,1);
  Tdupl();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(b_46);
  Rpush(c_46);
  u_89 :
  Cpush(m_46);
  Epushd(1,4);
  MoveTop(1,1);
  goto w_88;
  w_88 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto x_88;
  x_88 :
  TestFunFC(s_46,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_46);
  goto v_89;
  o_46 :
  goto n_46;
  v_89 :
  Move(0,1,1,3);
  Return();
  n_46 :
  Epopd(1,4);
  goto d_46;
  m_46 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_46);
  goto u_89;
  w_46 :
  AllBuild();
  goto v_46;
  d_46 :
  Cpop();
  v_46 :
  Return();
  c_46 :
  goto s_45;
  b_46 :
  Tset((ATerm)ATmakeAppl0(a_47));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(a_47));
  MoveTop(0,1);
  Tpop();
  goto z_46;
  s_45 :
  Cpop();
  z_46 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  Cpush(c_47);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(e_47);
  a_90 :
  Cpush(r_47);
  Epushd(1,3);
  MoveTop(1,1);
  goto d_89;
  d_89 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_89;
  e_89 :
  TestFunFC(x_47,&&fail,Egetd(1,2));
  Rpush(w_47);
  goto b_90;
  w_47 :
  goto t_47;
  b_90 :
  Return();
  t_47 :
  Epopd(1,3);
  goto i_47;
  r_47 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_48);
  goto a_90;
  b_48 :
  AllBuild();
  goto y_47;
  i_47 :
  Cpop();
  y_47 :
  Return();
  e_47 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_24);
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  goto b_47;
  c_47 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_24);
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  goto f_48;
  b_47 :
  Cpop();
  f_48 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_24)
  _ST_dtime();
ENDPROC

PROC(_stratego_u_24)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_v_24)
  Epushd(0,3);
  Tdupl();
  Cpush(r_48);
  Rpush(s_48);
  v_90 :
  Cpush(u_48);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_90;
  d_90 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_90;
  e_90 :
  TestFunFC(x_48,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(w_48);
  goto w_90;
  w_48 :
  goto v_48;
  w_90 :
  Move(0,1,1,3);
  Return();
  v_48 :
  Epopd(1,4);
  goto t_48;
  u_48 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_48);
  goto v_90;
  z_48 :
  AllBuild();
  goto y_48;
  t_48 :
  Cpop();
  y_48 :
  Return();
  s_48 :
  goto n_48;
  r_48 :
  Tset((ATerm)ATmakeAppl0(b_49));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(b_49));
  MoveTop(0,1);
  Tpop();
  goto a_49;
  n_48 :
  Cpop();
  a_49 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_u_24);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,3),(ATerm)ATmakeAppl0(c_0))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_w_24)
  _ST_exit();
ENDPROC

PROC(_stratego_x_24)
  _ST_printnl();
ENDPROC

PROC(_stratego_y_24)
  Epushd(0,1);
  Tdupl();
  Rpush(c_49);
  j_91 :
  Cpush(o_49);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_91;
  c_91 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_91;
  d_91 :
  TestFunFC(j_45,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(q_49);
  goto k_91;
  q_49 :
  goto p_49;
  k_91 :
  Move(0,1,1,3);
  Return();
  p_49 :
  Epopd(1,4);
  goto d_49;
  o_49 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_49);
  goto j_91;
  s_49 :
  AllBuild();
  goto r_49;
  d_49 :
  Cpop();
  r_49 :
  Return();
  c_49 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,ATmakeString("usage : "),(ATerm)ATmakeAppl2(k_0,Egetd(0,1),(ATerm)ATmakeAppl2(k_0,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_x_24);
  Tset(MakeInt(1));
  Ccall(_stratego_w_24);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_24)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_91;
  m_91 :
  TestFunFC(v_49,&&fail,Egetd(0,1));
  Rpush(u_49);
  goto o_91;
  u_49 :
  goto t_49;
  o_91 :
  Return();
  t_49 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_25)
  Rpush(w_49);
  t_91 :
  Cpush(y_49);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Cpush(a_50);
  Ccall(_stratego_z_24);
  goto z_49;
  a_50 :
  Epushd(0,2);
  MoveTop(0,1);
  goto q_91;
  q_91 :
  TestFunFC(e_50,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_50);
  goto u_91;
  d_50 :
  goto c_50;
  u_91 :
  Return();
  c_50 :
  Epopd(0,2);
  goto b_50;
  z_49 :
  Cpop();
  b_50 :
  OneNextSon();
  AllBuild();
  goto x_49;
  y_49 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_50);
  goto t_91;
  r_50 :
  AllBuild();
  goto f_50;
  x_49 :
  Cpop();
  f_50 :
  Return();
  w_49 :
  Ccall(_stratego_y_24);
ENDPROC

PROC(_stratego_b_25)
  Epushd(0,5);
  MoveTop(0,3);
  goto i_94;
  i_94 :
  TestFunFC(k_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto j_94;
  j_94 :
  TestFunFC(k_0,&&e_51,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(o_51);
  Rpush(w_51);
  goto b_98;
  w_51 :
  goto n_51;
  o_51 :
  Ccontinue(x_51);
  Rpush(y_51);
  goto c_98;
  y_51 :
  goto n_51;
  x_51 :
  Ccontinue(z_51);
  Rpush(a_52);
  goto d_98;
  a_52 :
  goto n_51;
  z_51 :
  Ccontinue(b_52);
  Rpush(e_52);
  goto e_98;
  e_52 :
  goto n_51;
  b_52 :
  Ccontinue(f_52);
  Rpush(g_52);
  goto f_98;
  g_52 :
  goto n_51;
  f_52 :
  Ccontinue(j_52);
  Rpush(k_52);
  goto g_98;
  k_52 :
  goto n_51;
  j_52 :
  Ccontinue(p_52);
  Rpush(x_52);
  goto h_98;
  x_52 :
  goto n_51;
  p_52 :
  Ccontinue(y_52);
  Rpush(z_52);
  goto i_98;
  z_52 :
  goto n_51;
  y_52 :
  Ccontinue(l_53);
  Rpush(w_53);
  goto j_98;
  w_53 :
  goto n_51;
  l_53 :
  Ccontinue(y_53);
  Rpush(b_54);
  goto k_98;
  b_54 :
  goto n_51;
  y_53 :
  Ccontinue(e_54);
  Rpush(g_54);
  goto l_98;
  g_54 :
  goto n_51;
  e_54 :
  Ccontinue(n_54);
  Rpush(o_54);
  goto m_98;
  o_54 :
  goto n_51;
  n_54 :
  Ccontinue(s_54);
  Rpush(x_54);
  goto n_98;
  x_54 :
  goto n_51;
  s_54 :
  Ccontinue(y_54);
  Rpush(c_55);
  goto o_98;
  c_55 :
  goto n_51;
  y_54 :
  Rpush(j_55);
  goto p_98;
  j_55 :
  goto d_55;
  n_51 :
  Cpop();
  d_55 :
  goto d_51;
  e_51 :
  Cpush(l_55);
  Rpush(p_55);
  goto b_98;
  p_55 :
  goto k_55;
  l_55 :
  Ccontinue(q_55);
  Rpush(r_55);
  goto c_98;
  r_55 :
  goto k_55;
  q_55 :
  Ccontinue(s_55);
  Rpush(t_55);
  goto d_98;
  t_55 :
  goto k_55;
  s_55 :
  Ccontinue(u_55);
  Rpush(v_55);
  goto e_98;
  v_55 :
  goto k_55;
  u_55 :
  Ccontinue(w_55);
  Rpush(x_55);
  goto f_98;
  x_55 :
  goto k_55;
  w_55 :
  Ccontinue(y_55);
  Rpush(z_55);
  goto l_98;
  z_55 :
  goto k_55;
  y_55 :
  Ccontinue(a_56);
  Rpush(b_56);
  goto m_98;
  b_56 :
  goto k_55;
  a_56 :
  Ccontinue(l_56);
  Rpush(m_56);
  goto n_98;
  m_56 :
  goto k_55;
  l_56 :
  Ccontinue(o_56);
  Rpush(p_56);
  goto o_98;
  p_56 :
  goto k_55;
  o_56 :
  Rpush(s_56);
  goto p_98;
  s_56 :
  goto r_56;
  k_55 :
  Cpop();
  r_56 :
  goto d_51;
  d_51 :
  goto v_50;
  b_98 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_92;
  l_92 :
  TestStr(1,1,"-S",&&fail);
  Rpush(h_57);
  goto q_98;
  h_57 :
  goto w_56;
  q_98 :
  Return();
  w_56 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(j_44));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(j_44),Egetd(0,5)));
  Return();
  c_98 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_92;
  o_92 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(m_57);
  goto s_98;
  m_57 :
  goto i_57;
  s_98 :
  Return();
  i_57 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(j_44));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(j_44),Egetd(0,5)));
  Return();
  d_98 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_92;
  r_92 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(o_57);
  goto u_98;
  o_57 :
  goto n_57;
  u_98 :
  Return();
  n_57 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(p_57));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(p_57),Egetd(0,5)));
  Return();
  e_98 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_92;
  u_92 :
  TestStr(1,1,"-v",&&fail);
  Rpush(r_57);
  goto w_98;
  r_57 :
  goto q_57;
  w_98 :
  Return();
  q_57 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(s_57));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(s_57),Egetd(0,5)));
  Return();
  f_98 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_92;
  x_92 :
  TestStr(1,1,"--version",&&fail);
  Rpush(d_58);
  goto y_98;
  d_58 :
  goto c_58;
  y_98 :
  Return();
  c_58 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(s_57));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(s_57),Egetd(0,5)));
  Return();
  g_98 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_93;
  a_93 :
  TestStr(1,1,"@version",&&fail);
  Rpush(f_58);
  goto a_99;
  f_58 :
  goto e_58;
  a_99 :
  Return();
  e_58 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(g_58,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(g_58,Egetd(0,1)),Egetd(0,2)));
  Return();
  h_98 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_93;
  e_93 :
  TestStr(1,1,"-i",&&fail);
  Rpush(i_58);
  goto d_99;
  i_58 :
  goto h_58;
  d_99 :
  Return();
  h_58 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(x_48,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(x_48,Egetd(0,1)),Egetd(0,2)));
  Return();
  i_98 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_93;
  i_93 :
  TestStr(1,1,"--input",&&fail);
  Rpush(n_58);
  goto g_99;
  n_58 :
  goto j_58;
  g_99 :
  Return();
  j_58 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(x_48,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(x_48,Egetd(0,1)),Egetd(0,2)));
  Return();
  j_98 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_93;
  m_93 :
  TestStr(1,1,"-o",&&fail);
  Rpush(z_58);
  goto j_99;
  z_58 :
  goto y_58;
  j_99 :
  Return();
  y_58 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(s_46,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(s_46,Egetd(0,1)),Egetd(0,2)));
  Return();
  k_98 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_93;
  q_93 :
  TestStr(1,1,"--output",&&fail);
  Rpush(c_59);
  goto m_99;
  c_59 :
  goto b_59;
  m_99 :
  Return();
  b_59 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(s_46,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(s_46,Egetd(0,1)),Egetd(0,2)));
  Return();
  l_98 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_93;
  u_93 :
  TestStr(1,1,"-b",&&fail);
  Rpush(f_59);
  goto p_99;
  f_59 :
  goto e_59;
  p_99 :
  Return();
  e_59 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_47));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(x_47),Egetd(0,5)));
  Return();
  m_98 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_93;
  x_93 :
  TestStr(1,1,"-s",&&fail);
  Rpush(v_59);
  goto r_99;
  v_59 :
  goto j_59;
  r_99 :
  Return();
  j_59 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(l_60));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(l_60),Egetd(0,5)));
  Return();
  n_98 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_94;
  a_94 :
  TestStr(1,1,"--help",&&fail);
  Rpush(a_61);
  goto t_99;
  a_61 :
  goto m_60;
  t_99 :
  Return();
  m_60 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(v_49));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(v_49),Egetd(0,5)));
  Return();
  o_98 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_94;
  d_94 :
  TestStr(1,1,"-h",&&fail);
  Rpush(j_61);
  goto v_99;
  j_61 :
  goto b_61;
  v_99 :
  Return();
  b_61 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(v_49));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(v_49),Egetd(0,5)));
  Return();
  p_98 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_94;
  g_94 :
  TestStr(1,1,"-?",&&fail);
  Rpush(l_61);
  goto x_99;
  l_61 :
  goto k_61;
  x_99 :
  Return();
  k_61 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(v_49));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(v_49),Egetd(0,5)));
  Return();
  v_50 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_c_25)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_100;
  a_100 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  Rpush(o_61);
  goto c_100;
  o_61 :
  goto n_61;
  c_100 :
  Return();
  n_61 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_25)
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(j_45,Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(p_61);
  c_101 :
  Cpush(x_61);
  Cpush(g_62);
  Ccall(_stratego_c_25);
  goto f_62;
  g_62 :
  Ccall(_stratego_b_25);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_62);
  goto c_101;
  m_62 :
  AllBuild();
  goto i_62;
  f_62 :
  Cpop();
  i_62 :
  goto w_61;
  x_61 :
  Epushd(0,3);
  MoveTop(0,1);
  goto f_100;
  f_100 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(t_62);
  goto d_101;
  t_62 :
  goto p_62;
  d_101 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(e_50,Egetd(0,2)),Egetd(0,3)));
  Return();
  p_62 :
  Epopd(0,3);
  goto n_62;
  w_61 :
  Cpop();
  n_62 :
  Return();
  p_61 :
  AllBuild();
  Cpush(w_62);
  Ccall(_stratego_a_25);
  goto u_62;
  w_62 :
  Ccontinue(c_63);
  Epushd(0,6);
  Ccall(_stratego_v_24);
  Tdupl();
  Ccall(_stratego_t_24);
  Tpop();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_24);
  OneNextSon();
  Ccall(_stratego_n_24);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_t_24);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto i_100;
  i_100 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto j_100;
  j_100 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto k_100;
  k_100 :
  TestFunFC(c_0,&&fail,Egetd(0,6));
  Rpush(w_63);
  goto f_101;
  w_63 :
  goto d_63;
  f_101 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(y_44,Egetd(0,1)),Egetd(0,3)),(ATerm)ATmakeAppl2(a_0,Egetd(0,5),(ATerm)ATmakeAppl0(c_0))));
  Return();
  d_63 :
  Ccall(_stratego_s_24);
  Ccall(_stratego_p_24);
  Epopd(0,6);
  goto u_62;
  c_63 :
  Ccall(_stratego_o_24);
  goto x_63;
  u_62 :
  Cpop();
  x_63 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_d_25);
ENDPROC

DOIT

