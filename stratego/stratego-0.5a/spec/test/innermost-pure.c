#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,z_0);
VARDECL(AFun,y_0);
VARDECL(AFun,w_0);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(z_0,ATmakeAFun("Succ",1,0));
  MOVE(y_0,ATmakeAFun("Zero",0,0));
  MOVE(w_0,ATmakeAFun("Plus",2,0));
ENDPROC

PROC(_stratego_main)
  Rpush(a_0);
  p_0 :
  AllInit();
  b_0 :
  AllNextSon(&&c_0);
  Rpush(e_0);
  goto p_0;
  e_0 :
  goto b_0;
  c_0 :
  AllBuild();
  Rpush(k_0);
  q_0 :
  Cpush(m_0);
  Epushd(0,4);
  MoveTop(0,1);
  goto d_0;
  d_0 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,4,0,1,1);
  goto f_0;
  f_0 :
  TestFunFC(y_0,&&x_0,Egetd(0,2));
  Rpush(v_0);
  goto r_0;
  x_0 :
  TestFunFC(z_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(v_0);
  goto s_0;
  v_0 :
  goto u_0;
  s_0 :
  Epushd(1,2);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset(App2("Plus",Egetd(0,3),Egetd(0,4)));
  Rpush(a_1);
  goto q_0;
  a_1 :
  MoveTop(1,2);
  Move(1,1,1,2);
  NotNULLd(1,1);
  Tset(App1("Succ",Egetd(1,1)));
  Rpush(b_1);
  goto q_0;
  b_1 :
  Epopd(1,2);
  Return();
  u_0 :
  goto t_0;
  r_0 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Return();
  t_0 :
  Epopd(0,4);
  goto l_0;
  m_0 :
  goto c_1;
  l_0 :
  Cpop();
  c_1 :
  Return();
  k_0 :
  Return();
  a_0 :
ENDPROC

DOIT

