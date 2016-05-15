#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,s_62);
VARDECL(AFun,g_61);
VARDECL(AFun,o_59);
VARDECL(AFun,h_59);
VARDECL(AFun,y_52);
VARDECL(AFun,a_52);
VARDECL(AFun,u_50);
VARDECL(AFun,c_50);
VARDECL(AFun,r_49);
VARDECL(AFun,z_48);
VARDECL(AFun,v_48);
VARDECL(AFun,s_47);
VARDECL(AFun,w_46);
VARDECL(AFun,p_45);
VARDECL(AFun,t_20);
VARDECL(AFun,q_15);
VARDECL(AFun,p_15);
VARDECL(AFun,n_15);
VARDECL(AFun,y_14);
VARDECL(AFun,o_14);
VARDECL(AFun,l_14);
VARDECL(AFun,k_14);
VARDECL(AFun,i_14);
VARDECL(AFun,g_14);
VARDECL(AFun,x_13);
VARDECL(AFun,u_13);
VARDECL(AFun,r_13);
VARDECL(AFun,o_13);
VARDECL(AFun,l_13);
VARDECL(AFun,s_12);
VARDECL(AFun,k_12);
VARDECL(AFun,a_12);
VARDECL(AFun,z_11);
VARDECL(AFun,y_11);
VARDECL(AFun,x_11);
VARDECL(AFun,w_11);
VARDECL(AFun,v_11);
VARDECL(AFun,p_11);
VARDECL(AFun,o_11);
VARDECL(AFun,i_11);
VARDECL(AFun,h_11);
VARDECL(AFun,f_11);
VARDECL(AFun,e_8);
VARDECL(AFun,t_7);
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
PROCDECL(_stratego_n_21);
PROCDECL(_stratego_o_21);
PROCDECL(_stratego_p_21);
PROCDECL(_stratego_q_21);
PROCDECL(_stratego_r_21);
PROCDECL(_stratego_c_24);
PROCDECL(_stratego_d_24);
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
PROCDECL(_stratego_e_25);
PROCDECL(_stratego_f_25);
PROCDECL(_stratego_g_25);
PROCDECL(_stratego_h_25);
PROCDECL(_stratego_i_25);
PROCDECL(_stratego_j_25);
PROCDECL(_stratego_k_25);
PROCDECL(_stratego_l_25);
PROCDECL(_stratego_m_25);
PROCDECL(_stratego_n_25);
PROCDECL(_stratego_c_26);
PROCDECL(_stratego_d_26);
PROCDECL(_stratego_e_26);
PROCDECL(_stratego_f_26);
PROCDECL(_stratego_g_26);
PROCDECL(_stratego_h_26);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(s_62,ATmakeAFun("Statistics",0,0));
  MOVE(g_61,ATmakeAFun("DeclVersion",1,0));
  MOVE(o_59,ATmakeAFun("Version",0,0));
  MOVE(h_59,ATmakeAFun("Verbose",0,0));
  MOVE(y_52,ATmakeAFun("Undefined",1,0));
  MOVE(a_52,ATmakeAFun("Help",0,0));
  MOVE(u_50,ATmakeAFun("stdin",0,0));
  MOVE(c_50,ATmakeAFun("Input",1,0));
  MOVE(r_49,ATmakeAFun("Binary",0,0));
  MOVE(z_48,ATmakeAFun("stdout",0,0));
  MOVE(v_48,ATmakeAFun("Output",1,0));
  MOVE(s_47,ATmakeAFun("Program",1,0));
  MOVE(w_46,ATmakeAFun("Runtime",1,0));
  MOVE(p_45,ATmakeAFun("Silent",0,0));
  MOVE(t_20,ATmakeAFun("Mod",2,0));
  MOVE(q_15,ATmakeAFun("StratRule",3,0));
  MOVE(p_15,ATmakeAFun("Rule",3,0));
  MOVE(n_15,ATmakeAFun("SRule",1,0));
  MOVE(y_14,ATmakeAFun("Con",3,0));
  MOVE(o_14,ATmakeAFun("Wld",0,0));
  MOVE(l_14,ATmakeAFun("LChoice",2,0));
  MOVE(k_14,ATmakeAFun("Id",0,0));
  MOVE(i_14,ATmakeAFun("AM",2,0));
  MOVE(g_14,ATmakeAFun("MA",2,0));
  MOVE(x_13,ATmakeAFun("BA",2,0));
  MOVE(u_13,ATmakeAFun("Lets",2,0));
  MOVE(r_13,ATmakeAFun("LChoices",1,0));
  MOVE(o_13,ATmakeAFun("Choices",1,0));
  MOVE(l_13,ATmakeAFun("Seqs",1,0));
  MOVE(s_12,ATmakeAFun("App",2,0));
  MOVE(k_12,ATmakeAFun("Cong",2,0));
  MOVE(a_12,ATmakeAFun("Op",2,0));
  MOVE(z_11,ATmakeAFun("Prim",1,0));
  MOVE(y_11,ATmakeAFun("BAM",3,0));
  MOVE(x_11,ATmakeAFun("Where",1,0));
  MOVE(w_11,ATmakeAFun("Seq",2,0));
  MOVE(v_11,ATmakeAFun("Scope",2,0));
  MOVE(p_11,ATmakeAFun("Var",1,0));
  MOVE(o_11,ATmakeAFun("Explode",2,0));
  MOVE(i_11,ATmakeAFun("ExplodeCong",2,0));
  MOVE(h_11,ATmakeAFun("Build",1,0));
  MOVE(f_11,ATmakeAFun("Match",1,0));
  MOVE(e_8,ATmakeAFun("Choice",2,0));
  MOVE(t_7,ATmakeAFun("Fail",0,0));
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

