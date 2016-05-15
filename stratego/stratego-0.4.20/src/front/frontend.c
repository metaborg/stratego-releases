#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT

VARDECL(AFun,z_78);
VARDECL(AFun,y_78);
VARDECL(AFun,w_78);
VARDECL(AFun,u_78);
VARDECL(AFun,k_59);
VARDECL(AFun,i_59);
VARDECL(AFun,g_59);
VARDECL(AFun,d_59);
VARDECL(AFun,a_59);
VARDECL(AFun,y_58);
VARDECL(AFun,v_58);
VARDECL(AFun,t_58);
VARDECL(AFun,d_55);
VARDECL(AFun,x_43);
VARDECL(AFun,v_43);
VARDECL(AFun,d_41);
VARDECL(AFun,m_39);
VARDECL(AFun,h_35);
VARDECL(AFun,h_19);
VARDECL(AFun,g_19);
VARDECL(AFun,g_18);
VARDECL(AFun,f_18);
VARDECL(AFun,s_17);
VARDECL(AFun,y_10);
VARDECL(AFun,k_10);
VARDECL(AFun,j_9);
VARDECL(AFun,g_9);
VARDECL(AFun,e_9);
VARDECL(AFun,d_9);
VARDECL(AFun,c_9);
VARDECL(AFun,i_8);
VARDECL(AFun,w_7);
VARDECL(AFun,h_7);
VARDECL(AFun,t_6);
VARDECL(AFun,h_6);
VARDECL(AFun,x_5);
VARDECL(AFun,r_5);
VARDECL(AFun,o_5);
VARDECL(AFun,w_0);
VARDECL(AFun,s_0);
VARDECL(AFun,r_0);
VARDECL(AFun,l_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_s_95);
PROCDECL(_stratego_t_95);
PROCDECL(_stratego_u_95);
PROCDECL(_stratego_v_95);
PROCDECL(_stratego_w_95);
PROCDECL(_stratego_x_95);
PROCDECL(_stratego_y_95);
PROCDECL(_stratego_z_95);
PROCDECL(_stratego_a_96);
PROCDECL(_stratego_b_96);
PROCDECL(_stratego_c_96);
PROCDECL(_stratego_d_96);
PROCDECL(_stratego_e_96);
PROCDECL(_stratego_f_96);
PROCDECL(_stratego_g_96);
PROCDECL(_stratego_h_96);
PROCDECL(_stratego_i_96);
PROCDECL(_stratego_j_96);
PROCDECL(_stratego_k_96);
PROCDECL(_stratego_l_96);
PROCDECL(_stratego_m_96);
PROCDECL(_stratego_n_96);
PROCDECL(_stratego_o_96);
PROCDECL(_stratego_p_96);
PROCDECL(_stratego_q_96);
PROCDECL(_stratego_r_96);
PROCDECL(_stratego_s_96);
PROCDECL(_stratego_t_96);
PROCDECL(_stratego_u_96);
PROCDECL(_stratego_v_96);
PROCDECL(_stratego_w_96);
PROCDECL(_stratego_x_96);
PROCDECL(_stratego_y_96);
PROCDECL(_stratego_z_96);
PROCDECL(_stratego_a_97);
PROCDECL(_stratego_b_97);
PROCDECL(_stratego_c_97);
PROCDECL(_stratego_d_97);
PROCDECL(_stratego_e_97);
PROCDECL(_stratego_f_97);
PROCDECL(_stratego_g_97);
PROCDECL(_stratego_h_97);
PROCDECL(_stratego_i_97);
PROCDECL(_stratego_j_97);
PROCDECL(_stratego_k_97);
PROCDECL(_stratego_l_97);
PROCDECL(_stratego_m_97);
PROCDECL(_stratego_n_97);
PROCDECL(_stratego_o_97);
PROCDECL(_stratego_p_97);
PROCDECL(_stratego_q_97);
PROCDECL(_stratego_r_97);
PROCDECL(_stratego_s_97);
PROCDECL(_stratego_t_97);
PROCDECL(_stratego_u_97);
PROCDECL(_stratego_v_97);
PROCDECL(_stratego_w_97);
PROCDECL(_stratego_x_97);
PROCDECL(_stratego_y_97);
PROCDECL(_stratego_z_97);
PROCDECL(_stratego_a_98);
PROCDECL(_stratego_b_98);
PROCDECL(_stratego_c_98);
PROCDECL(_stratego_d_98);
PROCDECL(_stratego_e_98);

PROC(_stratego_init_afuns)
  MOVE(z_78,ATmakeAFun("BuildDefault",1,0));
  MOVE(y_78,ATmakeAFun("Real",1,0));
  MOVE(w_78,ATmakeAFun("Int",1,0));
  MOVE(u_78,ATmakeAFun("Str",1,0));
  MOVE(k_59,ATmakeAFun("Cong",2,0));
  MOVE(i_59,ATmakeAFun("BAM",3,0));
  MOVE(g_59,ATmakeAFun("BA",2,0));
  MOVE(d_59,ATmakeAFun("AM",2,0));
  MOVE(a_59,ATmakeAFun("MA",2,0));
  MOVE(y_58,ATmakeAFun("StratRule",3,0));
  MOVE(v_58,ATmakeAFun("Seq",2,0));
  MOVE(t_58,ATmakeAFun("Seqs",1,0));
  MOVE(d_55,ATmakeAFun("Scope",2,0));
  MOVE(x_43,ATmakeAFun("Rule",3,0));
  MOVE(v_43,ATmakeAFun("LRule",1,0));
  MOVE(d_41,ATmakeAFun("Var",1,0));
  MOVE(m_39,ATmakeAFun("OpDecl",2,0));
  MOVE(h_35,ATmakeAFun("Sorts",1,0));
  MOVE(h_19,ATmakeAFun("FunType",2,0));
  MOVE(g_19,ATmakeAFun("ConstType",1,0));
  MOVE(g_18,ATmakeAFun("SDef",3,0));
  MOVE(f_18,ATmakeAFun("RDef",3,0));
  MOVE(s_17,ATmakeAFun("Operations",1,0));
  MOVE(y_10,ATmakeAFun("Overlay",3,0));
  MOVE(k_10,ATmakeAFun("Op",2,0));
  MOVE(j_9,ATmakeAFun("Strategies",1,0));
  MOVE(g_9,ATmakeAFun("Rules",1,0));
  MOVE(e_9,ATmakeAFun("Overlays",1,0));
  MOVE(d_9,ATmakeAFun("Signature",1,0));
  MOVE(c_9,ATmakeAFun("Specification",1,0));
  MOVE(i_8,ATmakeAFun("Runtime",1,0));
  MOVE(w_7,ATmakeAFun("Silent",0,0));
  MOVE(h_7,ATmakeAFun("Binary",0,0));
  MOVE(t_6,ATmakeAFun("Output",1,0));
  MOVE(h_6,ATmakeAFun("Input",1,0));
  MOVE(x_5,ATmakeAFun("Program",1,0));
  MOVE(r_5,ATmakeAFun("Help",0,0));
  MOVE(o_5,ATmakeAFun("Undefined",1,0));
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(s_0,ATmakeAFun("TNil",0,0));
  MOVE(r_0,ATmakeAFun("TCons",2,0));
  MOVE(l_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_s_95);
ENDPROC

PROC(_stratego_s_95)
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App1("Program",Egetd(0,1)));
  Epopd(0,1);
  OneNextSon();
  Rpush(a_0);
  v_119 :
  Cpush(d_0);
  Cpush(f_0);
  Ccall(_stratego_t_95);
  goto e_0;
  f_0 :
  Ccall(_stratego_u_95);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_0);
  goto v_119;
  h_0 :
  AllBuild();
  goto g_0;
  e_0 :
  Cpop();
  g_0 :
  goto b_0;
  d_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto c_0;
  c_0 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(k_0);
  goto w_119;
  k_0 :
  goto j_0;
  w_119 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3)));
  Return();
  j_0 :
  Epopd(0,3);
  goto i_0;
  b_0 :
  Cpop();
  i_0 :
  Return();
  a_0 :
  AllBuild();
  Cpush(n_0);
  Ccall(_stratego_v_95);
  goto m_0;
  n_0 :
  Ccontinue(o_0);
  Epushd(0,6);
  Ccall(_stratego_a_96);
  Tdupl();
  Ccall(_stratego_c_96);
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_j_96);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_c_96);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MoveTop(0,2);
  goto w_2;
  w_2 :
  TestFunFC(r_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto x_2;
  x_2 :
  TestFunFC(r_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto y_2;
  y_2 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(q_0);
  goto y_119;
  q_0 :
  goto p_0;
  y_119 :
  NotNULLd(0,1);
  NotNULLd(0,3);
  NotNULLd(0,5);
  Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil"))));
  Return();
  p_0 :
  Ccall(_stratego_d_96);
  Ccall(_stratego_g_96);
  Epopd(0,6);
  goto m_0;
  o_0 :
  Ccall(_stratego_h_96);
  goto t_0;
  m_0 :
  Cpop();
  t_0 :
ENDPROC

PROC(_stratego_t_95)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_3;
  a_3 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(v_0);
  goto z_119;
  v_0 :
  goto u_0;
  z_119 :
  Return();
  u_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_95)
  Epushd(0,5);
  MoveTop(0,3);
  goto u_7;
  u_7 :
  TestFunFC(l_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto v_7;
  v_7 :
  TestFunFC(l_0,&&n_1,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(p_1);
  Rpush(q_1);
  goto a_120;
  q_1 :
  goto o_1;
  p_1 :
  Ccontinue(r_1);
  Rpush(s_1);
  goto d_120;
  s_1 :
  goto o_1;
  r_1 :
  Ccontinue(t_1);
  Rpush(u_1);
  goto g_120;
  u_1 :
  goto o_1;
  t_1 :
  Ccontinue(v_1);
  Rpush(w_1);
  goto j_120;
  w_1 :
  goto o_1;
  v_1 :
  Ccontinue(x_1);
  Rpush(y_1);
  goto m_120;
  y_1 :
  goto o_1;
  x_1 :
  Ccontinue(z_1);
  Rpush(a_2);
  goto p_120;
  a_2 :
  goto o_1;
  z_1 :
  Ccontinue(b_2);
  Rpush(c_2);
  goto t_120;
  c_2 :
  goto o_1;
  b_2 :
  Ccontinue(d_2);
  Rpush(e_2);
  goto x_120;
  e_2 :
  goto o_1;
  d_2 :
  Ccontinue(f_2);
  Rpush(g_2);
  goto b_121;
  g_2 :
  goto o_1;
  f_2 :
  Ccontinue(h_2);
  Rpush(i_2);
  goto f_121;
  i_2 :
  goto o_1;
  h_2 :
  Ccontinue(j_2);
  Rpush(k_2);
  goto j_121;
  k_2 :
  goto o_1;
  j_2 :
  Ccontinue(l_2);
  Rpush(m_2);
  goto m_121;
  m_2 :
  goto o_1;
  l_2 :
  Ccontinue(n_2);
  Rpush(o_2);
  goto p_121;
  o_2 :
  goto o_1;
  n_2 :
  Ccontinue(p_2);
  Rpush(q_2);
  goto s_121;
  q_2 :
  goto o_1;
  p_2 :
  Rpush(s_2);
  goto v_121;
  s_2 :
  goto r_2;
  o_1 :
  Cpop();
  r_2 :
  goto m_1;
  n_1 :
  Cpush(u_2);
  Rpush(v_2);
  goto a_120;
  v_2 :
  goto t_2;
  u_2 :
  Ccontinue(z_2);
  Rpush(b_3);
  goto d_120;
  b_3 :
  goto t_2;
  z_2 :
  Ccontinue(c_3);
  Rpush(d_3);
  goto g_120;
  d_3 :
  goto t_2;
  c_3 :
  Ccontinue(e_3);
  Rpush(f_3);
  goto j_120;
  f_3 :
  goto t_2;
  e_3 :
  Ccontinue(g_3);
  Rpush(h_3);
  goto m_120;
  h_3 :
  goto t_2;
  g_3 :
  Ccontinue(i_3);
  Rpush(j_3);
  goto j_121;
  j_3 :
  goto t_2;
  i_3 :
  Ccontinue(k_3);
  Rpush(l_3);
  goto m_121;
  l_3 :
  goto t_2;
  k_3 :
  Ccontinue(m_3);
  Rpush(n_3);
  goto p_121;
  n_3 :
  goto t_2;
  m_3 :
  Ccontinue(o_3);
  Rpush(p_3);
  goto s_121;
  p_3 :
  goto t_2;
  o_3 :
  Rpush(r_3);
  goto v_121;
  r_3 :
  goto q_3;
  t_2 :
  Cpop();
  q_3 :
  goto m_1;
  m_1 :
  goto l_1;
  v_121 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto s_7;
  s_7 :
  TestStr(1,1,"-?",&&fail);
  Rpush(t_3);
  goto w_121;
  t_3 :
  goto s_3;
  w_121 :
  Return();
  s_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  l_1 :
  goto k_1;
  s_121 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_7;
  g_7 :
  TestStr(1,1,"-h",&&fail);
  Rpush(v_3);
  goto t_121;
  v_3 :
  goto u_3;
  t_121 :
  Return();
  u_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  k_1 :
  goto j_1;
  p_121 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto d_7;
  d_7 :
  TestStr(1,1,"--help",&&fail);
  Rpush(x_3);
  goto q_121;
  x_3 :
  goto w_3;
  q_121 :
  Return();
  w_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Help"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Help"),Egetd(0,5)));
  Return();
  j_1 :
  goto i_1;
  m_121 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_6;
  w_6 :
  TestStr(1,1,"-s",&&fail);
  Rpush(z_3);
  goto n_121;
  z_3 :
  goto y_3;
  n_121 :
  Return();
  y_3 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Statistics"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Statistics"),Egetd(0,5)));
  Return();
  i_1 :
  goto h_1;
  j_121 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto p_6;
  p_6 :
  TestStr(1,1,"-b",&&fail);
  Rpush(b_4);
  goto k_121;
  b_4 :
  goto a_4;
  k_121 :
  Return();
  a_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Binary"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Binary"),Egetd(0,5)));
  Return();
  h_1 :
  goto g_1;
  f_121 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto m_5;
  m_5 :
  TestStr(2,1,"--output",&&fail);
  Rpush(d_4);
  goto g_121;
  d_4 :
  goto c_4;
  g_121 :
  Return();
  c_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  g_1 :
  goto f_1;
  b_121 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto i_5;
  i_5 :
  TestStr(2,1,"-o",&&fail);
  Rpush(f_4);
  goto c_121;
  f_4 :
  goto e_4;
  c_121 :
  Return();
  e_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Output",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  f_1 :
  goto e_1;
  x_120 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto e_5;
  e_5 :
  TestStr(2,1,"--input",&&fail);
  Rpush(i_4);
  goto y_120;
  i_4 :
  goto g_4;
  y_120 :
  Return();
  g_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  e_1 :
  goto d_1;
  t_120 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto a_5;
  a_5 :
  TestStr(2,1,"-i",&&fail);
  Rpush(l_4);
  goto u_120;
  l_4 :
  goto j_4;
  u_120 :
  Return();
  j_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("Input",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  d_1 :
  goto c_1;
  p_120 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(2,1);
  goto w_4;
  w_4 :
  TestStr(2,1,"@version",&&fail);
  Rpush(o_4);
  goto q_120;
  o_4 :
  goto m_4;
  q_120 :
  Return();
  m_4 :
  Epopd(2,1);
  Tpop();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  Tdupl();
  NotNULLd(0,1);
  Tset(App1("DeclVersion",Egetd(0,1)));
  MoveTop(1,1);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(1,1),Egetd(0,2)));
  Epopd(1,1);
  Return();
  c_1 :
  goto b_1;
  m_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_4;
  t_4 :
  TestStr(1,1,"--version",&&fail);
  Rpush(r_4);
  goto n_120;
  r_4 :
  goto p_4;
  n_120 :
  Return();
  p_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  b_1 :
  goto a_1;
  j_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_4;
  q_4 :
  TestStr(1,1,"-v",&&fail);
  Rpush(u_4);
  goto k_120;
  u_4 :
  goto s_4;
  k_120 :
  Return();
  s_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Version"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Version"),Egetd(0,5)));
  Return();
  a_1 :
  goto z_0;
  g_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_4;
  n_4 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(x_4);
  goto h_120;
  x_4 :
  goto v_4;
  h_120 :
  Return();
  v_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Verbose"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Verbose"),Egetd(0,5)));
  Return();
  z_0 :
  goto y_0;
  d_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_4;
  k_4 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(z_4);
  goto e_120;
  z_4 :
  goto y_4;
  e_120 :
  Return();
  y_4 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  y_0 :
  goto x_0;
  a_120 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_4;
  h_4 :
  TestStr(1,1,"-S",&&fail);
  Rpush(c_5);
  goto b_120;
  c_5 :
  goto b_5;
  b_120 :
  Return();
  b_5 :
  Epopd(1,1);
  Tpop();
  Tset(App0("Silent"));
  NotNULLd(0,5);
  Tset(App2("Cons",App0("Silent"),Egetd(0,5)));
  Return();
  x_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_v_95)
  Tdupl();
  d_5 :
  MatchFun("Cons",2);
  Cpush(f_5);
  Arg(0);
  Cpush(j_5);
  Ccall(_stratego_w_95);
  goto h_5;
  j_5 :
  Epushd(0,2);
  MoveTop(0,1);
  goto x_7;
  x_7 :
  TestFunFC(o_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(n_5);
  goto z_121;
  n_5 :
  goto l_5;
  z_121 :
  Return();
  l_5 :
  Epopd(0,2);
  goto k_5;
  h_5 :
  Cpop();
  k_5 :
  Tpop();
  Cpop();
  goto g_5;
  f_5 :
  Arg(1);
  Tdrop();
  goto d_5;
  g_5 :
  Tpop();
  Ccall(_stratego_x_95);
ENDPROC

PROC(_stratego_w_95)
  Epushd(0,1);
  MoveTop(0,1);
  goto e_8;
  e_8 :
  TestFunFC(r_5,&&fail,Egetd(0,1));
  Rpush(q_5);
  goto a_122;
  q_5 :
  goto p_5;
  a_122 :
  Return();
  p_5 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_95)
  Epushd(0,1);
  Tdupl();
  Rpush(s_5);
  b_122 :
  Cpush(u_5);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_8;
  g_8 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_8;
  h_8 :
  TestFunFC(x_5,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(w_5);
  goto c_122;
  w_5 :
  goto v_5;
  c_122 :
  Move(0,1,1,3);
  Return();
  v_5 :
  Epopd(1,4);
  goto t_5;
  u_5 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_5);
  goto b_122;
  z_5 :
  AllBuild();
  goto y_5;
  t_5 :
  Cpop();
  y_5 :
  Return();
  s_5 :
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil"))));
  Ccall(_stratego_y_95);
  Tset(MakeInt(1));
  Ccall(_stratego_z_95);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_95)
  _ST_printnl();
ENDPROC

PROC(_stratego_z_95)
  _ST_exit();
ENDPROC

PROC(_stratego_a_96)
  Epushd(0,4);
  Tdupl();
  Cpush(b_6);
  Rpush(c_6);
  d_122 :
  Cpush(e_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_8;
  j_8 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_8;
  k_8 :
  TestFunFC(h_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(g_6);
  goto e_122;
  g_6 :
  goto f_6;
  e_122 :
  Move(0,1,1,3);
  Return();
  f_6 :
  Epopd(1,4);
  goto d_6;
  e_6 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_6);
  goto d_122;
  j_6 :
  AllBuild();
  goto i_6;
  d_6 :
  Cpop();
  i_6 :
  Return();
  c_6 :
  goto a_6;
  b_6 :
  Tset(App0("stdin"));
  Tdupl();
  Tset(App0("stdin"));
  MoveTop(0,1);
  Tpop();
  goto k_6;
  a_6 :
  Cpop();
  k_6 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_b_96);
  MoveTop(0,4);
  Move(0,3,0,4);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  Epopd(0,4);
ENDPROC

PROC(_stratego_b_96)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_c_96)
  _ST_dtime();
ENDPROC

