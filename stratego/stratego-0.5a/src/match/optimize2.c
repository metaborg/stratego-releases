#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,r_53);
VARDECL(AFun,w_52);
VARDECL(AFun,h_50);
VARDECL(AFun,c_48);
VARDECL(AFun,z_46);
VARDECL(AFun,s_44);
VARDECL(AFun,e_43);
VARDECL(AFun,t_42);
VARDECL(AFun,l_37);
VARDECL(AFun,h_37);
VARDECL(AFun,q_36);
VARDECL(AFun,p_36);
VARDECL(AFun,m_35);
VARDECL(AFun,q_34);
VARDECL(AFun,c_32);
VARDECL(AFun,v_31);
VARDECL(AFun,s_31);
VARDECL(AFun,s_29);
VARDECL(AFun,e_26);
VARDECL(AFun,k_25);
VARDECL(AFun,k_24);
VARDECL(AFun,e_24);
VARDECL(AFun,b_24);
VARDECL(AFun,j_23);
VARDECL(AFun,h_19);
VARDECL(AFun,f_19);
VARDECL(AFun,y_18);
VARDECL(AFun,u_18);
VARDECL(AFun,e_18);
VARDECL(AFun,t_17);
VARDECL(AFun,v_16);
VARDECL(AFun,q_16);
VARDECL(AFun,j_16);
VARDECL(AFun,e_16);
VARDECL(AFun,o_15);
VARDECL(AFun,d_15);
VARDECL(AFun,z_14);
VARDECL(AFun,n_9);
VARDECL(AFun,k_9);
VARDECL(AFun,j_9);
VARDECL(AFun,p_5);
VARDECL(AFun,z_2);
VARDECL(AFun,z_0);
VARDECL(AFun,s_0);
VARDECL(AFun,r_0);
VARDECL(AFun,m_0);
VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
VARDECL(AFun,e_0);
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
  MOVE(r_53,ATmakeAFun("Undefined",1,0));
  MOVE(w_52,ATmakeAFun("Help",0,0));
  MOVE(h_50,ATmakeAFun("Input",1,0));
  MOVE(c_48,ATmakeAFun("Binary",0,0));
  MOVE(z_46,ATmakeAFun("Output",1,0));
  MOVE(s_44,ATmakeAFun("Program",1,0));
  MOVE(e_43,ATmakeAFun("Runtime",1,0));
  MOVE(t_42,ATmakeAFun("Silent",0,0));
  MOVE(l_37,ATmakeAFun("Matrix",2,0));
  MOVE(h_37,ATmakeAFun("Case",4,0));
  MOVE(q_36,ATmakeAFun("SVar",1,0));
  MOVE(p_36,ATmakeAFun("Call",2,0));
  MOVE(m_35,ATmakeAFun("SDef",3,0));
  MOVE(q_34,ATmakeAFun("Let",2,0));
  MOVE(c_32,ATmakeAFun("Wld",0,0));
  MOVE(v_31,ATmakeAFun("Match",1,0));
  MOVE(s_31,ATmakeAFun("All",1,0));
  MOVE(s_29,ATmakeAFun("Id",0,0));
  MOVE(e_26,ATmakeAFun("Cong",2,0));
  MOVE(k_25,ATmakeAFun("Path",2,0));
  MOVE(k_24,ATmakeAFun("One",1,0));
  MOVE(e_24,ATmakeAFun("Some",1,0));
  MOVE(b_24,ATmakeAFun("Rec",2,0));
  MOVE(j_23,ATmakeAFun("Fail",0,0));
  MOVE(h_19,ATmakeAFun("Where",1,0));
  MOVE(f_19,ATmakeAFun("Test",1,0));
  MOVE(y_18,ATmakeAFun("Not",1,0));
  MOVE(u_18,ATmakeAFun("LChoice",2,0));
  MOVE(e_18,ATmakeAFun("Choice",2,0));
  MOVE(t_17,ATmakeAFun("BAM",3,0));
  MOVE(v_16,ATmakeAFun("AM",2,0));
  MOVE(q_16,ATmakeAFun("MA",2,0));
  MOVE(j_16,ATmakeAFun("BA",2,0));
  MOVE(e_16,ATmakeAFun("Lets",2,0));
  MOVE(o_15,ATmakeAFun("LChoices",1,0));
  MOVE(d_15,ATmakeAFun("Choices",1,0));
  MOVE(z_14,ATmakeAFun("Seqs",1,0));
  MOVE(n_9,ATmakeAFun("Build",1,0));
  MOVE(k_9,ATmakeAFun("Assign",1,0));
  MOVE(j_9,ATmakeAFun("Assign",2,0));
  MOVE(p_5,ATmakeAFun("Nil",0,0));
  MOVE(z_2,ATmakeAFun("Seq",2,0));
  MOVE(z_0,ATmakeAFun("Cons",2,0));
  MOVE(s_0,ATmakeAFun("TNil",0,0));
  MOVE(r_0,ATmakeAFun("TCons",2,0));
  MOVE(m_0,ATmakeAFun("Var",1,0));
  MOVE(g_0,ATmakeAFun("Rule",3,0));
  MOVE(f_0,ATmakeAFun("LRule",1,0));
  MOVE(e_0,ATmakeAFun("Scope",2,0));
ENDPROC

