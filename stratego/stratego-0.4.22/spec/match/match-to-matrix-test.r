module match-to-matrix-test
imports sunit match-to-matrix matrix-to-dfa compile-match
strategies

  main = 
    test-suite(!"match-to-matrix-test",
      test1;
      test3;
      test4;
      test5;
      test6;
      test7
    )

  test1 =
    apply-test(!"test1"
	, match-to-matrix
	, open(!"data/choices1.trm")
	, open(!"data/choices1-matrix.trm")
	)

  test3 =
    apply-test(!"test3"
	, optimize-body
	, open(!"data/choices1.trm")
	, open(!"data/choices1-dfa.trm")
	)

  test4 =
    apply-test(!"test4"
	, optimize-body
	, open(!"data/choices2.trm")
	, open(!"data/choices2-dfa.trm")
	)

  test5 =
    apply-test(!"test5"
	, optimize-body
	, open(!"data/choices3.trm")
	, open(!"data/choices3-dfa.trm")
	)

  test6 =
    apply-test(!"test6"
	, optimize-body
	, open(!"data/choices4.trm")
	, open(!"data/choices4-dfa.trm")
	)

  test7 =
    apply-test(!"test7"
	, optimize-body
	, open(!"data/choices5.trm")
	, open(!"data/choices5-dfa.trm")
	)