PROC(_stratego_d_96)
  Epushd(0,1);
  Tdupl();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(m_6);
  Rpush(n_6);
  j_122 :
  Cpush(q_6);
  Epushd(1,4);
  MoveTop(1,1);
  goto q_8;
  q_8 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto r_8;
  r_8 :
  TestFunFC(t_6,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(s_6);
  goto k_122;
  s_6 :
  goto r_6;
  k_122 :
  Move(0,1,1,3);
  Return();
  r_6 :
  Epopd(1,4);
  goto o_6;
  q_6 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_6);
  goto j_122;
  v_6 :
  AllBuild();
  goto u_6;
  o_6 :
  Cpop();
  u_6 :
  Return();
  n_6 :
  goto l_6;
  m_6 :
  Tset(App0("stdout"));
  Tdupl();
  Tset(App0("stdout"));
  MoveTop(0,1);
  Tpop();
  goto x_6;
  l_6 :
  Cpop();
  x_6 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  Tpop();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil"))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  Cpush(z_6);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(a_7);
  p_122 :
  Cpush(c_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto x_8;
  x_8 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_9;
  f_9 :
  TestFunFC(h_7,&&fail,Egetd(1,2));
  Rpush(f_7);
  goto q_122;
  f_7 :
  goto e_7;
  q_122 :
  Return();
  e_7 :
  Epopd(1,3);
  goto b_7;
  c_7 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_7);
  goto p_122;
  j_7 :
  AllBuild();
  goto i_7;
  b_7 :
  Cpop();
  i_7 :
  Return();
  a_7 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_96);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  goto y_6;
  z_6 :
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_96);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  goto k_7;
  y_6 :
  Cpop();
  k_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_96)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_f_96)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_g_96)
  Epushd(0,2);
  Tdupl();
  Cpush(m_7);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(n_7);
  Tdupl();
  Rpush(o_7);
  r_122 :
  Cpush(q_7);
  Epushd(1,3);
  MoveTop(1,1);
  goto h_9;
  h_9 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto i_9;
  i_9 :
  TestFunFC(w_7,&&fail,Egetd(1,2));
  Rpush(t_7);
  goto s_122;
  t_7 :
  goto r_7;
  s_122 :
  Return();
  r_7 :
  Epopd(1,3);
  goto p_7;
  q_7 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_7);
  goto r_122;
  z_7 :
  AllBuild();
  goto y_7;
  p_7 :
  Cpop();
  y_7 :
  Return();
  o_7 :
  Cpop();
  Crestore();
  Cjump();
  n_7 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(a_8);
  t_122 :
  Cpush(c_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto k_9;
  k_9 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto l_9;
  l_9 :
  TestFunFC(i_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_8);
  goto u_122;
  f_8 :
  goto d_8;
  u_122 :
  Move(0,2,1,3);
  Return();
  d_8 :
  Epopd(1,4);
  goto b_8;
  c_8 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_8);
  goto t_122;
  m_8 :
  AllBuild();
  goto l_8;
  b_8 :
  Cpop();
  l_8 :
  Return();
  a_8 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(n_8);
  v_122 :
  Cpush(p_8);
  Epushd(1,4);
  MoveTop(1,1);
  goto n_9;
  n_9 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto o_9;
  o_9 :
  TestFunFC(x_5,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(t_8);
  goto w_122;
  t_8 :
  goto s_8;
  w_122 :
  Move(0,1,1,3);
  Return();
  s_8 :
  Epopd(1,4);
  goto o_8;
  p_8 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_8);
  goto v_122;
  v_8 :
  AllBuild();
  goto u_8;
  o_8 :
  Cpop();
  u_8 :
  Return();
  n_8 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil"))));
  Ccall(_stratego_y_95);
  goto l_7;
  m_7 :
  goto w_8;
  l_7 :
  Cpop();
  w_8 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_z_95);
  Epopd(0,2);
ENDPROC

PROC(_stratego_h_96)
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_y_95);
  Tset(MakeInt(1));
  Ccall(_stratego_z_95);
ENDPROC

