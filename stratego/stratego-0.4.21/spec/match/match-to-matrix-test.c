#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,k_59);
VARDECL(AFun,c_58);
VARDECL(AFun,g_55);
VARDECL(AFun,c_55);
VARDECL(AFun,e_51);
VARDECL(AFun,l_50);
VARDECL(AFun,z_47);
VARDECL(AFun,y_47);
VARDECL(AFun,l_31);
VARDECL(AFun,k_31);
VARDECL(AFun,x_29);
VARDECL(AFun,o_29);
VARDECL(AFun,n_29);
VARDECL(AFun,c_29);
VARDECL(AFun,y_27);
VARDECL(AFun,m_24);
VARDECL(AFun,l_24);
VARDECL(AFun,j_24);
VARDECL(AFun,h_24);
VARDECL(AFun,e_24);
VARDECL(AFun,b_24);
VARDECL(AFun,y_23);
VARDECL(AFun,v_23);
VARDECL(AFun,g_23);
VARDECL(AFun,n_21);
VARDECL(AFun,l_21);
VARDECL(AFun,j_21);
VARDECL(AFun,h_21);
VARDECL(AFun,b_21);
VARDECL(AFun,x_19);
VARDECL(AFun,w_19);
VARDECL(AFun,u_19);
VARDECL(AFun,s_19);
VARDECL(AFun,f_19);
VARDECL(AFun,d_19);
VARDECL(AFun,c_19);
VARDECL(AFun,m_10);
VARDECL(AFun,j_10);
VARDECL(AFun,h_10);
VARDECL(AFun,f_10);
VARDECL(AFun,e_10);
VARDECL(AFun,d_10);
VARDECL(AFun,k_3);
VARDECL(AFun,j_3);
VARDECL(AFun,x_2);
VARDECL(AFun,r_2);
VARDECL(AFun,j_2);
VARDECL(AFun,g_2);
VARDECL(AFun,f_2);
VARDECL(AFun,c_1);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_e_64);
PROCDECL(_stratego_f_64);
PROCDECL(_stratego_g_64);
PROCDECL(_stratego_h_64);
PROCDECL(_stratego_i_64);
PROCDECL(_stratego_j_64);
PROCDECL(_stratego_k_64);
PROCDECL(_stratego_l_64);
PROCDECL(_stratego_m_64);
PROCDECL(_stratego_n_64);
PROCDECL(_stratego_o_64);
PROCDECL(_stratego_p_64);
PROCDECL(_stratego_q_64);
PROCDECL(_stratego_r_64);
PROCDECL(_stratego_s_64);
PROCDECL(_stratego_t_64);
PROCDECL(_stratego_u_64);
PROCDECL(_stratego_v_64);
PROCDECL(_stratego_w_64);
PROCDECL(_stratego_y_64);
PROCDECL(_stratego_z_64);
PROCDECL(_stratego_a_65);
PROCDECL(_stratego_b_65);
PROCDECL(_stratego_c_65);
PROCDECL(_stratego_d_65);
PROCDECL(_stratego_f_65);
PROCDECL(_stratego_g_65);
PROCDECL(_stratego_h_65);
PROCDECL(_stratego_i_65);
PROCDECL(_stratego_j_65);
PROCDECL(_stratego_k_65);
PROCDECL(_stratego_l_65);
PROCDECL(_stratego_m_65);
PROCDECL(_stratego_n_65);
PROCDECL(_stratego_o_65);
PROCDECL(_stratego_p_65);
PROCDECL(_stratego_q_65);
PROCDECL(_stratego_r_65);
PROCDECL(_stratego_s_65);
PROCDECL(_stratego_t_65);
PROCDECL(_stratego_u_65);
PROCDECL(_stratego_v_65);
PROCDECL(_stratego_w_65);
PROCDECL(_stratego_x_65);
PROCDECL(_stratego_y_65);
PROCDECL(_stratego_z_65);
PROCDECL(_stratego_a_66);
PROCDECL(_stratego_b_66);
PROCDECL(_stratego_c_66);
PROCDECL(_stratego_d_66);
PROCDECL(_stratego_e_66);
PROCDECL(_stratego_f_66);
PROCDECL(_stratego_g_66);
PROCDECL(_stratego_h_66);
PROCDECL(_stratego_i_66);
PROCDECL(_stratego_j_66);
PROCDECL(_stratego_k_66);
PROCDECL(_stratego_l_66);
PROCDECL(_stratego_m_66);
PROCDECL(_stratego_n_66);
PROCDECL(_stratego_o_66);
PROCDECL(_stratego_p_66);
PROCDECL(_stratego_q_66);
PROCDECL(_stratego_r_66);
PROCDECL(_stratego_s_66);
PROCDECL(_stratego_t_66);
PROCDECL(_stratego_u_66);
PROCDECL(_stratego_v_66);
PROCDECL(_stratego_w_66);
PROCDECL(_stratego_x_66);
PROCDECL(_stratego_y_66);
PROCDECL(_stratego_z_66);
PROCDECL(_stratego_a_67);
PROCDECL(_stratego_b_67);
PROCDECL(_stratego_c_67);
PROCDECL(_stratego_d_67);

PROC(_stratego_init_afuns)
  MOVE(k_59,ATmakeAFun("Fun",2,0));
  MOVE(c_58,ATmakeAFun("Real",1,0));
  MOVE(g_55,ATmakeAFun("Str",1,0));
  MOVE(c_55,ATmakeAFun("Int",1,0));
  MOVE(e_51,ATmakeAFun("Row",3,0));
  MOVE(l_50,ATmakeAFun("Matrix",1,0));
  MOVE(z_47,ATmakeAFun("Rule",3,0));
  MOVE(y_47,ATmakeAFun("LRule",1,0));
  MOVE(l_31,ATmakeAFun("Assign",1,0));
  MOVE(k_31,ATmakeAFun("Assign",2,0));
  MOVE(x_29,ATmakeAFun("Case",4,0));
  MOVE(o_29,ATmakeAFun("SVar",1,0));
  MOVE(n_29,ATmakeAFun("Call",2,0));
  MOVE(c_29,ATmakeAFun("SDef",3,0));
  MOVE(y_27,ATmakeAFun("Let",2,0));
  MOVE(m_24,ATmakeAFun("BAM",3,0));
  MOVE(l_24,ATmakeAFun("AM",2,0));
  MOVE(j_24,ATmakeAFun("MA",2,0));
  MOVE(h_24,ATmakeAFun("BA",2,0));
  MOVE(e_24,ATmakeAFun("Lets",2,0));
  MOVE(b_24,ATmakeAFun("LChoices",1,0));
  MOVE(y_23,ATmakeAFun("Choices",1,0));
  MOVE(v_23,ATmakeAFun("Seqs",1,0));
  MOVE(g_23,ATmakeAFun("Build",1,0));
  MOVE(n_21,ATmakeAFun("Cong",2,0));
  MOVE(l_21,ATmakeAFun("Path",2,0));
  MOVE(j_21,ATmakeAFun("One",1,0));
  MOVE(h_21,ATmakeAFun("Some",1,0));
  MOVE(b_21,ATmakeAFun("Fail",0,0));
  MOVE(x_19,ATmakeAFun("Wld",0,0));
  MOVE(w_19,ATmakeAFun("Where",1,0));
  MOVE(u_19,ATmakeAFun("All",1,0));
  MOVE(s_19,ATmakeAFun("Rec",2,0));
  MOVE(f_19,ATmakeAFun("Not",1,0));
  MOVE(d_19,ATmakeAFun("Id",0,0));
  MOVE(c_19,ATmakeAFun("Test",1,0));
  MOVE(m_10,ATmakeAFun("LChoice",2,0));
  MOVE(j_10,ATmakeAFun("Choice",2,0));
  MOVE(h_10,ATmakeAFun("Scope",2,0));
  MOVE(f_10,ATmakeAFun("Row",2,0));
  MOVE(e_10,ATmakeAFun("Matrix",2,0));
  MOVE(d_10,ATmakeAFun("Seq",2,0));
  MOVE(k_3,ATmakeAFun("Cons",2,0));
  MOVE(j_3,ATmakeAFun("Nil",0,0));
  MOVE(x_2,ATmakeAFun("BuildDefault",1,0));
  MOVE(r_2,ATmakeAFun("Var",1,0));
  MOVE(j_2,ATmakeAFun("Op",2,0));
  MOVE(g_2,ATmakeAFun("Off",1,0));
  MOVE(f_2,ATmakeAFun("As",2,0));
  MOVE(c_1,ATmakeAFun("Match",1,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("match-to-matrix-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_f_64);
  Ccall(_stratego_k_64);
  Ccall(_stratego_o_65);
  Ccall(_stratego_a_67);
  Ccall(_stratego_b_67);
  Ccall(_stratego_c_67);
  Ccall(_stratego_d_67);
  Ccall(_stratego_g_64);
  Ccall(_stratego_i_64);
ENDPROC

PROC(_stratego_e_64)
  _ST_printnl();
ENDPROC

PROC(_stratego_f_64)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_g_64)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("failures: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_h_64);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_h_64)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_5;
  g_5 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto l_5;
  c_0 :
  goto b_0;
  l_5 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_64)
  Cpush(f_0);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto n_5;
  n_5 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto p_5;
  h_0 :
  goto g_0;
  p_5 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_h_64);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_j_64);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_j_64);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_j_64)
  _ST_exit();
ENDPROC

PROC(_stratego_k_64)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_o_64);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Epushd(1,1);
  Cpush(n_0);
  Epushd(2,1);
  Tset(ATmakeString("data/choices1.trm"));
  Ccall(_stratego_n_65);
  Ccall(_stratego_q_64);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_o_64);
  Ccall(_stratego_p_64);
  goto o_0;
  m_0 :
  Cpop();
  o_0 :
  Tset(ATmakeString("data/choices1-matrix.trm"));
  Ccall(_stratego_n_65);
  MoveTop(1,1);
  Move(0,2,1,1);
  Cpush(q_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto p_0;
  q_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_p_64);
  goto r_0;
  p_0 :
  Cpop();
  r_0 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_l_64);
  goto j_0;
  l_0 :
  Ccall(_stratego_n_64);
  goto s_0;
  j_0 :
  Cpop();
  s_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_l_64)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_m_64);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_h_64);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_m_64)
  _ST_add();
ENDPROC

PROC(_stratego_n_64)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_m_64);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_h_64);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_o_64)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_p_64)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto d_9;
  d_9 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto e_9;
  e_9 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto l_9;
  l_9 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(u_0);
  goto s_10;
  u_0 :
  goto t_0;
  s_10 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  t_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_q_64)
  Rpush(v_0);
  n_11 :
  Cpush(x_0);
  w_0 :
  Cpush(z_0);
  Epushd(0,2);
  MoveTop(0,1);
  goto u_10;
  u_10 :
  TestFunFC(c_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(b_1);
  goto y_11;
  b_1 :
  goto a_1;
  y_11 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_r_64);
  Return();
  a_1 :
  Epopd(0,2);
  goto y_0;
  z_0 :
  Ccontinue(d_1);
  Ccall(_stratego_g_65);
  goto y_0;
  d_1 :
  Ccall(_stratego_h_65);
  goto e_1;
  y_0 :
  Cpop();
  e_1 :
  Tduplinv();
  goto w_0;
  x_0 :
  AllInit();
  f_1 :
  AllNextSon(&&g_1);
  Rpush(h_1);
  goto n_11;
  h_1 :
  goto f_1;
  g_1 :
  AllBuild();
  Cpush(j_1);
  i_1 :
  Cpush(l_1);
  Epushd(0,2);
  MoveTop(0,1);
  goto g_11;
  g_11 :
  TestFunFC(c_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(n_1);
  goto k_12;
  n_1 :
  goto m_1;
  k_12 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_r_64);
  Return();
  m_1 :
  Epopd(0,2);
  goto k_1;
  l_1 :
  Ccontinue(o_1);
  Ccall(_stratego_g_65);
  goto k_1;
  o_1 :
  Ccall(_stratego_h_65);
  goto p_1;
  k_1 :
  Cpop();
  p_1 :
  Tduplinv();
  goto i_1;
  j_1 :
  Return();
  v_0 :
ENDPROC

