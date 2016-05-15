#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(r_0);
  goto main;
  main :
  Cpush(b_0);
  Epushd(0,1);
  Tset(App0("stdin"));
  Rpush(c_0);
  goto g_0;
  c_0 :
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("Cons",2);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_0);
  goto m_0;
  d_0 :
  AllBuild();
  AllBuild();
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stdout"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Rpush(e_0);
  goto h_0;
  e_0 :
  Epopd(0,1);
  goto a_0;
  b_0 :
  Tset(App2("Cons",ATmakeString("** rewriting failed"),App0("Nil")));
  Rpush(n_0);
  goto i_0;
  n_0 :
  goto f_0;
  a_0 :
  Cpop();
  f_0 :
  Return();
  g_0 :
  _ST_ReadFromFile();
  Return();
  h_0 :
  _ST_WriteToTextFile();
  Return();
  i_0 :
  Tdupl();
  Rpush(o_0);
  goto j_0;
  o_0 :
  Tset(ATmakeInt(1));
  Rpush(p_0);
  goto l_0;
  p_0 :
  Tpop();
  Return();
  j_0 :
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset(App2("TCons",App0("stderr"),App2("TCons",Egetd(0,1),App0("TNil"))));
  Rpush(q_0);
  goto k_0;
  q_0 :
  Epopd(0,1);
  Tpop();
  Return();
  k_0 :
  _ST_printnl();
  Return();
  l_0 :
  _ST_exit();
  Return();
  m_0 :
  MatchFun("Nil",0);
  TravInit();
  AllBuild();
  Return();
  r_0 :
DOIT_END
