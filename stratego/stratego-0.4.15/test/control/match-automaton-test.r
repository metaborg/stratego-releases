module match-automaton-test
imports sunit

signature
  constructors
    A : S
    B : S
    C : S
    D : S
    F : S * S -> S
    G : S * S -> S

strategies

  main = 
    test-suite(!"match-automaton-test",
	failure-in-case1;
  	failure-in-case2
    )

  failure-in-case1 =
    apply-test(!"failure-in-case1"
              ,{x: ?F(A,x); !A} + {y: ?F(y,G(B,C)); !B}
              ,!F(A,G(B,D))
              ,!A
              )

  failure-in-case2 =
    apply-test(!"failure-in-case2"
              ,{x: ?F(A,x); !A} + {y: ?F(y,B); !B}
              ,!F(A,D)
              ,!A
              )