PROC(_stratego_r_64)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("As",App1("Off",App0("Nil")),App2("Cons",Egetd(0,1),App0("Nil"))));
  Rpush(q_1);
  n_16 :
  Cpush(s_1);
  Ccall(_stratego_s_64);
  goto r_1;
  s_1 :
  goto t_1;
  r_1 :
  Cpop();
  t_1 :
  AllInit();
  u_1 :
  AllNextSon(&&w_1);
  Rpush(x_1);
  goto n_16;
  x_1 :
  goto u_1;
  w_1 :
  AllBuild();
  Return();
  q_1 :
  Ccall(_stratego_u_64);
  MoveTop(0,2);
  goto c_13;
  c_13 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto d_13;
  d_13 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto e_13;
  e_13 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(z_1);
  goto o_16;
  z_1 :
  goto y_1;
  o_16 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_f_65);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("Matrix",Egetd(1,1),App2("Cons",App2("Row",Egetd(0,3),App1("Seqs",Egetd(0,5))),App0("Nil"))));
  Epopd(1,1);
  Return();
  y_1 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_s_64)
  Epushd(0,7);
  MoveTop(0,4);
  goto x_17;
  x_17 :
  TestFunFC(f_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,7,0,4,1);
  goto y_17;
  y_17 :
  TestFunFC(g_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto e_18;
  e_18 :
  TestFunFC(j_2,&&i_2,Egetd(0,7));
  MoveArg(0,3,0,7,0);
  MoveArg(0,2,0,7,1);
  Cpush(l_2);
  Rpush(m_2);
  goto j_25;
  m_2 :
  goto k_2;
  l_2 :
  Rpush(o_2);
  goto r_25;
  o_2 :
  goto n_2;
  k_2 :
  Cpop();
  n_2 :
  goto e_2;
  i_2 :
  TestFunFC(f_2,&&p_2,Egetd(0,7));
  MoveArg(0,3,0,7,0);
  MoveArg(0,2,0,7,1);
  goto f_18;
  f_18 :
  TestFunFC(r_2,&&q_2,Egetd(0,3));
  MoveArg(0,1,0,3,0);
  Cpush(t_2);
  Rpush(u_2);
  goto k_25;
  u_2 :
  goto s_2;
  t_2 :
  Rpush(w_2);
  goto r_25;
  w_2 :
  goto v_2;
  s_2 :
  Cpop();
  v_2 :
  goto e_2;
  q_2 :
  Rpush(e_2);
  goto r_25;
  p_2 :
  TestFunFC(x_2,&&h_2,Egetd(0,7));
  MoveArg(0,3,0,7,0);
  Cpush(z_2);
  Rpush(a_3);
  goto q_25;
  a_3 :
  goto y_2;
  z_2 :
  Rpush(d_3);
  goto r_25;
  d_3 :
  goto c_3;
  y_2 :
  Cpop();
  c_3 :
  goto e_2;
  h_2 :
  Rpush(e_2);
  goto r_25;
  e_2 :
  goto d_2;
  r_25 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset(App2("TCons",MakeInt(0),App2("TCons",Egetd(0,7),App0("TNil"))));
  Rpush(e_3);
  t_25 :
  Epushd(3,7);
  MoveTop(3,1);
  goto r_17;
  r_17 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto s_17;
  s_17 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,7,3,3,1);
  goto t_17;
  t_17 :
  TestFunFC(j_3,&&i_3,Egetd(3,4));
  goto u_17;
  u_17 :
  TestFunFC(d_0,&&fail,Egetd(3,7));
  Rpush(h_3);
  goto u_25;
  i_3 :
  TestFunFC(k_3,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto v_17;
  v_17 :
  TestFunFC(d_0,&&fail,Egetd(3,7));
  Rpush(h_3);
  goto v_25;
  h_3 :
  goto g_3;
  v_25 :
  Epushd(4,6);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_t_64);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(3,5);
  NotNULLd(4,1);
  NotNULLd(3,6);
  Tset(App2("TCons",App2("TCons",Egetd(3,2),App2("TCons",Egetd(3,5),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,1),App2("TCons",Egetd(3,6),App0("TNil"))),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(5,5);
  MoveTop(5,1);
  goto k_17;
  k_17 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto l_17;
  l_17 :
  TestFunFC(a_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto m_17;
  m_17 :
  TestFunFC(d_0,&&fail,Egetd(5,5));
  Rpush(n_3);
  goto e_26;
  n_3 :
  goto m_3;
  e_26 :
  Epushd(6,1);
  Tdupl();
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Move(6,1,0,6);
  Tpop();
  NotNULLd(5,2);
  NotNULLd(6,1);
  NotNULLd(5,4);
  Tset(App2("As",App1("Off",App2("Cons",Egetd(5,2),Egetd(6,1))),Egetd(5,4)));
  Epopd(6,1);
  Return();
  m_3 :
  Epopd(5,5);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(o_3);
  goto t_25;
  o_3 :
  OneNextSon();
  Ccall(_stratego_h_64);
  AllBuild();
  AllBuild();
  MoveTop(4,2);
  goto o_17;
  o_17 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto p_17;
  p_17 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto q_17;
  q_17 :
  TestFunFC(d_0,&&fail,Egetd(4,6));
  Rpush(p_3);
  goto n_26;
  p_3 :
  goto l_3;
  n_26 :
  NotNULLd(4,3);
  NotNULLd(4,5);
  Tset(App2("Cons",Egetd(4,3),Egetd(4,5)));
  Return();
  l_3 :
  Epopd(4,6);
  Return();
  g_3 :
  goto f_3;
  u_25 :
  Tset(App0("Nil"));
  Return();
  f_3 :
  Epopd(3,7);
  Return();
  e_3 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  d_2 :
  goto c_2;
  q_25 :
  NotNULLd(0,6);
  Tset(App2("As",App1("Off",Egetd(0,6)),App0("Wld")));
  Return();
  c_2 :
  goto b_2;
  k_25 :
  NotNULLd(0,1);
  NotNULLd(0,6);
  NotNULLd(0,2);
  Tset(App2("As",App1("Var",Egetd(0,1)),App2("As",App1("Off",Egetd(0,6)),Egetd(0,2))));
  Return();
  b_2 :
  goto a_2;
  j_25 :
  NotNULLd(0,3);
  NotNULLd(0,6);
  NotNULLd(0,2);
  Tset(App2("As",App1("Off",Egetd(0,6)),App2("Op",Egetd(0,3),App2("As",App1("Off",Egetd(0,6)),Egetd(0,2)))));
  Return();
  a_2 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_t_64)
  _ST_plus();
ENDPROC

PROC(_stratego_u_64)
  Rpush(q_3);
  n_31 :
  Cpush(s_3);
  Epushd(0,3);
  Cpush(u_3);
  Ccall(_stratego_v_64);
  goto t_3;
  u_3 :
  Ccall(_stratego_w_64);
  goto v_3;
  t_3 :
  Cpop();
  v_3 :
  MoveTop(0,1);
  Cpush(x_3);
  Ccall(_stratego_b_65);
  goto w_3;
  x_3 :
  goto y_3;
  w_3 :
  Cpop();
  y_3 :
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(a_4);
  Ccall(_stratego_d_65);
  goto z_3;
  a_4 :
  Tset(App0("Nil"));
  goto b_4;
  z_3 :
  Cpop();
  b_4 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,3);
  goto r_3;
  s_3 :
  Epushd(0,13);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto u_26;
  u_26 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_26;
  v_26 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto w_26;
  w_26 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(e_4);
  goto s_31;
  e_4 :
  goto d_4;
  s_31 :
  Move(0,2,1,2);
  Move(0,3,1,4);
  Return();
  d_4 :
  Epopd(1,5);
  Tpop();
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(f_4);
  v_31 :
  Cpush(h_4);
  Ccall(_stratego_y_64);
  goto g_4;
  h_4 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Rpush(j_4);
  goto n_31;
  j_4 :
  OneNextSon();
  Rpush(k_4);
  goto v_31;
  k_4 :
  AllBuild();
  goto i_4;
  g_4 :
  Cpop();
  i_4 :
  Return();
  f_4 :
  Ccall(_stratego_a_65);
  MoveTop(1,1);
  goto i_27;
  i_27 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto j_27;
  j_27 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto k_27;
  k_27 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(m_4);
  goto w_31;
  m_4 :
  goto l_4;
  w_31 :
  Epushd(2,8);
  Move(0,5,1,2);
  Move(0,4,1,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,5),App0("TNil"))));
  _ST_mkterm();
  MoveTop(2,1);
  Cpush(o_4);
  Ccall(_stratego_b_65);
  goto n_4;
  o_4 :
  goto p_4;
  n_4 :
  Cpop();
  p_4 :
  MoveTop(2,2);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Cpush(r_4);
  Ccall(_stratego_d_65);
  goto q_4;
  r_4 :
  Tset(App0("Nil"));
  goto s_4;
  q_4 :
  Cpop();
  s_4 :
  MoveTop(2,3);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  MoveTop(2,4);
  goto f_27;
  f_27 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto g_27;
  g_27 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto h_27;
  h_27 :
  TestFunFC(d_0,&&fail,Egetd(2,8));
  Rpush(u_4);
  goto m_32;
  u_4 :
  goto t_4;
  m_32 :
  Move(0,6,2,5);
  Move(0,7,2,7);
  Return();
  t_4 :
  Epopd(2,8);
  Return();
  l_4 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_z_64);
  MoveTop(0,8);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,8),App0("TNil"))));
  MoveTop(0,9);
  goto t_27;
  t_27 :
  TestFunFC(a_0,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,11,0,9,1);
  goto v_27;
  v_27 :
  TestFunFC(a_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  goto w_27;
  w_27 :
  TestFunFC(d_0,&&fail,Egetd(0,13));
  Rpush(w_4);
  goto o_32;
  w_4 :
  goto v_4;
  o_32 :
  Epushd(1,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(x_4);
  p_32 :
  Cpush(z_4);
  Ccall(_stratego_y_64);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  goto y_4;
  z_4 :
  Ccontinue(a_5);
  Epushd(2,3);
  MoveTop(2,1);
  goto r_27;
  r_27 :
  TestFunFC(k_3,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(c_5);
  goto q_32;
  c_5 :
  goto b_5;
  q_32 :
  Tdupl();
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Rpush(d_5);
  r_32 :
  Cpush(f_5);
  Epushd(3,3);
  MoveTop(3,1);
  goto q_27;
  q_27 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(i_5);
  goto s_32;
  i_5 :
  goto h_5;
  s_32 :
  Move(2,2,3,2);
  Return();
  h_5 :
  Epopd(3,3);
  goto e_5;
  f_5 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_5);
  goto r_32;
  m_5 :
  AllBuild();
  goto j_5;
  e_5 :
  Cpop();
  j_5 :
  Return();
  d_5 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(q_5);
  goto p_32;
  q_5 :
  Return();
  b_5 :
  Epopd(2,3);
  goto y_4;
  a_5 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_5);
  goto p_32;
  s_5 :
  AllBuild();
  goto r_5;
  y_4 :
  Cpop();
  r_5 :
  Return();
  x_4 :
  MoveTop(1,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  Return();
  v_4 :
  Epopd(0,13);
  goto c_4;
  r_3 :
  Cpop();
  c_4 :
  Return();
  q_3 :
ENDPROC

PROC(_stratego_v_64)
  _ST_is_string();
ENDPROC

PROC(_stratego_w_64)
  _ST_is_int();
ENDPROC

PROC(_stratego_y_64)
  Epushd(0,1);
  MoveTop(0,1);
  goto v_32;
  v_32 :
  TestFunFC(j_3,&&fail,Egetd(0,1));
  Rpush(u_5);
  goto x_32;
  u_5 :
  goto t_5;
  x_32 :
  Return();
  t_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_64)
  Rpush(v_5);
  k_34 :
  Cpush(x_5);
  Ccall(_stratego_y_64);
  Tset(App0("Nil"));
  goto w_5;
  x_5 :
  Epushd(0,3);
  MoveTop(0,1);
  goto m_33;
  m_33 :
  TestFunFC(k_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(a_6);
  goto l_34;
  a_6 :
  goto z_5;
  l_34 :
  Epushd(1,5);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(c_6);
  goto k_34;
  c_6 :
  OneNextSon();
  Ccall(_stratego_h_64);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto j_33;
  j_33 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_33;
  k_33 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto l_33;
  l_33 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(h_6);
  goto m_34;
  h_6 :
  goto b_6;
  m_34 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(j_6);
  n_34 :
  Cpush(l_6);
  Ccall(_stratego_y_64);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto k_6;
  l_6 :
  Ccontinue(m_6);
  Epushd(2,3);
  MoveTop(2,1);
  goto i_33;
  i_33 :
  TestFunFC(k_3,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_6);
  goto o_34;
  o_6 :
  goto n_6;
  o_34 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(p_6);
  p_34 :
  Cpush(r_6);
  Epushd(3,3);
  MoveTop(3,1);
  goto c_33;
  c_33 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(t_6);
  goto q_34;
  t_6 :
  goto s_6;
  q_34 :
  Move(2,2,3,2);
  Return();
  s_6 :
  Epopd(3,3);
  goto q_6;
  r_6 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_6);
  goto p_34;
  v_6 :
  AllBuild();
  goto u_6;
  q_6 :
  Cpop();
  u_6 :
  Return();
  p_6 :
  Tpop();
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(x_6);
  goto n_34;
  x_6 :
  Return();
  n_6 :
  Epopd(2,3);
  goto k_6;
  m_6 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_6);
  goto n_34;
  z_6 :
  AllBuild();
  goto y_6;
  k_6 :
  Cpop();
  y_6 :
  Return();
  j_6 :
  Return();
  b_6 :
  Epopd(1,5);
  Return();
  z_5 :
  Epopd(0,3);
  goto y_5;
  w_5 :
  Cpop();
  y_5 :
  Return();
  v_5 :
ENDPROC

PROC(_stratego_a_65)
  Rpush(a_7);
  i_37 :
  Epushd(0,3);
  MoveTop(0,1);
  goto d_35;
  d_35 :
  TestFunFC(j_3,&&e_7,Egetd(0,1));
  Rpush(d_7);
  goto j_37;
  e_7 :
  TestFunFC(k_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(d_7);
  goto k_37;
  d_7 :
  goto c_7;
  k_37 :
  Epushd(1,13);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(g_7);
  goto i_37;
  g_7 :
  OneNextSon();
  Ccall(_stratego_h_64);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto u_34;
  u_34 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto v_34;
  v_34 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto w_34;
  w_34 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto x_34;
  x_34 :
  TestFunFC(d_0,&&fail,Egetd(1,6));
  goto y_34;
  y_34 :
  TestFunFC(a_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,13,1,7,1);
  goto z_34;
  z_34 :
  TestFunFC(a_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto a_35;
  a_35 :
  TestFunFC(a_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto b_35;
  b_35 :
  TestFunFC(d_0,&&fail,Egetd(1,12));
  goto c_35;
  c_35 :
  TestFunFC(d_0,&&fail,Egetd(1,13));
  Rpush(h_7);
  goto l_37;
  h_7 :
  goto f_7;
  l_37 :
  NotNULLd(1,3);
  NotNULLd(1,9);
  NotNULLd(1,5);
  NotNULLd(1,11);
  Tset(App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,9)),App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,11)),App0("TNil"))));
  Return();
  f_7 :
  Epopd(1,13);
  Return();
  c_7 :
  goto b_7;
  j_37 :
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  b_7 :
  Epopd(0,3);
  Return();
  a_7 :
ENDPROC

