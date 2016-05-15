#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,v_82);
VARDECL(AFun,z_78);
VARDECL(AFun,m_78);
VARDECL(AFun,j_78);
VARDECL(AFun,e_73);
VARDECL(AFun,b_73);
VARDECL(AFun,a_73);
VARDECL(AFun,t_67);
VARDECL(AFun,u_59);
VARDECL(AFun,s_59);
VARDECL(AFun,b_59);
VARDECL(AFun,s_58);
VARDECL(AFun,m_56);
VARDECL(AFun,k_56);
VARDECL(AFun,i_56);
VARDECL(AFun,e_56);
VARDECL(AFun,b_56);
VARDECL(AFun,l_55);
VARDECL(AFun,z_54);
VARDECL(AFun,f_48);
VARDECL(AFun,c_47);
VARDECL(AFun,u_34);
VARDECL(AFun,f_34);
VARDECL(AFun,b_33);
VARDECL(AFun,g_32);
VARDECL(AFun,f_32);
VARDECL(AFun,y_31);
VARDECL(AFun,q_24);
VARDECL(AFun,e_24);
VARDECL(AFun,u_23);
VARDECL(AFun,r_23);
VARDECL(AFun,p_23);
VARDECL(AFun,n_23);
VARDECL(AFun,j_23);
VARDECL(AFun,e_23);
VARDECL(AFun,k_22);
VARDECL(AFun,k_20);
VARDECL(AFun,e_19);
VARDECL(AFun,x_18);
VARDECL(AFun,w_18);
VARDECL(AFun,u_18);
VARDECL(AFun,u_16);
VARDECL(AFun,p_16);
VARDECL(AFun,h_14);
VARDECL(AFun,r_13);
VARDECL(AFun,m_13);
VARDECL(AFun,a_5);
VARDECL(AFun,z_4);
VARDECL(AFun,u_4);
VARDECL(AFun,q_4);
VARDECL(AFun,r_2);
VARDECL(AFun,m_1);
VARDECL(AFun,f_1);
VARDECL(AFun,a_1);
VARDECL(AFun,y_0);
VARDECL(AFun,x_0);
VARDECL(AFun,h_0);
VARDECL(AFun,g_0);
PROCDECL(_stratego_d_37);
PROCDECL(_stratego_e_37);
PROCDECL(_stratego_f_37);
PROCDECL(_stratego_g_37);
PROCDECL(_stratego_h_37);
PROCDECL(_stratego_i_37);
PROCDECL(_stratego_j_37);
PROCDECL(_stratego_k_37);
PROCDECL(_stratego_l_37);
PROCDECL(_stratego_m_37);
PROCDECL(_stratego_n_37);
PROCDECL(_stratego_o_37);
PROCDECL(_stratego_p_37);
PROCDECL(_stratego_q_37);
PROCDECL(_stratego_r_37);
PROCDECL(_stratego_s_37);
PROCDECL(_stratego_t_37);
PROCDECL(_stratego_u_37);
PROCDECL(_stratego_v_37);
PROCDECL(_stratego_w_37);
PROCDECL(_stratego_x_37);
PROCDECL(_stratego_y_37);
PROCDECL(_stratego_z_37);
PROCDECL(_stratego_b_38);
PROCDECL(_stratego_c_38);
PROCDECL(_stratego_d_38);
PROCDECL(_stratego_g_38);
PROCDECL(_stratego_h_38);
PROCDECL(_stratego_i_38);
PROCDECL(_stratego_j_38);
PROCDECL(_stratego_k_38);
PROCDECL(_stratego_l_38);
PROCDECL(_stratego_m_38);
PROCDECL(_stratego_n_38);
PROCDECL(_stratego_w_38);
PROCDECL(_stratego_x_38);
PROCDECL(_stratego_y_38);
PROCDECL(_stratego_z_38);
PROCDECL(_stratego_a_39);
PROCDECL(_stratego_b_39);
PROCDECL(_stratego_c_39);
PROCDECL(_stratego_d_39);
PROCDECL(_stratego_e_39);
PROCDECL(_stratego_f_39);
PROCDECL(_stratego_g_39);
PROCDECL(_stratego_h_39);
PROCDECL(_stratego_i_39);
PROCDECL(_stratego_j_39);
PROCDECL(_stratego_k_39);
PROCDECL(_stratego_l_39);
PROCDECL(_stratego_m_39);
PROCDECL(_stratego_n_39);
PROCDECL(_stratego_o_39);
PROCDECL(_stratego_p_39);
PROCDECL(_stratego_s_39);
PROCDECL(_stratego_t_39);
PROCDECL(_stratego_u_39);
PROCDECL(_stratego_v_39);
PROCDECL(_stratego_w_39);
PROCDECL(_stratego_x_39);
PROCDECL(_stratego_y_39);
PROCDECL(_stratego_z_39);
PROCDECL(_stratego_a_40);
PROCDECL(_stratego_b_40);
PROCDECL(_stratego_c_40);
PROCDECL(_stratego_d_40);
PROCDECL(_stratego_e_40);
PROCDECL(_stratego_f_40);
PROCDECL(_stratego_g_40);
PROCDECL(_stratego_h_40);
PROCDECL(_stratego_i_40);
PROCDECL(_stratego_l_40);
PROCDECL(_stratego_m_40);
PROCDECL(_stratego_a_41);
PROCDECL(_stratego_b_41);
PROCDECL(_stratego_c_41);
PROCDECL(_stratego_d_41);
PROCDECL(_stratego_e_41);
PROCDECL(_stratego_g_41);
PROCDECL(_stratego_h_41);
PROCDECL(_stratego_m_41);
PROCDECL(_stratego_n_41);
PROCDECL(_stratego_s_41);
PROCDECL(_stratego_t_41);
PROCDECL(_stratego_u_41);
PROCDECL(_stratego_v_41);
PROCDECL(_stratego_w_41);
PROCDECL(_stratego_x_41);
PROCDECL(_stratego_y_41);
PROCDECL(_stratego_b_42);
PROCDECL(_stratego_c_42);
PROCDECL(_stratego_d_42);
PROCDECL(_stratego_e_42);
PROCDECL(_stratego_f_42);
PROCDECL(_stratego_g_42);
PROCDECL(_stratego_h_42);
PROCDECL(_stratego_i_42);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(v_82,ATmakeAFun("DeclVersion",1,0));
  MOVE(z_78,ATmakeAFun("RDef",3,0));
  MOVE(m_78,ATmakeAFun("Rules",1,0));
  MOVE(j_78,ATmakeAFun("Strategies",1,0));
  MOVE(e_73,ATmakeAFun("StrategoDump",2,0));
  MOVE(b_73,ATmakeAFun("Load",1,0));
  MOVE(a_73,ATmakeAFun("Dump",1,0));
  MOVE(t_67,ATmakeAFun("Eval",1,0));
  MOVE(u_59,ATmakeAFun("StratRule",3,0));
  MOVE(s_59,ATmakeAFun("SRule",1,0));
  MOVE(b_59,ATmakeAFun("Con",3,0));
  MOVE(s_58,ATmakeAFun("BAM",3,0));
  MOVE(m_56,ATmakeAFun("AM",2,0));
  MOVE(k_56,ATmakeAFun("MA",2,0));
  MOVE(i_56,ATmakeAFun("BA",2,0));
  MOVE(e_56,ATmakeAFun("Lets",2,0));
  MOVE(b_56,ATmakeAFun("LChoices",1,0));
  MOVE(l_55,ATmakeAFun("Choices",1,0));
  MOVE(z_54,ATmakeAFun("Seqs",1,0));
  MOVE(f_48,ATmakeAFun("Explode",2,0));
  MOVE(c_47,ATmakeAFun("ExplodeCong",2,0));
  MOVE(u_34,ATmakeAFun("Wld",0,0));
  MOVE(f_34,ATmakeAFun("MatchVar",1,0));
  MOVE(b_33,ATmakeAFun("NULL",0,0));
  MOVE(g_32,ATmakeAFun("Where",1,0));
  MOVE(f_32,ATmakeAFun("Build",1,0));
  MOVE(y_31,ATmakeAFun("Match",1,0));
  MOVE(q_24,ATmakeAFun("One",1,0));
  MOVE(e_24,ATmakeAFun("All",1,0));
  MOVE(u_23,ATmakeAFun("Call",2,0));
  MOVE(r_23,ATmakeAFun("LChoice",2,0));
  MOVE(p_23,ATmakeAFun("Choice",2,0));
  MOVE(n_23,ATmakeAFun("Seq",2,0));
  MOVE(j_23,ATmakeAFun("Not",1,0));
  MOVE(e_23,ATmakeAFun("Test",1,0));
  MOVE(k_22,ATmakeAFun("Id",0,0));
  MOVE(k_20,ATmakeAFun("Cong",2,0));
  MOVE(e_19,ATmakeAFun("Op",2,0));
  MOVE(x_18,ATmakeAFun("Real",1,0));
  MOVE(w_18,ATmakeAFun("Str",1,0));
  MOVE(u_18,ATmakeAFun("Int",1,0));
  MOVE(u_16,ATmakeAFun("Prim",1,0));
  MOVE(p_16,ATmakeAFun("App",2,0));
  MOVE(h_14,ATmakeAFun("Fail",0,0));
  MOVE(r_13,ATmakeAFun("Imports",1,0));
  MOVE(m_13,ATmakeAFun("InclDir",1,0));
  MOVE(a_5,ATmakeAFun("Rule",3,0));
  MOVE(z_4,ATmakeAFun("LRule",1,0));
  MOVE(u_4,ATmakeAFun("Var",1,0));
  MOVE(q_4,ATmakeAFun("Scope",2,0));
  MOVE(r_2,ATmakeAFun("SVar",1,0));
  MOVE(m_1,ATmakeAFun("Nil",0,0));
  MOVE(f_1,ATmakeAFun("Cons",2,0));
  MOVE(a_1,ATmakeAFun("Rec",2,0));
  MOVE(y_0,ATmakeAFun("SDef",3,0));
  MOVE(x_0,ATmakeAFun("Let",2,0));
  MOVE(h_0,ATmakeAFun("TNil",0,0));
  MOVE(g_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_d_37)
  _ST_exit();
ENDPROC

PROC(_stratego_e_37)
  Ccall(_stratego_s_39);
ENDPROC

PROC(_stratego_f_37)
  Tdupl();
  Tset(ATmakeString("options"));
  Ccall(_stratego_e_37);
  Tpop();
  Tdupl();
  Tset(ATmakeString("senv"));
  Ccall(_stratego_e_37);
  Tpop();
  Tdupl();
  Tset(ATmakeString("tenv"));
  Ccall(_stratego_e_37);
  Tpop();
ENDPROC

