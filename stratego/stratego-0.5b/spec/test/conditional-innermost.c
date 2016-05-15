#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,z_0);
VARDECL(AFun,y_0);
VARDECL(AFun,r_0);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(z_0,ATmakeAFun("Succ",1,0));
  MOVE(y_0,ATmakeAFun("Zero",0,0));
  MOVE(r_0,ATmakeAFun("Plus",2,0));
ENDPROC

PROC(_stratego_main)
  Rpush(a_0);
  w_0 :
  AllInit();
  b_0 :
  AllNextSon(&&c_0);
  Rpush(d_0);
  goto w_0;
  d_0 :
  goto b_0;
  c_0 :
  AllBuild();
  Rpush(e_0);
  e_1 :
  Cpush(i_0);
  Epushd(0,4);
  MoveTop(0,1);
  goto f_0;
  f_0 :
  TestFunFC(r_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto g_0;
  g_0 :
  TestFunFC(y_0,&&x_0,Egetd(0,2));
  Rpush(p_0);
  goto f_1;
  x_0 :
  TestFunFC(z_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_0);
  goto g_1;
  p_0 :
  goto o_0;
  g_1 :
  Epushd(1,5);
  Tdupl();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Move(1,1,0,4);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Rpush(a_1);
  i_1 :
  AllInit();
  b_1 :
  AllNextSon(&&c_1);
  Rpush(d_1);
  goto i_1;
  d_1 :
  goto b_1;
  c_1 :
  AllBuild();
  Rpush(h_1);
  goto e_1;
  h_1 :
  Return();
  a_1 :
  MoveTop(1,4);
  Move(1,3,1,4);
  NotNULLd(0,3);
  NotNULLd(1,3);
  Tset(App2("Plus",Egetd(0,3),Egetd(1,3)));
  Rpush(j_1);
  goto e_1;
  j_1 :
  MoveTop(1,5);
  Move(1,2,1,5);
  NotNULLd(1,2);
  Tset(App1("Succ",Egetd(1,2)));
  Rpush(k_1);
  goto e_1;
  k_1 :
  Epopd(1,5);
  Return();
  o_0 :
  goto n_0;
  f_1 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Return();
  n_0 :
  Epopd(0,4);
  goto h_0;
  i_0 :
  goto l_1;
  h_0 :
  Cpop();
  l_1 :
  Return();
  e_0 :
  Return();
  a_0 :
ENDPROC

DOIT

