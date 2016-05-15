#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,d_77);
VARDECL(AFun,x_75);
VARDECL(AFun,x_74);
VARDECL(AFun,u_74);
VARDECL(AFun,j_68);
VARDECL(AFun,t_66);
VARDECL(AFun,l_65);
VARDECL(AFun,h_65);
VARDECL(AFun,q_64);
VARDECL(AFun,d_64);
VARDECL(AFun,s_63);
VARDECL(AFun,r_62);
VARDECL(AFun,u_61);
VARDECL(AFun,x_60);
VARDECL(AFun,q_59);
VARDECL(AFun,a_56);
VARDECL(AFun,g_54);
VARDECL(AFun,b_43);
VARDECL(AFun,r_23);
VARDECL(AFun,p_23);
VARDECL(AFun,r_22);
VARDECL(AFun,m_21);
VARDECL(AFun,j_21);
VARDECL(AFun,h_21);
VARDECL(AFun,f_21);
VARDECL(AFun,v_20);
VARDECL(AFun,j_20);
VARDECL(AFun,h_20);
VARDECL(AFun,f_20);
VARDECL(AFun,d_20);
VARDECL(AFun,b_20);
VARDECL(AFun,z_19);
VARDECL(AFun,o_19);
VARDECL(AFun,n_19);
VARDECL(AFun,i_19);
VARDECL(AFun,h_19);
VARDECL(AFun,w_18);
VARDECL(AFun,n_18);
VARDECL(AFun,n_17);
VARDECL(AFun,f_17);
VARDECL(AFun,s_14);
VARDECL(AFun,z_13);
VARDECL(AFun,g_13);
VARDECL(AFun,d_13);
VARDECL(AFun,b_13);
VARDECL(AFun,z_12);
VARDECL(AFun,x_12);
VARDECL(AFun,e_12);
VARDECL(AFun,y_11);
VARDECL(AFun,x_11);
VARDECL(AFun,w_11);
VARDECL(AFun,s_9);
VARDECL(AFun,r_9);
VARDECL(AFun,c_6);
VARDECL(AFun,a_6);
VARDECL(AFun,a_1);
VARDECL(AFun,v_0);
VARDECL(AFun,u_0);
VARDECL(AFun,s_0);
VARDECL(AFun,o_0);
VARDECL(AFun,c_0);
VARDECL(AFun,b_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_f_25);
PROCDECL(_stratego_g_25);
PROCDECL(_stratego_h_25);
PROCDECL(_stratego_i_25);
PROCDECL(_stratego_k_25);
PROCDECL(_stratego_l_25);
PROCDECL(_stratego_m_25);
PROCDECL(_stratego_n_25);
PROCDECL(_stratego_o_25);
PROCDECL(_stratego_p_25);
PROCDECL(_stratego_q_25);
PROCDECL(_stratego_r_25);
PROCDECL(_stratego_s_25);
PROCDECL(_stratego_t_25);
PROCDECL(_stratego_v_25);
PROCDECL(_stratego_w_25);
PROCDECL(_stratego_x_25);
PROCDECL(_stratego_y_25);
PROCDECL(_stratego_z_25);
PROCDECL(_stratego_a_26);
PROCDECL(_stratego_q_26);
PROCDECL(_stratego_r_26);
PROCDECL(_stratego_s_26);
PROCDECL(_stratego_t_26);
PROCDECL(_stratego_u_26);
PROCDECL(_stratego_v_26);
PROCDECL(_stratego_w_26);
PROCDECL(_stratego_x_26);
PROCDECL(_stratego_y_26);
PROCDECL(_stratego_z_26);
PROCDECL(_stratego_a_27);
PROCDECL(_stratego_b_27);
PROCDECL(_stratego_c_27);
PROCDECL(_stratego_d_27);
PROCDECL(_stratego_e_27);
PROCDECL(_stratego_f_27);
PROCDECL(_stratego_g_27);
PROCDECL(_stratego_h_27);
PROCDECL(_stratego_i_27);
PROCDECL(_stratego_j_27);
PROCDECL(_stratego_k_27);
PROCDECL(_stratego_l_27);
PROCDECL(_stratego_m_27);
PROCDECL(_stratego_n_27);
PROCDECL(_stratego_o_27);
PROCDECL(_stratego_p_27);
PROCDECL(_stratego_q_27);
PROCDECL(_stratego_r_27);
PROCDECL(_stratego_s_27);
PROCDECL(_stratego_t_27);
PROCDECL(_stratego_u_27);
PROCDECL(_stratego_v_27);
PROCDECL(_stratego_w_27);
PROCDECL(_stratego_x_27);
PROCDECL(_stratego_y_27);
PROCDECL(_stratego_z_27);
PROCDECL(_stratego_a_28);
PROCDECL(_stratego_b_28);
PROCDECL(_stratego_c_28);
PROCDECL(_stratego_d_28);
PROCDECL(_stratego_e_28);
PROCDECL(_stratego_f_28);
PROCDECL(_stratego_g_28);
PROCDECL(_stratego_h_28);
PROCDECL(_stratego_i_28);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(d_77,ATmakeAFun("Statistics",0,0));
  MOVE(x_75,ATmakeAFun("DeclVersion",1,0));
  MOVE(x_74,ATmakeAFun("Version",0,0));
  MOVE(u_74,ATmakeAFun("Verbose",0,0));
  MOVE(j_68,ATmakeAFun("Undefined",1,0));
  MOVE(t_66,ATmakeAFun("Help",0,0));
  MOVE(l_65,ATmakeAFun("stdin",0,0));
  MOVE(h_65,ATmakeAFun("Input",1,0));
  MOVE(q_64,ATmakeAFun("Binary",0,0));
  MOVE(d_64,ATmakeAFun("stdout",0,0));
  MOVE(s_63,ATmakeAFun("Output",1,0));
  MOVE(r_62,ATmakeAFun("Program",1,0));
  MOVE(u_61,ATmakeAFun("Runtime",1,0));
  MOVE(x_60,ATmakeAFun("Silent",0,0));
  MOVE(q_59,ATmakeAFun("stderr",0,0));
  MOVE(a_56,ATmakeAFun("Seqs",1,0));
  MOVE(g_54,ATmakeAFun("BuildDefault",1,0));
  MOVE(b_43,ATmakeAFun("Assign",2,0));
  MOVE(r_23,ATmakeAFun("Match",1,0));
  MOVE(p_23,ATmakeAFun("All",1,0));
  MOVE(r_22,ATmakeAFun("Id",0,0));
  MOVE(m_21,ATmakeAFun("Cong",2,0));
  MOVE(j_21,ATmakeAFun("Path",2,0));
  MOVE(h_21,ATmakeAFun("One",1,0));
  MOVE(f_21,ATmakeAFun("Some",1,0));
  MOVE(v_20,ATmakeAFun("Fail",0,0));
  MOVE(j_20,ATmakeAFun("Test",1,0));
  MOVE(h_20,ATmakeAFun("Not",1,0));
  MOVE(f_20,ATmakeAFun("Build",1,0));
  MOVE(d_20,ATmakeAFun("Where",1,0));
  MOVE(b_20,ATmakeAFun("LChoice",2,0));
  MOVE(z_19,ATmakeAFun("Choice",2,0));
  MOVE(o_19,ATmakeAFun("Assign",1,0));
  MOVE(n_19,ATmakeAFun("Seq",2,0));
  MOVE(i_19,ATmakeAFun("Call",2,0));
  MOVE(h_19,ATmakeAFun("Row",2,0));
  MOVE(w_18,ATmakeAFun("Matrix",2,0));
  MOVE(n_18,ATmakeAFun("Case",4,0));
  MOVE(n_17,ATmakeAFun("LChoices",1,0));
  MOVE(f_17,ATmakeAFun("Continue",1,0));
  MOVE(s_14,ATmakeAFun("Alt",3,0));
  MOVE(z_13,ATmakeAFun("Off",1,0));
  MOVE(g_13,ATmakeAFun("Fun",2,0));
  MOVE(d_13,ATmakeAFun("Int",1,0));
  MOVE(b_13,ATmakeAFun("Real",1,0));
  MOVE(z_12,ATmakeAFun("Str",1,0));
  MOVE(x_12,ATmakeAFun("Op",2,0));
  MOVE(e_12,ATmakeAFun("Matrix",1,0));
  MOVE(y_11,ATmakeAFun("Wld",0,0));
  MOVE(x_11,ATmakeAFun("As",2,0));
  MOVE(w_11,ATmakeAFun("Row",3,0));
  MOVE(s_9,ATmakeAFun("Rule",3,0));
  MOVE(r_9,ATmakeAFun("LRule",1,0));
  MOVE(c_6,ATmakeAFun("Scope",2,0));
  MOVE(a_6,ATmakeAFun("Var",1,0));
  MOVE(a_1,ATmakeAFun("Cons",2,0));
  MOVE(v_0,ATmakeAFun("Rec",2,0));
  MOVE(u_0,ATmakeAFun("SDef",3,0));
  MOVE(s_0,ATmakeAFun("Let",2,0));
  MOVE(o_0,ATmakeAFun("SVar",1,0));
  MOVE(c_0,ATmakeAFun("TNil",0,0));
  MOVE(b_0,ATmakeAFun("Nil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_f_25)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl0(c_0))));
  Rpush(d_0);
  d_32 :
  Rpush(e_0);
  e_32 :
  Epushd(1,5);
  MoveTop(1,1);
  goto i_8;
  i_8 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto j_8;
  j_8 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto k_8;
  k_8 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Cpush(i_0);
  Rpush(j_0);
  goto f_32;
  j_0 :
  goto h_0;
  i_0 :
  Ccontinue(k_0);
  Rpush(l_0);
  goto g_32;
  l_0 :
  goto h_0;
  k_0 :
  Rpush(n_0);
  goto h_32;
  n_0 :
  goto m_0;
  h_0 :
  Cpop();
  m_0 :
  goto g_0;
  g_0 :
  goto f_0;
  f_32 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(o_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,1),(ATerm)ATmakeAppl2(a_0,Egetd(1,4),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_l_25);
  Epopd(2,1);
  AllBuild();
  Return();
  g_32 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,12);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,2);
  goto p_2;
  p_2 :
  TestFunFC(s_0,&&r_0,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  Rpush(q_0);
  goto l_32;
  r_0 :
  TestFunFC(u_0,&&t_0,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  MoveArg(3,1,3,2,2);
  Rpush(q_0);
  goto m_32;
  t_0 :
  TestFunFC(v_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  Rpush(q_0);
  goto n_32;
  q_0 :
  goto p_0;
  l_32 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(w_0);
  o_32 :
  Cpush(y_0);
  Ccall(_stratego_h_28);
  goto x_0;
  y_0 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Epushd(4,4);
  MoveTop(4,1);
  goto o_2;
  o_2 :
  TestFunFC(u_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(c_1);
  goto p_32;
  c_1 :
  goto b_1;
  p_32 :
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Return();
  b_1 :
  Epopd(4,4);
  OneNextSon();
  Rpush(d_1);
  goto o_32;
  d_1 :
  AllBuild();
  goto z_0;
  x_0 :
  Cpop();
  z_0 :
  Return();
  w_0 :
  Return();
  m_32 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Return();
  n_32 :
  NotNULLd(3,3);
  Tset((ATerm)ATmakeAppl2(a_1,Egetd(3,3),(ATerm)ATmakeAppl0(b_0)));
  Return();
  p_0 :
  MoveTop(3,5);
  Move(2,1,3,5);
  Rpush(e_1);
  r_32 :
  Cpush(g_1);
  Ccall(_stratego_h_28);
  goto f_1;
  g_1 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_25);
  OneNextSon();
  Rpush(i_1);
  goto r_32;
  i_1 :
  AllBuild();
  goto h_1;
  f_1 :
  Cpop();
  h_1 :
  Return();
  e_1 :
  MoveTop(3,6);
  Move(2,2,3,6);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,1),(ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl0(c_0))));
  Rpush(j_1);
  t_32 :
  Epushd(4,9);
  MoveTop(4,1);
  goto s_5;
  s_5 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto t_5;
  t_5 :
  TestFunFC(b_0,&&m_1,Egetd(4,2));
  goto u_5;
  u_5 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto v_5;
  v_5 :
  TestFunFC(b_0,&&fail,Egetd(4,6));
  goto w_5;
  w_5 :
  TestFunFC(c_0,&&fail,Egetd(4,9));
  Rpush(l_1);
  goto u_32;
  m_1 :
  TestFunFC(a_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto x_5;
  x_5 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto y_5;
  y_5 :
  TestFunFC(a_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto z_5;
  z_5 :
  TestFunFC(c_0,&&fail,Egetd(4,9));
  Rpush(l_1);
  goto v_32;
  l_1 :
  goto k_1;
  u_32 :
  Tset((ATerm)ATmakeAppl0(b_0));
  Return();
  v_32 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(4,3),(ATerm)ATmakeAppl2(a_0,Egetd(4,7),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(4,4),(ATerm)ATmakeAppl2(a_0,Egetd(4,8),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(o_1);
  goto t_32;
  o_1 :
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto p_5;
  p_5 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto q_5;
  q_5 :
  TestFunFC(a_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto r_5;
  r_5 :
  TestFunFC(c_0,&&fail,Egetd(5,5));
  Rpush(p_1);
  goto w_32;
  p_1 :
  goto n_1;
  w_32 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset((ATerm)ATmakeAppl2(a_1,Egetd(5,2),Egetd(5,4)));
  Return();
  n_1 :
  Epopd(5,5);
  Return();
  k_1 :
  Epopd(4,9);
  Return();
  j_1 :
  MoveTop(3,7);
  NotNULLd(3,7);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,7),(ATerm)ATmakeAppl2(a_0,Egetd(1,4),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(3,8);
  goto d_6;
  d_6 :
  TestFunFC(a_0,&&fail,Egetd(3,8));
  MoveArg(3,9,3,8,0);
  MoveArg(3,10,3,8,1);
  goto e_6;
  e_6 :
  TestFunFC(a_0,&&fail,Egetd(3,10));
  MoveArg(3,11,3,10,0);
  MoveArg(3,12,3,10,1);
  goto f_6;
  f_6 :
  TestFunFC(c_0,&&fail,Egetd(3,12));
  Rpush(r_1);
  goto y_32;
  r_1 :
  goto q_1;
  y_32 :
  Epushd(4,1);
  NotNULLd(3,9);
  Tset(Egetd(3,9));
  Rpush(s_1);
  z_32 :
  Cpush(u_1);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_1);
  goto z_32;
  v_1 :
  AllBuild();
  goto t_1;
  u_1 :
  Ccall(_stratego_h_28);
  NotNULLd(3,11);
  Tset(Egetd(3,11));
  goto w_1;
  t_1 :
  Cpop();
  w_1 :
  Return();
  s_1 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  q_1 :
  Epopd(3,12);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(y_1);
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,1),(ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl0(c_0))));
  Rpush(z_1);
  e_33 :
  Epushd(4,9);
  MoveTop(4,1);
  goto y_6;
  y_6 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto z_6;
  z_6 :
  TestFunFC(b_0,&&c_2,Egetd(4,2));
  goto a_7;
  a_7 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto b_7;
  b_7 :
  TestFunFC(b_0,&&fail,Egetd(4,6));
  goto c_7;
  c_7 :
  TestFunFC(c_0,&&fail,Egetd(4,9));
  Rpush(b_2);
  goto f_33;
  c_2 :
  TestFunFC(a_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto d_7;
  d_7 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto e_7;
  e_7 :
  TestFunFC(a_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto f_7;
  f_7 :
  TestFunFC(c_0,&&fail,Egetd(4,9));
  Rpush(b_2);
  goto g_33;
  b_2 :
  goto a_2;
  f_33 :
  Tset((ATerm)ATmakeAppl0(b_0));
  Return();
  g_33 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(4,3),(ATerm)ATmakeAppl2(a_0,Egetd(4,7),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(4,4),(ATerm)ATmakeAppl2(a_0,Egetd(4,8),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(6,8);
  MoveTop(6,1);
  goto m_6;
  m_6 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,6,6,1,1);
  goto n_6;
  n_6 :
  TestFunFC(u_0,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  MoveArg(6,5,6,2,2);
  goto s_6;
  s_6 :
  TestFunFC(a_0,&&fail,Egetd(6,6));
  MoveArg(6,7,6,6,0);
  MoveArg(6,8,6,6,1);
  goto t_6;
  t_6 :
  TestFunFC(c_0,&&fail,Egetd(6,8));
  Rpush(f_2);
  goto h_33;
  f_2 :
  goto e_2;
  h_33 :
  NotNULLd(6,7);
  NotNULLd(6,4);
  NotNULLd(6,5);
  Tset((ATerm)ATmakeAppl3(u_0,Egetd(6,7),Egetd(6,4),Egetd(6,5)));
  Return();
  e_2 :
  Epopd(6,8);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(g_2);
  goto e_33;
  g_2 :
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto v_6;
  v_6 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto w_6;
  w_6 :
  TestFunFC(a_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto x_6;
  x_6 :
  TestFunFC(c_0,&&fail,Egetd(5,5));
  Rpush(h_2);
  goto i_33;
  h_2 :
  goto d_2;
  i_33 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset((ATerm)ATmakeAppl2(a_1,Egetd(5,2),Egetd(5,4)));
  Return();
  d_2 :
  Epopd(5,5);
  Return();
  a_2 :
  Epopd(4,9);
  Return();
  z_1 :
  Epopd(3,1);
  OneNextSon();
  AllBuild();
  goto x_1;
  y_1 :
  Ccontinue(i_2);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto x_1;
  i_2 :
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto h_7;
  h_7 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_2);
  goto j_33;
  l_2 :
  goto k_2;
  j_33 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  k_2 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  goto j_2;
  x_1 :
  Cpop();
  j_2 :
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,4),(ATerm)ATmakeAppl2(a_0,Egetd(1,4),(ATerm)ATmakeAppl2(a_0,Egetd(2,3),(ATerm)ATmakeAppl0(c_0)))));
  MoveTop(2,5);
  goto c_8;
  c_8 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto d_8;
  d_8 :
  TestFunFC(a_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto e_8;
  e_8 :
  TestFunFC(a_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto f_8;
  f_8 :
  TestFunFC(c_0,&&fail,Egetd(2,11));
  Rpush(n_2);
  goto l_33;
  n_2 :
  goto m_2;
  l_33 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Cpush(r_2);
  TestFunTop(s_0);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,1),(ATerm)ATmakeAppl2(a_0,Egetd(2,10),(ATerm)ATmakeAppl0(c_0))));
  Rpush(s_2);
  goto d_32;
  s_2 :
  Epopd(3,1);
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,1),(ATerm)ATmakeAppl2(a_0,Egetd(2,10),(ATerm)ATmakeAppl0(c_0))));
  Rpush(t_2);
  goto d_32;
  t_2 :
  Epopd(3,1);
  AllBuild();
  goto q_2;
  r_2 :
  Ccontinue(u_2);
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,1),(ATerm)ATmakeAppl2(a_0,Egetd(2,10),(ATerm)ATmakeAppl0(c_0))));
  Rpush(v_2);
  goto d_32;
  v_2 :
  Epopd(3,1);
  AllBuild();
  goto q_2;
  u_2 :
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,1),(ATerm)ATmakeAppl2(a_0,Egetd(2,10),(ATerm)ATmakeAppl0(c_0))));
  Rpush(x_2);
  goto d_32;
  x_2 :
  Epopd(3,1);
  AllBuild();
  goto w_2;
  q_2 :
  Cpop();
  w_2 :
  Return();
  m_2 :
  Epopd(2,11);
  Return();
  h_32 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  y_2 :
  AllNextSon(&&z_2);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,1),(ATerm)ATmakeAppl2(a_0,Egetd(1,4),(ATerm)ATmakeAppl0(c_0))));
  Rpush(a_3);
  goto e_32;
  a_3 :
  Epopd(2,1);
  goto y_2;
  z_2 :
  AllBuild();
  Return();
  f_0 :
  Epopd(1,5);
  Return();
  e_0 :
  Return();
  d_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_g_25)
  Epushd(0,7);
  MoveTop(0,1);
  goto b_35;
  b_35 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto c_35;
  c_35 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto d_35;
  d_35 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto e_35;
  e_35 :
  TestFunFC(c_0,&&fail,Egetd(0,6));
  Rpush(c_3);
  goto k_37;
  c_3 :
  goto b_3;
  k_37 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto v_33;
  v_33 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto w_33;
  w_33 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto x_33;
  x_33 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(e_3);
  goto l_37;
  e_3 :
  goto d_3;
  l_37 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  d_3 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto c_34;
  c_34 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto d_34;
  d_34 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto e_34;
  e_34 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(g_3);
  goto m_37;
  g_3 :
  goto f_3;
  m_37 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  f_3 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,3),(ATerm)ATmakeAppl0(c_0))));
  Rpush(h_3);
  n_37 :
  Epushd(2,9);
  MoveTop(2,1);
  goto l_34;
  l_34 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto p_34;
  p_34 :
  TestFunFC(b_0,&&k_3,Egetd(2,2));
  goto q_34;
  q_34 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto r_34;
  r_34 :
  TestFunFC(b_0,&&fail,Egetd(2,6));
  goto s_34;
  s_34 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(j_3);
  goto o_37;
  k_3 :
  TestFunFC(a_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto t_34;
  t_34 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto u_34;
  u_34 :
  TestFunFC(a_1,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto v_34;
  v_34 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(j_3);
  goto p_37;
  j_3 :
  goto i_3;
  o_37 :
  Tset((ATerm)ATmakeAppl0(b_0));
  Return();
  p_37 :
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
  Rpush(m_3);
  goto n_37;
  m_3 :
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto i_34;
  i_34 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto j_34;
  j_34 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto k_34;
  k_34 :
  TestFunFC(c_0,&&fail,Egetd(3,5));
  Rpush(n_3);
  goto q_37;
  n_3 :
  goto l_3;
  q_37 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(a_1,Egetd(3,2),Egetd(3,4)));
  Return();
  l_3 :
  Epopd(3,5);
  Return();
  i_3 :
  Epopd(2,9);
  Return();
  h_3 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,4),(ATerm)ATmakeAppl2(a_0,Egetd(0,7),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,5);
  goto y_34;
  y_34 :
  TestFunFC(a_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto z_34;
  z_34 :
  TestFunFC(a_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto a_35;
  a_35 :
  TestFunFC(c_0,&&fail,Egetd(1,9));
  Rpush(p_3);
  goto s_37;
  p_3 :
  goto o_3;
  s_37 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(q_3);
  t_37 :
  Cpush(s_3);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_3);
  goto t_37;
  t_3 :
  AllBuild();
  goto r_3;
  s_3 :
  Ccall(_stratego_h_28);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto u_3;
  r_3 :
  Cpop();
  u_3 :
  Return();
  q_3 :
  Return();
  o_3 :
  Epopd(1,9);
  Return();
  b_3 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_h_25)
  Epushd(0,5);
  MoveTop(0,5);
  goto k_38;
  k_38 :
  TestFunFC(a_0,&&x_3,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto l_38;
  l_38 :
  TestFunFC(a_0,&&y_3,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto m_38;
  m_38 :
  TestFunFC(c_0,&&z_3,Egetd(0,4));
  Cpush(b_4);
  Rpush(c_4);
  goto w_39;
  c_4 :
  goto a_4;
  b_4 :
  Rpush(e_4);
  goto x_39;
  e_4 :
  goto d_4;
  a_4 :
  Cpop();
  d_4 :
  goto w_3;
  z_3 :
  Rpush(w_3);
  goto x_39;
  y_3 :
  Rpush(w_3);
  goto x_39;
  x_3 :
  Rpush(w_3);
  goto x_39;
  w_3 :
  goto v_3;
  w_39 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(f_4);
  y_39 :
  Cpush(h_4);
  Ccall(_stratego_h_28);
  goto g_4;
  h_4 :
  Ccontinue(i_4);
  Epushd(1,3);
  MoveTop(1,1);
  goto z_37;
  z_37 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(k_4);
  goto z_39;
  k_4 :
  goto j_4;
  z_39 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(l_4);
  a_40 :
  Cpush(n_4);
  Epushd(2,3);
  MoveTop(2,1);
  goto y_37;
  y_37 :
  TestFunFC(a_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(p_4);
  goto b_40;
  p_4 :
  goto o_4;
  b_40 :
  Move(1,2,2,2);
  Return();
  o_4 :
  Epopd(2,3);
  goto m_4;
  n_4 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_4);
  goto a_40;
  r_4 :
  AllBuild();
  goto q_4;
  m_4 :
  Cpop();
  q_4 :
  Return();
  l_4 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(s_4);
  goto y_39;
  s_4 :
  Return();
  j_4 :
  Epopd(1,3);
  goto g_4;
  i_4 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_4);
  goto y_39;
  u_4 :
  AllBuild();
  goto t_4;
  g_4 :
  Cpop();
  t_4 :
  Return();
  f_4 :
  Return();
  x_39 :
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,Egetd(0,5),(ATerm)ATmakeAppl0(c_0))));
  Rpush(v_4);
  c_40 :
  Cpush(x_4);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(z_4);
  Epushd(1,7);
  MoveTop(1,1);
  goto b_38;
  b_38 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto c_38;
  c_38 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto d_38;
  d_38 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto e_38;
  e_38 :
  TestFunFC(c_0,&&fail,Egetd(1,6));
  Rpush(b_5);
  goto d_40;
  b_5 :
  goto a_5;
  d_40 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  a_5 :
  Epopd(1,7);
  goto y_4;
  z_4 :
  Ccall(_stratego_g_25);
  goto c_5;
  y_4 :
  Cpop();
  c_5 :
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  goto w_4;
  x_4 :
  Epushd(1,7);
  MoveTop(1,1);
  goto g_38;
  g_38 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_38;
  h_38 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto i_38;
  i_38 :
  TestFunFC(a_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto j_38;
  j_38 :
  TestFunFC(c_0,&&fail,Egetd(1,7));
  Rpush(f_5);
  goto e_40;
  f_5 :
  goto e_5;
  e_40 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_1,Egetd(1,5),Egetd(1,2)),(ATerm)ATmakeAppl2(a_0,Egetd(1,6),(ATerm)ATmakeAppl0(c_0))));
  Return();
  e_5 :
  Epopd(1,7);
  goto d_5;
  w_4 :
  Cpop();
  d_5 :
  Cpush(h_5);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_28);
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  goto g_5;
  h_5 :
  Rpush(j_5);
  goto c_40;
  j_5 :
  goto i_5;
  g_5 :
  Cpop();
  i_5 :
  Return();
  v_4 :
  Return();
  v_3 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_i_25)
  Rpush(k_5);
  q_44 :
  Cpush(m_5);
  Epushd(0,2);
  MoveTop(0,1);
  goto g_40;
  g_40 :
  TestFunFC(a_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(o_5);
  goto r_44;
  o_5 :
  goto n_5;
  r_44 :
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(a_1,Egetd(0,2),(ATerm)ATmakeAppl0(b_0)));
  Return();
  n_5 :
  Epopd(0,2);
  goto l_5;
  m_5 :
  Ccontinue(b_6);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_k_25);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(c_6);
  TravInit();
  OneNextSon();
  Tset((ATerm)ATmakeAppl0(b_0));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(g_6);
  goto q_44;
  g_6 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_h_25);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto n_40;
  n_40 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_40;
  o_40 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto p_40;
  p_40 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(i_6);
  goto y_44;
  i_6 :
  goto h_6;
  y_44 :
  Move(0,3,1,4);
  Return();
  h_6 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(j_6);
  z_44 :
  Cpush(l_6);
  Ccall(_stratego_h_28);
  Tset((ATerm)ATmakeAppl0(b_0));
  goto k_6;
  l_6 :
  Epushd(1,3);
  MoveTop(1,1);
  goto b_41;
  b_41 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(q_6);
  goto a_45;
  q_6 :
  goto p_6;
  a_45 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(r_6);
  goto z_44;
  r_6 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl2(a_0,Egetd(2,1),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto y_40;
  y_40 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto z_40;
  z_40 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto a_41;
  a_41 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(g_7);
  goto d_45;
  g_7 :
  goto u_6;
  d_45 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(i_7);
  e_45 :
  Cpush(k_7);
  Ccall(_stratego_h_28);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto j_7;
  k_7 :
  Ccontinue(l_7);
  Epushd(3,3);
  MoveTop(3,1);
  goto x_40;
  x_40 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(n_7);
  goto f_45;
  n_7 :
  goto m_7;
  f_45 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(o_7);
  g_45 :
  Cpush(q_7);
  Epushd(4,3);
  MoveTop(4,1);
  goto w_40;
  w_40 :
  TestFunFC(a_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(s_7);
  goto h_45;
  s_7 :
  goto r_7;
  h_45 :
  Move(3,2,4,2);
  Return();
  r_7 :
  Epopd(4,3);
  goto p_7;
  q_7 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_7);
  goto g_45;
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
  goto e_45;
  v_7 :
  Return();
  m_7 :
  Epopd(3,3);
  goto j_7;
  l_7 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_7);
  goto e_45;
  x_7 :
  AllBuild();
  goto w_7;
  j_7 :
  Cpop();
  w_7 :
  Return();
  i_7 :
  Return();
  u_6 :
  Epopd(2,6);
  Return();
  p_6 :
  Epopd(1,3);
  goto o_6;
  k_6 :
  Cpop();
  o_6 :
  Return();
  j_6 :
  Epopd(0,3);
  goto l_5;
  b_6 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto e_41;
  e_41 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_41;
  f_41 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto g_41;
  g_41 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(a_8);
  goto j_45;
  a_8 :
  goto z_7;
  j_45 :
  Move(0,2,1,4);
  Return();
  z_7 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(b_8);
  k_45 :
  Cpush(h_8);
  Ccall(_stratego_h_28);
  Tset((ATerm)ATmakeAppl0(b_0));
  goto g_8;
  h_8 :
  Epushd(1,3);
  MoveTop(1,1);
  goto s_41;
  s_41 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(r_8);
  goto l_45;
  r_8 :
  goto q_8;
  l_45 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(s_8);
  goto q_44;
  s_8 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(t_8);
  goto k_45;
  t_8 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,1),(ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,3);
  goto p_41;
  p_41 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_41;
  q_41 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto r_41;
  r_41 :
  TestFunFC(c_0,&&fail,Egetd(2,7));
  Rpush(x_8);
  goto o_45;
  x_8 :
  goto u_8;
  o_45 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(y_8);
  p_45 :
  Cpush(a_9);
  Ccall(_stratego_h_28);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto z_8;
  a_9 :
  Ccontinue(b_9);
  Epushd(3,3);
  MoveTop(3,1);
  goto o_41;
  o_41 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(d_9);
  goto q_45;
  d_9 :
  goto c_9;
  q_45 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(e_9);
  r_45 :
  Cpush(g_9);
  Epushd(4,3);
  MoveTop(4,1);
  goto n_41;
  n_41 :
  TestFunFC(a_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(i_9);
  goto s_45;
  i_9 :
  goto h_9;
  s_45 :
  Move(3,2,4,2);
  Return();
  h_9 :
  Epopd(4,3);
  goto f_9;
  g_9 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_9);
  goto r_45;
  k_9 :
  AllBuild();
  goto j_9;
  f_9 :
  Cpop();
  j_9 :
  Return();
  e_9 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(l_9);
  goto p_45;
  l_9 :
  Return();
  c_9 :
  Epopd(3,3);
  goto z_8;
  b_9 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_9);
  goto p_45;
  n_9 :
  AllBuild();
  goto m_9;
  z_8 :
  Cpop();
  m_9 :
  Return();
  y_8 :
  Return();
  u_8 :
  Epopd(2,7);
  Return();
  q_8 :
  Epopd(1,3);
  goto m_8;
  g_8 :
  Cpop();
  m_8 :
  Return();
  b_8 :
  Epopd(0,2);
  goto y_7;
  l_5 :
  Cpop();
  y_7 :
  Return();
  k_5 :
