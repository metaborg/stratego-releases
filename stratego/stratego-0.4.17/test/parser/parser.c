#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(o_3);
  goto main;
  main :
  Epushd(0,0);
  Cpush(b_0);
  BuildFun("stdin",0);
  Rpush(c_0);
  goto b_2;
  c_0 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  Rpush(w_0);
  goto h_2;
  w_0 :
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  Rpush(x_0);
  goto j_2;
  x_0 :
  MatchVard(3,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  Epopd(2,1);
  Epopd(1,1);
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  BuildFun("stdout",0);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  MatchVard(3,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  Epopd(2,1);
  Epopd(1,1);
  Rpush(y_0);
  goto c_2;
  y_0 :
  Cpop();
  goto a_0;
  b_0 :
  BuildStr("** rewriting failed");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Rpush(z_0);
  goto d_2;
  z_0 :
  a_0 :
  Epopd(0,0);
  Return();
  b_2 :
  Epushd(0,0);
  _ST_ReadFromFile();
  Epopd(0,0);
  Return();
  c_2 :
  Epushd(0,0);
  _ST_WriteToTextFile();
  Epopd(0,0);
  Return();
  d_2 :
  Epushd(0,0);
  Tdupl();
  Rpush(a_1);
  goto e_2;
  a_1 :
  BuildInt(1);
  Rpush(b_1);
  goto g_2;
  b_1 :
  Tpop();
  Epopd(0,0);
  Return();
  e_2 :
  Epushd(0,0);
  Tdupl();
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  BuildFun("stderr",0);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  MatchVard(3,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  Epopd(2,1);
  Epopd(1,1);
  Rpush(m_2);
  goto f_2;
  m_2 :
  Tpop();
  Epopd(0,0);
  Return();
  f_2 :
  Epushd(0,0);
  _ST_printnl();
  Epopd(0,0);
  Return();
  g_2 :
  Epushd(0,0);
  _ST_exit();
  Epopd(0,0);
  Return();
  h_2 :
  Epushd(0,4);
  MatchVard(0,1);
  Epushd(1,1);
  BuildVard(0,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(0,1);
  BuildFun("Nil",0);
  MatchVard(2,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,1);
  Epopd(1,1);
  Epushd(1,0);
  Cpush(o_2);
  n_2 :
  Rpush(p_2);
  goto i_2;
  p_2 :
  Tduplinv();
  goto n_2;
  o_2 :
  Epopd(1,0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  BuildVard(0,4);
  Epopd(0,4);
  Return();
  i_2 :
  Cpush(r_2);
  Epushd(0,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("LOOP",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("LOOP",1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(0,3);
  Cpop();
  goto q_2;
  r_2 :
  Cpush(t_2);
  Epushd(0,5);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("ENDLOOP",1);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("LOOP",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,5);
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("Loop",3);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(0,5);
  Cpop();
  goto s_2;
  t_2 :
  Cpush(v_2);
  Epushd(0,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("IF",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("IF",1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(0,3);
  Cpop();
  goto u_2;
  v_2 :
  Cpush(x_2);
  Epushd(0,5);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("ENDIF",1);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("IF",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,5);
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("If",3);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(0,5);
  Cpop();
  goto w_2;
  x_2 :
  Epushd(0,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchFun("A",1);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("A",1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(0,3);
  w_2 :
  u_2 :
  s_2 :
  q_2 :
  Return();
  j_2 :
  Epushd(0,4);
  MatchVard(0,1);
  Epushd(1,1);
  BuildVard(0,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(0,1);
  BuildFun("Nil",0);
  MatchVard(2,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,1);
  Epopd(1,1);
  Epushd(1,0);
  Cpush(z_2);
  y_2 :
  Cpush(b_3);
  Rpush(c_3);
  goto k_2;
  c_3 :
  Cpop();
  goto a_3;
  b_3 :
  Cpush(e_3);
  Rpush(f_3);
  goto l_2;
  f_3 :
  Cpop();
  goto d_3;
  e_3 :
  Epushd(2,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(2,3);
  Tpop();
  Arg(1);
  MatchVard(2,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(2,3);
  Cpush(h_3);
  MatchFun("A",1);
  Cpop();
  goto g_3;
  h_3 :
  Cpush(j_3);
  MatchFun("IF",1);
  Cpop();
  goto i_3;
  j_3 :
  Cpush(l_3);
  MatchFun("ENDIF",1);
  Cpop();
  goto k_3;
  l_3 :
  Cpush(n_3);
  MatchFun("LOOP",1);
  Cpop();
  goto m_3;
  n_3 :
  MatchFun("ENDLOOP",1);
  m_3 :
  k_3 :
  i_3 :
  g_3 :
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,3);
  d_3 :
  a_3 :
  Tduplinv();
  goto y_2;
  z_2 :
  Epopd(1,0);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  BuildVard(0,4);
  Epopd(0,4);
  Return();
  k_2 :
  Epushd(0,6);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,5);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(1,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("IF",1);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("ENDIF",1);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("If",3);
  Epopd(1,3);
  MatchVard(0,6);
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,6);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(0,6);
  Return();
  l_2 :
  Epushd(0,6);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,5);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchFun("Cons",2);
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(0,3);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(1,3);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("LOOP",1);
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("TCons",2);
  Arg(0);
  MatchFun("ENDLOOP",1);
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil",0);
  Tpop();
  Tpop();
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Loop",3);
  Epopd(1,3);
  MatchVard(0,6);
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,6);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(0,6);
  Return();
  o_3 :
DOIT_END
