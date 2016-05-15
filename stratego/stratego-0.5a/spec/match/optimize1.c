#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,c_53);
VARDECL(AFun,j_52);
VARDECL(AFun,s_49);
VARDECL(AFun,k_47);
VARDECL(AFun,b_46);
VARDECL(AFun,s_44);
VARDECL(AFun,u_43);
VARDECL(AFun,x_42);
VARDECL(AFun,l_32);
VARDECL(AFun,k_32);
VARDECL(AFun,u_31);
VARDECL(AFun,n_31);
VARDECL(AFun,i_29);
VARDECL(AFun,f_28);
VARDECL(AFun,d_27);
VARDECL(AFun,a_27);
VARDECL(AFun,y_26);
VARDECL(AFun,x_25);
VARDECL(AFun,h_19);
VARDECL(AFun,f_19);
VARDECL(AFun,d_19);
VARDECL(AFun,p_18);
VARDECL(AFun,w_17);
VARDECL(AFun,j_16);
VARDECL(AFun,d_13);
VARDECL(AFun,b_13);
VARDECL(AFun,z_12);
VARDECL(AFun,x_12);
VARDECL(AFun,v_12);
VARDECL(AFun,j_12);
VARDECL(AFun,i_12);
VARDECL(AFun,e_12);
VARDECL(AFun,j_11);
VARDECL(AFun,g_11);
VARDECL(AFun,d_11);
VARDECL(AFun,a_11);
VARDECL(AFun,x_10);
VARDECL(AFun,h_7);
VARDECL(AFun,e_7);
VARDECL(AFun,d_7);
VARDECL(AFun,b_7);
VARDECL(AFun,s_3);
VARDECL(AFun,z_0);
VARDECL(AFun,s_0);
VARDECL(AFun,r_0);
VARDECL(AFun,m_0);
VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
VARDECL(AFun,e_0);
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
  MOVE(c_53,ATmakeAFun("Undefined",1,0));
  MOVE(j_52,ATmakeAFun("Help",0,0));
  MOVE(s_49,ATmakeAFun("Input",1,0));
  MOVE(k_47,ATmakeAFun("Binary",0,0));
  MOVE(b_46,ATmakeAFun("Output",1,0));
  MOVE(s_44,ATmakeAFun("Program",1,0));
  MOVE(u_43,ATmakeAFun("Runtime",1,0));
  MOVE(x_42,ATmakeAFun("Silent",0,0));
  MOVE(l_32,ATmakeAFun("Matrix",2,0));
  MOVE(k_32,ATmakeAFun("Case",4,0));
  MOVE(u_31,ATmakeAFun("SVar",1,0));
  MOVE(n_31,ATmakeAFun("Call",2,0));
  MOVE(i_29,ATmakeAFun("SDef",3,0));
  MOVE(f_28,ATmakeAFun("Let",2,0));
  MOVE(d_27,ATmakeAFun("Wld",0,0));
  MOVE(a_27,ATmakeAFun("Match",1,0));
  MOVE(y_26,ATmakeAFun("All",1,0));
  MOVE(x_25,ATmakeAFun("Id",0,0));
  MOVE(h_19,ATmakeAFun("Cong",2,0));
  MOVE(f_19,ATmakeAFun("Path",2,0));
  MOVE(d_19,ATmakeAFun("One",1,0));
  MOVE(p_18,ATmakeAFun("Some",1,0));
  MOVE(w_17,ATmakeAFun("Rec",2,0));
  MOVE(j_16,ATmakeAFun("Fail",0,0));
  MOVE(d_13,ATmakeAFun("Where",1,0));
  MOVE(b_13,ATmakeAFun("Test",1,0));
  MOVE(z_12,ATmakeAFun("Not",1,0));
  MOVE(x_12,ATmakeAFun("LChoice",2,0));
  MOVE(v_12,ATmakeAFun("Choice",2,0));
  MOVE(j_12,ATmakeAFun("BAM",3,0));
  MOVE(i_12,ATmakeAFun("AM",2,0));
  MOVE(e_12,ATmakeAFun("MA",2,0));
  MOVE(j_11,ATmakeAFun("BA",2,0));
  MOVE(g_11,ATmakeAFun("Lets",2,0));
  MOVE(d_11,ATmakeAFun("LChoices",1,0));
  MOVE(a_11,ATmakeAFun("Choices",1,0));
  MOVE(x_10,ATmakeAFun("Seqs",1,0));
  MOVE(h_7,ATmakeAFun("Build",1,0));
  MOVE(e_7,ATmakeAFun("Assign",1,0));
  MOVE(d_7,ATmakeAFun("Assign",2,0));
  MOVE(b_7,ATmakeAFun("Seq",2,0));
  MOVE(s_3,ATmakeAFun("Nil",0,0));
  MOVE(z_0,ATmakeAFun("Cons",2,0));
  MOVE(s_0,ATmakeAFun("TNil",0,0));
  MOVE(r_0,ATmakeAFun("TCons",2,0));
  MOVE(m_0,ATmakeAFun("Var",1,0));
  MOVE(g_0,ATmakeAFun("Rule",3,0));
  MOVE(f_0,ATmakeAFun("LRule",1,0));
  MOVE(e_0,ATmakeAFun("Scope",2,0));
ENDPROC

