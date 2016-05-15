module compiler-test
imports sunit compiler  
strategies

  main = 
    test-suite(!"compiler-test",
      test1
    )

  test1 =
    apply-test(!"test1"
	, topdown(repeat(C))
	, open(!"data/choices1-dfa.trm")
	, open(!"data/choices1-ins.trm")
	)