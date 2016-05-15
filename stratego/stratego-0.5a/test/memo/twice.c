#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,z_0);
VARDECL(AFun,j_0);
VARDECL(AFun,d_0);
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
PROCDECL(_stratego_v_0);
PROCDECL(_stratego_w_0);

PROC(_stratego_init_afuns)
  MOVE(z_0,ATmakeAFun("Nil",0,0));
  MOVE(j_0,ATmakeAFun("A",0,0));
  MOVE(d_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_k_0);
  Ccall(_stratego_q_0);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_l_0);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_m_0);
  goto c_0;
  a_0 :
  Cpop();
  c_0 :
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
  Tdupl();
  Tset(ATmakeString("A"));
  Ccall(_stratego_r_0);
  Tpop();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_0);
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_t_0);
  OneNextSon();
  Ccall(_stratego_w_0);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_r_0)
  Ccall(_stratego_s_0);
ENDPROC

PROC(_stratego_s_0)
  _ST_create_table();
ENDPROC

PROC(_stratego_t_0)
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Cpush(f_0);
  Epushd(1,1);
  Tset(ATmakeString("A"));
  NotNULLd(0,1);
  Tset(App2("TCons",ATmakeString("A"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_u_0);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  goto e_0;
  f_0 :
  Epushd(1,1);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  MoveTop(1,1);
  goto b_2;
  b_2 :
  TestFunFC(j_0,&&fail,Egetd(1,1));
  Rpush(i_0);
  goto p_2;
  i_0 :
  goto h_0;
  p_2 :
  Tset(App0("B"));
  Tdupl();
  Tset(App0("B"));
  MoveTop(0,2);
  Tpop();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset(App2("TCons",ATmakeString("A"),App2("TCons",Egetd(0,1),App2("TCons",Egetd(0,2),App0("TNil")))));
  Ccall(_stratego_v_0);
  Return();
  h_0 :
  Epopd(1,1);
  goto g_0;
  e_0 :
  Cpop();
  g_0 :
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Epopd(0,2);
ENDPROC

PROC(_stratego_u_0)
  _ST_table_get();
ENDPROC

PROC(_stratego_v_0)
  _ST_table_put();
ENDPROC

PROC(_stratego_w_0)
  Epushd(0,1);
  MoveTop(0,1);
  goto t_2;
  t_2 :
  TestFunFC(z_0,&&fail,Egetd(0,1));
  Rpush(y_0);
  goto v_2;
  y_0 :
  goto x_0;
  v_2 :
  Return();
  x_0 :
  Epopd(0,1);
ENDPROC

DOIT

