module list-misc-test
imports sunit list-misc

strategies

  main =
    test-suite(!"list-misc-test",
	test1
    )

  test1 =
    apply-test(!"test1"

	, rec flat(mapfoldr(id
		           ,is-list; flat <+ \ x -> [x] \
			   ,conc
			   ))

	, !["a",["b",["c","d"]],"e"]
	, !["a","b","c","d","e"]
	)

  