PROC(_stratego_i_96)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_9;
  q_9 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  Rpush(z_8);
  goto x_122;
  z_8 :
  goto y_8;
  x_122 :
  Return();
  y_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_j_96)
  Epushd(0,14);
  Ccall(_stratego_k_96);
  Tdupl();
  Ccall(_stratego_a_97);
  Tpop();
  MoveTop(0,1);
  goto n_20;
  n_20 :
  TestFunFC(c_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto o_20;
  o_20 :
  TestFunFC(l_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,5,0,2,1);
  goto p_20;
  p_20 :
  TestFunFC(d_9,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto q_20;
  q_20 :
  TestFunFC(l_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,8,0,5,1);
  goto r_20;
  r_20 :
  TestFunFC(e_9,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  goto s_20;
  s_20 :
  TestFunFC(l_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,11,0,8,1);
  goto t_20;
  t_20 :
  TestFunFC(g_9,&&fail,Egetd(0,9));
  MoveArg(0,10,0,9,0);
  goto v_20;
  v_20 :
  TestFunFC(l_0,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,14,0,11,1);
  goto w_20;
  w_20 :
  TestFunFC(j_9,&&fail,Egetd(0,12));
  MoveArg(0,13,0,12,0);
  goto y_20;
  y_20 :
  TestFunFC(w_0,&&fail,Egetd(0,14));
  Rpush(b_9);
  goto y_122;
  b_9 :
  goto a_9;
  y_122 :
  Epushd(1,13);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Cpush(p_9);
  Tdupl();
  Cpush(r_9);
  Tdupl();
  Epushd(3,1);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  MoveTop(3,1);
  goto t_9;
  t_9 :
  TestFunFC(w_0,&&fail,Egetd(3,1));
  Rpush(u_9);
  goto z_122;
  u_9 :
  goto s_9;
  z_122 :
  Return();
  s_9 :
  Epopd(3,1);
  Cpop();
  Crestore();
  Cjump();
  r_9 :
  Tpop();
  Rpush(v_9);
  a_123 :
  Rpush(w_9);
  b_123 :
  Cpush(y_9);
  Epushd(3,3);
  MoveTop(3,1);
  goto u_10;
  u_10 :
  TestFunFC(k_10,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(j_10);
  goto c_123;
  j_10 :
  goto i_10;
  c_123 :
  Epushd(4,2);
  Tdupl();
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(l_10);
  d_123 :
  Cpush(p_10);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(5,4);
  MoveTop(5,1);
  goto t_10;
  t_10 :
  TestFunFC(y_10,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  MoveArg(5,4,5,1,2);
  Rpush(w_10);
  goto e_123;
  w_10 :
  goto v_10;
  e_123 :
  Epushd(6,9);
  Move(3,2,5,2);
  Move(6,1,5,3);
  Move(6,2,5,4);
  NotNULLd(6,1);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(6,1),App2("TCons",Egetd(3,3),App0("TNil"))));
  Rpush(z_10);
  f_123 :
  Epushd(7,9);
  MoveTop(7,1);
  goto c_10;
  c_10 :
  TestFunFC(r_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,5,7,1,1);
  goto d_10;
  d_10 :
  TestFunFC(w_0,&&o_11,Egetd(7,2));
  goto e_10;
  e_10 :
  TestFunFC(r_0,&&fail,Egetd(7,5));
  MoveArg(7,6,7,5,0);
  MoveArg(7,9,7,5,1);
  goto f_10;
  f_10 :
  TestFunFC(w_0,&&fail,Egetd(7,6));
  goto g_10;
  g_10 :
  TestFunFC(s_0,&&fail,Egetd(7,9));
  Rpush(c_11);
  goto g_123;
  o_11 :
  TestFunFC(l_0,&&fail,Egetd(7,2));
  MoveArg(7,3,7,2,0);
  MoveArg(7,4,7,2,1);
  goto h_10;
  h_10 :
  TestFunFC(r_0,&&fail,Egetd(7,5));
  MoveArg(7,6,7,5,0);
  MoveArg(7,9,7,5,1);
  goto m_10;
  m_10 :
  TestFunFC(l_0,&&fail,Egetd(7,6));
  MoveArg(7,7,7,6,0);
  MoveArg(7,8,7,6,1);
  goto n_10;
  n_10 :
  TestFunFC(s_0,&&fail,Egetd(7,9));
  Rpush(c_11);
  goto h_123;
  c_11 :
  goto b_11;
  h_123 :
  Epushd(8,5);
  NotNULLd(7,3);
  NotNULLd(7,7);
  NotNULLd(7,4);
  NotNULLd(7,8);
  Tset(App2("TCons",App2("TCons",Egetd(7,3),App2("TCons",Egetd(7,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(7,4),App2("TCons",Egetd(7,8),App0("TNil"))),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(v_11);
  goto f_123;
  v_11 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(8,1);
  goto z_9;
  z_9 :
  TestFunFC(r_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  goto a_10;
  a_10 :
  TestFunFC(r_0,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto b_10;
  b_10 :
  TestFunFC(s_0,&&fail,Egetd(8,5));
  Rpush(w_11);
  goto i_123;
  w_11 :
  goto p_11;
  i_123 :
  NotNULLd(8,2);
  NotNULLd(8,4);
  Tset(App2("Cons",Egetd(8,2),Egetd(8,4)));
  Return();
  p_11 :
  Epopd(8,5);
  Return();
  b_11 :
  goto a_11;
  g_123 :
  Tset(App0("Nil"));
  Return();
  a_11 :
  Epopd(7,9);
  Return();
  z_10 :
  MoveTop(6,4);
  Move(6,3,6,4);
  NotNULLd(6,3);
  NotNULLd(6,2);
  Tset(App2("TCons",Egetd(6,3),App2("TCons",Egetd(6,2),App0("TNil"))));
  MoveTop(6,5);
  goto q_10;
  q_10 :
  TestFunFC(r_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto r_10;
  r_10 :
  TestFunFC(r_0,&&fail,Egetd(6,7));
  MoveArg(6,8,6,7,0);
  MoveArg(6,9,6,7,1);
  goto s_10;
  s_10 :
  TestFunFC(s_0,&&fail,Egetd(6,9));
  Rpush(z_11);
  goto k_123;
  z_11 :
  goto x_11;
  k_123 :
  Move(4,1,6,6);
  Move(4,2,6,8);
  Return();
  x_11 :
  Epopd(6,9);
  Return();
  v_10 :
  Epopd(5,4);
  Tpop();
  OneNextSon();
  AllBuild();
  goto o_10;
  p_10 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_12);
  goto d_123;
  c_12 :
  AllBuild();
  goto a_12;
  o_10 :
  Cpop();
  a_12 :
  Return();
  l_10 :
  Tpop();
  NotNULLd(4,1);
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(4,2),App0("TNil"))));
  Ccall(_stratego_s_97);
  Rpush(d_12);
  goto b_123;
  d_12 :
  Epopd(4,2);
  Return();
  i_10 :
  Epopd(3,3);
  goto x_9;
  y_9 :
  goto e_12;
  x_9 :
  Cpop();
  e_12 :
  Return();
  w_9 :
  AllInit();
  f_12 :
  AllNextSon(&&g_12);
  Rpush(r_12);
  goto a_123;
  r_12 :
  goto f_12;
  g_12 :
  AllBuild();
  Return();
  v_9 :
  goto m_9;
  p_9 :
  goto s_12;
  m_9 :
  Cpop();
  s_12 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,10);
  Tset(Egetd(0,10));
  Cpush(u_12);
  Tdupl();
  Cpush(v_12);
  Tdupl();
  Epushd(2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto x_10;
  x_10 :
  TestFunFC(w_0,&&fail,Egetd(2,1));
  Rpush(x_12);
  goto m_123;
  x_12 :
  goto w_12;
  m_123 :
  Return();
  w_12 :
  Epopd(2,1);
  Cpop();
  Crestore();
  Cjump();
  v_12 :
  Tpop();
  Rpush(y_12);
  n_123 :
  Cpush(a_13);
  Epushd(2,3);
  MoveTop(2,1);
  goto u_11;
  u_11 :
  TestFunFC(k_10,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(c_13);
  goto o_123;
  c_13 :
  goto b_13;
  o_123 :
  Epushd(3,2);
  Tdupl();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(d_13);
  p_123 :
  Cpush(f_13);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(4,4);
  MoveTop(4,1);
  goto t_11;
  t_11 :
  TestFunFC(y_10,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(h_13);
  goto q_123;
  h_13 :
  goto g_13;
  q_123 :
  Epushd(5,9);
  Move(2,2,4,2);
  Move(5,1,4,3);
  Move(5,2,4,4);
  NotNULLd(5,1);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(2,3),App0("TNil"))));
  Rpush(j_13);
  r_123 :
  Epushd(6,9);
  MoveTop(6,1);
  goto g_11;
  g_11 :
  TestFunFC(r_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,5,6,1,1);
  goto h_11;
  h_11 :
  TestFunFC(w_0,&&s_13,Egetd(6,2));
  goto i_11;
  i_11 :
  TestFunFC(r_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,9,6,5,1);
  goto j_11;
  j_11 :
  TestFunFC(w_0,&&fail,Egetd(6,6));
  goto k_11;
  k_11 :
  TestFunFC(s_0,&&fail,Egetd(6,9));
  Rpush(r_13);
  goto s_123;
  s_13 :
  TestFunFC(l_0,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto l_11;
  l_11 :
  TestFunFC(r_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,9,6,5,1);
  goto m_11;
  m_11 :
  TestFunFC(l_0,&&fail,Egetd(6,6));
  MoveArg(6,7,6,6,0);
  MoveArg(6,8,6,6,1);
  goto n_11;
  n_11 :
  TestFunFC(s_0,&&fail,Egetd(6,9));
  Rpush(r_13);
  goto t_123;
  r_13 :
  goto q_13;
  t_123 :
  Epushd(7,5);
  NotNULLd(6,3);
  NotNULLd(6,7);
  NotNULLd(6,4);
  NotNULLd(6,8);
  Tset(App2("TCons",App2("TCons",Egetd(6,3),App2("TCons",Egetd(6,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(6,4),App2("TCons",Egetd(6,8),App0("TNil"))),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(x_13);
  goto r_123;
  x_13 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(7,1);
  goto d_11;
  d_11 :
  TestFunFC(r_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto e_11;
  e_11 :
  TestFunFC(r_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto f_11;
  f_11 :
  TestFunFC(s_0,&&fail,Egetd(7,5));
  Rpush(y_13);
  goto u_123;
  y_13 :
  goto w_13;
  u_123 :
  NotNULLd(7,2);
  NotNULLd(7,4);
  Tset(App2("Cons",Egetd(7,2),Egetd(7,4)));
  Return();
  w_13 :
  Epopd(7,5);
  Return();
  q_13 :
  goto k_13;
  s_123 :
  Tset(App0("Nil"));
  Return();
  k_13 :
  Epopd(6,9);
  Return();
  j_13 :
  MoveTop(5,4);
  Move(5,3,5,4);
  NotNULLd(5,3);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,2),App0("TNil"))));
  MoveTop(5,5);
  goto q_11;
  q_11 :
  TestFunFC(r_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto r_11;
  r_11 :
  TestFunFC(r_0,&&fail,Egetd(5,7));
  MoveArg(5,8,5,7,0);
  MoveArg(5,9,5,7,1);
  goto s_11;
  s_11 :
  TestFunFC(s_0,&&fail,Egetd(5,9));
  Rpush(a_14);
  goto w_123;
  a_14 :
  goto z_13;
  w_123 :
  Move(3,1,5,6);
  Move(3,2,5,8);
  Return();
  z_13 :
  Epopd(5,9);
  Return();
  g_13 :
  Epopd(4,4);
  Tpop();
  OneNextSon();
  AllBuild();
  goto e_13;
  f_13 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_14);
  goto p_123;
  c_14 :
  AllBuild();
  goto b_14;
  e_13 :
  Cpop();
  b_14 :
  Return();
  d_13 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  Ccall(_stratego_s_97);
  Epopd(3,2);
  Return();
  b_13 :
  Epopd(2,3);
  goto z_12;
  a_13 :
  goto d_14;
  z_12 :
  Cpop();
  d_14 :
  AllInit();
  e_14 :
  AllNextSon(&&g_14);
  Rpush(h_14);
  goto n_123;
  h_14 :
  goto e_14;
  g_14 :
  AllBuild();
  Return();
  y_12 :
  goto t_12;
  u_12 :
  goto i_14;
  t_12 :
  Cpop();
  i_14 :
  MoveTop(1,3);
  Move(1,2,1,3);
  NotNULLd(0,7);
  Tset(Egetd(0,7));
  Rpush(u_14);
  y_123 :
  Cpush(w_14);
  Ccall(_stratego_t_95);
  goto v_14;
  w_14 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto y_11;
  y_11 :
  TestFunFC(y_10,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  MoveArg(2,4,2,1,2);
  Rpush(z_14);
  goto z_123;
  z_14 :
  goto y_14;
  z_123 :
  Epushd(3,2);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Ccall(_stratego_q_97);
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,2);
  NotNULLd(2,3);
  NotNULLd(3,1);
  Tset(App3("SDef",Egetd(2,2),Egetd(2,3),Egetd(3,1)));
  Epopd(3,2);
  Return();
  y_14 :
  Epopd(2,4);
  OneNextSon();
  Rpush(b_15);
  goto y_123;
  b_15 :
  AllBuild();
  goto x_14;
  v_14 :
  Cpop();
  x_14 :
  Return();
  u_14 :
  MoveTop(1,6);
  Move(1,5,1,6);
  NotNULLd(0,13);
  Tset(Egetd(0,13));
  Cpush(d_15);
  Tdupl();
  Cpush(e_15);
  Tdupl();
  Epushd(2,1);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto b_12;
  b_12 :
  TestFunFC(w_0,&&fail,Egetd(2,1));
  Rpush(g_15);
  goto c_124;
  g_15 :
  goto f_15;
  c_124 :
  Return();
  f_15 :
  Epopd(2,1);
  Cpop();
  Crestore();
  Cjump();
  e_15 :
  Tpop();
  Rpush(i_15);
  d_124 :
  Cpush(k_15);
  Epushd(2,3);
  MoveTop(2,1);
  goto p_13;
  p_13 :
  TestFunFC(k_10,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(m_15);
  goto e_124;
  m_15 :
  goto l_15;
  e_124 :
  Epushd(3,2);
  Tdupl();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(y_15);
  f_124 :
  Cpush(a_16);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(4,4);
  MoveTop(4,1);
  goto o_13;
  o_13 :
  TestFunFC(y_10,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(c_16);
  goto g_124;
  c_16 :
  goto b_16;
  g_124 :
  Epushd(5,9);
  Move(2,2,4,2);
  Move(5,1,4,3);
  Move(5,2,4,4);
  NotNULLd(5,1);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(2,3),App0("TNil"))));
  Rpush(d_16);
  h_124 :
  Epushd(6,9);
  MoveTop(6,1);
  goto k_12;
  k_12 :
  TestFunFC(r_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,5,6,1,1);
  goto l_12;
  l_12 :
  TestFunFC(w_0,&&k_16,Egetd(6,2));
  goto m_12;
  m_12 :
  TestFunFC(r_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,9,6,5,1);
  goto n_12;
  n_12 :
  TestFunFC(w_0,&&fail,Egetd(6,6));
  goto o_12;
  o_12 :
  TestFunFC(s_0,&&fail,Egetd(6,9));
  Rpush(j_16);
  goto i_124;
  k_16 :
  TestFunFC(l_0,&&fail,Egetd(6,2));
  MoveArg(6,3,6,2,0);
  MoveArg(6,4,6,2,1);
  goto p_12;
  p_12 :
  TestFunFC(r_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,9,6,5,1);
  goto q_12;
  q_12 :
  TestFunFC(l_0,&&fail,Egetd(6,6));
  MoveArg(6,7,6,6,0);
  MoveArg(6,8,6,6,1);
  goto i_13;
  i_13 :
  TestFunFC(s_0,&&fail,Egetd(6,9));
  Rpush(j_16);
  goto j_124;
  j_16 :
  goto i_16;
  j_124 :
  Epushd(7,5);
  NotNULLd(6,3);
  NotNULLd(6,7);
  NotNULLd(6,4);
  NotNULLd(6,8);
  Tset(App2("TCons",App2("TCons",Egetd(6,3),App2("TCons",Egetd(6,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(6,4),App2("TCons",Egetd(6,8),App0("TNil"))),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(m_16);
  goto h_124;
  m_16 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(7,1);
  goto h_12;
  h_12 :
  TestFunFC(r_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto i_12;
  i_12 :
  TestFunFC(r_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto j_12;
  j_12 :
  TestFunFC(s_0,&&fail,Egetd(7,5));
  Rpush(n_16);
  goto k_124;
  n_16 :
  goto l_16;
  k_124 :
  NotNULLd(7,2);
  NotNULLd(7,4);
  Tset(App2("Cons",Egetd(7,2),Egetd(7,4)));
  Return();
  l_16 :
  Epopd(7,5);
  Return();
  i_16 :
  goto g_16;
  i_124 :
  Tset(App0("Nil"));
  Return();
  g_16 :
  Epopd(6,9);
  Return();
  d_16 :
  MoveTop(5,4);
  Move(5,3,5,4);
  NotNULLd(5,3);
  NotNULLd(5,2);
  Tset(App2("TCons",Egetd(5,3),App2("TCons",Egetd(5,2),App0("TNil"))));
  MoveTop(5,5);
  goto l_13;
  l_13 :
  TestFunFC(r_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto m_13;
  m_13 :
  TestFunFC(r_0,&&fail,Egetd(5,7));
  MoveArg(5,8,5,7,0);
  MoveArg(5,9,5,7,1);
  goto n_13;
  n_13 :
  TestFunFC(s_0,&&fail,Egetd(5,9));
  Rpush(p_16);
  goto m_124;
  p_16 :
  goto o_16;
  m_124 :
  Move(3,1,5,6);
  Move(3,2,5,8);
  Return();
  o_16 :
  Epopd(5,9);
  Return();
  b_16 :
  Epopd(4,4);
  Tpop();
  OneNextSon();
  AllBuild();
  goto z_15;
  a_16 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_16);
  goto f_124;
  s_16 :
  AllBuild();
  goto r_16;
  z_15 :
  Cpop();
  r_16 :
  Return();
  y_15 :
  Tpop();
  NotNULLd(3,1);
  NotNULLd(3,2);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(3,2),App0("TNil"))));
  Ccall(_stratego_s_97);
  Epopd(3,2);
  Return();
  l_15 :
  Epopd(2,3);
  goto j_15;
  k_15 :
  goto t_16;
  j_15 :
  Cpop();
  t_16 :
  AllInit();
  d_17 :
  AllNextSon(&&e_17);
  Rpush(f_17);
  goto d_124;
  f_17 :
  goto d_17;
  e_17 :
  AllBuild();
  Return();
  i_15 :
  goto c_15;
  d_15 :
  goto g_17;
  c_15 :
  Cpop();
  g_17 :
  MoveTop(1,8);
  Move(1,7,1,8);
  NotNULLd(1,5);
  NotNULLd(1,7);
  Tset(App2("TCons",Egetd(1,5),App2("TCons",Egetd(1,7),App0("TNil"))));
  MoveTop(1,9);
  goto t_13;
  t_13 :
  TestFunFC(r_0,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  MoveArg(1,11,1,9,1);
  goto u_13;
  u_13 :
  TestFunFC(r_0,&&fail,Egetd(1,11));
  MoveArg(1,12,1,11,0);
  MoveArg(1,13,1,11,1);
  goto v_13;
  v_13 :
  TestFunFC(s_0,&&fail,Egetd(1,13));
  Rpush(i_17);
  goto o_124;
  i_17 :
  goto h_17;
  o_124 :
  Epushd(2,1);
  NotNULLd(1,10);
  Tset(Egetd(1,10));
  Rpush(j_17);
  p_124 :
  Cpush(l_17);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_17);
  goto p_124;
  m_17 :
  AllBuild();
  goto k_17;
  l_17 :
  Ccall(_stratego_t_95);
  NotNULLd(1,12);
  Tset(Egetd(1,12));
  goto n_17;
  k_17 :
  Cpop();
  n_17 :
  Return();
  j_17 :
  MoveTop(2,1);
  Move(1,4,2,1);
  NotNULLd(0,4);
  NotNULLd(1,2);
  NotNULLd(1,4);
  Tset(App1("Specification",App2("Cons",App1("Signature",Egetd(0,4)),App2("Cons",App1("Rules",Egetd(1,2)),App2("Cons",App1("Strategies",Egetd(1,4)),App0("Nil"))))));
  Epopd(2,1);
  Return();
  h_17 :
  Cpush(p_17);
  Epushd(2,14);
  MoveTop(2,1);
  goto w_19;
  w_19 :
  TestFunFC(c_9,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  goto x_19;
  x_19 :
  TestFunFC(l_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,8,2,2,1);
  goto y_19;
  y_19 :
  TestFunFC(d_9,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  goto z_19;
  z_19 :
  TestFunFC(l_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,7,2,4,1);
  goto a_20;
  a_20 :
  TestFunFC(s_17,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  goto b_20;
  b_20 :
  TestFunFC(w_0,&&fail,Egetd(2,7));
  goto i_20;
  i_20 :
  TestFunFC(l_0,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  MoveArg(2,11,2,8,1);
  goto j_20;
  j_20 :
  TestFunFC(g_9,&&fail,Egetd(2,9));
  MoveArg(2,10,2,9,0);
  goto k_20;
  k_20 :
  TestFunFC(l_0,&&fail,Egetd(2,11));
  MoveArg(2,12,2,11,0);
  MoveArg(2,14,2,11,1);
  goto l_20;
  l_20 :
  TestFunFC(j_9,&&fail,Egetd(2,12));
  MoveArg(2,13,2,12,0);
  goto m_20;
  m_20 :
  TestFunFC(w_0,&&fail,Egetd(2,14));
  Rpush(r_17);
  goto r_124;
  r_17 :
  goto q_17;
  r_124 :
  Tdupl();
  Epushd(3,5);
  NotNULLd(2,10);
  NotNULLd(2,13);
  Tset(App2("TCons",Egetd(2,10),App2("TCons",Egetd(2,13),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(w_17);
  s_124 :
  Cpush(y_17);
  Ccall(_stratego_t_95);
  goto x_17;
  y_17 :
  Ccontinue(z_17);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(4,4);
  MoveTop(4,1);
  goto f_16;
  f_16 :
  TestFunFC(f_18,&&e_18,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(d_18);
  goto t_124;
  e_18 :
  TestFunFC(g_18,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(d_18);
  goto m_125;
  d_18 :
  goto b_18;
  m_125 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  NotNULLd(4,2);
  Tset(App2("Cons",ATmakeString("warning: in definition "),App2("Cons",Egetd(4,2),App2("Cons",ATmakeString(": "),App0("Nil")))));
  Ccall(_stratego_u_97);
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(h_18);
  o_125 :
  Cpush(j_18);
  Epushd(7,3);
  MoveTop(7,1);
  goto e_16;
  e_16 :
  TestFunFC(k_10,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(l_18);
  goto p_125;
  l_18 :
  goto k_18;
  p_125 :
  Tdupl();
  Epushd(8,2);
  Cpush(m_18);
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(o_18);
  q_125 :
  Cpush(q_18);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(9,1);
  MatchFun("OpDecl",2);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MoveTop(10,1);
  Move(7,2,10,1);
  Epopd(10,1);
  OneNextSon();
  Epushd(10,3);
  MoveTop(10,1);
  goto h_15;
  h_15 :
  TestFunFC(g_19,&&a_19,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  Rpush(z_18);
  goto s_125;
  a_19 :
  TestFunFC(h_19,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(z_18);
  goto u_125;
  z_18 :
  goto y_18;
  u_125 :
  Move(9,1,10,2);
  Return();
  y_18 :
  goto x_18;
  s_125 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(9,1);
  Tpop();
  Return();
  x_18 :
  Epopd(10,3);
  AllBuild();
  NotNULLd(7,3);
  NotNULLd(9,1);
  Tset(App2("TCons",Egetd(7,3),App2("TCons",Egetd(9,1),App0("TNil"))));
  Rpush(i_19);
  v_125 :
  Epushd(10,9);
  MoveTop(10,1);
  goto q_15;
  q_15 :
  TestFunFC(r_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,5,10,1,1);
  goto r_15;
  r_15 :
  TestFunFC(w_0,&&o_19,Egetd(10,2));
  goto s_15;
  s_15 :
  TestFunFC(r_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto t_15;
  t_15 :
  TestFunFC(w_0,&&fail,Egetd(10,6));
  goto u_15;
  u_15 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(l_19);
  goto w_125;
  o_19 :
  TestFunFC(l_0,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto v_15;
  v_15 :
  TestFunFC(r_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto w_15;
  w_15 :
  TestFunFC(l_0,&&fail,Egetd(10,6));
  MoveArg(10,7,10,6,0);
  MoveArg(10,8,10,6,1);
  goto x_15;
  x_15 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(l_19);
  goto x_125;
  l_19 :
  goto k_19;
  x_125 :
  Epushd(11,5);
  NotNULLd(10,3);
  NotNULLd(10,7);
  NotNULLd(10,4);
  NotNULLd(10,8);
  Tset(App2("TCons",App2("TCons",Egetd(10,3),App2("TCons",Egetd(10,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(10,4),App2("TCons",Egetd(10,8),App0("TNil"))),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(c_20);
  goto v_125;
  c_20 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(11,1);
  goto n_15;
  n_15 :
  TestFunFC(r_0,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  goto o_15;
  o_15 :
  TestFunFC(r_0,&&fail,Egetd(11,3));
  MoveArg(11,4,11,3,0);
  MoveArg(11,5,11,3,1);
  goto p_15;
  p_15 :
  TestFunFC(s_0,&&fail,Egetd(11,5));
  Rpush(d_20);
  goto y_125;
  d_20 :
  goto q_19;
  y_125 :
  NotNULLd(11,2);
  NotNULLd(11,4);
  Tset(App2("Cons",Egetd(11,2),Egetd(11,4)));
  Return();
  q_19 :
  Epopd(11,5);
  Return();
  k_19 :
  goto j_19;
  w_125 :
  Tset(App0("Nil"));
  Return();
  j_19 :
  Epopd(10,9);
  Return();
  i_19 :
  Epopd(9,1);
  OneNextSon();
  AllBuild();
  goto p_18;
  q_18 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_20);
  goto q_125;
  f_20 :
  AllBuild();
  goto e_20;
  p_18 :
  Cpop();
  e_20 :
  Return();
  o_18 :
  Cpop();
  Crestore();
  Cjump();
  m_18 :
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Ccall(_stratego_x_97);
  Ccall(_stratego_z_97);
  MoveTop(8,2);
  Move(8,1,8,2);
  NotNULLd(7,2);
  NotNULLd(8,1);
  Tset(App2("Cons",ATmakeString("constructor "),App2("Cons",Egetd(7,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(8,1),App2("Cons",ATmakeString(" not declared"),App0("Nil")))))));
  Ccall(_stratego_u_97);
  Tdupl();
  Epushd(9,2);
  MoveTop(9,1);
  Tset(App0("stderr"));
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))));
  Tdupl();
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))));
  MoveTop(9,2);
  Tpop();
  NotNULLd(9,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(9,2),App0("TNil"))));
  Ccall(_stratego_y_95);
  Epopd(9,2);
  Tpop();
  Epopd(8,2);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("Op",Egetd(7,2),Egetd(7,3)));
  AllInit();
  g_20 :
  AllNextSon(&&h_20);
  Cpush(x_20);
  Rpush(z_20);
  goto o_125;
  z_20 :
  goto u_20;
  x_20 :
  goto a_21;
  u_20 :
  Cpop();
  a_21 :
  goto g_20;
  h_20 :
  AllBuild();
  Return();
  k_18 :
  Epopd(7,3);
  goto i_18;
  j_18 :
  IsAppl();
  SomeInit();
  c_21 :
  SomeNextSon(&&d_21);
  Cpush(c_21);
  Rpush(e_21);
  goto o_125;
  e_21 :
  Cpop();
  CounterOK();
  goto c_21;
  d_21 :
  SomeBuild();
  goto b_21;
  i_18 :
  Cpop();
  b_21 :
  Return();
  h_18 :
  Epopd(6,1);
  Tpop();
  NotNULLd(4,2);
  NotNULLd(4,3);
  NotNULLd(4,4);
  Tset(App3("SDef",Egetd(4,2),Egetd(4,3),Egetd(4,4)));
  Epopd(5,1);
  Return();
  b_18 :
  goto a_18;
  t_124 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  NotNULLd(4,2);
  Tset(App2("Cons",ATmakeString("warning: in rule "),App2("Cons",Egetd(4,2),App2("Cons",ATmakeString(": "),App0("Nil")))));
  Ccall(_stratego_u_97);
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(f_21);
  v_124 :
  Cpush(h_21);
  Epushd(7,3);
  MoveTop(7,1);
  goto a_15;
  a_15 :
  TestFunFC(k_10,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(j_21);
  goto w_124;
  j_21 :
  goto i_21;
  w_124 :
  Tdupl();
  Epushd(8,2);
  Cpush(k_21);
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(l_21);
  x_124 :
  Cpush(w_21);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(9,1);
  MatchFun("OpDecl",2);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MoveTop(10,1);
  Move(7,2,10,1);
  Epopd(10,1);
  OneNextSon();
  Epushd(10,3);
  MoveTop(10,1);
  goto f_14;
  f_14 :
  TestFunFC(g_19,&&r_22,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  Rpush(z_21);
  goto z_124;
  r_22 :
  TestFunFC(h_19,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(z_21);
  goto b_125;
  z_21 :
  goto y_21;
  b_125 :
  Move(9,1,10,2);
  Return();
  y_21 :
  goto x_21;
  z_124 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(9,1);
  Tpop();
  Return();
  x_21 :
  Epopd(10,3);
  AllBuild();
  NotNULLd(7,3);
  NotNULLd(9,1);
  Tset(App2("TCons",Egetd(7,3),App2("TCons",Egetd(9,1),App0("TNil"))));
  Rpush(y_22);
  c_125 :
  Epushd(10,9);
  MoveTop(10,1);
  goto m_14;
  m_14 :
  TestFunFC(r_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,5,10,1,1);
  goto n_14;
  n_14 :
  TestFunFC(w_0,&&c_23,Egetd(10,2));
  goto o_14;
  o_14 :
  TestFunFC(r_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto p_14;
  p_14 :
  TestFunFC(w_0,&&fail,Egetd(10,6));
  goto q_14;
  q_14 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(b_23);
  goto d_125;
  c_23 :
  TestFunFC(l_0,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto r_14;
  r_14 :
  TestFunFC(r_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto s_14;
  s_14 :
  TestFunFC(l_0,&&fail,Egetd(10,6));
  MoveArg(10,7,10,6,0);
  MoveArg(10,8,10,6,1);
  goto t_14;
  t_14 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(b_23);
  goto e_125;
  b_23 :
  goto a_23;
  e_125 :
  Epushd(11,5);
  NotNULLd(10,3);
  NotNULLd(10,7);
  NotNULLd(10,4);
  NotNULLd(10,8);
  Tset(App2("TCons",App2("TCons",Egetd(10,3),App2("TCons",Egetd(10,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(10,4),App2("TCons",Egetd(10,8),App0("TNil"))),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(e_23);
  goto c_125;
  e_23 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(11,1);
  goto j_14;
  j_14 :
  TestFunFC(r_0,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  goto k_14;
  k_14 :
  TestFunFC(r_0,&&fail,Egetd(11,3));
  MoveArg(11,4,11,3,0);
  MoveArg(11,5,11,3,1);
  goto l_14;
  l_14 :
  TestFunFC(s_0,&&fail,Egetd(11,5));
  Rpush(g_23);
  goto f_125;
  g_23 :
  goto d_23;
  f_125 :
  NotNULLd(11,2);
  NotNULLd(11,4);
  Tset(App2("Cons",Egetd(11,2),Egetd(11,4)));
  Return();
  d_23 :
  Epopd(11,5);
  Return();
  a_23 :
  goto z_22;
  d_125 :
  Tset(App0("Nil"));
  Return();
  z_22 :
  Epopd(10,9);
  Return();
  y_22 :
  Epopd(9,1);
  OneNextSon();
  AllBuild();
  goto v_21;
  w_21 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_23);
  goto x_124;
  i_23 :
  AllBuild();
  goto h_23;
  v_21 :
  Cpop();
  h_23 :
  Return();
  l_21 :
  Cpop();
  Crestore();
  Cjump();
  k_21 :
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Ccall(_stratego_x_97);
  Ccall(_stratego_z_97);
  MoveTop(8,2);
  Move(8,1,8,2);
  NotNULLd(7,2);
  NotNULLd(8,1);
  Tset(App2("Cons",ATmakeString("constructor "),App2("Cons",Egetd(7,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(8,1),App2("Cons",ATmakeString(" not declared"),App0("Nil")))))));
  Ccall(_stratego_u_97);
  Tdupl();
  Epushd(9,2);
  MoveTop(9,1);
  Tset(App0("stderr"));
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))));
  Tdupl();
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))));
  MoveTop(9,2);
  Tpop();
  NotNULLd(9,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(9,2),App0("TNil"))));
  Ccall(_stratego_y_95);
  Epopd(9,2);
  Tpop();
  Epopd(8,2);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("Op",Egetd(7,2),Egetd(7,3)));
  AllInit();
  j_23 :
  AllNextSon(&&k_23);
  Cpush(o_23);
  Rpush(p_23);
  goto v_124;
  p_23 :
  goto m_23;
  o_23 :
  goto q_23;
  m_23 :
  Cpop();
  q_23 :
  goto j_23;
  k_23 :
  AllBuild();
  Return();
  i_21 :
  Epopd(7,3);
  goto g_21;
  h_21 :
  IsAppl();
  SomeInit();
  s_23 :
  SomeNextSon(&&t_23);
  Cpush(s_23);
  Rpush(u_23);
  goto v_124;
  u_23 :
  Cpop();
  CounterOK();
  goto s_23;
  t_23 :
  SomeBuild();
  goto r_23;
  g_21 :
  Cpop();
  r_23 :
  Return();
  f_21 :
  Epopd(6,1);
  Tpop();
  NotNULLd(4,2);
  NotNULLd(4,3);
  NotNULLd(4,4);
  Tset(App3("RDef",Egetd(4,2),Egetd(4,3),Egetd(4,4)));
  Epopd(5,1);
  Return();
  a_18 :
  Epopd(4,4);
  OneNextSon();
  Rpush(v_23);
  goto s_124;
  v_23 :
  AllBuild();
  goto x_17;
  z_17 :
  Epushd(4,3);
  MoveTop(4,1);
  goto h_16;
  h_16 :
  TestFunFC(l_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(z_23);
  goto f_126;
  z_23 :
  goto y_23;
  f_126 :
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(a_24);
  goto s_124;
  a_24 :
  Return();
  y_23 :
  Epopd(4,3);
  goto x_23;
  x_17 :
  Cpop();
  x_23 :
  Return();
  w_17 :
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(b_24);
  g_126 :
  Cpush(d_24);
  Ccall(_stratego_t_95);
  goto c_24;
  d_24 :
  Ccontinue(e_24);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(4,4);
  MoveTop(4,1);
  goto n_19;
  n_19 :
  TestFunFC(f_18,&&i_24,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(h_24);
  goto h_126;
  i_24 :
  TestFunFC(g_18,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  MoveArg(4,4,4,1,2);
  Rpush(h_24);
  goto a_127;
  h_24 :
  goto g_24;
  a_127 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  NotNULLd(4,2);
  Tset(App2("Cons",ATmakeString("warning: in definition "),App2("Cons",Egetd(4,2),App2("Cons",ATmakeString(": "),App0("Nil")))));
  Ccall(_stratego_u_97);
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(j_24);
  c_127 :
  Cpush(l_24);
  Epushd(7,3);
  MoveTop(7,1);
  goto m_19;
  m_19 :
  TestFunFC(k_10,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(n_24);
  goto d_127;
  n_24 :
  goto m_24;
  d_127 :
  Tdupl();
  Epushd(8,2);
  Cpush(o_24);
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(p_24);
  e_127 :
  Cpush(r_24);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(9,1);
  MatchFun("OpDecl",2);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MoveTop(10,1);
  Move(7,2,10,1);
  Epopd(10,1);
  OneNextSon();
  Epushd(10,3);
  MoveTop(10,1);
  goto n_18;
  n_18 :
  TestFunFC(g_19,&&z_24,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  Rpush(w_24);
  goto g_127;
  z_24 :
  TestFunFC(h_19,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(w_24);
  goto i_127;
  w_24 :
  goto t_24;
  i_127 :
  Move(9,1,10,2);
  Return();
  t_24 :
  goto s_24;
  g_127 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(9,1);
  Tpop();
  Return();
  s_24 :
  Epopd(10,3);
  AllBuild();
  NotNULLd(7,3);
  NotNULLd(9,1);
  Tset(App2("TCons",Egetd(7,3),App2("TCons",Egetd(9,1),App0("TNil"))));
  Rpush(b_25);
  j_127 :
  Epushd(10,9);
  MoveTop(10,1);
  goto u_18;
  u_18 :
  TestFunFC(r_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,5,10,1,1);
  goto v_18;
  v_18 :
  TestFunFC(w_0,&&h_25,Egetd(10,2));
  goto w_18;
  w_18 :
  TestFunFC(r_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto b_19;
  b_19 :
  TestFunFC(w_0,&&fail,Egetd(10,6));
  goto c_19;
  c_19 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(g_25);
  goto k_127;
  h_25 :
  TestFunFC(l_0,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto d_19;
  d_19 :
  TestFunFC(r_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto e_19;
  e_19 :
  TestFunFC(l_0,&&fail,Egetd(10,6));
  MoveArg(10,7,10,6,0);
  MoveArg(10,8,10,6,1);
  goto f_19;
  f_19 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(g_25);
  goto l_127;
  g_25 :
  goto f_25;
  l_127 :
  Epushd(11,5);
  NotNULLd(10,3);
  NotNULLd(10,7);
  NotNULLd(10,4);
  NotNULLd(10,8);
  Tset(App2("TCons",App2("TCons",Egetd(10,3),App2("TCons",Egetd(10,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(10,4),App2("TCons",Egetd(10,8),App0("TNil"))),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(l_25);
  goto j_127;
  l_25 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(11,1);
  goto r_18;
  r_18 :
  TestFunFC(r_0,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  goto s_18;
  s_18 :
  TestFunFC(r_0,&&fail,Egetd(11,3));
  MoveArg(11,4,11,3,0);
  MoveArg(11,5,11,3,1);
  goto t_18;
  t_18 :
  TestFunFC(s_0,&&fail,Egetd(11,5));
  Rpush(m_25);
  goto m_127;
  m_25 :
  goto k_25;
  m_127 :
  NotNULLd(11,2);
  NotNULLd(11,4);
  Tset(App2("Cons",Egetd(11,2),Egetd(11,4)));
  Return();
  k_25 :
  Epopd(11,5);
  Return();
  f_25 :
  goto e_25;
  k_127 :
  Tset(App0("Nil"));
  Return();
  e_25 :
  Epopd(10,9);
  Return();
  b_25 :
  Epopd(9,1);
  OneNextSon();
  AllBuild();
  goto q_24;
  r_24 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_25);
  goto e_127;
  o_25 :
  AllBuild();
  goto n_25;
  q_24 :
  Cpop();
  n_25 :
  Return();
  p_24 :
  Cpop();
  Crestore();
  Cjump();
  o_24 :
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Ccall(_stratego_x_97);
  Ccall(_stratego_z_97);
  MoveTop(8,2);
  Move(8,1,8,2);
  NotNULLd(7,2);
  NotNULLd(8,1);
  Tset(App2("Cons",ATmakeString("constructor "),App2("Cons",Egetd(7,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(8,1),App2("Cons",ATmakeString(" not declared"),App0("Nil")))))));
  Ccall(_stratego_u_97);
  Tdupl();
  Epushd(9,2);
  MoveTop(9,1);
  Tset(App0("stderr"));
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))));
  Tdupl();
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))));
  MoveTop(9,2);
  Tpop();
  NotNULLd(9,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(9,2),App0("TNil"))));
  Ccall(_stratego_y_95);
  Epopd(9,2);
  Tpop();
  Epopd(8,2);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("Op",Egetd(7,2),Egetd(7,3)));
  AllInit();
  t_25 :
  AllNextSon(&&u_25);
  Cpush(w_25);
  Rpush(x_25);
  goto c_127;
  x_25 :
  goto v_25;
  w_25 :
  goto j_26;
  v_25 :
  Cpop();
  j_26 :
  goto t_25;
  u_25 :
  AllBuild();
  Return();
  m_24 :
  Epopd(7,3);
  goto k_24;
  l_24 :
  IsAppl();
  SomeInit();
  p_26 :
  SomeNextSon(&&x_26);
  Cpush(p_26);
  Rpush(y_26);
  goto c_127;
  y_26 :
  Cpop();
  CounterOK();
  goto p_26;
  x_26 :
  SomeBuild();
  goto o_26;
  k_24 :
  Cpop();
  o_26 :
  Return();
  j_24 :
  Epopd(6,1);
  Tpop();
  NotNULLd(4,2);
  NotNULLd(4,3);
  NotNULLd(4,4);
  Tset(App3("SDef",Egetd(4,2),Egetd(4,3),Egetd(4,4)));
  Epopd(5,1);
  Return();
  g_24 :
  goto f_24;
  h_126 :
  Epushd(5,1);
  Tdupl();
  Epushd(6,1);
  NotNULLd(4,2);
  Tset(App2("Cons",ATmakeString("warning: in rule "),App2("Cons",Egetd(4,2),App2("Cons",ATmakeString(": "),App0("Nil")))));
  Ccall(_stratego_u_97);
  MoveTop(6,1);
  Move(5,1,6,1);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(b_27);
  j_126 :
  Cpush(e_27);
  Epushd(7,3);
  MoveTop(7,1);
  goto c_18;
  c_18 :
  TestFunFC(k_10,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(g_27);
  goto k_126;
  g_27 :
  goto f_27;
  k_126 :
  Tdupl();
  Epushd(8,2);
  Cpush(h_27);
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(i_27);
  l_126 :
  Cpush(n_27);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(9,1);
  MatchFun("OpDecl",2);
  TravInit();
  OneNextSon();
  Epushd(10,1);
  MoveTop(10,1);
  Move(7,2,10,1);
  Epopd(10,1);
  OneNextSon();
  Epushd(10,3);
  MoveTop(10,1);
  goto q_16;
  q_16 :
  TestFunFC(g_19,&&r_27,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  Rpush(q_27);
  goto n_126;
  r_27 :
  TestFunFC(h_19,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(q_27);
  goto p_126;
  q_27 :
  goto p_27;
  p_126 :
  Move(9,1,10,2);
  Return();
  p_27 :
  goto o_27;
  n_126 :
  Tset(App0("Nil"));
  Tdupl();
  Tset(App0("Nil"));
  MoveTop(9,1);
  Tpop();
  Return();
  o_27 :
  Epopd(10,3);
  AllBuild();
  NotNULLd(7,3);
  NotNULLd(9,1);
  Tset(App2("TCons",Egetd(7,3),App2("TCons",Egetd(9,1),App0("TNil"))));
  Rpush(y_27);
  q_126 :
  Epushd(10,9);
  MoveTop(10,1);
  goto x_16;
  x_16 :
  TestFunFC(r_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,5,10,1,1);
  goto y_16;
  y_16 :
  TestFunFC(w_0,&&f_28,Egetd(10,2));
  goto z_16;
  z_16 :
  TestFunFC(r_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto a_17;
  a_17 :
  TestFunFC(w_0,&&fail,Egetd(10,6));
  goto b_17;
  b_17 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(e_28);
  goto r_126;
  f_28 :
  TestFunFC(l_0,&&fail,Egetd(10,2));
  MoveArg(10,3,10,2,0);
  MoveArg(10,4,10,2,1);
  goto c_17;
  c_17 :
  TestFunFC(r_0,&&fail,Egetd(10,5));
  MoveArg(10,6,10,5,0);
  MoveArg(10,9,10,5,1);
  goto t_17;
  t_17 :
  TestFunFC(l_0,&&fail,Egetd(10,6));
  MoveArg(10,7,10,6,0);
  MoveArg(10,8,10,6,1);
  goto u_17;
  u_17 :
  TestFunFC(s_0,&&fail,Egetd(10,9));
  Rpush(e_28);
  goto s_126;
  e_28 :
  goto d_28;
  s_126 :
  Epushd(11,5);
  NotNULLd(10,3);
  NotNULLd(10,7);
  NotNULLd(10,4);
  NotNULLd(10,8);
  Tset(App2("TCons",App2("TCons",Egetd(10,3),App2("TCons",Egetd(10,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(10,4),App2("TCons",Egetd(10,8),App0("TNil"))),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(h_28);
  goto q_126;
  h_28 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(11,1);
  goto u_16;
  u_16 :
  TestFunFC(r_0,&&fail,Egetd(11,1));
  MoveArg(11,2,11,1,0);
  MoveArg(11,3,11,1,1);
  goto v_16;
  v_16 :
  TestFunFC(r_0,&&fail,Egetd(11,3));
  MoveArg(11,4,11,3,0);
  MoveArg(11,5,11,3,1);
  goto w_16;
  w_16 :
  TestFunFC(s_0,&&fail,Egetd(11,5));
  Rpush(i_28);
  goto t_126;
  i_28 :
  goto g_28;
  t_126 :
  NotNULLd(11,2);
  NotNULLd(11,4);
  Tset(App2("Cons",Egetd(11,2),Egetd(11,4)));
  Return();
  g_28 :
  Epopd(11,5);
  Return();
  d_28 :
  goto z_27;
  r_126 :
  Tset(App0("Nil"));
  Return();
  z_27 :
  Epopd(10,9);
  Return();
  y_27 :
  Epopd(9,1);
  OneNextSon();
  AllBuild();
  goto m_27;
  n_27 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_28);
  goto l_126;
  q_28 :
  AllBuild();
  goto p_28;
  m_27 :
  Cpop();
  p_28 :
  Return();
  i_27 :
  Cpop();
  Crestore();
  Cjump();
  h_27 :
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Ccall(_stratego_x_97);
  Ccall(_stratego_z_97);
  MoveTop(8,2);
  Move(8,1,8,2);
  NotNULLd(7,2);
  NotNULLd(8,1);
  Tset(App2("Cons",ATmakeString("constructor "),App2("Cons",Egetd(7,2),App2("Cons",ATmakeString("/"),App2("Cons",Egetd(8,1),App2("Cons",ATmakeString(" not declared"),App0("Nil")))))));
  Ccall(_stratego_u_97);
  Tdupl();
  Epushd(9,2);
  MoveTop(9,1);
  Tset(App0("stderr"));
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))));
  Tdupl();
  NotNULLd(5,1);
  NotNULLd(9,1);
  Tset(App2("Cons",Egetd(5,1),App2("Cons",Egetd(9,1),App0("Nil"))));
  MoveTop(9,2);
  Tpop();
  NotNULLd(9,2);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(9,2),App0("TNil"))));
  Ccall(_stratego_y_95);
  Epopd(9,2);
  Tpop();
  Epopd(8,2);
  Tpop();
  NotNULLd(7,2);
  NotNULLd(7,3);
  Tset(App2("Op",Egetd(7,2),Egetd(7,3)));
  AllInit();
  r_28 :
  AllNextSon(&&s_28);
  Cpush(a_29);
  Rpush(i_29);
  goto j_126;
  i_29 :
  goto v_28;
  a_29 :
  goto j_29;
  v_28 :
  Cpop();
  j_29 :
  goto r_28;
  s_28 :
  AllBuild();
  Return();
  f_27 :
  Epopd(7,3);
  goto d_27;
  e_27 :
  IsAppl();
  SomeInit();
  r_29 :
  SomeNextSon(&&s_29);
  Cpush(r_29);
  Rpush(t_29);
  goto j_126;
  t_29 :
  Cpop();
  CounterOK();
  goto r_29;
  s_29 :
  SomeBuild();
  goto n_29;
  d_27 :
  Cpop();
  n_29 :
  Return();
  b_27 :
  Epopd(6,1);
  Tpop();
  NotNULLd(4,2);
  NotNULLd(4,3);
  NotNULLd(4,4);
  Tset(App3("RDef",Egetd(4,2),Egetd(4,3),Egetd(4,4)));
  Epopd(5,1);
  Return();
  f_24 :
  Epopd(4,4);
  OneNextSon();
  Rpush(f_30);
  goto g_126;
  f_30 :
  AllBuild();
  goto c_24;
  e_24 :
  Epushd(4,3);
  MoveTop(4,1);
  goto p_19;
  p_19 :
  TestFunFC(l_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(p_30);
  goto t_127;
  p_30 :
  goto o_30;
  t_127 :
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(s_30);
  goto g_126;
  s_30 :
  Return();
  o_30 :
  Epopd(4,3);
  goto g_30;
  c_24 :
  Cpop();
  g_30 :
  Return();
  b_24 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto r_19;
  r_19 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto s_19;
  s_19 :
  TestFunFC(w_0,&&fail,Egetd(3,2));
  goto t_19;
  t_19 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto u_19;
  u_19 :
  TestFunFC(w_0,&&fail,Egetd(3,4));
  goto v_19;
  v_19 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(u_30);
  goto u_127;
  u_30 :
  goto v_17;
  u_127 :
  Return();
  v_17 :
  Epopd(3,5);
  Tpop();
  NotNULLd(2,6);
  NotNULLd(2,10);
  NotNULLd(2,13);
  Tset(App1("Specification",App2("Cons",App1("Signature",App2("Cons",App1("Operations",Egetd(2,6)),App0("Nil"))),App2("Cons",App1("Rules",Egetd(2,10)),App2("Cons",App1("Strategies",Egetd(2,13)),App0("Nil"))))));
  Return();
  q_17 :
  Epopd(2,14);
  goto o_17;
  p_17 :
  goto w_30;
  o_17 :
  Cpop();
  w_30 :
  Epopd(1,13);
  Return();
  a_9 :
  Epopd(0,14);
ENDPROC

PROC(_stratego_k_96)
  Epushd(0,2);
  MoveTop(0,1);
  goto x_22;
  x_22 :
  TestFunFC(c_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(a_31);
  goto v_127;
  a_31 :
  goto y_30;
  v_127 :
  Epushd(1,9);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(b_31);
  w_127 :
  Cpush(d_31);
  Ccall(_stratego_t_95);
  goto c_31;
  d_31 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_l_96);
  OneNextSon();
  Rpush(f_31);
  goto w_127;
  f_31 :
  AllBuild();
  goto e_31;
  c_31 :
  Cpop();
  e_31 :
  Return();
  b_31 :
  Rpush(h_31);
  x_127 :
  Cpush(j_31);
  Ccall(_stratego_t_95);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))))));
  goto i_31;
  j_31 :
  Epushd(2,3);
  MoveTop(2,1);
  goto q_22;
  q_22 :
  TestFunFC(l_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(m_31);
  goto y_127;
  m_31 :
  goto l_31;
  y_127 :
  Epushd(3,21);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(o_31);
  goto x_127;
  o_31 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto d_22;
  d_22 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,11,3,1,1);
  goto e_22;
  e_22 :
  TestFunFC(r_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,4,3,2,1);
  goto f_22;
  f_22 :
  TestFunFC(r_0,&&fail,Egetd(3,4));
  MoveArg(3,5,3,4,0);
  MoveArg(3,6,3,4,1);
  goto g_22;
  g_22 :
  TestFunFC(r_0,&&fail,Egetd(3,6));
  MoveArg(3,7,3,6,0);
  MoveArg(3,8,3,6,1);
  goto h_22;
  h_22 :
  TestFunFC(r_0,&&fail,Egetd(3,8));
  MoveArg(3,9,3,8,0);
  MoveArg(3,10,3,8,1);
  goto i_22;
  i_22 :
  TestFunFC(s_0,&&fail,Egetd(3,10));
  goto j_22;
  j_22 :
  TestFunFC(r_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,21,3,11,1);
  goto k_22;
  k_22 :
  TestFunFC(r_0,&&fail,Egetd(3,12));
  MoveArg(3,13,3,12,0);
  MoveArg(3,14,3,12,1);
  goto l_22;
  l_22 :
  TestFunFC(r_0,&&fail,Egetd(3,14));
  MoveArg(3,15,3,14,0);
  MoveArg(3,16,3,14,1);
  goto m_22;
  m_22 :
  TestFunFC(r_0,&&fail,Egetd(3,16));
  MoveArg(3,17,3,16,0);
  MoveArg(3,18,3,16,1);
  goto n_22;
  n_22 :
  TestFunFC(r_0,&&fail,Egetd(3,18));
  MoveArg(3,19,3,18,0);
  MoveArg(3,20,3,18,1);
  goto o_22;
  o_22 :
  TestFunFC(s_0,&&fail,Egetd(3,20));
  goto p_22;
  p_22 :
  TestFunFC(s_0,&&fail,Egetd(3,21));
  Rpush(p_31);
  goto z_127;
  p_31 :
  goto n_31;
  z_127 :
  Epushd(4,5);
  NotNULLd(3,3);
  NotNULLd(3,13);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(3,13),App0("TNil"))));
  MoveTop(4,1);
  goto a_22;
  a_22 :
  TestFunFC(r_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto b_22;
  b_22 :
  TestFunFC(r_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto c_22;
  c_22 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(r_31);
  goto a_128;
  r_31 :
  goto q_31;
  a_128 :
  Epushd(5,7);
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Rpush(s_31);
  b_128 :
  Cpush(u_31);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_31);
  goto b_128;
  v_31 :
  AllBuild();
  goto t_31;
  u_31 :
  Ccall(_stratego_t_95);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  goto w_31;
  t_31 :
  Cpop();
  w_31 :
  Return();
  s_31 :
  MoveTop(5,2);
  Move(5,1,5,2);
  NotNULLd(3,5);
  NotNULLd(3,15);
  Tset(App2("TCons",Egetd(3,5),App2("TCons",Egetd(3,15),App0("TNil"))));
  MoveTop(5,3);
  goto s_21;
  s_21 :
  TestFunFC(r_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto t_21;
  t_21 :
  TestFunFC(r_0,&&fail,Egetd(5,5));
  MoveArg(5,6,5,5,0);
  MoveArg(5,7,5,5,1);
  goto u_21;
  u_21 :
  TestFunFC(s_0,&&fail,Egetd(5,7));
  Rpush(b_32);
  goto d_128;
  b_32 :
  goto a_32;
  d_128 :
  Epushd(6,7);
  NotNULLd(5,4);
  Tset(Egetd(5,4));
  Rpush(j_32);
  e_128 :
  Cpush(m_32);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_32);
  goto e_128;
  n_32 :
  AllBuild();
  goto l_32;
  m_32 :
  Ccall(_stratego_t_95);
  NotNULLd(5,6);
  Tset(Egetd(5,6));
  goto o_32;
  l_32 :
  Cpop();
  o_32 :
  Return();
  j_32 :
  MoveTop(6,2);
  Move(6,1,6,2);
  NotNULLd(3,7);
  NotNULLd(3,17);
  Tset(App2("TCons",Egetd(3,7),App2("TCons",Egetd(3,17),App0("TNil"))));
  MoveTop(6,3);
  goto p_21;
  p_21 :
  TestFunFC(r_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto q_21;
  q_21 :
  TestFunFC(r_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto r_21;
  r_21 :
  TestFunFC(s_0,&&fail,Egetd(6,7));
  Rpush(q_32);
  goto g_128;
  q_32 :
  goto p_32;
  g_128 :
  Epushd(7,7);
  NotNULLd(6,4);
  Tset(Egetd(6,4));
  Rpush(r_32);
  h_128 :
  Cpush(t_32);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_32);
  goto h_128;
  u_32 :
  AllBuild();
  goto s_32;
  t_32 :
  Ccall(_stratego_t_95);
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  goto x_32;
  s_32 :
  Cpop();
  x_32 :
  Return();
  r_32 :
  MoveTop(7,2);
  Move(7,1,7,2);
  NotNULLd(3,9);
  NotNULLd(3,19);
  Tset(App2("TCons",Egetd(3,9),App2("TCons",Egetd(3,19),App0("TNil"))));
  MoveTop(7,3);
  goto m_21;
  m_21 :
  TestFunFC(r_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto n_21;
  n_21 :
  TestFunFC(r_0,&&fail,Egetd(7,5));
  MoveArg(7,6,7,5,0);
  MoveArg(7,7,7,5,1);
  goto o_21;
  o_21 :
  TestFunFC(s_0,&&fail,Egetd(7,7));
  Rpush(z_32);
  goto j_128;
  z_32 :
  goto y_32;
  j_128 :
  Epushd(8,2);
  NotNULLd(7,4);
  Tset(Egetd(7,4));
  Rpush(a_33);
  k_128 :
  Cpush(e_33);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_33);
  goto k_128;
  f_33 :
  AllBuild();
  goto d_33;
  e_33 :
  Ccall(_stratego_t_95);
  NotNULLd(7,6);
  Tset(Egetd(7,6));
  goto g_33;
  d_33 :
  Cpop();
  g_33 :
  Return();
  a_33 :
  MoveTop(8,2);
  Move(8,1,8,2);
  NotNULLd(5,1);
  NotNULLd(6,1);
  NotNULLd(7,1);
  NotNULLd(8,1);
  Tset(App2("TCons",Egetd(5,1),App2("TCons",Egetd(6,1),App2("TCons",Egetd(7,1),App2("TCons",Egetd(8,1),App0("TNil"))))));
  Epopd(8,2);
  Return();
  y_32 :
  Epopd(7,7);
  Return();
  p_32 :
  Epopd(6,7);
  Return();
  a_32 :
  Epopd(5,7);
  Return();
  q_31 :
  Epopd(4,5);
  Return();
  n_31 :
  Epopd(3,21);
  Return();
  l_31 :
  Epopd(2,3);
  goto k_31;
  i_31 :
  Cpop();
  k_31 :
  Return();
  h_31 :
  MoveTop(1,1);
  goto s_22;
  s_22 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto t_22;
  t_22 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto u_22;
  u_22 :
  TestFunFC(r_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto v_22;
  v_22 :
  TestFunFC(r_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto w_22;
  w_22 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  Rpush(j_33);
  goto m_128;
  j_33 :
  goto g_31;
  m_128 :
  NotNULLd(1,2);
  NotNULLd(1,4);
  NotNULLd(1,6);
  NotNULLd(1,8);
  Tset(App1("Specification",App2("Cons",App1("Signature",App2("Cons",App1("Operations",Egetd(1,2)),App0("Nil"))),App2("Cons",App1("Overlays",Egetd(1,4)),App2("Cons",App1("Rules",Egetd(1,6)),App2("Cons",App1("Strategies",Egetd(1,8)),App0("Nil")))))));
  MatchFun("Specification",1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_96);
  AllBuild();
  Ccall(_stratego_v_96);
  Return();
  g_31 :
  Epopd(1,9);
  Return();
  y_30 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_l_96)
  Epushd(0,2);
  MoveTop(0,1);
  goto f_23;
  f_23 :
  TestFunFC(d_9,&&t_34,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(i_34);
  goto n_128;
  t_34 :
  TestFunFC(j_9,&&u_34,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(i_34);
  goto p_128;
  u_34 :
  TestFunFC(g_9,&&v_34,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(i_34);
  goto q_128;
  v_34 :
  TestFunFC(e_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(i_34);
  goto r_128;
  i_34 :
  goto h_34;
  r_128 :
  NotNULLd(0,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,2),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))))));
  Return();
  h_34 :
  goto g_34;
  q_128 :
  NotNULLd(0,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",Egetd(0,2),App2("TCons",App0("Nil"),App0("TNil"))))));
  Return();
  g_34 :
  goto f_34;
  p_128 :
  NotNULLd(0,2);
  Tset(App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",Egetd(0,2),App0("TNil"))))));
  Return();
  f_34 :
  goto p_33;
  n_128 :
  Epushd(1,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_m_96);
  MoveTop(1,2);
  Move(1,1,1,2);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil"))))));
  Epopd(1,2);
  Return();
  p_33 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_m_96)
  Rpush(w_34);
  s_128 :
  Cpush(y_34);
  Ccall(_stratego_t_95);
  goto x_34;
  y_34 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_n_96);
  OneNextSon();
  Rpush(a_35);
  goto s_128;
  a_35 :
  AllBuild();
  goto z_34;
  x_34 :
  Cpop();
  z_34 :
  Return();
  w_34 :
  Ccall(_stratego_o_96);
ENDPROC

PROC(_stratego_n_96)
  Epushd(0,2);
  MoveTop(0,1);
  goto l_23;
  l_23 :
  TestFunFC(s_17,&&g_35,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(f_35);
  goto t_128;
  g_35 :
  TestFunFC(h_35,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(f_35);
  goto u_128;
  f_35 :
  goto e_35;
  u_128 :
  Tset(App0("Nil"));
  Return();
  e_35 :
  goto b_35;
  t_128 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  b_35 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_o_96)
  Rpush(k_35);
  v_128 :
  Cpush(m_35);
  Ccall(_stratego_t_95);
  goto l_35;
  m_35 :
  Epushd(0,3);
  MoveTop(0,1);
  goto n_23;
  n_23 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(l_36);
  goto w_128;
  l_36 :
  goto q_35;
  w_128 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(m_36);
  x_128 :
  Cpush(o_36);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_37);
  goto x_128;
  b_37 :
  AllBuild();
  goto n_36;
  o_36 :
  Ccall(_stratego_t_95);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(d_37);
  goto v_128;
  d_37 :
  goto c_37;
  n_36 :
  Cpop();
  c_37 :
  Return();
  m_36 :
  Return();
  q_35 :
  Epopd(0,3);
  goto n_35;
  l_35 :
  Cpop();
  n_35 :
  Return();
  k_35 :
ENDPROC

PROC(_stratego_p_96)
  Epushd(0,3);
  MoveTop(0,1);
  Ccall(_stratego_q_96);
  Rpush(e_37);
  z_128 :
  Cpush(g_37);
  Ccall(_stratego_t_95);
  goto f_37;
  g_37 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("Op",Egetd(1,1),App0("Nil")));
  Tdupl();
  NotNULLd(1,1);
  Tset(App2("Op",Egetd(1,1),App0("Nil")));
  MoveTop(1,2);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(1,2),App0("TNil"))));
  Epopd(1,2);
  OneNextSon();
  Rpush(m_37);
  goto z_128;
  m_37 :
  AllBuild();
  goto l_37;
  f_37 :
  Cpop();
  l_37 :
  Return();
  e_37 :
  MoveTop(0,3);
  Move(0,2,0,3);
  NotNULLd(0,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_s_96);
  Epopd(0,3);
ENDPROC

PROC(_stratego_q_96)
  Rpush(n_37);
  g_129 :
  Cpush(p_37);
  Ccall(_stratego_t_95);
  goto o_37;
  p_37 :
  Ccontinue(u_37);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_r_96);
  OneNextSon();
  Rpush(v_37);
  goto g_129;
  v_37 :
  AllBuild();
  goto o_37;
  u_37 :
  Epushd(0,3);
  MoveTop(0,1);
  goto w_23;
  w_23 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(c_38);
  goto h_129;
  c_38 :
  goto x_37;
  h_129 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(e_38);
  goto g_129;
  e_38 :
  Return();
  x_37 :
  Epopd(0,3);
  goto w_37;
  o_37 :
  Cpop();
  w_37 :
  Return();
  n_37 :
  Ccall(_stratego_o_96);
ENDPROC

PROC(_stratego_r_96)
  Epushd(0,2);
  MoveTop(0,1);
  goto j_25;
  j_25 :
  TestFunFC(d_9,&&k_38,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(j_38);
  goto i_129;
  k_38 :
  TestFunFC(e_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(j_38);
  goto p_129;
  j_38 :
  goto g_38;
  p_129 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(l_38);
  q_129 :
  Cpush(p_38);
  Ccall(_stratego_t_95);
  goto o_38;
  p_38 :
  Ccontinue(q_38);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(1,4);
  MoveTop(1,1);
  goto c_25;
  c_25 :
  TestFunFC(y_10,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  MoveArg(1,4,1,1,2);
  goto d_25;
  d_25 :
  TestFunFC(w_0,&&fail,Egetd(1,3));
  Rpush(s_38);
  goto r_129;
  s_38 :
  goto r_38;
  r_129 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  r_38 :
  Epopd(1,4);
  OneNextSon();
  Rpush(t_38);
  goto q_129;
  t_38 :
  AllBuild();
  goto o_38;
  q_38 :
  Epushd(1,3);
  MoveTop(1,1);
  goto i_25;
  i_25 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(w_38);
  goto s_129;
  w_38 :
  goto v_38;
  s_129 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(y_38);
  goto q_129;
  y_38 :
  Return();
  v_38 :
  Epopd(1,3);
  goto u_38;
  o_38 :
  Cpop();
  u_38 :
  Return();
  l_38 :
  Return();
  g_38 :
  goto f_38;
  i_129 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(z_38);
  j_129 :
  Cpush(b_39);
  Ccall(_stratego_t_95);
  goto a_39;
  b_39 :
  Ccontinue(c_39);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto y_24;
  y_24 :
  TestFunFC(s_17,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(e_39);
  goto k_129;
  e_39 :
  goto d_39;
  k_129 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(f_39);
  l_129 :
  Cpush(h_39);
  Ccall(_stratego_t_95);
  goto g_39;
  h_39 :
  Ccontinue(i_39);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,4);
  MoveTop(2,1);
  goto u_24;
  u_24 :
  TestFunFC(m_39,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto v_24;
  v_24 :
  TestFunFC(g_19,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  Rpush(l_39);
  goto m_129;
  l_39 :
  goto j_39;
  m_129 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Return();
  j_39 :
  Epopd(2,4);
  OneNextSon();
  Rpush(n_39);
  goto l_129;
  n_39 :
  AllBuild();
  goto g_39;
  i_39 :
  Epushd(2,3);
  MoveTop(2,1);
  goto x_24;
  x_24 :
  TestFunFC(l_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(q_39);
  goto n_129;
  q_39 :
  goto p_39;
  n_129 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(c_40);
  goto l_129;
  c_40 :
  Return();
  p_39 :
  Epopd(2,3);
  goto o_39;
  g_39 :
  Cpop();
  o_39 :
  Return();
  f_39 :
  Return();
  d_39 :
  Epopd(1,2);
  OneNextSon();
  Rpush(d_40);
  goto j_129;
  d_40 :
  AllBuild();
  goto a_39;
  c_39 :
  Epushd(1,3);
  MoveTop(1,1);
  goto a_25;
  a_25 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(j_40);
  goto o_129;
  j_40 :
  goto i_40;
  o_129 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(k_40);
  goto j_129;
  k_40 :
  Return();
  i_40 :
  Epopd(1,3);
  goto e_40;
  a_39 :
  Cpop();
  e_40 :
  Return();
  z_38 :
  Ccall(_stratego_o_96);
  Return();
  f_38 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_s_96)
  Epushd(0,5);
  Ccall(_stratego_t_96);
  MoveTop(0,1);
  goto q_25;
  q_25 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto r_25;
  r_25 :
  TestFunFC(r_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto s_25;
  s_25 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(w_40);
  goto t_129;
  w_40 :
  goto p_40;
  t_129 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(x_40);
  u_129 :
  Cpush(a_41);
  Epushd(1,3);
  MoveTop(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  MoveTop(2,1);
  goto p_25;
  p_25 :
  TestFunFC(d_41,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(c_41);
  goto w_129;
  c_41 :
  goto b_41;
  w_129 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Move(1,2,2,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  Return();
  b_41 :
  Epopd(2,2);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Ccall(_stratego_u_96);
  Epopd(1,3);
  goto z_40;
  a_41 :
  AllInit();
  f_41 :
  AllNextSon(&&g_41);
  Rpush(h_41);
  goto u_129;
  h_41 :
  goto f_41;
  g_41 :
  AllBuild();
  goto e_41;
  z_40 :
  Cpop();
  e_41 :
  Return();
  x_40 :
  Return();
  p_40 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_t_96)
  Epushd(0,7);
  MoveTop(0,1);
  goto k_26;
  k_26 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto l_26;
  l_26 :
  TestFunFC(r_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto m_26;
  m_26 :
  TestFunFC(s_0,&&r_41,Egetd(0,5));
  Rpush(l_41);
  goto z_129;
  r_41 :
  TestFunFC(r_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto n_26;
  n_26 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(l_41);
  goto a_130;
  l_41 :
  goto k_41;
  a_130 :
  Epushd(1,2);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,4),App0("TNil"))));
  Rpush(s_41);
  b_130 :
  Epushd(2,9);
  MoveTop(2,1);
  goto b_26;
  b_26 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto c_26;
  c_26 :
  TestFunFC(w_0,&&i_42,Egetd(2,2));
  goto d_26;
  d_26 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto e_26;
  e_26 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto f_26;
  f_26 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(h_42);
  goto c_130;
  i_42 :
  TestFunFC(l_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto g_26;
  g_26 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto h_26;
  h_26 :
  TestFunFC(l_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto i_26;
  i_26 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(h_42);
  goto d_130;
  h_42 :
  goto d_42;
  d_130 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(r_42);
  goto b_130;
  r_42 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto y_25;
  y_25 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto z_25;
  z_25 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto a_26;
  a_26 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(s_42);
  goto e_130;
  s_42 :
  goto n_42;
  e_130 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  n_42 :
  Epopd(3,5);
  Return();
  d_42 :
  goto x_41;
  c_130 :
  Tset(App0("Nil"));
  Return();
  x_41 :
  Epopd(2,9);
  Return();
  s_41 :
  MoveTop(1,2);
  Move(1,1,1,2);
  NotNULLd(1,1);
  NotNULLd(0,6);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,6),App0("TNil"))));
  Epopd(1,2);
  Return();
  k_41 :
  goto i_41;
  z_129 :
  Epushd(1,1);
  Move(1,1,0,4);
  Epopd(1,1);
  Return();
  i_41 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_u_96)
  Rpush(z_42);
  g_130 :
  Epushd(0,11);
  MoveTop(0,5);
  goto q_26;
  q_26 :
  TestFunFC(r_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto r_26;
  r_26 :
  TestFunFC(r_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,11,0,7,1);
  goto s_26;
  s_26 :
  TestFunFC(l_0,&&fail,Egetd(0,8));
  MoveArg(0,9,0,8,0);
  MoveArg(0,10,0,8,1);
  goto t_26;
  t_26 :
  TestFunFC(s_0,&&fail,Egetd(0,11));
  goto u_26;
  u_26 :
  TestFunFC(r_0,&&e_43,Egetd(0,9));
  MoveArg(0,1,0,9,0);
  MoveArg(0,2,0,9,1);
  goto v_26;
  v_26 :
  TestFunFC(r_0,&&f_43,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto w_26;
  w_26 :
  TestFunFC(s_0,&&h_43,Egetd(0,4));
  Cpush(j_43);
  Rpush(k_43);
  goto h_130;
  k_43 :
  goto i_43;
  j_43 :
  Rpush(n_43);
  goto i_130;
  n_43 :
  goto l_43;
  i_43 :
  Cpop();
  l_43 :
  goto d_43;
  h_43 :
  Rpush(d_43);
  goto i_130;
  f_43 :
  Rpush(d_43);
  goto i_130;
  e_43 :
  Rpush(d_43);
  goto i_130;
  d_43 :
  goto c_43;
  i_130 :
  NotNULLd(0,6);
  NotNULLd(0,10);
  Tset(App2("TCons",Egetd(0,6),App2("TCons",Egetd(0,10),App0("TNil"))));
  Rpush(o_43);
  goto g_130;
  o_43 :
  Return();
  c_43 :
  goto a_43;
  h_130 :
  Epushd(1,1);
  Move(0,6,0,1);
  Move(1,1,0,3);
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  a_43 :
  Epopd(0,11);
  Return();
  z_42 :
ENDPROC

PROC(_stratego_v_96)
  Rpush(p_43);
  j_130 :
  Cpush(s_43);
  Epushd(0,5);
  MoveTop(0,1);
  goto z_26;
  z_26 :
  TestFunFC(v_43,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto a_27;
  a_27 :
  TestFunFC(x_43,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(u_43);
  goto k_130;
  u_43 :
  goto t_43;
  k_130 :
  Epushd(1,2);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_w_96);
  MoveTop(1,2);
  Move(1,1,1,2);
  NotNULLd(1,1);
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Scope",Egetd(1,1),App1("SRule",App3("Rule",Egetd(0,3),Egetd(0,4),Egetd(0,5)))));
  Epopd(1,2);
  Return();
  t_43 :
  Epopd(0,5);
  goto q_43;
  s_43 :
  goto y_43;
  q_43 :
  Cpop();
  y_43 :
  AllInit();
  z_43 :
  AllNextSon(&&a_44);
  Rpush(b_44);
  goto j_130;
  b_44 :
  goto z_43;
  a_44 :
  AllBuild();
  Return();
  p_43 :
ENDPROC

PROC(_stratego_w_96)
  Rpush(d_44);
  m_130 :
  Cpush(g_44);
  Epushd(0,2);
  MoveTop(0,1);
  goto c_27;
  c_27 :
  TestFunFC(d_41,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(i_44);
  goto n_130;
  i_44 :
  goto h_44;
  n_130 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  h_44 :
  Epopd(0,2);
  goto f_44;
  g_44 :
  Ccontinue(j_44);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_z_96);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  Tset(App0("Nil"));
  OneNextSon();
  Epushd(1,3);
  MoveTop(1,1);
  Rpush(l_44);
  goto m_130;
  l_44 :
  MoveTop(1,3);
  Move(1,2,1,3);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_x_96);
  Epopd(1,3);
  AllBuild();
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto j_27;
  j_27 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_27;
  k_27 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto l_27;
  l_27 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(o_44);
  goto t_130;
  o_44 :
  goto n_44;
  t_130 :
  Move(0,3,1,4);
  Return();
  n_44 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(p_44);
  u_130 :
  Cpush(r_44);
  Ccall(_stratego_t_95);
  Tset(App0("Nil"));
  goto q_44;
  r_44 :
  Epushd(1,3);
  MoveTop(1,1);
  goto x_27;
  x_27 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(w_44);
  goto v_130;
  w_44 :
  goto v_44;
  v_130 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(x_44);
  goto u_130;
  x_44 :
  MoveTop(2,2);
  Move(2,1,2,2);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App0("TNil"))));
  MoveTop(2,3);
  goto u_27;
  u_27 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto v_27;
  v_27 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto w_27;
  w_27 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(z_44);
  goto y_130;
  z_44 :
  goto y_44;
  y_130 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(b_45);
  z_130 :
  Cpush(e_45);
  Ccall(_stratego_t_95);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto d_45;
  e_45 :
  Ccontinue(f_45);
  Epushd(3,3);
  MoveTop(3,1);
  goto t_27;
  t_27 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(h_45);
  goto a_131;
  h_45 :
  goto g_45;
  a_131 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(j_45);
  b_131 :
  Cpush(m_45);
  Epushd(4,3);
  MoveTop(4,1);
  goto s_27;
  s_27 :
  TestFunFC(l_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(o_45);
  goto c_131;
  o_45 :
  goto n_45;
  c_131 :
  Move(3,2,4,2);
  Return();
  n_45 :
  Epopd(4,3);
  goto l_45;
  m_45 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_45);
  goto b_131;
  r_45 :
  AllBuild();
  goto q_45;
  l_45 :
  Cpop();
  q_45 :
  Return();
  j_45 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(s_45);
  goto z_130;
  s_45 :
  Return();
  g_45 :
  Epopd(3,3);
  goto d_45;
  f_45 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_45);
  goto z_130;
  v_45 :
  AllBuild();
  goto t_45;
  d_45 :
  Cpop();
  t_45 :
  Return();
  b_45 :
  Return();
  y_44 :
  Epopd(2,7);
  Return();
  v_44 :
  Epopd(1,3);
  goto t_44;
  q_44 :
  Cpop();
  t_44 :
  Return();
  p_44 :
  Epopd(0,3);
  goto f_44;
  j_44 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto a_28;
  a_28 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_28;
  b_28 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto c_28;
  c_28 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(y_45);
  goto e_131;
  y_45 :
  goto x_45;
  e_131 :
  Move(0,2,1,4);
  Return();
  x_45 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(a_46);
  f_131 :
  Cpush(c_46);
  Ccall(_stratego_t_95);
  Tset(App0("Nil"));
  goto b_46;
  c_46 :
  Epushd(1,3);
  MoveTop(1,1);
  goto o_28;
  o_28 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(g_46);
  goto g_131;
  g_46 :
  goto f_46;
  g_131 :
  Epushd(2,9);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(h_46);
  goto m_130;
  h_46 :
  MoveTop(2,2);
  Move(2,1,2,2);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(i_46);
  goto f_131;
  i_46 :
  MoveTop(2,4);
  Move(2,3,2,4);
  NotNULLd(2,1);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,3),App0("TNil"))));
  MoveTop(2,5);
  goto l_28;
  l_28 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto m_28;
  m_28 :
  TestFunFC(r_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto n_28;
  n_28 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(l_46);
  goto j_131;
  l_46 :
  goto k_46;
  j_131 :
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(z_46);
  k_131 :
  Cpush(c_47);
  Ccall(_stratego_t_95);
  NotNULLd(2,8);
  Tset(Egetd(2,8));
  goto b_47;
  c_47 :
  Ccontinue(d_47);
  Epushd(3,3);
  MoveTop(3,1);
  goto k_28;
  k_28 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(n_47);
  goto l_131;
  n_47 :
  goto l_47;
  l_131 :
  Tdupl();
  NotNULLd(2,8);
  Tset(Egetd(2,8));
  Rpush(o_47);
  m_131 :
  Cpush(q_47);
  Epushd(4,3);
  MoveTop(4,1);
  goto j_28;
  j_28 :
  TestFunFC(l_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(x_48);
  goto n_131;
  x_48 :
  goto r_47;
  n_131 :
  Move(3,2,4,2);
  Return();
  r_47 :
  Epopd(4,3);
  goto p_47;
  q_47 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_48);
  goto m_131;
  z_48 :
  AllBuild();
  goto y_48;
  p_47 :
  Cpop();
  y_48 :
  Return();
  o_47 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(a_49);
  goto k_131;
  a_49 :
  Return();
  l_47 :
  Epopd(3,3);
  goto b_47;
  d_47 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_49);
  goto k_131;
  h_49 :
  AllBuild();
  goto g_49;
  b_47 :
  Cpop();
  g_49 :
  Return();
  z_46 :
  Return();
  k_46 :
  Epopd(2,9);
  Return();
  f_46 :
  Epopd(1,3);
  goto d_46;
  b_46 :
  Cpop();
  d_46 :
  Return();
  a_46 :
  Epopd(0,2);
  goto w_45;
  f_44 :
  Cpop();
  w_45 :
  Return();
  d_44 :
ENDPROC

PROC(_stratego_x_96)
  Epushd(0,5);
  MoveTop(0,5);
  goto f_29;
  f_29 :
  TestFunFC(r_0,&&d_50,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  goto g_29;
  g_29 :
  TestFunFC(r_0,&&j_50,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto h_29;
  h_29 :
  TestFunFC(s_0,&&k_50,Egetd(0,4));
  Cpush(y_50);
  Rpush(r_51);
  goto o_131;
  r_51 :
  goto x_50;
  y_50 :
  Rpush(t_51);
  goto t_131;
  t_51 :
  goto s_51;
  x_50 :
  Cpop();
  s_51 :
  goto c_50;
  k_50 :
  Rpush(c_50);
  goto t_131;
  j_50 :
  Rpush(c_50);
  goto t_131;
  d_50 :
  Rpush(c_50);
  goto t_131;
  c_50 :
  goto b_50;
  t_131 :
  NotNULLd(0,5);
  Tset(App2("TCons",App0("Nil"),App2("TCons",Egetd(0,5),App0("TNil"))));
  Rpush(u_51);
  u_131 :
  Cpush(b_52);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(q_52);
  Epushd(1,7);
  MoveTop(1,1);
  goto w_28;
  w_28 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto x_28;
  x_28 :
  TestFunFC(r_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto y_28;
  y_28 :
  TestFunFC(r_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto z_28;
  z_28 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  Rpush(a_53);
  goto v_131;
  a_53 :
  goto r_52;
  v_131 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  r_52 :
  Epopd(1,7);
  goto p_52;
  q_52 :
  Ccall(_stratego_y_96);
  goto b_53;
  p_52 :
  Cpop();
  b_53 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  goto a_52;
  b_52 :
  Epushd(1,7);
  MoveTop(1,1);
  goto b_29;
  b_29 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto c_29;
  c_29 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto d_29;
  d_29 :
  TestFunFC(l_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto e_29;
  e_29 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(h_53);
  goto w_131;
  h_53 :
  goto g_53;
  w_131 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset(App2("TCons",App2("Cons",Egetd(1,5),Egetd(1,2)),App2("TCons",Egetd(1,6),App0("TNil"))));
  Return();
  g_53 :
  Epopd(1,7);
  goto f_53;
  a_52 :
  Cpop();
  f_53 :
  Cpush(j_53);
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  goto i_53;
  j_53 :
  Rpush(m_53);
  goto u_131;
  m_53 :
  goto l_53;
  i_53 :
  Cpop();
  l_53 :
  Return();
  u_51 :
  Return();
  b_50 :
  goto a_50;
  o_131 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Rpush(n_53);
  p_131 :
  Cpush(p_53);
  Ccall(_stratego_t_95);
  goto o_53;
  p_53 :
  Ccontinue(q_53);
  Epushd(1,3);
  MoveTop(1,1);
  goto u_28;
  u_28 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(s_53);
  goto q_131;
  s_53 :
  goto r_53;
  q_131 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(t_53);
  r_131 :
  Cpush(v_53);
  Epushd(2,3);
  MoveTop(2,1);
  goto t_28;
  t_28 :
  TestFunFC(l_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(x_53);
  goto s_131;
  x_53 :
  goto w_53;
  s_131 :
  Move(1,2,2,2);
  Return();
  w_53 :
  Epopd(2,3);
  goto u_53;
  v_53 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_53);
  goto r_131;
  z_53 :
  AllBuild();
  goto y_53;
  u_53 :
  Cpop();
  y_53 :
  Return();
  t_53 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(a_54);
  goto p_131;
  a_54 :
  Return();
  r_53 :
  Epopd(1,3);
  goto o_53;
  q_53 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_54);
  goto p_131;
  c_54 :
  AllBuild();
  goto b_54;
  o_53 :
  Cpop();
  b_54 :
  Return();
  n_53 :
  Return();
  a_50 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_y_96)
  Epushd(0,7);
  MoveTop(0,1);
  goto k_30;
  k_30 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto l_30;
  l_30 :
  TestFunFC(r_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto m_30;
  m_30 :
  TestFunFC(r_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto n_30;
  n_30 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(e_54);
  goto x_131;
  e_54 :
  goto d_54;
  x_131 :
  Epushd(1,10);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto k_29;
  k_29 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto l_29;
  l_29 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto m_29;
  m_29 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(g_54);
  goto y_131;
  g_54 :
  goto f_54;
  y_131 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  f_54 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto o_29;
  o_29 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto p_29;
  p_29 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_29;
  q_29 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(i_54);
  goto z_131;
  i_54 :
  goto h_54;
  z_131 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  h_54 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  Rpush(j_54);
  a_132 :
  Epushd(2,9);
  MoveTop(2,1);
  goto x_29;
  x_29 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto y_29;
  y_29 :
  TestFunFC(w_0,&&n_54,Egetd(2,2));
  goto z_29;
  z_29 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto a_30;
  a_30 :
  TestFunFC(w_0,&&fail,Egetd(2,6));
  goto b_30;
  b_30 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(m_54);
  goto b_132;
  n_54 :
  TestFunFC(l_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto c_30;
  c_30 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto d_30;
  d_30 :
  TestFunFC(l_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto e_30;
  e_30 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(m_54);
  goto c_132;
  m_54 :
  goto l_54;
  c_132 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset(App2("TCons",App2("TCons",Egetd(2,3),App2("TCons",Egetd(2,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(2,4),App2("TCons",Egetd(2,8),App0("TNil"))),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(p_54);
  goto a_132;
  p_54 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto u_29;
  u_29 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto v_29;
  v_29 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_29;
  w_29 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(q_54);
  goto d_132;
  q_54 :
  goto o_54;
  d_132 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset(App2("Cons",Egetd(3,2),Egetd(3,4)));
  Return();
  o_54 :
  Epopd(3,5);
  Return();
  l_54 :
  goto k_54;
  b_132 :
  Tset(App0("Nil"));
  Return();
  k_54 :
  Epopd(2,9);
  Return();
  j_54 :
  MoveTop(1,5);
  Move(1,4,1,5);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,7),App0("TNil"))));
  MoveTop(1,6);
  goto h_30;
  h_30 :
  TestFunFC(r_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto i_30;
  i_30 :
  TestFunFC(r_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,10,1,8,1);
  goto j_30;
  j_30 :
  TestFunFC(s_0,&&fail,Egetd(1,10));
  Rpush(t_54);
  goto f_132;
  t_54 :
  goto r_54;
  f_132 :
  NotNULLd(1,7);
  Tset(Egetd(1,7));
  Rpush(u_54);
  g_132 :
  Cpush(w_54);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_54);
  goto g_132;
  x_54 :
  AllBuild();
  goto v_54;
  w_54 :
  Ccall(_stratego_t_95);
  NotNULLd(1,9);
  Tset(Egetd(1,9));
  goto y_54;
  v_54 :
  Cpop();
  y_54 :
  Return();
  u_54 :
  Return();
  r_54 :
  Epopd(1,10);
  Return();
  d_54 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_z_96)
  Epushd(0,6);
  MoveTop(0,2);
  goto q_30;
  q_30 :
  TestFunFC(d_55,&&c_55,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(b_55);
  goto h_132;
  c_55 :
  TestFunFC(v_43,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto r_30;
  r_30 :
  TestFunFC(x_43,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(b_55);
  goto i_132;
  b_55 :
  goto a_55;
  i_132 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_w_96);
  Return();
  a_55 :
  goto z_54;
  h_132 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  z_54 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_a_97)
  MatchFun("Specification",1);
  TravInit();
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(0,2);
  MoveTop(0,1);
  goto t_30;
  t_30 :
  TestFunFC(d_9,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(f_55);
  goto j_132;
  f_55 :
  goto e_55;
  j_132 :
  Return();
  e_55 :
  Epopd(0,2);
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("Overlays",1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_97);
  AllBuild();
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("Rules",1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_97);
  AllBuild();
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("Strategies",1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_97);
  AllBuild();
  OneNextSon();
  Ccall(_stratego_t_95);
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_b_97)
  Epushd(0,1);
  Rpush(h_55);
  k_132 :
  Cpush(j_55);
  Ccall(_stratego_t_95);
  goto i_55;
  j_55 :
  Ccontinue(k_55);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_c_97);
  OneNextSon();
  Rpush(l_55);
  goto k_132;
  l_55 :
  AllBuild();
  goto i_55;
  k_55 :
  Epushd(1,3);
  MoveTop(1,1);
  goto v_30;
  v_30 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(o_55);
  goto l_132;
  o_55 :
  goto n_55;
  l_132 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(p_55);
  goto k_132;
  p_55 :
  Return();
  n_55 :
  Epopd(1,3);
  goto m_55;
  i_55 :
  Cpop();
  m_55 :
  Return();
  h_55 :
  MoveTop(0,1);
  goto x_30;
  x_30 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  Rpush(q_55);
  goto m_132;
  q_55 :
  goto g_55;
  m_132 :
  Return();
  g_55 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_97)
  Cpush(s_55);
  MatchFun("SDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_d_97);
  Cpush(t_55);
  Tdupl();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_t_95);
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  t_55 :
  AllBuild();
  Ccall(_stratego_k_97);
  goto r_55;
  s_55 :
  Ccontinue(u_55);
  MatchFun("RDef",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_d_97);
  Cpush(v_55);
  Tdupl();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_t_95);
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  v_55 :
  AllBuild();
  Ccall(_stratego_k_97);
  goto r_55;
  u_55 :
  Epushd(0,4);
  MoveTop(0,1);
  goto z_30;
  z_30 :
  TestFunFC(y_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(y_55);
  goto n_132;
  y_55 :
  goto x_55;
  n_132 :
  Ccall(_stratego_d_97);
  Cpush(z_55);
  Tdupl();
  MatchFun("Overlay",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_95);
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_t_95);
  AllBuild();
  AllBuild();
  Cpop();
  Crestore();
  Cjump();
  z_55 :
  Ccall(_stratego_k_97);
  Return();
  x_55 :
  Epopd(0,4);
  goto w_55;
  r_55 :
  Cpop();
  w_55 :
ENDPROC

PROC(_stratego_d_97)
  Rpush(a_56);
  o_132 :
  Cpush(d_56);
  Cpush(f_56);
  MatchFun("Build",1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_97);
  AllBuild();
  goto e_56;
  f_56 :
  Ccontinue(g_56);
  MatchFun("Match",1);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_97);
  AllBuild();
  goto e_56;
  g_56 :
  Ccontinue(h_56);
  MatchFun("MA",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_97);
  OneNextSon();
  Rpush(i_56);
  goto o_132;
  i_56 :
  AllBuild();
  goto e_56;
  h_56 :
  Ccontinue(j_56);
  MatchFun("AM",2);
  TravInit();
  OneNextSon();
  Rpush(k_56);
  goto o_132;
  k_56 :
  OneNextSon();
  Ccall(_stratego_e_97);
  AllBuild();
  goto e_56;
  j_56 :
  Ccontinue(l_56);
  MatchFun("BA",2);
  TravInit();
  OneNextSon();
  Rpush(m_56);
  goto o_132;
  m_56 :
  OneNextSon();
  Ccall(_stratego_f_97);
  AllBuild();
  goto e_56;
  l_56 :
  Ccontinue(n_56);
  MatchFun("BAM",3);
  TravInit();
  OneNextSon();
  Rpush(o_56);
  goto o_132;
  o_56 :
  OneNextSon();
  Ccall(_stratego_f_97);
  OneNextSon();
  Ccall(_stratego_e_97);
  AllBuild();
  goto e_56;
  n_56 :
  Ccontinue(q_56);
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_56);
  goto o_132;
  r_56 :
  AllBuild();
  goto e_56;
  q_56 :
  Ccontinue(s_56);
  MatchFun("Rule",3);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_97);
  OneNextSon();
  Ccall(_stratego_f_97);
  OneNextSon();
  Rpush(t_56);
  goto o_132;
  t_56 :
  AllBuild();
  goto e_56;
  s_56 :
  Ccontinue(u_56);
  MatchFun("Overlay",3);
  TravInit();
  OneNextSon();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_f_97);
  AllBuild();
  goto e_56;
  u_56 :
  MatchFun("Cong",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_56);
  p_132 :
  Cpush(b_57);
  Ccall(_stratego_t_95);
  goto z_56;
  b_57 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(d_57);
  goto o_132;
  d_57 :
  OneNextSon();
  Rpush(e_57);
  goto p_132;
  e_57 :
  AllBuild();
  goto c_57;
  z_56 :
  Cpop();
  c_57 :
  Return();
  y_56 :
  AllBuild();
  goto x_56;
  e_56 :
  Cpop();
  x_56 :
  goto b_56;
  d_56 :
  AllInit();
  g_57 :
  AllNextSon(&&p_57);
  Rpush(q_57);
  goto o_132;
  q_57 :
  goto g_57;
  p_57 :
  AllBuild();
  goto f_57;
  b_56 :
  Cpop();
  f_57 :
  Cpush(s_57);
  Ccall(_stratego_g_97);
  goto r_57;
  s_57 :
  Ccall(_stratego_i_97);
  goto y_57;
  r_57 :
  Cpop();
  y_57 :
  Return();
  a_56 :
ENDPROC

PROC(_stratego_e_97)
  Epushd(0,3);
  MoveTop(0,1);
  Ccall(_stratego_w_96);
  MoveTop(0,3);
  Move(0,2,0,3);
  NotNULLd(0,2);
  Tset(App2("Cons",App2("TCons",App0("Nil"),App2("TCons",Egetd(0,2),App2("TCons",App0("Nil"),App0("TNil")))),App0("Nil")));
  Epopd(0,3);
ENDPROC

PROC(_stratego_f_97)
  Epushd(0,3);
  MoveTop(0,1);
  Ccall(_stratego_w_96);
  MoveTop(0,3);
  Move(0,2,0,3);
  NotNULLd(0,2);
  Tset(App2("Cons",App2("TCons",Egetd(0,2),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil")))),App0("Nil")));
  Epopd(0,3);
ENDPROC

PROC(_stratego_g_97)
  Epushd(0,4);
  MoveTop(0,1);
  goto k_32;
  k_32 :
  TestFunFC(t_58,&&s_58,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(r_58);
  goto u_132;
  s_58 :
  TestFunFC(v_58,&&u_58,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(r_58);
  goto v_132;
  u_58 :
  TestFunFC(x_43,&&w_58,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(r_58);
  goto w_132;
  w_58 :
  TestFunFC(y_58,&&x_58,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(r_58);
  goto x_132;
  x_58 :
  TestFunFC(a_59,&&z_58,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(r_58);
  goto y_132;
  z_58 :
  TestFunFC(d_59,&&c_59,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(r_58);
  goto z_132;
  c_59 :
  TestFunFC(g_59,&&e_59,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(r_58);
  goto a_133;
  e_59 :
  TestFunFC(i_59,&&h_59,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(r_58);
  goto b_133;
  h_59 :
  TestFunFC(k_59,&&j_59,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(r_58);
  goto c_133;
  j_59 :
  TestFunFC(d_55,&&l_59,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(r_58);
  goto d_133;
  l_59 :
  TestFunFC(y_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(r_58);
  goto p_133;
  r_58 :
  goto q_58;
  p_133 :
  Epushd(1,2);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("Cons",App2("TCons",App0("Nil"),App2("TCons",Egetd(0,3),App2("TCons",App0("Nil"),App0("TNil")))),App2("Cons",Egetd(0,4),App0("Nil"))));
  Ccall(_stratego_h_97);
  MoveTop(1,2);
  Move(1,1,1,2);
  NotNULLd(0,2);
  NotNULLd(0,3);
  NotNULLd(1,1);
  Tset(App3("Overlay",Egetd(0,2),Egetd(0,3),Egetd(1,1)));
  Epopd(1,2);
  Return();
  q_58 :
  goto p_58;
  d_133 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(m_59);
  e_133 :
  Cpush(o_59);
  Ccall(_stratego_t_95);
  goto n_59;
  o_59 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(1,7);
  MoveTop(1,1);
  goto f_32;
  f_32 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto g_32;
  g_32 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto h_32;
  h_32 :
  TestFunFC(r_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto i_32;
  i_32 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(u_59);
  goto f_133;
  u_59 :
  goto q_59;
  f_133 :
  Epushd(2,14);
  NotNULLd(1,4);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(0,2),App0("TNil"))));
  Ccall(_stratego_x_96);
  MoveTop(2,2);
  Move(2,1,2,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  NotNULLd(1,2);
  NotNULLd(0,2);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(0,2),App0("TNil"))));
  MoveTop(2,5);
  goto x_31;
  x_31 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto y_31;
  y_31 :
  TestFunFC(r_0,&&fail,Egetd(2,7));
  MoveArg(2,8,2,7,0);
  MoveArg(2,9,2,7,1);
  goto z_31;
  z_31 :
  TestFunFC(s_0,&&fail,Egetd(2,9));
  Rpush(d_60);
  goto j_133;
  d_60 :
  goto w_59;
  j_133 :
  Epushd(3,3);
  NotNULLd(2,6);
  NotNULLd(2,8);
  Tset(App2("TCons",Egetd(2,6),App2("TCons",Egetd(2,8),App0("TNil"))));
  Ccall(_stratego_x_96);
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,6);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,6),App2("TCons",Egetd(3,1),App0("TNil"))));
  Ccall(_stratego_x_96);
  MoveTop(3,3);
  Move(2,4,3,3);
  NotNULLd(2,4);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,6),App0("TNil"))));
  Epopd(3,3);
  Return();
  w_59 :
  MoveTop(2,10);
  goto c_32;
  c_32 :
  TestFunFC(r_0,&&fail,Egetd(2,10));
  MoveArg(2,11,2,10,0);
  MoveArg(2,12,2,10,1);
  goto d_32;
  d_32 :
  TestFunFC(r_0,&&fail,Egetd(2,12));
  MoveArg(2,13,2,12,0);
  MoveArg(2,14,2,12,1);
  goto e_32;
  e_32 :
  TestFunFC(s_0,&&fail,Egetd(2,14));
  Rpush(g_60);
  goto m_133;
  g_60 :
  goto v_59;
  m_133 :
  Epushd(3,1);
  NotNULLd(2,11);
  Tset(Egetd(2,11));
  Rpush(h_60);
  n_133 :
  Cpush(j_60);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_60);
  goto n_133;
  k_60 :
  AllBuild();
  goto i_60;
  j_60 :
  Ccall(_stratego_t_95);
  NotNULLd(2,13);
  Tset(Egetd(2,13));
  goto m_60;
  i_60 :
  Cpop();
  m_60 :
  Return();
  h_60 :
  MoveTop(3,1);
  Move(2,3,3,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,3),App0("TNil")))));
  Epopd(3,1);
  Return();
  v_59 :
  Epopd(2,14);
  Return();
  q_59 :
  Epopd(1,7);
  OneNextSon();
  Rpush(n_60);
  goto e_133;
  n_60 :
  AllBuild();
  goto p_59;
  n_59 :
  Cpop();
  p_59 :
  Return();
  m_59 :
  Return();
  p_58 :
  goto o_58;
  c_133 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_h_97);
  Return();
  o_58 :
  goto n_58;
  b_133 :
  NotNULLd(0,3);
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset(App2("Cons",Egetd(0,3),App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,4),App0("Nil")))));
  Ccall(_stratego_h_97);
  Return();
  n_58 :
  goto m_58;
  a_133 :
  NotNULLd(0,3);
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,3),App2("Cons",Egetd(0,2),App0("Nil"))));
  Ccall(_stratego_h_97);
  Return();
  m_58 :
  goto l_58;
  z_132 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,3),App0("Nil"))));
  Ccall(_stratego_h_97);
  Return();
  l_58 :
  goto k_58;
  y_132 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,3),App0("Nil"))));
  Ccall(_stratego_h_97);
  Return();
  k_58 :
  goto j_58;
  x_132 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,4),App2("Cons",Egetd(0,3),App0("Nil")))));
  Ccall(_stratego_h_97);
  Return();
  j_58 :
  goto i_58;
  w_132 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,4),App2("Cons",Egetd(0,3),App0("Nil")))));
  Ccall(_stratego_h_97);
  Return();
  i_58 :
  goto h_58;
  v_132 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,3),App0("Nil"))));
  Ccall(_stratego_h_97);
  Return();
  h_58 :
  goto z_57;
  u_132 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_h_97);
  Return();
  z_57 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_h_97)
  Rpush(o_60);
  r_133 :
  Cpush(r_60);
  Ccall(_stratego_t_95);
  Tset(App2("Cons",App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil")))),App0("Nil")));
  goto q_60;
  r_60 :
  Epushd(0,3);
  MoveTop(0,1);
  goto s_34;
  s_34 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(z_60);
  goto s_133;
  z_60 :
  goto y_60;
  s_133 :
  Epushd(1,5);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(b_61);
  goto r_133;
  b_61 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(1,1);
  goto p_34;
  p_34 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_34;
  q_34 :
  TestFunFC(r_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto r_34;
  r_34 :
  TestFunFC(s_0,&&fail,Egetd(1,5));
  Rpush(g_61);
  goto t_133;
  g_61 :
  goto a_61;
  t_133 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(h_61);
  u_133 :
  Cpush(j_61);
  Ccall(_stratego_t_95);
  goto i_61;
  j_61 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Rpush(l_61);
  w_133 :
  Cpush(n_61);
  Ccall(_stratego_t_95);
  goto m_61;
  n_61 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,18);
  MoveTop(3,1);
  NotNULLd(2,1);
  NotNULLd(3,1);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(3,1),App0("TNil"))));
  MoveTop(3,2);
  goto u_33;
  u_33 :
  TestFunFC(r_0,&&fail,Egetd(3,2));
  MoveArg(3,3,3,2,0);
  MoveArg(3,10,3,2,1);
  goto v_33;
  v_33 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto w_33;
  w_33 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto x_33;
  x_33 :
  TestFunFC(r_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto y_33;
  y_33 :
  TestFunFC(s_0,&&fail,Egetd(3,9));
  goto z_33;
  z_33 :
  TestFunFC(r_0,&&fail,Egetd(3,10));
  MoveArg(3,11,3,10,0);
  MoveArg(3,18,3,10,1);
  goto a_34;
  a_34 :
  TestFunFC(r_0,&&fail,Egetd(3,11));
  MoveArg(3,12,3,11,0);
  MoveArg(3,13,3,11,1);
  goto b_34;
  b_34 :
  TestFunFC(r_0,&&fail,Egetd(3,13));
  MoveArg(3,14,3,13,0);
  MoveArg(3,15,3,13,1);
  goto c_34;
  c_34 :
  TestFunFC(r_0,&&fail,Egetd(3,15));
  MoveArg(3,16,3,15,0);
  MoveArg(3,17,3,15,1);
  goto d_34;
  d_34 :
  TestFunFC(s_0,&&fail,Egetd(3,17));
  goto e_34;
  e_34 :
  TestFunFC(s_0,&&fail,Egetd(3,18));
  Rpush(u_61);
  goto y_133;
  u_61 :
  goto q_61;
  y_133 :
  Epushd(4,8);
  NotNULLd(3,12);
  NotNULLd(3,6);
  Tset(App2("TCons",Egetd(3,12),App2("TCons",Egetd(3,6),App0("TNil"))));
  Ccall(_stratego_x_96);
  MoveTop(4,3);
  Move(4,2,4,3);
  NotNULLd(3,4);
  NotNULLd(4,2);
  Tset(App2("TCons",Egetd(3,4),App2("TCons",Egetd(4,2),App0("TNil"))));
  MoveTop(4,4);
  goto r_33;
  r_33 :
  TestFunFC(r_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,6,4,4,1);
  goto s_33;
  s_33 :
  TestFunFC(r_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto t_33;
  t_33 :
  TestFunFC(s_0,&&fail,Egetd(4,8));
  Rpush(x_61);
  goto a_134;
  x_61 :
  goto w_61;
  a_134 :
  Epushd(5,6);
  NotNULLd(4,5);
  Tset(Egetd(4,5));
  Rpush(y_61);
  b_134 :
  Cpush(a_62);
  Ccall(_stratego_t_95);
  NotNULLd(4,7);
  Tset(Egetd(4,7));
  goto z_61;
  a_62 :
  Ccontinue(b_62);
  Epushd(6,3);
  MoveTop(6,1);
  goto w_32;
  w_32 :
  TestFunFC(l_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(e_62);
  goto c_134;
  e_62 :
  goto d_62;
  c_134 :
  Tdupl();
  NotNULLd(4,7);
  Tset(Egetd(4,7));
  Rpush(j_62);
  d_134 :
  Cpush(l_62);
  Epushd(7,3);
  MoveTop(7,1);
  goto v_32;
  v_32 :
  TestFunFC(l_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(n_62);
  goto e_134;
  n_62 :
  goto m_62;
  e_134 :
  Move(6,2,7,2);
  Return();
  m_62 :
  Epopd(7,3);
  goto k_62;
  l_62 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_62);
  goto d_134;
  w_62 :
  AllBuild();
  goto o_62;
  k_62 :
  Cpop();
  o_62 :
  Return();
  j_62 :
  Tpop();
  NotNULLd(6,3);
  Tset(Egetd(6,3));
  Rpush(x_62);
  goto b_134;
  x_62 :
  Return();
  d_62 :
  Epopd(6,3);
  goto z_61;
  b_62 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_63);
  goto b_134;
  b_63 :
  AllBuild();
  goto y_62;
  z_61 :
  Cpop();
  y_62 :
  Return();
  y_61 :
  MoveTop(5,1);
  Move(4,1,5,1);
  NotNULLd(3,6);
  NotNULLd(3,14);
  Tset(App2("TCons",Egetd(3,6),App2("TCons",Egetd(3,14),App0("TNil"))));
  MoveTop(5,2);
  goto n_33;
  n_33 :
  TestFunFC(r_0,&&fail,Egetd(5,2));
  MoveArg(5,3,5,2,0);
  MoveArg(5,4,5,2,1);
  goto o_33;
  o_33 :
  TestFunFC(r_0,&&fail,Egetd(5,4));
  MoveArg(5,5,5,4,0);
  MoveArg(5,6,5,4,1);
  goto q_33;
  q_33 :
  TestFunFC(s_0,&&fail,Egetd(5,6));
  Rpush(d_63);
  goto g_134;
  d_63 :
  goto c_63;
  g_134 :
  Epushd(6,7);
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Rpush(e_63);
  h_134 :
  Cpush(g_63);
  Ccall(_stratego_t_95);
  NotNULLd(5,5);
  Tset(Egetd(5,5));
  goto f_63;
  g_63 :
  Ccontinue(h_63);
  Epushd(7,3);
  MoveTop(7,1);
  goto c_33;
  c_33 :
  TestFunFC(l_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(j_63);
  goto i_134;
  j_63 :
  goto i_63;
  i_134 :
  Tdupl();
  NotNULLd(5,5);
  Tset(Egetd(5,5));
  Rpush(k_63);
  j_134 :
  Cpush(m_63);
  Epushd(8,3);
  MoveTop(8,1);
  goto b_33;
  b_33 :
  TestFunFC(l_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(t_63);
  goto k_134;
  t_63 :
  goto s_63;
  k_134 :
  Move(7,2,8,2);
  Return();
  s_63 :
  Epopd(8,3);
  goto l_63;
  m_63 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_63);
  goto j_134;
  v_63 :
  AllBuild();
  goto u_63;
  l_63 :
  Cpop();
  u_63 :
  Return();
  k_63 :
  Tpop();
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Rpush(w_63);
  goto h_134;
  w_63 :
  Return();
  i_63 :
  Epopd(7,3);
  goto f_63;
  h_63 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_63);
  goto h_134;
  y_63 :
  AllBuild();
  goto x_63;
  f_63 :
  Cpop();
  x_63 :
  Return();
  e_63 :
  MoveTop(6,2);
  Move(6,1,6,2);
  NotNULLd(3,8);
  NotNULLd(3,16);
  Tset(App2("TCons",Egetd(3,8),App2("TCons",Egetd(3,16),App0("TNil"))));
  MoveTop(6,3);
  goto k_33;
  k_33 :
  TestFunFC(r_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto l_33;
  l_33 :
  TestFunFC(r_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto m_33;
  m_33 :
  TestFunFC(s_0,&&fail,Egetd(6,7));
  Rpush(b_64);
  goto m_134;
  b_64 :
  goto a_64;
  m_134 :
  Epushd(7,2);
  NotNULLd(6,4);
  Tset(Egetd(6,4));
  Rpush(c_64);
  n_134 :
  Cpush(g_64);
  Ccall(_stratego_t_95);
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  goto f_64;
  g_64 :
  Ccontinue(h_64);
  Epushd(8,3);
  MoveTop(8,1);
  goto i_33;
  i_33 :
  TestFunFC(l_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(j_64);
  goto o_134;
  j_64 :
  goto i_64;
  o_134 :
  Tdupl();
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Rpush(k_64);
  p_134 :
  Cpush(n_64);
  Epushd(9,3);
  MoveTop(9,1);
  goto h_33;
  h_33 :
  TestFunFC(l_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(p_64);
  goto q_134;
  p_64 :
  goto o_64;
  q_134 :
  Move(8,2,9,2);
  Return();
  o_64 :
  Epopd(9,3);
  goto l_64;
  n_64 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_64);
  goto p_134;
  r_64 :
  AllBuild();
  goto q_64;
  l_64 :
  Cpop();
  q_64 :
  Return();
  k_64 :
  Tpop();
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(s_64);
  goto n_134;
  s_64 :
  Return();
  i_64 :
  Epopd(8,3);
  goto f_64;
  h_64 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_64);
  goto n_134;
  u_64 :
  AllBuild();
  goto t_64;
  f_64 :
  Cpop();
  t_64 :
  Return();
  c_64 :
  MoveTop(7,2);
  Move(7,1,7,2);
  NotNULLd(4,1);
  NotNULLd(6,1);
  NotNULLd(7,1);
  Tset(App2("TCons",Egetd(4,1),App2("TCons",Egetd(6,1),App2("TCons",Egetd(7,1),App0("TNil")))));
  Epopd(7,2);
  Return();
  a_64 :
  Epopd(6,7);
  Return();
  c_63 :
  Epopd(5,6);
  Return();
  w_61 :
  Epopd(4,8);
  Return();
  q_61 :
  Epopd(3,18);
  OneNextSon();
  Rpush(v_64);
  goto w_133;
  v_64 :
  AllBuild();
  goto o_61;
  m_61 :
  Cpop();
  o_61 :
  Return();
  l_61 :
  Epopd(2,1);
  OneNextSon();
  Rpush(a_65);
  goto u_133;
  a_65 :
  AllBuild();
  goto k_61;
  i_61 :
  Cpop();
  k_61 :
  Return();
  h_61 :
  Rpush(b_65);
  s_134 :
  Cpush(d_65);
  Ccall(_stratego_t_95);
  Tset(App0("Nil"));
  goto c_65;
  d_65 :
  Epushd(2,3);
  MoveTop(2,1);
  goto o_34;
  o_34 :
  TestFunFC(l_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(g_65);
  goto t_134;
  g_65 :
  goto f_65;
  t_134 :
  Epushd(3,5);
  NotNULLd(2,2);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,2),App2("TCons",Egetd(2,3),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(i_65);
  goto s_134;
  i_65 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto l_34;
  l_34 :
  TestFunFC(r_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto m_34;
  m_34 :
  TestFunFC(r_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto n_34;
  n_34 :
  TestFunFC(s_0,&&fail,Egetd(3,5));
  Rpush(j_65);
  goto u_134;
  j_65 :
  goto h_65;
  u_134 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Rpush(k_65);
  v_134 :
  Cpush(n_65);
  Ccall(_stratego_t_95);
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  goto m_65;
  n_65 :
  Ccontinue(o_65);
  Epushd(4,3);
  MoveTop(4,1);
  goto k_34;
  k_34 :
  TestFunFC(l_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(t_65);
  goto w_134;
  t_65 :
  goto s_65;
  w_134 :
  Tdupl();
  NotNULLd(3,4);
  Tset(Egetd(3,4));
  Rpush(u_65);
  x_134 :
  Cpush(b_66);
  Epushd(5,3);
  MoveTop(5,1);
  goto j_34;
  j_34 :
  TestFunFC(l_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(d_66);
  goto y_134;
  d_66 :
  goto c_66;
  y_134 :
  Move(4,2,5,2);
  Return();
  c_66 :
  Epopd(5,3);
  goto x_65;
  b_66 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_66);
  goto x_134;
  f_66 :
  AllBuild();
  goto e_66;
  x_65 :
  Cpop();
  e_66 :
  Return();
  u_65 :
  Tpop();
  NotNULLd(4,3);
  Tset(Egetd(4,3));
  Rpush(g_66);
  goto v_134;
  g_66 :
  Return();
  s_65 :
  Epopd(4,3);
  goto m_65;
  o_65 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_66);
  goto v_134;
  i_66 :
  AllBuild();
  goto h_66;
  m_65 :
  Cpop();
  h_66 :
  Return();
  k_65 :
  Return();
  h_65 :
  Epopd(3,5);
  Return();
  f_65 :
  Epopd(2,3);
  goto e_65;
  c_65 :
  Cpop();
  e_65 :
  Return();
  b_65 :
  Return();
  a_61 :
  Epopd(1,5);
  Return();
  y_60 :
  Epopd(0,3);
  goto s_60;
  q_60 :
  Cpop();
  s_60 :
  Return();
  o_60 :
ENDPROC

PROC(_stratego_i_97)
  Epushd(0,5);
  Ccall(_stratego_j_97);
  MoveTop(0,1);
  goto z_36;
  z_36 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_37;
  a_37 :
  TestFunFC(r_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(k_66);
  goto z_134;
  k_66 :
  goto j_66;
  z_134 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(l_66);
  a_135 :
  Cpush(n_66);
  Ccall(_stratego_t_95);
  Tset(App2("Cons",App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App2("TCons",App0("Nil"),App0("TNil")))),App0("Nil")));
  goto m_66;
  n_66 :
  Epushd(1,3);
  MoveTop(1,1);
  goto y_36;
  y_36 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(w_66);
  goto b_135;
  w_66 :
  goto p_66;
  b_135 :
  Epushd(2,5);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset(App2("TCons",Egetd(1,2),App2("TCons",Egetd(1,3),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(y_66);
  goto a_135;
  y_66 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(2,1);
  goto v_36;
  v_36 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto w_36;
  w_36 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto x_36;
  x_36 :
  TestFunFC(s_0,&&fail,Egetd(2,5));
  Rpush(z_66);
  goto c_135;
  z_66 :
  goto x_66;
  c_135 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(a_67);
  d_135 :
  Cpush(h_67);
  Ccall(_stratego_t_95);
  goto g_67;
  h_67 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(j_67);
  f_135 :
  Cpush(l_67);
  Ccall(_stratego_t_95);
  goto k_67;
  l_67 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(4,18);
  MoveTop(4,1);
  NotNULLd(3,1);
  NotNULLd(4,1);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(4,1),App0("TNil"))));
  MoveTop(4,2);
  goto a_36;
  a_36 :
  TestFunFC(r_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,10,4,2,1);
  goto b_36;
  b_36 :
  TestFunFC(r_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto c_36;
  c_36 :
  TestFunFC(r_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,7,4,5,1);
  goto d_36;
  d_36 :
  TestFunFC(r_0,&&fail,Egetd(4,7));
  MoveArg(4,8,4,7,0);
  MoveArg(4,9,4,7,1);
  goto e_36;
  e_36 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  goto f_36;
  f_36 :
  TestFunFC(r_0,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,18,4,10,1);
  goto g_36;
  g_36 :
  TestFunFC(r_0,&&fail,Egetd(4,11));
  MoveArg(4,12,4,11,0);
  MoveArg(4,13,4,11,1);
  goto h_36;
  h_36 :
  TestFunFC(r_0,&&fail,Egetd(4,13));
  MoveArg(4,14,4,13,0);
  MoveArg(4,15,4,13,1);
  goto i_36;
  i_36 :
  TestFunFC(r_0,&&fail,Egetd(4,15));
  MoveArg(4,16,4,15,0);
  MoveArg(4,17,4,15,1);
  goto j_36;
  j_36 :
  TestFunFC(s_0,&&fail,Egetd(4,17));
  goto k_36;
  k_36 :
  TestFunFC(s_0,&&fail,Egetd(4,18));
  Rpush(r_67);
  goto h_135;
  r_67 :
  goto n_67;
  h_135 :
  Epushd(5,5);
  NotNULLd(4,4);
  NotNULLd(4,12);
  Tset(App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,12),App0("TNil"))));
  MoveTop(5,1);
  goto x_35;
  x_35 :
  TestFunFC(r_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto y_35;
  y_35 :
  TestFunFC(r_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto z_35;
  z_35 :
  TestFunFC(s_0,&&fail,Egetd(5,5));
  Rpush(t_67);
  goto i_135;
  t_67 :
  goto s_67;
  i_135 :
  Epushd(6,7);
  NotNULLd(5,2);
  Tset(Egetd(5,2));
  Rpush(u_67);
  j_135 :
  Cpush(w_67);
  Ccall(_stratego_t_95);
  NotNULLd(5,4);
  Tset(Egetd(5,4));
  goto v_67;
  w_67 :
  Ccontinue(x_67);
  Epushd(7,3);
  MoveTop(7,1);
  goto d_35;
  d_35 :
  TestFunFC(l_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(z_67);
  goto k_135;
  z_67 :
  goto y_67;
  k_135 :
  Tdupl();
  NotNULLd(5,4);
  Tset(Egetd(5,4));
  Rpush(a_68);
  l_135 :
  Cpush(c_68);
  Epushd(8,3);
  MoveTop(8,1);
  goto c_35;
  c_35 :
  TestFunFC(l_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(e_68);
  goto m_135;
  e_68 :
  goto d_68;
  m_135 :
  Move(7,2,8,2);
  Return();
  d_68 :
  Epopd(8,3);
  goto b_68;
  c_68 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_68);
  goto l_135;
  g_68 :
  AllBuild();
  goto f_68;
  b_68 :
  Cpop();
  f_68 :
  Return();
  a_68 :
  Tpop();
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Rpush(h_68);
  goto j_135;
  h_68 :
  Return();
  y_67 :
  Epopd(7,3);
  goto v_67;
  x_67 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_68);
  goto j_135;
  j_68 :
  AllBuild();
  goto i_68;
  v_67 :
  Cpop();
  i_68 :
  Return();
  u_67 :
  MoveTop(6,2);
  Move(6,1,6,2);
  NotNULLd(4,6);
  NotNULLd(4,14);
  Tset(App2("TCons",Egetd(4,6),App2("TCons",Egetd(4,14),App0("TNil"))));
  MoveTop(6,3);
  goto u_35;
  u_35 :
  TestFunFC(r_0,&&fail,Egetd(6,3));
  MoveArg(6,4,6,3,0);
  MoveArg(6,5,6,3,1);
  goto v_35;
  v_35 :
  TestFunFC(r_0,&&fail,Egetd(6,5));
  MoveArg(6,6,6,5,0);
  MoveArg(6,7,6,5,1);
  goto w_35;
  w_35 :
  TestFunFC(s_0,&&fail,Egetd(6,7));
  Rpush(m_68);
  goto o_135;
  m_68 :
  goto k_68;
  o_135 :
  Epushd(7,7);
  NotNULLd(6,4);
  Tset(Egetd(6,4));
  Rpush(n_68);
  p_135 :
  Cpush(p_68);
  Ccall(_stratego_t_95);
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  goto o_68;
  p_68 :
  Ccontinue(q_68);
  Epushd(8,3);
  MoveTop(8,1);
  goto j_35;
  j_35 :
  TestFunFC(l_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(v_68);
  goto q_135;
  v_68 :
  goto u_68;
  q_135 :
  Tdupl();
  NotNULLd(6,6);
  Tset(Egetd(6,6));
  Rpush(a_69);
  r_135 :
  Cpush(c_69);
  Epushd(9,3);
  MoveTop(9,1);
  goto i_35;
  i_35 :
  TestFunFC(l_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(j_69);
  goto s_135;
  j_69 :
  goto d_69;
  s_135 :
  Move(8,2,9,2);
  Return();
  d_69 :
  Epopd(9,3);
  goto b_69;
  c_69 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_69);
  goto r_135;
  p_69 :
  AllBuild();
  goto k_69;
  b_69 :
  Cpop();
  k_69 :
  Return();
  a_69 :
  Tpop();
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(q_69);
  goto p_135;
  q_69 :
  Return();
  u_68 :
  Epopd(8,3);
  goto o_68;
  q_68 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_69);
  goto p_135;
  t_69 :
  AllBuild();
  goto r_69;
  o_68 :
  Cpop();
  r_69 :
  Return();
  n_68 :
  MoveTop(7,2);
  Move(7,1,7,2);
  NotNULLd(4,8);
  NotNULLd(4,16);
  Tset(App2("TCons",Egetd(4,8),App2("TCons",Egetd(4,16),App0("TNil"))));
  MoveTop(7,3);
  goto r_35;
  r_35 :
  TestFunFC(r_0,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto s_35;
  s_35 :
  TestFunFC(r_0,&&fail,Egetd(7,5));
  MoveArg(7,6,7,5,0);
  MoveArg(7,7,7,5,1);
  goto t_35;
  t_35 :
  TestFunFC(s_0,&&fail,Egetd(7,7));
  Rpush(v_69);
  goto u_135;
  v_69 :
  goto u_69;
  u_135 :
  Epushd(8,2);
  NotNULLd(7,4);
  Tset(Egetd(7,4));
  Rpush(w_69);
  v_135 :
  Cpush(y_69);
  Ccall(_stratego_t_95);
  NotNULLd(7,6);
  Tset(Egetd(7,6));
  goto x_69;
  y_69 :
  Ccontinue(z_69);
  Epushd(9,3);
  MoveTop(9,1);
  goto p_35;
  p_35 :
  TestFunFC(l_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(b_70);
  goto w_135;
  b_70 :
  goto a_70;
  w_135 :
  Tdupl();
  NotNULLd(7,6);
  Tset(Egetd(7,6));
  Rpush(c_70);
  x_135 :
  Cpush(e_70);
  Epushd(10,3);
  MoveTop(10,1);
  goto o_35;
  o_35 :
  TestFunFC(l_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(p_70);
  goto y_135;
  p_70 :
  goto o_70;
  y_135 :
  Move(9,2,10,2);
  Return();
  o_70 :
  Epopd(10,3);
  goto d_70;
  e_70 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_70);
  goto x_135;
  r_70 :
  AllBuild();
  goto q_70;
  d_70 :
  Cpop();
  q_70 :
  Return();
  c_70 :
  Tpop();
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(x_70);
  goto v_135;
  x_70 :
  Return();
  a_70 :
  Epopd(9,3);
  goto x_69;
  z_69 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_71);
  goto v_135;
  c_71 :
  AllBuild();
  goto y_70;
  x_69 :
  Cpop();
  y_70 :
  Return();
  w_69 :
  MoveTop(8,2);
  Move(8,1,8,2);
  NotNULLd(6,1);
  NotNULLd(7,1);
  NotNULLd(8,1);
  Tset(App2("TCons",Egetd(6,1),App2("TCons",Egetd(7,1),App2("TCons",Egetd(8,1),App0("TNil")))));
  Epopd(8,2);
  Return();
  u_69 :
  Epopd(7,7);
  Return();
  k_68 :
  Epopd(6,7);
  Return();
  s_67 :
  Epopd(5,5);
  Return();
  n_67 :
  Epopd(4,18);
  OneNextSon();
  Rpush(d_71);
  goto f_135;
  d_71 :
  AllBuild();
  goto m_67;
  k_67 :
  Cpop();
  m_67 :
  Return();
  j_67 :
  Epopd(3,1);
  OneNextSon();
  Rpush(e_71);
  goto d_135;
  e_71 :
  AllBuild();
  goto i_67;
  g_67 :
  Cpop();
  i_67 :
  Return();
  a_67 :
  Rpush(f_71);
  a_136 :
  Cpush(i_71);
  Ccall(_stratego_t_95);
  Tset(App0("Nil"));
  goto h_71;
  i_71 :
  Epushd(3,3);
  MoveTop(3,1);
  goto u_36;
  u_36 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_71);
  goto b_136;
  l_71 :
  goto k_71;
  b_136 :
  Epushd(4,5);
  NotNULLd(3,2);
  NotNULLd(3,3);
  Tset(App2("TCons",Egetd(3,2),App2("TCons",Egetd(3,3),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(n_71);
  goto a_136;
  n_71 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(4,1);
  goto r_36;
  r_36 :
  TestFunFC(r_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  goto s_36;
  s_36 :
  TestFunFC(r_0,&&fail,Egetd(4,3));
  MoveArg(4,4,4,3,0);
  MoveArg(4,5,4,3,1);
  goto t_36;
  t_36 :
  TestFunFC(s_0,&&fail,Egetd(4,5));
  Rpush(o_71);
  goto c_136;
  o_71 :
  goto m_71;
  c_136 :
  NotNULLd(4,2);
  Tset(Egetd(4,2));
  Rpush(u_71);
  d_136 :
  Cpush(b_72);
  Ccall(_stratego_t_95);
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  goto v_71;
  b_72 :
  Ccontinue(l_72);
  Epushd(5,3);
  MoveTop(5,1);
  goto q_36;
  q_36 :
  TestFunFC(l_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(n_72);
  goto e_136;
  n_72 :
  goto m_72;
  e_136 :
  Tdupl();
  NotNULLd(4,4);
  Tset(Egetd(4,4));
  Rpush(o_72);
  f_136 :
  Cpush(v_72);
  Epushd(6,3);
  MoveTop(6,1);
  goto p_36;
  p_36 :
  TestFunFC(l_0,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  MoveArg(6,3,6,1,1);
  Rpush(a_73);
  goto g_136;
  a_73 :
  goto z_72;
  g_136 :
  Move(5,2,6,2);
  Return();
  z_72 :
  Epopd(6,3);
  goto u_72;
  v_72 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_73);
  goto f_136;
  c_73 :
  AllBuild();
  goto b_73;
  u_72 :
  Cpop();
  b_73 :
  Return();
  o_72 :
  Tpop();
  NotNULLd(5,3);
  Tset(Egetd(5,3));
  Rpush(e_73);
  goto d_136;
  e_73 :
  Return();
  m_72 :
  Epopd(5,3);
  goto v_71;
  l_72 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_73);
  goto d_136;
  g_73 :
  AllBuild();
  goto f_73;
  v_71 :
  Cpop();
  f_73 :
  Return();
  u_71 :
  Return();
  m_71 :
  Epopd(4,5);
  Return();
  k_71 :
  Epopd(3,3);
  goto j_71;
  h_71 :
  Cpop();
  j_71 :
  Return();
  f_71 :
  Return();
  x_66 :
  Epopd(2,5);
  Return();
  p_66 :
  Epopd(1,3);
  goto o_66;
  m_66 :
  Cpop();
  o_66 :
  Return();
  l_66 :
  Return();
  j_66 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_j_97)
  _ST_explode_term();
ENDPROC

PROC(_stratego_k_97)
  Ccall(_stratego_l_97);
  Ccall(_stratego_o_97);
ENDPROC

PROC(_stratego_l_97)
  Epushd(0,4);
  MoveTop(0,1);
  goto d_38;
  d_38 :
  TestFunFC(f_18,&&y_73,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(u_73);
  goto h_136;
  y_73 :
  TestFunFC(g_18,&&z_73,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(u_73);
  goto n_136;
  z_73 :
  TestFunFC(y_10,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(u_73);
  goto t_136;
  u_73 :
  goto m_73;
  t_136 :
  Epushd(1,2);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(s_74);
  u_136 :
  Cpush(x_74);
  Ccall(_stratego_t_95);
  goto w_74;
  x_74 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  goto y_37;
  y_37 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto z_37;
  z_37 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto a_38;
  a_38 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto b_38;
  b_38 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(a_75);
  goto v_136;
  a_75 :
  goto z_74;
  v_136 :
  Epushd(3,4);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_m_97);
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Ccall(_stratego_n_97);
  MoveTop(3,4);
  Move(3,3,3,4);
  NotNULLd(3,1);
  NotNULLd(3,3);
  Tset(App2("Cons",Egetd(3,1),App2("Cons",Egetd(3,3),App0("Nil"))));
  Ccall(_stratego_o_96);
  Epopd(3,4);
  Return();
  z_74 :
  Epopd(2,7);
  OneNextSon();
  Rpush(b_75);
  goto u_136;
  b_75 :
  AllBuild();
  goto y_74;
  w_74 :
  Cpop();
  y_74 :
  Return();
  s_74 :
  Ccall(_stratego_o_96);
  MoveTop(1,2);
  Move(1,1,1,2);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("Cons",ATmakeString("error in overlay "),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" : "),Egetd(1,1)))));
  Epopd(1,2);
  Return();
  m_73 :
  goto l_73;
  n_136 :
  Epushd(1,2);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(c_75);
  o_136 :
  Cpush(k_75);
  Ccall(_stratego_t_95);
  goto d_75;
  k_75 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  goto q_37;
  q_37 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto r_37;
  r_37 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto s_37;
  s_37 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto t_37;
  t_37 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(u_75);
  goto p_136;
  u_75 :
  goto t_75;
  p_136 :
  Epushd(3,4);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_m_97);
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Ccall(_stratego_n_97);
  MoveTop(3,4);
  Move(3,3,3,4);
  NotNULLd(3,1);
  NotNULLd(3,3);
  Tset(App2("Cons",Egetd(3,1),App2("Cons",Egetd(3,3),App0("Nil"))));
  Ccall(_stratego_o_96);
  Epopd(3,4);
  Return();
  t_75 :
  Epopd(2,7);
  OneNextSon();
  Rpush(c_76);
  goto o_136;
  c_76 :
  AllBuild();
  goto l_75;
  d_75 :
  Cpop();
  l_75 :
  Return();
  c_75 :
  Ccall(_stratego_o_96);
  MoveTop(1,2);
  Move(1,1,1,2);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("Cons",ATmakeString("error in definition "),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" : "),Egetd(1,1)))));
  Epopd(1,2);
  Return();
  l_73 :
  goto h_73;
  h_136 :
  Epushd(1,2);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(d_76);
  i_136 :
  Cpush(m_76);
  Ccall(_stratego_t_95);
  goto l_76;
  m_76 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Epushd(2,7);
  MoveTop(2,1);
  goto h_37;
  h_37 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto i_37;
  i_37 :
  TestFunFC(r_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto j_37;
  j_37 :
  TestFunFC(r_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto k_37;
  k_37 :
  TestFunFC(s_0,&&fail,Egetd(2,7));
  Rpush(z_76);
  goto j_136;
  z_76 :
  goto y_76;
  j_136 :
  Epushd(3,4);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_m_97);
  MoveTop(3,2);
  Move(3,1,3,2);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Ccall(_stratego_n_97);
  MoveTop(3,4);
  Move(3,3,3,4);
  NotNULLd(3,1);
  NotNULLd(3,3);
  Tset(App2("Cons",Egetd(3,1),App2("Cons",Egetd(3,3),App0("Nil"))));
  Ccall(_stratego_o_96);
  Epopd(3,4);
  Return();
  y_76 :
  Epopd(2,7);
  OneNextSon();
  Rpush(a_77);
  goto i_136;
  a_77 :
  AllBuild();
  goto x_76;
  l_76 :
  Cpop();
  x_76 :
  Return();
  d_76 :
  Ccall(_stratego_o_96);
  MoveTop(1,2);
  Move(1,1,1,2);
  NotNULLd(0,2);
  NotNULLd(1,1);
  Tset(App2("Cons",ATmakeString("error in rule "),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" : "),Egetd(1,1)))));
  Epopd(1,2);
  Return();
  h_73 :
  Epopd(0,4);