PROC(_stratego_b_65)
  Epushd(0,7);
  MoveTop(0,1);
  goto o_37;
  o_37 :
  TestFunFC(f_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto p_37;
  p_37 :
  TestFunFC(g_2,&&l_7,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto q_37;
  q_37 :
  TestFunFC(r_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(k_7);
  goto b_39;
  l_7 :
  TestFunFC(r_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto s_37;
  s_37 :
  TestFunFC(f_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,7,0,4,1);
  goto t_37;
  t_37 :
  TestFunFC(g_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(k_7);
  goto c_39;
  k_7 :
  goto j_7;
  c_39 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset(App2("As",App1("Off",Egetd(0,6)),Egetd(0,7)));
  Return();
  j_7 :
  goto i_7;
  b_39 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_c_65);
  Tpop();
  NotNULLd(0,3);
  Tset(App2("As",App1("Off",Egetd(0,3)),App0("Wld")));
  Return();
  i_7 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_c_65)
  Cpush(n_7);
  Ccall(_stratego_y_64);
  goto m_7;
  n_7 :
  Epushd(0,3);
  MoveTop(0,1);
  goto e_39;
  e_39 :
  TestFunFC(k_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(q_7);
  goto n_39;
  q_7 :
  goto p_7;
  n_39 :
  Return();
  p_7 :
  Epopd(0,3);
  goto o_7;
  m_7 :
  Cpop();
  o_7 :
ENDPROC

PROC(_stratego_d_65)
  Epushd(0,7);
  MoveTop(0,1);
  goto q_39;
  q_39 :
  TestFunFC(f_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto r_39;
  r_39 :
  TestFunFC(g_2,&&u_7,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto s_39;
  s_39 :
  TestFunFC(r_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(t_7);
  goto h_40;
  u_7 :
  TestFunFC(r_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto t_39;
  t_39 :
  TestFunFC(f_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,7,0,4,1);
  goto u_39;
  u_39 :
  TestFunFC(g_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(t_7);
  goto i_40;
  t_7 :
  goto s_7;
  i_40 :
  NotNULLd(0,3);
  NotNULLd(0,6);
  Tset(App2("Cons",App2("Assign",App1("Var",Egetd(0,3)),App1("Var",Egetd(0,6))),App0("Nil")));
  Return();
  s_7 :
  goto r_7;
  h_40 :
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset(App2("Cons",App2("Assign",App1("Var",Egetd(0,5)),App1("Var",Egetd(0,3))),App0("Nil")));
  Return();
  r_7 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_f_65)
  Rpush(v_7);
  n_42 :
  Epushd(0,2);
  MoveTop(0,2);
  goto c_41;
  c_41 :
  TestFunFC(g_2,&&z_7,Egetd(0,2));
  MoveArg(0,1,0,2,0);
  Cpush(c_8);
  Rpush(d_8);
  goto o_42;
  d_8 :
  goto b_8;
  c_8 :
  Rpush(g_8);
  goto q_42;
  g_8 :
  goto f_8;
  b_8 :
  Cpop();
  f_8 :
  goto y_7;
  z_7 :
  Rpush(y_7);
  goto q_42;
  y_7 :
  goto x_7;
  q_42 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(2,1);
  goto n_40;
  n_40 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_40;
  o_40 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_40;
  p_40 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(i_8);
  goto r_42;
  i_8 :
  goto h_8;
  r_42 :
  Move(1,1,2,4);
  Return();
  h_8 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(j_8);
  s_42 :
  Cpush(m_8);
  Ccall(_stratego_y_64);
  Tset(App0("Nil"));
  goto k_8;
  m_8 :
  Epushd(2,3);
  MoveTop(2,1);
  goto b_41;
  b_41 :
  TestFunFC(k_3,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(p_8);
  goto t_42;
  p_8 :
  goto o_8;
  t_42 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(q_8);
  goto n_42;
  q_8 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(r_8);
  goto s_42;
  r_8 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto y_40;
  y_40 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto z_40;
  z_40 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto a_41;
  a_41 :
  TestFunFC(d_0,&&fail,Egetd(3,7));
  Rpush(t_8);
  goto w_42;
  t_8 :
  goto s_8;
  w_42 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(u_8);
  x_42 :
  Cpush(w_8);
  Ccall(_stratego_y_64);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto v_8;
  w_8 :
  Ccontinue(x_8);
  Epushd(4,3);
  MoveTop(4,1);
  goto x_40;
  x_40 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(z_8);
  goto y_42;
  z_8 :
  goto y_8;
  y_42 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(a_9);
  z_42 :
  Cpush(c_9);
  Epushd(5,3);
  MoveTop(5,1);
  goto w_40;
  w_40 :
  TestFunFC(k_3,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(g_9);
  goto a_43;
  g_9 :
  goto f_9;
  a_43 :
  Move(4,2,5,2);
  Return();
  f_9 :
  Epopd(5,3);
  goto b_9;
  c_9 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_9);
  goto z_42;
  i_9 :
  AllBuild();
  goto h_9;
  b_9 :
  Cpop();
  h_9 :
  Return();
  a_9 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(j_9);
  goto x_42;
  j_9 :
  Return();
  y_8 :
  Epopd(4,3);
  goto v_8;
  x_8 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_9);
  goto x_42;
  n_9 :
  AllBuild();
  goto k_9;
  v_8 :
  Cpop();
  k_9 :
  Return();
  u_8 :
  Return();
  s_8 :
  Epopd(3,7);
  Return();
  o_8 :
  Epopd(2,3);
  goto n_8;
  k_8 :
  Cpop();
  n_8 :
  Return();
  j_8 :
  Epopd(1,1);
  Return();
  x_7 :
  goto w_7;
  o_42 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,1);
  Tset(App2("Cons",Egetd(0,1),App0("Nil")));
  Return();
  w_7 :
  Epopd(0,2);
  Return();
  v_7 :
ENDPROC

PROC(_stratego_g_65)
  Epushd(0,13);
  MoveTop(0,5);
  goto h_48;
  h_48 :
  TestFunFC(d_10,&&c_10,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto i_48;
  i_48 :
  TestFunFC(e_10,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto j_48;
  j_48 :
  TestFunFC(k_3,&&fail,Egetd(0,8));
  MoveArg(0,1,0,8,0);
  MoveArg(0,4,0,8,1);
  goto k_48;
  k_48 :
  TestFunFC(f_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto l_48;
  l_48 :
  TestFunFC(j_3,&&fail,Egetd(0,4));
  Rpush(b_10);
  goto e_61;
  c_10 :
  TestFunFC(h_10,&&g_10,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto m_48;
  m_48 :
  TestFunFC(e_10,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  Rpush(b_10);
  goto f_61;
  g_10 :
  TestFunFC(j_10,&&i_10,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto n_48;
  n_48 :
  TestFunFC(e_10,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto o_48;
  o_48 :
  TestFunFC(e_10,&&k_10,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  Rpush(b_10);
  goto j_61;
  k_10 :
  TestFunFC(j_10,&&l_10,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto p_48;
  p_48 :
  TestFunFC(e_10,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,12,0,10,1);
  Rpush(b_10);
  goto f_62;
  l_10 :
  TestFunFC(m_10,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto q_48;
  q_48 :
  TestFunFC(e_10,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,12,0,10,1);
  Rpush(b_10);
  goto p_62;
  i_10 :
  TestFunFC(m_10,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto r_48;
  r_48 :
  TestFunFC(e_10,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto s_48;
  s_48 :
  TestFunFC(e_10,&&n_10,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  Rpush(b_10);
  goto l_63;
  n_10 :
  TestFunFC(m_10,&&o_10,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto t_48;
  t_48 :
  TestFunFC(e_10,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,12,0,10,1);
  Rpush(b_10);
  goto e_65;
  o_10 :
  TestFunFC(j_10,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto u_48;
  u_48 :
  TestFunFC(e_10,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,12,0,10,1);
  Rpush(b_10);
  goto n_67;
  b_10 :
  goto a_10;
  n_67 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,11),App0("TNil"))));
  MoveTop(1,1);
  goto x_47;
  x_47 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_48;
  f_48 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto g_48;
  g_48 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(q_10);
  goto o_67;
  q_10 :
  goto p_10;
  o_67 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(r_10);
  p_67 :
  Cpush(v_10);
  Ccall(_stratego_y_64);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto t_10;
  v_10 :
  Ccontinue(w_10);
  Epushd(3,3);
  MoveTop(3,1);
  goto p_47;
  p_47 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(y_10);
  goto q_67;
  y_10 :
  goto x_10;
  q_67 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(z_10);
  r_67 :
  Cpush(b_11);
  Epushd(4,3);
  MoveTop(4,1);
  goto o_47;
  o_47 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(d_11);
  goto s_67;
  d_11 :
  goto c_11;
  s_67 :
  Move(3,2,4,2);
  Return();
  c_11 :
  Epopd(4,3);
  goto a_11;
  b_11 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_11);
  goto r_67;
  f_11 :
  AllBuild();
  goto e_11;
  a_11 :
  Cpop();
  e_11 :
  Return();
  z_10 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(j_11);
  goto p_67;
  j_11 :
  Return();
  x_10 :
  Epopd(3,3);
  goto t_10;
  w_10 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_11);
  goto p_67;
  p_11 :
  AllBuild();
  goto m_11;
  t_10 :
  Cpop();
  m_11 :
  Return();
  r_10 :
  MoveTop(2,1);
  NotNULLd(0,8);
  NotNULLd(0,12);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,12),App0("TNil"))));
  MoveTop(2,2);
  goto t_47;
  t_47 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto v_47;
  v_47 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto w_47;
  w_47 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(r_11);
  goto u_67;
  r_11 :
  goto q_11;
  u_67 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(s_11);
  v_67 :
  Cpush(u_11);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_11);
  goto v_67;
  v_11 :
  AllBuild();
  goto t_11;
  u_11 :
  Ccall(_stratego_y_64);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto w_11;
  t_11 :
  Cpop();
  w_11 :
  Return();
  s_11 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  NotNULLd(0,13);
  Tset(App2("LChoice",App2("Matrix",Egetd(2,1),Egetd(3,1)),Egetd(0,13)));
  Epopd(3,1);
  Return();
  q_11 :
  Epopd(2,6);
  Return();
  p_10 :
  Epopd(1,5);
  Return();
  a_10 :
  goto z_9;
  e_65 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,11),App0("TNil"))));
  MoveTop(1,1);
  goto v_46;
  v_46 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto j_47;
  j_47 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto k_47;
  k_47 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(z_11);
  goto e_67;
  z_11 :
  goto x_11;
  e_67 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(a_12);
  f_67 :
  Cpush(c_12);
  Ccall(_stratego_y_64);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto b_12;
  c_12 :
  Ccontinue(d_12);
  Epushd(3,3);
  MoveTop(3,1);
  goto z_45;
  z_45 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(f_12);
  goto g_67;
  f_12 :
  goto e_12;
  g_67 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(g_12);
  h_67 :
  Cpush(i_12);
  Epushd(4,3);
  MoveTop(4,1);
  goto y_45;
  y_45 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(m_12);
  goto i_67;
  m_12 :
  goto l_12;
  i_67 :
  Move(3,2,4,2);
  Return();
  l_12 :
  Epopd(4,3);
  goto h_12;
  i_12 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_12);
  goto h_67;
  o_12 :
  AllBuild();
  goto n_12;
  h_12 :
  Cpop();
  n_12 :
  Return();
  g_12 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(p_12);
  goto f_67;
  p_12 :
  Return();
  e_12 :
  Epopd(3,3);
  goto b_12;
  d_12 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_12);
  goto f_67;
  r_12 :
  AllBuild();
  goto q_12;
  b_12 :
  Cpop();
  q_12 :
  Return();
  a_12 :
  MoveTop(2,1);
  NotNULLd(0,8);
  NotNULLd(0,12);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,12),App0("TNil"))));
  MoveTop(2,2);
  goto d_46;
  d_46 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto e_46;
  e_46 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto u_46;
  u_46 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(t_12);
  goto k_67;
  t_12 :
  goto s_12;
  k_67 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(u_12);
  l_67 :
  Cpush(w_12);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_12);
  goto l_67;
  x_12 :
  AllBuild();
  goto v_12;
  w_12 :
  Ccall(_stratego_y_64);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto y_12;
  v_12 :
  Cpop();
  y_12 :
  Return();
  u_12 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  NotNULLd(0,13);
  Tset(App2("LChoice",App2("Matrix",Egetd(2,1),Egetd(3,1)),Egetd(0,13)));
  Epopd(3,1);
  Return();
  s_12 :
  Epopd(2,6);
  Return();
  x_11 :
  Epopd(1,5);
  Return();
  z_9 :
  goto y_9;
  l_63 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(1,1);
  goto s_45;
  s_45 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto t_45;
  t_45 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto u_45;
  u_45 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(a_13);
  goto m_63;
  a_13 :
  goto z_12;
  m_63 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(b_13);
  n_63 :
  Cpush(h_13);
  Ccall(_stratego_y_64);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto g_13;
  h_13 :
  Ccontinue(i_13);
  Epushd(3,3);
  MoveTop(3,1);
  goto l_45;
  l_45 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(k_13);
  goto o_63;
  k_13 :
  goto j_13;
  o_63 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(l_13);
  p_63 :
  Cpush(n_13);
  Epushd(4,3);
  MoveTop(4,1);
  goto k_45;
  k_45 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(p_13);
  goto q_63;
  p_13 :
  goto o_13;
  q_63 :
  Move(3,2,4,2);
  Return();
  o_13 :
  Epopd(4,3);
  goto m_13;
  n_13 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_13);
  goto p_63;
  r_13 :
  AllBuild();
  goto q_13;
  m_13 :
  Cpop();
  q_13 :
  Return();
  l_13 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(s_13);
  goto n_63;
  s_13 :
  Return();
  j_13 :
  Epopd(3,3);
  goto g_13;
  i_13 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_13);
  goto n_63;
  u_13 :
  AllBuild();
  goto t_13;
  g_13 :
  Cpop();
  t_13 :
  Return();
  b_13 :
  MoveTop(2,1);
  NotNULLd(0,8);
  NotNULLd(0,13);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,13),App0("TNil"))));
  MoveTop(2,2);
  goto p_45;
  p_45 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto q_45;
  q_45 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto r_45;
  r_45 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(w_13);
  goto s_63;
  w_13 :
  goto v_13;
  s_63 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(x_13);
  t_63 :
  Cpush(z_13);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_14);
  goto t_63;
  a_14 :
  AllBuild();
  goto y_13;
  z_13 :
  Ccall(_stratego_y_64);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto b_14;
  y_13 :
  Cpop();
  b_14 :
  Return();
  x_13 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("Matrix",Egetd(2,1),Egetd(3,1)));
  Epopd(3,1);
  Return();
  v_13 :
  Epopd(2,6);
  Return();
  z_12 :
  Epopd(1,5);
  Return();
  y_9 :
  goto x_9;
  p_62 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,11),App0("TNil"))));
  MoveTop(1,1);
  goto e_45;
  e_45 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_45;
  f_45 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto g_45;
  g_45 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(d_14);
  goto q_62;
  d_14 :
  goto c_14;
  q_62 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(e_14);
  r_62 :
  Cpush(g_14);
  Ccall(_stratego_y_64);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto f_14;
  g_14 :
  Ccontinue(h_14);
  Epushd(3,3);
  MoveTop(3,1);
  goto t_44;
  t_44 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_14);
  goto s_62;
  j_14 :
  goto i_14;
  s_62 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(k_14);
  x_62 :
  Cpush(m_14);
  Epushd(4,3);
  MoveTop(4,1);
  goto s_44;
  s_44 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(o_14);
  goto g_63;
  o_14 :
  goto n_14;
  g_63 :
  Move(3,2,4,2);
  Return();
  n_14 :
  Epopd(4,3);
  goto l_14;
  m_14 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_14);
  goto x_62;
  q_14 :
  AllBuild();
  goto p_14;
  l_14 :
  Cpop();
  p_14 :
  Return();
  k_14 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(r_14);
  goto r_62;
  r_14 :
  Return();
  i_14 :
  Epopd(3,3);
  goto f_14;
  h_14 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_14);
  goto r_62;
  t_14 :
  AllBuild();
  goto s_14;
  f_14 :
  Cpop();
  s_14 :
  Return();
  e_14 :
  MoveTop(2,1);
  NotNULLd(0,8);
  NotNULLd(0,12);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,12),App0("TNil"))));
  MoveTop(2,2);
  goto b_45;
  b_45 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto c_45;
  c_45 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto d_45;
  d_45 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(v_14);
  goto i_63;
  v_14 :
  goto u_14;
  i_63 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(w_14);
  j_63 :
  Cpush(y_14);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_14);
  goto j_63;
  z_14 :
  AllBuild();
  goto x_14;
  y_14 :
  Ccall(_stratego_y_64);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto a_15;
  x_14 :
  Cpop();
  a_15 :
  Return();
  w_14 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  NotNULLd(0,13);
  Tset(App2("LChoice",App2("Matrix",Egetd(2,1),Egetd(3,1)),Egetd(0,13)));
  Epopd(3,1);
  Return();
  u_14 :
  Epopd(2,6);
  Return();
  c_14 :
  Epopd(1,5);
  Return();
  x_9 :
  goto w_9;
  f_62 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,11),App0("TNil"))));
  MoveTop(1,1);
  goto m_44;
  m_44 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto n_44;
  n_44 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto o_44;
  o_44 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(c_15);
  goto g_62;
  c_15 :
  goto b_15;
  g_62 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(d_15);
  h_62 :
  Cpush(f_15);
  Ccall(_stratego_y_64);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto e_15;
  f_15 :
  Ccontinue(g_15);
  Epushd(3,3);
  MoveTop(3,1);
  goto f_44;
  f_44 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(i_15);
  goto i_62;
  i_15 :
  goto h_15;
  i_62 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(j_15);
  j_62 :
  Cpush(l_15);
  Epushd(4,3);
  MoveTop(4,1);
  goto e_44;
  e_44 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(n_15);
  goto k_62;
  n_15 :
  goto m_15;
  k_62 :
  Move(3,2,4,2);
  Return();
  m_15 :
  Epopd(4,3);
  goto k_15;
  l_15 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_15);
  goto j_62;
  p_15 :
  AllBuild();
  goto o_15;
  k_15 :
  Cpop();
  o_15 :
  Return();
  j_15 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(q_15);
  goto h_62;
  q_15 :
  Return();
  h_15 :
  Epopd(3,3);
  goto e_15;
  g_15 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_15);
  goto h_62;
  s_15 :
  AllBuild();
  goto r_15;
  e_15 :
  Cpop();
  r_15 :
  Return();
  d_15 :
  MoveTop(2,1);
  NotNULLd(0,8);
  NotNULLd(0,12);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,12),App0("TNil"))));
  MoveTop(2,2);
  goto j_44;
  j_44 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto k_44;
  k_44 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto l_44;
  l_44 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(u_15);
  goto m_62;
  u_15 :
  goto t_15;
  m_62 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(v_15);
  n_62 :
  Cpush(x_15);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_15);
  goto n_62;
  y_15 :
  AllBuild();
  goto w_15;
  x_15 :
  Ccall(_stratego_y_64);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto z_15;
  w_15 :
  Cpop();
  z_15 :
  Return();
  v_15 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  NotNULLd(0,13);
  Tset(App2("Choice",App2("Matrix",Egetd(2,1),Egetd(3,1)),Egetd(0,13)));
  Epopd(3,1);
  Return();
  t_15 :
  Epopd(2,6);
  Return();
  b_15 :
  Epopd(1,5);
  Return();
  w_9 :
  goto v_9;
  j_61 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(1,1);
  goto x_43;
  x_43 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_43;
  z_43 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto a_44;
  a_44 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(b_16);
  goto k_61;
  b_16 :
  goto a_16;
  k_61 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(c_16);
  l_61 :
  Cpush(j_16);
  Ccall(_stratego_y_64);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto i_16;
  j_16 :
  Ccontinue(l_16);
  Epushd(3,3);
  MoveTop(3,1);
  goto q_43;
  q_43 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(p_16);
  goto m_61;
  p_16 :
  goto m_16;
  m_61 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(q_16);
  n_61 :
  Cpush(s_16);
  Epushd(4,3);
  MoveTop(4,1);
  goto p_43;
  p_43 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(u_16);
  goto o_61;
  u_16 :
  goto t_16;
  o_61 :
  Move(3,2,4,2);
  Return();
  t_16 :
  Epopd(4,3);
  goto r_16;
  s_16 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_16);
  goto n_61;
  w_16 :
  AllBuild();
  goto v_16;
  r_16 :
  Cpop();
  v_16 :
  Return();
  q_16 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(x_16);
  goto l_61;
  x_16 :
  Return();
  m_16 :
  Epopd(3,3);
  goto i_16;
  l_16 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_16);
  goto l_61;
  z_16 :
  AllBuild();
  goto y_16;
  i_16 :
  Cpop();
  y_16 :
  Return();
  c_16 :
  MoveTop(2,1);
  NotNULLd(0,8);
  NotNULLd(0,13);
  Tset(App2("TCons",Egetd(0,8),App2("TCons",Egetd(0,13),App0("TNil"))));
  MoveTop(2,2);
  goto u_43;
  u_43 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto v_43;
  v_43 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto w_43;
  w_43 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(b_17);
  goto q_61;
  b_17 :
  goto a_17;
  q_61 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(c_17);
  v_61 :
  Cpush(e_17);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_17);
  goto v_61;
  f_17 :
  AllBuild();
  goto d_17;
  e_17 :
  Ccall(_stratego_y_64);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto g_17;
  d_17 :
  Cpop();
  g_17 :
  Return();
  c_17 :
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("Matrix",Egetd(2,1),Egetd(3,1)));
  Epopd(3,1);
  Return();
  a_17 :
  Epopd(2,6);
  Return();
  a_16 :
  Epopd(1,5);
  Return();
  v_9 :
  goto s_9;
  f_61 :
  Epushd(1,1);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Rpush(h_17);
  g_61 :
  Cpush(j_17);
  Ccall(_stratego_y_64);
  goto i_17;
  j_17 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(2,3);
  MoveTop(2,1);
  goto k_43;
  k_43 :
  TestFunFC(f_10,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(z_17);
  goto h_61;
  z_17 :
  goto w_17;
  h_61 :
  NotNULLd(2,2);
  NotNULLd(0,6);
  NotNULLd(2,3);
  Tset(App2("Row",Egetd(2,2),App2("Scope",Egetd(0,6),Egetd(2,3))));
  Return();
  w_17 :
  Epopd(2,3);
  OneNextSon();
  Rpush(a_18);
  goto g_61;
  a_18 :
  AllBuild();
  goto n_17;
  i_17 :
  Cpop();
  n_17 :
  Return();
  h_17 :
  MoveTop(1,1);
  NotNULLd(0,10);
  NotNULLd(1,1);
  Tset(App2("Matrix",Egetd(0,10),Egetd(1,1)));
  Epopd(1,1);
  Return();
  s_9 :
  goto r_9;
  e_61 :
  NotNULLd(0,7);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(0,9);
  Tset(App2("Matrix",Egetd(0,7),App2("Cons",App2("Row",Egetd(0,2),App2("Seq",Egetd(0,3),Egetd(0,9))),App0("Nil"))));
  Return();
  r_9 :
  Epopd(0,13);
ENDPROC

PROC(_stratego_h_65)
  Cpush(c_18);
  Ccall(_stratego_i_65);
  goto b_18;
  c_18 :
  Ccontinue(d_18);
  Ccall(_stratego_j_65);
  goto b_18;
  d_18 :
  Ccontinue(n_18);
  Ccall(_stratego_k_65);
  goto b_18;
  n_18 :
  Ccontinue(o_18);
  Ccall(_stratego_l_65);
  goto b_18;
  o_18 :
  Ccall(_stratego_m_65);
  goto p_18;
  b_18 :
  Cpop();
  p_18 :
ENDPROC

PROC(_stratego_i_65)
  Epushd(0,3);
  MoveTop(0,2);
  goto h_68;
  h_68 :
  TestFunFC(c_19,&&b_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto i_68;
  i_68 :
  TestFunFC(d_19,&&fail,Egetd(0,3));
  Rpush(a_19);
  goto b_69;
  b_19 :
  TestFunFC(f_19,&&e_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto j_68;
  j_68 :
  TestFunFC(d_19,&&fail,Egetd(0,3));
  Rpush(a_19);
  goto c_69;
  e_19 :
  TestFunFC(d_10,&&g_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto k_68;
  k_68 :
  TestFunFC(d_19,&&h_19,Egetd(0,1));
  goto l_68;
  l_68 :
  TestFunFC(d_19,&&i_19,Egetd(0,3));
  Cpush(k_19);
  Rpush(l_19);
  goto d_69;
  l_19 :
  goto j_19;
  k_19 :
  Rpush(n_19);
  goto e_69;
  n_19 :
  goto m_19;
  j_19 :
  Cpop();
  m_19 :
  goto a_19;
  i_19 :
  Rpush(a_19);
  goto e_69;
  h_19 :
  goto m_68;
  m_68 :
  TestFunFC(d_19,&&fail,Egetd(0,3));
  Rpush(a_19);
  goto d_69;
  g_19 :
  TestFunFC(m_10,&&o_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto n_68;
  n_68 :
  TestFunFC(d_19,&&fail,Egetd(0,3));
  Rpush(a_19);
  goto f_69;
  o_19 :
  TestFunFC(h_10,&&p_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto o_68;
  o_68 :
  TestFunFC(d_19,&&fail,Egetd(0,1));
  Rpush(a_19);
  goto g_69;
  p_19 :
  TestFunFC(s_19,&&r_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto p_68;
  p_68 :
  TestFunFC(d_19,&&fail,Egetd(0,1));
  Rpush(a_19);
  goto h_69;
  r_19 :
  TestFunFC(u_19,&&t_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto q_68;
  q_68 :
  TestFunFC(d_19,&&fail,Egetd(0,3));
  Rpush(a_19);
  goto i_69;
  t_19 :
  TestFunFC(w_19,&&v_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto r_68;
  r_68 :
  TestFunFC(d_19,&&fail,Egetd(0,3));
  Rpush(a_19);
  goto j_69;
  v_19 :
  TestFunFC(c_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto s_68;
  s_68 :
  TestFunFC(x_19,&&fail,Egetd(0,3));
  Rpush(a_19);
  goto k_69;
  a_19 :
  goto z_18;
  k_69 :
  Tset(App0("Id"));
  Return();
  z_18 :
  goto y_18;
  j_69 :
  Tset(App0("Id"));
  Return();
  y_18 :
  goto x_18;
  i_69 :
  Tset(App0("Id"));
  Return();
  x_18 :
  goto w_18;
  h_69 :
  Tset(App0("Id"));
  Return();
  w_18 :
  goto v_18;
  g_69 :
  Tset(App0("Id"));
  Return();
  v_18 :
  goto u_18;
  f_69 :
  Tset(App0("Id"));
  Return();
  u_18 :
  goto t_18;
  e_69 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  t_18 :
  goto s_18;
  d_69 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  s_18 :
  goto r_18;
  c_69 :
  Tset(App0("Fail"));
  Return();
  r_18 :
  goto q_18;
  b_69 :
  Tset(App0("Id"));
  Return();
  q_18 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_j_65)
  Epushd(0,3);
  MoveTop(0,2);
  goto c_70;
  c_70 :
  TestFunFC(c_19,&&a_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto d_70;
  d_70 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto k_71;
  a_21 :
  TestFunFC(f_19,&&c_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto e_70;
  e_70 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto l_71;
  c_21 :
  TestFunFC(d_10,&&d_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto f_70;
  f_70 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto m_71;
  d_21 :
  TestFunFC(h_10,&&e_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto g_70;
  g_70 :
  TestFunFC(b_21,&&fail,Egetd(0,1));
  Rpush(z_20);
  goto n_71;
  e_21 :
  TestFunFC(s_19,&&f_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto h_70;
  h_70 :
  TestFunFC(b_21,&&fail,Egetd(0,1));
  Rpush(z_20);
  goto o_71;
  f_21 :
  TestFunFC(h_21,&&g_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto i_70;
  i_70 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto p_71;
  g_21 :
  TestFunFC(j_21,&&i_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto j_70;
  j_70 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto q_71;
  i_21 :
  TestFunFC(l_21,&&k_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto k_70;
  k_70 :
  TestFunFC(b_21,&&fail,Egetd(0,1));
  Rpush(z_20);
  goto r_71;
  k_21 :
  TestFunFC(n_21,&&m_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(z_20);
  goto s_71;
  m_21 :
  TestFunFC(j_10,&&o_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto l_70;
  l_70 :
  TestFunFC(b_21,&&p_21,Egetd(0,1));
  goto m_70;
  m_70 :
  TestFunFC(b_21,&&q_21,Egetd(0,3));
  Cpush(s_21);
  Rpush(u_21);
  goto v_71;
  u_21 :
  goto r_21;
  s_21 :
  Rpush(w_21);
  goto w_71;
  w_21 :
  goto v_21;
  r_21 :
  Cpop();
  v_21 :
  goto z_20;
  q_21 :
  Rpush(z_20);
  goto w_71;
  p_21 :
  goto n_70;
  n_70 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto v_71;
  o_21 :
  TestFunFC(m_10,&&x_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto p_70;
  p_70 :
  TestFunFC(b_21,&&y_21,Egetd(0,1));
  goto q_70;
  q_70 :
  TestFunFC(b_21,&&z_21,Egetd(0,3));
  Cpush(b_22);
  Rpush(c_22);
  goto x_71;
  c_22 :
  goto a_22;
  b_22 :
  Rpush(e_22);
  goto y_71;
  e_22 :
  goto d_22;
  a_22 :
  Cpop();
  d_22 :
  goto z_20;
  z_21 :
  Rpush(z_20);
  goto y_71;
  y_21 :
  goto r_70;
  r_70 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto x_71;
  x_21 :
  TestFunFC(w_19,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto t_70;
  t_70 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto z_71;
  z_20 :
  goto y_20;
  z_71 :
  Tset(App0("Fail"));
  Return();
  y_20 :
  goto s_20;
  y_71 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  s_20 :
  goto q_20;
  x_71 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  q_20 :
  goto p_20;
  w_71 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  p_20 :
  goto o_20;
  v_71 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  o_20 :
  goto n_20;
  s_71 :
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(f_22);
  t_71 :
  Cpush(h_22);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_70;
  a_70 :
  TestFunFC(k_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_70;
  b_70 :
  TestFunFC(b_21,&&fail,Egetd(1,2));
  Rpush(j_22);
  goto u_71;
  j_22 :
  goto i_22;
  u_71 :
  Return();
  i_22 :
  Epopd(1,3);
  goto g_22;
  h_22 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_22);
  goto t_71;
  l_22 :
  AllBuild();
  goto k_22;
  g_22 :
  Cpop();
  k_22 :
  Return();
  f_22 :
  Tpop();
  Tset(App0("Fail"));
  Return();
  n_20 :
  goto f_20;
  r_71 :
  Tset(App0("Fail"));
  Return();
  f_20 :
  goto e_20;
  q_71 :
  Tset(App0("Fail"));
  Return();
  e_20 :
  goto d_20;
  p_71 :
  Tset(App0("Fail"));
  Return();
  d_20 :
  goto c_20;
  o_71 :
  Tset(App0("Fail"));
  Return();
  c_20 :
  goto b_20;
  n_71 :
  Tset(App0("Fail"));
  Return();
  b_20 :
  goto a_20;
  m_71 :
  Tset(App0("Fail"));
  Return();
  a_20 :
  goto z_19;
  l_71 :
  Tset(App0("Id"));
  Return();
  z_19 :
  goto y_19;
  k_71 :
  Tset(App0("Fail"));
  Return();
  y_19 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_k_65)
  Epushd(0,5);
  MoveTop(0,1);
  goto d_72;
  d_72 :
  TestFunFC(j_10,&&s_22,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto e_72;
  e_72 :
  TestFunFC(j_10,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_22);
  goto v_72;
  s_22 :
  TestFunFC(d_10,&&t_22,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto f_72;
  f_72 :
  TestFunFC(d_10,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_22);
  goto w_72;
  t_22 :
  TestFunFC(m_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto g_72;
  g_72 :
  TestFunFC(m_10,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_22);
  goto x_72;
  p_22 :
  goto o_22;
  x_72 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("LChoice",Egetd(0,3),App2("LChoice",Egetd(0,4),Egetd(0,5))));
  Return();
  o_22 :
  goto n_22;
  w_72 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,3),App2("Seq",Egetd(0,4),Egetd(0,5))));
  Return();
  n_22 :
  goto m_22;
  v_72 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Choice",Egetd(0,3),App2("Choice",Egetd(0,4),Egetd(0,5))));
  Return();
  m_22 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_l_65)
  Epushd(0,9);
  MoveTop(0,2);
  goto e_73;
  e_73 :
  TestFunFC(j_10,&&b_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(a_23);
  goto c_74;
  b_23 :
  TestFunFC(m_10,&&c_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(a_23);
  goto d_74;
  c_23 :
  TestFunFC(f_19,&&d_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto f_73;
  f_73 :
  TestFunFC(f_19,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(a_23);
  goto f_74;
  d_23 :
  TestFunFC(c_19,&&e_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto g_73;
  g_73 :
  TestFunFC(c_19,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(a_23);
  goto g_74;
  e_23 :
  TestFunFC(w_19,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto h_73;
  h_73 :
  TestFunFC(w_19,&&f_23,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(a_23);
  goto e_74;
  f_23 :
  TestFunFC(d_10,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto i_73;
  i_73 :
  TestFunFC(w_19,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto j_73;
  j_73 :
  TestFunFC(d_10,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,9,0,6,1);
  goto k_73;
  k_73 :
  TestFunFC(g_23,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  Rpush(a_23);
  goto h_74;
  a_23 :
  goto z_22;
  h_74 :
  NotNULLd(0,5);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset(App1("Where",App2("Seq",Egetd(0,5),App2("Seq",App1("Build",Egetd(0,8)),Egetd(0,9)))));
  Return();
  z_22 :
  goto y_22;
  g_74 :
  NotNULLd(0,4);
  Tset(App1("Test",Egetd(0,4)));
  Return();
  y_22 :
  goto x_22;
  f_74 :
  NotNULLd(0,4);
  Tset(App1("Test",Egetd(0,4)));
  Return();
  x_22 :
  goto w_22;
  e_74 :
  NotNULLd(0,4);
  Tset(App1("Where",Egetd(0,4)));
  Return();
  w_22 :
  goto v_22;
  d_74 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  v_22 :
  goto u_22;
  c_74 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  u_22 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_m_65)
  Epushd(0,6);
  MoveTop(0,3);
  goto u_74;
  u_74 :
  TestFunFC(v_23,&&u_23,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto v_74;
  v_74 :
  TestFunFC(j_3,&&w_23,Egetd(0,4));
  Rpush(t_23);
  goto y_75;
  w_23 :
  TestFunFC(k_3,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(t_23);
  goto z_75;
  u_23 :
  TestFunFC(y_23,&&x_23,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto w_74;
  w_74 :
  TestFunFC(j_3,&&z_23,Egetd(0,4));
  Rpush(t_23);
  goto a_76;
  z_23 :
  TestFunFC(k_3,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(t_23);
  goto b_76;
  x_23 :
  TestFunFC(b_24,&&a_24,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto x_74;
  x_74 :
  TestFunFC(j_3,&&c_24,Egetd(0,4));
  Rpush(t_23);
  goto c_76;
  c_24 :
  TestFunFC(k_3,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(t_23);
  goto d_76;
  a_24 :
  TestFunFC(e_24,&&d_24,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto y_74;
  y_74 :
  TestFunFC(j_3,&&f_24,Egetd(0,4));
  Rpush(t_23);
  goto e_76;
  f_24 :
  TestFunFC(k_3,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(t_23);
  goto f_76;
  d_24 :
  TestFunFC(h_24,&&g_24,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(t_23);
  goto g_76;
  g_24 :
  TestFunFC(j_24,&&i_24,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(t_23);
  goto h_76;
  i_24 :
  TestFunFC(l_24,&&k_24,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(t_23);
  goto i_76;
  k_24 :
  TestFunFC(m_24,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(t_23);
  goto j_76;
  t_23 :
  goto s_23;
  j_76 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Seqs",App2("Cons",App1("Build",Egetd(0,5)),App2("Cons",Egetd(0,4),App2("Cons",App1("Match",Egetd(0,6)),App0("Nil"))))));
  Return();
  s_23 :
  goto r_23;
  i_76 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,4),App1("Match",Egetd(0,5))));
  Return();
  r_23 :
  goto q_23;
  h_76 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",App1("Match",Egetd(0,4)),Egetd(0,5)));
  Return();
  q_23 :
  goto p_23;
  g_76 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App2("Seq",App1("Build",Egetd(0,5)),Egetd(0,4)));
  Return();
  p_23 :
  goto o_23;
  f_76 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,1),App2("Lets",Egetd(0,2),Egetd(0,5))));
  Return();
  o_23 :
  goto n_23;
  e_76 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  n_23 :
  goto m_23;
  d_76 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("LChoice",Egetd(0,1),App1("LChoices",Egetd(0,2))));
  Return();
  m_23 :
  goto l_23;
  c_76 :
  Tset(App0("Fail"));
  Return();
  l_23 :
  goto k_23;
  b_76 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Choice",Egetd(0,1),App1("Choices",Egetd(0,2))));
  Return();
  k_23 :
  goto j_23;
  a_76 :
  Tset(App0("Fail"));
  Return();
  j_23 :
  goto i_23;
  z_75 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Seq",Egetd(0,1),App1("Seqs",Egetd(0,2))));
  Return();
  i_23 :
  goto h_23;
  y_75 :
  Tset(App0("Id"));
  Return();
  h_23 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_n_65)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_o_65)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test3"));
  Ccall(_stratego_o_64);
  Tpop();
  Cpush(p_24);
  Tdupl();
  Epushd(1,1);
  Cpush(r_24);
  Epushd(2,1);
  Tset(ATmakeString("data/choices1.trm"));
  Ccall(_stratego_n_65);
  Ccall(_stratego_p_65);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto q_24;
  r_24 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_o_64);
  Ccall(_stratego_p_64);
  goto s_24;
  q_24 :
  Cpop();
  s_24 :
  Tset(ATmakeString("data/choices1-dfa.trm"));
  Ccall(_stratego_n_65);
  MoveTop(1,1);
  Move(0,2,1,1);
  Cpush(u_24);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto t_24;
  u_24 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_p_64);
  goto v_24;
  t_24 :
  Cpop();
  v_24 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_l_64);
  goto n_24;
  p_24 :
  Ccall(_stratego_n_64);
  goto w_24;
  n_24 :
  Cpop();
  w_24 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_p_65)
  Ccall(_stratego_q_65);
  Ccall(_stratego_b_66);
  Ccall(_stratego_x_66);
  Ccall(_stratego_y_66);
ENDPROC

PROC(_stratego_q_65)
  Rpush(x_24);
  d_81 :
  Cpush(z_24);
  y_24 :
  Cpush(b_25);
  Ccall(_stratego_r_65);
  goto a_25;
  b_25 :
  Epushd(0,3);
  MoveTop(0,1);
  goto s_78;
  s_78 :
  TestFunFC(n_21,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(g_25);
  goto f_81;
  g_25 :
  goto f_25;
  f_81 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(h_25);
  g_81 :
  Cpush(m_25);
  Ccall(_stratego_y_64);
  goto l_25;
  m_25 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,2);
  goto q_78;
  q_78 :
  TestFunFC(c_1,&&w_25,Egetd(3,2));
  MoveArg(3,1,3,2,0);
  Rpush(s_25);
  goto h_81;
  w_25 :
  TestFunFC(d_19,&&fail,Egetd(3,2));
  Rpush(s_25);
  goto j_81;
  s_25 :
  goto p_25;
  j_81 :
  Tset(App0("Wld"));
  Return();
  p_25 :
  goto o_25;
  h_81 :
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Return();
  o_25 :
  Epopd(3,2);
  OneNextSon();
  Rpush(x_25);
  goto g_81;
  x_25 :
  AllBuild();
  goto n_25;
  l_25 :
  Cpop();
  n_25 :
  Return();
  h_25 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App1("Match",App2("Op",Egetd(0,2),Egetd(1,1))));
  Epopd(1,1);
  Return();
  f_25 :
  Epopd(0,3);
  goto e_25;
  a_25 :
  Cpop();
  e_25 :
  Tduplinv();
  goto y_24;
  z_24 :
  AllInit();
  y_25 :
  AllNextSon(&&z_25);
  Rpush(a_26);
  goto d_81;
  a_26 :
  goto y_25;
  z_25 :
  AllBuild();
  Cpush(c_26);
  b_26 :
  Cpush(f_26);
  Ccall(_stratego_r_65);
  goto d_26;
  f_26 :
  Epushd(0,3);
  MoveTop(0,1);
  goto y_78;
  y_78 :
  TestFunFC(n_21,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(i_26);
  goto m_81;
  i_26 :
  goto h_26;
  m_81 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(j_26);
  n_81 :
  Cpush(l_26);
  Ccall(_stratego_y_64);
  goto k_26;
  l_26 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,2);
  goto w_78;
  w_78 :
  TestFunFC(c_1,&&r_26,Egetd(3,2));
  MoveArg(3,1,3,2,0);
  Rpush(q_26);
  goto o_81;
  r_26 :
  TestFunFC(d_19,&&fail,Egetd(3,2));
  Rpush(q_26);
  goto p_81;
  q_26 :
  goto p_26;
  p_81 :
  Tset(App0("Wld"));
  Return();
  p_26 :
  goto o_26;
  o_81 :
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Return();
  o_26 :
  Epopd(3,2);
  OneNextSon();
  Rpush(s_26);
  goto n_81;
  s_26 :
  AllBuild();
  goto m_26;
  k_26 :
  Cpop();
  m_26 :
  Return();
  j_26 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App1("Match",App2("Op",Egetd(0,2),Egetd(1,1))));
  Epopd(1,1);
  Return();
  h_26 :
  Epopd(0,3);
  goto g_26;
  d_26 :
  Cpop();
  g_26 :
  Tduplinv();
  goto b_26;
  c_26 :
  Return();
  x_24 :
  Rpush(t_26);
  r_81 :
  Cpush(y_26);
  Epushd(0,5);
  MoveTop(0,1);
  goto i_79;
  i_79 :
  TestFunFC(h_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto j_79;
  j_79 :
  TestFunFC(d_10,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(a_27);
  goto s_81;
  a_27 :
  goto z_26;
  s_81 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_z_65);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(0,2),App0("TNil"))));
  MoveTop(2,2);
  goto f_79;
  f_79 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto g_79;
  g_79 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto h_79;
  h_79 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(c_27);
  goto u_81;
  c_27 :
  goto b_27;
  u_81 :
  Epushd(3,3);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App0("TNil"))));
  Ccall(_stratego_w_65);
  MoveTop(3,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_w_65);
  MoveTop(3,2);
  Move(1,1,3,2);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_w_65);
  MoveTop(3,3);
  Move(1,2,3,3);
  Cpush(d_27);
  Tdupl();
  Ccall(_stratego_y_64);
  Cpop();
  Crestore();
  Cjump();
  d_27 :
  Epopd(3,3);
  Return();
  b_27 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,4);
  NotNULLd(1,2);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(1,1),App2("Seq",Egetd(0,4),App2("Scope",Egetd(1,2),Egetd(0,5)))));
  Epopd(1,2);
  Return();
  z_26 :
  Epopd(0,5);
  goto x_26;
  y_26 :
  goto e_27;
  x_26 :
  Cpop();
  e_27 :
  AllInit();
  l_27 :
  AllNextSon(&&m_27);
  Rpush(n_27);
  goto r_81;
  n_27 :
  goto l_27;
  m_27 :
  AllBuild();
  Return();
  t_26 :
ENDPROC

PROC(_stratego_r_65)
  Cpush(p_27);
  Ccall(_stratego_h_65);
  goto o_27;
  p_27 :
  Ccontinue(s_27);
  Epushd(0,5);
  MoveTop(0,1);
  goto a_82;
  a_82 :
  TestFunFC(d_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto b_82;
  b_82 :
  TestFunFC(y_27,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(x_27);
  goto s_84;
  x_27 :
  goto u_27;
  s_84 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,4),App2("Seq",Egetd(0,2),Egetd(0,5))));
  Return();
  u_27 :
  Epopd(0,5);
  goto o_27;
  s_27 :
  Ccontinue(z_27);
  Ccall(_stratego_s_65);
  goto o_27;
  z_27 :
  Ccontinue(a_28);
  Ccall(_stratego_y_65);
  goto o_27;
  a_28 :
  Epushd(0,9);
  MoveTop(0,4);
  goto t_82;
  t_82 :
  TestFunFC(d_10,&&y_28,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  goto u_82;
  u_82 :
  TestFunFC(g_23,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto v_82;
  v_82 :
  TestFunFC(d_10,&&fail,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,3,0,9,1);
  goto w_82;
  w_82 :
  TestFunFC(g_23,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_28);
  goto t_84;
  y_28 :
  TestFunFC(y_27,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  goto x_82;
  x_82 :
  TestFunFC(c_29,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  MoveArg(0,8,0,5,2);
  goto y_82;
  y_82 :
  TestFunFC(j_3,&&fail,Egetd(0,7));
  Cpush(e_29);
  Rpush(f_29);
  goto u_84;
  f_29 :
  goto d_29;
  e_29 :
  Rpush(h_29);
  goto d_85;
  h_29 :
  goto g_29;
  d_29 :
  Cpop();
  g_29 :
  goto l_28;
  l_28 :
  goto h_28;
  d_85 :
  NotNULLd(0,6);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset(App2("Let",App4("SDef",App2("Cons",App0("DontInline"),App0("Nil")),Egetd(0,6),App0("Nil"),Egetd(0,8)),Egetd(0,9)));
  Return();
  h_28 :
  goto f_28;
  u_84 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,9);
  Tset(Egetd(0,9));
  Rpush(i_29);
  v_84 :
  Cpush(k_29);
  Epushd(3,4);
  MoveTop(3,1);
  goto g_82;
  g_82 :
  TestFunFC(n_29,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,4,3,1,1);
  goto h_82;
  h_82 :
  TestFunFC(o_29,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  goto i_82;
  i_82 :
  TestFunFC(j_3,&&fail,Egetd(3,4));
  Rpush(m_29);
  goto w_84;
  m_29 :
  goto l_29;
  w_84 :
  Move(0,6,3,3);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  l_29 :
  Epopd(3,4);
  goto j_29;
  k_29 :
  Cpush(q_29);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,3);
  goto l_82;
  l_82 :
  TestFunFC(x_29,&&v_29,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  MoveArg(3,1,3,3,2);
  MoveArg(3,2,3,3,3);
  Rpush(u_29);
  goto x_84;
  v_29 :
  TestFunFC(e_10,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(u_29);
  goto y_84;
  u_29 :
  goto t_29;
  y_84 :
  Return();
  t_29 :
  goto s_29;
  x_84 :
  Return();
  s_29 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  q_29 :
  IsAppl();
  OneInit();
  b_30 :
  OneNextSon();
  Cpush(b_30);
  Rpush(d_30);
  goto v_84;
  d_30 :
  Cpop();
  OneBuild();
  goto p_29;
  j_29 :
  Cpop();
  p_29 :
  Return();
  i_29 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Call",App1("SVar",Egetd(0,6)),App0("Nil")),App2("TCons",Egetd(1,1),App0("TNil"))));
  Cpush(h_30);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,1);
  goto q_82;
  q_82 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto r_82;
  r_82 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto s_82;
  s_82 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(o_30);
  goto a_85;
  o_30 :
  goto n_30;
  a_85 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(x_30);
  p_30 :
  Cpush(q_30);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,2,4,1);
  Epopd(4,1);
  Cpop();
  goto w_30;
  q_30 :
  IsAppl();
  MatchTravInit();
  u_30 :
  OneMatchNextSon();
  Cpush(u_30);
  Rpush(v_30);
  goto p_30;
  v_30 :
  Cpop();
  MatchTravEnd();
  w_30 :
  Return();
  x_30 :
  Return();
  n_30 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  h_30 :
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  f_28 :
  goto d_28;
  t_84 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Build",Egetd(0,2)),Egetd(0,3)));
  Return();
  d_28 :
  Epopd(0,9);
  goto b_28;
  o_27 :
  Cpop();
  b_28 :
ENDPROC

PROC(_stratego_s_65)
  Epushd(0,17);
  MoveTop(0,9);
  goto v_86;
  v_86 :
  TestFunFC(h_10,&&i_31,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto w_86;
  w_86 :
  TestFunFC(d_10,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto x_86;
  x_86 :
  TestFunFC(k_31,&&j_31,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  MoveArg(0,1,0,14,1);
  goto y_86;
  y_86 :
  TestFunFC(r_2,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto z_86;
  z_86 :
  TestFunFC(r_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(h_31);
  goto u_91;
  j_31 :
  TestFunFC(l_31,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto a_87;
  a_87 :
  TestFunFC(r_2,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto b_87;
  b_87 :
  TestFunFC(d_10,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto c_87;
  c_87 :
  TestFunFC(l_31,&&m_31,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto d_87;
  d_87 :
  TestFunFC(r_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(h_31);
  goto b_92;
  m_31 :
  TestFunFC(k_31,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto e_87;
  e_87 :
  TestFunFC(r_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto f_87;
  f_87 :
  TestFunFC(r_2,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  Rpush(h_31);
  goto m_92;
  i_31 :
  TestFunFC(d_10,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto g_87;
  g_87 :
  TestFunFC(g_23,&&o_31,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto h_87;
  h_87 :
  TestFunFC(h_10,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto i_87;
  i_87 :
  TestFunFC(d_10,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto j_87;
  j_87 :
  TestFunFC(l_31,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto k_87;
  k_87 :
  TestFunFC(r_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(h_31);
  goto n_91;
  o_31 :
  TestFunFC(l_31,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto l_87;
  l_87 :
  TestFunFC(r_2,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto m_87;
  m_87 :
  TestFunFC(d_10,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto n_87;
  n_87 :
  TestFunFC(g_23,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto o_87;
  o_87 :
  TestFunFC(r_2,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  Rpush(h_31);
  goto x_92;
  h_31 :
  goto g_31;
  x_92 :
  Epushd(1,1);
  Move(0,12,0,16);
  Move(1,1,0,17);
  NotNULLd(0,12);
  NotNULLd(1,1);
  Tset(App2("Seq",App1("Assign",App1("Var",Egetd(0,12))),Egetd(1,1)));
  Epopd(1,1);
  Return();
  g_31 :
  goto d_31;
  m_92 :
  Epushd(1,3);
  Move(0,16,0,7);
  Move(1,1,0,8);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto r_86;
  r_86 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto s_86;
  s_86 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto t_86;
  t_86 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(q_31);
  goto n_92;
  q_31 :
  goto p_31;
  n_92 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(z_31);
  r_31 :
  Cpush(t_31);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto y_31;
  t_31 :
  IsAppl();
  MatchTravInit();
  u_31 :
  OneMatchNextSon();
  Cpush(u_31);
  Rpush(x_31);
  goto r_31;
  x_31 :
  Cpop();
  MatchTravEnd();
  y_31 :
  Return();
  z_31 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(3,1);
  goto o_86;
  o_86 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto p_86;
  p_86 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto q_86;
  q_86 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(b_32);
  goto r_92;
  b_32 :
  goto a_32;
  r_92 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(h_32);
  c_32 :
  Cpush(d_32);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  Cpop();
  goto g_32;
  d_32 :
  IsAppl();
  MatchTravInit();
  e_32 :
  OneMatchNextSon();
  Cpush(e_32);
  Rpush(f_32);
  goto c_32;
  f_32 :
  Cpop();
  MatchTravEnd();
  g_32 :
  Return();
  h_32 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_w_65);
  MoveTop(4,1);
  Move(1,2,4,1);
  Epopd(4,1);
  Return();
  a_32 :
  Epopd(3,5);
  Return();
  p_31 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,16)),App0("Nil")),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_t_65);
  MoveTop(1,3);
  NotNULLd(1,2);
  NotNULLd(0,16);
  NotNULLd(1,3);
  Tset(App2("Scope",Egetd(1,2),App2("Seq",App1("Assign",App1("Var",Egetd(0,16))),Egetd(1,3))));
  Epopd(1,3);
  Return();
  d_31 :
  goto c_31;
  b_92 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto f_86;
  f_86 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto g_86;
  g_86 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto h_86;
  h_86 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(j_32);
  goto c_92;
  j_32 :
  goto i_32;
  c_92 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(y_32);
  k_32 :
  Cpush(l_32);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto u_32;
  l_32 :
  IsAppl();
  MatchTravInit();
  n_32 :
  OneMatchNextSon();
  Cpush(n_32);
  Rpush(t_32);
  goto k_32;
  t_32 :
  Cpop();
  MatchTravEnd();
  u_32 :
  Return();
  y_32 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(3,1);
  goto c_86;
  c_86 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto d_86;
  d_86 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto e_86;
  e_86 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(a_33);
  goto g_92;
  a_33 :
  goto z_32;
  g_92 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(h_33);
  b_33 :
  Cpush(d_33);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  Cpop();
  goto g_33;
  d_33 :
  IsAppl();
  MatchTravInit();
  e_33 :
  OneMatchNextSon();
  Cpush(e_33);
  Rpush(f_33);
  goto b_33;
  f_33 :
  Cpop();
  MatchTravEnd();
  g_33 :
  Return();
  h_33 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_w_65);
  MoveTop(4,1);
  Move(1,1,4,1);
  Epopd(4,1);
  Return();
  z_32 :
  Epopd(3,5);
  Return();
  i_32 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(0,8);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,16)),App0("Nil")),App2("TCons",Egetd(0,8),App0("TNil")))));
  Ccall(_stratego_t_65);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(0,16);
  NotNULLd(1,2);
  Tset(App2("Scope",Egetd(1,1),App2("Seq",App1("Assign",App1("Var",Egetd(0,16))),Egetd(1,2))));
  Epopd(1,2);
  Return();
  c_31 :
  goto z_30;
  u_91 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto t_85;
  t_85 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto u_85;
  u_85 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_85;
  v_85 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(q_33);
  goto w_91;
  q_33 :
  goto p_33;
  w_91 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(f_34);
  r_33 :
  Cpush(t_33);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto b_34;
  t_33 :
  IsAppl();
  MatchTravInit();
  u_33 :
  OneMatchNextSon();
  Cpush(u_33);
  Rpush(a_34);
  goto r_33;
  a_34 :
  Cpop();
  MatchTravEnd();
  b_34 :
  Return();
  f_34 :
  NotNULLd(0,10);
  NotNULLd(0,16);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,16),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_w_65);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  p_33 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,16);
  NotNULLd(0,2);
  NotNULLd(0,17);
  Tset(App2("TCons",App2("Cons",Egetd(0,16),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,2)),App0("Nil")),App2("TCons",Egetd(0,17),App0("TNil")))));
  Ccall(_stratego_t_65);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Scope",Egetd(1,1),Egetd(1,2)));
  Epopd(1,2);
  Return();
  z_30 :
  goto y_30;
  n_91 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto m_85;
  m_85 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto n_85;
  n_85 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_85;
  o_85 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(r_34);
  goto o_91;
  r_34 :
  goto g_34;
  o_91 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(k_35);
  s_34 :
  Cpush(t_34);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto j_35;
  t_34 :
  IsAppl();
  MatchTravInit();
  h_35 :
  OneMatchNextSon();
  Cpush(h_35);
  Rpush(i_35);
  goto s_34;
  i_35 :
  Cpop();
  MatchTravEnd();
  j_35 :
  Return();
  k_35 :
  NotNULLd(0,14);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,14),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_w_65);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  g_34 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,11);
  NotNULLd(0,8);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,11),App0("Nil")),App2("TCons",Egetd(0,8),App0("TNil")))));
  Ccall(_stratego_t_65);
  MoveTop(1,2);
  NotNULLd(0,11);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Seq",App1("Build",Egetd(0,11)),App2("Scope",Egetd(1,1),Egetd(1,2))));
  Epopd(1,2);
  Return();
  y_30 :
  Epopd(0,17);
ENDPROC

PROC(_stratego_t_65)
  Epushd(0,5);
  Ccall(_stratego_u_65);
  MoveTop(0,1);
  goto g_93;
  g_93 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto h_93;
  h_93 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto i_93;
  i_93 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  Rpush(m_35);
  goto b_94;
  m_35 :
  goto l_35;
  b_94 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(n_35);
  c_94 :
  Cpush(p_35);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto e_93;
  e_93 :
  TestFunFC(r_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(r_35);
  goto e_94;
  r_35 :
  goto q_35;
  e_94 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Move(1,2,2,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  q_35 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_v_65);
  Epopd(1,3);
  goto o_35;
  p_35 :
  AllInit();
  t_35 :
  AllNextSon(&&u_35);
  Rpush(v_35);
  goto c_94;
  v_35 :
  goto t_35;
  u_35 :
  AllBuild();
  goto s_35;
  o_35 :
  Cpop();
  s_35 :
  Return();
  n_35 :
  Return();
  l_35 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_u_65)
  Epushd(0,7);
  MoveTop(0,1);
  goto y_94;
  y_94 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto z_94;
  z_94 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto a_95;
  a_95 :
  TestFunFC(d_0,&&z_35,Egetd(0,5));
  Rpush(y_35);
  goto m_96;
  z_35 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto b_95;
  b_95 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  Rpush(y_35);
  goto n_96;
  y_35 :
  goto x_35;
  n_96 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(a_36);
  o_96 :
  Epushd(2,9);
  MoveTop(2,1);
  goto p_94;
  p_94 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto q_94;
  q_94 :
  TestFunFC(j_3,&&f_36,Egetd(2,2));
  goto r_94;
  r_94 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto s_94;
  s_94 :
  TestFunFC(j_3,&&fail,Egetd(2,6));
  goto t_94;
  t_94 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(e_36);
  goto p_96;
  f_36 :
  TestFunFC(k_3,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto u_94;
  u_94 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto v_94;
  v_94 :
  TestFunFC(k_3,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto w_94;
  w_94 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(e_36);
  goto q_96;
  e_36 :
  goto d_36;
  q_96 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(l_36);
  goto o_96;
  l_36 :
  OneNextSon();
  Ccall(_stratego_h_64);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto m_94;
  m_94 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto n_94;
  n_94 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto o_94;
  o_94 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(n_36);
  goto r_96;
  n_36 :
  goto k_36;
  r_96 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  k_36 :
  Epopd(3,5);
  Return();
  d_36 :
  goto b_36;
  p_96 :
  Tset(App0("Nil"));
  Return();
  b_36 :
  Epopd(2,9);
  Return();
  a_36 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  x_35 :
  goto w_35;
  m_96 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  w_35 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_v_65)
  Rpush(p_36);
  r_97 :
  Epushd(0,11);
  MoveTop(0,5);
  goto v_96;
  v_96 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto w_96;
  w_96 :
  TestFunFC(a_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto x_96;
  x_96 :
  TestFunFC(k_3,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto y_96;
  y_96 :
  TestFunFC(d_0,&&fail,Egetd(0,11));
  goto z_96;
  z_96 :
  TestFunFC(a_0,&&z_36,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto a_97;
  a_97 :
  TestFunFC(a_0,&&a_37,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto b_97;
  b_97 :
  TestFunFC(d_0,&&b_37,Egetd(0,4));
  Cpush(d_37);
  Rpush(e_37);
  goto s_97;
  e_37 :
  goto c_37;
  d_37 :
  Rpush(g_37);
  goto t_97;
  g_37 :
  goto f_37;
  c_37 :
  Cpop();
  f_37 :
  goto y_36;
  b_37 :
  Rpush(y_36);
  goto t_97;
  a_37 :
  Rpush(y_36);
  goto t_97;
  z_36 :
  Rpush(y_36);
  goto t_97;
  y_36 :
  goto r_36;
  t_97 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(h_37);
  goto r_97;
  h_37 :
  Return();
  r_36 :
  goto q_36;
  s_97 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  q_36 :
  Epopd(0,11);
  Return();
  p_36 :
ENDPROC

PROC(_stratego_w_65)
  Epushd(0,5);
  MoveTop(0,5);
  goto k_98;
  k_98 :
  TestFunFC(a_0,&&w_37,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto l_98;
  l_98 :
  TestFunFC(a_0,&&x_37,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto m_98;
  m_98 :
  TestFunFC(d_0,&&y_37,Egetd(0,4));
  Cpush(a_38);
  Rpush(b_38);
  goto w_99;
  b_38 :
  goto z_37;
  a_38 :
  Rpush(d_38);
  goto b_100;
  d_38 :
  goto c_38;
  z_37 :
  Cpop();
  c_38 :
  goto r_37;
  y_37 :
  Rpush(r_37);
  goto b_100;
  x_37 :
  Rpush(r_37);
  goto b_100;
  w_37 :
  Rpush(r_37);
  goto b_100;
  r_37 :
  goto n_37;
  b_100 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(e_38);
  c_100 :
  Cpush(g_38);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(i_38);
  Epushd(1,7);
  MoveTop(1,1);
  goto b_98;
  b_98 :
  TestFunFC(k_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto c_98;
  c_98 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto d_98;
  d_98 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto e_98;
  e_98 :
  TestFunFC(d_0,&&fail,Egetd(1,6));
  Rpush(k_38);
  goto e_100;
  k_38 :
  goto j_38;
  e_100 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  j_38 :
  Epopd(1,7);
  goto h_38;
  i_38 :
  Ccall(_stratego_x_65);
  goto l_38;
  h_38 :
  Cpop();
  l_38 :
  OneNextSon();
  Ccall(_stratego_h_64);
  AllBuild();
  AllBuild();
  goto f_38;
  g_38 :
  Epushd(1,7);
  MoveTop(1,1);
  goto g_98;
  g_98 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_98;
  h_98 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto i_98;
  i_98 :
  TestFunFC(k_3,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto j_98;
  j_98 :
  TestFunFC(d_0,&&fail,Egetd(1,7));
  Rpush(q_38);
  goto f_100;
  q_38 :
  goto p_38;
  f_100 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  p_38 :
  Epopd(1,7);
  goto o_38;
  f_38 :
  Cpop();
  o_38 :
  Cpush(u_38);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_64);
  OneNextSon();
  Ccall(_stratego_h_64);
  AllBuild();
  AllBuild();
  goto t_38;
  u_38 :
  Rpush(x_38);
  goto c_100;
  x_38 :
  goto w_38;
  t_38 :
  Cpop();
  w_38 :
  Return();
  e_38 :
  Return();
  n_37 :
  goto m_37;
  w_99 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(y_38);
  x_99 :
  Cpush(a_39);
  Ccall(_stratego_y_64);
  goto z_38;
  a_39 :
  Ccontinue(d_39);
  Epushd(1,3);
  MoveTop(1,1);
  goto z_97;
  z_97 :
  TestFunFC(k_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(g_39);
  goto y_99;
  g_39 :
  goto f_39;
  y_99 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(h_39);
  z_99 :
  Cpush(j_39);
  Epushd(2,3);
  MoveTop(2,1);
  goto y_97;
  y_97 :
  TestFunFC(k_3,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(p_39);
  goto a_100;
  p_39 :
  goto o_39;
  a_100 :
  Move(1,2,2,2);
  Return();
  o_39 :
  Epopd(2,3);
  goto i_39;
  j_39 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_40);
  goto z_99;
  d_40 :
  AllBuild();
  goto c_40;
  i_39 :
  Cpop();
  c_40 :
  Return();
  h_39 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(e_40);
  goto x_99;
  e_40 :
  Return();
  f_39 :
  Epopd(1,3);
  goto z_38;
  d_39 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_40);
  goto x_99;
  g_40 :
  AllBuild();
  goto f_40;
  z_38 :
  Cpop();
  f_40 :
  Return();
  y_38 :
  Return();
  m_37 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_x_65)
  Epushd(0,7);
  MoveTop(0,1);
  goto i_101;
  i_101 :
  TestFunFC(k_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto j_101;
  j_101 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto k_101;
  k_101 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto l_101;
  l_101 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(k_40);
  goto m_103;
  k_40 :
  goto j_40;
  m_103 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto i_100;
  i_100 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_100;
  j_100 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto k_100;
  k_100 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(m_40);
  goto n_103;
  m_40 :
  goto l_40;
  n_103 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  l_40 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto m_100;
  m_100 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto n_100;
  n_100 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_100;
  o_100 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(r_40);
  goto o_103;
  r_40 :
  goto q_40;
  o_103 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  q_40 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(s_40);
  p_103 :
  Epushd(2,9);
  MoveTop(2,1);
  goto v_100;
  v_100 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto w_100;
  w_100 :
  TestFunFC(j_3,&&f_41,Egetd(2,2));
  goto x_100;
  x_100 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto y_100;
  y_100 :
  TestFunFC(j_3,&&fail,Egetd(2,6));
  goto z_100;
  z_100 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(v_40);
  goto q_103;
  f_41 :
  TestFunFC(k_3,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto a_101;
  a_101 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto b_101;
  b_101 :
  TestFunFC(k_3,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto c_101;
  c_101 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(v_40);
  goto r_103;
  v_40 :
  goto u_40;
  r_103 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(h_41);
  goto p_103;
  h_41 :
  OneNextSon();
  Ccall(_stratego_h_64);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto s_100;
  s_100 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto t_100;
  t_100 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto u_100;
  u_100 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(j_41);
  goto s_103;
  j_41 :
  goto g_41;
  s_103 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  g_41 :
  Epopd(3,5);
  Return();
  u_40 :
  goto t_40;
  q_103 :
  Tset(App0("Nil"));
  Return();
  t_40 :
  Epopd(2,9);
  Return();
  s_40 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto f_101;
  f_101 :
  TestFunFC(a_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto g_101;
  g_101 :
  TestFunFC(a_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto h_101;
  h_101 :
  TestFunFC(d_0,&&fail,Egetd(1,9));
  Rpush(t_41);
  goto u_103;
  t_41 :
  goto s_41;
  u_103 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(v_41);
  v_103 :
  Cpush(d_42);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_42);
  goto v_103;
  e_42 :
  AllBuild();
  goto x_41;
  d_42 :
  Ccall(_stratego_y_64);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto i_42;
  x_41 :
  Cpop();
  i_42 :
  Return();
  v_41 :
  Return();
  s_41 :
  Epopd(1,9);
  Return();
  j_40 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_y_65)
  Epushd(0,5);
  MoveTop(0,1);
  goto d_104;
  d_104 :
  TestFunFC(h_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto e_104;
  e_104 :
  TestFunFC(h_10,&&v_42,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto f_104;
  f_104 :
  TestFunFC(j_3,&&b_43,Egetd(0,2));
  Cpush(d_43);
  Rpush(e_43);
  goto z_104;
  e_43 :
  goto c_43;
  d_43 :
  Rpush(g_43);
  goto a_105;
  g_43 :
  goto f_43;
  c_43 :
  Cpop();
  f_43 :
  goto u_42;
  b_43 :
  Rpush(u_42);
  goto a_105;
  v_42 :
  goto g_104;
  g_104 :
  TestFunFC(j_3,&&fail,Egetd(0,2));
  Rpush(u_42);
  goto z_104;
  u_42 :
  goto p_42;
  a_105 :
  Epushd(1,5);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  MoveTop(1,1);
  goto a_104;
  a_104 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_104;
  b_104 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto c_104;
  c_104 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(i_43);
  goto b_105;
  i_43 :
  goto h_43;
  b_105 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(j_43);
  c_105 :
  Cpush(m_43);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_43);
  goto c_105;
  n_43 :
  AllBuild();
  goto l_43;
  m_43 :
  Ccall(_stratego_y_64);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto o_43;
  l_43 :
  Cpop();
  o_43 :
  Return();
  j_43 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(2,1),Egetd(0,5)));
  Epopd(2,1);
  Return();
  h_43 :
  Epopd(1,5);
  Return();
  p_42 :
  goto j_42;
  z_104 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  j_42 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_z_65)
  Rpush(r_43);
  p_109 :
  Cpush(t_43);
  Epushd(0,2);
  MoveTop(0,1);
  goto f_105;
  f_105 :
  TestFunFC(r_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(b_44);
  goto q_109;
  b_44 :
  goto y_43;
  q_109 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  y_43 :
  Epopd(0,2);
  goto s_43;
  t_43 :
  Ccontinue(c_44);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_a_66);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(h_10);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(d_44);
  goto p_109;
  d_44 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_w_65);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto m_105;
  m_105 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto n_105;
  n_105 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto o_105;
  o_105 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(h_44);
  goto w_109;
  h_44 :
  goto g_44;
  w_109 :
  Move(0,3,1,4);
  Return();
  g_44 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(i_44);
  x_109 :
  Cpush(q_44);
  Ccall(_stratego_y_64);
  Tset(App0("Nil"));
  goto p_44;
  q_44 :
  Epushd(1,3);
  MoveTop(1,1);
  goto a_106;
  a_106 :
  TestFunFC(k_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(v_44);
  goto y_109;
  v_44 :
  goto u_44;
  y_109 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(w_44);
  goto x_109;
  w_44 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto x_105;
  x_105 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto y_105;
  y_105 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto z_105;
  z_105 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(y_44);
  goto b_110;
  y_44 :
  goto x_44;
  b_110 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(z_44);
  c_110 :
  Cpush(h_45);
  Ccall(_stratego_y_64);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto a_45;
  h_45 :
  Ccontinue(i_45);
  Epushd(3,3);
  MoveTop(3,1);
  goto w_105;
  w_105 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(m_45);
  goto d_110;
  m_45 :
  goto j_45;
  d_110 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(n_45);
  e_110 :
  Cpush(v_45);
  Epushd(4,3);
  MoveTop(4,1);
  goto v_105;
  v_105 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(x_45);
  goto f_110;
  x_45 :
  goto w_45;
  f_110 :
  Move(3,2,4,2);
  Return();
  w_45 :
  Epopd(4,3);
  goto o_45;
  v_45 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_46);
  goto e_110;
  b_46 :
  AllBuild();
  goto a_46;
  o_45 :
  Cpop();
  a_46 :
  Return();
  n_45 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(c_46);
  goto c_110;
  c_46 :
  Return();
  j_45 :
  Epopd(3,3);
  goto a_45;
  i_45 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_46);
  goto c_110;
  g_46 :
  AllBuild();
  goto f_46;
  a_45 :
  Cpop();
  f_46 :
  Return();
  z_44 :
  Return();
  x_44 :
  Epopd(2,6);
  Return();
  u_44 :
  Epopd(1,3);
  goto r_44;
  p_44 :
  Cpop();
  r_44 :
  Return();
  i_44 :
  Epopd(0,3);
  goto s_43;
  c_44 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto d_106;
  d_106 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto e_106;
  e_106 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto f_106;
  f_106 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(j_46);
  goto h_110;
  j_46 :
  goto i_46;
  h_110 :
  Move(0,2,1,4);
  Return();
  i_46 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(k_46);
  i_110 :
  Cpush(m_46);
  Ccall(_stratego_y_64);
  Tset(App0("Nil"));
  goto l_46;
  m_46 :
  Epushd(1,3);
  MoveTop(1,1);
  goto r_106;
  r_106 :
  TestFunFC(k_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(p_46);
  goto j_110;
  p_46 :
  goto o_46;
  j_110 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(q_46);
  goto p_109;
  q_46 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(r_46);
  goto i_110;
  r_46 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto o_106;
  o_106 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_106;
  p_106 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto q_106;
  q_106 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(t_46);
  goto m_110;
  t_46 :
  goto s_46;
  m_110 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(w_46);
  n_110 :
  Cpush(y_46);
  Ccall(_stratego_y_64);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto x_46;
  y_46 :
  Ccontinue(z_46);
  Epushd(3,3);
  MoveTop(3,1);
  goto n_106;
  n_106 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(b_47);
  goto o_110;
  b_47 :
  goto a_47;
  o_110 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(c_47);
  p_110 :
  Cpush(e_47);
  Epushd(4,3);
  MoveTop(4,1);
  goto m_106;
  m_106 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(g_47);
  goto q_110;
  g_47 :
  goto f_47;
  q_110 :
  Move(3,2,4,2);
  Return();
  f_47 :
  Epopd(4,3);
  goto d_47;
  e_47 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_47);
  goto p_110;
  i_47 :
  AllBuild();
  goto h_47;
  d_47 :
  Cpop();
  h_47 :
  Return();
  c_47 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(l_47);
  goto n_110;
  l_47 :
  Return();
  a_47 :
  Epopd(3,3);
  goto x_46;
  z_46 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_47);
  goto n_110;
  n_47 :
  AllBuild();
  goto m_47;
  x_46 :
  Cpop();
  m_47 :
  Return();
  w_46 :
  Return();
  s_46 :
  Epopd(2,7);
  Return();
  o_46 :
  Epopd(1,3);
  goto n_46;
  l_46 :
  Cpop();
  n_46 :
  Return();
  k_46 :
  Epopd(0,2);
  goto h_46;
  s_43 :
  Cpop();
  h_46 :
  Return();
  r_43 :
ENDPROC

PROC(_stratego_a_66)
  Epushd(0,6);
  MoveTop(0,2);
  goto t_110;
  t_110 :
  TestFunFC(h_10,&&u_47,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(s_47);
  goto g_111;
  u_47 :
  TestFunFC(y_47,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto u_110;
  u_110 :
  TestFunFC(z_47,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(s_47);
  goto h_111;
  s_47 :
  goto r_47;
  h_111 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_z_65);
  Return();
  r_47 :
  goto q_47;
  g_111 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  q_47 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_b_66)
  Ccall(_stratego_q_64);
  Ccall(_stratego_c_66);
  Ccall(_stratego_u_66);
ENDPROC

PROC(_stratego_c_66)
  Ccall(_stratego_d_66);
  Rpush(a_48);
  t_113 :
  Cpush(c_48);
  b_48 :
  Cpush(e_48);
  Ccall(_stratego_f_66);
  goto d_48;
  e_48 :
  Ccontinue(i_49);
  Epushd(0,3);
  MoveTop(0,1);
  goto d_112;
  d_112 :
  TestFunFC(e_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(k_49);
  goto v_113;
  k_49 :
  goto j_49;
  v_113 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(m_49);
  w_113 :
  Epushd(3,3);
  MoveTop(3,1);
  goto y_111;
  y_111 :
  TestFunFC(j_3,&&t_49,Egetd(3,1));
  Rpush(s_49);
  goto x_113;
  t_49 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_49);
  goto y_113;
  s_49 :
  goto o_49;
  y_113 :
  Epushd(4,13);
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(3,3),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto n_111;
  n_111 :
  TestFunFC(f_10,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(x_49);
  goto z_113;
  x_49 :
  goto w_49;
  z_113 :
  Epushd(6,1);
  Tdupl();
  Epushd(7,1);
  Ccall(_stratego_q_66);
  MoveTop(7,1);
  Move(6,1,7,1);
  Epopd(7,1);
  Tpop();
  NotNULLd(5,3);
  NotNULLd(5,2);
  NotNULLd(6,1);
  Tset(App2("TCons",App3("SDef",Egetd(6,1),App0("Nil"),Egetd(5,3)),App2("TCons",App3("Row",App0("Nil"),Egetd(5,2),App2("Call",App1("SVar",Egetd(6,1)),App0("Nil"))),App0("TNil"))));
  Epopd(6,1);
  Return();
  w_49 :
  Epopd(5,3);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(y_49);
  goto w_113;
  y_49 :
  OneNextSon();
  Ccall(_stratego_h_64);
  AllBuild();
  AllBuild();
  MoveTop(4,1);
  goto p_111;
  p_111 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,7,4,1,1);
  goto q_111;
  q_111 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto r_111;
  r_111 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto s_111;
  s_111 :
  TestFunFC(d_0,&&fail,Egetd(4,6));
  goto t_111;
  t_111 :
  TestFunFC(a_0,&&fail,Egetd(4,7));
  MoveArg(4,8,4,7,0);
  MoveArg(4,13,4,7,1);
  goto u_111;
  u_111 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto v_111;
  v_111 :
  TestFunFC(a_0,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,12,4,10,1);
  goto w_111;
  w_111 :
  TestFunFC(d_0,&&fail,Egetd(4,12));
  goto x_111;
  x_111 :
  TestFunFC(d_0,&&fail,Egetd(4,13));
  Rpush(z_49);
  goto b_114;
  z_49 :
  goto v_49;
  b_114 :
  NotNULLd(4,3);
  NotNULLd(4,9);
  NotNULLd(4,5);
  NotNULLd(4,11);
  Tset(App2("TCons",App2("Cons",Egetd(4,3),Egetd(4,9)),App2("TCons",App2("Cons",Egetd(4,5),Egetd(4,11)),App0("TNil"))));
  Return();
  v_49 :
  Epopd(4,13);
  Return();
  o_49 :
  goto n_49;
  x_113 :
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  n_49 :
  Epopd(3,3);
  Return();
  m_49 :
  MoveTop(2,1);
  goto a_112;
  a_112 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto b_112;
  b_112 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto c_112;
  c_112 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(a_50);
  goto c_114;
  a_50 :
  goto l_49;
  c_114 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  l_49 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Scope",Egetd(0,2),App2("Lets",Egetd(1,1),App2("Seq",App1("Assign",App1("Var",App2("Cons",MakeInt(0),App0("Nil")))),App1("Matrix",Egetd(1,2))))));
  Epopd(1,2);
  Return();
  j_49 :
  Epopd(0,3);
  goto d_48;
  i_49 :
  Ccall(_stratego_h_65);
  goto b_50;
  d_48 :
  Cpop();
  b_50 :
  Tduplinv();
  goto b_48;
  c_48 :
  AllInit();
  c_50 :
  AllNextSon(&&d_50);
  Rpush(e_50);
  goto t_113;
  e_50 :
  goto c_50;
  d_50 :
  AllBuild();
  Return();
  a_48 :
  Ccall(_stratego_s_66);
ENDPROC

PROC(_stratego_d_66)
  Tdupl();
  Tset(ATmakeString("matrix"));
  Ccall(_stratego_e_66);
  Tpop();
ENDPROC

PROC(_stratego_e_66)
  _ST_create_table();
ENDPROC

PROC(_stratego_f_66)
  Epushd(0,2);
  MoveTop(0,1);
  goto l_115;
  l_115 :
  TestFunFC(l_50,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Cpush(n_50);
  Rpush(s_50);
  goto a_118;
  s_50 :
  goto m_50;
  n_50 :
  Ccontinue(t_50);
  Rpush(u_50);
  goto d_118;
  u_50 :
  goto m_50;
  t_50 :
  Ccontinue(v_50);
  Rpush(x_50);
  goto h_118;
  x_50 :
  goto m_50;
  v_50 :
  Ccontinue(y_50);
  Rpush(z_50);
  goto l_118;
  z_50 :
  goto m_50;
  y_50 :
  Rpush(b_51);
  goto q_118;
  b_51 :
  goto a_51;
  m_50 :
  Cpop();
  a_51 :
  goto k_50;
  k_50 :
  goto j_50;
  q_118 :
  Epushd(1,5);
  Tdupl();
  Epushd(2,11);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(2,1);
  goto g_115;
  g_115 :
  TestFunFC(k_3,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,11,2,1,1);
  goto h_115;
  h_115 :
  TestFunFC(e_51,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,9,2,2,1);
  MoveArg(2,10,2,2,2);
  goto i_115;
  i_115 :
  TestFunFC(k_3,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,8,2,3,1);
  goto j_115;
  j_115 :
  TestFunFC(f_2,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,7,2,4,1);
  goto k_115;
  k_115 :
  TestFunFC(g_2,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  Rpush(d_51);
  goto r_118;
  d_51 :
  goto c_51;
  r_118 :
  Epushd(3,9);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Move(1,1,2,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_i_66);
  MoveTop(3,1);
  Move(1,2,3,1);
  NotNULLd(0,2);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,2),App0("TNil"))));
  Ccall(_stratego_n_66);
  MoveTop(3,2);
  Move(1,3,3,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_p_66);
  MoveTop(3,3);
  Move(1,4,3,3);
  Ccall(_stratego_q_66);
  MoveTop(3,4);
  Move(1,5,3,4);
  NotNULLd(0,2);
  NotNULLd(1,5);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,5),App0("TNil"))));
  MoveTop(3,5);
  goto d_115;
  d_115 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto e_115;
  e_115 :
  TestFunFC(a_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto f_115;
  f_115 :
  TestFunFC(d_0,&&fail,Egetd(3,9));
  Rpush(g_51);
  goto x_118;
  g_51 :
  goto f_51;
  x_118 :
  NotNULLd(3,6);
  NotNULLd(3,8);
  Tset(App2("TCons",ATmakeString("matrix"),App2("TCons",Egetd(3,6),App2("TCons",Egetd(3,8),App0("TNil")))));
  Ccall(_stratego_r_66);
  Return();
  f_51 :
  Epopd(3,9);
  Return();
  c_51 :
  Epopd(2,11);
  Tpop();
  NotNULLd(1,5);
  NotNULLd(1,1);
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset(App4("Case",Egetd(1,5),App1("Var",Egetd(1,1)),Egetd(1,3),Egetd(1,4)));
  Epopd(1,5);
  Return();
  j_50 :
  goto i_50;
  l_118 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Cpush(h_51);
  Tdupl();
  Rpush(l_51);
  m_118 :
  Cpush(n_51);
  Ccall(_stratego_y_64);
  goto m_51;
  n_51 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  TestFunTop(e_51);
  TravInit();
  OneNextSon();
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  TestFunTop(f_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Cpush(p_51);
  Tdupl();
  Ccall(_stratego_h_66);
  Cpop();
  Crestore();
  Cjump();
  p_51 :
  AllBuild();
  OneNextSon();
  AllBuild();
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(q_51);
  goto m_118;
  q_51 :
  AllBuild();
  goto o_51;
  m_51 :
  Cpop();
  o_51 :
  Return();
  l_51 :
  Cpop();
  Crestore();
  Cjump();
  h_51 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(v_51);
  n_118 :
  Cpush(b_52);
  Ccall(_stratego_y_64);
  goto a_52;
  b_52 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(3,6);
  MoveTop(3,1);
  goto t_114;
  t_114 :
  TestFunFC(e_51,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,6,3,1,2);
  goto u_114;
  u_114 :
  TestFunFC(k_3,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(g_52);
  goto o_118;
  g_52 :
  goto e_52;
  o_118 :
  NotNULLd(3,4);
  NotNULLd(3,2);
  NotNULLd(3,5);
  NotNULLd(3,6);
  Tset(App3("Row",App2("Cons",Egetd(3,4),Egetd(3,2)),Egetd(3,5),Egetd(3,6)));
  Return();
  e_52 :
  Epopd(3,6);
  OneNextSon();
  Rpush(h_52);
  goto n_118;
  h_52 :
  AllBuild();
  goto d_52;
  a_52 :
  Cpop();
  d_52 :
  Return();
  v_51 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(App1("Matrix",Egetd(1,1)));
  Epopd(1,1);
  Return();
  i_50 :
  goto h_50;
  h_118 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(i_52);
  i_118 :
  Cpush(k_52);
  Ccall(_stratego_y_64);
  goto j_52;
  k_52 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  TestFunTop(e_51);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,3);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  TestFunTop(f_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_h_66);
  AllBuild();
  OneNextSon();
  AllBuild();
  MoveTop(3,1);
  goto q_114;
  q_114 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_52);
  goto j_118;
  s_52 :
  goto r_52;
  j_118 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Return();
  r_52 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(w_52);
  goto i_118;
  w_52 :
  AllBuild();
  goto l_52;
  j_52 :
  Cpop();
  l_52 :
  Return();
  i_52 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(App1("Matrix",Egetd(1,1)));
  Epopd(1,1);
  Return();
  h_50 :
  goto g_50;
  d_118 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(x_52);
  e_118 :
  Cpush(e_53);
  Ccall(_stratego_y_64);
  goto c_53;
  e_53 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto l_114;
  l_114 :
  TestFunFC(e_51,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  goto m_114;
  m_114 :
  TestFunFC(j_3,&&fail,Egetd(3,2));
  goto n_114;
  n_114 :
  TestFunFC(j_3,&&fail,Egetd(3,3));
  Rpush(m_53);
  goto f_118;
  m_53 :
  goto k_53;
  f_118 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Return();
  k_53 :
  Epopd(3,4);
  OneNextSon();
  Rpush(n_53);
  goto e_118;
  n_53 :
  AllBuild();
  goto j_53;
  c_53 :
  Cpop();
  j_53 :
  Return();
  x_52 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(App1("LChoices",Egetd(1,1)));
  Epopd(1,1);
  Return();
  g_50 :
  goto f_50;
  a_118 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(App2("TCons",ATmakeString("matrix"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Ccall(_stratego_g_66);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(App1("Continue",Egetd(1,1)));
  Epopd(1,1);
  Return();
  f_50 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_g_66)
  _ST_table_get();
ENDPROC

PROC(_stratego_h_66)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_118;
  z_118 :
  TestFunFC(x_19,&&fail,Egetd(0,1));
  Rpush(p_53);
  goto b_119;
  p_53 :
  goto o_53;
  b_119 :
  Return();
  o_53 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_66)
  Rpush(q_53);
  j_119 :
  Cpush(x_53);
  Ccall(_stratego_y_64);
  goto r_53;
  x_53 :
  Ccontinue(y_53);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_j_66);
  OneNextSon();
  Rpush(c_54);
  goto j_119;
  c_54 :
  AllBuild();
  goto r_53;
  y_53 :
  Epushd(0,3);
  MoveTop(0,1);
  goto d_119;
  d_119 :
  TestFunFC(k_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(o_54);
  goto k_119;
  o_54 :
  goto i_54;
  k_119 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(p_54);
  goto j_119;
  p_54 :
  Return();
  i_54 :
  Epopd(0,3);
  goto d_54;
  r_53 :
  Cpop();
  d_54 :
  Return();
  q_53 :
  Ccall(_stratego_m_66);
ENDPROC

PROC(_stratego_j_66)
  Epushd(0,10);
  MoveTop(0,2);
  goto q_119;
  q_119 :
  TestFunFC(e_51,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,9,0,2,1);
  MoveArg(0,10,0,2,2);
  goto r_119;
  r_119 :
  TestFunFC(k_3,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,8,0,3,1);
  goto s_119;
  s_119 :
  TestFunFC(f_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto t_119;
  t_119 :
  TestFunFC(j_2,&&v_54,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,1,0,6,1);
  Rpush(u_54);
  goto m_120;
  v_54 :
  TestFunFC(c_55,&&b_55,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  Rpush(u_54);
  goto p_120;
  b_55 :
  TestFunFC(g_55,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  Rpush(u_54);
  goto q_120;
  u_54 :
  goto t_54;
  q_120 :
  NotNULLd(0,7);
  Tset(App2("TCons",App1("Str",Egetd(0,7)),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  t_54 :
  goto s_54;
  p_120 :
  NotNULLd(0,7);
  Tset(App2("TCons",App1("Int",Egetd(0,7)),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  s_54 :
  goto r_54;
  m_120 :
  Epushd(1,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_k_66);
  MoveTop(1,1);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_l_66);
  MoveTop(1,2);
  NotNULLd(0,7);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",App2("Fun",Egetd(0,7),Egetd(1,1)),App2("TCons",Egetd(1,2),App0("TNil"))));
  Epopd(1,2);
  Return();
  r_54 :
  Epopd(0,10);
ENDPROC

PROC(_stratego_k_66)
  Rpush(h_55);
  b_121 :
  Cpush(s_55);
  Ccall(_stratego_y_64);
  Tset(MakeInt(0));
  goto m_55;
  s_55 :
  Epushd(0,3);
  MoveTop(0,1);
  goto t_120;
  t_120 :
  TestFunFC(k_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(w_55);
  goto c_121;
  w_55 :
  goto v_55;
  c_121 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(x_55);
  goto b_121;
  x_55 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_m_64);
  Epopd(1,1);
  Return();
  v_55 :
  Epopd(0,3);
  goto t_55;
  m_55 :
  Cpop();
  t_55 :
  Return();
  h_55 :
ENDPROC

PROC(_stratego_l_66)
  Rpush(y_55);
  n_121 :
  Cpush(a_56);
  Ccall(_stratego_y_64);
  goto z_55;
  a_56 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(0,4);
  MoveTop(0,1);
  goto f_121;
  f_121 :
  TestFunFC(f_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto g_121;
  g_121 :
  TestFunFC(g_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(d_56);
  goto o_121;
  d_56 :
  goto c_56;
  o_121 :
  NotNULLd(0,3);
  Tset(App1("Var",Egetd(0,3)));
  Return();
  c_56 :
  Epopd(0,4);
  OneNextSon();
  Rpush(e_56);
  goto n_121;
  e_56 :
  AllBuild();
  goto b_56;
  z_55 :
  Cpop();
  b_56 :
  Return();
  y_55 :
ENDPROC

PROC(_stratego_m_66)
  Rpush(f_56);
  b_122 :
  Cpush(j_56);
  Ccall(_stratego_y_64);
  goto g_56;
  j_56 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_56);
  goto b_122;
  l_56 :
  AllBuild();
  goto k_56;
  g_56 :
  Cpop();
  k_56 :
  Rpush(m_56);
  c_122 :
  Cpush(o_56);
  Epushd(0,3);
  MoveTop(0,1);
  goto s_121;
  s_121 :
  TestFunFC(k_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(q_56);
  goto d_122;
  q_56 :
  goto p_56;
  d_122 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(r_56);
  e_122 :
  Cpush(v_56);
  Epushd(1,3);
  MoveTop(1,1);
  goto r_121;
  r_121 :
  TestFunFC(k_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(x_56);
  goto f_122;
  x_56 :
  goto w_56;
  f_122 :
  Move(0,2,1,2);
  Return();
  w_56 :
  Epopd(1,3);
  goto s_56;
  v_56 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_56);
  goto e_122;
  z_56 :
  AllBuild();
  goto y_56;
  s_56 :
  Cpop();
  y_56 :
  Return();
  r_56 :
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(a_57);
  goto c_122;
  a_57 :
  Return();
  p_56 :
  Epopd(0,3);
  goto n_56;
  o_56 :
  goto b_57;
  n_56 :
  Cpop();
  b_57 :
  Return();
  m_56 :
  Return();
  f_56 :
ENDPROC

PROC(_stratego_n_66)
  Rpush(c_57);
  s_127 :
  Epushd(0,7);
  MoveTop(0,1);
  goto e_124;
  e_124 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto f_124;
  f_124 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto g_124;
  g_124 :
  TestFunFC(j_3,&&h_57,Egetd(0,4));
  goto h_124;
  h_124 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  Rpush(f_57);
  goto t_127;
  h_57 :
  TestFunFC(k_3,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto i_124;
  i_124 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  Rpush(f_57);
  goto u_127;
  f_57 :
  goto e_57;
  u_127 :
  Epushd(1,5);
  NotNULLd(0,5);
  NotNULLd(0,2);
  NotNULLd(0,6);
  Tset(App2("TCons",App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,5),App0("TNil"))),App2("TCons",App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,6),App0("TNil"))),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(2,9);
  MoveTop(2,1);
  goto u_123;
  u_123 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_123;
  v_123 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,9,2,3,1);
  goto w_123;
  w_123 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto x_123;
  x_123 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto y_123;
  y_123 :
  TestFunFC(d_0,&&fail,Egetd(2,8));
  goto z_123;
  z_123 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(k_57);
  goto v_127;
  k_57 :
  goto j_57;
  v_127 :
  Epushd(3,1);
  Tdupl();
  Epushd(4,1);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(l_57);
  w_127 :
  Cpush(n_57);
  Ccall(_stratego_y_64);
  goto m_57;
  n_57 :
  Ccontinue(o_57);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(5,8);
  MoveTop(5,1);
  goto o_123;
  o_123 :
  TestFunFC(e_51,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,7,5,1,1);
  MoveArg(5,8,5,1,2);
  goto p_123;
  p_123 :
  TestFunFC(k_3,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,6,5,2,1);
  goto q_123;
  q_123 :
  TestFunFC(f_2,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  Rpush(q_57);
  goto x_127;
  q_57 :
  goto p_57;
  x_127 :
  Epushd(6,6);
  Tdupl();
  Epushd(7,4);
  NotNULLd(5,5);
  Tset(Egetd(5,5));
  MoveTop(7,3);
  goto h_123;
  h_123 :
  TestFunFC(j_2,&&z_57,Egetd(7,3));
  MoveArg(7,2,7,3,0);
  MoveArg(7,1,7,3,1);
  Rpush(y_57);
  goto y_127;
  z_57 :
  TestFunFC(g_55,&&a_58,Egetd(7,3));
  MoveArg(7,2,7,3,0);
  Rpush(y_57);
  goto b_128;
  a_58 :
  TestFunFC(c_58,&&b_58,Egetd(7,3));
  MoveArg(7,2,7,3,0);
  Rpush(y_57);
  goto e_128;
  b_58 :
  TestFunFC(c_55,&&d_58,Egetd(7,3));
  MoveArg(7,2,7,3,0);
  Rpush(y_57);
  goto h_128;
  d_58 :
  TestFunFC(x_19,&&fail,Egetd(7,3));
  Rpush(y_57);
  goto k_128;
  y_57 :
  goto x_57;
  k_128 :
  Epushd(8,1);
  Tdupl();
  Epushd(9,1);
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Rpush(e_58);
  l_128 :
  Cpush(h_58);
  Ccall(_stratego_y_64);
  goto f_58;
  h_58 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(10,2);
  MoveTop(10,1);
  goto f_123;
  f_123 :
  TestFunFC(r_2,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  Rpush(k_58);
  goto m_128;
  k_58 :
  goto j_58;
  m_128 :
  NotNULLd(10,2);
  Tset(App2("As",App1("Off",Egetd(10,2)),App0("Wld")));
  Return();
  j_58 :
  Epopd(10,2);
  OneNextSon();
  Rpush(l_58);
  goto l_128;
  l_58 :
  AllBuild();
  goto i_58;
  f_58 :
  Cpop();
  i_58 :
  Return();
  e_58 :
  MoveTop(9,1);
  Move(8,1,9,1);
  Epopd(9,1);
  Tpop();
  NotNULLd(8,1);
  Tset(Egetd(8,1));
  Epopd(8,1);
  Return();
  x_57 :
  goto w_57;
  h_128 :
  Tdupl();
  Epushd(8,2);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  MoveTop(8,1);
  goto d_123;
  d_123 :
  TestFunFC(c_55,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  Rpush(n_58);
  goto i_128;
  n_58 :
  goto m_58;
  i_128 :
  Epushd(9,1);
  Move(7,2,8,2);
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  MoveTop(9,1);
  goto c_123;
  c_123 :
  TestFunFC(j_3,&&fail,Egetd(9,1));
  Rpush(t_58);
  goto j_128;
  t_58 :
  goto o_58;
  j_128 :
  Return();
  o_58 :
  Epopd(9,1);
  Return();
  m_58 :
  Epopd(8,2);
  Tpop();
  Tset(App0("Nil"));
  Return();
  w_57 :
  goto v_57;
  e_128 :
  Tdupl();
  Epushd(8,2);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  MoveTop(8,1);
  goto z_122;
  z_122 :
  TestFunFC(c_58,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  Rpush(a_59);
  goto f_128;
  a_59 :
  goto z_58;
  f_128 :
  Epushd(9,1);
  Move(7,2,8,2);
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  MoveTop(9,1);
  goto y_122;
  y_122 :
  TestFunFC(j_3,&&fail,Egetd(9,1));
  Rpush(d_59);
  goto g_128;
  d_59 :
  goto c_59;
  g_128 :
  Return();
  c_59 :
  Epopd(9,1);
  Return();
  z_58 :
  Epopd(8,2);
  Tpop();
  Tset(App0("Nil"));
  Return();
  v_57 :
  goto u_57;
  b_128 :
  Tdupl();
  Epushd(8,2);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  MoveTop(8,1);
  goto v_122;
  v_122 :
  TestFunFC(g_55,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  Rpush(f_59);
  goto c_128;
  f_59 :
  goto e_59;
  c_128 :
  Epushd(9,1);
  Move(7,2,8,2);
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  MoveTop(9,1);
  goto u_122;
  u_122 :
  TestFunFC(j_3,&&fail,Egetd(9,1));
  Rpush(h_59);
  goto d_128;
  h_59 :
  goto g_59;
  d_128 :
  Return();
  g_59 :
  Epopd(9,1);
  Return();
  e_59 :
  Epopd(8,2);
  Tpop();
  Tset(App0("Nil"));
  Return();
  u_57 :
  goto r_57;
  y_127 :
  Epushd(8,1);
  Tdupl();
  Epushd(9,3);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  MoveTop(9,1);
  goto r_122;
  r_122 :
  TestFunFC(k_59,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(j_59);
  goto z_127;
  j_59 :
  goto i_59;
  z_127 :
  Epushd(10,1);
  Move(7,2,9,2);
  Move(8,1,9,3);
  NotNULLd(7,1);
  Tset(Egetd(7,1));
  Ccall(_stratego_k_66);
  MoveTop(10,1);
  NotNULLd(10,1);
  NotNULLd(8,1);
  Tset(App2("TCons",Egetd(10,1),App2("TCons",Egetd(8,1),App0("TNil"))));
  Ccall(_stratego_o_66);
  Epopd(10,1);
  Return();
  i_59 :
  Epopd(9,3);
  Tpop();
  NotNULLd(7,1);
  Tset(Egetd(7,1));
  Epopd(8,1);
  Return();
  r_57 :
  MoveTop(7,4);
  Move(6,1,7,4);
  Epopd(7,4);
  Tpop();
  NotNULLd(6,1);
  NotNULLd(5,7);
  Tset(App2("TCons",Egetd(6,1),App2("TCons",Egetd(5,7),App0("TNil"))));
  MoveTop(6,2);
  goto l_123;
  l_123 :
  TestFunFC(a_0,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto m_123;
  m_123 :
  TestFunFC(a_0,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto n_123;
  n_123 :
  TestFunFC(d_0,&&fail,Egetd(6,6));
  Rpush(m_59);
  goto p_128;
  m_59 :
  goto l_59;
  p_128 :
  Epushd(7,1);
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Rpush(n_59);
  q_128 :
  Cpush(p_59);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_59);
  goto q_128;
  r_59 :
  AllBuild();
  goto o_59;
  p_59 :
  Ccall(_stratego_y_64);
  NotNULLd(6,5);
  Tset(Egetd(6,5));
  goto s_59;
  o_59 :
  Cpop();
  s_59 :
  Return();
  n_59 :
  MoveTop(7,1);
  NotNULLd(5,6);
  NotNULLd(7,1);
  NotNULLd(5,8);
  Tset(App3("Row",Egetd(5,6),Egetd(7,1),Egetd(5,8)));
  Epopd(7,1);
  Return();
  l_59 :
  Epopd(6,6);
  Return();
  p_57 :
  Epopd(5,8);
  OneNextSon();
  Rpush(x_59);
  goto w_127;
  x_59 :
  AllBuild();
  goto m_57;
  o_57 :
  Epushd(5,3);
  MoveTop(5,1);
  goto s_123;
  s_123 :
  TestFunFC(k_3,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(d_60);
  goto s_128;
  d_60 :
  goto c_60;
  s_128 :
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Rpush(h_60);
  goto w_127;
  h_60 :
  Return();
  c_60 :
  Epopd(5,3);
  goto y_59;
  m_57 :
  Cpop();
  y_59 :
  Return();
  l_57 :
  MoveTop(4,1);
  Move(3,1,4,1);
  Epopd(4,1);
  Tpop();
  NotNULLd(2,5);
  NotNULLd(2,7);
  NotNULLd(3,1);
  Tset(App3("Alt",Egetd(2,5),Egetd(2,7),App1("Matrix",Egetd(3,1))));
  Epopd(3,1);
  Return();
  j_57 :
  Epopd(2,9);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(i_60);
  goto s_127;
  i_60 :
  OneNextSon();
  Ccall(_stratego_h_64);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto b_124;
  b_124 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_124;
  c_124 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto d_124;
  d_124 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(j_60);
  goto u_128;
  j_60 :
  goto i_57;
  u_128 :
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("Cons",Egetd(1,2),Egetd(1,4)));
  Return();
  i_57 :
  Epopd(1,5);
  Return();
  e_57 :
  goto d_57;
  t_127 :
  Tset(App0("Nil"));
  Return();
  d_57 :
  Epopd(0,7);
  Return();
  c_57 :
ENDPROC

PROC(_stratego_o_66)
  Epushd(0,5);
  MoveTop(0,1);
  goto w_128;
  w_128 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto x_128;
  x_128 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto y_128;
  y_128 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  Rpush(l_60);
  goto f_129;
  l_60 :
  goto k_60;
  f_129 :
  Move(0,2,0,4);
  Return();
  k_60 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_66)
  Epushd(0,1);
  Rpush(n_60);
  g_130 :
  Cpush(p_60);
  Ccall(_stratego_y_64);
  goto o_60;
  p_60 :
  Ccontinue(q_60);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(1,8);
  MoveTop(1,1);
  goto h_129;
  h_129 :
  TestFunFC(e_51,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  MoveArg(1,8,1,1,2);
  goto i_129;
  i_129 :
  TestFunFC(k_3,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,6,1,2,1);
  goto j_129;
  j_129 :
  TestFunFC(f_2,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto k_129;
  k_129 :
  TestFunFC(x_19,&&fail,Egetd(1,5));
  Rpush(s_60);
  goto h_130;
  s_60 :
  goto r_60;
  h_130 :
  NotNULLd(1,6);
  NotNULLd(1,7);
  NotNULLd(1,8);
  Tset(App3("Row",Egetd(1,6),Egetd(1,7),Egetd(1,8)));
  Return();
  r_60 :
  Epopd(1,8);
  OneNextSon();
  Rpush(t_60);
  goto g_130;
  t_60 :
  AllBuild();
  goto o_60;
  q_60 :
  Epushd(1,3);
  MoveTop(1,1);
  goto m_129;
  m_129 :
  TestFunFC(k_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(b_61);
  goto i_130;
  b_61 :
  goto a_61;
  i_130 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(d_61);
  goto g_130;
  d_61 :
  Return();
  a_61 :
  Epopd(1,3);
  goto u_60;
  o_60 :
  Cpop();
  u_60 :
  Return();
  n_60 :
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Matrix",Egetd(0,1)));
  Epopd(0,1);
ENDPROC

PROC(_stratego_q_66)
  _ST_new();
ENDPROC

PROC(_stratego_r_66)
  _ST_table_put();
ENDPROC

PROC(_stratego_s_66)
  Tdupl();
  Tset(ATmakeString("matrix"));
  Ccall(_stratego_t_66);
  Tpop();
ENDPROC

PROC(_stratego_t_66)
  _ST_destroy_table();
ENDPROC

PROC(_stratego_u_66)
  Ccall(_stratego_v_66);
  Ccall(_stratego_w_66);
ENDPROC

PROC(_stratego_v_66)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(i_61);
  r_134 :
  Rpush(p_61);
  s_134 :
  Epushd(1,5);
  MoveTop(1,1);
  goto v_131;
  v_131 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_131;
  w_131 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto x_131;
  x_131 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Cpush(x_61);
  Rpush(y_61);
  goto t_134;
  y_61 :
  goto w_61;
  x_61 :
  Ccontinue(z_61);
  Rpush(a_62);
  goto x_134;
  a_62 :
  goto w_61;
  z_61 :
  Rpush(c_62);
  goto m_135;
  c_62 :
  goto b_62;
  w_61 :
  Cpop();
  b_62 :
  goto u_61;
  u_61 :
  goto t_61;
  m_135 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  d_62 :
  AllNextSon(&&e_62);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(l_62);
  goto s_134;
  l_62 :
  Epopd(2,1);
  goto d_62;
  e_62 :
  AllBuild();
  Return();
  t_61 :
  goto s_61;
  x_134 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_a_66);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(o_62);
  z_134 :
  Cpush(u_62);
  Ccall(_stratego_y_64);
  goto t_62;
  u_62 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_66);
  OneNextSon();
  Rpush(w_62);
  goto z_134;
  w_62 :
  AllBuild();
  goto v_62;
  t_62 :
  Cpop();
  v_62 :
  Return();
  o_62 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(y_62);
  b_135 :
  Epushd(4,9);
  MoveTop(4,1);
  goto z_130;
  z_130 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto a_131;
  a_131 :
  TestFunFC(j_3,&&c_63,Egetd(4,2));
  goto b_131;
  b_131 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto c_131;
  c_131 :
  TestFunFC(j_3,&&fail,Egetd(4,6));
  goto d_131;
  d_131 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(b_63);
  goto c_135;
  c_63 :
  TestFunFC(k_3,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto e_131;
  e_131 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto f_131;
  f_131 :
  TestFunFC(k_3,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto g_131;
  g_131 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(b_63);
  goto d_135;
  b_63 :
  goto a_63;
  d_135 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(e_63);
  goto b_135;
  e_63 :
  OneNextSon();
  Ccall(_stratego_h_64);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto w_130;
  w_130 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto x_130;
  x_130 :
  TestFunFC(a_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto y_130;
  y_130 :
  TestFunFC(d_0,&&fail,Egetd(5,5));
  Rpush(f_63);
  goto e_135;
  f_63 :
  goto d_63;
  e_135 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  d_63 :
  Epopd(5,5);
  Return();
  a_63 :
  goto z_62;
  c_135 :
  Tset(App0("Nil"));
  Return();
  z_62 :
  Epopd(4,9);
  Return();
  y_62 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto k_131;
  k_131 :
  TestFunFC(a_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto l_131;
  l_131 :
  TestFunFC(a_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto m_131;
  m_131 :
  TestFunFC(d_0,&&fail,Egetd(3,8));
  Rpush(k_63);
  goto g_135;
  k_63 :
  goto h_63;
  g_135 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(r_63);
  h_135 :
  Cpush(v_63);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_63);
  goto h_135;
  w_63 :
  AllBuild();
  goto u_63;
  v_63 :
  Ccall(_stratego_y_64);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto x_63;
  u_63 :
  Cpop();
  x_63 :
  Return();
  r_63 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  h_63 :
  Epopd(3,8);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(h_10);
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
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto q_131;
  q_131 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto r_131;
  r_131 :
  TestFunFC(a_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto s_131;
  s_131 :
  TestFunFC(a_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto t_131;
  t_131 :
  TestFunFC(d_0,&&fail,Egetd(2,11));
  Rpush(z_63);
  goto k_135;
  z_63 :
  goto y_63;
  k_135 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  TestFunTop(h_10);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(a_64);
  goto r_134;
  a_64 :
  Epopd(3,1);
  AllBuild();
  Return();
  y_63 :
  Epopd(2,11);
  Return();
  s_61 :
  goto r_61;
  t_134 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(r_2);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_v_65);
  Epopd(2,1);
  AllBuild();
  Return();
  r_61 :
  Epopd(1,5);
  Return();
  p_61 :
  Return();
  i_61 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_66)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(b_64);
  n_141 :
  Rpush(c_64);
  o_141 :
  Epushd(1,5);
  MoveTop(1,1);
  goto l_137;
  l_137 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_137;
  m_137 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto n_137;
  n_137 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Cpush(w_67);
  Rpush(x_67);
  goto p_141;
  x_67 :
  goto t_67;
  w_67 :
  Ccontinue(y_67);
  Rpush(z_67);
  goto t_141;
  z_67 :
  goto t_67;
  y_67 :
  Rpush(b_68);
  goto q_142;
  b_68 :
  goto a_68;
  t_67 :
  Cpop();
  a_68 :
  goto m_67;
  m_67 :
  goto j_67;
  q_142 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  c_68 :
  AllNextSon(&&d_68);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(e_68);
  goto o_141;
  e_68 :
  Epopd(2,1);
  goto c_68;
  d_68 :
  AllBuild();
  Return();
  j_67 :
  goto x_64;
  t_141 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,15);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,5);
  goto y_135;
  y_135 :
  TestFunFC(y_27,&&y_68,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto z_135;
  z_135 :
  TestFunFC(c_29,&&fail,Egetd(3,6));
  MoveArg(3,1,3,6,0);
  MoveArg(3,2,3,6,1);
  MoveArg(3,3,3,6,2);
  Rpush(x_68);
  goto u_141;
  y_68 :
  TestFunFC(c_29,&&z_68,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  MoveArg(3,4,3,5,2);
  Rpush(x_68);
  goto v_141;
  z_68 :
  TestFunFC(s_19,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(x_68);
  goto w_141;
  x_68 :
  goto w_68;
  w_141 :
  NotNULLd(3,6);
  Tset(App2("Cons",Egetd(3,6),App0("Nil")));
  Return();
  w_68 :
  goto g_68;
  v_141 :
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  Return();
  g_68 :
  goto f_68;
  u_141 :
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Return();
  f_68 :
  MoveTop(3,8);
  Move(2,1,3,8);
  Rpush(a_69);
  y_141 :
  Cpush(m_69);
  Ccall(_stratego_y_64);
  goto l_69;
  m_69 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_66);
  OneNextSon();
  Rpush(o_69);
  goto y_141;
  o_69 :
  AllBuild();
  goto n_69;
  l_69 :
  Cpop();
  n_69 :
  Return();
  a_69 :
  MoveTop(3,9);
  Move(2,2,3,9);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(p_69);
  a_142 :
  Epushd(4,9);
  MoveTop(4,1);
  goto i_136;
  i_136 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto j_136;
  j_136 :
  TestFunFC(j_3,&&t_69,Egetd(4,2));
  goto k_136;
  k_136 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto l_136;
  l_136 :
  TestFunFC(j_3,&&fail,Egetd(4,6));
  goto m_136;
  m_136 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(s_69);
  goto b_142;
  t_69 :
  TestFunFC(k_3,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto n_136;
  n_136 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto o_136;
  o_136 :
  TestFunFC(k_3,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto p_136;
  p_136 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(s_69);
  goto c_142;
  s_69 :
  goto r_69;
  c_142 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(v_69);
  goto a_142;
  v_69 :
  OneNextSon();
  Ccall(_stratego_h_64);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto f_136;
  f_136 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto g_136;
  g_136 :
  TestFunFC(a_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto h_136;
  h_136 :
  TestFunFC(d_0,&&fail,Egetd(5,5));
  Rpush(w_69);
  goto d_142;
  w_69 :
  goto u_69;
  d_142 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  u_69 :
  Epopd(5,5);
  Return();
  r_69 :
  goto q_69;
  b_142 :
  Tset(App0("Nil"));
  Return();
  q_69 :
  Epopd(4,9);
  Return();
  p_69 :
  MoveTop(3,10);
  NotNULLd(3,10);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,10),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,11);
  goto t_136;
  t_136 :
  TestFunFC(a_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto u_136;
  u_136 :
  TestFunFC(a_0,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto v_136;
  v_136 :
  TestFunFC(d_0,&&fail,Egetd(3,15));
  Rpush(y_69);
  goto f_142;
  y_69 :
  goto x_69;
  f_142 :
  Epushd(4,1);
  NotNULLd(3,12);
  Tset(Egetd(3,12));
  Rpush(z_69);
  g_142 :
  Cpush(s_70);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_70);
  goto g_142;
  x_70 :
  AllBuild();
  goto o_70;
  s_70 :
  Ccall(_stratego_y_64);
  NotNULLd(3,14);
  Tset(Egetd(3,14));
  goto y_70;
  o_70 :
  Cpop();
  y_70 :
  Return();
  z_69 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  x_69 :
  Epopd(3,15);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(a_71);
  TestFunTop(y_27);
  TravInit();
  OneNextSon();
  TestFunTop(c_29);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto x_136;
  x_136 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(c_71);
  goto i_142;
  c_71 :
  goto b_71;
  i_142 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  b_71 :
  Epopd(3,3);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  goto z_70;
  a_71 :
  Ccontinue(g_71);
  TestFunTop(c_29);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto z_70;
  g_71 :
  TestFunTop(s_19);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto z_136;
  z_136 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_71);
  goto j_142;
  j_71 :
  goto i_71;
  j_142 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  i_71 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  goto h_71;
  z_70 :
  Cpop();
  h_71 :
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto g_137;
  g_137 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto h_137;
  h_137 :
  TestFunFC(a_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto i_137;
  i_137 :
  TestFunFC(a_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto j_137;
  j_137 :
  TestFunFC(d_0,&&fail,Egetd(2,11));
  Rpush(b_72);
  goto l_142;
  b_72 :
  goto a_72;
  l_142 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Cpush(m_72);
  TestFunTop(y_27);
  TravInit();
  OneNextSon();
  TestFunTop(c_29);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,8),App0("TNil"))));
  Rpush(n_72);
  goto n_141;
  n_72 :
  Epopd(3,1);
  AllBuild();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(o_72);
  goto n_141;
  o_72 :
  Epopd(3,1);
  AllBuild();
  goto c_72;
  m_72 :
  Ccontinue(p_72);
  TestFunTop(c_29);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(q_72);
  goto n_141;
  q_72 :
  Epopd(3,1);
  AllBuild();
  goto c_72;
  p_72 :
  TestFunTop(s_19);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(s_72);
  goto n_141;
  s_72 :
  Epopd(3,1);
  AllBuild();
  goto r_72;
  c_72 :
  Cpop();
  r_72 :
  Return();
  a_72 :
  Epopd(2,11);
  Return();
  x_64 :
  goto d_64;
  p_141 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(o_29);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_v_65);
  Epopd(2,1);
  AllBuild();
  Return();
  d_64 :
  Epopd(1,5);
  Return();
  c_64 :
  Return();
  b_64 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_66)
  Rpush(t_72);
  s_142 :
  Cpush(y_72);
  u_72 :
  Ccall(_stratego_r_65);
  Tduplinv();
  goto u_72;
  y_72 :
  AllInit();
  z_72 :
  AllNextSon(&&a_73);
  Rpush(b_73);
  goto s_142;
  b_73 :
  goto z_72;
  a_73 :
  AllBuild();
  Cpush(d_73);
  c_73 :
  Ccall(_stratego_r_65);
  Tduplinv();
  goto c_73;
  d_73 :
  Return();
  t_72 :
ENDPROC

PROC(_stratego_y_66)
  Rpush(u_73);
  y_143 :
  Cpush(w_73);
  v_73 :
  Cpush(y_73);
  Ccall(_stratego_r_65);
  goto x_73;
  y_73 :
  Ccall(_stratego_z_66);
  goto z_73;
  x_73 :
  Cpop();
  z_73 :
  Tduplinv();
  goto v_73;
  w_73 :
  AllInit();
  a_74 :
  AllNextSon(&&b_74);
  Rpush(i_74);
  goto y_143;
  i_74 :
  goto a_74;
  b_74 :
  AllBuild();
  Cpush(k_74);
  j_74 :
  Cpush(m_74);
  Ccall(_stratego_r_65);
  goto l_74;
  m_74 :
  Ccall(_stratego_z_66);
  goto n_74;
  l_74 :
  Cpop();
  n_74 :
  Tduplinv();
  goto j_74;
  k_74 :
  Return();
  u_73 :
  Rpush(o_74);
  b_144 :
  Cpush(q_74);
  Epushd(0,3);
  MoveTop(0,1);
  goto e_143;
  e_143 :
  TestFunFC(h_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(s_74);
  goto c_144;
  s_74 :
  goto r_74;
  c_144 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_z_65);
  MoveTop(2,1);
  NotNULLd(0,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto b_143;
  b_143 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto c_143;
  c_143 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto d_143;
  d_143 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(f_75);
  goto e_144;
  f_75 :
  goto t_74;
  e_144 :
  Epushd(3,2);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App0("TNil"))));
  Ccall(_stratego_w_65);
  MoveTop(3,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_w_65);
  MoveTop(3,2);
  Move(1,1,3,2);
  Cpush(g_75);
  Tdupl();
  Epushd(4,1);
  MoveTop(4,1);
  Move(0,2,4,1);
  Epopd(4,1);
  Cpop();
  Crestore();
  Cjump();
  g_75 :
  Epopd(3,2);
  Return();
  t_74 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,3);
  Tset(App2("Scope",Egetd(1,1),Egetd(0,3)));
  Cpush(i_75);
  Ccall(_stratego_y_65);
  goto h_75;
  i_75 :
  goto j_75;
  h_75 :
  Cpop();
  j_75 :
  Epopd(1,1);
  Return();
  r_74 :
  Epopd(0,3);
  goto p_74;
  q_74 :
  goto k_75;
  p_74 :
  Cpop();
  k_75 :
  AllInit();
  l_75 :
  AllNextSon(&&m_75);
  Rpush(n_75);
  goto b_144;
  n_75 :
  goto l_75;
  m_75 :
  AllBuild();
  Return();
  o_74 :
ENDPROC

PROC(_stratego_z_66)
  Epushd(0,7);
  MoveTop(0,3);
  goto k_144;
  k_144 :
  TestFunFC(d_10,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto l_144;
  l_144 :
  TestFunFC(h_10,&&r_75,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto m_144;
  m_144 :
  TestFunFC(h_10,&&s_75,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Cpush(u_75);
  Rpush(v_75);
  goto b_145;
  v_75 :
  goto t_75;
  u_75 :
  Rpush(x_75);
  goto c_145;
  x_75 :
  goto w_75;
  t_75 :
  Cpop();
  w_75 :
  goto q_75;
  s_75 :
  Rpush(q_75);
  goto c_145;
  r_75 :
  goto n_144;
  n_144 :
  TestFunFC(h_10,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(q_75);
  goto b_145;
  q_75 :
  goto p_75;
  c_145 :
  NotNULLd(0,6);
  NotNULLd(0,4);
  NotNULLd(0,7);
  Tset(App2("Scope",Egetd(0,6),App2("Seq",Egetd(0,4),Egetd(0,7))));
  Return();
  p_75 :
  goto o_75;
  b_145 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(0,1),App2("Seq",Egetd(0,2),Egetd(0,5))));
  Return();
  o_75 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_a_67)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test4"));
  Ccall(_stratego_o_64);
  Tpop();
  Cpush(l_76);
  Tdupl();
  Epushd(1,1);
  Cpush(n_76);
  Epushd(2,1);
  Tset(ATmakeString("data/choices2.trm"));
  Ccall(_stratego_n_65);
  Ccall(_stratego_p_65);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto m_76;
  n_76 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_o_64);
  Ccall(_stratego_p_64);
  goto o_76;
  m_76 :
  Cpop();
  o_76 :
  Tset(ATmakeString("data/choices2-dfa.trm"));
  Ccall(_stratego_n_65);
  MoveTop(1,1);
  Move(0,2,1,1);
  Cpush(q_76);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto p_76;
  q_76 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_p_64);
  goto r_76;
  p_76 :
  Cpop();
  r_76 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_l_64);
  goto k_76;
  l_76 :
  Ccall(_stratego_n_64);
  goto s_76;
  k_76 :
  Cpop();
  s_76 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_b_67)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test5"));
  Ccall(_stratego_o_64);
  Tpop();
  Cpush(u_76);
  Tdupl();
  Epushd(1,1);
  Cpush(w_76);
  Epushd(2,1);
  Tset(ATmakeString("data/choices3.trm"));
  Ccall(_stratego_n_65);
  Ccall(_stratego_p_65);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto v_76;
  w_76 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_o_64);
  Ccall(_stratego_p_64);
  goto b_77;
  v_76 :
  Cpop();
  b_77 :
  Tset(ATmakeString("data/choices3-dfa.trm"));
  Ccall(_stratego_n_65);
  MoveTop(1,1);
  Move(0,2,1,1);
  Cpush(e_77);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto c_77;
  e_77 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_p_64);
  goto f_77;
  c_77 :
  Cpop();
  f_77 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_l_64);
  goto t_76;
  u_76 :
  Ccall(_stratego_n_64);
  goto g_77;
  t_76 :
  Cpop();
  g_77 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_c_67)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test6"));
  Ccall(_stratego_o_64);
  Tpop();
  Cpush(i_77);
  Tdupl();
  Epushd(1,1);
  Cpush(k_77);
  Epushd(2,1);
  Tset(ATmakeString("data/choices4.trm"));
  Ccall(_stratego_n_65);
  Ccall(_stratego_p_65);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto j_77;
  k_77 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_o_64);
  Ccall(_stratego_p_64);
  goto l_77;
  j_77 :
  Cpop();
  l_77 :
  Tset(ATmakeString("data/choices4-dfa.trm"));
  Ccall(_stratego_n_65);
  MoveTop(1,1);
  Move(0,2,1,1);
  Cpush(n_77);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto m_77;
  n_77 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_p_64);
  goto o_77;
  m_77 :
  Cpop();
  o_77 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_l_64);
  goto h_77;
  i_77 :
  Ccall(_stratego_n_64);
  goto q_77;
  h_77 :
  Cpop();
  q_77 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_d_67)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test7"));
  Ccall(_stratego_o_64);
  Tpop();
  Cpush(s_77);
  Tdupl();
  Epushd(1,1);
  Cpush(u_77);
  Epushd(2,1);
  Tset(ATmakeString("data/choices5.trm"));
  Ccall(_stratego_n_65);
  Ccall(_stratego_p_65);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto t_77;
  u_77 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_o_64);
  Ccall(_stratego_p_64);
  goto v_77;
  t_77 :
  Cpop();
  v_77 :
  Tset(ATmakeString("data/choices5-dfa.trm"));
  Ccall(_stratego_n_65);
  MoveTop(1,1);
  Move(0,2,1,1);
  Cpush(x_77);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto w_77;
  x_77 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_e_64);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_p_64);
  goto y_77;
  w_77 :
  Cpop();
  y_77 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_l_64);
  goto r_77;
  s_77 :
  Ccall(_stratego_n_64);
  goto z_77;
  r_77 :
  Cpop();
  z_77 :
  Epopd(0,2);
ENDPROC

DOIT

