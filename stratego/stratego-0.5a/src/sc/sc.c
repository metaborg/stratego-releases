/*

Copyright (C) 1998, 1999 Eelco Visser <visser@acm.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.

*/

#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>
DOIT_START
cur_rule_counter = 0;
  Rpush(j_12);
  goto main;
  main :
  Rpush(a_0);
  goto i_43;
  a_0 :
  Cpush(c_0);
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Tdupl();
  d_0 :
  MatchFun("Cons");
  Cpush(e_0);
  Arg(0);
  MatchFun("HELP");
  Tpop();
  Cpop();
  goto f_0;
  e_0 :
  Arg(1);
  Tdrop();
  goto d_0;
  f_0 :
  Tpop();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_0);
  goto z_43;
  g_0 :
  AllBuild();
  AllBuild();
  Rpush(h_0);
  goto l_43;
  h_0 :
  Cpop();
  goto b_0;
  c_0 :
  Cpush(j_0);
  Cpush(l_0);
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Tdupl();
  m_0 :
  MatchFun("Cons");
  Cpush(n_0);
  Arg(0);
  MatchFun("CC");
  Tpop();
  Cpop();
  goto o_0;
  n_0 :
  Arg(1);
  Tdrop();
  goto m_0;
  o_0 :
  Tpop();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  BuildStr(".c");
  OneNextSon();
  Rpush(p_0);
  goto z_43;
  p_0 :
  AllBuild();
  AllBuild();
  OneNextSon();
  Rpush(q_0);
  goto z_43;
  q_0 :
  AllBuild();
  AllBuild();
  Cpop();
  goto k_0;
  l_0 :
  Rpush(r_0);
  goto m_43;
  r_0 :
  Rpush(s_0);
  goto r_43;
  s_0 :
  k_0 :
  Rpush(t_0);
  goto s_43;
  t_0 :
  Rpush(u_0);
  goto t_43;
  u_0 :
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Tdupl();
  v_0 :
  MatchFun("Cons");
  Cpush(w_0);
  Arg(0);
  MatchFun("NORM");
  Tpop();
  Cpop();
  goto g_1;
  w_0 :
  Arg(1);
  Tdrop();
  goto v_0;
  g_1 :
  Tpop();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_1);
  goto z_43;
  h_1 :
  AllBuild();
  AllBuild();
  Cpop();
  goto i_0;
  j_0 :
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,1);
  Tpush();
  BuildStr(".tree");
  Tpush();
  BuildStr(".s");
  Tpush();
  BuildStr(".so1");
  Tpush();
  BuildStr(".so2");
  Tpush();
  BuildStr(".i1");
  Tpush();
  BuildStr(".i");
  Tpush();
  BuildStr(".o");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(i_1);
  k_27 :
  Cpush(k_1);
  Epushd(2,0);
  MatchFun("TCons");
  Arg(0);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchFun("Nil");
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildFun("Nil",0);
  Epopd(2,0);
  Cpop();
  goto j_1;
  k_1 :
  Epushd(2,3);
  MatchFun("TCons");
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchFun("Cons");
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildVard(2,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(2,3);
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Rpush(l_1);
  goto n_43;
  l_1 :
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Rpush(m_1);
  goto k_27;
  m_1 :
  OneNextSon();
  Rpush(n_1);
  goto z_43;
  n_1 :
  AllBuild();
  AllBuild();
  Epushd(2,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(2,2);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildVard(2,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(2,2);
  j_1 :
  Return();
  i_1 :
  MatchVard(1,1);
  BuildStr("rm");
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,1);
  Rpush(o_1);
  goto q_43;
  o_1 :
  Epopd(0,1);
  OneNextSon();
  Rpush(p_1);
  goto z_43;
  p_1 :
  AllBuild();
  AllBuild();
  BuildFun("stderr",0);
  Tpush();
  BuildStr("compilation succeeded");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(q_1);
  goto a_44;
  q_1 :
  BuildInt(0);
  Rpush(r_1);
  goto b_44;
  r_1 :
  i_0 :
  b_0 :
  Return();
  i_43 :
  Epushd(0,9);
  Tdupl();
  Rpush(s_1);
  l_27 :
  Cpush(u_1);
  Rpush(v_1);
  goto j_43;
  v_1 :
  Cpop();
  goto t_1;
  u_1 :
  Cpush(x_1);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-I");
  OneNextSon();
  AllBuild();
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_1);
  goto l_27;
  y_1 :
  AllBuild();
  AllBuild();
  Cpop();
  goto w_1;
  x_1 :
  Epushd(1,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  Rpush(z_1);
  goto l_27;
  z_1 :
  w_1 :
  t_1 :
  Return();
  s_1 :
  MatchVard(0,3);
  Tpop();
  Tdupl();
  Rpush(a_2);
  o_27 :
  Cpush(c_2);
  Rpush(d_2);
  goto j_43;
  d_2 :
  Cpop();
  goto b_2;
  c_2 :
  Cpush(f_2);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-CI");
  OneNextSon();
  AllBuild();
  Epushd(1,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_2);
  goto o_27;
  g_2 :
  AllBuild();
  Cpop();
  goto e_2;
  f_2 :
  Epushd(1,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  Rpush(h_2);
  goto o_27;
  h_2 :
  e_2 :
  b_2 :
  Return();
  a_2 :
  MatchVard(0,4);
  Tpop();
  Tdupl();
  Rpush(i_2);
  t_27 :
  Cpush(k_2);
  Rpush(l_2);
  goto j_43;
  l_2 :
  Cpop();
  goto j_2;
  k_2 :
  Cpush(n_2);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-CL");
  OneNextSon();
  AllBuild();
  Epushd(1,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_2);
  goto t_27;
  o_2 :
  AllBuild();
  Cpop();
  goto m_2;
  n_2 :
  Epushd(1,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  Rpush(p_2);
  goto t_27;
  p_2 :
  m_2 :
  j_2 :
  Return();
  i_2 :
  MatchVard(0,5);
  Tpop();
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  OneNextSon();
  Rpush(q_2);
  z_31 :
  Cpush(s_2);
  Rpush(t_2);
  goto j_43;
  t_2 :
  Cpop();
  goto r_2;
  s_2 :
  Cpush(c_3);
  Cpush(e_3);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-e");
  OneNextSon();
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchVard(0,2);
  OneNextSon();
  AllBuild();
  AllBuild();
  Epushd(1,4);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchVard(1,4);
  Tpop();
  BuildVard(1,4);
  Epopd(1,4);
  Cpop();
  goto d_3;
  e_3 :
  Cpush(g_3);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-I");
  OneNextSon();
  MatchFun("Cons");
  AllBuild();
  Epushd(1,4);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchVard(1,4);
  Tpop();
  BuildVard(1,4);
  Epopd(1,4);
  Cpop();
  goto f_3;
  g_3 :
  Cpush(i_3);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-CI");
  OneNextSon();
  MatchFun("Cons");
  AllBuild();
  Epushd(1,4);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchVard(1,4);
  Tpop();
  BuildVard(1,4);
  Epopd(1,4);
  Cpop();
  goto h_3;
  i_3 :
  Cpush(k_3);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-CL");
  OneNextSon();
  MatchFun("Cons");
  AllBuild();
  Epushd(1,4);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchVard(1,4);
  Tpop();
  BuildVard(1,4);
  Epopd(1,4);
  Cpop();
  goto j_3;
  k_3 :
  Cpush(m_3);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-CC");
  MatchVard(0,6);
  OneNextSon();
  AllBuild();
  Epushd(1,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  Cpop();
  goto l_3;
  m_3 :
  Cpush(o_3);
  Rpush(p_3);
  goto k_43;
  p_3 :
  Cpop();
  goto n_3;
  o_3 :
  Cpush(r_3);
  MatchFun("Some");
  TravInit();
  OneNextSon();
  MatchString("-CC");
  MatchVard(0,6);
  AllBuild();
  Cpop();
  goto q_3;
  r_3 :
  Cpush(t_3);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  Cpush(v_3);
  MatchString("-h");
  Cpop();
  goto u_3;
  v_3 :
  Cpush(x_3);
  MatchString("-?");
  Cpop();
  goto w_3;
  x_3 :
  MatchString("--help");
  MatchVard(0,7);
  w_3 :
  u_3 :
  OneNextSon();
  AllBuild();
  Epushd(1,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  Cpop();
  goto s_3;
  t_3 :
  Cpush(z_3);
  Rpush(a_4);
  goto k_43;
  a_4 :
  Cpop();
  goto y_3;
  z_3 :
  Cpush(c_4);
  MatchFun("Some");
  TravInit();
  OneNextSon();
  Cpush(e_4);
  MatchString("-h");
  Cpop();
  goto d_4;
  e_4 :
  Cpush(g_4);
  MatchString("-?");
  Cpop();
  goto f_4;
  g_4 :
  MatchString("--help");
  MatchVard(0,7);
  f_4 :
  d_4 :
  AllBuild();
  Cpop();
  goto b_4;
  c_4 :
  Cpush(i_4);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-norm");
  MatchVard(0,8);
  OneNextSon();
  AllBuild();
  Epushd(1,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  Epopd(1,2);
  Cpop();
  goto h_4;
  i_4 :
  Cpush(k_4);
  Rpush(l_4);
  goto k_43;
  l_4 :
  Cpop();
  goto j_4;
  k_4 :
  Cpush(n_4);
  MatchFun("Some");
  TravInit();
  OneNextSon();
  MatchString("-norm");
  MatchVard(0,8);
  AllBuild();
  Cpop();
  goto m_4;
  n_4 :
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-i");
  OneNextSon();
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchVard(0,9);
  OneNextSon();
  AllBuild();
  AllBuild();
  Epushd(1,4);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchVard(1,4);
  Tpop();
  BuildVard(1,4);
  Epopd(1,4);
  m_4 :
  j_4 :
  h_4 :
  b_4 :
  y_3 :
  s_3 :
  q_3 :
  n_3 :
  l_3 :
  j_3 :
  h_3 :
  f_3 :
  d_3 :
  Rpush(o_4);
  goto z_31;
  o_4 :
  Cpop();
  goto u_2;
  c_3 :
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_4);
  goto z_31;
  p_4 :
  AllBuild();
  u_2 :
  r_2 :
  Return();
  q_2 :
  AllBuild();
  Epushd(1,3);
  MatchFun("Cons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  BuildVard(1,2);
  BuildFun("TNil",0);
  Cpush(r_4);
  BuildVard(0,6);
  BuildFun("CC",0);
  Cpop();
  goto q_4;
  r_4 :
  BuildFun("ALL",0);
  q_4 :
  MatchVard(1,3);
  Epushd(2,1);
  BuildFun("TNil",0);
  Cpush(t_4);
  BuildVard(0,7);
  BuildFun("HELP",0);
  Cpop();
  goto s_4;
  t_4 :
  BuildFun("NOHELP",0);
  s_4 :
  MatchVard(2,1);
  Epushd(3,1);
  BuildFun("TNil",0);
  Cpush(v_4);
  BuildVard(0,8);
  BuildFun("NORM",0);
  Cpop();
  goto u_4;
  v_4 :
  BuildFun("RM",0);
  u_4 :
  MatchVard(3,1);
  BuildVard(0,2);
  Tpush();
  BuildFun("ExecDir",1);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("InclDir",1);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildFun("CInclDir",1);
  Tpush();
  BuildVard(0,5);
  Tpush();
  BuildFun("CLibDir",1);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildVard(2,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(0,9);
  Tpush();
  BuildStr(".r");
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(3,1);
  Epopd(2,1);
  Epopd(1,3);
  Epopd(0,9);
  Return();
  j_43 :
  MatchFun("Nil");
  Return();
  k_43 :
  MatchFun("None");
  Return();
  l_43 :
  BuildFun("stderr",0);
  Tpush();
  BuildStr("usage : sc [-I dir] [-CI dir] [-CL dir] [-CC] [-h] spec");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(w_4);
  goto a_44;
  w_4 :
  Return();
  m_43 :
  Epushd(0,3);
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Rpush(x_4);
  d_32 :
  Cpush(z_4);
  Rpush(a_5);
  goto j_43;
  a_5 :
  Cpop();
  goto y_4;
  z_4 :
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  Cpush(c_5);
  Cpush(e_5);
  MatchFun("InclDir");
  TravInit();
  OneNextSon();
  MatchVard(0,2);
  AllBuild();
  Cpop();
  goto d_5;
  e_5 :
  MatchFun("ExecDir");
  TravInit();
  OneNextSon();
  MatchVard(0,3);
  AllBuild();
  d_5 :
  Cpop();
  goto b_5;
  c_5 :
  b_5 :
  OneNextSon();
  Rpush(f_5);
  goto d_32;
  f_5 :
  AllBuild();
  y_4 :
  Return();
  x_4 :
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_5);
  goto z_43;
  g_5 :
  AllBuild();
  AllBuild();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Epushd(1,2);
  Tdupl();
  Rpush(h_5);
  goto n_43;
  h_5 :
  MatchVard(1,1);
  Tpop();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  BuildStr(".tree");
  OneNextSon();
  Rpush(i_5);
  goto z_43;
  i_5 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(j_5);
  goto n_43;
  j_5 :
  MatchVard(1,2);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/parse-stratego");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,3);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Rpush(k_5);
  goto n_43;
  k_5 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildStr("-silent");
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Cons",2);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epushd(4,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(4,2);
  Rpush(l_5);
  j_33 :
  Cpush(n_5);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_5);
  goto j_33;
  o_5 :
  AllBuild();
  Cpop();
  goto m_5;
  n_5 :
  Rpush(p_5);
  goto j_43;
  p_5 :
  BuildVard(4,1);
  m_5 :
  Return();
  l_5 :
  Epopd(4,2);
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
  Rpush(q_5);
  goto q_43;
  q_5 :
  Tpop();
  Epopd(1,2);
  OneNextSon();
  Rpush(r_5);
  goto z_43;
  r_5 :
  AllBuild();
  AllBuild();
  Epopd(0,3);
  Return();
  n_43 :
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Rpush(s_5);
  goto o_43;
  s_5 :
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Rpush(t_5);
  goto o_43;
  t_5 :
  OneNextSon();
  Rpush(u_5);
  goto z_43;
  u_5 :
  AllBuild();
  AllBuild();
  Epushd(0,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(0,2);
  Rpush(v_5);
  m_33 :
  Cpush(x_5);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_5);
  goto m_33;
  y_5 :
  AllBuild();
  Cpop();
  goto w_5;
  x_5 :
  Rpush(z_5);
  goto j_43;
  z_5 :
  BuildVard(0,1);
  w_5 :
  Return();
  v_5 :
  Epopd(0,2);
  Rpush(a_6);
  goto p_43;
  a_6 :
  Return();
  o_43 :
  _ST_explode_string();
  Return();
  p_43 :
  _ST_implode_string();
  Return();
  q_43 :
  _ST_call();
  Return();
  r_43 :
  Epushd(0,1);
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Rpush(b_6);
  o_33 :
  Cpush(d_6);
  Rpush(e_6);
  goto j_43;
  e_6 :
  Cpop();
  goto c_6;
  d_6 :
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  Cpush(g_6);
  MatchFun("ExecDir");
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  AllBuild();
  Cpop();
  goto f_6;
  g_6 :
  f_6 :
  OneNextSon();
  Rpush(h_6);
  goto o_33;
  h_6 :
  AllBuild();
  c_6 :
  Return();
  b_6 :
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_6);
  goto z_43;
  i_6 :
  AllBuild();
  AllBuild();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Epushd(1,14);
  Tdupl();
  Rpush(j_6);
  goto n_43;
  j_6 :
  MatchVard(1,1);
  Tpop();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  BuildStr(".s");
  OneNextSon();
  Rpush(k_6);
  goto z_43;
  k_6 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(l_6);
  goto n_43;
  l_6 :
  MatchVard(1,2);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/frontend.comp");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Rpush(m_6);
  goto n_43;
  m_6 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epushd(4,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(4,2);
  Rpush(n_6);
  e_41 :
  Cpush(p_6);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_6);
  goto e_41;
  q_6 :
  AllBuild();
  Cpop();
  goto o_6;
  p_6 :
  Rpush(r_6);
  goto j_43;
  r_6 :
  BuildVard(4,1);
  o_6 :
  Return();
  n_6 :
  Epopd(4,2);
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
  Rpush(s_6);
  goto q_43;
  s_6 :
  Tpop();
  Tdupl();
  Rpush(t_6);
  goto n_43;
  t_6 :
  MatchVard(1,3);
  Tpop();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  BuildStr(".so1");
  OneNextSon();
  Rpush(u_6);
  goto z_43;
  u_6 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(v_6);
  goto n_43;
  v_6 :
  MatchVard(1,4);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/optimizer.comp");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Rpush(w_6);
  goto n_43;
  w_6 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,4);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epushd(4,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(4,2);
  Rpush(x_6);
  f_41 :
  Cpush(z_6);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_7);
  goto f_41;
  a_7 :
  AllBuild();
  Cpop();
  goto y_6;
  z_6 :
  Rpush(b_7);
  goto j_43;
  b_7 :
  BuildVard(4,1);
  y_6 :
  Return();
  x_6 :
  Epopd(4,2);
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
  Rpush(c_7);
  goto q_43;
  c_7 :
  Tpop();
  Tdupl();
  Rpush(d_7);
  goto n_43;
  d_7 :
  MatchVard(1,5);
  Tpop();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  BuildStr(".so2");
  OneNextSon();
  Rpush(e_7);
  goto z_43;
  e_7 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(f_7);
  goto n_43;
  f_7 :
  MatchVard(1,6);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/matching-tree.comp");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Rpush(g_7);
  goto n_43;
  g_7 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,5);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,6);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epushd(4,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(4,2);
  Rpush(h_7);
  g_41 :
  Cpush(j_7);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_7);
  goto g_41;
  k_7 :
  AllBuild();
  Cpop();
  goto i_7;
  j_7 :
  Rpush(l_7);
  goto j_43;
  l_7 :
  BuildVard(4,1);
  i_7 :
  Return();
  h_7 :
  Epopd(4,2);
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
  Rpush(m_7);
  goto q_43;
  m_7 :
  Tpop();
  Tdupl();
  Rpush(n_7);
  goto n_43;
  n_7 :
  MatchVard(1,7);
  Tpop();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  BuildStr(".so1");
  OneNextSon();
  Rpush(o_7);
  goto z_43;
  o_7 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(p_7);
  goto n_43;
  p_7 :
  MatchVard(1,8);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/optimizer.comp");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Rpush(q_7);
  goto n_43;
  q_7 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,7);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,8);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epushd(4,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(4,2);
  Rpush(r_7);
  h_41 :
  Cpush(t_7);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_7);
  goto h_41;
  u_7 :
  AllBuild();
  Cpop();
  goto s_7;
  t_7 :
  Rpush(v_7);
  goto j_43;
  v_7 :
  BuildVard(4,1);
  s_7 :
  Return();
  r_7 :
  Epopd(4,2);
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
  Rpush(w_7);
  goto q_43;
  w_7 :
  Tpop();
  Tdupl();
  Rpush(x_7);
  goto n_43;
  x_7 :
  MatchVard(1,9);
  Tpop();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  BuildStr(".i1");
  OneNextSon();
  Rpush(y_7);
  goto z_43;
  y_7 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(z_7);
  goto n_43;
  z_7 :
  MatchVard(1,10);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/backend.comp");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Rpush(a_8);
  goto n_43;
  a_8 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,9);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,10);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epushd(4,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(4,2);
  Rpush(b_8);
  i_41 :
  Cpush(d_8);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_8);
  goto i_41;
  e_8 :
  AllBuild();
  Cpop();
  goto c_8;
  d_8 :
  Rpush(f_8);
  goto j_43;
  f_8 :
  BuildVard(4,1);
  c_8 :
  Return();
  b_8 :
  Epopd(4,2);
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
  Rpush(g_8);
  goto q_43;
  g_8 :
  Tpop();
  Tdupl();
  Rpush(h_8);
  goto n_43;
  h_8 :
  MatchVard(1,11);
  Tpop();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  BuildStr(".i");
  OneNextSon();
  Rpush(i_8);
  goto z_43;
  i_8 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(j_8);
  goto n_43;
  j_8 :
  MatchVard(1,12);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("/postprocess.comp");
  Epushd(3,1);
  MatchVard(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Rpush(k_8);
  goto n_43;
  k_8 :
  Epopd(3,1);
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,11);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,12);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epushd(4,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(4,2);
  Rpush(l_8);
  j_41 :
  Cpush(n_8);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_8);
  goto j_41;
  o_8 :
  AllBuild();
  Cpop();
  goto m_8;
  n_8 :
  Rpush(p_8);
  goto j_43;
  p_8 :
  BuildVard(4,1);
  m_8 :
  Return();
  l_8 :
  Epopd(4,2);
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
  Rpush(q_8);
  goto q_43;
  q_8 :
  Tpop();
  Tdupl();
  Rpush(r_8);
  goto n_43;
  r_8 :
  MatchVard(1,13);
  Tpop();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  BuildStr(".c");
  OneNextSon();
  Rpush(s_8);
  goto z_43;
  s_8 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(t_8);
  goto n_43;
  t_8 :
  MatchVard(1,14);
  Tpop();
  Tdupl();
  Epushd(2,1);
  BuildFun("TNil",0);
  BuildStr("pp-instructions");
  MatchVard(2,1);
  Epushd(3,1);
  Epushd(4,1);
  BuildFun("TNil",0);
  BuildFun("Nil",0);
  MatchVard(4,1);
  BuildVard(4,1);
  Tpush();
  BuildStr("-i");
  Tpush();
  BuildVard(1,13);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(1,14);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(4,1);
  Epushd(4,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(4,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(4,2);
  Rpush(u_8);
  k_41 :
  Cpush(w_8);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_8);
  goto k_41;
  x_8 :
  AllBuild();
  Cpop();
  goto v_8;
  w_8 :
  Rpush(y_8);
  goto j_43;
  y_8 :
  BuildVard(4,1);
  v_8 :
  Return();
  u_8 :
  Epopd(4,2);
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
  Rpush(z_8);
  goto q_43;
  z_8 :
  Tpop();
  Epopd(1,14);
  OneNextSon();
  Rpush(a_9);
  goto z_43;
  a_9 :
  AllBuild();
  AllBuild();
  Epopd(0,1);
  Return();
  s_43 :
  Epushd(0,4);
  Tdupl();
  BuildFun("stderr",0);
  Tpush();
  BuildStr("compiling");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(b_9);
  goto a_44;
  b_9 :
  Tpop();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Rpush(c_9);
  m_41 :
  Cpush(e_9);
  Rpush(f_9);
  goto j_43;
  f_9 :
  Cpop();
  goto d_9;
  e_9 :
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  Cpush(h_9);
  MatchFun("CInclDir");
  TravInit();
  OneNextSon();
  MatchVard(0,4);
  AllBuild();
  Cpop();
  goto g_9;
  h_9 :
  g_9 :
  OneNextSon();
  Rpush(i_9);
  goto m_41;
  i_9 :
  AllBuild();
  d_9 :
  Return();
  c_9 :
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_9);
  goto z_43;
  j_9 :
  AllBuild();
  AllBuild();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Tdupl();
  Rpush(k_9);
  goto n_43;
  k_9 :
  MatchVard(0,2);
  Tpop();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  BuildStr(".o");
  OneNextSon();
  Rpush(l_9);
  goto z_43;
  l_9 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(m_9);
  goto n_43;
  m_9 :
  MatchVard(0,3);
  Tpop();
  Tdupl();
  BuildVard(0,4);
  Tpush();
  BuildStr("-c");
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epushd(1,3);
  MatchFun("TCons");
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(1,2);
  Rpush(n_9);
  y_41 :
  Cpush(p_9);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_9);
  goto y_41;
  q_9 :
  AllBuild();
  Cpop();
  goto o_9;
  p_9 :
  Rpush(a_10);
  goto j_43;
  a_10 :
  BuildVard(1,1);
  o_9 :
  Return();
  n_9 :
  MatchVard(1,3);
  BuildStr("gcc");
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(b_10);
  goto q_43;
  b_10 :
  Epopd(1,3);
  Tpop();
  OneNextSon();
  Rpush(c_10);
  goto z_43;
  c_10 :
  AllBuild();
  AllBuild();
  Epopd(0,4);
  Return();
  t_43 :
  Epushd(0,4);
  Tdupl();
  BuildFun("stderr",0);
  Tpush();
  BuildStr("linking");
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(d_10);
  goto a_44;
  d_10 :
  Tpop();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Rpush(e_10);
  a_42 :
  Cpush(g_10);
  Rpush(h_10);
  goto j_43;
  h_10 :
  Cpop();
  goto f_10;
  g_10 :
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  Cpush(m_10);
  Cpush(o_10);
  MatchFun("Dir");
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  AllBuild();
  Cpop();
  goto n_10;
  o_10 :
  MatchFun("CLibDir");
  TravInit();
  OneNextSon();
  MatchVard(0,4);
  AllBuild();
  n_10 :
  Cpop();
  goto l_10;
  m_10 :
  l_10 :
  OneNextSon();
  Rpush(p_10);
  goto a_42;
  p_10 :
  AllBuild();
  f_10 :
  Return();
  e_10 :
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_10);
  goto z_43;
  q_10 :
  AllBuild();
  AllBuild();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  Tdupl();
  Rpush(r_10);
  goto n_43;
  r_10 :
  MatchVard(0,2);
  Tpop();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  OneNextSon();
  MatchFun("TCons");
  TravInit();
  OneNextSon();
  BuildStr(".comp");
  OneNextSon();
  Rpush(s_10);
  goto z_43;
  s_10 :
  AllBuild();
  AllBuild();
  Tdupl();
  Rpush(t_10);
  goto n_43;
  t_10 :
  MatchVard(0,3);
  Tpop();
  Tdupl();
  Epushd(1,4);
  BuildVard(0,4);
  Rpush(u_10);
  q_42 :
  Cpush(w_10);
  Rpush(x_10);
  goto j_43;
  x_10 :
  Cpop();
  goto v_10;
  w_10 :
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  Rpush(y_10);
  goto u_43;
  y_10 :
  OneNextSon();
  Rpush(z_10);
  goto q_42;
  z_10 :
  AllBuild();
  v_10 :
  Return();
  u_10 :
  Rpush(a_11);
  goto y_43;
  a_11 :
  MatchVard(1,1);
  BuildVard(0,2);
  Tpush();
  BuildStr("-o");
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(1,3);
  Rpush(b_11);
  r_42 :
  Cpush(d_11);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_11);
  goto r_42;
  e_11 :
  AllBuild();
  Cpop();
  goto c_11;
  d_11 :
  Rpush(f_11);
  goto j_43;
  f_11 :
  BuildVard(1,2);
  c_11 :
  Return();
  b_11 :
  MatchVard(1,4);
  BuildStr("gcc");
  Tpush();
  BuildVard(1,4);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Rpush(g_11);
  goto q_43;
  g_11 :
  Epopd(1,4);
  Tpop();
  OneNextSon();
  Rpush(h_11);
  goto z_43;
  h_11 :
  AllBuild();
  AllBuild();
  Epopd(0,4);
  Return();
  u_43 :
  Rpush(i_11);
  goto o_43;
  i_11 :
  Epushd(0,1);
  MatchVard(0,1);
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(0,1);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(0,1);
  Rpush(j_11);
  v_14 :
  Cpush(l_11);
  Epushd(0,2);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchFun("Nil");
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,1);
  Rpush(m_11);
  goto v_43;
  m_11 :
  Rpush(n_11);
  goto p_43;
  n_11 :
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Cons",2);
  Epopd(1,1);
  Rpush(o_11);
  goto v_43;
  o_11 :
  Epopd(0,2);
  Cpop();
  goto k_11;
  l_11 :
  Rpush(p_11);
  goto w_43;
  p_11 :
  Rpush(q_11);
  goto v_14;
  q_11 :
  k_11 :
  Return();
  j_11 :
  Return();
  v_43 :
  Epushd(0,1);
  MatchVard(0,1);
  BuildVard(0,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(0,1);
  Cpush(s_11);
  r_11 :
  Epushd(0,3);
  MatchFun("TCons");
  Arg(0);
  MatchFun("Cons");
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,3);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,2);
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
  Tduplinv();
  goto r_11;
  s_11 :
  Epushd(0,1);
  MatchFun("TCons");
  Arg(0);
  MatchFun("Nil");
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  BuildVard(0,1);
  Epopd(0,1);
  Return();
  w_43 :
  Cpush(u_11);
  Epushd(0,3);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchFun("Cons");
  Arg(0);
  MatchInt(32);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  Tpop();
  Epushd(1,1);
  BuildVard(0,1);
  Rpush(v_11);
  goto v_43;
  v_11 :
  Rpush(w_11);
  goto p_43;
  w_11 :
  MatchVard(1,1);
  BuildVard(1,1);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(1,1);
  Epopd(0,3);
  Cpop();
  goto t_11;
  u_11 :
  Epushd(0,4);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchFun("Cons");
  Arg(0);
  MatchVard(0,4);
  Tpop();
  Arg(1);
  MatchVard(0,3);
  Tpop();
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  Tpop();
  Tdupl();
  BuildVard(0,4);
  Tpush();
  BuildInt(32);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Cpush(x_11);
  Tdupl();
  Rpush(y_11);
  goto x_43;
  y_11 :
  Cpop();
  Crestore();
  Cjump();
  x_11 :
  Tpop();
  BuildVard(0,1);
  Tpush();
  BuildVard(0,4);
  Tpush();
  BuildVard(0,2);
  Tpush();
  BuildFun("Cons",2);
  Tpush();
  BuildVard(0,3);
  Tpush();
  BuildFun("TNil",0);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Tpush();
  BuildFun("TCons",2);
  Epopd(0,4);
  t_11 :
  Return();
  x_43 :
  Epushd(0,1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchFun("TNil");
  Tpop();
  Tpop();
  Epopd(0,1);
  Return();
  y_43 :
  Rpush(z_11);
  k_18 :
  Cpush(b_12);
  Rpush(c_12);
  goto j_43;
  c_12 :
  Cpop();
  goto a_12;
  b_12 :
  Epushd(0,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(0,2);
  Tpop();
  Arg(1);
  MatchVard(0,1);
  Tpop();
  BuildVard(0,2);
  Rpush(d_12);
  h_43 :
  Cpush(f_12);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_12);
  goto h_43;
  g_12 :
  AllBuild();
  Cpop();
  goto e_12;
  f_12 :
  Rpush(h_12);
  goto j_43;
  h_12 :
  BuildVard(0,1);
  Rpush(i_12);
  goto k_18;
  i_12 :
  e_12 :
  Return();
  d_12 :
  Epopd(0,2);
  a_12 :
  Return();
  z_11 :
  Return();
  z_43 :
  MatchFun("TNil");
  Return();
  a_44 :
  _ST_printnl();
  Return();
  b_44 :
  _ST_exit();
  Return();
  j_12 :
DOIT_END
