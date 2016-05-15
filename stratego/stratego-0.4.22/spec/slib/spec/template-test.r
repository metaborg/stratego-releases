module template-test
imports sunit template
strategies

  main = 
    test-suite(!"template-test",
      test1
    )

  test1 =
    apply-test(!"test1"
	, id
	, !()
	, !()
	)