PROC(_stratego_n_21)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_n_25);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_o_21)
  Rpush(d_0);
  p_34 :
  Epushd(0,8);
  MoveTop(0,1);
  Cpush(f_0);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_4;
  z_4 :
  TestFunFC(i_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_5;
  a_5 :
  TestFunFC(j_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(h_0);
  goto r_34;
  h_0 :
  goto g_0;
  r_34 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_a_25);
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
  goto h_5;
  h_5 :
  TestFunFC(t_0,&&s_0,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  Rpush(r_0);
  goto u_34;
  s_0 :
  TestFunFC(v_0,&&u_0,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  MoveArg(2,1,2,2,2);
  Rpush(r_0);
  goto v_34;
  u_0 :
  TestFunFC(w_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  Rpush(r_0);
  goto w_34;
  r_0 :
  goto p_0;
  u_34 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(x_0);
  x_34 :
  Cpush(z_0);
  Ccall(_stratego_g_26);
  goto y_0;
  z_0 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto g_5;
  g_5 :
  TestFunFC(v_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(c_1);
  goto y_34;
  c_1 :
  goto b_1;
  y_34 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  b_1 :
  Epopd(3,4);
  OneNextSon();
  Rpush(d_1);
  goto x_34;
  d_1 :
  AllBuild();
  goto a_1;
  y_0 :
  Cpop();
  a_1 :
  Return();
  x_0 :
  Return();
  v_34 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Return();
  w_34 :
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
  goto p_34;
  g_1 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,3);
  goto q_6;
  q_6 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_6;
  r_6 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto s_6;
  s_6 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  Rpush(i_1);
  goto d_35;
  i_1 :
  goto h_1;
  d_35 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(j_1);
  e_35 :
  Cpush(l_1);
  Ccall(_stratego_g_26);
  goto k_1;
  l_1 :
  Ccontinue(m_1);
  Epushd(3,3);
  MoveTop(3,1);
  goto p_6;
  p_6 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(o_1);
  goto g_35;
  o_1 :
  goto n_1;
  g_35 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(p_1);
  h_35 :
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
  goto u_5;
  u_5 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto v_5;
  v_5 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto w_5;
  w_5 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto m_6;
  m_6 :
  TestFunFC(c_0,&&fail,Egetd(4,7));
  goto n_6;
  n_6 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto o_6;
  o_6 :
  TestFunFC(c_0,&&fail,Egetd(4,10));
  Rpush(t_1);
  goto j_35;
  t_1 :
  goto s_1;
  j_35 :
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
  goto h_35;
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
  goto e_35;
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
  goto e_35;
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
  goto p_34;
  z_1 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,3);
  goto v_8;
  v_8 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_8;
  w_8 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto x_8;
  x_8 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  Rpush(b_2);
  goto n_35;
  b_2 :
  goto a_2;
  n_35 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(c_2);
  o_35 :
  Cpush(e_2);
  Ccall(_stratego_g_26);
  goto d_2;
  e_2 :
  Ccontinue(f_2);
  Epushd(3,3);
  MoveTop(3,1);
  goto u_8;
  u_8 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(h_2);
  goto p_35;
  h_2 :
  goto g_2;
  p_35 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(i_2);
  q_35 :
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
  goto x_7;
  x_7 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto y_7;
  y_7 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto z_7;
  z_7 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto a_8;
  a_8 :
  TestFunFC(c_0,&&fail,Egetd(4,7));
  goto l_8;
  l_8 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto m_8;
  m_8 :
  TestFunFC(c_0,&&fail,Egetd(4,10));
  Rpush(m_2);
  goto s_35;
  m_2 :
  goto l_2;
  s_35 :
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
  goto q_35;
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
  goto o_35;
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
  goto o_35;
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
  goto p_34;
  t_2 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,3);
  goto b_10;
  b_10 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto x_10;
  x_10 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto y_10;
  y_10 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  Rpush(v_2);
  goto w_35;
  v_2 :
  goto u_2;
  w_35 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(w_2);
  x_35 :
  Cpush(y_2);
  Ccall(_stratego_g_26);
  goto x_2;
  y_2 :
  Ccontinue(z_2);
  Epushd(3,3);
  MoveTop(3,1);
  goto a_10;
  a_10 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(b_3);
  goto y_35;
  b_3 :
  goto a_3;
  y_35 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(c_3);
  z_35 :
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
  goto u_9;
  u_9 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto v_9;
  v_9 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto w_9;
  w_9 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto x_9;
  x_9 :
  TestFunFC(c_0,&&fail,Egetd(4,7));
  goto y_9;
  y_9 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto z_9;
  z_9 :
  TestFunFC(c_0,&&fail,Egetd(4,10));
  Rpush(g_3);
  goto b_36;
  g_3 :
  goto f_3;
  b_36 :
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
  goto z_35;
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
  goto x_35;
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
  goto x_35;
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
  goto p_34;
  n_3 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,3);
  goto e_14;
  e_14 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto f_14;
  f_14 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto j_14;
  j_14 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  Rpush(p_3);
  goto f_36;
  p_3 :
  goto o_3;
  f_36 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(q_3);
  g_36 :
  Cpush(s_3);
  Ccall(_stratego_g_26);
  goto r_3;
  s_3 :
  Ccontinue(t_3);
  Epushd(3,3);
  MoveTop(3,1);
  goto d_14;
  d_14 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(v_3);
  goto h_36;
  v_3 :
  goto u_3;
  h_36 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(w_3);
  i_36 :
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
  goto q_11;
  q_11 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto v_13;
  v_13 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto z_13;
  z_13 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto a_14;
  a_14 :
  TestFunFC(c_0,&&fail,Egetd(4,7));
  goto b_14;
  b_14 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto c_14;
  c_14 :
  TestFunFC(c_0,&&fail,Egetd(4,10));
  Rpush(a_4);
  goto k_36;
  a_4 :
  goto z_3;
  k_36 :
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
  goto i_36;
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
  goto g_36;
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
  goto g_36;
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
  goto t_14;
  t_14 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto u_14;
  u_14 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_14;
  v_14 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(h_4);
  goto m_36;
  h_4 :
  goto g_4;
  m_36 :
  Move(1,3,2,4);
  Return();
  g_4 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(i_4);
  n_36 :
  Cpush(k_4);
  Ccall(_stratego_g_26);
  Tset((ATerm)ATmakeAppl0(l_0));
  goto j_4;
  k_4 :
  Epushd(2,3);
  MoveTop(2,1);
  goto z_19;
  z_19 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(n_4);
  goto o_36;
  n_4 :
  goto m_4;
  o_36 :
  Epushd(3,6);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(o_4);
  goto n_36;
  o_4 :
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl2(a_0,Egetd(3,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(3,2);
  goto v_17;
  v_17 :
  TestFunFC(a_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto l_18;
  l_18 :
  TestFunFC(a_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto m_18;
  m_18 :
  TestFunFC(c_0,&&fail,Egetd(3,6));
  Rpush(q_4);
  goto r_36;
  q_4 :
  goto p_4;
  r_36 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(r_4);
  s_36 :
  Cpush(t_4);
  Ccall(_stratego_g_26);
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
  goto t_36;
  w_4 :
  goto v_4;
  t_36 :
  Tdupl();
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(x_4);
  u_36 :
  Cpush(b_5);
  Epushd(5,3);
  MoveTop(5,1);
  goto t_17;
  t_17 :
  TestFunFC(k_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(d_5);
  goto v_36;
  d_5 :
  goto c_5;
  v_36 :
  Move(4,2,5,2);
  Return();
  c_5 :
  Epopd(5,3);
  goto y_4;
  b_5 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_5);
  goto u_36;
  f_5 :
  AllBuild();
  goto e_5;
  y_4 :
  Cpop();
  e_5 :
  Return();
  x_4 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(i_5);
  goto s_36;
  i_5 :
  Return();
  v_4 :
  Epopd(4,3);
  goto s_4;
  u_4 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_5);
  goto s_36;
  k_5 :
  AllBuild();
  goto j_5;
  s_4 :
  Cpop();
  j_5 :
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
  goto f_21;
  f_21 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto s_21;
  s_21 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto t_21;
  t_21 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(n_5);
  goto x_36;
  n_5 :
  goto m_5;
  x_36 :
  Move(1,2,2,4);
  Return();
  m_5 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(o_5);
  y_36 :
  Cpush(q_5);
  Ccall(_stratego_g_26);
  Tset((ATerm)ATmakeAppl0(l_0));
  goto p_5;
  q_5 :
  Epushd(2,3);
  MoveTop(2,1);
  goto f_22;
  f_22 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(t_5);
  goto z_36;
  t_5 :
  goto s_5;
  z_36 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(x_5);
  goto p_34;
  x_5 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(y_5);
  goto y_36;
  y_5 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,1),(ATerm)ATmakeAppl2(a_0,Egetd(3,2),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(3,3);
  goto c_22;
  c_22 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto d_22;
  d_22 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto e_22;
  e_22 :
  TestFunFC(c_0,&&fail,Egetd(3,7));
  Rpush(a_6);
  goto c_37;
  a_6 :
  goto z_5;
  c_37 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(b_6);
  d_37 :
  Cpush(d_6);
  Ccall(_stratego_g_26);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto c_6;
  d_6 :
  Ccontinue(e_6);
  Epushd(4,3);
  MoveTop(4,1);
  goto b_22;
  b_22 :
  TestFunFC(k_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(g_6);
  goto e_37;
  g_6 :
  goto f_6;
  e_37 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(h_6);
  f_37 :
  Cpush(j_6);
  Epushd(5,3);
  MoveTop(5,1);
  goto a_22;
  a_22 :
  TestFunFC(k_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(l_6);
  goto g_37;
  l_6 :
  goto k_6;
  g_37 :
  Move(4,2,5,2);
  Return();
  k_6 :
  Epopd(5,3);
  goto i_6;
  j_6 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_6);
  goto f_37;
  u_6 :
  AllBuild();
  goto t_6;
  i_6 :
  Cpop();
  t_6 :
  Return();
  h_6 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(v_6);
  goto d_37;
  v_6 :
  Return();
  f_6 :
  Epopd(4,3);
  goto c_6;
  e_6 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_6);
  goto d_37;
  x_6 :
  AllBuild();
  goto w_6;
  c_6 :
  Cpop();
  w_6 :
  Return();
  b_6 :
  Return();
  z_5 :
  Epopd(3,7);
  Return();
  s_5 :
  Epopd(2,3);
  goto r_5;
  p_5 :
  Cpop();
  r_5 :
  Return();
  o_5 :
  Epopd(1,2);
  goto l_5;
  n_0 :
  Cpop();
  l_5 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,3),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(0,4);
  goto m_22;
  m_22 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto n_22;
  n_22 :
  TestFunFC(a_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto o_22;
  o_22 :
  TestFunFC(c_0,&&fail,Egetd(0,8));
  Rpush(z_6);
  goto i_37;
  z_6 :
  goto y_6;
  i_37 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(a_7);
  j_37 :
  Cpush(c_7);
  Ccall(_stratego_g_26);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  goto b_7;
  c_7 :
  Ccontinue(d_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto l_22;
  l_22 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(f_7);
  goto k_37;
  f_7 :
  goto e_7;
  k_37 :
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(g_7);
  l_37 :
  Cpush(i_7);
  Epushd(2,3);
  MoveTop(2,1);
  goto k_22;
  k_22 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(k_7);
  goto m_37;
  k_7 :
  goto j_7;
  m_37 :
  Move(1,2,2,2);
  Return();
  j_7 :
  Epopd(2,3);
  goto h_7;
  i_7 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_7);
  goto l_37;
  m_7 :
  AllBuild();
  goto l_7;
  h_7 :
  Cpop();
  l_7 :
  Return();
  g_7 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(n_7);
  goto j_37;
  n_7 :
  Return();
  e_7 :
  Epopd(1,3);
  goto b_7;
  d_7 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_7);
  goto j_37;
  p_7 :
  AllBuild();
  goto o_7;
  b_7 :
  Cpop();
  o_7 :
  Return();
  a_7 :
  Return();
  y_6 :
  Epopd(0,8);
  Return();
  d_0 :
ENDPROC

PROC(_stratego_p_21)
  Rpush(q_7);
  f_38 :
  Cpush(s_7);
  Ccall(_stratego_g_26);
  Tset((ATerm)ATmakeAppl0(t_7));
  goto r_7;
  s_7 :
  Epushd(0,3);
  MoveTop(0,1);
  goto s_37;
  s_37 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(w_7);
  goto g_38;
  w_7 :
  goto v_7;
  g_38 :
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
  Rpush(c_8);
  goto f_38;
  c_8 :
  OneNextSon();
  Ccall(_stratego_d_25);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto p_37;
  p_37 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_37;
  q_37 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto r_37;
  r_37 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(d_8);
  goto h_38;
  d_8 :
  goto b_8;
  h_38 :
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(e_8,Egetd(1,2),Egetd(1,4)));
  Return();
  b_8 :
  Epopd(1,5);
  Return();
  v_7 :
  Epopd(0,3);
  goto u_7;
  r_7 :
  Cpop();
  u_7 :
  Return();
  q_7 :
ENDPROC

PROC(_stratego_q_21)
  Rpush(f_8);
  g_39 :
  Epushd(0,11);
  MoveTop(0,5);
  goto k_38;
  k_38 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto l_38;
  l_38 :
  TestFunFC(a_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto m_38;
  m_38 :
  TestFunFC(k_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto n_38;
  n_38 :
  TestFunFC(c_0,&&fail,Egetd(0,11));
  goto o_38;
  o_38 :
  TestFunFC(a_0,&&i_8,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto p_38;
  p_38 :
  TestFunFC(a_0,&&j_8,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto q_38;
  q_38 :
  TestFunFC(c_0,&&k_8,Egetd(0,4));
  Cpush(o_8);
  Rpush(p_8);
  goto h_39;
  p_8 :
  goto n_8;
  o_8 :
  Rpush(r_8);
  goto i_39;
  r_8 :
  goto q_8;
  n_8 :
  Cpop();
  q_8 :
  goto h_8;
  k_8 :
  Rpush(h_8);
  goto i_39;
  j_8 :
  Rpush(h_8);
  goto i_39;
  i_8 :
  Rpush(h_8);
  goto i_39;
  h_8 :
  goto g_8;
  h_39 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  i_39 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,6),(ATerm)ATmakeAppl2(a_0,Egetd(0,10),(ATerm)ATmakeAppl0(c_0))));
  Rpush(s_8);
  goto g_39;
  s_8 :
  Return();
  g_8 :
  Epopd(0,11);
  Return();
  f_8 :
ENDPROC

PROC(_stratego_r_21)
  Epushd(0,7);
  MoveTop(0,1);
  goto a_40;
  a_40 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto b_40;
  b_40 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_40;
  c_40 :
  TestFunFC(c_0,&&z_8,Egetd(0,5));
  Rpush(y_8);
  goto p_41;
  z_8 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto d_40;
  d_40 :
  TestFunFC(c_0,&&fail,Egetd(0,7));
  Rpush(y_8);
  goto q_41;
  y_8 :
  goto t_8;
  p_41 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  q_41 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,4),(ATerm)ATmakeAppl0(c_0))));
  Rpush(a_9);
  r_41 :
  Epushd(2,9);
  MoveTop(2,1);
  goto r_39;
  r_39 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto s_39;
  s_39 :
  TestFunFC(l_0,&&d_9,Egetd(2,2));
  goto t_39;
  t_39 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto u_39;
  u_39 :
  TestFunFC(l_0,&&fail,Egetd(2,6));
  goto v_39;
  v_39 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(c_9);
  goto s_41;
  d_9 :
  TestFunFC(k_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto w_39;
  w_39 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto x_39;
  x_39 :
  TestFunFC(k_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto y_39;
  y_39 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(c_9);
  goto t_41;
  c_9 :
  goto b_9;
  s_41 :
  Tset((ATerm)ATmakeAppl0(l_0));
  Return();
  t_41 :
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
  Rpush(f_9);
  goto r_41;
  f_9 :
  OneNextSon();
  Ccall(_stratego_d_25);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto o_39;
  o_39 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto p_39;
  p_39 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto q_39;
  q_39 :
  TestFunFC(c_0,&&fail,Egetd(3,5));
  Rpush(g_9);
  goto u_41;
  g_9 :
  goto e_9;
  u_41 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(3,2),Egetd(3,4)));
  Return();
  e_9 :
  Epopd(3,5);
  Return();
  b_9 :
  Epopd(2,9);
  Return();
  a_9 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl2(a_0,Egetd(0,6),(ATerm)ATmakeAppl0(c_0))));
  Epopd(1,1);
  Return();
  t_8 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_c_24)
  Epushd(0,5);
  Ccall(_stratego_r_21);
  MoveTop(0,1);
  goto e_42;
  e_42 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto f_42;
  f_42 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto g_42;
  g_42 :
  TestFunFC(c_0,&&fail,Egetd(0,5));
  Rpush(i_9);
  goto z_42;
  i_9 :
  goto h_9;
  z_42 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(j_9);
  a_43 :
  Cpush(l_9);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,4);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto b_42;
  b_42 :
  TestFunFC(i_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto c_42;
  c_42 :
  TestFunFC(j_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto d_42;
  d_42 :
  TestFunFC(l_0,&&fail,Egetd(2,4));
  Rpush(n_9);
  goto c_43;
  n_9 :
  goto m_9;
  c_43 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Move(1,2,2,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  m_9 :
  Epopd(2,4);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,3),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_q_21);
  Epopd(1,3);
  goto k_9;
  l_9 :
  AllInit();
  p_9 :
  AllNextSon(&&q_9);
  Rpush(r_9);
  goto a_43;
  r_9 :
  goto p_9;
  q_9 :
  AllBuild();
  goto o_9;
  k_9 :
  Cpop();
  o_9 :
  Return();
  j_9 :
  Return();
  h_9 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_d_24)
  Epushd(0,6);
  MoveTop(0,1);
  goto o_43;
  o_43 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto p_43;
  p_43 :
  TestFunFC(l_0,&&c_10,Egetd(0,6));
  goto q_43;
  q_43 :
  TestFunFC(v_0,&&d_10,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Cpush(f_10);
  Rpush(g_10);
  goto u_44;
  g_10 :
  goto e_10;
  f_10 :
  Rpush(i_10);
  goto v_44;
  i_10 :
  goto h_10;
  e_10 :
  Cpop();
  h_10 :
  goto t_9;
  d_10 :
  Rpush(t_9);
  goto u_44;
  c_10 :
  goto r_43;
  r_43 :
  TestFunFC(v_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(t_9);
  goto v_44;
  t_9 :
  goto s_9;
  u_44 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  v_44 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(j_10);
  w_44 :
  Cpush(l_10);
  Ccall(_stratego_g_26);
  goto k_10;
  l_10 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_24);
  OneNextSon();
  Rpush(n_10);
  goto w_44;
  n_10 :
  AllBuild();
  goto m_10;
  k_10 :
  Cpop();
  m_10 :
  Return();
  j_10 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(o_10);
  y_44 :
  Cpush(q_10);
  Ccall(_stratego_g_26);
  goto p_10;
  q_10 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(i_0,(ATerm)ATmakeAppl1(j_0,Egetd(3,1)),(ATerm)ATmakeAppl0(l_0)));
  Epopd(3,1);
  OneNextSon();
  Rpush(s_10);
  goto y_44;
  s_10 :
  AllBuild();
  goto r_10;
  p_10 :
  Cpop();
  r_10 :
  Return();
  o_10 :
  MoveTop(2,2);
  Move(1,2,2,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(t_10);
  b_45 :
  Cpush(v_10);
  Ccall(_stratego_g_26);
  goto u_10;
  v_10 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto l_43;
  l_43 :
  TestFunFC(v_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(a_11);
  goto c_45;
  a_11 :
  goto z_10;
  c_45 :
  Epushd(4,2);
  Move(0,3,3,2);
  Move(4,1,3,3);
  Move(4,2,3,4);
  NotNULLd(4,1);
  NotNULLd(1,2);
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(4,1),(ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl2(a_0,Egetd(4,2),(ATerm)ATmakeAppl0(c_0)))));
  Ccall(_stratego_c_24);
  Epopd(4,2);
  Return();
  z_10 :
  Epopd(3,4);
  OneNextSon();
  Rpush(b_11);
  goto b_45;
  b_11 :
  AllBuild();
  goto w_10;
  u_10 :
  Cpop();
  w_10 :
  Return();
  t_10 :
  MoveTop(2,3);
  Move(1,3,2,3);
  Epopd(2,3);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_p_21);
  MoveTop(1,4);
  NotNULLd(0,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl3(v_0,Egetd(0,3),Egetd(1,1),Egetd(1,4)));
  Epopd(1,4);
  Return();
  s_9 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_f_24)
  Epushd(0,3);
  MoveTop(0,1);
  goto q_45;
  q_45 :
  TestFunFC(f_11,&&e_11,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_11);
  goto q_46;
  e_11 :
  TestFunFC(h_11,&&g_11,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_11);
  goto r_46;
  g_11 :
  TestFunFC(i_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(d_11);
  goto s_46;
  d_11 :
  goto c_11;
  q_46 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_s_24);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(j_11);
  u_46 :
  Cpush(l_11);
  Epushd(2,3);
  MoveTop(2,1);
  goto k_45;
  k_45 :
  TestFunFC(o_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(n_11);
  goto v_46;
  n_11 :
  goto m_11;
  v_46 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(p_11,Egetd(1,1)));
  Return();
  m_11 :
  Epopd(2,3);
  goto k_11;
  l_11 :
  IsAppl();
  OneInit();
  s_11 :
  OneNextSon();
  Cpush(s_11);
  Rpush(u_11);
  goto u_46;
  u_11 :
  Cpop();
  OneBuild();
  goto r_11;
  k_11 :
  Cpop();
  r_11 :
  Return();
  j_11 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(v_11,(ATerm)ATmakeAppl2(k_0,Egetd(1,1),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(w_11,(ATerm)ATmakeAppl1(f_11,Egetd(1,4)),(ATerm)ATmakeAppl1(x_11,(ATerm)ATmakeAppl3(y_11,(ATerm)ATmakeAppl1(z_11,ATmakeString("_ST_explode_term")),(ATerm)ATmakeAppl1(p_11,Egetd(1,1)),(ATerm)ATmakeAppl2(a_12,ATmakeString("TCons"),(ATerm)ATmakeAppl2(k_0,Egetd(1,2),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(a_12,ATmakeString("TCons"),(ATerm)ATmakeAppl2(k_0,Egetd(1,3),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(a_12,ATmakeString("TNil"),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl0(l_0)))))))));
  Epopd(1,4);
  Return();
  r_46 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_s_24);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(b_12);
  y_46 :
  Cpush(d_12);
  Epushd(2,3);
  MoveTop(2,1);
  goto o_45;
  o_45 :
  TestFunFC(o_11,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(f_12);
  goto z_46;
  f_12 :
  goto e_12;
  z_46 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(p_11,Egetd(1,1)));
  Return();
  e_12 :
  Epopd(2,3);
  goto c_12;
  d_12 :
  IsAppl();
  OneInit();
  h_12 :
  OneNextSon();
  Cpush(h_12);
  Rpush(j_12);
  goto y_46;
  j_12 :
  Cpop();
  OneBuild();
  goto g_12;
  c_12 :
  Cpop();
  g_12 :
  Return();
  b_12 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(v_11,(ATerm)ATmakeAppl2(k_0,Egetd(1,1),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(w_11,(ATerm)ATmakeAppl3(y_11,(ATerm)ATmakeAppl1(z_11,ATmakeString("_ST_mkterm")),(ATerm)ATmakeAppl2(a_12,ATmakeString("TCons"),(ATerm)ATmakeAppl2(k_0,Egetd(1,2),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(a_12,ATmakeString("TCons"),(ATerm)ATmakeAppl2(k_0,Egetd(1,3),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(a_12,ATmakeString("TNil"),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl1(p_11,Egetd(1,1))),(ATerm)ATmakeAppl1(h_11,Egetd(1,4)))));
  Epopd(1,4);
  Return();
  s_46 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(w_11,(ATerm)ATmakeAppl1(z_11,ATmakeString("_ST_explode_term")),(ATerm)ATmakeAppl2(w_11,(ATerm)ATmakeAppl2(k_12,ATmakeString("TCons"),(ATerm)ATmakeAppl2(k_0,Egetd(0,2),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(k_12,ATmakeString("TCons"),(ATerm)ATmakeAppl2(k_0,Egetd(0,3),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(k_12,ATmakeString("TNil"),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl1(z_11,ATmakeString("_ST_mkterm")))));
  Return();
  c_11 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_g_24)
  Epushd(0,2);
  MoveTop(0,1);
  goto g_47;
  g_47 :
  TestFunFC(h_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(m_12);
  goto t_47;
  m_12 :
  goto l_12;
  t_47 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_s_24);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(n_12);
  v_47 :
  Cpush(p_12);
  Epushd(2,3);
  MoveTop(2,1);
  goto e_47;
  e_47 :
  TestFunFC(s_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(r_12);
  goto w_47;
  r_12 :
  goto q_12;
  w_47 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(p_11,Egetd(1,1)));
  Return();
  q_12 :
  Epopd(2,3);
  goto o_12;
  p_12 :
  IsAppl();
  OneInit();
  u_12 :
  OneNextSon();
  Cpush(u_12);
  Rpush(w_12);
  goto v_47;
  w_12 :
  Cpop();
  OneBuild();
  goto t_12;
  o_12 :
  Cpop();
  t_12 :
  Return();
  n_12 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(v_11,(ATerm)ATmakeAppl2(k_0,Egetd(1,1),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(w_11,(ATerm)ATmakeAppl3(y_11,Egetd(1,2),Egetd(1,3),(ATerm)ATmakeAppl1(p_11,Egetd(1,1))),(ATerm)ATmakeAppl1(h_11,Egetd(1,4)))));
  Epopd(1,4);
  Return();
  l_12 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_h_24)
  Epushd(0,2);
  MoveTop(0,1);
  goto d_48;
  d_48 :
  TestFunFC(h_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(y_12);
  goto p_48;
  y_12 :
  goto x_12;
  p_48 :
  Epushd(1,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(z_12);
  q_48 :
  Cpush(b_13);
  Epushd(2,4);
  MoveTop(2,1);
  goto a_48;
  a_48 :
  TestFunFC(s_12,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto b_48;
  b_48 :
  TestFunFC(h_11,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(d_13);
  goto r_48;
  d_13 :
  goto c_13;
  r_48 :
  Move(1,2,2,3);
  Move(1,1,2,4);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  c_13 :
  Epopd(2,4);
  goto a_13;
  b_13 :
  IsAppl();
  OneInit();
  f_13 :
  OneNextSon();
  Cpush(f_13);
  Rpush(h_13);
  goto q_48;
  h_13 :
  Cpop();
  OneBuild();
  goto e_13;
  a_13 :
  Cpop();
  e_13 :
  Return();
  z_12 :
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl1(h_11,Egetd(1,3)));
  Epopd(1,3);
  Return();
  x_12 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_i_24)
  Epushd(0,6);
  MoveTop(0,3);
  goto e_49;
  e_49 :
  TestFunFC(l_13,&&k_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto f_49;
  f_49 :
  TestFunFC(l_0,&&m_13,Egetd(0,4));
  Rpush(j_13);
  goto f_50;
  m_13 :
  TestFunFC(k_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(j_13);
  goto g_50;
  k_13 :
  TestFunFC(o_13,&&n_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto g_49;
  g_49 :
  TestFunFC(l_0,&&p_13,Egetd(0,4));
  Rpush(j_13);
  goto h_50;
  p_13 :
  TestFunFC(k_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(j_13);
  goto i_50;
  n_13 :
  TestFunFC(r_13,&&q_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto h_49;
  h_49 :
  TestFunFC(l_0,&&s_13,Egetd(0,4));
  Rpush(j_13);
  goto j_50;
  s_13 :
  TestFunFC(k_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(j_13);
  goto k_50;
  q_13 :
  TestFunFC(u_13,&&t_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(j_13);
  goto l_50;
  t_13 :
  TestFunFC(x_13,&&w_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(j_13);
  goto m_50;
  w_13 :
  TestFunFC(g_14,&&y_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(j_13);
  goto n_50;
  y_13 :
  TestFunFC(i_14,&&h_14,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(j_13);
  goto o_50;
  h_14 :
  TestFunFC(y_11,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(j_13);
  goto p_50;
  j_13 :
  goto i_13;
  f_50 :
  Tset((ATerm)ATmakeAppl0(k_14));
  Return();
  g_50 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(w_11,Egetd(0,1),(ATerm)ATmakeAppl1(l_13,Egetd(0,2))));
  Return();
  h_50 :
  Tset((ATerm)ATmakeAppl0(t_7));
  Return();
  i_50 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(e_8,Egetd(0,1),(ATerm)ATmakeAppl1(o_13,Egetd(0,2))));
  Return();
  j_50 :
  Tset((ATerm)ATmakeAppl0(t_7));
  Return();
  k_50 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(l_14,Egetd(0,1),(ATerm)ATmakeAppl1(r_13,Egetd(0,2))));
  Return();
  l_50 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(t_0,Egetd(0,4),Egetd(0,5)));
  Return();
  m_50 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(w_11,(ATerm)ATmakeAppl1(h_11,Egetd(0,5)),Egetd(0,4)));
  Return();
  n_50 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_11,(ATerm)ATmakeAppl1(f_11,Egetd(0,4)),Egetd(0,5)));
  Return();
  o_50 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_11,Egetd(0,4),(ATerm)ATmakeAppl1(f_11,Egetd(0,5))));
  Return();
  p_50 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl1(l_13,(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(h_11,Egetd(0,5)),(ATerm)ATmakeAppl2(k_0,Egetd(0,4),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(f_11,Egetd(0,6)),(ATerm)ATmakeAppl0(l_0))))));
  Return();
  i_13 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_j_24)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_50;
  r_50 :
  TestFunFC(o_14,&&fail,Egetd(0,1));
  Rpush(n_14);
  goto t_50;
  n_14 :
  goto m_14;
  t_50 :
  Return();
  m_14 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_24)
  Cpush(p_14);
  Tdupl();
  Rpush(q_14);
  a_51 :
  Cpush(s_14);
  Epushd(0,4);
  MoveTop(0,1);
  goto v_50;
  v_50 :
  TestFunFC(y_14,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(x_14);
  goto b_51;
  x_14 :
  goto w_14;
  b_51 :
  Return();
  w_14 :
  Epopd(0,4);
  goto r_14;
  s_14 :
  Ccall(_stratego_j_24);
  goto z_14;
  r_14 :
  Cpop();
  z_14 :
  AllInit();
  a_15 :
  AllNextSon(&&b_15);
  Rpush(c_15);
  goto a_51;
  c_15 :
  goto a_15;
  b_15 :
  AllBuild();
  Return();
  q_14 :
  Cpop();
  Crestore();
  Cjump();
  p_14 :
ENDPROC

PROC(_stratego_l_24)
  Cpush(d_15);
  Tdupl();
  Rpush(e_15);
  j_51 :
  Epushd(0,4);
  MoveTop(0,2);
  goto e_51;
  e_51 :
  TestFunFC(y_14,&&h_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,1,0,2,2);
  Rpush(g_15);
  goto k_51;
  h_15 :
  TestFunFC(s_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(g_15);
  goto l_51;
  g_15 :
  goto f_15;
  k_51 :
  Return();
  l_51 :
  Return();
  f_15 :
  AllInit();
  i_15 :
  AllNextSon(&&j_15);
  Rpush(k_15);
  goto j_51;
  k_15 :
  goto i_15;
  j_15 :
  AllBuild();
  Epopd(0,4);
  Return();
  e_15 :
  Cpop();
  Crestore();
  Cjump();
  d_15 :
ENDPROC

PROC(_stratego_m_24)
  Epushd(0,5);
  MoveTop(0,1);
  goto o_51;
  o_51 :
  TestFunFC(n_15,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto p_51;
  p_51 :
  TestFunFC(p_15,&&o_15,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(m_15);
  goto b_52;
  o_15 :
  TestFunFC(q_15,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(m_15);
  goto c_52;
  m_15 :
  goto l_15;
  b_52 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_l_24);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_k_24);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(l_13,(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(f_11,Egetd(0,3)),(ATerm)ATmakeAppl2(k_0,Egetd(0,5),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(h_11,Egetd(0,4)),(ATerm)ATmakeAppl0(l_0))))));
  Return();
  c_52 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(l_13,(ATerm)ATmakeAppl2(k_0,Egetd(0,3),(ATerm)ATmakeAppl2(k_0,Egetd(0,5),(ATerm)ATmakeAppl2(k_0,Egetd(0,4),(ATerm)ATmakeAppl0(l_0))))));
  Return();
  l_15 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_24)
  Epushd(0,5);
  MoveTop(0,1);
  goto q_52;
  q_52 :
  TestFunFC(n_15,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto r_52;
  r_52 :
  TestFunFC(p_15,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(s_15);
  goto z_53;
  s_15 :
  goto r_15;
  z_53 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_s_24);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(t_15);
  b_54 :
  Cpush(v_15);
  Epushd(2,5);
  MoveTop(2,1);
  goto h_52;
  h_52 :
  TestFunFC(y_14,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto i_52;
  i_52 :
  TestFunFC(p_11,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(x_15);
  goto c_54;
  x_15 :
  goto w_15;
  c_54 :
  Move(1,4,2,3);
  Move(1,2,2,4);
  Move(1,3,2,5);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl1(p_11,Egetd(1,4)));
  Return();
  w_15 :
  Epopd(2,5);
  goto u_15;
  v_15 :
  IsAppl();
  OneInit();
  z_15 :
  OneNextSon();
  Cpush(z_15);
  Rpush(b_16);
  goto b_54;
  b_16 :
  Cpop();
  OneBuild();
  goto y_15;
  u_15 :
  Cpop();
  y_15 :
  Return();
  t_15 :
  MoveTop(1,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(c_16);
  e_54 :
  Cpush(e_16);
  Epushd(2,7);
  MoveTop(2,1);
  goto l_52;
  l_52 :
  TestFunFC(y_14,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto m_52;
  m_52 :
  TestFunFC(p_11,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto n_52;
  n_52 :
  TestFunFC(i_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto o_52;
  o_52 :
  TestFunFC(l_0,&&fail,Egetd(2,7));
  Rpush(g_16);
  goto f_54;
  g_16 :
  goto f_16;
  f_54 :
  Move(1,4,2,3);
  Move(1,6,2,4);
  Move(1,7,2,6);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(p_11,Egetd(1,1)));
  Return();
  f_16 :
  Epopd(2,7);
  goto d_16;
  e_16 :
  IsAppl();
  OneInit();
  i_16 :
  OneNextSon();
  Cpush(i_16);
  Rpush(k_16);
  goto e_54;
  k_16 :
  Cpop();
  OneBuild();
  goto h_16;
  d_16 :
  Cpop();
  h_16 :
  Return();
  c_16 :
  MoveTop(1,8);
  NotNULLd(1,5);
  NotNULLd(1,8);
  NotNULLd(0,5);
  NotNULLd(1,7);
  NotNULLd(1,2);
  NotNULLd(1,6);
  NotNULLd(1,4);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(v_11,(ATerm)ATmakeAppl2(k_0,Egetd(1,1),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl1(n_15,(ATerm)ATmakeAppl3(p_15,Egetd(1,5),Egetd(1,8),(ATerm)ATmakeAppl2(w_11,Egetd(0,5),(ATerm)ATmakeAppl3(y_11,(ATerm)ATmakeAppl2(i_0,Egetd(1,7),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(n_15,(ATerm)ATmakeAppl3(p_15,Egetd(1,2),Egetd(1,6),(ATerm)ATmakeAppl0(k_14))),(ATerm)ATmakeAppl0(l_0))),(ATerm)ATmakeAppl1(p_11,Egetd(1,4)),(ATerm)ATmakeAppl1(p_11,Egetd(1,1))))))));
  Epopd(1,8);
  Return();
  r_15 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_24)
  Rpush(l_16);
  h_54 :
  Cpush(n_16);
  Cpush(p_16);
  Ccall(_stratego_n_24);
  Rpush(q_16);
  goto h_54;
  q_16 :
  goto o_16;
  p_16 :
  Ccontinue(r_16);
  TestFunTop(v_11);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_16);
  goto h_54;
  s_16 :
  AllBuild();
  goto o_16;
  r_16 :
  Ccall(_stratego_m_24);
  goto t_16;
  o_16 :
  Cpop();
  t_16 :
  goto m_16;
  n_16 :
  goto u_16;
  m_16 :
  Cpop();
  u_16 :
  Return();
  l_16 :
ENDPROC

PROC(_stratego_p_24)
  Rpush(v_16);
  r_54 :
  Cpush(x_16);
  Ccall(_stratego_o_24);
  goto w_16;
  x_16 :
  goto y_16;
  w_16 :
  Cpop();
  y_16 :
  Cpush(a_17);
  z_16 :
  Cpush(c_17);
  Ccall(_stratego_i_24);
  goto b_17;
  c_17 :
  Ccontinue(d_17);
  Cpush(f_17);
  Ccall(_stratego_h_24);
  goto e_17;
  f_17 :
  Ccontinue(g_17);
  Epushd(0,4);
  MoveTop(0,1);
  goto j_54;
  j_54 :
  TestFunFC(h_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto k_54;
  k_54 :
  TestFunFC(s_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(i_17);
  goto t_54;
  i_17 :
  goto h_17;
  t_54 :
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(w_11,(ATerm)ATmakeAppl1(h_11,Egetd(0,4)),Egetd(0,3)));
  Return();
  h_17 :
  Epopd(0,4);
  goto e_17;
  g_17 :
  Ccall(_stratego_g_24);
  goto j_17;
  e_17 :
  Cpop();
  j_17 :
  goto b_17;
  d_17 :
  Ccall(_stratego_f_24);
  goto k_17;
  b_17 :
  Cpop();
  k_17 :
  Tduplinv();
  goto z_16;
  a_17 :
  AllInit();
  l_17 :
  AllNextSon(&&m_17);
  Rpush(n_17);
  goto r_54;
  n_17 :
  goto l_17;
  m_17 :
  AllBuild();
  Return();
  v_16 :
ENDPROC

PROC(_stratego_q_24)
  Rpush(o_17);
  b_55 :
  Cpush(q_17);
  Ccall(_stratego_g_26);
  goto p_17;
  q_17 :
  Epushd(0,3);
  MoveTop(0,1);
  goto v_54;
  v_54 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(w_17);
  goto c_55;
  w_17 :
  goto s_17;
  c_55 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(x_17);
  d_55 :
  Cpush(z_17);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_18);
  goto d_55;
  a_18 :
  AllBuild();
  goto y_17;
  z_17 :
  Ccall(_stratego_g_26);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(c_18);
  goto b_55;
  c_18 :
  goto b_18;
  y_17 :
  Cpop();
  b_18 :
  Return();
  x_17 :
  Return();
  s_17 :
  Epopd(0,3);
  goto r_17;
  p_17 :
  Cpop();
  r_17 :
  Return();
  o_17 :
ENDPROC

PROC(_stratego_r_24)
  Rpush(d_18);
  q_55 :
  Epushd(0,3);
  MoveTop(0,1);
  goto g_55;
  g_55 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto h_55;
  h_55 :
  TestFunFC(l_0,&&g_18,Egetd(0,3));
  Cpush(i_18);
  Rpush(j_18);
  goto r_55;
  j_18 :
  goto h_18;
  i_18 :
  Rpush(n_18);
  goto s_55;
  n_18 :
  goto k_18;
  h_18 :
  Cpop();
  k_18 :
  goto f_18;
  g_18 :
  Rpush(f_18);
  goto s_55;
  f_18 :
  goto e_18;
  r_55 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  s_55 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(o_18);
  goto q_55;
  o_18 :
  Return();
  e_18 :
  Epopd(0,3);
  Return();
  d_18 :
ENDPROC

PROC(_stratego_s_24)
  _ST_new();
ENDPROC

PROC(_stratego_t_24)
  _ST_subt();
ENDPROC

PROC(_stratego_u_24)
  _ST_geq();
ENDPROC

PROC(_stratego_v_24)
  Epushd(0,7);
  MoveTop(0,1);
  goto b_60;
  b_60 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto c_60;
  c_60 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto d_60;
  d_60 :
  TestStr(0,4,"D",&&r_18);
  goto e_60;
  e_60 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto f_60;
  f_60 :
  TestFunFC(c_0,&&fail,Egetd(0,7));
  Rpush(q_18);
  goto w_68;
  r_18 :
  TestStr(0,4,"T",&&fail);
  goto g_60;
  g_60 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto h_60;
  h_60 :
  TestFunFC(c_0,&&fail,Egetd(0,7));
  goto i_60;
  i_60 :
  TestInt(0,6,0,&&s_18);
  Cpush(u_18);
  Rpush(v_18);
  goto x_68;
  v_18 :
  goto t_18;
  u_18 :
  Rpush(x_18);
  goto y_68;
  x_18 :
  goto w_18;
  t_18 :
  Cpop();
  w_18 :
  goto q_18;
  s_18 :
  Rpush(q_18);
  goto y_68;
  q_18 :
  goto p_18;
  w_68 :
  Epushd(1,12);
  Tdupl();
  Epushd(2,6);
  Ccall(_stratego_s_24);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,6),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl1(p_11,Egetd(1,1)),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto j_57;
  j_57 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto k_57;
  k_57 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto l_57;
  l_57 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(z_18);
  goto a_69;
  z_18 :
  goto y_18;
  a_69 :
  Epushd(3,13);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,3),(ATerm)ATmakeAppl2(a_0,Egetd(2,5),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(l_0),(ATerm)ATmakeAppl0(c_0)))));
  Rpush(a_19);
  b_69 :
  Epushd(4,7);
  MoveTop(4,1);
  goto m_56;
  m_56 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto n_56;
  n_56 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto o_56;
  o_56 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto p_56;
  p_56 :
  TestFunFC(c_0,&&fail,Egetd(4,7));
  Rpush(c_19);
  goto c_69;
  c_19 :
  goto b_19;
  c_69 :
  Epushd(5,4);
  Tdupl();
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(4,2),(ATerm)ATmakeAppl2(a_0,MakeInt(1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_u_24);
  Tpop();
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(4,2),(ATerm)ATmakeAppl2(a_0,MakeInt(1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_t_24);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Tdupl();
  Epushd(6,3);
  Ccall(_stratego_s_24);
  MoveTop(6,1);
  Move(5,2,6,1);
  Ccall(_stratego_s_24);
  MoveTop(6,2);
  Move(5,3,6,2);
  Ccall(_stratego_s_24);
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
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(5,1),(ATerm)ATmakeAppl2(a_0,Egetd(4,4),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl3(y_11,(ATerm)ATmakeAppl2(i_0,(ATerm)ATmakeAppl1(j_0,Egetd(5,2)),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(a_12,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(p_11,Egetd(5,3)),(ATerm)ATmakeAppl2(k_0,Egetd(4,4),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl1(p_11,Egetd(5,4))),(ATerm)ATmakeAppl2(a_0,Egetd(5,2),(ATerm)ATmakeAppl2(a_0,Egetd(5,3),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl1(p_11,Egetd(5,3)),(ATerm)ATmakeAppl2(a_0,Egetd(5,4),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl1(p_11,Egetd(5,4)),(ATerm)ATmakeAppl0(c_0))))))),Egetd(4,6)),(ATerm)ATmakeAppl0(c_0)))));
  Cpush(e_19);
  Epushd(6,7);
  MoveTop(6,1);
  goto h_56;
  h_56 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto i_56;
  i_56 :
  TestInt(6,2,0,&&fail);
  goto j_56;
  j_56 :
  TestFunFC(a_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto k_56;
  k_56 :
  TestFunFC(a_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto l_56;
  l_56 :
  TestFunFC(c_0,&&fail,Egetd(6,7));
  Rpush(g_19);
  goto j_69;
  g_19 :
  goto f_19;
  j_69 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  f_19 :
  Epopd(6,7);
  goto d_19;
  e_19 :
  Rpush(i_19);
  goto b_69;
  i_19 :
  goto h_19;
  d_19 :
  Cpop();
  h_19 :
  Epopd(5,4);
  Return();
  b_19 :
  Epopd(4,7);
  Return();
  a_19 :
  Rpush(k_19);
  k_69 :
  Cpush(m_19);
  Epushd(4,8);
  MoveTop(4,1);
  Rpush(n_19);
  m_69 :
  Cpush(p_19);
  Ccall(_stratego_g_26);
  goto o_19;
  p_19 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto s_56;
  s_56 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(s_19);
  goto n_69;
  s_19 :
  goto r_19;
  n_69 :
  NotNULLd(5,2);
  Tset(Egetd(5,2));
  Return();
  r_19 :
  Epopd(5,3);
  OneNextSon();
  Rpush(t_19);
  goto m_69;
  t_19 :
  AllBuild();
  goto q_19;
  o_19 :
  Cpop();
  q_19 :
  Return();
  n_19 :
  MoveTop(4,2);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Rpush(u_19);
  p_69 :
  Cpush(w_19);
  Ccall(_stratego_g_26);
  goto v_19;
  w_19 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto v_56;
  v_56 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(a_20);
  goto q_69;
  a_20 :
  goto y_19;
  q_69 :
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Return();
  y_19 :
  Epopd(5,3);
  OneNextSon();
  Rpush(b_20);
  goto p_69;
  b_20 :
  AllBuild();
  goto x_19;
  v_19 :
  Cpop();
  x_19 :
  Return();
  u_19 :
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
  Rpush(d_20);
  goto k_69;
  d_20 :
  OneNextSon();
  Ccall(_stratego_d_25);
  AllBuild();
  AllBuild();
  MoveTop(4,4);
  goto y_56;
  y_56 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto z_56;
  z_56 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto a_57;
  a_57 :
  TestFunFC(c_0,&&fail,Egetd(4,8));
  Rpush(e_20);
  goto s_69;
  e_20 :
  goto c_20;
  s_69 :
  NotNULLd(4,5);
  NotNULLd(4,7);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(4,5),Egetd(4,7)));
  Return();
  c_20 :
  Epopd(4,8);
  goto l_19;
  m_19 :
  Rpush(g_20);
  t_69 :
  Cpush(i_20);
  Ccall(_stratego_g_26);
  goto h_20;
  i_20 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_25);
  OneNextSon();
  Rpush(k_20);
  goto t_69;
  k_20 :
  AllBuild();
  goto j_20;
  h_20 :
  Cpop();
  j_20 :
  Return();
  g_20 :
  Tset((ATerm)ATmakeAppl0(c_0));
  goto f_20;
  l_19 :
  Cpop();
  f_20 :
  Return();
  k_19 :
  MoveTop(3,1);
  goto c_57;
  c_57 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto d_57;
  d_57 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto e_57;
  e_57 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto f_57;
  f_57 :
  TestFunFC(a_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto g_57;
  g_57 :
  TestFunFC(a_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto h_57;
  h_57 :
  TestFunFC(a_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto i_57;
  i_57 :
  TestFunFC(c_0,&&fail,Egetd(3,13));
  Rpush(l_20);
  goto u_69;
  l_20 :
  goto j_19;
  u_69 :
  Move(1,2,3,2);
  Move(1,3,3,4);
  Move(1,4,3,6);
  Move(1,5,3,8);
  Move(1,6,3,10);
  Move(1,7,3,12);
  Return();
  j_19 :
  Epopd(3,13);
  Return();
  y_18 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,4),(ATerm)ATmakeAppl2(a_0,Egetd(1,6),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,8);
  goto o_57;
  o_57 :
  TestFunFC(a_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto p_57;
  p_57 :
  TestFunFC(a_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto q_57;
  q_57 :
  TestFunFC(c_0,&&fail,Egetd(1,12));
  Rpush(n_20);
  goto v_69;
  n_20 :
  goto m_20;
  v_69 :
  Epushd(2,1);
  NotNULLd(1,9);
  Tset(Egetd(1,9));
  Rpush(o_20);
  w_69 :
  Cpush(q_20);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_20);
  goto w_69;
  r_20 :
  AllBuild();
  goto p_20;
  q_20 :
  Ccall(_stratego_g_26);
  NotNULLd(1,11);
  Tset(Egetd(1,11));
  goto s_20;
  p_20 :
  Cpop();
  s_20 :
  Return();
  o_20 :
  MoveTop(2,1);
  NotNULLd(1,3);
  NotNULLd(2,1);
  NotNULLd(1,5);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(1,7);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl3(v_0,(ATerm)ATmakeAppl2(t_20,Egetd(0,2),ATmakeString("D")),Egetd(1,3),(ATerm)ATmakeAppl2(v_11,(ATerm)ATmakeAppl2(k_0,Egetd(1,1),Egetd(2,1)),(ATerm)ATmakeAppl1(n_15,(ATerm)ATmakeAppl3(p_15,(ATerm)ATmakeAppl2(a_12,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(a_12,Egetd(0,2),Egetd(1,5)),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(p_11,Egetd(1,1)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl2(a_12,Egetd(0,2),Egetd(1,7)),(ATerm)ATmakeAppl1(l_13,Egetd(1,2)))))));
  Epopd(2,1);
  Return();
  m_20 :
  Epopd(1,12);
  Return();
  x_68 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_s_24);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl3(v_0,(ATerm)ATmakeAppl2(t_20,Egetd(0,2),ATmakeString("T")),(ATerm)ATmakeAppl0(l_0),(ATerm)ATmakeAppl2(v_11,(ATerm)ATmakeAppl2(k_0,Egetd(1,1),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl1(n_15,(ATerm)ATmakeAppl3(p_15,(ATerm)ATmakeAppl2(a_12,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(a_12,Egetd(0,2),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(p_11,Egetd(1,1)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl2(a_12,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(a_12,Egetd(0,2),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(p_11,Egetd(1,1)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl0(k_14))))));
  Epopd(1,1);
  Return();
  y_68 :
  Epushd(1,10);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,6),(ATerm)ATmakeAppl2(a_0,MakeInt(1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_z_24);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,1),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(c_0),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto x_59;
  x_59 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto y_59;
  y_59 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto z_59;
  z_59 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(v_20);
  goto a_70;
  v_20 :
  goto u_20;
  a_70 :
  Epushd(3,3);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,3),(ATerm)ATmakeAppl2(a_0,Egetd(2,5),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(l_0),(ATerm)ATmakeAppl0(c_0)))));
  Rpush(x_20);
  b_70 :
  Epushd(4,7);
  MoveTop(4,1);
  goto d_58;
  d_58 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto e_58;
  e_58 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto f_58;
  f_58 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto g_58;
  g_58 :
  TestFunFC(c_0,&&fail,Egetd(4,7));
  Rpush(z_20);
  goto c_70;
  z_20 :
  goto y_20;
  c_70 :
  Epushd(5,2);
  Tdupl();
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(4,2),(ATerm)ATmakeAppl2(a_0,MakeInt(1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_u_24);
  Tpop();
  NotNULLd(4,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(4,2),(ATerm)ATmakeAppl2(a_0,MakeInt(1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_t_24);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Ccall(_stratego_s_24);
  MoveTop(5,2);
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,2);
  NotNULLd(4,6);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(5,1),(ATerm)ATmakeAppl2(a_0,Egetd(4,4),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,Egetd(5,2),Egetd(4,6)),(ATerm)ATmakeAppl0(c_0)))));
  Cpush(b_21);
  Epushd(6,7);
  MoveTop(6,1);
  goto y_57;
  y_57 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto z_57;
  z_57 :
  TestInt(6,2,0,&&fail);
  goto a_58;
  a_58 :
  TestFunFC(a_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto b_58;
  b_58 :
  TestFunFC(a_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto c_58;
  c_58 :
  TestFunFC(c_0,&&fail,Egetd(6,7));
  Rpush(d_21);
  goto f_70;
  d_21 :
  goto c_21;
  f_70 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  c_21 :
  Epopd(6,7);
  goto a_21;
  b_21 :
  Rpush(g_21);
  goto b_70;
  g_21 :
  goto e_21;
  a_21 :
  Cpop();
  e_21 :
  Epopd(5,2);
  Return();
  y_20 :
  Epopd(4,7);
  Return();
  x_20 :
  MoveTop(3,1);
  goto w_59;
  w_59 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(h_21);
  goto g_70;
  h_21 :
  goto w_20;
  g_70 :
  Epushd(4,14);
  Move(1,2,3,2);
  Move(1,3,3,3);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_r_24);
  MoveTop(4,1);
  Move(1,1,4,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,Egetd(1,2),Egetd(1,3)),(ATerm)ATmakeAppl2(a_0,Egetd(1,3),(ATerm)ATmakeAppl0(c_0))));
  Rpush(i_21);
  i_70 :
  Epushd(5,9);
  MoveTop(5,1);
  goto w_58;
  w_58 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,5,5,1,1);
  goto x_58;
  x_58 :
  TestFunFC(a_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,9,5,5,1);
  goto y_58;
  y_58 :
  TestFunFC(l_0,&&l_21,Egetd(5,6));
  goto z_58;
  z_58 :
  TestFunFC(c_0,&&fail,Egetd(5,9));
  goto a_59;
  a_59 :
  m_21 :
  Rpush(k_21);
  goto j_70;
  l_21 :
  TestFunFC(k_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto b_59;
  b_59 :
  TestFunFC(k_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto c_59;
  c_59 :
  TestFunFC(c_0,&&fail,Egetd(5,9));
  Rpush(k_21);
  goto k_70;
  k_21 :
  goto j_21;
  j_70 :
  Tset((ATerm)ATmakeAppl0(l_0));
  Return();
  k_70 :
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
  goto p_58;
  p_58 :
  TestFunFC(a_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto q_58;
  q_58 :
  TestFunFC(a_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto r_58;
  r_58 :
  TestFunFC(c_0,&&fail,Egetd(7,5));
  Rpush(w_21);
  goto l_70;
  w_21 :
  goto v_21;
  l_70 :
  Epushd(8,3);
  Tdupl();
  Epushd(9,3);
  Ccall(_stratego_s_24);
  MoveTop(9,1);
  Move(8,1,9,1);
  Ccall(_stratego_s_24);
  MoveTop(9,2);
  Move(8,2,9,2);
  Ccall(_stratego_s_24);
  MoveTop(9,3);
  Move(8,3,9,3);
  Epopd(9,3);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,4);
  NotNULLd(8,1);
  NotNULLd(8,2);
  NotNULLd(8,3);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl3(y_11,(ATerm)ATmakeAppl2(i_0,(ATerm)ATmakeAppl1(j_0,Egetd(8,1)),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(a_12,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(p_11,Egetd(8,2)),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(p_11,Egetd(7,2)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl2(a_12,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(p_11,Egetd(8,3)),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(p_11,Egetd(7,4)),(ATerm)ATmakeAppl0(l_0))))),(ATerm)ATmakeAppl2(a_0,Egetd(8,1),(ATerm)ATmakeAppl2(a_0,Egetd(8,2),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl1(p_11,Egetd(8,2)),(ATerm)ATmakeAppl2(a_0,Egetd(8,3),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl1(p_11,Egetd(8,3)),(ATerm)ATmakeAppl0(c_0))))))));
  Epopd(8,3);
  Return();
  v_21 :
  Epopd(7,5);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(x_21);
  goto i_70;
  x_21 :
  OneNextSon();
  Ccall(_stratego_d_25);
  AllBuild();
  AllBuild();
  MoveTop(6,1);
  goto t_58;
  t_58 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto u_58;
  u_58 :
  TestFunFC(a_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto v_58;
  v_58 :
  TestFunFC(c_0,&&fail,Egetd(6,5));
  Rpush(y_21);
  goto p_70;
  y_21 :
  goto u_21;
  p_70 :
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(6,2),Egetd(6,4)));
  Return();
  u_21 :
  Epopd(6,5);
  Return();
  j_21 :
  Epopd(5,9);
  Return();
  i_21 :
  Rpush(g_22);
  q_70 :
  Cpush(i_22);
  Epushd(5,8);
  MoveTop(5,1);
  Rpush(j_22);
  s_70 :
  Cpush(v_22);
  Ccall(_stratego_g_26);
  goto q_22;
  v_22 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto f_59;
  f_59 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(y_22);
  goto t_70;
  y_22 :
  goto x_22;
  t_70 :
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Return();
  x_22 :
  Epopd(6,3);
  OneNextSon();
  Rpush(z_22);
  goto s_70;
  z_22 :
  AllBuild();
  goto w_22;
  q_22 :
  Cpop();
  w_22 :
  Return();
  j_22 :
  MoveTop(5,2);
  NotNULLd(5,1);
  Tset(Egetd(5,1));
  Rpush(a_23);
  v_70 :
  Cpush(c_23);
  Ccall(_stratego_g_26);
  goto b_23;
  c_23 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto i_59;
  i_59 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(f_23);
  goto w_70;
  f_23 :
  goto e_23;
  w_70 :
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Return();
  e_23 :
  Epopd(6,3);
  OneNextSon();
  Rpush(h_23);
  goto v_70;
  h_23 :
  AllBuild();
  goto d_23;
  b_23 :
  Cpop();
  d_23 :
  Return();
  a_23 :
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
  Rpush(k_23);
  goto q_70;
  k_23 :
  OneNextSon();
  Ccall(_stratego_d_25);
  AllBuild();
  AllBuild();
  MoveTop(5,4);
  goto l_59;
  l_59 :
  TestFunFC(a_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto m_59;
  m_59 :
  TestFunFC(a_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto n_59;
  n_59 :
  TestFunFC(c_0,&&fail,Egetd(5,8));
  Rpush(l_23);
  goto y_70;
  l_23 :
  goto j_23;
  y_70 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(5,5),Egetd(5,7)));
  Return();
  j_23 :
  Epopd(5,8);
  goto h_22;
  i_22 :
  Rpush(n_23);
  z_70 :
  Cpush(p_23);
  Ccall(_stratego_g_26);
  goto o_23;
  p_23 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_25);
  OneNextSon();
  Rpush(r_23);
  goto z_70;
  r_23 :
  AllBuild();
  goto q_23;
  o_23 :
  Cpop();
  q_23 :
  Return();
  n_23 :
  Tset((ATerm)ATmakeAppl0(c_0));
  goto m_23;
  h_22 :
  Cpop();
  m_23 :
  Return();
  g_22 :
  MoveTop(4,2);
  goto p_59;
  p_59 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto q_59;
  q_59 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto r_59;
  r_59 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto s_59;
  s_59 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto t_59;
  t_59 :
  TestFunFC(a_0,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,12,4,10,1);
  goto u_59;
  u_59 :
  TestFunFC(a_0,&&fail,Egetd(4,12));
  MoveArg(4,13,4,12,0);
  MoveArg(4,14,4,12,1);
  goto v_59;
  v_59 :
  TestFunFC(c_0,&&fail,Egetd(4,14));
  Rpush(s_23);
  goto a_71;
  s_23 :
  goto z_21;
  a_71 :
  Move(1,4,4,3);
  Move(1,5,4,5);
  Move(1,6,4,7);
  Move(1,7,4,9);
  Move(1,8,4,11);
  Move(1,9,4,13);
  Return();
  z_21 :
  Epopd(4,14);
  Return();
  w_20 :
  Epopd(3,3);
  Return();
  u_20 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,3);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(1,3),(ATerm)ATmakeAppl2(k_0,Egetd(1,6),(ATerm)ATmakeAppl2(k_0,Egetd(1,8),(ATerm)ATmakeAppl0(l_0)))));
  Ccall(_stratego_q_24);
  MoveTop(1,10);
  NotNULLd(1,5);
  NotNULLd(1,10);
  NotNULLd(1,7);
  NotNULLd(1,2);
  NotNULLd(0,2);
  NotNULLd(1,9);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl3(v_0,(ATerm)ATmakeAppl2(t_20,Egetd(0,2),ATmakeString("T")),Egetd(1,5),(ATerm)ATmakeAppl2(v_11,(ATerm)ATmakeAppl2(k_0,Egetd(1,2),Egetd(1,10)),(ATerm)ATmakeAppl1(n_15,(ATerm)ATmakeAppl3(p_15,(ATerm)ATmakeAppl2(a_12,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(a_12,Egetd(0,2),Egetd(1,7)),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(p_11,Egetd(1,2)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl2(a_12,ATmakeString("Pair"),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(a_12,Egetd(0,2),Egetd(1,9)),(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(p_11,Egetd(1,1)),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl1(l_13,Egetd(1,4)))))));
  Epopd(1,10);
  Return();
  p_18 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_w_24)
  Epushd(0,11);
  MoveTop(0,3);
  goto q_71;
  q_71 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,9,0,3,1);
  goto r_71;
  r_71 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto s_71;
  s_71 :
  TestFunFC(a_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto t_71;
  t_71 :
  TestFunFC(c_0,&&fail,Egetd(0,8));
  goto u_71;
  u_71 :
  TestFunFC(a_0,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,11,0,9,1);
  goto v_71;
  v_71 :
  TestFunFC(c_0,&&fail,Egetd(0,11));
  goto w_71;
  w_71 :
  TestInt(0,7,0,&&v_23);
  goto x_71;
  x_71 :
  TestFunFC(t_20,&&w_23,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(o_25);
  Rpush(t_25);
  goto p_73;
  t_25 :
  goto e_24;
  o_25 :
  Ccontinue(u_25);
  Rpush(v_25);
  goto q_73;
  v_25 :
  goto e_24;
  u_25 :
  Rpush(x_25);
  goto r_73;
  x_25 :
  goto w_25;
  e_24 :
  Cpop();
  w_25 :
  goto u_23;
  w_23 :
  Cpush(z_25);
  Rpush(a_26);
  goto q_73;
  a_26 :
  goto y_25;
  z_25 :
  Rpush(i_26);
  goto r_73;
  i_26 :
  goto b_26;
  y_25 :
  Cpop();
  b_26 :
  goto u_23;
  v_23 :
  goto y_71;
  y_71 :
  TestFunFC(t_20,&&j_26,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(l_26);
  Rpush(o_26);
  goto p_73;
  o_26 :
  goto k_26;
  l_26 :
  Rpush(r_26);
  goto q_73;
  r_26 :
  goto q_26;
  k_26 :
  Cpop();
  q_26 :
  goto u_23;
  j_26 :
  Rpush(u_23);
  goto q_73;
  u_23 :
  goto t_23;
  p_73 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,7),(ATerm)ATmakeAppl0(c_0)))));
  Ccall(_stratego_v_24);
  Ccall(_stratego_p_24);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  q_73 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(s_26);
  t_73 :
  Cpush(z_26);
  Ccall(_stratego_g_26);
  goto y_26;
  z_26 :
  Ccontinue(d_27);
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
  Ccall(_stratego_a_25);
  MoveTop(3,1);
  Move(0,7,3,1);
  Epopd(3,1);
  Tpop();
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(e_27);
  goto t_73;
  e_27 :
  AllBuild();
  goto y_26;
  d_27 :
  Epushd(3,3);
  MoveTop(3,1);
  goto j_71;
  j_71 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_27);
  goto w_73;
  s_27 :
  goto q_27;
  w_73 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(u_27);
  goto t_73;
  u_27 :
  Return();
  q_27 :
  Epopd(3,3);
  goto g_27;
  y_26 :
  Cpop();
  g_27 :
  Return();
  s_26 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_d_24);
  Epopd(1,1);
  Return();
  r_73 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(v_27);
  y_73 :
  Cpush(c_28);
  Ccall(_stratego_g_26);
  goto w_27;
  c_28 :
  Ccontinue(d_28);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto m_71;
  m_71 :
  TestFunFC(v_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(i_28);
  goto z_73;
  i_28 :
  goto h_28;
  z_73 :
  Move(0,5,3,2);
  Return();
  h_28 :
  Epopd(3,4);
  OneNextSon();
  Rpush(j_28);
  goto y_73;
  j_28 :
  AllBuild();
  goto w_27;
  d_28 :
  Epushd(3,3);
  MoveTop(3,1);
  goto o_71;
  o_71 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(m_28);
  goto a_74;
  m_28 :
  goto l_28;
  a_74 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(n_28);
  goto y_73;
  n_28 :
  Return();
  l_28 :
  Epopd(3,3);
  goto k_28;
  w_27 :
  Cpop();
  k_28 :
  Return();
  v_27 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_d_24);
  Epopd(1,1);
  Return();
  t_23 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_x_24)
  Epushd(0,7);
  MoveTop(0,1);
  goto e_75;
  e_75 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto f_75;
  f_75 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto g_75;
  g_75 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto h_75;
  h_75 :
  TestFunFC(c_0,&&fail,Egetd(0,6));
  Rpush(z_28);
  goto i_77;
  z_28 :
  goto p_28;
  i_77 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto e_74;
  e_74 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto f_74;
  f_74 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto g_74;
  g_74 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(c_29);
  goto j_77;
  c_29 :
  goto a_29;
  j_77 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  a_29 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
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
  Rpush(e_29);
  goto k_77;
  e_29 :
  goto d_29;
  k_77 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  d_29 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,3),(ATerm)ATmakeAppl0(c_0))));
  Rpush(g_29);
  l_77 :
  Epushd(2,9);
  MoveTop(2,1);
  goto r_74;
  r_74 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto s_74;
  s_74 :
  TestFunFC(l_0,&&l_29,Egetd(2,2));
  goto t_74;
  t_74 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto u_74;
  u_74 :
  TestFunFC(l_0,&&fail,Egetd(2,6));
  goto v_74;
  v_74 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(i_29);
  goto m_77;
  l_29 :
  TestFunFC(k_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto w_74;
  w_74 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto x_74;
  x_74 :
  TestFunFC(k_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto y_74;
  y_74 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(i_29);
  goto n_77;
  i_29 :
  goto h_29;
  m_77 :
  Tset((ATerm)ATmakeAppl0(l_0));
  Return();
  n_77 :
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
  Rpush(q_29);
  goto l_77;
  q_29 :
  OneNextSon();
  Ccall(_stratego_d_25);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto o_74;
  o_74 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto p_74;
  p_74 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto q_74;
  q_74 :
  TestFunFC(c_0,&&fail,Egetd(3,5));
  Rpush(u_29);
  goto o_77;
  u_29 :
  goto p_29;
  o_77 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(3,2),Egetd(3,4)));
  Return();
  p_29 :
  Epopd(3,5);
  Return();
  h_29 :
  Epopd(2,9);
  Return();
  g_29 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,4),(ATerm)ATmakeAppl2(a_0,Egetd(0,7),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,5);
  goto b_75;
  b_75 :
  TestFunFC(a_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto c_75;
  c_75 :
  TestFunFC(a_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto d_75;
  d_75 :
  TestFunFC(c_0,&&fail,Egetd(1,9));
  Rpush(x_29);
  goto q_77;
  x_29 :
  goto v_29;
  q_77 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(h_30);
  r_77 :
  Cpush(l_30);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_30);
  goto r_77;
  m_30 :
  AllBuild();
  goto j_30;
  l_30 :
  Ccall(_stratego_g_26);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto n_30;
  j_30 :
  Cpop();
  n_30 :
  Return();
  h_30 :
  Return();
  v_29 :
  Epopd(1,9);
  Return();
  p_28 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_y_24)
  Epushd(0,5);
  MoveTop(0,5);
  goto i_78;
  i_78 :
  TestFunFC(a_0,&&y_30,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto j_78;
  j_78 :
  TestFunFC(a_0,&&z_30,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto k_78;
  k_78 :
  TestFunFC(c_0,&&b_31,Egetd(0,4));
  Cpush(o_31);
  Rpush(x_31);
  goto u_79;
  x_31 :
  goto l_31;
  o_31 :
  Rpush(z_31);
  goto v_79;
  z_31 :
  goto y_31;
  l_31 :
  Cpop();
  y_31 :
  goto u_30;
  b_31 :
  Rpush(u_30);
  goto v_79;
  z_30 :
  Rpush(u_30);
  goto v_79;
  y_30 :
  Rpush(u_30);
  goto v_79;
  u_30 :
  goto t_30;
  u_79 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(a_32);
  w_79 :
  Cpush(i_32);
  Ccall(_stratego_g_26);
  goto c_32;
  i_32 :
  Ccontinue(j_32);
  Epushd(1,3);
  MoveTop(1,1);
  goto x_77;
  x_77 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(o_32);
  goto x_79;
  o_32 :
  goto n_32;
  x_79 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(u_32);
  y_79 :
  Cpush(e_33);
  Epushd(2,3);
  MoveTop(2,1);
  goto w_77;
  w_77 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(i_33);
  goto z_79;
  i_33 :
  goto g_33;
  z_79 :
  Move(1,2,2,2);
  Return();
  g_33 :
  Epopd(2,3);
  goto d_33;
  e_33 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_33);
  goto y_79;
  p_33 :
  AllBuild();
  goto o_33;
  d_33 :
  Cpop();
  o_33 :
  Return();
  u_32 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(t_33);
  goto w_79;
  t_33 :
  Return();
  n_32 :
  Epopd(1,3);
  goto c_32;
  j_32 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_33);
  goto w_79;
  z_33 :
  AllBuild();
  goto u_33;
  c_32 :
  Cpop();
  u_33 :
  Return();
  a_32 :
  Return();
  v_79 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(l_0),(ATerm)ATmakeAppl2(a_0,Egetd(0,5),(ATerm)ATmakeAppl0(c_0))));
  Rpush(f_34);
  a_80 :
  Cpush(k_34);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(q_34);
  Epushd(1,7);
  MoveTop(1,1);
  goto z_77;
  z_77 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto a_78;
  a_78 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto b_78;
  b_78 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto c_78;
  c_78 :
  TestFunFC(c_0,&&fail,Egetd(1,6));
  Rpush(t_34);
  goto b_80;
  t_34 :
  goto s_34;
  b_80 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  s_34 :
  Epopd(1,7);
  goto l_34;
  q_34 :
  Ccall(_stratego_x_24);
  goto z_34;
  l_34 :
  Cpop();
  z_34 :
  OneNextSon();
  Ccall(_stratego_d_25);
  AllBuild();
  AllBuild();
  goto g_34;
  k_34 :
  Epushd(1,7);
  MoveTop(1,1);
  goto e_78;
  e_78 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_78;
  f_78 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto g_78;
  g_78 :
  TestFunFC(k_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto h_78;
  h_78 :
  TestFunFC(c_0,&&fail,Egetd(1,7));
  Rpush(c_35);
  goto c_80;
  c_35 :
  goto b_35;
  c_80 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,Egetd(1,5),Egetd(1,2)),(ATerm)ATmakeAppl2(a_0,Egetd(1,6),(ATerm)ATmakeAppl0(c_0))));
  Return();
  b_35 :
  Epopd(1,7);
  goto a_35;
  g_34 :
  Cpop();
  a_35 :
  Cpush(i_35);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_26);
  OneNextSon();
  Ccall(_stratego_d_25);
  AllBuild();
  AllBuild();
  goto f_35;
  i_35 :
  Rpush(l_35);
  goto a_80;
  l_35 :
  goto k_35;
  f_35 :
  Cpop();
  k_35 :
  Return();
  f_34 :
  Return();
  t_30 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_z_24)
  _ST_add();
