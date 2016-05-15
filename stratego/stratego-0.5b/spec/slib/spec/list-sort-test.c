#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,v_0);
VARDECL(AFun,t_0);
VARDECL(AFun,s_0);
VARDECL(AFun,r_0);
VARDECL(AFun,l_0);
PROCDECL(_stratego_x_1);
PROCDECL(_stratego_y_1);
PROCDECL(_stratego_z_1);
PROCDECL(_stratego_a_2);
PROCDECL(_stratego_b_2);
PROCDECL(_stratego_c_2);
PROCDECL(_stratego_d_2);
PROCDECL(_stratego_e_2);
PROCDECL(_stratego_f_2);
PROCDECL(_stratego_g_2);
PROCDECL(_stratego_h_2);
PROCDECL(_stratego_i_2);
PROCDECL(_stratego_j_2);
PROCDECL(_stratego_k_2);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(v_0,ATmakeAFun("TNil",0,0));
  MOVE(t_0,ATmakeAFun("Nil",0,0));
  MOVE(s_0,ATmakeAFun("stderr",0,0));
  MOVE(r_0,ATmakeAFun("TCons",2,0));
  MOVE(l_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_x_1)
  Epushd(0,1);
  Instr(Let(SDef(Cons(DontInline(),Nil()),"i_0",Nil(),Id()),Seq(Assign(Var("o_0")),Case("n_0",Var("o_0"),Cons(Alt(Fun("Nil",0),Nil(),Call(SVar("i_0"),Nil())),Nil()),Fail()))),Cons(TCons(0,TCons(Cons("o_0",Nil()),TNil())),Nil()),1);
  Epopd(0,1);
ENDPROC

PROC(_stratego_y_1)
  Epushd(0,1);
  Rpush(c_0);
  w_2 :
  Cpush(e_0);
  Rpush(f_0);
  goto t_24;
  f_0 :
  goto d_0;
  e_0 :
  goto g_0;
  d_0 :
  Cpop();
  g_0 :
  Cpush(j_0);
  Ccall(_stratego_x_1);
  goto h_0;
  j_0 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_0);
  goto w_2;
  m_0 :
  AllBuild();
  goto k_0;
  h_0 :
  Cpop();
  k_0 :
  Return();
  c_0 :
  goto b_0;
  t_24 :
  Epushd(1,3);
  Instr(Let(SDef(Cons(DontInline(),Nil()),"u_0",Nil(),Seq(Where(Scope(Cons("u_2",Nil()),Seq(Build(Var("l_2")),Seq(Rec("v_2",Choice(Call(SVar("x_1"),Nil()),LChoice(Cong("Cons",Cons(Not(Scope(Cons("o_2",Nil()),Seq(Assign(Var("o_2")),Assign(Var("r_1"),Var("o_2"))))),Cons(Call(SVar("v_2"),Nil()),Nil()))),Scope(Cons("p_2",Cons("q_2",Cons("r_2",Nil()))),Let(SDef(Cons(DontInline(),Nil()),"w_0",Nil(),Seq(Build(Var("r_2")),Call(SVar("v_2"),Nil()))),Seq(Assign(Var("p_2")),Case("c_1",Var("p_2"),Cons(Alt(Fun("Cons",2),Cons(Var("q_2"),Cons(Var("r_2"),Nil())),Call(SVar("w_0"),Nil())),Nil()),Fail()))))))),Seq(Assign(Var("u_2")),Assign(Var("k_1"),Var("u_2"))))))),Build(Op("Cons",Cons(Var("r_1"),Cons(Var("k_1"),Nil())))))),Seq(Assign(Var("q_1")),Case("j_1",Var("q_1"),Cons(Alt(Fun("Cons",2),Cons(Var("r_1"),Cons(Var("l_2"),Nil())),Call(SVar("u_0"),Nil())),Nil()),Fail()))),Cons(TCons(1,TCons(Cons("q_1",Cons("r_1",Cons("l_2",Nil()))),TNil())),Cons(TCons(0,TCons(Cons("k_1",Nil()),TNil())),Nil())),2);
  Epopd(1,3);
  Return();
  b_0 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_z_1)
  Epushd(0,6);
  Instr(Let(SDef(Cons(DontInline(),Nil()),"y_2",Nil(),Seq(Assign(Var("c_3"),Var("f_3")),Assign(Var("c_3"),Var("h_3")))),Seq(Assign(Var("c_3")),Seq(Assign(Var("e_3")),Case("z_2",Var("e_3"),Cons(Alt(Fun("TCons",2),Cons(Var("f_3"),Cons(Var("g_3"),Nil())),Case("a_3",Var("g_3"),Cons(Alt(Fun("TCons",2),Cons(Var("h_3"),Cons(Var("i_3"),Nil())),Case("b_3",Var("i_3"),Cons(Alt(Fun("TNil",0),Nil(),Call(SVar("y_2"),Nil())),Nil()),Fail())),Nil()),Fail())),Nil()),Fail())))),Cons(TCons(0,TCons(Cons("c_3",Cons("e_3",Cons("f_3",Cons("g_3",Cons("h_3",Cons("i_3",Nil())))))),TNil())),Nil()),1);
  Epopd(0,6);