PROC(_stratego_g_37)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(a_0);
  q_21 :
  Rpush(b_0);
  r_21 :
  Epushd(1,5);
  MoveTop(1,1);
  goto e_8;
  e_8 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_8;
  f_8 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto g_8;
  g_8 :
  TestFunFC(h_0,&&fail,Egetd(1,5));
  Cpush(j_0);
  Rpush(k_0);
  goto r_1;
  k_0 :
  goto i_0;
  j_0 :
  Ccontinue(l_0);
  Rpush(m_0);
  goto s_1;
  m_0 :
  goto i_0;
  l_0 :
  Rpush(o_0);
  goto h_3;
  o_0 :
  goto n_0;
  i_0 :
  Cpop();
  n_0 :
  goto f_0;
  f_0 :
  goto e_0;
  h_3 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  p_0 :
  AllNextSon(&&q_0);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(r_0);
  goto r_21;
  r_0 :
  Epopd(2,1);
  goto p_0;
  q_0 :
  AllBuild();
  Return();
  e_0 :
  goto d_0;
  s_1 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,15);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,5);
  goto r_6;
  r_6 :
  TestFunFC(x_0,&&w_0,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto s_6;
  s_6 :
  TestFunFC(y_0,&&fail,Egetd(3,6));
  MoveArg(3,1,3,6,0);
  MoveArg(3,2,3,6,1);
  MoveArg(3,3,3,6,2);
  Rpush(v_0);
  goto o_6;
  w_0 :
  TestFunFC(y_0,&&z_0,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  MoveArg(3,4,3,5,2);
  Rpush(v_0);
  goto p_6;
  z_0 :
  TestFunFC(a_1,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(v_0);
  goto q_6;
  v_0 :
  goto u_0;
  q_6 :
  NotNULLd(3,6);
  Tset(App2("Cons",Egetd(3,6),App0("Nil")));
  Return();
  u_0 :
  goto t_0;
  p_6 :
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  Return();
  t_0 :
  goto s_0;
  o_6 :
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Return();
  s_0 :
  MoveTop(3,8);
  Move(2,1,3,8);
  Rpush(b_1);
  s_21 :
  Cpush(d_1);
  Ccall(_stratego_d_42);
  goto c_1;
  d_1 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_40);
  OneNextSon();
  Rpush(g_1);
  goto s_21;
  g_1 :
  AllBuild();
  goto e_1;
  c_1 :
  Cpop();
  e_1 :
  Return();
  b_1 :
  MoveTop(3,9);
  Move(2,2,3,9);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(h_1);
  t_21 :
  Epushd(4,9);
  MoveTop(4,1);
  goto b_7;
  b_7 :
  TestFunFC(g_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto c_7;
  c_7 :
  TestFunFC(m_1,&&l_1,Egetd(4,2));
  goto d_7;
  d_7 :
  TestFunFC(g_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto e_7;
  e_7 :
  TestFunFC(m_1,&&fail,Egetd(4,6));
  goto f_7;
  f_7 :
  TestFunFC(h_0,&&fail,Egetd(4,9));
  Rpush(k_1);
  goto v_6;
  l_1 :
  TestFunFC(f_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto g_7;
  g_7 :
  TestFunFC(g_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto h_7;
  h_7 :
  TestFunFC(f_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto i_7;
  i_7 :
  TestFunFC(h_0,&&fail,Egetd(4,9));
  Rpush(k_1);
  goto w_6;
  k_1 :
  goto j_1;
  w_6 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(o_1);
  goto t_21;
  o_1 :
  OneNextSon();
  Ccall(_stratego_w_41);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto y_6;
  y_6 :
  TestFunFC(g_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto z_6;
  z_6 :
  TestFunFC(g_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto a_7;
  a_7 :
  TestFunFC(h_0,&&fail,Egetd(5,5));
  Rpush(p_1);
  goto x_6;
  p_1 :
  goto n_1;
  x_6 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  n_1 :
  Epopd(5,5);
  Return();
  j_1 :
  goto i_1;
  v_6 :
  Tset(App0("Nil"));
  Return();
  i_1 :
  Epopd(4,9);
  Return();
  h_1 :
  MoveTop(3,10);
  NotNULLd(3,10);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,10),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,11);
  goto m_7;
  m_7 :
  TestFunFC(g_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto n_7;
  n_7 :
  TestFunFC(g_0,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto o_7;
  o_7 :
  TestFunFC(h_0,&&fail,Egetd(3,15));
  Rpush(t_1);
  goto k_7;
  t_1 :
  goto q_1;
  k_7 :
  Epushd(4,1);
  NotNULLd(3,12);
  Tset(Egetd(3,12));
  Rpush(u_1);
  i_22 :
  Cpush(w_1);
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_1);
  goto i_22;
  x_1 :
  AllBuild();
  goto v_1;
  w_1 :
  Ccall(_stratego_d_42);
  NotNULLd(3,14);
  Tset(Egetd(3,14));
  goto y_1;
  v_1 :
  Cpop();
  y_1 :
  Return();
  u_1 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  q_1 :
  Epopd(3,15);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(a_2);
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto q_7;
  q_7 :
  TestFunFC(f_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(c_2);
  goto p_7;
  c_2 :
  goto b_2;
  p_7 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  b_2 :
  Epopd(3,3);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  goto z_1;
  a_2 :
  Ccontinue(d_2);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto z_1;
  d_2 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto s_7;
  s_7 :
  TestFunFC(f_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(g_2);
  goto r_7;
  g_2 :
  goto f_2;
  r_7 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  f_2 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  goto e_2;
  z_1 :
  Cpop();
  e_2 :
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto z_7;
  z_7 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto a_8;
  a_8 :
  TestFunFC(g_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto b_8;
  b_8 :
  TestFunFC(g_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto c_8;
  c_8 :
  TestFunFC(h_0,&&fail,Egetd(2,11));
  Rpush(i_2);
  goto u_7;
  i_2 :
  goto h_2;
  u_7 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Cpush(k_2);
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,8),App0("TNil"))));
  Rpush(l_2);
  goto q_21;
  l_2 :
  Epopd(3,1);
  AllBuild();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(m_2);
  goto q_21;
  m_2 :
  Epopd(3,1);
  AllBuild();
  goto j_2;
  k_2 :
  Ccontinue(n_2);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(o_2);
  goto q_21;
  o_2 :
  Epopd(3,1);
  AllBuild();
  goto j_2;
  n_2 :
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(q_2);
  goto q_21;
  q_2 :
  Epopd(3,1);
  AllBuild();
  goto p_2;
  j_2 :
  Cpop();
  p_2 :
  Return();
  h_2 :
  Epopd(2,11);
  Return();
  d_0 :
  goto c_0;
  r_1 :
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
  Ccall(_stratego_h_37);
  Epopd(2,1);
  AllBuild();
  Return();
  c_0 :
  Epopd(1,5);
  Return();
  b_0 :
  Return();
  a_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_37)
  Rpush(s_2);
  k_26 :
  Epushd(0,11);
  MoveTop(0,5);
  goto a_23;
  a_23 :
  TestFunFC(g_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto g_23;
  g_23 :
  TestFunFC(g_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto h_23;
  h_23 :
  TestFunFC(f_1,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto i_23;
  i_23 :
  TestFunFC(h_0,&&fail,Egetd(0,11));
  goto k_23;
  k_23 :
  TestFunFC(g_0,&&w_2,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto l_23;
  l_23 :
  TestFunFC(g_0,&&x_2,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto t_23;
  t_23 :
  TestFunFC(h_0,&&y_2,Egetd(0,4));
  Cpush(a_3);
  Rpush(b_3);
  goto j_22;
  b_3 :
  goto z_2;
  a_3 :
  Rpush(d_3);
  goto z_22;
  d_3 :
  goto c_3;
  z_2 :
  Cpop();
  c_3 :
  goto v_2;
  y_2 :
  Rpush(v_2);
  goto z_22;
  x_2 :
  Rpush(v_2);
  goto z_22;
  w_2 :
  Rpush(v_2);
  goto z_22;
  v_2 :
  goto u_2;
  z_22 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(e_3);
  goto k_26;
  e_3 :
  Return();
  u_2 :
  goto t_2;
  j_22 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  t_2 :
  Epopd(0,11);
  Return();
  s_2 :
ENDPROC

PROC(_stratego_i_37)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(f_3);
  v_40 :
  Rpush(g_3);
  w_40 :
  Epushd(1,5);
  MoveTop(1,1);
  goto f_30;
  f_30 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_30;
  p_30 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto t_30;
  t_30 :
  TestFunFC(h_0,&&fail,Egetd(1,5));
  Cpush(n_3);
  Rpush(o_3);
  goto s_26;
  o_3 :
  goto m_3;
  n_3 :
  Ccontinue(p_3);
  Rpush(q_3);
  goto j_27;
  q_3 :
  goto m_3;
  p_3 :
  Rpush(s_3);
  goto k_27;
  s_3 :
  goto r_3;
  m_3 :
  Cpop();
  r_3 :
  goto l_3;
  l_3 :
  goto k_3;
  k_27 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  t_3 :
  AllNextSon(&&u_3);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(v_3);
  goto w_40;
  v_3 :
  Epopd(2,1);
  goto t_3;
  u_3 :
  AllBuild();
  Return();
  k_3 :
  goto j_3;
  j_27 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_k_37);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(w_3);
  x_40 :
  Cpush(y_3);
  Ccall(_stratego_d_42);
  goto x_3;
  y_3 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_m_40);
  OneNextSon();
  Rpush(a_4);
  goto x_40;
  a_4 :
  AllBuild();
  goto z_3;
  x_3 :
  Cpop();
  z_3 :
  Return();
  w_3 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(b_4);
  y_40 :
  Epushd(4,9);
  MoveTop(4,1);
  goto a_29;
  a_29 :
  TestFunFC(g_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto c_29;
  c_29 :
  TestFunFC(m_1,&&f_4,Egetd(4,2));
  goto d_29;
  d_29 :
  TestFunFC(g_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto g_29;
  g_29 :
  TestFunFC(m_1,&&fail,Egetd(4,6));
  goto h_29;
  h_29 :
  TestFunFC(h_0,&&fail,Egetd(4,9));
  Rpush(e_4);
  goto j_28;
  f_4 :
  TestFunFC(f_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto i_29;
  i_29 :
  TestFunFC(g_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto l_29;
  l_29 :
  TestFunFC(f_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto m_29;
  m_29 :
  TestFunFC(h_0,&&fail,Egetd(4,9));
  Rpush(e_4);
  goto k_28;
  e_4 :
  goto d_4;
  k_28 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(h_4);
  goto y_40;
  h_4 :
  OneNextSon();
  Ccall(_stratego_w_41);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto p_28;
  p_28 :
  TestFunFC(g_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto q_28;
  q_28 :
  TestFunFC(g_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto z_28;
  z_28 :
  TestFunFC(h_0,&&fail,Egetd(5,5));
  Rpush(i_4);
  goto l_28;
  i_4 :
  goto g_4;
  l_28 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  g_4 :
  Epopd(5,5);
  Return();
  d_4 :
  goto c_4;
  j_28 :
  Tset(App0("Nil"));
  Return();
  c_4 :
  Epopd(4,9);
  Return();
  b_4 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto u_29;
  u_29 :
  TestFunFC(g_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto v_29;
  v_29 :
  TestFunFC(g_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto w_29;
  w_29 :
  TestFunFC(h_0,&&fail,Egetd(3,8));
  Rpush(k_4);
  goto s_29;
  k_4 :
  goto j_4;
  s_29 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(l_4);
  z_40 :
  Cpush(n_4);
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_4);
  goto z_40;
  o_4 :
  AllBuild();
  goto m_4;
  n_4 :
  Ccall(_stratego_d_42);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto p_4;
  m_4 :
  Cpop();
  p_4 :
  Return();
  l_4 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  j_4 :
  Epopd(3,8);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(q_4);
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
  goto a_30;
  a_30 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto b_30;
  b_30 :
  TestFunFC(g_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto c_30;
  c_30 :
  TestFunFC(g_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto d_30;
  d_30 :
  TestFunFC(h_0,&&fail,Egetd(2,11));
  Rpush(s_4);
  goto y_29;
  s_4 :
  goto r_4;
  y_29 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  TestFunTop(q_4);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(t_4);
  goto v_40;
  t_4 :
  Epopd(3,1);
  AllBuild();
  Return();
  r_4 :
  Epopd(2,11);
  Return();
  j_3 :
  goto i_3;
  s_26 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(u_4);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_h_37);
  Epopd(2,1);
  AllBuild();
  Return();
  i_3 :
  Epopd(1,5);
  Return();
  g_3 :
  Return();
  f_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_37)
  Ccall(_stratego_i_37);
  Ccall(_stratego_g_37);
ENDPROC

PROC(_stratego_k_37)
  Epushd(0,6);
  MoveTop(0,2);
  goto j_41;
  j_41 :
  TestFunFC(q_4,&&y_4,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(x_4);
  goto f_41;
  y_4 :
  TestFunFC(z_4,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto k_41;
  k_41 :
  TestFunFC(a_5,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(x_4);
  goto i_41;
  x_4 :
  goto w_4;
  i_41 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_n_37);
  Return();
  w_4 :
  goto v_4;
  f_41 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  v_4 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_l_37)
  Epushd(0,7);
  MoveTop(0,1);
  goto r_43;
  r_43 :
  TestFunFC(f_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto s_43;
  s_43 :
  TestFunFC(g_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto t_43;
  t_43 :
  TestFunFC(g_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto u_43;
  u_43 :
  TestFunFC(h_0,&&fail,Egetd(0,6));
  Rpush(c_5);
  goto o_42;
  c_5 :
  goto b_5;
  o_42 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto q_42;
  q_42 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto r_42;
  r_42 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_42;
  s_42 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  Rpush(e_5);
  goto p_42;
  e_5 :
  goto d_5;
  p_42 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  d_5 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto u_42;
  u_42 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_42;
  v_42 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_42;
  w_42 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  Rpush(g_5);
  goto t_42;
  g_5 :
  goto f_5;
  t_42 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  f_5 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(h_5);
  w_45 :
  Epushd(2,9);
  MoveTop(2,1);
  goto d_43;
  d_43 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto e_43;
  e_43 :
  TestFunFC(m_1,&&l_5,Egetd(2,2));
  goto f_43;
  f_43 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto g_43;
  g_43 :
  TestFunFC(m_1,&&fail,Egetd(2,6));
  goto h_43;
  h_43 :
  TestFunFC(h_0,&&fail,Egetd(2,9));
  Rpush(k_5);
  goto x_42;
  l_5 :
  TestFunFC(f_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto i_43;
  i_43 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto j_43;
  j_43 :
  TestFunFC(f_1,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto k_43;
  k_43 :
  TestFunFC(h_0,&&fail,Egetd(2,9));
  Rpush(k_5);
  goto y_42;
  k_5 :
  goto j_5;
  y_42 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(n_5);
  goto w_45;
  n_5 :
  OneNextSon();
  Ccall(_stratego_w_41);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto a_43;
  a_43 :
  TestFunFC(g_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto b_43;
  b_43 :
  TestFunFC(g_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto c_43;
  c_43 :
  TestFunFC(h_0,&&fail,Egetd(3,5));
  Rpush(o_5);
  goto z_42;
  o_5 :
  goto m_5;
  z_42 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  m_5 :
  Epopd(3,5);
  Return();
  j_5 :
  goto i_5;
  x_42 :
  Tset(App0("Nil"));
  Return();
  i_5 :
  Epopd(2,9);
  Return();
  h_5 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto o_43;
  o_43 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto p_43;
  p_43 :
  TestFunFC(g_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto q_43;
  q_43 :
  TestFunFC(h_0,&&fail,Egetd(1,9));
  Rpush(q_5);
  goto m_43;
  q_5 :
  goto p_5;
  m_43 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(r_5);
  x_45 :
  Cpush(t_5);
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_5);
  goto x_45;
  u_5 :
  AllBuild();
  goto s_5;
  t_5 :
  Ccall(_stratego_d_42);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto v_5;
  s_5 :
  Cpop();
  v_5 :
  Return();
  r_5 :
  Return();
  p_5 :
  Epopd(1,9);
  Return();
  b_5 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_m_37)
  Epushd(0,5);
  MoveTop(0,5);
  goto o_46;
  o_46 :
  TestFunFC(g_0,&&z_5,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto p_46;
  p_46 :
  TestFunFC(g_0,&&a_6,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto q_46;
  q_46 :
  TestFunFC(h_0,&&b_6,Egetd(0,4));
  Cpush(d_6);
  Rpush(e_6);
  goto y_45;
  e_6 :
  goto c_6;
  d_6 :
  Rpush(g_6);
  goto z_45;
  g_6 :
  goto f_6;
  c_6 :
  Cpop();
  f_6 :
  goto y_5;
  b_6 :
  Rpush(y_5);
  goto z_45;
  a_6 :
  Rpush(y_5);
  goto z_45;
  z_5 :
  Rpush(y_5);
  goto z_45;
  y_5 :
  goto x_5;
  z_45 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(h_6);
  c_48 :
  Cpush(j_6);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Cpush(l_6);
  Epushd(1,7);
  MoveTop(1,1);
  goto f_46;
  f_46 :
  TestFunFC(f_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto g_46;
  g_46 :
  TestFunFC(g_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto h_46;
  h_46 :
  TestFunFC(g_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto i_46;
  i_46 :
  TestFunFC(h_0,&&fail,Egetd(1,6));
  Rpush(n_6);
  goto e_46;
  n_6 :
  goto m_6;
  e_46 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  m_6 :
  Epopd(1,7);
  goto k_6;
  l_6 :
  Ccall(_stratego_l_37);
  goto t_6;
  k_6 :
  Cpop();
  t_6 :
  OneNextSon();
  Ccall(_stratego_w_41);
  AllBuild();
  AllBuild();
  goto i_6;
  j_6 :
  Epushd(1,7);
  MoveTop(1,1);
  goto k_46;
  k_46 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_46;
  l_46 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto m_46;
  m_46 :
  TestFunFC(f_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto n_46;
  n_46 :
  TestFunFC(h_0,&&fail,Egetd(1,7));
  Rpush(l_7);
  goto j_46;
  l_7 :
  goto j_7;
  j_46 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  j_7 :
  Epopd(1,7);
  goto u_6;
  i_6 :
  Cpop();
  u_6 :
  Cpush(v_7);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_42);
  OneNextSon();
  Ccall(_stratego_w_41);
  AllBuild();
  AllBuild();
  goto t_7;
  v_7 :
  Rpush(x_7);
  goto c_48;
  x_7 :
  goto w_7;
  t_7 :
  Cpop();
  w_7 :
  Return();
  h_6 :
  Return();
  x_5 :
  goto w_5;
  y_45 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(y_7);
  a_48 :
  Cpush(i_8);
  Ccall(_stratego_d_42);
  goto d_8;
  i_8 :
  Ccontinue(o_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto d_46;
  d_46 :
  TestFunFC(f_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(r_8);
  goto a_46;
  r_8 :
  goto p_8;
  a_46 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(s_8);
  b_48 :
  Cpush(u_8);
  Epushd(2,3);
  MoveTop(2,1);
  goto c_46;
  c_46 :
  TestFunFC(f_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(w_8);
  goto b_46;
  w_8 :
  goto v_8;
  b_46 :
  Move(1,2,2,2);
  Return();
  v_8 :
  Epopd(2,3);
  goto t_8;
  u_8 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_8);
  goto b_48;
  y_8 :
  AllBuild();
  goto x_8;
  t_8 :
  Cpop();
  x_8 :
  Return();
  s_8 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(z_8);
  goto a_48;
  z_8 :
  Return();
  p_8 :
  Epopd(1,3);
  goto d_8;
  o_8 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_9);
  goto a_48;
  b_9 :
  AllBuild();
  goto a_9;
  d_8 :
  Cpop();
  a_9 :
  Return();
  y_7 :
  Return();
  w_5 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_37)
  Rpush(c_9);
  p_52 :
  Cpush(e_9);
  Epushd(0,2);
  MoveTop(0,1);
  goto e_48;
  e_48 :
  TestFunFC(u_4,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(g_9);
  goto d_48;
  g_9 :
  goto f_9;
  d_48 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  f_9 :
  Epopd(0,2);
  goto d_9;
  e_9 :
  Ccontinue(h_9);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_k_37);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(q_4);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(j_9);
  goto p_52;
  j_9 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_m_37);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto l_48;
  l_48 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_48;
  m_48 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto n_48;
  n_48 :
  TestFunFC(h_0,&&fail,Egetd(1,5));
  Rpush(l_9);
  goto k_48;
  l_9 :
  goto k_9;
  k_48 :
  Move(0,3,1,4);
  Return();
  k_9 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(v_9);
  q_52 :
  Cpush(x_9);
  Ccall(_stratego_d_42);
  Tset(App0("Nil"));
  goto w_9;
  x_9 :
  Epushd(1,3);
  MoveTop(1,1);
  goto z_48;
  z_48 :
  TestFunFC(f_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(a_10);
  goto o_48;
  a_10 :
  goto z_9;
  o_48 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(b_10);
  goto q_52;
  b_10 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto w_48;
  w_48 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto x_48;
  x_48 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto y_48;
  y_48 :
  TestFunFC(h_0,&&fail,Egetd(2,6));
  Rpush(d_10);
  goto r_48;
  d_10 :
  goto c_10;
  r_48 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(g_10);
  r_52 :
  Cpush(i_10);
  Ccall(_stratego_d_42);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto h_10;
  i_10 :
  Ccontinue(j_10);
  Epushd(3,3);
  MoveTop(3,1);
  goto v_48;
  v_48 :
  TestFunFC(f_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(n_10);
  goto s_48;
  n_10 :
  goto m_10;
  s_48 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(o_10);
  s_52 :
  Cpush(q_10);
  Epushd(4,3);
  MoveTop(4,1);
  goto u_48;
  u_48 :
  TestFunFC(f_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(s_10);
  goto t_48;
  s_10 :
  goto r_10;
  t_48 :
  Move(3,2,4,2);
  Return();
  r_10 :
  Epopd(4,3);
  goto p_10;
  q_10 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_10);
  goto s_52;
  u_10 :
  AllBuild();
  goto t_10;
  p_10 :
  Cpop();
  t_10 :
  Return();
  o_10 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(v_10);
  goto r_52;
  v_10 :
  Return();
  m_10 :
  Epopd(3,3);
  goto h_10;
  j_10 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_10);
  goto r_52;
  x_10 :
  AllBuild();
  goto w_10;
  h_10 :
  Cpop();
  w_10 :
  Return();
  g_10 :
  Return();
  c_10 :
  Epopd(2,6);
  Return();
  z_9 :
  Epopd(1,3);
  goto y_9;
  w_9 :
  Cpop();
  y_9 :
  Return();
  v_9 :
  Epopd(0,3);
  goto d_9;
  h_9 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto c_49;
  c_49 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_49;
  d_49 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto e_49;
  e_49 :
  TestFunFC(h_0,&&fail,Egetd(1,5));
  Rpush(a_11);
  goto b_49;
  a_11 :
  goto z_10;
  b_49 :
  Move(0,2,1,4);
  Return();
  z_10 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(b_11);
  t_52 :
  Cpush(d_11);
  Ccall(_stratego_d_42);
  Tset(App0("Nil"));
  goto c_11;
  d_11 :
  Epushd(1,3);
  MoveTop(1,1);
  goto q_49;
  q_49 :
  TestFunFC(f_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(g_11);
  goto f_49;
  g_11 :
  goto f_11;
  f_49 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(h_11);
  goto p_52;
  h_11 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(i_11);
  goto t_52;
  i_11 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto n_49;
  n_49 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto o_49;
  o_49 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto p_49;
  p_49 :
  TestFunFC(h_0,&&fail,Egetd(2,7));
  Rpush(k_11);
  goto i_49;
  k_11 :
  goto j_11;
  i_49 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(l_11);
  u_52 :
  Cpush(n_11);
  Ccall(_stratego_d_42);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto m_11;
  n_11 :
  Ccontinue(r_11);
  Epushd(3,3);
  MoveTop(3,1);
  goto m_49;
  m_49 :
  TestFunFC(f_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(t_11);
  goto j_49;
  t_11 :
  goto s_11;
  j_49 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(u_11);
  v_52 :
  Cpush(w_11);
  Epushd(4,3);
  MoveTop(4,1);
  goto l_49;
  l_49 :
  TestFunFC(f_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(y_11);
  goto k_49;
  y_11 :
  goto x_11;
  k_49 :
  Move(3,2,4,2);
  Return();
  x_11 :
  Epopd(4,3);
  goto v_11;
  w_11 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_12);
  goto v_52;
  a_12 :
  AllBuild();
  goto z_11;
  v_11 :
  Cpop();
  z_11 :
  Return();
  u_11 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(b_12);
  goto u_52;
  b_12 :
  Return();
  s_11 :
  Epopd(3,3);
  goto m_11;
  r_11 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_12);
  goto u_52;
  d_12 :
  AllBuild();
  goto c_12;
  m_11 :
  Cpop();
  c_12 :
  Return();
  l_11 :
  Return();
  j_11 :
  Epopd(2,7);
  Return();
  f_11 :
  Epopd(1,3);
  goto e_11;
  c_11 :
  Cpop();
  e_11 :
  Return();
  b_11 :
  Epopd(0,2);
  goto y_10;
  d_9 :
  Cpop();
  y_10 :
  Return();
  c_9 :
ENDPROC

PROC(_stratego_o_37)
  Rpush(e_12);
  k_53 :
  Cpush(g_12);
  Epushd(0,5);
  MoveTop(0,1);
  goto y_52;
  y_52 :
  TestFunFC(z_4,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto z_52;
  z_52 :
  TestFunFC(a_5,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(i_12);
  goto w_52;
  i_12 :
  goto h_12;
  w_52 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_n_37);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(1,1),App1("SRule",App3("Rule",Egetd(0,3),Egetd(0,4),Egetd(0,5)))));
  Epopd(1,1);
  Return();
  h_12 :
  Epopd(0,5);
  goto f_12;
  g_12 :
  goto j_12;
  f_12 :
  Cpop();
  j_12 :
  AllInit();
  k_12 :
  AllNextSon(&&l_12);
  Rpush(m_12);
  goto k_53;
  m_12 :
  goto k_12;
  l_12 :
  AllBuild();
  Return();
  e_12 :
ENDPROC

PROC(_stratego_p_37)
  Rpush(n_12);
  q_54 :
  Cpush(t_12);
  Ccall(_stratego_d_42);
  goto o_12;
  t_12 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(0,4);
  MoveTop(0,1);
  goto u_53;
  u_53 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(w_12);
  goto l_53;
  w_12 :
  goto v_12;
  l_53 :
  Epushd(1,8);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_z_39);
  MoveTop(1,1);
  NotNULLd(0,2);
  NotNULLd(1,1);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,1),App0("TNil"))),App2("TCons",Egetd(0,1),App0("TNil")))));
  MoveTop(1,2);
  goto p_53;
  p_53 :
  TestFunFC(g_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto q_53;
  q_53 :
  TestFunFC(g_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto s_53;
  s_53 :
  TestFunFC(g_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto t_53;
  t_53 :
  TestFunFC(h_0,&&fail,Egetd(1,8));
  Rpush(y_12);
  goto n_53;
  y_12 :
  goto x_12;
  n_53 :
  Epushd(2,1);
  Tdupl();
  Epushd(3,1);
  Cpush(a_13);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset(App2("TCons",Egetd(1,3),App2("TCons",Egetd(1,5),App0("TNil"))));
  Ccall(_stratego_y_41);
  goto z_12;
  a_13 :
  Tset(App0("Nil"));
  goto b_13;
  z_12 :
  Cpop();
  b_13 :
  MoveTop(3,1);
  Move(2,1,3,1);
  NotNULLd(1,3);
  NotNULLd(1,5);
  NotNULLd(1,7);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,3),App2("TCons",Egetd(1,5),App2("TCons",App2("Cons",Egetd(1,7),Egetd(2,1)),App0("TNil")))));
  Ccall(_stratego_x_41);
  Epopd(3,1);
  Tpop();
  Epopd(2,1);
  Return();
  x_12 :
  Epopd(1,8);
  Return();
  v_12 :
  Epopd(0,4);
  OneNextSon();
  Rpush(c_13);
  goto q_54;
  c_13 :
  AllBuild();
  goto u_12;
  o_12 :
  Cpop();
  u_12 :
  Return();
  n_12 :
ENDPROC

PROC(_stratego_q_37)
  Epushd(0,2);
  Tdupl();
  Epushd(1,2);
  Cpush(f_13);
  Epushd(2,5);
  Tset(App2("TCons",ATmakeString("options"),App2("TCons",ATmakeString("InclDir"),App0("TNil"))));
  MoveTop(2,1);
  goto u_54;
  u_54 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_54;
  v_54 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto w_54;
  w_54 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  Rpush(h_13);
  goto r_54;
  h_13 :
  goto g_13;
  r_54 :
  Epushd(3,3);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(3,1);
  goto t_54;
  t_54 :
  TestFunFC(f_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_13);
  goto s_54;
  j_13 :
  goto i_13;
  s_54 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  i_13 :
  Epopd(3,3);
  Return();
  g_13 :
  Epopd(2,5);
  goto e_13;
  f_13 :
  Tset(App1("InclDir",ATmakeString(".")));
  goto k_13;
  e_13 :
  Cpop();
  k_13 :
  MoveTop(1,1);
  goto y_54;
  y_54 :
  TestFunFC(m_13,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(l_13);
  goto x_54;
  l_13 :
  goto d_13;
  x_54 :
  Move(0,1,1,2);
  Return();
  d_13 :
  Epopd(1,2);
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,2);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("sc"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString("-F"),App2("Cons",ATmakeString("-I"),App2("Cons",Egetd(0,1),App0("Nil")))))),App0("TNil"))));
  Ccall(_stratego_m_39);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",ATmakeString(".sdefs"),App0("TNil"))));
  Ccall(_stratego_u_41);
  Ccall(_stratego_g_41);
  Epopd(0,2);
ENDPROC

PROC(_stratego_r_37)
  Epushd(0,4);
  MoveTop(0,3);
  goto u_55;
  u_55 :
  TestFunFC(r_13,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto v_55;
  v_55 :
  TestFunFC(m_1,&&t_13,Egetd(0,4));
  Cpush(v_13);
  Rpush(w_13);
  goto r_55;
  w_13 :
  goto u_13;
  v_13 :
  Rpush(y_13);
  goto t_55;
  y_13 :
  goto x_13;
  u_13 :
  Cpop();
  x_13 :
  goto q_13;
  t_13 :
  TestFunFC(f_1,&&s_13,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  goto w_55;
  w_55 :
  TestFunFC(m_1,&&z_13,Egetd(0,2));
  Cpush(b_14);
  Rpush(c_14);
  goto s_55;
  c_14 :
  goto a_14;
  b_14 :
  Rpush(e_14);
  goto t_55;
  e_14 :
  goto d_14;
  a_14 :
  Cpop();
  d_14 :
  goto q_13;
  z_13 :
  Rpush(q_13);
  goto t_55;
  s_13 :
  Rpush(q_13);
  goto t_55;
  q_13 :
  goto p_13;
  t_55 :
  Epushd(1,0);
  Tset(App2("Cons",ATmakeString("error: import of multiple modules not supported yet"),App0("Nil")));
  Ccall(_stratego_t_37);
  Epopd(1,0);
  Return();
  p_13 :
  goto o_13;
  s_55 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_q_37);
  Ccall(_stratego_p_37);
  Return();
  o_13 :
  goto n_13;
  r_55 :
  Return();
  n_13 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_s_37)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_m_41);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_t_37)
  Tdupl();
  Ccall(_stratego_s_37);
  Tset(MakeInt(1));
  Ccall(_stratego_d_37);
  Tpop();
ENDPROC

PROC(_stratego_u_37)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_56;
  o_56 :
  TestFunFC(h_14,&&fail,Egetd(0,1));
  Rpush(g_14);
  goto n_56;
  g_14 :
  goto f_14;
  n_56 :
  Return();
  f_14 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_v_37)
  _ST_is_string();
ENDPROC

PROC(_stratego_w_37)
  _ST_address();
ENDPROC

PROC(_stratego_x_37)
  _ST_address_lt();
ENDPROC

PROC(_stratego_y_37)
  _ST_explode_term();
ENDPROC

PROC(_stratego_z_37)
  _ST_mkterm();
ENDPROC

PROC(_stratego_b_38)
  _ST_int();
ENDPROC

PROC(_stratego_c_38)
  _ST_min();
ENDPROC

PROC(_stratego_d_38)
  _ST_max();
ENDPROC

PROC(_stratego_g_38)
  _ST_gt();
ENDPROC

PROC(_stratego_h_38)
  _ST_geq();
ENDPROC

PROC(_stratego_i_38)
  _ST_mod();
ENDPROC

PROC(_stratego_j_38)
  _ST_div();
ENDPROC

PROC(_stratego_k_38)
  _ST_mul();
ENDPROC

PROC(_stratego_l_38)
  _ST_subt();
ENDPROC

PROC(_stratego_m_38)
  _ST_plus();
ENDPROC

PROC(_stratego_n_38)
  _ST_minus();
ENDPROC

PROC(_stratego_w_38)
  _ST_is_int();
ENDPROC

PROC(_stratego_x_38)
  _ST_sqrt();
ENDPROC

PROC(_stratego_y_38)
  _ST_sin();
ENDPROC

PROC(_stratego_z_38)
  _ST_cos();
ENDPROC

PROC(_stratego_a_39)
  _ST_is_real();
ENDPROC

PROC(_stratego_b_39)
  _ST_PrintStack();
ENDPROC

PROC(_stratego_c_39)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_d_39)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_e_39)
  _ST_close_file();
ENDPROC

PROC(_stratego_f_39)
  _ST_append_file();
ENDPROC

PROC(_stratego_g_39)
  _ST_open_file();
ENDPROC

PROC(_stratego_h_39)
  _ST_file_exists();
ENDPROC

PROC(_stratego_i_39)
  _ST_printascii();
ENDPROC

PROC(_stratego_j_39)
  _ST_print();
ENDPROC

PROC(_stratego_k_39)
  _ST_dtime();
ENDPROC

PROC(_stratego_l_39)
  _ST_get_pid();
ENDPROC

PROC(_stratego_m_39)
  _ST_call_noisy();
ENDPROC

PROC(_stratego_n_39)
  _ST_call();
ENDPROC

PROC(_stratego_o_39)
  _ST_table_keys();
ENDPROC

PROC(_stratego_p_39)
  _ST_table_remove();
ENDPROC

PROC(_stratego_s_39)
  _ST_destroy_table();
ENDPROC

PROC(_stratego_t_39)
  Epushd(0,4);
  MoveTop(0,1);
  goto l_58;
  l_58 :
  TestFunFC(p_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto m_58;
  m_58 :
  TestFunFC(u_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto n_58;
  n_58 :
  TestStr(0,3,"_ST_create_table",&&v_16);
  Rpush(o_16);
  goto q_56;
  v_16 :
  TestStr(0,3,"_ST_destroy_table",&&w_16);
  Rpush(o_16);
  goto r_56;
  w_16 :
  TestStr(0,3,"_ST_table_put",&&x_16);
  Rpush(o_16);
  goto s_56;
  x_16 :
  TestStr(0,3,"_ST_table_get",&&y_16);
  Rpush(o_16);
  goto t_56;
  y_16 :
  TestStr(0,3,"_ST_table_remove",&&z_16);
  Rpush(o_16);
  goto u_56;
  z_16 :
  TestStr(0,3,"_ST_table_keys",&&a_17);
  Rpush(o_16);
  goto v_56;
  a_17 :
  TestStr(0,3,"_ST_exit",&&b_17);
  Rpush(o_16);
  goto w_56;
  b_17 :
  TestStr(0,3,"_ST_call",&&c_17);
  Rpush(o_16);
  goto x_56;
  c_17 :
  TestStr(0,3,"_ST_call_noisy",&&d_17);
  Rpush(o_16);
  goto y_56;
  d_17 :
  TestStr(0,3,"_ST_get_pid",&&e_17);
  Rpush(o_16);
  goto z_56;
  e_17 :
  TestStr(0,3,"_ST_dtime",&&f_17);
  Rpush(o_16);
  goto a_57;
  f_17 :
  TestStr(0,3,"_ST_print",&&g_17);
  Rpush(o_16);
  goto b_57;
  g_17 :
  TestStr(0,3,"_ST_printnl",&&h_17);
  Rpush(o_16);
  goto c_57;
  h_17 :
  TestStr(0,3,"_ST_printascii",&&i_17);
  Rpush(o_16);
  goto d_57;
  i_17 :
  TestStr(0,3,"_ST_file_exists",&&j_17);
  Rpush(o_16);
  goto e_57;
  j_17 :
  TestStr(0,3,"_ST_open_file",&&k_17);
  Rpush(o_16);
  goto f_57;
  k_17 :
  TestStr(0,3,"_ST_append_file",&&l_17);
  Rpush(o_16);
  goto g_57;
  l_17 :
  TestStr(0,3,"_ST_close_file",&&m_17);
  Rpush(o_16);
  goto h_57;
  m_17 :
  TestStr(0,3,"_ST_ReadFromFile",&&n_17);
  Rpush(o_16);
  goto i_57;
  n_17 :
  TestStr(0,3,"_ST_WriteToBinaryFile",&&o_17);
  Rpush(o_16);
  goto j_57;
  o_17 :
  TestStr(0,3,"_ST_WriteToTextFile",&&p_17);
  Rpush(o_16);
  goto k_57;
  p_17 :
  TestStr(0,3,"_ST_PrintStack",&&q_17);
  Rpush(o_16);
  goto l_57;
  q_17 :
  TestStr(0,3,"_ST_is_real",&&r_17);
  Rpush(o_16);
  goto m_57;
  r_17 :
  TestStr(0,3,"_ST_cos",&&s_17);
  Rpush(o_16);
  goto n_57;
  s_17 :
  TestStr(0,3,"_ST_sin",&&t_17);
  Rpush(o_16);
  goto o_57;
  t_17 :
  TestStr(0,3,"_ST_sqrt",&&u_17);
  Rpush(o_16);
  goto p_57;
  u_17 :
  TestStr(0,3,"_ST_is_int",&&v_17);
  Rpush(o_16);
  goto q_57;
  v_17 :
  TestStr(0,3,"_ST_minus",&&w_17);
  Rpush(o_16);
  goto r_57;
  w_17 :
  TestStr(0,3,"_ST_plus",&&x_17);
  Rpush(o_16);
  goto s_57;
  x_17 :
  TestStr(0,3,"_ST_add",&&y_17);
  Rpush(o_16);
  goto t_57;
  y_17 :
  TestStr(0,3,"_ST_subt",&&z_17);
  Rpush(o_16);
  goto u_57;
  z_17 :
  TestStr(0,3,"_ST_mul",&&a_18);
  Rpush(o_16);
  goto v_57;
  a_18 :
  TestStr(0,3,"_ST_div",&&b_18);
  Rpush(o_16);
  goto w_57;
  b_18 :
  TestStr(0,3,"_ST_mod",&&c_18);
  Rpush(o_16);
  goto x_57;
  c_18 :
  TestStr(0,3,"_ST_geq",&&d_18);
  Rpush(o_16);
  goto y_57;
  d_18 :
  TestStr(0,3,"_ST_gt",&&e_18);
  Rpush(o_16);
  goto z_57;
  e_18 :
  TestStr(0,3,"_ST_max",&&f_18);
  Rpush(o_16);
  goto a_58;
  f_18 :
  TestStr(0,3,"_ST_min",&&g_18);
  Rpush(o_16);
  goto b_58;
  g_18 :
  TestStr(0,3,"_ST_int",&&h_18);
  Rpush(o_16);
  goto c_58;
  h_18 :
  TestStr(0,3,"_ST_mkterm",&&i_18);
  Rpush(o_16);
  goto d_58;
  i_18 :
  TestStr(0,3,"_ST_explode_term",&&j_18);
  Rpush(o_16);
  goto e_58;
  j_18 :
  TestStr(0,3,"_ST_address_lt",&&k_18);
  Rpush(o_16);
  goto f_58;
  k_18 :
  TestStr(0,3,"_ST_address",&&l_18);
  Rpush(o_16);
  goto g_58;
  l_18 :
  TestStr(0,3,"_ST_new",&&m_18);
  Rpush(o_16);
  goto h_58;
  m_18 :
  TestStr(0,3,"_ST_is_string",&&n_18);
  Rpush(o_16);
  goto i_58;
  n_18 :
  TestStr(0,3,"_ST_implode_string",&&o_18);
  Rpush(o_16);
  goto j_58;
  o_18 :
  TestStr(0,3,"_ST_explode_string",&&fail);
  Rpush(o_16);
  goto k_58;
  o_16 :
  goto k_16;
  k_58 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_t_41);
  Return();
  k_16 :
  goto j_16;
  j_58 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_s_41);
  Return();
  j_16 :
  goto i_16;
  i_58 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_v_37);
  Return();
  i_16 :
  goto h_16;
  h_58 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_m_40);
  Return();
  h_16 :
  goto g_16;
  g_58 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_w_37);
  Return();
  g_16 :
  goto f_16;
  f_58 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_x_37);
  Return();
  f_16 :
  goto e_16;
  e_58 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_y_37);
  Return();
  e_16 :
  goto d_16;
  d_58 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_z_37);
  Return();
  d_16 :
  goto c_16;
  c_58 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_b_38);
  Return();
  c_16 :
  goto b_16;
  b_58 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_c_38);
  Return();
  b_16 :
  goto a_16;
  a_58 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_d_38);
  Return();
  a_16 :
  goto x_15;
  z_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_g_38);
  Return();
  x_15 :
  goto v_15;
  y_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_h_38);
  Return();
  v_15 :
  goto u_15;
  x_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_i_38);
  Return();
  u_15 :
  goto r_15;
  w_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_j_38);
  Return();
  r_15 :
  goto q_15;
  v_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_k_38);
  Return();
  q_15 :
  goto p_15;
  u_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_l_38);
  Return();
  p_15 :
  goto o_15;
  t_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_y_39);
  Return();
  o_15 :
  goto n_15;
  s_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_m_38);
  Return();
  n_15 :
  goto m_15;
  r_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_n_38);
  Return();
  m_15 :
  goto l_15;
  q_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_w_38);
  Return();
  l_15 :
  goto k_15;
  p_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_x_38);
  Return();
  k_15 :
  goto j_15;
  o_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_y_38);
  Return();
  j_15 :
  goto i_15;
  n_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_z_38);
  Return();
  i_15 :
  goto h_15;
  m_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_a_39);
  Return();
  h_15 :
  goto g_15;
  l_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_b_39);
  Return();
  g_15 :
  goto f_15;
  k_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_c_39);
  Return();
  f_15 :
  goto e_15;
  j_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_d_39);
  Return();
  e_15 :
  goto d_15;
  i_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_g_41);
  Return();
  d_15 :
  goto c_15;
  h_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_e_39);
  Return();
  c_15 :
  goto b_15;
  g_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_f_39);
  Return();
  b_15 :
  goto a_15;
  f_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_g_39);
  Return();
  a_15 :
  goto z_14;
  e_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_h_39);
  Return();
  z_14 :
  goto y_14;
  d_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_i_39);
  Return();
  y_14 :
  goto x_14;
  c_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_m_41);
  Return();
  x_14 :
  goto w_14;
  b_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_j_39);
  Return();
  w_14 :
  goto v_14;
  a_57 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_k_39);
  Return();
  v_14 :
  goto u_14;
  z_56 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_l_39);
  Return();
  u_14 :
  goto t_14;
  y_56 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_m_39);
  Return();
  t_14 :
  goto s_14;
  x_56 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_n_39);
  Return();
  s_14 :
  goto r_14;
  w_56 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_d_37);
  Return();
  r_14 :
  goto q_14;
  v_56 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_o_39);
  Return();
  q_14 :
  goto p_14;
  u_56 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_p_39);
  Return();
  p_14 :
  goto o_14;
  t_56 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_y_41);
  Return();
  o_14 :
  goto n_14;
  s_56 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_x_41);
  Return();
  n_14 :
  goto m_14;
  r_56 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_s_39);
  Return();
  m_14 :
  goto i_14;
  q_56 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_g_42);
  Return();
  i_14 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_u_39)
  Epushd(0,2);
  MoveTop(0,1);
  goto q_60;
  q_60 :
  TestFunFC(u_18,&&t_18,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(s_18);
  goto n_60;
  t_18 :
  TestFunFC(w_18,&&v_18,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(s_18);
  goto o_60;
  v_18 :
  TestFunFC(x_18,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(s_18);
  goto p_60;
  s_18 :
  goto r_18;
  p_60 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  r_18 :
  goto q_18;
  o_60 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  q_18 :
  goto p_18;
  n_60 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  p_18 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_v_39)
  Epushd(0,9);
  MoveTop(0,2);
  goto x_61;
  x_61 :
  TestFunFC(f_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,9,0,2,1);
  goto y_61;
  y_61 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto z_61;
  z_61 :
  TestFunFC(e_19,&&d_19,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,1,0,4,1);
  goto a_62;
  a_62 :
  TestFunFC(g_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto b_62;
  b_62 :
  TestFunFC(h_0,&&fail,Egetd(0,8));
  Rpush(c_19);
  goto w_60;
  d_19 :
  TestFunFC(u_18,&&f_19,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto c_62;
  c_62 :
  TestFunFC(g_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto d_62;
  d_62 :
  TestFunFC(h_0,&&fail,Egetd(0,8));
  Rpush(c_19);
  goto x_60;
  f_19 :
  TestFunFC(w_18,&&g_19,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto e_62;
  e_62 :
  TestFunFC(g_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto f_62;
  f_62 :
  TestFunFC(h_0,&&fail,Egetd(0,8));
  Rpush(c_19);
  goto y_60;
  g_19 :
  TestFunFC(x_18,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto g_62;
  g_62 :
  TestFunFC(g_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto h_62;
  h_62 :
  TestFunFC(h_0,&&fail,Egetd(0,8));
  Rpush(c_19);
  goto z_60;
  c_19 :
  goto b_19;
  z_60 :
  Epushd(1,1);
  Move(0,5,0,7);
  Move(1,1,0,9);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  b_19 :
  goto a_19;
  y_60 :
  Epushd(1,1);
  Move(0,5,0,7);
  Move(1,1,0,9);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  a_19 :
  goto z_18;
  x_60 :
  Epushd(1,1);
  Move(0,5,0,7);
  Move(1,1,0,9);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  z_18 :
  goto y_18;
  w_60 :
  Epushd(1,7);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  _ST_explode_term();
  MoveTop(2,1);
  goto b_61;
  b_61 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto c_61;
  c_61 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto d_61;
  d_61 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  Rpush(i_19);
  goto a_61;
  i_19 :
  goto h_19;
  a_61 :
  Move(0,5,2,2);
  Move(1,1,2,4);
  Return();
  h_19 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Rpush(j_19);
  k_64 :
  Epushd(2,9);
  MoveTop(2,1);
  goto k_61;
  k_61 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto l_61;
  l_61 :
  TestFunFC(m_1,&&p_19,Egetd(2,2));
  goto m_61;
  m_61 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto n_61;
  n_61 :
  TestFunFC(m_1,&&fail,Egetd(2,6));
  goto o_61;
  o_61 :
  TestFunFC(h_0,&&fail,Egetd(2,9));
  Rpush(o_19);
  goto e_61;
  p_19 :
  TestFunFC(f_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto p_61;
  p_61 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto q_61;
  q_61 :
  TestFunFC(f_1,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto r_61;
  r_61 :
  TestFunFC(h_0,&&fail,Egetd(2,9));
  Rpush(o_19);
  goto f_61;
  o_19 :
  goto n_19;
  f_61 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(s_19);
  goto k_64;
  s_19 :
  OneNextSon();
  Ccall(_stratego_w_41);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto h_61;
  h_61 :
  TestFunFC(g_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto i_61;
  i_61 :
  TestFunFC(g_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto j_61;
  j_61 :
  TestFunFC(h_0,&&fail,Egetd(3,5));
  Rpush(t_19);
  goto g_61;
  t_19 :
  goto q_19;
  g_61 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  q_19 :
  Epopd(3,5);
  Return();
  n_19 :
  goto k_19;
  e_61 :
  Tset(App0("Nil"));
  Return();
  k_19 :
  Epopd(2,9);
  Return();
  j_19 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,9);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,9),App0("TNil"))));
  MoveTop(1,3);
  goto u_61;
  u_61 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto v_61;
  v_61 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto w_61;
  w_61 :
  TestFunFC(h_0,&&fail,Egetd(1,7));
  Rpush(z_19);
  goto t_61;
  z_19 :
  goto v_19;
  t_61 :
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(a_20);
  l_64 :
  Cpush(c_20);
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_20);
  goto l_64;
  e_20 :
  AllBuild();
  goto b_20;
  c_20 :
  Ccall(_stratego_d_42);
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  goto f_20;
  b_20 :
  Cpop();
  f_20 :
  Return();
  a_20 :
  Return();
  v_19 :
  Epopd(1,7);
  Return();
  y_18 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_w_39)
  Epushd(0,5);
  MoveTop(0,1);
  goto n_64;
  n_64 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_64;
  o_64 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto p_64;
  p_64 :
  TestFunFC(h_0,&&fail,Egetd(0,5));
  Rpush(h_20);
  goto m_64;
  h_20 :
  goto g_20;
  m_64 :
  Move(0,2,0,4);
  Return();
  g_20 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_x_39)
  Epushd(0,5);
  MoveTop(0,1);
  goto b_65;
  b_65 :
  TestFunFC(p_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto c_65;
  c_65 :
  TestFunFC(k_20,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(j_20);
  goto w_64;
  j_20 :
  goto i_20;
  w_64 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto y_64;
  y_64 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto z_64;
  z_64 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto a_65;
  a_65 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  Rpush(o_20);
  goto x_64;
  o_20 :
  goto n_20;
  x_64 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  n_20 :
  Epopd(2,5);
  Tpop();
  Tset(App0("Fail"));
  Epopd(1,2);
  Return();
  i_20 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_y_39)
  _ST_add();
ENDPROC

PROC(_stratego_z_39)
  Rpush(p_20);
  c_66 :
  Cpush(s_20);
  Ccall(_stratego_d_42);
  Tset(MakeInt(0));
  goto r_20;
  s_20 :
  Epushd(0,3);
  MoveTop(0,1);
  goto u_65;
  u_65 :
  TestFunFC(f_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(v_20);
  goto s_65;
  v_20 :
  goto u_20;
  s_65 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(w_20);
  goto c_66;
  w_20 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_y_39);
  Epopd(1,1);
  Return();
  u_20 :
  Epopd(0,3);
  goto t_20;
  r_20 :
  Cpop();
  t_20 :
  Return();
  p_20 :
ENDPROC

PROC(_stratego_a_40)
  Epushd(0,3);
  MoveTop(0,1);
  goto f_66;
  f_66 :
  TestFunFC(p_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto g_66;
  g_66 :
  TestFunFC(h_14,&&c_21,Egetd(0,3));
  goto h_66;
  h_66 :
  TestFunFC(h_14,&&e_21,Egetd(0,2));
  Cpush(h_21);
  Rpush(i_21);
  goto d_66;
  i_21 :
  goto g_21;
  h_21 :
  Rpush(k_21);
  goto e_66;
  k_21 :
  goto j_21;
  g_21 :
  Cpop();
  j_21 :
  goto a_21;
  e_21 :
  Rpush(a_21);
  goto e_66;
  c_21 :
  goto i_66;
  i_66 :
  TestFunFC(h_14,&&fail,Egetd(0,2));
  Rpush(a_21);
  goto d_66;
  a_21 :
  goto y_20;
  e_66 :
  Tset(App0("Fail"));
  Return();
  y_20 :
  goto x_20;
  d_66 :
  Tset(App0("Fail"));
  Return();
  x_20 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_b_40)
  Rpush(l_21);
  m_95 :
  Cpush(o_21);
  TestFunTop(p_16);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_21);
  goto m_95;
  p_21 :
  AllBuild();
  goto n_21;
  o_21 :
  goto u_21;
  n_21 :
  Cpop();
  u_21 :
  Cpush(w_21);
  Tdupl();
  Epushd(0,5);
  Tset(App2("TCons",ATmakeString("options"),App2("TCons",ATmakeString("Debug"),App0("TNil"))));
  MoveTop(0,1);
  goto r_66;
  r_66 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto s_66;
  s_66 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto t_66;
  t_66 :
  TestFunFC(h_0,&&fail,Egetd(0,5));
  Rpush(y_21);
  goto o_66;
  y_21 :
  goto x_21;
  o_66 :
  Epushd(1,3);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(1,1);
  goto q_66;
  q_66 :
  TestFunFC(f_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(a_22);
  goto p_66;
  a_22 :
  goto z_21;
  p_66 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  z_21 :
  Epopd(1,3);
  Return();
  x_21 :
  Epopd(0,5);
  Tpop();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("eval: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_m_41);
  Epopd(0,1);
  Tpop();
  goto v_21;
  w_21 :
  goto b_22;
  v_21 :
  Cpop();
  b_22 :
  Cpush(d_22);
  Cpush(f_22);
  Epushd(0,3);
  MoveTop(0,1);
  goto a_67;
  a_67 :
  TestFunFC(p_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto b_67;
  b_67 :
  TestFunFC(k_22,&&fail,Egetd(0,2));
  Rpush(h_22);
  goto z_66;
  h_22 :
  goto g_22;
  z_66 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  g_22 :
  Epopd(0,3);
  goto e_22;
  f_22 :
  Ccontinue(l_22);
  Ccall(_stratego_a_40);
  goto e_22;
  l_22 :
  Ccontinue(m_22);
  Epushd(0,6);
  MoveTop(0,3);
  goto t_70;
  t_70 :
  TestFunFC(p_16,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto u_70;
  u_70 :
  TestFunFC(e_23,&&d_23,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(c_23);
  goto c_67;
  d_23 :
  TestFunFC(j_23,&&f_23,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(c_23);
  goto d_67;
  f_23 :
  TestFunFC(n_23,&&m_23,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(c_23);
  goto e_67;
  m_23 :
  TestFunFC(p_23,&&o_23,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(c_23);
  goto f_67;
  o_23 :
  TestFunFC(r_23,&&q_23,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(c_23);
  goto g_67;
  q_23 :
  TestFunFC(u_23,&&s_23,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,2,0,4,1);
  goto v_70;
  v_70 :
  TestFunFC(r_2,&&fail,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  Cpush(w_23);
  Rpush(x_23);
  goto h_67;
  x_23 :
  goto v_23;
  w_23 :
  Rpush(a_24);
  goto i_67;
  a_24 :
  goto z_23;
  v_23 :
  Cpop();
  z_23 :
  goto c_23;
  s_23 :
  TestFunFC(x_0,&&b_24,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(c_23);
  goto j_67;
  b_24 :
  TestFunFC(a_1,&&c_24,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(c_23);
  goto k_67;
  c_24 :
  TestFunFC(e_24,&&d_24,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Cpush(i_24);
  Rpush(j_24);
  goto l_67;
  j_24 :
  goto f_24;
  i_24 :
  Rpush(l_24);
  goto m_67;
  l_24 :
  goto k_24;
  f_24 :
  Cpop();
  k_24 :
  goto c_23;
  d_24 :
  TestFunFC(q_24,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Cpush(u_24);
  Rpush(v_24);
  goto n_67;
  v_24 :
  goto r_24;
  u_24 :
  Rpush(z_24);
  goto o_67;
  z_24 :
  goto w_24;
  r_24 :
  Cpop();
  w_24 :
  goto c_23;
  c_23 :
  goto b_23;
  o_67 :
  Tset(App0("Fail"));
  Return();
  b_23 :
  goto y_22;
  n_67 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  _ST_explode_term();
  MoveTop(2,1);
  goto n_70;
  n_70 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_70;
  o_70 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_70;
  p_70 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  Rpush(b_25);
  goto m_70;
  b_25 :
  goto a_25;
  m_70 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  a_25 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(c_25);
  s_95 :
  Cpush(e_25);
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(0,5);
  NotNULLd(3,1);
  Tset(App2("App",Egetd(0,5),Egetd(3,1)));
  Rpush(f_25);
  goto m_95;
  f_25 :
  Cpush(g_25);
  Tdupl();
  Ccall(_stratego_u_37);
  Cpop();
  Crestore();
  Cjump();
  g_25 :
  Epopd(3,1);
  OneNextSon();
  AllBuild();
  goto d_25;
  e_25 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_25);
  goto s_95;
  i_25 :
  AllBuild();
  goto h_25;
  d_25 :
  Cpop();
  h_25 :
  Return();
  c_25 :
  MoveTop(2,1);
  Move(1,3,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(1,3),App0("TNil"))));
  _ST_mkterm();
  MoveTop(1,4);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Epopd(1,4);
  Return();
  y_22 :
  goto x_22;
  m_67 :
  Tset(App0("Fail"));
  Return();
  x_22 :
  goto w_22;
  l_67 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  _ST_explode_term();
  MoveTop(2,1);
  goto g_70;
  g_70 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto h_70;
  h_70 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto i_70;
  i_70 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  Rpush(k_25);
  goto f_70;
  k_25 :
  goto j_25;
  f_70 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  j_25 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(l_25);
  r_95 :
  Cpush(n_25);
  Ccall(_stratego_d_42);
  goto m_25;
  n_25 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(0,5);
  NotNULLd(3,1);
  Tset(App2("App",Egetd(0,5),Egetd(3,1)));
  Rpush(p_25);
  goto m_95;
  p_25 :
  Cpush(q_25);
  Tdupl();
  Ccall(_stratego_u_37);
  Cpop();
  Crestore();
  Cjump();
  q_25 :
  Epopd(3,1);
  OneNextSon();
  Rpush(r_25);
  goto r_95;
  r_25 :
  AllBuild();
  goto o_25;
  m_25 :
  Cpop();
  o_25 :
  Return();
  l_25 :
  MoveTop(2,1);
  Move(1,3,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(1,3),App0("TNil"))));
  _ST_mkterm();
  MoveTop(1,4);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Epopd(1,4);
  Return();
  w_22 :
  goto v_22;
  k_67 :
  NotNULLd(0,5);
  NotNULLd(0,2);
  NotNULLd(0,6);
  Tset(App2("App",App2("Let",App2("Cons",App3("SDef",Egetd(0,5),App0("Nil"),Egetd(0,2)),App0("Nil")),Egetd(0,2)),Egetd(0,6)));
  Cpush(t_25);
  Rpush(u_25);
  goto m_95;
  u_25 :
  goto s_25;
  t_25 :
  goto v_25;
  s_25 :
  Cpop();
  v_25 :
  Return();
  v_22 :
  goto u_22;
  j_67 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(w_25);
  p_95 :
  Cpush(y_25);
  Ccall(_stratego_d_42);
  goto x_25;
  y_25 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto t_69;
  t_69 :
  TestFunFC(y_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(b_26);
  goto l_69;
  b_26 :
  goto a_26;
  l_69 :
  Epushd(4,8);
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Ccall(_stratego_z_39);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))),App2("TCons",Egetd(3,1),App0("TNil")))));
  MoveTop(4,2);
  goto p_69;
  p_69 :
  TestFunFC(g_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto q_69;
  q_69 :
  TestFunFC(g_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto r_69;
  r_69 :
  TestFunFC(g_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto s_69;
  s_69 :
  TestFunFC(h_0,&&fail,Egetd(4,8));
  Rpush(d_26);
  goto n_69;
  d_26 :
  goto c_26;
  n_69 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  Cpush(f_26);
  NotNULLd(4,3);
  NotNULLd(4,5);
  Tset(App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,5),App0("TNil"))));
  Ccall(_stratego_y_41);
  goto e_26;
  f_26 :
  Tset(App0("Nil"));
  goto g_26;
  e_26 :
  Cpop();
  g_26 :
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,3);
  NotNULLd(4,5);
  NotNULLd(4,7);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,5),App2("TCons",App2("Cons",Egetd(4,7),Egetd(5,1)),App0("TNil")))));
  Ccall(_stratego_x_41);
  Epopd(6,1);
  Tpop();
  Epopd(5,1);
  Return();
  c_26 :
  Epopd(4,8);
  Return();
  a_26 :
  Epopd(3,4);
  OneNextSon();
  Rpush(i_26);
  goto p_95;
  i_26 :
  AllBuild();
  goto z_25;
  x_25 :
  Cpop();
  z_25 :
  Return();
  w_25 :
  NotNULLd(0,2);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(0,2),Egetd(0,6)));
  Rpush(j_26);
  goto m_95;
  j_26 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(l_26);
  q_95 :
  Cpush(n_26);
  Ccall(_stratego_d_42);
  goto m_26;
  n_26 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto e_70;
  e_70 :
  TestFunFC(y_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(q_26);
  goto v_69;
  q_26 :
  goto p_26;
  v_69 :
  Epushd(4,6);
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Ccall(_stratego_z_39);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))),App0("TNil"))));
  MoveTop(4,2);
  goto b_70;
  b_70 :
  TestFunFC(g_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto c_70;
  c_70 :
  TestFunFC(g_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto d_70;
  d_70 :
  TestFunFC(h_0,&&fail,Egetd(4,6));
  Rpush(t_26);
  goto x_69;
  t_26 :
  goto r_26;
  x_69 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  Cpush(v_26);
  Epushd(7,3);
  NotNULLd(4,3);
  NotNULLd(4,5);
  Tset(App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,5),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(7,1);
  goto z_69;
  z_69 :
  TestFunFC(f_1,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(x_26);
  goto y_69;
  x_26 :
  goto w_26;
  y_69 :
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Return();
  w_26 :
  Epopd(7,3);
  goto u_26;
  v_26 :
  Tset(App0("Nil"));
  goto y_26;
  u_26 :
  Cpop();
  y_26 :
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,3);
  NotNULLd(4,5);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,5),App2("TCons",Egetd(5,1),App0("TNil")))));
  Ccall(_stratego_x_41);
  Epopd(6,1);
  Tpop();
  Epopd(5,1);
  Return();
  r_26 :
  Epopd(4,6);
  Return();
  p_26 :
  Epopd(3,4);
  OneNextSon();
  Rpush(z_26);
  goto q_95;
  z_26 :
  AllBuild();
  goto o_26;
  m_26 :
  Cpop();
  o_26 :
  Return();
  l_26 :
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  u_22 :
  goto t_22;
  i_67 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_z_39);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("Cons",ATmakeString("operator "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(1,1),App2("Cons",ATmakeString(" not defined"),App0("Nil")))))));
  Ccall(_stratego_t_37);
  Epopd(1,1);
  Tpop();
  Tset(App0("Fail"));
  Return();
  t_22 :
  goto s_22;
  h_67 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_z_39);
  MoveTop(2,1);
  NotNULLd(0,1);
  NotNULLd(2,1);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",App2("TCons",Egetd(0,1),App2("TCons",Egetd(2,1),App0("TNil"))),App0("TNil"))));
  MoveTop(2,2);
  goto h_69;
  h_69 :
  TestFunFC(g_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto i_69;
  i_69 :
  TestFunFC(g_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto j_69;
  j_69 :
  TestFunFC(h_0,&&fail,Egetd(2,6));
  Rpush(b_27);
  goto v_67;
  b_27 :
  goto a_27;
  v_67 :
  Epushd(3,7);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(3,1);
  goto x_67;
  x_67 :
  TestFunFC(f_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(e_27);
  goto w_67;
  e_27 :
  goto d_27;
  w_67 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  d_27 :
  MoveTop(3,4);
  goto g_69;
  g_69 :
  TestFunFC(y_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  MoveArg(3,7,3,4,2);
  Rpush(f_27);
  goto y_67;
  f_27 :
  goto c_27;
  y_67 :
  Epushd(4,1);
  Move(0,1,3,5);
  Move(1,3,3,6);
  Move(1,1,3,7);
  NotNULLd(1,3);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(1,3),App2("TCons",Egetd(0,2),App0("TNil"))));
  Rpush(g_27);
  n_95 :
  Epushd(5,9);
  MoveTop(5,1);
  goto p_68;
  p_68 :
  TestFunFC(g_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,5,5,1,1);
  goto q_68;
  q_68 :
  TestFunFC(m_1,&&m_27,Egetd(5,2));
  goto r_68;
  r_68 :
  TestFunFC(g_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,9,5,5,1);
  goto s_68;
  s_68 :
  TestFunFC(m_1,&&fail,Egetd(5,6));
  goto t_68;
  t_68 :
  TestFunFC(h_0,&&fail,Egetd(5,9));
  Rpush(l_27);
  goto z_67;
  m_27 :
  TestFunFC(f_1,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto u_68;
  u_68 :
  TestFunFC(g_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,9,5,5,1);
  goto v_68;
  v_68 :
  TestFunFC(f_1,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto w_68;
  w_68 :
  TestFunFC(h_0,&&fail,Egetd(5,9));
  Rpush(l_27);
  goto a_68;
  l_27 :
  goto i_27;
  a_68 :
  Epushd(6,5);
  NotNULLd(5,3);
  NotNULLd(5,7);
  NotNULLd(5,4);
  NotNULLd(5,8);
  Tset(App2("TCons",App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(5,4),App2("TCons",Egetd(5,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(7,5);
  MoveTop(7,1);
  goto i_68;
  i_68 :
  TestFunFC(g_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto j_68;
  j_68 :
  TestFunFC(g_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto k_68;
  k_68 :
  TestFunFC(h_0,&&fail,Egetd(7,5));
  Rpush(p_27);
  goto b_68;
  p_27 :
  goto o_27;
  b_68 :
  Epushd(8,7);
  NotNULLd(7,2);
  NotNULLd(7,4);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",App2("TCons",Egetd(7,2),App2("TCons",MakeInt(0),App0("TNil"))),App2("TCons",App3("SDef",Egetd(7,2),App0("Nil"),Egetd(7,4)),App0("TNil")))));
  MoveTop(8,1);
  goto e_68;
  e_68 :
  TestFunFC(g_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto f_68;
  f_68 :
  TestFunFC(g_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto g_68;
  g_68 :
  TestFunFC(g_0,&&fail,Egetd(8,5));
  MoveArg(8,6,8,5,0);
  MoveArg(8,7,8,5,1);
  goto h_68;
  h_68 :
  TestFunFC(h_0,&&fail,Egetd(8,7));
  Rpush(r_27);
  goto c_68;
  r_27 :
  goto q_27;
  c_68 :
  Epushd(9,1);
  Tdupl();
  Epushd(10,1);
  Cpush(t_27);
  NotNULLd(8,2);
  NotNULLd(8,4);
  Tset(App2("TCons",Egetd(8,2),App2("TCons",Egetd(8,4),App0("TNil"))));
  Ccall(_stratego_y_41);
  goto s_27;
  t_27 :
  Tset(App0("Nil"));
  goto u_27;
  s_27 :
  Cpop();
  u_27 :
  MoveTop(10,1);
  Move(9,1,10,1);
  NotNULLd(8,2);
  NotNULLd(8,4);
  NotNULLd(8,6);
  NotNULLd(9,1);
  Tset(App2("TCons",Egetd(8,2),App2("TCons",Egetd(8,4),App2("TCons",App2("Cons",Egetd(8,6),Egetd(9,1)),App0("TNil")))));
  Ccall(_stratego_x_41);
  Epopd(10,1);
  Tpop();
  Epopd(9,1);
  Return();
  q_27 :
  Epopd(8,7);
  Return();
  o_27 :
  Epopd(7,5);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(v_27);
  goto n_95;
  v_27 :
  OneNextSon();
  Ccall(_stratego_w_41);
  AllBuild();
  AllBuild();
  MoveTop(6,1);
  goto m_68;
  m_68 :
  TestFunFC(g_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto n_68;
  n_68 :
  TestFunFC(g_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto o_68;
  o_68 :
  TestFunFC(h_0,&&fail,Egetd(6,5));
  Rpush(w_27);
  goto l_68;
  w_27 :
  goto n_27;
  l_68 :
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset(App2("Cons",Egetd(6,2),Egetd(6,4)));
  Return();
  n_27 :
  Epopd(6,5);
  Return();
  i_27 :
  goto h_27;
  z_67 :
  Tset(App0("Nil"));
  Return();
  h_27 :
  Epopd(5,9);
  Return();
  g_27 :
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(1,1),Egetd(0,6)));
  Rpush(x_27);
  goto m_95;
  x_27 :
  MoveTop(4,1);
  Move(1,2,4,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(y_27);
  o_95 :
  Cpush(a_28);
  Ccall(_stratego_d_42);
  goto z_27;
  a_28 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(5,6);
  MoveTop(5,1);
  NotNULLd(5,1);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",App2("TCons",Egetd(5,1),App2("TCons",MakeInt(0),App0("TNil"))),App0("TNil"))));
  MoveTop(5,2);
  goto d_69;
  d_69 :
  TestFunFC(g_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto e_69;
  e_69 :
  TestFunFC(g_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto f_69;
  f_69 :
  TestFunFC(h_0,&&fail,Egetd(5,6));
  Rpush(d_28);
  goto z_68;
  d_28 :
  goto c_28;
  z_68 :
  Epushd(6,1);
  Tdupl();
  Epushd(7,1);
  Cpush(f_28);
  Epushd(8,3);
  NotNULLd(5,3);
  NotNULLd(5,5);
  Tset(App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,5),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(8,1);
  goto b_69;
  b_69 :
  TestFunFC(f_1,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(h_28);
  goto a_69;
  h_28 :
  goto g_28;
  a_69 :
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Return();
  g_28 :
  Epopd(8,3);
  goto e_28;
  f_28 :
  Tset(App0("Nil"));
  goto i_28;
  e_28 :
  Cpop();
  i_28 :
  MoveTop(7,1);
  Move(6,1,7,1);
  NotNULLd(5,3);
  NotNULLd(5,5);
  NotNULLd(6,1);
  Tset(App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,5),App2("TCons",Egetd(6,1),App0("TNil")))));
  Ccall(_stratego_x_41);
  Epopd(7,1);
  Tpop();
  Epopd(6,1);
  Return();
  c_28 :
  Epopd(5,6);
  OneNextSon();
  Rpush(m_28);
  goto o_95;
  m_28 :
  AllBuild();
  goto b_28;
  z_27 :
  Cpop();
  b_28 :
  Return();
  y_27 :
  Epopd(4,1);
  Return();
  c_27 :
  Epopd(3,7);
  Return();
  a_27 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Epopd(1,3);
  Return();
  s_22 :
  goto r_22;
  g_67 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Cpush(o_28);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(0,5),Egetd(0,6)));
  Rpush(r_28);
  goto m_95;
  r_28 :
  Cpush(s_28);
  Tdupl();
  Ccall(_stratego_u_37);
  Cpop();
  Crestore();
  Cjump();
  s_28 :
  goto n_28;
  o_28 :
  Ccontinue(t_28);
  NotNULLd(0,2);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(0,2),Egetd(0,6)));
  Rpush(u_28);
  goto m_95;
  u_28 :
  Cpush(v_28);
  Tdupl();
  Ccall(_stratego_u_37);
  Cpop();
  Crestore();
  Cjump();
  v_28 :
  goto n_28;
  t_28 :
  Tset(App0("Fail"));
  goto w_28;
  n_28 :
  Cpop();
  w_28 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  r_22 :
  goto q_22;
  f_67 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Cpush(y_28);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(0,5),Egetd(0,6)));
  Rpush(b_29);
  goto m_95;
  b_29 :
  Cpush(e_29);
  Tdupl();
  Ccall(_stratego_u_37);
  Cpop();
  Crestore();
  Cjump();
  e_29 :
  goto x_28;
  y_28 :
  Ccontinue(f_29);
  NotNULLd(0,2);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(0,2),Egetd(0,6)));
  Rpush(j_29);
  goto m_95;
  j_29 :
  Cpush(k_29);
  Tdupl();
  Ccall(_stratego_u_37);
  Cpop();
  Crestore();
  Cjump();
  k_29 :
  goto x_28;
  f_29 :
  Tset(App0("Fail"));
  goto n_29;
  x_28 :
  Cpop();
  n_29 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  q_22 :
  goto p_22;
  e_67 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(0,2),App2("App",Egetd(0,5),Egetd(0,6))));
  Cpush(p_29);
  Rpush(q_29);
  goto m_95;
  q_29 :
  goto o_29;
  p_29 :
  goto r_29;
  o_29 :
  Cpop();
  r_29 :
  Return();
  p_22 :
  goto o_22;
  d_67 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Cpush(x_29);
  Epushd(3,1);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(0,5),Egetd(0,6)));
  Rpush(e_30);
  goto m_95;
  e_30 :
  MoveTop(3,1);
  goto q_67;
  q_67 :
  TestFunFC(h_14,&&fail,Egetd(3,1));
  Rpush(g_30);
  goto p_67;
  g_30 :
  goto z_29;
  p_67 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  z_29 :
  Epopd(3,1);
  goto t_29;
  x_29 :
  Tset(App0("Fail"));
  goto h_30;
  t_29 :
  Cpop();
  h_30 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  o_22 :
  goto n_22;
  c_67 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("App",App2("Seq",Egetd(0,5),App1("Build",Egetd(0,6))),Egetd(0,6)));
  Cpush(j_30);
  Rpush(k_30);
  goto m_95;
  k_30 :
  goto i_30;
  j_30 :
  goto l_30;
  i_30 :
  Cpop();
  l_30 :
  Return();
  n_22 :
  Epopd(0,6);
  goto e_22;
  m_22 :
  Ccontinue(m_30);
  Cpush(o_30);
  Epushd(0,5);
  MoveTop(0,1);
  goto v_71;
  v_71 :
  TestFunFC(p_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto w_71;
  w_71 :
  TestFunFC(k_20,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(r_30);
  goto w_70;
  r_30 :
  goto q_30;
  w_70 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto y_70;
  y_70 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto z_70;
  z_70 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto a_71;
  a_71 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  Rpush(u_30);
  goto x_70;
  u_30 :
  goto s_30;
  x_70 :
  Move(0,3,2,2);
  Move(1,1,2,4);
  Return();
  s_30 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",Egetd(1,1),App0("TNil"))));
  Rpush(v_30);
  t_95 :
  Epushd(3,9);
  MoveTop(3,1);
  goto l_71;
  l_71 :
  TestFunFC(g_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,5,3,1,1);
  goto m_71;
  m_71 :
  TestFunFC(m_1,&&a_31,Egetd(3,2));
  goto n_71;
  n_71 :
  TestFunFC(g_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,9,3,5,1);
  goto o_71;
  o_71 :
  TestFunFC(m_1,&&fail,Egetd(3,6));
  goto p_71;
  p_71 :
  TestFunFC(h_0,&&fail,Egetd(3,9));
  Rpush(y_30);
  goto b_71;
  a_31 :
  TestFunFC(f_1,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto q_71;
  q_71 :
  TestFunFC(g_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,9,3,5,1);
  goto r_71;
  r_71 :
  TestFunFC(f_1,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto s_71;
  s_71 :
  TestFunFC(h_0,&&fail,Egetd(3,9));
  Rpush(y_30);
  goto c_71;
  y_30 :
  goto x_30;
  c_71 :
  Epushd(4,5);
  NotNULLd(3,3);
  NotNULLd(3,7);
  NotNULLd(3,4);
  NotNULLd(3,8);
  Tset(App2("TCons",App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(3,4),App2("TCons",Egetd(3,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(5,5);
  MoveTop(5,1);
  goto e_71;
  e_71 :
  TestFunFC(g_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto f_71;
  f_71 :
  TestFunFC(g_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto g_71;
  g_71 :
  TestFunFC(h_0,&&fail,Egetd(5,5));
  Rpush(e_31);
  goto d_71;
  e_31 :
  goto d_31;
  d_71 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("App",Egetd(5,2),Egetd(5,4)));
  Rpush(f_31);
  goto m_95;
  f_31 :
  Cpush(g_31);
  Tdupl();
  Ccall(_stratego_u_37);
  Cpop();
  Crestore();
  Cjump();
  g_31 :
  Return();
  d_31 :
  Epopd(5,5);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Rpush(h_31);
  goto t_95;
  h_31 :
  OneNextSon();
  Ccall(_stratego_w_41);
  AllBuild();
  AllBuild();
  MoveTop(4,1);
  goto i_71;
  i_71 :
  TestFunFC(g_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto j_71;
  j_71 :
  TestFunFC(g_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto k_71;
  k_71 :
  TestFunFC(h_0,&&fail,Egetd(4,5));
  Rpush(i_31);
  goto h_71;
  i_31 :
  goto c_31;
  h_71 :
  NotNULLd(4,2);
  NotNULLd(4,4);
  Tset(App2("Cons",Egetd(4,2),Egetd(4,4)));
  Return();
  c_31 :
  Epopd(4,5);
  Return();
  x_30 :
  goto w_30;
  b_71 :
  Tset(App0("Nil"));
  Return();
  w_30 :
  Epopd(3,9);
  Return();
  v_30 :
  MoveTop(2,1);
  Move(1,2,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(1,2),App0("TNil"))));
  _ST_mkterm();
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Epopd(1,3);
  Return();
  q_30 :
  Epopd(0,5);
  goto n_30;
  o_30 :
  Ccall(_stratego_x_39);
  goto j_31;
  n_30 :
  Cpop();
  j_31 :
  goto e_22;
  m_30 :
  Ccontinue(o_31);
  Epushd(0,5);
  MoveTop(0,2);
  goto m_76;
  m_76 :
  TestFunFC(p_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto n_76;
  n_76 :
  TestFunFC(q_4,&&w_31,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,1,0,3,1);
  Rpush(v_31);
  goto x_71;
  w_31 :
  TestFunFC(y_31,&&x_31,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Cpush(a_32);
  Rpush(b_32);
  goto y_71;
  b_32 :
  goto z_31;
  a_32 :
  Rpush(d_32);
  goto z_71;
  d_32 :
  goto c_32;
  z_31 :
  Cpop();
  c_32 :
  goto v_31;
  x_31 :
  TestFunFC(f_32,&&e_32,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(v_31);
  goto a_72;
  e_32 :
  TestFunFC(g_32,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Cpush(i_32);
  Rpush(j_32);
  goto b_72;
  j_32 :
  goto h_32;
  i_32 :
  Rpush(l_32);
  goto c_72;
  l_32 :
  goto k_32;
  h_32 :
  Cpop();
  k_32 :
  goto v_31;
  v_31 :
  goto u_31;
  c_72 :
  Tset(App0("Fail"));
  Return();
  u_31 :
  goto t_31;
  b_72 :
  Tdupl();
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("App",Egetd(0,4),Egetd(0,5)));
  Rpush(m_32);
  goto m_95;
  m_32 :
  Cpush(n_32);
  Tdupl();
  Ccall(_stratego_u_37);
  Cpop();
  Crestore();
  Cjump();
  n_32 :
  Tpop();
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  t_31 :
  goto s_31;
  a_72 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(o_32);
  z_95 :
  Cpush(r_32);
  Epushd(3,2);
  MoveTop(3,1);
  goto h_76;
  h_76 :
  TestFunFC(u_4,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(t_32);
  goto x_75;
  t_32 :
  goto s_32;
  x_75 :
  Epushd(4,1);
  Tdupl();
  Epushd(5,5);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",Egetd(3,1),App0("TNil"))));
  MoveTop(5,1);
  goto e_76;
  e_76 :
  TestFunFC(g_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto f_76;
  f_76 :
  TestFunFC(g_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto g_76;
  g_76 :
  TestFunFC(h_0,&&fail,Egetd(5,5));
  Rpush(v_32);
  goto y_75;
  v_32 :
  goto u_32;
  y_75 :
  Epushd(6,4);
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,4),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(6,1);
  goto a_76;
  a_76 :
  TestFunFC(f_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(x_32);
  goto z_75;
  x_32 :
  goto w_32;
  z_75 :
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Return();
  w_32 :
  MoveTop(6,4);
  Move(4,1,6,4);
  Cpush(y_32);
  Tdupl();
  Epushd(7,1);
  MoveTop(7,1);
  goto d_76;
  d_76 :
  TestFunFC(b_33,&&fail,Egetd(7,1));
  Rpush(a_33);
  goto c_76;
  a_33 :
  goto z_32;
  c_76 :
  Return();
  z_32 :
  Epopd(7,1);
  Cpop();
  Crestore();
  Cjump();
  y_32 :
  Epopd(6,4);
  Return();
  u_32 :
  Epopd(5,5);
  Tpop();
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Epopd(4,1);
  Return();
  s_32 :
  Epopd(3,2);
  goto q_32;
  r_32 :
  Ccontinue(c_33);
  Epushd(3,3);
  TestFunTop(e_19);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_33);
  a_96 :
  Cpush(g_33);
  Ccall(_stratego_d_42);
  goto f_33;
  g_33 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Rpush(i_33);
  goto z_95;
  i_33 :
  OneNextSon();
  Rpush(j_33);
  goto a_96;
  j_33 :
  AllBuild();
  goto h_33;
  f_33 :
  Cpop();
  h_33 :
  Return();
  e_33 :
  AllBuild();
  MoveTop(3,1);
  goto k_76;
  k_76 :
  TestFunFC(e_19,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(k_33);
  goto i_76;
  k_33 :
  goto d_33;
  i_76 :
  Epushd(4,1);
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(3,3),App0("TNil"))));
  _ST_mkterm();
  MoveTop(4,1);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Epopd(4,1);
  Return();
  d_33 :
  Epopd(3,3);
  goto q_32;
  c_33 :
  Ccall(_stratego_u_39);
  goto l_33;
  q_32 :
  Cpop();
  l_33 :
  Return();
  o_32 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  s_31 :
  goto r_31;
  z_71 :
  Tset(App0("Fail"));
  Return();
  r_31 :
  goto q_31;
  y_71 :
  Tdupl();
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App2("TCons",Egetd(0,4),App2("TCons",Egetd(0,5),App0("TNil"))),App0("Nil")),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(m_33);
  w_95 :
  Cpush(o_33);
  Tdupl();
  Epushd(1,5);
  Tset(App2("TCons",ATmakeString("options"),App2("TCons",ATmakeString("Debug"),App0("TNil"))));
  MoveTop(1,1);
  goto x_72;
  x_72 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_72;
  y_72 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_72;
  z_72 :
  TestFunFC(h_0,&&fail,Egetd(1,5));
  Rpush(q_33);
  goto u_72;
  q_33 :
  goto p_33;
  u_72 :
  Epushd(2,3);
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(2,1);
  goto w_72;
  w_72 :
  TestFunFC(f_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(s_33);
  goto v_72;
  s_33 :
  goto r_33;
  v_72 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Return();
  r_33 :
  Epopd(2,3);
  Return();
  p_33 :
  Epopd(1,5);
  Tpop();
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("match1: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_m_41);
  Epopd(1,1);
  Tpop();
  goto n_33;
  o_33 :
  goto v_33;
  n_33 :
  Cpop();
  v_33 :
  Cpush(x_33);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(1,7);
  MoveTop(1,1);
  goto g_73;
  g_73 :
  TestFunFC(f_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto h_73;
  h_73 :
  TestFunFC(g_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto i_73;
  i_73 :
  TestFunFC(g_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto j_73;
  j_73 :
  TestFunFC(h_0,&&fail,Egetd(1,6));
  Rpush(z_33);
  goto f_73;
  z_33 :
  goto y_33;
  f_73 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  y_33 :
  Epopd(1,7);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_w_41);
  AllBuild();
  AllBuild();
  goto w_33;
  x_33 :
  Ccontinue(a_34);
  Epushd(1,11);
  MoveTop(1,1);
  goto s_73;
  s_73 :
  TestFunFC(f_34,&&e_34,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  goto t_73;
  t_73 :
  TestFunFC(u_4,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(d_34);
  goto k_73;
  e_34 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,9,1,1,1);
  goto u_73;
  u_73 :
  TestFunFC(f_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,8,1,2,1);
  goto v_73;
  v_73 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto w_73;
  w_73 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto x_73;
  x_73 :
  TestFunFC(h_0,&&fail,Egetd(1,7));
  goto z_73;
  z_73 :
  TestFunFC(g_0,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  MoveArg(1,11,1,9,1);
  goto a_74;
  a_74 :
  TestFunFC(h_0,&&fail,Egetd(1,11));
  Rpush(d_34);
  goto l_73;
  d_34 :
  goto c_34;
  l_73 :
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  MoveTop(2,1);
  goto r_73;
  r_73 :
  TestFunFC(u_4,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(h_34);
  goto m_73;
  h_34 :
  goto g_34;
  m_73 :
  NotNULLd(1,10);
  Tset(Egetd(1,10));
  Cpush(i_34);
  Tdupl();
  Rpush(j_34);
  x_95 :
  Cpush(l_34);
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(3,5);
  MoveTop(3,1);
  goto o_73;
  o_73 :
  TestFunFC(g_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto p_73;
  p_73 :
  TestFunFC(g_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto q_73;
  q_73 :
  TestFunFC(h_0,&&fail,Egetd(3,5));
  Rpush(n_34);
  goto n_73;
  n_34 :
  goto m_34;
  n_73 :
  Epushd(4,1);
  Move(1,4,3,2);
  Move(4,1,3,4);
  NotNULLd(1,6);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(1,6),App2("TCons",Egetd(4,1),App0("TNil"))));
  Cpush(o_34);
  Tdupl();
  Ccall(_stratego_w_39);
  Cpop();
  Crestore();
  Cjump();
  o_34 :
  Epopd(4,1);
  Return();
  m_34 :
  Epopd(3,5);
  OneNextSon();
  AllBuild();
  goto k_34;
  l_34 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_34);
  goto x_95;
  q_34 :
  AllBuild();
  goto p_34;
  k_34 :
  Cpop();
  p_34 :
  Return();
  j_34 :
  Cpop();
  Crestore();
  Cjump();
  i_34 :
  Return();
  g_34 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,8);
  NotNULLd(1,4);
  NotNULLd(1,6);
  NotNULLd(1,10);
  Tset(App2("TCons",Egetd(1,8),App2("TCons",App2("Cons",App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))),Egetd(1,10)),App0("TNil"))));
  Return();
  c_34 :
  goto b_34;
  k_73 :
  Return();
  b_34 :
  Epopd(1,11);
  goto w_33;
  a_34 :
  Ccontinue(r_34);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(1,7);
  MoveTop(1,1);
  goto c_74;
  c_74 :
  TestFunFC(f_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto e_74;
  e_74 :
  TestFunFC(g_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto f_74;
  f_74 :
  TestFunFC(u_34,&&fail,Egetd(1,3));
  goto g_74;
  g_74 :
  TestFunFC(g_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto h_74;
  h_74 :
  TestFunFC(h_0,&&fail,Egetd(1,6));
  Rpush(t_34);
  goto b_74;
  t_34 :
  goto s_34;
  b_74 :
  NotNULLd(1,7);
  Tset(Egetd(1,7));
  Return();
  s_34 :
  Epopd(1,7);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_w_41);
  AllBuild();
  AllBuild();
  goto w_33;
  r_34 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_39);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_w_41);
  AllBuild();
  AllBuild();
  goto v_34;
  w_33 :
  Cpop();
  v_34 :
  Cpush(x_34);
  Tdupl();
  Epushd(1,5);
  Tset(App2("TCons",ATmakeString("options"),App2("TCons",ATmakeString("Debug"),App0("TNil"))));
  MoveTop(1,1);
  goto l_74;
  l_74 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_74;
  m_74 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto n_74;
  n_74 :
  TestFunFC(h_0,&&fail,Egetd(1,5));
  Rpush(z_34);
  goto i_74;
  z_34 :
  goto y_34;
  i_74 :
  Epushd(2,3);
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(2,1);
  goto k_74;
  k_74 :
  TestFunFC(f_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(c_35);
  goto j_74;
  c_35 :
  goto b_35;
  j_74 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Return();
  b_35 :
  Epopd(2,3);
  Return();
  y_34 :
  Epopd(1,5);
  Tpop();
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("match2: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_m_41);
  Epopd(1,1);
  Tpop();
  goto w_34;
  x_34 :
  goto d_35;
  w_34 :
  Cpop();
  d_35 :
  Cpush(i_35);
  Epushd(1,5);
  MoveTop(1,1);
  goto u_74;
  u_74 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_74;
  v_74 :
  TestFunFC(m_1,&&fail,Egetd(1,2));
  goto w_74;
  w_74 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto x_74;
  x_74 :
  TestFunFC(h_0,&&fail,Egetd(1,5));
  Rpush(s_35);
  goto t_74;
  s_35 :
  goto r_35;
  t_74 :
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Return();
  r_35 :
  Epopd(1,5);
  goto e_35;
  i_35 :
  Rpush(u_35);
  goto w_95;
  u_35 :
  goto t_35;
  e_35 :
  Cpop();
  t_35 :
  Return();
  m_33 :
  Rpush(a_36);
  y_95 :
  Cpush(c_36);
  Ccall(_stratego_d_42);
  goto b_36;
  c_36 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(1,5);
  MoveTop(1,1);
  goto u_75;
  u_75 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_75;
  v_75 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto w_75;
  w_75 :
  TestFunFC(h_0,&&fail,Egetd(1,5));
  Rpush(f_36);
  goto y_74;
  f_36 :
  goto e_36;
  y_74 :
  Tdupl();
  Cpush(h_36);
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",Egetd(1,2),App0("TNil"))));
  MoveTop(2,1);
  goto l_75;
  l_75 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto m_75;
  m_75 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto n_75;
  n_75 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  Rpush(j_36);
  goto z_74;
  j_36 :
  goto i_36;
  z_74 :
  Epushd(3,4);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(3,1);
  goto b_75;
  b_75 :
  TestFunFC(f_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(m_36);
  goto a_75;
  m_36 :
  goto l_36;
  a_75 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  l_36 :
  MoveTop(3,4);
  goto k_75;
  k_75 :
  TestFunFC(b_33,&&fail,Egetd(3,4));
  Rpush(n_36);
  goto c_75;
  n_36 :
  goto k_36;
  c_75 :
  Epushd(4,7);
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,4),App0("TNil")))));
  MoveTop(4,1);
  goto g_75;
  g_75 :
  TestFunFC(g_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto h_75;
  h_75 :
  TestFunFC(g_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto i_75;
  i_75 :
  TestFunFC(g_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto j_75;
  j_75 :
  TestFunFC(h_0,&&fail,Egetd(4,7));
  Rpush(t_36);
  goto d_75;
  t_36 :
  goto p_36;
  d_75 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,3);
  NotNULLd(4,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(6,1);
  goto f_75;
  f_75 :
  TestFunFC(f_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(v_36);
  goto e_75;
  v_36 :
  goto u_36;
  e_75 :
  Move(5,1,6,3);
  NotNULLd(4,2);
  NotNULLd(4,4);
  NotNULLd(4,6);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",Egetd(4,6),Egetd(5,1)),App0("TNil")))));
  Ccall(_stratego_x_41);
  Return();
  u_36 :
  Epopd(6,3);
  Tpop();
  Epopd(5,1);
  Return();
  p_36 :
  Epopd(4,7);
  Return();
  k_36 :
  Epopd(3,4);
  Return();
  i_36 :
  Epopd(2,5);
  goto g_36;
  h_36 :
  Epushd(2,7);
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,4),App0("TNil")))));
  MoveTop(2,1);
  goto q_75;
  q_75 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto r_75;
  r_75 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_75;
  s_75 :
  TestFunFC(g_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto t_75;
  t_75 :
  TestFunFC(h_0,&&fail,Egetd(2,7));
  Rpush(y_36);
  goto o_75;
  y_36 :
  goto x_36;
  o_75 :
  Epushd(3,1);
  Tdupl();
  Epushd(4,1);
  Cpush(a_37);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_y_41);
  goto z_36;
  a_37 :
  Tset(App0("Nil"));
  goto b_37;
  z_36 :
  Cpop();
  b_37 :
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(2,2);
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App2("TCons",App2("Cons",Egetd(2,6),Egetd(3,1)),App0("TNil")))));
  Ccall(_stratego_x_41);
  Epopd(4,1);
  Tpop();
  Epopd(3,1);
  Return();
  x_36 :
  Epopd(2,7);
  goto w_36;
  g_36 :
  Cpop();
  w_36 :
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,4),App0("TNil"))));
  Return();
  e_36 :
  Epopd(1,5);
  OneNextSon();
  Rpush(c_37);
  goto y_95;
  c_37 :
  AllBuild();
  goto d_36;
  b_36 :
  Cpop();
  d_36 :
  Return();
  a_36 :
  Tpop();
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  q_31 :
  goto p_31;
  x_71 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(f_38);
  u_95 :
  Cpush(r_38);
  Ccall(_stratego_d_42);
  goto o_38;
  r_38 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(3,8);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",App2("TCons",App1("Var",Egetd(3,1)),App2("TCons",MakeInt(0),App0("TNil"))),App2("TCons",App0("NULL"),App0("TNil")))));
  MoveTop(3,2);
  goto g_72;
  g_72 :
  TestFunFC(g_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto h_72;
  h_72 :
  TestFunFC(g_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto i_72;
  i_72 :
  TestFunFC(g_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto j_72;
  j_72 :
  TestFunFC(h_0,&&fail,Egetd(3,8));
  Rpush(o_40);
  goto e_72;
  o_40 :
  goto n_40;
  e_72 :
  Epushd(4,1);
  Tdupl();
  Epushd(5,1);
  Cpush(r_40);
  NotNULLd(3,3);
  NotNULLd(3,5);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,5),App0("TNil"))));
  Ccall(_stratego_y_41);
  goto q_40;
  r_40 :
  Tset(App0("Nil"));
  goto s_40;
  q_40 :
  Cpop();
  s_40 :
  MoveTop(5,1);
  Move(4,1,5,1);
  NotNULLd(3,3);
  NotNULLd(3,5);
  NotNULLd(3,7);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,5),App2("TCons",App2("Cons",Egetd(3,7),Egetd(4,1)),App0("TNil")))));
  Ccall(_stratego_x_41);
  Epopd(5,1);
  Tpop();
  Epopd(4,1);
  Return();
  n_40 :
  Epopd(3,8);
  OneNextSon();
  Rpush(u_40);
  goto u_95;
  u_40 :
  AllBuild();
  goto k_40;
  o_38 :
  Cpop();
  k_40 :
  Return();
  f_38 :
  NotNULLd(0,1);
  NotNULLd(0,5);
  Tset(App2("App",Egetd(0,1),Egetd(0,5)));
  Rpush(a_42);
  goto m_95;
  a_42 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(j_42);
  v_95 :
  Cpush(l_42);
  Ccall(_stratego_d_42);
  goto k_42;
  l_42 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(3,6);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",App2("TCons",App1("Var",Egetd(3,1)),App2("TCons",MakeInt(0),App0("TNil"))),App0("TNil"))));
  MoveTop(3,2);
  goto q_72;
  q_72 :
  TestFunFC(g_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto r_72;
  r_72 :
  TestFunFC(g_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto s_72;
  s_72 :
  TestFunFC(h_0,&&fail,Egetd(3,6));
  Rpush(l_43);
  goto m_72;
  l_43 :
  goto n_42;
  m_72 :
  Epushd(4,1);
  Tdupl();
  Epushd(5,1);
  Cpush(f_44);
  Epushd(6,3);
  NotNULLd(3,3);
  NotNULLd(3,5);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,5),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(6,1);
  goto o_72;
  o_72 :
  TestFunFC(f_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(h_44);
  goto n_72;
  h_44 :
  goto g_44;
  n_72 :
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Return();
  g_44 :
  Epopd(6,3);
  goto n_43;
  f_44 :
  Tset(App0("Nil"));
  goto v_44;
  n_43 :
  Cpop();
  v_44 :
  MoveTop(5,1);
  Move(4,1,5,1);
  NotNULLd(3,3);
  NotNULLd(3,5);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,5),App2("TCons",Egetd(4,1),App0("TNil")))));
  Ccall(_stratego_x_41);
  Epopd(5,1);
  Tpop();
  Epopd(4,1);
  Return();
  n_42 :
  Epopd(3,6);
  OneNextSon();
  Rpush(c_45);
  goto v_95;
  c_45 :
  AllBuild();
  goto m_42;
  k_42 :
  Cpop();
  m_42 :
  Return();
  j_42 :
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  p_31 :
  Epopd(0,5);
  goto e_22;
  o_31 :
  Ccontinue(d_45);
  Ccall(_stratego_t_39);
  goto e_22;
  d_45 :
  Epushd(0,4);
  MoveTop(0,1);
  goto p_76;
  p_76 :
  TestFunFC(p_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto q_76;
  q_76 :
  TestFunFC(u_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(l_45);
  goto o_76;
  l_45 :
  goto f_45;
  o_76 :
  Tset(App0("Fail"));
  Return();
  f_45 :
  Epopd(0,4);
  goto e_45;
  e_22 :
  Cpop();
  e_45 :
  goto c_22;
  d_22 :
  goto m_45;
  c_22 :
  Cpop();
  m_45 :
  Return();
  l_21 :
ENDPROC

PROC(_stratego_c_40)
  Epushd(0,3);
  MoveTop(0,1);
  goto m_96;
  m_96 :
  TestFunFC(y_31,&&x_46,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(w_46);
  goto b_96;
  x_46 :
  TestFunFC(f_32,&&b_47,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(w_46);
  goto c_96;
  b_47 :
  TestFunFC(c_47,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(w_46);
  goto d_96;
  w_46 :
  goto v_45;
  d_96 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Prim",ATmakeString("_ST_explode_term")),App2("Seq",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,2),App2("Cons",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,3),App2("Cons",App2("Cong",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Prim",ATmakeString("_ST_mkterm")))));
  Return();
  v_45 :
  goto u_45;
  c_96 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_40);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(g_47);
  n_97 :
  Cpush(x_47);
  Epushd(2,3);
  MoveTop(2,1);
  goto k_96;
  k_96 :
  TestFunFC(f_48,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(z_47);
  goto j_96;
  z_47 :
  goto y_47;
  j_96 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  y_47 :
  Epopd(2,3);
  goto o_47;
  x_47 :
  IsAppl();
  OneInit();
  h_48 :
  OneNextSon();
  Cpush(h_48);
  Rpush(j_48);
  goto n_97;
  j_48 :
  Cpop();
  OneBuild();
  goto g_48;
  o_47 :
  Cpop();
  g_48 :
  Return();
  g_47 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",App1("Prim",ATmakeString("_ST_mkterm")),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  u_45 :
  goto o_45;
  b_96 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_40);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(p_48);
  m_97 :
  Cpush(a_49);
  Epushd(2,3);
  MoveTop(2,1);
  goto g_96;
  g_96 :
  TestFunFC(f_48,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(h_49);
  goto f_96;
  h_49 :
  goto g_49;
  f_96 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  g_49 :
  Epopd(2,3);
  goto q_48;
  a_49 :
  IsAppl();
  OneInit();
  x_49 :
  OneNextSon();
  Cpush(x_49);
  Rpush(a_50);
  goto m_97;
  a_50 :
  Cpop();
  OneBuild();
  goto t_49;
  q_48 :
  Cpop();
  t_49 :
  Return();
  p_48 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App1("Match",Egetd(1,4)),App1("Where",App3("BAM",App1("Prim",ATmakeString("_ST_explode_term")),App1("Var",Egetd(1,1)),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))))))));
  Epopd(1,4);
  Return();
  o_45 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_d_40)
  Epushd(0,2);
  MoveTop(0,1);
  goto t_97;
  t_97 :
  TestFunFC(f_32,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(e_50);
  goto o_97;
  e_50 :
  goto b_50;
  o_97 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_40);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(n_50);
  g_98 :
  Cpush(p_50);
  Epushd(2,3);
  MoveTop(2,1);
  goto r_97;
  r_97 :
  TestFunFC(p_16,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(s_50);
  goto q_97;
  s_50 :
  goto q_50;
  q_97 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  q_50 :
  Epopd(2,3);
  goto o_50;
  p_50 :
  IsAppl();
  OneInit();
  z_50 :
  OneNextSon();
  Cpush(z_50);
  Rpush(e_51);
  goto g_98;
  e_51 :
  Cpop();
  OneBuild();
  goto u_50;
  o_50 :
  Cpop();
  u_50 :
  Return();
  n_50 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",Egetd(1,2),Egetd(1,3),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  b_50 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_e_40)
  Epushd(0,2);
  MoveTop(0,1);
  goto m_98;
  m_98 :
  TestFunFC(f_32,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_51);
  goto h_98;
  l_51 :
  goto f_51;
  h_98 :
  Epushd(1,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(u_51);
  y_98 :
  Cpush(x_51);
  Epushd(2,4);
  MoveTop(2,1);
  goto j_98;
  j_98 :
  TestFunFC(p_16,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto k_98;
  k_98 :
  TestFunFC(f_32,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(f_52);
  goto i_98;
  f_52 :
  goto z_51;
  i_98 :
  Move(1,2,2,3);
  Move(1,1,2,4);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  z_51 :
  Epopd(2,4);
  goto v_51;
  x_51 :
  IsAppl();
  OneInit();
  k_52 :
  OneNextSon();
  Cpush(k_52);
  Rpush(x_52);
  goto y_98;
  x_52 :
  Cpop();
  OneBuild();
  goto g_52;
  v_51 :
  Cpop();
  g_52 :
  Return();
  u_51 :
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset(App1("Build",Egetd(1,3)));
  Epopd(1,3);
  Return();
  f_51 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_f_40)
  Epushd(0,6);
  MoveTop(0,3);
  goto l_99;
  l_99 :
  TestFunFC(z_54,&&n_54,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto m_99;
  m_99 :
  TestFunFC(m_1,&&g_55,Egetd(0,4));
  Rpush(m_54);
  goto z_98;
  g_55 :
  TestFunFC(f_1,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(m_54);
  goto a_99;
  n_54 :
  TestFunFC(l_55,&&h_55,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto n_99;
  n_99 :
  TestFunFC(m_1,&&m_55,Egetd(0,4));
  Rpush(m_54);
  goto b_99;
  m_55 :
  TestFunFC(f_1,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(m_54);
  goto c_99;
  h_55 :
  TestFunFC(b_56,&&q_55,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto o_99;
  o_99 :
  TestFunFC(m_1,&&c_56,Egetd(0,4));
  Rpush(m_54);
  goto d_99;
  c_56 :
  TestFunFC(f_1,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(m_54);
  goto e_99;
  q_55 :
  TestFunFC(e_56,&&d_56,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto p_99;
  p_99 :
  TestFunFC(m_1,&&f_56,Egetd(0,4));
  Rpush(m_54);
  goto f_99;
  f_56 :
  TestFunFC(f_1,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(m_54);
  goto g_99;
  d_56 :
  TestFunFC(i_56,&&g_56,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(m_54);
  goto h_99;
  g_56 :
  TestFunFC(k_56,&&j_56,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(m_54);
  goto i_99;
  j_56 :
  TestFunFC(m_56,&&l_56,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(m_54);
  goto j_99;
  l_56 :
  TestFunFC(s_58,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(m_54);
  goto k_99;
  m_54 :
  goto l_54;
  k_99 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Seqs",App2("Cons",App1("Build",Egetd(0,5)),App2("Cons",Egetd(0,4),App2("Cons",App1("Match",Egetd(0,6)),App0("Nil"))))));
  Return();
  l_54 :
  goto d_54;
  j_99 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,4),App1("Match",Egetd(0,5))));
  Return();
  d_54 :
  goto b_54;
  i_99 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",App1("Match",Egetd(0,4)),Egetd(0,5)));
  Return();
  b_54 :
  goto a_54;
  h_99 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App2("Seq",App1("Build",Egetd(0,5)),Egetd(0,4)));
  Return();
  a_54 :
  goto z_53;
  g_99 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,1),App2("Lets",Egetd(0,2),Egetd(0,5))));
  Return();
  z_53 :
  goto r_53;
  f_99 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  r_53 :
  goto o_53;
  e_99 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("LChoice",Egetd(0,1),App1("LChoices",Egetd(0,2))));
  Return();
  o_53 :
  goto m_53;
  d_99 :
  Tset(App0("Fail"));
  Return();
  m_53 :
  goto j_53;
  c_99 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Choice",Egetd(0,1),App1("Choices",Egetd(0,2))));
  Return();
  j_53 :
  goto h_53;
  b_99 :
  Tset(App0("Fail"));
  Return();
  h_53 :
  goto g_53;
  a_99 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Seq",Egetd(0,1),App1("Seqs",Egetd(0,2))));
  Return();
  g_53 :
  goto f_53;
  z_98 :
  Tset(App0("Id"));
  Return();
  f_53 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_g_40)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_100;
  s_100 :
  TestFunFC(u_34,&&fail,Egetd(0,1));
  Rpush(u_58);
  goto r_100;
  u_58 :
  goto t_58;
  r_100 :
  Return();
  t_58 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_40)
  Cpush(v_58);
  Tdupl();
  Rpush(w_58);
  a_101 :
  Cpush(y_58);
  Epushd(0,4);
  MoveTop(0,1);
  goto v_100;
  v_100 :
  TestFunFC(b_59,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(a_59);
  goto u_100;
  a_59 :
  goto z_58;
  u_100 :
  Return();
  z_58 :
  Epopd(0,4);
  goto x_58;
  y_58 :
  Ccall(_stratego_g_40);
  goto c_59;
  x_58 :
  Cpop();
  c_59 :
  AllInit();
  d_59 :
  AllNextSon(&&e_59);
  Rpush(f_59);
  goto a_101;
  f_59 :
  goto d_59;
  e_59 :
  AllBuild();
  Return();
  w_58 :
  Cpop();
  Crestore();
  Cjump();
  v_58 :
ENDPROC

PROC(_stratego_i_40)
  Cpush(g_59);
  Tdupl();
  Rpush(h_59);
  j_101 :
  Epushd(0,4);
  MoveTop(0,2);
  goto e_101;
  e_101 :
  TestFunFC(b_59,&&l_59,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,1,0,2,2);
  Rpush(k_59);
  goto b_101;
  l_59 :
  TestFunFC(p_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(k_59);
  goto d_101;
  k_59 :
  goto j_59;
  d_101 :
  Return();
  j_59 :
  goto i_59;
  b_101 :
  Return();
  i_59 :
  AllInit();
  m_59 :
  AllNextSon(&&n_59);
  Rpush(o_59);
  goto j_101;
  o_59 :
  goto m_59;
  n_59 :
  AllBuild();
  Epopd(0,4);
  Return();
  h_59 :
  Cpop();
  Crestore();
  Cjump();
  g_59 :
ENDPROC

PROC(_stratego_l_40)
  Epushd(0,5);
  MoveTop(0,1);
  goto m_101;
  m_101 :
  TestFunFC(s_59,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto n_101;
  n_101 :
  TestFunFC(a_5,&&t_59,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(r_59);
  goto k_101;
  t_59 :
  TestFunFC(u_59,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(r_59);
  goto l_101;
  r_59 :
  goto q_59;
  l_101 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",Egetd(0,3),App2("Cons",Egetd(0,5),App2("Cons",Egetd(0,4),App0("Nil"))))));
  Return();
  q_59 :
  goto p_59;
  k_101 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_i_40);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_h_40);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",App1("Match",Egetd(0,3)),App2("Cons",Egetd(0,5),App2("Cons",App1("Build",Egetd(0,4)),App0("Nil"))))));
  Return();
  p_59 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_m_40)
  _ST_new();
ENDPROC

PROC(_stratego_a_41)
  Epushd(0,5);
  MoveTop(0,1);
  goto m_102;
  m_102 :
  TestFunFC(s_59,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto n_102;
  n_102 :
  TestFunFC(a_5,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(w_59);
  goto a_102;
  w_59 :
  goto v_59;
  a_102 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_m_40);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(x_59);
  v_103 :
  Cpush(z_59);
  Epushd(2,5);
  MoveTop(2,1);
  goto d_102;
  d_102 :
  TestFunFC(b_59,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto e_102;
  e_102 :
  TestFunFC(u_4,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(b_60);
  goto c_102;
  b_60 :
  goto a_60;
  c_102 :
  Move(1,4,2,3);
  Move(1,2,2,4);
  Move(1,3,2,5);
  NotNULLd(1,4);
  Tset(App1("Var",Egetd(1,4)));
  Return();
  a_60 :
  Epopd(2,5);
  goto y_59;
  z_59 :
  IsAppl();
  OneInit();
  d_60 :
  OneNextSon();
  Cpush(d_60);
  Rpush(f_60);
  goto v_103;
  f_60 :
  Cpop();
  OneBuild();
  goto c_60;
  y_59 :
  Cpop();
  c_60 :
  Return();
  x_59 :
  MoveTop(1,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(g_60);
  w_103 :
  Cpush(i_60);
  Epushd(2,7);
  MoveTop(2,1);
  goto h_102;
  h_102 :
  TestFunFC(b_59,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto i_102;
  i_102 :
  TestFunFC(u_4,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto j_102;
  j_102 :
  TestFunFC(u_23,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto k_102;
  k_102 :
  TestFunFC(m_1,&&fail,Egetd(2,7));
  Rpush(k_60);
  goto g_102;
  k_60 :
  goto j_60;
  g_102 :
  Move(1,4,2,3);
  Move(1,6,2,4);
  Move(1,7,2,6);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  j_60 :
  Epopd(2,7);
  goto h_60;
  i_60 :
  IsAppl();
  OneInit();
  m_60 :
  OneNextSon();
  Cpush(m_60);
  Rpush(u_60);
  goto w_103;
  u_60 :
  Cpop();
  OneBuild();
  goto l_60;
  h_60 :
  Cpop();
  l_60 :
  Return();
  g_60 :
  MoveTop(1,8);
  NotNULLd(1,5);
  NotNULLd(1,8);
  NotNULLd(0,5);
  NotNULLd(1,7);
  NotNULLd(1,2);
  NotNULLd(1,6);
  NotNULLd(1,4);
  NotNULLd(1,1);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App1("SRule",App3("Rule",Egetd(1,5),Egetd(1,8),App2("Seq",Egetd(0,5),App3("BAM",App2("Call",Egetd(1,7),App2("Cons",App1("SRule",App3("Rule",Egetd(1,2),Egetd(1,6),App0("Id"))),App0("Nil"))),App1("Var",Egetd(1,4)),App1("Var",Egetd(1,1))))))));
  Epopd(1,8);
  Return();
  v_59 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_b_41)
  Rpush(v_60);
  x_103 :
  Cpush(r_62);
  Cpush(u_62);
  Ccall(_stratego_a_41);
  Rpush(v_62);
  goto x_103;
  v_62 :
  goto s_62;
  u_62 :
  Ccontinue(k_63);
  TestFunTop(q_4);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_63);
  goto x_103;
  l_63 :
  AllBuild();
  goto s_62;
  k_63 :
  Ccall(_stratego_l_40);
  goto m_63;
  s_62 :
  Cpop();
  m_63 :
  goto s_61;
  r_62 :
  goto n_63;
  s_61 :
  Cpop();
  n_63 :
  Return();
  v_60 :
ENDPROC

PROC(_stratego_c_41)
  Rpush(t_63);
  h_104 :
  Cpush(w_63);
  Ccall(_stratego_b_41);
  goto u_63;
  w_63 :
  goto c_64;
  u_63 :
  Cpop();
  c_64 :
  Cpush(e_64);
  d_64 :
  Cpush(i_64);
  Ccall(_stratego_f_40);
  goto g_64;
  i_64 :
  Ccontinue(v_64);
  Cpush(j_65);
  Ccall(_stratego_e_40);
  goto i_65;
  j_65 :
  Ccontinue(m_65);
  Epushd(0,4);
  MoveTop(0,1);
  goto z_103;
  z_103 :
  TestFunFC(f_32,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto a_104;
  a_104 :
  TestFunFC(p_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(y_65);
  goto y_103;
  y_65 :
  goto t_65;
  y_103 :
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Build",Egetd(0,4)),Egetd(0,3)));
  Return();
  t_65 :
  Epopd(0,4);
  goto i_65;
  m_65 :
  Ccall(_stratego_d_40);
  goto z_65;
  i_65 :
  Cpop();
  z_65 :
  goto g_64;
  v_64 :
  Ccall(_stratego_c_40);
  goto b_66;
  g_64 :
  Cpop();
  b_66 :
  Tduplinv();
  goto d_64;
  e_64 :
  AllInit();
  m_66 :
  AllNextSon(&&n_66);
  Rpush(u_66);
  goto h_104;
  u_66 :
  goto m_66;
  n_66 :
  AllBuild();
  Return();
  t_63 :
ENDPROC

PROC(_stratego_d_41)
  Cpush(w_66);
  Cpush(y_66);
  Epushd(0,6);
  MoveTop(0,1);
  goto k_105;
  k_105 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto l_105;
  l_105 :
  TestFunFC(t_67,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto m_105;
  m_105 :
  TestFunFC(g_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto n_105;
  n_105 :
  TestFunFC(h_0,&&fail,Egetd(0,6));
  Rpush(s_67);
  goto j_104;
  s_67 :
  goto r_67;
  j_104 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_c_41);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,5);
  Tset(App2("App",Egetd(1,1),Egetd(0,5)));
  Cpush(d_68);
  Tdupl();
  Epushd(2,5);
  Tset(App2("TCons",ATmakeString("options"),App2("TCons",ATmakeString("Debug"),App0("TNil"))));
  MoveTop(2,1);
  goto o_104;
  o_104 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto p_104;
  p_104 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_104;
  q_104 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  Rpush(y_68);
  goto l_104;
  y_68 :
  goto x_68;
  l_104 :
  Epushd(3,3);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(3,1);
  goto n_104;
  n_104 :
  TestFunFC(f_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(k_69);
  goto m_104;
  k_69 :
  goto c_69;
  m_104 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  c_69 :
  Epopd(3,3);
  Return();
  x_68 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("Evaluate strategy: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_m_41);
  Epopd(2,1);
  Tpop();
  goto u_67;
  d_68 :
  goto m_69;
  u_67 :
  Cpop();
  m_69 :
  Ccall(_stratego_b_40);
  Cpush(u_69);
  Tdupl();
  Epushd(2,5);
  Tset(App2("TCons",ATmakeString("options"),App2("TCons",ATmakeString("Trace"),App0("TNil"))));
  MoveTop(2,1);
  goto b_105;
  b_105 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto c_105;
  c_105 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto d_105;
  d_105 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  Rpush(a_70);
  goto w_104;
  a_70 :
  goto w_69;
  w_104 :
  Epushd(3,3);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(3,1);
  goto a_105;
  a_105 :
  TestFunFC(f_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(k_70);
  goto x_104;
  k_70 :
  goto j_70;
  x_104 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  j_70 :
  Epopd(3,3);
  Return();
  w_69 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("> "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_m_41);
  Epopd(2,1);
  Tpop();
  goto o_69;
  u_69 :
  goto l_70;
  o_69 :
  Cpop();
  l_70 :
  Cpush(r_70);
  Ccall(_stratego_u_37);
  Tset(App2("Cons",ATmakeString("rewriting failed"),App0("Nil")));
  Ccall(_stratego_t_37);
  goto q_70;
  r_70 :
  goto s_70;
  q_70 :
  Cpop();
  s_70 :
  Epopd(1,1);
  Return();
  r_67 :
  Epopd(0,6);
  goto x_66;
  y_66 :
  Epushd(0,5);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Cpush(f_72);
  Epushd(1,2);
  MoveTop(1,1);
  goto q_106;
  q_106 :
  TestFunFC(a_73,&&t_72,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(p_72);
  goto o_105;
  t_72 :
  TestFunFC(b_73,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(p_72);
  goto p_105;
  p_72 :
  goto l_72;
  p_105 :
  Epushd(2,3);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_g_41);
  MoveTop(2,1);
  goto p_106;
  p_106 :
  TestFunFC(e_73,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(d_73);
  goto y_105;
  d_73 :
  goto c_73;
  y_105 :
  Epushd(3,5);
  NotNULLd(2,2);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(3,1);
  goto m_106;
  m_106 :
  TestFunFC(g_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto n_106;
  n_106 :
  TestFunFC(g_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto o_106;
  o_106 :
  TestFunFC(h_0,&&fail,Egetd(3,5));
  Rpush(d_74);
  goto z_105;
  d_74 :
  goto y_73;
  z_105 :
  Epushd(4,5);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(o_74);
  b_113 :
  Cpush(q_74);
  Ccall(_stratego_d_42);
  goto p_74;
  q_74 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(5,5);
  MoveTop(5,1);
  goto b_106;
  b_106 :
  TestFunFC(g_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto c_106;
  c_106 :
  TestFunFC(g_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto d_106;
  d_106 :
  TestFunFC(h_0,&&fail,Egetd(5,5));
  Rpush(p_75);
  goto a_106;
  p_75 :
  goto s_74;
  a_106 :
  NotNULLd(3,2);
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,4),App0("TNil")))));
  Ccall(_stratego_x_41);
  Return();
  s_74 :
  Epopd(5,5);
  OneNextSon();
  Rpush(b_76);
  goto b_113;
  b_76 :
  AllBuild();
  goto r_74;
  p_74 :
  Cpop();
  r_74 :
  Return();
  o_74 :
  NotNULLd(2,3);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",Egetd(2,3),App0("TNil"))));
  MoveTop(4,1);
  goto j_106;
  j_106 :
  TestFunFC(g_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto k_106;
  k_106 :
  TestFunFC(g_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto l_106;
  l_106 :
  TestFunFC(h_0,&&fail,Egetd(4,5));
  Rpush(l_76);
  goto e_106;
  l_76 :
  goto j_76;
  e_106 :
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(w_76);
  c_113 :
  Cpush(b_77);
  Ccall(_stratego_d_42);
  goto x_76;
  b_77 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(5,5);
  MoveTop(5,1);
  goto g_106;
  g_106 :
  TestFunFC(g_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto h_106;
  h_106 :
  TestFunFC(g_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto i_106;
  i_106 :
  TestFunFC(h_0,&&fail,Egetd(5,5));
  Rpush(f_77);
  goto f_106;
  f_77 :
  goto e_77;
  f_106 :
  NotNULLd(4,2);
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,4),App0("TNil")))));
  Ccall(_stratego_x_41);
  Return();
  e_77 :
  Epopd(5,5);
  OneNextSon();
  Rpush(g_77);
  goto c_113;
  g_77 :
  AllBuild();
  goto c_77;
  x_76 :
  Cpop();
  c_77 :
  Return();
  w_76 :
  Return();
  j_76 :
  Epopd(4,5);
  Return();
  y_73 :
  Epopd(3,5);
  Return();
  c_73 :
  Epopd(2,3);
  Return();
  l_72 :
  goto k_72;
  o_105 :
  Epushd(2,2);
  Tset(ATmakeString("tenv"));
  Ccall(_stratego_o_39);
  Rpush(h_77);
  z_112 :
  Cpush(j_77);
  Ccall(_stratego_d_42);
  goto i_77;
  j_77 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  Epopd(3,2);
  OneNextSon();
  Rpush(l_77);
  goto z_112;
  l_77 :
  AllBuild();
  goto k_77;
  i_77 :
  Cpop();
  k_77 :
  Return();
  h_77 :
  MoveTop(2,1);
  Tset(ATmakeString("senv"));
  Ccall(_stratego_o_39);
  Rpush(m_77);
  a_113 :
  Cpush(x_77);
  Ccall(_stratego_d_42);
  goto q_77;
  x_77 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  Epopd(3,2);
  OneNextSon();
  Rpush(z_77);
  goto a_113;
  z_77 :
  AllBuild();
  goto y_77;
  q_77 :
  Cpop();
  y_77 :
  Return();
  m_77 :
  MoveTop(2,2);
  NotNULLd(1,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",App2("StrategoDump",Egetd(2,1),Egetd(2,2)),App0("TNil"))));
  Ccall(_stratego_d_39);
  Tdupl();
  NotNULLd(1,2);
  Tset(App2("TCons",ATmakeString("image written to file: "),App2("TCons",Egetd(1,2),App0("TNil"))));
  Ccall(_stratego_u_41);
  Ccall(_stratego_n_41);
  Tpop();
  Epopd(2,2);
  Return();
  k_72 :
  Epopd(1,2);
  goto d_72;
  f_72 :
  Ccontinue(a_78);
  Ccall(_stratego_r_37);
  goto d_72;
  a_78 :
  Epushd(1,2);
  MoveTop(1,1);
  goto z_106;
  z_106 :
  TestFunFC(j_78,&&i_78,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(h_78);
  goto r_106;
  i_78 :
  TestFunFC(m_78,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(h_78);
  goto s_106;
  h_78 :
  goto g_78;
  s_106 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(n_78);
  e_113 :
  Cpush(r_78);
  Ccall(_stratego_d_42);
  goto o_78;
  r_78 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  Ccall(_stratego_o_37);
  MoveTop(2,1);
  goto y_106;
  y_106 :
  TestFunFC(z_78,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(w_78);
  goto w_106;
  w_78 :
  goto t_78;
  w_106 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_n_37);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,4);
  Tset(App3("SDef",Egetd(2,2),Egetd(2,3),App2("Scope",Egetd(3,1),App1("SRule",Egetd(2,4)))));
  Ccall(_stratego_c_41);
  Epopd(3,1);
  Return();
  t_78 :
  Epopd(2,4);
  OneNextSon();
  Rpush(f_79);
  goto e_113;
  f_79 :
  AllBuild();
  goto s_78;
  o_78 :
  Cpop();
  s_78 :
  Return();
  n_78 :
  Ccall(_stratego_p_37);
  Return();
  g_78 :
  goto f_78;
  r_106 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(g_79);
  d_113 :
  Cpush(l_79);
  Ccall(_stratego_d_42);
  goto k_79;
  l_79 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  Ccall(_stratego_o_37);
  MoveTop(2,1);
  goto v_106;
  v_106 :
  TestFunFC(y_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(b_80);
  goto t_106;
  b_80 :
  goto a_80;
  t_106 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_n_37);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,4);
  Tset(App3("SDef",Egetd(2,2),Egetd(2,3),App2("Scope",Egetd(3,1),Egetd(2,4))));
  Ccall(_stratego_c_41);
  Ccall(_stratego_j_37);
  Epopd(3,1);
  Return();
  a_80 :
  Epopd(2,4);
  OneNextSon();
  Rpush(c_80);
  goto d_113;
  c_80 :
  AllBuild();
  goto z_79;
  k_79 :
  Cpop();
  z_79 :
  Return();
  g_79 :
  Ccall(_stratego_p_37);
  Return();
  f_78 :
  Epopd(1,2);
  goto e_78;
  d_72 :
  Cpop();
  e_78 :
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_w_41);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto b_107;
  b_107 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto c_107;
  c_107 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(i_80);
  goto a_107;
  i_80 :
  goto u_71;
  a_107 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Return();
  u_71 :
  Epopd(0,5);
  goto t_71;
  x_66 :
  Cpop();
  t_71 :
  goto v_66;
  w_66 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("unknown command: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_m_41);
  Epopd(0,1);
  Tpop();
  Tset(MakeInt(1));
  Ccall(_stratego_d_37);
  goto j_80;
  v_66 :
  Cpop();
  j_80 :
ENDPROC

PROC(_stratego_e_41)
  Rpush(r_80);
  x_113 :
  Cpush(t_80);
  Epushd(0,7);
  MoveTop(0,1);
  goto h_113;
  h_113 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto i_113;
  i_113 :
  TestFunFC(f_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto j_113;
  j_113 :
  TestFunFC(g_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto k_113;
  k_113 :
  TestFunFC(h_0,&&fail,Egetd(0,7));
  Rpush(c_81);
  goto f_113;
  c_81 :
  goto b_81;
  f_113 :
  Epushd(1,1);
  NotNULLd(0,3);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,6),App0("TNil"))));
  Ccall(_stratego_d_41);
  MoveTop(1,1);
  NotNULLd(0,4);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",Egetd(1,1),App0("TNil"))));
  Rpush(f_81);
  goto x_113;
  f_81 :
  Epopd(1,1);
  Return();
  b_81 :
  Epopd(0,7);
  goto s_80;
  t_80 :
  goto l_81;
  s_80 :
  Cpop();
  l_81 :
  Return();
  r_80 :
ENDPROC

PROC(_stratego_g_41)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_h_41)
  Epushd(0,2);
  MoveTop(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_g_41);
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Epopd(0,2);
ENDPROC

PROC(_stratego_m_41)
  _ST_printnl();
ENDPROC

PROC(_stratego_n_41)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_m_41);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_s_41)
  _ST_implode_string();
ENDPROC

PROC(_stratego_t_41)
  _ST_explode_string();
ENDPROC

PROC(_stratego_u_41)
  Epushd(0,5);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_41);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_41);
  OneNextSon();
  Ccall(_stratego_w_41);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto u_114;
  u_114 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto v_114;
  v_114 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto w_114;
  w_114 :
  TestFunFC(h_0,&&fail,Egetd(0,5));
  Rpush(r_81);
  goto t_114;
  r_81 :
  goto m_81;
  t_114 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(s_81);
  e_115 :
  Cpush(v_81);
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_81);
  goto e_115;
  w_81 :
  AllBuild();
  goto u_81;
  v_81 :
  Ccall(_stratego_d_42);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto y_81;
  u_81 :
  Cpop();
  y_81 :
  Return();
  s_81 :
  Ccall(_stratego_s_41);
  Return();
  m_81 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_v_41)
  Epushd(0,1);
  Tdupl();
  Epushd(1,2);
  Cpush(b_82);
  Epushd(2,5);
  Tset(App2("TCons",ATmakeString("options"),App2("TCons",ATmakeString("DeclVersion"),App0("TNil"))));
  MoveTop(2,1);
  goto i_115;
  i_115 :
  TestFunFC(g_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto j_115;
  j_115 :
  TestFunFC(g_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto k_115;
  k_115 :
  TestFunFC(h_0,&&fail,Egetd(2,5));
  Rpush(i_82);
  goto f_115;
  i_82 :
  goto h_82;
  f_115 :
  Epushd(3,3);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_y_41);
  MoveTop(3,1);
  goto h_115;
  h_115 :
  TestFunFC(f_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_82);
  goto g_115;
  l_82 :
  goto j_82;
  g_115 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  j_82 :
  Epopd(3,3);
  Return();
  h_82 :
  Epopd(2,5);
  goto a_82;
  b_82 :
  Tset(App1("DeclVersion",ATmakeString("")));
  goto t_82;
  a_82 :
  Cpop();
  t_82 :
  MoveTop(1,1);
  goto m_115;
  m_115 :
  TestFunFC(v_82,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(u_82);
  goto l_115;
  u_82 :
  goto z_81;
  l_115 :
  Move(0,1,1,2);
  Return();
  z_81 :
  Epopd(1,2);
  Tpop();
  Tdupl();
  Tset(ATmakeString("--------------------------------------------------------------------"));
  Ccall(_stratego_n_41);
  Tpop();
  Tdupl();
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("This is SI, the Stratego Interpreter "),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_u_41);
  Ccall(_stratego_n_41);
  Tpop();
  Tdupl();
  Tset(ATmakeString("Copyright (c) 2001, Eelco Visser <visser@acm.org>"));
  Ccall(_stratego_n_41);
  Tpop();
  Tdupl();
  Tset(ATmakeString("This program is free software; you can redistribute it and/or modify"));
  Ccall(_stratego_n_41);
  Tpop();
  Tdupl();
  Tset(ATmakeString("it under the terms of the GNU General Public License as published by"));
  Ccall(_stratego_n_41);
  Tpop();
  Tdupl();
  Tset(ATmakeString("the Free Software Foundation; either version 2, or (at your option)"));
  Ccall(_stratego_n_41);
  Tpop();
  Tdupl();
  Tset(ATmakeString("any later version."));
  Ccall(_stratego_n_41);
  Tpop();
  Tdupl();
  Tset(ATmakeString("--------------------------------------------------------------------"));
  Ccall(_stratego_n_41);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_41)
  Epushd(0,1);
  MoveTop(0,1);
  goto d_116;
  d_116 :
  TestFunFC(h_0,&&fail,Egetd(0,1));
  Rpush(e_83);
  goto c_116;
  e_83 :
  goto d_83;
  c_116 :
  Return();
  d_83 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_41)
  _ST_table_put();
ENDPROC

PROC(_stratego_y_41)
  _ST_table_get();
ENDPROC

PROC(_stratego_b_42)
  Epushd(0,5);
  MoveTop(0,3);
  goto s_116;
  s_116 :
  TestFunFC(f_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto t_116;
  t_116 :
  TestFunFC(f_1,&&t_83,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(w_83);
  Rpush(x_83);
  goto f_116;
  x_83 :
  goto v_83;
  w_83 :
  Ccontinue(y_83);
  Rpush(b_84);
  goto g_116;
  b_84 :
  goto v_83;
  y_83 :
  Rpush(m_84);
  goto h_116;
  m_84 :
  goto j_84;
  v_83 :
  Cpop();
  j_84 :
  goto s_83;
  t_83 :
  Cpush(o_84);
  Rpush(p_84);
  goto g_116;
  p_84 :
  goto n_84;
  o_84 :
  Rpush(a_85);
  goto h_116;
  a_85 :
  goto s_84;
  n_84 :
  Cpop();
  s_84 :
  goto s_83;
  s_83 :
  goto n_83;
  h_116 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_116;
  q_116 :
  TestStr(1,1,"-t",&&fail);
  Rpush(e_85);
  goto p_116;
  e_85 :
  goto d_85;
  p_116 :
  Return();
  d_85 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Trace"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Trace"),Egetd(0,5)));
  Return();
  n_83 :
  goto m_83;
  g_116 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_116;
  n_116 :
  TestStr(1,1,"-d",&&fail);
  Rpush(l_85);
  goto m_116;
  l_85 :
  goto f_85;
  m_116 :
  Return();
  f_85 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Debug"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Debug"),Egetd(0,5)));
  Return();
  m_83 :
  goto g_83;
  f_116 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto j_116;
  j_116 :
  TestStr(1,1,"-I",&&fail);
  Rpush(o_85);
  goto i_116;
  o_85 :
  goto m_85;
  i_116 :
  Return();
  m_85 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("InclDir",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("InclDir",Egetd(0,1)),Egetd(0,2)));
  Return();
  g_83 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_c_42)
  Epushd(0,5);
  MoveTop(0,3);
  goto e_120;
  e_120 :
  TestFunFC(f_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto f_120;
  f_120 :
  TestFunFC(f_1,&&y_87,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(f_88);
  Rpush(k_88);
  goto r_117;
  k_88 :
  goto e_88;
  f_88 :
  Ccontinue(l_88);
  Rpush(n_88);
  goto s_117;
  n_88 :
  goto e_88;
  l_88 :
  Ccontinue(o_88);
  Rpush(p_88);
  goto t_117;
  p_88 :
  goto e_88;
  o_88 :
  Ccontinue(q_88);
  Rpush(w_88);
  goto u_117;
  w_88 :
  goto e_88;
  q_88 :
  Ccontinue(x_88);
  Rpush(b_89);
  goto v_117;
  b_89 :
  goto e_88;
  x_88 :
  Ccontinue(c_89);
  Rpush(e_89);
  goto w_117;
  e_89 :
  goto e_88;
  c_89 :
  Ccontinue(f_89);
  Rpush(g_89);
  goto x_117;
  g_89 :
  goto e_88;
  f_89 :
  Ccontinue(h_89);
  Rpush(i_89);
  goto y_117;
  i_89 :
  goto e_88;
  h_89 :
  Ccontinue(j_89);
  Rpush(k_89);
  goto z_117;
  k_89 :
  goto e_88;
  j_89 :
  Ccontinue(l_89);
  Rpush(m_89);
  goto a_118;
  m_89 :
  goto e_88;
  l_89 :
  Ccontinue(u_89);
  Rpush(h_90);
  goto b_118;
  h_90 :
  goto e_88;
  u_89 :
  Ccontinue(i_90);
  Rpush(j_90);
  goto c_118;
  j_90 :
  goto e_88;
  i_90 :
  Ccontinue(k_90);
  Rpush(a_91);
  goto d_118;
  a_91 :
  goto e_88;
  k_90 :
  Ccontinue(g_91);
  Rpush(h_91);
  goto e_118;
  h_91 :
  goto e_88;
  g_91 :
  Rpush(m_91);
  goto f_118;
  m_91 :
  goto l_91;
  e_88 :
  Cpop();
  l_91 :
  goto t_87;
  y_87 :
  Cpush(p_91);
  Rpush(q_91);
  goto r_117;
  q_91 :
  goto o_91;
  p_91 :
  Ccontinue(r_91);
  Rpush(s_91);
  goto s_117;
  s_91 :
  goto o_91;
  r_91 :
  Ccontinue(t_91);
  Rpush(u_91);
  goto t_117;
  u_91 :
  goto o_91;
  t_91 :
  Ccontinue(v_91);
  Rpush(w_91);
  goto u_117;
  w_91 :
  goto o_91;
  v_91 :
  Ccontinue(c_92);
  Rpush(i_92);
  goto v_117;
  i_92 :
  goto o_91;
  c_92 :
  Ccontinue(j_92);
  Rpush(p_92);
  goto b_118;
  p_92 :
  goto o_91;
  j_92 :
  Ccontinue(q_92);
  Rpush(u_92);
  goto c_118;
  u_92 :
  goto o_91;
  q_92 :
  Ccontinue(v_92);
  Rpush(e_93);
  goto d_118;
  e_93 :
  goto o_91;
  v_92 :
  Ccontinue(f_93);
  Rpush(g_93);
  goto e_118;
  g_93 :
  goto o_91;
  f_93 :
  Rpush(t_93);
  goto f_118;
  t_93 :
  goto s_93;
  o_91 :
  Cpop();
  s_93 :
  goto t_87;
  t_87 :
  goto s_87;
  f_118 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_120;
  c_120 :
  TestStr(1,1,"-?",&&fail);
  Rpush(x_93);
  goto b_120;
  x_93 :
  goto u_93;
  b_120 :
  Return();
  u_93 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  s_87 :
  goto r_87;
  e_118 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_119;
  z_119 :
  TestStr(1,1,"-h",&&fail);
  Rpush(z_93);
  goto y_119;
  z_93 :
  goto y_93;
  y_119 :
  Return();
  y_93 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  r_87 :
  goto j_87;
  d_118 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_119;
  w_119 :
  TestStr(1,1,"--help",&&fail);
  Rpush(e_94);
  goto v_119;
  e_94 :
  goto a_94;
  v_119 :
  Return();
  a_94 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_87 :
  goto g_87;
  c_118 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_119;
  t_119 :
  TestStr(1,1,"-s",&&fail);
  Rpush(m_94);
  goto s_119;
  m_94 :
  goto l_94;
  s_119 :
  Return();
  l_94 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  g_87 :
  goto f_87;
  b_118 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_119;
  q_119 :
  TestStr(1,1,"-b",&&fail);
  Rpush(r_94);
  goto p_119;
  r_94 :
  goto q_94;
  p_119 :
  Return();
  q_94 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  f_87 :
  goto e_87;
  a_118 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_119;
  m_119 :
  TestStr(1,1,"--output",&&fail);
  Rpush(y_94);
  goto l_119;
  y_94 :
  goto x_94;
  l_119 :
  Return();
  x_94 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  e_87 :
  goto y_86;
  z_117 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_119;
  i_119 :
  TestStr(1,1,"-o",&&fail);
  Rpush(c_95);
  goto h_119;
  c_95 :
  goto a_95;
  h_119 :
  Return();
  a_95 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2)));
  Return();
  y_86 :
  goto v_86;
  y_117 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_119;
  e_119 :
  TestStr(1,1,"--input",&&fail);
  Rpush(e_95);
  goto d_119;
  e_95 :
  goto d_95;
  d_119 :
  Return();
  d_95 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  v_86 :
  goto u_86;
  x_117 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_119;
  a_119 :
  TestStr(1,1,"-i",&&fail);
  Rpush(k_95);
  goto z_118;
  k_95 :
  goto f_95;
  z_118 :
  Return();
  f_95 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2)));
  Return();
  u_86 :
  goto o_86;
  w_117 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_118;
  w_118 :
  TestStr(1,1,"@version",&&fail);
  Rpush(e_96);
  goto v_118;
  e_96 :
  goto l_95;
  v_118 :
  Return();
  l_95 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2)));
  Return();
  o_86 :
  goto n_86;
  v_117 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_118;
  t_118 :
  TestStr(1,1,"--version",&&fail);
  Rpush(i_96);
  goto s_118;
  i_96 :
  goto h_96;
  s_118 :
  Return();
  h_96 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  n_86 :
  goto h_86;
  u_117 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_118;
  q_118 :
  TestStr(1,1,"-v",&&fail);
  Rpush(q_96);
  goto p_118;
  q_96 :
  goto l_96;
  p_118 :
  Return();
  l_96 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  h_86 :
  goto g_86;
  t_117 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_118;
  n_118 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(a_97);
  goto m_118;
  a_97 :
  goto z_96;
  m_118 :
  Return();
  z_96 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  g_86 :
  goto f_86;
  s_117 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_118;
  k_118 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(k_97);
  goto j_118;
  k_97 :
  goto j_97;
  j_118 :
  Return();
  j_97 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  f_86 :
  goto e_86;
  r_117 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_118;
  h_118 :
  TestStr(1,1,"-S",&&fail);
  Rpush(p_97);
  goto g_118;
  p_97 :
  goto l_97;
  g_118 :
  Return();
  l_97 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  e_86 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_d_42)
  Epushd(0,1);
  MoveTop(0,1);
  goto y_123;
  y_123 :
  TestFunFC(m_1,&&fail,Egetd(0,1));
  Rpush(w_97);
  goto x_123;
  w_97 :
  goto s_97;
  x_123 :
  Return();
  s_97 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_42)
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(f_98);
  q_125 :
  Cpush(p_98);
  Cpush(w_99);
  Ccall(_stratego_d_42);
  goto x_98;
  w_99 :
  Cpush(z_99);
  Ccall(_stratego_c_42);
  goto y_99;
  z_99 :
  Ccall(_stratego_b_42);
  goto a_100;
  y_99 :
  Cpop();
  a_100 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_100);
  goto q_125;
  b_100 :
  AllBuild();
  goto x_99;
  x_98 :
  Cpop();
  x_99 :
  goto l_98;
  p_98 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_124;
  c_124 :
  TestFunFC(f_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(e_100);
  goto b_124;
  e_100 :
  goto d_100;
  b_124 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  d_100 :
  Epopd(0,3);
  goto c_100;
  l_98 :
  Cpop();
  c_100 :
  Return();
  f_98 :
  AllBuild();
  Rpush(f_100);
  r_125 :
  Cpush(h_100);
  Ccall(_stratego_d_42);
  goto g_100;
  h_100 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  Epushd(0,9);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto f_124;
  f_124 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_124;
  g_124 :
  TestFunFC(g_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto h_124;
  h_124 :
  TestFunFC(h_0,&&fail,Egetd(1,5));
  Rpush(k_100);
  goto e_124;
  k_100 :
  goto j_100;
  e_124 :
  Move(0,2,1,2);
  Return();
  j_100 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("options"),App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,1),App0("TNil")))));
  MoveTop(0,3);
  goto k_124;
  k_124 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto l_124;
  l_124 :
  TestFunFC(g_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto m_124;
  m_124 :
  TestFunFC(g_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,9,0,7,1);
  goto n_124;
  n_124 :
  TestFunFC(h_0,&&fail,Egetd(0,9));
  Rpush(m_100);
  goto i_124;
  m_100 :
  goto l_100;
  i_124 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Cpush(o_100);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",Egetd(0,6),App0("TNil"))));
  Ccall(_stratego_y_41);
  goto n_100;
  o_100 :
  Tset(App0("Nil"));
  goto p_100;
  n_100 :
  Cpop();
  p_100 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,4);
  NotNULLd(0,6);
  NotNULLd(0,8);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",Egetd(0,6),App2("TCons",App2("Cons",Egetd(0,8),Egetd(1,1)),App0("TNil")))));
  Ccall(_stratego_x_41);
  Epopd(2,1);
  Tpop();
  Epopd(1,1);
  Return();
  l_100 :
  Epopd(0,9);
  OneNextSon();
  Rpush(q_100);
  goto r_125;
  q_100 :
  AllBuild();
  goto i_100;
  g_100 :
  Cpop();
  i_100 :
  Return();
  f_100 :