ENDPROC

PROC(_stratego_k_25)
  Epushd(0,6);
  MoveTop(0,2);
  goto v_45;
  v_45 :
  TestFunFC(c_6,&&q_9,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(p_9);
  goto i_46;
  q_9 :
  TestFunFC(r_9,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto w_45;
  w_45 :
  TestFunFC(s_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(p_9);
  goto j_46;
  p_9 :
  goto o_9;
  i_46 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  j_46 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_i_25);
  Return();
  o_9 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_l_25)
  Rpush(t_9);
  i_47 :
  Epushd(0,11);
  MoveTop(0,5);
  goto m_46;
  m_46 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto n_46;
  n_46 :
  TestFunFC(a_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto o_46;
  o_46 :
  TestFunFC(a_1,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto p_46;
  p_46 :
  TestFunFC(c_0,&&fail,Egetd(0,11));
  goto q_46;
  q_46 :
  TestFunFC(a_0,&&w_9,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto r_46;
  r_46 :
  TestFunFC(a_0,&&x_9,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto s_46;
  s_46 :
  TestFunFC(c_0,&&y_9,Egetd(0,4));
  Cpush(a_10);
  Rpush(b_10);
  goto j_47;
  b_10 :
  goto z_9;
  a_10 :
  Rpush(d_10);
  goto k_47;
  d_10 :
  goto c_10;
  z_9 :
  Cpop();
  c_10 :
  goto v_9;
  y_9 :
  Rpush(v_9);
  goto k_47;
  x_9 :
  Rpush(v_9);
  goto k_47;
  w_9 :
  Rpush(v_9);
  goto k_47;
  v_9 :
  goto u_9;
  j_47 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  k_47 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,6),(ATerm)ATmakeAppl2(a_0,Egetd(0,10),(ATerm)ATmakeAppl0(c_0))));
  Rpush(e_10);
  goto i_47;
  e_10 :
  Return();
  u_9 :
  Epopd(0,11);
  Return();
  t_9 :
ENDPROC

PROC(_stratego_m_25)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl0(c_0))));
  Rpush(f_10);
  s_51 :
  Rpush(g_10);
  t_51 :
  Epushd(1,5);
  MoveTop(1,1);
  goto w_48;
  w_48 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto x_48;
  x_48 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto y_48;
  y_48 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Cpush(k_10);
  Rpush(l_10);
  goto u_51;
  l_10 :
  goto j_10;
  k_10 :
  Ccontinue(m_10);
  Rpush(n_10);
  goto v_51;
  n_10 :
  goto j_10;
  m_10 :
  Rpush(p_10);
  goto w_51;
  p_10 :
  goto o_10;
  j_10 :
  Cpop();
  o_10 :
  goto i_10;
  i_10 :
  goto h_10;
  u_51 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(a_6);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,1),(ATerm)ATmakeAppl2(a_0,Egetd(1,4),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_l_25);
  Epopd(2,1);
  AllBuild();
  Return();
  v_51 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_k_25);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(q_10);
  b_52 :
  Cpush(s_10);
  Ccall(_stratego_h_28);
  goto r_10;
  s_10 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_25);
  OneNextSon();
  Rpush(u_10);
  goto b_52;
  u_10 :
  AllBuild();
  goto t_10;
  r_10 :
  Cpop();
  t_10 :
  Return();
  q_10 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,1),(ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl0(c_0))));
  Rpush(v_10);
  d_52 :
  Epushd(4,9);
  MoveTop(4,1);
  goto a_48;
  a_48 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto b_48;
  b_48 :
  TestFunFC(b_0,&&y_10,Egetd(4,2));
  goto c_48;
  c_48 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto d_48;
  d_48 :
  TestFunFC(b_0,&&fail,Egetd(4,6));
  goto e_48;
  e_48 :
  TestFunFC(c_0,&&fail,Egetd(4,9));
  Rpush(x_10);
  goto e_52;
  y_10 :
  TestFunFC(a_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto f_48;
  f_48 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto g_48;
  g_48 :
  TestFunFC(a_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto h_48;
  h_48 :
  TestFunFC(c_0,&&fail,Egetd(4,9));
  Rpush(x_10);
  goto f_52;
  x_10 :
  goto w_10;
  e_52 :
  Tset((ATerm)ATmakeAppl0(b_0));
  Return();
  f_52 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(4,3),(ATerm)ATmakeAppl2(a_0,Egetd(4,7),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(4,4),(ATerm)ATmakeAppl2(a_0,Egetd(4,8),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(a_11);
  goto d_52;
  a_11 :
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto x_47;
  x_47 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto y_47;
  y_47 :
  TestFunFC(a_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto z_47;
  z_47 :
  TestFunFC(c_0,&&fail,Egetd(5,5));
  Rpush(b_11);
  goto g_52;
  b_11 :
  goto z_10;
  g_52 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset((ATerm)ATmakeAppl2(a_1,Egetd(5,2),Egetd(5,4)));
  Return();
  z_10 :
  Epopd(5,5);
  Return();
  w_10 :
  Epopd(4,9);
  Return();
  v_10 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,3),(ATerm)ATmakeAppl2(a_0,Egetd(1,4),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(3,4);
  goto l_48;
  l_48 :
  TestFunFC(a_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto m_48;
  m_48 :
  TestFunFC(a_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto n_48;
  n_48 :
  TestFunFC(c_0,&&fail,Egetd(3,8));
  Rpush(d_11);
  goto i_52;
  d_11 :
  goto c_11;
  i_52 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(e_11);
  j_52 :
  Cpush(g_11);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_11);
  goto j_52;
  h_11 :
  AllBuild();
  goto f_11;
  g_11 :
  Ccall(_stratego_h_28);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto i_11;
  f_11 :
  Cpop();
  i_11 :
  Return();
  e_11 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  c_11 :
  Epopd(3,8);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(c_6);
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
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,4),(ATerm)ATmakeAppl2(a_0,Egetd(1,4),(ATerm)ATmakeAppl2(a_0,Egetd(2,3),(ATerm)ATmakeAppl0(c_0)))));
  MoveTop(2,5);
  goto r_48;
  r_48 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto s_48;
  s_48 :
  TestFunFC(a_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto t_48;
  t_48 :
  TestFunFC(a_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto u_48;
  u_48 :
  TestFunFC(c_0,&&fail,Egetd(2,11));
  Rpush(k_11);
  goto m_52;
  k_11 :
  goto j_11;
  m_52 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  TestFunTop(c_6);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,1),(ATerm)ATmakeAppl2(a_0,Egetd(2,10),(ATerm)ATmakeAppl0(c_0))));
  Rpush(l_11);
  goto s_51;
  l_11 :
  Epopd(3,1);
  AllBuild();
  Return();
  j_11 :
  Epopd(2,11);
  Return();
  w_51 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  m_11 :
  AllNextSon(&&o_11);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,1),(ATerm)ATmakeAppl2(a_0,Egetd(1,4),(ATerm)ATmakeAppl0(c_0))));
  Rpush(p_11);
  goto t_51;
  p_11 :
  Epopd(2,1);
  goto m_11;
  o_11 :
  AllBuild();
  Return();
  h_10 :
  Epopd(1,5);
  Return();
  g_10 :
  Return();
  f_10 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_25)
  Ccall(_stratego_m_25);
  Ccall(_stratego_f_25);
