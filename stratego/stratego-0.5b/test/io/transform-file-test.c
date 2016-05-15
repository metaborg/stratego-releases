#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,c_2);
VARDECL(AFun,b_2);
VARDECL(AFun,v_0);
VARDECL(AFun,u_0);
VARDECL(AFun,r_0);
VARDECL(AFun,k_0);
VARDECL(AFun,g_0);
VARDECL(AFun,e_0);
VARDECL(AFun,c_0);
PROCDECL(_stratego_w_0);
PROCDECL(_stratego_x_0);
PROCDECL(_stratego_y_0);
PROCDECL(_stratego_z_0);
PROCDECL(_stratego_a_1);
PROCDECL(_stratego_b_1);
PROCDECL(_stratego_c_1);
PROCDECL(_stratego_d_1);
PROCDECL(_stratego_e_1);
PROCDECL(_stratego_f_1);
PROCDECL(_stratego_g_1);
PROCDECL(_stratego_h_1);
PROCDECL(_stratego_i_1);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(c_2,ATmakeAFun("stdout",0,0));
  MOVE(b_2,ATmakeAFun("stdin",0,0));
  MOVE(v_0,ATmakeAFun("stderr",0,0));
  MOVE(u_0,ATmakeAFun("C",0,0));
  MOVE(r_0,ATmakeAFun("B",0,0));
  MOVE(k_0,ATmakeAFun("Cons",2,0));
  MOVE(g_0,ATmakeAFun("TNil",0,0));
  MOVE(e_0,ATmakeAFun("TCons",2,0));
  MOVE(c_0,ATmakeAFun("Nil",0,0));
ENDPROC

PROC(_stratego_w_0)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_x_0)
  _ST_implode_string();
ENDPROC

PROC(_stratego_y_0)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_1;
  k_1 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  Rpush(b_0);
  goto j_1;
  b_0 :
  goto a_0;
  j_1 :
  Return();
  a_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_0)
  _ST_explode_string();
ENDPROC

PROC(_stratego_a_1)
  Epushd(0,5);
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_0);
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_0);
  OneNextSon();
  Ccall(_stratego_b_1);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto n_1;
  n_1 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto o_1;
  o_1 :
  TestFunFC(e_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto p_1;
  p_1 :
  TestFunFC(g_0,&&fail,Egetd(0,5));
  Rpush(f_0);
  goto m_1;
  f_0 :
  goto d_0;
  m_1 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(h_0);
  x_1 :
  Cpush(j_0);
  TestFunTop(k_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_0);
  goto x_1;
  l_0 :
  AllBuild();
  goto i_0;
  j_0 :
  Ccall(_stratego_y_0);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto m_0;
  i_0 :
  Cpop();
  m_0 :
  Return();
  h_0 :
  Ccall(_stratego_x_0);
  Return();
  d_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_b_1)
  Epushd(0,1);
  MoveTop(0,1);
  goto z_1;
  z_1 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  Rpush(o_0);
  goto y_1;
  o_0 :
  goto n_0;
  y_1 :
  Return();
  n_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_1)
  Epushd(0,5);
  MoveTop(0,1);
  Tset(ATmakeString(".a"));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(0,1),(ATerm)ATmakeAppl2(e_0,ATmakeString(".a"),(ATerm)ATmakeAppl0(g_0))));
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_a_1);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".b"));
  OneNextSon();
  Ccall(_stratego_b_1);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_a_1);
  MoveTop(1,1);
  Move(0,3,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(0,2),(ATerm)ATmakeAppl2(e_0,Egetd(0,3),(ATerm)ATmakeAppl0(g_0))));
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
  Rpush(q_0);
  goto g_2;
  q_0 :
  goto p_0;
  g_2 :
  Epushd(2,1);
  Tdupl();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_i_1);
  Tset((ATerm)ATmakeAppl0(r_0));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(r_0));
  MoveTop(2,1);
  Tpop();
  Tpop();
  Tdupl();
  NotNULLd(1,4);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(1,4),(ATerm)ATmakeAppl2(e_0,Egetd(2,1),(ATerm)ATmakeAppl0(g_0))));
  Ccall(_stratego_w_0);
  Tpop();
  Epopd(2,1);
  Return();
  p_0 :
  Epopd(1,5);
  Tpop();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_a_1);
  MoveTop(1,1);
  Move(0,4,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(e_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".c"));
  OneNextSon();
  Ccall(_stratego_b_1);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_a_1);
  MoveTop(1,1);
  Move(0,5,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(0,4),(ATerm)ATmakeAppl2(e_0,Egetd(0,5),(ATerm)ATmakeAppl0(g_0))));
  MoveTop(1,1);
  goto p_2;
  p_2 :
  TestFunFC(e_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto q_2;
  q_2 :
  TestFunFC(e_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto r_2;
  r_2 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  Rpush(t_0);
  goto n_2;
  t_0 :
  goto s_0;
  n_2 :
  Epushd(2,1);
  Tdupl();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_i_1);
  Tset((ATerm)ATmakeAppl0(u_0));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(u_0));
  MoveTop(2,1);
  Tpop();
  Tpop();
  Tdupl();
  NotNULLd(1,4);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(e_0,Egetd(1,4),(ATerm)ATmakeAppl2(e_0,Egetd(2,1),(ATerm)ATmakeAppl0(g_0))));
  Ccall(_stratego_w_0);
  Tpop();
  Epopd(2,1);
  Return();
  s_0 :
  Epopd(1,5);
  Tpop();
  Epopd(0,5);
ENDPROC

PROC(_stratego_d_1)
  _ST_exit();
ENDPROC

PROC(_stratego_e_1)
  _ST_printnl();
ENDPROC

PROC(_stratego_f_1)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(v_0),(ATerm)ATmakeAppl2(e_0,Egetd(0,1),(ATerm)ATmakeAppl0(g_0))));
  Ccall(_stratego_e_1);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_g_1)
  Tdupl();
  Ccall(_stratego_f_1);
  Tset(MakeInt(1));
  Ccall(_stratego_d_1);
  Tpop();
ENDPROC

PROC(_stratego_h_1)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_i_1)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_main)
  Cpush(w_1);
  Epushd(0,1);
  Tset((ATerm)ATmakeAppl0(b_2));
  Ccall(_stratego_i_1);
  Ccall(_stratego_c_1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(e_0,(ATerm)ATmakeAppl0(c_2),(ATerm)ATmakeAppl2(e_0,Egetd(0,1),(ATerm)ATmakeAppl0(g_0))));
  Ccall(_stratego_h_1);
  Epopd(0,1);
  goto v_1;
  w_1 :
  Tset((ATerm)ATmakeAppl2(k_0,ATmakeString("** rewriting failed"),(ATerm)ATmakeAppl0(c_0)));
  Ccall(_stratego_g_1);
  goto d_2;
  v_1 :
  Cpop();
  d_2 :
ENDPROC

DOIT

