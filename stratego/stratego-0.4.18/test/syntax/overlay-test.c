#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,w_0);
VARDECL(AFun,v_0);
VARDECL(AFun,u_0);
VARDECL(AFun,t_0);
VARDECL(AFun,s_0);
VARDECL(AFun,r_0);
VARDECL(AFun,q_0);
VARDECL(AFun,d_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_b_3);
PROCDECL(_stratego_c_3);
PROCDECL(_stratego_d_3);
PROCDECL(_stratego_e_3);
PROCDECL(_stratego_f_3);
PROCDECL(_stratego_g_3);
PROCDECL(_stratego_h_3);
PROCDECL(_stratego_i_3);
PROCDECL(_stratego_j_3);
PROCDECL(_stratego_k_3);
PROCDECL(_stratego_l_3);
PROCDECL(_stratego_m_3);

PROC(_stratego_init_afuns)
  MOVE(w_0,ATmakeAFun("Nil",0,0));
  MOVE(v_0,ATmakeAFun("lit",1,0));
  MOVE(u_0,ATmakeAFun("layout",0,0));
  MOVE(t_0,ATmakeAFun("sort",1,0));
  MOVE(s_0,ATmakeAFun("Cons",2,0));
  MOVE(r_0,ATmakeAFun("prod",3,0));
  MOVE(q_0,ATmakeAFun("appl",2,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("overlay-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("test suite: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_b_3);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_c_3);
  Ccall(_stratego_h_3);
  Ccall(_stratego_d_3);
  Ccall(_stratego_f_3);
ENDPROC

PROC(_stratego_b_3)
  _ST_printnl();
ENDPROC

PROC(_stratego_c_3)
  Tset(App2("TCons",MakeInt(0),App2("TCons",MakeInt(0),App0("TNil"))));
ENDPROC

PROC(_stratego_d_3)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("successes: "),App2("Cons",Egetd(0,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_b_3);
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
  Ccall(_stratego_b_3);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_e_3);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_e_3)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_4;
  f_4 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(c_0);
  goto h_4;
  c_0 :
  goto b_0;
  h_4 :
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_3)
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
  goto j_4;
  j_4 :
  TestInt(0,1,0,&&fail);
  Rpush(h_0);
  goto l_4;
  h_0 :
  goto g_0;
  l_4 :
  Return();
  g_0 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_e_3);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_g_3);
  goto e_0;
  f_0 :
  Tset(MakeInt(1));
  Ccall(_stratego_g_3);
  goto i_0;
  e_0 :
  Cpop();
  i_0 :
ENDPROC

PROC(_stratego_g_3)
  _ST_exit();
ENDPROC