ENDPROC

PROC(_stratego_o_25)
  _ST_destroy_table();
ENDPROC

PROC(_stratego_p_25)
  Tdupl();
  Tset(ATmakeString("matrix"));
  Ccall(_stratego_o_25);
  Tpop();
ENDPROC

PROC(_stratego_q_25)
  _ST_table_put();
ENDPROC

PROC(_stratego_r_25)
  _ST_new();
ENDPROC

PROC(_stratego_s_25)
  Epushd(0,1);
  Rpush(q_11);
  q_53 :
  Cpush(s_11);
  Ccall(_stratego_h_28);
  goto r_11;
  s_11 :
  Ccontinue(t_11);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Epushd(1,8);
  MoveTop(1,1);
  goto q_52;
  q_52 :
  TestFunFC(w_11,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  MoveArg(1,8,1,1,2);
  goto r_52;
  r_52 :
  TestFunFC(a_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,6,1,2,1);
  goto s_52;
  s_52 :
  TestFunFC(x_11,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto t_52;
  t_52 :
  TestFunFC(y_11,&&fail,Egetd(1,5));
  Rpush(v_11);
  goto r_53;
  v_11 :
  goto u_11;
  r_53 :
  NotNULLd(1,6);
  NotNULLd(1,7);
  NotNULLd(1,8);
  Tset((ATerm)ATmakeAppl3(w_11,Egetd(1,6),Egetd(1,7),Egetd(1,8)));
  Return();
  u_11 :
  Epopd(1,8);
  OneNextSon();
  Rpush(z_11);
  goto q_53;
  z_11 :
  AllBuild();
  goto r_11;
  t_11 :
  Epushd(1,3);
  MoveTop(1,1);
  goto w_52;
  w_52 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(c_12);
  goto s_53;
  c_12 :
  goto b_12;
  s_53 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(d_12);
  goto q_53;
  d_12 :
  Return();
  b_12 :
  Epopd(1,3);
  goto a_12;
  r_11 :
  Cpop();
  a_12 :
  Return();
  q_11 :
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(e_12,Egetd(0,1)));
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_25)
  Epushd(0,5);
  MoveTop(0,1);
  goto v_53;
  v_53 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto w_53;
  w_53 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto x_53;
  x_53 :
  TestFunFC(c_0,&&fail,Egetd(0,5));
  Rpush(g_12);
  goto e_54;
  g_12 :
  goto f_12;
  e_54 :
  Move(0,2,0,4);
  Return();
  f_12 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_v_25)
  Rpush(h_12);
  s_59 :
  Epushd(0,7);
  MoveTop(0,1);
  goto e_56;
  e_56 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto f_56;
  f_56 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto g_56;
  g_56 :
  TestFunFC(b_0,&&k_12,Egetd(0,4));
  goto h_56;
  h_56 :
  TestFunFC(c_0,&&fail,Egetd(0,7));
  Rpush(j_12);
  goto t_59;
  k_12 :
  TestFunFC(a_1,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto i_56;
  i_56 :
  TestFunFC(c_0,&&fail,Egetd(0,7));
  Rpush(j_12);
  goto u_59;
  j_12 :
  goto i_12;
  t_59 :
  Tset((ATerm)ATmakeAppl0(b_0));
  Return();
  u_59 :
  Epushd(1,5);
  NotNULLd(0,5);
  NotNULLd(0,2);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,5),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,6),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,9);
  MoveTop(2,1);
  goto u_55;
  u_55 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_55;
  v_55 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,9,2,3,1);
  goto w_55;
  w_55 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto x_55;
  x_55 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto y_55;
  y_55 :
  TestFunFC(c_0,&&fail,Egetd(2,8));
  goto z_55;
  z_55 :
  TestFunFC(c_0,&&fail,Egetd(2,9));
  Rpush(n_12);
  goto v_59;
  n_12 :
  goto m_12;
  v_59 :
  Epushd(3,1);
  Tdupl();
  Epushd(4,1);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(o_12);
  w_59 :
  Cpush(q_12);
  Ccall(_stratego_h_28);
  goto p_12;
  q_12 :
  Ccontinue(r_12);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Epushd(5,8);
  MoveTop(5,1);
  goto o_55;
  o_55 :
  TestFunFC(w_11,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,7,5,1,1);
  MoveArg(5,8,5,1,2);
  goto p_55;
  p_55 :
  TestFunFC(a_1,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,6,5,2,1);
  goto q_55;
  q_55 :
  TestFunFC(x_11,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  Rpush(t_12);
  goto x_59;
  t_12 :
  goto s_12;
  x_59 :
  Epushd(6,6);
  Tdupl();
  Epushd(7,4);
  NotNULLd(5,5);
  Tset(Egetd(5,5));
  MoveTop(7,3);
  goto g_55;
  g_55 :
  TestFunFC(x_12,&&w_12,Egetd(7,3));
  MoveArg(7,2,7,3,0);
  MoveArg(7,1,7,3,1);
  Rpush(v_12);
  goto y_59;
  w_12 :
  TestFunFC(z_12,&&y_12,Egetd(7,3));
  MoveArg(7,2,7,3,0);
  Rpush(v_12);
  goto z_59;
  y_12 :
  TestFunFC(b_13,&&a_13,Egetd(7,3));
  MoveArg(7,2,7,3,0);
  Rpush(v_12);
  goto a_60;
  a_13 :
  TestFunFC(d_13,&&c_13,Egetd(7,3));
  MoveArg(7,2,7,3,0);
  Rpush(v_12);
  goto b_60;
  c_13 :
  TestFunFC(y_11,&&fail,Egetd(7,3));
  Rpush(v_12);
  goto c_60;
  v_12 :
  goto u_12;
  y_59 :
  Epushd(8,1);
  Tdupl();
  Epushd(9,3);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  MoveTop(9,1);
  goto q_54;
  q_54 :
  TestFunFC(g_13,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(f_13);
  goto d_60;
  f_13 :
  goto e_13;
  d_60 :
  Epushd(10,1);
  Move(7,2,9,2);
  Move(8,1,9,3);
  NotNULLd(7,1);
  Tset(Egetd(7,1));
  Ccall(_stratego_a_26);
  MoveTop(10,1);
  NotNULLd(10,1);
  NotNULLd(8,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(10,1),(ATerm)ATmakeAppl2(a_0,Egetd(8,1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_t_25);
  Epopd(10,1);
  Return();
  e_13 :
  Epopd(9,3);
  Tpop();
  NotNULLd(7,1);
  Tset(Egetd(7,1));
  Epopd(8,1);
  Return();
  z_59 :
  Tdupl();
  Epushd(8,2);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  MoveTop(8,1);
  goto u_54;
  u_54 :
  TestFunFC(z_12,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  Rpush(i_13);
  goto f_60;
  i_13 :
  goto h_13;
  f_60 :
  Epushd(9,1);
  Move(7,2,8,2);
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  MoveTop(9,1);
  goto t_54;
  t_54 :
  TestFunFC(b_0,&&fail,Egetd(9,1));
  Rpush(k_13);
  goto g_60;
  k_13 :
  goto j_13;
  g_60 :
  Return();
  j_13 :
  Epopd(9,1);
  Return();
  h_13 :
  Epopd(8,2);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_0));
  Return();
  a_60 :
  Tdupl();
  Epushd(8,2);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  MoveTop(8,1);
  goto y_54;
  y_54 :
  TestFunFC(b_13,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  Rpush(m_13);
  goto h_60;
  m_13 :
  goto l_13;
  h_60 :
  Epushd(9,1);
  Move(7,2,8,2);
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  MoveTop(9,1);
  goto x_54;
  x_54 :
  TestFunFC(b_0,&&fail,Egetd(9,1));
  Rpush(o_13);
  goto i_60;
  o_13 :
  goto n_13;
  i_60 :
  Return();
  n_13 :
  Epopd(9,1);
  Return();
  l_13 :
  Epopd(8,2);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_0));
  Return();
  b_60 :
  Tdupl();
  Epushd(8,2);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  MoveTop(8,1);
  goto c_55;
  c_55 :
  TestFunFC(d_13,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  Rpush(q_13);
  goto j_60;
  q_13 :
  goto p_13;
  j_60 :
  Epushd(9,1);
  Move(7,2,8,2);
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  MoveTop(9,1);
  goto b_55;
  b_55 :
  TestFunFC(b_0,&&fail,Egetd(9,1));
  Rpush(s_13);
  goto k_60;
  s_13 :
  goto r_13;
  k_60 :
  Return();
  r_13 :
  Epopd(9,1);
  Return();
  p_13 :
  Epopd(8,2);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_0));
  Return();
  c_60 :
  Epushd(8,1);
  Tdupl();
  Epushd(9,1);
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Rpush(t_13);
  l_60 :
  Cpush(v_13);
  Ccall(_stratego_h_28);
  goto u_13;
  v_13 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Epushd(10,2);
  MoveTop(10,1);
  goto e_55;
  e_55 :
  TestFunFC(a_6,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  Rpush(y_13);
  goto m_60;
  y_13 :
  goto x_13;
  m_60 :
  NotNULLd(10,2);
  Tset((ATerm)ATmakeAppl2(x_11,(ATerm)ATmakeAppl1(z_13,Egetd(10,2)),(ATerm)ATmakeAppl0(y_11)));
  Return();
  x_13 :
  Epopd(10,2);
  OneNextSon();
  Rpush(a_14);
  goto l_60;
  a_14 :
  AllBuild();
  goto w_13;
  u_13 :
  Cpop();
  w_13 :
  Return();
  t_13 :
  MoveTop(9,1);
  Move(8,1,9,1);
  Epopd(9,1);
  Tpop();
  NotNULLd(8,1);
  Tset(Egetd(8,1));
  Epopd(8,1);
  Return();
  u_12 :
  MoveTop(7,4);
  Move(6,1,7,4);
  Epopd(7,4);
  Tpop();
  NotNULLd(6,1);
  NotNULLd(5,7);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(6,1),(ATerm)ATmakeAppl2(a_0,Egetd(5,7),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(6,2);
  goto k_55;
  k_55 :
  TestFunFC(a_0,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto l_55;
  l_55 :
  TestFunFC(a_0,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto m_55;
  m_55 :
  TestFunFC(c_0,&&fail,Egetd(6,6));
  Rpush(c_14);
  goto p_60;
  c_14 :
  goto b_14;
  p_60 :
  Epushd(7,1);
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Rpush(g_14);
  q_60 :
  Cpush(i_14);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_14);
  goto q_60;
  j_14 :
  AllBuild();
  goto h_14;
  i_14 :
  Ccall(_stratego_h_28);
  NotNULLd(6,5);
  Tset(Egetd(6,5));
  goto m_14;
  h_14 :
  Cpop();
  m_14 :
  Return();
  g_14 :
  MoveTop(7,1);
  NotNULLd(5,6);
  NotNULLd(7,1);
  NotNULLd(5,8);
  Tset((ATerm)ATmakeAppl3(w_11,Egetd(5,6),Egetd(7,1),Egetd(5,8)));
  Epopd(7,1);
  Return();
  b_14 :
  Epopd(6,6);
  Return();
  s_12 :
  Epopd(5,8);
  OneNextSon();
  Rpush(n_14);
  goto w_59;
  n_14 :
  AllBuild();
  goto p_12;
  r_12 :
  Epushd(5,3);
  MoveTop(5,1);
  goto s_55;
  s_55 :
  TestFunFC(a_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(q_14);
  goto s_60;
  q_14 :
  goto p_14;
  s_60 :
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Rpush(r_14);
  goto w_59;
  r_14 :
  Return();
  p_14 :
  Epopd(5,3);
  goto o_14;
  p_12 :
  Cpop();
  o_14 :
  Return();
  o_12 :
  MoveTop(4,1);
  Move(3,1,4,1);
  Epopd(4,1);
  Tpop();
  NotNULLd(2,5);
  NotNULLd(2,7);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl3(s_14,Egetd(2,5),Egetd(2,7),(ATerm)ATmakeAppl1(e_12,Egetd(3,1))));
  Epopd(3,1);
  Return();
  m_12 :
  Epopd(2,9);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(t_14);
  goto s_59;
  t_14 :
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto b_56;
  b_56 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_56;
  c_56 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto d_56;
  d_56 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(u_14);
  goto u_60;
  u_14 :
  goto l_12;
  u_60 :
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(a_1,Egetd(1,2),Egetd(1,4)));
  Return();
  l_12 :
  Epopd(1,5);
  Return();
  i_12 :
  Epopd(0,7);
  Return();
  h_12 :
ENDPROC

PROC(_stratego_w_25)
  Epushd(0,3);
  MoveTop(0,1);
  goto a_61;
  a_61 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(w_14);
  goto o_61;
  w_14 :
  goto v_14;
  o_61 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(x_14);
  p_61 :
  Cpush(z_14);
  Ccall(_stratego_h_28);
  goto y_14;
  z_14 :
  Ccontinue(a_15);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Cpush(b_15);
  Tdupl();
  Epushd(3,1);
  MoveTop(3,1);
  Move(0,2,3,1);
  Epopd(3,1);
  Cpop();
  Crestore();
  Cjump();
  b_15 :
  OneNextSon();
  Rpush(c_15);
  goto p_61;
  c_15 :
  AllBuild();
  goto y_14;
  a_15 :
  Epushd(3,3);
  MoveTop(3,1);
  goto y_60;
  y_60 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(f_15);
  goto r_61;
  f_15 :
  goto e_15;
  r_61 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(g_15);
  goto p_61;
  g_15 :
  Return();
  e_15 :
  Epopd(3,3);
  goto d_15;
  y_14 :
  Cpop();
  d_15 :
  Return();
  x_14 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_1,Egetd(0,2),Egetd(1,1)));
  Epopd(1,1);
  Return();
  v_14 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_x_25)
  Rpush(h_15);
  t_61 :
  Cpush(j_15);
  Ccall(_stratego_w_25);
  goto i_15;
  j_15 :
  goto k_15;
  i_15 :
  Cpop();
  k_15 :
  Cpush(m_15);
  Ccall(_stratego_h_28);
  goto l_15;
  m_15 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_15);
  goto t_61;
  o_15 :
  AllBuild();
  goto n_15;
  l_15 :
  Cpop();
  n_15 :
  Return();
  h_15 :