ENDPROC

PROC(_stratego_m_97)
  Epushd(0,5);
  MoveTop(0,1);
  goto h_38;
  h_38 :
  TestFunFC(w_0,&&l_77,Egetd(0,1));
  Rpush(i_77);
  goto z_136;
  l_77 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto i_38;
  i_38 :
  TestFunFC(w_0,&&m_77,Egetd(0,3));
  Rpush(i_77);
  goto a_137;
  m_77 :
  TestFunFC(l_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(i_77);
  goto b_137;
  i_77 :
  goto h_77;
  b_137 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Cons",ATmakeString("variables "),App2("Cons",App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,4),Egetd(0,5))),App2("Cons",ATmakeString(": used, but not bound"),App0("Nil")))));
  Return();
  h_77 :
  goto g_77;
  a_137 :
  NotNULLd(0,2);
  Tset(App2("Cons",ATmakeString("variable "),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(": used, but not bound"),App0("Nil")))));
  Return();
  g_77 :
  goto d_77;
  z_136 :
  Tset(App0("Nil"));
  Return();
  d_77 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_n_97)
  Epushd(0,5);
  MoveTop(0,1);
  goto m_38;
  m_38 :
  TestFunFC(w_0,&&x_77,Egetd(0,1));
  Rpush(w_77);
  goto c_137;
  x_77 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto n_38;
  n_38 :
  TestFunFC(w_0,&&y_77,Egetd(0,3));
  Rpush(w_77);
  goto d_137;
  y_77 :
  TestFunFC(l_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(w_77);
  goto e_137;
  w_77 :
  goto t_77;
  e_137 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("Cons",ATmakeString("variables "),App2("Cons",App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,4),Egetd(0,5))),App2("Cons",ATmakeString(": declared, but not bound"),App0("Nil")))));
  Return();
  t_77 :
  goto r_77;
  d_137 :
  NotNULLd(0,2);
  Tset(App2("Cons",ATmakeString("variable "),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(": declared, but not bound"),App0("Nil")))));
  Return();
  r_77 :
  goto q_77;
  c_137 :
  Tset(App0("Nil"));
  Return();
  q_77 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_o_97)
  Tdupl();
  Ccall(_stratego_p_97);
  Tset(MakeInt(1));
  Ccall(_stratego_z_95);
  Tpop();
