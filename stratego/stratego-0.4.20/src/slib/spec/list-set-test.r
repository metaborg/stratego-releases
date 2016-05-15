module list-set-test
imports list-set sunit

strategies 

  main = 
    test-suite(!"list-set-test",
	testing(!"test1", test1);
	testing(!"test2", test2);
	testing(!"test3", test3);
	testing(!"test4", test4);
	test5
     )

  test1 = 
	<union> (["a","b"],["c","d"]) => ["a","b","c","d"]

  test2 =
	<union> (["a","b"],["b","d"]) => ["a","b","d"]    

  test3 = 
	<diff> (["a","b"],["c","d"]) => ["a","b"]

  test4 =
	<diff> (["a","b"],["b","d"]) => ["a"]

signature
  constructors
    F : A * A -> A
    G : A * A -> A
    H : A * A -> A
    I : A -> A
    A : A
    B : A
    C : A

strategies

  test5 = 
    apply-test(!"test5"
	, collect-split(\ H(x,y) -> I(x) \, \ H(x,y) -> [H(x,y)] \ )
	, !F(G(A,H(A,B)),H(B,C))
	, !(F(G(A,I(A)), I(B)), [H(A,B),H(B,C)])
	)


