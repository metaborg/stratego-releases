#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,y_0);
VARDECL(AFun,p_0);
VARDECL(AFun,o_0);
VARDECL(AFun,l_0);
VARDECL(AFun,h_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_f_1);
PROCDECL(_stratego_g_1);
PROCDECL(_stratego_h_1);
PROCDECL(_stratego_i_1);
PROCDECL(_stratego_j_1);
PROCDECL(_stratego_k_1);
PROCDECL(_stratego_m_1);
PROCDECL(_stratego_n_1);
PROCDECL(_stratego_o_1);
PROCDECL(_stratego_p_1);
PROCDECL(_stratego_q_1);
PROCDECL(_stratego_r_1);

PROC(_stratego_init_afuns)
  MOVE(y_0,ATmakeAFun("Nil",0,0));
  MOVE(p_0,ATmakeAFun("TNil",0,0));
  MOVE(o_0,ATmakeAFun("TCons",2,0));
  MOVE(l_0,ATmakeAFun("Module",2,0));
  MOVE(h_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_f_1);
  Ccall(_stratego_m_1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_g_1);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_h_1);
  goto c_0;
  a_0 :
  Cpop();
  c_0 :
ENDPROC

PROC(_stratego_f_1)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_g_1)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_h_1)
  Tdupl();
  Ccall(_stratego_i_1);
  Tset(MakeInt(1));
  Ccall(_stratego_k_1);
  Tpop();
ENDPROC

PROC(_stratego_i_1)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_j_1);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_j_1)
  _ST_printnl();
ENDPROC

PROC(_stratego_k_1)
  _ST_exit();
ENDPROC

PROC(_stratego_m_1)
  Rpush(d_0);
  d_3 :
  Cpush(f_0);
  Ccall(_stratego_o_1);
  goto e_0;
  f_0 :
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Epushd(0,9);
  MoveTop(0,1);
  MoveTop(0,2);
  goto e_2;
  e_2 :
  TestFunFC(l_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(k_0);
  goto f_3;
  k_0 :
  goto i_0;
  f_3 :
  Tset(ATmakeString("mod"));
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,3),App2("TCons",ATmakeString("mod"),App0("TNil"))));
  Return();
  i_0 :
  MoveTop(0,5);
  goto h_2;
  h_2 :
  TestFunFC(o_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto i_2;
  i_2 :
  TestFunFC(o_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,9,0,7,1);
  goto j_2;
  j_2 :
  TestFunFC(p_0,&&fail,Egetd(0,9));
  Rpush(n_0);
  goto i_3;
  n_0 :
  goto m_0;
  i_3 :
  Epushd(1,1);
  NotNULLd(0,6);
  NotNULLd(0,8);
  Tset(App2("Cons",Egetd(0,6),App2("Cons",ATmakeString("."),App2("Cons",Egetd(0,8),App0("Nil")))));
  Ccall(_stratego_n_1);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,1),App0("TNil"))));
  Epopd(1,1);
  Return();
  m_0 :
  Ccall(_stratego_g_1);
  Epopd(0,9);
  OneNextSon();
  Rpush(q_0);
  goto d_3;
  q_0 :
  AllBuild();
  goto g_0;
  e_0 :
  Cpop();
  g_0 :
  Return();
  d_0 :
ENDPROC

PROC(_stratego_n_1)
  Rpush(r_0);
  k_3 :
  Cpush(t_0);
  Ccall(_stratego_o_1);
  goto s_0;
  t_0 :
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_1);
  OneNextSon();
  Rpush(v_0);
  goto k_3;
  v_0 :
  AllBuild();
  goto u_0;
  s_0 :
  Cpop();
  u_0 :
  Return();
  r_0 :
  Ccall(_stratego_q_1);
  Ccall(_stratego_r_1);
ENDPROC

PROC(_stratego_o_1)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_3;
  m_3 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  Rpush(x_0);
  goto o_3;
  x_0 :
  goto w_0;
  o_3 :
  Return();
  w_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_1)
  _ST_explode_string();
ENDPROC

PROC(_stratego_q_1)
  Rpush(z_0);
  w_3 :
  Cpush(b_1);
  Ccall(_stratego_o_1);
  goto a_1;
  b_1 :
  Epushd(0,3);
  MoveTop(0,1);
  goto q_3;
  q_3 :
  TestFunFC(h_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(e_1);
  goto x_3;
  e_1 :
  goto d_1;
  x_3 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(s_1);
  y_3 :
  Cpush(u_1);
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_1);
  goto y_3;
  v_1 :
  AllBuild();
  goto t_1;
  u_1 :
  Ccall(_stratego_o_1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(x_1);
  goto w_3;
  x_1 :
  goto w_1;
  t_1 :
  Cpop();
  w_1 :
  Return();
  s_1 :
  Return();
  d_1 :
  Epopd(0,3);
  goto c_1;
  a_1 :
  Cpop();
  c_1 :
  Return();
  z_0 :
ENDPROC

PROC(_stratego_r_1)
  _ST_implode_string();
ENDPROC

DOIT