ENDPROC

PROC(_stratego_y_25)
  Rpush(p_15);
  d_62 :
  Cpush(r_15);
  Ccall(_stratego_h_28);
  goto q_15;
  r_15 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Epushd(0,4);
  MoveTop(0,1);
  goto v_61;
  v_61 :
  TestFunFC(x_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto w_61;
  w_61 :
  TestFunFC(z_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(u_15);
  goto e_62;
  u_15 :
  goto t_15;
  e_62 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl1(a_6,Egetd(0,3)));
  Return();
  t_15 :
  Epopd(0,4);
  OneNextSon();
  Rpush(v_15);
  goto d_62;
  v_15 :
  AllBuild();
  goto s_15;
  q_15 :
  Cpop();
  s_15 :
  Return();
  p_15 :
ENDPROC

PROC(_stratego_z_25)
  _ST_add();
ENDPROC

PROC(_stratego_a_26)
  Rpush(w_15);
  p_62 :
  Cpush(y_15);
  Ccall(_stratego_h_28);
  Tset(MakeInt(0));
  goto x_15;
  y_15 :
  Epushd(0,3);
  MoveTop(0,1);
  goto h_62;
  h_62 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(b_16);
  goto q_62;
  b_16 :
  goto a_16;
  q_62 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(c_16);
  goto p_62;
  c_16 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl2(a_0,MakeInt(1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_z_25);
  Epopd(1,1);
  Return();
  a_16 :
  Epopd(0,3);
  goto z_15;
  x_15 :
  Cpop();
  z_15 :
  Return();
  w_15 :
ENDPROC

PROC(_stratego_q_26)
  Epushd(0,10);
  MoveTop(0,2);
  goto x_62;
  x_62 :
  TestFunFC(w_11,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,9,0,2,1);
  MoveArg(0,10,0,2,2);
  goto y_62;
  y_62 :
  TestFunFC(a_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,8,0,3,1);
  goto z_62;
  z_62 :
  TestFunFC(x_11,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto a_63;
  a_63 :
  TestFunFC(x_12,&&f_16,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,1,0,6,1);
  Rpush(e_16);
  goto t_63;
  f_16 :
  TestFunFC(d_13,&&g_16,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  Rpush(e_16);
  goto u_63;
  g_16 :
  TestFunFC(z_12,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  Rpush(e_16);
  goto v_63;
  e_16 :
  goto d_16;
  t_63 :
  Epushd(1,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_a_26);
  MoveTop(1,1);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_y_25);
  MoveTop(1,2);
  NotNULLd(0,7);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(g_13,Egetd(0,7),Egetd(1,1)),(ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl0(c_0))));
  Epopd(1,2);
  Return();
  u_63 :
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl1(d_13,Egetd(0,7)),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl0(c_0))));
  Return();
  v_63 :
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl1(z_12,Egetd(0,7)),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl0(c_0))));
  Return();
  d_16 :
  Epopd(0,10);
ENDPROC

PROC(_stratego_r_26)
  Rpush(h_16);
  f_64 :
  Cpush(j_16);
  Ccall(_stratego_h_28);
  goto i_16;
  j_16 :
  Ccontinue(k_16);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_26);
  OneNextSon();
  Rpush(l_16);
  goto f_64;
  l_16 :
  AllBuild();
  goto i_16;
  k_16 :
  Epushd(0,3);
  MoveTop(0,1);
  goto z_63;
  z_63 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(o_16);
  goto g_64;
  o_16 :
  goto n_16;
  g_64 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(p_16);
  goto f_64;
  p_16 :
  Return();
  n_16 :
  Epopd(0,3);
  goto m_16;
  i_16 :
  Cpop();
  m_16 :
  Return();
  h_16 :
  Ccall(_stratego_x_25);
ENDPROC

PROC(_stratego_s_26)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_64;
  i_64 :
  TestFunFC(y_11,&&fail,Egetd(0,1));
  Rpush(r_16);
  goto k_64;
  r_16 :
  goto q_16;
  k_64 :
  Return();
  q_16 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_26)
  _ST_table_get();
ENDPROC

PROC(_stratego_u_26)
  Epushd(0,2);
  MoveTop(0,1);
  goto v_65;
  v_65 :
  TestFunFC(e_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Cpush(v_16);
  Rpush(w_16);
  goto k_68;
  w_16 :
  goto u_16;
  v_16 :
  Ccontinue(x_16);
  Rpush(y_16);
  goto l_68;
  y_16 :
  goto u_16;
  x_16 :
  Ccontinue(z_16);
  Rpush(a_17);
  goto m_68;
  a_17 :
  goto u_16;
  z_16 :
  Ccontinue(b_17);
  Rpush(c_17);
  goto n_68;
  c_17 :
  goto u_16;
  b_17 :
  Rpush(e_17);
  goto o_68;
  e_17 :
  goto d_17;
  u_16 :
  Cpop();
  d_17 :
  goto t_16;
  t_16 :
  goto s_16;
  k_68 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(a_0,ATmakeString("matrix"),(ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_t_26);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(f_17,Egetd(1,1)));
  Epopd(1,1);
  Return();
  l_68 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(g_17);
  r_68 :
  Cpush(i_17);
  Ccall(_stratego_h_28);
  goto h_17;
  i_17 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto t_64;
  t_64 :
  TestFunFC(w_11,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  goto u_64;
  u_64 :
  TestFunFC(b_0,&&fail,Egetd(3,2));
  goto v_64;
  v_64 :
  TestFunFC(b_0,&&fail,Egetd(3,3));
  Rpush(l_17);
  goto s_68;
  l_17 :
  goto k_17;
  s_68 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Return();
  k_17 :
  Epopd(3,4);
  OneNextSon();
  Rpush(m_17);
  goto r_68;
  m_17 :
  AllBuild();
  goto j_17;
  h_17 :
  Cpop();
  j_17 :
  Return();
  g_17 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(n_17,Egetd(1,1)));
  Epopd(1,1);
  Return();
  m_68 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(o_17);
  u_68 :
  Cpush(q_17);
  Ccall(_stratego_h_28);
  goto p_17;
  q_17 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  TestFunTop(w_11);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,3);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  TestFunTop(x_11);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_26);
  AllBuild();
  OneNextSon();
  AllBuild();
  MoveTop(3,1);
  goto y_64;
  y_64 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(t_17);
  goto v_68;
  t_17 :
  goto s_17;
  v_68 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Return();
  s_17 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(u_17);
  goto u_68;
  u_17 :
  AllBuild();
  goto r_17;
  p_17 :
  Cpop();
  r_17 :
  Return();
  o_17 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(e_12,Egetd(1,1)));
  Epopd(1,1);
  Return();
  n_68 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Cpush(v_17);
  Tdupl();
  Rpush(w_17);
  x_68 :
  Cpush(y_17);
  Ccall(_stratego_h_28);
  goto x_17;
  y_17 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  TestFunTop(w_11);
  TravInit();
  OneNextSon();
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  TestFunTop(x_11);
  TravInit();
  OneNextSon();
  OneNextSon();
  Cpush(a_18);
  Tdupl();
  Ccall(_stratego_s_26);
  Cpop();
  Crestore();
  Cjump();
  a_18 :
  AllBuild();
  OneNextSon();
  AllBuild();
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(b_18);
  goto x_68;
  b_18 :
  AllBuild();
  goto z_17;
  x_17 :
  Cpop();
  z_17 :
  Return();
  w_17 :
  Cpop();
  Crestore();
  Cjump();
  v_17 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(c_18);
  y_68 :
  Cpush(e_18);
  Ccall(_stratego_h_28);
  goto d_18;
  e_18 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Epushd(3,6);
  MoveTop(3,1);
  goto b_65;
  b_65 :
  TestFunFC(w_11,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,6,3,1,2);
  goto c_65;
  c_65 :
  TestFunFC(a_1,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(h_18);
  goto z_68;
  h_18 :
  goto g_18;
  z_68 :
  NotNULLd(3,4);
  NotNULLd(3,2);
  NotNULLd(3,5);
  NotNULLd(3,6);
  Tset((ATerm)ATmakeAppl3(w_11,(ATerm)ATmakeAppl2(a_1,Egetd(3,4),Egetd(3,2)),Egetd(3,5),Egetd(3,6)));
  Return();
  g_18 :
  Epopd(3,6);
  OneNextSon();
  Rpush(i_18);
  goto y_68;
  i_18 :
  AllBuild();
  goto f_18;
  d_18 :
  Cpop();
  f_18 :
  Return();
  c_18 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(e_12,Egetd(1,1)));
  Epopd(1,1);
  Return();
  o_68 :
  Epushd(1,5);
  Tdupl();
  Epushd(2,11);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(2,1);
  goto q_65;
  q_65 :
  TestFunFC(a_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,11,2,1,1);
  goto r_65;
  r_65 :
  TestFunFC(w_11,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,9,2,2,1);
  MoveArg(2,10,2,2,2);
  goto s_65;
  s_65 :
  TestFunFC(a_1,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,8,2,3,1);
  goto t_65;
  t_65 :
  TestFunFC(x_11,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,7,2,4,1);
  goto u_65;
  u_65 :
  TestFunFC(z_13,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  Rpush(k_18);
  goto b_69;
  k_18 :
  goto j_18;
  b_69 :
  Epushd(3,9);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Move(1,1,2,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_r_26);
  MoveTop(3,1);
  Move(1,2,3,1);
  NotNULLd(0,2);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_v_25);
  MoveTop(3,2);
  Move(1,3,3,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_s_25);
  MoveTop(3,3);
  Move(1,4,3,3);
  Ccall(_stratego_r_25);
  MoveTop(3,4);
  Move(1,5,3,4);
  NotNULLd(0,2);
  NotNULLd(1,5);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,5),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(3,5);
  goto m_65;
  m_65 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto n_65;
  n_65 :
  TestFunFC(a_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto o_65;
  o_65 :
  TestFunFC(c_0,&&fail,Egetd(3,9));
  Rpush(m_18);
  goto h_69;
  m_18 :
  goto l_18;
  h_69 :
  NotNULLd(3,6);
  NotNULLd(3,8);
  Tset((ATerm)ATmakeAppl2(a_0,ATmakeString("matrix"),(ATerm)ATmakeAppl2(a_0,Egetd(3,6),(ATerm)ATmakeAppl2(a_0,Egetd(3,8),(ATerm)ATmakeAppl0(c_0)))));
  Ccall(_stratego_q_25);
  Return();
  l_18 :
  Epopd(3,9);
  Return();
  j_18 :
  Epopd(2,11);
  Tpop();
  NotNULLd(1,5);
  NotNULLd(1,1);
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl4(n_18,Egetd(1,5),(ATerm)ATmakeAppl1(a_6,Egetd(1,1)),Egetd(1,3),Egetd(1,4)));
  Epopd(1,5);
  Return();
  s_16 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_26)
  _ST_create_table();
ENDPROC

PROC(_stratego_w_26)
  Tdupl();
  Tset(ATmakeString("matrix"));
  Ccall(_stratego_v_26);
  Tpop();
ENDPROC

PROC(_stratego_x_26)
  Ccall(_stratego_w_26);
  Rpush(o_18);
  t_71 :
  Cpush(q_18);
  p_18 :
  Cpush(s_18);
  Ccall(_stratego_u_26);
  goto r_18;
  s_18 :
  Ccontinue(t_18);
  Epushd(0,3);
  MoveTop(0,1);
  goto d_70;
  d_70 :
  TestFunFC(w_18,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(v_18);
  goto v_71;
  v_18 :
  goto u_18;
  v_71 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(y_18);
  w_71 :
  Epushd(3,3);
  MoveTop(3,1);
  goto y_69;
  y_69 :
  TestFunFC(b_0,&&d_19,Egetd(3,1));
  Rpush(c_19);
  goto x_71;
  d_19 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(c_19);
  goto y_71;
  c_19 :
  goto b_19;
  x_71 :
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl0(c_0))));
  Return();
  y_71 :
  Epushd(4,13);
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,2),(ATerm)ATmakeAppl2(a_0,Egetd(3,3),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto n_69;
  n_69 :
  TestFunFC(h_19,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(g_19);
  goto z_71;
  g_19 :
  goto f_19;
  z_71 :
  Epushd(6,1);
  Tdupl();
  Epushd(7,1);
  Ccall(_stratego_r_25);
  MoveTop(7,1);
  Move(6,1,7,1);
  Epopd(7,1);
  Tpop();
  NotNULLd(5,3);
  NotNULLd(5,2);
  NotNULLd(6,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl3(u_0,Egetd(6,1),(ATerm)ATmakeAppl0(b_0),Egetd(5,3)),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl3(w_11,(ATerm)ATmakeAppl0(b_0),Egetd(5,2),(ATerm)ATmakeAppl2(i_19,(ATerm)ATmakeAppl1(o_0,Egetd(6,1)),(ATerm)ATmakeAppl0(b_0))),(ATerm)ATmakeAppl0(c_0))));
  Epopd(6,1);
  Return();
  f_19 :
  Epopd(5,3);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(j_19);
  goto w_71;
  j_19 :
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  MoveTop(4,1);
  goto p_69;
  p_69 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,7,4,1,1);
  goto q_69;
  q_69 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto r_69;
  r_69 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto s_69;
  s_69 :
  TestFunFC(c_0,&&fail,Egetd(4,6));
  goto t_69;
  t_69 :
  TestFunFC(a_0,&&fail,Egetd(4,7));
  MoveArg(4,8,4,7,0);
  MoveArg(4,13,4,7,1);
  goto u_69;
  u_69 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto v_69;
  v_69 :
  TestFunFC(a_0,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,12,4,10,1);
  goto w_69;
  w_69 :
  TestFunFC(c_0,&&fail,Egetd(4,12));
  goto x_69;
  x_69 :
  TestFunFC(c_0,&&fail,Egetd(4,13));
  Rpush(k_19);
  goto b_72;
  k_19 :
  goto e_19;
  b_72 :
  NotNULLd(4,3);
  NotNULLd(4,9);
  NotNULLd(4,5);
  NotNULLd(4,11);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_1,Egetd(4,3),Egetd(4,9)),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_1,Egetd(4,5),Egetd(4,11)),(ATerm)ATmakeAppl0(c_0))));
  Return();
  e_19 :
  Epopd(4,13);
  Return();
  b_19 :
  Epopd(3,3);
  Return();
  y_18 :
  MoveTop(2,1);
  goto a_70;
  a_70 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto b_70;
  b_70 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto c_70;
  c_70 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(m_19);
  goto c_72;
  m_19 :
  goto x_18;
  c_72 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  x_18 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(c_6,Egetd(0,2),(ATerm)ATmakeAppl2(s_0,Egetd(1,1),(ATerm)ATmakeAppl2(n_19,(ATerm)ATmakeAppl1(o_19,(ATerm)ATmakeAppl1(a_6,(ATerm)ATmakeAppl2(a_1,MakeInt(0),(ATerm)ATmakeAppl0(b_0)))),(ATerm)ATmakeAppl1(e_12,Egetd(1,2))))));
  Epopd(1,2);
  Return();
  u_18 :
  Epopd(0,3);
  goto r_18;
  t_18 :
  Ccall(_stratego_c_27);
  goto p_19;
  r_18 :
  Cpop();
  p_19 :
  Tduplinv();
  goto p_18;
  q_18 :
  AllInit();
  q_19 :
  AllNextSon(&&r_19);
  Rpush(s_19);
  goto t_71;
  s_19 :
  goto q_19;
  r_19 :
  AllBuild();
  Return();
  o_18 :
  Ccall(_stratego_p_25);
ENDPROC