ENDPROC

PROC(_stratego_a_25)
  Rpush(m_35);
  n_80 :
  Cpush(t_35);
  Ccall(_stratego_g_26);
  Tset(MakeInt(0));
  goto r_35;
  t_35 :
  Epushd(0,3);
  MoveTop(0,1);
  goto f_80;
  f_80 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(a_36);
  goto o_80;
  a_36 :
  goto v_35;
  o_80 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(c_36);
  goto n_80;
  c_36 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl2(a_0,MakeInt(1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_z_24);
  Epopd(1,1);
  Return();
  v_35 :
  Epopd(0,3);
  goto u_35;
  r_35 :
  Cpop();
  u_35 :
  Return();
  m_35 :
ENDPROC

PROC(_stratego_b_25)
  Rpush(d_36);
  l_82 :
  Cpush(j_36);
  Ccall(_stratego_g_26);
  Tset((ATerm)ATmakeAppl0(l_0));
  goto e_36;
  j_36 :
  Epushd(0,3);
  MoveTop(0,1);
  goto e_81;
  e_81 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(q_36);
  goto m_82;
  q_36 :
  goto p_36;
  m_82 :
  Epushd(1,9);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(1,1);
  goto v_80;
  v_80 :
  TestFunFC(v_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,4,1,1,2);
  Rpush(b_37);
  goto n_82;
  b_37 :
  goto a_37;
  n_82 :
  Epushd(2,2);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_a_25);
  MoveTop(2,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(h_37);
  goto l_82;
  h_37 :
  MoveTop(2,2);
  NotNULLd(1,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl2(a_0,Egetd(2,1),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl0(c_0))));
  Epopd(2,2);
  Return();
  a_37 :
  MoveTop(1,5);
  goto b_81;
  b_81 :
  TestFunFC(a_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto c_81;
  c_81 :
  TestFunFC(a_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto d_81;
  d_81 :
  TestFunFC(c_0,&&fail,Egetd(1,9));
  Rpush(n_37);
  goto r_82;
  n_37 :
  goto w_36;
  r_82 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(o_37);
  s_82 :
  Cpush(x_37);
  Ccall(_stratego_g_26);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto w_37;
  x_37 :
  Ccontinue(d_38);
  Epushd(2,3);
  MoveTop(2,1);
  goto a_81;
  a_81 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(i_38);
  goto t_82;
  i_38 :
  goto e_38;
  t_82 :
  Tdupl();
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  Rpush(j_38);
  u_82 :
  Cpush(e_39);
  Epushd(3,3);
  MoveTop(3,1);
  goto z_80;
  z_80 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_39);
  goto v_82;
  j_39 :
  goto f_39;
  v_82 :
  Move(2,2,3,2);
  Return();
  f_39 :
  Epopd(3,3);
  goto c_39;
  e_39 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_39);
  goto u_82;
  l_39 :
  AllBuild();
  goto k_39;
  c_39 :
  Cpop();
  k_39 :
  Return();
  j_38 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(m_39);
  goto s_82;
  m_39 :
  Return();
  e_38 :
  Epopd(2,3);
  goto w_37;
  d_38 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_39);
  goto s_82;
  z_39 :
  AllBuild();
  goto n_39;
  w_37 :
  Cpop();
  n_39 :
  Return();
  o_37 :
  Return();
  w_36 :
  Epopd(1,9);
  Return();
  p_36 :
  Epopd(0,3);
  goto l_36;
  e_36 :
  Cpop();
  l_36 :
  Return();
  d_36 :
