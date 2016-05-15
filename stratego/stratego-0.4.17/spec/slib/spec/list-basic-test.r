module list-basic-test
imports sunit list-basic

strategies

  main =
    test-suite(!"list-basic-test",
      test1
    )

  test1 =
    apply-test(!"test1"
	      ,split-fetch(?4)
	      ,![1,2,3,4,5,6,7]
	      ,!([1,2,3],[5,6,7])
              )