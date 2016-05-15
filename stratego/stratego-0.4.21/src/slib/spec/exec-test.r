module exec-test
imports sunit exec
strategies

  main = 
    test-suite(!"exec-test",
      test1
    )

  test1 =
    apply-test(!"test1"
	, copy-file(id, !"data/test2", id)
	, !("data/test", ".trm")
	, !("data/test2", ".trm")
	)