PROC(_stratego_y_26)
  Epushd(0,9);
  MoveTop(0,2);
  goto j_72;
  j_72 :
  TestFunFC(z_19,&&y_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(u_19);
  goto h_73;
  y_19 :
  TestFunFC(b_20,&&a_20,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(u_19);
  goto i_73;
  a_20 :
  TestFunFC(d_20,&&c_20,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto k_72;
  k_72 :
  TestFunFC(d_20,&&e_20,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(u_19);
  goto j_73;
  e_20 :
  TestFunFC(n_19,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto l_72;
  l_72 :
  TestFunFC(d_20,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto m_72;
  m_72 :
  TestFunFC(n_19,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,9,0,6,1);
  goto n_72;
  n_72 :
  TestFunFC(f_20,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  Rpush(u_19);
  goto m_73;
  c_20 :
  TestFunFC(h_20,&&g_20,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto o_72;
  o_72 :
  TestFunFC(h_20,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(u_19);
  goto k_73;
  g_20 :
  TestFunFC(j_20,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto p_72;
  p_72 :
  TestFunFC(j_20,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(u_19);
  goto l_73;
  u_19 :
  goto t_19;
  h_73 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  i_73 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  j_73 :
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(d_20,Egetd(0,4)));
  Return();
  k_73 :
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(j_20,Egetd(0,4)));
  Return();
  l_73 :
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(j_20,Egetd(0,4)));
  Return();
  m_73 :
  NotNULLd(0,5);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset((ATerm)ATmakeAppl1(d_20,(ATerm)ATmakeAppl2(n_19,Egetd(0,5),(ATerm)ATmakeAppl2(n_19,(ATerm)ATmakeAppl1(f_20,Egetd(0,8)),Egetd(0,9)))));
  Return();
  t_19 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_z_26)
  Epushd(0,5);
  MoveTop(0,1);
  goto q_73;
  q_73 :
  TestFunFC(z_19,&&m_20,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto r_73;
  r_73 :
  TestFunFC(z_19,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(l_20);
  goto i_74;
  m_20 :
  TestFunFC(n_19,&&n_20,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto s_73;
  s_73 :
  TestFunFC(n_19,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(l_20);
  goto j_74;
  n_20 :
  TestFunFC(b_20,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto t_73;
  t_73 :
  TestFunFC(b_20,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(l_20);
  goto k_74;
  l_20 :
  goto k_20;
  i_74 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(z_19,Egetd(0,3),(ATerm)ATmakeAppl2(z_19,Egetd(0,4),Egetd(0,5))));
  Return();
  j_74 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(n_19,Egetd(0,3),(ATerm)ATmakeAppl2(n_19,Egetd(0,4),Egetd(0,5))));
  Return();
  k_74 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(b_20,Egetd(0,3),(ATerm)ATmakeAppl2(b_20,Egetd(0,4),Egetd(0,5))));
  Return();
  k_20 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_a_27)
  Epushd(0,3);
  MoveTop(0,2);
  goto c_75;
  c_75 :
  TestFunFC(j_20,&&u_20,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto d_75;
  d_75 :
  TestFunFC(v_20,&&fail,Egetd(0,3));
  Rpush(p_20);
  goto i_76;
  u_20 :
  TestFunFC(h_20,&&y_20,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto e_75;
  e_75 :
  TestFunFC(v_20,&&fail,Egetd(0,3));
  Rpush(p_20);
  goto j_76;
  y_20 :
  TestFunFC(n_19,&&z_20,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto f_75;
  f_75 :
  TestFunFC(v_20,&&fail,Egetd(0,3));
  Rpush(p_20);
  goto k_76;
  z_20 :
  TestFunFC(c_6,&&a_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto g_75;
  g_75 :
  TestFunFC(v_20,&&fail,Egetd(0,1));
  Rpush(p_20);
  goto l_76;
  a_21 :
  TestFunFC(v_0,&&d_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto h_75;
  h_75 :
  TestFunFC(v_20,&&fail,Egetd(0,1));
  Rpush(p_20);
  goto m_76;
  d_21 :
  TestFunFC(f_21,&&e_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto i_75;
  i_75 :
  TestFunFC(v_20,&&fail,Egetd(0,3));
  Rpush(p_20);
  goto n_76;
  e_21 :
  TestFunFC(h_21,&&g_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto j_75;
  j_75 :
  TestFunFC(v_20,&&fail,Egetd(0,3));
  Rpush(p_20);
  goto o_76;
  g_21 :
  TestFunFC(j_21,&&i_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto k_75;
  k_75 :
  TestFunFC(v_20,&&fail,Egetd(0,1));
  Rpush(p_20);
  goto p_76;
  i_21 :
  TestFunFC(m_21,&&l_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(p_20);
  goto q_76;
  l_21 :
  TestFunFC(z_19,&&o_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto l_75;
  l_75 :
  TestFunFC(v_20,&&p_21,Egetd(0,1));
  goto m_75;
  m_75 :
  TestFunFC(v_20,&&q_21,Egetd(0,3));
  Cpush(t_21);
  Rpush(u_21);
  goto r_76;
  u_21 :
  goto r_21;
  t_21 :
  Rpush(a_22);
  goto s_76;
  a_22 :
  goto z_21;
  r_21 :
  Cpop();
  z_21 :
  goto p_20;
  q_21 :
  Rpush(p_20);
  goto s_76;
  p_21 :
  goto n_75;
  n_75 :
  TestFunFC(v_20,&&fail,Egetd(0,3));
  Rpush(p_20);
  goto r_76;
  o_21 :
  TestFunFC(b_20,&&b_22,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto o_75;
  o_75 :
  TestFunFC(v_20,&&c_22,Egetd(0,1));
  goto p_75;
  p_75 :
  TestFunFC(v_20,&&d_22,Egetd(0,3));
  Cpush(l_22);
  Rpush(m_22);
  goto t_76;
  m_22 :
  goto f_22;
  l_22 :
  Rpush(q_22);
  goto u_76;
  q_22 :
  goto o_22;
  f_22 :
  Cpop();
  o_22 :
  goto p_20;
  d_22 :
  Rpush(p_20);
  goto u_76;
  c_22 :
  goto q_75;
  q_75 :
  TestFunFC(v_20,&&fail,Egetd(0,3));
  Rpush(p_20);
  goto t_76;
  b_22 :
  TestFunFC(d_20,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto r_75;
  r_75 :
  TestFunFC(v_20,&&fail,Egetd(0,3));
  Rpush(p_20);
  goto v_76;
  p_20 :
  goto o_20;
  i_76 :
  Tset((ATerm)ATmakeAppl0(v_20));
  Return();
  j_76 :
  Tset((ATerm)ATmakeAppl0(r_22));
  Return();
  k_76 :
  Tset((ATerm)ATmakeAppl0(v_20));
  Return();
  l_76 :
  Tset((ATerm)ATmakeAppl0(v_20));
  Return();
  m_76 :
  Tset((ATerm)ATmakeAppl0(v_20));
  Return();
  n_76 :
  Tset((ATerm)ATmakeAppl0(v_20));
  Return();
  o_76 :
  Tset((ATerm)ATmakeAppl0(v_20));
  Return();
  p_76 :
  Tset((ATerm)ATmakeAppl0(v_20));
  Return();
  q_76 :
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(s_22);
  w_76 :
  Cpush(u_22);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_75;
  a_75 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_75;
  b_75 :
  TestFunFC(v_20,&&fail,Egetd(1,2));
  Rpush(w_22);
  goto x_76;
  w_22 :
  goto v_22;
  x_76 :
  Return();
  v_22 :
  Epopd(1,3);
  goto t_22;
  u_22 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_22);
  goto w_76;
  y_22 :
  AllBuild();
  goto x_22;
  t_22 :
  Cpop();
  x_22 :
  Return();
  s_22 :
  Tpop();
  Tset((ATerm)ATmakeAppl0(v_20));
  Return();
  r_76 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  s_76 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  t_76 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  u_76 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  v_76 :
  Tset((ATerm)ATmakeAppl0(v_20));
  Return();
  o_20 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_b_27)
  Epushd(0,3);
  MoveTop(0,2);
  goto i_77;
  i_77 :
  TestFunFC(j_20,&&b_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto j_77;
  j_77 :
  TestFunFC(r_22,&&fail,Egetd(0,3));
  Rpush(a_23);
  goto c_78;
  b_23 :
  TestFunFC(h_20,&&c_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto k_77;
  k_77 :
  TestFunFC(r_22,&&fail,Egetd(0,3));
  Rpush(a_23);
  goto d_78;
  c_23 :
  TestFunFC(n_19,&&d_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto l_77;
  l_77 :
  TestFunFC(r_22,&&e_23,Egetd(0,1));
  goto m_77;
  m_77 :
  TestFunFC(r_22,&&f_23,Egetd(0,3));
  Cpush(h_23);
  Rpush(i_23);
  goto e_78;
  i_23 :
  goto g_23;
  h_23 :
  Rpush(k_23);
  goto f_78;
  k_23 :
  goto j_23;
  g_23 :
  Cpop();
  j_23 :
  goto a_23;
  f_23 :
  Rpush(a_23);
  goto f_78;
  e_23 :
  goto n_77;
  n_77 :
  TestFunFC(r_22,&&fail,Egetd(0,3));
  Rpush(a_23);
  goto e_78;
  d_23 :
  TestFunFC(b_20,&&l_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto o_77;
  o_77 :
  TestFunFC(r_22,&&fail,Egetd(0,3));
  Rpush(a_23);
  goto g_78;
  l_23 :
  TestFunFC(c_6,&&m_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto p_77;
  p_77 :
  TestFunFC(r_22,&&fail,Egetd(0,1));
  Rpush(a_23);
  goto h_78;
  m_23 :
  TestFunFC(v_0,&&n_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto q_77;
  q_77 :
  TestFunFC(r_22,&&fail,Egetd(0,1));
  Rpush(a_23);
  goto i_78;
  n_23 :
  TestFunFC(p_23,&&o_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto r_77;
  r_77 :
  TestFunFC(r_22,&&fail,Egetd(0,3));
  Rpush(a_23);
  goto j_78;
  o_23 :
  TestFunFC(d_20,&&q_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto s_77;
  s_77 :
  TestFunFC(r_22,&&fail,Egetd(0,3));
  Rpush(a_23);
  goto k_78;
  q_23 :
  TestFunFC(r_23,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto t_77;
  t_77 :
  TestFunFC(y_11,&&fail,Egetd(0,3));
  Rpush(a_23);
  goto l_78;
  a_23 :
  goto z_22;
  c_78 :
  Tset((ATerm)ATmakeAppl0(r_22));
  Return();
  d_78 :
  Tset((ATerm)ATmakeAppl0(v_20));
  Return();
  e_78 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  f_78 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  g_78 :
  Tset((ATerm)ATmakeAppl0(r_22));
  Return();
  h_78 :
  Tset((ATerm)ATmakeAppl0(r_22));
  Return();
  i_78 :
  Tset((ATerm)ATmakeAppl0(r_22));
  Return();
  j_78 :
  Tset((ATerm)ATmakeAppl0(r_22));
  Return();
  k_78 :
  Tset((ATerm)ATmakeAppl0(r_22));
  Return();
  l_78 :
  Tset((ATerm)ATmakeAppl0(r_22));
  Return();
  z_22 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_c_27)
  Cpush(t_23);
  Ccall(_stratego_b_27);
  goto s_23;
  t_23 :
  Ccontinue(u_23);
  Ccall(_stratego_a_27);
  goto s_23;
  u_23 :
  Ccontinue(v_23);
  Ccall(_stratego_z_26);
  goto s_23;
  v_23 :
  Ccontinue(a_24);
  Ccall(_stratego_y_26);
  goto s_23;
  a_24 :
  Epushd(0,3);
  MoveTop(0,1);
  goto n_78;
  n_78 :
  TestFunFC(c_6,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_78;
  o_78 :
  TestFunFC(b_0,&&fail,Egetd(0,2));
  Rpush(d_24);
  goto t_78;
  d_24 :
  goto c_24;
  t_78 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  c_24 :
  Epopd(0,3);
  goto b_24;
  s_23 :
  Cpop();
  b_24 :
ENDPROC

PROC(_stratego_d_27)
  Epushd(0,13);
  MoveTop(0,5);
  goto l_82;
  l_82 :
  TestFunFC(n_19,&&g_24,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto m_82;
  m_82 :
  TestFunFC(w_18,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto n_82;
  n_82 :
  TestFunFC(a_1,&&fail,Egetd(0,8));
  MoveArg(0,1,0,8,0);
  MoveArg(0,4,0,8,1);
  goto o_82;
  o_82 :
  TestFunFC(h_19,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto p_82;
  p_82 :
  TestFunFC(b_0,&&fail,Egetd(0,4));
  Rpush(f_24);
  goto f_91;
  g_24 :
  TestFunFC(c_6,&&h_24,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto q_82;
  q_82 :
  TestFunFC(w_18,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  Rpush(f_24);
  goto g_91;
  h_24 :
  TestFunFC(z_19,&&i_24,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto r_82;
  r_82 :
  TestFunFC(w_18,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto s_82;
  s_82 :
  TestFunFC(w_18,&&j_24,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  Rpush(f_24);
  goto h_91;
  j_24 :
  TestFunFC(z_19,&&k_24,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto t_82;
  t_82 :
  TestFunFC(w_18,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,12,0,10,1);
  Rpush(f_24);
  goto i_91;
  k_24 :
  TestFunFC(b_20,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto u_82;
  u_82 :
  TestFunFC(w_18,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,12,0,10,1);
  Rpush(f_24);
  goto j_91;
  i_24 :
  TestFunFC(b_20,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto v_82;
  v_82 :
  TestFunFC(w_18,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto w_82;
  w_82 :
  TestFunFC(w_18,&&l_24,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  Rpush(f_24);
  goto k_91;
  l_24 :
  TestFunFC(b_20,&&m_24,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto x_82;
  x_82 :
  TestFunFC(w_18,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,12,0,10,1);
  Rpush(f_24);
  goto l_91;
  m_24 :
  TestFunFC(z_19,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto y_82;
  y_82 :
  TestFunFC(w_18,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,12,0,10,1);
  Rpush(f_24);
  goto m_91;
  f_24 :
  goto e_24;
  f_91 :
  NotNULLd(0,7);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(0,9);
  Tset((ATerm)ATmakeAppl2(w_18,Egetd(0,7),(ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl2(h_19,Egetd(0,2),(ATerm)ATmakeAppl2(n_19,Egetd(0,3),Egetd(0,9))),(ATerm)ATmakeAppl0(b_0))));
  Return();
  g_91 :
  Epushd(1,1);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Rpush(n_24);
  n_91 :
  Cpush(p_24);
  Ccall(_stratego_h_28);
  goto o_24;
  p_24 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Epushd(2,3);
  MoveTop(2,1);
  goto d_79;
  d_79 :
  TestFunFC(h_19,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(u_24);
  goto o_91;
  u_24 :
  goto t_24;
  o_91 :
  NotNULLd(2,2);
  NotNULLd(0,6);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(h_19,Egetd(2,2),(ATerm)ATmakeAppl2(c_6,Egetd(0,6),Egetd(2,3))));
  Return();
  t_24 :
  Epopd(2,3);
  OneNextSon();
  Rpush(x_24);
  goto n_91;
  x_24 :
  AllBuild();
  goto s_24;
  o_24 :
  Cpop();
  s_24 :
  Return();
  n_24 :
  MoveTop(1,1);
  NotNULLd(0,10);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(w_18,Egetd(0,10),Egetd(1,1)));
  Epopd(1,1);
  Return();
  h_91 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,7),(ATerm)ATmakeAppl2(a_0,Egetd(0,10),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,1);
  goto q_79;
  q_79 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_79;
  r_79 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto s_79;
  s_79 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(z_24);
  goto q_91;
  z_24 :
  goto y_24;
  q_91 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(a_25);
  r_91 :
  Cpush(c_25);
  Ccall(_stratego_h_28);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto b_25;
  c_25 :
  Ccontinue(d_25);
  Epushd(3,3);
  MoveTop(3,1);
  goto j_79;
  j_79 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(u_25);
  goto s_91;
  u_25 :
  goto e_25;
  s_91 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(b_26);
  t_91 :
  Cpush(d_26);
  Epushd(4,3);
  MoveTop(4,1);
  goto i_79;
  i_79 :
  TestFunFC(a_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(f_26);
  goto u_91;
  f_26 :
  goto e_26;
  u_91 :
  Move(3,2,4,2);
  Return();
  e_26 :
  Epopd(4,3);
  goto c_26;
  d_26 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_26);
  goto t_91;
  h_26 :
  AllBuild();
  goto g_26;
  c_26 :
  Cpop();
  g_26 :
  Return();
  b_26 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(i_26);
  goto r_91;
  i_26 :
  Return();
  e_25 :
  Epopd(3,3);
  goto b_25;
  d_25 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_28);
  goto r_91;
  l_28 :
  AllBuild();
  goto k_28;
  b_25 :
  Cpop();
  k_28 :
  Return();
  a_25 :
  MoveTop(2,1);
  NotNULLd(0,8);
  NotNULLd(0,13);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,8),(ATerm)ATmakeAppl2(a_0,Egetd(0,13),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto n_79;
  n_79 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto o_79;
  o_79 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto p_79;
  p_79 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(s_28);
  goto w_91;
  s_28 :
  goto m_28;
  w_91 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(t_28);
  x_91 :
  Cpush(y_28);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_29);
  goto x_91;
  a_29 :
  AllBuild();
  goto x_28;
  y_28 :
  Ccall(_stratego_h_28);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto h_29;
  x_28 :
  Cpop();
  h_29 :
  Return();
  t_28 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(w_18,Egetd(2,1),Egetd(3,1)));
  Epopd(3,1);
  Return();
  m_28 :
  Epopd(2,6);
  Return();
  y_24 :
  Epopd(1,5);
  Return();
  i_91 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,7),(ATerm)ATmakeAppl2(a_0,Egetd(0,11),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,1);
  goto e_80;
  e_80 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_80;
  f_80 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto g_80;
  g_80 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(j_29);
  goto z_91;
  j_29 :
  goto i_29;
  z_91 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(k_29);
  a_92 :
  Cpush(m_29);
  Ccall(_stratego_h_28);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto l_29;
  m_29 :
  Ccontinue(n_29);
  Epushd(3,3);
  MoveTop(3,1);
  goto x_79;
  x_79 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(p_29);
  goto b_92;
  p_29 :
  goto o_29;
  b_92 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(q_29);
  c_92 :
  Cpush(t_29);
  Epushd(4,3);
  MoveTop(4,1);
  goto w_79;
  w_79 :
  TestFunFC(a_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(v_29);
  goto d_92;
  v_29 :
  goto u_29;
  d_92 :
  Move(3,2,4,2);
  Return();
  u_29 :
  Epopd(4,3);
  goto r_29;
  t_29 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_29);
  goto c_92;
  z_29 :
  AllBuild();
  goto x_29;
  r_29 :
  Cpop();
  x_29 :
  Return();
  q_29 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(a_30);
  goto a_92;
  a_30 :
  Return();
  o_29 :
  Epopd(3,3);
  goto l_29;
  n_29 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_30);
  goto a_92;
  c_30 :
  AllBuild();
  goto b_30;
  l_29 :
  Cpop();
  b_30 :
  Return();
  k_29 :
  MoveTop(2,1);
  NotNULLd(0,8);
  NotNULLd(0,12);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,8),(ATerm)ATmakeAppl2(a_0,Egetd(0,12),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto b_80;
  b_80 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto c_80;
  c_80 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto d_80;
  d_80 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(e_30);
  goto f_92;
  e_30 :
  goto d_30;
  f_92 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(f_30);
  g_92 :
  Cpush(h_30);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_30);
  goto g_92;
  i_30 :
  AllBuild();
  goto g_30;
  h_30 :
  Ccall(_stratego_h_28);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto j_30;
  g_30 :
  Cpop();
  j_30 :
  Return();
  f_30 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  NotNULLd(0,13);
  Tset((ATerm)ATmakeAppl2(z_19,(ATerm)ATmakeAppl2(w_18,Egetd(2,1),Egetd(3,1)),Egetd(0,13)));
  Epopd(3,1);
  Return();
  d_30 :
  Epopd(2,6);
  Return();
  i_29 :
  Epopd(1,5);
  Return();
  j_91 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,7),(ATerm)ATmakeAppl2(a_0,Egetd(0,11),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,1);
  goto s_80;
  s_80 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto t_80;
  t_80 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto u_80;
  u_80 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(l_30);
  goto i_92;
  l_30 :
  goto k_30;
  i_92 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(m_30);
  j_92 :
  Cpush(o_30);
  Ccall(_stratego_h_28);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto n_30;
  o_30 :
  Ccontinue(p_30);
  Epushd(3,3);
  MoveTop(3,1);
  goto l_80;
  l_80 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_30);
  goto k_92;
  s_30 :
  goto q_30;
  k_92 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(t_30);
  l_92 :
  Cpush(v_30);
  Epushd(4,3);
  MoveTop(4,1);
  goto k_80;
  k_80 :
  TestFunFC(a_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(x_30);
  goto m_92;
  x_30 :
  goto w_30;
  m_92 :
  Move(3,2,4,2);
  Return();
  w_30 :
  Epopd(4,3);
  goto u_30;
  v_30 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_30);
  goto l_92;
  z_30 :
  AllBuild();
  goto y_30;
  u_30 :
  Cpop();
  y_30 :
  Return();
  t_30 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(a_31);
  goto j_92;
  a_31 :
  Return();
  q_30 :
  Epopd(3,3);
  goto n_30;
  p_30 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_31);
  goto j_92;
  c_31 :
  AllBuild();
  goto b_31;
  n_30 :
  Cpop();
  b_31 :
  Return();
  m_30 :
  MoveTop(2,1);
  NotNULLd(0,8);
  NotNULLd(0,12);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,8),(ATerm)ATmakeAppl2(a_0,Egetd(0,12),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto p_80;
  p_80 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto q_80;
  q_80 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto r_80;
  r_80 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(e_31);
  goto o_92;
  e_31 :
  goto d_31;
  o_92 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(f_31);
  p_92 :
  Cpush(h_31);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_31);
  goto p_92;
  i_31 :
  AllBuild();
  goto g_31;
  h_31 :
  Ccall(_stratego_h_28);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto j_31;
  g_31 :
  Cpop();
  j_31 :
  Return();
  f_31 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  NotNULLd(0,13);
  Tset((ATerm)ATmakeAppl2(b_20,(ATerm)ATmakeAppl2(w_18,Egetd(2,1),Egetd(3,1)),Egetd(0,13)));
  Epopd(3,1);
  Return();
  d_31 :
  Epopd(2,6);
  Return();
  k_30 :
  Epopd(1,5);
  Return();
  k_91 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,10);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,7),(ATerm)ATmakeAppl2(a_0,Egetd(0,10),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,1);
  goto g_81;
  g_81 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_81;
  h_81 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto i_81;
  i_81 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(l_31);
  goto r_92;
  l_31 :
  goto k_31;
  r_92 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(m_31);
  s_92 :
  Cpush(o_31);
  Ccall(_stratego_h_28);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto n_31;
  o_31 :
  Ccontinue(p_31);
  Epushd(3,3);
  MoveTop(3,1);
  goto z_80;
  z_80 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(r_31);
  goto t_92;
  r_31 :
  goto q_31;
  t_92 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(s_31);
  u_92 :
  Cpush(u_31);
  Epushd(4,3);
  MoveTop(4,1);
  goto y_80;
  y_80 :
  TestFunFC(a_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(x_31);
  goto v_92;
  x_31 :
  goto w_31;
  v_92 :
  Move(3,2,4,2);
  Return();
  w_31 :
  Epopd(4,3);
  goto t_31;
  u_31 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_32);
  goto u_92;
  a_32 :
  AllBuild();
  goto y_31;
  t_31 :
  Cpop();
  y_31 :
  Return();
  s_31 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(b_32);
  goto s_92;
  b_32 :
  Return();
  q_31 :
  Epopd(3,3);
  goto n_31;
  p_31 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_32);
  goto s_92;
  i_32 :
  AllBuild();
  goto c_32;
  n_31 :
  Cpop();
  c_32 :
  Return();
  m_31 :
  MoveTop(2,1);
  NotNULLd(0,8);
  NotNULLd(0,13);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,8),(ATerm)ATmakeAppl2(a_0,Egetd(0,13),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto d_81;
  d_81 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto e_81;
  e_81 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto f_81;
  f_81 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(k_32);
  goto x_92;
  k_32 :
  goto j_32;
  x_92 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(q_32);
  y_92 :
  Cpush(x_32);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_33);
  goto y_92;
  a_33 :
  AllBuild();
  goto s_32;
  x_32 :
  Ccall(_stratego_h_28);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto b_33;
  s_32 :
  Cpop();
  b_33 :
  Return();
  q_32 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(w_18,Egetd(2,1),Egetd(3,1)));
  Epopd(3,1);
  Return();
  j_32 :
  Epopd(2,6);
  Return();
  k_31 :
  Epopd(1,5);
  Return();
  l_91 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,7),(ATerm)ATmakeAppl2(a_0,Egetd(0,11),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,1);
  goto u_81;
  u_81 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_81;
  v_81 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto w_81;
  w_81 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(d_33);
  goto a_93;
  d_33 :
  goto c_33;
  a_93 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(k_33);
  b_93 :
  Cpush(n_33);
  Ccall(_stratego_h_28);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto m_33;
  n_33 :
  Ccontinue(o_33);
  Epushd(3,3);
  MoveTop(3,1);
  goto n_81;
  n_81 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(q_33);
  goto c_93;
  q_33 :
  goto p_33;
  c_93 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(r_33);
  d_93 :
  Cpush(t_33);
  Epushd(4,3);
  MoveTop(4,1);
  goto m_81;
  m_81 :
  TestFunFC(a_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(y_33);
  goto e_93;
  y_33 :
  goto u_33;
  e_93 :
  Move(3,2,4,2);
  Return();
  u_33 :
  Epopd(4,3);
  goto s_33;
  t_33 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_34);
  goto d_93;
  a_34 :
  AllBuild();
  goto z_33;
  s_33 :
  Cpop();
  z_33 :
  Return();
  r_33 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(b_34);
  goto b_93;
  b_34 :
  Return();
  p_33 :
  Epopd(3,3);
  goto m_33;
  o_33 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_34);
  goto b_93;
  g_34 :
  AllBuild();
  goto f_34;
  m_33 :
  Cpop();
  f_34 :
  Return();
  k_33 :
  MoveTop(2,1);
  NotNULLd(0,8);
  NotNULLd(0,12);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,8),(ATerm)ATmakeAppl2(a_0,Egetd(0,12),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto r_81;
  r_81 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto s_81;
  s_81 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto t_81;
  t_81 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(m_34);
  goto g_93;
  m_34 :
  goto h_34;
  g_93 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(n_34);
  h_93 :
  Cpush(w_34);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_34);
  goto h_93;
  x_34 :
  AllBuild();
  goto o_34;
  w_34 :
  Ccall(_stratego_h_28);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto p_35;
  o_34 :
  Cpop();
  p_35 :
  Return();
  n_34 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  NotNULLd(0,13);
  Tset((ATerm)ATmakeAppl2(b_20,(ATerm)ATmakeAppl2(w_18,Egetd(2,1),Egetd(3,1)),Egetd(0,13)));
  Epopd(3,1);
  Return();
  h_34 :
  Epopd(2,6);
  Return();
  c_33 :
  Epopd(1,5);
  Return();
  m_91 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,7),(ATerm)ATmakeAppl2(a_0,Egetd(0,11),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(1,1);
  goto i_82;
  i_82 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto j_82;
  j_82 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto k_82;
  k_82 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(r_35);
  goto j_93;
  r_35 :
  goto q_35;
  j_93 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(f_36);
  k_93 :
  Cpush(n_36);
  Ccall(_stratego_h_28);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto m_36;
  n_36 :
  Ccontinue(o_36);
  Epushd(3,3);
  MoveTop(3,1);
  goto b_82;
  b_82 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(q_36);
  goto l_93;
  q_36 :
  goto p_36;
  l_93 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(w_36);
  m_93 :
  Cpush(z_36);
  Epushd(4,3);
  MoveTop(4,1);
  goto a_82;
  a_82 :
  TestFunFC(a_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(g_37);
  goto n_93;
  g_37 :
  goto f_37;
  n_93 :
  Move(3,2,4,2);
  Return();
  f_37 :
  Epopd(4,3);
  goto x_36;
  z_36 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_37);
  goto m_93;
  i_37 :
  AllBuild();
  goto h_37;
  x_36 :
  Cpop();
  h_37 :
  Return();
  w_36 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(j_37);
  goto k_93;
  j_37 :
  Return();
  p_36 :
  Epopd(3,3);
  goto m_36;
  o_36 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_37);
  goto k_93;
  u_37 :
  AllBuild();
  goto r_37;
  m_36 :
  Cpop();
  r_37 :
  Return();
  f_36 :
  MoveTop(2,1);
  NotNULLd(0,8);
  NotNULLd(0,12);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,8),(ATerm)ATmakeAppl2(a_0,Egetd(0,12),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,2);
  goto f_82;
  f_82 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto g_82;
  g_82 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto h_82;
  h_82 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  Rpush(w_37);
  goto p_93;
  w_37 :
  goto v_37;
  p_93 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(x_37);
  q_93 :
  Cpush(f_38);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_38);
  goto q_93;
  s_38 :
  AllBuild();
  goto a_38;
  f_38 :
  Ccall(_stratego_h_28);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto t_38;
  a_38 :
  Cpop();
  t_38 :
  Return();
  x_37 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  NotNULLd(0,13);
  Tset((ATerm)ATmakeAppl2(b_20,(ATerm)ATmakeAppl2(w_18,Egetd(2,1),Egetd(3,1)),Egetd(0,13)));
  Epopd(3,1);
  Return();
  v_37 :
  Epopd(2,6);
  Return();
  q_35 :
  Epopd(1,5);
  Return();
  e_24 :
  Epopd(0,13);
ENDPROC

PROC(_stratego_e_27)
  Rpush(x_38);
  w_95 :
  Epushd(0,2);
  MoveTop(0,2);
  goto l_94;
  l_94 :
  TestFunFC(z_13,&&k_39,Egetd(0,2));
  MoveArg(0,1,0,2,0);
  Cpush(u_39);
  Rpush(v_39);
  goto x_95;
  v_39 :
  goto t_39;
  u_39 :
  Rpush(h_40);
  goto y_95;
  h_40 :
  goto f_40;
  t_39 :
  Cpop();
  f_40 :
  goto c_39;
  k_39 :
  Rpush(c_39);
  goto y_95;
  c_39 :
  goto y_38;
  x_95 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_1,Egetd(0,1),(ATerm)ATmakeAppl0(b_0)));
  Return();
  y_95 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(2,1);
  goto w_93;
  w_93 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto x_93;
  x_93 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto y_93;
  y_93 :
  TestFunFC(c_0,&&fail,Egetd(2,5));
  Rpush(j_40);
  goto a_96;
  j_40 :
  goto i_40;
  a_96 :
  Move(1,1,2,4);
  Return();
  i_40 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(k_40);
  b_96 :
  Cpush(m_40);
  Ccall(_stratego_h_28);
  Tset((ATerm)ATmakeAppl0(b_0));
  goto l_40;
  m_40 :
  Epushd(2,3);
  MoveTop(2,1);
  goto k_94;
  k_94 :
  TestFunFC(a_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(s_40);
  goto c_96;
  s_40 :
  goto r_40;
  c_96 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(t_40);
  goto w_95;
  t_40 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(u_40);
  goto b_96;
  u_40 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,1),(ATerm)ATmakeAppl2(a_0,Egetd(3,2),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(3,3);
  goto h_94;
  h_94 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto i_94;
  i_94 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto j_94;
  j_94 :
  TestFunFC(c_0,&&fail,Egetd(3,7));
  Rpush(c_41);
  goto f_96;
  c_41 :
  goto v_40;
  f_96 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(d_41);
  g_96 :
  Cpush(i_41);
  Ccall(_stratego_h_28);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto h_41;
  i_41 :
  Ccontinue(j_41);
  Epushd(4,3);
  MoveTop(4,1);
  goto g_94;
  g_94 :
  TestFunFC(a_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(l_41);
  goto h_96;
  l_41 :
  goto k_41;
  h_96 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(m_41);
  i_96 :
  Cpush(z_41);
  Epushd(5,3);
  MoveTop(5,1);
  goto f_94;
  f_94 :
  TestFunFC(a_1,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(c_42);
  goto j_96;
  c_42 :
  goto b_42;
  j_96 :
  Move(4,2,5,2);
  Return();
  b_42 :
  Epopd(5,3);
  goto v_41;
  z_41 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_42);
  goto i_96;
  g_42 :
  AllBuild();
  goto d_42;
  v_41 :
  Cpop();
  d_42 :
  Return();
  m_41 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(p_42);
  goto g_96;
  p_42 :
  Return();
  k_41 :
  Epopd(4,3);
  goto h_41;
  j_41 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_42);
  goto g_96;
  r_42 :
  AllBuild();
  goto q_42;
  h_41 :
  Cpop();
  q_42 :
  Return();
  d_41 :
  Return();
  v_40 :
  Epopd(3,7);
  Return();
  r_40 :
  Epopd(2,3);
  goto q_40;
  l_40 :
  Cpop();
  q_40 :
  Return();
  k_40 :
  Epopd(1,1);
  Return();
  y_38 :
  Epopd(0,2);
  Return();
  x_38 :
ENDPROC

PROC(_stratego_f_27)
  Epushd(0,7);
  MoveTop(0,1);
  goto m_96;
  m_96 :
  TestFunFC(x_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto n_96;
  n_96 :
  TestFunFC(z_13,&&a_43,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto o_96;
  o_96 :
  TestFunFC(a_6,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(u_42);
  goto d_97;
  a_43 :
  TestFunFC(a_6,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto p_96;
  p_96 :
  TestFunFC(x_11,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,7,0,4,1);
  goto q_96;
  q_96 :
  TestFunFC(z_13,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(u_42);
  goto e_97;
  u_42 :
  goto s_42;
  d_97 :
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl2(b_43,(ATerm)ATmakeAppl1(a_6,Egetd(0,5)),(ATerm)ATmakeAppl1(a_6,Egetd(0,3))),(ATerm)ATmakeAppl0(b_0)));
  Return();
  e_97 :
  NotNULLd(0,3);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl2(b_43,(ATerm)ATmakeAppl1(a_6,Egetd(0,3)),(ATerm)ATmakeAppl1(a_6,Egetd(0,6))),(ATerm)ATmakeAppl0(b_0)));
  Return();
  s_42 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_g_27)
  Cpush(g_43);
  Ccall(_stratego_h_28);
  goto f_43;
  g_43 :
  Epushd(0,3);
  MoveTop(0,1);
  goto g_97;
  g_97 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(w_43);
  goto k_97;
  w_43 :
  goto v_43;
  k_97 :
  Return();
  v_43 :
  Epopd(0,3);
  goto m_43;
  f_43 :
  Cpop();
  m_43 :
ENDPROC

PROC(_stratego_h_27)
  Epushd(0,7);
  MoveTop(0,1);
  goto n_97;
  n_97 :
  TestFunFC(x_11,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto o_97;
  o_97 :
  TestFunFC(z_13,&&g_44,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto p_97;
  p_97 :
  TestFunFC(a_6,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(a_44);
  goto e_98;
  g_44 :
  TestFunFC(a_6,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto q_97;
  q_97 :
  TestFunFC(x_11,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,7,0,4,1);
  goto r_97;
  r_97 :
  TestFunFC(z_13,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(a_44);
  goto f_98;
  a_44 :
  goto y_43;
  e_98 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_g_27);
  Tpop();
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(x_11,(ATerm)ATmakeAppl1(z_13,Egetd(0,3)),(ATerm)ATmakeAppl0(y_11)));
  Return();
  f_98 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(x_11,(ATerm)ATmakeAppl1(z_13,Egetd(0,6)),Egetd(0,7)));
  Return();
  y_43 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_i_27)
  Rpush(h_44);
  k_99 :
  Cpush(m_44);
  Ccall(_stratego_h_28);
  Tset((ATerm)ATmakeAppl0(b_0));
  goto l_44;
  m_44 :
  Epushd(0,3);
  MoveTop(0,1);
  goto p_98;
  p_98 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(u_44);
  goto l_99;
  u_44 :
  goto t_44;
  l_99 :
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
  Rpush(w_44);
  goto k_99;
  w_44 :
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto m_98;
  m_98 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto n_98;
  n_98 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto o_98;
  o_98 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(x_44);
  goto m_99;
  x_44 :
  goto v_44;
  m_99 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(b_45);
  n_99 :
  Cpush(i_45);
  Ccall(_stratego_h_28);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto c_45;
  i_45 :
  Ccontinue(m_45);
  Epushd(2,3);
  MoveTop(2,1);
  goto l_98;
  l_98 :
  TestFunFC(a_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(t_45);
  goto o_99;
  t_45 :
  goto n_45;
  o_99 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(u_45);
  p_99 :
  Cpush(e_46);
  Epushd(3,3);
  MoveTop(3,1);
  goto k_98;
  k_98 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(g_46);
  goto q_99;
  g_46 :
  goto f_46;
  q_99 :
  Move(2,2,3,2);
  Return();
  f_46 :
  Epopd(3,3);
  goto d_46;
  e_46 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_46);
  goto p_99;
  k_46 :
  AllBuild();
  goto h_46;
  d_46 :
  Cpop();
  h_46 :
  Return();
  u_45 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(l_46);
  goto n_99;
  l_46 :
  Return();
  n_45 :
  Epopd(2,3);
  goto c_45;
  m_45 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_47);
  goto n_99;
  g_47 :
  AllBuild();
  goto e_47;
  c_45 :
  Cpop();
  e_47 :
  Return();
  b_45 :
  Return();
  v_44 :
  Epopd(1,5);
  Return();
  t_44 :
  Epopd(0,3);
  goto s_44;
  l_44 :
  Cpop();
  s_44 :
  Return();
  h_44 :
ENDPROC

PROC(_stratego_j_27)
  Rpush(h_47);
  a_101 :
  Epushd(0,3);
  MoveTop(0,1);
  goto d_100;
  d_100 :
  TestFunFC(b_0,&&n_47,Egetd(0,1));
  Rpush(m_47);
  goto b_101;
  n_47 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_47);
  goto c_101;
  m_47 :
  goto l_47;
  b_101 :
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl0(c_0))));
  Return();
  c_101 :
  Epushd(1,13);
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
  Rpush(p_47);
  goto a_101;
  p_47 :
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto u_99;
  u_99 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto v_99;
  v_99 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto w_99;
  w_99 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto x_99;
  x_99 :
  TestFunFC(c_0,&&fail,Egetd(1,6));
  goto y_99;
  y_99 :
  TestFunFC(a_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,13,1,7,1);
  goto z_99;
  z_99 :
  TestFunFC(a_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto a_100;
  a_100 :
  TestFunFC(a_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto b_100;
  b_100 :
  TestFunFC(c_0,&&fail,Egetd(1,12));
  goto c_100;
  c_100 :
  TestFunFC(c_0,&&fail,Egetd(1,13));
  Rpush(q_47);
  goto d_101;
  q_47 :
  goto o_47;
  d_101 :
  NotNULLd(1,3);
  NotNULLd(1,9);
  NotNULLd(1,5);
  NotNULLd(1,11);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_1,Egetd(1,3),Egetd(1,9)),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_1,Egetd(1,5),Egetd(1,11)),(ATerm)ATmakeAppl0(c_0))));
  Return();
  o_47 :
  Epopd(1,13);
  Return();
  l_47 :
  Epopd(0,3);
  Return();
  h_47 :
ENDPROC

PROC(_stratego_k_27)
  _ST_is_int();
ENDPROC

PROC(_stratego_l_27)
  _ST_is_string();
ENDPROC

PROC(_stratego_m_27)
  Rpush(r_47);
  m_104 :
  Cpush(t_47);
  Epushd(0,3);
  Cpush(v_47);
  Ccall(_stratego_l_27);
  goto u_47;
  v_47 :
  Ccall(_stratego_k_27);
  goto w_47;
  u_47 :
  Cpop();
  w_47 :
  MoveTop(0,1);
  Cpush(j_48);
  Ccall(_stratego_h_27);
  goto i_48;
  j_48 :
  goto k_48;
  i_48 :
  Cpop();
  k_48 :
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(p_48);
  Ccall(_stratego_f_27);
  goto o_48;
  p_48 :
  Tset((ATerm)ATmakeAppl0(b_0));
  goto q_48;
  o_48 :
  Cpop();
  q_48 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,3),(ATerm)ATmakeAppl0(c_0))));
  Epopd(0,3);
  goto s_47;
  t_47 :
  Epushd(0,13);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto j_101;
  j_101 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_101;
  k_101 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto l_101;
  l_101 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(g_49);
  goto r_104;
  g_49 :
  goto a_49;
  r_104 :
  Move(0,2,1,2);
  Move(0,3,1,4);
  Return();
  a_49 :
  Epopd(1,5);
  Tpop();
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(h_49);
  s_104 :
  Cpush(k_49);
  Ccall(_stratego_h_28);
  goto j_49;
  k_49 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Rpush(m_49);
  goto m_104;
  m_49 :
  OneNextSon();
  Rpush(n_49);
  goto s_104;
  n_49 :
  AllBuild();
  goto l_49;
  j_49 :
  Cpop();
  l_49 :
  Return();
  h_49 :
  Ccall(_stratego_j_27);
  MoveTop(1,1);
  goto v_101;
  v_101 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_101;
  w_101 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto x_101;
  x_101 :
  TestFunFC(c_0,&&fail,Egetd(1,5));
  Rpush(p_49);
  goto t_104;
  p_49 :
  goto o_49;
  t_104 :
  Epushd(2,8);
  Move(0,5,1,2);
  Move(0,4,1,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,5),(ATerm)ATmakeAppl0(c_0))));
  _ST_mkterm();
  MoveTop(2,1);
  Cpush(f_50);
  Ccall(_stratego_h_27);
  goto e_50;
  f_50 :
  goto g_50;
  e_50 :
  Cpop();
  g_50 :
  MoveTop(2,2);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Cpush(n_50);
  Ccall(_stratego_f_27);
  goto h_50;
  n_50 :
  Tset((ATerm)ATmakeAppl0(b_0));
  goto o_50;
  h_50 :
  Cpop();
  o_50 :
  MoveTop(2,3);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl2(a_0,Egetd(2,3),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(2,4);
  goto s_101;
  s_101 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto t_101;
  t_101 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto u_101;
  u_101 :
  TestFunFC(c_0,&&fail,Egetd(2,8));
  Rpush(w_50);
  goto y_104;
  w_50 :
  goto q_50;
  y_104 :
  Move(0,6,2,5);
  Move(0,7,2,7);
  Return();
  q_50 :
  Epopd(2,8);
  Return();
  o_49 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_i_27);
  MoveTop(0,8);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,7),(ATerm)ATmakeAppl2(a_0,Egetd(0,8),(ATerm)ATmakeAppl0(c_0))));
  MoveTop(0,9);
  goto f_102;
  f_102 :
  TestFunFC(a_0,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,11,0,9,1);
  goto g_102;
  g_102 :
  TestFunFC(a_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto h_102;
  h_102 :
  TestFunFC(c_0,&&fail,Egetd(0,13));
  Rpush(a_51);
  goto a_105;
  a_51 :
  goto x_50;
  a_105 :
  Epushd(1,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(i_51);
  b_105 :
  Cpush(k_51);
  Ccall(_stratego_h_28);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  goto j_51;
  k_51 :
  Ccontinue(m_51);
  Epushd(2,3);
  MoveTop(2,1);
  goto d_102;
  d_102 :
  TestFunFC(a_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_51);
  goto c_105;
  o_51 :
  goto n_51;
  c_105 :
  Tdupl();
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Rpush(q_51);
  d_105 :
  Cpush(x_51);
  Epushd(3,3);
  MoveTop(3,1);
  goto c_102;
  c_102 :
  TestFunFC(a_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(z_51);
  goto e_105;
  z_51 :
  goto y_51;
  e_105 :
  Move(2,2,3,2);
  Return();
  y_51 :
  Epopd(3,3);
  goto r_51;
  x_51 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_52);
  goto d_105;
  c_52 :
  AllBuild();
  goto a_52;
  r_51 :
  Cpop();
  a_52 :
  Return();
  q_51 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(h_52);
  goto b_105;
  h_52 :
  Return();
  n_51 :
  Epopd(2,3);
  goto j_51;
  m_51 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_52);
  goto b_105;
  l_52 :
  AllBuild();
  goto k_52;
  j_51 :
  Cpop();
  k_52 :
  Return();
  i_51 :
  MoveTop(1,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,6),(ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl0(c_0))));
  Epopd(1,1);
  Return();
  x_50 :
  Epopd(0,13);
  goto v_48;
  s_47 :
  Cpop();
  v_48 :
  Return();
  r_47 :
ENDPROC

PROC(_stratego_n_27)
  _ST_plus();
ENDPROC

PROC(_stratego_o_27)
  Epushd(0,7);
  MoveTop(0,4);
  goto d_106;
  d_106 :
  TestFunFC(x_11,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,7,0,4,1);
  goto e_106;
  e_106 :
  TestFunFC(z_13,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto f_106;
  f_106 :
  TestFunFC(x_12,&&u_52,Egetd(0,7));
  MoveArg(0,3,0,7,0);
  MoveArg(0,2,0,7,1);
  Cpush(x_52);
  Rpush(g_53);
  goto f_108;
  g_53 :
  goto v_52;
  x_52 :
  Rpush(i_53);
  goto i_108;
  i_53 :
  goto h_53;
  v_52 :
  Cpop();
  h_53 :
  goto o_52;
  u_52 :
  TestFunFC(x_11,&&m_53,Egetd(0,7));
  MoveArg(0,3,0,7,0);
  MoveArg(0,2,0,7,1);
  goto g_106;
  g_106 :
  TestFunFC(a_6,&&n_53,Egetd(0,3));
  MoveArg(0,1,0,3,0);
  Cpush(t_53);
  Rpush(u_53);
  goto g_108;
  u_53 :
  goto p_53;
  t_53 :
  Rpush(f_54);
  goto i_108;
  f_54 :
  goto d_54;
  p_53 :
  Cpop();
  d_54 :
  goto o_52;
  n_53 :
  Rpush(o_52);
  goto i_108;
  m_53 :
  TestFunFC(g_54,&&p_52,Egetd(0,7));
  MoveArg(0,3,0,7,0);
  Cpush(i_54);
  Rpush(j_54);
  goto h_108;
  j_54 :
  goto h_54;
  i_54 :
  Rpush(l_54);
  goto i_108;
  l_54 :
  goto k_54;
  h_54 :
  Cpop();
  k_54 :
  goto o_52;
  p_52 :
  Rpush(o_52);
  goto i_108;
  o_52 :
  goto n_52;
  f_108 :
  NotNULLd(0,3);
  NotNULLd(0,6);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(x_11,(ATerm)ATmakeAppl1(z_13,Egetd(0,6)),(ATerm)ATmakeAppl2(x_12,Egetd(0,3),(ATerm)ATmakeAppl2(x_11,(ATerm)ATmakeAppl1(z_13,Egetd(0,6)),Egetd(0,2)))));
  Return();
  g_108 :
  NotNULLd(0,1);
  NotNULLd(0,6);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(x_11,(ATerm)ATmakeAppl1(a_6,Egetd(0,1)),(ATerm)ATmakeAppl2(x_11,(ATerm)ATmakeAppl1(z_13,Egetd(0,6)),Egetd(0,2))));
  Return();
  h_108 :
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(x_11,(ATerm)ATmakeAppl1(z_13,Egetd(0,6)),(ATerm)ATmakeAppl0(y_11)));
  Return();
  i_108 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(a_0,MakeInt(0),(ATerm)ATmakeAppl2(a_0,Egetd(0,7),(ATerm)ATmakeAppl0(c_0))));
  Rpush(m_54);
  k_108 :
  Epushd(3,7);
  MoveTop(3,1);
  goto x_105;
  x_105 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto y_105;
  y_105 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,7,3,3,1);
  goto z_105;
  z_105 :
  TestFunFC(b_0,&&p_54,Egetd(3,4));
  goto a_106;
  a_106 :
  TestFunFC(c_0,&&fail,Egetd(3,7));
  Rpush(o_54);
  goto l_108;
  p_54 :
  TestFunFC(a_1,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto b_106;
  b_106 :
  TestFunFC(c_0,&&fail,Egetd(3,7));
  Rpush(o_54);
  goto m_108;
  o_54 :
  goto n_54;
  l_108 :
  Tset((ATerm)ATmakeAppl0(b_0));
  Return();
  m_108 :
  Epushd(4,6);
  NotNULLd(3,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(3,2),(ATerm)ATmakeAppl2(a_0,MakeInt(1),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_n_27);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(3,5);
  NotNULLd(4,1);
  NotNULLd(3,6);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(3,2),(ATerm)ATmakeAppl2(a_0,Egetd(3,5),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(4,1),(ATerm)ATmakeAppl2(a_0,Egetd(3,6),(ATerm)ATmakeAppl0(c_0))),(ATerm)ATmakeAppl0(c_0))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(5,5);
  MoveTop(5,1);
  goto q_105;
  q_105 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto r_105;
  r_105 :
  TestFunFC(a_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto s_105;
  s_105 :
  TestFunFC(c_0,&&fail,Egetd(5,5));
  Rpush(v_54);
  goto o_108;
  v_54 :
  goto s_54;
  o_108 :
  Epushd(6,1);
  Tdupl();
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Move(6,1,0,6);
  Tpop();
  NotNULLd(5,2);
  NotNULLd(6,1);
  NotNULLd(5,4);
  Tset((ATerm)ATmakeAppl2(x_11,(ATerm)ATmakeAppl1(z_13,(ATerm)ATmakeAppl2(a_1,Egetd(5,2),Egetd(6,1))),Egetd(5,4)));
  Epopd(6,1);
  Return();
  s_54 :
  Epopd(5,5);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(w_54);
  goto k_108;
  w_54 :
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  MoveTop(4,2);
  goto u_105;
  u_105 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto v_105;
  v_105 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto w_105;
  w_105 :
  TestFunFC(c_0,&&fail,Egetd(4,6));
  Rpush(z_54);
  goto q_108;
  z_54 :
  goto r_54;
  q_108 :
  NotNULLd(4,3);
  NotNULLd(4,5);
  Tset((ATerm)ATmakeAppl2(a_1,Egetd(4,3),Egetd(4,5)));
  Return();
  r_54 :
  Epopd(4,6);
  Return();
  n_54 :
  Epopd(3,7);
  Return();
  m_54 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  n_52 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_p_27)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(x_11,(ATerm)ATmakeAppl1(z_13,(ATerm)ATmakeAppl0(b_0)),(ATerm)ATmakeAppl2(a_1,Egetd(0,1),(ATerm)ATmakeAppl0(b_0))));
  Rpush(a_55);
  k_109 :
  Cpush(f_55);
  Ccall(_stratego_o_27);
  goto d_55;
  f_55 :
  goto h_55;
  d_55 :
  Cpop();
  h_55 :
  AllInit();
  i_55 :
  AllNextSon(&&j_55);
  Rpush(n_55);
  goto k_109;
  n_55 :
  goto i_55;
  j_55 :
  AllBuild();
  Return();
  a_55 :
  Ccall(_stratego_m_27);
  MoveTop(0,2);
  goto v_108;
  v_108 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto w_108;
  w_108 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto x_108;
  x_108 :
  TestFunFC(c_0,&&fail,Egetd(0,6));
  Rpush(t_55);
  goto l_109;
  t_55 :
  goto r_55;
  l_109 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_e_27);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(w_18,Egetd(1,1),(ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl2(h_19,Egetd(0,3),(ATerm)ATmakeAppl1(a_56,Egetd(0,5))),(ATerm)ATmakeAppl0(b_0))));
  Epopd(1,1);
  Return();
  r_55 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_q_27)
  Rpush(q_56);
  x_109 :
  Cpush(s_56);
  r_56 :
  Cpush(d_57);
  Epushd(0,2);
  MoveTop(0,1);
  goto o_109;
  o_109 :
  TestFunFC(r_23,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(o_57);
  goto z_109;
  o_57 :
  goto e_57;
  z_109 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_p_27);
  Return();
  e_57 :
  Epopd(0,2);
  goto c_57;
  d_57 :
  Ccontinue(p_57);
  Ccall(_stratego_d_27);
  goto c_57;
  p_57 :
  Ccall(_stratego_c_27);
  goto q_57;
  c_57 :
  Cpop();
  q_57 :
  Tduplinv();
  goto r_56;
  s_56 :
  AllInit();
  r_57 :
  AllNextSon(&&w_57);
  Rpush(x_57);
  goto x_109;
  x_57 :
  goto r_57;
  w_57 :
  AllBuild();
  Cpush(e_58);
  d_58 :
  Cpush(m_58);
  Epushd(0,2);
  MoveTop(0,1);
  goto q_109;
  q_109 :
  TestFunFC(r_23,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(b_59);
  goto b_110;
  b_59 :
  goto t_58;
  b_110 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_p_27);
  Return();
  t_58 :
  Epopd(0,2);
  goto i_58;
  m_58 :
  Ccontinue(c_59);
  Ccall(_stratego_d_27);
  goto i_58;
  c_59 :
  Ccall(_stratego_c_27);
  goto e_59;
  i_58 :
  Cpop();
  e_59 :
  Tduplinv();
  goto d_58;
  e_58 :
  Return();
  q_56 :