ENDPROC

PROC(_stratego_c_25)
  Epushd(0,9);
  MoveTop(0,1);
  Ccall(_stratego_b_25);
  MoveTop(0,2);
  NotNULLd(0,2);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(l_0),(ATerm)ATmakeAppl0(c_0)))));
  MoveTop(0,3);
  goto w_84;
  w_84 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto x_84;
  x_84 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto y_84;
  y_84 :
  TestFunFC(a_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,9,0,7,1);
  goto z_84;
  z_84 :
  TestFunFC(c_0,&&fail,Egetd(0,9));
  Rpush(n_40);
  goto k_89;
  n_40 :
  goto l_40;
  k_89 :
  Epushd(1,7);
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,8);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,4),(ATerm)ATmakeAppl2(a_0,Egetd(0,4),(ATerm)ATmakeAppl2(a_0,Egetd(0,6),(ATerm)ATmakeAppl2(a_0,Egetd(0,8),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(l_0),(ATerm)ATmakeAppl0(c_0)))))));
  Rpush(p_40);
  l_89 :
  Epushd(2,13);
  MoveTop(2,1);
  goto u_83;
  u_83 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto v_83;
  v_83 :
  TestFunFC(k_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto w_83;
  w_83 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto x_83;
  x_83 :
  TestFunFC(a_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto y_83;
  y_83 :
  TestFunFC(a_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto z_83;
  z_83 :
  TestFunFC(a_0,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto a_84;
  a_84 :
  TestFunFC(c_0,&&fail,Egetd(2,13));
  Cpush(c_41);
  Rpush(d_41);
  goto m_89;
  d_41 :
  goto b_41;
  c_41 :
  Rpush(k_41);
  goto n_89;
  k_41 :
  goto e_41;
  b_41 :
  Cpop();
  e_41 :
  goto r_40;
  r_40 :
  goto q_40;
  m_89 :
  Epushd(3,8);
  Tdupl();
  Epushd(4,3);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,3),(ATerm)ATmakeAppl2(a_0,Egetd(2,8),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_w_24);
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Ccall(_stratego_o_21);
  MoveTop(4,2);
  Move(3,2,4,2);
  NotNULLd(3,2);
  NotNULLd(2,6);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,2),(ATerm)ATmakeAppl2(a_0,Egetd(2,6),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_y_24);
  MoveTop(4,3);
  Move(3,3,4,3);
  Epopd(4,3);
  Tpop();
  NotNULLd(3,3);
  NotNULLd(2,4);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,3),(ATerm)ATmakeAppl2(a_0,Egetd(2,4),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(3,4);
  goto r_83;
  r_83 :
  TestFunFC(a_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto s_83;
  s_83 :
  TestFunFC(a_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto t_83;
  t_83 :
  TestFunFC(c_0,&&fail,Egetd(3,8));
  Rpush(m_41);
  goto r_89;
  m_41 :
  goto l_41;
  r_89 :
  Epushd(4,6);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(o_41);
  s_89 :
  Cpush(w_41);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_41);
  goto s_89;
  x_41 :
  AllBuild();
  goto v_41;
  w_41 :
  Ccall(_stratego_g_26);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto y_41;
  v_41 :
  Cpop();
  y_41 :
  Return();
  o_41 :
  MoveTop(4,1);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,3),(ATerm)ATmakeAppl2(a_0,Egetd(2,6),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(4,2);
  goto o_83;
  o_83 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto p_83;
  p_83 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto q_83;
  q_83 :
  TestFunFC(c_0,&&fail,Egetd(4,6));
  Rpush(a_42);
  goto u_89;
  a_42 :
  goto z_41;
  u_89 :
  Epushd(5,8);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(m_42);
  v_89 :
  Cpush(p_42);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_42);
  goto v_89;
  w_42 :
  AllBuild();
  goto n_42;
  p_42 :
  Ccall(_stratego_g_26);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto x_42;
  n_42 :
  Cpop();
  x_42 :
  Return();
  m_42 :
  MoveTop(5,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,3),(ATerm)ATmakeAppl2(a_0,Egetd(3,1),(ATerm)ATmakeAppl2(a_0,Egetd(2,10),(ATerm)ATmakeAppl0(c_0)))));
  MoveTop(5,2);
  goto k_83;
  k_83 :
  TestFunFC(a_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto l_83;
  l_83 :
  TestFunFC(a_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto m_83;
  m_83 :
  TestFunFC(a_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto n_83;
  n_83 :
  TestFunFC(c_0,&&fail,Egetd(5,8));
  Rpush(b_43);
  goto x_89;
  b_43 :
  goto y_42;
  x_89 :
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
  y_42 :
  Epopd(5,8);
  Return();
  z_41 :
  Epopd(4,6);
  Return();
  l_41 :
  Epopd(3,8);
  Return();
  n_89 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,4),(ATerm)ATmakeAppl2(a_0,Egetd(2,6),(ATerm)ATmakeAppl2(a_0,Egetd(2,8),(ATerm)ATmakeAppl2(a_0,Egetd(2,10),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,Egetd(2,3),Egetd(2,12)),(ATerm)ATmakeAppl0(c_0)))))));
  Return();
  q_40 :
  Cpush(e_43);
  Epushd(3,11);
  MoveTop(3,1);
  goto c_84;
  c_84 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto d_84;
  d_84 :
  TestFunFC(l_0,&&fail,Egetd(3,2));
  goto e_84;
  e_84 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto f_84;
  f_84 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto g_84;
  g_84 :
  TestFunFC(a_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto h_84;
  h_84 :
  TestFunFC(a_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto i_84;
  i_84 :
  TestFunFC(c_0,&&fail,Egetd(3,11));
  Rpush(g_43);
  goto z_89;
  g_43 :
  goto f_43;
  z_89 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,8),(ATerm)ATmakeAppl2(a_0,Egetd(3,10),(ATerm)ATmakeAppl0(c_0))));
  Return();
  f_43 :
  Epopd(3,11);
  goto d_43;
  e_43 :
  Rpush(i_43);
  goto l_89;
  i_43 :
  goto h_43;
  d_43 :
  Cpop();
  h_43 :
  Epopd(2,13);
  Return();
  p_40 :
  MoveTop(1,1);
  goto r_84;
  r_84 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto s_84;
  s_84 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto t_84;
  t_84 :
  TestFunFC(l_0,&&k_43,Egetd(1,4));
  goto u_84;
  u_84 :
  TestFunFC(c_0,&&fail,Egetd(1,7));
  Rpush(j_43);
  goto a_90;
  k_43 :
  TestFunFC(k_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto v_84;
  v_84 :
  TestFunFC(c_0,&&fail,Egetd(1,7));
  Rpush(j_43);
  goto b_90;
  j_43 :
  goto o_40;
  a_90 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  b_90 :
  Tdupl();
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(k_0,Egetd(1,5),Egetd(1,6)));
  Rpush(m_43);
  c_90 :
  Cpush(y_43);
  Ccall(_stratego_g_26);
  goto n_43;
  y_43 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,3);
  goto n_84;
  n_84 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_84;
  o_84 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto p_84;
  p_84 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  goto q_84;
  q_84 :
  TestFunFC(t_20,&&c_44,Egetd(2,4));
  MoveArg(2,1,2,4,0);
  MoveArg(2,2,2,4,1);
  Cpush(p_44);
  Rpush(t_44);
  goto d_90;
  t_44 :
  goto i_44;
  p_44 :
  Rpush(z_44);
  goto e_90;
  z_44 :
  goto x_44;
  i_44 :
  Cpop();
  x_44 :
  goto b_44;
  c_44 :
  Rpush(b_44);
  goto e_90;
  b_44 :
  goto a_44;
  d_90 :
  NotNULLd(2,1);
  NotNULLd(2,2);
  NotNULLd(2,6);
  Tset((ATerm)ATmakeAppl2(k_0,ATmakeString("error: operator "),(ATerm)ATmakeAppl2(k_0,Egetd(2,1),(ATerm)ATmakeAppl2(k_0,ATmakeString("^"),(ATerm)ATmakeAppl2(k_0,Egetd(2,2),(ATerm)ATmakeAppl2(k_0,ATmakeString("/"),(ATerm)ATmakeAppl2(k_0,Egetd(2,6),(ATerm)ATmakeAppl2(k_0,ATmakeString(" undefined "),(ATerm)ATmakeAppl0(l_0)))))))));
  Ccall(_stratego_n_21);
  Return();
  e_90 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  Tset((ATerm)ATmakeAppl2(k_0,ATmakeString("error: operator "),(ATerm)ATmakeAppl2(k_0,Egetd(2,4),(ATerm)ATmakeAppl2(k_0,ATmakeString("/"),(ATerm)ATmakeAppl2(k_0,Egetd(2,6),(ATerm)ATmakeAppl2(k_0,ATmakeString(" undefined "),(ATerm)ATmakeAppl0(l_0)))))));
  Ccall(_stratego_n_21);
  Return();
  a_44 :
  Epopd(2,7);
  OneNextSon();
  Rpush(a_45);
  goto c_90;
  a_45 :
  AllBuild();
  goto z_43;
  n_43 :
  Cpop();
  z_43 :
  Return();
  m_43 :
  Tpop();
  Tset(MakeInt(1));
  Ccall(_stratego_m_25);
  Return();
  o_40 :
  Epopd(1,7);
  Return();
  l_40 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_d_25)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_90;
  g_90 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  Rpush(e_45);
  goto i_90;
  e_45 :
  goto d_45;
  i_90 :
  Return();
  d_45 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_25)
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(l_0)),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_n_25);
  Tset(MakeInt(1));
  Ccall(_stratego_m_25);
