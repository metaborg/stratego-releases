module pico-pp
imports pico abox-ext lib
strategies

  main = iowrap(pp-pico)

  pp-pico = topdown(repeat(PpPico))

rules

  PpPico : Var(x) -> S(x)
  PpPico : Int(n) -> S(n)

  PpPico : Call(f, es) -> H0([S(f),Parens(H1(<commas> es))])

  PpPico : Seq([], ss, e) -> 
           Parens(H1([H1(<semicolons> ss), S(";"), e]))

  PpPico : Seq(ds@[_|_], ss, e) -> 
           Parens(H1([H1(<semicolons> ds), S(";"), 
                      H1(<semicolons> ss), S(";"), e]))
    
  PpPico : UMin(e)        -> H1([S("-"), e])
  PpPico : Pow(e1, e2)    -> Parens(H1([e1, S("-"), e2]))
  PpPico : Mul(e1, e2)    -> Parens(H1([e1, S("*"), e2]))
  PpPico : Add(e1, e2)    -> Parens(H1([e1, S("+"), e2]))
  PpPico : Sub(e1, e2)    -> Parens(H1([e1, S("-"), e2]))
  PpPico : Eq(e1, e2)	  -> Parens(H1([e1, S("=="), e2]))
  PpPico : Neq(e1, e2)    -> Parens(H1([e1, S("<>"), e2]))
  PpPico : And(e1, e2)    -> Parens(H1([e1, S("&"), e2]))
  PpPico : Or(e1, e2)     -> Parens(H1([e1, S("|"), e2]))
  PpPico : Assign(e1, e2) -> Parens(H1([e1, S(":="), e2]))
  PpPico : AsAdd(e1, e2)  -> Parens(H1([e1, S("+="), e2]))
  PpPico : AsMul(e1, e2)  -> Parens(H1([e1, S("*="), e2]))
  PpPico : AsMin(e1, e2)  -> Parens(H1([e1, S("-="), e2]))
  PpPico : AsPow(e1, e2)  -> Parens(H1([e1, S("^="), e2]))

  PpPico : Exp(e) -> e

  PpPico :
    While(e, s) -> 
    V0([H0([S("while"), Parens(e)]),
	Indent(s)])
  PpPico :
    If(e, s1, s2) ->
    V0([H0([S("if"), Parens(e)]),
        Indent(s1),
        S("else"),
        Indent(s2)]) 

  PpPico :
    Block([], ss) ->
    V0([S("{"),
        Indent(V0(<semicolons> ss)),
	S("}")])

  PpPico :
    Block(ds@[_|_], ss) ->
    V0([S("{"),
        Indent(H0([V0(<semicolons> ds), S(";")])),
        Indent(V0(<semicolons> ss)),
	S("}")])

  PpPico :
    VarDecl(x) -> H1([S("var"), S(x)])

  PpPico :
    FunDecl(f, xs, b) -> 
    V0([H1([S("fun"), S(f), 
            Parens(H1(<map(\ x -> S(x)\ ); commas> xs))]), 
        b])

  PpPico : 
    Comment(msg, e, s) -> 
    V0([H1([S("/*"), S(msg), e, S("*/")]), s])