ENDPROC

PROC(_stratego_r_27)
  Ccall(_stratego_q_27);
  Ccall(_stratego_x_26);
  Ccall(_stratego_n_25);
ENDPROC

PROC(_stratego_s_27)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_110;
  d_110 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  Rpush(j_59);
  goto f_110;
  j_59 :
  goto i_59;
  f_110 :
  Return();
  i_59 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_27)
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(q_59),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_1,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(b_0)),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_c_28);
  Tset(MakeInt(1));
  Ccall(_stratego_b_28);
ENDPROC

PROC(_stratego_u_27)
  Epushd(0,2);
  Tdupl();
  Cpush(e_60);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(n_60);
  Tdupl();
  Rpush(o_60);
  c_111 :
  Cpush(t_60);
  Epushd(1,3);
  MoveTop(1,1);
  goto h_110;
  h_110 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_110;
  i_110 :
  TestFunFC(x_60,&&fail,Egetd(1,2));
  Rpush(w_60);
  goto d_111;
  w_60 :
  goto v_60;
  d_111 :
  Return();
  v_60 :
  Epopd(1,3);
  goto r_60;
  t_60 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_61);
  goto c_111;
  e_61 :
  AllBuild();
  goto z_60;
  r_60 :
  Cpop();
  z_60 :
  Return();
  o_60 :
  Cpop();
  Crestore();
  Cjump();
  n_60 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(f_61);
  e_111 :
  Cpush(m_61);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_110;
  k_110 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_110;
  l_110 :
  TestFunFC(u_61,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_61);
  goto f_111;
  s_61 :
  goto q_61;
  f_111 :
  Move(0,2,1,3);
  Return();
  q_61 :
  Epopd(1,4);
  goto l_61;
  m_61 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_62);
  goto e_111;
  c_62 :
  AllBuild();
  goto b_62;
  l_61 :
  Cpop();
  b_62 :
  Return();
  f_61 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(f_62);
  g_111 :
  Cpush(l_62);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_110;
  n_110 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_110;
  o_110 :
  TestFunFC(r_62,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_62);
  goto h_111;
  o_62 :
  goto m_62;
  h_111 :
  Move(0,1,1,3);
  Return();
  m_62 :
  Epopd(1,4);
  goto g_62;
  l_62 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_62);
  goto g_111;
  t_62 :
  AllBuild();
  goto s_62;
  g_62 :
  Cpop();
  s_62 :
  Return();
  f_62 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(q_59),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_1,Egetd(0,1),(ATerm)ATmakeAppl2(a_1,ATmakeString(" ("),(ATerm)ATmakeAppl2(a_1,Egetd(0,2),(ATerm)ATmakeAppl2(a_1,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(b_0))))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_c_28);
  goto r_59;
  e_60 :
  goto u_62;
  r_59 :
  Cpop();
  u_62 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_b_28);
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_27)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_w_27)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_x_27)
  Epushd(0,1);
  Tdupl();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(w_62);
  Rpush(l_63);
  h_112 :
  Cpush(o_63);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_111;
  j_111 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_111;
  k_111 :
  TestFunFC(s_63,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_63);
  goto i_112;
  r_63 :
  goto q_63;
  i_112 :
  Move(0,1,1,3);
  Return();
  q_63 :
  Epopd(1,4);
  goto m_63;
  o_63 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_63);
  goto h_112;
  x_63 :
  AllBuild();
  goto w_63;
  m_63 :
  Cpop();
  w_63 :
  Return();
  l_63 :
  goto v_62;
  w_62 :
  Tset((ATerm)ATmakeAppl0(d_64));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(d_64));
  MoveTop(0,1);
  Tpop();
  goto y_63;
  v_62 :
  Cpop();
  y_63 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_27);
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
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  Cpush(h_64);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(l_64);
  n_112 :
  Cpush(n_64);
  Epushd(1,3);
  MoveTop(1,1);
  goto q_111;
  q_111 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_111;
  r_111 :
  TestFunFC(q_64,&&fail,Egetd(1,2));
  Rpush(p_64);
  goto o_112;
  p_64 :
  goto o_64;
  o_112 :
  Return();
  o_64 :
  Epopd(1,3);
  goto m_64;
  n_64 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_64);
  goto n_112;
  s_64 :
  AllBuild();
  goto r_64;
  m_64 :
  Cpop();
  r_64 :
  Return();
  l_64 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_w_27);
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  goto e_64;
  h_64 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_27);
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  goto w_64;
  e_64 :
  Cpop();
  w_64 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_27)
  _ST_dtime();