ENDPROC

PROC(_stratego_f_25)
  Epushd(0,2);
  Tdupl();
  Cpush(g_45);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(h_45);
  Tdupl();
  Rpush(i_45);
  f_91 :
  Cpush(l_45);
  Epushd(1,3);
  MoveTop(1,1);
  goto k_90;
  k_90 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_90;
  l_90 :
  TestFunFC(p_45,&&fail,Egetd(1,2));
  Rpush(n_45);
  goto g_91;
  n_45 :
  goto m_45;
  g_91 :
  Return();
  m_45 :
  Epopd(1,3);
  goto j_45;
  l_45 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_46);
  goto f_91;
  d_46 :
  AllBuild();
  goto u_45;
  j_45 :
  Cpop();
  u_45 :
  Return();
  i_45 :
  Cpop();
  Crestore();
  Cjump();
  h_45 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_d_25);
  AllBuild();
  AllBuild();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(e_46);
  h_91 :
  Cpush(o_46);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_90;
  n_90 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_90;
  o_90 :
  TestFunFC(w_46,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_46);
  goto i_91;
  t_46 :
  goto p_46;
  i_91 :
  Move(0,2,1,3);
  Return();
  p_46 :
  Epopd(1,4);
  goto n_46;
  o_46 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_47);
  goto h_91;
  a_47 :
  AllBuild();
  goto x_46;
  n_46 :
  Cpop();
  x_46 :
  Return();
  e_46 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_d_25);
  AllBuild();
  AllBuild();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(b_47);
  j_91 :
  Cpush(d_47);
  Epushd(1,4);
  MoveTop(1,1);
  goto q_90;
  q_90 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto r_90;
  r_90 :
  TestFunFC(s_47,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(j_47);
  goto k_91;
  j_47 :
  goto f_47;
  k_91 :
  Move(0,1,1,3);
  Return();
  f_47 :
  Epopd(1,4);
  goto c_47;
  d_47 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_47);
  goto j_91;
  x_47 :
  AllBuild();
  goto u_47;
  c_47 :
  Cpop();
  u_47 :
  Return();
  b_47 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_d_25);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,Egetd(0,1),(ATerm)ATmakeAppl2(k_0,ATmakeString(" ("),(ATerm)ATmakeAppl2(k_0,Egetd(0,2),(ATerm)ATmakeAppl2(k_0,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(l_0))))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_n_25);
  goto f_45;
  g_45 :
  goto y_47;
  f_45 :
  Cpop();
  y_47 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_m_25);
  Epopd(0,2);
