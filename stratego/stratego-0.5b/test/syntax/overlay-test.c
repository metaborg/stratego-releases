#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,v_0);
VARDECL(AFun,s_0);
VARDECL(AFun,r_0);
VARDECL(AFun,q_0);
VARDECL(AFun,p_0);
VARDECL(AFun,o_0);
VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
VARDECL(AFun,e_0);
VARDECL(AFun,d_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_w_1);
PROCDECL(_stratego_x_1);
PROCDECL(_stratego_y_1);
PROCDECL(_stratego_z_1);
PROCDECL(_stratego_a_2);
PROCDECL(_stratego_b_2);
PROCDECL(_stratego_c_2);
PROCDECL(_stratego_d_2);
PROCDECL(_stratego_e_2);
PROCDECL(_stratego_f_2);
PROCDECL(_stratego_g_2);
PROCDECL(_stratego_h_2);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(v_0,ATmakeAFun("lex",1,0));
  MOVE(s_0,ATmakeAFun("lit",1,0));
  MOVE(r_0,ATmakeAFun("layout",0,0));
  MOVE(q_0,ATmakeAFun("sort",1,0));
  MOVE(p_0,ATmakeAFun("prod",3,0));
  MOVE(o_0,ATmakeAFun("appl",2,0));
  MOVE(g_0,ATmakeAFun("Nil",0,0));
  MOVE(f_0,ATmakeAFun("Cons",2,0));
  MOVE(e_0,ATmakeAFun("stderr",0,0));
  MOVE(d_0,ATmakeAFun("TNil",0,0));
  MOVE(c_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_w_1)
  Epushd(0,6);
  MoveTop(0,1);
  MoveTop(0,2);
  goto n_0;
  n_0 :
  TestFunFC(c_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto t_0;
  t_0 :
  TestFunFC(c_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto u_0;
  u_0 :
  TestFunFC(d_0,&&fail,Egetd(0,6));
  Rpush(b_0);
  goto m_0;
  b_0 :
  goto a_0;
  m_0 :
  Move(0,1,0,3);
  Move(0,1,0,5);
  Return();
  a_0 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_x_1)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(f_0,Egetd(0,1),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_h_2);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_y_1)
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl2(c_0,MakeInt(1),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_z_1);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_e_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_z_1)
  _ST_add();
ENDPROC