ENDPROC

PROC(_stratego_a_2)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(r_0,(ATerm)ATmakeAppl0(s_0),(ATerm)ATmakeAppl2(r_0,(ATerm)ATmakeAppl2(l_0,Egetd(0,1),(ATerm)ATmakeAppl0(t_0)),(ATerm)ATmakeAppl0(v_0))));
  Ccall(_stratego_k_2);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_b_2)
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(r_0,Egetd(0,1),(ATerm)ATmakeAppl2(r_0,MakeInt(1),(ATerm)ATmakeAppl0(v_0))));
  Ccall(_stratego_c_2);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_h_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_c_2)
  _ST_add();
ENDPROC

PROC(_stratego_d_2)
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(r_0,Egetd(0,1),(ATerm)ATmakeAppl2(r_0,MakeInt(1),(ATerm)ATmakeAppl0(v_0))));
  Ccall(_stratego_c_2);
  Epopd(0,1);
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_h_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_e_2)
  Epushd(0,2);
  Tdupl();
  Tset(ATmakeString("tuple-uniq-test"));
  Ccall(_stratego_a_2);
  Tpop();
  Cpush(y_0);
  Tdupl();
  Cpush(a_1);
  Epushd(1,1);
  Tset((ATerm)ATmakeAppl2(l_0,MakeInt(1),(ATerm)ATmakeAppl2(l_0,MakeInt(2),(ATerm)ATmakeAppl2(l_0,MakeInt(3),(ATerm)ATmakeAppl2(l_0,MakeInt(5),(ATerm)ATmakeAppl2(l_0,MakeInt(3),(ATerm)ATmakeAppl2(l_0,MakeInt(7),(ATerm)ATmakeAppl2(l_0,MakeInt(1),(ATerm)ATmakeAppl2(l_0,MakeInt(4),(ATerm)ATmakeAppl2(l_0,MakeInt(9),(ATerm)ATmakeAppl2(l_0,MakeInt(2),(ATerm)ATmakeAppl0(t_0))))))))))));
  Ccall(_stratego_y_1);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  goto z_0;
  a_1 :
  Tset(ATmakeString("  failed"));
  Ccall(_stratego_a_2);
  Ccall(_stratego_z_1);
  goto b_1;
  z_0 :
  Cpop();
  b_1 :
  Tset((ATerm)ATmakeAppl2(l_0,MakeInt(1),(ATerm)ATmakeAppl2(l_0,MakeInt(2),(ATerm)ATmakeAppl2(l_0,MakeInt(3),(ATerm)ATmakeAppl2(l_0,MakeInt(5),(ATerm)ATmakeAppl2(l_0,MakeInt(7),(ATerm)ATmakeAppl2(l_0,MakeInt(4),(ATerm)ATmakeAppl2(l_0,MakeInt(9),(ATerm)ATmakeAppl0(t_0)))))))));
  Tdupl();
  Tset((ATerm)ATmakeAppl2(l_0,MakeInt(1),(ATerm)ATmakeAppl2(l_0,MakeInt(2),(ATerm)ATmakeAppl2(l_0,MakeInt(3),(ATerm)ATmakeAppl2(l_0,MakeInt(5),(ATerm)ATmakeAppl2(l_0,MakeInt(7),(ATerm)ATmakeAppl2(l_0,MakeInt(4),(ATerm)ATmakeAppl2(l_0,MakeInt(9),(ATerm)ATmakeAppl0(t_0)))))))));
  MoveTop(0,2);
  Tpop();
  Cpush(e_1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(0,1,0,2);
  goto d_1;
  e_1 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(r_0,(ATerm)ATmakeAppl0(s_0),(ATerm)ATmakeAppl2(r_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("  result not equal: "),(ATerm)ATmakeAppl2(l_0,Egetd(1,1),(ATerm)ATmakeAppl0(t_0))),(ATerm)ATmakeAppl0(v_0))));
  Ccall(_stratego_k_2);
  Epopd(1,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Tdupl();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(r_0,(ATerm)ATmakeAppl0(s_0),(ATerm)ATmakeAppl2(r_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("  expected: "),(ATerm)ATmakeAppl2(l_0,Egetd(1,1),(ATerm)ATmakeAppl0(t_0))),(ATerm)ATmakeAppl0(v_0))));
  Ccall(_stratego_k_2);
  Epopd(1,1);
  Tpop();
  Ccall(_stratego_z_1);
  goto f_1;
  d_1 :
  Cpop();
  f_1 :
  Tpop();
  Ccall(_stratego_d_2);
  goto x_0;
  y_0 :
  Ccall(_stratego_b_2);
  goto g_1;
  x_0 :
  Cpop();
  g_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_f_2)
  _ST_exit();
