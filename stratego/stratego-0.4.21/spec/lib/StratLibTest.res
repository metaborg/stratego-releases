[[TCons("stdio",TCons(1,TNil)),TCons("f",TCons(1,TNil)),TCons("Cons",TCons(2,TNil)),TCons("f",TCons(2,TNil)),TCons("A",TCons(0,TNil)),TCons("B",TCons(0,TNil)),TCons("Nil",TCons(0,TNil))],["ReadFromFile","split","WriteToTextFile","printnl"],SDef("stdio",["a_0"],LChoice(Seq(Build(Op("stdin",[])),Seq(Call(SVar("ReadFromFile"),[]),Seq(Call(SVar("a_0"),[]),Seq(Call(SVar("split"),[Build(Op("stdout",[])),Id]),Call(SVar("WriteToTextFile"),[]))))),BA(Call(SVar("printnl"),[]),Op("TCons",[Op("stderr",[]),Op("TCons",[Op("Cons",[Str("rewriting failed"),Op("Nil",[])]),Op("TNil",[])])])))),["e1","u1","u2","d1","d2","e2"]]