ENDPROC

PROC(_stratego_g_25)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_h_25)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_i_25)
  Epushd(0,1);
  Tdupl();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(c_48);
  Rpush(g_48);
  k_92 :
  Cpush(s_48);
  Epushd(1,4);
  MoveTop(1,1);
  goto m_91;
  m_91 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto n_91;
  n_91 :
  TestFunFC(v_48,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(u_48);
  goto l_92;
  u_48 :
  goto t_48;
  l_92 :
  Move(0,1,1,3);
  Return();
  t_48 :
  Epopd(1,4);
  goto o_48;
  s_48 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_48);
  goto k_92;
  x_48 :
  AllBuild();
  goto w_48;
  o_48 :
  Cpop();
  w_48 :
  Return();
  g_48 :
  goto z_47;
  c_48 :
  Tset((ATerm)ATmakeAppl0(z_48));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(z_48));
  MoveTop(0,1);
  Tpop();
  goto y_48;
  z_47 :
  Cpop();
  y_48 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_d_25);
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
  Ccall(_stratego_d_25);
  AllBuild();
  AllBuild();
  Cpush(b_49);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(c_49);
  q_92 :
  Cpush(o_49);
  Epushd(1,3);
  MoveTop(1,1);
  goto t_91;
  t_91 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto u_91;
  u_91 :
  TestFunFC(r_49,&&fail,Egetd(1,2));
  Rpush(q_49);
  goto r_92;
  q_49 :
  goto p_49;
  r_92 :
  Return();
  p_49 :
  Epopd(1,3);
  goto d_49;
  o_49 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_49);
  goto q_92;
  t_49 :
  AllBuild();
  goto s_49;
  d_49 :
  Cpop();
  s_49 :
  Return();
  c_49 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_25);
  OneNextSon();
  Ccall(_stratego_d_25);
  AllBuild();
  AllBuild();
  goto a_49;
  b_49 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_g_25);
  OneNextSon();
  Ccall(_stratego_d_25);
  AllBuild();
  AllBuild();
  goto u_49;
  a_49 :
  Cpop();
  u_49 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_25)
  _ST_dtime();