ENDPROC

PROC(_stratego_f_42)
  Epushd(0,7);
  Rpush(c_101);
  y_126 :
  Cpush(u_101);
  Epushd(1,3);
  MoveTop(1,1);
  goto v_125;
  v_125 :
  TestFunFC(f_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_125;
  w_125 :
  TestStr(1,2,"--args",&&fail);
  Rpush(w_101);
  goto s_125;
  w_101 :
  goto v_101;
  s_125 :
  Epushd(2,3);
  MoveTop(2,1);
  goto u_125;
  u_125 :
  TestFunFC(f_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(y_101);
  goto t_125;
  y_101 :
  goto x_101;
  t_125 :
  Move(0,1,2,3);
  Tset(App0("Nil"));
  Return();
  x_101 :
  Epopd(2,3);
  Return();
  v_101 :
  Epopd(1,3);
  goto p_101;
  u_101 :
  TestFunTop(f_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_102);
  goto y_126;
  b_102 :
  AllBuild();
  goto z_101;
  p_101 :
  Cpop();
  z_101 :
  Return();
  c_101 :
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  NotNULLd(0,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_42);
  OneNextSon();
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_w_41);
  AllBuild();
  AllBuild();
  MoveTop(0,3);
  goto b_126;
  b_126 :
  TestFunFC(g_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto c_126;
  c_126 :
  TestFunFC(g_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  Rpush(l_102);
  goto a_126;
  l_102 :
  goto f_102;
  a_126 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  f_102 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_g_42)
  _ST_create_table();
ENDPROC

PROC(_stratego_h_42)
  Ccall(_stratego_g_42);
ENDPROC

PROC(_stratego_i_42)
  Tdupl();
  Tset(ATmakeString("options"));
  Ccall(_stratego_h_42);
  Tpop();
  Tdupl();
  Tset(ATmakeString("senv"));
  Ccall(_stratego_h_42);
  Tpop();
  Tdupl();
  Tset(ATmakeString("tenv"));
  Ccall(_stratego_h_42);
  Tpop();
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_i_42);
  Ccall(_stratego_f_42);
  Ccall(_stratego_v_41);
  Ccall(_stratego_h_41);
  Ccall(_stratego_e_41);
  Ccall(_stratego_f_37);
  Tset(MakeInt(0));
  Ccall(_stratego_d_37);
ENDPROC

DOIT

