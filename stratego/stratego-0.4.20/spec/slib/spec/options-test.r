module options-test
imports parse-options options

strategies

  main = iowrap(id)

  Main =
   	(parse-options(fail <+ io-options));
	debug(!"a");
	(need-help
   	 <+ input-file';
	debug(!"b");
	    apply-strategy((id,id));
	debug(!"c");
	    output-file';
	debug(!"d");
	    report-success
   	 <+ report-failure
	)

  blabla =
	!TCons([Runtime(0),Program("./options-test")],TCons(A(),TNil));
	debug(!"init");
	    (rec x([?Output(outfile) | id] 
                   <+ [id | x]) 
             <+ !stdout => outfile
            , id);
	debug(!"exit")


  blabla' =
	!([C()],D());
	(?A() <+ !B(), id)

  blablabla =
	![Runtime(0),Program("./options-test")];
	debug(!"init");
	    rec x([?Output(outfile) | id] 
                   <+ [id | x]) 
             <+ !stdout => outfile;
	debug(!"exit")


  output-file-test =
	debug(!"a");
	 (option-defined(?Output(outfile)) <+ !stdout => outfile, id);
	debug(!"b")