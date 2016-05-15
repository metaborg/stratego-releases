module integers-test
imports sunit integers
strategies

  main = 
    test-suite(!"integers-test",
      test1
    )

  test1 =
    apply-test(!"test1"
	, max
	, !(24,32)
	, !32
	)