ENDPROC

PROC(_stratego_g_2)
  Cpush(i_1);
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Epushd(0,1);
  Instr(Let(SDef(Cons(DontInline(),Nil()),"n_5",Nil(),Id()),Seq(Assign(Var("p_5")),Case("o_5",Var("p_5"),Cons(Alt(Int(0),Nil(),Call(SVar("n_5"),Nil())),Nil()),Fail()))),Cons(TCons(0,TCons(Cons("p_5",Nil()),TNil())),Nil()),1);
  Epopd(0,1);
  OneNextSon();
  Ccall(_stratego_h_2);
  AllBuild();
  AllBuild();
  Tset(MakeInt(0));
  Ccall(_stratego_f_2);
  goto h_1;
  i_1 :
  Tset(MakeInt(1));
  Ccall(_stratego_f_2);
  goto m_1;
  h_1 :
  Cpop();
  m_1 :
ENDPROC

PROC(_stratego_h_2)
  Epushd(0,1);
  Instr(Let(SDef(Cons(DontInline(),Nil()),"q_5",Nil(),Id()),Seq(Assign(Var("s_5")),Case("r_5",Var("s_5"),Cons(Alt(Fun("TNil",0),Nil(),Call(SVar("q_5"),Nil())),Nil()),Fail()))),Cons(TCons(0,TCons(Cons("s_5",Nil()),TNil())),Nil()),1);
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_2)
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(r_0,(ATerm)ATmakeAppl0(s_0),(ATerm)ATmakeAppl2(r_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("successes: "),(ATerm)ATmakeAppl2(l_0,Egetd(0,1),(ATerm)ATmakeAppl0(t_0))),(ATerm)ATmakeAppl0(v_0))));
  Ccall(_stratego_k_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  TestFunTop(r_0);
  TravInit();
  OneNextSon();
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(r_0,(ATerm)ATmakeAppl0(s_0),(ATerm)ATmakeAppl2(r_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("failures: "),(ATerm)ATmakeAppl2(l_0,Egetd(0,1),(ATerm)ATmakeAppl0(t_0))),(ATerm)ATmakeAppl0(v_0))));
  Ccall(_stratego_k_2);
  Epopd(0,1);
  Tpop();
  OneNextSon();
  Ccall(_stratego_h_2);
  AllBuild();
  AllBuild();
ENDPROC

PROC(_stratego_j_2)
  Tset((ATerm)ATmakeAppl2(r_0,MakeInt(0),(ATerm)ATmakeAppl2(r_0,MakeInt(0),(ATerm)ATmakeAppl0(v_0))));
ENDPROC

PROC(_stratego_k_2)
  _ST_printnl();
ENDPROC

PROC(_stratego_main)
  Tset(ATmakeString("list-sort-test"));
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(r_0,(ATerm)ATmakeAppl0(s_0),(ATerm)ATmakeAppl2(r_0,(ATerm)ATmakeAppl2(l_0,ATmakeString("test suite: "),(ATerm)ATmakeAppl2(l_0,Egetd(0,1),(ATerm)ATmakeAppl0(t_0))),(ATerm)ATmakeAppl0(v_0))));
  Ccall(_stratego_k_2);
  Epopd(0,1);
  Tpop();
  Ccall(_stratego_j_2);
  Ccall(_stratego_e_2);
  Ccall(_stratego_i_2);
  Ccall(_stratego_g_2);
ENDPROC

DOIT