ENDPROC

PROC(_stratego_k_25)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_l_25)
  Epushd(0,3);
  Tdupl();
  Cpush(w_49);
  Rpush(x_49);
  l_93 :
  Cpush(z_49);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_92;
  t_92 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_92;
  u_92 :
  TestFunFC(c_50,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(b_50);
  goto m_93;
  b_50 :
  goto a_50;
  m_93 :
  Move(0,1,1,3);
  Return();
  a_50 :
  Epopd(1,4);
  goto y_49;
  z_49 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_50);
  goto l_93;
  e_50 :
  AllBuild();
  goto d_50;
  y_49 :
  Cpop();
  d_50 :
  Return();
  x_49 :
  goto v_49;
  w_49 :
  Tset((ATerm)ATmakeAppl0(u_50));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(u_50));
  MoveTop(0,1);
  Tpop();
  goto q_50;
  v_49 :
  Cpop();
  q_50 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_k_25);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,3),(ATerm)ATmakeAppl0(c_0))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_m_25)
  _ST_exit();
ENDPROC

PROC(_stratego_n_25)
  _ST_printnl();
ENDPROC

PROC(_stratego_c_26)
  Epushd(0,1);
  Tdupl();
  Rpush(c_51);
  z_93 :
  Cpush(m_51);
  Epushd(1,4);
  MoveTop(1,1);
  goto s_93;
  s_93 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto t_93;
  t_93 :
  TestFunFC(s_47,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_51);
  goto a_94;
  v_51 :
  goto n_51;
  a_94 :
  Move(0,1,1,3);
  Return();
  n_51 :
  Epopd(1,4);
  goto d_51;
  m_51 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_51);
  goto z_93;
  x_51 :
  AllBuild();
  goto w_51;
  d_51 :
  Cpop();
  w_51 :
  Return();
  c_51 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,ATmakeString("usage : "),(ATerm)ATmakeAppl2(k_0,Egetd(0,1),(ATerm)ATmakeAppl2(k_0,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(l_0)))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_n_25);
  Tset(MakeInt(1));
  Ccall(_stratego_m_25);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_26)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_94;
  c_94 :
  TestFunFC(a_52,&&fail,Egetd(0,1));
  Rpush(z_51);
  goto e_94;
  z_51 :
  goto y_51;
  e_94 :
  Return();
  y_51 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_26)
  Rpush(d_52);
  j_94 :
  Cpush(f_52);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Cpush(j_52);
  Ccall(_stratego_d_26);
  goto g_52;
  j_52 :
  Epushd(0,2);
  MoveTop(0,1);
  goto g_94;
  g_94 :
  TestFunFC(y_52,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(x_52);
  goto k_94;
  x_52 :
  goto p_52;
  k_94 :
  Return();
  p_52 :
  Epopd(0,2);
  goto k_52;
  g_52 :
  Cpop();
  k_52 :
  OneNextSon();
  AllBuild();
  goto e_52;
  f_52 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_53);
  goto j_94;
  g_53 :
  AllBuild();
  goto z_52;
  e_52 :
  Cpop();
  z_52 :
  Return();
  d_52 :
  Ccall(_stratego_c_26);