ENDPROC

PROC(_stratego_p_97)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_y_95);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_q_97)
  Rpush(z_77);
  i_137 :
  Cpush(c_78);
  MatchFun("Op",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_78);
  j_137 :
  Cpush(f_78);
  Ccall(_stratego_t_95);
  goto e_78;
  f_78 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Rpush(h_78);
  goto i_137;
  h_78 :
  OneNextSon();
  Rpush(i_78);
  goto j_137;
  i_78 :
  AllBuild();
  goto g_78;
  e_78 :
  Cpop();
  g_78 :
  Return();
  d_78 :
  AllBuild();
  goto b_78;
  c_78 :
  goto j_78;
  b_78 :
  Cpop();
  j_78 :
  Ccall(_stratego_r_97);
  Return();
  z_77 :
ENDPROC

PROC(_stratego_r_97)
  Epushd(0,3);
  MoveTop(0,2);
  goto x_38;
  x_38 :
  TestFunFC(d_41,&&r_78,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(q_78);
  goto k_137;
  r_78 :
  TestFunFC(k_10,&&s_78,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(q_78);
  goto l_137;
  s_78 :
  TestFunFC(u_78,&&t_78,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(q_78);
  goto m_137;
  t_78 :
  TestFunFC(w_78,&&v_78,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(q_78);
  goto n_137;
  v_78 :
  TestFunFC(y_78,&&x_78,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(q_78);
  goto o_137;
  x_78 :
  TestFunFC(z_78,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(q_78);
  goto p_137;
  q_78 :
  goto p_78;
  p_137 :
  Tset(App0("Id"));
  Return();
  p_78 :
  goto o_78;
  o_137 :
  NotNULLd(0,3);
  Tset(App1("Match",App1("Real",Egetd(0,3))));
  Return();
  o_78 :
  goto n_78;
  n_137 :
  NotNULLd(0,3);
  Tset(App1("Match",App1("Int",Egetd(0,3))));
  Return();
  n_78 :
  goto m_78;
  m_137 :
  NotNULLd(0,3);
  Tset(App1("Match",App1("Str",Egetd(0,3))));
  Return();
  m_78 :
  goto l_78;
  l_137 :
  NotNULLd(0,3);
  NotNULLd(0,1);
  Tset(App2("Call",App1("SVar",Egetd(0,3)),Egetd(0,1)));
  Return();
  l_78 :
  goto k_78;
  k_137 :
  NotNULLd(0,3);
  Tset(App2("Call",App1("SVar",Egetd(0,3)),App0("Nil")));
  Return();
  k_78 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_s_97)
  Epushd(0,5);
  Ccall(_stratego_t_96);
  MoveTop(0,1);
  goto t_40;
  t_40 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto u_40;
  u_40 :
  TestFunFC(r_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto v_40;
  v_40 :
  TestFunFC(s_0,&&fail,Egetd(0,5));
  Rpush(b_79);
  goto q_137;
  b_79 :
  goto a_79;
  q_137 :
  NotNULLd(0,4);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(c_79);
  r_137 :
  Rpush(d_79);
  s_137 :
  Epushd(1,5);
  MoveTop(1,1);
  goto q_40;
  q_40 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto r_40;
  r_40 :
  TestFunFC(r_0,&&j_79,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto s_40;
  s_40 :
  TestFunFC(s_0,&&k_79,Egetd(1,5));
  Cpush(m_79);
  Rpush(n_79);
  goto t_137;
  n_79 :
  goto l_79;
  m_79 :
  Ccontinue(o_79);
  Rpush(p_79);
  goto x_137;
  p_79 :
  goto l_79;
  o_79 :
  Ccontinue(q_79);
  Rpush(r_79);
  goto c_138;
  r_79 :
  goto l_79;
  q_79 :
  Rpush(t_79);
  goto r_138;
  t_79 :
  goto s_79;
  l_79 :
  Cpop();
  s_79 :
  goto i_79;
  k_79 :
  Rpush(i_79);
  goto x_137;
  j_79 :
  Rpush(i_79);
  goto x_137;
  i_79 :
  goto h_79;
  r_138 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  AllInit();
  u_79 :
  AllNextSon(&&v_79);
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Rpush(w_79);
  goto s_137;
  w_79 :
  Epopd(2,1);
  goto u_79;
  v_79 :
  AllBuild();
  Return();
  h_79 :
  goto g_79;
  c_138 :
  Epushd(2,12);
  Tdupl();
  Epushd(3,9);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_z_96);
  MoveTop(3,1);
  Move(2,1,3,1);
  Rpush(x_79);
  e_138 :
  Cpush(z_79);
  Ccall(_stratego_t_95);
  goto y_79;
  z_79 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_97);
  OneNextSon();
  Rpush(c_80);
  goto e_138;
  c_80 :
  AllBuild();
  goto b_80;
  y_79 :
  Cpop();
  b_80 :
  Return();
  x_79 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Rpush(g_80);
  g_138 :
  Epushd(4,9);
  MoveTop(4,1);
  goto u_39;
  u_39 :
  TestFunFC(r_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,5,4,1,1);
  goto v_39;
  v_39 :
  TestFunFC(w_0,&&s_80,Egetd(4,2));
  goto w_39;
  w_39 :
  TestFunFC(r_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto x_39;
  x_39 :
  TestFunFC(w_0,&&fail,Egetd(4,6));
  goto y_39;
  y_39 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(n_80);
  goto h_138;
  s_80 :
  TestFunFC(l_0,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto z_39;
  z_39 :
  TestFunFC(r_0,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  MoveArg(4,9,4,5,1);
  goto a_40;
  a_40 :
  TestFunFC(l_0,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,8,4,6,1);
  goto b_40;
  b_40 :
  TestFunFC(s_0,&&fail,Egetd(4,9));
  Rpush(n_80);
  goto i_138;
  n_80 :
  goto k_80;
  i_138 :
  Epushd(5,5);
  NotNULLd(4,3);
  NotNULLd(4,7);
  NotNULLd(4,4);
  NotNULLd(4,8);
  Tset(App2("TCons",App2("TCons",Egetd(4,3),App2("TCons",Egetd(4,7),App0("TNil"))),App2("TCons",App2("TCons",Egetd(4,4),App2("TCons",Egetd(4,8),App0("TNil"))),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Rpush(x_80);
  goto g_138;
  x_80 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  MoveTop(5,1);
  goto r_39;
  r_39 :
  TestFunFC(r_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  goto s_39;
  s_39 :
  TestFunFC(r_0,&&fail,Egetd(5,3));
  MoveArg(5,4,5,3,0);
  MoveArg(5,5,5,3,1);
  goto t_39;
  t_39 :
  TestFunFC(s_0,&&fail,Egetd(5,5));
  Rpush(b_81);
  goto j_138;
  b_81 :
  goto w_80;
  j_138 :
  NotNULLd(5,2);
  NotNULLd(5,4);
  Tset(App2("Cons",Egetd(5,2),Egetd(5,4)));
  Return();
  w_80 :
  Epopd(5,5);
  Return();
  k_80 :
  goto h_80;
  h_138 :
  Tset(App0("Nil"));
  Return();
  h_80 :
  Epopd(4,9);
  Return();
  g_80 :
  MoveTop(3,4);
  Move(3,3,3,4);
  NotNULLd(3,3);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(3,3),App2("TCons",Egetd(1,4),App0("TNil"))));
  MoveTop(3,5);
  goto f_40;
  f_40 :
  TestFunFC(r_0,&&fail,Egetd(3,5));
  MoveArg(3,6,3,5,0);
  MoveArg(3,7,3,5,1);
  goto g_40;
  g_40 :
  TestFunFC(r_0,&&fail,Egetd(3,7));
  MoveArg(3,8,3,7,0);
  MoveArg(3,9,3,7,1);
  goto h_40;
  h_40 :
  TestFunFC(s_0,&&fail,Egetd(3,9));
  Rpush(d_81);
  goto l_138;
  d_81 :
  goto c_81;
  l_138 :
  Epushd(4,1);
  NotNULLd(3,6);
  Tset(Egetd(3,6));
  Rpush(i_81);
  m_138 :
  Cpush(n_81);
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_81);
  goto m_138;
  o_81 :
  AllBuild();
  goto j_81;
  n_81 :
  Ccall(_stratego_t_95);
  NotNULLd(3,8);
  Tset(Egetd(3,8));
  goto u_81;
  j_81 :
  Cpop();
  u_81 :
  Return();
  i_81 :
  MoveTop(4,1);
  Move(2,3,4,1);
  Epopd(4,1);
  Return();
  c_81 :
  Epopd(3,9);
  Tpop();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  OneNextSon();
  AllBuild();
  MoveTop(2,5);
  Move(2,4,2,5);
  NotNULLd(2,4);
  NotNULLd(1,4);
  NotNULLd(2,3);
  Tset(App2("TCons",Egetd(2,4),App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,3),App0("TNil")))));
  MoveTop(2,6);
  goto l_40;
  l_40 :
  TestFunFC(r_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto m_40;
  m_40 :
  TestFunFC(r_0,&&fail,Egetd(2,8));
  MoveArg(2,9,2,8,0);
  MoveArg(2,10,2,8,1);
  goto n_40;
  n_40 :
  TestFunFC(r_0,&&fail,Egetd(2,10));
  MoveArg(2,11,2,10,0);
  MoveArg(2,12,2,10,1);
  goto o_40;
  o_40 :
  TestFunFC(s_0,&&fail,Egetd(2,12));
  Rpush(x_81);
  goto p_138;
  x_81 :
  goto v_81;
  p_138 :
  NotNULLd(2,7);
  Tset(Egetd(2,7));
  MatchFun("Scope",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  MoveTop(3,1);
  NotNULLd(3,1);
  NotNULLd(2,11);
  Tset(App2("TCons",Egetd(3,1),App2("TCons",Egetd(2,11),App0("TNil"))));
  Rpush(c_82);
  goto r_137;
  c_82 :
  Epopd(3,1);
  AllBuild();
  Return();
  v_81 :
  Epopd(2,12);
  Return();
  g_79 :
  goto f_79;
  x_137 :
  Epushd(2,2);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Tdupl();
  Epushd(3,2);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(3,1);
  goto k_39;
  k_39 :
  TestFunFC(d_41,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(e_82);
  goto z_137;
  e_82 :
  goto d_82;
  z_137 :
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Move(2,1,3,2);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(2,2,0,2);
  Return();
  d_82 :
  Epopd(3,2);
  Tpop();
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(2,2),App0("TNil"))));
  Ccall(_stratego_u_96);
  Epopd(2,2);
  Return();
  f_79 :
  goto e_79;
  t_137 :
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MatchFun("Var",1);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(2,1);
  NotNULLd(1,4);
  Tset(App2("TCons",Egetd(2,1),App2("TCons",Egetd(1,4),App0("TNil"))));
  Ccall(_stratego_u_96);
  Epopd(2,1);
  AllBuild();
  Return();
  e_79 :
  Epopd(1,5);
  Return();
  d_79 :
  Return();
  c_79 :
  Return();
  a_79 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_t_97)
  _ST_new();
ENDPROC

PROC(_stratego_u_97)
  Rpush(m_82);
  t_138 :
  Cpush(p_82);
  Ccall(_stratego_t_95);
  goto o_82;
  p_82 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  Ccall(_stratego_v_97);
  OneNextSon();
  Rpush(r_82);
  goto t_138;
  r_82 :
  AllBuild();
  goto q_82;
  o_82 :
  Cpop();
  q_82 :
  Return();
  m_82 :
  Ccall(_stratego_o_96);
  Ccall(_stratego_w_97);
ENDPROC

PROC(_stratego_v_97)
  _ST_explode_string();
ENDPROC

PROC(_stratego_w_97)
  _ST_implode_string();
ENDPROC

PROC(_stratego_x_97)
  Rpush(s_82);
  u_138 :
  Cpush(e_83);
  Ccall(_stratego_t_95);
  Tset(MakeInt(0));
  goto d_83;
  e_83 :
  Epushd(0,3);
  MoveTop(0,1);
  goto y_40;
  y_40 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(m_83);
  goto v_138;
  m_83 :
  goto g_83;
  v_138 :
  Epushd(1,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(n_83);
  goto u_138;
  n_83 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_y_97);
  Epopd(1,1);
  Return();
  g_83 :
  Epopd(0,3);
  goto f_83;
  d_83 :
  Cpop();
  f_83 :
  Return();
  s_82 :
ENDPROC

PROC(_stratego_y_97)
  _ST_add();
ENDPROC

PROC(_stratego_z_97)
  Rpush(a_84);
  x_138 :
  Epushd(0,6);
  MoveTop(0,1);
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_a_98);
  MoveTop(0,3);
  Tset(MakeInt(48));
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",MakeInt(48),App0("TNil"))));
  Ccall(_stratego_y_97);
  MoveTop(0,4);
  Move(0,2,0,4);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tset(MakeInt(10));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(10),App0("TNil"))));
  Ccall(_stratego_b_98);
  Ccall(_stratego_c_98);
  MoveTop(0,6);
  Move(0,5,0,6);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,5),App0("TNil"))));
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons",2);
  TravInit();
  OneNextSon();
  Cpush(d_84);
  Epushd(1,1);
  MoveTop(1,1);
  goto j_41;
  j_41 :
  TestInt(1,1,0,&&fail);
  Rpush(k_84);
  goto h_139;
  k_84 :
  goto j_84;
  h_139 :
  Tset(App0("Nil"));
  Return();
  j_84 :
  Epopd(1,1);
  goto c_84;
  d_84 :
  Rpush(q_84);
  goto x_138;
  q_84 :
  goto l_84;
  c_84 :
  Cpop();
  l_84 :
  OneNextSon();
  Ccall(_stratego_i_96);
  AllBuild();
  AllBuild();
  Ccall(_stratego_d_98);
  Epopd(0,6);
  Return();
  a_84 :
  Ccall(_stratego_e_98);
  Ccall(_stratego_w_97);