PROC(_stratego_r_9)
  Epushd(0,6);
  MoveTop(0,2);
  goto c_8;
  c_8 :
  TestFunFC(e_0,&&d_0,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(c_0);
  goto y_7;
  d_0 :
  TestFunFC(f_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto d_8;
  d_8 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(c_0);
  goto z_7;
  c_0 :
  goto b_0;
  z_7 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_s_9);
  Return();
  b_0 :
  goto a_0;
  y_7 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  a_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_s_9)
  Rpush(h_0);
  z_16 :
  Cpush(j_0);
  Epushd(0,2);
  MoveTop(0,1);
  goto b_9;
  b_9 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_0);
  goto a_9;
  l_0 :
  goto k_0;
  a_9 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  k_0 :
  Epopd(0,2);
  goto i_0;
  j_0 :
  Ccontinue(n_0);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_r_9);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(o_0);
  goto z_16;
  o_0 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
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
  goto p_9;
  p_9 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto u_9;
  u_9 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto v_9;
  v_9 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(q_0);
  goto o_9;
  q_0 :
  goto p_0;
  o_9 :
  Move(0,3,1,4);
  Return();
  p_0 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(t_0);
  a_17 :
  Cpush(v_0);
  Ccall(_stratego_n_13);
  Tset(App0("Nil"));
  goto u_0;
  v_0 :
  Epushd(1,3);
  MoveTop(1,1);
  goto b_13;
  b_13 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(y_0);
  goto w_9;
  y_0 :
  goto x_0;
  w_9 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(a_1);
  goto a_17;
  a_1 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto x_11;
  x_11 :
  TestFunFC(r_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto y_11;
  y_11 :
  TestFunFC(r_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto z_11;
  z_11 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(c_1);
  goto n_10;
  c_1 :
  goto b_1;
  n_10 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(d_1);
  b_17 :
  Cpush(f_1);
  Ccall(_stratego_n_13);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto e_1;
  f_1 :
  Ccontinue(g_1);
  Epushd(3,3);
  MoveTop(3,1);
  goto q_11;
  q_11 :
  TestFunFC(z_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(i_1);
  goto n_11;
  i_1 :
  goto h_1;
  n_11 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(j_1);
  c_17 :
  Cpush(l_1);
  Epushd(4,3);
  MoveTop(4,1);
  goto p_11;
  p_11 :
  TestFunFC(z_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(n_1);
  goto o_11;
  n_1 :
  goto m_1;
  o_11 :
  Move(3,2,4,2);
  Return();
  m_1 :
  Epopd(4,3);
  goto k_1;
  l_1 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_1);
  goto c_17;
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
  goto b_17;
  q_1 :
  Return();
  h_1 :
  Epopd(3,3);
  goto e_1;
  g_1 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_1);
  goto b_17;
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
  x_0 :
  Epopd(1,3);
  goto w_0;
  u_0 :
  Cpop();
  w_0 :
  Return();
  t_0 :
  Epopd(0,3);
  goto i_0;
  n_0 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto i_13;
  i_13 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto j_13;
  j_13 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto p_13;
  p_13 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(v_1);
  goto h_13;
  v_1 :
  goto u_1;
  h_13 :
  Move(0,2,1,4);
  Return();
  u_1 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(w_1);
  d_17 :
  Cpush(y_1);
  Ccall(_stratego_n_13);
  Tset(App0("Nil"));
  goto x_1;
  y_1 :
  Epushd(1,3);
  MoveTop(1,1);
  goto b_14;
  b_14 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(b_2);
  goto q_13;
  b_2 :
  goto a_2;
  q_13 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(c_2);
  goto z_16;
  c_2 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(d_2);
  goto d_17;
  d_2 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto y_13;
  y_13 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto z_13;
  z_13 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto a_14;
  a_14 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(f_2);
  goto t_13;
  f_2 :
  goto e_2;
  t_13 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(g_2);
  e_17 :
  Cpush(i_2);
  Ccall(_stratego_n_13);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto h_2;
  i_2 :
  Ccontinue(j_2);
  Epushd(3,3);
  MoveTop(3,1);
  goto x_13;
  x_13 :
  TestFunFC(z_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_2);
  goto u_13;
  l_2 :
  goto k_2;
  u_13 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(m_2);
  f_17 :
  Cpush(o_2);
  Epushd(4,3);
  MoveTop(4,1);
  goto w_13;
  w_13 :
  TestFunFC(z_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(q_2);
  goto v_13;
  q_2 :
  goto p_2;
  v_13 :
  Move(3,2,4,2);
  Return();
  p_2 :
  Epopd(4,3);
  goto n_2;
  o_2 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_2);
  goto f_17;
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
  goto e_17;
  t_2 :
  Return();
  k_2 :
  Epopd(3,3);
  goto h_2;
  j_2 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_2);
  goto e_17;
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
  i_0 :
  Cpop();
  t_1 :
  Return();
  h_0 :
ENDPROC

PROC(_stratego_t_9)
  Epushd(0,7);
  MoveTop(0,3);
  goto i_17;
  i_17 :
  TestFunFC(z_2,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto j_17;
  j_17 :
  TestFunFC(e_0,&&a_3,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto k_17;
  k_17 :
  TestFunFC(e_0,&&b_3,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Cpush(d_3);
  Rpush(e_3);
  goto g_17;
  e_3 :
  goto c_3;
  d_3 :
  Rpush(g_3);
  goto h_17;
  g_3 :
  goto f_3;
  c_3 :
  Cpop();
  f_3 :
  goto y_2;
  b_3 :
  Rpush(y_2);
  goto h_17;
  a_3 :
  goto l_17;
  l_17 :
  TestFunFC(e_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(y_2);
  goto g_17;
  y_2 :
  goto x_2;
  h_17 :
  NotNULLd(0,6);
  NotNULLd(0,4);
  NotNULLd(0,7);
  Tset(App2("Scope",Egetd(0,6),App2("Seq",Egetd(0,4),Egetd(0,7))));
  Return();
  x_2 :
  goto w_2;
  g_17 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(0,1),App2("Seq",Egetd(0,2),Egetd(0,5))));
  Return();
  w_2 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_x_9)
  Rpush(h_3);
  b_20 :
  Cpush(j_3);
  i_3 :
  Cpush(l_3);
  Ccall(_stratego_k_10);
  goto k_3;
  l_3 :
  Ccall(_stratego_t_9);
  goto m_3;
  k_3 :
  Cpop();
  m_3 :
  Tduplinv();
  goto i_3;
  j_3 :
  AllInit();
  n_3 :
  AllNextSon(&&o_3);
  Rpush(p_3);
  goto b_20;
  p_3 :
  goto n_3;
  o_3 :
  AllBuild();
  Cpush(r_3);
  q_3 :
  Cpush(t_3);
  Ccall(_stratego_k_10);
  goto s_3;
  t_3 :
  Ccall(_stratego_t_9);
  goto u_3;
  s_3 :
  Cpop();
  u_3 :
  Tduplinv();
  goto q_3;
  r_3 :
  Return();
  h_3 :
  Rpush(v_3);
  e_20 :
  Cpush(x_3);
  Epushd(0,3);
  MoveTop(0,1);
  goto q_18;
  q_18 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(z_3);
  goto z_17;
  z_3 :
  goto y_3;
  z_17 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_s_9);
  MoveTop(2,1);
  NotNULLd(0,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto f_18;
  f_18 :
  TestFunFC(r_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto g_18;
  g_18 :
  TestFunFC(r_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto h_18;
  h_18 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(b_4);
  goto b_18;
  b_4 :
  goto a_4;
  b_18 :
  Epushd(3,2);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App0("TNil"))));
  Ccall(_stratego_c_10);
  MoveTop(3,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_c_10);
  MoveTop(3,2);
  Move(1,1,3,2);
  Cpush(c_4);
  Tdupl();
  Epushd(4,1);
  MoveTop(4,1);
  Move(0,2,4,1);
  Epopd(4,1);
  Cpop();
  Crestore();
  Cjump();
  c_4 :
  Epopd(3,2);
  Return();
  a_4 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,3);
  Tset(App2("Scope",Egetd(1,1),Egetd(0,3)));
  Cpush(e_4);
  Epushd(2,5);
  MoveTop(2,1);
  goto o_18;
  o_18 :
  TestFunFC(e_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto p_18;
  p_18 :
  TestFunFC(e_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  Rpush(g_4);
  goto i_18;
  g_4 :
  goto f_4;
  i_18 :
  Epushd(3,5);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  MoveTop(3,1);
  goto l_18;
  l_18 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto m_18;
  m_18 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto n_18;
  n_18 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(i_4);
  goto j_18;
  i_4 :
  goto h_4;
  j_18 :
  Epushd(4,1);
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Rpush(j_4);
  f_20 :
  Cpush(l_4);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_4);
  goto f_20;
  m_4 :
  AllBuild();
  goto k_4;
  l_4 :
  Ccall(_stratego_n_13);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  goto n_4;
  k_4 :
  Cpop();
  n_4 :
  Return();
  j_4 :
  MoveTop(4,1);
  NotNULLd(4,1);
  NotNULLd(2,5);
  Tset(App2("Scope",Egetd(4,1),Egetd(2,5)));
  Epopd(4,1);
  Return();
  h_4 :
  Epopd(3,5);
  Return();
  f_4 :
  Epopd(2,5);
  goto d_4;
  e_4 :
  goto o_4;
  d_4 :
  Cpop();
  o_4 :
  Epopd(1,1);
  Return();
  y_3 :
  Epopd(0,3);
  goto w_3;
  x_3 :
  goto p_4;
  w_3 :
  Cpop();
  p_4 :
  AllInit();
  q_4 :
  AllNextSon(&&r_4);
  Rpush(s_4);
  goto e_20;
  s_4 :
  goto q_4;
  r_4 :
  AllBuild();
  Return();
  v_3 :
ENDPROC

PROC(_stratego_y_9)
  Rpush(t_4);
  e_21 :
  Epushd(0,11);
  MoveTop(0,5);
  goto i_20;
  i_20 :
  TestFunFC(r_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto j_20;
  j_20 :
  TestFunFC(r_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto k_20;
  k_20 :
  TestFunFC(z_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto l_20;
  l_20 :
  TestFunFC(s_0,&&fail,Egetd(0,11));
  goto m_20;
  m_20 :
  TestFunFC(r_0,&&x_4,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto n_20;
  n_20 :
  TestFunFC(r_0,&&y_4,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto o_20;
  o_20 :
  TestFunFC(s_0,&&z_4,Egetd(0,4));
  Cpush(b_5);
  Rpush(c_5);
  goto g_20;
  c_5 :
  goto a_5;
  b_5 :
  Rpush(e_5);
  goto h_20;
  e_5 :
  goto d_5;
  a_5 :
  Cpop();
  d_5 :
  goto w_4;
  z_4 :
  Rpush(w_4);
  goto h_20;
  y_4 :
  Rpush(w_4);
  goto h_20;
  x_4 :
  Rpush(w_4);
  goto h_20;
  w_4 :
  goto v_4;
  h_20 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(f_5);
  goto e_21;
  f_5 :
  Return();
  v_4 :
  goto u_4;
  g_20 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  u_4 :
  Epopd(0,11);
  Return();
  t_4 :
ENDPROC

PROC(_stratego_z_9)
  Epushd(0,7);
  MoveTop(0,1);
  goto y_21;
  y_21 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto z_21;
  z_21 :
  TestFunFC(r_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto a_22;
  a_22 :
  TestFunFC(s_0,&&j_5,Egetd(0,5));
  Rpush(i_5);
  goto h_21;
  j_5 :
  TestFunFC(r_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto b_22;
  b_22 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(i_5);
  goto i_21;
  i_5 :
  goto h_5;
  i_21 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(k_5);
  m_23 :
  Epushd(2,9);
  MoveTop(2,1);
  goto p_21;
  p_21 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto q_21;
  q_21 :
  TestFunFC(p_5,&&o_5,Egetd(2,2));
  goto r_21;
  r_21 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto s_21;
  s_21 :
  TestFunFC(p_5,&&fail,Egetd(2,6));
  goto t_21;
  t_21 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(n_5);
  goto j_21;
  o_5 :
  TestFunFC(z_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto u_21;
  u_21 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto v_21;
  v_21 :
  TestFunFC(z_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto w_21;
  w_21 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(n_5);
  goto k_21;
  n_5 :
  goto m_5;
  k_21 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Rpush(r_5);
  goto m_23;
  r_5 :
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto m_21;
  m_21 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto n_21;
  n_21 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto o_21;
  o_21 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(s_5);
  goto l_21;
  s_5 :
  goto q_5;
  l_21 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  q_5 :
  Epopd(3,5);
  Return();
  m_5 :
  goto l_5;
  j_21 :
  Tset(App0("Nil"));
  Return();
  l_5 :
  Epopd(2,9);
  Return();
  k_5 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  h_5 :
  goto g_5;
  h_21 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  g_5 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_a_10)
  Epushd(0,5);
  Ccall(_stratego_z_9);
  MoveTop(0,1);
  goto t_23;
  t_23 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto u_23;
  u_23 :
  TestFunFC(r_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto v_23;
  v_23 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(u_5);
  goto n_23;
  u_5 :
  goto t_5;
  n_23 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(v_5);
  m_24 :
  Cpush(x_5);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto s_23;
  s_23 :
  TestFunFC(m_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(z_5);
  goto p_23;
  z_5 :
  goto y_5;
  p_23 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Move(1,2,2,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  y_5 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_y_9);
  Epopd(1,3);
  goto w_5;
  x_5 :
  AllInit();
  b_6 :
  AllNextSon(&&c_6);
  Rpush(d_6);
  goto m_24;
  d_6 :
  goto b_6;
  c_6 :
  AllBuild();
  goto a_6;
  w_5 :
  Cpop();
  a_6 :
  Return();
  v_5 :
  Return();
  t_5 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_b_10)
  Epushd(0,7);
  MoveTop(0,1);
  goto p_25;
  p_25 :
  TestFunFC(z_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto q_25;
  q_25 :
  TestFunFC(r_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto r_25;
  r_25 :
  TestFunFC(r_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto s_25;
  s_25 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(f_6);
  goto n_24;
  f_6 :
  goto e_6;
  n_24 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto p_24;
  p_24 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto q_24;
  q_24 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_24;
  r_24 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(h_6);
  goto o_24;
  h_6 :
  goto g_6;
  o_24 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  g_6 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto t_24;
  t_24 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto u_24;
  u_24 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_24;
  v_24 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(j_6);
  goto s_24;
  j_6 :
  goto i_6;
  s_24 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  i_6 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(k_6);
  r_28 :
  Epushd(2,9);
  MoveTop(2,1);
  goto c_25;
  c_25 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto d_25;
  d_25 :
  TestFunFC(p_5,&&o_6,Egetd(2,2));
  goto e_25;
  e_25 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto f_25;
  f_25 :
  TestFunFC(p_5,&&fail,Egetd(2,6));
  goto g_25;
  g_25 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(n_6);
  goto w_24;
  o_6 :
  TestFunFC(z_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto h_25;
  h_25 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto i_25;
  i_25 :
  TestFunFC(z_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto j_25;
  j_25 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(n_6);
  goto x_24;
  n_6 :
  goto m_6;
  x_24 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Rpush(q_6);
  goto r_28;
  q_6 :
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto z_24;
  z_24 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto a_25;
  a_25 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto b_25;
  b_25 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(r_6);
  goto y_24;
  r_6 :
  goto p_6;
  y_24 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  p_6 :
  Epopd(3,5);
  Return();
  m_6 :
  goto l_6;
  w_24 :
  Tset(App0("Nil"));
  Return();
  l_6 :
  Epopd(2,9);
  Return();
  k_6 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto m_25;
  m_25 :
  TestFunFC(r_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto n_25;
  n_25 :
  TestFunFC(r_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto o_25;
  o_25 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Rpush(t_6);
  goto l_25;
  t_6 :
  goto s_6;
  l_25 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(u_6);
  s_28 :
  Cpush(w_6);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_6);
  goto s_28;
  x_6 :
  AllBuild();
  goto v_6;
  w_6 :
  Ccall(_stratego_n_13);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto y_6;
  v_6 :
  Cpop();
  y_6 :
  Return();
  u_6 :
  Return();
  s_6 :
  Epopd(1,9);
  Return();
  e_6 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_c_10)
  Epushd(0,5);
  MoveTop(0,5);
  goto j_29;
  j_29 :
  TestFunFC(r_0,&&c_7,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto k_29;
  k_29 :
  TestFunFC(r_0,&&d_7,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto l_29;
  l_29 :
  TestFunFC(s_0,&&e_7,Egetd(0,4));
  Cpush(g_7);
  Rpush(h_7);
  goto t_28;
  h_7 :
  goto f_7;
  g_7 :
  Rpush(j_7);
  goto u_28;
  j_7 :
  goto i_7;
  f_7 :
  Cpop();
  i_7 :
  goto b_7;
  e_7 :
  Rpush(b_7);
  goto u_28;
  d_7 :
  Rpush(b_7);
  goto u_28;
  c_7 :
  Rpush(b_7);
  goto u_28;
  b_7 :
  goto a_7;
  u_28 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(k_7);
  x_30 :
  Cpush(m_7);
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Cpush(o_7);
  Epushd(1,7);
  MoveTop(1,1);
  goto a_29;
  a_29 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto b_29;
  b_29 :
  TestFunFC(r_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto c_29;
  c_29 :
  TestFunFC(r_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto d_29;
  d_29 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  Rpush(q_7);
  goto z_28;
  q_7 :
  goto p_7;
  z_28 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  p_7 :
  Epopd(1,7);
  goto n_7;
  o_7 :
  Ccall(_stratego_b_10);
  goto r_7;
  n_7 :
  Cpop();
  r_7 :
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  goto l_7;
  m_7 :
  Epushd(1,7);
  MoveTop(1,1);
  goto f_29;
  f_29 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_29;
  g_29 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto h_29;
  h_29 :
  TestFunFC(z_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto i_29;
  i_29 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(u_7);
  goto e_29;
  u_7 :
  goto t_7;
  e_29 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  t_7 :
  Epopd(1,7);
  goto s_7;
  l_7 :
  Cpop();
  s_7 :
  Cpush(w_7);
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_13);
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  goto v_7;
  w_7 :
  Rpush(a_8);
  goto x_30;
  a_8 :
  goto x_7;
  v_7 :
  Cpop();
  x_7 :
  Return();
  k_7 :
  Return();
  a_7 :
  goto z_6;
  t_28 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(b_8);
  v_30 :
  Cpush(l_8);
  Ccall(_stratego_n_13);
  goto g_8;
  l_8 :
  Ccontinue(m_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto y_28;
  y_28 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(o_8);
  goto v_28;
  o_8 :
  goto n_8;
  v_28 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(p_8);
  w_30 :
  Cpush(r_8);
  Epushd(2,3);
  MoveTop(2,1);
  goto x_28;
  x_28 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(t_8);
  goto w_28;
  t_8 :
  goto s_8;
  w_28 :
  Move(1,2,2,2);
  Return();
  s_8 :
  Epopd(2,3);
  goto q_8;
  r_8 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_8);
  goto w_30;
  v_8 :
  AllBuild();
  goto u_8;
  q_8 :
  Cpop();
  u_8 :
  Return();
  p_8 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(w_8);
  goto v_30;
  w_8 :
  Return();
  n_8 :
  Epopd(1,3);
  goto g_8;
  m_8 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_8);
  goto v_30;
  y_8 :
  AllBuild();
  goto x_8;
  g_8 :
  Cpop();
  x_8 :
  Return();
  b_8 :
  Return();
  z_6 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_d_10)
  Epushd(0,17);
  MoveTop(0,9);
  goto p_32;
  p_32 :
  TestFunFC(e_0,&&h_9,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto q_32;
  q_32 :
  TestFunFC(z_2,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto r_32;
  r_32 :
  TestFunFC(j_9,&&i_9,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  MoveArg(0,1,0,14,1);
  goto s_32;
  s_32 :
  TestFunFC(m_0,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto t_32;
  t_32 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(g_9);
  goto z_30;
  i_9 :
  TestFunFC(k_9,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto u_32;
  u_32 :
  TestFunFC(m_0,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto v_32;
  v_32 :
  TestFunFC(z_2,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto w_32;
  w_32 :
  TestFunFC(k_9,&&l_9,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto x_32;
  x_32 :
  TestFunFC(m_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_9);
  goto a_31;
  l_9 :
  TestFunFC(j_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto y_32;
  y_32 :
  TestFunFC(m_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto z_32;
  z_32 :
  TestFunFC(m_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  Rpush(g_9);
  goto b_31;
  h_9 :
  TestFunFC(z_2,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto a_33;
  a_33 :
  TestFunFC(n_9,&&m_9,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto b_33;
  b_33 :
  TestFunFC(e_0,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto c_33;
  c_33 :
  TestFunFC(z_2,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto d_33;
  d_33 :
  TestFunFC(k_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto e_33;
  e_33 :
  TestFunFC(m_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(g_9);
  goto y_30;
  m_9 :
  TestFunFC(k_9,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto f_33;
  f_33 :
  TestFunFC(m_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto g_33;
  g_33 :
  TestFunFC(z_2,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto h_33;
  h_33 :
  TestFunFC(n_9,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto i_33;
  i_33 :
  TestFunFC(m_0,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  Rpush(g_9);
  goto c_31;
  g_9 :
  goto f_9;
  c_31 :
  Epushd(1,1);
  Move(0,12,0,16);
  Move(1,1,0,17);
  NotNULLd(0,12);
  NotNULLd(1,1);
  Tset(App2("Seq",App1("Assign",App1("Var",Egetd(0,12))),Egetd(1,1)));
  Epopd(1,1);
  Return();
  f_9 :
  goto e_9;
  b_31 :
  Epushd(1,3);
  Move(0,16,0,7);
  Move(1,1,0,8);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto l_32;
  l_32 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto m_32;
  m_32 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto n_32;
  n_32 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(l_10);
  goto d_32;
  l_10 :
  goto q_9;
  d_32 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(s_10);
  m_10 :
  Cpush(o_10);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto r_10;
  o_10 :
  IsAppl();
  MatchTravInit();
  p_10 :
  OneMatchNextSon();
  Cpush(p_10);
  Rpush(q_10);
  goto m_10;
  q_10 :
  Cpop();
  MatchTravEnd();
  r_10 :
  Return();
  s_10 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(3,1);
  goto i_32;
  i_32 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto j_32;
  j_32 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto k_32;
  k_32 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(u_10);
  goto f_32;
  u_10 :
  goto t_10;
  f_32 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(a_11);
  v_10 :
  Cpush(w_10);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  Cpop();
  goto z_10;
  w_10 :
  IsAppl();
  MatchTravInit();
  x_10 :
  OneMatchNextSon();
  Cpush(x_10);
  Rpush(y_10);
  goto v_10;
  y_10 :
  Cpop();
  MatchTravEnd();
  z_10 :
  Return();
  a_11 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_c_10);
  MoveTop(4,1);
  Move(1,2,4,1);
  Epopd(4,1);
  Return();
  t_10 :
  Epopd(3,5);
  Return();
  q_9 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,16)),App0("Nil")),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_a_10);
  MoveTop(1,3);
  NotNULLd(1,2);
  NotNULLd(0,16);
  NotNULLd(1,3);
  Tset(App2("Scope",Egetd(1,2),App2("Seq",App1("Assign",App1("Var",Egetd(0,16))),Egetd(1,3))));
  Epopd(1,3);
  Return();
  e_9 :
  goto d_9;
  a_31 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto z_31;
  z_31 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto a_32;
  a_32 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto b_32;
  b_32 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(c_11);
  goto r_31;
  c_11 :
  goto b_11;
  r_31 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(i_11);
  d_11 :
  Cpush(e_11);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto h_11;
  e_11 :
  IsAppl();
  MatchTravInit();
  f_11 :
  OneMatchNextSon();
  Cpush(f_11);
  Rpush(g_11);
  goto d_11;
  g_11 :
  Cpop();
  MatchTravEnd();
  h_11 :
  Return();
  i_11 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(3,1);
  goto w_31;
  w_31 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto x_31;
  x_31 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto y_31;
  y_31 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(r_11);
  goto t_31;
  r_11 :
  goto j_11;
  t_31 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(h_12);
  s_11 :
  Cpush(t_11);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  Cpop();
  goto w_11;
  t_11 :
  IsAppl();
  MatchTravInit();
  u_11 :
  OneMatchNextSon();
  Cpush(u_11);
  Rpush(v_11);
  goto s_11;
  v_11 :
  Cpop();
  MatchTravEnd();
  w_11 :
  Return();
  h_12 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_c_10);
  MoveTop(4,1);
  Move(1,1,4,1);
  Epopd(4,1);
  Return();
  j_11 :
  Epopd(3,5);
  Return();
  b_11 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(0,8);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,16)),App0("Nil")),App2("TCons",Egetd(0,8),App0("TNil")))));
  Ccall(_stratego_a_10);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(0,16);
  NotNULLd(1,2);
  Tset(App2("Scope",Egetd(1,1),App2("Seq",App1("Assign",App1("Var",Egetd(0,16))),Egetd(1,2))));
  Epopd(1,2);
  Return();
  d_9 :
  goto c_9;
  z_30 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto n_31;
  n_31 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_31;
  o_31 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_31;
  p_31 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(j_12);
  goto k_31;
  j_12 :
  goto i_12;
  k_31 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(p_12);
  k_12 :
  Cpush(l_12);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto o_12;
  l_12 :
  IsAppl();
  MatchTravInit();
  m_12 :
  OneMatchNextSon();
  Cpush(m_12);
  Rpush(n_12);
  goto k_12;
  n_12 :
  Cpop();
  MatchTravEnd();
  o_12 :
  Return();
  p_12 :
  NotNULLd(0,10);
  NotNULLd(0,16);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,16),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_c_10);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  i_12 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,16);
  NotNULLd(0,2);
  NotNULLd(0,17);
  Tset(App2("TCons",App2("Cons",Egetd(0,16),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,2)),App0("Nil")),App2("TCons",Egetd(0,17),App0("TNil")))));
  Ccall(_stratego_a_10);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Scope",Egetd(1,1),Egetd(1,2)));
  Epopd(1,2);
  Return();
  c_9 :
  goto z_8;
  y_30 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto g_31;
  g_31 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto h_31;
  h_31 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto i_31;
  i_31 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(u_12);
  goto d_31;
  u_12 :
  goto t_12;
  d_31 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(a_13);
  v_12 :
  Cpush(w_12);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto z_12;
  w_12 :
  IsAppl();
  MatchTravInit();
  x_12 :
  OneMatchNextSon();
  Cpush(x_12);
  Rpush(y_12);
  goto v_12;
  y_12 :
  Cpop();
  MatchTravEnd();
  z_12 :
  Return();
  a_13 :
  NotNULLd(0,14);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,14),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_c_10);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  t_12 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,11);
  NotNULLd(0,8);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,11),App0("Nil")),App2("TCons",Egetd(0,8),App0("TNil")))));
  Ccall(_stratego_a_10);
  MoveTop(1,2);
  NotNULLd(0,11);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Seq",App1("Build",Egetd(0,11)),App2("Scope",Egetd(1,1),Egetd(1,2))));
  Epopd(1,2);
  Return();
  z_8 :
  Epopd(0,17);
ENDPROC

PROC(_stratego_e_10)
  Epushd(0,6);
  MoveTop(0,3);
  goto g_38;
  g_38 :
  TestFunFC(z_14,&&y_14,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto h_38;
  h_38 :
  TestFunFC(p_5,&&a_15,Egetd(0,4));
  Rpush(p_14);
  goto u_37;
  a_15 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(p_14);
  goto v_37;
  y_14 :
  TestFunFC(d_15,&&b_15,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto i_38;
  i_38 :
  TestFunFC(p_5,&&j_15,Egetd(0,4));
  Rpush(p_14);
  goto w_37;
  j_15 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(p_14);
  goto x_37;
  b_15 :
  TestFunFC(o_15,&&k_15,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto j_38;
  j_38 :
  TestFunFC(p_5,&&p_15,Egetd(0,4));
  Rpush(p_14);
  goto y_37;
  p_15 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(p_14);
  goto z_37;
  k_15 :
  TestFunFC(e_16,&&v_15,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto k_38;
  k_38 :
  TestFunFC(p_5,&&f_16,Egetd(0,4));
  Rpush(p_14);
  goto a_38;
  f_16 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(p_14);
  goto b_38;
  v_15 :
  TestFunFC(j_16,&&h_16,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(p_14);
  goto c_38;
  h_16 :
  TestFunFC(q_16,&&p_16,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(p_14);
  goto d_38;
  p_16 :
  TestFunFC(v_16,&&u_16,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(p_14);
  goto e_38;
  u_16 :
  TestFunFC(t_17,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(p_14);
  goto f_38;
  p_14 :
  goto m_14;
  f_38 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Seqs",App2("Cons",App1("Build",Egetd(0,5)),App2("Cons",Egetd(0,4),App2("Cons",App1("Match",Egetd(0,6)),App0("Nil"))))));
  Return();
  m_14 :
  goto l_14;
  e_38 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,4),App1("Match",Egetd(0,5))));
  Return();
  l_14 :
  goto k_14;
  d_38 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",App1("Match",Egetd(0,4)),Egetd(0,5)));
  Return();
  k_14 :
  goto i_14;
  c_38 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App2("Seq",App1("Build",Egetd(0,5)),Egetd(0,4)));
  Return();
  i_14 :
  goto e_14;
  b_38 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,1),App2("Lets",Egetd(0,2),Egetd(0,5))));
  Return();
  e_14 :
  goto s_13;
  a_38 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  s_13 :
  goto r_13;
  z_37 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("LChoice",Egetd(0,1),App1("LChoices",Egetd(0,2))));
  Return();
  r_13 :
  goto g_13;
  y_37 :
  Tset(App0("Fail"));
  Return();
  g_13 :
  goto f_13;
  x_37 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Choice",Egetd(0,1),App1("Choices",Egetd(0,2))));
  Return();
  f_13 :
  goto e_13;
  w_37 :
  Tset(App0("Fail"));
  Return();
  e_13 :
  goto d_13;
  v_37 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Seq",Egetd(0,1),App1("Seqs",Egetd(0,2))));
  Return();
  d_13 :
  goto c_13;
  u_37 :
  Tset(App0("Id"));
  Return();
  c_13 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_f_10)
  Epushd(0,9);
  MoveTop(0,2);
  goto q_39;
  q_39 :
  TestFunFC(e_18,&&d_18,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(c_18);
  goto k_39;
  d_18 :
  TestFunFC(u_18,&&k_18,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(c_18);
  goto l_39;
  k_18 :
  TestFunFC(y_18,&&v_18,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto r_39;
  r_39 :
  TestFunFC(y_18,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(c_18);
  goto n_39;
  v_18 :
  TestFunFC(f_19,&&e_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto s_39;
  s_39 :
  TestFunFC(f_19,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(c_18);
  goto o_39;
  e_19 :
  TestFunFC(h_19,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto t_39;
  t_39 :
  TestFunFC(h_19,&&p_19,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(c_18);
  goto m_39;
  p_19 :
  TestFunFC(z_2,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto u_39;
  u_39 :
  TestFunFC(h_19,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto v_39;
  v_39 :
  TestFunFC(z_2,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,9,0,6,1);
  goto w_39;
  w_39 :
  TestFunFC(n_9,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  Rpush(c_18);
  goto p_39;
  c_18 :
  goto a_18;
  p_39 :
  NotNULLd(0,5);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset(App1("Where",App2("Seq",Egetd(0,5),App2("Seq",App1("Build",Egetd(0,8)),Egetd(0,9)))));
  Return();
  a_18 :
  goto y_17;
  o_39 :
  NotNULLd(0,4);
  Tset(App1("Test",Egetd(0,4)));
  Return();
  y_17 :
  goto x_17;
  n_39 :
  NotNULLd(0,4);
  Tset(App1("Test",Egetd(0,4)));
  Return();
  x_17 :
  goto w_17;
  m_39 :
  NotNULLd(0,4);
  Tset(App1("Where",Egetd(0,4)));
  Return();
  w_17 :
  goto v_17;
  l_39 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  v_17 :
  goto u_17;
  k_39 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  u_17 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_g_10)
  Epushd(0,5);
  MoveTop(0,1);
  goto r_40;
  r_40 :
  TestFunFC(e_18,&&a_20,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto s_40;
  s_40 :
  TestFunFC(e_18,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(y_19);
  goto o_40;
  a_20 :
  TestFunFC(z_2,&&a_21,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto t_40;
  t_40 :
  TestFunFC(z_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(y_19);
  goto p_40;
  a_21 :
  TestFunFC(u_18,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto u_40;
  u_40 :
  TestFunFC(u_18,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(y_19);
  goto q_40;
  y_19 :
  goto x_19;
  q_40 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("LChoice",Egetd(0,3),App2("LChoice",Egetd(0,4),Egetd(0,5))));
  Return();
  x_19 :
  goto r_19;
  p_40 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,3),App2("Seq",Egetd(0,4),Egetd(0,5))));
  Return();
  r_19 :
  goto q_19;
  o_40 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Choice",Egetd(0,3),App2("Choice",Egetd(0,4),Egetd(0,5))));
  Return();
  q_19 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_10)
  Epushd(0,3);
  MoveTop(0,2);
  goto a_42;
  a_42 :
  TestFunFC(f_19,&&i_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto b_42;
  b_42 :
  TestFunFC(j_23,&&fail,Egetd(0,3));
  Rpush(c_23);
  goto j_41;
  i_23 :
  TestFunFC(y_18,&&l_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto c_42;
  c_42 :
  TestFunFC(j_23,&&fail,Egetd(0,3));
  Rpush(c_23);
  goto k_41;
  l_23 :
  TestFunFC(z_2,&&o_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto d_42;
  d_42 :
  TestFunFC(j_23,&&fail,Egetd(0,3));
  Rpush(c_23);
  goto l_41;
  o_23 :
  TestFunFC(e_0,&&q_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto e_42;
  e_42 :
  TestFunFC(j_23,&&fail,Egetd(0,1));
  Rpush(c_23);
  goto m_41;
  q_23 :
  TestFunFC(b_24,&&r_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto f_42;
  f_42 :
  TestFunFC(j_23,&&fail,Egetd(0,1));
  Rpush(c_23);
  goto n_41;
  r_23 :
  TestFunFC(e_24,&&c_24,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto g_42;
  g_42 :
  TestFunFC(j_23,&&fail,Egetd(0,3));
  Rpush(c_23);
  goto o_41;
  c_24 :
  TestFunFC(k_24,&&j_24,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto h_42;
  h_42 :
  TestFunFC(j_23,&&fail,Egetd(0,3));
  Rpush(c_23);
  goto p_41;
  j_24 :
  TestFunFC(k_25,&&l_24,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto i_42;
  i_42 :
  TestFunFC(j_23,&&fail,Egetd(0,1));
  Rpush(c_23);
  goto q_41;
  l_24 :
  TestFunFC(e_26,&&d_26,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(c_23);
  goto r_41;
  d_26 :
  TestFunFC(e_18,&&f_26,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto j_42;
  j_42 :
  TestFunFC(j_23,&&g_26,Egetd(0,1));
  goto k_42;
  k_42 :
  TestFunFC(j_23,&&h_26,Egetd(0,3));
  Cpush(j_26);
  Rpush(k_26);
  goto s_41;
  k_26 :
  goto i_26;
  j_26 :
  Rpush(s_26);
  goto t_41;
  s_26 :
  goto r_26;
  i_26 :
  Cpop();
  r_26 :
  goto c_23;
  h_26 :
  Rpush(c_23);
  goto t_41;
  g_26 :
  goto l_42;
  l_42 :
  TestFunFC(j_23,&&fail,Egetd(0,3));
  Rpush(c_23);
  goto s_41;
  f_26 :
  TestFunFC(u_18,&&t_26,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto m_42;
  m_42 :
  TestFunFC(j_23,&&u_26,Egetd(0,1));
  goto n_42;
  n_42 :
  TestFunFC(j_23,&&v_26,Egetd(0,3));
  Cpush(x_26);
  Rpush(y_26);
  goto u_41;
  y_26 :
  goto w_26;
  x_26 :
  Rpush(a_27);
  goto v_41;
  a_27 :
  goto z_26;
  w_26 :
  Cpop();
  z_26 :
  goto c_23;
  v_26 :
  Rpush(c_23);
  goto v_41;
  u_26 :
  goto o_42;
  o_42 :
  TestFunFC(j_23,&&fail,Egetd(0,3));
  Rpush(c_23);
  goto u_41;
  t_26 :
  TestFunFC(h_19,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto p_42;
  p_42 :
  TestFunFC(j_23,&&fail,Egetd(0,3));
  Rpush(c_23);
  goto w_41;
  c_23 :
  goto b_23;
  w_41 :
  Tset(App0("Fail"));
  Return();
  b_23 :
  goto a_23;
  v_41 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  a_23 :
  goto z_22;
  u_41 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  z_22 :
  goto p_22;
  t_41 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  p_22 :
  goto o_22;
  s_41 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  o_22 :
  goto n_22;
  r_41 :
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(d_27);
  g_43 :
  Cpush(f_27);
  Epushd(1,3);
  MoveTop(1,1);
  goto y_41;
  y_41 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_41;
  z_41 :
  TestFunFC(j_23,&&fail,Egetd(1,2));
  Rpush(h_27);
  goto x_41;
  h_27 :
  goto g_27;
  x_41 :
  Return();
  g_27 :
  Epopd(1,3);
  goto e_27;
  f_27 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_27);
  goto g_43;
  j_27 :
  AllBuild();
  goto i_27;
  e_27 :
  Cpop();
  i_27 :
  Return();
  d_27 :
  Tpop();
  Tset(App0("Fail"));
  Return();
  n_22 :
  goto m_22;
  q_41 :
  Tset(App0("Fail"));
  Return();
  m_22 :
  goto l_22;
  p_41 :
  Tset(App0("Fail"));
  Return();
  l_22 :
  goto j_22;
  o_41 :
  Tset(App0("Fail"));
  Return();
  j_22 :
  goto x_21;
  n_41 :
  Tset(App0("Fail"));
  Return();
  x_21 :
  goto g_21;
  m_41 :
  Tset(App0("Fail"));
  Return();
  g_21 :
  goto f_21;
  l_41 :
  Tset(App0("Fail"));
  Return();
  f_21 :
  goto d_21;
  k_41 :
  Tset(App0("Id"));
  Return();
  d_21 :
  goto c_21;
  j_41 :
  Tset(App0("Fail"));
  Return();
  c_21 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_i_10)
  Epushd(0,3);
  MoveTop(0,2);
  goto r_43;
  r_43 :
  TestFunFC(f_19,&&r_29,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto s_43;
  s_43 :
  TestFunFC(s_29,&&fail,Egetd(0,3));
  Rpush(q_28);
  goto h_43;
  r_29 :
  TestFunFC(y_18,&&w_29,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto t_43;
  t_43 :
  TestFunFC(s_29,&&fail,Egetd(0,3));
  Rpush(q_28);
  goto i_43;
  w_29 :
  TestFunFC(z_2,&&x_29,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto u_43;
  u_43 :
  TestFunFC(s_29,&&b_30,Egetd(0,1));
  goto v_43;
  v_43 :
  TestFunFC(s_29,&&j_30,Egetd(0,3));
  Cpush(t_30);
  Rpush(u_30);
  goto j_43;
  u_30 :
  goto s_30;
  t_30 :
  Rpush(f_31);
  goto k_43;
  f_31 :
  goto e_31;
  s_30 :
  Cpop();
  e_31 :
  goto q_28;
  j_30 :
  Rpush(q_28);
  goto k_43;
  b_30 :
  goto w_43;
  w_43 :
  TestFunFC(s_29,&&fail,Egetd(0,3));
  Rpush(q_28);
  goto j_43;
  x_29 :
  TestFunFC(u_18,&&j_31,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto x_43;
  x_43 :
  TestFunFC(s_29,&&fail,Egetd(0,3));
  Rpush(q_28);
  goto l_43;
  j_31 :
  TestFunFC(e_0,&&l_31,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto y_43;
  y_43 :
  TestFunFC(s_29,&&fail,Egetd(0,1));
  Rpush(q_28);
  goto m_43;
  l_31 :
  TestFunFC(b_24,&&m_31,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto z_43;
  z_43 :
  TestFunFC(s_29,&&fail,Egetd(0,1));
  Rpush(q_28);
  goto n_43;
  m_31 :
  TestFunFC(s_31,&&q_31,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto a_44;
  a_44 :
  TestFunFC(s_29,&&fail,Egetd(0,3));
  Rpush(q_28);
  goto o_43;
  q_31 :
  TestFunFC(h_19,&&u_31,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto b_44;
  b_44 :
  TestFunFC(s_29,&&fail,Egetd(0,3));
  Rpush(q_28);
  goto p_43;
  u_31 :
  TestFunFC(v_31,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto c_44;
  c_44 :
  TestFunFC(c_32,&&fail,Egetd(0,3));
  Rpush(q_28);
  goto q_43;
  q_28 :
  goto p_28;
  q_43 :
  Tset(App0("Id"));
  Return();
  p_28 :
  goto j_28;
  p_43 :
  Tset(App0("Id"));
  Return();
  j_28 :
  goto h_28;
  o_43 :
  Tset(App0("Id"));
  Return();
  h_28 :
  goto g_28;
  n_43 :
  Tset(App0("Id"));
  Return();
  g_28 :
  goto a_28;
  m_43 :
  Tset(App0("Id"));
  Return();
  a_28 :
  goto z_27;
  l_43 :
  Tset(App0("Id"));
  Return();
  z_27 :
  goto y_27;
  k_43 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  y_27 :
  goto x_27;
  j_43 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  x_27 :
  goto l_27;
  i_43 :
  Tset(App0("Fail"));
  Return();
  l_27 :
  goto k_27;
  h_43 :
  Tset(App0("Id"));
  Return();
  k_27 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_j_10)
  Cpush(g_32);
  Ccall(_stratego_i_10);
  goto e_32;
  g_32 :
  Ccontinue(h_32);
  Ccall(_stratego_h_10);
  goto e_32;
  h_32 :
  Ccontinue(o_32);
  Ccall(_stratego_g_10);
  goto e_32;
  o_32 :
  Ccontinue(w_33);
  Ccall(_stratego_f_10);
  goto e_32;
  w_33 :
  Epushd(0,3);
  MoveTop(0,1);
  goto m_44;
  m_44 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto n_44;
  n_44 :
  TestFunFC(p_5,&&fail,Egetd(0,2));
  Rpush(c_34);
  goto l_44;
  c_34 :
  goto b_34;
  l_44 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  b_34 :
  Epopd(0,3);
  goto x_33;
  e_32 :
  Cpop();
  x_33 :
ENDPROC

PROC(_stratego_k_10)
  Cpush(f_34);
  Ccall(_stratego_j_10);
  goto d_34;
  f_34 :
  Ccontinue(g_34);
  Ccall(_stratego_e_10);
  goto d_34;
  g_34 :
  Ccontinue(h_34);
  Epushd(0,5);
  MoveTop(0,1);
  goto u_44;
  u_44 :
  TestFunFC(z_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto v_44;
  v_44 :
  TestFunFC(q_34,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(p_34);
  goto t_44;
  p_34 :
  goto i_34;
  t_44 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,4),App2("Seq",Egetd(0,2),Egetd(0,5))));
  Return();
  i_34 :
  Epopd(0,5);
  goto d_34;
  h_34 :
  Ccontinue(u_34);
  Ccall(_stratego_d_10);
  goto d_34;
  u_34 :
  Epushd(0,9);
  MoveTop(0,4);
  goto s_45;
  s_45 :
  TestFunFC(e_0,&&k_35,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  goto t_45;
  t_45 :
  TestFunFC(e_0,&&fail,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,3,0,9,1);
  Rpush(g_35);
  goto w_44;
  k_35 :
  TestFunFC(z_2,&&l_35,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  goto u_45;
  u_45 :
  TestFunFC(n_9,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto v_45;
  v_45 :
  TestFunFC(z_2,&&fail,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,3,0,9,1);
  goto w_45;
  w_45 :
  TestFunFC(n_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(g_35);
  goto x_44;
  l_35 :
  TestFunFC(q_34,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  goto x_45;
  x_45 :
  TestFunFC(m_35,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  MoveArg(0,8,0,5,2);
  goto y_45;
  y_45 :
  TestFunFC(p_5,&&fail,Egetd(0,7));
  Cpush(o_35);
  Rpush(v_35);
  goto y_44;
  v_35 :
  goto n_35;
  o_35 :
  Rpush(d_36);
  goto z_44;
  d_36 :
  goto w_35;
  n_35 :
  Cpop();
  w_35 :
  goto g_35;
  g_35 :
  goto f_35;
  z_44 :
  NotNULLd(0,6);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset(App2("Let",App4("SDef",App2("Cons",App0("DontInline"),App0("Nil")),Egetd(0,6),App0("Nil"),Egetd(0,8)),Egetd(0,9)));
  Return();
  f_35 :
  goto y_34;
  y_44 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,9);
  Tset(Egetd(0,9));
  Rpush(e_36);
  f_48 :
  Cpush(j_36);
  Epushd(3,4);
  MoveTop(3,1);
  goto g_45;
  g_45 :
  TestFunFC(p_36,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,4,3,1,1);
  goto h_45;
  h_45 :
  TestFunFC(q_36,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  goto i_45;
  i_45 :
  TestFunFC(p_5,&&fail,Egetd(3,4));
  Rpush(l_36);
  goto f_45;
  l_36 :
  goto k_36;
  f_45 :
  Move(0,6,3,3);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  k_36 :
  Epopd(3,4);
  goto i_36;
  j_36 :
  Cpush(s_36);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,3);
  goto l_45;
  l_45 :
  TestFunFC(h_37,&&g_37,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  MoveArg(3,1,3,3,2);
  MoveArg(3,2,3,3,3);
  Rpush(z_36);
  goto j_45;
  g_37 :
  TestFunFC(l_37,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(z_36);
  goto k_45;
  z_36 :
  goto y_36;
  k_45 :
  Return();
  y_36 :
  goto t_36;
  j_45 :
  Return();
  t_36 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  s_36 :
  IsAppl();
  OneInit();
  m_37 :
  OneNextSon();
  Cpush(m_37);
  Rpush(s_38);
  goto f_48;
  s_38 :
  Cpop();
  OneBuild();
  goto r_36;
  i_36 :
  Cpop();
  r_36 :
  Return();
  e_36 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Call",App1("SVar",Egetd(0,6)),App0("Nil")),App2("TCons",Egetd(1,1),App0("TNil"))));
  Cpush(t_38);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,1);
  goto p_45;
  p_45 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto q_45;
  q_45 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto r_45;
  r_45 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(v_38);
  goto n_45;
  v_38 :
  goto u_38;
  n_45 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(b_39);
  w_38 :
  Cpush(x_38);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,2,4,1);
  Epopd(4,1);
  Cpop();
  goto a_39;
  x_38 :
  IsAppl();
  MatchTravInit();
  y_38 :
  OneMatchNextSon();
  Cpush(y_38);
  Rpush(z_38);
  goto w_38;
  z_38 :
  Cpop();
  MatchTravEnd();
  a_39 :
  Return();
  b_39 :
  Return();
  u_38 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  t_38 :
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  y_34 :
  goto x_34;
  x_44 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Build",Egetd(0,2)),Egetd(0,3)));
  Return();
  x_34 :
  goto w_34;
  w_44 :
  Epushd(1,5);
  NotNULLd(0,5);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,1),App0("TNil"))));
  MoveTop(1,1);
  goto c_45;
  c_45 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_45;
  d_45 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto e_45;
  e_45 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(d_39);
  goto a_45;
  d_39 :
  goto c_39;
  a_45 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(e_39);
  e_48 :
  Cpush(g_39);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_39);
  goto e_48;
  h_39 :
  AllBuild();
  goto f_39;
  g_39 :
  Ccall(_stratego_n_13);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto i_39;
  f_39 :
  Cpop();
  i_39 :
  Return();
  e_39 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,3);
  Tset(App2("Scope",Egetd(2,1),Egetd(0,3)));
  Epopd(2,1);
  Return();
  c_39 :
  Epopd(1,5);
  Return();
  w_34 :
  Epopd(0,9);
  goto v_34;
  d_34 :
  Cpop();
  v_34 :
ENDPROC

PROC(_stratego_k_11)
  Rpush(j_39);
  h_48 :
  Cpush(h_40);
  g_40 :
  Ccall(_stratego_k_10);
  Tduplinv();
  goto g_40;
  h_40 :
  AllInit();
  i_40 :
  AllNextSon(&&j_40);
  Rpush(k_40);
  goto h_48;
  k_40 :
  goto i_40;
  j_40 :
  AllBuild();
  Cpush(m_40);
  l_40 :
  Ccall(_stratego_k_10);
  Tduplinv();
  goto l_40;
  m_40 :
  Return();
  j_39 :
ENDPROC

PROC(_stratego_l_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto l_48;
  l_48 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(a_41);
  goto k_48;
  a_41 :
  goto n_40;
  k_48 :
  Return();
  n_40 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_11)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_r_12);
  Tset(MakeInt(1));
  Ccall(_stratego_q_12);
ENDPROC

PROC(_stratego_a_12)
  Epushd(0,2);
  Tdupl();
  Cpush(c_41);
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Cpush(d_41);
  Tdupl();
  Rpush(e_41);
  j_49 :
  Cpush(g_41);
  Epushd(1,3);
  MoveTop(1,1);
  goto o_48;
  o_48 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_48;
  p_48 :
  TestFunFC(t_42,&&fail,Egetd(1,2));
  Rpush(i_41);
  goto n_48;
  i_41 :
  goto h_41;
  n_48 :
  Return();
  h_41 :
  Epopd(1,3);
  goto f_41;
  g_41 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_42);
  goto j_49;
  v_42 :
  AllBuild();
  goto u_42;
  f_41 :
  Cpop();
  u_42 :
  Return();
  e_41 :
  Cpop();
  Crestore();
  Cjump();
  d_41 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Rpush(w_42);
  k_49 :
  Cpush(y_42);
  Epushd(1,4);
  MoveTop(1,1);
  goto r_48;
  r_48 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto s_48;
  s_48 :
  TestFunFC(e_43,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_43);
  goto q_48;
  d_43 :
  goto c_43;
  q_48 :
  Move(0,2,1,3);
  Return();
  c_43 :
  Epopd(1,4);
  goto x_42;
  y_42 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_44);
  goto k_49;
  g_44 :
  AllBuild();
  goto f_43;
  x_42 :
  Cpop();
  f_43 :
  Return();
  w_42 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Rpush(h_44);
  l_49 :
  Cpush(j_44);
  Epushd(1,4);
  MoveTop(1,1);
  goto u_48;
  u_48 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto v_48;
  v_48 :
  TestFunFC(s_44,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_44);
  goto t_48;
  p_44 :
  goto k_44;
  t_48 :
  Move(0,1,1,3);
  Return();
  k_44 :
  Epopd(1,4);
  goto i_44;
  j_44 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_45);
  goto l_49;
  m_45 :
  AllBuild();
  goto b_45;
  i_44 :
  Cpop();
  b_45 :
  Return();
  h_44 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_r_12);
  goto b_41;
  c_41 :
  goto o_45;
  b_41 :
  Cpop();
  o_45 :
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
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Cpush(f_46);
  Rpush(g_46);
  l_50 :
  Cpush(r_46);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_49;
  n_49 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_49;
  o_49 :
  TestFunFC(z_46,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(y_46);
  goto m_49;
  y_46 :
  goto s_46;
  m_49 :
  Move(0,1,1,3);
  Return();
  s_46 :
  Epopd(1,4);
  goto q_46;
  r_46 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_47);
  goto l_50;
  c_47 :
  AllBuild();
  goto b_47;
  q_46 :
  Cpop();
  b_47 :
  Return();
  g_46 :
  goto e_46;
  f_46 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto d_47;
  e_46 :
  Cpop();
  d_47 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  Cpush(f_47);
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Rpush(g_47);
  m_50 :
  Cpush(y_47);
  Epushd(1,3);
  MoveTop(1,1);
  goto u_49;
  u_49 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_49;
  v_49 :
  TestFunFC(c_48,&&fail,Egetd(1,2));
  Rpush(b_48);
  goto t_49;
  b_48 :
  goto z_47;
  t_49 :
  Return();
  z_47 :
  Epopd(1,3);
  goto h_47;
  y_47 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_49);
  goto m_50;
  p_49 :
  AllBuild();
  goto d_48;
  h_47 :
  Cpop();
  d_48 :
  Return();
  g_47 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_12);
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  goto e_47;
  f_47 :
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_12);
  OneNextSon();
  Ccall(_stratego_l_11);
  AllBuild();
  AllBuild();
  goto q_49;
  e_47 :
  Cpop();
  q_49 :
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
  Cpush(s_49);
  Rpush(b_50);
  g_51 :
  Cpush(e_50);
  Epushd(1,4);
  MoveTop(1,1);
  goto o_50;
  o_50 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto p_50;
  p_50 :
  TestFunFC(h_50,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_50);
  goto n_50;
  g_50 :
  goto f_50;
  n_50 :
  Move(0,1,1,3);
  Return();
  f_50 :
  Epopd(1,4);
  goto d_50;
  e_50 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_50);
  goto g_51;
  r_50 :
  AllBuild();
  goto q_50;
  d_50 :
  Cpop();
  q_50 :
  Return();
  b_50 :
  goto r_49;
  s_49 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto s_50;
  r_49 :
  Cpop();
  s_50 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_f_12);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
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
  Rpush(t_50);
  p_51 :
  Cpush(b_51);
  Epushd(1,4);
  MoveTop(1,1);
  goto i_51;
  i_51 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto j_51;
  j_51 :
  TestFunFC(s_44,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_51);
  goto h_51;
  d_51 :
  goto c_51;
  h_51 :
  Move(0,1,1,3);
  Return();
  c_51 :
  Epopd(1,4);
  goto z_50;
  b_51 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_52);
  goto p_51;
  l_52 :
  AllBuild();
  goto f_51;
  z_50 :
  Cpop();
  f_51 :
  Return();
  t_50 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_r_12);
  Tset(MakeInt(1));
  Ccall(_stratego_q_12);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_51;
  r_51 :
  TestFunFC(w_52,&&fail,Egetd(0,1));
  Rpush(t_52);
  goto q_51;
  t_52 :
  goto q_52;
  q_51 :
  Return();
  q_52 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_13)
  Tdupl();
  z_52 :
  TestFunTop(z_0);
  Cpush(c_53);
  Arg(0);
  Cpush(j_53);
  Ccall(_stratego_k_13);
  goto g_53;
  j_53 :
  Epushd(0,2);
  MoveTop(0,1);
  goto u_51;
  u_51 :
  TestFunFC(r_53,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(o_53);
  goto t_51;
  o_53 :
  goto n_53;
  t_51 :
  Return();
  n_53 :
  Epopd(0,2);
  goto k_53;
  g_53 :
  Cpop();
  k_53 :
  Tpop();
  Cpop();
  goto f_53;
  c_53 :
  Arg(1);
  Tdrop();
  goto z_52;
  f_53 :
  Tpop();
  Ccall(_stratego_s_12);
ENDPROC

PROC(_stratego_m_13)
  Epushd(0,5);
  MoveTop(0,3);
  goto m_54;
  m_54 :
  TestFunFC(z_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto n_54;
  n_54 :
  TestFunFC(z_0,&&d_55,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(g_55);
  Rpush(h_55);
  goto y_51;
  h_55 :
  goto e_55;
  g_55 :
  Ccontinue(i_55);
  Rpush(j_55);
  goto z_51;
  j_55 :
  goto e_55;
  i_55 :
  Ccontinue(l_55);
  Rpush(m_55);
  goto a_52;
  m_55 :
  goto e_55;
  l_55 :
  Ccontinue(n_55);
  Rpush(o_55);
  goto b_52;
  o_55 :
  goto e_55;
  n_55 :
  Ccontinue(q_55);
  Rpush(r_55);
  goto c_52;
  r_55 :
  goto e_55;
  q_55 :
  Ccontinue(s_55);
  Rpush(t_55);
  goto d_52;
  t_55 :
  goto e_55;
  s_55 :
  Ccontinue(u_55);
  Rpush(w_55);
  goto e_52;
  w_55 :
  goto e_55;
  u_55 :
  Ccontinue(x_55);
  Rpush(y_55);
  goto f_52;
  y_55 :
  goto e_55;
  x_55 :
  Ccontinue(z_55);
  Rpush(a_56);
  goto g_52;
  a_56 :
  goto e_55;
  z_55 :
  Ccontinue(b_56);
  Rpush(c_56);
  goto h_52;
  c_56 :
  goto e_55;
  b_56 :
  Ccontinue(e_56);
  Rpush(f_56);
  goto i_52;
  f_56 :
  goto e_55;
  e_56 :
  Ccontinue(g_56);
  Rpush(h_56);
  goto j_52;
  h_56 :
  goto e_55;
  g_56 :
  Ccontinue(i_56);
  Rpush(j_56);
  goto k_52;
  j_56 :
  goto e_55;
  i_56 :
  Ccontinue(k_56);
  Rpush(m_56);
  goto m_52;
  m_56 :
  goto e_55;
  k_56 :
  Rpush(o_56);
  goto n_52;
  o_56 :
  goto n_56;
  e_55 :
  Cpop();
  n_56 :
  goto c_55;
  d_55 :
  Cpush(q_56);
  Rpush(r_56);
  goto y_51;
  r_56 :
  goto p_56;
  q_56 :
  Ccontinue(s_56);
  Rpush(u_56);
  goto z_51;
  u_56 :
  goto p_56;
  s_56 :
  Ccontinue(v_56);
  Rpush(w_56);
  goto a_52;
  w_56 :
  goto p_56;
  v_56 :
  Ccontinue(x_56);
  Rpush(y_56);
  goto b_52;
  y_56 :
  goto p_56;
  x_56 :
  Ccontinue(z_56);
  Rpush(a_57);
  goto c_52;
  a_57 :
  goto p_56;
  z_56 :
  Ccontinue(c_57);
  Rpush(d_57);
  goto i_52;
  d_57 :
  goto p_56;
  c_57 :
  Ccontinue(e_57);
  Rpush(f_57);
  goto j_52;
  f_57 :
  goto p_56;
  e_57 :
  Ccontinue(g_57);
  Rpush(h_57);
  goto k_52;
  h_57 :
  goto p_56;
  g_57 :
  Ccontinue(j_57);
  Rpush(k_57);
  goto m_52;
  k_57 :
  goto p_56;
  j_57 :
  Rpush(m_57);
  goto n_52;
  m_57 :
  goto l_57;
  p_56 :
  Cpop();
  l_57 :
  goto c_55;
  c_55 :
  goto b_55;
  n_52 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_54;
  k_54 :
  TestStr(1,1,"-?",&&fail);
  Rpush(p_57);
  goto j_54;
  p_57 :
  goto o_57;
  j_54 :
  Return();
  o_57 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  b_55 :
  goto z_54;
  m_52 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_54;
  h_54 :
  TestStr(1,1,"-h",&&fail);
  Rpush(r_57);
  goto g_54;
  r_57 :
  goto q_57;
  g_54 :
  Return();
  q_57 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  z_54 :
  goto y_54;
  k_52 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_54;
  e_54 :
  TestStr(1,1,"--help",&&fail);
  Rpush(u_57);
  goto d_54;
  u_57 :
  goto t_57;
  d_54 :
  Return();
  t_57 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  y_54 :
  goto x_54;
  j_52 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_54;
  b_54 :
  TestStr(1,1,"-s",&&fail);
  Rpush(w_57);
  goto a_54;
  w_57 :
  goto v_57;
  a_54 :
  Return();
  v_57 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  x_54 :
  goto w_54;
  i_52 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_53;
  y_53 :
  TestStr(1,1,"-b",&&fail);
  Rpush(z_57);
  goto x_53;
  z_57 :
  goto y_57;
  x_53 :
  Return();
  y_57 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  w_54 :
  goto u_54;
  h_52 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_53;
  u_53 :
  TestStr(1,1,"--output",&&fail);
  Rpush(b_58);
  goto t_53;
  b_58 :
  goto a_58;
  t_53 :
  Return();
  a_58 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  u_54 :
  goto t_54;
  g_52 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_53;
  q_53 :
  TestStr(1,1,"-o",&&fail);
  Rpush(e_58);
  goto p_53;
  e_58 :
  goto d_58;
  p_53 :
  Return();
  d_58 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  t_54 :
  goto l_54;
  f_52 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_53;
  m_53 :
  TestStr(1,1,"--input",&&fail);
  Rpush(l_58);
  goto l_53;
  l_58 :
  goto i_58;
  l_53 :
  Return();
  i_58 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  l_54 :
  goto i_54;
  e_52 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_53;
  i_53 :
  TestStr(1,1,"-i",&&fail);
  Rpush(v_58);
  goto h_53;
  v_58 :
  goto r_58;
  h_53 :
  Return();
  r_58 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  i_54 :
  goto f_54;
  d_52 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_53;
  e_53 :
  TestStr(1,1,"@version",&&fail);
  Rpush(e_59);
  goto d_53;
  e_59 :
  goto w_58;
  d_53 :
  Return();
  w_58 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  f_54 :
  goto c_54;
  c_52 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_53;
  b_53 :
  TestStr(1,1,"--version",&&fail);
  Rpush(i_59);
  goto a_53;
  i_59 :
  goto f_59;
  a_53 :
  Return();
  f_59 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  c_54 :
  goto z_53;
  b_52 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_52;
  y_52 :
  TestStr(1,1,"-v",&&fail);
  Rpush(k_59);
  goto x_52;
  k_59 :
  goto j_59;
  x_52 :
  Return();
  j_59 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  z_53 :
  goto w_53;
  a_52 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_52;
  v_52 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(m_59);
  goto u_52;
  m_59 :
  goto l_59;
  u_52 :
  Return();
  l_59 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  w_53 :
  goto v_53;
  z_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_52;
  s_52 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(o_59);
  goto r_52;
  o_59 :
  goto n_59;
  r_52 :
  Return();
  n_59 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  v_53 :
  goto s_53;
  y_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_52;
  p_52 :
  TestStr(1,1,"-S",&&fail);
  Rpush(q_59);
  goto o_52;
  q_59 :
  goto p_59;
  o_52 :
  Return();
  p_59 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  s_53 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_58;
  g_58 :
  TestFunFC(p_5,&&fail,Egetd(0,1));
  Rpush(s_59);
  goto f_58;
  s_59 :
  goto r_59;
  f_58 :
  Return();
  r_59 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_13)
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(t_59);
  g_59 :
  Cpush(v_59);
  Cpush(x_59);
  Ccall(_stratego_n_13);
  goto w_59;
  x_59 :
  Ccall(_stratego_m_13);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_59);
  goto g_59;
  z_59 :
  AllBuild();
  goto y_59;
  w_59 :
  Cpop();
  y_59 :
  goto u_59;
  v_59 :
  Epushd(0,3);
  MoveTop(0,1);
  goto k_58;
  k_58 :
  TestFunFC(z_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(c_60);
  goto j_58;
  c_60 :
  goto b_60;
  j_58 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  b_60 :
  Epopd(0,3);
  goto a_60;
  u_59 :
  Cpop();
  a_60 :
  Return();
  t_59 :
  AllBuild();
  Cpush(e_60);
  Ccall(_stratego_l_13);
  goto d_60;
  e_60 :
  Ccontinue(f_60);
  Epushd(0,6);
  Ccall(_stratego_g_12);
  Tdupl();
  Ccall(_stratego_e_12);
  Tpop();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Rpush(g_60);
  h_59 :
  Cpush(i_60);
  Ccall(_stratego_n_13);
  goto h_60;
  i_60 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  TestFunTop(m_35);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_k_11);
  Ccall(_stratego_x_9);
  AllBuild();
  OneNextSon();
  Rpush(k_60);
  goto h_59;
  k_60 :
  AllBuild();
  goto j_60;
  h_60 :
  Cpop();
  j_60 :
  Return();
  g_60 :
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
  goto n_58;
  n_58 :
  TestFunFC(r_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto o_58;
  o_58 :
  TestFunFC(r_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto p_58;
  p_58 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(m_60);
  goto m_58;
  m_60 :
  goto l_60;
  m_58 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  l_60 :
  Ccall(_stratego_d_12);
  Ccall(_stratego_a_12);
  Epopd(0,6);
  goto d_60;
  f_60 :
  Ccall(_stratego_m_11);
  goto n_60;
  d_60 :
  Cpop();
  n_60 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_o_13);
ENDPROC

DOIT

