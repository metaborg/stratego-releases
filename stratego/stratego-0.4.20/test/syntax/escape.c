#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,d_1);
VARDECL(AFun,v_0);
VARDECL(AFun,g_0);
VARDECL(AFun,e_0);
PROCDECL(_stratego_main);
PROCDECL(_stratego_j_0);
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

PROC(_stratego_init_afuns)
  MOVE(d_1,ATmakeAFun("Nil",0,0));
  MOVE(v_0,ATmakeAFun("Cons",2,0));
  MOVE(g_0,ATmakeAFun("TNil",0,0));
  MOVE(e_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_j_0);
  Ccall(_stratego_p_0);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_k_0);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_l_0);
  goto c_0;
  a_0 :
  Cpop();
  c_0 :
ENDPROC

PROC(_stratego_j_0)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_k_0)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_l_0)
  Tdupl();
  Ccall(_stratego_m_0);
  Tset(MakeInt(1));
  Ccall(_stratego_o_0);
  Tpop();
ENDPROC

PROC(_stratego_m_0)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_n_0);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_n_0)
  _ST_printnl();
ENDPROC

PROC(_stratego_o_0)
  _ST_exit();
ENDPROC

PROC(_stratego_p_0)
  Epushd(0,5);
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_0);
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_0);
  OneNextSon();
  Ccall(_stratego_r_0);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto t_1;
  t_1 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto u_1;
  u_1 :
  TestFunFC(e_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto v_1;
  v_1 :
  TestFunFC(g_0,&&fail,Egetd(0,5));
  Rpush(f_0);
  goto d_2;
  f_0 :
  goto d_0;
  d_2 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(h_0);
  e_2 :
  Cpush(u_0);
  TestFunTop(v_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_0);
  goto e_2;
  w_0 :
  AllBuild();
  goto i_0;
  u_0 :
  Ccall(_stratego_s_0);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto y_0;
  i_0 :
  Cpop();
  y_0 :
  Return();
  h_0 :
  Ccall(_stratego_t_0);
  Return();
  d_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_q_0)
  _ST_explode_string();
ENDPROC

PROC(_stratego_r_0)
  Epushd(0,1);
  MoveTop(0,1);
  goto g_2;
  g_2 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  Rpush(a_1);
  goto i_2;
  a_1 :
  goto z_0;
  i_2 :
  Return();
  z_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_0)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_2;
  k_2 :
  TestFunFC(d_1,&&fail,Egetd(0,1));
  Rpush(c_1);
  goto m_2;
  c_1 :
  goto b_1;
  m_2 :
  Return();
  b_1 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_0)
  _ST_implode_string();
ENDPROC