PROC(_stratego_h_3)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("overlay-test2"));
  Ccall(_stratego_l_3);
  Tpop();
  Cpush(l_0);
  Tdupl();
  Cpush(n_0);
  Epushd(1,61);
  Tset(App2("appl",App3("prod",App2("Cons",App1("sort",ATmakeString("E")),App2("Cons",App0("layout"),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",App0("layout"),App2("Cons",App1("sort",ATmakeString("E")),App0("Nil")))))),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("lex",App1("sort",ATmakeString("Id"))),App0("Nil")),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",ATmakeString("x"),App0("Nil"))),App2("Cons",ATmakeString(" "),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",ATmakeString(" "),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("sort",ATmakeString("E")),App2("Cons",App0("layout"),App2("Cons",App1("lit",ATmakeString("+")),App2("Cons",App0("layout"),App2("Cons",App1("sort",ATmakeString("E")),App0("Nil")))))),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("lex",App1("sort",ATmakeString("Id"))),App0("Nil")),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",ATmakeString("y"),App0("Nil"))),App2("Cons",ATmakeString(" "),App2("Cons",App1("lit",ATmakeString("+")),App2("Cons",ATmakeString(" "),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("lex",App1("sort",ATmakeString("Id"))),App0("Nil")),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",ATmakeString("z"),App0("Nil"))),App0("Nil"))))))),App0("Nil"))))))));
  MoveTop(1,1);
  goto o_4;
  o_4 :
  TestFunFC(q_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,20,1,1,1);
  goto p_4;
  p_4 :
  TestFunFC(r_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,17,1,2,1);
  MoveArg(1,19,1,2,2);
  goto q_4;
  q_4 :
  TestFunFC(s_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,6,1,3,1);
  goto r_4;
  r_4 :
  TestFunFC(t_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  goto s_4;
  s_4 :
  TestStr(1,5,"E",&&fail);
  goto t_4;
  t_4 :
  TestFunFC(s_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto u_4;
  u_4 :
  TestFunFC(u_0,&&fail,Egetd(1,7));
  goto v_4;
  v_4 :
  TestFunFC(s_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,11,1,8,1);
  goto w_4;
  w_4 :
  TestFunFC(v_0,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  goto x_4;
  x_4 :
  TestStr(1,10,"*",&&fail);
  goto y_4;
  y_4 :
  TestFunFC(s_0,&&fail,Egetd(1,11));
  MoveArg(1,12,1,11,0);
  MoveArg(1,13,1,11,1);
  goto z_4;
  z_4 :
  TestFunFC(u_0,&&fail,Egetd(1,12));
  goto a_5;
  a_5 :
  TestFunFC(s_0,&&fail,Egetd(1,13));
  MoveArg(1,14,1,13,0);
  MoveArg(1,16,1,13,1);
  goto b_5;
  b_5 :
  TestFunFC(t_0,&&fail,Egetd(1,14));
  MoveArg(1,15,1,14,0);
  goto c_5;
  c_5 :
  TestStr(1,15,"E",&&fail);
  goto d_5;
  d_5 :
  TestFunFC(w_0,&&fail,Egetd(1,16));
  goto e_5;
  e_5 :
  TestFunFC(t_0,&&fail,Egetd(1,17));
  MoveArg(1,18,1,17,0);
  goto f_5;
  f_5 :
  TestStr(1,18,"E",&&fail);
  goto g_5;
  g_5 :
  TestFunFC(w_0,&&fail,Egetd(1,19));
  goto h_5;
  h_5 :
  TestFunFC(s_0,&&fail,Egetd(1,20));
  MoveArg(1,21,1,20,0);
  MoveArg(1,22,1,20,1);
  goto i_5;
  i_5 :
  TestFunFC(s_0,&&fail,Egetd(1,22));
  MoveArg(1,23,1,22,0);
  MoveArg(1,24,1,22,1);
  goto j_5;
  j_5 :
  TestFunFC(s_0,&&fail,Egetd(1,24));
  MoveArg(1,25,1,24,0);
  MoveArg(1,27,1,24,1);
  goto k_5;
  k_5 :
  TestFunFC(v_0,&&fail,Egetd(1,25));
  MoveArg(1,26,1,25,0);
  goto l_5;
  l_5 :
  TestStr(1,26,"*",&&fail);
  goto m_5;
  m_5 :
  TestFunFC(s_0,&&fail,Egetd(1,27));
  MoveArg(1,28,1,27,0);
  MoveArg(1,29,1,27,1);
  goto n_5;
  n_5 :
  TestFunFC(s_0,&&fail,Egetd(1,29));
  MoveArg(1,30,1,29,0);
  MoveArg(1,61,1,29,1);
  goto o_5;
  o_5 :
  TestFunFC(q_0,&&fail,Egetd(1,30));
  MoveArg(1,31,1,30,0);
  MoveArg(1,49,1,30,1);
  goto p_5;
  p_5 :
  TestFunFC(r_0,&&fail,Egetd(1,31));
  MoveArg(1,32,1,31,0);
  MoveArg(1,46,1,31,1);
  MoveArg(1,48,1,31,2);
  goto q_5;
  q_5 :
  TestFunFC(s_0,&&fail,Egetd(1,32));
  MoveArg(1,33,1,32,0);
  MoveArg(1,35,1,32,1);
  goto r_5;
  r_5 :
  TestFunFC(t_0,&&fail,Egetd(1,33));
  MoveArg(1,34,1,33,0);
  goto s_5;
  s_5 :
  TestStr(1,34,"E",&&fail);
  goto t_5;
  t_5 :
  TestFunFC(s_0,&&fail,Egetd(1,35));
  MoveArg(1,36,1,35,0);
  MoveArg(1,37,1,35,1);
  goto u_5;
  u_5 :
  TestFunFC(u_0,&&fail,Egetd(1,36));
  goto v_5;
  v_5 :
  TestFunFC(s_0,&&fail,Egetd(1,37));
  MoveArg(1,38,1,37,0);
  MoveArg(1,40,1,37,1);
  goto w_5;
  w_5 :
  TestFunFC(v_0,&&fail,Egetd(1,38));
  MoveArg(1,39,1,38,0);
  goto x_5;
  x_5 :
  TestStr(1,39,"+",&&fail);
  goto y_5;
  y_5 :
  TestFunFC(s_0,&&fail,Egetd(1,40));
  MoveArg(1,41,1,40,0);
  MoveArg(1,42,1,40,1);
  goto z_5;
  z_5 :
  TestFunFC(u_0,&&fail,Egetd(1,41));
  goto a_6;
  a_6 :
  TestFunFC(s_0,&&fail,Egetd(1,42));
  MoveArg(1,43,1,42,0);
  MoveArg(1,45,1,42,1);
  goto b_6;
  b_6 :
  TestFunFC(t_0,&&fail,Egetd(1,43));
  MoveArg(1,44,1,43,0);
  goto c_6;
  c_6 :
  TestStr(1,44,"E",&&fail);
  goto d_6;
  d_6 :
  TestFunFC(w_0,&&fail,Egetd(1,45));
  goto e_6;
  e_6 :
  TestFunFC(t_0,&&fail,Egetd(1,46));
  MoveArg(1,47,1,46,0);
  goto f_6;
  f_6 :
  TestStr(1,47,"E",&&fail);
  goto g_6;
  g_6 :
  TestFunFC(w_0,&&fail,Egetd(1,48));
  goto h_6;
  h_6 :
  TestFunFC(s_0,&&fail,Egetd(1,49));
  MoveArg(1,50,1,49,0);
  MoveArg(1,51,1,49,1);
  goto i_6;
  i_6 :
  TestFunFC(s_0,&&fail,Egetd(1,51));
  MoveArg(1,52,1,51,0);
  MoveArg(1,53,1,51,1);
  goto j_6;
  j_6 :
  TestFunFC(s_0,&&fail,Egetd(1,53));
  MoveArg(1,54,1,53,0);
  MoveArg(1,56,1,53,1);
  goto k_6;
  k_6 :
  TestFunFC(v_0,&&fail,Egetd(1,54));
  MoveArg(1,55,1,54,0);
  goto l_6;
  l_6 :
  TestStr(1,55,"+",&&fail);
  goto m_6;
  m_6 :
  TestFunFC(s_0,&&fail,Egetd(1,56));
  MoveArg(1,57,1,56,0);
  MoveArg(1,58,1,56,1);
  goto n_6;
  n_6 :
  TestFunFC(s_0,&&fail,Egetd(1,58));
  MoveArg(1,59,1,58,0);
  MoveArg(1,60,1,58,1);
  goto o_6;
  o_6 :
  TestFunFC(w_0,&&fail,Egetd(1,60));
  goto p_6;
  p_6 :
  TestFunFC(w_0,&&fail,Egetd(1,61));
  Rpush(p_0);
  goto o_10;
  p_0 :
  goto o_0;
  o_10 :
  NotNULLd(1,50);
  NotNULLd(1,21);
  NotNULLd(1,59);
  Tset(App2("appl",App3("prod",App2("Cons",App1("sort",ATmakeString("E")),App2("Cons",App0("layout"),App2("Cons",App1("lit",ATmakeString("+")),App2("Cons",App0("layout"),App2("Cons",App1("sort",ATmakeString("E")),App0("Nil")))))),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("sort",ATmakeString("E")),App2("Cons",App0("layout"),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",App0("layout"),App2("Cons",App1("sort",ATmakeString("E")),App0("Nil")))))),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",Egetd(1,21),App2("Cons",ATmakeString(" "),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",ATmakeString(" "),App2("Cons",Egetd(1,50),App0("Nil"))))))),App2("Cons",ATmakeString(" "),App2("Cons",App1("lit",ATmakeString("+")),App2("Cons",ATmakeString(" "),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("sort",ATmakeString("E")),App2("Cons",App0("layout"),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",App0("layout"),App2("Cons",App1("sort",ATmakeString("E")),App0("Nil")))))),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",Egetd(1,21),App2("Cons",ATmakeString(" "),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",ATmakeString(" "),App2("Cons",Egetd(1,59),App0("Nil"))))))),App0("Nil"))))))));
  Tdupl();
  NotNULLd(1,50);
  NotNULLd(1,21);
  NotNULLd(1,59);
  Tset(App2("appl",App3("prod",App2("Cons",App1("sort",ATmakeString("E")),App2("Cons",App0("layout"),App2("Cons",App1("lit",ATmakeString("+")),App2("Cons",App0("layout"),App2("Cons",App1("sort",ATmakeString("E")),App0("Nil")))))),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("sort",ATmakeString("E")),App2("Cons",App0("layout"),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",App0("layout"),App2("Cons",App1("sort",ATmakeString("E")),App0("Nil")))))),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",Egetd(1,21),App2("Cons",ATmakeString(" "),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",ATmakeString(" "),App2("Cons",Egetd(1,50),App0("Nil"))))))),App2("Cons",ATmakeString(" "),App2("Cons",App1("lit",ATmakeString("+")),App2("Cons",ATmakeString(" "),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("sort",ATmakeString("E")),App2("Cons",App0("layout"),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",App0("layout"),App2("Cons",App1("sort",ATmakeString("E")),App0("Nil")))))),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",Egetd(1,21),App2("Cons",ATmakeString(" "),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",ATmakeString(" "),App2("Cons",Egetd(1,59),App0("Nil"))))))),App0("Nil"))))))));
  MoveTop(0,1);
  Tpop();
  Return();
  o_0 :
  Epopd(1,61);
  goto m_0;
  n_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_l_3);
  Ccall(_stratego_m_3);
  goto x_0;
  m_0 :
  Cpop();
  x_0 :
  Tset(App2("appl",App3("prod",App2("Cons",App1("sort",ATmakeString("E")),App2("Cons",App0("layout"),App2("Cons",App1("lit",ATmakeString("+")),App2("Cons",App0("layout"),App2("Cons",App1("sort",ATmakeString("E")),App0("Nil")))))),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("sort",ATmakeString("E")),App2("Cons",App0("layout"),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",App0("layout"),App2("Cons",App1("sort",ATmakeString("E")),App0("Nil")))))),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("lex",App1("sort",ATmakeString("Id"))),App0("Nil")),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",ATmakeString("x"),App0("Nil"))),App2("Cons",ATmakeString(" "),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",ATmakeString(" "),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("lex",App1("sort",ATmakeString("Id"))),App0("Nil")),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",ATmakeString("y"),App0("Nil"))),App0("Nil"))))))),App2("Cons",ATmakeString(" "),App2("Cons",App1("lit",ATmakeString("+")),App2("Cons",ATmakeString(" "),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("sort",ATmakeString("E")),App2("Cons",App0("layout"),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",App0("layout"),App2("Cons",App1("sort",ATmakeString("E")),App0("Nil")))))),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("lex",App1("sort",ATmakeString("Id"))),App0("Nil")),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",ATmakeString("x"),App0("Nil"))),App2("Cons",ATmakeString(" "),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",ATmakeString(" "),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("lex",App1("sort",ATmakeString("Id"))),App0("Nil")),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",ATmakeString("z"),App0("Nil"))),App0("Nil"))))))),App0("Nil"))))))));
  Tdupl();
  Tset(App2("appl",App3("prod",App2("Cons",App1("sort",ATmakeString("E")),App2("Cons",App0("layout"),App2("Cons",App1("lit",ATmakeString("+")),App2("Cons",App0("layout"),App2("Cons",App1("sort",ATmakeString("E")),App0("Nil")))))),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("sort",ATmakeString("E")),App2("Cons",App0("layout"),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",App0("layout"),App2("Cons",App1("sort",ATmakeString("E")),App0("Nil")))))),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("lex",App1("sort",ATmakeString("Id"))),App0("Nil")),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",ATmakeString("x"),App0("Nil"))),App2("Cons",ATmakeString(" "),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",ATmakeString(" "),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("lex",App1("sort",ATmakeString("Id"))),App0("Nil")),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",ATmakeString("y"),App0("Nil"))),App0("Nil"))))))),App2("Cons",ATmakeString(" "),App2("Cons",App1("lit",ATmakeString("+")),App2("Cons",ATmakeString(" "),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("sort",ATmakeString("E")),App2("Cons",App0("layout"),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",App0("layout"),App2("Cons",App1("sort",ATmakeString("E")),App0("Nil")))))),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("lex",App1("sort",ATmakeString("Id"))),App0("Nil")),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",ATmakeString("x"),App0("Nil"))),App2("Cons",ATmakeString(" "),App2("Cons",App1("lit",ATmakeString("*")),App2("Cons",ATmakeString(" "),App2("Cons",App2("appl",App3("prod",App2("Cons",App1("lex",App1("sort",ATmakeString("Id"))),App0("Nil")),App1("sort",ATmakeString("E")),App0("Nil")),App2("Cons",ATmakeString("z"),App0("Nil"))),App0("Nil"))))))),App0("Nil"))))))));
  MoveTop(0,2);
  Tpop();
  Cpush(z_0);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto y_0;
  z_0 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  result not equal: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_b_3);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("  expected: "),App2("Cons",Egetd(1,1),App0("Nil"))),App0("TNil"))));
  Ccall(_stratego_b_3);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_m_3);
  goto a_1;
  y_0 :
  Cpop();
  a_1 :
  Tpop();
  Ccall(_stratego_i_3);
  goto j_0;
  l_0 :
  Ccall(_stratego_k_3);
  goto b_1;
  j_0 :
  Cpop();
  b_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_i_3)
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",MakeInt(1),App0("TNil"))));
  Ccall(_stratego_j_3);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_e_3);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_j_3)
  _ST_add();
ENDPROC

PROC(_stratego_k_3)
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
  Ccall(_stratego_j_3);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_e_3);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_l_3)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_b_3);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_m_3)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto c_12;
  c_12 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto d_12;
  d_12 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto e_12;
  e_12 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(d_1);
  goto n_12;
  d_1 :
  goto c_1;
  n_12 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  c_1 :
  Epopd(0,6);
ENDPROC
