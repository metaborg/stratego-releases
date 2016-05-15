#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,r_59);
VARDECL(AFun,i_58);
VARDECL(AFun,u_55);
VARDECL(AFun,t_55);
VARDECL(AFun,m_51);
VARDECL(AFun,v_50);
VARDECL(AFun,f_48);
VARDECL(AFun,e_48);
VARDECL(AFun,r_31);
VARDECL(AFun,q_31);
VARDECL(AFun,i_30);
VARDECL(AFun,u_29);
VARDECL(AFun,t_29);
VARDECL(AFun,g_28);
VARDECL(AFun,b_25);
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
PROCDECL(_stratego_e_67);
PROCDECL(_stratego_f_67);
PROCDECL(_stratego_g_67);
PROCDECL(_stratego_i_67);
PROCDECL(_stratego_j_67);
PROCDECL(_stratego_k_67);
PROCDECL(_stratego_l_67);
PROCDECL(_stratego_m_67);
PROCDECL(_stratego_n_67);
PROCDECL(_stratego_o_67);
PROCDECL(_stratego_p_67);
PROCDECL(_stratego_q_67);
PROCDECL(_stratego_r_67);
PROCDECL(_stratego_s_67);
PROCDECL(_stratego_t_67);
PROCDECL(_stratego_u_67);
PROCDECL(_stratego_v_67);
PROCDECL(_stratego_w_67);
PROCDECL(_stratego_x_67);
PROCDECL(_stratego_y_67);
PROCDECL(_stratego_z_67);
PROCDECL(_stratego_a_68);
PROCDECL(_stratego_b_68);
PROCDECL(_stratego_c_68);
PROCDECL(_stratego_d_68);
PROCDECL(_stratego_e_68);
PROCDECL(_stratego_f_68);
PROCDECL(_stratego_g_68);
PROCDECL(_stratego_h_68);

PROC(_stratego_init_afuns)
  MOVE(r_59,ATmakeAFun("Fun",2,0));
  MOVE(i_58,ATmakeAFun("Real",1,0));
  MOVE(u_55,ATmakeAFun("Str",1,0));
  MOVE(t_55,ATmakeAFun("Int",1,0));
  MOVE(m_51,ATmakeAFun("Row",3,0));
  MOVE(v_50,ATmakeAFun("Matrix",1,0));
  MOVE(f_48,ATmakeAFun("Rule",3,0));
  MOVE(e_48,ATmakeAFun("LRule",1,0));
  MOVE(r_31,ATmakeAFun("Assign",1,0));
  MOVE(q_31,ATmakeAFun("Assign",2,0));
  MOVE(i_30,ATmakeAFun("Case",4,0));
  MOVE(u_29,ATmakeAFun("SVar",1,0));
  MOVE(t_29,ATmakeAFun("Call",2,0));
  MOVE(g_28,ATmakeAFun("Let",2,0));
  MOVE(b_25,ATmakeAFun("SDef",3,0));
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
  Ccall(_stratego_i_65);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_j_65);
  Ccall(_stratego_o_65);
  Ccall(_stratego_q_66);
  Ccall(_stratego_d_68);
  Ccall(_stratego_e_68);
  Ccall(_stratego_f_68);
  Ccall(_stratego_g_68);
  Ccall(_stratego_h_68);
  Ccall(_stratego_k_65);
  Ccall(_stratego_m_65);
ENDPROC

PROC(_stratego_i_65)
  _ST_printnl();
ENDPROC

PROC(_stratego_j_65)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_k_65)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_65);
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
  Ccall(_stratego_i_65);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_l_65);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_l_65)
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

PROC(_stratego_m_65)
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
  Ccall(_stratego_l_65);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_n_65);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_n_65);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_n_65)
  _ST_exit();
ENDPROC

PROC(_stratego_o_65)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_s_65);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Epushd(1,1);
  Cpush(n_0);
  Epushd(2,1);
  Tset(ATmakeString("data/choices1.trm"));
  Ccall(_stratego_p_66);
  Ccall(_stratego_u_65);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_65);
  Ccall(_stratego_t_65);
  goto o_0;
  m_0 :
  Cpop();
  o_0 :
  Tset(ATmakeString("data/choices1-matrix.trm"));
  Ccall(_stratego_p_66);
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
  Ccall(_stratego_i_65);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_65);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_t_65);
  goto r_0;
  p_0 :
  Cpop();
  r_0 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_p_65);
  goto j_0;
  l_0 :
  Ccall(_stratego_r_65);
  goto s_0;
  j_0 :
  Cpop();
  s_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_p_65)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_q_65);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_l_65);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_q_65)
  _ST_add();
ENDPROC

PROC(_stratego_r_65)
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
  Ccall(_stratego_q_65);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_l_65);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_s_65)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_i_65);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_t_65)
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

PROC(_stratego_u_65)
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
  Ccall(_stratego_v_65);
  Return();
  a_1 :
  Epopd(0,2);
  goto y_0;
  z_0 :
  Ccontinue(d_1);
  Ccall(_stratego_i_66);
  goto y_0;
  d_1 :
  Ccall(_stratego_j_66);
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
  Ccall(_stratego_v_65);
  Return();
  m_1 :
  Epopd(0,2);
  goto k_1;
  l_1 :
  Ccontinue(o_1);
  Ccall(_stratego_i_66);
  goto k_1;
  o_1 :
  Ccall(_stratego_j_66);
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

PROC(_stratego_v_65)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("As",App1("Off",App0("Nil")),App2("Cons",Egetd(0,1),App0("Nil"))));
  Rpush(q_1);
  n_16 :
  Cpush(s_1);
  Ccall(_stratego_w_65);
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
  Ccall(_stratego_y_65);
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
  Ccall(_stratego_h_66);
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

PROC(_stratego_w_65)
  Epushd(0,7);
  MoveTop(0,4);
  goto y_17;
  y_17 :
  TestFunFC(f_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,7,0,4,1);
  goto e_18;
  e_18 :
  TestFunFC(g_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto f_18;
  f_18 :
  TestFunFC(j_2,&&i_2,Egetd(0,7));
  MoveArg(0,3,0,7,0);
  MoveArg(0,2,0,7,1);
  Cpush(l_2);
  Rpush(m_2);
  goto k_25;
  m_2 :
  goto k_2;
  l_2 :
  Rpush(o_2);
  goto s_25;
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
  goto g_18;
  g_18 :
  TestFunFC(r_2,&&q_2,Egetd(0,3));
  MoveArg(0,1,0,3,0);
  Cpush(t_2);
  Rpush(u_2);
  goto l_25;
  u_2 :
  goto s_2;
  t_2 :
  Rpush(w_2);
  goto s_25;
  w_2 :
  goto v_2;
  s_2 :
  Cpop();
  v_2 :
  goto e_2;
  q_2 :
  Rpush(e_2);
  goto s_25;
  p_2 :
  TestFunFC(x_2,&&h_2,Egetd(0,7));
  MoveArg(0,3,0,7,0);
  Cpush(z_2);
  Rpush(a_3);
  goto r_25;
  a_3 :
  goto y_2;
  z_2 :
  Rpush(d_3);
  goto s_25;
  d_3 :
  goto c_3;
  y_2 :
  Cpop();
  c_3 :
  goto e_2;
  h_2 :
  Rpush(e_2);
  goto s_25;
  e_2 :
  goto d_2;
  s_25 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset(App2("TCons",MakeInt(0),App2("TCons",Egetd(0,7),App0("TNil"))));
  Rpush(e_3);
  u_25 :
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
  goto u_17;
  u_17 :
  TestFunFC(j_3,&&i_3,Egetd(3,4));
  goto v_17;
  v_17 :
  TestFunFC(d_0,&&fail,Egetd(3,7));
  Rpush(h_3);
  goto v_25;
  i_3 :
  TestFunFC(k_3,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto w_17;
  w_17 :
  TestFunFC(d_0,&&fail,Egetd(3,7));
  Rpush(h_3);
  goto w_25;
  h_3 :
  goto g_3;
  w_25 :
  Epushd(4,6);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_x_65);
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
  goto u_25;
  o_3 :
  OneNextSon();
  Ccall(_stratego_l_65);
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
  v_25 :
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
  r_25 :
  NotNULLd(0,6);
  Tset(App2("As",App1("Off",Egetd(0,6)),App0("Wld")));
  Return();
  c_2 :
  goto b_2;
  l_25 :
  NotNULLd(0,1);
  NotNULLd(0,6);
  NotNULLd(0,2);
  Tset(App2("As",App1("Var",Egetd(0,1)),App2("As",App1("Off",Egetd(0,6)),Egetd(0,2))));
  Return();
  b_2 :
  goto a_2;
  k_25 :
  NotNULLd(0,3);
  NotNULLd(0,6);
  NotNULLd(0,2);
  Tset(App2("As",App1("Off",Egetd(0,6)),App2("Op",Egetd(0,3),App2("As",App1("Off",Egetd(0,6)),Egetd(0,2)))));
  Return();
  a_2 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_x_65)
  _ST_plus();
ENDPROC

