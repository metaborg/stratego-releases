#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,d_53);
VARDECL(AFun,x_52);
VARDECL(AFun,t_52);
VARDECL(AFun,p_51);
VARDECL(AFun,o_51);
VARDECL(AFun,m_51);
VARDECL(AFun,k_51);
VARDECL(AFun,h_51);
VARDECL(AFun,e_51);
VARDECL(AFun,b_51);
VARDECL(AFun,y_50);
VARDECL(AFun,g_50);
VARDECL(AFun,q_48);
VARDECL(AFun,i_47);
VARDECL(AFun,j_46);
VARDECL(AFun,v_44);
VARDECL(AFun,s_44);
VARDECL(AFun,h_31);
VARDECL(AFun,g_18);
VARDECL(AFun,a_16);
VARDECL(AFun,t_12);
VARDECL(AFun,q_12);
VARDECL(AFun,g_9);
VARDECL(AFun,f_9);
VARDECL(AFun,z_3);
VARDECL(AFun,x_3);
VARDECL(AFun,h_3);
VARDECL(AFun,g_3);
VARDECL(AFun,e_3);
VARDECL(AFun,u_2);
VARDECL(AFun,t_2);
VARDECL(AFun,r_1);
VARDECL(AFun,j_1);
VARDECL(AFun,c_1);
VARDECL(AFun,b_1);
VARDECL(AFun,a_1);
VARDECL(AFun,z_0);
VARDECL(AFun,y_0);
VARDECL(AFun,x_0);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_x_61);
PROCDECL(_stratego_y_61);
PROCDECL(_stratego_z_61);
PROCDECL(_stratego_a_62);
PROCDECL(_stratego_b_62);
PROCDECL(_stratego_c_62);
PROCDECL(_stratego_d_62);
PROCDECL(_stratego_e_62);
PROCDECL(_stratego_f_62);
PROCDECL(_stratego_g_62);
PROCDECL(_stratego_h_62);
PROCDECL(_stratego_i_62);
PROCDECL(_stratego_j_62);
PROCDECL(_stratego_k_62);
PROCDECL(_stratego_l_62);
PROCDECL(_stratego_m_62);
PROCDECL(_stratego_n_62);
PROCDECL(_stratego_o_62);
PROCDECL(_stratego_p_62);
PROCDECL(_stratego_q_62);
PROCDECL(_stratego_r_62);
PROCDECL(_stratego_s_62);
PROCDECL(_stratego_t_62);
PROCDECL(_stratego_u_62);
PROCDECL(_stratego_v_62);
PROCDECL(_stratego_w_62);
PROCDECL(_stratego_y_62);
PROCDECL(_stratego_z_62);
PROCDECL(_stratego_a_63);
PROCDECL(_stratego_b_63);
PROCDECL(_stratego_c_63);
PROCDECL(_stratego_d_63);
PROCDECL(_stratego_e_63);
PROCDECL(_stratego_f_63);
PROCDECL(_stratego_g_63);
PROCDECL(_stratego_h_63);
PROCDECL(_stratego_i_63);
PROCDECL(_stratego_j_63);
PROCDECL(_stratego_k_63);
PROCDECL(_stratego_l_63);
PROCDECL(_stratego_m_63);
PROCDECL(_stratego_n_63);
PROCDECL(_stratego_o_63);
PROCDECL(_stratego_p_63);
PROCDECL(_stratego_q_63);
PROCDECL(_stratego_r_63);
PROCDECL(_stratego_s_63);
PROCDECL(_stratego_u_63);
PROCDECL(_stratego_v_63);
PROCDECL(_stratego_w_63);
PROCDECL(_stratego_x_63);
PROCDECL(_stratego_y_63);
PROCDECL(_stratego_z_63);
PROCDECL(_stratego_a_64);
PROCDECL(_stratego_b_64);
PROCDECL(_stratego_c_64);

PROC(_stratego_init_afuns)
  MOVE(d_53,ATmakeAFun("Explode",2,0));
  MOVE(x_52,ATmakeAFun("ExplodeCong",2,0));
  MOVE(t_52,ATmakeAFun("Match",1,0));
  MOVE(p_51,ATmakeAFun("BAM",3,0));
  MOVE(o_51,ATmakeAFun("AM",2,0));
  MOVE(m_51,ATmakeAFun("MA",2,0));
  MOVE(k_51,ATmakeAFun("BA",2,0));
  MOVE(h_51,ATmakeAFun("Lets",2,0));
  MOVE(e_51,ATmakeAFun("LChoices",1,0));
  MOVE(b_51,ATmakeAFun("Choices",1,0));
  MOVE(y_50,ATmakeAFun("Seqs",1,0));
  MOVE(g_50,ATmakeAFun("Wld",0,0));
  MOVE(q_48,ATmakeAFun("StratRule",3,0));
  MOVE(i_47,ATmakeAFun("Con",3,0));
  MOVE(j_46,ATmakeAFun("SRule",1,0));
  MOVE(v_44,ATmakeAFun("App",2,0));
  MOVE(s_44,ATmakeAFun("Build",1,0));
  MOVE(h_31,ATmakeAFun("Call",2,0));
  MOVE(g_18,ATmakeAFun("Mod",2,0));
  MOVE(a_16,ATmakeAFun("SVar",1,0));
  MOVE(t_12,ATmakeAFun("Rec",2,0));
  MOVE(q_12,ATmakeAFun("Let",2,0));
  MOVE(g_9,ATmakeAFun("Rule",3,0));
  MOVE(f_9,ATmakeAFun("LRule",1,0));
  MOVE(z_3,ATmakeAFun("Scope",2,0));
  MOVE(x_3,ATmakeAFun("Var",1,0));
  MOVE(h_3,ATmakeAFun("FunType",2,0));
  MOVE(g_3,ATmakeAFun("ConstType",1,0));
  MOVE(e_3,ATmakeAFun("OpDecl",2,0));
  MOVE(u_2,ATmakeAFun("Operations",1,0));
  MOVE(t_2,ATmakeAFun("Sorts",1,0));
  MOVE(r_1,ATmakeAFun("SDef",3,0));
  MOVE(j_1,ATmakeAFun("RDef",3,0));
  MOVE(c_1,ATmakeAFun("Nil",0,0));
  MOVE(b_1,ATmakeAFun("Strategies",1,0));
  MOVE(a_1,ATmakeAFun("Rules",1,0));
  MOVE(z_0,ATmakeAFun("Signature",1,0));
  MOVE(y_0,ATmakeAFun("Cons",2,0));
  MOVE(x_0,ATmakeAFun("Specification",1,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("extract-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_x_61);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_y_61);
  Ccall(_stratego_d_62);
  Ccall(_stratego_z_63);
  Ccall(_stratego_b_64);
  Ccall(_stratego_c_64);
  Ccall(_stratego_z_61);
  Ccall(_stratego_b_62);
ENDPROC

PROC(_stratego_x_61)
  _ST_printnl();
ENDPROC

PROC(_stratego_y_61)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_z_61)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_x_61);
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
  Ccall(_stratego_x_61);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_a_62);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_a_62)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_4;
  t_4 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto v_4;
  c_0 :
  goto b_0;
  v_4 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_62)
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
  goto x_4;
  x_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto b_5;
  h_0 :
  goto g_0;
  b_5 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_a_62);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_c_62);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_c_62);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_c_62)
  _ST_exit();
ENDPROC

PROC(_stratego_d_62)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test1"));
  Ccall(_stratego_h_62);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Epushd(1,1);
  Tset(ATmakeString("data/mkcons-spec.trm"));
  Ccall(_stratego_y_63);
  Ccall(_stratego_j_62);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_h_62);
  Ccall(_stratego_i_62);
  goto o_0;
  m_0 :
  Cpop();
  o_0 :
  Tset(App0("TNil"));
  Tdupl();
  Tset(App0("TNil"));
  MoveTop(0,2);
  Tpop();
  Cpush(q_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto p_0;
  q_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_x_61);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_x_61);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_i_62);
  goto r_0;
  p_0 :
  Cpop();
  r_0 :
  Tpop();
  Ccall(_stratego_e_62);
  goto j_0;
  l_0 :
  Ccall(_stratego_g_62);
  goto s_0;
  j_0 :
  Cpop();
  s_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_e_62)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_f_62);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_a_62);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_f_62)
  _ST_add();
ENDPROC

