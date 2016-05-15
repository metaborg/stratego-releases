module list-basic-test
imports sunit list-basic

strategies

  main =
    test-suite(!"list-basic-test",
      test1;
      upto-test1;
      upto-test2
    )

  test1 =
    apply-test(!"test1"
	      ,split-fetch(?4)
	      ,![1,2,3,4,5,6,7]
	      ,!([1,2,3],[5,6,7])
              )

  upto-test1 =
    apply-test(!"upto-test1"
	      ,upto
	      ,!5
	      ,![0,1,2,3,4,5]
              )

  upto-test2 =
    apply-test(!"upto-test2"
	      ,upto
	      ,<minus> (0, 3)
	      ,![]
              )