ENDPROC

PROC(_stratego_a_98)
  _ST_mod();
ENDPROC

PROC(_stratego_b_98)
  _ST_div();
ENDPROC

PROC(_stratego_c_98)
  _ST_int();
ENDPROC

PROC(_stratego_d_98)
  Epushd(0,7);
  MoveTop(0,1);
  goto m_41;
  m_41 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto n_41;
  n_41 :
  TestFunFC(r_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto o_41;
  o_41 :
  TestFunFC(w_0,&&b_85,Egetd(0,4));
  goto p_41;
  p_41 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(y_84);
  goto i_139;
  b_85 :
  TestFunFC(l_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto q_41;
  q_41 :
  TestFunFC(s_0,&&fail,Egetd(0,7));
  Rpush(y_84);
  goto j_139;
  y_84 :
  goto x_84;
  j_139 :
  NotNULLd(0,2);
  NotNULLd(0,5);
  NotNULLd(0,6);
  Tset(App2("Cons",Egetd(0,2),App2("Cons",Egetd(0,5),Egetd(0,6))));
  Return();
  x_84 :
  goto u_84;
  i_139 :
  NotNULLd(0,2);
  Tset(App2("Cons",Egetd(0,2),App0("Nil")));
  Return();
  u_84 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_e_98)
  Epushd(0,6);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",App0("Nil"),App0("TNil"))));
  Rpush(l_85);
  l_139 :
  Cpush(n_85);
  Epushd(1,7);
  MoveTop(1,1);
  goto t_41;
  t_41 :
  TestFunFC(r_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,5,1,1,1);
  goto u_41;
  u_41 :
  TestFunFC(l_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto v_41;
  v_41 :
  TestFunFC(r_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto w_41;
  w_41 :
  TestFunFC(s_0,&&fail,Egetd(1,7));
  Rpush(w_85);
  goto m_139;
  w_85 :
  goto v_85;
  m_139 :
  NotNULLd(1,4);
  NotNULLd(1,3);
  NotNULLd(1,6);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",App2("Cons",Egetd(1,3),Egetd(1,6)),App0("TNil"))));
  Rpush(a_86);
  goto l_139;
  a_86 :
  Return();
  v_85 :
  Epopd(1,7);
  goto m_85;
  n_85 :
  goto b_86;
  m_85 :
  Cpop();
  b_86 :
  Return();
  l_85 :
  MoveTop(0,2);
  goto y_41;
  y_41 :
  TestFunFC(r_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto z_41;
  z_41 :
  TestFunFC(w_0,&&fail,Egetd(0,3));
  goto a_42;
  a_42 :
  TestFunFC(r_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto b_42;
  b_42 :
  TestFunFC(s_0,&&fail,Egetd(0,6));
  Rpush(h_86);
  goto n_139;
  h_86 :
  goto k_85;
  n_139 :
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Return();
  k_85 :
  Epopd(0,6);
ENDPROC