PROC(_stratego_a_2)
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl2(c_0,MakeInt(1),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_z_1);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_e_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_b_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("overlay-test2"));
  Ccall(_stratego_x_1);
  Tpop();
  Cpush(i_0);
  Tdupl();
  Cpush(k_0);
  Epushd(1,61);
  Tset((ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)))))),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(v_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("Id"))),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,ATmakeString("x"),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("+")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)))))),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(v_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("Id"))),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,ATmakeString("y"),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("+")),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(v_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("Id"))),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,ATmakeString("z"),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl0(g_0))))))),(ATerm)ATmakeAppl0(g_0))))))));
  MoveTop(1,1);
  goto c_3;
  c_3 :
  TestFunFC(o_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,20,1,1,1);
  goto d_3;
  d_3 :
  TestFunFC(p_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,17,1,2,1);
  MoveArg(1,19,1,2,2);
  goto e_3;
  e_3 :
  TestFunFC(f_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,6,1,3,1);
  goto f_3;
  f_3 :
  TestFunFC(q_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  goto g_3;
  g_3 :
  TestStr(1,5,"E",&&fail);
  goto h_3;
  h_3 :
  TestFunFC(f_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,8,1,6,1);
  goto i_3;
  i_3 :
  TestFunFC(r_0,&&fail,Egetd(1,7));
  goto j_3;
  j_3 :
  TestFunFC(f_0,&&fail,Egetd(1,8));
  MoveArg(1,9,1,8,0);
  MoveArg(1,11,1,8,1);
  goto k_3;
  k_3 :
  TestFunFC(s_0,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  goto l_3;
  l_3 :
  TestStr(1,10,"*",&&fail);
  goto m_3;
  m_3 :
  TestFunFC(f_0,&&fail,Egetd(1,11));
  MoveArg(1,12,1,11,0);
  MoveArg(1,13,1,11,1);
  goto n_3;
  n_3 :
  TestFunFC(r_0,&&fail,Egetd(1,12));
  goto o_3;
  o_3 :
  TestFunFC(f_0,&&fail,Egetd(1,13));
  MoveArg(1,14,1,13,0);
  MoveArg(1,16,1,13,1);
  goto p_3;
  p_3 :
  TestFunFC(q_0,&&fail,Egetd(1,14));
  MoveArg(1,15,1,14,0);
  goto q_3;
  q_3 :
  TestStr(1,15,"E",&&fail);
  goto r_3;
  r_3 :
  TestFunFC(g_0,&&fail,Egetd(1,16));
  goto s_3;
  s_3 :
  TestFunFC(q_0,&&fail,Egetd(1,17));
  MoveArg(1,18,1,17,0);
  goto t_3;
  t_3 :
  TestStr(1,18,"E",&&fail);
  goto u_3;
  u_3 :
  TestFunFC(g_0,&&fail,Egetd(1,19));
  goto v_3;
  v_3 :
  TestFunFC(f_0,&&fail,Egetd(1,20));
  MoveArg(1,21,1,20,0);
  MoveArg(1,22,1,20,1);
  goto w_3;
  w_3 :
  TestFunFC(f_0,&&fail,Egetd(1,22));
  MoveArg(1,23,1,22,0);
  MoveArg(1,24,1,22,1);
  goto x_3;
  x_3 :
  TestFunFC(f_0,&&fail,Egetd(1,24));
  MoveArg(1,25,1,24,0);
  MoveArg(1,27,1,24,1);
  goto y_3;
  y_3 :
  TestFunFC(s_0,&&fail,Egetd(1,25));
  MoveArg(1,26,1,25,0);
  goto z_3;
  z_3 :
  TestStr(1,26,"*",&&fail);
  goto a_4;
  a_4 :
  TestFunFC(f_0,&&fail,Egetd(1,27));
  MoveArg(1,28,1,27,0);
  MoveArg(1,29,1,27,1);
  goto b_4;
  b_4 :
  TestFunFC(f_0,&&fail,Egetd(1,29));
  MoveArg(1,30,1,29,0);
  MoveArg(1,61,1,29,1);
  goto c_4;
  c_4 :
  TestFunFC(o_0,&&fail,Egetd(1,30));
  MoveArg(1,31,1,30,0);
  MoveArg(1,49,1,30,1);
  goto d_4;
  d_4 :
  TestFunFC(p_0,&&fail,Egetd(1,31));
  MoveArg(1,32,1,31,0);
  MoveArg(1,46,1,31,1);
  MoveArg(1,48,1,31,2);
  goto e_4;
  e_4 :
  TestFunFC(f_0,&&fail,Egetd(1,32));
  MoveArg(1,33,1,32,0);
  MoveArg(1,35,1,32,1);
  goto f_4;
  f_4 :
  TestFunFC(q_0,&&fail,Egetd(1,33));
  MoveArg(1,34,1,33,0);
  goto g_4;
  g_4 :
  TestStr(1,34,"E",&&fail);
  goto h_4;
  h_4 :
  TestFunFC(f_0,&&fail,Egetd(1,35));
  MoveArg(1,36,1,35,0);
  MoveArg(1,37,1,35,1);
  goto i_4;
  i_4 :
  TestFunFC(r_0,&&fail,Egetd(1,36));
  goto j_4;
  j_4 :
  TestFunFC(f_0,&&fail,Egetd(1,37));
  MoveArg(1,38,1,37,0);
  MoveArg(1,40,1,37,1);
  goto k_4;
  k_4 :
  TestFunFC(s_0,&&fail,Egetd(1,38));
  MoveArg(1,39,1,38,0);
  goto l_4;
  l_4 :
  TestStr(1,39,"+",&&fail);
  goto m_4;
  m_4 :
  TestFunFC(f_0,&&fail,Egetd(1,40));
  MoveArg(1,41,1,40,0);
  MoveArg(1,42,1,40,1);
  goto n_4;
  n_4 :
  TestFunFC(r_0,&&fail,Egetd(1,41));
  goto o_4;
  o_4 :
  TestFunFC(f_0,&&fail,Egetd(1,42));
  MoveArg(1,43,1,42,0);
  MoveArg(1,45,1,42,1);
  goto p_4;
  p_4 :
  TestFunFC(q_0,&&fail,Egetd(1,43));
  MoveArg(1,44,1,43,0);
  goto q_4;
  q_4 :
  TestStr(1,44,"E",&&fail);
  goto r_4;
  r_4 :
  TestFunFC(g_0,&&fail,Egetd(1,45));
  goto s_4;
  s_4 :
  TestFunFC(q_0,&&fail,Egetd(1,46));
  MoveArg(1,47,1,46,0);
  goto t_4;
  t_4 :
  TestStr(1,47,"E",&&fail);
  goto u_4;
  u_4 :
  TestFunFC(g_0,&&fail,Egetd(1,48));
  goto v_4;
  v_4 :
  TestFunFC(f_0,&&fail,Egetd(1,49));
  MoveArg(1,50,1,49,0);
  MoveArg(1,51,1,49,1);
  goto w_4;
  w_4 :
  TestFunFC(f_0,&&fail,Egetd(1,51));
  MoveArg(1,52,1,51,0);
  MoveArg(1,53,1,51,1);
  goto x_4;
  x_4 :
  TestFunFC(f_0,&&fail,Egetd(1,53));
  MoveArg(1,54,1,53,0);
  MoveArg(1,56,1,53,1);
  goto y_4;
  y_4 :
  TestFunFC(s_0,&&fail,Egetd(1,54));
  MoveArg(1,55,1,54,0);
  goto z_4;
  z_4 :
  TestStr(1,55,"+",&&fail);
  goto a_5;
  a_5 :
  TestFunFC(f_0,&&fail,Egetd(1,56));
  MoveArg(1,57,1,56,0);
  MoveArg(1,58,1,56,1);
  goto b_5;
  b_5 :
  TestFunFC(f_0,&&fail,Egetd(1,58));
  MoveArg(1,59,1,58,0);
  MoveArg(1,60,1,58,1);
  goto c_5;
  c_5 :
  TestFunFC(g_0,&&fail,Egetd(1,60));
  goto d_5;
  d_5 :
  TestFunFC(g_0,&&fail,Egetd(1,61));
  Rpush(w_0);
  goto a_3;
  w_0 :
  goto l_0;
  a_3 :
  NotNULLd(1,50);
  NotNULLd(1,21);
  NotNULLd(1,59);
  Tset((ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("+")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)))))),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)))))),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,Egetd(1,21),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,Egetd(1,50),(ATerm)ATmakeAppl0(g_0))))))),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("+")),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)))))),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,Egetd(1,21),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,Egetd(1,59),(ATerm)ATmakeAppl0(g_0))))))),(ATerm)ATmakeAppl0(g_0))))))));
  Tdupl();
  NotNULLd(1,50);
  NotNULLd(1,21);
  NotNULLd(1,59);
  Tset((ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("+")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)))))),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)))))),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,Egetd(1,21),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,Egetd(1,50),(ATerm)ATmakeAppl0(g_0))))))),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("+")),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)))))),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,Egetd(1,21),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,Egetd(1,59),(ATerm)ATmakeAppl0(g_0))))))),(ATerm)ATmakeAppl0(g_0))))))));
  MoveTop(0,1);
  Tpop();
  Return();
  l_0 :
  Epopd(1,61);
  goto j_0;
  k_0 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_x_1);
  Ccall(_stratego_w_1);
  goto x_0;
  j_0 :
  Cpop();
  x_0 :
  Tset((ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("+")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)))))),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)))))),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(v_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("Id"))),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,ATmakeString("x"),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(v_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("Id"))),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,ATmakeString("y"),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl0(g_0))))))),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("+")),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)))))),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(v_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("Id"))),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,ATmakeString("x"),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(v_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("Id"))),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,ATmakeString("z"),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl0(g_0))))))),(ATerm)ATmakeAppl0(g_0))))))));
  Tdupl();
  Tset((ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("+")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)))))),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)))))),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(v_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("Id"))),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,ATmakeString("x"),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(v_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("Id"))),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,ATmakeString("y"),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl0(g_0))))))),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("+")),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl0(r_0),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)))))),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(v_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("Id"))),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,ATmakeString("x"),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(s_0,ATmakeString("*")),(ATerm)ATmakeAppl2(f_0,ATmakeString(" "),(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl2(o_0,(ATerm)ATmakeAppl3(p_0,(ATerm)ATmakeAppl2(f_0,(ATerm)ATmakeAppl1(v_0,(ATerm)ATmakeAppl1(q_0,ATmakeString("Id"))),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl1(q_0,ATmakeString("E")),(ATerm)ATmakeAppl0(g_0)),(ATerm)ATmakeAppl2(f_0,ATmakeString("z"),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl0(g_0))))))),(ATerm)ATmakeAppl0(g_0))))))));
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
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(f_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(f_0,Egetd(1,1),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_h_2);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(f_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(f_0,Egetd(1,1),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_h_2);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_w_1);
  goto b_1;
  y_0 :
  Cpop();
  b_1 :
  Tpop();
  Ccall(_stratego_a_2);
  goto h_0;
  i_0 :
  Ccall(_stratego_y_1);
  goto c_1;
  h_0 :
  Cpop();
  c_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_c_2)
  _ST_exit();
