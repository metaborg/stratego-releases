module extract-test
imports sunit extract
strategies

  main = 
    test-suite(!"extract-test",
      test1;
      test2;
      test3;
      test4
    )

  test1 =
    apply-test(!"test1"
	, extract
	, open(!"data/mkcons-spec.trm")
	, !()
	)

  test2 =
    apply-test(!"test2"
	, RulesToSdefs
	, open(!"data/mkcons-spec.trm")
	, save(!"data/mkcons-sdefs.trm")
	)

  test3 =
    apply-test(!"test3"
	, strename; \Specification([_,Strategies(sdefs)]) -> sdefs\
	, open(!"data/mkcons-sdefs.trm")
	, save(!"data/mkcons-renamed.trm")
	)

  test4 =
    apply-test(!"test3"
	, needed-defs
	, open(!"data/mkcons-renamed.trm")
	, save(!"data/mkcons-needed.trm")
	)