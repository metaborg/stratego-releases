module needed-defs-test
imports needed-defs sunit

strategies

  main = 
    test-suite(!"needed-defs-test",
      define-congruence-test
    )

  define-congruence-test =
    apply-test(!"define-congruence-test"
	      ,DefineCongruence
	      ,!("If", "T", 3)
              ,!SDef(Mod("If","T"),["e_0","h_0","k_0"],Scope(["d_0","c_0","b_0","a_0","f_0","i_0","l_0","g_0","j_0","m_0"],SRule(Rule(Op("Pair",[Op("If",[Var("f_0"),Var("i_0"),Var("l_0")]),Var("d_0")]),Op("Pair",[Op("If",[Var("g_0"),Var("j_0"),Var("m_0")]),Var("a_0")]),Seqs([BAM(Call(SVar("e_0"),[]),Op("Pair",[Var("f_0"),Var("d_0")]),Op("Pair",[Var("g_0"),Var("c_0")])),BAM(Call(SVar("h_0"),[]),Op("Pair",[Var("i_0"),Var("c_0")]),Op("Pair",[Var("j_0"),Var("b_0")])),BAM(Call(SVar("k_0"),[]),Op("Pair",[Var("l_0"),Var("b_0")]),Op("Pair",[Var("m_0"),Var("a_0")]))])))))
              )