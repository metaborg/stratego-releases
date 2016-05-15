module reals-test
imports reals sunit

strategies 

  main = 
    test-suite(!"reals-test",
	id-test;
	cos-test;
	sin-test;
	sqrt-test;
	real-to-string-test;
	string-to-real-test;
	real-test
    )

  id-test = 
	apply-and-show(!"id-test", id, !10.8)
  
  cos-test =  
	apply-and-show(!"cos-test", cos, !10.8)

  sin-test = 
	apply-and-show(!"sin-test", sin, !1.6)

  sqrt-test = 
	apply-and-show(!"sqrt-test", sqrt, !1.6)

  real-to-string-test =
    apply-and-show(!"real-to-string-test", real-to-string, !12345678901234567.0)
    //apply-and-show(!"real-to-string-test", real-to-string, !1.5e20);
    //apply-and-show(!"real-to-string-test", real-to-string, !-1.5e-20)

  string-to-real-test =
    apply-and-show(!"string-to-real-test", string-to-real, !"12345678901234567");
    apply-and-show(!"string-to-real-test", string-to-real, !"1.2345678901234567e307")

  real-test =
    apply-and-show(!"real-test", real, !1)