ENDPROC

PROC(_stratego_z_27)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_a_28)
  Epushd(0,3);
  Tdupl();
  Cpush(z_64);
  Rpush(a_65);
  i_113 :
  Cpush(e_65);
  Epushd(1,4);
  MoveTop(1,1);
  goto q_112;
  q_112 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto r_112;
  r_112 :
  TestFunFC(h_65,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_65);
  goto j_113;
  g_65 :
  goto f_65;
  j_113 :
  Move(0,1,1,3);
  Return();
  f_65 :
  Epopd(1,4);
  goto d_65;
  e_65 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_65);
  goto i_113;
  j_65 :
  AllBuild();
  goto i_65;
  d_65 :
  Cpop();
  i_65 :
  Return();
  a_65 :
  goto x_64;
  z_64 :
  Tset((ATerm)ATmakeAppl0(l_65));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(l_65));
  MoveTop(0,1);
  Tpop();
  goto k_65;
  x_64 :
  Cpop();
  k_65 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_z_27);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,3),(ATerm)ATmakeAppl0(c_0))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_b_28)
  _ST_exit();
ENDPROC

PROC(_stratego_c_28)
  _ST_printnl();
ENDPROC

PROC(_stratego_d_28)
  Epushd(0,1);
  Tdupl();
  Rpush(p_65);
  w_113 :
  Cpush(a_66);
  Epushd(1,4);
  MoveTop(1,1);
  goto p_113;
  p_113 :
  TestFunFC(a_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto q_113;
  q_113 :
  TestFunFC(r_62,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_66);
  goto x_113;
  d_66 :
  goto b_66;
  x_113 :
  Move(0,1,1,3);
  Return();
  b_66 :
  Epopd(1,4);
  goto y_65;
  a_66 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_66);
  goto w_113;
  l_66 :
  AllBuild();
  goto j_66;
  y_65 :
  Cpop();
  j_66 :
  Return();
  p_65 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(q_59),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_1,ATmakeString("usage : "),(ATerm)ATmakeAppl2(a_1,Egetd(0,1),(ATerm)ATmakeAppl2(a_1,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(b_0)))),(ATerm)ATmakeAppl0(c_0))));
  Ccall(_stratego_c_28);
  Tset(MakeInt(1));
  Ccall(_stratego_b_28);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_28)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_113;
  z_113 :
  TestFunFC(t_66,&&fail,Egetd(0,1));
  Rpush(r_66);
  goto b_114;
  r_66 :
  goto q_66;
  b_114 :
  Return();
  q_66 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_28)
  Rpush(b_67);
  g_114 :
  Cpush(d_67);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Cpush(g_67);
  Ccall(_stratego_e_28);
  goto e_67;
  g_67 :
  Epushd(0,2);
  MoveTop(0,1);
  goto d_114;
  d_114 :
  TestFunFC(j_68,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(i_68);
  goto h_114;
  i_68 :
  goto y_67;
  h_114 :
  Return();
  y_67 :
  Epopd(0,2);
  goto x_67;
  e_67 :
  Cpop();
  x_67 :
  OneNextSon();
  AllBuild();
  goto c_67;
  d_67 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_68);
  goto g_114;
  q_68 :
  AllBuild();
  goto p_68;
  c_67 :
  Cpop();
  p_68 :
  Return();
  b_67 :
  Ccall(_stratego_d_28);