ENDPROC

PROC(_stratego_d_2)
  Cpush(f_1);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  goto c_9;
  c_9 :
  TestInt(0,1,0,&&fail);
  Rpush(h_1);
  goto b_9;
  h_1 :
  goto g_1;
  b_9 :
  Return();
  g_1 :
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_e_2);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_c_2);
  goto e_1;
  f_1 :
  Tset(MakeInt(1));
  Ccall(_stratego_c_2);
  goto k_1;
  e_1 :
  Cpop();
  k_1 :
ENDPROC

PROC(_stratego_e_2)
  Epushd(0,1);
  MoveTop(0,1);
  goto f_9;
  f_9 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(m_1);
  goto e_9;
  m_1 :
  goto l_1;
  e_9 :
  Return();
  l_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_2)
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(f_0,ATmakeString("successes: "),(ATerm)ATmakeAppl2(f_0,Egetd(0,1),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_h_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(f_0,ATmakeString("failures: "),(ATerm)ATmakeAppl2(f_0,Egetd(0,1),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_h_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_e_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_g_2)
  Tset((ATerm)ATmakeAppl2(c_0,MakeInt(0),(ATerm)ATmakeAppl2(c_0,MakeInt(0),(ATerm)ATmakeAppl0(d_0))));
ENDPROC

PROC(_stratego_h_2)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("overlay-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(e_0),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(f_0,ATmakeString("test suite: "),(ATerm)ATmakeAppl2(f_0,Egetd(0,1),(ATerm)ATmakeAppl0(g_0))),(ATerm)ATmakeAppl0(d_0))));
  Ccall(_stratego_h_2);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_g_2);
  Ccall(_stratego_b_2);
  Ccall(_stratego_f_2);
  Ccall(_stratego_d_2);
ENDPROC

DOIT

