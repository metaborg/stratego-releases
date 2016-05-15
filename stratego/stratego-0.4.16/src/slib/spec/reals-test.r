module reals-test
imports reals sunit

strategies 

  main = 
    test-suite(!"reals-test",
	id-test;
	cos-test;
	sin-test;
	sqrt-test
    )

  id-test = 
	apply-and-show(!"id-test", id, !10.8)
  
  cos-test =  
	apply-and-show(!"cos-test", cos, !10.8)

  sin-test = 
	apply-and-show(!"sin-test", sin, !1.6)

  sqrt-test = 
	apply-and-show(!"sqrt-test", sqrt, !1.6)