PROC(_stratego_g_62)
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
  Ccall(_stratego_f_62);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_a_62);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_h_62)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_x_61);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_i_62)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto y_11;
  y_11 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto z_11;
  z_11 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto a_12;
  a_12 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(u_0);
  goto j_12;
  u_0 :
  goto t_0;
  j_12 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  t_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_j_62)
  Epushd(0,11);
  MoveTop(0,1);
  goto b_13;
  b_13 :
  TestFunFC(x_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto c_13;
  c_13 :
  TestFunFC(y_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto d_13;
  d_13 :
  TestFunFC(z_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto e_13;
  e_13 :
  TestFunFC(y_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto f_13;
  f_13 :
  TestFunFC(a_1,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto g_13;
  g_13 :
  TestFunFC(y_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,11,0,8,1);
  goto q_13;
  q_13 :
  TestFunFC(b_1,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto r_13;
  r_13 :
  TestFunFC(c_1,&&fail,Egetd(0,11));
  Rpush(w_0);
  goto z_15;
  w_0 :
  goto v_0;
  z_15 :
  Epushd(1,11);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_m_62);
  MoveTop(1,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(d_1);
  g_16 :
  Cpush(f_1);
  Ccall(_stratego_l_62);
  goto e_1;
  f_1 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto o_12;
  o_12 :
  TestFunFC(j_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(i_1);
  goto h_16;
  i_1 :
  goto h_1;
  h_16 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_q_62);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,4);
  Tset(App3("SDef",Egetd(2,2),Egetd(2,3),App2("Scope",Egetd(3,1),App1("SRule",Egetd(2,4)))));
  Epopd(3,1);
  Return();
  h_1 :
  Epopd(2,4);
  OneNextSon();
  Rpush(k_1);
  goto g_16;
  k_1 :
  AllBuild();
  goto g_1;
  e_1 :
  Cpop();
  g_1 :
  Return();
  d_1 :
  MoveTop(1,2);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(l_1);
  k_16 :
  Cpush(n_1);
  Ccall(_stratego_l_62);
  goto m_1;
  n_1 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto s_12;
  s_12 :
  TestFunFC(r_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(q_1);
  goto l_16;
  q_1 :
  goto p_1;
  l_16 :
  Epushd(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_q_62);
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,4);
  Tset(App3("SDef",Egetd(2,2),Egetd(2,3),App2("Scope",Egetd(3,1),Egetd(2,4))));
  Epopd(3,1);
  Return();
  p_1 :
  Epopd(2,4);
  OneNextSon();
  Rpush(s_1);
  goto k_16;
  s_1 :
  AllBuild();
  goto o_1;
  m_1 :
  Cpop();
  o_1 :
  Return();
  l_1 :
  MoveTop(1,3);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Cons",Egetd(1,1),App2("Cons",Egetd(1,2),App2("Cons",Egetd(1,3),App0("Nil")))));
  Ccall(_stratego_k_62);
  MoveTop(1,4);
  NotNULLd(0,4);
  NotNULLd(1,4);
  Tset(App1("Specification",App2("Cons",App1("Signature",Egetd(0,4)),App2("Cons",App1("Strategies",Egetd(1,4)),App0("Nil")))));
  Ccall(_stratego_u_62);
  MoveTop(1,5);
  goto w_12;
  w_12 :
  TestFunFC(x_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  goto x_12;
  x_12 :
  TestFunFC(y_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto y_12;
  y_12 :
  TestFunFC(y_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,11,1,8,1);
  goto z_12;
  z_12 :
  TestFunFC(b_1,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  goto a_13;
  a_13 :
  TestFunFC(c_1,&&fail,Egetd(1,11));
  Rpush(u_1);
  goto x_16;
  u_1 :
  goto t_1;
  x_16 :
  NotNULLd(1,10);
  Tset(Egetd(1,10));
  Ccall(_stratego_z_62);
  Ccall(_stratego_l_63);
  Return();
  t_1 :
  Epopd(1,11);
  Return();
  v_0 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_k_62)
  Rpush(w_1);
  z_17 :
  Cpush(y_1);
  Ccall(_stratego_l_62);
  goto x_1;
  y_1 :
  Epushd(0,3);
  MoveTop(0,1);
  goto m_17;
  m_17 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(b_2);
  goto a_18;
  b_2 :
  goto a_2;
  a_18 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(c_2);
  b_18 :
  Cpush(e_2);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_2);
  goto b_18;
  f_2 :
  AllBuild();
  goto d_2;
  e_2 :
  Ccall(_stratego_l_62);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(h_2);
  goto z_17;
  h_2 :
  goto g_2;
  d_2 :
  Cpop();
  g_2 :
  Return();
  c_2 :
  Return();
  a_2 :
  Epopd(0,3);
  goto z_1;
  x_1 :
  Cpop();
  z_1 :
  Return();
  w_1 :
ENDPROC

PROC(_stratego_l_62)
  Epushd(0,1);
  MoveTop(0,1);
  goto s_18;
  s_18 :
  TestFunFC(c_1,&&fail,Egetd(0,1));
  Rpush(j_2);
  goto u_18;
  j_2 :
  goto i_2;
  u_18 :
  Return();
  i_2 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_62)
  Rpush(k_2);
  v_18 :
  Cpush(m_2);
  Ccall(_stratego_l_62);
  goto l_2;
  m_2 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_62);
  OneNextSon();
  Rpush(o_2);
  goto v_18;
  o_2 :
  AllBuild();
  goto n_2;
  l_2 :
  Cpop();
  n_2 :
  Return();
  k_2 :
  Ccall(_stratego_k_62);
ENDPROC

PROC(_stratego_n_62)
  Epushd(0,2);
  MoveTop(0,1);
  goto y_18;
  y_18 :
  TestFunFC(t_2,&&s_2,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(r_2);
  goto d_19;
  s_2 :
  TestFunFC(u_2,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(r_2);
  goto e_19;
  r_2 :
  goto q_2;
  e_19 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(v_2);
  h_19 :
  Cpush(x_2);
  Ccall(_stratego_l_62);
  goto w_2;
  x_2 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_62);
  OneNextSon();
  Rpush(z_2);
  goto h_19;
  z_2 :
  AllBuild();
  goto y_2;
  w_2 :
  Cpop();
  y_2 :
  Return();
  v_2 :
  Return();
  q_2 :
  goto p_2;
  d_19 :
  Tset(App0("Nil"));
  Return();
  p_2 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_o_62)
  Epushd(0,5);
  MoveTop(0,1);
  goto n_19;
  n_19 :
  TestFunFC(e_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_19;
  o_19 :
  TestFunFC(g_3,&&f_3,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  Rpush(c_3);
  goto f_20;
  f_3 :
  TestFunFC(h_3,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(c_3);
  goto g_20;
  c_3 :
  goto b_3;
  g_20 :
  Epushd(1,2);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(i_3);
  h_20 :
  Cpush(k_3);
  Ccall(_stratego_l_62);
  goto j_3;
  k_3 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_62);
  OneNextSon();
  Rpush(m_3);
  goto h_20;
  m_3 :
  AllBuild();
  goto l_3;
  j_3 :
  Cpop();
  l_3 :
  Return();
  i_3 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(n_3);
  j_20 :
  Cpush(p_3);
  Ccall(_stratego_l_62);
  goto o_3;
  p_3 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("Call",App1("SVar",Egetd(2,1)),App0("Nil")));
  Epopd(2,1);
  OneNextSon();
  Rpush(r_3);
  goto j_20;
  r_3 :
  AllBuild();
  goto q_3;
  o_3 :
  Cpop();
  q_3 :
  Return();
  n_3 :
  MoveTop(1,2);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(1,2);
  Tset(App3("SDef",Egetd(0,2),Egetd(1,1),App2("Cong",Egetd(0,2),Egetd(1,2))));
  Epopd(1,2);
  Return();
  b_3 :
  goto a_3;
  f_20 :
  NotNULLd(0,2);
  Tset(App3("SDef",Egetd(0,2),App0("Nil"),App2("Cong",Egetd(0,2),App0("Nil"))));
  Return();
  a_3 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_62)
  _ST_new();
ENDPROC

PROC(_stratego_q_62)
  Rpush(s_3);
  x_26 :
  Cpush(u_3);
  Epushd(0,2);
  MoveTop(0,1);
  goto n_20;
  n_20 :
  TestFunFC(x_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(w_3);
  goto y_26;
  w_3 :
  goto v_3;
  y_26 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  v_3 :
  Epopd(0,2);
  goto t_3;
  u_3 :
  Ccontinue(y_3);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_t_62);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(z_3);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(a_4);
  goto x_26;
  a_4 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_r_62);
  Epopd(1,2);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto u_20;
  u_20 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto v_20;
  v_20 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto w_20;
  w_20 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(c_4);
  goto f_27;
  c_4 :
  goto b_4;
  f_27 :
  Move(0,3,1,4);
  Return();
  b_4 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(d_4);
  g_27 :
  Cpush(f_4);
  Ccall(_stratego_l_62);
  Tset(App0("Nil"));
  goto e_4;
  f_4 :
  Epushd(1,3);
  MoveTop(1,1);
  goto k_21;
  k_21 :
  TestFunFC(y_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(i_4);
  goto h_27;
  i_4 :
  goto h_4;
  h_27 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(j_4);
  goto g_27;
  j_4 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,2);
  goto f_21;
  f_21 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto g_21;
  g_21 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto j_21;
  j_21 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(l_4);
  goto k_27;
  l_4 :
  goto k_4;
  k_27 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(m_4);
  l_27 :
  Cpush(o_4);
  Ccall(_stratego_l_62);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto n_4;
  o_4 :
  Ccontinue(p_4);
  Epushd(3,3);
  MoveTop(3,1);
  goto e_21;
  e_21 :
  TestFunFC(y_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(r_4);
  goto m_27;
  r_4 :
  goto q_4;
  m_27 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(s_4);
  s_27 :
  Cpush(z_4);
  Epushd(4,3);
  MoveTop(4,1);
  goto d_21;
  d_21 :
  TestFunFC(y_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(c_5);
  goto t_27;
  c_5 :
  goto a_5;
  t_27 :
  Move(3,2,4,2);
  Return();
  a_5 :
  Epopd(4,3);
  goto w_4;
  z_4 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_5);
  goto s_27;
  e_5 :
  AllBuild();
  goto d_5;
  w_4 :
  Cpop();
  d_5 :
  Return();
  s_4 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(f_5);
  goto l_27;
  f_5 :
  Return();
  q_4 :
  Epopd(3,3);
  goto n_4;
  p_4 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_5);
  goto l_27;
  h_5 :
  AllBuild();
  goto g_5;
  n_4 :
  Cpop();
  g_5 :
  Return();
  m_4 :
  Return();
  k_4 :
  Epopd(2,6);
  Return();
  h_4 :
  Epopd(1,3);
  goto g_4;
  e_4 :
  Cpop();
  g_4 :
  Return();
  d_4 :
  Epopd(0,3);
  goto t_3;
  y_3 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto n_21;
  n_21 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto o_21;
  o_21 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto p_21;
  p_21 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Rpush(k_5);
  goto v_27;
  k_5 :
  goto j_5;
  v_27 :
  Move(0,2,1,4);
  Return();
  j_5 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(l_5);
  w_27 :
  Cpush(n_5);
  Ccall(_stratego_l_62);
  Tset(App0("Nil"));
  goto m_5;
  n_5 :
  Epushd(1,3);
  MoveTop(1,1);
  goto b_22;
  b_22 :
  TestFunFC(y_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(q_5);
  goto x_27;
  q_5 :
  goto p_5;
  x_27 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(r_5);
  goto x_26;
  r_5 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(s_5);
  goto w_27;
  s_5 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  MoveTop(2,3);
  goto y_21;
  y_21 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto z_21;
  z_21 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto a_22;
  a_22 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(u_5);
  goto b_28;
  u_5 :
  goto t_5;
  b_28 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(v_5);
  c_28 :
  Cpush(x_5);
  Ccall(_stratego_l_62);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto w_5;
  x_5 :
  Ccontinue(y_5);
  Epushd(3,3);
  MoveTop(3,1);
  goto x_21;
  x_21 :
  TestFunFC(y_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(a_6);
  goto d_28;
  a_6 :
  goto z_5;
  d_28 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(b_6);
  e_28 :
  Cpush(g_6);
  Epushd(4,3);
  MoveTop(4,1);
  goto w_21;
  w_21 :
  TestFunFC(y_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(i_6);
  goto f_28;
  i_6 :
  goto h_6;
  f_28 :
  Move(3,2,4,2);
  Return();
  h_6 :
  Epopd(4,3);
  goto f_6;
  g_6 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_6);
  goto e_28;
  k_6 :
  AllBuild();
  goto j_6;
  f_6 :
  Cpop();
  j_6 :
  Return();
  b_6 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(l_6);
  goto c_28;
  l_6 :
  Return();
  z_5 :
  Epopd(3,3);
  goto w_5;
  y_5 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_6);
  goto c_28;
  n_6 :
  AllBuild();
  goto m_6;
  w_5 :
  Cpop();
  m_6 :
  Return();
  v_5 :
  Return();
  t_5 :
  Epopd(2,7);
  Return();
  p_5 :
  Epopd(1,3);
  goto o_5;
  m_5 :
  Cpop();
  o_5 :
  Return();
  l_5 :
  Epopd(0,2);
  goto i_5;
  t_3 :
  Cpop();
  i_5 :
  Return();
  s_3 :
ENDPROC

PROC(_stratego_r_62)
  Epushd(0,5);
  MoveTop(0,5);
  goto j_30;
  j_30 :
  TestFunFC(a_0,&&r_6,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto k_30;
  k_30 :
  TestFunFC(a_0,&&s_6,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto l_30;
  l_30 :
  TestFunFC(d_0,&&t_6,Egetd(0,4));
  Cpush(w_6);
  Rpush(x_6);
  goto v_32;
  x_6 :
  goto u_6;
  w_6 :
  Rpush(z_6);
  goto a_33;
  z_6 :
  goto y_6;
  u_6 :
  Cpop();
  y_6 :
  goto q_6;
  t_6 :
  Rpush(q_6);
  goto a_33;
  s_6 :
  Rpush(q_6);
  goto a_33;
  r_6 :
  Rpush(q_6);
  goto a_33;
  q_6 :
  goto p_6;
  a_33 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(a_7);
  b_33 :
  Cpush(c_7);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(e_7);
  Epushd(1,7);
  MoveTop(1,1);
  goto i_29;
  i_29 :
  TestFunFC(y_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto j_29;
  j_29 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto k_29;
  k_29 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto l_29;
  l_29 :
  TestFunFC(d_0,&&fail,Egetd(1,6));
  Rpush(g_7);
  goto c_33;
  g_7 :
  goto f_7;
  c_33 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  f_7 :
  Epopd(1,7);
  goto d_7;
  e_7 :
  Ccall(_stratego_s_62);
  goto h_7;
  d_7 :
  Cpop();
  h_7 :
  OneNextSon();
  Ccall(_stratego_a_62);
  AllBuild();
  AllBuild();
  goto b_7;
  c_7 :
  Epushd(1,7);
  MoveTop(1,1);
  goto x_29;
  x_29 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto y_29;
  y_29 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto f_30;
  f_30 :
  TestFunFC(y_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto g_30;
  g_30 :
  TestFunFC(d_0,&&fail,Egetd(1,7));
  Rpush(k_7);
  goto d_33;
  k_7 :
  goto j_7;
  d_33 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  j_7 :
  Epopd(1,7);
  goto i_7;
  b_7 :
  Cpop();
  i_7 :
  Cpush(m_7);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_62);
  OneNextSon();
  Ccall(_stratego_a_62);
  AllBuild();
  AllBuild();
  goto l_7;
  m_7 :
  Rpush(o_7);
  goto b_33;
  o_7 :
  goto n_7;
  l_7 :
  Cpop();
  n_7 :
  Return();
  a_7 :
  Return();
  p_6 :
  goto o_6;
  v_32 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(p_7);
  w_32 :
  Cpush(r_7);
  Ccall(_stratego_l_62);
  goto q_7;
  r_7 :
  Ccontinue(s_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto g_29;
  g_29 :
  TestFunFC(y_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(u_7);
  goto x_32;
  u_7 :
  goto t_7;
  x_32 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(v_7);
  y_32 :
  Cpush(x_7);
  Epushd(2,3);
  MoveTop(2,1);
  goto u_28;
  u_28 :
  TestFunFC(y_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(z_7);
  goto z_32;
  z_7 :
  goto y_7;
  z_32 :
  Move(1,2,2,2);
  Return();
  y_7 :
  Epopd(2,3);
  goto w_7;
  x_7 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_8);
  goto y_32;
  b_8 :
  AllBuild();
  goto a_8;
  w_7 :
  Cpop();
  a_8 :
  Return();
  v_7 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(d_8);
  goto w_32;
  d_8 :
  Return();
  t_7 :
  Epopd(1,3);
  goto q_7;
  s_7 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_8);
  goto w_32;
  f_8 :
  AllBuild();
  goto e_8;
  q_7 :
  Cpop();
  e_8 :
  Return();
  p_7 :
  Return();
  o_6 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_s_62)
  Epushd(0,7);
  MoveTop(0,1);
  goto f_35;
  f_35 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto g_35;
  g_35 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto i_35;
  i_35 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto j_35;
  j_35 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(h_8);
  goto y_37;
  h_8 :
  goto g_8;
  y_37 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto n_33;
  n_33 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto o_33;
  o_33 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto p_33;
  p_33 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(j_8);
  goto z_37;
  j_8 :
  goto i_8;
  z_37 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  i_8 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto r_33;
  r_33 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto s_33;
  s_33 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto t_33;
  t_33 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(l_8);
  goto a_38;
  l_8 :
  goto k_8;
  a_38 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  k_8 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(m_8);
  g_38 :
  Epushd(2,9);
  MoveTop(2,1);
  goto i_34;
  i_34 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto j_34;
  j_34 :
  TestFunFC(c_1,&&q_8,Egetd(2,2));
  goto k_34;
  k_34 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto l_34;
  l_34 :
  TestFunFC(c_1,&&fail,Egetd(2,6));
  goto m_34;
  m_34 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(p_8);
  goto h_38;
  q_8 :
  TestFunFC(y_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto n_34;
  n_34 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto o_34;
  o_34 :
  TestFunFC(y_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto p_34;
  p_34 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(p_8);
  goto i_38;
  p_8 :
  goto o_8;
  i_38 :
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
  Rpush(s_8);
  goto g_38;
  s_8 :
  OneNextSon();
  Ccall(_stratego_a_62);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto f_34;
  f_34 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto g_34;
  g_34 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto h_34;
  h_34 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(t_8);
  goto j_38;
  t_8 :
  goto r_8;
  j_38 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  r_8 :
  Epopd(3,5);
  Return();
  o_8 :
  goto n_8;
  h_38 :
  Tset(App0("Nil"));
  Return();
  n_8 :
  Epopd(2,9);
  Return();
  m_8 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,5);
  goto s_34;
  s_34 :
  TestFunFC(a_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto b_35;
  b_35 :
  TestFunFC(a_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto c_35;
  c_35 :
  TestFunFC(d_0,&&fail,Egetd(1,9));
  Rpush(v_8);
  goto v_38;
  v_8 :
  goto u_8;
  v_38 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(w_8);
  w_38 :
  Cpush(y_8);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_8);
  goto w_38;
  z_8 :
  AllBuild();
  goto x_8;
  y_8 :
  Ccall(_stratego_l_62);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto a_9;
  x_8 :
  Cpop();
  a_9 :
  Return();
  w_8 :
  Return();
  u_8 :
  Epopd(1,9);
  Return();
  g_8 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_t_62)
  Epushd(0,6);
  MoveTop(0,2);
  goto z_38;
  z_38 :
  TestFunFC(z_3,&&e_9,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(d_9);
  goto m_39;
  e_9 :
  TestFunFC(f_9,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto a_39;
  a_39 :
  TestFunFC(g_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(d_9);
  goto z_39;
  d_9 :
  goto c_9;
  z_39 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_q_62);
  Return();
  c_9 :
  goto b_9;
  m_39 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  b_9 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_u_62)
  Ccall(_stratego_v_62);
  Ccall(_stratego_y_62);
ENDPROC

PROC(_stratego_v_62)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(h_9);
  n_45 :
  Rpush(i_9);
  o_45 :
  Epushd(1,5);
  MoveTop(1,1);
  goto j_42;
  j_42 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_42;
  k_42 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto l_42;
  l_42 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Cpush(o_9);
  Rpush(p_9);
  goto p_45;
  p_9 :
  goto n_9;
  o_9 :
  Ccontinue(q_9);
  Rpush(r_9);
  goto t_45;
  r_9 :
  goto n_9;
  q_9 :
  Rpush(t_9);
  goto i_46;
  t_9 :
  goto s_9;
  n_9 :
  Cpop();
  s_9 :
  goto m_9;
  m_9 :
  goto l_9;
  i_46 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  u_9 :
  AllNextSon(&&v_9);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(w_9);
  goto o_45;
  w_9 :
  Epopd(2,1);
  goto u_9;
  v_9 :
  AllBuild();
  Return();
  l_9 :
  goto k_9;
  t_45 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,8);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_t_62);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(x_9);
  v_45 :
  Cpush(z_9);
  Ccall(_stratego_l_62);
  goto y_9;
  z_9 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_62);
  OneNextSon();
  Rpush(b_10);
  goto v_45;
  b_10 :
  AllBuild();
  goto a_10;
  y_9 :
  Cpop();
  a_10 :
  Return();
  x_9 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(c_10);
  x_45 :
  Epushd(4,9);
  MoveTop(4,1);
  goto b_41;
  b_41 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto c_41;
  c_41 :
  TestFunFC(c_1,&&g_10,Egetd(4,2));
  goto e_41;
  e_41 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto h_41;
  h_41 :
  TestFunFC(c_1,&&fail,Egetd(4,6));
  goto i_41;
  i_41 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(f_10);
  goto y_45;
  g_10 :
  TestFunFC(y_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto l_41;
  l_41 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto m_41;
  m_41 :
  TestFunFC(y_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto p_41;
  p_41 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(f_10);
  goto z_45;
  f_10 :
  goto e_10;
  z_45 :
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
  Rpush(i_10);
  goto x_45;
  i_10 :
  OneNextSon();
  Ccall(_stratego_a_62);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto y_40;
  y_40 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto z_40;
  z_40 :
  TestFunFC(a_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto a_41;
  a_41 :
  TestFunFC(d_0,&&fail,Egetd(5,5));
  Rpush(k_10);
  goto a_46;
  k_10 :
  goto h_10;
  a_46 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  h_10 :
  Epopd(5,5);
  Return();
  e_10 :
  goto d_10;
  y_45 :
  Tset(App0("Nil"));
  Return();
  d_10 :
  Epopd(4,9);
  Return();
  c_10 :
  MoveTop(3,3);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,4);
  goto t_41;
  t_41 :
  TestFunFC(a_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto z_41;
  z_41 :
  TestFunFC(a_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto a_42;
  a_42 :
  TestFunFC(d_0,&&fail,Egetd(3,8));
  Rpush(m_10);
  goto c_46;
  m_10 :
  goto l_10;
  c_46 :
  Epushd(4,1);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(o_10);
  d_46 :
  Cpush(q_10);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_10);
  goto d_46;
  r_10 :
  AllBuild();
  goto p_10;
  q_10 :
  Ccall(_stratego_l_62);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto s_10;
  p_10 :
  Cpop();
  s_10 :
  Return();
  o_10 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  l_10 :
  Epopd(3,8);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(z_3);
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
  goto e_42;
  e_42 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto f_42;
  f_42 :
  TestFunFC(a_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto g_42;
  g_42 :
  TestFunFC(a_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto h_42;
  h_42 :
  TestFunFC(d_0,&&fail,Egetd(2,11));
  Rpush(u_10);
  goto g_46;
  u_10 :
  goto t_10;
  g_46 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  TestFunTop(z_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(v_10);
  goto n_45;
  v_10 :
  Epopd(3,1);
  AllBuild();
  Return();
  t_10 :
  Epopd(2,11);
  Return();
  k_9 :
  goto j_9;
  p_45 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(x_3);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_w_62);
  Epopd(2,1);
  AllBuild();
  Return();
  j_9 :
  Epopd(1,5);
  Return();
  i_9 :
  Return();
  h_9 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_62)
  Rpush(w_10);
  k_47 :
  Epushd(0,11);
  MoveTop(0,5);
  goto n_46;
  n_46 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto p_46;
  p_46 :
  TestFunFC(a_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto q_46;
  q_46 :
  TestFunFC(y_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto r_46;
  r_46 :
  TestFunFC(d_0,&&fail,Egetd(0,11));
  goto s_46;
  s_46 :
  TestFunFC(a_0,&&b_11,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto t_46;
  t_46 :
  TestFunFC(a_0,&&c_11,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto u_46;
  u_46 :
  TestFunFC(d_0,&&d_11,Egetd(0,4));
  Cpush(f_11);
  Rpush(g_11);
  goto l_47;
  g_11 :
  goto e_11;
  f_11 :
  Rpush(i_11);
  goto m_47;
  i_11 :
  goto h_11;
  e_11 :
  Cpop();
  h_11 :
  goto a_11;
  d_11 :
  Rpush(a_11);
  goto m_47;
  c_11 :
  Rpush(a_11);
  goto m_47;
  b_11 :
  Rpush(a_11);
  goto m_47;
  a_11 :
  goto z_10;
  m_47 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(j_11);
  goto k_47;
  j_11 :
  Return();
  z_10 :
  goto x_10;
  l_47 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  x_10 :
  Epopd(0,11);
  Return();
  w_10 :
ENDPROC

PROC(_stratego_y_62)
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(k_11);
  m_57 :
  Rpush(l_11);
  n_57 :
  Epushd(1,5);
  MoveTop(1,1);
  goto k_49;
  k_49 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_49;
  m_49 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto n_49;
  n_49 :
  TestFunFC(d_0,&&fail,Egetd(1,5));
  Cpush(r_11);
  Rpush(s_11);
  goto o_57;
  s_11 :
  goto q_11;
  r_11 :
  Ccontinue(t_11);
  Rpush(u_11);
  goto t_57;
  u_11 :
  goto q_11;
  t_11 :
  Rpush(w_11);
  goto w_59;
  w_11 :
  goto v_11;
  q_11 :
  Cpop();
  v_11 :
  goto p_11;
  p_11 :
  goto o_11;
  w_59 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  x_11 :
  AllNextSon(&&c_12);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(i_12);
  goto n_57;
  i_12 :
  Epopd(2,1);
  goto x_11;
  c_12 :
  AllBuild();
  Return();
  o_11 :
  goto n_11;
  t_57 :
  Epushd(2,11);
  Tdupl();
  Epushd(3,15);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,5);
  goto x_47;
  x_47 :
  TestFunFC(q_12,&&p_12,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto y_47;
  y_47 :
  TestFunFC(r_1,&&fail,Egetd(3,6));
  MoveArg(3,1,3,6,0);
  MoveArg(3,2,3,6,1);
  MoveArg(3,3,3,6,2);
  Rpush(n_12);
  goto u_57;
  p_12 :
  TestFunFC(r_1,&&r_12,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  MoveArg(3,4,3,5,2);
  Rpush(n_12);
  goto v_57;
  r_12 :
  TestFunFC(t_12,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  Rpush(n_12);
  goto w_57;
  n_12 :
  goto m_12;
  w_57 :
  NotNULLd(3,6);
  Tset(App2("Cons",Egetd(3,6),App0("Nil")));
  Return();
  m_12 :
  goto l_12;
  v_57 :
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  Return();
  l_12 :
  goto k_12;
  u_57 :
  NotNULLd(3,1);
  Tset(App2("Cons",Egetd(3,1),App0("Nil")));
  Return();
  k_12 :
  MoveTop(3,8);
  Move(2,1,3,8);
  Rpush(u_12);
  c_59 :
  Cpush(h_13);
  Ccall(_stratego_l_62);
  goto v_12;
  h_13 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_62);
  OneNextSon();
  Rpush(j_13);
  goto c_59;
  j_13 :
  AllBuild();
  goto i_13;
  v_12 :
  Cpop();
  i_13 :
  Return();
  u_12 :
  MoveTop(3,9);
  Move(2,2,3,9);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(k_13);
  g_59 :
  Epushd(4,9);
  MoveTop(4,1);
  goto h_48;
  h_48 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto i_48;
  i_48 :
  TestFunFC(c_1,&&o_13,Egetd(4,2));
  goto j_48;
  j_48 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto k_48;
  k_48 :
  TestFunFC(c_1,&&fail,Egetd(4,6));
  goto l_48;
  l_48 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(n_13);
  goto h_59;
  o_13 :
  TestFunFC(y_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto m_48;
  m_48 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto n_48;
  n_48 :
  TestFunFC(y_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto o_48;
  o_48 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  Rpush(n_13);
  goto i_59;
  n_13 :
  goto m_13;
  i_59 :
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
  Rpush(u_13);
  goto g_59;
  u_13 :
  OneNextSon();
  Ccall(_stratego_a_62);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto e_48;
  e_48 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto f_48;
  f_48 :
  TestFunFC(a_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto g_48;
  g_48 :
  TestFunFC(d_0,&&fail,Egetd(5,5));
  Rpush(v_13);
  goto j_59;
  v_13 :
  goto p_13;
  j_59 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  p_13 :
  Epopd(5,5);
  Return();
  m_13 :
  goto l_13;
  h_59 :
  Tset(App0("Nil"));
  Return();
  l_13 :
  Epopd(4,9);
  Return();
  k_13 :
  MoveTop(3,10);
  NotNULLd(3,10);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,10),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,11);
  goto s_48;
  s_48 :
  TestFunFC(a_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto t_48;
  t_48 :
  TestFunFC(a_0,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto u_48;
  u_48 :
  TestFunFC(d_0,&&fail,Egetd(3,15));
  Rpush(x_13);
  goto l_59;
  x_13 :
  goto w_13;
  l_59 :
  Epushd(4,1);
  NotNULLd(3,12);
  Tset(Egetd(3,12));
  Rpush(y_13);
  m_59 :
  Cpush(a_14);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_14);
  goto m_59;
  b_14 :
  AllBuild();
  goto z_13;
  a_14 :
  Ccall(_stratego_l_62);
  NotNULLd(3,14);
  Tset(Egetd(3,14));
  goto c_14;
  z_13 :
  Cpop();
  c_14 :
  Return();
  y_13 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  w_13 :
  Epopd(3,15);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(e_14);
  TestFunTop(q_12);
  TravInit();
  OneNextSon();
  TestFunTop(r_1);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto w_48;
  w_48 :
  TestFunFC(y_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(p_14);
  goto o_59;
  p_14 :
  goto o_14;
  o_59 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  o_14 :
  Epopd(3,3);
  OneNextSon();
  OneNextSon();
  AllBuild();
  OneNextSon();
  AllBuild();
  goto d_14;
  e_14 :
  Ccontinue(q_14);
  TestFunTop(r_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  goto d_14;
  q_14 :
  TestFunTop(t_12);
  TravInit();
  OneNextSon();
  Epushd(3,3);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  MoveTop(3,1);
  goto y_48;
  y_48 :
  TestFunFC(y_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(y_14);
  goto p_59;
  y_14 :
  goto x_14;
  p_59 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Return();
  x_14 :
  Epopd(3,3);
  OneNextSon();
  AllBuild();
  goto s_14;
  d_14 :
  Cpop();
  s_14 :
  MoveTop(2,4);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,5);
  goto f_49;
  f_49 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto g_49;
  g_49 :
  TestFunFC(a_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto h_49;
  h_49 :
  TestFunFC(a_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto i_49;
  i_49 :
  TestFunFC(d_0,&&fail,Egetd(2,11));
  Rpush(b_15);
  goto r_59;
  b_15 :
  goto z_14;
  r_59 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Cpush(i_15);
  TestFunTop(q_12);
  TravInit();
  OneNextSon();
  TestFunTop(r_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,8),App0("TNil"))));
  Rpush(j_15);
  goto m_57;
  j_15 :
  Epopd(3,1);
  AllBuild();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(k_15);
  goto m_57;
  k_15 :
  Epopd(3,1);
  AllBuild();
  goto d_15;
  i_15 :
  Ccontinue(m_15);
  TestFunTop(r_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(o_15);
  goto m_57;
  o_15 :
  Epopd(3,1);
  AllBuild();
  goto d_15;
  m_15 :
  TestFunTop(t_12);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil"))));
  Rpush(y_15);
  goto m_57;
  y_15 :
  Epopd(3,1);
  AllBuild();
  goto q_15;
  d_15 :
  Cpop();
  q_15 :
  Return();
  z_14 :
  Epopd(2,11);
  Return();
  n_11 :
  goto m_11;
  o_57 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  TestFunTop(a_16);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_w_62);
  Epopd(2,1);
  AllBuild();
  Return();
  m_11 :
  Epopd(1,5);
  Return();
  l_11 :
  Return();
  k_11 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_62)
  Epushd(0,8);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App2("TCons",ATmakeString("main"),App2("TCons",MakeInt(0),App0("TNil"))),App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil")))));
  MoveTop(0,2);
  goto h_65;
  h_65 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto i_65;
  i_65 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto j_65;
  j_65 :
  TestFunFC(a_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto k_65;
  k_65 :
  TestFunFC(d_0,&&fail,Egetd(0,8));
  Rpush(c_16);
  goto v_69;
  c_16 :
  goto b_16;
  v_69 :
  Epushd(1,7);
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,7);
  Tset(App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",App2("Cons",Egetd(0,3),App0("Nil")),App2("TCons",Egetd(0,5),App2("TCons",Egetd(0,7),App2("TCons",App0("Nil"),App0("TNil")))))));
  Rpush(f_16);
  w_69 :
  Epushd(2,13);
  MoveTop(2,1);
  goto f_64;
  f_64 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto g_64;
  g_64 :
  TestFunFC(y_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto h_64;
  h_64 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto i_64;
  i_64 :
  TestFunFC(a_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto j_64;
  j_64 :
  TestFunFC(a_0,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  MoveArg(2,11,2,9,1);
  goto k_64;
  k_64 :
  TestFunFC(a_0,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,13,2,11,1);
  goto l_64;
  l_64 :
  TestFunFC(d_0,&&fail,Egetd(2,13));
  Cpush(o_16);
  Rpush(p_16);
  goto x_69;
  p_16 :
  goto n_16;
  o_16 :
  Rpush(r_16);
  goto j_70;
  r_16 :
  goto q_16;
  n_16 :
  Cpop();
  q_16 :
  goto m_16;
  m_16 :
  goto j_16;
  j_70 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  NotNULLd(2,8);
  NotNULLd(2,10);
  NotNULLd(2,3);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,6),App2("TCons",Egetd(2,8),App2("TCons",Egetd(2,10),App2("TCons",App2("Cons",Egetd(2,3),Egetd(2,12)),App0("TNil")))))));
  Return();
  j_16 :
  goto i_16;
  x_69 :
  Epushd(3,8);
  Tdupl();
  Epushd(4,3);
  NotNULLd(2,3);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,8),App0("TNil"))));
  Ccall(_stratego_a_63);
  MoveTop(4,1);
  Move(3,1,4,1);
  NotNULLd(3,1);
  Tset(Egetd(3,1));
  Ccall(_stratego_j_63);
  MoveTop(4,2);
  Move(3,2,4,2);
  NotNULLd(3,2);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(2,6),App0("TNil"))));
  Ccall(_stratego_r_62);
  MoveTop(4,3);
  Move(3,3,4,3);
  Epopd(4,3);
  Tpop();
  NotNULLd(3,3);
  NotNULLd(2,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,4),App0("TNil"))));
  MoveTop(3,4);
  goto x_62;
  x_62 :
  TestFunFC(a_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto d_64;
  d_64 :
  TestFunFC(a_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto e_64;
  e_64 :
  TestFunFC(d_0,&&fail,Egetd(3,8));
  Rpush(t_16);
  goto b_70;
  t_16 :
  goto s_16;
  b_70 :
  Epushd(4,6);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(u_16);
  c_70 :
  Cpush(w_16);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_16);
  goto c_70;
  y_16 :
  AllBuild();
  goto v_16;
  w_16 :
  Ccall(_stratego_l_62);
  NotNULLd(3,7);
  Tset(Egetd(3,7));
  goto z_16;
  v_16 :
  Cpop();
  z_16 :
  Return();
  u_16 :
  MoveTop(4,1);
  NotNULLd(3,3);
  NotNULLd(2,6);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(2,6),App0("TNil"))));
  MoveTop(4,2);
  goto h_61;
  h_61 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto i_61;
  i_61 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto j_61;
  j_61 :
  TestFunFC(d_0,&&fail,Egetd(4,6));
  Rpush(b_17);
  goto e_70;
  b_17 :
  goto a_17;
  e_70 :
  Epushd(5,8);
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(c_17);
  f_70 :
  Cpush(e_17);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_17);
  goto f_70;
  f_17 :
  AllBuild();
  goto d_17;
  e_17 :
  Ccall(_stratego_l_62);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  goto g_17;
  d_17 :
  Cpop();
  g_17 :
  Return();
  c_17 :
  MoveTop(5,1);
  NotNULLd(2,3);
  NotNULLd(3,1);
  NotNULLd(2,10);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,10),App0("TNil")))));
  MoveTop(5,2);
  goto d_61;
  d_61 :
  TestFunFC(a_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto e_61;
  e_61 :
  TestFunFC(a_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto f_61;
  f_61 :
  TestFunFC(a_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto g_61;
  g_61 :
  TestFunFC(d_0,&&fail,Egetd(5,8));
  Rpush(i_17);
  goto h_70;
  i_17 :
  goto h_17;
  h_70 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset(App2("Cons",Egetd(5,5),Egetd(5,7)));
  NotNULLd(4,1);
  NotNULLd(5,1);
  NotNULLd(2,8);
  NotNULLd(5,5);
  NotNULLd(5,7);
  NotNULLd(2,12);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(5,1),App2("TCons",Egetd(2,8),App2("TCons",App2("Cons",Egetd(5,5),Egetd(5,7)),App2("TCons",Egetd(2,12),App0("TNil")))))));
  Return();
  h_17 :
  Epopd(5,8);
  Return();
  a_17 :
  Epopd(4,6);
  Return();
  s_16 :
  Epopd(3,8);
  Return();
  i_16 :
  Cpush(k_17);
  Epushd(3,11);
  MoveTop(3,1);
  goto n_64;
  n_64 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto o_64;
  o_64 :
  TestFunFC(c_1,&&fail,Egetd(3,2));
  goto p_64;
  p_64 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto q_64;
  q_64 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto r_64;
  r_64 :
  TestFunFC(a_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto s_64;
  s_64 :
  TestFunFC(a_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto t_64;
  t_64 :
  TestFunFC(d_0,&&fail,Egetd(3,11));
  Rpush(q_17);
  goto k_70;
  q_17 :
  goto l_17;
  k_70 :
  NotNULLd(3,8);
  NotNULLd(3,10);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,10),App0("TNil"))));
  Return();
  l_17 :
  Epopd(3,11);
  goto j_17;
  k_17 :
  Rpush(s_17);
  goto w_69;
  s_17 :
  goto r_17;
  j_17 :
  Cpop();
  r_17 :
  Epopd(2,13);
  Return();
  f_16 :
  MoveTop(1,1);
  goto c_65;
  c_65 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_65;
  d_65 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto e_65;
  e_65 :
  TestFunFC(c_1,&&u_17,Egetd(1,4));
  goto f_65;
  f_65 :
  TestFunFC(d_0,&&fail,Egetd(1,7));
  Rpush(t_17);
  goto l_70;
  u_17 :
  TestFunFC(y_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto g_65;
  g_65 :
  TestFunFC(d_0,&&fail,Egetd(1,7));
  Rpush(t_17);
  goto m_70;
  t_17 :
  goto e_16;
  m_70 :
  Tdupl();
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset(App2("Cons",Egetd(1,5),Egetd(1,6)));
  Rpush(v_17);
  n_70 :
  Cpush(x_17);
  Ccall(_stratego_l_62);
  goto w_17;
  x_17 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,3);
  goto y_64;
  y_64 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto z_64;
  z_64 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto a_65;
  a_65 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  goto b_65;
  b_65 :
  TestFunFC(g_18,&&f_18,Egetd(2,4));
  MoveArg(2,1,2,4,0);
  MoveArg(2,2,2,4,1);
  Cpush(i_18);
  Rpush(j_18);
  goto o_70;
  j_18 :
  goto h_18;
  i_18 :
  Rpush(l_18);
  goto p_70;
  l_18 :
  goto k_18;
  h_18 :
  Cpop();
  k_18 :
  goto e_18;
  f_18 :
  Rpush(e_18);
  goto p_70;
  e_18 :
  goto d_18;
  p_70 :
  NotNULLd(2,4);
  NotNULLd(2,6);
  Tset(App2("Cons",ATmakeString("error: operator "),App2("Cons",Egetd(2,4),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(2,6),App2("Cons",ATmakeString(" undefined "),App0("Nil")))))));
  Ccall(_stratego_k_63);
  Return();
  d_18 :
  goto c_18;
  o_70 :
  NotNULLd(2,1);
  NotNULLd(2,2);
  NotNULLd(2,6);
  Tset(App2("Cons",ATmakeString("error: operator "),App2("Cons",Egetd(2,1),App2("Cons",ATmakeString("^"),App2("Cons",Egetd(2,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(2,6),App2("Cons",ATmakeString(" undefined "),App0("Nil")))))))));
  Ccall(_stratego_k_63);
  Return();
  c_18 :
  Epopd(2,7);
  OneNextSon();
  Rpush(m_18);
  goto n_70;
  m_18 :
  AllBuild();
  goto y_17;
  w_17 :
  Cpop();
  y_17 :
  Return();
  v_17 :
  Tpop();
  Tset(MakeInt(1));
  Ccall(_stratego_c_62);
  Return();
  e_16 :
  goto d_16;
  l_70 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  d_16 :
  Epopd(1,7);
  Return();
  b_16 :
  Epopd(0,8);
