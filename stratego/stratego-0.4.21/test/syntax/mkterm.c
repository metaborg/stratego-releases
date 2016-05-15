#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,g_0);
VARDECL(AFun,f_0);
VARDECL(AFun,e_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_k_0);
PROCDECL(_stratego_l_0);
PROCDECL(_stratego_m_0);
PROCDECL(_stratego_n_0);
PROCDECL(_stratego_o_0);
PROCDECL(_stratego_p_0);
PROCDECL(_stratego_q_0);
PROCDECL(_stratego_r_0);
PROCDECL(_stratego_s_0);
PROCDECL(_stratego_t_0);
PROCDECL(_stratego_u_0);

PROC(_stratego_init_afuns)
  MOVE(g_0,ATmakeAFun("TNil",0,0));
  MOVE(f_0,ATmakeAFun("Cons",2,0));
  MOVE(e_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,7);
  Tset(App0("stdin"));
  Ccall(_stratego_k_0);
  Ccall(_stratego_t_0);
  Ccall(_stratego_q_0);
  Ccall(_stratego_t_0);
  Ccall(_stratego_r_0);
  Ccall(_stratego_t_0);
  Ccall(_stratego_s_0);
  Ccall(_stratego_t_0);
  _ST_explode_term();
  MoveTop(0,1);
  goto z_0;
  z_0 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto a_1;
  a_1 :
  TestFunFC(e_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,7,0,3,1);
  goto b_1;
  b_1 :
  TestFunFC(f_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto c_1;
  c_1 :
  TestFunFC(g_0,&&fail,Egetd(0,7));
  Rpush(d_0);
  goto q_1;
  d_0 :
  goto c_0;
  q_1 :
  Epushd(1,1);
  _ST_mkterm();
  Ccall(_stratego_t_0);
  Ccall(_stratego_u_0);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(1,1),App0("TNil"))));
  Ccall(_stratego_l_0);
  Epopd(1,1);
  Return();
  c_0 :
  Epopd(0,7);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_m_0);
  goto h_0;
  a_0 :
  Cpop();
  h_0 :
ENDPROC

PROC(_stratego_k_0)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_l_0)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_m_0)
  Tdupl();
  Ccall(_stratego_n_0);
  Tset(MakeInt(1));
  Ccall(_stratego_p_0);
  Tpop();
ENDPROC

PROC(_stratego_n_0)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_o_0);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_o_0)
  _ST_printnl();
ENDPROC

PROC(_stratego_p_0)
  _ST_exit();
ENDPROC

PROC(_stratego_q_0)
  Epushd(0,4);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto i_2;
  i_2 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto j_2;
  j_2 :
  TestFunFC(e_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto k_2;
  k_2 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  Rpush(j_0);
  goto y_2;
  j_0 :
  goto i_0;
  y_2 :
  Move(0,2,1,2);
  Move(0,3,1,4);
  Return();
  i_0 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  _ST_mkterm();
  MoveTop(0,4);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Epopd(0,4);
ENDPROC

PROC(_stratego_r_0)
  Epushd(0,4);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto c_3;
  c_3 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_3;
  d_3 :
  TestFunFC(e_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto e_3;
  e_3 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  Rpush(w_0);
  goto s_3;
  w_0 :
  goto v_0;
  s_3 :
  Move(0,2,1,2);
  Move(0,3,1,4);
  Return();
  v_0 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(App2("TCons",ATmakeString("b"),App2("TCons",Egetd(0,3),App0("TNil"))));
  _ST_mkterm();
  MoveTop(0,4);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Epopd(0,4);
ENDPROC

PROC(_stratego_s_0)
  Epushd(0,3);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto w_3;
  w_3 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto x_3;
  x_3 :
  TestStr(1,2,"b",&&fail);
  goto y_3;
  y_3 :
  TestFunFC(e_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto z_3;
  z_3 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  Rpush(y_0);
  goto m_4;
  y_0 :
  goto x_0;
  m_4 :
  Move(0,2,1,4);
  Return();
  x_0 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(App2("TCons",ATmakeString("c"),App2("TCons",Egetd(0,2),App0("TNil"))));
  _ST_mkterm();
  MoveTop(0,3);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Epopd(0,3);
ENDPROC

PROC(_stratego_t_0)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App0("Nil")),App0("TNil"))));
  Ccall(_stratego_o_0);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_u_0)
  Epushd(0,3);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto g_5;
  g_5 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto h_5;
  h_5 :
  TestFunFC(e_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto i_5;
  i_5 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  Rpush(m_1);
  goto t_5;
  m_1 :
  goto l_1;
  t_5 :
  Move(0,2,1,2);
  Move(0,3,1,4);
  Return();
  l_1 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("Cons",Egetd(0,2),Egetd(0,3)));
  Epopd(0,3);
ENDPROC

DOIT