ENDPROC

PROC(_stratego_g_28)
  Epushd(0,5);
  MoveTop(0,3);
  goto v_116;
  v_116 :
  TestFunFC(a_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto w_116;
  w_116 :
  TestFunFC(a_1,&&a_69,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(d_69);
  Rpush(e_69);
  goto o_120;
  e_69 :
  goto c_69;
  d_69 :
  Ccontinue(f_69);
  Rpush(g_69);
  goto p_120;
  g_69 :
  goto c_69;
  f_69 :
  Ccontinue(i_69);
  Rpush(j_69);
  goto q_120;
  j_69 :
  goto c_69;
  i_69 :
  Ccontinue(k_69);
  Rpush(l_69);
  goto r_120;
  l_69 :
  goto c_69;
  k_69 :
  Ccontinue(m_69);
  Rpush(o_69);
  goto s_120;
  o_69 :
  goto c_69;
  m_69 :
  Ccontinue(z_69);
  Rpush(h_70);
  goto t_120;
  h_70 :
  goto c_69;
  z_69 :
  Ccontinue(i_70);
  Rpush(o_70);
  goto u_120;
  o_70 :
  goto c_69;
  i_70 :
  Ccontinue(p_70);
  Rpush(t_70);
  goto v_120;
  t_70 :
  goto c_69;
  p_70 :
  Ccontinue(u_70);
  Rpush(k_71);
  goto w_120;
  k_71 :
  goto c_69;
  u_70 :
  Ccontinue(l_71);
  Rpush(m_71);
  goto x_120;
  m_71 :
  goto c_69;
  l_71 :
  Ccontinue(n_71);
  Rpush(a_72);
  goto y_120;
  a_72 :
  goto c_69;
  n_71 :
  Ccontinue(d_72);
  Rpush(e_72);
  goto z_120;
  e_72 :
  goto c_69;
  d_72 :
  Ccontinue(f_72);
  Rpush(g_72);
  goto a_121;
  g_72 :
  goto c_69;
  f_72 :
  Ccontinue(h_72);
  Rpush(i_72);
  goto b_121;
  i_72 :
  goto c_69;
  h_72 :
  Rpush(a_73);
  goto c_121;
  a_73 :
  goto z_72;
  c_69 :
  Cpop();
  z_72 :
  goto w_68;
  a_69 :
  Cpush(c_73);
  Rpush(d_73);
  goto o_120;
  d_73 :
  goto b_73;
  c_73 :
  Ccontinue(e_73);
  Rpush(f_73);
  goto p_120;
  f_73 :
  goto b_73;
  e_73 :
  Ccontinue(g_73);
  Rpush(n_73);
  goto q_120;
  n_73 :
  goto b_73;
  g_73 :
  Ccontinue(o_73);
  Rpush(p_73);
  goto r_120;
  p_73 :
  goto b_73;
  o_73 :
  Ccontinue(z_73);
  Rpush(a_74);
  goto s_120;
  a_74 :
  goto b_73;
  z_73 :
  Ccontinue(b_74);
  Rpush(c_74);
  goto y_120;
  c_74 :
  goto b_73;
  b_74 :
  Ccontinue(d_74);
  Rpush(e_74);
  goto z_120;
  e_74 :
  goto b_73;
  d_74 :
  Ccontinue(f_74);
  Rpush(g_74);
  goto a_121;
  g_74 :
  goto b_73;
  f_74 :
  Ccontinue(h_74);
  Rpush(l_74);
  goto b_121;
  l_74 :
  goto b_73;
  h_74 :
  Rpush(n_74);
  goto c_121;
  n_74 :
  goto m_74;
  b_73 :
  Cpop();
  m_74 :
  goto w_68;
  w_68 :
  goto t_68;
  o_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_114;
  y_114 :
  TestStr(1,1,"-S",&&fail);
  Rpush(p_74);
  goto d_121;
  p_74 :
  goto o_74;
  d_121 :
  Return();
  o_74 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_60));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl0(x_60),Egetd(0,5)));
  Return();
  p_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_115;
  b_115 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(r_74);
  goto f_121;
  r_74 :
  goto q_74;
  f_121 :
  Return();
  q_74 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_60));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl0(x_60),Egetd(0,5)));
  Return();
  q_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_115;
  e_115 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(t_74);
  goto h_121;
  t_74 :
  goto s_74;
  h_121 :
  Return();
  s_74 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(u_74));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl0(u_74),Egetd(0,5)));
  Return();
  r_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_115;
  h_115 :
  TestStr(1,1,"-v",&&fail);
  Rpush(w_74);
  goto j_121;
  w_74 :
  goto v_74;
  j_121 :
  Return();
  v_74 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_74));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl0(x_74),Egetd(0,5)));
  Return();
  s_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_115;
  k_115 :
  TestStr(1,1,"--version",&&fail);
  Rpush(z_74);
  goto l_121;
  z_74 :
  goto y_74;
  l_121 :
  Return();
  y_74 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(x_74));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl0(x_74),Egetd(0,5)));
  Return();
  t_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_115;
  n_115 :
  TestStr(1,1,"@version",&&fail);
  Rpush(w_75);
  goto n_121;
  w_75 :
  goto v_75;
  n_121 :
  Return();
  v_75 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(x_75,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl1(x_75,Egetd(0,1)),Egetd(0,2)));
  Return();
  u_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_115;
  r_115 :
  TestStr(1,1,"-i",&&fail);
  Rpush(z_75);
  goto q_121;
  z_75 :
  goto y_75;
  q_121 :
  Return();
  y_75 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(h_65,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl1(h_65,Egetd(0,1)),Egetd(0,2)));
  Return();
  v_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_115;
  v_115 :
  TestStr(1,1,"--input",&&fail);
  Rpush(e_76);
  goto t_121;
  e_76 :
  goto a_76;
  t_121 :
  Return();
  a_76 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(h_65,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl1(h_65,Egetd(0,1)),Egetd(0,2)));
  Return();
  w_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_115;
  z_115 :
  TestStr(1,1,"-o",&&fail);
  Rpush(g_76);
  goto w_121;
  g_76 :
  goto f_76;
  w_121 :
  Return();
  f_76 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(s_63,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl1(s_63,Egetd(0,1)),Egetd(0,2)));
  Return();
  x_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_116;
  d_116 :
  TestStr(1,1,"--output",&&fail);
  Rpush(y_76);
  goto z_121;
  y_76 :
  goto h_76;
  z_121 :
  Return();
  h_76 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(s_63,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl1(s_63,Egetd(0,1)),Egetd(0,2)));
  Return();
  y_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_116;
  h_116 :
  TestStr(1,1,"-b",&&fail);
  Rpush(a_77);
  goto c_122;
  a_77 :
  goto z_76;
  c_122 :
  Return();
  z_76 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(q_64));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl0(q_64),Egetd(0,5)));
  Return();
  z_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_116;
  k_116 :
  TestStr(1,1,"-s",&&fail);
  Rpush(c_77);
  goto e_122;
  c_77 :
  goto b_77;
  e_122 :
  Return();
  b_77 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(d_77));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl0(d_77),Egetd(0,5)));
  Return();
  a_121 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_116;
  n_116 :
  TestStr(1,1,"--help",&&fail);
  Rpush(f_77);
  goto g_122;
  f_77 :
  goto e_77;
  g_122 :
  Return();
  e_77 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_66));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl0(t_66),Egetd(0,5)));
  Return();
  b_121 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_116;
  q_116 :
  TestStr(1,1,"-h",&&fail);
  Rpush(h_77);
  goto i_122;
  h_77 :
  goto g_77;
  i_122 :
  Return();
  g_77 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_66));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl0(t_66),Egetd(0,5)));
  Return();
  c_121 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_116;
  t_116 :
  TestStr(1,1,"-?",&&fail);
  Rpush(y_77);
  goto k_122;
  y_77 :
  goto x_77;
  k_122 :
  Return();
  x_77 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_66));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl0(t_66),Egetd(0,5)));
  Return();
  t_68 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_28)
  Epushd(0,1);
  MoveTop(0,1);
  goto n_122;
  n_122 :
  TestFunFC(b_0,&&fail,Egetd(0,1));
  Rpush(a_78);
  goto p_122;
  a_78 :
  goto z_77;
  p_122 :
  Return();
  z_77 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_28)
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(r_62,Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(b_78);
  p_123 :
  Cpush(s_78);
  Cpush(v_78);
  Ccall(_stratego_h_28);
  goto u_78;
  v_78 :
  Ccall(_stratego_g_28);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_78);
  goto p_123;
  x_78 :
  AllBuild();
  goto w_78;
  u_78 :
  Cpop();
  w_78 :
  goto m_78;
  s_78 :
  Epushd(0,3);
  MoveTop(0,1);
  goto s_122;
  s_122 :
  TestFunFC(a_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(a_79);
  goto q_123;
  a_79 :
  goto z_78;
  q_123 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl1(j_68,Egetd(0,2)),Egetd(0,3)));
  Return();
  z_78 :
  Epopd(0,3);
  goto y_78;
  m_78 :
  Cpop();
  y_78 :
  Return();
  b_78 :
  AllBuild();
  Cpush(c_79);
  Ccall(_stratego_f_28);
  goto b_79;
  c_79 :
  Ccontinue(e_79);
  Epushd(0,6);
  Ccall(_stratego_a_28);
  Tdupl();
  Ccall(_stratego_y_27);
  Tpop();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(f_79);
  r_123 :
  Cpush(h_79);
  Ccall(_stratego_h_28);
  goto g_79;
  h_79 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  TestFunTop(u_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_r_27);
  AllBuild();
  OneNextSon();
  Rpush(l_79);
  goto r_123;
  l_79 :
  AllBuild();
  goto k_79;
  g_79 :
  Cpop();
  k_79 :
  Return();
  f_79 :
  OneNextSon();
  Ccall(_stratego_s_27);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_y_27);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto v_122;
  v_122 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto w_122;
  w_122 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto x_122;
  x_122 :
  TestFunFC(c_0,&&fail,Egetd(0,6));
  Rpush(t_79);
  goto t_123;
  t_79 :
  goto m_79;
  t_123 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_1,(ATerm)ATmakeAppl1(u_61,Egetd(0,1)),Egetd(0,3)),(ATerm)ATmakeAppl2(a_0,Egetd(0,5),(ATerm)ATmakeAppl0(c_0))));
  Return();
  m_79 :
  Ccall(_stratego_x_27);
  Ccall(_stratego_u_27);
  Epopd(0,6);
  goto b_79;
  e_79 :
  Ccall(_stratego_t_27);
  goto u_79;
  b_79 :
  Cpop();
  u_79 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_i_28);
ENDPROC

DOIT

