#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,d_87);
VARDECL(AFun,y_85);
VARDECL(AFun,f_85);
VARDECL(AFun,e_80);
VARDECL(AFun,b_80);
VARDECL(AFun,z_79);
VARDECL(AFun,u_78);
VARDECL(AFun,r_72);
VARDECL(AFun,i_72);
VARDECL(AFun,e_70);
VARDECL(AFun,q_69);
VARDECL(AFun,p_69);
VARDECL(AFun,h_69);
VARDECL(AFun,w_68);
VARDECL(AFun,e_66);
VARDECL(AFun,v_65);
VARDECL(AFun,g_65);
VARDECL(AFun,d_64);
VARDECL(AFun,e_54);
VARDECL(AFun,y_53);
VARDECL(AFun,o_47);
VARDECL(AFun,h_45);
VARDECL(AFun,o_42);
VARDECL(AFun,a_40);
VARDECL(AFun,z_39);
VARDECL(AFun,h_39);
VARDECL(AFun,l_23);
VARDECL(AFun,e_23);
VARDECL(AFun,z_22);
VARDECL(AFun,x_22);
VARDECL(AFun,v_22);
VARDECL(AFun,t_22);
VARDECL(AFun,r_22);
VARDECL(AFun,p_22);
VARDECL(AFun,x_21);
VARDECL(AFun,t_20);
VARDECL(AFun,d_20);
VARDECL(AFun,y_18);
VARDECL(AFun,q_18);
VARDECL(AFun,p_18);
VARDECL(AFun,n_18);
VARDECL(AFun,f_16);
VARDECL(AFun,e_16);
VARDECL(AFun,g_13);
VARDECL(AFun,d_5);
VARDECL(AFun,c_5);
VARDECL(AFun,x_4);
VARDECL(AFun,t_4);
VARDECL(AFun,u_2);
VARDECL(AFun,p_1);
VARDECL(AFun,i_1);
VARDECL(AFun,d_1);
VARDECL(AFun,b_1);
VARDECL(AFun,a_1);
VARDECL(AFun,k_0);
VARDECL(AFun,d_0);
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
PROCDECL(_stratego_j_28);
PROCDECL(_stratego_k_28);
PROCDECL(_stratego_l_28);
PROCDECL(_stratego_m_28);
PROCDECL(_stratego_n_28);
PROCDECL(_stratego_o_28);
PROCDECL(_stratego_p_28);
PROCDECL(_stratego_q_28);
PROCDECL(_stratego_r_28);
PROCDECL(_stratego_s_28);
PROCDECL(_stratego_t_28);
PROCDECL(_stratego_u_28);
PROCDECL(_stratego_v_28);
PROCDECL(_stratego_w_28);
PROCDECL(_stratego_x_28);
PROCDECL(_stratego_y_28);
PROCDECL(_stratego_b_29);
PROCDECL(_stratego_c_29);
PROCDECL(_stratego_g_29);
PROCDECL(_stratego_h_29);
PROCDECL(_stratego_i_29);
PROCDECL(_stratego_j_29);
PROCDECL(_stratego_k_29);
PROCDECL(_stratego_l_29);
PROCDECL(_stratego_m_29);
PROCDECL(_stratego_n_29);
PROCDECL(_stratego_f_30);
PROCDECL(_stratego_g_30);
PROCDECL(_stratego_h_30);
PROCDECL(_stratego_i_30);
PROCDECL(_stratego_j_30);
PROCDECL(_stratego_k_30);
PROCDECL(_stratego_m_30);
PROCDECL(_stratego_n_30);
PROCDECL(_stratego_o_30);
PROCDECL(_stratego_q_30);
PROCDECL(_stratego_r_30);
PROCDECL(_stratego_s_30);
PROCDECL(_stratego_t_30);
PROCDECL(_stratego_u_30);
PROCDECL(_stratego_v_30);
PROCDECL(_stratego_x_30);
PROCDECL(_stratego_y_30);
PROCDECL(_stratego_z_30);
PROCDECL(_stratego_a_31);
PROCDECL(_stratego_b_31);
PROCDECL(_stratego_c_31);
PROCDECL(_stratego_d_31);
PROCDECL(_stratego_e_31);
PROCDECL(_stratego_f_31);
PROCDECL(_stratego_m_31);
PROCDECL(_stratego_n_31);
PROCDECL(_stratego_o_31);
PROCDECL(_stratego_p_31);
PROCDECL(_stratego_q_31);
PROCDECL(_stratego_r_31);
PROCDECL(_stratego_s_31);
PROCDECL(_stratego_t_31);
PROCDECL(_stratego_u_31);
PROCDECL(_stratego_v_31);
PROCDECL(_stratego_w_31);
PROCDECL(_stratego_x_31);
PROCDECL(_stratego_y_31);
PROCDECL(_stratego_z_31);
PROCDECL(_stratego_a_32);
PROCDECL(_stratego_b_32);
PROCDECL(_stratego_c_32);
PROCDECL(_stratego_d_32);
PROCDECL(_stratego_e_32);
PROCDECL(_stratego_f_32);
PROCDECL(_stratego_g_32);
PROCDECL(_stratego_h_32);
PROCDECL(_stratego_i_32);
PROCDECL(_stratego_j_32);
PROCDECL(_stratego_k_32);
PROCDECL(_stratego_l_32);
PROCDECL(_stratego_m_32);
PROCDECL(_stratego_n_32);
PROCDECL(_stratego_o_32);
PROCDECL(_stratego_p_32);
PROCDECL(_stratego_q_32);
PROCDECL(_stratego_r_32);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(d_87,ATmakeAFun("RDef",3,0));
  MOVE(y_85,ATmakeAFun("Rules",1,0));
  MOVE(f_85,ATmakeAFun("Strategies",1,0));
  MOVE(e_80,ATmakeAFun("StrategoDump",2,0));
  MOVE(b_80,ATmakeAFun("Load",1,0));
  MOVE(z_79,ATmakeAFun("Dump",1,0));
  MOVE(u_78,ATmakeAFun("Eval",1,0));
  MOVE(r_72,ATmakeAFun("StratRule",3,0));
  MOVE(i_72,ATmakeAFun("SRule",1,0));
  MOVE(e_70,ATmakeAFun("Con",3,0));
  MOVE(q_69,ATmakeAFun("BAM",3,0));
  MOVE(p_69,ATmakeAFun("AM",2,0));
  MOVE(h_69,ATmakeAFun("MA",2,0));
  MOVE(w_68,ATmakeAFun("BA",2,0));
  MOVE(e_66,ATmakeAFun("Lets",2,0));
  MOVE(v_65,ATmakeAFun("LChoices",1,0));
  MOVE(g_65,ATmakeAFun("Choices",1,0));
  MOVE(d_64,ATmakeAFun("Seqs",1,0));
  MOVE(e_54,ATmakeAFun("Explode",2,0));
  MOVE(y_53,ATmakeAFun("ExplodeCong",2,0));
  MOVE(o_47,ATmakeAFun("Wld",0,0));
  MOVE(h_45,ATmakeAFun("MatchVar",1,0));
  MOVE(o_42,ATmakeAFun("NULL",0,0));
  MOVE(a_40,ATmakeAFun("Where",1,0));
  MOVE(z_39,ATmakeAFun("Build",1,0));
  MOVE(h_39,ATmakeAFun("Match",1,0));
  MOVE(l_23,ATmakeAFun("One",1,0));
  MOVE(e_23,ATmakeAFun("All",1,0));
  MOVE(z_22,ATmakeAFun("Call",2,0));
  MOVE(x_22,ATmakeAFun("LChoice",2,0));
  MOVE(v_22,ATmakeAFun("Choice",2,0));
  MOVE(t_22,ATmakeAFun("Seq",2,0));
  MOVE(r_22,ATmakeAFun("Not",1,0));
  MOVE(p_22,ATmakeAFun("Test",1,0));
  MOVE(x_21,ATmakeAFun("Id",0,0));
  MOVE(t_20,ATmakeAFun("Fail",0,0));
  MOVE(d_20,ATmakeAFun("Cong",2,0));
  MOVE(y_18,ATmakeAFun("Op",2,0));
  MOVE(q_18,ATmakeAFun("Real",1,0));
  MOVE(p_18,ATmakeAFun("Str",1,0));
  MOVE(n_18,ATmakeAFun("Int",1,0));
  MOVE(f_16,ATmakeAFun("Prim",1,0));
  MOVE(e_16,ATmakeAFun("App",2,0));
  MOVE(g_13,ATmakeAFun("Imports",1,0));
  MOVE(d_5,ATmakeAFun("Rule",3,0));
  MOVE(c_5,ATmakeAFun("LRule",1,0));
  MOVE(x_4,ATmakeAFun("Var",1,0));
  MOVE(t_4,ATmakeAFun("Scope",2,0));
  MOVE(u_2,ATmakeAFun("SVar",1,0));
  MOVE(p_1,ATmakeAFun("Nil",0,0));
  MOVE(i_1,ATmakeAFun("Cons",2,0));
  MOVE(d_1,ATmakeAFun("Rec",2,0));
  MOVE(b_1,ATmakeAFun("SDef",3,0));
  MOVE(a_1,ATmakeAFun("Let",2,0));
  MOVE(k_0,ATmakeAFun("TCons",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
ENDPROC

PROC(_stratego_v_27)
  Ccall(_stratego_c_31);
ENDPROC

PROC(_stratego_w_27)
  Tdupl();
  Tset(ATmakeString("senv"));
  Ccall(_stratego_v_27);
  Tpop();
  Tdupl();
  Tset(ATmakeString("tenv"));
  Ccall(_stratego_v_27);
  Tpop();
ENDPROC

PROC(_stratego_x_27)
  Epushd(0,1);
  MoveTop(0,1);
  goto r_1;
  r_1 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto a_0;
  c_0 :
  goto b_0;
  a_0 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_27)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(e_0);
  p_24 :
  Rpush(f_0);
  q_24 :
  Epushd(1,5);
  MoveTop(1,1);
  goto k_8;
  k_8 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto l_8;
  l_8 :
  TestFunFC(k_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto m_8;
  m_8 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Cpush(m_0);
  Rpush(n_0);
  goto i_3;
  n_0 :
  goto l_0;
  m_0 :
  Ccontinue(o_0);
  Rpush(p_0);
  goto k_6;
  p_0 :
  goto l_0;
  o_0 :
  Rpush(r_0);
  goto n_6;
  r_0 :
  goto q_0;
  l_0 :
  Cpop();
  q_0 :
  goto j_0;
  j_0 :
  goto i_0;
  n_6 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  s_0 :
  AllNextSon(&&t_0);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(u_0);
  goto q_24;
  u_0 :
  Epopd(2,1);
  goto s_0;
  t_0 :
  AllBuild();
  Return();
  i_0 :
  goto h_0;
  k_6 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,15);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,5);
  goto u_6;
  u_6 :
  TestFunFC(a_1,&&z_0,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto v_6;
  v_6 :
  TestFunFC(b_1,&&fail,Egetd(3,6));
  MoveArg(3,1,3,6,0);
  MoveArg(3,2,3,6,1);
  MoveArg(3,3,3,6,2);
  Rpush(y_0);
  goto r_6;
  z_0 :
  TestFunFC(b_1,&&c_1,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  MoveArg(3,4,3,5,2);
  Rpush(y_0);
  goto s_6;
  c_1 :
  TestFunFC(d_1,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(y_0);
  goto t_6;
  y_0 :
  goto x_0;
  t_6 :
  NotNULLd(3,6);
  Tset(App2("Cons",Egetd(3,6),App0("Nil")));
  Return();
  x_0 :
  goto w_0;
  s_6 :
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  Return();
  w_0 :
  goto v_0;
  r_6 :
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Return();
  v_0 :
  MoveTop(3,8);
  Move(2,1,3,8);
  Rpush(e_1);
  u_24 :
  Cpush(g_1);
  Ccall(_stratego_r_31);
  goto f_1;
  g_1 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_32);
  OneNextSon();
  Rpush(j_1);
  goto u_24;
  j_1 :
  AllBuild();
  goto h_1;
  f_1 :
  Cpop();
  h_1 :
  Return();
  e_1 :
  MoveTop(3,9);
  Move(2,2,3,9);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(k_1);
  v_24 :
  Epushd(4,9);
  MoveTop(4,1);
  goto e_7;
  e_7 :
  TestFunFC(k_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto f_7;
  f_7 :
  TestFunFC(p_1,&&o_1,Egetd(4,2));
  goto g_7;
  g_7 :
  TestFunFC(k_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto h_7;
  h_7 :
  TestFunFC(p_1,&&fail,Egetd(4,6));
  goto i_7;
  i_7 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(n_1);
  goto y_6;
  o_1 :
  TestFunFC(i_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto j_7;
  j_7 :
  TestFunFC(k_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto k_7;
  k_7 :
  TestFunFC(i_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto l_7;
  l_7 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(n_1);
  goto z_6;
  n_1 :
  goto m_1;
  z_6 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Rpush(t_1);
  goto v_24;
  t_1 :
  OneNextSon();
  Ccall(_stratego_x_27);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto b_7;
  b_7 :
  TestFunFC(k_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto c_7;
  c_7 :
  TestFunFC(k_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto d_7;
  d_7 :
  TestFunFC(d_0,&&fail,Egetd(5,5));
  Rpush(u_1);
  goto a_7;
  u_1 :
  goto q_1;
  a_7 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  q_1 :
  Epopd(5,5);
  Return();
  m_1 :
  goto l_1;
  y_6 :
  Tset(App0("Nil"));
  Return();
  l_1 :
  Epopd(4,9);
  Return();
  k_1 :
  MoveTop(3,10);
  NotNULLd(3,10);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,10),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,11);
  goto s_7;
  s_7 :
  TestFunFC(k_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto t_7;
  t_7 :
  TestFunFC(k_0,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto u_7;
  u_7 :
  TestFunFC(d_0,&&fail,Egetd(3,15));
  Rpush(w_1);
  goto q_7;
  w_1 :
  goto v_1;
  q_7 :
  Epushd(4,1);
  NotNULLd(3,12);
  Tset(Egetd(3,12));
  Rpush(x_1);
  c_25 :
  Cpush(z_1);
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_2);
  goto c_25;
  a_2 :
  AllBuild();
  goto y_1;
  z_1 :
  Ccall(_stratego_r_31);
  NotNULLd(3,14);
  Tset(Egetd(3,14));
  goto b_2;
  y_1 :
  Cpop();
  b_2 :
  Return();
  x_1 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  v_1 :
  Epopd(3,15);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(d_2);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto w_7;
  w_7 :
  TestFunFC(i_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(f_2);
  goto v_7;
  f_2 :
  goto e_2;
  v_7 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  e_2 :
  Epopd(3,3);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  goto c_2;
  d_2 :
  Ccontinue(g_2);
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto c_2;
  g_2 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto y_7;
  y_7 :
  TestFunFC(i_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_2);
  goto x_7;
  j_2 :
  goto i_2;
  x_7 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  i_2 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  goto h_2;
  c_2 :
  Cpop();
  h_2 :
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto f_8;
  f_8 :
  TestFunFC(k_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto g_8;
  g_8 :
  TestFunFC(k_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto h_8;
  h_8 :
  TestFunFC(k_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto i_8;
  i_8 :
  TestFunFC(d_0,&&fail,Egetd(2,11));
  Rpush(l_2);
  goto a_8;
  l_2 :
  goto k_2;
  a_8 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Cpush(n_2);
  TestFunTop(a_1);
  TravInit();
  OneNextSon();
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,8),App0("TNil"))));
  Rpush(o_2);
  goto p_24;
  o_2 :
  Epopd(3,1);
  AllBuild();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(p_2);
  goto p_24;
  p_2 :
  Epopd(3,1);
  AllBuild();
  goto m_2;
  n_2 :
  Ccontinue(q_2);
  TestFunTop(b_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(r_2);
  goto p_24;
  r_2 :
  Epopd(3,1);
  AllBuild();
  goto m_2;
  q_2 :
  TestFunTop(d_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(t_2);
  goto p_24;
  t_2 :
  Epopd(3,1);
  AllBuild();
  goto s_2;
  m_2 :
  Cpop();
  s_2 :
  Return();
  k_2 :
  Epopd(2,11);
  Return();
  h_0 :
  goto g_0;
  i_3 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(u_2);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_z_27);
  Epopd(2,1);
  AllBuild();
  Return();
  g_0 :
  Epopd(1,5);
  Return();
  f_0 :
  Return();
  e_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_27)
  Rpush(v_2);
  f_29 :
  Epushd(0,11);
  MoveTop(0,5);
  goto j_25;
  j_25 :
  TestFunFC(k_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto k_25;
  k_25 :
  TestFunFC(k_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto t_25;
  t_25 :
  TestFunFC(i_1,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto u_25;
  u_25 :
  TestFunFC(d_0,&&fail,Egetd(0,11));
  goto a_26;
  a_26 :
  TestFunFC(k_0,&&z_2,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto b_26;
  b_26 :
  TestFunFC(k_0,&&a_3,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto e_26;
  e_26 :
  TestFunFC(d_0,&&b_3,Egetd(0,4));
  Cpush(d_3);
  Rpush(e_3);
  goto d_25;
  e_3 :
  goto c_3;
  d_3 :
  Rpush(g_3);
  goto e_25;
  g_3 :
  goto f_3;
  c_3 :
  Cpop();
  f_3 :
  goto y_2;
  b_3 :
  Rpush(y_2);
  goto e_25;
  a_3 :
  Rpush(y_2);
  goto e_25;
  z_2 :
  Rpush(y_2);
  goto e_25;
  y_2 :
  goto x_2;
  e_25 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(h_3);
  goto f_29;
  h_3 :
  Return();
  x_2 :
  goto w_2;
  d_25 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  w_2 :
  Epopd(0,11);
  Return();
  v_2 :
ENDPROC

PROC(_stratego_a_28)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(j_3);
  b_36 :
  Rpush(k_3);
  c_36 :
  Epushd(1,5);
  MoveTop(1,1);
  goto e_33;
  e_33 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_33;
  f_33 :
  TestFunFC(k_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto g_33;
  g_33 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Cpush(q_3);
  Rpush(r_3);
  goto p_29;
  r_3 :
  goto p_3;
  q_3 :
  Ccontinue(s_3);
  Rpush(t_3);
  goto q_29;
  t_3 :
  goto p_3;
  s_3 :
  Rpush(v_3);
  goto r_29;
  v_3 :
  goto u_3;
  p_3 :
  Cpop();
  u_3 :
  goto o_3;
  o_3 :
  goto n_3;
  r_29 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  w_3 :
  AllNextSon(&&x_3);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(y_3);
  goto c_36;
  y_3 :
  Epopd(2,1);
  goto w_3;
  x_3 :
  AllBuild();
  Return();
  n_3 :
  goto m_3;
  q_29 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_c_28);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(z_3);
  d_36 :
  Cpush(b_4);
  Ccall(_stratego_r_31);
  goto a_4;
  b_4 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_32);
  OneNextSon();
  Rpush(d_4);
  goto d_36;
  d_4 :
  AllBuild();
  goto c_4;
  a_4 :
  Cpop();
  c_4 :
  Return();
  z_3 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(e_4);
  e_36 :
  Epushd(4,9);
  MoveTop(4,1);
  goto e_30;
  e_30 :
  TestFunFC(k_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto l_30;
  l_30 :
  TestFunFC(p_1,&&i_4,Egetd(4,2));
  goto p_30;
  p_30 :
  TestFunFC(k_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto w_30;
  w_30 :
  TestFunFC(p_1,&&fail,Egetd(4,6));
  goto g_31;
  g_31 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(h_4);
  goto x_29;
  i_4 :
  TestFunFC(i_1,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto h_31;
  h_31 :
  TestFunFC(k_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto i_31;
  i_31 :
  TestFunFC(i_1,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto j_31;
  j_31 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(h_4);
  goto y_29;
  h_4 :
  goto g_4;
  y_29 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Rpush(k_4);
  goto e_36;
  k_4 :
  OneNextSon();
  Ccall(_stratego_x_27);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto a_30;
  a_30 :
  TestFunFC(k_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto b_30;
  b_30 :
  TestFunFC(k_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto c_30;
  c_30 :
  TestFunFC(d_0,&&fail,Egetd(5,5));
  Rpush(l_4);
  goto z_29;
  l_4 :
  goto j_4;
  z_29 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  j_4 :
  Epopd(5,5);
  Return();
  g_4 :
  goto f_4;
  x_29 :
  Tset(App0("Nil"));
  Return();
  f_4 :
  Epopd(4,9);
  Return();
  e_4 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto t_32;
  t_32 :
  TestFunFC(k_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto u_32;
  u_32 :
  TestFunFC(k_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto v_32;
  v_32 :
  TestFunFC(d_0,&&fail,Egetd(3,8));
  Rpush(n_4);
  goto l_31;
  n_4 :
  goto m_4;
  l_31 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(o_4);
  f_36 :
  Cpush(q_4);
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_4);
  goto f_36;
  r_4 :
  AllBuild();
  goto p_4;
  q_4 :
  Ccall(_stratego_r_31);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto s_4;
  p_4 :
  Cpop();
  s_4 :
  Return();
  o_4 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  m_4 :
  Epopd(3,8);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(t_4);
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
  goto z_32;
  z_32 :
  TestFunFC(k_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto a_33;
  a_33 :
  TestFunFC(k_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto b_33;
  b_33 :
  TestFunFC(k_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto c_33;
  c_33 :
  TestFunFC(d_0,&&fail,Egetd(2,11));
  Rpush(v_4);
  goto x_32;
  v_4 :
  goto u_4;
  x_32 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  TestFunTop(t_4);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(w_4);
  goto b_36;
  w_4 :
  Epopd(3,1);
  AllBuild();
  Return();
  u_4 :
  Epopd(2,11);
  Return();
  m_3 :
  goto l_3;
  p_29 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(x_4);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_z_27);
  Epopd(2,1);
  AllBuild();
  Return();
  l_3 :
  Epopd(1,5);
  Return();
  k_3 :
  Return();
  j_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_28)
  Ccall(_stratego_a_28);
  Ccall(_stratego_y_27);
ENDPROC

PROC(_stratego_c_28)
  Epushd(0,6);
  MoveTop(0,2);
  goto i_36;
  i_36 :
  TestFunFC(t_4,&&b_5,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(a_5);
  goto g_36;
  b_5 :
  TestFunFC(c_5,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto j_36;
  j_36 :
  TestFunFC(d_5,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(a_5);
  goto h_36;
  a_5 :
  goto z_4;
  h_36 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_j_28);
  Return();
  z_4 :
  goto y_4;
  g_36 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  y_4 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_d_28)
  Epushd(0,7);
  MoveTop(0,1);
  goto x_37;
  x_37 :
  TestFunFC(i_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto y_37;
  y_37 :
  TestFunFC(k_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto z_37;
  z_37 :
  TestFunFC(k_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto a_38;
  a_38 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(f_5);
  goto v_36;
  f_5 :
  goto e_5;
  v_36 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto x_36;
  x_36 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto y_36;
  y_36 :
  TestFunFC(k_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto z_36;
  z_36 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(h_5);
  goto w_36;
  h_5 :
  goto g_5;
  w_36 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  g_5 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto b_37;
  b_37 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto c_37;
  c_37 :
  TestFunFC(k_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto d_37;
  d_37 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(j_5);
  goto a_37;
  j_5 :
  goto i_5;
  a_37 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  i_5 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(k_5);
  b_40 :
  Epushd(2,9);
  MoveTop(2,1);
  goto k_37;
  k_37 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto l_37;
  l_37 :
  TestFunFC(p_1,&&o_5,Egetd(2,2));
  goto m_37;
  m_37 :
  TestFunFC(k_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto n_37;
  n_37 :
  TestFunFC(p_1,&&fail,Egetd(2,6));
  goto o_37;
  o_37 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(n_5);
  goto e_37;
  o_5 :
  TestFunFC(i_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto p_37;
  p_37 :
  TestFunFC(k_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto q_37;
  q_37 :
  TestFunFC(i_1,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto r_37;
  r_37 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(n_5);
  goto f_37;
  n_5 :
  goto m_5;
  f_37 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Rpush(q_5);
  goto b_40;
  q_5 :
  OneNextSon();
  Ccall(_stratego_x_27);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto h_37;
  h_37 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto i_37;
  i_37 :
  TestFunFC(k_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto j_37;
  j_37 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(r_5);
  goto g_37;
  r_5 :
  goto p_5;
  g_37 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  p_5 :
  Epopd(3,5);
  Return();
  m_5 :
  goto l_5;
  e_37 :
  Tset(App0("Nil"));
  Return();
  l_5 :
  Epopd(2,9);
  Return();
  k_5 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto u_37;
  u_37 :
  TestFunFC(k_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto v_37;
  v_37 :
  TestFunFC(k_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto w_37;
  w_37 :
  TestFunFC(d_0,&&fail,Egetd(1,9));
  Rpush(t_5);
  goto t_37;
  t_5 :
  goto s_5;
  t_37 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(u_5);
  c_40 :
  Cpush(w_5);
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_5);
  goto c_40;
  x_5 :
  AllBuild();
  goto v_5;
  w_5 :
  Ccall(_stratego_r_31);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto y_5;
  v_5 :
  Cpop();
  y_5 :
  Return();
  u_5 :
  Return();
  s_5 :
  Epopd(1,9);
  Return();
  e_5 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_e_28)
  Epushd(0,5);
  MoveTop(0,5);
  goto t_40;
  t_40 :
  TestFunFC(k_0,&&c_6,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto u_40;
  u_40 :
  TestFunFC(k_0,&&d_6,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto v_40;
  v_40 :
  TestFunFC(d_0,&&e_6,Egetd(0,4));
  Cpush(g_6);
  Rpush(h_6);
  goto d_40;
  h_6 :
  goto f_6;
  g_6 :
  Rpush(j_6);
  goto e_40;
  j_6 :
  goto i_6;
  f_6 :
  Cpop();
  i_6 :
  goto b_6;
  e_6 :
  Rpush(b_6);
  goto e_40;
  d_6 :
  Rpush(b_6);
  goto e_40;
  c_6 :
  Rpush(b_6);
  goto e_40;
  b_6 :
  goto a_6;
  e_40 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(l_6);
  i_42 :
  Cpush(o_6);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Cpush(q_6);
  Epushd(1,7);
  MoveTop(1,1);
  goto k_40;
  k_40 :
  TestFunFC(i_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto l_40;
  l_40 :
  TestFunFC(k_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto m_40;
  m_40 :
  TestFunFC(k_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto n_40;
  n_40 :
  TestFunFC(d_0,&&fail,Egetd(1,6));
  Rpush(x_6);
  goto j_40;
  x_6 :
  goto w_6;
  j_40 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  w_6 :
  Epopd(1,7);
  goto p_6;
  q_6 :
  Ccall(_stratego_d_28);
  goto m_7;
  p_6 :
  Cpop();
  m_7 :
  OneNextSon();
  Ccall(_stratego_x_27);
  AllBuild();
  AllBuild();
  goto m_6;
  o_6 :
  Epushd(1,7);
  MoveTop(1,1);
  goto p_40;
  p_40 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_40;
  q_40 :
  TestFunFC(k_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto r_40;
  r_40 :
  TestFunFC(i_1,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto s_40;
  s_40 :
  TestFunFC(d_0,&&fail,Egetd(1,7));
  Rpush(p_7);
  goto o_40;
  p_7 :
  goto o_7;
  o_40 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  o_7 :
  Epopd(1,7);
  goto n_7;
  m_6 :
  Cpop();
  n_7 :
  Cpush(z_7);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_31);
  OneNextSon();
  Ccall(_stratego_x_27);
  AllBuild();
  AllBuild();
  goto r_7;
  z_7 :
  Rpush(c_8);
  goto i_42;
  c_8 :
  goto b_8;
  r_7 :
  Cpop();
  b_8 :
  Return();
  l_6 :
  Return();
  a_6 :
  goto z_5;
  d_40 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(d_8);
  g_42 :
  Cpush(j_8);
  Ccall(_stratego_r_31);
  goto e_8;
  j_8 :
  Ccontinue(o_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto i_40;
  i_40 :
  TestFunFC(i_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(r_8);
  goto f_40;
  r_8 :
  goto q_8;
  f_40 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(s_8);
  h_42 :
  Cpush(u_8);
  Epushd(2,3);
  MoveTop(2,1);
  goto h_40;
  h_40 :
  TestFunFC(i_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(w_8);
  goto g_40;
  w_8 :
  goto v_8;
  g_40 :
  Move(1,2,2,2);
  Return();
  v_8 :
  Epopd(2,3);
  goto t_8;
  u_8 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_8);
  goto h_42;
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
  goto g_42;
  z_8 :
  Return();
  q_8 :
  Epopd(1,3);
  goto e_8;
  o_8 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_9);
  goto g_42;
  f_9 :
  AllBuild();
  goto e_9;
  e_8 :
  Cpop();
  e_9 :
  Return();
  d_8 :
  Return();
  z_5 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_28)
  Rpush(h_9);
  w_46 :
  Cpush(j_9);
  Epushd(0,2);
  MoveTop(0,1);
  goto k_42;
  k_42 :
  TestFunFC(x_4,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_9);
  goto j_42;
  l_9 :
  goto k_9;
  j_42 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  k_9 :
  Epopd(0,2);
  goto i_9;
  j_9 :
  Ccontinue(m_9);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_c_28);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(t_4);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(n_9);
  goto w_46;
  n_9 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_e_28);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto r_42;
  r_42 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto s_42;
  s_42 :
  TestFunFC(k_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto t_42;
  t_42 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(p_9);
  goto q_42;
  p_9 :
  goto o_9;
  q_42 :
  Move(0,3,1,4);
  Return();
  o_9 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_9);
  x_46 :
  Cpush(c_10);
  Ccall(_stratego_r_31);
  Tset(App0("Nil"));
  goto b_10;
  c_10 :
  Epushd(1,3);
  MoveTop(1,1);
  goto g_43;
  g_43 :
  TestFunFC(i_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(f_10);
  goto u_42;
  f_10 :
  goto e_10;
  u_42 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(g_10);
  goto x_46;
  g_10 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto c_43;
  c_43 :
  TestFunFC(k_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto d_43;
  d_43 :
  TestFunFC(k_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto e_43;
  e_43 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(i_10);
  goto x_42;
  i_10 :
  goto h_10;
  x_42 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(j_10);
  y_46 :
  Cpush(l_10);
  Ccall(_stratego_r_31);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto k_10;
  l_10 :
  Ccontinue(m_10);
  Epushd(3,3);
  MoveTop(3,1);
  goto b_43;
  b_43 :
  TestFunFC(i_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(o_10);
  goto y_42;
  o_10 :
  goto n_10;
  y_42 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(p_10);
  z_46 :
  Cpush(r_10);
  Epushd(4,3);
  MoveTop(4,1);
  goto a_43;
  a_43 :
  TestFunFC(i_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(t_10);
  goto z_42;
  t_10 :
  goto s_10;
  z_42 :
  Move(3,2,4,2);
  Return();
  s_10 :
  Epopd(4,3);
  goto q_10;
  r_10 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_10);
  goto z_46;
  v_10 :
  AllBuild();
  goto u_10;
  q_10 :
  Cpop();
  u_10 :
  Return();
  p_10 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(w_10);
  goto y_46;
  w_10 :
  Return();
  n_10 :
  Epopd(3,3);
  goto k_10;
  m_10 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_10);
  goto y_46;
  y_10 :
  AllBuild();
  goto x_10;
  k_10 :
  Cpop();
  x_10 :
  Return();
  j_10 :
  Return();
  h_10 :
  Epopd(2,6);
  Return();
  e_10 :
  Epopd(1,3);
  goto d_10;
  b_10 :
  Cpop();
  d_10 :
  Return();
  q_9 :
  Epopd(0,3);
  goto i_9;
  m_9 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto j_43;
  j_43 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_43;
  k_43 :
  TestFunFC(k_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto l_43;
  l_43 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(b_11);
  goto i_43;
  b_11 :
  goto a_11;
  i_43 :
  Move(0,2,1,4);
  Return();
  a_11 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(c_11);
  a_47 :
  Cpush(e_11);
  Ccall(_stratego_r_31);
  Tset(App0("Nil"));
  goto d_11;
  e_11 :
  Epushd(1,3);
  MoveTop(1,1);
  goto x_43;
  x_43 :
  TestFunFC(i_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(h_11);
  goto m_43;
  h_11 :
  goto g_11;
  m_43 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(i_11);
  goto w_46;
  i_11 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(j_11);
  goto a_47;
  j_11 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto u_43;
  u_43 :
  TestFunFC(k_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_43;
  v_43 :
  TestFunFC(k_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto w_43;
  w_43 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(l_11);
  goto p_43;
  l_11 :
  goto k_11;
  p_43 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(m_11);
  b_47 :
  Cpush(o_11);
  Ccall(_stratego_r_31);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto n_11;
  o_11 :
  Ccontinue(p_11);
  Epushd(3,3);
  MoveTop(3,1);
  goto t_43;
  t_43 :
  TestFunFC(i_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(r_11);
  goto q_43;
  r_11 :
  goto q_11;
  q_43 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(s_11);
  c_47 :
  Cpush(u_11);
  Epushd(4,3);
  MoveTop(4,1);
  goto s_43;
  s_43 :
  TestFunFC(i_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(w_11);
  goto r_43;
  w_11 :
  goto v_11;
  r_43 :
  Move(3,2,4,2);
  Return();
  v_11 :
  Epopd(4,3);
  goto t_11;
  u_11 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_11);
  goto c_47;
  y_11 :
  AllBuild();
  goto x_11;
  t_11 :
  Cpop();
  x_11 :
  Return();
  s_11 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(z_11);
  goto b_47;
  z_11 :
  Return();
  q_11 :
  Epopd(3,3);
  goto n_11;
  p_11 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_12);
  goto b_47;
  b_12 :
  AllBuild();
  goto a_12;
  n_11 :
  Cpop();
  a_12 :
  Return();
  m_11 :
  Return();
  k_11 :
  Epopd(2,7);
  Return();
  g_11 :
  Epopd(1,3);
  goto f_11;
  d_11 :
  Cpop();
  f_11 :
  Return();
  c_11 :
  Epopd(0,2);
  goto z_10;
  i_9 :
  Cpop();
  z_10 :
  Return();
  h_9 :
ENDPROC

PROC(_stratego_k_28)
  Rpush(c_12);
  r_47 :
  Cpush(e_12);
  Epushd(0,5);
  MoveTop(0,1);
  goto f_47;
  f_47 :
  TestFunFC(c_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto g_47;
  g_47 :
  TestFunFC(d_5,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(g_12);
  goto d_47;
  g_12 :
  goto f_12;
  d_47 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_j_28);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(1,1),App1("SRule",App3("Rule",Egetd(0,3),Egetd(0,4),Egetd(0,5)))));
  Epopd(1,1);
  Return();
  f_12 :
  Epopd(0,5);
  goto d_12;
  e_12 :
  goto h_12;
  d_12 :
  Cpop();
  h_12 :
  AllInit();
  i_12 :
  AllNextSon(&&j_12);
  Rpush(k_12);
  goto r_47;
  k_12 :
  goto i_12;
  j_12 :
  AllBuild();
  Return();
  c_12 :
ENDPROC

PROC(_stratego_l_28)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_p_32);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_m_28)
  Tdupl();
  Ccall(_stratego_l_28);
  Tset(MakeInt(1));
  Ccall(_stratego_z_30);
  Tpop();
ENDPROC

PROC(_stratego_n_28)
  Rpush(l_12);
  f_49 :
  Cpush(s_12);
  Ccall(_stratego_r_31);
  goto m_12;
  s_12 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(0,4);
  MoveTop(0,1);
  goto j_48;
  j_48 :
  TestFunFC(b_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(v_12);
  goto b_48;
  v_12 :
  goto u_12;
  b_48 :
  Epushd(1,8);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_s_31);
  MoveTop(1,1);
  NotNULLd(0,2);
  NotNULLd(1,1);
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",App2("TCons",Egetd(0,2),App2("TCons",Egetd(1,1),App0("TNil"))),App2("TCons",Egetd(0,1),App0("TNil")))));
  MoveTop(1,2);
  goto f_48;
  f_48 :
  TestFunFC(k_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto g_48;
  g_48 :
  TestFunFC(k_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto h_48;
  h_48 :
  TestFunFC(k_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto i_48;
  i_48 :
  TestFunFC(d_0,&&fail,Egetd(1,8));
  Rpush(x_12);
  goto d_48;
  x_12 :
  goto w_12;
  d_48 :
  Epushd(2,1);
  Tdupl();
  Epushd(3,1);
  Cpush(z_12);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset(App2("TCons",Egetd(1,3),App2("TCons",Egetd(1,5),App0("TNil"))));
  Ccall(_stratego_p_31);
  goto y_12;
  z_12 :
  Tset(App0("Nil"));
  goto a_13;
  y_12 :
  Cpop();
  a_13 :
  MoveTop(3,1);
  Move(2,1,3,1);
  NotNULLd(1,3);
  NotNULLd(1,5);
  NotNULLd(1,7);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,3),App2("TCons",Egetd(1,5),App2("TCons",App2("Cons",Egetd(1,7),Egetd(2,1)),App0("TNil")))));
  Ccall(_stratego_o_31);
  Epopd(3,1);
  Tpop();
  Epopd(2,1);
  Return();
  w_12 :
  Epopd(1,8);
  Return();
  u_12 :
  Epopd(0,4);
  OneNextSon();
  Rpush(b_13);
  goto f_49;
  b_13 :
  AllBuild();
  goto t_12;
  m_12 :
  Cpop();
  t_12 :
  Return();
  l_12 :
ENDPROC

PROC(_stratego_o_28)
  Epushd(0,4);
  MoveTop(0,3);
  goto k_49;
  k_49 :
  TestFunFC(g_13,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto l_49;
  l_49 :
  TestFunFC(p_1,&&i_13,Egetd(0,4));
  Cpush(k_13);
  Rpush(l_13);
  goto g_49;
  l_13 :
  goto j_13;
  k_13 :
  Rpush(n_13);
  goto i_49;
  n_13 :
  goto m_13;
  j_13 :
  Cpop();
  m_13 :
  goto f_13;
  i_13 :
  TestFunFC(i_1,&&h_13,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  goto m_49;
  m_49 :
  TestFunFC(p_1,&&o_13,Egetd(0,2));
  Cpush(q_13);
  Rpush(r_13);
  goto h_49;
  r_13 :
  goto p_13;
  q_13 :
  Rpush(w_13);
  goto i_49;
  w_13 :
  goto v_13;
  p_13 :
  Cpop();
  v_13 :
  goto f_13;
  o_13 :
  Rpush(f_13);
  goto i_49;
  h_13 :
  Rpush(f_13);
  goto i_49;
  f_13 :
  goto e_13;
  i_49 :
  Epushd(1,0);
  Tset(App2("Cons",ATmakeString("error: import of multiple modules not supported yet"),App0("Nil")));
  Ccall(_stratego_m_28);
  Epopd(1,0);
  Return();
  e_13 :
  goto d_13;
  h_49 :
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("sc"),App2("TCons",App2("Cons",ATmakeString("-i"),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString("-F"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_x_30);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString(".sdefs"),App0("TNil"))));
  Ccall(_stratego_p_28);
  Ccall(_stratego_n_32);
  Ccall(_stratego_n_28);
  Return();
  d_13 :
  goto c_13;
  g_49 :
  Return();
  c_13 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_p_28)
  Epushd(0,5);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_28);
  OneNextSon();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_28);
  OneNextSon();
  Ccall(_stratego_x_27);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto x_49;
  x_49 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto y_49;
  y_49 :
  TestFunFC(k_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto z_49;
  z_49 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  Rpush(y_13);
  goto w_49;
  y_13 :
  goto x_13;
  w_49 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(z_13);
  h_50 :
  Cpush(b_14);
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_14);
  goto h_50;
  c_14 :
  AllBuild();
  goto a_14;
  b_14 :
  Ccall(_stratego_r_31);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto d_14;
  a_14 :
  Cpop();
  d_14 :
  Return();
  z_13 :
  Ccall(_stratego_r_28);
  Return();
  x_13 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_q_28)
  _ST_explode_string();
ENDPROC

PROC(_stratego_r_28)
  _ST_implode_string();
ENDPROC

PROC(_stratego_s_28)
  _ST_is_string();
ENDPROC

PROC(_stratego_t_28)
  _ST_address();
ENDPROC

PROC(_stratego_u_28)
  _ST_address_lt();
ENDPROC

PROC(_stratego_v_28)
  _ST_explode_term();
ENDPROC

PROC(_stratego_w_28)
  _ST_mkterm();
ENDPROC

PROC(_stratego_x_28)
  _ST_int();
ENDPROC

PROC(_stratego_y_28)
  _ST_min();
ENDPROC

PROC(_stratego_b_29)
  _ST_max();
ENDPROC

PROC(_stratego_c_29)
  _ST_gt();
ENDPROC

PROC(_stratego_g_29)
  _ST_geq();
ENDPROC

PROC(_stratego_h_29)
  _ST_mod();
ENDPROC

PROC(_stratego_i_29)
  _ST_div();
ENDPROC

PROC(_stratego_j_29)
  _ST_mul();
ENDPROC

PROC(_stratego_k_29)
  _ST_subt();
ENDPROC

PROC(_stratego_l_29)
  _ST_plus();
ENDPROC

PROC(_stratego_m_29)
  _ST_minus();
ENDPROC

PROC(_stratego_n_29)
  _ST_is_int();
ENDPROC

PROC(_stratego_f_30)
  _ST_sqrt();
ENDPROC

PROC(_stratego_g_30)
  _ST_sin();
ENDPROC

PROC(_stratego_h_30)
  _ST_cos();
ENDPROC

PROC(_stratego_i_30)
  _ST_is_real();
ENDPROC

PROC(_stratego_j_30)
  _ST_PrintStack();
ENDPROC

PROC(_stratego_k_30)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_m_30)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_n_30)
  _ST_close_file();
ENDPROC

PROC(_stratego_o_30)
  _ST_append_file();
ENDPROC

PROC(_stratego_q_30)
  _ST_open_file();
ENDPROC

PROC(_stratego_r_30)
  _ST_file_exists();
ENDPROC

PROC(_stratego_s_30)
  _ST_printascii();
ENDPROC

PROC(_stratego_t_30)
  _ST_print();
ENDPROC

PROC(_stratego_u_30)
  _ST_dtime();
ENDPROC

PROC(_stratego_v_30)
  _ST_get_pid();
ENDPROC

PROC(_stratego_x_30)
  _ST_call_noisy();
ENDPROC

PROC(_stratego_y_30)
  _ST_call();
ENDPROC

PROC(_stratego_z_30)
  _ST_exit();
ENDPROC

PROC(_stratego_a_31)
  _ST_table_keys();
ENDPROC

PROC(_stratego_b_31)
  _ST_table_remove();
ENDPROC

PROC(_stratego_c_31)
  _ST_destroy_table();
ENDPROC

PROC(_stratego_d_31)
  Epushd(0,4);
  MoveTop(0,1);
  goto e_52;
  e_52 :
  TestFunFC(e_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto f_52;
  f_52 :
  TestFunFC(f_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto g_52;
  g_52 :
  TestStr(0,3,"_ST_create_table",&&g_16);
  Rpush(d_16);
  goto i_50;
  g_16 :
  TestStr(0,3,"_ST_destroy_table",&&h_16);
  Rpush(d_16);
  goto j_50;
  h_16 :
  TestStr(0,3,"_ST_table_put",&&m_16);
  Rpush(d_16);
  goto k_50;
  m_16 :
  TestStr(0,3,"_ST_table_get",&&n_16);
  Rpush(d_16);
  goto l_50;
  n_16 :
  TestStr(0,3,"_ST_table_remove",&&p_16);
  Rpush(d_16);
  goto n_50;
  p_16 :
  TestStr(0,3,"_ST_table_keys",&&r_16);
  Rpush(d_16);
  goto o_50;
  r_16 :
  TestStr(0,3,"_ST_exit",&&s_16);
  Rpush(d_16);
  goto p_50;
  s_16 :
  TestStr(0,3,"_ST_call",&&t_16);
  Rpush(d_16);
  goto q_50;
  t_16 :
  TestStr(0,3,"_ST_call_noisy",&&u_16);
  Rpush(d_16);
  goto r_50;
  u_16 :
  TestStr(0,3,"_ST_get_pid",&&v_16);
  Rpush(d_16);
  goto s_50;
  v_16 :
  TestStr(0,3,"_ST_dtime",&&w_16);
  Rpush(d_16);
  goto t_50;
  w_16 :
  TestStr(0,3,"_ST_print",&&x_16);
  Rpush(d_16);
  goto u_50;
  x_16 :
  TestStr(0,3,"_ST_printnl",&&y_16);
  Rpush(d_16);
  goto v_50;
  y_16 :
  TestStr(0,3,"_ST_printascii",&&z_16);
  Rpush(d_16);
  goto w_50;
  z_16 :
  TestStr(0,3,"_ST_file_exists",&&a_17);
  Rpush(d_16);
  goto x_50;
  a_17 :
  TestStr(0,3,"_ST_open_file",&&b_17);
  Rpush(d_16);
  goto y_50;
  b_17 :
  TestStr(0,3,"_ST_append_file",&&c_17);
  Rpush(d_16);
  goto z_50;
  c_17 :
  TestStr(0,3,"_ST_close_file",&&d_17);
  Rpush(d_16);
  goto a_51;
  d_17 :
  TestStr(0,3,"_ST_ReadFromFile",&&e_17);
  Rpush(d_16);
  goto b_51;
  e_17 :
  TestStr(0,3,"_ST_WriteToBinaryFile",&&f_17);
  Rpush(d_16);
  goto c_51;
  f_17 :
  TestStr(0,3,"_ST_WriteToTextFile",&&g_17);
  Rpush(d_16);
  goto d_51;
  g_17 :
  TestStr(0,3,"_ST_PrintStack",&&h_17);
  Rpush(d_16);
  goto e_51;
  h_17 :
  TestStr(0,3,"_ST_is_real",&&i_17);
  Rpush(d_16);
  goto f_51;
  i_17 :
  TestStr(0,3,"_ST_cos",&&j_17);
  Rpush(d_16);
  goto g_51;
  j_17 :
  TestStr(0,3,"_ST_sin",&&k_17);
  Rpush(d_16);
  goto h_51;
  k_17 :
  TestStr(0,3,"_ST_sqrt",&&l_17);
  Rpush(d_16);
  goto i_51;
  l_17 :
  TestStr(0,3,"_ST_is_int",&&m_17);
  Rpush(d_16);
  goto j_51;
  m_17 :
  TestStr(0,3,"_ST_minus",&&n_17);
  Rpush(d_16);
  goto k_51;
  n_17 :
  TestStr(0,3,"_ST_plus",&&o_17);
  Rpush(d_16);
  goto l_51;
  o_17 :
  TestStr(0,3,"_ST_add",&&r_17);
  Rpush(d_16);
  goto m_51;
  r_17 :
  TestStr(0,3,"_ST_subt",&&s_17);
  Rpush(d_16);
  goto n_51;
  s_17 :
  TestStr(0,3,"_ST_mul",&&t_17);
  Rpush(d_16);
  goto o_51;
  t_17 :
  TestStr(0,3,"_ST_div",&&u_17);
  Rpush(d_16);
  goto p_51;
  u_17 :
  TestStr(0,3,"_ST_mod",&&v_17);
  Rpush(d_16);
  goto q_51;
  v_17 :
  TestStr(0,3,"_ST_geq",&&w_17);
  Rpush(d_16);
  goto r_51;
  w_17 :
  TestStr(0,3,"_ST_gt",&&x_17);
  Rpush(d_16);
  goto s_51;
  x_17 :
  TestStr(0,3,"_ST_max",&&y_17);
  Rpush(d_16);
  goto t_51;
  y_17 :
  TestStr(0,3,"_ST_min",&&z_17);
  Rpush(d_16);
  goto u_51;
  z_17 :
  TestStr(0,3,"_ST_int",&&a_18);
  Rpush(d_16);
  goto v_51;
  a_18 :
  TestStr(0,3,"_ST_mkterm",&&b_18);
  Rpush(d_16);
  goto w_51;
  b_18 :
  TestStr(0,3,"_ST_explode_term",&&c_18);
  Rpush(d_16);
  goto x_51;
  c_18 :
  TestStr(0,3,"_ST_address_lt",&&d_18);
  Rpush(d_16);
  goto y_51;
  d_18 :
  TestStr(0,3,"_ST_address",&&e_18);
  Rpush(d_16);
  goto z_51;
  e_18 :
  TestStr(0,3,"_ST_new",&&f_18);
  Rpush(d_16);
  goto a_52;
  f_18 :
  TestStr(0,3,"_ST_is_string",&&g_18);
  Rpush(d_16);
  goto b_52;
  g_18 :
  TestStr(0,3,"_ST_implode_string",&&h_18);
  Rpush(d_16);
  goto c_52;
  h_18 :
  TestStr(0,3,"_ST_explode_string",&&fail);
  Rpush(d_16);
  goto d_52;
  d_16 :
  goto c_16;
  d_52 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_q_28);
  Return();
  c_16 :
  goto b_16;
  c_52 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_r_28);
  Return();
  b_16 :
  goto a_16;
  b_52 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_s_28);
  Return();
  a_16 :
  goto z_15;
  a_52 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_e_32);
  Return();
  z_15 :
  goto y_15;
  z_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_t_28);
  Return();
  y_15 :
  goto x_15;
  y_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_u_28);
  Return();
  x_15 :
  goto v_15;
  x_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_v_28);
  Return();
  v_15 :
  goto u_15;
  w_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_w_28);
  Return();
  u_15 :
  goto t_15;
  v_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_x_28);
  Return();
  t_15 :
  goto s_15;
  u_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_y_28);
  Return();
  s_15 :
  goto r_15;
  t_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_b_29);
  Return();
  r_15 :
  goto q_15;
  s_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_c_29);
  Return();
  q_15 :
  goto p_15;
  r_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_g_29);
  Return();
  p_15 :
  goto o_15;
  q_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_h_29);
  Return();
  o_15 :
  goto n_15;
  p_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_i_29);
  Return();
  n_15 :
  goto m_15;
  o_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_j_29);
  Return();
  m_15 :
  goto l_15;
  n_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_k_29);
  Return();
  l_15 :
  goto k_15;
  m_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_q_31);
  Return();
  k_15 :
  goto j_15;
  l_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_l_29);
  Return();
  j_15 :
  goto i_15;
  k_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_m_29);
  Return();
  i_15 :
  goto h_15;
  j_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_n_29);
  Return();
  h_15 :
  goto g_15;
  i_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_f_30);
  Return();
  g_15 :
  goto f_15;
  h_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_g_30);
  Return();
  f_15 :
  goto e_15;
  g_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_h_30);
  Return();
  e_15 :
  goto d_15;
  f_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_i_30);
  Return();
  d_15 :
  goto c_15;
  e_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_j_30);
  Return();
  c_15 :
  goto b_15;
  d_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_k_30);
  Return();
  b_15 :
  goto a_15;
  c_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_m_30);
  Return();
  a_15 :
  goto w_14;
  b_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_n_32);
  Return();
  w_14 :
  goto v_14;
  a_51 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_n_30);
  Return();
  v_14 :
  goto u_14;
  z_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_o_30);
  Return();
  u_14 :
  goto t_14;
  y_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_q_30);
  Return();
  t_14 :
  goto s_14;
  x_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_r_30);
  Return();
  s_14 :
  goto r_14;
  w_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_s_30);
  Return();
  r_14 :
  goto q_14;
  v_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_p_32);
  Return();
  q_14 :
  goto p_14;
  u_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_t_30);
  Return();
  p_14 :
  goto o_14;
  t_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_u_30);
  Return();
  o_14 :
  goto n_14;
  s_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_v_30);
  Return();
  n_14 :
  goto m_14;
  r_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_x_30);
  Return();
  m_14 :
  goto l_14;
  q_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_y_30);
  Return();
  l_14 :
  goto k_14;
  p_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_z_30);
  Return();
  k_14 :
  goto j_14;
  o_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_a_31);
  Return();
  j_14 :
  goto i_14;
  n_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_b_31);
  Return();
  i_14 :
  goto h_14;
  l_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_p_31);
  Return();
  h_14 :
  goto g_14;
  k_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_o_31);
  Return();
  g_14 :
  goto f_14;
  j_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_c_31);
  Return();
  f_14 :
  goto e_14;
  i_50 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_k_32);
  Return();
  e_14 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_e_31)
  Epushd(0,2);
  MoveTop(0,1);
  goto k_54;
  k_54 :
  TestFunFC(n_18,&&m_18,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_18);
  goto h_54;
  m_18 :
  TestFunFC(p_18,&&o_18,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_18);
  goto i_54;
  o_18 :
  TestFunFC(q_18,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(l_18);
  goto j_54;
  l_18 :
  goto k_18;
  j_54 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  k_18 :
  goto j_18;
  i_54 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  j_18 :
  goto i_18;
  h_54 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  i_18 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_f_31)
  Epushd(0,9);
  MoveTop(0,2);
  goto r_55;
  r_55 :
  TestFunFC(i_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,9,0,2,1);
  goto s_55;
  s_55 :
  TestFunFC(k_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto t_55;
  t_55 :
  TestFunFC(y_18,&&x_18,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,1,0,4,1);
  goto u_55;
  u_55 :
  TestFunFC(k_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto v_55;
  v_55 :
  TestFunFC(d_0,&&fail,Egetd(0,8));
  Rpush(w_18);
  goto q_54;
  x_18 :
  TestFunFC(n_18,&&z_18,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto w_55;
  w_55 :
  TestFunFC(k_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto x_55;
  x_55 :
  TestFunFC(d_0,&&fail,Egetd(0,8));
  Rpush(w_18);
  goto r_54;
  z_18 :
  TestFunFC(p_18,&&a_19,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto y_55;
  y_55 :
  TestFunFC(k_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto z_55;
  z_55 :
  TestFunFC(d_0,&&fail,Egetd(0,8));
  Rpush(w_18);
  goto s_54;
  a_19 :
  TestFunFC(q_18,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  goto a_56;
  a_56 :
  TestFunFC(k_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto b_56;
  b_56 :
  TestFunFC(d_0,&&fail,Egetd(0,8));
  Rpush(w_18);
  goto t_54;
  w_18 :
  goto v_18;
  t_54 :
  Epushd(1,1);
  Move(0,5,0,7);
  Move(1,1,0,9);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  v_18 :
  goto t_18;
  s_54 :
  Epushd(1,1);
  Move(0,5,0,7);
  Move(1,1,0,9);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  t_18 :
  goto s_18;
  r_54 :
  Epushd(1,1);
  Move(0,5,0,7);
  Move(1,1,0,9);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  s_18 :
  goto r_18;
  q_54 :
  Epushd(1,7);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  _ST_explode_term();
  MoveTop(2,1);
  goto v_54;
  v_54 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto w_54;
  w_54 :
  TestFunFC(k_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto x_54;
  x_54 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(c_19);
  goto u_54;
  c_19 :
  goto b_19;
  u_54 :
  Move(0,5,2,2);
  Move(1,1,2,4);
  Return();
  b_19 :
  Epopd(2,5);
  Tpop();
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Rpush(d_19);
  e_58 :
  Epushd(2,9);
  MoveTop(2,1);
  goto e_55;
  e_55 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto f_55;
  f_55 :
  TestFunFC(p_1,&&i_19,Egetd(2,2));
  goto g_55;
  g_55 :
  TestFunFC(k_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto h_55;
  h_55 :
  TestFunFC(p_1,&&fail,Egetd(2,6));
  goto i_55;
  i_55 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(h_19);
  goto y_54;
  i_19 :
  TestFunFC(i_1,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto j_55;
  j_55 :
  TestFunFC(k_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto k_55;
  k_55 :
  TestFunFC(i_1,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto l_55;
  l_55 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(h_19);
  goto z_54;
  h_19 :
  goto g_19;
  z_54 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Rpush(k_19);
  goto e_58;
  k_19 :
  OneNextSon();
  Ccall(_stratego_x_27);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto b_55;
  b_55 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto c_55;
  c_55 :
  TestFunFC(k_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto d_55;
  d_55 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(l_19);
  goto a_55;
  l_19 :
  goto j_19;
  a_55 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  j_19 :
  Epopd(3,5);
  Return();
  g_19 :
  goto e_19;
  y_54 :
  Tset(App0("Nil"));
  Return();
  e_19 :
  Epopd(2,9);
  Return();
  d_19 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,9);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,9),App0("TNil"))));
  MoveTop(1,3);
  goto o_55;
  o_55 :
  TestFunFC(k_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto p_55;
  p_55 :
  TestFunFC(k_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto q_55;
  q_55 :
  TestFunFC(d_0,&&fail,Egetd(1,7));
  Rpush(n_19);
  goto n_55;
  n_19 :
  goto m_19;
  n_55 :
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(s_19);
  f_58 :
  Cpush(w_19);
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_19);
  goto f_58;
  x_19 :
  AllBuild();
  goto t_19;
  w_19 :
  Ccall(_stratego_r_31);
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  goto y_19;
  t_19 :
  Cpop();
  y_19 :
  Return();
  s_19 :
  Return();
  m_19 :
  Epopd(1,7);
  Return();
  r_18 :
  Epopd(0,9);
ENDPROC

PROC(_stratego_m_31)
  Epushd(0,5);
  MoveTop(0,1);
  goto h_58;
  h_58 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto i_58;
  i_58 :
  TestFunFC(k_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto j_58;
  j_58 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  Rpush(a_20);
  goto g_58;
  a_20 :
  goto z_19;
  g_58 :
  Move(0,2,0,4);
  Return();
  z_19 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_31)
  Epushd(0,5);
  MoveTop(0,1);
  goto v_58;
  v_58 :
  TestFunFC(e_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto w_58;
  w_58 :
  TestFunFC(d_20,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(c_20);
  goto q_58;
  c_20 :
  goto b_20;
  q_58 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto s_58;
  s_58 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto t_58;
  t_58 :
  TestFunFC(k_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto u_58;
  u_58 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(g_20);
  goto r_58;
  g_20 :
  goto f_20;
  r_58 :
  Move(0,3,2,2);
  Move(1,1,2,4);
  Return();
  f_20 :
  Epopd(2,5);
  Tpop();
  Tset(App0("Fail"));
  Epopd(1,1);
  Return();
  b_20 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_31)
  _ST_table_put();
ENDPROC

PROC(_stratego_p_31)
  _ST_table_get();
ENDPROC

PROC(_stratego_q_31)
  _ST_add();
ENDPROC

PROC(_stratego_r_31)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_59;
  m_59 :
  TestFunFC(p_1,&&fail,Egetd(0,1));
  Rpush(i_20);
  goto l_59;
  i_20 :
  goto h_20;
  l_59 :
  Return();
  h_20 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_31)
  Rpush(k_20);
  y_59 :
  Cpush(m_20);
  Ccall(_stratego_r_31);
  Tset(MakeInt(0));
  goto l_20;
  m_20 :
  Epushd(0,3);
  MoveTop(0,1);
  goto q_59;
  q_59 :
  TestFunFC(i_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(p_20);
  goto o_59;
  p_20 :
  goto o_20;
  o_59 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(q_20);
  goto y_59;
  q_20 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_q_31);
  Epopd(1,1);
  Return();
  o_20 :
  Epopd(0,3);
  goto n_20;
  l_20 :
  Cpop();
  n_20 :
  Return();
  k_20 :
ENDPROC

PROC(_stratego_t_31)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_60;
  a_60 :
  TestFunFC(t_20,&&fail,Egetd(0,1));
  Rpush(s_20);
  goto z_59;
  s_20 :
  goto r_20;
  z_59 :
  Return();
  r_20 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_31)
  Epushd(0,3);
  MoveTop(0,1);
  goto e_60;
  e_60 :
  TestFunFC(e_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto f_60;
  f_60 :
  TestFunFC(t_20,&&e_21,Egetd(0,3));
  goto g_60;
  g_60 :
  TestFunFC(t_20,&&f_21,Egetd(0,2));
  Cpush(i_21);
  Rpush(j_21);
  goto c_60;
  j_21 :
  goto g_21;
  i_21 :
  Rpush(l_21);
  goto d_60;
  l_21 :
  goto k_21;
  g_21 :
  Cpop();
  k_21 :
  goto d_21;
  f_21 :
  Rpush(d_21);
  goto d_60;
  e_21 :
  goto h_60;
  h_60 :
  TestFunFC(t_20,&&fail,Egetd(0,2));
  Rpush(d_21);
  goto c_60;
  d_21 :
  goto c_21;
  d_60 :
  Tset(App0("Fail"));
  Return();
  c_21 :
  goto b_21;
  c_60 :
  Tset(App0("Fail"));
  Return();
  b_21 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_v_31)
  Rpush(m_21);
  g_85 :
  Cpush(o_21);
  TestFunTop(e_16);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_21);
  goto g_85;
  p_21 :
  AllBuild();
  goto n_21;
  o_21 :
  goto q_21;
  n_21 :
  Cpop();
  q_21 :
  Cpush(s_21);
  Cpush(u_21);
  Epushd(0,3);
  MoveTop(0,1);
  goto o_60;
  o_60 :
  TestFunFC(e_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto p_60;
  p_60 :
  TestFunFC(x_21,&&fail,Egetd(0,2));
  Rpush(w_21);
  goto n_60;
  w_21 :
  goto v_21;
  n_60 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  v_21 :
  Epopd(0,3);
  goto t_21;
  u_21 :
  Ccontinue(z_21);
  Ccall(_stratego_u_31);
  goto t_21;
  z_21 :
  Ccontinue(a_22);
  Epushd(0,6);
  MoveTop(0,3);
  goto f_64;
  f_64 :
  TestFunFC(e_16,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,6,0,3,1);
  goto g_64;
  g_64 :
  TestFunFC(p_22,&&o_22,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(n_22);
  goto q_60;
  o_22 :
  TestFunFC(r_22,&&q_22,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Rpush(n_22);
  goto r_60;
  q_22 :
  TestFunFC(t_22,&&s_22,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(n_22);
  goto s_60;
  s_22 :
  TestFunFC(v_22,&&u_22,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(n_22);
  goto t_60;
  u_22 :
  TestFunFC(x_22,&&w_22,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(n_22);
  goto u_60;
  w_22 :
  TestFunFC(z_22,&&y_22,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,2,0,4,1);
  goto h_64;
  h_64 :
  TestFunFC(u_2,&&fail,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  Rpush(n_22);
  goto v_60;
  y_22 :
  TestFunFC(a_1,&&a_23,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(n_22);
  goto w_60;
  a_23 :
  TestFunFC(d_1,&&b_23,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(n_22);
  goto x_60;
  b_23 :
  TestFunFC(e_23,&&c_23,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Cpush(h_23);
  Rpush(i_23);
  goto y_60;
  i_23 :
  goto g_23;
  h_23 :
  Rpush(k_23);
  goto z_60;
  k_23 :
  goto j_23;
  g_23 :
  Cpop();
  j_23 :
  goto n_22;
  c_23 :
  TestFunFC(l_23,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  Cpush(n_23);
  Rpush(o_23);
  goto a_61;
  o_23 :
  goto m_23;
  n_23 :
  Rpush(q_23);
  goto b_61;
  q_23 :
  goto p_23;
  m_23 :
  Cpop();
  p_23 :
  goto n_22;
  n_22 :
  goto m_22;
  b_61 :
  Tset(App0("Fail"));
  Return();
  m_22 :
  goto l_22;
  a_61 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  _ST_explode_term();
  MoveTop(2,1);
  goto z_63;
  z_63 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto a_64;
  a_64 :
  TestFunFC(k_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto b_64;
  b_64 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(s_23);
  goto y_63;
  s_23 :
  goto r_23;
  y_63 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  r_23 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(t_23);
  m_85 :
  Cpush(v_23);
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(0,5);
  NotNULLd(3,1);
  Tset(App2("App",Egetd(0,5),Egetd(3,1)));
  Rpush(w_23);
  goto g_85;
  w_23 :
  Epopd(3,1);
  OneNextSon();
  AllBuild();
  goto u_23;
  v_23 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_23);
  goto m_85;
  y_23 :
  AllBuild();
  goto x_23;
  u_23 :
  Cpop();
  x_23 :
  Return();
  t_23 :
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
  l_22 :
  goto k_22;
  z_60 :
  Tset(App0("Fail"));
  Return();
  k_22 :
  goto j_22;
  y_60 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  _ST_explode_term();
  MoveTop(2,1);
  goto s_63;
  s_63 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto t_63;
  t_63 :
  TestFunFC(k_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto u_63;
  u_63 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(a_24);
  goto r_63;
  a_24 :
  goto z_23;
  r_63 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  z_23 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(b_24);
  l_85 :
  Cpush(d_24);
  Ccall(_stratego_r_31);
  goto c_24;
  d_24 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(0,5);
  NotNULLd(3,1);
  Tset(App2("App",Egetd(0,5),Egetd(3,1)));
  Rpush(f_24);
  goto g_85;
  f_24 :
  Epopd(3,1);
  OneNextSon();
  Rpush(g_24);
  goto l_85;
  g_24 :
  AllBuild();
  goto e_24;
  c_24 :
  Cpop();
  e_24 :
  Return();
  b_24 :
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
  j_22 :
  goto i_22;
  x_60 :
  NotNULLd(0,5);
  NotNULLd(0,2);
  NotNULLd(0,6);
  Tset(App2("App",App2("Let",App2("Cons",App3("SDef",Egetd(0,5),App0("Nil"),Egetd(0,2)),App0("Nil")),Egetd(0,2)),Egetd(0,6)));
  Cpush(i_24);
  Rpush(j_24);
  goto g_85;
  j_24 :
  goto h_24;
  i_24 :
  goto k_24;
  h_24 :
  Cpop();
  k_24 :
  Return();
  i_22 :
  goto h_22;
  w_60 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(m_24);
  j_85 :
  Cpush(o_24);
  Ccall(_stratego_r_31);
  goto n_24;
  o_24 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto f_63;
  f_63 :
  TestFunFC(b_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(t_24);
  goto x_62;
  t_24 :
  goto s_24;
  x_62 :
  Epushd(4,8);
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Ccall(_stratego_s_31);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))),App2("TCons",Egetd(3,1),App0("TNil")))));
  MoveTop(4,2);
  goto b_63;
  b_63 :
  TestFunFC(k_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto c_63;
  c_63 :
  TestFunFC(k_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto d_63;
  d_63 :
  TestFunFC(k_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto e_63;
  e_63 :
  TestFunFC(d_0,&&fail,Egetd(4,8));
  Rpush(x_24);
  goto z_62;
  x_24 :
  goto w_24;
  z_62 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  Cpush(z_24);
  NotNULLd(4,3);
  NotNULLd(4,5);
  Tset(App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,5),App0("TNil"))));
  Ccall(_stratego_p_31);
  goto y_24;
  z_24 :
  Tset(App0("Nil"));
  goto a_25;
  y_24 :
  Cpop();
  a_25 :
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,3);
  NotNULLd(4,5);
  NotNULLd(4,7);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,5),App2("TCons",App2("Cons",Egetd(4,7),Egetd(5,1)),App0("TNil")))));
  Ccall(_stratego_o_31);
  Epopd(6,1);
  Tpop();
  Epopd(5,1);
  Return();
  w_24 :
  Epopd(4,8);
  Return();
  s_24 :
  Epopd(3,4);
  OneNextSon();
  Rpush(b_25);
  goto j_85;
  b_25 :
  AllBuild();
  goto r_24;
  n_24 :
  Cpop();
  r_24 :
  Return();
  m_24 :
  NotNULLd(0,2);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(0,2),Egetd(0,6)));
  Rpush(f_25);
  goto g_85;
  f_25 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(g_25);
  k_85 :
  Cpush(i_25);
  Ccall(_stratego_r_31);
  goto h_25;
  i_25 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto q_63;
  q_63 :
  TestFunFC(b_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(n_25);
  goto h_63;
  n_25 :
  goto m_25;
  h_63 :
  Epushd(4,6);
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Ccall(_stratego_s_31);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))),App0("TNil"))));
  MoveTop(4,2);
  goto n_63;
  n_63 :
  TestFunFC(k_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto o_63;
  o_63 :
  TestFunFC(k_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto p_63;
  p_63 :
  TestFunFC(d_0,&&fail,Egetd(4,6));
  Rpush(p_25);
  goto j_63;
  p_25 :
  goto o_25;
  j_63 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  Cpush(r_25);
  Epushd(7,3);
  NotNULLd(4,3);
  NotNULLd(4,5);
  Tset(App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,5),App0("TNil"))));
  Ccall(_stratego_p_31);
  MoveTop(7,1);
  goto l_63;
  l_63 :
  TestFunFC(i_1,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(v_25);
  goto k_63;
  v_25 :
  goto s_25;
  k_63 :
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Return();
  s_25 :
  Epopd(7,3);
  goto q_25;
  r_25 :
  Tset(App0("Nil"));
  goto w_25;
  q_25 :
  Cpop();
  w_25 :
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,3);
  NotNULLd(4,5);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,5),App2("TCons",Egetd(5,1),App0("TNil")))));
  Ccall(_stratego_o_31);
  Epopd(6,1);
  Tpop();
  Epopd(5,1);
  Return();
  o_25 :
  Epopd(4,6);
  Return();
  m_25 :
  Epopd(3,4);
  OneNextSon();
  Rpush(x_25);
  goto k_85;
  x_25 :
  AllBuild();
  goto l_25;
  h_25 :
  Cpop();
  l_25 :
  Return();
  g_25 :
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  h_22 :
  goto g_22;
  v_60 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_s_31);
  MoveTop(2,1);
  NotNULLd(0,1);
  NotNULLd(2,1);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",App2("TCons",Egetd(0,1),App2("TCons",Egetd(2,1),App0("TNil"))),App0("TNil"))));
  MoveTop(2,2);
  goto u_62;
  u_62 :
  TestFunFC(k_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto v_62;
  v_62 :
  TestFunFC(k_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto w_62;
  w_62 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(z_25);
  goto i_61;
  z_25 :
  goto y_25;
  i_61 :
  Epushd(3,7);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App0("TNil"))));
  Ccall(_stratego_p_31);
  MoveTop(3,1);
  goto k_61;
  k_61 :
  TestFunFC(i_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(i_26);
  goto j_61;
  i_26 :
  goto d_26;
  j_61 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  d_26 :
  MoveTop(3,4);
  goto t_62;
  t_62 :
  TestFunFC(b_1,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  MoveArg(3,7,3,4,2);
  Rpush(j_26);
  goto l_61;
  j_26 :
  goto c_26;
  l_61 :
  Epushd(4,1);
  Move(0,1,3,5);
  Move(1,3,3,6);
  Move(1,1,3,7);
  NotNULLd(1,3);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(1,3),App2("TCons",Egetd(0,2),App0("TNil"))));
  Rpush(k_26);
  h_85 :
  Epushd(5,9);
  MoveTop(5,1);
  goto c_62;
  c_62 :
  TestFunFC(k_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,5,5,1,1);
  goto d_62;
  d_62 :
  TestFunFC(p_1,&&q_26,Egetd(5,2));
  goto e_62;
  e_62 :
  TestFunFC(k_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,9,5,5,1);
  goto f_62;
  f_62 :
  TestFunFC(p_1,&&fail,Egetd(5,6));
  goto g_62;
  g_62 :
  TestFunFC(d_0,&&fail,Egetd(5,9));
  Rpush(n_26);
  goto m_61;
  q_26 :
  TestFunFC(i_1,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto h_62;
  h_62 :
  TestFunFC(k_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,9,5,5,1);
  goto i_62;
  i_62 :
  TestFunFC(i_1,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto j_62;
  j_62 :
  TestFunFC(d_0,&&fail,Egetd(5,9));
  Rpush(n_26);
  goto n_61;
  n_26 :
  goto m_26;
  n_61 :
  Epushd(6,5);
  NotNULLd(5,3);
  NotNULLd(5,7);
  NotNULLd(5,4);
  NotNULLd(5,8);
  Tset(App2("TCons",App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(5,4),App2("TCons",Egetd(5,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(7,5);
  MoveTop(7,1);
  goto v_61;
  v_61 :
  TestFunFC(k_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto w_61;
  w_61 :
  TestFunFC(k_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto x_61;
  x_61 :
  TestFunFC(d_0,&&fail,Egetd(7,5));
  Rpush(t_26);
  goto o_61;
  t_26 :
  goto s_26;
  o_61 :
  Epushd(8,7);
  NotNULLd(7,2);
  NotNULLd(7,4);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",App2("TCons",Egetd(7,2),App2("TCons",MakeInt(0),App0("TNil"))),App2("TCons",App3("SDef",Egetd(7,2),App0("Nil"),Egetd(7,4)),App0("TNil")))));
  MoveTop(8,1);
  goto r_61;
  r_61 :
  TestFunFC(k_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto s_61;
  s_61 :
  TestFunFC(k_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto t_61;
  t_61 :
  TestFunFC(k_0,&&fail,Egetd(8,5));
  MoveArg(8,6,8,5,0);
  MoveArg(8,7,8,5,1);
  goto u_61;
  u_61 :
  TestFunFC(d_0,&&fail,Egetd(8,7));
  Rpush(v_26);
  goto p_61;
  v_26 :
  goto u_26;
  p_61 :
  Epushd(9,1);
  Tdupl();
  Epushd(10,1);
  Cpush(x_26);
  NotNULLd(8,2);
  NotNULLd(8,4);
  Tset(App2("TCons",Egetd(8,2),App2("TCons",Egetd(8,4),App0("TNil"))));
  Ccall(_stratego_p_31);
  goto w_26;
  x_26 :
  Tset(App0("Nil"));
  goto y_26;
  w_26 :
  Cpop();
  y_26 :
  MoveTop(10,1);
  Move(9,1,10,1);
  NotNULLd(8,2);
  NotNULLd(8,4);
  NotNULLd(8,6);
  NotNULLd(9,1);
  Tset(App2("TCons",Egetd(8,2),App2("TCons",Egetd(8,4),App2("TCons",App2("Cons",Egetd(8,6),Egetd(9,1)),App0("TNil")))));
  Ccall(_stratego_o_31);
  Epopd(10,1);
  Tpop();
  Epopd(9,1);
  Return();
  u_26 :
  Epopd(8,7);
  Return();
  s_26 :
  Epopd(7,5);
  OneNextSon();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Rpush(z_26);
  goto h_85;
  z_26 :
  OneNextSon();
  Ccall(_stratego_x_27);
  AllBuild();
  AllBuild();
  MoveTop(6,1);
  goto z_61;
  z_61 :
  TestFunFC(k_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto a_62;
  a_62 :
  TestFunFC(k_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto b_62;
  b_62 :
  TestFunFC(d_0,&&fail,Egetd(6,5));
  Rpush(c_27);
  goto y_61;
  c_27 :
  goto r_26;
  y_61 :
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset(App2("Cons",Egetd(6,2),Egetd(6,4)));
  Return();
  r_26 :
  Epopd(6,5);
  Return();
  m_26 :
  goto l_26;
  m_61 :
  Tset(App0("Nil"));
  Return();
  l_26 :
  Epopd(5,9);
  Return();
  k_26 :
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(1,1),Egetd(0,6)));
  Rpush(d_27);
  goto g_85;
  d_27 :
  MoveTop(4,1);
  Move(1,2,4,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(e_27);
  i_85 :
  Cpush(g_27);
  Ccall(_stratego_r_31);
  goto f_27;
  g_27 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(5,6);
  MoveTop(5,1);
  NotNULLd(5,1);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",App2("TCons",Egetd(5,1),App2("TCons",MakeInt(0),App0("TNil"))),App0("TNil"))));
  MoveTop(5,2);
  goto q_62;
  q_62 :
  TestFunFC(k_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto r_62;
  r_62 :
  TestFunFC(k_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto s_62;
  s_62 :
  TestFunFC(d_0,&&fail,Egetd(5,6));
  Rpush(j_27);
  goto m_62;
  j_27 :
  goto i_27;
  m_62 :
  Epushd(6,1);
  Tdupl();
  Epushd(7,1);
  Cpush(l_27);
  Epushd(8,3);
  NotNULLd(5,3);
  NotNULLd(5,5);
  Tset(App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,5),App0("TNil"))));
  Ccall(_stratego_p_31);
  MoveTop(8,1);
  goto o_62;
  o_62 :
  TestFunFC(i_1,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(n_27);
  goto n_62;
  n_27 :
  goto m_27;
  n_62 :
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Return();
  m_27 :
  Epopd(8,3);
  goto k_27;
  l_27 :
  Tset(App0("Nil"));
  goto o_27;
  k_27 :
  Cpop();
  o_27 :
  MoveTop(7,1);
  Move(6,1,7,1);
  NotNULLd(5,3);
  NotNULLd(5,5);
  NotNULLd(6,1);
  Tset(App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,5),App2("TCons",Egetd(6,1),App0("TNil")))));
  Ccall(_stratego_o_31);
  Epopd(7,1);
  Tpop();
  Epopd(6,1);
  Return();
  i_27 :
  Epopd(5,6);
  OneNextSon();
  Rpush(p_27);
  goto i_85;
  p_27 :
  AllBuild();
  goto h_27;
  f_27 :
  Cpop();
  h_27 :
  Return();
  e_27 :
  Epopd(4,1);
  Return();
  c_26 :
  Epopd(3,7);
  Return();
  y_25 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Epopd(1,3);
  Return();
  g_22 :
  goto f_22;
  u_60 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Cpush(r_27);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(0,5),Egetd(0,6)));
  Rpush(s_27);
  goto g_85;
  s_27 :
  Cpush(t_27);
  Tdupl();
  Ccall(_stratego_t_31);
  Cpop();
  Crestore();
  Cjump();
  t_27 :
  goto q_27;
  r_27 :
  Ccontinue(u_27);
  NotNULLd(0,2);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(0,2),Egetd(0,6)));
  Rpush(z_28);
  goto g_85;
  z_28 :
  Cpush(d_29);
  Tdupl();
  Ccall(_stratego_t_31);
  Cpop();
  Crestore();
  Cjump();
  d_29 :
  goto q_27;
  u_27 :
  Tset(App0("Fail"));
  goto e_29;
  q_27 :
  Cpop();
  e_29 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  f_22 :
  goto e_22;
  t_60 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Cpush(s_29);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(0,5),Egetd(0,6)));
  Rpush(t_29);
  goto g_85;
  t_29 :
  Cpush(u_29);
  Tdupl();
  Ccall(_stratego_t_31);
  Cpop();
  Crestore();
  Cjump();
  u_29 :
  goto o_29;
  s_29 :
  Ccontinue(v_29);
  NotNULLd(0,2);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(0,2),Egetd(0,6)));
  Rpush(w_29);
  goto g_85;
  w_29 :
  Cpush(d_30);
  Tdupl();
  Ccall(_stratego_t_31);
  Cpop();
  Crestore();
  Cjump();
  d_30 :
  goto o_29;
  v_29 :
  Tset(App0("Fail"));
  goto k_31;
  o_29 :
  Cpop();
  k_31 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  e_22 :
  goto d_22;
  s_60 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(0,2),App2("App",Egetd(0,5),Egetd(0,6))));
  Cpush(w_32);
  Rpush(y_32);
  goto g_85;
  y_32 :
  goto s_32;
  w_32 :
  goto d_33;
  s_32 :
  Cpop();
  d_33 :
  Return();
  d_22 :
  goto c_22;
  r_60 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Cpush(o_33);
  Epushd(3,1);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("App",Egetd(0,5),Egetd(0,6)));
  Rpush(r_33);
  goto g_85;
  r_33 :
  MoveTop(3,1);
  goto d_61;
  d_61 :
  TestFunFC(t_20,&&fail,Egetd(3,1));
  Rpush(s_33);
  goto c_61;
  s_33 :
  goto p_33;
  c_61 :
  NotNULLd(0,6);
  Tset(Egetd(0,6));
  Return();
  p_33 :
  Epopd(3,1);
  goto i_33;
  o_33 :
  Tset(App0("Fail"));
  goto t_33;
  i_33 :
  Cpop();
  t_33 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  c_22 :
  goto b_22;
  q_60 :
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("App",App2("Seq",Egetd(0,5),App1("Build",Egetd(0,6))),Egetd(0,6)));
  Cpush(v_33);
  Rpush(w_33);
  goto g_85;
  w_33 :
  goto u_33;
  v_33 :
  goto x_33;
  u_33 :
  Cpop();
  x_33 :
  Return();
  b_22 :
  Epopd(0,6);
  goto t_21;
  a_22 :
  Ccontinue(m_34);
  Cpush(o_34);
  Epushd(0,5);
  MoveTop(0,1);
  goto h_65;
  h_65 :
  TestFunFC(e_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto i_65;
  i_65 :
  TestFunFC(d_20,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(v_34);
  goto i_64;
  v_34 :
  goto p_34;
  i_64 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto k_64;
  k_64 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto l_64;
  l_64 :
  TestFunFC(k_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto m_64;
  m_64 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(x_34);
  goto j_64;
  x_34 :
  goto w_34;
  j_64 :
  Move(0,3,2,2);
  Move(1,1,2,4);
  Return();
  w_34 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",Egetd(1,1),App0("TNil"))));
  Rpush(z_34);
  n_85 :
  Epushd(3,9);
  MoveTop(3,1);
  goto x_64;
  x_64 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,5,3,1,1);
  goto y_64;
  y_64 :
  TestFunFC(p_1,&&k_35,Egetd(3,2));
  goto z_64;
  z_64 :
  TestFunFC(k_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,9,3,5,1);
  goto a_65;
  a_65 :
  TestFunFC(p_1,&&fail,Egetd(3,6));
  goto b_65;
  b_65 :
  TestFunFC(d_0,&&fail,Egetd(3,9));
  Rpush(h_35);
  goto n_64;
  k_35 :
  TestFunFC(i_1,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto c_65;
  c_65 :
  TestFunFC(k_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,9,3,5,1);
  goto d_65;
  d_65 :
  TestFunFC(i_1,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto e_65;
  e_65 :
  TestFunFC(d_0,&&fail,Egetd(3,9));
  Rpush(h_35);
  goto o_64;
  h_35 :
  goto g_35;
  o_64 :
  Epushd(4,5);
  NotNULLd(3,3);
  NotNULLd(3,7);
  NotNULLd(3,4);
  NotNULLd(3,8);
  Tset(App2("TCons",App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(3,4),App2("TCons",Egetd(3,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(5,5);
  MoveTop(5,1);
  goto q_64;
  q_64 :
  TestFunFC(k_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto r_64;
  r_64 :
  TestFunFC(k_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto s_64;
  s_64 :
  TestFunFC(d_0,&&fail,Egetd(5,5));
  Rpush(u_35);
  goto p_64;
  u_35 :
  goto t_35;
  p_64 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("App",Egetd(5,2),Egetd(5,4)));
  Rpush(w_35);
  goto g_85;
  w_35 :
  Return();
  t_35 :
  Epopd(5,5);
  OneNextSon();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Rpush(x_35);
  goto n_85;
  x_35 :
  OneNextSon();
  Ccall(_stratego_x_27);
  AllBuild();
  AllBuild();
  MoveTop(4,1);
  goto u_64;
  u_64 :
  TestFunFC(k_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto v_64;
  v_64 :
  TestFunFC(k_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto w_64;
  w_64 :
  TestFunFC(d_0,&&fail,Egetd(4,5));
  Rpush(y_35);
  goto t_64;
  y_35 :
  goto s_35;
  t_64 :
  NotNULLd(4,2);
  NotNULLd(4,4);
  Tset(App2("Cons",Egetd(4,2),Egetd(4,4)));
  Return();
  s_35 :
  Epopd(4,5);
  Return();
  g_35 :
  goto a_35;
  n_64 :
  Tset(App0("Nil"));
  Return();
  a_35 :
  Epopd(3,9);
  Return();
  z_34 :
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
  p_34 :
  Epopd(0,5);
  goto n_34;
  o_34 :
  Ccall(_stratego_n_31);
  goto a_36;
  n_34 :
  Cpop();
  a_36 :
  goto t_21;
  m_34 :
  Ccontinue(q_36);
  Epushd(0,5);
  MoveTop(0,2);
  goto z_68;
  z_68 :
  TestFunFC(e_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto a_69;
  a_69 :
  TestFunFC(t_4,&&m_38,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,1,0,3,1);
  Rpush(l_38);
  goto j_65;
  m_38 :
  TestFunFC(h_39,&&n_38,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Cpush(j_39);
  Rpush(k_39);
  goto k_65;
  k_39 :
  goto i_39;
  j_39 :
  Rpush(r_39);
  goto l_65;
  r_39 :
  goto q_39;
  i_39 :
  Cpop();
  q_39 :
  goto l_38;
  n_38 :
  TestFunFC(z_39,&&t_39,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(l_38);
  goto m_65;
  t_39 :
  TestFunFC(a_40,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(l_38);
  goto n_65;
  l_38 :
  goto s_37;
  n_65 :
  Tdupl();
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("App",Egetd(0,4),Egetd(0,5)));
  Rpush(b_41);
  goto g_85;
  b_41 :
  Tpop();
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  s_37 :
  goto u_36;
  m_65 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(c_41);
  t_85 :
  Cpush(h_41);
  Epushd(3,2);
  MoveTop(3,1);
  goto u_68;
  u_68 :
  TestFunFC(x_4,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(t_41);
  goto k_68;
  t_41 :
  goto l_41;
  k_68 :
  Epushd(4,1);
  Tdupl();
  Epushd(5,5);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",Egetd(3,1),App0("TNil"))));
  MoveTop(5,1);
  goto r_68;
  r_68 :
  TestFunFC(k_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto s_68;
  s_68 :
  TestFunFC(k_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto t_68;
  t_68 :
  TestFunFC(d_0,&&fail,Egetd(5,5));
  Rpush(d_42);
  goto l_68;
  d_42 :
  goto c_42;
  l_68 :
  Epushd(6,4);
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,4),App0("TNil"))));
  Ccall(_stratego_p_31);
  MoveTop(6,1);
  goto n_68;
  n_68 :
  TestFunFC(i_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(f_42);
  goto m_68;
  f_42 :
  goto e_42;
  m_68 :
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Return();
  e_42 :
  MoveTop(6,4);
  Move(4,1,6,4);
  Cpush(l_42);
  Tdupl();
  Epushd(7,1);
  MoveTop(7,1);
  goto q_68;
  q_68 :
  TestFunFC(o_42,&&fail,Egetd(7,1));
  Rpush(n_42);
  goto p_68;
  n_42 :
  goto m_42;
  p_68 :
  Return();
  m_42 :
  Epopd(7,1);
  Cpop();
  Crestore();
  Cjump();
  l_42 :
  Epopd(6,4);
  Return();
  c_42 :
  Epopd(5,5);
  Tpop();
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Epopd(4,1);
  Return();
  l_41 :
  Epopd(3,2);
  goto g_41;
  h_41 :
  Ccontinue(p_42);
  Epushd(3,3);
  TestFunTop(y_18);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_42);
  u_85 :
  Cpush(h_43);
  Ccall(_stratego_r_31);
  goto f_43;
  h_43 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Rpush(o_43);
  goto t_85;
  o_43 :
  OneNextSon();
  Rpush(a_44);
  goto u_85;
  a_44 :
  AllBuild();
  goto n_43;
  f_43 :
  Cpop();
  n_43 :
  Return();
  w_42 :
  AllBuild();
  MoveTop(3,1);
  goto x_68;
  x_68 :
  TestFunFC(y_18,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(e_44);
  goto v_68;
  e_44 :
  goto v_42;
  v_68 :
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
  v_42 :
  Epopd(3,3);
  goto g_41;
  p_42 :
  Ccall(_stratego_e_31);
  goto g_44;
  g_41 :
  Cpop();
  g_44 :
  Return();
  c_41 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  u_36 :
  goto t_36;
  l_65 :
  Tset(App0("Fail"));
  Return();
  t_36 :
  goto s_36;
  k_65 :
  Tdupl();
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App2("TCons",Egetd(0,4),App2("TCons",Egetd(0,5),App0("TNil"))),App0("Nil")),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(h_44);
  q_85 :
  Cpush(l_44);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(1,7);
  MoveTop(1,1);
  goto g_66;
  g_66 :
  TestFunFC(i_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto h_66;
  h_66 :
  TestFunFC(k_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto i_66;
  i_66 :
  TestFunFC(k_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto j_66;
  j_66 :
  TestFunFC(d_0,&&fail,Egetd(1,6));
  Rpush(v_44);
  goto f_66;
  v_44 :
  goto n_44;
  f_66 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  n_44 :
  Epopd(1,7);
  OneNextSon();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_27);
  AllBuild();
  AllBuild();
  goto i_44;
  l_44 :
  Ccontinue(w_44);
  Epushd(1,11);
  MoveTop(1,1);
  goto s_66;
  s_66 :
  TestFunFC(h_45,&&g_45,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  goto t_66;
  t_66 :
  TestFunFC(x_4,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(a_45);
  goto k_66;
  g_45 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,9,1,1,1);
  goto u_66;
  u_66 :
  TestFunFC(i_1,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,8,1,2,1);
  goto v_66;
  v_66 :
  TestFunFC(k_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto w_66;
  w_66 :
  TestFunFC(k_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto x_66;
  x_66 :
  TestFunFC(d_0,&&fail,Egetd(1,7));
  goto y_66;
  y_66 :
  TestFunFC(k_0,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  MoveArg(1,11,1,9,1);
  goto z_66;
  z_66 :
  TestFunFC(d_0,&&fail,Egetd(1,11));
  Rpush(a_45);
  goto l_66;
  a_45 :
  goto y_44;
  l_66 :
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  MoveTop(2,1);
  goto r_66;
  r_66 :
  TestFunFC(x_4,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(m_45);
  goto m_66;
  m_45 :
  goto l_45;
  m_66 :
  NotNULLd(1,10);
  Tset(Egetd(1,10));
  Cpush(s_45);
  Tdupl();
  Rpush(b_46);
  r_85 :
  Cpush(e_46);
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(3,5);
  MoveTop(3,1);
  goto o_66;
  o_66 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto p_66;
  p_66 :
  TestFunFC(k_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto q_66;
  q_66 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(m_46);
  goto n_66;
  m_46 :
  goto g_46;
  n_66 :
  Epushd(4,1);
  Move(1,4,3,2);
  Move(4,1,3,4);
  NotNULLd(1,6);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(1,6),App2("TCons",Egetd(4,1),App0("TNil"))));
  Cpush(n_46);
  Tdupl();
  Ccall(_stratego_m_31);
  Cpop();
  Crestore();
  Cjump();
  n_46 :
  Epopd(4,1);
  Return();
  g_46 :
  Epopd(3,5);
  OneNextSon();
  AllBuild();
  goto c_46;
  e_46 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_46);
  goto r_85;
  s_46 :
  AllBuild();
  goto r_46;
  c_46 :
  Cpop();
  r_46 :
  Return();
  b_46 :
  Cpop();
  Crestore();
  Cjump();
  s_45 :
  Return();
  l_45 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,8);
  NotNULLd(1,4);
  NotNULLd(1,6);
  NotNULLd(1,10);
  Tset(App2("TCons",Egetd(1,8),App2("TCons",App2("Cons",App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))),Egetd(1,10)),App0("TNil"))));
  Return();
  y_44 :
  goto x_44;
  k_66 :
  Return();
  x_44 :
  Epopd(1,11);
  goto i_44;
  w_44 :
  Ccontinue(e_47);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Epushd(1,7);
  MoveTop(1,1);
  goto b_67;
  b_67 :
  TestFunFC(i_1,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto c_67;
  c_67 :
  TestFunFC(k_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto d_67;
  d_67 :
  TestFunFC(o_47,&&fail,Egetd(1,3));
  goto e_67;
  e_67 :
  TestFunFC(k_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto f_67;
  f_67 :
  TestFunFC(d_0,&&fail,Egetd(1,6));
  Rpush(n_47);
  goto a_67;
  n_47 :
  goto m_47;
  a_67 :
  NotNULLd(1,7);
  Tset(Egetd(1,7));
  Return();
  m_47 :
  Epopd(1,7);
  OneNextSon();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_27);
  AllBuild();
  AllBuild();
  goto i_44;
  e_47 :
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_31);
  OneNextSon();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_27);
  AllBuild();
  AllBuild();
  goto q_47;
  i_44 :
  Cpop();
  q_47 :
  Cpush(t_47);
  Epushd(1,5);
  MoveTop(1,1);
  goto h_67;
  h_67 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_67;
  i_67 :
  TestFunFC(p_1,&&fail,Egetd(1,2));
  goto j_67;
  j_67 :
  TestFunFC(k_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto k_67;
  k_67 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(w_47);
  goto g_67;
  w_47 :
  goto u_47;
  g_67 :
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Return();
  u_47 :
  Epopd(1,5);
  goto s_47;
  t_47 :
  Rpush(y_47);
  goto q_85;
  y_47 :
  goto x_47;
  s_47 :
  Cpop();
  x_47 :
  Return();
  h_44 :
  Rpush(z_47);
  s_85 :
  Cpush(c_48);
  Ccall(_stratego_r_31);
  goto a_48;
  c_48 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(1,5);
  MoveTop(1,1);
  goto h_68;
  h_68 :
  TestFunFC(k_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_68;
  i_68 :
  TestFunFC(k_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto j_68;
  j_68 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(p_48);
  goto l_67;
  p_48 :
  goto o_48;
  l_67 :
  Tdupl();
  Cpush(s_48);
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",Egetd(1,2),App0("TNil"))));
  MoveTop(2,1);
  goto y_67;
  y_67 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto z_67;
  z_67 :
  TestFunFC(k_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto a_68;
  a_68 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(b_49);
  goto m_67;
  b_49 :
  goto a_49;
  m_67 :
  Epushd(3,4);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_p_31);
  MoveTop(3,1);
  goto o_67;
  o_67 :
  TestFunFC(i_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(r_49);
  goto n_67;
  r_49 :
  goto j_49;
  n_67 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  j_49 :
  MoveTop(3,4);
  goto x_67;
  x_67 :
  TestFunFC(o_42,&&fail,Egetd(3,4));
  Rpush(s_49);
  goto p_67;
  s_49 :
  goto c_49;
  p_67 :
  Epushd(4,7);
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,4),App0("TNil")))));
  MoveTop(4,1);
  goto t_67;
  t_67 :
  TestFunFC(k_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto u_67;
  u_67 :
  TestFunFC(k_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto v_67;
  v_67 :
  TestFunFC(k_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto w_67;
  w_67 :
  TestFunFC(d_0,&&fail,Egetd(4,7));
  Rpush(u_49);
  goto q_67;
  u_49 :
  goto t_49;
  q_67 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,3);
  NotNULLd(4,2);
  NotNULLd(4,4);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,4),App0("TNil"))));
  Ccall(_stratego_p_31);
  MoveTop(6,1);
  goto s_67;
  s_67 :
  TestFunFC(i_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(f_50);
  goto r_67;
  f_50 :
  goto v_49;
  r_67 :
  Move(5,1,6,3);
  NotNULLd(4,2);
  NotNULLd(4,4);
  NotNULLd(4,6);
  NotNULLd(5,1);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",Egetd(4,6),Egetd(5,1)),App0("TNil")))));
  Ccall(_stratego_o_31);
  Return();
  v_49 :
  Epopd(6,3);
  Tpop();
  Epopd(5,1);
  Return();
  t_49 :
  Epopd(4,7);
  Return();
  c_49 :
  Epopd(3,4);
  Return();
  a_49 :
  Epopd(2,5);
  goto q_48;
  s_48 :
  Epushd(2,7);
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,4),App0("TNil")))));
  MoveTop(2,1);
  goto d_68;
  d_68 :
  TestFunFC(k_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto e_68;
  e_68 :
  TestFunFC(k_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto f_68;
  f_68 :
  TestFunFC(k_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto g_68;
  g_68 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(l_52);
  goto b_68;
  l_52 :
  goto m_50;
  b_68 :
  Epushd(3,1);
  Tdupl();
  Epushd(4,1);
  Cpush(n_52);
  NotNULLd(2,2);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App0("TNil"))));
  Ccall(_stratego_p_31);
  goto m_52;
  n_52 :
  Tset(App0("Nil"));
  goto o_52;
  m_52 :
  Cpop();
  o_52 :
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(2,2);
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,4),App2("TCons",App2("Cons",Egetd(2,6),Egetd(3,1)),App0("TNil")))));
  Ccall(_stratego_o_31);
  Epopd(4,1);
  Tpop();
  Epopd(3,1);
  Return();
  m_50 :
  Epopd(2,7);
  goto g_50;
  q_48 :
  Cpop();
  g_50 :
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,4),App0("TNil"))));
  Return();
  o_48 :
  Epopd(1,5);
  OneNextSon();
  Rpush(p_52);
  goto s_85;
  p_52 :
  AllBuild();
  goto e_48;
  a_48 :
  Cpop();
  e_48 :
  Return();
  z_47 :
  Tpop();
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  s_36 :
  goto r_36;
  j_65 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(q_52);
  o_85 :
  Cpush(s_52);
  Ccall(_stratego_r_31);
  goto r_52;
  s_52 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(3,8);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",App2("TCons",App1("Var",Egetd(3,1)),App2("TCons",MakeInt(0),App0("TNil"))),App2("TCons",App0("NULL"),App0("TNil")))));
  MoveTop(3,2);
  goto r_65;
  r_65 :
  TestFunFC(k_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto s_65;
  s_65 :
  TestFunFC(k_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto t_65;
  t_65 :
  TestFunFC(k_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto u_65;
  u_65 :
  TestFunFC(d_0,&&fail,Egetd(3,8));
  Rpush(v_52);
  goto p_65;
  v_52 :
  goto u_52;
  p_65 :
  Epushd(4,1);
  Tdupl();
  Epushd(5,1);
  Cpush(x_52);
  NotNULLd(3,3);
  NotNULLd(3,5);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,5),App0("TNil"))));
  Ccall(_stratego_p_31);
  goto w_52;
  x_52 :
  Tset(App0("Nil"));
  goto y_52;
  w_52 :
  Cpop();
  y_52 :
  MoveTop(5,1);
  Move(4,1,5,1);
  NotNULLd(3,3);
  NotNULLd(3,5);
  NotNULLd(3,7);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,5),App2("TCons",App2("Cons",Egetd(3,7),Egetd(4,1)),App0("TNil")))));
  Ccall(_stratego_o_31);
  Epopd(5,1);
  Tpop();
  Epopd(4,1);
  Return();
  u_52 :
  Epopd(3,8);
  OneNextSon();
  Rpush(z_52);
  goto o_85;
  z_52 :
  AllBuild();
  goto t_52;
  r_52 :
  Cpop();
  t_52 :
  Return();
  q_52 :
  NotNULLd(0,1);
  NotNULLd(0,5);
  Tset(App2("App",Egetd(0,1),Egetd(0,5)));
  Rpush(a_53);
  goto g_85;
  a_53 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(b_53);
  p_85 :
  Cpush(d_53);
  Ccall(_stratego_r_31);
  goto c_53;
  d_53 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(3,6);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",App2("TCons",App1("Var",Egetd(3,1)),App2("TCons",MakeInt(0),App0("TNil"))),App0("TNil"))));
  MoveTop(3,2);
  goto b_66;
  b_66 :
  TestFunFC(k_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto c_66;
  c_66 :
  TestFunFC(k_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto d_66;
  d_66 :
  TestFunFC(d_0,&&fail,Egetd(3,6));
  Rpush(g_53);
  goto x_65;
  g_53 :
  goto f_53;
  x_65 :
  Epushd(4,1);
  Tdupl();
  Epushd(5,1);
  Cpush(i_53);
  Epushd(6,3);
  NotNULLd(3,3);
  NotNULLd(3,5);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,5),App0("TNil"))));
  Ccall(_stratego_p_31);
  MoveTop(6,1);
  goto z_65;
  z_65 :
  TestFunFC(i_1,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(k_53);
  goto y_65;
  k_53 :
  goto j_53;
  y_65 :
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Return();
  j_53 :
  Epopd(6,3);
  goto h_53;
  i_53 :
  Tset(App0("Nil"));
  goto l_53;
  h_53 :
  Cpop();
  l_53 :
  MoveTop(5,1);
  Move(4,1,5,1);
  NotNULLd(3,3);
  NotNULLd(3,5);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,5),App2("TCons",Egetd(4,1),App0("TNil")))));
  Ccall(_stratego_o_31);
  Epopd(5,1);
  Tpop();
  Epopd(4,1);
  Return();
  f_53 :
  Epopd(3,6);
  OneNextSon();
  Rpush(m_53);
  goto p_85;
  m_53 :
  AllBuild();
  goto e_53;
  c_53 :
  Cpop();
  e_53 :
  Return();
  b_53 :
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  r_36 :
  Epopd(0,5);
  goto t_21;
  q_36 :
  Ccontinue(n_53);
  Ccall(_stratego_d_31);
  goto t_21;
  n_53 :
  Epushd(0,4);
  MoveTop(0,1);
  goto c_69;
  c_69 :
  TestFunFC(e_16,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto d_69;
  d_69 :
  TestFunFC(f_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(q_53);
  goto b_69;
  q_53 :
  goto p_53;
  b_69 :
  Tset(App0("Fail"));
  Return();
  p_53 :
  Epopd(0,4);
  goto o_53;
  t_21 :
  Cpop();
  o_53 :
  goto r_21;
  s_21 :
  goto r_53;
  r_21 :
  Cpop();
  r_53 :
  Return();
  m_21 :
ENDPROC

PROC(_stratego_w_31)
  Epushd(0,3);
  MoveTop(0,1);
  goto g_86;
  g_86 :
  TestFunFC(h_39,&&w_53,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(v_53);
  goto v_85;
  w_53 :
  TestFunFC(z_39,&&x_53,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(v_53);
  goto w_85;
  x_53 :
  TestFunFC(y_53,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(v_53);
  goto x_85;
  v_53 :
  goto u_53;
  x_85 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Prim",ATmakeString("_ST_explode_term")),App2("Seq",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,2),App2("Cons",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,3),App2("Cons",App2("Cong",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Prim",ATmakeString("_ST_mkterm")))));
  Return();
  u_53 :
  goto t_53;
  w_85 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_32);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(z_53);
  h_87 :
  Cpush(b_54);
  Epushd(2,3);
  MoveTop(2,1);
  goto e_86;
  e_86 :
  TestFunFC(e_54,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(d_54);
  goto d_86;
  d_54 :
  goto c_54;
  d_86 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  c_54 :
  Epopd(2,3);
  goto a_54;
  b_54 :
  IsAppl();
  OneInit();
  g_54 :
  OneNextSon();
  Cpush(g_54);
  Rpush(o_54);
  goto h_87;
  o_54 :
  Cpop();
  OneBuild();
  goto f_54;
  a_54 :
  Cpop();
  f_54 :
  Return();
  z_53 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",App1("Prim",ATmakeString("_ST_mkterm")),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  t_53 :
  goto s_53;
  v_85 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_32);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(p_54);
  g_87 :
  Cpush(l_56);
  Epushd(2,3);
  MoveTop(2,1);
  goto a_86;
  a_86 :
  TestFunFC(e_54,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_56);
  goto z_85;
  o_56 :
  goto m_56;
  z_85 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  m_56 :
  Epopd(2,3);
  goto m_55;
  l_56 :
  IsAppl();
  OneInit();
  e_57 :
  OneNextSon();
  Cpush(e_57);
  Rpush(g_57);
  goto g_87;
  g_57 :
  Cpop();
  OneBuild();
  goto p_56;
  m_55 :
  Cpop();
  p_56 :
  Return();
  p_54 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App1("Match",Egetd(1,4)),App1("Where",App3("BAM",App1("Prim",ATmakeString("_ST_explode_term")),App1("Var",Egetd(1,1)),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))))))));
  Epopd(1,4);
  Return();
  s_53 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_x_31)
  Epushd(0,2);
  MoveTop(0,1);
  goto n_87;
  n_87 :
  TestFunFC(z_39,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(n_57);
  goto i_87;
  n_57 :
  goto h_57;
  i_87 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_32);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(o_57);
  a_88 :
  Cpush(w_57);
  Epushd(2,3);
  MoveTop(2,1);
  goto l_87;
  l_87 :
  TestFunFC(e_16,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(y_57);
  goto k_87;
  y_57 :
  goto x_57;
  k_87 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  x_57 :
  Epopd(2,3);
  goto q_57;
  w_57 :
  IsAppl();
  OneInit();
  c_58 :
  OneNextSon();
  Cpush(c_58);
  Rpush(c_59);
  goto a_88;
  c_59 :
  Cpop();
  OneBuild();
  goto a_58;
  q_57 :
  Cpop();
  a_58 :
  Return();
  o_57 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",Egetd(1,2),Egetd(1,3),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  h_57 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_y_31)
  Epushd(0,2);
  MoveTop(0,1);
  goto g_88;
  g_88 :
  TestFunFC(z_39,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(f_59);
  goto b_88;
  f_59 :
  goto d_59;
  b_88 :
  Epushd(1,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(p_59);
  s_88 :
  Cpush(v_59);
  Epushd(2,4);
  MoveTop(2,1);
  goto d_88;
  d_88 :
  TestFunFC(e_16,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto e_88;
  e_88 :
  TestFunFC(z_39,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(l_60);
  goto c_88;
  l_60 :
  goto x_59;
  c_88 :
  Move(1,2,2,3);
  Move(1,1,2,4);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  x_59 :
  Epopd(2,4);
  goto u_59;
  v_59 :
  IsAppl();
  OneInit();
  e_61 :
  OneNextSon();
  Cpush(e_61);
  Rpush(g_61);
  goto s_88;
  g_61 :
  Cpop();
  OneBuild();
  goto m_60;
  u_59 :
  Cpop();
  m_60 :
  Return();
  p_59 :
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset(App1("Build",Egetd(1,3)));
  Epopd(1,3);
  Return();
  d_59 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_z_31)
  Epushd(0,6);
  MoveTop(0,3);
  goto f_89;
  f_89 :
  TestFunFC(d_64,&&c_64,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto g_89;
  g_89 :
  TestFunFC(p_1,&&e_64,Egetd(0,4));
  Rpush(x_63);
  goto t_88;
  e_64 :
  TestFunFC(i_1,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(x_63);
  goto u_88;
  c_64 :
  TestFunFC(g_65,&&f_65,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto h_89;
  h_89 :
  TestFunFC(p_1,&&o_65,Egetd(0,4));
  Rpush(x_63);
  goto v_88;
  o_65 :
  TestFunFC(i_1,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(x_63);
  goto w_88;
  f_65 :
  TestFunFC(v_65,&&q_65,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto i_89;
  i_89 :
  TestFunFC(p_1,&&w_65,Egetd(0,4));
  Rpush(x_63);
  goto x_88;
  w_65 :
  TestFunFC(i_1,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(x_63);
  goto y_88;
  q_65 :
  TestFunFC(e_66,&&a_66,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto j_89;
  j_89 :
  TestFunFC(p_1,&&c_68,Egetd(0,4));
  Rpush(x_63);
  goto z_88;
  c_68 :
  TestFunFC(i_1,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(x_63);
  goto a_89;
  a_66 :
  TestFunFC(w_68,&&o_68,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(x_63);
  goto b_89;
  o_68 :
  TestFunFC(h_69,&&y_68,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(x_63);
  goto c_89;
  y_68 :
  TestFunFC(p_69,&&o_69,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(x_63);
  goto d_89;
  o_69 :
  TestFunFC(q_69,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(x_63);
  goto e_89;
  x_63 :
  goto w_63;
  e_89 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Seqs",App2("Cons",App1("Build",Egetd(0,5)),App2("Cons",Egetd(0,4),App2("Cons",App1("Match",Egetd(0,6)),App0("Nil"))))));
  Return();
  w_63 :
  goto v_63;
  d_89 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,4),App1("Match",Egetd(0,5))));
  Return();
  v_63 :
  goto m_63;
  c_89 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",App1("Match",Egetd(0,4)),Egetd(0,5)));
  Return();
  m_63 :
  goto i_63;
  b_89 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App2("Seq",App1("Build",Egetd(0,5)),Egetd(0,4)));
  Return();
  i_63 :
  goto g_63;
  a_89 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,1),App2("Lets",Egetd(0,2),Egetd(0,5))));
  Return();
  g_63 :
  goto a_63;
  z_88 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  a_63 :
  goto y_62;
  y_88 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("LChoice",Egetd(0,1),App1("LChoices",Egetd(0,2))));
  Return();
  y_62 :
  goto p_62;
  x_88 :
  Tset(App0("Fail"));
  Return();
  p_62 :
  goto l_62;
  w_88 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Choice",Egetd(0,1),App1("Choices",Egetd(0,2))));
  Return();
  l_62 :
  goto k_62;
  v_88 :
  Tset(App0("Fail"));
  Return();
  k_62 :
  goto q_61;
  u_88 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Seq",Egetd(0,1),App1("Seqs",Egetd(0,2))));
  Return();
  q_61 :
  goto h_61;
  t_88 :
  Tset(App0("Id"));
  Return();
  h_61 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_a_32)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_90;
  k_90 :
  TestFunFC(o_47,&&fail,Egetd(0,1));
  Rpush(v_69);
  goto j_90;
  v_69 :
  goto r_69;
  j_90 :
  Return();
  r_69 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_32)
  Cpush(w_69);
  Tdupl();
  Rpush(x_69);
  s_90 :
  Cpush(z_69);
  Epushd(0,4);
  MoveTop(0,1);
  goto n_90;
  n_90 :
  TestFunFC(e_70,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(d_70);
  goto m_90;
  d_70 :
  goto a_70;
  m_90 :
  Return();
  a_70 :
  Epopd(0,4);
  goto y_69;
  z_69 :
  Ccall(_stratego_a_32);
  goto f_70;
  y_69 :
  Cpop();
  f_70 :
  AllInit();
  i_70 :
  AllNextSon(&&j_70);
  Rpush(k_70);
  goto s_90;
  k_70 :
  goto i_70;
  j_70 :
  AllBuild();
  Return();
  x_69 :
  Cpop();
  Crestore();
  Cjump();
  w_69 :
ENDPROC

PROC(_stratego_c_32)
  Cpush(p_70);
  Tdupl();
  Rpush(v_70);
  a_91 :
  Epushd(0,4);
  MoveTop(0,2);
  goto v_90;
  v_90 :
  TestFunFC(e_70,&&p_71,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,1,0,2,2);
  Rpush(b_71);
  goto t_90;
  p_71 :
  TestFunFC(e_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(b_71);
  goto u_90;
  b_71 :
  goto a_71;
  u_90 :
  Return();
  a_71 :
  goto w_70;
  t_90 :
  Return();
  w_70 :
  AllInit();
  q_71 :
  AllNextSon(&&r_71);
  Rpush(s_71);
  goto a_91;
  s_71 :
  goto q_71;
  r_71 :
  AllBuild();
  Epopd(0,4);
  Return();
  v_70 :
  Cpop();
  Crestore();
  Cjump();
  p_70 :
ENDPROC

PROC(_stratego_d_32)
  Epushd(0,5);
  MoveTop(0,1);
  goto d_91;
  d_91 :
  TestFunFC(i_72,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto e_91;
  e_91 :
  TestFunFC(d_5,&&j_72,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(h_72);
  goto b_91;
  j_72 :
  TestFunFC(r_72,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(h_72);
  goto c_91;
  h_72 :
  goto z_71;
  c_91 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",Egetd(0,3),App2("Cons",Egetd(0,5),App2("Cons",Egetd(0,4),App0("Nil"))))));
  Return();
  z_71 :
  goto y_71;
  b_91 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_c_32);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_b_32);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",App1("Match",Egetd(0,3)),App2("Cons",Egetd(0,5),App2("Cons",App1("Build",Egetd(0,4)),App0("Nil"))))));
  Return();
  y_71 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_e_32)
  _ST_new();
ENDPROC

PROC(_stratego_f_32)
  Epushd(0,5);
  MoveTop(0,1);
  goto c_92;
  c_92 :
  TestFunFC(i_72,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto d_92;
  d_92 :
  TestFunFC(d_5,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(v_72);
  goto q_91;
  v_72 :
  goto s_72;
  q_91 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_e_32);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(b_73);
  j_93 :
  Cpush(h_73);
  Epushd(2,5);
  MoveTop(2,1);
  goto t_91;
  t_91 :
  TestFunFC(e_70,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto u_91;
  u_91 :
  TestFunFC(x_4,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(j_73);
  goto s_91;
  j_73 :
  goto i_73;
  s_91 :
  Move(1,4,2,3);
  Move(1,2,2,4);
  Move(1,3,2,5);
  NotNULLd(1,4);
  Tset(App1("Var",Egetd(1,4)));
  Return();
  i_73 :
  Epopd(2,5);
  goto c_73;
  h_73 :
  IsAppl();
  OneInit();
  m_73 :
  OneNextSon();
  Cpush(m_73);
  Rpush(o_73);
  goto j_93;
  o_73 :
  Cpop();
  OneBuild();
  goto l_73;
  c_73 :
  Cpop();
  l_73 :
  Return();
  b_73 :
  MoveTop(1,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(u_73);
  k_93 :
  Cpush(w_73);
  Epushd(2,7);
  MoveTop(2,1);
  goto x_91;
  x_91 :
  TestFunFC(e_70,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto y_91;
  y_91 :
  TestFunFC(x_4,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto z_91;
  z_91 :
  TestFunFC(z_22,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto a_92;
  a_92 :
  TestFunFC(p_1,&&fail,Egetd(2,7));
  Rpush(g_74);
  goto w_91;
  g_74 :
  goto y_73;
  w_91 :
  Move(1,4,2,3);
  Move(1,6,2,4);
  Move(1,7,2,6);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  y_73 :
  Epopd(2,7);
  goto v_73;
  w_73 :
  IsAppl();
  OneInit();
  i_74 :
  OneNextSon();
  Cpush(i_74);
  Rpush(r_74);
  goto k_93;
  r_74 :
  Cpop();
  OneBuild();
  goto h_74;
  v_73 :
  Cpop();
  h_74 :
  Return();
  u_73 :
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
  s_72 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_g_32)
  Rpush(t_74);
  l_93 :
  Cpush(a_75);
  Cpush(g_75);
  Ccall(_stratego_f_32);
  Rpush(i_75);
  goto l_93;
  i_75 :
  goto f_75;
  g_75 :
  Ccontinue(j_75);
  TestFunTop(t_4);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_75);
  goto l_93;
  k_75 :
  AllBuild();
  goto f_75;
  j_75 :
  Ccall(_stratego_d_32);
  goto l_75;
  f_75 :
  Cpop();
  l_75 :
  goto z_74;
  a_75 :
  goto o_75;
  z_74 :
  Cpop();
  o_75 :
  Return();
  t_74 :
ENDPROC

PROC(_stratego_h_32)
  Rpush(w_75);
  v_93 :
  Cpush(a_76);
  Ccall(_stratego_g_32);
  goto z_75;
  a_76 :
  goto b_76;
  z_75 :
  Cpop();
  b_76 :
  Cpush(f_76);
  c_76 :
  Cpush(q_76);
  Ccall(_stratego_z_31);
  goto n_76;
  q_76 :
  Ccontinue(r_76);
  Cpush(y_76);
  Ccall(_stratego_y_31);
  goto s_76;
  y_76 :
  Ccontinue(z_76);
  Epushd(0,4);
  MoveTop(0,1);
  goto n_93;
  n_93 :
  TestFunFC(z_39,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto o_93;
  o_93 :
  TestFunFC(e_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(r_77);
  goto m_93;
  r_77 :
  goto b_77;
  m_93 :
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Build",Egetd(0,4)),Egetd(0,3)));
  Return();
  b_77 :
  Epopd(0,4);
  goto s_76;
  z_76 :
  Ccall(_stratego_x_31);
  goto s_77;
  s_76 :
  Cpop();
  s_77 :
  goto n_76;
  r_76 :
  Ccall(_stratego_w_31);
  goto t_77;
  n_76 :
  Cpop();
  t_77 :
  Tduplinv();
  goto c_76;
  f_76 :
  AllInit();
  u_77 :
  AllNextSon(&&a_78);
  Rpush(b_78);
  goto v_93;
  b_78 :
  goto u_77;
  a_78 :
  AllBuild();
  Return();
  w_75 :
ENDPROC

PROC(_stratego_i_32)
  Cpush(i_78);
  Cpush(m_78);
  Epushd(0,6);
  MoveTop(0,1);
  goto z_93;
  z_93 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto a_94;
  a_94 :
  TestFunFC(u_78,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto b_94;
  b_94 :
  TestFunFC(k_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto c_94;
  c_94 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(t_78);
  goto x_93;
  t_78 :
  goto s_78;
  x_93 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_h_32);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,5);
  Tset(App2("App",Egetd(1,1),Egetd(0,5)));
  Ccall(_stratego_v_31);
  Epopd(1,1);
  Return();
  s_78 :
  Epopd(0,6);
  goto j_78;
  m_78 :
  Epushd(0,5);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  Cpush(h_79);
  Epushd(1,2);
  MoveTop(1,1);
  goto f_95;
  f_95 :
  TestFunFC(z_79,&&y_79,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(t_79);
  goto d_94;
  y_79 :
  TestFunFC(b_80,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(t_79);
  goto e_94;
  t_79 :
  goto s_79;
  e_94 :
  Epushd(2,3);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_n_32);
  MoveTop(2,1);
  goto e_95;
  e_95 :
  TestFunFC(e_80,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(d_80);
  goto n_94;
  d_80 :
  goto c_80;
  n_94 :
  Epushd(3,5);
  NotNULLd(2,2);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(3,1);
  goto b_95;
  b_95 :
  TestFunFC(k_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto c_95;
  c_95 :
  TestFunFC(k_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto d_95;
  d_95 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(z_80);
  goto o_94;
  z_80 :
  goto m_80;
  o_94 :
  Epushd(4,5);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(a_81);
  z_99 :
  Cpush(c_81);
  Ccall(_stratego_r_31);
  goto b_81;
  c_81 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(5,5);
  MoveTop(5,1);
  goto q_94;
  q_94 :
  TestFunFC(k_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto r_94;
  r_94 :
  TestFunFC(k_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto s_94;
  s_94 :
  TestFunFC(d_0,&&fail,Egetd(5,5));
  Rpush(e_82);
  goto p_94;
  e_82 :
  goto y_81;
  p_94 :
  NotNULLd(3,2);
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,4),App0("TNil")))));
  Ccall(_stratego_o_31);
  Return();
  y_81 :
  Epopd(5,5);
  OneNextSon();
  Rpush(f_82);
  goto z_99;
  f_82 :
  AllBuild();
  goto s_81;
  b_81 :
  Cpop();
  s_81 :
  Return();
  a_81 :
  NotNULLd(2,3);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",Egetd(2,3),App0("TNil"))));
  MoveTop(4,1);
  goto y_94;
  y_94 :
  TestFunFC(k_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto z_94;
  z_94 :
  TestFunFC(k_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto a_95;
  a_95 :
  TestFunFC(d_0,&&fail,Egetd(4,5));
  Rpush(m_82);
  goto t_94;
  m_82 :
  goto l_82;
  t_94 :
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(q_82);
  b_100 :
  Cpush(a_83);
  Ccall(_stratego_r_31);
  goto r_82;
  a_83 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(5,5);
  MoveTop(5,1);
  goto v_94;
  v_94 :
  TestFunFC(k_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto w_94;
  w_94 :
  TestFunFC(k_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto x_94;
  x_94 :
  TestFunFC(d_0,&&fail,Egetd(5,5));
  Rpush(o_83);
  goto u_94;
  o_83 :
  goto c_83;
  u_94 :
  NotNULLd(4,2);
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,4),App0("TNil")))));
  Ccall(_stratego_o_31);
  Return();
  c_83 :
  Epopd(5,5);
  OneNextSon();
  Rpush(p_83);
  goto b_100;
  p_83 :
  AllBuild();
  goto b_83;
  r_82 :
  Cpop();
  b_83 :
  Return();
  q_82 :
  Return();
  l_82 :
  Epopd(4,5);
  Return();
  m_80 :
  Epopd(3,5);
  Return();
  c_80 :
  Epopd(2,3);
  Return();
  s_79 :
  goto m_79;
  d_94 :
  Epushd(2,2);
  Tset(ATmakeString("tenv"));
  Ccall(_stratego_a_31);
  Rpush(q_83);
  x_99 :
  Cpush(u_83);
  Ccall(_stratego_r_31);
  goto t_83;
  u_83 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("tenv"),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_p_31);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  Epopd(3,2);
  OneNextSon();
  Rpush(w_83);
  goto x_99;
  w_83 :
  AllBuild();
  goto v_83;
  t_83 :
  Cpop();
  v_83 :
  Return();
  q_83 :
  MoveTop(2,1);
  Tset(ATmakeString("senv"));
  Ccall(_stratego_a_31);
  Rpush(a_84);
  y_99 :
  Cpush(i_84);
  Ccall(_stratego_r_31);
  goto h_84;
  i_84 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("TCons",ATmakeString("senv"),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_p_31);
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  Epopd(3,2);
  OneNextSon();
  Rpush(n_84);
  goto y_99;
  n_84 :
  AllBuild();
  goto m_84;
  h_84 :
  Cpop();
  m_84 :
  Return();
  a_84 :
  MoveTop(2,2);
  NotNULLd(1,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",App2("StrategoDump",Egetd(2,1),Egetd(2,2)),App0("TNil"))));
  Ccall(_stratego_m_30);
  Tdupl();
  NotNULLd(1,2);
  Tset(App2("TCons",ATmakeString("image written to file: "),App2("TCons",Egetd(1,2),App0("TNil"))));
  Ccall(_stratego_p_28);
  Ccall(_stratego_q_32);
  Tpop();
  Epopd(2,2);
  Return();
  m_79 :
  Epopd(1,2);
  goto g_79;
  h_79 :
  Ccontinue(t_84);
  Ccall(_stratego_o_28);
  goto g_79;
  t_84 :
  Epushd(1,2);
  MoveTop(1,1);
  goto o_95;
  o_95 :
  TestFunFC(f_85,&&e_85,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(z_84);
  goto g_95;
  e_85 :
  TestFunFC(y_85,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(z_84);
  goto h_95;
  z_84 :
  goto y_84;
  h_95 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(b_86);
  d_100 :
  Cpush(f_86);
  Ccall(_stratego_r_31);
  goto c_86;
  f_86 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  Ccall(_stratego_k_28);
  MoveTop(2,1);
  goto n_95;
  n_95 :
  TestFunFC(d_87,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(u_86);
  goto l_95;
  u_86 :
  goto t_86;
  l_95 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_j_28);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,4);
  Tset(App3("SDef",Egetd(2,2),Egetd(2,3),App2("Scope",Egetd(3,1),App1("SRule",Egetd(2,4)))));
  Ccall(_stratego_h_32);
  Epopd(3,1);
  Return();
  t_86 :
  Epopd(2,4);
  OneNextSon();
  Rpush(e_87);
  goto d_100;
  e_87 :
  AllBuild();
  goto k_86;
  c_86 :
  Cpop();
  k_86 :
  Return();
  b_86 :
  Ccall(_stratego_n_28);
  Return();
  y_84 :
  goto w_84;
  g_95 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(f_87);
  c_100 :
  Cpush(m_87);
  Ccall(_stratego_r_31);
  goto j_87;
  m_87 :
  TestFunTop(i_1);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  Ccall(_stratego_k_28);
  MoveTop(2,1);
  goto k_95;
  k_95 :
  TestFunFC(b_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(f_88);
  goto i_95;
  f_88 :
  goto z_87;
  i_95 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_j_28);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,4);
  Tset(App3("SDef",Egetd(2,2),Egetd(2,3),App2("Scope",Egetd(3,1),Egetd(2,4))));
  Ccall(_stratego_h_32);
  Ccall(_stratego_b_28);
  Epopd(3,1);
  Return();
  z_87 :
  Epopd(2,4);
  OneNextSon();
  Rpush(j_88);
  goto c_100;
  j_88 :
  AllBuild();
  goto q_87;
  j_87 :
  Cpop();
  q_87 :
  Return();
  f_87 :
  Ccall(_stratego_n_28);
  Return();
  w_84 :
  Epopd(1,2);
  goto u_84;
  g_79 :
  Cpop();
  u_84 :
  OneNextSon();
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_x_27);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto q_95;
  q_95 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_95;
  r_95 :
  TestFunFC(k_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(r_88);
  goto p_95;
  r_88 :
  goto f_79;
  p_95 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Return();
  f_79 :
  Epopd(0,5);
  goto x_78;
  j_78 :
  Cpop();
  x_78 :
  goto h_78;
  i_78 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("evaluation failed: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_p_32);
  Epopd(0,1);
  Tpop();
  goto q_89;
  h_78 :
  Cpop();
  q_89 :
ENDPROC

PROC(_stratego_j_32)
  Rpush(r_89);
  x_100 :
  Cpush(t_89);
  Epushd(0,7);
  MoveTop(0,1);
  goto g_100;
  g_100 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto h_100;
  h_100 :
  TestFunFC(i_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto i_100;
  i_100 :
  TestFunFC(k_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto j_100;
  j_100 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  Rpush(v_89);
  goto e_100;
  v_89 :
  goto u_89;
  e_100 :
  Epushd(1,1);
  NotNULLd(0,3);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",Egetd(0,6),App0("TNil"))));
  Ccall(_stratego_i_32);
  MoveTop(1,1);
  NotNULLd(0,4);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",Egetd(1,1),App0("TNil"))));
  Rpush(w_89);
  goto x_100;
  w_89 :
  Epopd(1,1);
  Return();
  u_89 :
  Epopd(0,7);
  goto s_89;
  t_89 :
  goto x_89;
  s_89 :
  Cpop();
  x_89 :
  Return();
  r_89 :
ENDPROC

PROC(_stratego_k_32)
  _ST_create_table();
ENDPROC

PROC(_stratego_l_32)
  Ccall(_stratego_k_32);
ENDPROC

PROC(_stratego_m_32)
  Tdupl();
  Tset(ATmakeString("senv"));
  Ccall(_stratego_l_32);
  Tpop();
  Tdupl();
  Tset(ATmakeString("tenv"));
  Ccall(_stratego_l_32);
  Tpop();
ENDPROC

PROC(_stratego_n_32)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_o_32)
  Epushd(0,5);
  MoveTop(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_n_32);
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  MoveTop(0,3);
  goto d_101;
  d_101 :
  TestFunFC(i_1,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(z_89);
  goto b_101;
  z_89 :
  goto y_89;
  b_101 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  y_89 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_32)
  _ST_printnl();
ENDPROC

PROC(_stratego_q_32)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_p_32);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_r_32)
  Tdupl();
  Tset(ATmakeString("--------------------------------------------------------------------"));
  Ccall(_stratego_q_32);
  Tpop();
  Tdupl();
  Tset(ATmakeString("This is SI, the Stratego Interpreter"));
  Ccall(_stratego_q_32);
  Tpop();
  Tdupl();
  Tset(ATmakeString("Copyright (c) 2001, Eelco Visser <visser@acm.org>"));
  Ccall(_stratego_q_32);
  Tpop();
  Tdupl();
  Tset(ATmakeString("This program is free software; you can redistribute it and/or modify"));
  Ccall(_stratego_q_32);
  Tpop();
  Tdupl();
  Tset(ATmakeString("it under the terms of the GNU General Public License as published by"));
  Ccall(_stratego_q_32);
  Tpop();
  Tdupl();
  Tset(ATmakeString("the Free Software Foundation; either version 2, or (at your option)"));
  Ccall(_stratego_q_32);
  Tpop();
  Tdupl();
  Tset(ATmakeString("any later version."));
  Ccall(_stratego_q_32);
  Tpop();
  Tdupl();
  Tset(ATmakeString("--------------------------------------------------------------------"));
  Ccall(_stratego_q_32);
  Tpop();
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_r_32);
  Ccall(_stratego_o_32);
  Ccall(_stratego_m_32);
  Ccall(_stratego_j_32);
  Ccall(_stratego_w_27);
ENDPROC

DOIT

