Program(RuleCounters([]),Block([Rpush("g_10"),Goto("main"),Block([Label("main"),MatchFun("Cons",2),TravInit,OneNextSon,Epushd(0,1),MoveTop(0,1),NotNULLd(0,1),Tset(App1("Program",Egetd(0,1))),Epopd(0,1),OneNextSon,Rpush("a_0"),Label("z_12"),Cpush("d_0"),Cpush("f_0"),Rpush("g_0"),Goto("q_3"),Label("g_0"),Goto("e_0"),Label("f_0"),Rpush("i_0"),Goto("r_3"),Label("i_0"),MatchFun("Cons",2),TravInit,OneNextSon,OneNextSon,Rpush("j_0"),Goto("z_12"),Label("j_0"),AllBuild,Goto("h_0"),Label("e_0"),Cpop,Label("h_0"),Goto("b_0"),Label("d_0"),Epushd(0,3),MoveTop(0,1),Label("c_0"),TestFun(0,1,"Cons",2,"fail"),MoveArg(0,2,0,1,0),MoveArg(0,3,0,1,1),Rpush("m_0"),Goto("a_13"),Label("m_0"),Goto("l_0"),Label("a_13"),NotNULLd(0,2),NotNULLd(0,3),Tset(App2("Cons",App1("Undefined",Egetd(0,2)),Egetd(0,3))),Return,Label("l_0"),Epopd(0,3),Goto("k_0"),Label("b_0"),Cpop,Label("k_0"),Return,Label("a_0"),AllBuild,Cpush("o_0"),Rpush("p_0"),Goto("s_3"),Label("p_0"),Goto("n_0"),Label("o_0"),Ccontinue("q_0"),Epushd(0,6),Rpush("r_0"),Goto("x_3"),Label("r_0"),Tdupl,Rpush("s_0"),Goto("a_4"),Label("s_0"),Tpop,MatchFun("TCons",2),TravInit,OneNextSon,OneNextSon,MatchFun("TCons",2),TravInit,OneNextSon,OneNextSon,Rpush("t_0"),Goto("g_4"),Label("t_0"),AllBuild,AllBuild,Tdupl,Epushd(1,1),Rpush("u_0"),Goto("a_4"),Label("u_0"),MoveTop(1,1),Move(0,1,1,1),Epopd(1,1),Tpop,MoveTop(0,2),Label("w_2"),TestFun(0,2,"TCons",2,"fail"),MoveArg(0,3,0,2,0),MoveArg(0,4,0,2,1),Label("x_2"),TestFun(0,4,"TCons",2,"fail"),MoveArg(0,5,0,4,0),MoveArg(0,6,0,4,1),Label("y_2"),TestFun(0,6,"TNil",0,"fail"),Rpush("w_0"),Goto("c_13"),Label("w_0"),Goto("v_0"),Label("c_13"),NotNULLd(0,1),NotNULLd(0,3),NotNULLd(0,5),Tset(App2("TCons",App2("Cons",App1("Runtime",Egetd(0,1)),Egetd(0,3)),App2("TCons",Egetd(0,5),App0("TNil")))),Return,Label("v_0"),Rpush("x_0"),Goto("b_4"),Label("x_0"),Rpush("y_0"),Goto("e_4"),Label("y_0"),Epopd(0,6),Goto("n_0"),Label("q_0"),Rpush("a_1"),Goto("f_4"),Label("a_1"),Goto("z_0"),Label("n_0"),Cpop,Label("z_0"),Return,Label("q_3"),MatchFun("Nil",0),TravInit,AllBuild,Return,Label("r_3"),Epushd(0,5),MoveTop(0,3),Label("j_6"),TestFun(0,3,"Cons",2,"fail"),MoveArg(0,4,0,3,0),MoveArg(0,5,0,3,1),Label("k_6"),TestFun(0,5,"Cons",2,"r_1"),MoveArg(0,1,0,5,0),MoveArg(0,2,0,5,1),Cpush("t_1"),Rpush("u_1"),Goto("d_13"),Label("u_1"),Goto("s_1"),Label("t_1"),Ccontinue("v_1"),Rpush("w_1"),Goto("g_13"),Label("w_1"),Goto("s_1"),Label("v_1"),Ccontinue("x_1"),Rpush("y_1"),Goto("j_13"),Label("y_1"),Goto("s_1"),Label("x_1"),Ccontinue("z_1"),Rpush("a_2"),Goto("m_13"),Label("a_2"),Goto("s_1"),Label("z_1"),Ccontinue("b_2"),Rpush("c_2"),Goto("p_13"),Label("c_2"),Goto("s_1"),Label("b_2"),Ccontinue("d_2"),Rpush("e_2"),Goto("s_13"),Label("e_2"),Goto("s_1"),Label("d_2"),Ccontinue("f_2"),Rpush("g_2"),Goto("w_13"),Label("g_2"),Goto("s_1"),Label("f_2"),Ccontinue("h_2"),Rpush("i_2"),Goto("a_14"),Label("i_2"),Goto("s_1"),Label("h_2"),Ccontinue("j_2"),Rpush("k_2"),Goto("e_14"),Label("k_2"),Goto("s_1"),Label("j_2"),Ccontinue("l_2"),Rpush("m_2"),Goto("i_14"),Label("m_2"),Goto("s_1"),Label("l_2"),Ccontinue("n_2"),Rpush("o_2"),Goto("m_14"),Label("o_2"),Goto("s_1"),Label("n_2"),Ccontinue("p_2"),Rpush("q_2"),Goto("p_14"),Label("q_2"),Goto("s_1"),Label("p_2"),Ccontinue("r_2"),Rpush("s_2"),Goto("s_14"),Label("s_2"),Goto("s_1"),Label("r_2"),Ccontinue("t_2"),Rpush("u_2"),Goto("v_14"),Label("u_2"),Goto("s_1"),Label("t_2"),Rpush("z_2"),Goto("y_14"),Label("z_2"),Goto("v_2"),Label("s_1"),Cpop,Label("v_2"),Goto("q_1"),Label("r_1"),Cpush("b_3"),Rpush("c_3"),Goto("d_13"),Label("c_3"),Goto("a_3"),Label("b_3"),Ccontinue("d_3"),Rpush("e_3"),Goto("g_13"),Label("e_3"),Goto("a_3"),Label("d_3"),Ccontinue("f_3"),Rpush("g_3"),Goto("j_13"),Label("g_3"),Goto("a_3"),Label("f_3"),Ccontinue("h_3"),Rpush("i_3"),Goto("m_13"),Label("i_3"),Goto("a_3"),Label("h_3"),Ccontinue("j_3"),Rpush("k_3"),Goto("p_13"),Label("k_3"),Goto("a_3"),Label("j_3"),Ccontinue("l_3"),Rpush("m_3"),Goto("m_14"),Label("m_3"),Goto("a_3"),Label("l_3"),Ccontinue("n_3"),Rpush("o_3"),Goto("p_14"),Label("o_3"),Goto("a_3"),Label("n_3"),Ccontinue("p_3"),Rpush("y_3"),Goto("s_14"),Label("y_3"),Goto("a_3"),Label("p_3"),Ccontinue("h_4"),Rpush("i_4"),Goto("v_14"),Label("i_4"),Goto("a_3"),Label("h_4"),Rpush("k_4"),Goto("y_14"),Label("k_4"),Goto("j_4"),Label("a_3"),Cpop,Label("j_4"),Goto("q_1"),Label("q_1"),Goto("p_1"),Label("y_14"),Tdupl,Epushd(1,1),NotNULLd(0,4),Tset(Egetd(0,4)),MoveTop(1,1),Label("h_6"),TestStr(1,1,"-?","fail"),Rpush("n_4"),Goto("z_14"),Label("n_4"),Goto("l_4"),Label("z_14"),Return,Label("l_4"),Epopd(1,1),Tpop,Tset(App0("Help")),NotNULLd(0,5),Tset(App2("Cons",App0("Help"),Egetd(0,5))),Return,Label("p_1"),Goto("o_1"),Label("v_14"),Tdupl,Epushd(1,1),NotNULLd(0,4),Tset(Egetd(0,4)),MoveTop(1,1),Label("e_6"),TestStr(1,1,"-h","fail"),Rpush("q_4"),Goto("w_14"),Label("q_4"),Goto("o_4"),Label("w_14"),Return,Label("o_4"),Epopd(1,1),Tpop,Tset(App0("Help")),NotNULLd(0,5),Tset(App2("Cons",App0("Help"),Egetd(0,5))),Return,Label("o_1"),Goto("n_1"),Label("s_14"),Tdupl,Epushd(1,1),NotNULLd(0,4),Tset(Egetd(0,4)),MoveTop(1,1),Label("b_6"),TestStr(1,1,"--help","fail"),Rpush("t_4"),Goto("t_14"),Label("t_4"),Goto("r_4"),Label("t_14"),Return,Label("r_4"),Epopd(1,1),Tpop,Tset(App0("Help")),NotNULLd(0,5),Tset(App2("Cons",App0("Help"),Egetd(0,5))),Return,Label("n_1"),Goto("m_1"),Label("p_14"),Tdupl,Epushd(1,1),NotNULLd(0,4),Tset(Egetd(0,4)),MoveTop(1,1),Label("y_5"),TestStr(1,1,"-s","fail"),Rpush("w_4"),Goto("q_14"),Label("w_4"),Goto("u_4"),Label("q_14"),Return,Label("u_4"),Epopd(1,1),Tpop,Tset(App0("Statistics")),NotNULLd(0,5),Tset(App2("Cons",App0("Statistics"),Egetd(0,5))),Return,Label("m_1"),Goto("l_1"),Label("m_14"),Tdupl,Epushd(1,1),NotNULLd(0,4),Tset(Egetd(0,4)),MoveTop(1,1),Label("v_5"),TestStr(1,1,"-b","fail"),Rpush("z_4"),Goto("n_14"),Label("z_4"),Goto("x_4"),Label("n_14"),Return,Label("x_4"),Epopd(1,1),Tpop,Tset(App0("Binary")),NotNULLd(0,5),Tset(App2("Cons",App0("Binary"),Egetd(0,5))),Return,Label("l_1"),Goto("k_1"),Label("i_14"),Tdupl,Epushd(1,1),NotNULLd(0,4),Tset(Egetd(0,4)),MoveTop(1,1),Label("r_5"),TestStr(1,1,"--output","fail"),Rpush("c_5"),Goto("j_14"),Label("c_5"),Goto("a_5"),Label("j_14"),Return,Label("a_5"),Epopd(1,1),Tpop,NotNULLd(0,1),Tset(App1("Output",Egetd(0,1))),NotNULLd(0,1),NotNULLd(0,2),Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2))),Return,Label("k_1"),Goto("j_1"),Label("e_14"),Tdupl,Epushd(1,1),NotNULLd(0,4),Tset(Egetd(0,4)),MoveTop(1,1),Label("n_5"),TestStr(1,1,"-o","fail"),Rpush("e_5"),Goto("f_14"),Label("e_5"),Goto("d_5"),Label("f_14"),Return,Label("d_5"),Epopd(1,1),Tpop,NotNULLd(0,1),Tset(App1("Output",Egetd(0,1))),NotNULLd(0,1),NotNULLd(0,2),Tset(App2("Cons",App1("Output",Egetd(0,1)),Egetd(0,2))),Return,Label("j_1"),Goto("i_1"),Label("a_14"),Tdupl,Epushd(1,1),NotNULLd(0,4),Tset(Egetd(0,4)),MoveTop(1,1),Label("j_5"),TestStr(1,1,"--input","fail"),Rpush("h_5"),Goto("b_14"),Label("h_5"),Goto("g_5"),Label("b_14"),Return,Label("g_5"),Epopd(1,1),Tpop,NotNULLd(0,1),Tset(App1("Input",Egetd(0,1))),NotNULLd(0,1),NotNULLd(0,2),Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2))),Return,Label("i_1"),Goto("h_1"),Label("w_13"),Tdupl,Epushd(1,1),NotNULLd(0,4),Tset(Egetd(0,4)),MoveTop(1,1),Label("f_5"),TestStr(1,1,"-i","fail"),Rpush("k_5"),Goto("x_13"),Label("k_5"),Goto("i_5"),Label("x_13"),Return,Label("i_5"),Epopd(1,1),Tpop,NotNULLd(0,1),Tset(App1("Input",Egetd(0,1))),NotNULLd(0,1),NotNULLd(0,2),Tset(App2("Cons",App1("Input",Egetd(0,1)),Egetd(0,2))),Return,Label("h_1"),Goto("g_1"),Label("s_13"),Tdupl,Epushd(1,1),NotNULLd(0,4),Tset(Egetd(0,4)),MoveTop(1,1),Label("b_5"),TestStr(1,1,"@version","fail"),Rpush("m_5"),Goto("t_13"),Label("m_5"),Goto("l_5"),Label("t_13"),Return,Label("l_5"),Epopd(1,1),Tpop,NotNULLd(0,1),Tset(App1("DeclVersion",Egetd(0,1))),NotNULLd(0,1),NotNULLd(0,2),Tset(App2("Cons",App1("DeclVersion",Egetd(0,1)),Egetd(0,2))),Return,Label("g_1"),Goto("f_1"),Label("p_13"),Tdupl,Epushd(1,1),NotNULLd(0,4),Tset(Egetd(0,4)),MoveTop(1,1),Label("y_4"),TestStr(1,1,"--version","fail"),Rpush("p_5"),Goto("q_13"),Label("p_5"),Goto("o_5"),Label("q_13"),Return,Label("o_5"),Epopd(1,1),Tpop,Tset(App0("Version")),NotNULLd(0,5),Tset(App2("Cons",App0("Version"),Egetd(0,5))),Return,Label("f_1"),Goto("e_1"),Label("m_13"),Tdupl,Epushd(1,1),NotNULLd(0,4),Tset(Egetd(0,4)),MoveTop(1,1),Label("v_4"),TestStr(1,1,"-v","fail"),Rpush("s_5"),Goto("n_13"),Label("s_5"),Goto("q_5"),Label("n_13"),Return,Label("q_5"),Epopd(1,1),Tpop,Tset(App0("Version")),NotNULLd(0,5),Tset(App2("Cons",App0("Version"),Egetd(0,5))),Return,Label("e_1"),Goto("d_1"),Label("j_13"),Tdupl,Epushd(1,1),NotNULLd(0,4),Tset(Egetd(0,4)),MoveTop(1,1),Label("s_4"),TestStr(1,1,"--verbose","fail"),Rpush("u_5"),Goto("k_13"),Label("u_5"),Goto("t_5"),Label("k_13"),Return,Label("t_5"),Epopd(1,1),Tpop,Tset(App0("Verbose")),NotNULLd(0,5),Tset(App2("Cons",App0("Verbose"),Egetd(0,5))),Return,Label("d_1"),Goto("c_1"),Label("g_13"),Tdupl,Epushd(1,1),NotNULLd(0,4),Tset(Egetd(0,4)),MoveTop(1,1),Label("p_4"),TestStr(1,1,"--silent","fail"),Rpush("x_5"),Goto("h_13"),Label("x_5"),Goto("w_5"),Label("h_13"),Return,Label("w_5"),Epopd(1,1),Tpop,Tset(App0("Silent")),NotNULLd(0,5),Tset(App2("Cons",App0("Silent"),Egetd(0,5))),Return,Label("c_1"),Goto("b_1"),Label("d_13"),Tdupl,Epushd(1,1),NotNULLd(0,4),Tset(Egetd(0,4)),MoveTop(1,1),Label("m_4"),TestStr(1,1,"-S","fail"),Rpush("a_6"),Goto("e_13"),Label("a_6"),Goto("z_5"),Label("e_13"),Return,Label("z_5"),Epopd(1,1),Tpop,Tset(App0("Silent")),NotNULLd(0,5),Tset(App2("Cons",App0("Silent"),Egetd(0,5))),Return,Label("b_1"),Epopd(0,5),Return,Label("s_3"),Tdupl,Label("c_6"),MatchFun("Cons",2),Cpush("d_6"),Arg(0),Cpush("i_6"),Rpush("l_6"),Goto("t_3"),Label("l_6"),Goto("g_6"),Label("i_6"),MatchFun("Undefined",1),TravInit,OneNextSon,AllBuild,Goto("n_6"),Label("g_6"),Cpop,Label("n_6"),Tpop,Cpop,Goto("f_6"),Label("d_6"),Arg(1),Tdrop,Goto("c_6"),Label("f_6"),Tpop,Rpush("p_6"),Goto("u_3"),Label("p_6"),Return,Label("t_3"),MatchFun("Help",0),TravInit,AllBuild,Return,Label("u_3"),Epushd(0,1),Tdupl,Tdupl,Label("q_6"),MatchFun("Cons",2),Cpush("r_6"),Arg(0),Epushd(1,2),MoveTop(1,1),Label("m_6"),TestFun(1,1,"Program",1,"fail"),MoveArg(1,2,1,1,0),Rpush("v_6"),Goto("d_15"),Label("v_6"),Goto("t_6"),Label("d_15"),Move(0,1,1,2),Return,Label("t_6"),Epopd(1,2),Tpop,Cpop,Goto("s_6"),Label("r_6"),Arg(1),Tdrop,Goto("q_6"),Label("s_6"),Tpop,NotNULLd(0,1),Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("usage : "),App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),App0("Nil")))),App0("TNil")))),Rpush("w_6"),Goto("v_3"),Label("w_6"),Tset(ATmakeInt(1)),Rpush("x_6"),Goto("w_3"),Label("x_6"),Tpop,Epopd(0,1),Return,Label("v_3"),Iprim("_ST_printnl"),Return,Label("w_3"),Iprim("_ST_exit"),Return,Label("x_3"),Epushd(0,3),Tdupl,Cpush("z_6"),Tdupl,Label("b_7"),MatchFun("Cons",2),Cpush("d_7"),Arg(0),Epushd(1,2),MoveTop(1,1),Label("o_6"),TestFun(1,1,"Input",1,"fail"),MoveArg(1,2,1,1,0),Rpush("m_7"),Goto("f_15"),Label("m_7"),Goto("i_7"),Label("f_15"),Move(0,1,1,2),Return,Label("i_7"),Epopd(1,2),Tpop,Cpop,Goto("f_7"),Label("d_7"),Arg(1),Tdrop,Goto("b_7"),Label("f_7"),Tpop,Goto("y_6"),Label("z_6"),Tset(App0("stdin")),Tdupl,Tset(App0("stdin")),MoveTop(0,1),Tpop,Goto("n_7"),Label("y_6"),Cpop,Label("n_7"),Tpop,MoveTop(0,2),NotNULLd(0,1),Tset(Egetd(0,1)),Rpush("v_7"),Goto("z_3"),Label("v_7"),MoveTop(0,3),NotNULLd(0,2),NotNULLd(0,3),Tset(App2("TCons",Egetd(0,2),App2("TCons",Egetd(0,3),App0("TNil")))),Epopd(0,3),Return,Label("z_3"),Iprim("_ST_ReadFromFile"),Return,Label("a_4"),Iprim("_ST_dtime"),Return,Label("b_4"),Epushd(0,1),Tdupl,MatchFun("TCons",2),TravInit,OneNextSon,Cpush("c_8"),Tdupl,Label("d_8"),MatchFun("Cons",2),Cpush("f_8"),Arg(0),Epushd(1,2),MoveTop(1,1),Label("u_6"),TestFun(1,1,"Output",1,"fail"),MoveArg(1,2,1,1,0),Rpush("i_8"),Goto("l_15"),Label("i_8"),Goto("h_8"),Label("l_15"),Move(0,1,1,2),Return,Label("h_8"),Epopd(1,2),Tpop,Cpop,Goto("g_8"),Label("f_8"),Arg(1),Tdrop,Goto("d_8"),Label("g_8"),Tpop,Goto("w_7"),Label("c_8"),Tset(App0("stdout")),Tdupl,Tset(App0("stdout")),MoveTop(0,1),Tpop,Goto("k_8"),Label("w_7"),Cpop,Label("k_8"),OneNextSon,MatchFun("TCons",2),TravInit,OneNextSon,OneNextSon,Rpush("l_8"),Goto("g_4"),Label("l_8"),AllBuild,AllBuild,Tpop,MatchFun("TCons",2),TravInit,OneNextSon,OneNextSon,MatchFun("TCons",2),TravInit,OneNextSon,Epushd(1,1),MoveTop(1,1),NotNULLd(0,1),NotNULLd(1,1),Tset(App2("TCons",Egetd(0,1),App2("TCons",Egetd(1,1),App0("TNil")))),Epopd(1,1),OneNextSon,Rpush("m_8"),Goto("g_4"),Label("m_8"),AllBuild,AllBuild,Cpush("p_8"),MatchFun("TCons",2),TravInit,OneNextSon,Tdupl,Label("q_8"),MatchFun("Cons",2),Cpush("r_8"),Arg(0),Epushd(1,1),MoveTop(1,1),Label("a_7"),TestFun(1,1,"Binary",0,"fail"),Rpush("v_8"),Goto("r_15"),Label("v_8"),Goto("u_8"),Label("r_15"),Return,Label("u_8"),Epopd(1,1),Tpop,Cpop,Goto("s_8"),Label("r_8"),Arg(1),Tdrop,Goto("q_8"),Label("s_8"),Tpop,OneNextSon,MatchFun("TCons",2),TravInit,OneNextSon,Rpush("w_8"),Goto("c_4"),Label("w_8"),OneNextSon,Rpush("x_8"),Goto("g_4"),Label("x_8"),AllBuild,AllBuild,Goto("n_8"),Label("p_8"),MatchFun("TCons",2),TravInit,OneNextSon,OneNextSon,MatchFun("TCons",2),TravInit,OneNextSon,Rpush("a_9"),Goto("d_4"),Label("a_9"),OneNextSon,Rpush("b_9"),Goto("g_4"),Label("b_9"),AllBuild,AllBuild,Goto("z_8"),Label("n_8"),Cpop,Label("z_8"),Epopd(0,1),Return,Label("c_4"),Iprim("_ST_WriteToBinaryFile"),Return,Label("d_4"),Iprim("_ST_WriteToTextFile"),Return,Label("e_4"),Epushd(0,2),Tdupl,Cpush("d_9"),MatchFun("TCons",2),TravInit,OneNextSon,Cpush("f_9"),Tdupl,Tdupl,Label("g_9"),MatchFun("Cons",2),Cpush("h_9"),Arg(0),Epushd(1,1),MoveTop(1,1),Label("c_7"),TestFun(1,1,"Silent",0,"fail"),Rpush("k_9"),Goto("t_15"),Label("k_9"),Goto("j_9"),Label("t_15"),Return,Label("j_9"),Epopd(1,1),Tpop,Cpop,Goto("i_9"),Label("h_9"),Arg(1),Tdrop,Goto("g_9"),Label("i_9"),Tpop,Cpop,Crestore,Cjump,Label("f_9"),OneNextSon,MatchFun("TCons",2),TravInit,OneNextSon,OneNextSon,Rpush("l_9"),Goto("g_4"),Label("l_9"),AllBuild,AllBuild,MatchFun("TCons",2),TravInit,OneNextSon,Tdupl,Label("n_9"),MatchFun("Cons",2),Cpush("o_9"),Arg(0),Epushd(1,2),MoveTop(1,1),Label("e_7"),TestFun(1,1,"Runtime",1,"fail"),MoveArg(1,2,1,1,0),Rpush("r_9"),Goto("v_15"),Label("r_9"),Goto("q_9"),Label("v_15"),Move(0,2,1,2),Return,Label("q_9"),Epopd(1,2),Tpop,Cpop,Goto("p_9"),Label("o_9"),Arg(1),Tdrop,Goto("n_9"),Label("p_9"),Tpop,OneNextSon,MatchFun("TCons",2),TravInit,OneNextSon,OneNextSon,Rpush("s_9"),Goto("g_4"),Label("s_9"),AllBuild,AllBuild,MatchFun("TCons",2),TravInit,OneNextSon,Tdupl,Label("t_9"),MatchFun("Cons",2),Cpush("v_9"),Arg(0),Epushd(1,2),MoveTop(1,1),Label("g_7"),TestFun(1,1,"Program",1,"fail"),MoveArg(1,2,1,1,0),Rpush("y_9"),Goto("x_15"),Label("y_9"),Goto("x_9"),Label("x_15"),Move(0,1,1,2),Return,Label("x_9"),Epopd(1,2),Tpop,Cpop,Goto("w_9"),Label("v_9"),Arg(1),Tdrop,Goto("t_9"),Label("w_9"),Tpop,OneNextSon,MatchFun("TCons",2),TravInit,OneNextSon,OneNextSon,Rpush("z_9"),Goto("g_4"),Label("z_9"),AllBuild,AllBuild,NotNULLd(0,1),NotNULLd(0,2),Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",Egetd(0,1),App2("Cons",ATmakeString(" ("),App2("Cons",Egetd(0,2),App2("Cons",ATmakeString(" secs)"),App0("Nil"))))),App0("TNil")))),Rpush("a_10"),Goto("v_3"),Label("a_10"),Goto("c_9"),Label("d_9"),Goto("b_10"),Label("c_9"),Cpop,Label("b_10"),Tpop,Tset(ATmakeInt(0)),Rpush("d_10"),Goto("w_3"),Label("d_10"),Epopd(0,2),Return,Label("f_4"),Tset(App2("TCons",App0("stderr"),App2("TCons",App2("Cons",ATmakeString("rewriting failed"),App0("Nil")),App0("TNil")))),Rpush("e_10"),Goto("v_3"),Label("e_10"),Tset(ATmakeInt(1)),Rpush("f_10"),Goto("w_3"),Label("f_10"),Return,Label("g_4"),MatchFun("TNil",0),TravInit,AllBuild,Return]),Label("g_10")]))