PROC(_stratego_c_10)
  Epushd(0,6);
  MoveTop(0,2);
  goto m_7;
  m_7 :
  TestFunFC(e_0,&&d_0,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(c_0);
  goto e_5;
  d_0 :
  TestFunFC(f_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto n_7;
  n_7 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(c_0);
  goto l_5;
  c_0 :
  goto b_0;
  l_5 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_d_10);
  Return();
  b_0 :
  goto a_0;
  e_5 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  a_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_d_10)
  Rpush(h_0);
  t_16 :
  Cpush(j_0);
  Epushd(0,2);
  MoveTop(0,1);
  goto l_8;
  l_8 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_0);
  goto k_8;
  l_0 :
  goto k_0;
  k_8 :
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
  Ccall(_stratego_c_10);
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
  goto t_16;
  o_0 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
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
  goto k_9;
  k_9 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_9;
  l_9 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto m_9;
  m_9 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(q_0);
  goto j_9;
  q_0 :
  goto p_0;
  j_9 :
  Move(0,3,1,4);
  Return();
  p_0 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(t_0);
  u_16 :
  Cpush(v_0);
  Ccall(_stratego_p_13);
  Tset(App0("Nil"));
  goto u_0;
  v_0 :
  Epushd(1,3);
  MoveTop(1,1);
  goto o_11;
  o_11 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(y_0);
  goto n_9;
  y_0 :
  goto x_0;
  n_9 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(a_1);
  goto u_16;
  a_1 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto m_10;
  m_10 :
  TestFunFC(r_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto n_10;
  n_10 :
  TestFunFC(r_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto n_11;
  n_11 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(c_1);
  goto q_9;
  c_1 :
  goto b_1;
  q_9 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(d_1);
  v_16 :
  Cpush(f_1);
  Ccall(_stratego_p_13);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto e_1;
  f_1 :
  Ccontinue(g_1);
  Epushd(3,3);
  MoveTop(3,1);
  goto l_10;
  l_10 :
  TestFunFC(z_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(i_1);
  goto u_9;
  i_1 :
  goto h_1;
  u_9 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(j_1);
  w_16 :
  Cpush(l_1);
  Epushd(4,3);
  MoveTop(4,1);
  goto w_9;
  w_9 :
  TestFunFC(z_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(n_1);
  goto v_9;
  n_1 :
  goto m_1;
  v_9 :
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
  goto w_16;
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
  goto v_16;
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
  goto v_16;
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
  goto a_12;
  a_12 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_12;
  b_12 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto c_12;
  c_12 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(v_1);
  goto q_11;
  v_1 :
  goto u_1;
  q_11 :
  Move(0,2,1,4);
  Return();
  u_1 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(w_1);
  x_16 :
  Cpush(y_1);
  Ccall(_stratego_p_13);
  Tset(App0("Nil"));
  goto x_1;
  y_1 :
  Epushd(1,3);
  MoveTop(1,1);
  goto v_13;
  v_13 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(b_2);
  goto d_12;
  b_2 :
  goto a_2;
  d_12 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(c_2);
  goto t_16;
  c_2 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(d_2);
  goto x_16;
  d_2 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto s_13;
  s_13 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto t_13;
  t_13 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto u_13;
  u_13 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(f_2);
  goto c_13;
  f_2 :
  goto e_2;
  c_13 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(g_2);
  y_16 :
  Cpush(i_2);
  Ccall(_stratego_p_13);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto h_2;
  i_2 :
  Ccontinue(j_2);
  Epushd(3,3);
  MoveTop(3,1);
  goto r_13;
  r_13 :
  TestFunFC(z_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_2);
  goto h_13;
  l_2 :
  goto k_2;
  h_13 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(m_2);
  z_16 :
  Cpush(o_2);
  Epushd(4,3);
  MoveTop(4,1);
  goto j_13;
  j_13 :
  TestFunFC(z_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(q_2);
  goto i_13;
  q_2 :
  goto p_2;
  i_13 :
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
  goto z_16;
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
  goto y_16;
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
  goto y_16;
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

PROC(_stratego_e_10)
  Rpush(w_2);
  y_17 :
  Epushd(0,11);
  MoveTop(0,5);
  goto c_17;
  c_17 :
  TestFunFC(r_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto d_17;
  d_17 :
  TestFunFC(r_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto e_17;
  e_17 :
  TestFunFC(z_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto f_17;
  f_17 :
  TestFunFC(s_0,&&fail,Egetd(0,11));
  goto g_17;
  g_17 :
  TestFunFC(r_0,&&a_3,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto h_17;
  h_17 :
  TestFunFC(r_0,&&b_3,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto i_17;
  i_17 :
  TestFunFC(s_0,&&c_3,Egetd(0,4));
  Cpush(e_3);
  Rpush(f_3);
  goto a_17;
  f_3 :
  goto d_3;
  e_3 :
  Rpush(h_3);
  goto b_17;
  h_3 :
  goto g_3;
  d_3 :
  Cpop();
  g_3 :
  goto z_2;
  c_3 :
  Rpush(z_2);
  goto b_17;
  b_3 :
  Rpush(z_2);
  goto b_17;
  a_3 :
  Rpush(z_2);
  goto b_17;
  z_2 :
  goto y_2;
  b_17 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(i_3);
  goto y_17;
  i_3 :
  Return();
  y_2 :
  goto x_2;
  a_17 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  x_2 :
  Epopd(0,11);
  Return();
  w_2 :
ENDPROC

PROC(_stratego_f_10)
  Epushd(0,7);
  MoveTop(0,1);
  goto q_18;
  q_18 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_18;
  r_18 :
  TestFunFC(r_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto s_18;
  s_18 :
  TestFunFC(s_0,&&m_3,Egetd(0,5));
  Rpush(l_3);
  goto z_17;
  m_3 :
  TestFunFC(r_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto t_18;
  t_18 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(l_3);
  goto a_18;
  l_3 :
  goto k_3;
  a_18 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(n_3);
  e_20 :
  Epushd(2,9);
  MoveTop(2,1);
  goto h_18;
  h_18 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto i_18;
  i_18 :
  TestFunFC(s_3,&&r_3,Egetd(2,2));
  goto j_18;
  j_18 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto k_18;
  k_18 :
  TestFunFC(s_3,&&fail,Egetd(2,6));
  goto l_18;
  l_18 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(q_3);
  goto b_18;
  r_3 :
  TestFunFC(z_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto m_18;
  m_18 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto n_18;
  n_18 :
  TestFunFC(z_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto o_18;
  o_18 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(q_3);
  goto c_18;
  q_3 :
  goto p_3;
  c_18 :
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
  Rpush(u_3);
  goto e_20;
  u_3 :
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto e_18;
  e_18 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto f_18;
  f_18 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto g_18;
  g_18 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(v_3);
  goto d_18;
  v_3 :
  goto t_3;
  d_18 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  t_3 :
  Epopd(3,5);
  Return();
  p_3 :
  goto o_3;
  b_18 :
  Tset(App0("Nil"));
  Return();
  o_3 :
  Epopd(2,9);
  Return();
  n_3 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  k_3 :
  goto j_3;
  z_17 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  j_3 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_g_10)
  Epushd(0,5);
  Ccall(_stratego_f_10);
  MoveTop(0,1);
  goto l_20;
  l_20 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto m_20;
  m_20 :
  TestFunFC(r_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto n_20;
  n_20 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(x_3);
  goto f_20;
  x_3 :
  goto w_3;
  f_20 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(y_3);
  e_21 :
  Cpush(a_4);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto k_20;
  k_20 :
  TestFunFC(m_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(c_4);
  goto h_20;
  c_4 :
  goto b_4;
  h_20 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Move(1,2,2,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  b_4 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_e_10);
  Epopd(1,3);
  goto z_3;
  a_4 :
  AllInit();
  e_4 :
  AllNextSon(&&f_4);
  Rpush(g_4);
  goto e_21;
  g_4 :
  goto e_4;
  f_4 :
  AllBuild();
  goto d_4;
  z_3 :
  Cpop();
  d_4 :
  Return();
  y_3 :
  Return();
  w_3 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_h_10)
  Epushd(0,7);
  MoveTop(0,1);
  goto j_22;
  j_22 :
  TestFunFC(z_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto k_22;
  k_22 :
  TestFunFC(r_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto l_22;
  l_22 :
  TestFunFC(r_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto m_22;
  m_22 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(i_4);
  goto h_21;
  i_4 :
  goto h_4;
  h_21 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto j_21;
  j_21 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto k_21;
  k_21 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto l_21;
  l_21 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(k_4);
  goto i_21;
  k_4 :
  goto j_4;
  i_21 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  j_4 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto n_21;
  n_21 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_21;
  o_21 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_21;
  p_21 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(m_4);
  goto m_21;
  m_4 :
  goto l_4;
  m_21 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  l_4 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(n_4);
  n_24 :
  Epushd(2,9);
  MoveTop(2,1);
  goto w_21;
  w_21 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto x_21;
  x_21 :
  TestFunFC(s_3,&&r_4,Egetd(2,2));
  goto y_21;
  y_21 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto z_21;
  z_21 :
  TestFunFC(s_3,&&fail,Egetd(2,6));
  goto a_22;
  a_22 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(q_4);
  goto q_21;
  r_4 :
  TestFunFC(z_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto b_22;
  b_22 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto c_22;
  c_22 :
  TestFunFC(z_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto d_22;
  d_22 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(q_4);
  goto r_21;
  q_4 :
  goto p_4;
  r_21 :
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
  Rpush(t_4);
  goto n_24;
  t_4 :
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto t_21;
  t_21 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto u_21;
  u_21 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto v_21;
  v_21 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(u_4);
  goto s_21;
  u_4 :
  goto s_4;
  s_21 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  s_4 :
  Epopd(3,5);
  Return();
  p_4 :
  goto o_4;
  q_21 :
  Tset(App0("Nil"));
  Return();
  o_4 :
  Epopd(2,9);
  Return();
  n_4 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto g_22;
  g_22 :
  TestFunFC(r_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto h_22;
  h_22 :
  TestFunFC(r_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto i_22;
  i_22 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Rpush(w_4);
  goto f_22;
  w_4 :
  goto v_4;
  f_22 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(x_4);
  o_24 :
  Cpush(z_4);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_5);
  goto o_24;
  a_5 :
  AllBuild();
  goto y_4;
  z_4 :
  Ccall(_stratego_p_13);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto b_5;
  y_4 :
  Cpop();
  b_5 :
  Return();
  x_4 :
  Return();
  v_4 :
  Epopd(1,9);
  Return();
  h_4 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_i_10)
  Epushd(0,5);
  MoveTop(0,5);
  goto f_25;
  f_25 :
  TestFunFC(r_0,&&g_5,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto g_25;
  g_25 :
  TestFunFC(r_0,&&h_5,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto h_25;
  h_25 :
  TestFunFC(s_0,&&i_5,Egetd(0,4));
  Cpush(k_5);
  Rpush(m_5);
  goto p_24;
  m_5 :
  goto j_5;
  k_5 :
  Rpush(o_5);
  goto q_24;
  o_5 :
  goto n_5;
  j_5 :
  Cpop();
  n_5 :
  goto f_5;
  i_5 :
  Rpush(f_5);
  goto q_24;
  h_5 :
  Rpush(f_5);
  goto q_24;
  g_5 :
  Rpush(f_5);
  goto q_24;
  f_5 :
  goto d_5;
  q_24 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(p_5);
  r_27 :
  Cpush(r_5);
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Cpush(t_5);
  Epushd(1,7);
  MoveTop(1,1);
  goto w_24;
  w_24 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto x_24;
  x_24 :
  TestFunFC(r_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto y_24;
  y_24 :
  TestFunFC(r_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto z_24;
  z_24 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  Rpush(v_5);
  goto v_24;
  v_5 :
  goto u_5;
  v_24 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  u_5 :
  Epopd(1,7);
  goto s_5;
  t_5 :
  Ccall(_stratego_h_10);
  goto w_5;
  s_5 :
  Cpop();
  w_5 :
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  goto q_5;
  r_5 :
  Epushd(1,7);
  MoveTop(1,1);
  goto b_25;
  b_25 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_25;
  c_25 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto d_25;
  d_25 :
  TestFunFC(z_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto e_25;
  e_25 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(z_5);
  goto a_25;
  z_5 :
  goto y_5;
  a_25 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  y_5 :
  Epopd(1,7);
  goto x_5;
  q_5 :
  Cpop();
  x_5 :
  Cpush(b_6);
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_13);
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  goto a_6;
  b_6 :
  Rpush(d_6);
  goto r_27;
  d_6 :
  goto c_6;
  a_6 :
  Cpop();
  c_6 :
  Return();
  p_5 :
  Return();
  d_5 :
  goto c_5;
  p_24 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(e_6);
  p_27 :
  Cpush(g_6);
  Ccall(_stratego_p_13);
  goto f_6;
  g_6 :
  Ccontinue(h_6);
  Epushd(1,3);
  MoveTop(1,1);
  goto u_24;
  u_24 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(j_6);
  goto r_24;
  j_6 :
  goto i_6;
  r_24 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(k_6);
  q_27 :
  Cpush(m_6);
  Epushd(2,3);
  MoveTop(2,1);
  goto t_24;
  t_24 :
  TestFunFC(z_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_6);
  goto s_24;
  o_6 :
  goto n_6;
  s_24 :
  Move(1,2,2,2);
  Return();
  n_6 :
  Epopd(2,3);
  goto l_6;
  m_6 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_6);
  goto q_27;
  q_6 :
  AllBuild();
  goto p_6;
  l_6 :
  Cpop();
  p_6 :
  Return();
  k_6 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(r_6);
  goto p_27;
  r_6 :
  Return();
  i_6 :
  Epopd(1,3);
  goto f_6;
  h_6 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_6);
  goto p_27;
  t_6 :
  AllBuild();
  goto s_6;
  f_6 :
  Cpop();
  s_6 :
  Return();
  e_6 :
  Return();
  c_5 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_10)
  Epushd(0,17);
  MoveTop(0,9);
  goto j_29;
  j_29 :
  TestFunFC(e_0,&&a_7,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto k_29;
  k_29 :
  TestFunFC(b_7,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto l_29;
  l_29 :
  TestFunFC(d_7,&&c_7,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  MoveArg(0,1,0,14,1);
  goto m_29;
  m_29 :
  TestFunFC(m_0,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto n_29;
  n_29 :
  TestFunFC(m_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(z_6);
  goto t_27;
  c_7 :
  TestFunFC(e_7,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto o_29;
  o_29 :
  TestFunFC(m_0,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto p_29;
  p_29 :
  TestFunFC(b_7,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto q_29;
  q_29 :
  TestFunFC(e_7,&&f_7,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto r_29;
  r_29 :
  TestFunFC(m_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(z_6);
  goto u_27;
  f_7 :
  TestFunFC(d_7,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto s_29;
  s_29 :
  TestFunFC(m_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto t_29;
  t_29 :
  TestFunFC(m_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  Rpush(z_6);
  goto v_27;
  a_7 :
  TestFunFC(b_7,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto u_29;
  u_29 :
  TestFunFC(h_7,&&g_7,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto v_29;
  v_29 :
  TestFunFC(e_0,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto w_29;
  w_29 :
  TestFunFC(b_7,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto x_29;
  x_29 :
  TestFunFC(e_7,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto y_29;
  y_29 :
  TestFunFC(m_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(z_6);
  goto s_27;
  g_7 :
  TestFunFC(e_7,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto z_29;
  z_29 :
  TestFunFC(m_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto a_30;
  a_30 :
  TestFunFC(b_7,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto b_30;
  b_30 :
  TestFunFC(h_7,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto c_30;
  c_30 :
  TestFunFC(m_0,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  Rpush(z_6);
  goto w_27;
  z_6 :
  goto y_6;
  w_27 :
  Epushd(1,1);
  Move(0,12,0,16);
  Move(1,1,0,17);
  NotNULLd(0,12);
  NotNULLd(1,1);
  Tset(App2("Seq",App1("Assign",App1("Var",Egetd(0,12))),Egetd(1,1)));
  Epopd(1,1);
  Return();
  y_6 :
  goto x_6;
  v_27 :
  Epushd(1,3);
  Move(0,16,0,7);
  Move(1,1,0,8);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto f_29;
  f_29 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto g_29;
  g_29 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto h_29;
  h_29 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(j_7);
  goto x_28;
  j_7 :
  goto i_7;
  x_28 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(t_7);
  k_7 :
  Cpush(l_7);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto s_7;
  l_7 :
  IsAppl();
  MatchTravInit();
  q_7 :
  OneMatchNextSon();
  Cpush(q_7);
  Rpush(r_7);
  goto k_7;
  r_7 :
  Cpop();
  MatchTravEnd();
  s_7 :
  Return();
  t_7 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(3,1);
  goto c_29;
  c_29 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto d_29;
  d_29 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto e_29;
  e_29 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(v_7);
  goto z_28;
  v_7 :
  goto u_7;
  z_28 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(f_8);
  w_7 :
  Cpush(x_7);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  Cpop();
  goto e_8;
  x_7 :
  IsAppl();
  MatchTravInit();
  a_8 :
  OneMatchNextSon();
  Cpush(a_8);
  Rpush(b_8);
  goto w_7;
  b_8 :
  Cpop();
  MatchTravEnd();
  e_8 :
  Return();
  f_8 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_i_10);
  MoveTop(4,1);
  Move(1,2,4,1);
  Epopd(4,1);
  Return();
  u_7 :
  Epopd(3,5);
  Return();
  i_7 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,16)),App0("Nil")),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_g_10);
  MoveTop(1,3);
  NotNULLd(1,2);
  NotNULLd(0,16);
  NotNULLd(1,3);
  Tset(App2("Scope",Egetd(1,2),App2("Seq",App1("Assign",App1("Var",Egetd(0,16))),Egetd(1,3))));
  Epopd(1,3);
  Return();
  x_6 :
  goto w_6;
  u_27 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto t_28;
  t_28 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto u_28;
  u_28 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_28;
  v_28 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(h_8);
  goto l_28;
  h_8 :
  goto g_8;
  l_28 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(p_8);
  i_8 :
  Cpush(j_8);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto o_8;
  j_8 :
  IsAppl();
  MatchTravInit();
  m_8 :
  OneMatchNextSon();
  Cpush(m_8);
  Rpush(n_8);
  goto i_8;
  n_8 :
  Cpop();
  MatchTravEnd();
  o_8 :
  Return();
  p_8 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(3,1);
  goto q_28;
  q_28 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto r_28;
  r_28 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto s_28;
  s_28 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(r_8);
  goto n_28;
  r_8 :
  goto q_8;
  n_28 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(x_8);
  s_8 :
  Cpush(t_8);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  Cpop();
  goto w_8;
  t_8 :
  IsAppl();
  MatchTravInit();
  u_8 :
  OneMatchNextSon();
  Cpush(u_8);
  Rpush(v_8);
  goto s_8;
  v_8 :
  Cpop();
  MatchTravEnd();
  w_8 :
  Return();
  x_8 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_i_10);
  MoveTop(4,1);
  Move(1,1,4,1);
  Epopd(4,1);
  Return();
  q_8 :
  Epopd(3,5);
  Return();
  g_8 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(0,8);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,16)),App0("Nil")),App2("TCons",Egetd(0,8),App0("TNil")))));
  Ccall(_stratego_g_10);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(0,16);
  NotNULLd(1,2);
  Tset(App2("Scope",Egetd(1,1),App2("Seq",App1("Assign",App1("Var",Egetd(0,16))),Egetd(1,2))));
  Epopd(1,2);
  Return();
  w_6 :
  goto v_6;
  t_27 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto h_28;
  h_28 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto i_28;
  i_28 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto j_28;
  j_28 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(z_8);
  goto e_28;
  z_8 :
  goto y_8;
  e_28 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(f_9);
  a_9 :
  Cpush(b_9);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto e_9;
  b_9 :
  IsAppl();
  MatchTravInit();
  c_9 :
  OneMatchNextSon();
  Cpush(c_9);
  Rpush(d_9);
  goto a_9;
  d_9 :
  Cpop();
  MatchTravEnd();
  e_9 :
  Return();
  f_9 :
  NotNULLd(0,10);
  NotNULLd(0,16);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,16),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_i_10);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  y_8 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,16);
  NotNULLd(0,2);
  NotNULLd(0,17);
  Tset(App2("TCons",App2("Cons",Egetd(0,16),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,2)),App0("Nil")),App2("TCons",Egetd(0,17),App0("TNil")))));
  Ccall(_stratego_g_10);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Scope",Egetd(1,1),Egetd(1,2)));
  Epopd(1,2);
  Return();
  v_6 :
  goto u_6;
  s_27 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto a_28;
  a_28 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto b_28;
  b_28 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto c_28;
  c_28 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(h_9);
  goto x_27;
  h_9 :
  goto g_9;
  x_27 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(t_9);
  i_9 :
  Cpush(o_9);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto s_9;
  o_9 :
  IsAppl();
  MatchTravInit();
  p_9 :
  OneMatchNextSon();
  Cpush(p_9);
  Rpush(r_9);
  goto i_9;
  r_9 :
  Cpop();
  MatchTravEnd();
  s_9 :
  Return();
  t_9 :
  NotNULLd(0,14);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,14),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_i_10);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  g_9 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,11);
  NotNULLd(0,8);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,11),App0("Nil")),App2("TCons",Egetd(0,8),App0("TNil")))));
  Ccall(_stratego_g_10);
  MoveTop(1,2);
  NotNULLd(0,11);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Seq",App1("Build",Egetd(0,11)),App2("Scope",Egetd(1,1),Egetd(1,2))));
  Epopd(1,2);
  Return();
  u_6 :
  Epopd(0,17);
ENDPROC

PROC(_stratego_k_10)
  Epushd(0,6);
  MoveTop(0,3);
  goto v_34;
  v_34 :
  TestFunFC(x_10,&&w_10,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto w_34;
  w_34 :
  TestFunFC(s_3,&&y_10,Egetd(0,4));
  Rpush(v_10);
  goto j_34;
  y_10 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(v_10);
  goto k_34;
  w_10 :
  TestFunFC(a_11,&&z_10,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto x_34;
  x_34 :
  TestFunFC(s_3,&&b_11,Egetd(0,4));
  Rpush(v_10);
  goto l_34;
  b_11 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(v_10);
  goto m_34;
  z_10 :
  TestFunFC(d_11,&&c_11,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto y_34;
  y_34 :
  TestFunFC(s_3,&&e_11,Egetd(0,4));
  Rpush(v_10);
  goto n_34;
  e_11 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(v_10);
  goto o_34;
  c_11 :
  TestFunFC(g_11,&&f_11,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto z_34;
  z_34 :
  TestFunFC(s_3,&&h_11,Egetd(0,4));
  Rpush(v_10);
  goto p_34;
  h_11 :
  TestFunFC(z_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(v_10);
  goto q_34;
  f_11 :
  TestFunFC(j_11,&&i_11,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(v_10);
  goto r_34;
  i_11 :
  TestFunFC(e_12,&&p_11,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(v_10);
  goto s_34;
  p_11 :
  TestFunFC(i_12,&&h_12,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(v_10);
  goto t_34;
  h_12 :
  TestFunFC(j_12,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(v_10);
  goto u_34;
  v_10 :
  goto u_10;
  u_34 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Seqs",App2("Cons",App1("Build",Egetd(0,5)),App2("Cons",Egetd(0,4),App2("Cons",App1("Match",Egetd(0,6)),App0("Nil"))))));
  Return();
  u_10 :
  goto t_10;
  t_34 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,4),App1("Match",Egetd(0,5))));
  Return();
  t_10 :
  goto s_10;
  s_34 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",App1("Match",Egetd(0,4)),Egetd(0,5)));
  Return();
  s_10 :
  goto r_10;
  r_34 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App2("Seq",App1("Build",Egetd(0,5)),Egetd(0,4)));
  Return();
  r_10 :
  goto q_10;
  q_34 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,1),App2("Lets",Egetd(0,2),Egetd(0,5))));
  Return();
  q_10 :
  goto p_10;
  p_34 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  p_10 :
  goto o_10;
  o_34 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("LChoice",Egetd(0,1),App1("LChoices",Egetd(0,2))));
  Return();
  o_10 :
  goto b_10;
  n_34 :
  Tset(App0("Fail"));
  Return();
  b_10 :
  goto a_10;
  m_34 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Choice",Egetd(0,1),App1("Choices",Egetd(0,2))));
  Return();
  a_10 :
  goto z_9;
  l_34 :
  Tset(App0("Fail"));
  Return();
  z_9 :
  goto y_9;
  k_34 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Seq",Egetd(0,1),App1("Seqs",Egetd(0,2))));
  Return();
  y_9 :
  goto x_9;
  j_34 :
  Tset(App0("Id"));
  Return();
  x_9 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_k_11)
  Epushd(0,9);
  MoveTop(0,2);
  goto f_36;
  f_36 :
  TestFunFC(v_12,&&u_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(t_12);
  goto z_35;
  u_12 :
  TestFunFC(x_12,&&w_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(t_12);
  goto a_36;
  w_12 :
  TestFunFC(z_12,&&y_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto g_36;
  g_36 :
  TestFunFC(z_12,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(t_12);
  goto c_36;
  y_12 :
  TestFunFC(b_13,&&a_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto h_36;
  h_36 :
  TestFunFC(b_13,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(t_12);
  goto d_36;
  a_13 :
  TestFunFC(d_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto i_36;
  i_36 :
  TestFunFC(d_13,&&e_13,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(t_12);
  goto b_36;
  e_13 :
  TestFunFC(b_7,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto j_36;
  j_36 :
  TestFunFC(d_13,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto k_36;
  k_36 :
  TestFunFC(b_7,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,9,0,6,1);
  goto l_36;
  l_36 :
  TestFunFC(h_7,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  Rpush(t_12);
  goto e_36;
  t_12 :
  goto p_12;
  e_36 :
  NotNULLd(0,5);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset(App1("Where",App2("Seq",Egetd(0,5),App2("Seq",App1("Build",Egetd(0,8)),Egetd(0,9)))));
  Return();
  p_12 :
  goto o_12;
  d_36 :
  NotNULLd(0,4);
  Tset(App1("Test",Egetd(0,4)));
  Return();
  o_12 :
  goto n_12;
  c_36 :
  NotNULLd(0,4);
  Tset(App1("Test",Egetd(0,4)));
  Return();
  n_12 :
  goto m_12;
  b_36 :
  NotNULLd(0,4);
  Tset(App1("Where",Egetd(0,4)));
  Return();
  m_12 :
  goto l_12;
  a_36 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  l_12 :
  goto k_12;
  z_35 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  k_12 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_l_11)
  Epushd(0,5);
  MoveTop(0,1);
  goto l_37;
  l_37 :
  TestFunFC(v_12,&&e_14,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto m_37;
  m_37 :
  TestFunFC(v_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(c_14);
  goto i_37;
  e_14 :
  TestFunFC(b_7,&&f_14,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto n_37;
  n_37 :
  TestFunFC(b_7,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(c_14);
  goto j_37;
  f_14 :
  TestFunFC(x_12,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto o_37;
  o_37 :
  TestFunFC(x_12,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(c_14);
  goto k_37;
  c_14 :
  goto y_13;
  k_37 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("LChoice",Egetd(0,3),App2("LChoice",Egetd(0,4),Egetd(0,5))));
  Return();
  y_13 :
  goto g_13;
  j_37 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,3),App2("Seq",Egetd(0,4),Egetd(0,5))));
  Return();
  g_13 :
  goto f_13;
  i_37 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Choice",Egetd(0,3),App2("Choice",Egetd(0,4),Egetd(0,5))));
  Return();
  f_13 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_m_11)
  Epushd(0,3);
  MoveTop(0,2);
  goto u_38;
  u_38 :
  TestFunFC(b_13,&&d_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto v_38;
  v_38 :
  TestFunFC(j_16,&&fail,Egetd(0,3));
  Rpush(b_16);
  goto d_38;
  d_16 :
  TestFunFC(z_12,&&k_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto w_38;
  w_38 :
  TestFunFC(j_16,&&fail,Egetd(0,3));
  Rpush(b_16);
  goto e_38;
  k_16 :
  TestFunFC(b_7,&&o_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto x_38;
  x_38 :
  TestFunFC(j_16,&&fail,Egetd(0,3));
  Rpush(b_16);
  goto f_38;
  o_16 :
  TestFunFC(e_0,&&p_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto y_38;
  y_38 :
  TestFunFC(j_16,&&fail,Egetd(0,1));
  Rpush(b_16);
  goto g_38;
  p_16 :
  TestFunFC(w_17,&&u_17,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto z_38;
  z_38 :
  TestFunFC(j_16,&&fail,Egetd(0,1));
  Rpush(b_16);
  goto h_38;
  u_17 :
  TestFunFC(p_18,&&x_17,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto a_39;
  a_39 :
  TestFunFC(j_16,&&fail,Egetd(0,3));
  Rpush(b_16);
  goto i_38;
  x_17 :
  TestFunFC(d_19,&&b_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto b_39;
  b_39 :
  TestFunFC(j_16,&&fail,Egetd(0,3));
  Rpush(b_16);
  goto j_38;
  b_19 :
  TestFunFC(f_19,&&e_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto c_39;
  c_39 :
  TestFunFC(j_16,&&fail,Egetd(0,1));
  Rpush(b_16);
  goto k_38;
  e_19 :
  TestFunFC(h_19,&&g_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(b_16);
  goto l_38;
  g_19 :
  TestFunFC(v_12,&&r_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto d_39;
  d_39 :
  TestFunFC(j_16,&&s_19,Egetd(0,1));
  goto e_39;
  e_39 :
  TestFunFC(j_16,&&t_19,Egetd(0,3));
  Cpush(a_20);
  Rpush(b_20);
  goto m_38;
  b_20 :
  goto u_19;
  a_20 :
  Rpush(g_20);
  goto n_38;
  g_20 :
  goto d_20;
  u_19 :
  Cpop();
  d_20 :
  goto b_16;
  t_19 :
  Rpush(b_16);
  goto n_38;
  s_19 :
  goto f_39;
  f_39 :
  TestFunFC(j_16,&&fail,Egetd(0,3));
  Rpush(b_16);
  goto m_38;
  r_19 :
  TestFunFC(x_12,&&i_20,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto g_39;
  g_39 :
  TestFunFC(j_16,&&j_20,Egetd(0,1));
  goto h_39;
  h_39 :
  TestFunFC(j_16,&&t_20,Egetd(0,3));
  Cpush(w_20);
  Rpush(b_21);
  goto o_38;
  b_21 :
  goto u_20;
  w_20 :
  Rpush(d_21);
  goto p_38;
  d_21 :
  goto c_21;
  u_20 :
  Cpop();
  c_21 :
  goto b_16;
  t_20 :
  Rpush(b_16);
  goto p_38;
  j_20 :
  goto i_39;
  i_39 :
  TestFunFC(j_16,&&fail,Egetd(0,3));
  Rpush(b_16);
  goto o_38;
  i_20 :
  TestFunFC(d_13,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto j_39;
  j_39 :
  TestFunFC(j_16,&&fail,Egetd(0,3));
  Rpush(b_16);
  goto q_38;
  b_16 :
  goto z_15;
  q_38 :
  Tset(App0("Fail"));
  Return();
  z_15 :
  goto y_15;
  p_38 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  y_15 :
  goto p_15;
  o_38 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  p_15 :
  goto j_15;
  n_38 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  j_15 :
  goto i_15;
  m_38 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  i_15 :
  goto e_15;
  l_38 :
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(f_21);
  a_40 :
  Cpush(e_22);
  Epushd(1,3);
  MoveTop(1,1);
  goto s_38;
  s_38 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto t_38;
  t_38 :
  TestFunFC(j_16,&&fail,Egetd(1,2));
  Rpush(y_22);
  goto r_38;
  y_22 :
  goto x_22;
  r_38 :
  Return();
  x_22 :
  Epopd(1,3);
  goto g_21;
  e_22 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_23);
  goto a_40;
  t_23 :
  AllBuild();
  goto z_22;
  g_21 :
  Cpop();
  z_22 :
  Return();
  f_21 :
  Tpop();
  Tset(App0("Fail"));
  Return();
  e_15 :
  goto d_15;
  k_38 :
  Tset(App0("Fail"));
  Return();
  d_15 :
  goto x_14;
  j_38 :
  Tset(App0("Fail"));
  Return();
  x_14 :
  goto v_14;
  i_38 :
  Tset(App0("Fail"));
  Return();
  v_14 :
  goto u_14;
  h_38 :
  Tset(App0("Fail"));
  Return();
  u_14 :
  goto t_14;
  g_38 :
  Tset(App0("Fail"));
  Return();
  t_14 :
  goto s_14;
  f_38 :
  Tset(App0("Fail"));
  Return();
  s_14 :
  goto j_14;
  e_38 :
  Tset(App0("Id"));
  Return();
  j_14 :
  goto g_14;
  d_38 :
  Tset(App0("Fail"));
  Return();
  g_14 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_r_11)
  Epushd(0,3);
  MoveTop(0,2);
  goto l_40;
  l_40 :
  TestFunFC(b_13,&&t_25,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto m_40;
  m_40 :
  TestFunFC(x_25,&&fail,Egetd(0,3));
  Rpush(s_25);
  goto b_40;
  t_25 :
  TestFunFC(z_12,&&d_26,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto n_40;
  n_40 :
  TestFunFC(x_25,&&fail,Egetd(0,3));
  Rpush(s_25);
  goto c_40;
  d_26 :
  TestFunFC(b_7,&&e_26,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto o_40;
  o_40 :
  TestFunFC(x_25,&&f_26,Egetd(0,1));
  goto p_40;
  p_40 :
  TestFunFC(x_25,&&g_26,Egetd(0,3));
  Cpush(k_26);
  Rpush(r_26);
  goto d_40;
  r_26 :
  goto h_26;
  k_26 :
  Rpush(t_26);
  goto e_40;
  t_26 :
  goto s_26;
  h_26 :
  Cpop();
  s_26 :
  goto s_25;
  g_26 :
  Rpush(s_25);
  goto e_40;
  f_26 :
  goto q_40;
  q_40 :
  TestFunFC(x_25,&&fail,Egetd(0,3));
  Rpush(s_25);
  goto d_40;
  e_26 :
  TestFunFC(x_12,&&u_26,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto r_40;
  r_40 :
  TestFunFC(x_25,&&fail,Egetd(0,3));
  Rpush(s_25);
  goto f_40;
  u_26 :
  TestFunFC(e_0,&&v_26,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto s_40;
  s_40 :
  TestFunFC(x_25,&&fail,Egetd(0,1));
  Rpush(s_25);
  goto g_40;
  v_26 :
  TestFunFC(w_17,&&w_26,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto t_40;
  t_40 :
  TestFunFC(x_25,&&fail,Egetd(0,1));
  Rpush(s_25);
  goto h_40;
  w_26 :
  TestFunFC(y_26,&&x_26,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto u_40;
  u_40 :
  TestFunFC(x_25,&&fail,Egetd(0,3));
  Rpush(s_25);
  goto i_40;
  x_26 :
  TestFunFC(d_13,&&z_26,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto v_40;
  v_40 :
  TestFunFC(x_25,&&fail,Egetd(0,3));
  Rpush(s_25);
  goto j_40;
  z_26 :
  TestFunFC(a_27,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto w_40;
  w_40 :
  TestFunFC(d_27,&&fail,Egetd(0,3));
  Rpush(s_25);
  goto k_40;
  s_25 :
  goto o_25;
  k_40 :
  Tset(App0("Id"));
  Return();
  o_25 :
  goto n_25;
  j_40 :
  Tset(App0("Id"));
  Return();
  n_25 :
  goto m_24;
  i_40 :
  Tset(App0("Id"));
  Return();
  m_24 :
  goto l_24;
  h_40 :
  Tset(App0("Id"));
  Return();
  l_24 :
  goto f_24;
  g_40 :
  Tset(App0("Id"));
  Return();
  f_24 :
  goto d_24;
  f_40 :
  Tset(App0("Id"));
  Return();
  d_24 :
  goto c_24;
  e_40 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  c_24 :
  goto w_23;
  d_40 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  w_23 :
  goto v_23;
  c_40 :
  Tset(App0("Fail"));
  Return();
  v_23 :
  goto u_23;
  b_40 :
  Tset(App0("Id"));
  Return();
  u_23 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_s_11)
  Cpush(f_27);
  Ccall(_stratego_r_11);
  goto e_27;
  f_27 :
  Ccontinue(g_27);
  Ccall(_stratego_m_11);
  goto e_27;
  g_27 :
  Ccontinue(h_27);
  Ccall(_stratego_l_11);
  goto e_27;
  h_27 :
  Ccontinue(i_27);
  Ccall(_stratego_k_11);
  goto e_27;
  i_27 :
  Epushd(0,3);
  MoveTop(0,1);
  goto g_41;
  g_41 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto h_41;
  h_41 :
  TestFunFC(s_3,&&fail,Egetd(0,2));
  Rpush(l_27);
  goto f_41;
  l_27 :
  goto k_27;
  f_41 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  k_27 :
  Epopd(0,3);
  goto j_27;
  e_27 :
  Cpop();
  j_27 :
ENDPROC

PROC(_stratego_t_11)
  Cpush(n_27);
  Ccall(_stratego_s_11);
  goto m_27;
  n_27 :
  Ccontinue(o_27);
  Ccall(_stratego_k_10);
  goto m_27;
  o_27 :
  Ccontinue(y_27);
  Epushd(0,5);
  MoveTop(0,1);
  goto n_41;
  n_41 :
  TestFunFC(b_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_41;
  o_41 :
  TestFunFC(f_28,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(d_28);
  goto m_41;
  d_28 :
  goto z_27;
  m_41 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,4),App2("Seq",Egetd(0,2),Egetd(0,5))));
  Return();
  z_27 :
  Epopd(0,5);
  goto m_27;
  y_27 :
  Ccontinue(g_28);
  Ccall(_stratego_j_10);
  goto m_27;
  g_28 :
  Epushd(0,9);
  MoveTop(0,4);
  goto l_42;
  l_42 :
  TestFunFC(e_0,&&a_29,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  goto m_42;
  m_42 :
  TestFunFC(e_0,&&fail,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,3,0,9,1);
  Rpush(y_28);
  goto p_41;
  a_29 :
  TestFunFC(b_7,&&b_29,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  goto n_42;
  n_42 :
  TestFunFC(h_7,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto o_42;
  o_42 :
  TestFunFC(b_7,&&fail,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,3,0,9,1);
  goto p_42;
  p_42 :
  TestFunFC(h_7,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(y_28);
  goto q_41;
  b_29 :
  TestFunFC(f_28,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  goto q_42;
  q_42 :
  TestFunFC(i_29,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  MoveArg(0,8,0,5,2);
  goto r_42;
  r_42 :
  TestFunFC(s_3,&&fail,Egetd(0,7));
  Cpush(v_30);
  Rpush(w_30);
  goto r_41;
  w_30 :
  goto u_30;
  v_30 :
  Rpush(e_31);
  goto s_41;
  e_31 :
  goto x_30;
  u_30 :
  Cpop();
  x_30 :
  goto y_28;
  y_28 :
  goto w_28;
  s_41 :
  NotNULLd(0,6);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset(App2("Let",App4("SDef",App2("Cons",App0("DontInline"),App0("Nil")),Egetd(0,6),App0("Nil"),Egetd(0,8)),Egetd(0,9)));
  Return();
  w_28 :
  goto p_28;
  r_41 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,9);
  Tset(Egetd(0,9));
  Rpush(f_31);
  z_44 :
  Cpush(k_31);
  Epushd(3,4);
  MoveTop(3,1);
  goto z_41;
  z_41 :
  TestFunFC(n_31,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,4,3,1,1);
  goto a_42;
  a_42 :
  TestFunFC(u_31,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  goto b_42;
  b_42 :
  TestFunFC(s_3,&&fail,Egetd(3,4));
  Rpush(m_31);
  goto y_41;
  m_31 :
  goto l_31;
  y_41 :
  Move(0,6,3,3);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  l_31 :
  Epopd(3,4);
  goto j_31;
  k_31 :
  Cpush(z_31);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,3);
  goto e_42;
  e_42 :
  TestFunFC(k_32,&&d_32,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  MoveArg(3,1,3,3,2);
  MoveArg(3,2,3,3,3);
  Rpush(c_32);
  goto c_42;
  d_32 :
  TestFunFC(l_32,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(c_32);
  goto d_42;
  c_32 :
  goto b_32;
  d_42 :
  Return();
  b_32 :
  goto a_32;
  c_42 :
  Return();
  a_32 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  z_31 :
  IsAppl();
  OneInit();
  s_32 :
  OneNextSon();
  Cpush(s_32);
  Rpush(x_32);
  goto z_44;
  x_32 :
  Cpop();
  OneBuild();
  goto v_31;
  j_31 :
  Cpop();
  v_31 :
  Return();
  f_31 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Call",App1("SVar",Egetd(0,6)),App0("Nil")),App2("TCons",Egetd(1,1),App0("TNil"))));
  Cpush(y_32);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,1);
  goto i_42;
  i_42 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto j_42;
  j_42 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto k_42;
  k_42 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(a_33);
  goto g_42;
  a_33 :
  goto z_32;
  g_42 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(w_33);
  i_33 :
  Cpush(j_33);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,2,4,1);
  Epopd(4,1);
  Cpop();
  goto v_33;
  j_33 :
  IsAppl();
  MatchTravInit();
  q_33 :
  OneMatchNextSon();
  Cpush(q_33);
  Rpush(r_33);
  goto i_33;
  r_33 :
  Cpop();
  MatchTravEnd();
  v_33 :
  Return();
  w_33 :
  Return();
  z_32 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  y_32 :
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  p_28 :
  goto o_28;
  q_41 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Build",Egetd(0,2)),Egetd(0,3)));
  Return();
  o_28 :
  goto m_28;
  p_41 :
  Epushd(1,5);
  NotNULLd(0,5);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,1),App0("TNil"))));
  MoveTop(1,1);
  goto v_41;
  v_41 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_41;
  w_41 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto x_41;
  x_41 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(y_33);
  goto t_41;
  y_33 :
  goto x_33;
  t_41 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(b_34);
  y_44 :
  Cpush(d_34);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_35);
  goto y_44;
  g_35 :
  AllBuild();
  goto c_34;
  d_34 :
  Ccall(_stratego_p_13);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto h_35;
  c_34 :
  Cpop();
  h_35 :
  Return();
  b_34 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,3);
  Tset(App2("Scope",Egetd(2,1),Egetd(0,3)));
  Epopd(2,1);
  Return();
  x_33 :
  Epopd(1,5);
  Return();
  m_28 :
  Epopd(0,9);
  goto k_28;
  m_27 :
  Cpop();
  k_28 :
ENDPROC

PROC(_stratego_u_11)
  Rpush(i_35);
  p_47 :
  Cpush(k_35);
  j_35 :
  Cpush(m_35);
  Ccall(_stratego_t_11);
  goto l_35;
  m_35 :
  Epushd(0,3);
  MoveTop(0,1);
  goto g_45;
  g_45 :
  TestFunFC(h_19,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_35);
  goto b_45;
  p_35 :
  goto o_35;
  b_45 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_35);
  r_47 :
  Cpush(s_35);
  Ccall(_stratego_p_13);
  goto r_35;
  s_35 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,2);
  goto e_45;
  e_45 :
  TestFunFC(a_27,&&x_35,Egetd(3,2));
  MoveArg(3,1,3,2,0);
  Rpush(w_35);
  goto c_45;
  x_35 :
  TestFunFC(x_25,&&fail,Egetd(3,2));
  Rpush(w_35);
  goto d_45;
  w_35 :
  goto v_35;
  d_45 :
  Tset(App0("Wld"));
  Return();
  v_35 :
  goto u_35;
  c_45 :
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Return();
  u_35 :
  Epopd(3,2);
  OneNextSon();
  Rpush(y_35);
  goto r_47;
  y_35 :
  AllBuild();
  goto t_35;
  r_35 :
  Cpop();
  t_35 :
  Return();
  q_35 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App1("Match",App2("Op",Egetd(0,2),Egetd(1,1))));
  Epopd(1,1);
  Return();
  o_35 :
  Epopd(0,3);
  goto n_35;
  l_35 :
  Cpop();
  n_35 :
  Tduplinv();
  goto j_35;
  k_35 :
  AllInit();
  p_36 :
  AllNextSon(&&q_36);
  Rpush(r_36);
  goto p_47;
  r_36 :
  goto p_36;
  q_36 :
  AllBuild();
  Cpush(t_36);
  s_36 :
  Cpush(b_37);
  Ccall(_stratego_t_11);
  goto a_37;
  b_37 :
  Epushd(0,3);
  MoveTop(0,1);
  goto m_45;
  m_45 :
  TestFunFC(h_19,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(e_37);
  goto h_45;
  e_37 :
  goto d_37;
  h_45 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(f_37);
  t_47 :
  Cpush(h_37);
  Ccall(_stratego_p_13);
  goto g_37;
  h_37 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,2);
  goto k_45;
  k_45 :
  TestFunFC(a_27,&&y_37,Egetd(3,2));
  MoveArg(3,1,3,2,0);
  Rpush(x_37);
  goto i_45;
  y_37 :
  TestFunFC(x_25,&&fail,Egetd(3,2));
  Rpush(x_37);
  goto j_45;
  x_37 :
  goto w_37;
  j_45 :
  Tset(App0("Wld"));
  Return();
  w_37 :
  goto v_37;
  i_45 :
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Return();
  v_37 :
  Epopd(3,2);
  OneNextSon();
  Rpush(z_37);
  goto t_47;
  z_37 :
  AllBuild();
  goto u_37;
  g_37 :
  Cpop();
  u_37 :
  Return();
  f_37 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App1("Match",App2("Op",Egetd(0,2),Egetd(1,1))));
  Epopd(1,1);
  Return();
  d_37 :
  Epopd(0,3);
  goto c_37;
  a_37 :
  Cpop();
  c_37 :
  Tduplinv();
  goto s_36;
  t_36 :
  Return();
  i_35 :
  Rpush(a_38);
  u_47 :
  Cpush(c_38);
  Epushd(0,5);
  MoveTop(0,1);
  goto w_45;
  w_45 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto x_45;
  x_45 :
  TestFunFC(b_7,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(o_39);
  goto n_45;
  o_39 :
  goto n_39;
  n_45 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_d_10);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(0,2),App0("TNil"))));
  MoveTop(2,2);
  goto t_45;
  t_45 :
  TestFunFC(r_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto u_45;
  u_45 :
  TestFunFC(r_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto v_45;
  v_45 :
  TestFunFC(s_0,&&fail,Egetd(2,6));
  Rpush(q_39);
  goto p_45;
  q_39 :
  goto p_39;
  p_45 :
  Epushd(3,3);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App0("TNil"))));
  Ccall(_stratego_i_10);
  MoveTop(3,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_i_10);
  MoveTop(3,2);
  Move(1,1,3,2);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_i_10);
  MoveTop(3,3);
  Move(1,2,3,3);
  Cpush(r_39);
  Tdupl();
  Ccall(_stratego_p_13);
  Cpop();
  Crestore();
  Cjump();
  r_39 :
  Epopd(3,3);
  Return();
  p_39 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,4);
  NotNULLd(1,2);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(1,1),App2("Seq",Egetd(0,4),App2("Scope",Egetd(1,2),Egetd(0,5)))));
  Epopd(1,2);
  Return();
  n_39 :
  Epopd(0,5);
  goto b_38;
  c_38 :
  goto s_39;
  b_38 :
  Cpop();
  s_39 :
  AllInit();
  w_39 :
  AllNextSon(&&x_39);
  Rpush(y_39);
  goto u_47;
  y_39 :
  goto w_39;
  x_39 :
  AllBuild();
  Return();
  a_38 :
ENDPROC

PROC(_stratego_v_11)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_47;
  w_47 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(a_41);
  goto v_47;
  a_41 :
  goto z_39;
  v_47 :
  Return();
  z_39 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_11)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_k_13);
  Tset(MakeInt(1));
  Ccall(_stratego_s_12);
ENDPROC

PROC(_stratego_x_11)
  Epushd(0,2);
  Tdupl();
  Cpush(c_41);
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Cpush(d_41);
  Tdupl();
  Rpush(e_41);
  u_48 :
  Cpush(u_41);
  Epushd(1,3);
  MoveTop(1,1);
  goto z_47;
  z_47 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto a_48;
  a_48 :
  TestFunFC(x_42,&&fail,Egetd(1,2));
  Rpush(h_42);
  goto y_47;
  h_42 :
  goto f_42;
  y_47 :
  Return();
  f_42 :
  Epopd(1,3);
  goto l_41;
  u_41 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_42);
  goto u_48;
  z_42 :
  AllBuild();
  goto y_42;
  l_41 :
  Cpop();
  y_42 :
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
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Rpush(j_43);
  v_48 :
  Cpush(l_43);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_48;
  c_48 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_48;
  d_48 :
  TestFunFC(u_43,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_43);
  goto b_48;
  s_43 :
  goto r_43;
  b_48 :
  Move(0,2,1,3);
  Return();
  r_43 :
  Epopd(1,4);
  goto k_43;
  l_43 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_43);
  goto v_48;
  w_43 :
  AllBuild();
  goto v_43;
  k_43 :
  Cpop();
  v_43 :
  Return();
  j_43 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Rpush(x_43);
  w_48 :
  Cpush(z_43);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_48;
  f_48 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto g_48;
  g_48 :
  TestFunFC(s_44,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_44);
  goto e_48;
  p_44 :
  goto a_44;
  e_48 :
  Move(0,1,1,3);
  Return();
  a_44 :
  Epopd(1,4);
  goto y_43;
  z_43 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_44);
  goto w_48;
  v_44 :
  AllBuild();
  goto t_44;
  y_43 :
  Cpop();
  t_44 :
  Return();
  x_43 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_k_13);
  goto b_41;
  c_41 :
  goto w_44;
  b_41 :
  Cpop();
  w_44 :
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
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Cpush(f_45);
  Rpush(l_45);
  w_49 :
  Cpush(q_45);
  Epushd(1,4);
  MoveTop(1,1);
  goto y_48;
  y_48 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto z_48;
  z_48 :
  TestFunFC(b_46,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_45);
  goto x_48;
  s_45 :
  goto r_45;
  x_48 :
  Move(0,1,1,3);
  Return();
  r_45 :
  Epopd(1,4);
  goto o_45;
  q_45 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_46);
  goto w_49;
  g_46 :
  AllBuild();
  goto c_46;
  o_45 :
  Cpop();
  c_46 :
  Return();
  l_45 :
  goto x_44;
  f_45 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto l_46;
  x_44 :
  Cpop();
  l_46 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_v_11);
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
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  Cpush(q_46);
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Rpush(x_46);
  x_49 :
  Cpush(z_46);
  Epushd(1,3);
  MoveTop(1,1);
  goto f_49;
  f_49 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_49;
  g_49 :
  TestFunFC(k_47,&&fail,Egetd(1,2));
  Rpush(j_47);
  goto e_49;
  j_47 :
  goto d_47;
  e_49 :
  Return();
  d_47 :
  Epopd(1,3);
  goto y_46;
  z_46 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_49);
  goto x_49;
  a_49 :
  AllBuild();
  goto m_47;
  y_46 :
  Cpop();
  m_47 :
  Return();
  x_46 :
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_11);
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  goto m_46;
  q_46 :
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_11);
  OneNextSon();
  Ccall(_stratego_v_11);
  AllBuild();
  AllBuild();
  goto b_49;
  m_46 :
  Cpop();
  b_49 :
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
  Cpush(d_49);
  Rpush(m_49);
  r_50 :
  Cpush(p_49);
  Epushd(1,4);
  MoveTop(1,1);
  goto z_49;
  z_49 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto a_50;
  a_50 :
  TestFunFC(s_49,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(r_49);
  goto y_49;
  r_49 :
  goto q_49;
  y_49 :
  Move(0,1,1,3);
  Return();
  q_49 :
  Epopd(1,4);
  goto o_49;
  p_49 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_50);
  goto r_50;
  c_50 :
  AllBuild();
  goto b_50;
  o_49 :
  Cpop();
  b_50 :
  Return();
  m_49 :
  goto c_49;
  d_49 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto d_50;
  c_49 :
  Cpop();
  d_50 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_q_12);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
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
  Rpush(e_50);
  a_51 :
  Cpush(m_50);
  Epushd(1,4);
  MoveTop(1,1);
  goto t_50;
  t_50 :
  TestFunFC(z_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto u_50;
  u_50 :
  TestFunFC(s_44,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_50);
  goto s_50;
  o_50 :
  goto n_50;
  s_50 :
  Move(0,1,1,3);
  Return();
  n_50 :
  Epopd(1,4);
  goto k_50;
  m_50 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_52);
  goto a_51;
  a_52 :
  AllBuild();
  goto q_50;
  k_50 :
  Cpop();
  q_50 :
  Return();
  e_50 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_k_13);
  Tset(MakeInt(1));
  Ccall(_stratego_s_12);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_51;
  c_51 :
  TestFunFC(j_52,&&fail,Egetd(0,1));
  Rpush(g_52);
  goto b_51;
  g_52 :
  goto d_52;
  b_51 :
  Return();
  d_52 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_n_13)
  Tdupl();
  l_52 :
  TestFunTop(z_0);
  Cpush(n_52);
  Arg(0);
  Cpush(u_52);
  Ccall(_stratego_m_13);
  goto r_52;
  u_52 :
  Epushd(0,2);
  MoveTop(0,1);
  goto f_51;
  f_51 :
  TestFunFC(c_53,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(z_52);
  goto e_51;
  z_52 :
  goto y_52;
  e_51 :
  Return();
  y_52 :
  Epopd(0,2);
  goto v_52;
  r_52 :
  Cpop();
  v_52 :
  Tpop();
  Cpop();
  goto q_52;
  n_52 :
  Arg(1);
  Tdrop();
  goto l_52;
  q_52 :
  Tpop();
  Ccall(_stratego_l_13);
ENDPROC

PROC(_stratego_o_13)
  Epushd(0,5);
  MoveTop(0,3);
  goto x_53;
  x_53 :
  TestFunFC(z_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto y_53;
  y_53 :
  TestFunFC(z_0,&&o_54,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(r_54);
  Rpush(s_54);
  goto j_51;
  s_54 :
  goto p_54;
  r_54 :
  Ccontinue(t_54);
  Rpush(u_54);
  goto k_51;
  u_54 :
  goto p_54;
  t_54 :
  Ccontinue(w_54);
  Rpush(x_54);
  goto l_51;
  x_54 :
  goto p_54;
  w_54 :
  Ccontinue(y_54);
  Rpush(z_54);
  goto m_51;
  z_54 :
  goto p_54;
  y_54 :
  Ccontinue(b_55);
  Rpush(c_55);
  goto n_51;
  c_55 :
  goto p_54;
  b_55 :
  Ccontinue(d_55);
  Rpush(e_55);
  goto o_51;
  e_55 :
  goto p_54;
  d_55 :
  Ccontinue(f_55);
  Rpush(h_55);
  goto p_51;
  h_55 :
  goto p_54;
  f_55 :
  Ccontinue(i_55);
  Rpush(j_55);
  goto q_51;
  j_55 :
  goto p_54;
  i_55 :
  Ccontinue(k_55);
  Rpush(l_55);
  goto r_51;
  l_55 :
  goto p_54;
  k_55 :
  Ccontinue(m_55);
  Rpush(n_55);
  goto s_51;
  n_55 :
  goto p_54;
  m_55 :
  Ccontinue(p_55);
  Rpush(q_55);
  goto t_51;
  q_55 :
  goto p_54;
  p_55 :
  Ccontinue(r_55);
  Rpush(s_55);
  goto u_51;
  s_55 :
  goto p_54;
  r_55 :
  Ccontinue(t_55);
  Rpush(u_55);
  goto v_51;
  u_55 :
  goto p_54;
  t_55 :
  Ccontinue(v_55);
  Rpush(x_55);
  goto w_51;
  x_55 :
  goto p_54;
  v_55 :
  Rpush(z_55);
  goto x_51;
  z_55 :
  goto y_55;
  p_54 :
  Cpop();
  y_55 :
  goto n_54;
  o_54 :
  Cpush(b_56);
  Rpush(c_56);
  goto j_51;
  c_56 :
  goto a_56;
  b_56 :
  Ccontinue(d_56);
  Rpush(f_56);
  goto k_51;
  f_56 :
  goto a_56;
  d_56 :
  Ccontinue(g_56);
  Rpush(h_56);
  goto l_51;
  h_56 :
  goto a_56;
  g_56 :
  Ccontinue(i_56);
  Rpush(j_56);
  goto m_51;
  j_56 :
  goto a_56;
  i_56 :
  Ccontinue(k_56);
  Rpush(l_56);
  goto n_51;
  l_56 :
  goto a_56;
  k_56 :
  Ccontinue(n_56);
  Rpush(o_56);
  goto t_51;
  o_56 :
  goto a_56;
  n_56 :
  Ccontinue(p_56);
  Rpush(q_56);
  goto u_51;
  q_56 :
  goto a_56;
  p_56 :
  Ccontinue(r_56);
  Rpush(s_56);
  goto v_51;
  s_56 :
  goto a_56;
  r_56 :
  Ccontinue(u_56);
  Rpush(v_56);
  goto w_51;
  v_56 :
  goto a_56;
  u_56 :
  Rpush(x_56);
  goto x_51;
  x_56 :
  goto w_56;
  a_56 :
  Cpop();
  w_56 :
  goto n_54;
  n_54 :
  goto m_54;
  x_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto v_53;
  v_53 :
  TestStr(1,1,"-?",&&fail);
  Rpush(a_57);
  goto u_53;
  a_57 :
  goto z_56;
  u_53 :
  Return();
  z_56 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  m_54 :
  goto k_54;
  w_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_53;
  s_53 :
  TestStr(1,1,"-h",&&fail);
  Rpush(c_57);
  goto r_53;
  c_57 :
  goto b_57;
  r_53 :
  Return();
  b_57 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_54 :
  goto j_54;
  v_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_53;
  p_53 :
  TestStr(1,1,"--help",&&fail);
  Rpush(f_57);
  goto o_53;
  f_57 :
  goto e_57;
  o_53 :
  Return();
  e_57 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_54 :
  goto i_54;
  u_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_53;
  m_53 :
  TestStr(1,1,"-s",&&fail);
  Rpush(h_57);
  goto l_53;
  h_57 :
  goto g_57;
  l_53 :
  Return();
  g_57 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_54 :
  goto h_54;
  t_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_53;
  j_53 :
  TestStr(1,1,"-b",&&fail);
  Rpush(k_57);
  goto i_53;
  k_57 :
  goto j_57;
  i_53 :
  Return();
  j_57 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_54 :
  goto f_54;
  s_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_53;
  f_53 :
  TestStr(1,1,"--output",&&fail);
  Rpush(m_57);
  goto e_53;
  m_57 :
  goto l_57;
  e_53 :
  Return();
  l_57 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  f_54 :
  goto e_54;
  r_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto b_53;
  b_53 :
  TestStr(1,1,"-o",&&fail);
  Rpush(p_57);
  goto a_53;
  p_57 :
  goto o_57;
  a_53 :
  Return();
  o_57 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  e_54 :
  goto w_53;
  q_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_52;
  x_52 :
  TestStr(1,1,"--input",&&fail);
  Rpush(w_57);
  goto w_52;
  w_57 :
  goto t_57;
  w_52 :
  Return();
  t_57 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  w_53 :
  goto t_53;
  p_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_52;
  t_52 :
  TestStr(1,1,"-i",&&fail);
  Rpush(g_58);
  goto s_52;
  g_58 :
  goto c_58;
  s_52 :
  Return();
  c_58 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  t_53 :
  goto q_53;
  o_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_52;
  p_52 :
  TestStr(1,1,"@version",&&fail);
  Rpush(p_58);
  goto o_52;
  p_58 :
  goto h_58;
  o_52 :
  Return();
  h_58 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  q_53 :
  goto n_53;
  n_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_52;
  m_52 :
  TestStr(1,1,"--version",&&fail);
  Rpush(t_58);
  goto k_52;
  t_58 :
  goto q_58;
  k_52 :
  Return();
  q_58 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  n_53 :
  goto k_53;
  m_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_52;
  i_52 :
  TestStr(1,1,"-v",&&fail);
  Rpush(v_58);
  goto h_52;
  v_58 :
  goto u_58;
  h_52 :
  Return();
  u_58 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  k_53 :
  goto h_53;
  l_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_52;
  f_52 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(x_58);
  goto e_52;
  x_58 :
  goto w_58;
  e_52 :
  Return();
  w_58 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  h_53 :
  goto g_53;
  k_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_52;
  c_52 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(z_58);
  goto b_52;
  z_58 :
  goto y_58;
  b_52 :
  Return();
  y_58 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  g_53 :
  goto d_53;
  j_51 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_51;
  z_51 :
  TestStr(1,1,"-S",&&fail);
  Rpush(b_59);
  goto y_51;
  b_59 :
  goto a_59;
  y_51 :
  Return();
  a_59 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  d_53 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_57;
  r_57 :
  TestFunFC(s_3,&&fail,Egetd(0,1));
  Rpush(d_59);
  goto q_57;
  d_59 :
  goto c_59;
  q_57 :
  Return();
  c_59 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_13)
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(e_59);
  r_58 :
  Cpush(g_59);
  Cpush(i_59);
  Ccall(_stratego_p_13);
  goto h_59;
  i_59 :
  Ccall(_stratego_o_13);
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_59);
  goto r_58;
  k_59 :
  AllBuild();
  goto j_59;
  h_59 :
  Cpop();
  j_59 :
  goto f_59;
  g_59 :
  Epushd(0,3);
  MoveTop(0,1);
  goto v_57;
  v_57 :
  TestFunFC(z_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(n_59);
  goto u_57;
  n_59 :
  goto m_59;
  u_57 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  m_59 :
  Epopd(0,3);
  goto l_59;
  f_59 :
  Cpop();
  l_59 :
  Return();
  e_59 :
  AllBuild();
  Cpush(p_59);
  Ccall(_stratego_n_13);
  goto o_59;
  p_59 :
  Ccontinue(q_59);
  Epushd(0,6);
  Ccall(_stratego_r_12);
  Tdupl();
  Ccall(_stratego_g_12);
  Tpop();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Rpush(r_59);
  s_58 :
  Cpush(t_59);
  Ccall(_stratego_p_13);
  goto s_59;
  t_59 :
  TestFunTop(z_0);
  TravInit();
  OneNextSon();
  TestFunTop(i_29);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_u_11);
  AllBuild();
  OneNextSon();
  Rpush(v_59);
  goto s_58;
  v_59 :
  AllBuild();
  goto u_59;
  s_59 :
  Cpop();
  u_59 :
  Return();
  r_59 :
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
  goto y_57;
  y_57 :
  TestFunFC(r_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto z_57;
  z_57 :
  TestFunFC(r_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto a_58;
  a_58 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(x_59);
  goto x_57;
  x_59 :
  goto w_59;
  x_57 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  w_59 :
  Ccall(_stratego_f_12);
  Ccall(_stratego_x_11);
  Epopd(0,6);
  goto o_59;
  q_59 :
  Ccall(_stratego_w_11);
  goto y_59;
  o_59 :
  Cpop();
  y_59 :
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_q_13);
ENDPROC

DOIT