ENDPROC

PROC(_stratego_a_63)
  Epushd(0,11);
  MoveTop(0,3);
  goto e_71;
  e_71 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,9,0,3,1);
  goto f_71;
  f_71 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto g_71;
  g_71 :
  TestFunFC(a_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto h_71;
  h_71 :
  TestFunFC(d_0,&&fail,Egetd(0,8));
  goto i_71;
  i_71 :
  TestFunFC(a_0,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  MoveArg(0,11,0,9,1);
  goto j_71;
  j_71 :
  TestFunFC(d_0,&&fail,Egetd(0,11));
  goto k_71;
  k_71 :
  TestInt(0,7,0,&&r_18);
  goto l_71;
  l_71 :
  TestFunFC(g_18,&&w_18,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(b_19);
  Rpush(c_19);
  goto d_73;
  c_19 :
  goto x_18;
  b_19 :
  Ccontinue(f_19);
  Rpush(g_19);
  goto f_73;
  g_19 :
  goto x_18;
  f_19 :
  Rpush(j_19);
  goto l_73;
  j_19 :
  goto i_19;
  x_18 :
  Cpop();
  i_19 :
  goto q_18;
  w_18 :
  Cpush(l_19);
  Rpush(m_19);
  goto f_73;
  m_19 :
  goto k_19;
  l_19 :
  Rpush(v_19);
  goto l_73;
  v_19 :
  goto u_19;
  k_19 :
  Cpop();
  u_19 :
  goto q_18;
  r_18 :
  goto m_71;
  m_71 :
  TestFunFC(g_18,&&w_19,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(y_19);
  Rpush(c_20);
  goto d_73;
  c_20 :
  goto x_19;
  y_19 :
  Rpush(i_20);
  goto f_73;
  i_20 :
  goto e_20;
  x_19 :
  Cpop();
  e_20 :
  goto q_18;
  w_19 :
  Rpush(q_18);
  goto f_73;
  q_18 :
  goto p_18;
  l_73 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(k_20);
  m_73 :
  Cpush(m_20);
  Ccall(_stratego_l_62);
  goto l_20;
  m_20 :
  Ccontinue(o_20);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto a_71;
  a_71 :
  TestFunFC(r_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(q_20);
  goto n_73;
  q_20 :
  goto p_20;
  n_73 :
  Move(0,5,3,2);
  Return();
  p_20 :
  Epopd(3,4);
  OneNextSon();
  Rpush(r_20);
  goto m_73;
  r_20 :
  AllBuild();
  goto l_20;
  o_20 :
  Epushd(3,3);
  MoveTop(3,1);
  goto c_71;
  c_71 :
  TestFunFC(y_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(x_20);
  goto o_73;
  x_20 :
  goto t_20;
  o_73 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(y_20);
  goto m_73;
  y_20 :
  Return();
  t_20 :
  Epopd(3,3);
  goto s_20;
  l_20 :
  Cpop();
  s_20 :
  Return();
  k_20 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_g_63);
  Epopd(1,1);
  Return();
  p_18 :
  goto o_18;
  f_73 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Rpush(z_20);
  g_73 :
  Cpush(b_21);
  Ccall(_stratego_l_62);
  goto a_21;
  b_21 :
  Ccontinue(c_21);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  TestFunTop(r_1);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  Move(0,5,3,1);
  Epopd(3,1);
  OneNextSon();
  Tdupl();
  Epushd(3,1);
  Ccall(_stratego_f_63);
  MoveTop(3,1);
  Move(0,7,3,1);
  Epopd(3,1);
  Tpop();
  OneNextSon();
  AllBuild();
  OneNextSon();
  Rpush(h_21);
  goto g_73;
  h_21 :
  AllBuild();
  goto a_21;
  c_21 :
  Epushd(3,3);
  MoveTop(3,1);
  goto x_70;
  x_70 :
  TestFunFC(y_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(m_21);
  goto j_73;
  m_21 :
  goto l_21;
  j_73 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(q_21);
  goto g_73;
  q_21 :
  Return();
  l_21 :
  Epopd(3,3);
  goto i_21;
  a_21 :
  Cpop();
  i_21 :
  Return();
  z_20 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Ccall(_stratego_g_63);
  Epopd(1,1);
  Return();
  o_18 :
  goto n_18;
  d_73 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,7),App0("TNil")))));
  Ccall(_stratego_b_63);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  n_18 :
  Epopd(0,11);
ENDPROC

PROC(_stratego_b_63)
  Epushd(0,7);
  MoveTop(0,1);
  goto y_77;
  y_77 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto z_77;
  z_77 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto a_78;
  a_78 :
  TestStr(0,4,"D",&&u_21);
  goto b_78;
  b_78 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto c_78;
  c_78 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  Rpush(t_21);
  goto q_86;
  u_21 :
  TestStr(0,4,"T",&&fail);
  goto d_78;
  d_78 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto e_78;
  e_78 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  Rpush(t_21);
  goto q_87;
  t_21 :
  goto s_21;
  q_87 :
  Epushd(1,10);
  Tdupl();
  Epushd(2,6);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_f_62);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",App0("TNil"),App0("TNil"))));
  MoveTop(2,2);
  goto u_77;
  u_77 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto v_77;
  v_77 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto w_77;
  w_77 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(e_22);
  goto s_87;
  e_22 :
  goto v_21;
  s_87 :
  Epushd(3,3);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(k_22);
  t_87 :
  Epushd(4,7);
  MoveTop(4,1);
  goto x_75;
  x_75 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto y_75;
  y_75 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto z_75;
  z_75 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto a_76;
  a_76 :
  TestFunFC(d_0,&&fail,Egetd(4,7));
  Rpush(m_22);
  goto u_87;
  m_22 :
  goto l_22;
  u_87 :
  Epushd(5,2);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_d_63);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_c_63);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Ccall(_stratego_p_62);
  MoveTop(5,2);
  NotNULLd(5,1);
  NotNULLd(4,4);
  NotNULLd(5,2);
  NotNULLd(4,6);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",Egetd(5,2),Egetd(4,6)),App0("TNil")))));
  Cpush(y_22);
  Epushd(6,7);
  MoveTop(6,1);
  goto s_75;
  s_75 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto t_75;
  t_75 :
  TestInt(6,2,0,&&fail);
  goto u_75;
  u_75 :
  TestFunFC(a_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto v_75;
  v_75 :
  TestFunFC(a_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto w_75;
  w_75 :
  TestFunFC(d_0,&&fail,Egetd(6,7));
  Rpush(a_23);
  goto x_87;
  a_23 :
  goto z_22;
  x_87 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  z_22 :
  Epopd(6,7);
  goto p_22;
  y_22 :
  Rpush(c_23);
  goto t_87;
  c_23 :
  goto b_23;
  p_22 :
  Cpop();
  b_23 :
  Epopd(5,2);
  Return();
  l_22 :
  Epopd(4,7);
  Return();
  k_22 :
  MoveTop(3,1);
  goto t_77;
  t_77 :
  TestFunFC(y_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(d_23);
  goto y_87;
  d_23 :
  goto i_22;
  y_87 :
  Epushd(4,14);
  Move(1,2,3,2);
  Move(1,3,3,3);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_e_63);
  MoveTop(4,1);
  Move(1,1,4,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",App2("Cons",Egetd(1,2),Egetd(1,3)),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(e_23);
  a_88 :
  Epushd(5,9);
  MoveTop(5,1);
  goto q_76;
  q_76 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,5,5,1,1);
  goto r_76;
  r_76 :
  TestFunFC(a_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,9,5,5,1);
  goto s_76;
  s_76 :
  TestFunFC(c_1,&&i_23,Egetd(5,6));
  goto t_76;
  t_76 :
  TestFunFC(d_0,&&fail,Egetd(5,9));
  goto u_76;
  u_76 :
  j_23 :
  Rpush(h_23);
  goto b_88;
  i_23 :
  TestFunFC(y_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto v_76;
  v_76 :
  TestFunFC(y_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto w_76;
  w_76 :
  TestFunFC(d_0,&&fail,Egetd(5,9));
  Rpush(h_23);
  goto c_88;
  h_23 :
  goto g_23;
  c_88 :
  Epushd(6,5);
  NotNULLd(5,3);
  NotNULLd(5,7);
  NotNULLd(5,4);
  NotNULLd(5,8);
  Tset(App2("TCons",App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(5,4),App2("TCons",Egetd(5,8),App0("TNil"))),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(7,5);
  MoveTop(7,1);
  goto j_76;
  j_76 :
  TestFunFC(a_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto k_76;
  k_76 :
  TestFunFC(a_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto l_76;
  l_76 :
  TestFunFC(d_0,&&fail,Egetd(7,5));
  Rpush(m_23);
  goto d_88;
  m_23 :
  goto l_23;
  d_88 :
  Epushd(8,3);
  Tdupl();
  Epushd(9,3);
  Ccall(_stratego_p_62);
  MoveTop(9,1);
  Move(8,1,9,1);
  Ccall(_stratego_p_62);
  MoveTop(9,2);
  Move(8,2,9,2);
  Ccall(_stratego_p_62);
  MoveTop(9,3);
  Move(8,3,9,3);
  Epopd(9,3);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,4);
  NotNULLd(8,1);
  NotNULLd(8,2);
  NotNULLd(8,3);
  Tset(App2("TCons",App3("BAM",App2("Call",App1("SVar",Egetd(8,1)),App0("Nil")),App2("Op",ATmakeString("Pair"),App2("Cons",App1("Var",Egetd(8,2)),App2("Cons",App1("Var",Egetd(7,2)),App0("Nil")))),App2("Op",ATmakeString("Pair"),App2("Cons",App1("Var",Egetd(8,3)),App2("Cons",App1("Var",Egetd(7,4)),App0("Nil"))))),App2("TCons",Egetd(8,1),App2("TCons",Egetd(8,2),App2("TCons",App1("Var",Egetd(8,2)),App2("TCons",Egetd(8,3),App2("TCons",App1("Var",Egetd(8,3)),App0("TNil"))))))));
  Epopd(8,3);
  Return();
  l_23 :
  Epopd(7,5);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(n_23);
  goto a_88;
  n_23 :
  OneNextSon();
  Ccall(_stratego_a_62);
  AllBuild();
  AllBuild();
  MoveTop(6,1);
  goto n_76;
  n_76 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto o_76;
  o_76 :
  TestFunFC(a_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto p_76;
  p_76 :
  TestFunFC(d_0,&&fail,Egetd(6,5));
  Rpush(o_23);
  goto h_88;
  o_23 :
  goto k_23;
  h_88 :
  NotNULLd(6,2);
  NotNULLd(6,4);
  Tset(App2("Cons",Egetd(6,2),Egetd(6,4)));
  Return();
  k_23 :
  Epopd(6,5);
  Return();
  g_23 :
  goto f_23;
  b_88 :
  Tset(App0("Nil"));
  Return();
  f_23 :
  Epopd(5,9);
  Return();
  e_23 :
  Rpush(q_23);
  i_88 :
  Cpush(s_23);
  Epushd(5,8);
  MoveTop(5,1);
  Rpush(t_23);
  k_88 :
  Cpush(v_23);
  Ccall(_stratego_l_62);
  goto u_23;
  v_23 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto z_76;
  z_76 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(y_23);
  goto l_88;
  y_23 :
  goto x_23;
  l_88 :
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Return();
  x_23 :
  Epopd(6,3);
  OneNextSon();
  Rpush(z_23);
  goto k_88;
  z_23 :
  AllBuild();
  goto w_23;
  u_23 :
  Cpop();
  w_23 :
  Return();
  t_23 :
  MoveTop(5,2);
  NotNULLd(5,1);
  Tset(Egetd(5,1));
  Rpush(a_24);
  n_88 :
  Cpush(c_24);
  Ccall(_stratego_l_62);
  goto b_24;
  c_24 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(6,3);
  MoveTop(6,1);
  goto c_77;
  c_77 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(f_24);
  goto o_88;
  f_24 :
  goto e_24;
  o_88 :
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Return();
  e_24 :
  Epopd(6,3);
  OneNextSon();
  Rpush(g_24);
  goto n_88;
  g_24 :
  AllBuild();
  goto d_24;
  b_24 :
  Cpop();
  d_24 :
  Return();
  a_24 :
  MoveTop(5,3);
  NotNULLd(5,2);
  NotNULLd(5,3);
  Tset(App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,3),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(i_24);
  goto i_88;
  i_24 :
  OneNextSon();
  Ccall(_stratego_a_62);
  AllBuild();
  AllBuild();
  MoveTop(5,4);
  goto f_77;
  f_77 :
  TestFunFC(a_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto i_77;
  i_77 :
  TestFunFC(a_0,&&fail,Egetd(5,6));
  MoveArg(5,7,5,6,0);
  MoveArg(5,8,5,6,1);
  goto j_77;
  j_77 :
  TestFunFC(d_0,&&fail,Egetd(5,8));
  Rpush(j_24);
  goto q_88;
  j_24 :
  goto h_24;
  q_88 :
  NotNULLd(5,5);
  NotNULLd(5,7);
  Tset(App2("TCons",Egetd(5,5),Egetd(5,7)));
  Return();
  h_24 :
  Epopd(5,8);
  goto r_23;
  s_23 :
  Rpush(l_24);
  r_88 :
  Cpush(n_24);
  Ccall(_stratego_l_62);
  goto m_24;
  n_24 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_a_62);
  OneNextSon();
  Rpush(p_24);
  goto r_88;
  p_24 :
  AllBuild();
  goto o_24;
  m_24 :
  Cpop();
  o_24 :
  Return();
  l_24 :
  Tset(App0("TNil"));
  goto k_24;
  r_23 :
  Cpop();
  k_24 :
  Return();
  q_23 :
  MoveTop(4,2);
  goto l_77;
  l_77 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto m_77;
  m_77 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto n_77;
  n_77 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto o_77;
  o_77 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto q_77;
  q_77 :
  TestFunFC(a_0,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,12,4,10,1);
  goto r_77;
  r_77 :
  TestFunFC(a_0,&&fail,Egetd(4,12));
  MoveArg(4,13,4,12,0);
  MoveArg(4,14,4,12,1);
  goto s_77;
  s_77 :
  TestFunFC(d_0,&&fail,Egetd(4,14));
  Rpush(q_24);
  goto s_88;
  q_24 :
  goto p_23;
  s_88 :
  Move(1,4,4,3);
  Move(1,5,4,5);
  Move(1,6,4,7);
  Move(1,7,4,9);
  Move(1,8,4,11);
  Move(1,9,4,13);
  Return();
  p_23 :
  Epopd(4,14);
  Return();
  i_22 :
  Epopd(3,3);
  Return();
  v_21 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,3);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset(App2("Cons",Egetd(1,3),App2("Cons",Egetd(1,6),App2("Cons",Egetd(1,8),App0("Nil")))));
  Ccall(_stratego_k_62);
  MoveTop(1,10);
  NotNULLd(1,5);
  NotNULLd(1,10);
  NotNULLd(1,7);
  NotNULLd(1,2);
  NotNULLd(0,2);
  NotNULLd(1,9);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App3("SDef",App2("Mod",Egetd(0,2),ATmakeString("T")),Egetd(1,5),App2("Scope",App2("Cons",Egetd(1,2),Egetd(1,10)),App1("SRule",App3("Rule",App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),Egetd(1,7)),App2("Cons",App1("Var",Egetd(1,2)),App0("Nil")))),App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),Egetd(1,9)),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App1("Seqs",Egetd(1,4)))))));
  Epopd(1,10);
  Return();
  s_21 :
  goto r_21;
  q_86 :
  Epushd(1,12);
  Tdupl();
  Epushd(2,6);
  Ccall(_stratego_p_62);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,6);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",App1("Var",Egetd(1,1)),App0("TNil"))));
  MoveTop(2,2);
  goto e_75;
  e_75 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto f_75;
  f_75 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto g_75;
  g_75 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  Rpush(t_24);
  goto s_86;
  t_24 :
  goto s_24;
  s_86 :
  Epushd(3,13);
  NotNULLd(2,3);
  NotNULLd(2,5);
  Tset(App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,5),App2("TCons",App0("Nil"),App0("TNil")))));
  Rpush(u_24);
  t_86 :
  Epushd(4,7);
  MoveTop(4,1);
  goto h_74;
  h_74 :
  TestFunFC(a_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto i_74;
  i_74 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto j_74;
  j_74 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto k_74;
  k_74 :
  TestFunFC(d_0,&&fail,Egetd(4,7));
  Rpush(w_24);
  goto u_86;
  w_24 :
  goto v_24;
  u_86 :
  Epushd(5,4);
  Tdupl();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_d_63);
  Tpop();
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_c_63);
  MoveTop(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Tdupl();
  Epushd(6,3);
  Ccall(_stratego_p_62);
  MoveTop(6,1);
  Move(5,2,6,1);
  Ccall(_stratego_p_62);
  MoveTop(6,2);
  Move(5,3,6,2);
  Ccall(_stratego_p_62);
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
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(4,4),App2("TCons",App2("Cons",App2("TCons",App3("BAM",App2("Call",App1("SVar",Egetd(5,2)),App0("Nil")),App2("Op",ATmakeString("Pair"),App2("Cons",App1("Var",Egetd(5,3)),App2("Cons",Egetd(4,4),App0("Nil")))),App1("Var",Egetd(5,4))),App2("TCons",Egetd(5,2),App2("TCons",Egetd(5,3),App2("TCons",App1("Var",Egetd(5,3)),App2("TCons",Egetd(5,4),App2("TCons",App1("Var",Egetd(5,4)),App0("TNil"))))))),Egetd(4,6)),App0("TNil")))));
  Cpush(y_24);
  Epushd(6,7);
  MoveTop(6,1);
  goto c_74;
  c_74 :
  TestFunFC(a_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  goto d_74;
  d_74 :
  TestInt(6,2,0,&&fail);
  goto e_74;
  e_74 :
  TestFunFC(a_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto f_74;
  f_74 :
  TestFunFC(a_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto g_74;
  g_74 :
  TestFunFC(d_0,&&fail,Egetd(6,7));
  Rpush(f_25);
  goto b_87;
  f_25 :
  goto e_25;
  b_87 :
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Return();
  e_25 :
  Epopd(6,7);
  goto x_24;
  y_24 :
  Rpush(k_25);
  goto t_86;
  k_25 :
  goto j_25;
  x_24 :
  Cpop();
  j_25 :
  Epopd(5,4);
  Return();
  v_24 :
  Epopd(4,7);
  Return();
  u_24 :
  Rpush(z_25);
  c_87 :
  Cpush(c_26);
  Epushd(4,8);
  MoveTop(4,1);
  Rpush(e_26);
  e_87 :
  Cpush(l_26);
  Ccall(_stratego_l_62);
  goto k_26;
  l_26 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto n_74;
  n_74 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(o_26);
  goto f_87;
  o_26 :
  goto n_26;
  f_87 :
  NotNULLd(5,2);
  Tset(Egetd(5,2));
  Return();
  n_26 :
  Epopd(5,3);
  OneNextSon();
  Rpush(s_26);
  goto e_87;
  s_26 :
  AllBuild();
  goto m_26;
  k_26 :
  Cpop();
  m_26 :
  Return();
  e_26 :
  MoveTop(4,2);
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Rpush(t_26);
  h_87 :
  Cpush(a_27);
  Ccall(_stratego_l_62);
  goto z_26;
  a_27 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(5,3);
  MoveTop(5,1);
  goto q_74;
  q_74 :
  TestFunFC(a_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(d_27);
  goto i_87;
  d_27 :
  goto c_27;
  i_87 :
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Return();
  c_27 :
  Epopd(5,3);
  OneNextSon();
  Rpush(e_27);
  goto h_87;
  e_27 :
  AllBuild();
  goto b_27;
  z_26 :
  Cpop();
  b_27 :
  Return();
  t_26 :
  MoveTop(4,3);
  NotNULLd(4,2);
  NotNULLd(4,3);
  Tset(App2("TCons",Egetd(4,2),App2("TCons",Egetd(4,3),App0("TNil"))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(j_27);
  goto c_87;
  j_27 :
  OneNextSon();
  Ccall(_stratego_a_62);
  AllBuild();
  AllBuild();
  MoveTop(4,4);
  goto t_74;
  t_74 :
  TestFunFC(a_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto u_74;
  u_74 :
  TestFunFC(a_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto v_74;
  v_74 :
  TestFunFC(d_0,&&fail,Egetd(4,8));
  Rpush(n_27);
  goto k_87;
  n_27 :
  goto i_27;
  k_87 :
  NotNULLd(4,5);
  NotNULLd(4,7);
  Tset(App2("TCons",Egetd(4,5),Egetd(4,7)));
  Return();
  i_27 :
  Epopd(4,8);
  goto a_26;
  c_26 :
  Rpush(p_27);
  l_87 :
  Cpush(r_27);
  Ccall(_stratego_l_62);
  goto q_27;
  r_27 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_a_62);
  OneNextSon();
  Rpush(y_27);
  goto l_87;
  y_27 :
  AllBuild();
  goto u_27;
  q_27 :
  Cpop();
  u_27 :
  Return();
  p_27 :
  Tset(App0("TNil"));
  goto o_27;
  a_26 :
  Cpop();
  o_27 :
  Return();
  z_25 :
  MoveTop(3,1);
  goto x_74;
  x_74 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto y_74;
  y_74 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto z_74;
  z_74 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto a_75;
  a_75 :
  TestFunFC(a_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto b_75;
  b_75 :
  TestFunFC(a_0,&&fail,Egetd(3,9));
  MoveArg(3,10,3,9,0);
  MoveArg(3,11,3,9,1);
  goto c_75;
  c_75 :
  TestFunFC(a_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto d_75;
  d_75 :
  TestFunFC(d_0,&&fail,Egetd(3,13));
  Rpush(z_27);
  goto m_87;
  z_27 :
  goto q_25;
  m_87 :
  Move(1,2,3,2);
  Move(1,3,3,4);
  Move(1,4,3,6);
  Move(1,5,3,8);
  Move(1,6,3,10);
  Move(1,7,3,12);
  Return();
  q_25 :
  Epopd(3,13);
  Return();
  s_24 :
  Epopd(2,6);
  Tpop();
  NotNULLd(1,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  MoveTop(1,8);
  goto j_75;
  j_75 :
  TestFunFC(a_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto k_75;
  k_75 :
  TestFunFC(a_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto l_75;
  l_75 :
  TestFunFC(d_0,&&fail,Egetd(1,12));
  Rpush(g_28);
  goto n_87;
  g_28 :
  goto a_28;
  n_87 :
  Epushd(2,1);
  NotNULLd(1,9);
  Tset(Egetd(1,9));
  Rpush(h_28);
  o_87 :
  Cpush(j_28);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_28);
  goto o_87;
  k_28 :
  AllBuild();
  goto i_28;
  j_28 :
  Ccall(_stratego_l_62);
  NotNULLd(1,11);
  Tset(Egetd(1,11));
  goto l_28;
  i_28 :
  Cpop();
  l_28 :
  Return();
  h_28 :
  MoveTop(2,1);
  NotNULLd(1,3);
  NotNULLd(2,1);
  NotNULLd(1,5);
  NotNULLd(1,1);
  NotNULLd(0,2);
  NotNULLd(1,7);
  NotNULLd(1,2);
  Tset(App3("SDef",App2("Mod",Egetd(0,2),ATmakeString("D")),Egetd(1,3),App2("Scope",App2("Cons",Egetd(1,1),Egetd(2,1)),App1("SRule",App3("Rule",App2("Op",ATmakeString("Pair"),App2("Cons",App2("Op",Egetd(0,2),Egetd(1,5)),App2("Cons",App1("Var",Egetd(1,1)),App0("Nil")))),App2("Op",Egetd(0,2),Egetd(1,7)),App1("Seqs",Egetd(1,2)))))));
  Epopd(2,1);
  Return();
  a_28 :
  Epopd(1,12);
  Return();
  r_21 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_c_63)
  _ST_subt();
ENDPROC

PROC(_stratego_d_63)
  _ST_geq();
ENDPROC

PROC(_stratego_e_63)
  Rpush(m_28);
  e_89 :
  Epushd(0,3);
  MoveTop(0,1);
  goto w_88;
  w_88 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto x_88;
  x_88 :
  TestFunFC(c_1,&&q_28,Egetd(0,3));
  Cpush(s_28);
  Rpush(t_28);
  goto f_89;
  t_28 :
  goto r_28;
  s_28 :
  Rpush(w_28);
  goto g_89;
  w_28 :
  goto v_28;
  r_28 :
  Cpop();
  v_28 :
  goto p_28;
  q_28 :
  Rpush(p_28);
  goto g_89;
  p_28 :
  goto o_28;
  g_89 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(x_28);
  goto e_89;
  x_28 :
  Return();
  o_28 :
  goto n_28;
  f_89 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  n_28 :
  Epopd(0,3);
  Return();
  m_28 :
ENDPROC

PROC(_stratego_f_63)
  Rpush(y_28);
  r_89 :
  Cpush(a_29);
  Ccall(_stratego_l_62);
  Tset(MakeInt(0));
  goto z_28;
  a_29 :
  Epushd(0,3);
  MoveTop(0,1);
  goto j_89;
  j_89 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(d_29);
  goto s_89;
  d_29 :
  goto c_29;
  s_89 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(e_29);
  goto r_89;
  e_29 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_f_62);
  Epopd(1,1);
  Return();
  c_29 :
  Epopd(0,3);
  goto b_29;
  z_28 :
  Cpop();
  b_29 :
  Return();
  y_28 :
ENDPROC

PROC(_stratego_g_63)
  Epushd(0,6);
  MoveTop(0,1);
  goto c_90;
  c_90 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,6,0,1,1);
  goto d_90;
  d_90 :
  TestFunFC(c_1,&&n_29,Egetd(0,6));
  goto e_90;
  e_90 :
  TestFunFC(r_1,&&o_29,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Cpush(q_29);
  Rpush(r_29);
  goto f_91;
  r_29 :
  goto p_29;
  q_29 :
  Rpush(t_29);
  goto g_91;
  t_29 :
  goto s_29;
  p_29 :
  Cpop();
  s_29 :
  goto m_29;
  o_29 :
  Rpush(m_29);
  goto f_91;
  n_29 :
  goto f_90;
  f_90 :
  TestFunFC(r_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(m_29);
  goto g_91;
  m_29 :
  goto h_29;
  g_91 :
  Epushd(1,3);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(u_29);
  h_91 :
  Cpush(w_29);
  Ccall(_stratego_l_62);
  goto v_29;
  w_29 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_62);
  OneNextSon();
  Rpush(a_30);
  goto h_91;
  a_30 :
  AllBuild();
  goto z_29;
  v_29 :
  Cpop();
  z_29 :
  Return();
  u_29 :
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(b_30);
  j_91 :
  Cpush(d_30);
  Ccall(_stratego_l_62);
  goto c_30;
  d_30 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  Tset(App2("Call",App1("SVar",Egetd(3,1)),App0("Nil")));
  Epopd(3,1);
  OneNextSon();
  Rpush(h_30);
  goto j_91;
  h_30 :
  AllBuild();
  goto e_30;
  c_30 :
  Cpop();
  e_30 :
  Return();
  b_30 :
  MoveTop(2,2);
  Move(1,2,2,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(i_30);
  m_91 :
  Cpush(s_30);
  Ccall(_stratego_l_62);
  goto r_30;
  s_30 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(3,4);
  MoveTop(3,1);
  goto a_90;
  a_90 :
  TestFunFC(r_1,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  MoveArg(3,4,3,1,2);
  Rpush(y_30);
  goto n_91;
  y_30 :
  goto x_30;
  n_91 :
  Epushd(4,2);
  Move(0,3,3,2);
  Move(4,1,3,3);
  Move(4,2,3,4);
  NotNULLd(4,1);
  NotNULLd(1,2);
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(1,2),App2("TCons",Egetd(4,2),App0("TNil")))));
  Ccall(_stratego_h_63);
  Epopd(4,2);
  Return();
  x_30 :
  Epopd(3,4);
  OneNextSon();
  Rpush(z_30);
  goto m_91;
  z_30 :
  AllBuild();
  goto t_30;
  r_30 :
  Cpop();
  t_30 :
  Return();
  i_30 :
  MoveTop(2,3);
  Move(1,3,2,3);
  Epopd(2,3);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(1,1);
  NotNULLd(1,3);
  Tset(App3("SDef",Egetd(0,3),Egetd(1,1),App1("Choices",Egetd(1,3))));
  Epopd(1,3);
  Return();
  h_29 :
  goto f_29;
  f_91 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  f_29 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_h_63)
  Epushd(0,5);
  Ccall(_stratego_i_63);
  MoveTop(0,1);
  goto x_91;
  x_91 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto y_91;
  y_91 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto z_91;
  z_91 :
  TestFunFC(d_0,&&fail,Egetd(0,5));
  Rpush(b_31);
  goto s_92;
  b_31 :
  goto a_31;
  s_92 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(c_31);
  t_92 :
  Cpush(e_31);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,4);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto u_91;
  u_91 :
  TestFunFC(h_31,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto v_91;
  v_91 :
  TestFunFC(a_16,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto w_91;
  w_91 :
  TestFunFC(c_1,&&fail,Egetd(2,4));
  Rpush(g_31);
  goto v_92;
  g_31 :
  goto f_31;
  v_92 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Move(1,2,2,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  f_31 :
  Epopd(2,4);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_w_62);
  Epopd(1,3);
  goto d_31;
  e_31 :
  AllInit();
  j_31 :
  AllNextSon(&&k_31);
  Rpush(l_31);
  goto t_92;
  l_31 :
  goto j_31;
  k_31 :
  AllBuild();
  goto i_31;
  d_31 :
  Cpop();
  i_31 :
  Return();
  c_31 :
  Return();
  a_31 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_i_63)
  Epushd(0,7);
  MoveTop(0,1);
  goto p_93;
  p_93 :
  TestFunFC(a_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto q_93;
  q_93 :
  TestFunFC(a_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto r_93;
  r_93 :
  TestFunFC(d_0,&&p_31,Egetd(0,5));
  Rpush(o_31);
  goto d_95;
  p_31 :
  TestFunFC(a_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto s_93;
  s_93 :
  TestFunFC(d_0,&&fail,Egetd(0,7));
  Rpush(o_31);
  goto e_95;
  o_31 :
  goto n_31;
  e_95 :
  Epushd(1,1);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(q_31);
  f_95 :
  Epushd(2,9);
  MoveTop(2,1);
  goto g_93;
  g_93 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto h_93;
  h_93 :
  TestFunFC(c_1,&&u_31,Egetd(2,2));
  goto i_93;
  i_93 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto j_93;
  j_93 :
  TestFunFC(c_1,&&fail,Egetd(2,6));
  goto k_93;
  k_93 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(t_31);
  goto g_95;
  u_31 :
  TestFunFC(y_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto l_93;
  l_93 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto m_93;
  m_93 :
  TestFunFC(y_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto n_93;
  n_93 :
  TestFunFC(d_0,&&fail,Egetd(2,9));
  Rpush(t_31);
  goto h_95;
  t_31 :
  goto s_31;
  h_95 :
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
  Rpush(z_31);
  goto f_95;
  z_31 :
  OneNextSon();
  Ccall(_stratego_a_62);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto d_93;
  d_93 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto e_93;
  e_93 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto f_93;
  f_93 :
  TestFunFC(d_0,&&fail,Egetd(3,5));
  Rpush(h_32);
  goto i_95;
  h_32 :
  goto v_31;
  i_95 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  v_31 :
  Epopd(3,5);
  Return();
  s_31 :
  goto r_31;
  g_95 :
  Tset(App0("Nil"));
  Return();
  r_31 :
  Epopd(2,9);
  Return();
  q_31 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,1);
  Return();
  n_31 :
  goto m_31;
  d_95 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  m_31 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_j_63)
  Rpush(q_32);
  f_107 :
  Epushd(0,8);
  MoveTop(0,1);
  Cpush(s_32);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_95;
  n_95 :
  TestFunFC(h_31,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_95;
  o_95 :
  TestFunFC(a_16,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(u_32);
  goto h_107;
  u_32 :
  goto t_32;
  h_107 :
  Epushd(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Ccall(_stratego_f_63);
  MoveTop(2,1);
  NotNULLd(1,3);
  NotNULLd(2,1);
  Tset(App2("Cons",App2("TCons",Egetd(1,3),App2("TCons",Egetd(2,1),App0("TNil"))),App0("Nil")));
  Epopd(2,1);
  Return();
  t_32 :
  Epopd(1,4);
  goto r_32;
  s_32 :
  Tset(App0("Nil"));
  goto e_33;
  r_32 :
  Cpop();
  e_33 :
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(g_33);
  Epushd(1,3);
  Tdupl();
  Epushd(2,8);
  MoveTop(2,5);
  goto t_95;
  t_95 :
  TestFunFC(q_12,&&l_33,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto u_95;
  u_95 :
  TestFunFC(r_1,&&fail,Egetd(2,6));
  MoveArg(2,1,2,6,0);
  MoveArg(2,2,2,6,1);
  MoveArg(2,3,2,6,2);
  Rpush(k_33);
  goto k_107;
  l_33 :
  TestFunFC(r_1,&&m_33,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  MoveArg(2,4,2,5,2);
  Rpush(k_33);
  goto l_107;
  m_33 :
  TestFunFC(t_12,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  Rpush(k_33);
  goto m_107;
  k_33 :
  goto j_33;
  m_107 :
  NotNULLd(2,6);
  Tset(App2("Cons",Egetd(2,6),App0("Nil")));
  Return();
  j_33 :
  goto i_33;
  l_107 :
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Return();
  i_33 :
  goto h_33;
  k_107 :
  NotNULLd(2,1);
  Tset(App2("Cons",Egetd(2,1),App0("Nil")));
  Return();
  h_33 :
  MoveTop(2,8);
  Move(1,1,2,8);
  Epopd(2,8);
  Tpop();
  Cpush(u_33);
  TestFunTop(q_12);
  TravInit();
  OneNextSon();
  TestFunTop(r_1);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Rpush(v_33);
  goto f_107;
  v_33 :
  AllBuild();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(w_33);
  goto f_107;
  w_33 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto k_96;
  k_96 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto l_96;
  l_96 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto m_96;
  m_96 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(y_33);
  goto r_107;
  y_33 :
  goto x_33;
  r_107 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(z_33);
  s_107 :
  Cpush(b_34);
  Ccall(_stratego_l_62);
  goto a_34;
  b_34 :
  Ccontinue(c_34);
  Epushd(3,3);
  MoveTop(3,1);
  goto j_96;
  j_96 :
  TestFunFC(y_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(e_34);
  goto t_107;
  e_34 :
  goto d_34;
  t_107 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(q_34);
  u_107 :
  Cpush(t_34);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto d_96;
  d_96 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto e_96;
  e_96 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto f_96;
  f_96 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto g_96;
  g_96 :
  TestFunFC(d_0,&&fail,Egetd(4,7));
  goto h_96;
  h_96 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto i_96;
  i_96 :
  TestFunFC(d_0,&&fail,Egetd(4,10));
  Rpush(v_34);
  goto w_107;
  v_34 :
  goto u_34;
  w_107 :
  Move(4,4,4,9);
  Return();
  u_34 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto r_34;
  t_34 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_34);
  goto u_107;
  x_34 :
  AllBuild();
  goto w_34;
  r_34 :
  Cpop();
  w_34 :
  Return();
  q_34 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(y_34);
  goto s_107;
  y_34 :
  Return();
  d_34 :
  Epopd(3,3);
  goto a_34;
  c_34 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_35);
  goto s_107;
  a_35 :
  AllBuild();
  goto z_34;
  a_34 :
  Cpop();
  z_34 :
  Return();
  z_33 :
  Return();
  x_33 :
  Epopd(2,7);
  AllBuild();
  goto q_33;
  u_33 :
  Ccontinue(d_35);
  TestFunTop(r_1);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(e_35);
  goto f_107;
  e_35 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto b_97;
  b_97 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto c_97;
  c_97 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto d_97;
  d_97 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(l_35);
  goto a_108;
  l_35 :
  goto h_35;
  a_108 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(m_35);
  b_108 :
  Cpush(x_35);
  Ccall(_stratego_l_62);
  goto w_35;
  x_35 :
  Ccontinue(y_35);
  Epushd(3,3);
  MoveTop(3,1);
  goto a_97;
  a_97 :
  TestFunFC(y_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(a_36);
  goto c_108;
  a_36 :
  goto z_35;
  c_108 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(p_36);
  d_108 :
  Cpush(r_36);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto u_96;
  u_96 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto v_96;
  v_96 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto w_96;
  w_96 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto x_96;
  x_96 :
  TestFunFC(d_0,&&fail,Egetd(4,7));
  goto y_96;
  y_96 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto z_96;
  z_96 :
  TestFunFC(d_0,&&fail,Egetd(4,10));
  Rpush(t_36);
  goto f_108;
  t_36 :
  goto s_36;
  f_108 :
  Move(4,4,4,9);
  Return();
  s_36 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto q_36;
  r_36 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_36);
  goto d_108;
  v_36 :
  AllBuild();
  goto u_36;
  q_36 :
  Cpop();
  u_36 :
  Return();
  p_36 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(a_37);
  goto b_108;
  a_37 :
  Return();
  z_35 :
  Epopd(3,3);
  goto w_35;
  y_35 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_37);
  goto b_108;
  d_37 :
  AllBuild();
  goto c_37;
  w_35 :
  Cpop();
  c_37 :
  Return();
  m_35 :
  Return();
  h_35 :
  Epopd(2,7);
  AllBuild();
  goto q_33;
  d_35 :
  TestFunTop(t_12);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  Rpush(f_37);
  goto f_107;
  f_37 :
  MoveTop(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(2,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(1,1),App0("TNil"))));
  MoveTop(2,3);
  goto s_97;
  s_97 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto t_97;
  t_97 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto u_97;
  u_97 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(m_37);
  goto j_108;
  m_37 :
  goto g_37;
  j_108 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(n_37);
  k_108 :
  Cpush(v_37);
  Ccall(_stratego_l_62);
  goto p_37;
  v_37 :
  Ccontinue(w_37);
  Epushd(3,3);
  MoveTop(3,1);
  goto r_97;
  r_97 :
  TestFunFC(y_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(b_38);
  goto l_108;
  b_38 :
  goto x_37;
  l_108 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(c_38);
  m_108 :
  Cpush(e_38);
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(4,10);
  MoveTop(4,1);
  NotNULLd(3,2);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto l_97;
  l_97 :
  TestFunFC(a_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,8,4,2,1);
  goto m_97;
  m_97 :
  TestFunFC(a_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto n_97;
  n_97 :
  TestFunFC(a_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto o_97;
  o_97 :
  TestFunFC(d_0,&&fail,Egetd(4,7));
  goto p_97;
  p_97 :
  TestFunFC(a_0,&&fail,Egetd(4,8));
  MoveArg(4,9,4,8,0);
  MoveArg(4,10,4,8,1);
  goto q_97;
  q_97 :
  TestFunFC(d_0,&&fail,Egetd(4,10));
  Rpush(k_38);
  goto o_108;
  k_38 :
  goto f_38;
  o_108 :
  Move(4,4,4,9);
  Return();
  f_38 :
  Epopd(4,10);
  OneNextSon();
  AllBuild();
  goto d_38;
  e_38 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_38);
  goto m_108;
  m_38 :
  AllBuild();
  goto l_38;
  d_38 :
  Cpop();
  l_38 :
  Return();
  c_38 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(n_38);
  goto k_108;
  n_38 :
  Return();
  x_37 :
  Epopd(3,3);
  goto p_37;
  w_37 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_38);
  goto k_108;
  p_38 :
  AllBuild();
  goto o_38;
  p_37 :
  Cpop();
  o_38 :
  Return();
  n_37 :
  Return();
  g_37 :
  Epopd(2,7);
  AllBuild();
  goto e_37;
  q_33 :
  Cpop();
  e_37 :
  MoveTop(1,2);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  _ST_explode_term();
  MoveTop(2,1);
  goto x_97;
  x_97 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto y_97;
  y_97 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto z_97;
  z_97 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(r_38);
  goto q_108;
  r_38 :
  goto q_38;
  q_108 :
  Move(1,3,2,4);
  Return();
  q_38 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(s_38);
  r_108 :
  Cpush(u_38);
  Ccall(_stratego_l_62);
  Tset(App0("Nil"));
  goto t_38;
  u_38 :
  Epushd(2,3);
  MoveTop(2,1);
  goto l_98;
  l_98 :
  TestFunFC(y_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(h_39);
  goto s_108;
  h_39 :
  goto y_38;
  s_108 :
  Epushd(3,6);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(i_39);
  goto r_108;
  i_39 :
  MoveTop(3,1);
  NotNULLd(2,2);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(3,1),App0("TNil"))));
  MoveTop(3,2);
  goto i_98;
  i_98 :
  TestFunFC(a_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto j_98;
  j_98 :
  TestFunFC(a_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto k_98;
  k_98 :
  TestFunFC(d_0,&&fail,Egetd(3,6));
  Rpush(k_39);
  goto v_108;
  k_39 :
  goto j_39;
  v_108 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(l_39);
  w_108 :
  Cpush(o_39);
  Ccall(_stratego_l_62);
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  goto n_39;
  o_39 :
  Ccontinue(p_39);
  Epushd(4,3);
  MoveTop(4,1);
  goto h_98;
  h_98 :
  TestFunFC(y_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(r_39);
  goto x_108;
  r_39 :
  goto q_39;
  x_108 :
  Tdupl();
  NotNULLd(3,5);
  Tset(Egetd(3,5));
  Rpush(s_39);
  y_108 :
  Cpush(u_39);
  Epushd(5,3);
  MoveTop(5,1);
  goto g_98;
  g_98 :
  TestFunFC(y_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(w_39);
  goto z_108;
  w_39 :
  goto v_39;
  z_108 :
  Move(4,2,5,2);
  Return();
  v_39 :
  Epopd(5,3);
  goto t_39;
  u_39 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_39);
  goto y_108;
  y_39 :
  AllBuild();
  goto x_39;
  t_39 :
  Cpop();
  x_39 :
  Return();
  s_39 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(a_40);
  goto w_108;
  a_40 :
  Return();
  q_39 :
  Epopd(4,3);
  goto n_39;
  p_39 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_40);
  goto w_108;
  c_40 :
  AllBuild();
  goto b_40;
  n_39 :
  Cpop();
  b_40 :
  Return();
  l_39 :
  Return();
  j_39 :
  Epopd(3,6);
  Return();
  y_38 :
  Epopd(2,3);
  goto x_38;
  t_38 :
  Cpop();
  x_38 :
  Return();
  s_38 :
  Epopd(1,3);
  goto f_33;
  g_33 :
  Epushd(1,2);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,5);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  _ST_explode_term();
  MoveTop(2,1);
  goto o_98;
  o_98 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto p_98;
  p_98 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_98;
  q_98 :
  TestFunFC(d_0,&&fail,Egetd(2,5));
  Rpush(f_40);
  goto b_109;
  f_40 :
  goto e_40;
  b_109 :
  Move(1,2,2,4);
  Return();
  e_40 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(g_40);
  c_109 :
  Cpush(i_40);
  Ccall(_stratego_l_62);
  Tset(App0("Nil"));
  goto h_40;
  i_40 :
  Epushd(2,3);
  MoveTop(2,1);
  goto c_99;
  c_99 :
  TestFunFC(y_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(l_40);
  goto d_109;
  l_40 :
  goto k_40;
  d_109 :
  Epushd(3,7);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(m_40);
  goto f_107;
  m_40 :
  MoveTop(3,1);
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(n_40);
  goto c_109;
  n_40 :
  MoveTop(3,2);
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  MoveTop(3,3);
  goto z_98;
  z_98 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto a_99;
  a_99 :
  TestFunFC(a_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto b_99;
  b_99 :
  TestFunFC(d_0,&&fail,Egetd(3,7));
  Rpush(p_40);
  goto g_109;
  p_40 :
  goto o_40;
  g_109 :
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(q_40);
  h_109 :
  Cpush(s_40);
  Ccall(_stratego_l_62);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  goto r_40;
  s_40 :
  Ccontinue(t_40);
  Epushd(4,3);
  MoveTop(4,1);
  goto y_98;
  y_98 :
  TestFunFC(y_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(v_40);
  goto i_109;
  v_40 :
  goto u_40;
  i_109 :
  Tdupl();
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(w_40);
  j_109 :
  Cpush(d_41);
  Epushd(5,3);
  MoveTop(5,1);
  goto x_98;
  x_98 :
  TestFunFC(y_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(g_41);
  goto k_109;
  g_41 :
  goto f_41;
  k_109 :
  Move(4,2,5,2);
  Return();
  f_41 :
  Epopd(5,3);
  goto x_40;
  d_41 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_41);
  goto j_109;
  k_41 :
  AllBuild();
  goto j_41;
  x_40 :
  Cpop();
  j_41 :
  Return();
  w_40 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(n_41);
  goto h_109;
  n_41 :
  Return();
  u_40 :
  Epopd(4,3);
  goto r_40;
  t_40 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_41);
  goto h_109;
  q_41 :
  AllBuild();
  goto o_41;
  r_40 :
  Cpop();
  o_41 :
  Return();
  q_40 :
  Return();
  o_40 :
  Epopd(3,7);
  Return();
  k_40 :
  Epopd(2,3);
  goto j_40;
  h_40 :
  Cpop();
  j_40 :
  Return();
  g_40 :
  Epopd(1,2);
  goto d_40;
  f_33 :
  Cpop();
  d_40 :
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  MoveTop(0,4);
  goto j_99;
  j_99 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto k_99;
  k_99 :
  TestFunFC(a_0,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,8,0,6,1);
  goto l_99;
  l_99 :
  TestFunFC(d_0,&&fail,Egetd(0,8));
  Rpush(s_41);
  goto m_109;
  s_41 :
  goto r_41;
  m_109 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(u_41);
  n_109 :
  Cpush(w_41);
  Ccall(_stratego_l_62);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  goto v_41;
  w_41 :
  Ccontinue(x_41);
  Epushd(1,3);
  MoveTop(1,1);
  goto i_99;
  i_99 :
  TestFunFC(y_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(b_42);
  goto o_109;
  b_42 :
  goto y_41;
  o_109 :
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(c_42);
  p_109 :
  Cpush(i_42);
  Epushd(2,3);
  MoveTop(2,1);
  goto h_99;
  h_99 :
  TestFunFC(y_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(o_42);
  goto q_109;
  o_42 :
  goto n_42;
  q_109 :
  Move(1,2,2,2);
  Return();
  n_42 :
  Epopd(2,3);
  goto d_42;
  i_42 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_42);
  goto p_109;
  q_42 :
  AllBuild();
  goto p_42;
  d_42 :
  Cpop();
  p_42 :
  Return();
  c_42 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(r_42);
  goto n_109;
  r_42 :
  Return();
  y_41 :
  Epopd(1,3);
  goto v_41;
  x_41 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_42);
  goto n_109;
  t_42 :
  AllBuild();
  goto s_42;
  v_41 :
  Cpop();
  s_42 :
  Return();
  u_41 :
  Return();
  r_41 :
  Epopd(0,8);
  Return();
  q_32 :
ENDPROC

PROC(_stratego_k_63)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_x_61);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_l_63)
  Rpush(u_42);
  d_110 :
  Cpush(b_43);
  Ccall(_stratego_l_62);
  goto a_43;
  b_43 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  TestFunTop(r_1);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_m_63);
  AllBuild();
  OneNextSon();
  Rpush(e_43);
  goto d_110;
  e_43 :
  AllBuild();
  goto d_43;
  a_43 :
  Cpop();
  d_43 :
  Return();
  u_42 :
ENDPROC

PROC(_stratego_m_63)
  Rpush(f_43);
  n_110 :
  Cpush(h_43);
  Ccall(_stratego_n_63);
  goto g_43;
  h_43 :
  goto i_43;
  g_43 :
  Cpop();
  i_43 :
  Cpush(k_43);
  j_43 :
  Cpush(a_44);
  Ccall(_stratego_u_63);
  goto z_43;
  a_44 :
  Ccontinue(b_44);
  Cpush(i_44);
  Ccall(_stratego_v_63);
  goto c_44;
  i_44 :
  Ccontinue(j_44);
  Epushd(0,4);
  MoveTop(0,1);
  goto f_110;
  f_110 :
  TestFunFC(s_44,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto g_110;
  g_110 :
  TestFunFC(v_44,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(r_44);
  goto p_110;
  r_44 :
  goto l_44;
  p_110 :
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Build",Egetd(0,4)),Egetd(0,3)));
  Return();
  l_44 :
  Epopd(0,4);
  goto c_44;
  j_44 :
  Ccall(_stratego_w_63);
  goto d_45;
  c_44 :
  Cpop();
  d_45 :
  goto z_43;
  b_44 :
  Ccall(_stratego_x_63);
  goto e_45;
  z_43 :
  Cpop();
  e_45 :
  Tduplinv();
  goto j_43;
  k_43 :
  AllInit();
  f_45 :
  AllNextSon(&&h_45);
  Rpush(i_45);
  goto n_110;
  i_45 :
  goto f_45;
  h_45 :
  AllBuild();
  Return();
  f_43 :
ENDPROC

PROC(_stratego_n_63)
  Rpush(j_45);
  q_110 :
  Cpush(m_45);
  Cpush(r_45);
  Ccall(_stratego_o_63);
  Rpush(s_45);
  goto q_110;
  s_45 :
  goto q_45;
  r_45 :
  Ccontinue(u_45);
  TestFunTop(z_3);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_45);
  goto q_110;
  w_45 :
  AllBuild();
  goto q_45;
  u_45 :
  Ccall(_stratego_p_63);
  goto b_46;
  q_45 :
  Cpop();
  b_46 :
  goto l_45;
  m_45 :
  goto e_46;
  l_45 :
  Cpop();
  e_46 :
  Return();
  j_45 :
ENDPROC

PROC(_stratego_o_63)
  Epushd(0,5);
  MoveTop(0,1);
  goto d_111;
  d_111 :
  TestFunFC(j_46,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto e_111;
  e_111 :
  TestFunFC(g_9,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(h_46);
  goto k_112;
  h_46 :
  goto f_46;
  k_112 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_p_62);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(k_46);
  m_112 :
  Cpush(m_46);
  Epushd(2,5);
  MoveTop(2,1);
  goto u_110;
  u_110 :
  TestFunFC(i_47,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto v_110;
  v_110 :
  TestFunFC(x_3,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(g_47);
  goto n_112;
  g_47 :
  goto o_46;
  n_112 :
  Move(1,4,2,3);
  Move(1,2,2,4);
  Move(1,3,2,5);
  NotNULLd(1,4);
  Tset(App1("Var",Egetd(1,4)));
  Return();
  o_46 :
  Epopd(2,5);
  goto l_46;
  m_46 :
  IsAppl();
  OneInit();
  n_47 :
  OneNextSon();
  Cpush(n_47);
  Rpush(p_47);
  goto m_112;
  p_47 :
  Cpop();
  OneBuild();
  goto j_47;
  l_46 :
  Cpop();
  j_47 :
  Return();
  k_46 :
  MoveTop(1,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(q_47);
  p_112 :
  Cpush(s_47);
  Epushd(2,7);
  MoveTop(2,1);
  goto y_110;
  y_110 :
  TestFunFC(i_47,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto z_110;
  z_110 :
  TestFunFC(x_3,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto a_111;
  a_111 :
  TestFunFC(h_31,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto b_111;
  b_111 :
  TestFunFC(c_1,&&fail,Egetd(2,7));
  Rpush(u_47);
  goto q_112;
  u_47 :
  goto t_47;
  q_112 :
  Move(1,4,2,3);
  Move(1,6,2,4);
  Move(1,7,2,6);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  t_47 :
  Epopd(2,7);
  goto r_47;
  s_47 :
  IsAppl();
  OneInit();
  w_47 :
  OneNextSon();
  Cpush(w_47);
  Rpush(a_48);
  goto p_112;
  a_48 :
  Cpop();
  OneBuild();
  goto v_47;
  r_47 :
  Cpop();
  v_47 :
  Return();
  q_47 :
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
  f_46 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_p_63)
  Epushd(0,5);
  MoveTop(0,1);
  goto u_112;
  u_112 :
  TestFunFC(j_46,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto v_112;
  v_112 :
  TestFunFC(g_9,&&p_48,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(d_48);
  goto h_113;
  p_48 :
  TestFunFC(q_48,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(d_48);
  goto i_113;
  d_48 :
  goto c_48;
  i_113 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",Egetd(0,3),App2("Cons",Egetd(0,5),App2("Cons",Egetd(0,4),App0("Nil"))))));
  Return();
  c_48 :
  goto b_48;
  h_113 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_q_63);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_r_63);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App1("Seqs",App2("Cons",App1("Match",Egetd(0,3)),App2("Cons",Egetd(0,5),App2("Cons",App1("Build",Egetd(0,4)),App0("Nil"))))));
  Return();
  b_48 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_q_63)
  Cpush(r_48);
  Tdupl();
  Rpush(v_48);
  q_113 :
  Epushd(0,4);
  MoveTop(0,2);
  goto l_113;
  l_113 :
  TestFunFC(i_47,&&b_49,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,1,0,2,2);
  Rpush(a_49);
  goto r_113;
  b_49 :
  TestFunFC(v_44,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(a_49);
  goto s_113;
  a_49 :
  goto z_48;
  s_113 :
  Return();
  z_48 :
  goto x_48;
  r_113 :
  Return();
  x_48 :
  AllInit();
  c_49 :
  AllNextSon(&&d_49);
  Rpush(e_49);
  goto q_113;
  e_49 :
  goto c_49;
  d_49 :
  AllBuild();
  Epopd(0,4);
  Return();
  v_48 :
  Cpop();
  Crestore();
  Cjump();
  r_48 :
ENDPROC

PROC(_stratego_r_63)
  Cpush(j_49);
  Tdupl();
  Rpush(l_49);
  z_113 :
  Cpush(v_49);
  Epushd(0,4);
  MoveTop(0,1);
  goto u_113;
  u_113 :
  TestFunFC(i_47,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(y_49);
  goto a_114;
  y_49 :
  goto w_49;
  a_114 :
  Return();
  w_49 :
  Epopd(0,4);
  goto p_49;
  v_49 :
  Ccall(_stratego_s_63);
  goto z_49;
  p_49 :
  Cpop();
  z_49 :
  AllInit();
  a_50 :
  AllNextSon(&&b_50);
  Rpush(c_50);
  goto z_113;
  c_50 :
  goto a_50;
  b_50 :
  AllBuild();
  Return();
  l_49 :
  Cpop();
  Crestore();
  Cjump();
  j_49 :
ENDPROC

PROC(_stratego_s_63)
  Epushd(0,1);
  MoveTop(0,1);
  goto c_114;
  c_114 :
  TestFunFC(g_50,&&fail,Egetd(0,1));
  Rpush(e_50);
  goto e_114;
  e_50 :
  goto d_50;
  e_114 :
  Return();
  d_50 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_63)
  Epushd(0,6);
  MoveTop(0,3);
  goto r_114;
  r_114 :
  TestFunFC(y_50,&&x_50,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto s_114;
  s_114 :
  TestFunFC(c_1,&&z_50,Egetd(0,4));
  Rpush(w_50);
  goto v_115;
  z_50 :
  TestFunFC(y_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(w_50);
  goto w_115;
  x_50 :
  TestFunFC(b_51,&&a_51,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto t_114;
  t_114 :
  TestFunFC(c_1,&&c_51,Egetd(0,4));
  Rpush(w_50);
  goto x_115;
  c_51 :
  TestFunFC(y_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(w_50);
  goto y_115;
  a_51 :
  TestFunFC(e_51,&&d_51,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto u_114;
  u_114 :
  TestFunFC(c_1,&&f_51,Egetd(0,4));
  Rpush(w_50);
  goto z_115;
  f_51 :
  TestFunFC(y_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(w_50);
  goto a_116;
  d_51 :
  TestFunFC(h_51,&&g_51,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto v_114;
  v_114 :
  TestFunFC(c_1,&&i_51,Egetd(0,4));
  Rpush(w_50);
  goto b_116;
  i_51 :
  TestFunFC(y_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(w_50);
  goto c_116;
  g_51 :
  TestFunFC(k_51,&&j_51,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(w_50);
  goto d_116;
  j_51 :
  TestFunFC(m_51,&&l_51,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(w_50);
  goto e_116;
  l_51 :
  TestFunFC(o_51,&&n_51,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(w_50);
  goto f_116;
  n_51 :
  TestFunFC(p_51,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(w_50);
  goto g_116;
  w_50 :
  goto v_50;
  g_116 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset(App1("Seqs",App2("Cons",App1("Build",Egetd(0,5)),App2("Cons",Egetd(0,4),App2("Cons",App1("Match",Egetd(0,6)),App0("Nil"))))));
  Return();
  v_50 :
  goto s_50;
  f_116 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",Egetd(0,4),App1("Match",Egetd(0,5))));
  Return();
  s_50 :
  goto r_50;
  e_116 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Seq",App1("Match",Egetd(0,4)),Egetd(0,5)));
  Return();
  r_50 :
  goto q_50;
  d_116 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset(App2("Seq",App1("Build",Egetd(0,5)),Egetd(0,4)));
  Return();
  q_50 :
  goto p_50;
  c_116 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("Let",Egetd(0,1),App2("Lets",Egetd(0,2),Egetd(0,5))));
  Return();
  p_50 :
  goto o_50;
  b_116 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  o_50 :
  goto n_50;
  a_116 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("LChoice",Egetd(0,1),App1("LChoices",Egetd(0,2))));
  Return();
  n_50 :
  goto m_50;
  z_115 :
  Tset(App0("Fail"));
  Return();
  m_50 :
  goto k_50;
  y_115 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Choice",Egetd(0,1),App1("Choices",Egetd(0,2))));
  Return();
  k_50 :
  goto j_50;
  x_115 :
  Tset(App0("Fail"));
  Return();
  j_50 :
  goto i_50;
  w_115 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("Seq",Egetd(0,1),App1("Seqs",Egetd(0,2))));
  Return();
  i_50 :
  goto h_50;
  v_115 :
  Tset(App0("Id"));
  Return();
  h_50 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_v_63)
  Epushd(0,2);
  MoveTop(0,1);
  goto m_116;
  m_116 :
  TestFunFC(s_44,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(r_51);
  goto y_116;
  r_51 :
  goto q_51;
  y_116 :
  Epushd(1,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(s_51);
  z_116 :
  Cpush(u_51);
  Epushd(2,4);
  MoveTop(2,1);
  goto j_116;
  j_116 :
  TestFunFC(v_44,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto k_116;
  k_116 :
  TestFunFC(s_44,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(w_51);
  goto a_117;
  w_51 :
  goto v_51;
  a_117 :
  Move(1,2,2,3);
  Move(1,1,2,4);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  v_51 :
  Epopd(2,4);
  goto t_51;
  u_51 :
  IsAppl();
  OneInit();
  y_51 :
  OneNextSon();
  Cpush(y_51);
  Rpush(a_52);
  goto z_116;
  a_52 :
  Cpop();
  OneBuild();
  goto x_51;
  t_51 :
  Cpop();
  x_51 :
  Return();
  s_51 :
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset(App1("Build",Egetd(1,3)));
  Epopd(1,3);
  Return();
  q_51 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_w_63)
  Epushd(0,2);
  MoveTop(0,1);
  goto h_117;
  h_117 :
  TestFunFC(s_44,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(c_52);
  goto u_117;
  c_52 :
  goto b_52;
  u_117 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_p_62);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(d_52);
  w_117 :
  Cpush(f_52);
  Epushd(2,3);
  MoveTop(2,1);
  goto f_117;
  f_117 :
  TestFunFC(v_44,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(h_52);
  goto x_117;
  h_52 :
  goto g_52;
  x_117 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  g_52 :
  Epopd(2,3);
  goto e_52;
  f_52 :
  IsAppl();
  OneInit();
  l_52 :
  OneNextSon();
  Cpush(l_52);
  Rpush(n_52);
  goto w_117;
  n_52 :
  Cpop();
  OneBuild();
  goto i_52;
  e_52 :
  Cpop();
  i_52 :
  Return();
  d_52 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",Egetd(1,2),Egetd(1,3),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  b_52 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_x_63)
  Epushd(0,3);
  MoveTop(0,1);
  goto k_118;
  k_118 :
  TestFunFC(t_52,&&s_52,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(r_52);
  goto k_119;
  s_52 :
  TestFunFC(s_44,&&w_52,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(r_52);
  goto p_119;
  w_52 :
  TestFunFC(x_52,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(r_52);
  goto u_119;
  r_52 :
  goto q_52;
  u_119 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Seq",App1("Prim",ATmakeString("_ST_explode_term")),App2("Seq",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,2),App2("Cons",App2("Cong",ATmakeString("TCons"),App2("Cons",Egetd(0,3),App2("Cons",App2("Cong",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Prim",ATmakeString("_ST_mkterm")))));
  Return();
  q_52 :
  goto p_52;
  p_119 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_p_62);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(y_52);
  r_119 :
  Cpush(a_53);
  Epushd(2,3);
  MoveTop(2,1);
  goto i_118;
  i_118 :
  TestFunFC(d_53,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(c_53);
  goto s_119;
  c_53 :
  goto b_53;
  s_119 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  b_53 :
  Epopd(2,3);
  goto z_52;
  a_53 :
  IsAppl();
  OneInit();
  f_53 :
  OneNextSon();
  Cpush(f_53);
  Rpush(h_53);
  goto r_119;
  h_53 :
  Cpop();
  OneBuild();
  goto e_53;
  z_52 :
  Cpop();
  e_53 :
  Return();
  y_52 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App3("BAM",App1("Prim",ATmakeString("_ST_mkterm")),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))),App1("Var",Egetd(1,1))),App1("Build",Egetd(1,4)))));
  Epopd(1,4);
  Return();
  p_52 :
  goto o_52;
  k_119 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_p_62);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(i_53);
  m_119 :
  Cpush(k_53);
  Epushd(2,3);
  MoveTop(2,1);
  goto e_118;
  e_118 :
  TestFunFC(d_53,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(m_53);
  goto n_119;
  m_53 :
  goto l_53;
  n_119 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset(App1("Var",Egetd(1,1)));
  Return();
  l_53 :
  Epopd(2,3);
  goto j_53;
  k_53 :
  IsAppl();
  OneInit();
  o_53 :
  OneNextSon();
  Cpush(o_53);
  Rpush(q_53);
  goto m_119;
  q_53 :
  Cpop();
  OneBuild();
  goto n_53;
  j_53 :
  Cpop();
  n_53 :
  Return();
  i_53 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("Scope",App2("Cons",Egetd(1,1),App0("Nil")),App2("Seq",App1("Match",Egetd(1,4)),App1("Where",App3("BAM",App1("Prim",ATmakeString("_ST_explode_term")),App1("Var",Egetd(1,1)),App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,2),App2("Cons",App2("Op",ATmakeString("TCons"),App2("Cons",Egetd(1,3),App2("Cons",App2("Op",ATmakeString("TNil"),App0("Nil")),App0("Nil")))),App0("Nil")))))))));
  Epopd(1,4);
  Return();
  o_52 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_y_63)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_z_63)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test2"));
  Ccall(_stratego_h_62);
  Tpop();
  Cpush(u_53);
  Tdupl();
  Epushd(1,2);
  Cpush(w_53);
  Epushd(2,11);
  Tset(ATmakeString("data/mkcons-spec.trm"));
  Ccall(_stratego_y_63);
  MoveTop(2,1);
  goto h_120;
  h_120 :
  TestFunFC(x_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto i_120;
  i_120 :
  TestFunFC(y_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,5,2,2,1);
  goto j_120;
  j_120 :
  TestFunFC(z_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  goto k_120;
  k_120 :
  TestFunFC(y_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,8,2,5,1);
  goto l_120;
  l_120 :
  TestFunFC(a_1,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  goto m_120;
  m_120 :
  TestFunFC(y_0,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  MoveArg(2,11,2,8,1);
  goto n_120;
  n_120 :
  TestFunFC(b_1,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  goto o_120;
  o_120 :
  TestFunFC(c_1,&&fail,Egetd(2,11));
  Rpush(y_53);
  goto x_123;
  y_53 :
  goto x_53;
  x_123 :
  Epushd(3,4);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_m_62);
  MoveTop(3,1);
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  Rpush(z_53);
  z_123 :
  Cpush(b_54);
  Ccall(_stratego_l_62);
  goto a_54;
  b_54 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(4,4);
  MoveTop(4,1);
  goto z_119;
  z_119 :
  TestFunFC(j_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(e_54);
  goto a_124;
  e_54 :
  goto d_54;
  a_124 :
  Epushd(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Ccall(_stratego_q_62);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(4,3);
  NotNULLd(5,1);
  NotNULLd(4,4);
  Tset(App3("SDef",Egetd(4,2),Egetd(4,3),App2("Scope",Egetd(5,1),App1("SRule",Egetd(4,4)))));
  Epopd(5,1);
  Return();
  d_54 :
  Epopd(4,4);
  OneNextSon();
  Rpush(f_54);
  goto z_123;
  f_54 :
  AllBuild();
  goto c_54;
  a_54 :
  Cpop();
  c_54 :
  Return();
  z_53 :
  MoveTop(3,2);
  NotNULLd(2,10);
  Tset(Egetd(2,10));
  Rpush(n_54);
  d_124 :
  Cpush(p_54);
  Ccall(_stratego_l_62);
  goto o_54;
  p_54 :
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(4,4);
  MoveTop(4,1);
  goto d_120;
  d_120 :
  TestFunFC(r_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(s_54);
  goto e_124;
  s_54 :
  goto r_54;
  e_124 :
  Epushd(5,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Ccall(_stratego_q_62);
  MoveTop(5,1);
  NotNULLd(4,2);
  NotNULLd(4,3);
  NotNULLd(5,1);
  NotNULLd(4,4);
  Tset(App3("SDef",Egetd(4,2),Egetd(4,3),App2("Scope",Egetd(5,1),Egetd(4,4))));
  Epopd(5,1);
  Return();
  r_54 :
  Epopd(4,4);
  OneNextSon();
  Rpush(t_54);
  goto d_124;
  t_54 :
  AllBuild();
  goto q_54;
  o_54 :
  Cpop();
  q_54 :
  Return();
  n_54 :
  MoveTop(3,3);
  NotNULLd(3,1);
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("Cons",Egetd(3,1),App2("Cons",Egetd(3,2),App2("Cons",Egetd(3,3),App0("Nil")))));
  Ccall(_stratego_k_62);
  MoveTop(3,4);
  NotNULLd(2,4);
  NotNULLd(3,4);
  Tset(App1("Specification",App2("Cons",App1("Signature",Egetd(2,4)),App2("Cons",App1("Strategies",Egetd(3,4)),App0("Nil")))));
  Tdupl();
  NotNULLd(2,4);
  NotNULLd(3,4);
  Tset(App1("Specification",App2("Cons",App1("Signature",Egetd(2,4)),App2("Cons",App1("Strategies",Egetd(3,4)),App0("Nil")))));
  MoveTop(0,1);
  Tpop();
  Epopd(3,4);
  Return();
  x_53 :
  Epopd(2,11);
  goto v_53;
  w_53 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_h_62);
  Ccall(_stratego_i_62);
  goto u_54;
  v_53 :
  Cpop();
  u_54 :
  MoveTop(1,1);
  Tset(ATmakeString("data/mkcons-sdefs.trm"));
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(1,1);
  Tset(App2("TCons",ATmakeString("data/mkcons-sdefs.trm"),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_a_64);
  MoveTop(1,2);
  Move(0,2,1,2);
  Cpush(w_54);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto v_54;
  w_54 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_x_61);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_x_61);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_i_62);
  goto x_54;
  v_54 :
  Cpop();
  x_54 :
  Epopd(1,2);
  Tpop();
  Ccall(_stratego_e_62);
  goto t_53;
  u_53 :
  Ccall(_stratego_g_62);
  goto y_54;
  t_53 :
  Cpop();
  y_54 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_a_64)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_b_64)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test3"));
  Ccall(_stratego_h_62);
  Tpop();
  Cpush(e_55);
  Tdupl();
  Epushd(1,2);
  Cpush(g_55);
  Epushd(2,7);
  Tset(ATmakeString("data/mkcons-sdefs.trm"));
  Ccall(_stratego_y_63);
  Ccall(_stratego_u_62);
  MoveTop(2,1);
  goto a_125;
  a_125 :
  TestFunFC(x_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto b_125;
  b_125 :
  TestFunFC(y_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto c_125;
  c_125 :
  TestFunFC(y_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,7,2,4,1);
  goto d_125;
  d_125 :
  TestFunFC(b_1,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  goto e_125;
  e_125 :
  TestFunFC(c_1,&&fail,Egetd(2,7));
  Rpush(n_55);
  goto h_127;
  n_55 :
  goto m_55;
  h_127 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Move(0,1,2,6);
  Return();
  m_55 :
  Epopd(2,7);
  goto f_55;
  g_55 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_h_62);
  Ccall(_stratego_i_62);
  goto p_55;
  f_55 :
  Cpop();
  p_55 :
  MoveTop(1,1);
  Tset(ATmakeString("data/mkcons-renamed.trm"));
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(1,1);
  Tset(App2("TCons",ATmakeString("data/mkcons-renamed.trm"),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_a_64);
  MoveTop(1,2);
  Move(0,2,1,2);
  Cpush(w_55);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto v_55;
  w_55 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_x_61);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_x_61);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_i_62);
  goto x_55;
  v_55 :
  Cpop();
  x_55 :
  Epopd(1,2);
  Tpop();
  Ccall(_stratego_e_62);
  goto d_55;
  e_55 :
  Ccall(_stratego_g_62);
  goto c_56;
  d_55 :
  Cpop();
  c_56 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_c_64)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("test3"));
  Ccall(_stratego_h_62);
  Tpop();
  Cpush(h_56);
  Tdupl();
  Epushd(1,2);
  Cpush(j_56);
  Epushd(2,1);
  Tset(ATmakeString("data/mkcons-renamed.trm"));
  Ccall(_stratego_y_63);
  Ccall(_stratego_z_62);
  MoveTop(2,1);
  Move(0,1,2,1);
  Epopd(2,1);
  goto i_56;
  j_56 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_h_62);
  Ccall(_stratego_i_62);
  goto l_56;
  i_56 :
  Cpop();
  l_56 :
  MoveTop(1,1);
  Tset(ATmakeString("data/mkcons-needed.trm"));
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  NotNULLd(1,1);
  Tset(App2("TCons",ATmakeString("data/mkcons-needed.trm"),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_a_64);
  MoveTop(1,2);
  Move(0,2,1,2);
  Cpush(n_56);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto m_56;
  n_56 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_x_61);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(2,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_x_61);
  Epopd(2,1);
  Tpop();
  Ccall(_stratego_i_62);
  goto v_56;
  m_56 :
  Cpop();
  v_56 :
  Epopd(1,2);
  Tpop();
  Ccall(_stratego_e_62);
  goto d_56;
  h_56 :
  Ccall(_stratego_g_62);
  goto w_56;
  d_56 :
  Cpop();
  w_56 :
  Epopd(0,2);
ENDPROC
