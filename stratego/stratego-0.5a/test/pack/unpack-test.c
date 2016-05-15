#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,k_1);
VARDECL(AFun,o_0);
VARDECL(AFun,n_0);
VARDECL(AFun,k_0);
VARDECL(AFun,h_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_q_0);
PROCDECL(_stratego_r_0);
PROCDECL(_stratego_s_0);
PROCDECL(_stratego_t_0);
PROCDECL(_stratego_u_0);
PROCDECL(_stratego_v_0);
PROCDECL(_stratego_w_0);
PROCDECL(_stratego_x_0);
PROCDECL(_stratego_y_0);
PROCDECL(_stratego_z_0);
PROCDECL(_stratego_a_1);
PROCDECL(_stratego_b_1);

PROC(_stratego_init_afuns)
  MOVE(k_1,ATmakeAFun("Nil",0,0));
  MOVE(o_0,ATmakeAFun("TNil",0,0));
  MOVE(n_0,ATmakeAFun("TCons",2,0));
  MOVE(k_0,ATmakeAFun("Module",2,0));
  MOVE(h_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_q_0);
  Ccall(_stratego_w_0);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_r_0);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_s_0);
  goto c_0;
  a_0 :
  Cpop();
  c_0 :
ENDPROC

PROC(_stratego_q_0)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_r_0)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_s_0)
  Tdupl();
  Ccall(_stratego_t_0);
  Tset(MakeInt(1));
  Ccall(_stratego_v_0);
  Tpop();
ENDPROC

PROC(_stratego_t_0)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_u_0);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_u_0)
  _ST_printnl();
ENDPROC

PROC(_stratego_v_0)
  _ST_exit();
ENDPROC

PROC(_stratego_w_0)
  Rpush(d_0);
  d_3 :
  Cpush(f_0);
  Ccall(_stratego_y_0);
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
  TestFunFC(k_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(j_0);
  goto f_3;
  j_0 :
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
  TestFunFC(n_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto i_2;
  i_2 :
  TestFunFC(n_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,9,0,7,1);
  goto j_2;
  j_2 :
  TestFunFC(o_0,&&fail,Egetd(0,9));
  Rpush(m_0);
  goto i_3;
  m_0 :
  goto l_0;
  i_3 :
  Epushd(1,1);
  NotNULLd(0,6);
  NotNULLd(0,8);
  Tset(App2("Cons",Egetd(0,6),App2("Cons",ATmakeString("."),App2("Cons",Egetd(0,8),App0("Nil")))));
  Ccall(_stratego_x_0);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(1,1),App2("TCons",Egetd(0,1),App0("TNil"))));
  Epopd(1,1);
  Return();
  l_0 :
  Ccall(_stratego_r_0);
  Epopd(0,9);
  OneNextSon();
  Rpush(p_0);
  goto d_3;
  p_0 :
  AllBuild();
  goto g_0;
  e_0 :
  Cpop();
  g_0 :
  Return();
  d_0 :
ENDPROC

PROC(_stratego_x_0)
  Rpush(c_1);
  k_3 :
  Cpush(e_1);
  Ccall(_stratego_y_0);
  goto d_1;
  e_1 :
  TestFunTop(h_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_0);
  OneNextSon();
  Rpush(h_1);
  goto k_3;
  h_1 :
  AllBuild();
  goto g_1;
  d_1 :
  Cpop();
  g_1 :
  Return();
  c_1 :
  Ccall(_stratego_a_1);
  Ccall(_stratego_b_1);
ENDPROC

PROC(_stratego_y_0)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_3;
  m_3 :
  TestFunFC(k_1,&&fail,Egetd(0,1));
  Rpush(j_1);
  goto o_3;
  j_1 :
  goto i_1;
  o_3 :
  Return();
  i_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_0)
  _ST_explode_string();
ENDPROC

PROC(_stratego_a_1)
  Rpush(l_1);
  w_3 :
  Cpush(n_1);
  Ccall(_stratego_y_0);
  goto m_1;
  n_1 :
  Epushd(0,3);
  MoveTop(0,1);
  goto q_3;
  q_3 :
  TestFunFC(h_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(q_1);
  goto x_3;
  q_1 :
  goto p_1;
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
  Ccall(_stratego_y_0);
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
  p_1 :
  Epopd(0,3);
  goto o_1;
  m_1 :
  Cpop();
  o_1 :
  Return();
  l_1 :
ENDPROC

PROC(_stratego_b_1)
  _ST_implode_string();
ENDPROC

DOIT

