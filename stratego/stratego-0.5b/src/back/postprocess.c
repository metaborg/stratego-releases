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
  Rpush(a_5);
  goto main;
  main :
  Epushd(0,9);
  Cpush(b_0);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchVard(0,1);
  OneNextSon();
  Rpush(c_0);
  b_30 :
  Cpush(e_0);
  Rpush(f_0);
  goto b_32;
  f_0 :
  Cpop();
  goto d_0;
  e_0 :
  Cpush(h_0);
  Cpush(j_0);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-silent");
  MatchVard(0,2);
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
  goto i_0;
  j_0 :
  Cpush(l_0);
  Rpush(m_0);
  goto c_32;
  m_0 :
  Cpop();
  goto k_0;
  l_0 :
  Cpush(o_0);
  MatchFun("Some");
  TravInit();
  OneNextSon();
  MatchString("-silent");
  MatchVard(0,2);
  AllBuild();
  Cpop();
  goto n_0;
  o_0 :
  Cpush(q_0);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-i");
  OneNextSon();
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchVard(0,3);
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
  goto p_0;
  q_0 :
  Cpush(s_0);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-o");
  OneNextSon();
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchVard(0,4);
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
  goto r_0;
  s_0 :
  Cpush(u_0);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-b");
  MatchVard(0,5);
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
  goto t_0;
  u_0 :
  Cpush(w_0);
  Rpush(x_0);
  goto c_32;
  x_0 :
  Cpop();
  goto v_0;
  w_0 :
  Cpush(z_0);
  MatchFun("Some");
  TravInit();
  OneNextSon();
  MatchString("-b");
  MatchVard(0,5);
  AllBuild();
  Cpop();
  goto y_0;
  z_0 :
  Cpush(b_1);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-stats");
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
  goto a_1;
  b_1 :
  Cpush(d_1);
  Rpush(e_1);
  goto c_32;
  e_1 :
  Cpop();
  goto c_1;
  d_1 :
  Cpush(g_1);
  MatchFun("Some");
  TravInit();
  OneNextSon();
  MatchString("-stats");
  MatchVard(0,6);
  AllBuild();
  Cpop();
  goto f_1;
  g_1 :
  Cpush(i_1);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-help");
  MatchVard(0,7);
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
  goto h_1;
  i_1 :
  Cpush(k_1);
  Rpush(l_1);
  goto c_32;
  l_1 :
  Cpop();
  goto j_1;
  k_1 :
  Cpush(n_1);
  MatchFun("Some");
  TravInit();
  OneNextSon();
  MatchString("-help");
  MatchVard(0,7);
  AllBuild();
  Cpop();
  goto m_1;
  n_1 :
  Cpush(p_1);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-h");
  MatchVard(0,7);
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
  goto o_1;
  p_1 :
  Cpush(r_1);
  Rpush(s_1);
  goto c_32;
  s_1 :
  Cpop();
  goto q_1;
  r_1 :
  Cpush(u_1);
  MatchFun("Some");
  TravInit();
  OneNextSon();
  MatchString("-h");
  MatchVard(0,7);
  AllBuild();
  Cpop();
  goto t_1;
  u_1 :
  Cpush(w_1);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  MatchString("-pp");
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
  goto v_1;
  w_1 :
  Cpush(y_1);
  Rpush(z_1);
  goto c_32;
  z_1 :
  Cpop();
  goto x_1;
  y_1 :
  MatchFun("Some");
  TravInit();
  OneNextSon();
  MatchString("-pp");
  MatchVard(0,8);
  AllBuild();
  x_1 :
  v_1 :
  t_1 :
  q_1 :
  o_1 :
  m_1 :
  j_1 :
  h_1 :
  f_1 :
  c_1 :
  a_1 :
  y_0 :
  v_0 :
  t_0 :
  r_0 :
  p_0 :
  n_0 :
  k_0 :
  i_0 :
  Rpush(a_2);
  goto b_30;
  a_2 :
  Cpop();
  goto g_0;
  h_0 :
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_2);
  goto b_30;
  b_2 :
  AllBuild();
  g_0 :
  d_0 :
  Return();
  c_0 :
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
  goto a_0;
  b_0 :
  Tdupl();
  Epushd(1,1);
  BuildFun("TNil",0);
  BuildStr("");
  MatchVard(1,1);
  BuildFun("stderr",0);
  Tpush();
  BuildStr("usage : ");
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildStr(" [-silent] [-i file] [-o file] [-pp] [-b] [-stats] [-help|-h]");
  Tpush();
  BuildFun("Nil",0);
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
  Epopd(1,1);
  Rpush(c_2);
  goto i_32;
  c_2 :
  Tpop();
  Rpush(d_2);
  goto d_32;
  d_2 :
  BuildInt(1);
  Rpush(e_2);
  goto j_32;
  e_2 :
  a_0 :
  Cpush(g_2);
  Tdupl();
  BuildVard(0,7);
  Tpop();
  Tdupl();
  Epushd(1,1);
  BuildFun("TNil",0);
  BuildVard(0,1);
  MatchVard(1,1);
  BuildFun("stderr",0);
  Tpush();
  BuildStr("usage : ");
  Tpush();
  BuildVard(1,1);
  Tpush();
  BuildStr(" [-silent] [-i file] [-o file] [-pp] [-b] [-stats] [-help|-h]");
  Tpush();
  BuildFun("Nil",0);
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
  Epopd(1,1);
  Rpush(h_2);
  goto i_32;
  h_2 :
  Tpop();
  Rpush(i_2);
  goto d_32;
  i_2 :
  BuildInt(1);
  Rpush(j_2);
  goto j_32;
  j_2 :
  Cpop();
  goto f_2;
  g_2 :
  Cpush(l_2);
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  MatchVard(2,1);
  Epushd(3,1);
  BuildVard(1,1);
  Cpush(n_2);
  BuildVard(0,3);
  Cpop();
  goto m_2;
  n_2 :
  BuildFun("stdin",0);
  m_2 :
  Rpush(o_2);
  goto e_32;
  o_2 :
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
  Tdupl();
  Rpush(p_2);
  goto f_32;
  p_2 :
  Tpop();
  Epushd(1,3);
  MatchFun("TCons");
  Arg(0);
  MatchVard(1,1);
  Tpop();
  Arg(1);
  MatchFun("TCons");
  Arg(0);
  MatchVard(1,3);
  Tpop();
  Arg(1);
  MatchVard(1,2);
  Tpop();
  Tpop();
  BuildVard(1,3);
  Epopd(1,3);
  Epushd(1,3);
  MatchFun("Block");
  Arg(0);
  MatchVard(1,2);
  Tpop();
  Tdupl();
  BuildVard(1,2);
  Cpush(r_2);
  Rpush(s_2);
  z_30 :
  Cpush(u_2);
  Rpush(v_2);
  goto b_32;
  v_2 :
  Cpop();
  goto t_2;
  u_2 :
  Cpush(x_2);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MatchFun("ICountRule");
  Arg(0);
  MatchVard(2,1);
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildFun("RuleCounter",1);
  Epopd(2,1);
  OneNextSon();
  Rpush(y_2);
  goto z_30;
  y_2 :
  AllBuild();
  Cpop();
  goto w_2;
  x_2 :
  Epushd(2,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  BuildVard(2,2);
  Epopd(2,2);
  Rpush(z_2);
  goto z_30;
  z_2 :
  w_2 :
  t_2 :
  Return();
  s_2 :
  Cpop();
  goto q_2;
  r_2 :
  Rpush(a_3);
  a_31 :
  Cpush(c_3);
  Rpush(d_3);
  goto b_32;
  d_3 :
  Cpop();
  goto b_3;
  c_3 :
  Cpush(f_3);
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MatchFun("ICountRule");
  Arg(0);
  MatchVard(2,1);
  Tpop();
  BuildVard(2,1);
  Tpush();
  BuildFun("RuleCounter",1);
  Epopd(2,1);
  OneNextSon();
  AllBuild();
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_3);
  goto a_31;
  g_3 :
  AllBuild();
  Cpop();
  goto e_3;
  f_3 :
  Epushd(2,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  BuildVard(2,2);
  Epopd(2,2);
  Rpush(h_3);
  goto a_31;
  h_3 :
  e_3 :
  b_3 :
  Return();
  a_3 :
  q_2 :
  Rpush(i_3);
  goto k_32;
  i_3 :
  Rpush(j_3);
  b_31 :
  Cpush(l_3);
  Rpush(m_3);
  goto b_32;
  m_3 :
  Cpop();
  goto k_3;
  l_3 :
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MatchFun("RuleCounter");
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Epushd(3,1);
  BuildVard(2,1);
  new();
  MatchVard(3,1);
  BuildVard(2,1);
  Tpush();
  BuildVard(3,1);
  Tpush();
  BuildFun("RuleCounter",2);
  Epopd(3,1);
  Epopd(2,1);
  OneNextSon();
  Rpush(n_3);
  goto b_31;
  n_3 :
  AllBuild();
  k_3 :
  Return();
  j_3 :
  MatchVard(1,1);
  BuildVard(1,2);
  Rpush(o_3);
  c_31 :
  Cpush(q_3);
  Rpush(r_3);
  goto b_32;
  r_3 :
  Cpop();
  goto p_3;
  q_3 :
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  Cpush(t_3);
  Epushd(2,2);
  MatchFun("ICountRule");
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Tdupl();
  BuildVard(1,1);
  Tdupl();
  u_3 :
  MatchFun("Cons");
  Cpush(v_3);
  Arg(0);
  MatchFun("RuleCounter");
  Arg(0);
  MatchVard(2,1);
  Tpop();
  Arg(1);
  MatchVard(2,2);
  Tpop();
  Tpop();
  Cpop();
  goto w_3;
  v_3 :
  Arg(1);
  Tdrop();
  goto u_3;
  w_3 :
  Tpop();
  Tpop();
  BuildVard(2,2);
  Tpush();
  BuildFun("ICountRule",1);
  Epopd(2,2);
  Cpop();
  goto s_3;
  t_3 :
  s_3 :
  OneNextSon();
  Rpush(x_3);
  goto c_31;
  x_3 :
  AllBuild();
  p_3 :
  Return();
  o_3 :
  MatchVard(1,3);
  Tpop();
  BuildVard(1,1);
  Tpush();
  BuildFun("RuleCounters",1);
  Tpush();
  BuildVard(1,3);
  Tpush();
  BuildFun("Block",1);
  Tpush();
  BuildFun("Program",2);
  Epopd(1,3);
  Tdupl();
  Rpush(y_3);
  goto f_32;
  y_3 :
  MatchVard(0,9);
  Tpop();
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  Cpush(a_4);
  BuildVard(0,4);
  Cpop();
  goto z_3;
  a_4 :
  BuildFun("stdout",0);
  z_3 :
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
  Cpush(c_4);
  Tdupl();
  BuildVard(0,5);
  Tpop();
  Rpush(d_4);
  goto g_32;
  d_4 :
  Cpop();
  goto b_4;
  c_4 :
  Rpush(e_4);
  goto h_32;
  e_4 :
  b_4 :
  BuildFun("stderr",0);
  Tpush();
  BuildStr("  rewriting succeeded (");
  Tpush();
  BuildVard(0,9);
  Tpush();
  BuildStr(" secs)");
  Tpush();
  BuildFun("Nil",0);
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
  Rpush(f_4);
  goto i_32;
  f_4 :
  BuildInt(0);
  Rpush(g_4);
  goto j_32;
  g_4 :
  Cpop();
  goto k_2;
  l_2 :
  Epushd(1,1);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(1,1);
  Cpush(i_4);
  BuildVard(0,4);
  Cpop();
  goto h_4;
  i_4 :
  BuildFun("stdout",0);
  h_4 :
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
  Cpush(k_4);
  Tdupl();
  BuildVard(0,5);
  Tpop();
  Rpush(l_4);
  goto g_32;
  l_4 :
  Cpop();
  goto j_4;
  k_4 :
  Rpush(m_4);
  goto h_32;
  m_4 :
  j_4 :
  BuildFun("stderr",0);
  Tpush();
  BuildStr("  rewriting failed");
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
  Rpush(n_4);
  goto i_32;
  n_4 :
  BuildInt(1);
  Rpush(o_4);
  goto j_32;
  o_4 :
  k_2 :
  f_2 :
  Epopd(0,9);
  Return();
  b_32 :
  MatchFun("Nil");
  Return();
  c_32 :
  MatchFun("None");
  Return();
  d_32 :
  Tdupl();
  Epushd(0,1);
  MatchVard(0,1);
  Epushd(1,1);
  BuildVard(0,1);
  BuildFun("stderr",0);
  MatchVard(1,1);
  Epushd(2,1);
  BuildVard(0,1);
  Epushd(3,1);
  MatchVard(3,1);
  BuildVard(3,1);
  Tpush();
  BuildFun("Nil",0);
  Tpush();
  BuildFun("Cons",2);
  Epopd(3,1);
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
  Epopd(0,1);
  Rpush(p_4);
  goto i_32;
  p_4 :
  Tpop();
  Return();
  e_32 :
  _ST_ReadFromFile();
  Return();
  f_32 :
  _ST_dtime();
  Return();
  g_32 :
  _ST_WriteToBinaryFile();
  Return();
  h_32 :
  _ST_WriteToTextFile();
  Return();
  i_32 :
  _ST_printnl();
  Return();
  j_32 :
  _ST_exit();
  Return();
  k_32 :
  Rpush(q_4);
  w_31 :
  Cpush(s_4);
  Rpush(t_4);
  goto b_32;
  t_4 :
  Cpop();
  goto r_4;
  s_4 :
  MatchFun("Cons");
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(u_4);
  goto w_31;
  u_4 :
  AllBuild();
  r_4 :
  Cpush(w_4);
  v_4 :
  Epushd(0,2);
  MatchFun("Cons");
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Arg(1);
  MatchVard(0,2);
  Tpop();
  Tdupl();
  BuildVard(0,2);
  Tdupl();
  x_4 :
  MatchFun("Cons");
  Cpush(y_4);
  Arg(0);
  MatchVard(0,1);
  Tpop();
  Cpop();
  goto z_4;
  y_4 :
  Arg(1);
  Tdrop();
  goto x_4;
  z_4 :
  Tpop();
  Tpop();
  BuildVard(0,2);
  Epopd(0,2);
  Tduplinv();
  goto v_4;
  w_4 :
  Return();
  q_4 :
  Return();
  a_5 :
DOIT_END