ENDPROC

PROC(_stratego_f_26)
  Epushd(0,5);
  MoveTop(0,3);
  goto y_96;
  y_96 :
  TestFunFC(k_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto z_96;
  z_96 :
  TestFunFC(k_0,&&y_53,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(d_54);
  Rpush(g_54);
  goto x_100;
  g_54 :
  goto a_54;
  d_54 :
  Ccontinue(i_54);
  Rpush(p_54);
  goto y_100;
  p_54 :
  goto a_54;
  i_54 :
  Ccontinue(q_54);
  Rpush(u_54);
  goto z_100;
  u_54 :
  goto a_54;
  q_54 :
  Ccontinue(z_54);
  Rpush(a_55);
  goto a_101;
  a_55 :
  goto a_54;
  z_54 :
  Ccontinue(e_55);
  Rpush(f_55);
  goto b_101;
  f_55 :
  goto a_54;
  e_55 :
  Ccontinue(k_55);
  Rpush(l_55);
  goto c_101;
  l_55 :
  goto a_54;
  k_55 :
  Ccontinue(n_55);
  Rpush(o_55);
  goto d_101;
  o_55 :
  goto a_54;
  n_55 :
  Ccontinue(p_55);
  Rpush(t_55);
  goto e_101;
  t_55 :
  goto a_54;
  p_55 :
  Ccontinue(u_55);
  Rpush(v_55);
  goto f_101;
  v_55 :
  goto a_54;
  u_55 :
  Ccontinue(w_55);
  Rpush(x_55);
  goto g_101;
  x_55 :
  goto a_54;
  w_55 :
  Ccontinue(y_55);
  Rpush(z_55);
  goto h_101;
  z_55 :
  goto a_54;
  y_55 :
  Ccontinue(a_56);
  Rpush(b_56);
  goto i_101;
  b_56 :
  goto a_54;
  a_56 :
  Ccontinue(c_56);
  Rpush(d_56);
  goto j_101;
  d_56 :
  goto a_54;
  c_56 :
  Ccontinue(e_56);
  Rpush(f_56);
  goto k_101;
  f_56 :
  goto a_54;
  e_56 :
  Rpush(q_56);
  goto l_101;
  q_56 :
  goto g_56;
  a_54 :
  Cpop();
  g_56 :
  goto p_53;
  y_53 :
  Cpush(t_56);
  Rpush(u_56);
  goto x_100;
  u_56 :
  goto r_56;
  t_56 :
  Ccontinue(w_56);
  Rpush(x_56);
  goto y_100;
  x_56 :
  goto r_56;
  w_56 :
  Ccontinue(b_57);
  Rpush(m_57);
  goto z_100;
  m_57 :
  goto r_56;
  b_57 :
  Ccontinue(n_57);
  Rpush(r_57);
  goto a_101;
  r_57 :
  goto r_56;
  n_57 :
  Ccontinue(s_57);
  Rpush(t_57);
  goto b_101;
  t_57 :
  goto r_56;
  s_57 :
  Ccontinue(u_57);
  Rpush(v_57);
  goto h_101;
  v_57 :
  goto r_56;
  u_57 :
  Ccontinue(w_57);
  Rpush(x_57);
  goto i_101;
  x_57 :
  goto r_56;
  w_57 :
  Ccontinue(h_58);
  Rpush(i_58);
  goto j_101;
  i_58 :
  goto r_56;
  h_58 :
  Ccontinue(j_58);
  Rpush(k_58);
  goto k_101;
  k_58 :
  goto r_56;
  j_58 :
  Rpush(m_58);
  goto l_101;
  m_58 :
  goto l_58;
  r_56 :
  Cpop();
  l_58 :
  goto p_53;
  p_53 :
  goto m_53;
  x_100 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_95;
  b_95 :
  TestStr(1,1,"-S",&&fail);
  Rpush(o_58);
  goto m_101;
  o_58 :
  goto n_58;
  m_101 :
  Return();
  n_58 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(p_45));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(p_45),Egetd(0,5)));
  Return();
  y_100 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_95;
  e_95 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(d_59);
  goto o_101;
  d_59 :
  goto s_58;
  o_101 :
  Return();
  s_58 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(p_45));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(p_45),Egetd(0,5)));
  Return();
  z_100 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_95;
  h_95 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(g_59);
  goto q_101;
  g_59 :
  goto e_59;
  q_101 :
  Return();
  e_59 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(h_59));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(h_59),Egetd(0,5)));
  Return();
  a_101 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_95;
  k_95 :
  TestStr(1,1,"-v",&&fail);
  Rpush(k_59);
  goto s_101;
  k_59 :
  goto j_59;
  s_101 :
  Return();
  j_59 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(o_59));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(o_59),Egetd(0,5)));
  Return();
  b_101 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_95;
  n_95 :
  TestStr(1,1,"--version",&&fail);
  Rpush(q_60);
  goto u_101;
  q_60 :
  goto a_60;
  u_101 :
  Return();
  a_60 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(o_59));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(o_59),Egetd(0,5)));
  Return();
  c_101 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_95;
  q_95 :
  TestStr(1,1,"@version",&&fail);
  Rpush(f_61);
  goto w_101;
  f_61 :
  goto r_60;
  w_101 :
  Return();
  r_60 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(g_61,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(g_61,Egetd(0,1)),Egetd(0,2)));
  Return();
  d_101 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_95;
  u_95 :
  TestStr(1,1,"-i",&&fail);
  Rpush(p_61);
  goto z_101;
  p_61 :
  goto o_61;
  z_101 :
  Return();
  o_61 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(c_50,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(c_50,Egetd(0,1)),Egetd(0,2)));
  Return();
  e_101 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_95;
  y_95 :
  TestStr(1,1,"--input",&&fail);
  Rpush(s_61);
  goto c_102;
  s_61 :
  goto q_61;
  c_102 :
  Return();
  q_61 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(c_50,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(c_50,Egetd(0,1)),Egetd(0,2)));
  Return();
  f_101 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_96;
  c_96 :
  TestStr(1,1,"-o",&&fail);
  Rpush(u_61);
  goto f_102;
  u_61 :
  goto t_61;
  f_102 :
  Return();
  t_61 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(v_48,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(v_48,Egetd(0,1)),Egetd(0,2)));
  Return();
  g_101 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_96;
  g_96 :
  TestStr(1,1,"--output",&&fail);
  Rpush(c_62);
  goto i_102;
  c_62 :
  goto b_62;
  i_102 :
  Return();
  b_62 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(v_48,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(v_48,Egetd(0,1)),Egetd(0,2)));
  Return();
  h_101 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_96;
  k_96 :
  TestStr(1,1,"-b",&&fail);
  Rpush(l_62);
  goto l_102;
  l_62 :
  goto k_62;
  l_102 :
  Return();
  k_62 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(r_49));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(r_49),Egetd(0,5)));
  Return();
  i_101 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_96;
  n_96 :
  TestStr(1,1,"-s",&&fail);
  Rpush(r_62);
  goto n_102;
  r_62 :
  goto n_62;
  n_102 :
  Return();
  n_62 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(s_62));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(s_62),Egetd(0,5)));
  Return();
  j_101 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_96;
  q_96 :
  TestStr(1,1,"--help",&&fail);
  Rpush(y_62);
  goto p_102;
  y_62 :
  goto u_62;
  p_102 :
  Return();
  u_62 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(a_52));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(a_52),Egetd(0,5)));
  Return();
  k_101 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_96;
  t_96 :
  TestStr(1,1,"-h",&&fail);
  Rpush(b_63);
  goto r_102;
  b_63 :
  goto z_62;
  r_102 :
  Return();
  z_62 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(a_52));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(a_52),Egetd(0,5)));
  Return();
  l_101 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_96;
  w_96 :
  TestStr(1,1,"-?",&&fail);
  Rpush(i_63);
  goto t_102;
  i_63 :
  goto h_63;
  t_102 :
  Return();
  h_63 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(a_52));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl0(a_52),Egetd(0,5)));
  Return();
  m_53 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_g_26)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_102;
  w_102 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  Rpush(c_64);
  goto y_102;
  c_64 :
  goto b_64;
  y_102 :
  Return();
  b_64 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_26)
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(s_47,Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(e_64);
  y_103 :
  Cpush(i_64);
  Cpush(u_64);
  Ccall(_stratego_g_26);
  goto j_64;
  u_64 :
  Ccall(_stratego_f_26);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_65);
  goto y_103;
  b_65 :
  AllBuild();
  goto a_65;
  j_64 :
  Cpop();
  a_65 :
  goto f_64;
  i_64 :
  Epushd(0,3);
  MoveTop(0,1);
  goto b_103;
  b_103 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(l_65);
  goto z_103;
  l_65 :
  goto k_65;
  z_103 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(y_52,Egetd(0,2)),Egetd(0,3)));
  Return();
  k_65 :
  Epopd(0,3);
  goto j_65;
  f_64 :
  Cpop();
  j_65 :
  Return();
  e_64 :
  AllBuild();
  Cpush(p_65);
  Ccall(_stratego_e_26);
  goto n_65;
  p_65 :
  Ccontinue(x_65);
  Epushd(0,6);
  Ccall(_stratego_l_25);
  Tdupl();
  Ccall(_stratego_j_25);
  Tpop();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_25);
  OneNextSon();
  Ccall(_stratego_d_25);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_j_25);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto e_103;
  e_103 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto f_103;
  f_103 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto g_103;
  g_103 :
  TestFunFC(c_0,&&fail,Egetd(0,6));
  Rpush(m_66);
  goto b_104;
  m_66 :
  goto y_65;
  b_104 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(k_0,(ATerm)ATmakeAppl1(w_46,Egetd(0,1)),Egetd(0,3)),(ATerm)ATmakeAppl2(a_0,Egetd(0,5),(ATerm)ATmakeAppl0(c_0))));
  Return();
  y_65 :
  Ccall(_stratego_i_25);
  Ccall(_stratego_f_25);
  Epopd(0,6);
  goto n_65;
  x_65 :
  Ccall(_stratego_e_25);
  goto n_66;
  n_65 :
  Cpop();
  n_66 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_h_26);
ENDPROC

DOIT