PROC(_stratego_y_65)
  Rpush(q_3);
  o_31 :
  Cpush(s_3);
  Epushd(0,3);
  Cpush(u_3);
  Ccall(_stratego_z_65);
  goto t_3;
  u_3 :
  Ccall(_stratego_a_66);
  goto v_3;
  t_3 :
  Cpop();
  v_3 :
  MoveTop(0,1);
  Cpush(x_3);
  Ccall(_stratego_e_66);
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
  Ccall(_stratego_g_66);
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
  goto v_26;
  v_26 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_26;
  w_26 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto x_26;
  x_26 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(e_4);
  goto t_31;
  e_4 :
  goto d_4;
  t_31 :
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
  w_31 :
  Cpush(h_4);
  Ccall(_stratego_b_66);
  goto g_4;
  h_4 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Rpush(j_4);
  goto o_31;
  j_4 :
  OneNextSon();
  Rpush(k_4);
  goto w_31;
  k_4 :
  AllBuild();
  goto i_4;
  g_4 :
  Cpop();
  i_4 :
  Return();
  f_4 :
  Ccall(_stratego_d_66);
  MoveTop(1,1);
  goto j_27;
  j_27 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_27;
  k_27 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto l_27;
  l_27 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(m_4);
  goto x_31;
  m_4 :
  goto l_4;
  x_31 :
  Epushd(2,8);
  Move(0,5,1,2);
  Move(0,4,1,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,5),App0("TNil"))));
  _ST_mkterm();
  MoveTop(2,1);
  Cpush(o_4);
  Ccall(_stratego_e_66);
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
  Ccall(_stratego_g_66);
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
  goto g_27;
  g_27 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto h_27;
  h_27 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto i_27;
  i_27 :
  TestFunFC(d_0,&&fail,Egetd(2,8));
  Rpush(u_4);
  goto n_32;
  u_4 :
  goto t_4;
  n_32 :
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
  Ccall(_stratego_c_66);
  MoveTop(0,8);
  NotNULLd(0,7);
  NotNULLd(0,8);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,8),App0("TNil"))));
  MoveTop(0,9);
  goto u_27;
  u_27 :
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
  goto p_32;
  w_4 :
  goto v_4;
  p_32 :
  Epushd(1,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(x_4);
  q_32 :
  Cpush(z_4);
  Ccall(_stratego_b_66);
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  goto y_4;
  z_4 :
  Ccontinue(a_5);
  Epushd(2,3);
  MoveTop(2,1);
  goto s_27;
  s_27 :
  TestFunFC(k_3,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(c_5);
  goto r_32;
  c_5 :
  goto b_5;
  r_32 :
  Tdupl();
  NotNULLd(0,12);
  Tset(Egetd(0,12));
  Rpush(d_5);
  s_32 :
  Cpush(f_5);
  Epushd(3,3);
  MoveTop(3,1);
  goto r_27;
  r_27 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(i_5);
  goto t_32;
  i_5 :
  goto h_5;
  t_32 :
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
  goto s_32;
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
  goto q_32;
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
  goto q_32;
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

PROC(_stratego_z_65)
  _ST_is_string();
ENDPROC

PROC(_stratego_a_66)
  _ST_is_int();
ENDPROC

PROC(_stratego_b_66)
  Epushd(0,1);
  MoveTop(0,1);
  goto w_32;
  w_32 :
  TestFunFC(j_3,&&fail,Egetd(0,1));
  Rpush(u_5);
  goto y_32;
  u_5 :
  goto t_5;
  y_32 :
  Return();
  t_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_66)
  Rpush(v_5);
  l_34 :
  Cpush(x_5);
  Ccall(_stratego_b_66);
  Tset(App0("Nil"));
  goto w_5;
  x_5 :
  Epushd(0,3);
  MoveTop(0,1);
  goto n_33;
  n_33 :
  TestFunFC(k_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(a_6);
  goto m_34;
  a_6 :
  goto z_5;
  m_34 :
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
  goto l_34;
  c_6 :
  OneNextSon();
  Ccall(_stratego_l_65);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto k_33;
  k_33 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_33;
  l_33 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto m_33;
  m_33 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(h_6);
  goto n_34;
  h_6 :
  goto b_6;
  n_34 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(j_6);
  o_34 :
  Cpush(l_6);
  Ccall(_stratego_b_66);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto k_6;
  l_6 :
  Ccontinue(m_6);
  Epushd(2,3);
  MoveTop(2,1);
  goto j_33;
  j_33 :
  TestFunFC(k_3,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_6);
  goto p_34;
  o_6 :
  goto n_6;
  p_34 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(p_6);
  q_34 :
  Cpush(r_6);
  Epushd(3,3);
  MoveTop(3,1);
  goto i_33;
  i_33 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(t_6);
  goto r_34;
  t_6 :
  goto s_6;
  r_34 :
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
  goto q_34;
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
  goto o_34;
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
  goto o_34;
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

PROC(_stratego_d_66)
  Rpush(a_7);
  i_37 :
  Epushd(0,3);
  MoveTop(0,1);
  goto e_35;
  e_35 :
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
  Ccall(_stratego_l_65);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto v_34;
  v_34 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto w_34;
  w_34 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto x_34;
  x_34 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto y_34;
  y_34 :
  TestFunFC(d_0,&&fail,Egetd(1,6));
  goto z_34;
  z_34 :
  TestFunFC(a_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,13,1,7,1);
  goto a_35;
  a_35 :
  TestFunFC(a_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto b_35;
  b_35 :
  TestFunFC(a_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto c_35;
  c_35 :
  TestFunFC(d_0,&&fail,Egetd(1,12));
  goto d_35;
  d_35 :
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

PROC(_stratego_e_66)
  Epushd(0,7);
  MoveTop(0,1);
  goto p_37;
  p_37 :
  TestFunFC(f_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto q_37;
  q_37 :
  TestFunFC(g_2,&&l_7,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto r_37;
  r_37 :
  TestFunFC(r_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(k_7);
  goto c_39;
  l_7 :
  TestFunFC(r_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto t_37;
  t_37 :
  TestFunFC(f_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,7,0,4,1);
  goto u_37;
  u_37 :
  TestFunFC(g_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(k_7);
  goto d_39;
  k_7 :
  goto j_7;
  d_39 :
  NotNULLd(0,6);
  NotNULLd(0,7);
  Tset(App2("As",App1("Off",Egetd(0,6)),Egetd(0,7)));
  Return();
  j_7 :
  goto i_7;
  c_39 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_f_66);
  Tpop();
  NotNULLd(0,3);
  Tset(App2("As",App1("Off",Egetd(0,3)),App0("Wld")));
  Return();
  i_7 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_f_66)
  Cpush(n_7);
  Ccall(_stratego_b_66);
  goto m_7;
  n_7 :
  Epushd(0,3);
  MoveTop(0,1);
  goto f_39;
  f_39 :
  TestFunFC(k_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(q_7);
  goto o_39;
  q_7 :
  goto p_7;
  o_39 :
  Return();
  p_7 :
  Epopd(0,3);
  goto o_7;
  m_7 :
  Cpop();
  o_7 :
ENDPROC

PROC(_stratego_g_66)
  Epushd(0,7);
  MoveTop(0,1);
  goto r_39;
  r_39 :
  TestFunFC(f_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto s_39;
  s_39 :
  TestFunFC(g_2,&&u_7,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto t_39;
  t_39 :
  TestFunFC(r_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(t_7);
  goto i_40;
  u_7 :
  TestFunFC(r_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto u_39;
  u_39 :
  TestFunFC(f_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,7,0,4,1);
  goto v_39;
  v_39 :
  TestFunFC(g_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  Rpush(t_7);
  goto j_40;
  t_7 :
  goto s_7;
  j_40 :
  NotNULLd(0,3);
  NotNULLd(0,6);
  Tset(App2("Cons",App2("Assign",App1("Var",Egetd(0,3)),App1("Var",Egetd(0,6))),App0("Nil")));
  Return();
  s_7 :
  goto r_7;
  i_40 :
  NotNULLd(0,5);
  NotNULLd(0,3);
  Tset(App2("Cons",App2("Assign",App1("Var",Egetd(0,5)),App1("Var",Egetd(0,3))),App0("Nil")));
  Return();
  r_7 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_h_66)
  Rpush(v_7);
  o_42 :
  Epushd(0,2);
  MoveTop(0,2);
  goto d_41;
  d_41 :
  TestFunFC(g_2,&&z_7,Egetd(0,2));
  MoveArg(0,1,0,2,0);
  Cpush(c_8);
  Rpush(d_8);
  goto p_42;
  d_8 :
  goto b_8;
  c_8 :
  Rpush(g_8);
  goto r_42;
  g_8 :
  goto f_8;
  b_8 :
  Cpop();
  f_8 :
  goto y_7;
  z_7 :
  Rpush(y_7);
  goto r_42;
  y_7 :
  goto x_7;
  r_42 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(2,1);
  goto o_40;
  o_40 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto p_40;
  p_40 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_40;
  q_40 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(i_8);
  goto s_42;
  i_8 :
  goto h_8;
  s_42 :
  Move(1,1,2,4);
  Return();
  h_8 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(j_8);
  t_42 :
  Cpush(m_8);
  Ccall(_stratego_b_66);
  Tset(App0("Nil"));
  goto k_8;
  m_8 :
  Epushd(2,3);
  MoveTop(2,1);
  goto c_41;
  c_41 :
  TestFunFC(k_3,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(p_8);
  goto u_42;
  p_8 :
  goto o_8;
  u_42 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(q_8);
  goto o_42;
  q_8 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(r_8);
  goto t_42;
  r_8 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto z_40;
  z_40 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto a_41;
  a_41 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto b_41;
  b_41 :
  TestFunFC(d_0,&&fail,Egetd(3,7));
  Rpush(t_8);
  goto x_42;
  t_8 :
  goto s_8;
  x_42 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(u_8);
  y_42 :
  Cpush(w_8);
  Ccall(_stratego_b_66);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto v_8;
  w_8 :
  Ccontinue(x_8);
  Epushd(4,3);
  MoveTop(4,1);
  goto y_40;
  y_40 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(z_8);
  goto z_42;
  z_8 :
  goto y_8;
  z_42 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(a_9);
  a_43 :
  Cpush(c_9);
  Epushd(5,3);
  MoveTop(5,1);
  goto x_40;
  x_40 :
  TestFunFC(k_3,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(g_9);
  goto b_43;
  g_9 :
  goto f_9;
  b_43 :
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
  goto a_43;
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
  goto y_42;
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
  goto y_42;
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
  p_42 :
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

PROC(_stratego_i_66)
  Epushd(0,13);
  MoveTop(0,5);
  goto i_48;
  i_48 :
  TestFunFC(d_10,&&c_10,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto j_48;
  j_48 :
  TestFunFC(e_10,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto k_48;
  k_48 :
  TestFunFC(k_3,&&fail,Egetd(0,8));
  MoveArg(0,1,0,8,0);
  MoveArg(0,4,0,8,1);
  goto l_48;
  l_48 :
  TestFunFC(f_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto m_48;
  m_48 :
  TestFunFC(j_3,&&fail,Egetd(0,4));
  Rpush(b_10);
  goto f_61;
  c_10 :
  TestFunFC(h_10,&&g_10,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto n_48;
  n_48 :
  TestFunFC(e_10,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  Rpush(b_10);
  goto g_61;
  g_10 :
  TestFunFC(j_10,&&i_10,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto o_48;
  o_48 :
  TestFunFC(e_10,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto p_48;
  p_48 :
  TestFunFC(e_10,&&k_10,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  Rpush(b_10);
  goto k_61;
  k_10 :
  TestFunFC(j_10,&&l_10,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto q_48;
  q_48 :
  TestFunFC(e_10,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,12,0,10,1);
  Rpush(b_10);
  goto u_61;
  l_10 :
  TestFunFC(m_10,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto r_48;
  r_48 :
  TestFunFC(e_10,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,12,0,10,1);
  Rpush(b_10);
  goto q_62;
  i_10 :
  TestFunFC(m_10,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,9,0,5,1);
  goto s_48;
  s_48 :
  TestFunFC(e_10,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto t_48;
  t_48 :
  TestFunFC(e_10,&&n_10,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  Rpush(b_10);
  goto m_63;
  n_10 :
  TestFunFC(m_10,&&o_10,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto u_48;
  u_48 :
  TestFunFC(e_10,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,12,0,10,1);
  Rpush(b_10);
  goto i_64;
  o_10 :
  TestFunFC(j_10,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto v_48;
  v_48 :
  TestFunFC(e_10,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  MoveArg(0,12,0,10,1);
  Rpush(b_10);
  goto s_64;
  b_10 :
  goto a_10;
  s_64 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,11),App0("TNil"))));
  MoveTop(1,1);
  goto y_47;
  y_47 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_47;
  z_47 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto h_48;
  h_48 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(q_10);
  goto t_64;
  q_10 :
  goto p_10;
  t_64 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(r_10);
  u_64 :
  Cpush(v_10);
  Ccall(_stratego_b_66);
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
  goto v_64;
  y_10 :
  goto x_10;
  v_64 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(z_10);
  w_64 :
  Cpush(b_11);
  Epushd(4,3);
  MoveTop(4,1);
  goto o_47;
  o_47 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(d_11);
  goto d_65;
  d_11 :
  goto c_11;
  d_65 :
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
  goto w_64;
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
  goto u_64;
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
  goto u_64;
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
  goto u_47;
  u_47 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto v_47;
  v_47 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto x_47;
  x_47 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(r_11);
  goto i_68;
  r_11 :
  goto q_11;
  i_68 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(s_11);
  j_68 :
  Cpush(u_11);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_11);
  goto j_68;
  v_11 :
  AllBuild();
  goto t_11;
  u_11 :
  Ccall(_stratego_b_66);
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
  i_64 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,11),App0("TNil"))));
  MoveTop(1,1);
  goto u_46;
  u_46 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_46;
  v_46 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto k_47;
  k_47 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(z_11);
  goto j_64;
  z_11 :
  goto x_11;
  j_64 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(a_12);
  k_64 :
  Cpush(c_12);
  Ccall(_stratego_b_66);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto b_12;
  c_12 :
  Ccontinue(d_12);
  Epushd(3,3);
  MoveTop(3,1);
  goto a_46;
  a_46 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(f_12);
  goto l_64;
  f_12 :
  goto e_12;
  l_64 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(g_12);
  m_64 :
  Cpush(i_12);
  Epushd(4,3);
  MoveTop(4,1);
  goto z_45;
  z_45 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(m_12);
  goto n_64;
  m_12 :
  goto l_12;
  n_64 :
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
  goto m_64;
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
  goto k_64;
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
  goto k_64;
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
  goto e_46;
  e_46 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto f_46;
  f_46 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto g_46;
  g_46 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(t_12);
  goto p_64;
  t_12 :
  goto s_12;
  p_64 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(u_12);
  q_64 :
  Cpush(w_12);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_12);
  goto q_64;
  x_12 :
  AllBuild();
  goto v_12;
  w_12 :
  Ccall(_stratego_b_66);
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
  m_63 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(1,1);
  goto t_45;
  t_45 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto u_45;
  u_45 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto v_45;
  v_45 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(a_13);
  goto n_63;
  a_13 :
  goto z_12;
  n_63 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(b_13);
  o_63 :
  Cpush(h_13);
  Ccall(_stratego_b_66);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto g_13;
  h_13 :
  Ccontinue(i_13);
  Epushd(3,3);
  MoveTop(3,1);
  goto m_45;
  m_45 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(k_13);
  goto p_63;
  k_13 :
  goto j_13;
  p_63 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(l_13);
  q_63 :
  Cpush(n_13);
  Epushd(4,3);
  MoveTop(4,1);
  goto l_45;
  l_45 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(p_13);
  goto r_63;
  p_13 :
  goto o_13;
  r_63 :
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
  goto q_63;
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
  goto o_63;
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
  goto o_63;
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
  goto q_45;
  q_45 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto r_45;
  r_45 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto s_45;
  s_45 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(w_13);
  goto t_63;
  w_13 :
  goto v_13;
  t_63 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(x_13);
  u_63 :
  Cpush(z_13);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_14);
  goto u_63;
  a_14 :
  AllBuild();
  goto y_13;
  z_13 :
  Ccall(_stratego_b_66);
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
  q_62 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,11),App0("TNil"))));
  MoveTop(1,1);
  goto f_45;
  f_45 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_45;
  g_45 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto h_45;
  h_45 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(d_14);
  goto r_62;
  d_14 :
  goto c_14;
  r_62 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(e_14);
  s_62 :
  Cpush(g_14);
  Ccall(_stratego_b_66);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto f_14;
  g_14 :
  Ccontinue(h_14);
  Epushd(3,3);
  MoveTop(3,1);
  goto u_44;
  u_44 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_14);
  goto t_62;
  j_14 :
  goto i_14;
  t_62 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(k_14);
  u_62 :
  Cpush(m_14);
  Epushd(4,3);
  MoveTop(4,1);
  goto t_44;
  t_44 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(o_14);
  goto w_62;
  o_14 :
  goto n_14;
  w_62 :
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
  goto u_62;
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
  goto s_62;
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
  goto s_62;
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
  goto y_44;
  y_44 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto d_45;
  d_45 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto e_45;
  e_45 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(v_14);
  goto j_63;
  v_14 :
  goto u_14;
  j_63 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(w_14);
  k_63 :
  Cpush(y_14);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_14);
  goto k_63;
  z_14 :
  AllBuild();
  goto x_14;
  y_14 :
  Ccall(_stratego_b_66);
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
  u_61 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,11);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,11),App0("TNil"))));
  MoveTop(1,1);
  goto n_44;
  n_44 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_44;
  o_44 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto p_44;
  p_44 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(c_15);
  goto h_62;
  c_15 :
  goto b_15;
  h_62 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(d_15);
  i_62 :
  Cpush(f_15);
  Ccall(_stratego_b_66);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto e_15;
  f_15 :
  Ccontinue(g_15);
  Epushd(3,3);
  MoveTop(3,1);
  goto g_44;
  g_44 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(i_15);
  goto j_62;
  i_15 :
  goto h_15;
  j_62 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(j_15);
  k_62 :
  Cpush(l_15);
  Epushd(4,3);
  MoveTop(4,1);
  goto f_44;
  f_44 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(n_15);
  goto l_62;
  n_15 :
  goto m_15;
  l_62 :
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
  goto k_62;
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
  goto i_62;
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
  goto i_62;
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
  goto k_44;
  k_44 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto l_44;
  l_44 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto m_44;
  m_44 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(u_15);
  goto n_62;
  u_15 :
  goto t_15;
  n_62 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(v_15);
  o_62 :
  Cpush(x_15);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_15);
  goto o_62;
  y_15 :
  AllBuild();
  goto w_15;
  x_15 :
  Ccall(_stratego_b_66);
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
  k_61 :
  Epushd(1,5);
  NotNULLd(0,7);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,7),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(1,1);
  goto z_43;
  z_43 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto a_44;
  a_44 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto b_44;
  b_44 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(b_16);
  goto l_61;
  b_16 :
  goto a_16;
  l_61 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(c_16);
  m_61 :
  Cpush(j_16);
  Ccall(_stratego_b_66);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto i_16;
  j_16 :
  Ccontinue(l_16);
  Epushd(3,3);
  MoveTop(3,1);
  goto r_43;
  r_43 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(p_16);
  goto n_61;
  p_16 :
  goto m_16;
  n_61 :
  Tdupl();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(q_16);
  o_61 :
  Cpush(s_16);
  Epushd(4,3);
  MoveTop(4,1);
  goto q_43;
  q_43 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(u_16);
  goto p_61;
  u_16 :
  goto t_16;
  p_61 :
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
  goto o_61;
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
  goto m_61;
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
  goto m_61;
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
  goto v_43;
  v_43 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto w_43;
  w_43 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto x_43;
  x_43 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(b_17);
  goto r_61;
  b_17 :
  goto a_17;
  r_61 :
  Epushd(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(c_17);
  s_61 :
  Cpush(e_17);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_17);
  goto s_61;
  f_17 :
  AllBuild();
  goto d_17;
  e_17 :
  Ccall(_stratego_b_66);
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
  g_61 :
  Epushd(1,1);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Rpush(h_17);
  h_61 :
  Cpush(j_17);
  Ccall(_stratego_b_66);
  goto i_17;
  j_17 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(2,3);
  MoveTop(2,1);
  goto l_43;
  l_43 :
  TestFunFC(f_10,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(x_17);
  goto i_61;
  x_17 :
  goto t_17;
  i_61 :
  NotNULLd(2,2);
  NotNULLd(0,6);
  NotNULLd(2,3);
  Tset(App2("Row",Egetd(2,2),App2("Scope",Egetd(0,6),Egetd(2,3))));
  Return();
  t_17 :
  Epopd(2,3);
  OneNextSon();
  Rpush(z_17);
  goto h_61;
  z_17 :
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
  f_61 :
  NotNULLd(0,7);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(0,9);
  Tset(App2("Matrix",Egetd(0,7),App2("Cons",App2("Row",Egetd(0,2),App2("Seq",Egetd(0,3),Egetd(0,9))),App0("Nil"))));
  Return();
  r_9 :
  Epopd(0,13);
ENDPROC

PROC(_stratego_j_66)
  Cpush(b_18);
  Ccall(_stratego_k_66);
  goto a_18;
  b_18 :
  Ccontinue(c_18);
  Ccall(_stratego_l_66);
  goto a_18;
  c_18 :
  Ccontinue(d_18);
  Ccall(_stratego_m_66);
  goto a_18;
  d_18 :
  Ccontinue(n_18);
  Ccall(_stratego_n_66);
  goto a_18;
  n_18 :
  Ccall(_stratego_o_66);
  goto o_18;
  a_18 :
  Cpop();
  o_18 :
ENDPROC

PROC(_stratego_k_66)
  Epushd(0,3);
  MoveTop(0,2);
  goto v_68;
  v_68 :
  TestFunFC(c_19,&&b_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto w_68;
  w_68 :
  TestFunFC(d_19,&&fail,Egetd(0,3));
  Rpush(a_19);
  goto p_69;
  b_19 :
  TestFunFC(f_19,&&e_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto x_68;
  x_68 :
  TestFunFC(d_19,&&fail,Egetd(0,3));
  Rpush(a_19);
  goto q_69;
  e_19 :
  TestFunFC(d_10,&&g_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto y_68;
  y_68 :
  TestFunFC(d_19,&&h_19,Egetd(0,1));
  goto z_68;
  z_68 :
  TestFunFC(d_19,&&i_19,Egetd(0,3));
  Cpush(k_19);
  Rpush(l_19);
  goto r_69;
  l_19 :
  goto j_19;
  k_19 :
  Rpush(n_19);
  goto s_69;
  n_19 :
  goto m_19;
  j_19 :
  Cpop();
  m_19 :
  goto a_19;
  i_19 :
  Rpush(a_19);
  goto s_69;
  h_19 :
  goto a_69;
  a_69 :
  TestFunFC(d_19,&&fail,Egetd(0,3));
  Rpush(a_19);
  goto r_69;
  g_19 :
  TestFunFC(m_10,&&o_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto b_69;
  b_69 :
  TestFunFC(d_19,&&fail,Egetd(0,3));
  Rpush(a_19);
  goto t_69;
  o_19 :
  TestFunFC(h_10,&&p_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto c_69;
  c_69 :
  TestFunFC(d_19,&&fail,Egetd(0,1));
  Rpush(a_19);
  goto u_69;
  p_19 :
  TestFunFC(s_19,&&q_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto d_69;
  d_69 :
  TestFunFC(d_19,&&fail,Egetd(0,1));
  Rpush(a_19);
  goto v_69;
  q_19 :
  TestFunFC(u_19,&&t_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto e_69;
  e_69 :
  TestFunFC(d_19,&&fail,Egetd(0,3));
  Rpush(a_19);
  goto w_69;
  t_19 :
  TestFunFC(w_19,&&v_19,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto f_69;
  f_69 :
  TestFunFC(d_19,&&fail,Egetd(0,3));
  Rpush(a_19);
  goto x_69;
  v_19 :
  TestFunFC(c_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto g_69;
  g_69 :
  TestFunFC(x_19,&&fail,Egetd(0,3));
  Rpush(a_19);
  goto y_69;
  a_19 :
  goto z_18;
  y_69 :
  Tset(App0("Id"));
  Return();
  z_18 :
  goto y_18;
  x_69 :
  Tset(App0("Id"));
  Return();
  y_18 :
  goto w_18;
  w_69 :
  Tset(App0("Id"));
  Return();
  w_18 :
  goto v_18;
  v_69 :
  Tset(App0("Id"));
  Return();
  v_18 :
  goto u_18;
  u_69 :
  Tset(App0("Id"));
  Return();
  u_18 :
  goto t_18;
  t_69 :
  Tset(App0("Id"));
  Return();
  t_18 :
  goto s_18;
  s_69 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  s_18 :
  goto r_18;
  r_69 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  r_18 :
  goto q_18;
  q_69 :
  Tset(App0("Fail"));
  Return();
  q_18 :
  goto p_18;
  p_69 :
  Tset(App0("Id"));
  Return();
  p_18 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_l_66)
  Epushd(0,3);
  MoveTop(0,2);
  goto s_70;
  s_70 :
  TestFunFC(c_19,&&a_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto t_70;
  t_70 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto y_71;
  a_21 :
  TestFunFC(f_19,&&c_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto u_70;
  u_70 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto z_71;
  c_21 :
  TestFunFC(d_10,&&d_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto v_70;
  v_70 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto a_72;
  d_21 :
  TestFunFC(h_10,&&e_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto w_70;
  w_70 :
  TestFunFC(b_21,&&fail,Egetd(0,1));
  Rpush(z_20);
  goto b_72;
  e_21 :
  TestFunFC(s_19,&&f_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto x_70;
  x_70 :
  TestFunFC(b_21,&&fail,Egetd(0,1));
  Rpush(z_20);
  goto c_72;
  f_21 :
  TestFunFC(h_21,&&g_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto y_70;
  y_70 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto d_72;
  g_21 :
  TestFunFC(j_21,&&i_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto z_70;
  z_70 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto e_72;
  i_21 :
  TestFunFC(l_21,&&k_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto a_71;
  a_71 :
  TestFunFC(b_21,&&fail,Egetd(0,1));
  Rpush(z_20);
  goto f_72;
  k_21 :
  TestFunFC(n_21,&&m_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(z_20);
  goto g_72;
  m_21 :
  TestFunFC(j_10,&&o_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto b_71;
  b_71 :
  TestFunFC(b_21,&&p_21,Egetd(0,1));
  goto c_71;
  c_71 :
  TestFunFC(b_21,&&q_21,Egetd(0,3));
  Cpush(s_21);
  Rpush(u_21);
  goto j_72;
  u_21 :
  goto r_21;
  s_21 :
  Rpush(w_21);
  goto k_72;
  w_21 :
  goto v_21;
  r_21 :
  Cpop();
  v_21 :
  goto z_20;
  q_21 :
  Rpush(z_20);
  goto k_72;
  p_21 :
  goto d_71;
  d_71 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto j_72;
  o_21 :
  TestFunFC(m_10,&&x_21,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  goto e_71;
  e_71 :
  TestFunFC(b_21,&&y_21,Egetd(0,1));
  goto f_71;
  f_71 :
  TestFunFC(b_21,&&z_21,Egetd(0,3));
  Cpush(b_22);
  Rpush(c_22);
  goto l_72;
  c_22 :
  goto a_22;
  b_22 :
  Rpush(e_22);
  goto m_72;
  e_22 :
  goto d_22;
  a_22 :
  Cpop();
  d_22 :
  goto z_20;
  z_21 :
  Rpush(z_20);
  goto m_72;
  y_21 :
  goto g_71;
  g_71 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto l_72;
  x_21 :
  TestFunFC(w_19,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto h_71;
  h_71 :
  TestFunFC(b_21,&&fail,Egetd(0,3));
  Rpush(z_20);
  goto n_72;
  z_20 :
  goto t_20;
  n_72 :
  Tset(App0("Fail"));
  Return();
  t_20 :
  goto r_20;
  m_72 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  r_20 :
  goto q_20;
  l_72 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  q_20 :
  goto p_20;
  k_72 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  p_20 :
  goto o_20;
  j_72 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Return();
  o_20 :
  goto g_20;
  g_72 :
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(f_22);
  h_72 :
  Cpush(h_22);
  Epushd(1,3);
  MoveTop(1,1);
  goto p_70;
  p_70 :
  TestFunFC(k_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_70;
  q_70 :
  TestFunFC(b_21,&&fail,Egetd(1,2));
  Rpush(j_22);
  goto i_72;
  j_22 :
  goto i_22;
  i_72 :
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
  goto h_72;
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
  g_20 :
  goto f_20;
  f_72 :
  Tset(App0("Fail"));
  Return();
  f_20 :
  goto e_20;
  e_72 :
  Tset(App0("Fail"));
  Return();
  e_20 :
  goto d_20;
  d_72 :
  Tset(App0("Fail"));
  Return();
  d_20 :
  goto c_20;
  c_72 :
  Tset(App0("Fail"));
  Return();
  c_20 :
  goto b_20;
  b_72 :
  Tset(App0("Fail"));
  Return();
  b_20 :
  goto a_20;
  a_72 :
  Tset(App0("Fail"));
  Return();
  a_20 :
  goto z_19;
  z_71 :
  Tset(App0("Id"));
  Return();
  z_19 :
  goto y_19;
  y_71 :
  Tset(App0("Fail"));
  Return();
  y_19 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_m_66)
  Epushd(0,5);
  MoveTop(0,1);
  goto r_72;
  r_72 :
  TestFunFC(j_10,&&s_22,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto s_72;
  s_72 :
  TestFunFC(j_10,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_22);
  goto j_73;
  s_22 :
  TestFunFC(d_10,&&t_22,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto t_72;
  t_72 :
  TestFunFC(d_10,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_22);
  goto k_73;
  t_22 :
  TestFunFC(m_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto u_72;
  u_72 :
  TestFunFC(m_10,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_22);
  goto l_73;
  p_22 :
  goto o_22;
  l_73 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("LChoice",Egetd(0,3),App2("LChoice",Egetd(0,4),Egetd(0,5))));
  Return();
  o_22 :
  goto n_22;
  k_73 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,3),App2("Seq",Egetd(0,4),Egetd(0,5))));
  Return();
  n_22 :
  goto m_22;
  j_73 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Choice",Egetd(0,3),App2("Choice",Egetd(0,4),Egetd(0,5))));
  Return();
  m_22 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_66)
  Epushd(0,9);
  MoveTop(0,2);
  goto s_73;
  s_73 :
  TestFunFC(j_10,&&b_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(a_23);
  goto q_74;
  b_23 :
  TestFunFC(m_10,&&c_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(a_23);
  goto r_74;
  c_23 :
  TestFunFC(f_19,&&d_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto t_73;
  t_73 :
  TestFunFC(f_19,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(a_23);
  goto t_74;
  d_23 :
  TestFunFC(c_19,&&e_23,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto u_73;
  u_73 :
  TestFunFC(c_19,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(a_23);
  goto u_74;
  e_23 :
  TestFunFC(w_19,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto v_73;
  v_73 :
  TestFunFC(w_19,&&f_23,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(a_23);
  goto s_74;
  f_23 :
  TestFunFC(d_10,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto w_73;
  w_73 :
  TestFunFC(w_19,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto x_73;
  x_73 :
  TestFunFC(d_10,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,9,0,6,1);
  goto y_73;
  y_73 :
  TestFunFC(g_23,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  Rpush(a_23);
  goto v_74;
  a_23 :
  goto z_22;
  v_74 :
  NotNULLd(0,5);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset(App1("Where",App2("Seq",Egetd(0,5),App2("Seq",App1("Build",Egetd(0,8)),Egetd(0,9)))));
  Return();
  z_22 :
  goto y_22;
  u_74 :
  NotNULLd(0,4);
  Tset(App1("Test",Egetd(0,4)));
  Return();
  y_22 :
  goto x_22;
  t_74 :
  NotNULLd(0,4);
  Tset(App1("Test",Egetd(0,4)));
  Return();
  x_22 :
  goto w_22;
  s_74 :
  NotNULLd(0,4);
  Tset(App1("Where",Egetd(0,4)));
  Return();
  w_22 :
  goto v_22;
  r_74 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  v_22 :
  goto u_22;
  q_74 :
  Move(0,3,0,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  u_22 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_o_66)
  Epushd(0,6);
  MoveTop(0,3);
  goto i_75;
  i_75 :
  TestFunFC(v_23,&&u_23,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto j_75;
  j_75 :
  TestFunFC(j_3,&&w_23,Egetd(0,4));
  Rpush(t_23);
  goto m_76;
  w_23 :
  TestFunFC(k_3,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(t_23);
  goto n_76;
  u_23 :
  TestFunFC(y_23,&&x_23,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto k_75;
  k_75 :
  TestFunFC(j_3,&&z_23,Egetd(0,4));
  Rpush(t_23);
  goto o_76;
  z_23 :
  TestFunFC(k_3,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(t_23);
  goto p_76;
  x_23 :
  TestFunFC(b_24,&&a_24,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto l_75;
  l_75 :
  TestFunFC(j_3,&&c_24,Egetd(0,4));
  Rpush(t_23);
  goto q_76;
  c_24 :
  TestFunFC(k_3,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(t_23);
  goto r_76;
  a_24 :
  TestFunFC(e_24,&&d_24,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto m_75;
  m_75 :
  TestFunFC(j_3,&&f_24,Egetd(0,4));
  Rpush(t_23);
  goto s_76;
  f_24 :
  TestFunFC(k_3,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(t_23);
  goto t_76;
  d_24 :
  TestFunFC(h_24,&&g_24,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(t_23);
  goto u_76;
  g_24 :
  TestFunFC(j_24,&&i_24,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(t_23);
  goto v_76;
  i_24 :
  TestFunFC(l_24,&&k_24,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(t_23);
  goto w_76;
  k_24 :
  TestFunFC(m_24,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(t_23);
  goto x_76;
  t_23 :
  goto s_23;
  x_76 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Seqs",App2("Cons",App1("Build",Egetd(0,5)),App2("Cons",Egetd(0,4),App2("Cons",App1("Match",Egetd(0,6)),App0("Nil"))))));
  Return();
  s_23 :
  goto r_23;
  w_76 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,4),App1("Match",Egetd(0,5))));
  Return();
  r_23 :
  goto q_23;
  v_76 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",App1("Match",Egetd(0,4)),Egetd(0,5)));
  Return();
  q_23 :
  goto p_23;
  u_76 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App2("Seq",App1("Build",Egetd(0,5)),Egetd(0,4)));
  Return();
  p_23 :
  goto o_23;
  t_76 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,1),App2("Lets",Egetd(0,2),Egetd(0,5))));
  Return();
  o_23 :
  goto n_23;
  s_76 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  n_23 :
  goto m_23;
  r_76 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("LChoice",Egetd(0,1),App1("LChoices",Egetd(0,2))));
  Return();
  m_23 :
  goto l_23;
  q_76 :
  Tset(App0("Fail"));
  Return();
  l_23 :
  goto k_23;
  p_76 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Choice",Egetd(0,1),App1("Choices",Egetd(0,2))));
  Return();
  k_23 :
  goto j_23;
  o_76 :
  Tset(App0("Fail"));
  Return();
  j_23 :
  goto i_23;
  n_76 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Seq",Egetd(0,1),App1("Seqs",Egetd(0,2))));
  Return();
  i_23 :
  goto h_23;
  m_76 :
  Tset(App0("Id"));
  Return();
  h_23 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_p_66)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_q_66)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test3"));
  Ccall(_stratego_s_65);
  Tpop();
  Cpush(p_24);
  Tdupl();
  Epushd(1,1);
  Cpush(r_24);
  Epushd(2,1);
  Tset(ATmakeString("data/choices1.trm"));
  Ccall(_stratego_p_66);
  Ccall(_stratego_r_66);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto q_24;
  r_24 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_65);
  Ccall(_stratego_t_65);
  goto s_24;
  q_24 :
  Cpop();
  s_24 :
  Tset(ATmakeString("data/choices1-dfa.trm"));
  Ccall(_stratego_p_66);
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
  Ccall(_stratego_i_65);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_65);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_t_65);
  goto v_24;
  t_24 :
  Cpop();
  v_24 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_p_65);
  goto n_24;
  p_24 :
  Ccall(_stratego_r_65);
  goto w_24;
  n_24 :
  Cpop();
  w_24 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_r_66)
  Rpush(x_24);
  b_79 :
  Cpush(z_24);
  Ccall(_stratego_b_66);
  goto y_24;
  z_24 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  TestFunTop(b_25);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_66);
  Ccall(_stratego_d_67);
  Ccall(_stratego_a_68);
  Ccall(_stratego_b_68);
  AllBuild();
  OneNextSon();
  Rpush(c_25);
  goto b_79;
  c_25 :
  AllBuild();
  goto a_25;
  y_24 :
  Cpop();
  a_25 :
  Return();
  x_24 :
ENDPROC

PROC(_stratego_s_66)
  Rpush(f_25);
  t_81 :
  Cpush(h_25);
  g_25 :
  Cpush(m_25);
  Ccall(_stratego_t_66);
  goto i_25;
  m_25 :
  Epushd(0,3);
  MoveTop(0,1);
  goto h_79;
  h_79 :
  TestFunFC(n_21,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_25);
  goto v_81;
  p_25 :
  goto o_25;
  v_81 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_25);
  x_81 :
  Cpush(x_25);
  Ccall(_stratego_b_66);
  goto t_25;
  x_25 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,2);
  goto f_79;
  f_79 :
  TestFunFC(c_1,&&c_26,Egetd(3,2));
  MoveArg(3,1,3,2,0);
  Rpush(b_26);
  goto y_81;
  c_26 :
  TestFunFC(d_19,&&fail,Egetd(3,2));
  Rpush(b_26);
  goto z_81;
  b_26 :
  goto a_26;
  z_81 :
  Tset(App0("Wld"));
  Return();
  a_26 :
  goto z_25;
  y_81 :
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Return();
  z_25 :
  Epopd(3,2);
  OneNextSon();
  Rpush(d_26);
  goto x_81;
  d_26 :
  AllBuild();
  goto y_25;
  t_25 :
  Cpop();
  y_25 :
  Return();
  q_25 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App1("Match",App2("Op",Egetd(0,2),Egetd(1,1))));
  Epopd(1,1);
  Return();
  o_25 :
  Epopd(0,3);
  goto n_25;
  i_25 :
  Cpop();
  n_25 :
  Tduplinv();
  goto g_25;
  h_25 :
  AllInit();
  f_26 :
  AllNextSon(&&g_26);
  Rpush(h_26);
  goto t_81;
  h_26 :
  goto f_26;
  g_26 :
  AllBuild();
  Cpush(j_26);
  i_26 :
  Cpush(l_26);
  Ccall(_stratego_t_66);
  goto k_26;
  l_26 :
  Epushd(0,3);
  MoveTop(0,1);
  goto n_79;
  n_79 :
  TestFunFC(n_21,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_26);
  goto c_82;
  p_26 :
  goto o_26;
  c_82 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_26);
  d_82 :
  Cpush(s_26);
  Ccall(_stratego_b_66);
  goto r_26;
  s_26 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,2);
  goto l_79;
  l_79 :
  TestFunFC(c_1,&&a_27,Egetd(3,2));
  MoveArg(3,1,3,2,0);
  Rpush(z_26);
  goto e_82;
  a_27 :
  TestFunFC(d_19,&&fail,Egetd(3,2));
  Rpush(z_26);
  goto f_82;
  z_26 :
  goto y_26;
  f_82 :
  Tset(App0("Wld"));
  Return();
  y_26 :
  goto u_26;
  e_82 :
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Return();
  u_26 :
  Epopd(3,2);
  OneNextSon();
  Rpush(b_27);
  goto d_82;
  b_27 :
  AllBuild();
  goto t_26;
  r_26 :
  Cpop();
  t_26 :
  Return();
  q_26 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App1("Match",App2("Op",Egetd(0,2),Egetd(1,1))));
  Epopd(1,1);
  Return();
  o_26 :
  Epopd(0,3);
  goto m_26;
  k_26 :
  Cpop();
  m_26 :
  Tduplinv();
  goto i_26;
  j_26 :
  Return();
  f_25 :
  Rpush(c_27);
  h_82 :
  Cpush(e_27);
  Epushd(0,5);
  MoveTop(0,1);
  goto x_79;
  x_79 :
  TestFunFC(h_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto y_79;
  y_79 :
  TestFunFC(d_10,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(m_27);
  goto i_82;
  m_27 :
  goto f_27;
  i_82 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_b_67);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(0,2),App0("TNil"))));
  MoveTop(2,2);
  goto u_79;
  u_79 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto v_79;
  v_79 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto w_79;
  w_79 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(o_27);
  goto k_82;
  o_27 :
  goto n_27;
  k_82 :
  Epushd(3,3);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App0("TNil"))));
  Ccall(_stratego_y_66);
  MoveTop(3,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_y_66);
  MoveTop(3,2);
  Move(1,1,3,2);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_y_66);
  MoveTop(3,3);
  Move(1,2,3,3);
  Cpush(p_27);
  Tdupl();
  Ccall(_stratego_b_66);
  Cpop();
  Crestore();
  Cjump();
  p_27 :
  Epopd(3,3);
  Return();
  n_27 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,4);
  NotNULLd(1,2);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(1,1),App2("Seq",Egetd(0,4),App2("Scope",Egetd(1,2),Egetd(0,5)))));
  Epopd(1,2);
  Return();
  f_27 :
  Epopd(0,5);
  goto d_27;
  e_27 :
  goto q_27;
  d_27 :
  Cpop();
  q_27 :
  AllInit();
  t_27 :
  AllNextSon(&&x_27);
  Rpush(y_27);
  goto h_82;
  y_27 :
  goto t_27;
  x_27 :
  AllBuild();
  Return();
  c_27 :
ENDPROC

PROC(_stratego_t_66)
  Cpush(a_28);
  Ccall(_stratego_j_66);
  goto z_27;
  a_28 :
  Ccontinue(b_28);
  Epushd(0,5);
  MoveTop(0,1);
  goto q_82;
  q_82 :
  TestFunFC(d_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_82;
  r_82 :
  TestFunFC(g_28,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(e_28);
  goto h_85;
  e_28 :
  goto c_28;
  h_85 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,4),App2("Seq",Egetd(0,2),Egetd(0,5))));
  Return();
  c_28 :
  Epopd(0,5);
  goto z_27;
  b_28 :
  Ccontinue(i_28);
  Ccall(_stratego_u_66);
  goto z_27;
  i_28 :
  Ccontinue(m_28);
  Ccall(_stratego_a_67);
  goto z_27;
  m_28 :
  Epushd(0,9);
  MoveTop(0,4);
  goto i_83;
  i_83 :
  TestFunFC(d_10,&&h_29,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  goto j_83;
  j_83 :
  TestFunFC(g_23,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto k_83;
  k_83 :
  TestFunFC(d_10,&&fail,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,3,0,9,1);
  goto l_83;
  l_83 :
  TestFunFC(g_23,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(g_29);
  goto i_85;
  h_29 :
  TestFunFC(g_28,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,9,0,4,1);
  goto m_83;
  m_83 :
  TestFunFC(b_25,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  MoveArg(0,8,0,5,2);
  goto n_83;
  n_83 :
  TestFunFC(j_3,&&fail,Egetd(0,7));
  Cpush(j_29);
  Rpush(k_29);
  goto j_85;
  k_29 :
  goto i_29;
  j_29 :
  Rpush(m_29);
  goto s_85;
  m_29 :
  goto l_29;
  i_29 :
  Cpop();
  l_29 :
  goto g_29;
  g_29 :
  goto f_29;
  s_85 :
  NotNULLd(0,6);
  NotNULLd(0,8);
  NotNULLd(0,9);
  Tset(App2("Let",App4("SDef",App2("Cons",App0("DontInline"),App0("Nil")),Egetd(0,6),App0("Nil"),Egetd(0,8)),Egetd(0,9)));
  Return();
  f_29 :
  goto e_29;
  j_85 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,9);
  Tset(Egetd(0,9));
  Rpush(n_29);
  k_85 :
  Cpush(p_29);
  Epushd(3,4);
  MoveTop(3,1);
  goto w_82;
  w_82 :
  TestFunFC(t_29,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,4,3,1,1);
  goto x_82;
  x_82 :
  TestFunFC(u_29,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  goto y_82;
  y_82 :
  TestFunFC(j_3,&&fail,Egetd(3,4));
  Rpush(r_29);
  goto l_85;
  r_29 :
  goto q_29;
  l_85 :
  Move(0,6,3,3);
  NotNULLd(0,8);
  Tset(Egetd(0,8));
  Return();
  q_29 :
  Epopd(3,4);
  goto o_29;
  p_29 :
  Cpush(w_29);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,3);
  goto b_83;
  b_83 :
  TestFunFC(i_30,&&e_30,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  MoveArg(3,1,3,3,2);
  MoveArg(3,2,3,3,3);
  Rpush(d_30);
  goto m_85;
  e_30 :
  TestFunFC(e_10,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(d_30);
  goto n_85;
  d_30 :
  goto c_30;
  n_85 :
  Return();
  c_30 :
  goto y_29;
  m_85 :
  Return();
  y_29 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  w_29 :
  IsAppl();
  OneInit();
  o_30 :
  OneNextSon();
  Cpush(o_30);
  Rpush(q_30);
  goto k_85;
  q_30 :
  Cpop();
  OneBuild();
  goto v_29;
  o_29 :
  Cpop();
  v_29 :
  Return();
  n_29 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Call",App1("SVar",Egetd(0,6)),App0("Nil")),App2("TCons",Egetd(1,1),App0("TNil"))));
  Cpush(r_30);
  Tdupl();
  Epushd(3,5);
  MoveTop(3,1);
  goto f_83;
  f_83 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto g_83;
  g_83 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto h_83;
  h_83 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(w_30);
  goto p_85;
  w_30 :
  goto v_30;
  p_85 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(g_31);
  x_30 :
  Cpush(y_30);
  Epushd(4,1);
  MoveTop(4,1);
  Move(3,2,4,1);
  Epopd(4,1);
  Cpop();
  goto d_31;
  y_30 :
  IsAppl();
  MatchTravInit();
  z_30 :
  OneMatchNextSon();
  Cpush(z_30);
  Rpush(c_31);
  goto x_30;
  c_31 :
  Cpop();
  MatchTravEnd();
  d_31 :
  Return();
  g_31 :
  Return();
  v_30 :
  Epopd(3,5);
  Cpop();
  Crestore();
  Cjump();
  r_30 :
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  e_29 :
  goto d_29;
  i_85 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Build",Egetd(0,2)),Egetd(0,3)));
  Return();
  d_29 :
  Epopd(0,9);
  goto c_29;
  z_27 :
  Cpop();
  c_29 :
ENDPROC

PROC(_stratego_u_66)
  Epushd(0,17);
  MoveTop(0,9);
  goto k_87;
  k_87 :
  TestFunFC(h_10,&&n_31,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto l_87;
  l_87 :
  TestFunFC(d_10,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto m_87;
  m_87 :
  TestFunFC(q_31,&&p_31,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  MoveArg(0,1,0,14,1);
  goto n_87;
  n_87 :
  TestFunFC(r_2,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto o_87;
  o_87 :
  TestFunFC(r_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(m_31);
  goto m_92;
  p_31 :
  TestFunFC(r_31,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto p_87;
  p_87 :
  TestFunFC(r_2,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  goto q_87;
  q_87 :
  TestFunFC(d_10,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto r_87;
  r_87 :
  TestFunFC(r_31,&&s_31,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto s_87;
  s_87 :
  TestFunFC(r_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(m_31);
  goto u_92;
  s_31 :
  TestFunFC(q_31,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto t_87;
  t_87 :
  TestFunFC(r_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto u_87;
  u_87 :
  TestFunFC(r_2,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  Rpush(m_31);
  goto f_93;
  n_31 :
  TestFunFC(d_10,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,13,0,9,1);
  goto v_87;
  v_87 :
  TestFunFC(g_23,&&u_31,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto w_87;
  w_87 :
  TestFunFC(h_10,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto x_87;
  x_87 :
  TestFunFC(d_10,&&fail,Egetd(0,17));
  MoveArg(0,3,0,17,0);
  MoveArg(0,8,0,17,1);
  goto y_87;
  y_87 :
  TestFunFC(r_31,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto z_87;
  z_87 :
  TestFunFC(r_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(m_31);
  goto f_92;
  u_31 :
  TestFunFC(r_31,&&fail,Egetd(0,10));
  MoveArg(0,11,0,10,0);
  goto a_88;
  a_88 :
  TestFunFC(r_2,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  goto b_88;
  b_88 :
  TestFunFC(d_10,&&fail,Egetd(0,13));
  MoveArg(0,14,0,13,0);
  MoveArg(0,17,0,13,1);
  goto c_88;
  c_88 :
  TestFunFC(g_23,&&fail,Egetd(0,14));
  MoveArg(0,15,0,14,0);
  goto d_88;
  d_88 :
  TestFunFC(r_2,&&fail,Egetd(0,15));
  MoveArg(0,16,0,15,0);
  Rpush(m_31);
  goto p_93;
  m_31 :
  goto l_31;
  p_93 :
  Epushd(1,1);
  Move(0,12,0,16);
  Move(1,1,0,17);
  NotNULLd(0,12);
  NotNULLd(1,1);
  Tset(App2("Seq",App1("Assign",App1("Var",Egetd(0,12))),Egetd(1,1)));
  Epopd(1,1);
  Return();
  l_31 :
  goto k_31;
  f_93 :
  Epushd(1,3);
  Move(0,16,0,7);
  Move(1,1,0,8);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto g_87;
  g_87 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto h_87;
  h_87 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto i_87;
  i_87 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(y_31);
  goto g_93;
  y_31 :
  goto v_31;
  g_93 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(e_32);
  z_31 :
  Cpush(a_32);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto d_32;
  a_32 :
  IsAppl();
  MatchTravInit();
  b_32 :
  OneMatchNextSon();
  Cpush(b_32);
  Rpush(c_32);
  goto z_31;
  c_32 :
  Cpop();
  MatchTravEnd();
  d_32 :
  Return();
  e_32 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(3,1);
  goto d_87;
  d_87 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto e_87;
  e_87 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto f_87;
  f_87 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(g_32);
  goto j_93;
  g_32 :
  goto f_32;
  j_93 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(m_32);
  h_32 :
  Cpush(i_32);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  Cpop();
  goto l_32;
  i_32 :
  IsAppl();
  MatchTravInit();
  j_32 :
  OneMatchNextSon();
  Cpush(j_32);
  Rpush(k_32);
  goto h_32;
  k_32 :
  Cpop();
  MatchTravEnd();
  l_32 :
  Return();
  m_32 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_y_66);
  MoveTop(4,1);
  Move(1,2,4,1);
  Epopd(4,1);
  Return();
  f_32 :
  Epopd(3,5);
  Return();
  v_31 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(1,1);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,16)),App0("Nil")),App2("TCons",Egetd(1,1),App0("TNil")))));
  Ccall(_stratego_v_66);
  MoveTop(1,3);
  NotNULLd(1,2);
  NotNULLd(0,16);
  NotNULLd(1,3);
  Tset(App2("Scope",Egetd(1,2),App2("Seq",App1("Assign",App1("Var",Egetd(0,16))),Egetd(1,3))));
  Epopd(1,3);
  Return();
  k_31 :
  goto j_31;
  u_92 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto u_86;
  u_86 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_86;
  v_86 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_86;
  w_86 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(u_32);
  goto v_92;
  u_32 :
  goto o_32;
  v_92 :
  Epushd(3,5);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(d_33);
  v_32 :
  Cpush(z_32);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto c_33;
  z_32 :
  IsAppl();
  MatchTravInit();
  a_33 :
  OneMatchNextSon();
  Cpush(a_33);
  Rpush(b_33);
  goto v_32;
  b_33 :
  Cpop();
  MatchTravEnd();
  c_33 :
  Return();
  d_33 :
  NotNULLd(0,5);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(3,1);
  goto r_86;
  r_86 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto s_86;
  s_86 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto t_86;
  t_86 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(f_33);
  goto y_92;
  f_33 :
  goto e_33;
  y_92 :
  Epushd(4,1);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(u_33);
  g_33 :
  Cpush(h_33);
  Epushd(5,1);
  MoveTop(5,1);
  Move(3,2,5,1);
  Epopd(5,1);
  Cpop();
  goto r_33;
  h_33 :
  IsAppl();
  MatchTravInit();
  p_33 :
  OneMatchNextSon();
  Cpush(p_33);
  Rpush(q_33);
  goto g_33;
  q_33 :
  Cpop();
  MatchTravEnd();
  r_33 :
  Return();
  u_33 :
  NotNULLd(0,10);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_y_66);
  MoveTop(4,1);
  Move(1,1,4,1);
  Epopd(4,1);
  Return();
  e_33 :
  Epopd(3,5);
  Return();
  o_32 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,16);
  NotNULLd(0,8);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,16)),App0("Nil")),App2("TCons",Egetd(0,8),App0("TNil")))));
  Ccall(_stratego_v_66);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(0,16);
  NotNULLd(1,2);
  Tset(App2("Scope",Egetd(1,1),App2("Seq",App1("Assign",App1("Var",Egetd(0,16))),Egetd(1,2))));
  Epopd(1,2);
  Return();
  j_31 :
  goto i_31;
  m_92 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,16);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,16),App2("TCons",Egetd(0,10),App0("TNil"))));
  MoveTop(2,1);
  goto i_86;
  i_86 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_86;
  j_86 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto k_86;
  k_86 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(b_34);
  goto n_92;
  b_34 :
  goto v_33;
  n_92 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(u_34);
  c_34 :
  Cpush(g_34);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto t_34;
  g_34 :
  IsAppl();
  MatchTravInit();
  h_34 :
  OneMatchNextSon();
  Cpush(h_34);
  Rpush(s_34);
  goto c_34;
  s_34 :
  Cpop();
  MatchTravEnd();
  t_34 :
  Return();
  u_34 :
  NotNULLd(0,10);
  NotNULLd(0,16);
  Tset(App2("TCons",Egetd(0,10),App2("TCons",App2("Cons",Egetd(0,16),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_y_66);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  v_33 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,16);
  NotNULLd(0,2);
  NotNULLd(0,17);
  Tset(App2("TCons",App2("Cons",Egetd(0,16),App0("Nil")),App2("TCons",App2("Cons",App1("Var",Egetd(0,2)),App0("Nil")),App2("TCons",Egetd(0,17),App0("TNil")))));
  Ccall(_stratego_v_66);
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Scope",Egetd(1,1),Egetd(1,2)));
  Epopd(1,2);
  Return();
  i_31 :
  goto h_31;
  f_92 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  NotNULLd(0,14);
  Tset(App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,14),App0("TNil"))));
  MoveTop(2,1);
  goto b_86;
  b_86 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto c_86;
  c_86 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto d_86;
  d_86 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(j_35);
  goto h_92;
  j_35 :
  goto i_35;
  h_92 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(p_35);
  k_35 :
  Cpush(l_35);
  Epushd(4,1);
  MoveTop(4,1);
  Move(2,2,4,1);
  Epopd(4,1);
  Cpop();
  goto o_35;
  l_35 :
  IsAppl();
  MatchTravInit();
  m_35 :
  OneMatchNextSon();
  Cpush(m_35);
  Rpush(n_35);
  goto k_35;
  n_35 :
  Cpop();
  MatchTravEnd();
  o_35 :
  Return();
  p_35 :
  NotNULLd(0,14);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,14),App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_y_66);
  MoveTop(3,1);
  Move(1,1,3,1);
  Epopd(3,1);
  Return();
  i_35 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,5);
  NotNULLd(0,11);
  NotNULLd(0,8);
  Tset(App2("TCons",App2("Cons",Egetd(0,5),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,11),App0("Nil")),App2("TCons",Egetd(0,8),App0("TNil")))));
  Ccall(_stratego_v_66);
  MoveTop(1,2);
  NotNULLd(0,11);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Seq",App1("Build",Egetd(0,11)),App2("Scope",Egetd(1,1),Egetd(1,2))));
  Epopd(1,2);
  Return();
  h_31 :
  Epopd(0,17);
ENDPROC

PROC(_stratego_v_66)
  Epushd(0,5);
  Ccall(_stratego_w_66);
  MoveTop(0,1);
  goto x_93;
  x_93 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto y_93;
  y_93 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto z_93;
  z_93 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  Rpush(r_35);
  goto q_94;
  r_35 :
  goto q_35;
  q_94 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(s_35);
  r_94 :
  Cpush(u_35);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto w_93;
  w_93 :
  TestFunFC(r_2,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(w_35);
  goto t_94;
  w_35 :
  goto v_35;
  t_94 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Move(1,2,2,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  v_35 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_x_66);
  Epopd(1,3);
  goto t_35;
  u_35 :
  AllInit();
  y_35 :
  AllNextSon(&&z_35);
  Rpush(a_36);
  goto r_94;
  a_36 :
  goto y_35;
  z_35 :
  AllBuild();
  goto x_35;
  t_35 :
  Cpop();
  x_35 :
  Return();
  s_35 :
  Return();
  q_35 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_w_66)
  Epushd(0,7);
  MoveTop(0,1);
  goto n_95;
  n_95 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_95;
  o_95 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto p_95;
  p_95 :
  TestFunFC(d_0,&&f_36,Egetd(0,5));
  Rpush(e_36);
  goto b_97;
  f_36 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto q_95;
  q_95 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  Rpush(e_36);
  goto c_97;
  e_36 :
  goto d_36;
  c_97 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(k_36);
  d_97 :
  Epushd(2,9);
  MoveTop(2,1);
  goto e_95;
  e_95 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto f_95;
  f_95 :
  TestFunFC(j_3,&&q_36,Egetd(2,2));
  goto g_95;
  g_95 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto h_95;
  h_95 :
  TestFunFC(j_3,&&fail,Egetd(2,6));
  goto i_95;
  i_95 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(o_36);
  goto e_97;
  q_36 :
  TestFunFC(k_3,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto j_95;
  j_95 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto k_95;
  k_95 :
  TestFunFC(k_3,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto l_95;
  l_95 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(o_36);
  goto f_97;
  o_36 :
  goto m_36;
  f_97 :
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
  Rpush(s_36);
  goto d_97;
  s_36 :
  OneNextSon();
  Ccall(_stratego_l_65);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto b_95;
  b_95 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto c_95;
  c_95 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto d_95;
  d_95 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(z_36);
  goto g_97;
  z_36 :
  goto r_36;
  g_97 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  r_36 :
  Epopd(3,5);
  Return();
  m_36 :
  goto l_36;
  e_97 :
  Tset(App0("Nil"));
  Return();
  l_36 :
  Epopd(2,9);
  Return();
  k_36 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  d_36 :
  goto b_36;
  b_97 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  b_36 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_x_66)
  Rpush(a_37);
  g_98 :
  Epushd(0,11);
  MoveTop(0,5);
  goto k_97;
  k_97 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto l_97;
  l_97 :
  TestFunFC(a_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto m_97;
  m_97 :
  TestFunFC(k_3,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto n_97;
  n_97 :
  TestFunFC(d_0,&&fail,Egetd(0,11));
  goto o_97;
  o_97 :
  TestFunFC(a_0,&&e_37,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto p_97;
  p_97 :
  TestFunFC(a_0,&&f_37,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto q_97;
  q_97 :
  TestFunFC(d_0,&&g_37,Egetd(0,4));
  Cpush(m_37);
  Rpush(n_37);
  goto h_98;
  n_37 :
  goto h_37;
  m_37 :
  Rpush(s_37);
  goto i_98;
  s_37 :
  goto o_37;
  h_37 :
  Cpop();
  o_37 :
  goto d_37;
  g_37 :
  Rpush(d_37);
  goto i_98;
  f_37 :
  Rpush(d_37);
  goto i_98;
  e_37 :
  Rpush(d_37);
  goto i_98;
  d_37 :
  goto c_37;
  i_98 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(x_37);
  goto g_98;
  x_37 :
  Return();
  c_37 :
  goto b_37;
  h_98 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  b_37 :
  Epopd(0,11);
  Return();
  a_37 :
ENDPROC

PROC(_stratego_y_66)
  Epushd(0,5);
  MoveTop(0,5);
  goto z_98;
  z_98 :
  TestFunFC(a_0,&&b_38,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto a_99;
  a_99 :
  TestFunFC(a_0,&&c_38,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto b_99;
  b_99 :
  TestFunFC(d_0,&&d_38,Egetd(0,4));
  Cpush(f_38);
  Rpush(g_38);
  goto m_100;
  g_38 :
  goto e_38;
  f_38 :
  Rpush(i_38);
  goto r_100;
  i_38 :
  goto h_38;
  e_38 :
  Cpop();
  h_38 :
  goto a_38;
  d_38 :
  Rpush(a_38);
  goto r_100;
  c_38 :
  Rpush(a_38);
  goto r_100;
  b_38 :
  Rpush(a_38);
  goto r_100;
  a_38 :
  goto z_37;
  r_100 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(j_38);
  s_100 :
  Cpush(l_38);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(p_38);
  Epushd(1,7);
  MoveTop(1,1);
  goto q_98;
  q_98 :
  TestFunFC(k_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto r_98;
  r_98 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto s_98;
  s_98 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto t_98;
  t_98 :
  TestFunFC(d_0,&&fail,Egetd(1,6));
  Rpush(r_38);
  goto t_100;
  r_38 :
  goto q_38;
  t_100 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  q_38 :
  Epopd(1,7);
  goto o_38;
  p_38 :
  Ccall(_stratego_z_66);
  goto u_38;
  o_38 :
  Cpop();
  u_38 :
  OneNextSon();
  Ccall(_stratego_l_65);
  AllBuild();
  AllBuild();
  goto k_38;
  l_38 :
  Epushd(1,7);
  MoveTop(1,1);
  goto v_98;
  v_98 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_98;
  w_98 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto x_98;
  x_98 :
  TestFunFC(k_3,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto y_98;
  y_98 :
  TestFunFC(d_0,&&fail,Egetd(1,7));
  Rpush(y_38);
  goto u_100;
  y_38 :
  goto x_38;
  u_100 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  x_38 :
  Epopd(1,7);
  goto v_38;
  k_38 :
  Cpop();
  v_38 :
  Cpush(a_39);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_66);
  OneNextSon();
  Ccall(_stratego_l_65);
  AllBuild();
  AllBuild();
  goto z_38;
  a_39 :
  Rpush(e_39);
  goto s_100;
  e_39 :
  goto b_39;
  z_38 :
  Cpop();
  b_39 :
  Return();
  j_38 :
  Return();
  z_37 :
  goto y_37;
  m_100 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(g_39);
  n_100 :
  Cpush(i_39);
  Ccall(_stratego_b_66);
  goto h_39;
  i_39 :
  Ccontinue(j_39);
  Epushd(1,3);
  MoveTop(1,1);
  goto o_98;
  o_98 :
  TestFunFC(k_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(p_39);
  goto o_100;
  p_39 :
  goto k_39;
  o_100 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_39);
  p_100 :
  Cpush(e_40);
  Epushd(2,3);
  MoveTop(2,1);
  goto n_98;
  n_98 :
  TestFunFC(k_3,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(g_40);
  goto q_100;
  g_40 :
  goto f_40;
  q_100 :
  Move(1,2,2,2);
  Return();
  f_40 :
  Epopd(2,3);
  goto d_40;
  e_40 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_40);
  goto p_100;
  k_40 :
  AllBuild();
  goto h_40;
  d_40 :
  Cpop();
  h_40 :
  Return();
  q_39 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(l_40);
  goto n_100;
  l_40 :
  Return();
  k_39 :
  Epopd(1,3);
  goto h_39;
  j_39 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_40);
  goto n_100;
  n_40 :
  AllBuild();
  goto m_40;
  h_39 :
  Cpop();
  m_40 :
  Return();
  g_39 :
  Return();
  y_37 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_z_66)
  Epushd(0,7);
  MoveTop(0,1);
  goto x_101;
  x_101 :
  TestFunFC(k_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto y_101;
  y_101 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto z_101;
  z_101 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto a_102;
  a_102 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(s_40);
  goto b_104;
  s_40 :
  goto r_40;
  b_104 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto x_100;
  x_100 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto y_100;
  y_100 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto z_100;
  z_100 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(u_40);
  goto c_104;
  u_40 :
  goto t_40;
  c_104 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  t_40 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto b_101;
  b_101 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto c_101;
  c_101 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto d_101;
  d_101 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(w_40);
  goto d_104;
  w_40 :
  goto v_40;
  d_104 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  v_40 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(g_41);
  e_104 :
  Epushd(2,9);
  MoveTop(2,1);
  goto k_101;
  k_101 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto l_101;
  l_101 :
  TestFunFC(j_3,&&t_41,Egetd(2,2));
  goto m_101;
  m_101 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto n_101;
  n_101 :
  TestFunFC(j_3,&&fail,Egetd(2,6));
  goto o_101;
  o_101 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(k_41);
  goto f_104;
  t_41 :
  TestFunFC(k_3,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto p_101;
  p_101 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto q_101;
  q_101 :
  TestFunFC(k_3,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto r_101;
  r_101 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(k_41);
  goto g_104;
  k_41 :
  goto i_41;
  g_104 :
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
  Rpush(w_41);
  goto e_104;
  w_41 :
  OneNextSon();
  Ccall(_stratego_l_65);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto h_101;
  h_101 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto i_101;
  i_101 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto j_101;
  j_101 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(y_41);
  goto h_104;
  y_41 :
  goto u_41;
  h_104 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  u_41 :
  Epopd(3,5);
  Return();
  i_41 :
  goto h_41;
  f_104 :
  Tset(App0("Nil"));
  Return();
  h_41 :
  Epopd(2,9);
  Return();
  g_41 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto u_101;
  u_101 :
  TestFunFC(a_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto v_101;
  v_101 :
  TestFunFC(a_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto w_101;
  w_101 :
  TestFunFC(d_0,&&fail,Egetd(1,9));
  Rpush(f_42);
  goto j_104;
  f_42 :
  goto e_42;
  j_104 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(j_42);
  k_104 :
  Cpush(q_42);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_42);
  goto k_104;
  v_42 :
  AllBuild();
  goto k_42;
  q_42 :
  Ccall(_stratego_b_66);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto w_42;
  k_42 :
  Cpop();
  w_42 :
  Return();
  j_42 :
  Return();
  e_42 :
  Epopd(1,9);
  Return();
  r_40 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_a_67)
  Epushd(0,5);
  MoveTop(0,1);
  goto s_104;
  s_104 :
  TestFunFC(h_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto t_104;
  t_104 :
  TestFunFC(h_10,&&f_43,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto u_104;
  u_104 :
  TestFunFC(j_3,&&g_43,Egetd(0,2));
  Cpush(i_43);
  Rpush(j_43);
  goto o_105;
  j_43 :
  goto h_43;
  i_43 :
  Rpush(m_43);
  goto p_105;
  m_43 :
  goto k_43;
  h_43 :
  Cpop();
  k_43 :
  goto e_43;
  g_43 :
  Rpush(e_43);
  goto p_105;
  f_43 :
  goto v_104;
  v_104 :
  TestFunFC(j_3,&&fail,Egetd(0,2));
  Rpush(e_43);
  goto o_105;
  e_43 :
  goto d_43;
  p_105 :
  Epushd(1,5);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  MoveTop(1,1);
  goto p_104;
  p_104 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_104;
  q_104 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto r_104;
  r_104 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(o_43);
  goto q_105;
  o_43 :
  goto n_43;
  q_105 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(p_43);
  r_105 :
  Cpush(t_43);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_43);
  goto r_105;
  u_43 :
  AllBuild();
  goto s_43;
  t_43 :
  Ccall(_stratego_b_66);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  goto y_43;
  s_43 :
  Cpop();
  y_43 :
  Return();
  p_43 :
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(2,1),Egetd(0,5)));
  Epopd(2,1);
  Return();
  n_43 :
  Epopd(1,5);
  Return();
  d_43 :
  goto c_43;
  o_105 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  c_43 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_b_67)
  Rpush(c_44);
  e_110 :
  Cpush(e_44);
  Epushd(0,2);
  MoveTop(0,1);
  goto u_105;
  u_105 :
  TestFunFC(r_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(i_44);
  goto f_110;
  i_44 :
  goto h_44;
  f_110 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  h_44 :
  Epopd(0,2);
  goto d_44;
  e_44 :
  Ccontinue(j_44);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_c_67);
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
  Rpush(q_44);
  goto e_110;
  q_44 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_y_66);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto b_106;
  b_106 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_106;
  c_106 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto d_106;
  d_106 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(s_44);
  goto l_110;
  s_44 :
  goto r_44;
  l_110 :
  Move(0,3,1,4);
  Return();
  r_44 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(v_44);
  m_110 :
  Cpush(x_44);
  Ccall(_stratego_b_66);
  Tset(App0("Nil"));
  goto w_44;
  x_44 :
  Epushd(1,3);
  MoveTop(1,1);
  goto p_106;
  p_106 :
  TestFunFC(k_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(b_45);
  goto n_110;
  b_45 :
  goto a_45;
  n_110 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(c_45);
  goto m_110;
  c_45 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto m_106;
  m_106 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto n_106;
  n_106 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto o_106;
  o_106 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(j_45);
  goto q_110;
  j_45 :
  goto i_45;
  q_110 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(k_45);
  r_110 :
  Cpush(o_45);
  Ccall(_stratego_b_66);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto n_45;
  o_45 :
  Ccontinue(p_45);
  Epushd(3,3);
  MoveTop(3,1);
  goto l_106;
  l_106 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(x_45);
  goto s_110;
  x_45 :
  goto w_45;
  s_110 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(y_45);
  t_110 :
  Cpush(c_46);
  Epushd(4,3);
  MoveTop(4,1);
  goto k_106;
  k_106 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(h_46);
  goto u_110;
  h_46 :
  goto d_46;
  u_110 :
  Move(3,2,4,2);
  Return();
  d_46 :
  Epopd(4,3);
  goto b_46;
  c_46 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_46);
  goto t_110;
  j_46 :
  AllBuild();
  goto i_46;
  b_46 :
  Cpop();
  i_46 :
  Return();
  y_45 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(k_46);
  goto r_110;
  k_46 :
  Return();
  w_45 :
  Epopd(3,3);
  goto n_45;
  p_45 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_46);
  goto r_110;
  m_46 :
  AllBuild();
  goto l_46;
  n_45 :
  Cpop();
  l_46 :
  Return();
  k_45 :
  Return();
  i_45 :
  Epopd(2,6);
  Return();
  a_45 :
  Epopd(1,3);
  goto z_44;
  w_44 :
  Cpop();
  z_44 :
  Return();
  v_44 :
  Epopd(0,3);
  goto d_44;
  j_44 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto s_106;
  s_106 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto t_106;
  t_106 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto u_106;
  u_106 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(p_46);
  goto w_110;
  p_46 :
  goto o_46;
  w_110 :
  Move(0,2,1,4);
  Return();
  o_46 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(q_46);
  x_110 :
  Cpush(s_46);
  Ccall(_stratego_b_66);
  Tset(App0("Nil"));
  goto r_46;
  s_46 :
  Epushd(1,3);
  MoveTop(1,1);
  goto g_107;
  g_107 :
  TestFunFC(k_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(x_46);
  goto y_110;
  x_46 :
  goto w_46;
  y_110 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(y_46);
  goto e_110;
  y_46 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(z_46);
  goto x_110;
  z_46 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto d_107;
  d_107 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto e_107;
  e_107 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto f_107;
  f_107 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(b_47);
  goto b_111;
  b_47 :
  goto a_47;
  b_111 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(c_47);
  c_111 :
  Cpush(e_47);
  Ccall(_stratego_b_66);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto d_47;
  e_47 :
  Ccontinue(f_47);
  Epushd(3,3);
  MoveTop(3,1);
  goto c_107;
  c_107 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(h_47);
  goto d_111;
  h_47 :
  goto g_47;
  d_111 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(i_47);
  e_111 :
  Cpush(l_47);
  Epushd(4,3);
  MoveTop(4,1);
  goto b_107;
  b_107 :
  TestFunFC(k_3,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(n_47);
  goto f_111;
  n_47 :
  goto m_47;
  f_111 :
  Move(3,2,4,2);
  Return();
  m_47 :
  Epopd(4,3);
  goto j_47;
  l_47 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_47);
  goto e_111;
  r_47 :
  AllBuild();
  goto q_47;
  j_47 :
  Cpop();
  q_47 :
  Return();
  i_47 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(s_47);
  goto c_111;
  s_47 :
  Return();
  g_47 :
  Epopd(3,3);
  goto d_47;
  f_47 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_47);
  goto c_111;
  w_47 :
  AllBuild();
  goto t_47;
  d_47 :
  Cpop();
  t_47 :
  Return();
  c_47 :
  Return();
  a_47 :
  Epopd(2,7);
  Return();
  w_46 :
  Epopd(1,3);
  goto t_46;
  r_46 :
  Cpop();
  t_46 :
  Return();
  q_46 :
  Epopd(0,2);
  goto n_46;
  d_44 :
  Cpop();
  n_46 :
  Return();
  c_44 :
ENDPROC

PROC(_stratego_c_67)
  Epushd(0,6);
  MoveTop(0,2);
  goto i_111;
  i_111 :
  TestFunFC(h_10,&&d_48,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(c_48);
  goto v_111;
  d_48 :
  TestFunFC(e_48,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto j_111;
  j_111 :
  TestFunFC(f_48,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(c_48);
  goto w_111;
  c_48 :
  goto b_48;
  w_111 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_b_67);
  Return();
  b_48 :
  goto a_48;
  v_111 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  a_48 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_d_67)
  Ccall(_stratego_u_65);
  Ccall(_stratego_e_67);
  Ccall(_stratego_x_67);
ENDPROC

PROC(_stratego_e_67)
  Ccall(_stratego_f_67);
  Rpush(g_48);
  i_114 :
  Cpush(k_49);
  j_49 :
  Cpush(m_49);
  Ccall(_stratego_i_67);
  goto l_49;
  m_49 :
  Ccontinue(n_49);
  Epushd(0,3);
  MoveTop(0,1);
  goto s_112;
  s_112 :
  TestFunFC(e_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_49);
  goto k_114;
  p_49 :
  goto o_49;
  k_114 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(u_49);
  l_114 :
  Epushd(3,3);
  MoveTop(3,1);
  goto n_112;
  n_112 :
  TestFunFC(j_3,&&z_49,Egetd(3,1));
  Rpush(y_49);
  goto m_114;
  z_49 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(y_49);
  goto n_114;
  y_49 :
  goto x_49;
  n_114 :
  Epushd(4,13);
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(3,3),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto c_112;
  c_112 :
  TestFunFC(f_10,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(d_50);
  goto o_114;
  d_50 :
  goto c_50;
  o_114 :
  Epushd(6,1);
  Tdupl();
  Epushd(7,1);
  Ccall(_stratego_t_67);
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
  c_50 :
  Epopd(5,3);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(e_50);
  goto l_114;
  e_50 :
  OneNextSon();
  Ccall(_stratego_l_65);
  AllBuild();
  AllBuild();
  MoveTop(4,1);
  goto e_112;
  e_112 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,7,4,1,1);
  goto f_112;
  f_112 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto g_112;
  g_112 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto h_112;
  h_112 :
  TestFunFC(d_0,&&fail,Egetd(4,6));
  goto i_112;
  i_112 :
  TestFunFC(a_0,&&fail,Egetd(4,7));
  MoveArg(4,8,4,7,0);
  MoveArg(4,13,4,7,1);
  goto j_112;
  j_112 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto k_112;
  k_112 :
  TestFunFC(a_0,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,12,4,10,1);
  goto l_112;
  l_112 :
  TestFunFC(d_0,&&fail,Egetd(4,12));
  goto m_112;
  m_112 :
  TestFunFC(d_0,&&fail,Egetd(4,13));
  Rpush(f_50);
  goto q_114;
  f_50 :
  goto a_50;
  q_114 :
  NotNULLd(4,3);
  NotNULLd(4,9);
  NotNULLd(4,5);
  NotNULLd(4,11);
  Tset(App2("TCons",App2("Cons",Egetd(4,3),Egetd(4,9)),App2("TCons",App2("Cons",Egetd(4,5),Egetd(4,11)),App0("TNil"))));
  Return();
  a_50 :
  Epopd(4,13);
  Return();
  x_49 :
  goto w_49;
  m_114 :
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  w_49 :
  Epopd(3,3);
  Return();
  u_49 :
  MoveTop(2,1);
  goto p_112;
  p_112 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto q_112;
  q_112 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto r_112;
  r_112 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(g_50);
  goto r_114;
  g_50 :
  goto t_49;
  r_114 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  t_49 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("Scope",Egetd(0,2),App2("Lets",Egetd(1,1),App2("Seq",App1("Assign",App1("Var",App2("Cons",MakeInt(0),App0("Nil")))),App1("Matrix",Egetd(1,2))))));
  Epopd(1,2);
  Return();
  o_49 :
  Epopd(0,3);
  goto l_49;
  n_49 :
  Ccall(_stratego_j_66);
  goto h_50;
  l_49 :
  Cpop();
  h_50 :
  Tduplinv();
  goto j_49;
  k_49 :
  AllInit();
  i_50 :
  AllNextSon(&&j_50);
  Rpush(k_50);
  goto i_114;
  k_50 :
  goto i_50;
  j_50 :
  AllBuild();
  Return();
  g_48 :
  Ccall(_stratego_v_67);
ENDPROC

PROC(_stratego_f_67)
  Tdupl();
  Tset(ATmakeString("matrix"));
  Ccall(_stratego_g_67);
  Tpop();
ENDPROC

PROC(_stratego_g_67)
  _ST_create_table();
ENDPROC

PROC(_stratego_i_67)
  Epushd(0,2);
  MoveTop(0,1);
  goto a_116;
  a_116 :
  TestFunFC(v_50,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Cpush(x_50);
  Rpush(z_50);
  goto p_118;
  z_50 :
  goto w_50;
  x_50 :
  Ccontinue(a_51);
  Rpush(b_51);
  goto s_118;
  b_51 :
  goto w_50;
  a_51 :
  Ccontinue(c_51);
  Rpush(d_51);
  goto w_118;
  d_51 :
  goto w_50;
  c_51 :
  Ccontinue(e_51);
  Rpush(f_51);
  goto a_119;
  f_51 :
  goto w_50;
  e_51 :
  Rpush(h_51);
  goto f_119;
  h_51 :
  goto g_51;
  w_50 :
  Cpop();
  g_51 :
  goto u_50;
  u_50 :
  goto t_50;
  f_119 :
  Epushd(1,5);
  Tdupl();
  Epushd(2,11);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  MoveTop(2,1);
  goto v_115;
  v_115 :
  TestFunFC(k_3,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,11,2,1,1);
  goto w_115;
  w_115 :
  TestFunFC(m_51,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,9,2,2,1);
  MoveArg(2,10,2,2,2);
  goto x_115;
  x_115 :
  TestFunFC(k_3,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,8,2,3,1);
  goto y_115;
  y_115 :
  TestFunFC(f_2,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,7,2,4,1);
  goto z_115;
  z_115 :
  TestFunFC(g_2,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  Rpush(l_51);
  goto g_119;
  l_51 :
  goto k_51;
  g_119 :
  Epushd(3,9);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Move(1,1,2,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_l_67);
  MoveTop(3,1);
  Move(1,2,3,1);
  NotNULLd(0,2);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,2),App0("TNil"))));
  Ccall(_stratego_q_67);
  MoveTop(3,2);
  Move(1,3,3,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_s_67);
  MoveTop(3,3);
  Move(1,4,3,3);
  Ccall(_stratego_t_67);
  MoveTop(3,4);
  Move(1,5,3,4);
  NotNULLd(0,2);
  NotNULLd(1,5);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,5),App0("TNil"))));
  MoveTop(3,5);
  goto s_115;
  s_115 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto t_115;
  t_115 :
  TestFunFC(a_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto u_115;
  u_115 :
  TestFunFC(d_0,&&fail,Egetd(3,9));
  Rpush(o_51);
  goto m_119;
  o_51 :
  goto n_51;
  m_119 :
  NotNULLd(3,6);
  NotNULLd(3,8);
  Tset(App2("TCons",ATmakeString("matrix"),App2("TCons",Egetd(3,6),App2("TCons",Egetd(3,8),App0("TNil")))));
  Ccall(_stratego_u_67);
  Return();
  n_51 :
  Epopd(3,9);
  Return();
  k_51 :
  Epopd(2,11);
  Tpop();
  NotNULLd(1,5);
  NotNULLd(1,1);
  NotNULLd(1,3);
  NotNULLd(1,4);
  Tset(App4("Case",Egetd(1,5),App1("Var",Egetd(1,1)),Egetd(1,3),Egetd(1,4)));
  Epopd(1,5);
  Return();
  t_50 :
  goto s_50;
  a_119 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Cpush(p_51);
  Tdupl();
  Rpush(q_51);
  b_119 :
  Cpush(w_51);
  Ccall(_stratego_b_66);
  goto r_51;
  w_51 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  TestFunTop(m_51);
  TravInit();
  OneNextSon();
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  TestFunTop(f_2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Cpush(d_52);
  Tdupl();
  Ccall(_stratego_k_67);
  Cpop();
  Crestore();
  Cjump();
  d_52 :
  AllBuild();
  OneNextSon();
  AllBuild();
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(e_52);
  goto b_119;
  e_52 :
  AllBuild();
  goto c_52;
  r_51 :
  Cpop();
  c_52 :
  Return();
  q_51 :
  Cpop();
  Crestore();
  Cjump();
  p_51 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(f_52);
  c_119 :
  Cpush(i_52);
  Ccall(_stratego_b_66);
  goto h_52;
  i_52 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(3,6);
  MoveTop(3,1);
  goto i_115;
  i_115 :
  TestFunFC(m_51,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,6,3,1,2);
  goto j_115;
  j_115 :
  TestFunFC(k_3,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  Rpush(l_52);
  goto d_119;
  l_52 :
  goto k_52;
  d_119 :
  NotNULLd(3,4);
  NotNULLd(3,2);
  NotNULLd(3,5);
  NotNULLd(3,6);
  Tset(App3("Row",App2("Cons",Egetd(3,4),Egetd(3,2)),Egetd(3,5),Egetd(3,6)));
  Return();
  k_52 :
  Epopd(3,6);
  OneNextSon();
  Rpush(m_52);
  goto c_119;
  m_52 :
  AllBuild();
  goto j_52;
  h_52 :
  Cpop();
  j_52 :
  Return();
  f_52 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(App1("Matrix",Egetd(1,1)));
  Epopd(1,1);
  Return();
  s_50 :
  goto n_50;
  w_118 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(s_52);
  x_118 :
  Cpush(x_52);
  Ccall(_stratego_b_66);
  goto t_52;
  x_52 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  TestFunTop(m_51);
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
  Ccall(_stratego_k_67);
  AllBuild();
  OneNextSon();
  AllBuild();
  MoveTop(3,1);
  goto f_115;
  f_115 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(e_53);
  goto y_118;
  e_53 :
  goto c_53;
  y_118 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Return();
  c_53 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(k_53);
  goto x_118;
  k_53 :
  AllBuild();
  goto y_52;
  t_52 :
  Cpop();
  y_52 :
  Return();
  s_52 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(App1("Matrix",Egetd(1,1)));
  Epopd(1,1);
  Return();
  n_50 :
  goto m_50;
  s_118 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(l_53);
  t_118 :
  Cpush(o_53);
  Ccall(_stratego_b_66);
  goto n_53;
  o_53 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto a_115;
  a_115 :
  TestFunFC(m_51,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  goto b_115;
  b_115 :
  TestFunFC(j_3,&&fail,Egetd(3,2));
  goto c_115;
  c_115 :
  TestFunFC(j_3,&&fail,Egetd(3,3));
  Rpush(r_53);
  goto u_118;
  r_53 :
  goto q_53;
  u_118 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Return();
  q_53 :
  Epopd(3,4);
  OneNextSon();
  Rpush(s_53);
  goto t_118;
  s_53 :
  AllBuild();
  goto p_53;
  n_53 :
  Cpop();
  p_53 :
  Return();
  l_53 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(App1("LChoices",Egetd(1,1)));
  Epopd(1,1);
  Return();
  m_50 :
  goto l_50;
  p_118 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,2);
  Tset(App2("TCons",ATmakeString("matrix"),App2("TCons",Egetd(0,2),App0("TNil"))));
  Ccall(_stratego_j_67);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(App1("Continue",Egetd(1,1)));
  Epopd(1,1);
  Return();
  l_50 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_j_67)
  _ST_table_get();
ENDPROC

PROC(_stratego_k_67)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_119;
  o_119 :
  TestFunFC(x_19,&&fail,Egetd(0,1));
  Rpush(z_53);
  goto q_119;
  z_53 :
  goto y_53;
  q_119 :
  Return();
  y_53 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_67)
  Rpush(d_54);
  y_119 :
  Cpush(j_54);
  Ccall(_stratego_b_66);
  goto e_54;
  j_54 :
  Ccontinue(p_54);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_67);
  OneNextSon();
  Rpush(q_54);
  goto y_119;
  q_54 :
  AllBuild();
  goto e_54;
  p_54 :
  Epushd(0,3);
  MoveTop(0,1);
  goto s_119;
  s_119 :
  TestFunFC(k_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(u_54);
  goto z_119;
  u_54 :
  goto t_54;
  z_119 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(v_54);
  goto y_119;
  v_54 :
  Return();
  t_54 :
  Epopd(0,3);
  goto s_54;
  e_54 :
  Cpop();
  s_54 :
  Return();
  d_54 :
  Ccall(_stratego_p_67);
ENDPROC

PROC(_stratego_m_67)
  Epushd(0,10);
  MoveTop(0,2);
  goto f_120;
  f_120 :
  TestFunFC(m_51,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,9,0,2,1);
  MoveArg(0,10,0,2,2);
  goto g_120;
  g_120 :
  TestFunFC(k_3,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,8,0,3,1);
  goto h_120;
  h_120 :
  TestFunFC(f_2,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto i_120;
  i_120 :
  TestFunFC(j_2,&&i_55,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,1,0,6,1);
  Rpush(h_55);
  goto b_121;
  i_55 :
  TestFunFC(t_55,&&n_55,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  Rpush(h_55);
  goto e_121;
  n_55 :
  TestFunFC(u_55,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  Rpush(h_55);
  goto f_121;
  h_55 :
  goto d_55;
  f_121 :
  NotNULLd(0,7);
  Tset(App2("TCons",App1("Str",Egetd(0,7)),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  d_55 :
  goto c_55;
  e_121 :
  NotNULLd(0,7);
  Tset(App2("TCons",App1("Int",Egetd(0,7)),App2("TCons",App0("Nil"),App0("TNil"))));
  Return();
  c_55 :
  goto w_54;
  b_121 :
  Epushd(1,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_n_67);
  MoveTop(1,1);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_o_67);
  MoveTop(1,2);
  NotNULLd(0,7);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",App2("Fun",Egetd(0,7),Egetd(1,1)),App2("TCons",Egetd(1,2),App0("TNil"))));
  Epopd(1,2);
  Return();
  w_54 :
  Epopd(0,10);
ENDPROC

PROC(_stratego_n_67)
  Rpush(w_55);
  q_121 :
  Cpush(y_55);
  Ccall(_stratego_b_66);
  Tset(MakeInt(0));
  goto x_55;
  y_55 :
  Epushd(0,3);
  MoveTop(0,1);
  goto i_121;
  i_121 :
  TestFunFC(k_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(b_56);
  goto r_121;
  b_56 :
  goto a_56;
  r_121 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(c_56);
  goto q_121;
  c_56 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_q_65);
  Epopd(1,1);
  Return();
  a_56 :
  Epopd(0,3);
  goto z_55;
  x_55 :
  Cpop();
  z_55 :
  Return();
  w_55 :
ENDPROC

PROC(_stratego_o_67)
  Rpush(g_56);
  c_122 :
  Cpush(i_56);
  Ccall(_stratego_b_66);
  goto h_56;
  i_56 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(0,4);
  MoveTop(0,1);
  goto u_121;
  u_121 :
  TestFunFC(f_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto v_121;
  v_121 :
  TestFunFC(g_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(l_56);
  goto d_122;
  l_56 :
  goto k_56;
  d_122 :
  NotNULLd(0,3);
  Tset(App1("Var",Egetd(0,3)));
  Return();
  k_56 :
  Epopd(0,4);
  OneNextSon();
  Rpush(o_56);
  goto c_122;
  o_56 :
  AllBuild();
  goto j_56;
  h_56 :
  Cpop();
  j_56 :
  Return();
  g_56 :
ENDPROC

PROC(_stratego_p_67)
  Rpush(p_56);
  q_122 :
  Cpush(r_56);
  Ccall(_stratego_b_66);
  goto q_56;
  r_56 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_56);
  goto q_122;
  t_56 :
  AllBuild();
  goto s_56;
  q_56 :
  Cpop();
  s_56 :
  Rpush(u_56);
  r_122 :
  Cpush(w_56);
  Epushd(0,3);
  MoveTop(0,1);
  goto h_122;
  h_122 :
  TestFunFC(k_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(y_56);
  goto s_122;
  y_56 :
  goto x_56;
  s_122 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(z_56);
  t_122 :
  Cpush(b_57);
  Epushd(1,3);
  MoveTop(1,1);
  goto g_122;
  g_122 :
  TestFunFC(k_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(d_57);
  goto u_122;
  d_57 :
  goto c_57;
  u_122 :
  Move(0,2,1,2);
  Return();
  c_57 :
  Epopd(1,3);
  goto a_57;
  b_57 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_57);
  goto t_122;
  f_57 :
  AllBuild();
  goto e_57;
  a_57 :
  Cpop();
  e_57 :
  Return();
  z_56 :
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(g_57);
  goto r_122;
  g_57 :
  Return();
  x_56 :
  Epopd(0,3);
  goto v_56;
  w_56 :
  goto h_57;
  v_56 :
  Cpop();
  h_57 :
  Return();
  u_56 :
  Return();
  p_56 :
ENDPROC

PROC(_stratego_q_67)
  Rpush(j_57);
  h_128 :
  Epushd(0,7);
  MoveTop(0,1);
  goto t_124;
  t_124 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto u_124;
  u_124 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto v_124;
  v_124 :
  TestFunFC(j_3,&&p_57,Egetd(0,4));
  goto w_124;
  w_124 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  Rpush(o_57);
  goto i_128;
  p_57 :
  TestFunFC(k_3,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto x_124;
  x_124 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  Rpush(o_57);
  goto j_128;
  o_57 :
  goto n_57;
  j_128 :
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
  goto j_124;
  j_124 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto k_124;
  k_124 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,9,2,3,1);
  goto l_124;
  l_124 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto m_124;
  m_124 :
  TestFunFC(a_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto n_124;
  n_124 :
  TestFunFC(d_0,&&fail,Egetd(2,8));
  goto o_124;
  o_124 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(s_57);
  goto k_128;
  s_57 :
  goto r_57;
  k_128 :
  Epushd(3,1);
  Tdupl();
  Epushd(4,1);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(t_57);
  l_128 :
  Cpush(v_57);
  Ccall(_stratego_b_66);
  goto u_57;
  v_57 :
  Ccontinue(w_57);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(5,8);
  MoveTop(5,1);
  goto d_124;
  d_124 :
  TestFunFC(m_51,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,7,5,1,1);
  MoveArg(5,8,5,1,2);
  goto e_124;
  e_124 :
  TestFunFC(k_3,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,6,5,2,1);
  goto f_124;
  f_124 :
  TestFunFC(f_2,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  Rpush(y_57);
  goto m_128;
  y_57 :
  goto x_57;
  m_128 :
  Epushd(6,6);
  Tdupl();
  Epushd(7,4);
  NotNULLd(5,5);
  Tset(Egetd(5,5));
  MoveTop(7,3);
  goto w_123;
  w_123 :
  TestFunFC(j_2,&&f_58,Egetd(7,3));
  MoveArg(7,2,7,3,0);
  MoveArg(7,1,7,3,1);
  Rpush(e_58);
  goto n_128;
  f_58 :
  TestFunFC(u_55,&&g_58,Egetd(7,3));
  MoveArg(7,2,7,3,0);
  Rpush(e_58);
  goto q_128;
  g_58 :
  TestFunFC(i_58,&&h_58,Egetd(7,3));
  MoveArg(7,2,7,3,0);
  Rpush(e_58);
  goto t_128;
  h_58 :
  TestFunFC(t_55,&&j_58,Egetd(7,3));
  MoveArg(7,2,7,3,0);
  Rpush(e_58);
  goto w_128;
  j_58 :
  TestFunFC(x_19,&&fail,Egetd(7,3));
  Rpush(e_58);
  goto z_128;
  e_58 :
  goto d_58;
  z_128 :
  Epushd(8,1);
  Tdupl();
  Epushd(9,1);
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Rpush(k_58);
  a_129 :
  Cpush(m_58);
  Ccall(_stratego_b_66);
  goto l_58;
  m_58 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(10,2);
  MoveTop(10,1);
  goto u_123;
  u_123 :
  TestFunFC(r_2,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  Rpush(p_58);
  goto b_129;
  p_58 :
  goto o_58;
  b_129 :
  NotNULLd(10,2);
  Tset(App2("As",App1("Off",Egetd(10,2)),App0("Wld")));
  Return();
  o_58 :
  Epopd(10,2);
  OneNextSon();
  Rpush(u_58);
  goto a_129;
  u_58 :
  AllBuild();
  goto n_58;
  l_58 :
  Cpop();
  n_58 :
  Return();
  k_58 :
  MoveTop(9,1);
  Move(8,1,9,1);
  Epopd(9,1);
  Tpop();
  NotNULLd(8,1);
  Tset(Egetd(8,1));
  Epopd(8,1);
  Return();
  d_58 :
  goto c_58;
  w_128 :
  Tdupl();
  Epushd(8,2);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  MoveTop(8,1);
  goto s_123;
  s_123 :
  TestFunFC(t_55,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  Rpush(b_59);
  goto x_128;
  b_59 :
  goto a_59;
  x_128 :
  Epushd(9,1);
  Move(7,2,8,2);
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  MoveTop(9,1);
  goto r_123;
  r_123 :
  TestFunFC(j_3,&&fail,Egetd(9,1));
  Rpush(e_59);
  goto y_128;
  e_59 :
  goto d_59;
  y_128 :
  Return();
  d_59 :
  Epopd(9,1);
  Return();
  a_59 :
  Epopd(8,2);
  Tpop();
  Tset(App0("Nil"));
  Return();
  c_58 :
  goto b_58;
  t_128 :
  Tdupl();
  Epushd(8,2);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  MoveTop(8,1);
  goto o_123;
  o_123 :
  TestFunFC(i_58,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  Rpush(g_59);
  goto u_128;
  g_59 :
  goto f_59;
  u_128 :
  Epushd(9,1);
  Move(7,2,8,2);
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  MoveTop(9,1);
  goto n_123;
  n_123 :
  TestFunFC(j_3,&&fail,Egetd(9,1));
  Rpush(i_59);
  goto v_128;
  i_59 :
  goto h_59;
  v_128 :
  Return();
  h_59 :
  Epopd(9,1);
  Return();
  f_59 :
  Epopd(8,2);
  Tpop();
  Tset(App0("Nil"));
  Return();
  b_58 :
  goto a_58;
  q_128 :
  Tdupl();
  Epushd(8,2);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  MoveTop(8,1);
  goto k_123;
  k_123 :
  TestFunFC(u_55,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  Rpush(m_59);
  goto r_128;
  m_59 :
  goto l_59;
  r_128 :
  Epushd(9,1);
  Move(7,2,8,2);
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  MoveTop(9,1);
  goto j_123;
  j_123 :
  TestFunFC(j_3,&&fail,Egetd(9,1));
  Rpush(o_59);
  goto s_128;
  o_59 :
  goto n_59;
  s_128 :
  Return();
  n_59 :
  Epopd(9,1);
  Return();
  l_59 :
  Epopd(8,2);
  Tpop();
  Tset(App0("Nil"));
  Return();
  a_58 :
  goto z_57;
  n_128 :
  Epushd(8,1);
  Tdupl();
  Epushd(9,3);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  MoveTop(9,1);
  goto g_123;
  g_123 :
  TestFunFC(r_59,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(q_59);
  goto o_128;
  q_59 :
  goto p_59;
  o_128 :
  Epushd(10,1);
  Move(7,2,9,2);
  Move(8,1,9,3);
  NotNULLd(7,1);
  Tset(Egetd(7,1));
  Ccall(_stratego_n_67);
  MoveTop(10,1);
  NotNULLd(10,1);
  NotNULLd(8,1);
  Tset(App2("TCons",Egetd(10,1),App2("TCons",Egetd(8,1),App0("TNil"))));
  Ccall(_stratego_r_67);
  Epopd(10,1);
  Return();
  p_59 :
  Epopd(9,3);
  Tpop();
  NotNULLd(7,1);
  Tset(Egetd(7,1));
  Epopd(8,1);
  Return();
  z_57 :
  MoveTop(7,4);
  Move(6,1,7,4);
  Epopd(7,4);
  Tpop();
  NotNULLd(6,1);
  NotNULLd(5,7);
  Tset(App2("TCons",Egetd(6,1),App2("TCons",Egetd(5,7),App0("TNil"))));
  MoveTop(6,2);
  goto a_124;
  a_124 :
  TestFunFC(a_0,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto b_124;
  b_124 :
  TestFunFC(a_0,&&fail,Egetd(6,4));
  MoveArg(6,5,6,4,0);
  MoveArg(6,6,6,4,1);
  goto c_124;
  c_124 :
  TestFunFC(d_0,&&fail,Egetd(6,6));
  Rpush(t_59);
  goto e_129;
  t_59 :
  goto s_59;
  e_129 :
  Epushd(7,1);
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Rpush(u_59);
  f_129 :
  Cpush(z_59);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_60);
  goto f_129;
  d_60 :
  AllBuild();
  goto y_59;
  z_59 :
  Ccall(_stratego_b_66);
  NotNULLd(6,5);
  Tset(Egetd(6,5));
  goto e_60;
  y_59 :
  Cpop();
  e_60 :
  Return();
  u_59 :
  MoveTop(7,1);
  NotNULLd(5,6);
  NotNULLd(7,1);
  NotNULLd(5,8);
  Tset(App3("Row",Egetd(5,6),Egetd(7,1),Egetd(5,8)));
  Epopd(7,1);
  Return();
  s_59 :
  Epopd(6,6);
  Return();
  x_57 :
  Epopd(5,8);
  OneNextSon();
  Rpush(j_60);
  goto l_128;
  j_60 :
  AllBuild();
  goto u_57;
  w_57 :
  Epushd(5,3);
  MoveTop(5,1);
  goto h_124;
  h_124 :
  TestFunFC(k_3,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(n_60);
  goto h_129;
  n_60 :
  goto m_60;
  h_129 :
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Rpush(o_60);
  goto l_128;
  o_60 :
  Return();
  m_60 :
  Epopd(5,3);
  goto l_60;
  u_57 :
  Cpop();
  l_60 :
  Return();
  t_57 :
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
  r_57 :
  Epopd(2,9);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(p_60);
  goto h_128;
  p_60 :
  OneNextSon();
  Ccall(_stratego_l_65);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto q_124;
  q_124 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_124;
  r_124 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto s_124;
  s_124 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(u_60);
  goto j_129;
  u_60 :
  goto q_57;
  j_129 :
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("Cons",Egetd(1,2),Egetd(1,4)));
  Return();
  q_57 :
  Epopd(1,5);
  Return();
  n_57 :
  goto k_57;
  i_128 :
  Tset(App0("Nil"));
  Return();
  k_57 :
  Epopd(0,7);
  Return();
  j_57 :
ENDPROC

PROC(_stratego_r_67)
  Epushd(0,5);
  MoveTop(0,1);
  goto l_129;
  l_129 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto m_129;
  m_129 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto n_129;
  n_129 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  Rpush(w_60);
  goto u_129;
  w_60 :
  goto v_60;
  u_129 :
  Move(0,2,0,4);
  Return();
  v_60 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_s_67)
  Epushd(0,1);
  Rpush(x_60);
  v_130 :
  Cpush(a_61);
  Ccall(_stratego_b_66);
  goto z_60;
  a_61 :
  Ccontinue(b_61);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Epushd(1,8);
  MoveTop(1,1);
  goto w_129;
  w_129 :
  TestFunFC(m_51,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  MoveArg(1,8,1,1,2);
  goto x_129;
  x_129 :
  TestFunFC(k_3,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,6,1,2,1);
  goto y_129;
  y_129 :
  TestFunFC(f_2,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_129;
  z_129 :
  TestFunFC(x_19,&&fail,Egetd(1,5));
  Rpush(d_61);
  goto w_130;
  d_61 :
  goto c_61;
  w_130 :
  NotNULLd(1,6);
  NotNULLd(1,7);
  NotNULLd(1,8);
  Tset(App3("Row",Egetd(1,6),Egetd(1,7),Egetd(1,8)));
  Return();
  c_61 :
  Epopd(1,8);
  OneNextSon();
  Rpush(e_61);
  goto v_130;
  e_61 :
  AllBuild();
  goto z_60;
  b_61 :
  Epushd(1,3);
  MoveTop(1,1);
  goto b_130;
  b_130 :
  TestFunFC(k_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(t_61);
  goto x_130;
  t_61 :
  goto q_61;
  x_130 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(v_61);
  goto v_130;
  v_61 :
  Return();
  q_61 :
  Epopd(1,3);
  goto j_61;
  z_60 :
  Cpop();
  j_61 :
  Return();
  x_60 :
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Matrix",Egetd(0,1)));
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_67)
  _ST_new();
ENDPROC

PROC(_stratego_u_67)
  _ST_table_put();
ENDPROC

PROC(_stratego_v_67)
  Tdupl();
  Tset(ATmakeString("matrix"));
  Ccall(_stratego_w_67);
  Tpop();
ENDPROC

PROC(_stratego_w_67)
  _ST_destroy_table();
ENDPROC

PROC(_stratego_x_67)
  Ccall(_stratego_y_67);
  Ccall(_stratego_z_67);
ENDPROC

PROC(_stratego_y_67)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(w_61);
  g_135 :
  Rpush(x_61);
  h_135 :
  Epushd(1,5);
  MoveTop(1,1);
  goto k_132;
  k_132 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_132;
  l_132 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto m_132;
  m_132 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Cpush(d_62);
  Rpush(e_62);
  goto i_135;
  e_62 :
  goto c_62;
  d_62 :
  Ccontinue(f_62);
  Rpush(g_62);
  goto m_135;
  g_62 :
  goto c_62;
  f_62 :
  Rpush(p_62);
  goto b_136;
  p_62 :
  goto m_62;
  c_62 :
  Cpop();
  m_62 :
  goto b_62;
  b_62 :
  goto a_62;
  b_136 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  v_62 :
  AllNextSon(&&x_62);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(y_62);
  goto h_135;
  y_62 :
  Epopd(2,1);
  goto v_62;
  x_62 :
  AllBuild();
  Return();
  a_62 :
  goto z_61;
  m_135 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_c_67);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(z_62);
  o_135 :
  Cpush(b_63);
  Ccall(_stratego_b_66);
  goto a_63;
  b_63 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_67);
  OneNextSon();
  Rpush(d_63);
  goto o_135;
  d_63 :
  AllBuild();
  goto c_63;
  a_63 :
  Cpop();
  c_63 :
  Return();
  z_62 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(e_63);
  q_135 :
  Epushd(4,9);
  MoveTop(4,1);
  goto o_131;
  o_131 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto p_131;
  p_131 :
  TestFunFC(j_3,&&i_63,Egetd(4,2));
  goto q_131;
  q_131 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto r_131;
  r_131 :
  TestFunFC(j_3,&&fail,Egetd(4,6));
  goto s_131;
  s_131 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(h_63);
  goto r_135;
  i_63 :
  TestFunFC(k_3,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto t_131;
  t_131 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto u_131;
  u_131 :
  TestFunFC(k_3,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto v_131;
  v_131 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(h_63);
  goto s_135;
  h_63 :
  goto g_63;
  s_135 :
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
  Rpush(s_63);
  goto q_135;
  s_63 :
  OneNextSon();
  Ccall(_stratego_l_65);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto l_131;
  l_131 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto m_131;
  m_131 :
  TestFunFC(a_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto n_131;
  n_131 :
  TestFunFC(d_0,&&fail,Egetd(5,5));
  Rpush(v_63);
  goto t_135;
  v_63 :
  goto l_63;
  t_135 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  l_63 :
  Epopd(5,5);
  Return();
  g_63 :
  goto f_63;
  r_135 :
  Tset(App0("Nil"));
  Return();
  f_63 :
  Epopd(4,9);
  Return();
  e_63 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto z_131;
  z_131 :
  TestFunFC(a_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto a_132;
  a_132 :
  TestFunFC(a_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto b_132;
  b_132 :
  TestFunFC(d_0,&&fail,Egetd(3,8));
  Rpush(x_63);
  goto v_135;
  x_63 :
  goto w_63;
  v_135 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(y_63);
  w_135 :
  Cpush(a_64);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_64);
  goto w_135;
  b_64 :
  AllBuild();
  goto z_63;
  a_64 :
  Ccall(_stratego_b_66);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto c_64;
  z_63 :
  Cpop();
  c_64 :
  Return();
  y_63 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  w_63 :
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
  goto f_132;
  f_132 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto g_132;
  g_132 :
  TestFunFC(a_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto h_132;
  h_132 :
  TestFunFC(a_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto i_132;
  i_132 :
  TestFunFC(d_0,&&fail,Egetd(2,11));
  Rpush(e_64);
  goto z_135;
  e_64 :
  goto d_64;
  z_135 :
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
  Rpush(f_64);
  goto g_135;
  f_64 :
  Epopd(3,1);
  AllBuild();
  Return();
  d_64 :
  Epopd(2,11);
  Return();
  z_61 :
  goto y_61;
  i_135 :
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
  Ccall(_stratego_x_66);
  Epopd(2,1);
  AllBuild();
  Return();
  y_61 :
  Epopd(1,5);
  Return();
  x_61 :
  Return();
  w_61 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_67)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(g_64);
  c_142 :
  Rpush(h_64);
  d_142 :
  Epushd(1,5);
  MoveTop(1,1);
  goto a_138;
  a_138 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_138;
  b_138 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto c_138;
  c_138 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Cpush(a_65);
  Rpush(b_65);
  goto e_142;
  b_65 :
  goto z_64;
  a_65 :
  Ccontinue(c_65);
  Rpush(e_65);
  goto i_142;
  e_65 :
  goto z_64;
  c_65 :
  Rpush(g_65);
  goto f_143;
  g_65 :
  goto f_65;
  z_64 :
  Cpop();
  f_65 :
  goto y_64;
  y_64 :
  goto x_64;
  f_143 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  h_65 :
  AllNextSon(&&h_67);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(k_68);
  goto d_142;
  k_68 :
  Epopd(2,1);
  goto h_65;
  h_67 :
  AllBuild();
  Return();
  x_64 :
  goto r_64;
  i_142 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,15);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,5);
  goto n_136;
  n_136 :
  TestFunFC(g_28,&&p_68,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto o_136;
  o_136 :
  TestFunFC(b_25,&&fail,Egetd(3,6));
  MoveArg(3,1,3,6,0);
  MoveArg(3,2,3,6,1);
  MoveArg(3,3,3,6,2);
  Rpush(o_68);
  goto j_142;
  p_68 :
  TestFunFC(b_25,&&q_68,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  MoveArg(3,4,3,5,2);
  Rpush(o_68);
  goto k_142;
  q_68 :
  TestFunFC(s_19,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(o_68);
  goto l_142;
  o_68 :
  goto n_68;
  l_142 :
  NotNULLd(3,6);
  Tset(App2("Cons",Egetd(3,6),App0("Nil")));
  Return();
  n_68 :
  goto m_68;
  k_142 :
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  Return();
  m_68 :
  goto l_68;
  j_142 :
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Return();
  l_68 :
  MoveTop(3,8);
  Move(2,1,3,8);
  Rpush(r_68);
  n_142 :
  Cpush(t_68);
  Ccall(_stratego_b_66);
  goto s_68;
  t_68 :
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_67);
  OneNextSon();
  Rpush(k_69);
  goto n_142;
  k_69 :
  AllBuild();
  goto u_68;
  s_68 :
  Cpop();
  u_68 :
  Return();
  r_68 :
  MoveTop(3,9);
  Move(2,2,3,9);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(l_69);
  p_142 :
  Epushd(4,9);
  MoveTop(4,1);
  goto x_136;
  x_136 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto y_136;
  y_136 :
  TestFunFC(j_3,&&z_69,Egetd(4,2));
  goto z_136;
  z_136 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto a_137;
  a_137 :
  TestFunFC(j_3,&&fail,Egetd(4,6));
  goto b_137;
  b_137 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(o_69);
  goto q_142;
  z_69 :
  TestFunFC(k_3,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto c_137;
  c_137 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto d_137;
  d_137 :
  TestFunFC(k_3,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto e_137;
  e_137 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(o_69);
  goto r_142;
  o_69 :
  goto n_69;
  r_142 :
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
  Rpush(b_70);
  goto p_142;
  b_70 :
  OneNextSon();
  Ccall(_stratego_l_65);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto u_136;
  u_136 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto v_136;
  v_136 :
  TestFunFC(a_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto w_136;
  w_136 :
  TestFunFC(d_0,&&fail,Egetd(5,5));
  Rpush(c_70);
  goto s_142;
  c_70 :
  goto a_70;
  s_142 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  a_70 :
  Epopd(5,5);
  Return();
  n_69 :
  goto m_69;
  q_142 :
  Tset(App0("Nil"));
  Return();
  m_69 :
  Epopd(4,9);
  Return();
  l_69 :
  MoveTop(3,10);
  NotNULLd(3,10);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,10),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,11);
  goto i_137;
  i_137 :
  TestFunFC(a_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto j_137;
  j_137 :
  TestFunFC(a_0,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto k_137;
  k_137 :
  TestFunFC(d_0,&&fail,Egetd(3,15));
  Rpush(e_70);
  goto u_142;
  e_70 :
  goto d_70;
  u_142 :
  Epushd(4,1);
  NotNULLd(3,12);
  Tset(Egetd(3,12));
  Rpush(f_70);
  v_142 :
  Cpush(h_70);
  TestFunTop(k_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_70);
  goto v_142;
  i_70 :
  AllBuild();
  goto g_70;
  h_70 :
  Ccall(_stratego_b_66);
  NotNULLd(3,14);
  Tset(Egetd(3,14));
  goto j_70;
  g_70 :
  Cpop();
  j_70 :
  Return();
  f_70 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  d_70 :
  Epopd(3,15);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(l_70);
  TestFunTop(g_28);
  TravInit();
  OneNextSon();
  TestFunTop(b_25);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto m_137;
  m_137 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(n_70);
  goto x_142;
  n_70 :
  goto m_70;
  x_142 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  m_70 :
  Epopd(3,3);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  goto k_70;
  l_70 :
  Ccontinue(o_70);
  TestFunTop(b_25);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto k_70;
  o_70 :
  TestFunTop(s_19);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto o_137;
  o_137 :
  TestFunFC(k_3,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(m_71);
  goto y_142;
  m_71 :
  goto l_71;
  y_142 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  l_71 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  goto r_70;
  k_70 :
  Cpop();
  r_70 :
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto v_137;
  v_137 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto w_137;
  w_137 :
  TestFunFC(a_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto x_137;
  x_137 :
  TestFunFC(a_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto y_137;
  y_137 :
  TestFunFC(d_0,&&fail,Egetd(2,11));
  Rpush(o_71);
  goto a_143;
  o_71 :
  goto n_71;
  a_143 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Cpush(q_71);
  TestFunTop(g_28);
  TravInit();
  OneNextSon();
  TestFunTop(b_25);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,8),App0("TNil"))));
  Rpush(u_71);
  goto c_142;
  u_71 :
  Epopd(3,1);
  AllBuild();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(v_71);
  goto c_142;
  v_71 :
  Epopd(3,1);
  AllBuild();
  goto p_71;
  q_71 :
  Ccontinue(w_71);
  TestFunTop(b_25);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(x_71);
  goto c_142;
  x_71 :
  Epopd(3,1);
  AllBuild();
  goto p_71;
  w_71 :
  TestFunTop(s_19);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(p_72);
  goto c_142;
  p_72 :
  Epopd(3,1);
  AllBuild();
  goto o_72;
  p_71 :
  Cpop();
  o_72 :
  Return();
  n_71 :
  Epopd(2,11);
  Return();
  r_64 :
  goto o_64;
  e_142 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(u_29);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_x_66);
  Epopd(2,1);
  AllBuild();
  Return();
  o_64 :
  Epopd(1,5);
  Return();
  h_64 :
  Return();
  g_64 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_a_68)
  Rpush(q_72);
  h_143 :
  Cpush(b_73);
  a_73 :
  Ccall(_stratego_t_66);
  Tduplinv();
  goto a_73;
  b_73 :
  AllInit();
  c_73 :
  AllNextSon(&&d_73);
  Rpush(e_73);
  goto h_143;
  e_73 :
  goto c_73;
  d_73 :
  AllBuild();
  Cpush(g_73);
  f_73 :
  Ccall(_stratego_t_66);
  Tduplinv();
  goto f_73;
  g_73 :
  Return();
  q_72 :
ENDPROC

PROC(_stratego_b_68)
  Rpush(h_73);
  n_144 :
  Cpush(m_73);
  i_73 :
  Cpush(o_73);
  Ccall(_stratego_t_66);
  goto n_73;
  o_73 :
  Ccall(_stratego_c_68);
  goto p_73;
  n_73 :
  Cpop();
  p_73 :
  Tduplinv();
  goto i_73;
  m_73 :
  AllInit();
  q_73 :
  AllNextSon(&&r_73);
  Rpush(i_74);
  goto n_144;
  i_74 :
  goto q_73;
  r_73 :
  AllBuild();
  Cpush(k_74);
  j_74 :
  Cpush(m_74);
  Ccall(_stratego_t_66);
  goto l_74;
  m_74 :
  Ccall(_stratego_c_68);
  goto n_74;
  l_74 :
  Cpop();
  n_74 :
  Tduplinv();
  goto j_74;
  k_74 :
  Return();
  h_73 :
  Rpush(o_74);
  q_144 :
  Cpush(w_74);
  Epushd(0,3);
  MoveTop(0,1);
  goto t_143;
  t_143 :
  TestFunFC(h_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(y_74);
  goto r_144;
  y_74 :
  goto x_74;
  r_144 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_b_67);
  MoveTop(2,1);
  NotNULLd(0,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto q_143;
  q_143 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto r_143;
  r_143 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto s_143;
  s_143 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(a_75);
  goto t_144;
  a_75 :
  goto z_74;
  t_144 :
  Epushd(3,2);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App0("TNil"))));
  Ccall(_stratego_y_66);
  MoveTop(3,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_y_66);
  MoveTop(3,2);
  Move(1,1,3,2);
  Cpush(b_75);
  Tdupl();
  Epushd(4,1);
  MoveTop(4,1);
  Move(0,2,4,1);
  Epopd(4,1);
  Cpop();
  Crestore();
  Cjump();
  b_75 :
  Epopd(3,2);
  Return();
  z_74 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,3);
  Tset(App2("Scope",Egetd(1,1),Egetd(0,3)));
  Cpush(d_75);
  Ccall(_stratego_a_67);
  goto c_75;
  d_75 :
  goto e_75;
  c_75 :
  Cpop();
  e_75 :
  Epopd(1,1);
  Return();
  x_74 :
  Epopd(0,3);
  goto p_74;
  w_74 :
  goto f_75;
  p_74 :
  Cpop();
  f_75 :
  AllInit();
  g_75 :
  AllNextSon(&&h_75);
  Rpush(t_75);
  goto q_144;
  t_75 :
  goto g_75;
  h_75 :
  AllBuild();
  Return();
  o_74 :
ENDPROC

PROC(_stratego_c_68)
  Epushd(0,7);
  MoveTop(0,3);
  goto z_144;
  z_144 :
  TestFunFC(d_10,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto a_145;
  a_145 :
  TestFunFC(h_10,&&x_75,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto b_145;
  b_145 :
  TestFunFC(h_10,&&y_75,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Cpush(a_76);
  Rpush(b_76);
  goto q_145;
  b_76 :
  goto z_75;
  a_76 :
  Rpush(d_76);
  goto r_145;
  d_76 :
  goto c_76;
  z_75 :
  Cpop();
  c_76 :
  goto w_75;
  y_75 :
  Rpush(w_75);
  goto r_145;
  x_75 :
  goto c_145;
  c_145 :
  TestFunFC(h_10,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(w_75);
  goto q_145;
  w_75 :
  goto v_75;
  r_145 :
  NotNULLd(0,6);
  NotNULLd(0,4);
  NotNULLd(0,7);
  Tset(App2("Scope",Egetd(0,6),App2("Seq",Egetd(0,4),Egetd(0,7))));
  Return();
  v_75 :
  goto u_75;
  q_145 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(0,1),App2("Seq",Egetd(0,2),Egetd(0,5))));
  Return();
  u_75 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_d_68)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test4"));
  Ccall(_stratego_s_65);
  Tpop();
  Cpush(f_76);
  Tdupl();
  Epushd(1,1);
  Cpush(h_76);
  Epushd(2,1);
  Tset(ATmakeString("data/choices2.trm"));
  Ccall(_stratego_p_66);
  Ccall(_stratego_r_66);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto g_76;
  h_76 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_65);
  Ccall(_stratego_t_65);
  goto i_76;
  g_76 :
  Cpop();
  i_76 :
  Tset(ATmakeString("data/choices2-dfa.trm"));
  Ccall(_stratego_p_66);
  MoveTop(1,1);
  Move(0,2,1,1);
  Cpush(k_76);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto j_76;
  k_76 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_65);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_65);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_t_65);
  goto l_76;
  j_76 :
  Cpop();
  l_76 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_p_65);
  goto e_76;
  f_76 :
  Ccall(_stratego_r_65);
  goto y_76;
  e_76 :
  Cpop();
  y_76 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_e_68)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test5"));
  Ccall(_stratego_s_65);
  Tpop();
  Cpush(a_77);
  Tdupl();
  Epushd(1,1);
  Cpush(c_77);
  Epushd(2,1);
  Tset(ATmakeString("data/choices3.trm"));
  Ccall(_stratego_p_66);
  Ccall(_stratego_r_66);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto b_77;
  c_77 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_65);
  Ccall(_stratego_t_65);
  goto d_77;
  b_77 :
  Cpop();
  d_77 :
  Tset(ATmakeString("data/choices3-dfa.trm"));
  Ccall(_stratego_p_66);
  MoveTop(1,1);
  Move(0,2,1,1);
  Cpush(f_77);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto e_77;
  f_77 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_65);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_65);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_t_65);
  goto g_77;
  e_77 :
  Cpop();
  g_77 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_p_65);
  goto z_76;
  a_77 :
  Ccall(_stratego_r_65);
  goto h_77;
  z_76 :
  Cpop();
  h_77 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_f_68)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test6"));
  Ccall(_stratego_s_65);
  Tpop();
  Cpush(j_77);
  Tdupl();
  Epushd(1,1);
  Cpush(l_77);
  Epushd(2,1);
  Tset(ATmakeString("data/choices4.trm"));
  Ccall(_stratego_p_66);
  Ccall(_stratego_r_66);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto k_77;
  l_77 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_65);
  Ccall(_stratego_t_65);
  goto m_77;
  k_77 :
  Cpop();
  m_77 :
  Tset(ATmakeString("data/choices4-dfa.trm"));
  Ccall(_stratego_p_66);
  MoveTop(1,1);
  Move(0,2,1,1);
  Cpush(s_77);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto n_77;
  s_77 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_65);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_65);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_t_65);
  goto u_77;
  n_77 :
  Cpop();
  u_77 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_p_65);
  goto i_77;
  j_77 :
  Ccall(_stratego_r_65);
  goto v_77;
  i_77 :
  Cpop();
  v_77 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_g_68)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test7"));
  Ccall(_stratego_s_65);
  Tpop();
  Cpush(x_77);
  Tdupl();
  Epushd(1,1);
  Cpush(z_77);
  Epushd(2,1);
  Tset(ATmakeString("data/choices5.trm"));
  Ccall(_stratego_p_66);
  Ccall(_stratego_r_66);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto y_77;
  z_77 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_65);
  Ccall(_stratego_t_65);
  goto a_78;
  y_77 :
  Cpop();
  a_78 :
  Tset(ATmakeString("data/choices5-dfa.trm"));
  Ccall(_stratego_p_66);
  MoveTop(1,1);
  Move(0,2,1,1);
  Cpush(c_78);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto b_78;
  c_78 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_65);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_65);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_t_65);
  goto d_78;
  b_78 :
  Cpop();
  d_78 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_p_65);
  goto w_77;
  x_77 :
  Ccall(_stratego_r_65);
  goto f_78;
  w_77 :
  Cpop();
  f_78 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_h_68)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test7a"));
  Ccall(_stratego_s_65);
  Tpop();
  Cpush(h_78);
  Tdupl();
  Epushd(1,1);
  Cpush(j_78);
  Epushd(2,1);
  Tset(ATmakeString("data/choices5.trm"));
  Ccall(_stratego_p_66);
  Ccall(_stratego_u_65);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto i_78;
  j_78 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_s_65);
  Ccall(_stratego_t_65);
  goto k_78;
  i_78 :
  Cpop();
  k_78 :
  Tset(ATmakeString("data/choices5-dfa.trm"));
  Ccall(_stratego_p_66);
  MoveTop(1,1);
  Move(0,2,1,1);
  Cpush(m_78);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto l_78;
  m_78 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_65);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_i_65);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_t_65);
  goto n_78;
  l_78 :
  Cpop();
  n_78 :
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_p_65);
  goto g_78;
  h_78 :
  Ccall(_stratego_r_65);
  goto o_78;
  g_78 :
  Cpop();
  o_78 :
  Epopd(0,2);
ENDPROC
