#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

DOIT

VARDECL(AFun,v_0);
VARDECL(AFun,q_0);
VARDECL(AFun,g_0);
VARDECL(AFun,d_0);
PROCDECL(_stratego_main);
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

PROC(_stratego_init_afuns)
  MOVE(v_0,ATmakeAFun("Nil",0,0));
  MOVE(q_0,ATmakeAFun("Cons",2,0));
  MOVE(g_0,ATmakeAFun("TNil",0,0));
  MOVE(d_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_main)
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Ccall(_stratego_w_0);
  Ccall(_stratego_c_1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_x_0);
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Ccall(_stratego_y_0);
  goto c_0;
  a_0 :
  Cpop();
  c_0 :
ENDPROC

PROC(_stratego_w_0)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_x_0)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_y_0)
  Tdupl();
  Ccall(_stratego_z_0);
  Tset(MakeInt(1));
  Ccall(_stratego_b_1);
  Tpop();
ENDPROC

PROC(_stratego_z_0)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Ccall(_stratego_a_1);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_a_1)
  _ST_printnl();
ENDPROC

PROC(_stratego_b_1)
  _ST_exit();
ENDPROC

PROC(_stratego_c_1)
  Epushd(0,5);
  MoveTop(0,1);
  Tset(ATmakeString(".a"));
  NotNULLd(0,1);
  Tset(App2("TCons",Egetd(0,1),App2("TCons",ATmakeString(".a"),App0("TNil"))));
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_e_1);
  MoveTop(1,1);
  Move(0,2,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".b"));
  OneNextSon();
  Ccall(_stratego_d_1);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_e_1);
  MoveTop(1,1);
  Move(0,3,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil"))));
  MoveTop(1,1);
  goto o_2;
  o_2 :
  TestFunFC(d_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto p_2;
  p_2 :
  TestFunFC(d_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto q_2;
  q_2 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  Rpush(f_0);
  goto j_4;
  f_0 :
  goto e_0;
  j_4 :
  Epushd(2,1);
  Tdupl();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_w_0);
  Tset(App0("B"));
  Tdupl();
  Tset(App0("B"));
  MoveTop(2,1);
  Tpop();
  Tpop();
  Tdupl();
  NotNULLd(1,4);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,1),App0("TNil"))));
  Ccall(_stratego_i_1);
  Tpop();
  Epopd(2,1);
  Return();
  e_0 :
  Epopd(1,5);
  Tpop();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_e_1);
  MoveTop(1,1);
  Move(0,4,1,1);
  Epopd(1,1);
  Tpop();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Tset(ATmakeString(".c"));
  OneNextSon();
  Ccall(_stratego_d_1);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(1,1);
  Ccall(_stratego_e_1);
  MoveTop(1,1);
  Move(0,5,1,1);
  Epopd(1,1);
  Tpop();
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset(App2("TCons",Egetd(0,4),App2("TCons",Egetd(0,5),App0("TNil"))));
  MoveTop(1,1);
  goto v_2;
  v_2 :
  TestFunFC(d_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_2;
  w_2 :
  TestFunFC(d_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto x_2;
  x_2 :
  TestFunFC(g_0,&&fail,Egetd(1,5));
  Rpush(i_0);
  goto n_4;
  i_0 :
  goto h_0;
  n_4 :
  Epushd(2,1);
  Tdupl();
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Ccall(_stratego_w_0);
  Tset(App0("C"));
  Tdupl();
  Tset(App0("C"));
  MoveTop(2,1);
  Tpop();
  Tpop();
  Tdupl();
  NotNULLd(1,4);
  NotNULLd(2,1);
  Tset(App2("TCons",Egetd(1,4),App2("TCons",Egetd(2,1),App0("TNil"))));
  Ccall(_stratego_i_1);
  Tpop();
  Epopd(2,1);
  Return();
  h_0 :
  Epopd(1,5);
  Tpop();
  Epopd(0,5);
ENDPROC

PROC(_stratego_d_1)
  Epushd(0,1);
  MoveTop(0,1);
  goto q_4;
  q_4 :
  TestFunFC(g_0,&&fail,Egetd(0,1));
  Rpush(k_0);
  goto s_4;
  k_0 :
  goto j_0;
  s_4 :
  Return();
  j_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_e_1)
  Epushd(0,5);
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_1);
  OneNextSon();
  TestFunTop(d_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_1);
  OneNextSon();
  Ccall(_stratego_d_1);
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  goto u_4;
  u_4 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto v_4;
  v_4 :
  TestFunFC(d_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto w_4;
  w_4 :
  TestFunFC(g_0,&&fail,Egetd(0,5));
  Rpush(m_0);
  goto e_5;
  m_0 :
  goto l_0;
  e_5 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(n_0);
  f_5 :
  Cpush(p_0);
  TestFunTop(q_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(r_0);
  goto f_5;
  r_0 :
  AllBuild();
  goto o_0;
  p_0 :
  Ccall(_stratego_g_1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  goto s_0;
  o_0 :
  Cpop();
  s_0 :
  Return();
  n_0 :
  Ccall(_stratego_h_1);
  Return();
  l_0 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_f_1)
  _ST_explode_string();
ENDPROC

PROC(_stratego_g_1)
  Epushd(0,1);
  MoveTop(0,1);
  goto h_5;
  h_5 :
  TestFunFC(v_0,&&fail,Egetd(0,1));
  Rpush(u_0);
  goto j_5;
  u_0 :
  goto t_0;
  j_5 :
  Return();
  t_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_1)
  _ST_implode_string();
ENDPROC

PROC(_stratego_i_1)
  _ST_WriteToBinaryFile();
ENDPROC
