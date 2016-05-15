#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,p_2);
VARDECL(AFun,y_0);
VARDECL(AFun,h_0);
VARDECL(AFun,g_0);
VARDECL(AFun,d_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_i_0);
PROCDECL(_stratego_j_0);
PROCDECL(_stratego_k_0);
PROCDECL(_stratego_l_0);
PROCDECL(_stratego_m_0);
PROCDECL(_stratego_n_0);
PROCDECL(_stratego_o_0);
PROCDECL(_stratego_p_0);
PROCDECL(_stratego_q_0);

PROC(_stratego_init_afuns)
  MOVE(p_2,ATmakeAFun("Nil",0,0));
  MOVE(y_0,ATmakeAFun("B",0,0));
  MOVE(h_0,ATmakeAFun("G",2,0));
  MOVE(g_0,ATmakeAFun("A",0,0));
  MOVE(d_0,ATmakeAFun("F",1,0));
  MOVE(c_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_i_0);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  goto s_0;
  s_0 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  Rpush(f_0);
  goto j_1;
  f_0 :
  goto e_0;
  j_1 :
  Tset(App0("B"));
  Return();
  e_0 :
  Epopd(1,1);
  AllBuild();
  Ccall(_stratego_o_0);
  OneNextSon();
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  goto u_0;
  u_0 :
  TestFunFC(g_0,&&fail,Egetd(1,1));
  Rpush(t_0);
  goto k_1;
  t_0 :
  goto r_0;
  k_1 :
  Tset(App0("B"));
  Return();
  r_0 :
  Epopd(1,1);
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  goto w_0;
  w_0 :
  TestFunFC(y_0,&&fail,Egetd(1,1));
  Rpush(x_0);
  goto l_1;
  x_0 :
  goto v_0;
  l_1 :
  Tset(App0("C"));
  Return();
  v_0 :
  Epopd(1,1);
  AllBuild();
  Ccall(_stratego_p_0);
  OneNextSon();
  Ccall(_stratego_q_0);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_j_0);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_k_0);
  goto z_0;
  a_0 :
  Cpop();
  z_0 :
ENDPROC

PROC(_stratego_i_0)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_j_0)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_k_0)
  Tdupl();
  Ccall(_stratego_l_0);
  Tset(MakeInt(1));
  Ccall(_stratego_n_0);
  Tpop();
ENDPROC

PROC(_stratego_l_0)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_m_0);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_m_0)
  _ST_printnl();
ENDPROC

PROC(_stratego_n_0)
  _ST_exit();
ENDPROC

PROC(_stratego_o_0)
  Epushd(0,2);
  MoveTop(0,1);
  goto f_2;
  f_2 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(f_1);
  goto m_2;
  f_1 :
  goto e_1;
  m_2 :
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(g_1);
  n_2 :
  Cpush(i_1);
  IsAppl();
  OneInit();
  m_1 :
  OneNextSon();
  Cpush(m_1);
  Rpush(o_1);
  goto n_2;
  o_1 :
  Cpop();
  OneBuild();
  goto h_1;
  i_1 :
  Epushd(2,1);
  MoveTop(2,1);
  goto d_2;
  d_2 :
  TestFunFC(y_0,&&fail,Egetd(2,1));
  Rpush(r_1);
  goto o_2;
  r_1 :
  goto q_1;
  o_2 :
  Tset(App0("D"));
  Return();
  q_1 :
  Epopd(2,1);
  goto p_1;
  h_1 :
  Cpop();
  p_1 :
  Return();
  g_1 :
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App1("F",Egetd(1,1)));
  Epopd(1,1);
  Return();
  e_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_p_0)
  Epushd(0,3);
  MoveTop(0,1);
  goto u_2;
  u_2 :
  TestFunFC(h_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(u_1);
  goto d_3;
  u_1 :
  goto t_1;
  d_3 :
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(v_1);
  e_3 :
  Cpush(x_1);
  Epushd(2,1);
  MoveTop(2,1);
  goto s_2;
  s_2 :
  TestFunFC(y_0,&&fail,Egetd(2,1));
  Rpush(z_1);
  goto f_3;
  z_1 :
  goto y_1;
  f_3 :
  Tset(App0("D"));
  Return();
  y_1 :
  Epopd(2,1);
  goto w_1;
  x_1 :
  IsAppl();
  OneInit();
  b_2 :
  OneNextSon();
  Cpush(b_2);
  Rpush(e_2);
  goto e_3;
  e_2 :
  Cpop();
  OneBuild();
  goto a_2;
  w_1 :
  Cpop();
  a_2 :
  Return();
  v_1 :
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,3);
  Tset(App2("G",Egetd(1,1),Egetd(0,3)));
  Epopd(1,1);
  Return();
  t_1 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_q_0)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_3;
  i_3 :
  TestFunFC(p_2,&&fail,Egetd(0,1));
  Rpush(l_2);
  goto k_3;
  l_2 :
  goto i_2;
  k_3 :
  Return();
  i_2 :
  Epopd(0,1);
ENDPROC

DOIT

