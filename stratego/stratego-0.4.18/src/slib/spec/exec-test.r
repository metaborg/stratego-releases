module exec-test
imports sunit exec
strategies

  main = 
    test-suite(!"exec-test",
      test1
    )

  test1 =
    apply-test(!"test1"
	, copy-file(id, !"test2", id)
	, !("test", ".trm")
	, !("test2", ".trm")
	)