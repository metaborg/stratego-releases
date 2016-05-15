#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,a_3);
VARDECL(AFun,z_2);
VARDECL(AFun,v_2);
VARDECL(AFun,p_2);
VARDECL(AFun,o_2);
VARDECL(AFun,i_2);
VARDECL(AFun,p_0);
VARDECL(AFun,g_0);
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
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(a_3,ATmakeAFun("stdout",0,0));
  MOVE(z_2,ATmakeAFun("stdin",0,0));
  MOVE(v_2,ATmakeAFun("stderr",0,0));
  MOVE(p_2,ATmakeAFun("TNil",0,0));
  MOVE(o_2,ATmakeAFun("TCons",2,0));
  MOVE(i_2,ATmakeAFun("Module",2,0));
  MOVE(p_0,ATmakeAFun("Nil",0,0));
  MOVE(g_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_q_0)
  _ST_implode_string();
ENDPROC

PROC(_stratego_r_0)
  Rpush(a_0);
  j_1 :
  Cpush(c_0);
  Ccall(_stratego_t_0);
  goto b_0;
  c_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto d_1;
  d_1 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(f_0);
  goto c_1;
  f_0 :
  goto e_0;
  c_1 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(h_0);
  k_1 :
  Cpush(j_0);
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_0);
  goto k_1;
  k_0 :
  AllBuild();
  goto i_0;
  j_0 :
  Ccall(_stratego_t_0);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(m_0);
  goto j_1;
  m_0 :
  goto l_0;
  i_0 :
  Cpop();
  l_0 :
  Return();
  h_0 :
  Return();
  e_0 :
  Epopd(0,3);
  goto d_0;
  b_0 :
  Cpop();
  d_0 :
  Return();
  a_0 :
ENDPROC

PROC(_stratego_s_0)
  _ST_explode_string();
ENDPROC

PROC(_stratego_t_0)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_1;
  m_1 :
  TestFunFC(p_0,&&fail,Egetd(0,1));
  Rpush(o_0);
  goto l_1;
  o_0 :
  goto n_0;
  l_1 :
  Return();
  n_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_u_0)
  Rpush(h_1);
  o_1 :
  Cpush(p_1);
  Ccall(_stratego_t_0);
  goto i_1;
  p_1 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_s_0);
  OneNextSon();
  Rpush(s_1);
  goto o_1;
  s_1 :
  AllBuild();
  goto r_1;
  i_1 :
  Cpop();
  r_1 :
  Return();
  h_1 :
  Ccall(_stratego_r_0);
  Ccall(_stratego_q_0);
ENDPROC

PROC(_stratego_v_0)
  Rpush(v_1);
  s_2 :
  Cpush(e_2);
  Ccall(_stratego_t_0);
  goto a_2;
  e_2 :
  TestFunTop(g_0);
  TravInit();
  OneNextSon();
  Epushd(0,9);
  MoveTop(0,1);
  MoveTop(0,2);
  goto t_1;
  t_1 :
  TestFunFC(i_2,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(h_2);
  goto q_1;
  h_2 :
  goto g_2;
  q_1 :
  Tset(ATmakeString("mod"));
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(o_2,Egetd(0,3),(ATerm)ATmakeAppl2(o_2,ATmakeString("mod"),(ATerm)ATmakeAppl0(p_2))));
  Return();
  g_2 :
  MoveTop(0,5);
  goto w_1;
  w_1 :
  TestFunFC(o_2,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto x_1;
  x_1 :
  TestFunFC(o_2,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,9,0,7,1);
  goto y_1;
  y_1 :
  TestFunFC(p_2,&&fail,Egetd(0,9));
  Rpush(t_2);
  goto u_1;
  t_2 :
  goto r_2;
  u_1 :
  Epushd(1,1);
  NotNULLd(0,6);
  NotNULLd(0,8);
  Tset((ATerm)ATmakeAppl2(g_0,Egetd(0,6),(ATerm)ATmakeAppl2(g_0,ATmakeString("."),(ATerm)ATmakeAppl2(g_0,Egetd(0,8),(ATerm)ATmakeAppl0(p_0)))));
  Ccall(_stratego_u_0);
  MoveTop(1,1);
  NotNULLd(1,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(o_2,Egetd(1,1),(ATerm)ATmakeAppl2(o_2,Egetd(0,1),(ATerm)ATmakeAppl0(p_2))));
  Epopd(1,1);
  Return();
  r_2 :
  Ccall(_stratego_a_1);
  Epopd(0,9);
  OneNextSon();
  Rpush(u_2);
  goto s_2;
  u_2 :
  AllBuild();
  goto f_2;
  a_2 :
  Cpop();
  f_2 :
  Return();
  v_1 :
ENDPROC

PROC(_stratego_w_0)
  _ST_exit();
ENDPROC

PROC(_stratego_x_0)
  _ST_printnl();
ENDPROC

PROC(_stratego_y_0)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(o_2,(ATerm)ATmakeAppl0(v_2),(ATerm)ATmakeAppl2(o_2,Egetd(0,1),(ATerm)ATmakeAppl0(p_2))));
  Ccall(_stratego_x_0);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_z_0)
  Tdupl();
  Ccall(_stratego_y_0);
  Tset(MakeInt(1));
  Ccall(_stratego_w_0);
  Tpop();
ENDPROC

PROC(_stratego_a_1)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_b_1)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_main)
  Cpush(y_2);
  Epushd(0,1);
  Tset((ATerm)ATmakeAppl0(z_2));
  Ccall(_stratego_b_1);
  Ccall(_stratego_v_0);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(o_2,(ATerm)ATmakeAppl0(a_3),(ATerm)ATmakeAppl2(o_2,Egetd(0,1),(ATerm)ATmakeAppl0(p_2))));
  Ccall(_stratego_a_1);
  Epopd(0,1);
  goto x_2;
  y_2 :
  Tset((ATerm)ATmakeAppl2(g_0,ATmakeString("** rewriting failed"),(ATerm)ATmakeAppl0(p_0)));
  Ccall(_stratego_z_0);
  goto b_3;
  x_2 :
  Cpop();
  b_3 :
ENDPROC

DOIT

