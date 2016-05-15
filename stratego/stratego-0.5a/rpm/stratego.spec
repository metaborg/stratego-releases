# 	$Id: stratego.spec,v 1.1 2000/06/20 00:12:00 visser Exp $

%define name        stratego
%define version     0.4.15
%define release     ev

Summary: Stratego
Name: stratego
Version: %{version}
Release: %{release}
Copyright: ev
Group: Programming/Statego
Source0: stratego-%{version}.tar.gz		
BuildRequires: aterm >= 0.24		

%description
Summary: Stratego

%prep
%setup -q 
./configure --prefix=/usr/local --with-aterm=/usr/local		

%build
make

%install
make install

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root)
/usr/local/lib/libstratego.a
/usr/local/lib/libstratego.dbg.a
/usr/local/lib/libstratego.opt.a
/usr/local/lib/libstratego.prof.a
/usr/local/lib/libstratego-lib.a
/usr/local/lib/libstratego-lib.dbg.a
/usr/local/lib/libstratego-lib.opt.a
/usr/local/lib/libstratego-lib.prof.a
/usr/local/include/stratego.h
/usr/local/include/svm.h
/usr/local/include/debug.h
/usr/local/include/aterm-extension.h
/usr/local/include/options.h
/usr/local/include/util.h
/usr/local/include/SL-tuples.h
/usr/local/include/SL.h
/usr/local/include/stratego-ext.h
/usr/local/include/stratego-lib.h
/usr/local/include/tables.h
/usr/local/share/stratego/Annotations.r
/usr/local/share/stratego/free-variables.r
/usr/local/share/stratego/list-set-test.r
/usr/local/share/stratego/sglr.r
/usr/local/share/stratego/BinSet.r
/usr/local/share/stratego/gpp.r
/usr/local/share/stratego/list-set.r
/usr/local/share/stratego/share-misc.r
/usr/local/share/stratego/Share.r
/usr/local/share/stratego/int-list.r
/usr/local/share/stratego/list-sort.r
/usr/local/share/stratego/share-test.r
/usr/local/share/stratego/abox-ext.r
/usr/local/share/stratego/integers.r
/usr/local/share/stratego/list-zip.r
/usr/local/share/stratego/share.r
/usr/local/share/stratego/abox.r
/usr/local/share/stratego/io-text.r
/usr/local/share/stratego/list.r
/usr/local/share/stratego/simple-traversal.r
/usr/local/share/stratego/annotations.r
/usr/local/share/stratego/io.r
/usr/local/share/stratego/memo.r
/usr/local/share/stratego/string.r
/usr/local/share/stratego/basic.r
/usr/local/share/stratego/iteration.r
/usr/local/share/stratego/option-test.r
/usr/local/share/stratego/substitution.r
/usr/local/share/stratego/bin-tree-set.r
/usr/local/share/stratego/lib.r
/usr/local/share/stratego/option.r
/usr/local/share/stratego/tables.r
/usr/local/share/stratego/bin-tree.r
/usr/local/share/stratego/list-basic.r
/usr/local/share/stratego/options.r
/usr/local/share/stratego/term.r
/usr/local/share/stratego/conditional.r
/usr/local/share/stratego/list-cons.r
/usr/local/share/stratego/pack-graph.r
/usr/local/share/stratego/test.r
/usr/local/share/stratego/env-traversal.r
/usr/local/share/stratego/list-filter.r
/usr/local/share/stratego/pack-modules.r
/usr/local/share/stratego/thread.r
/usr/local/share/stratego/exec.r
/usr/local/share/stratego/list-index.r
/usr/local/share/stratego/pack.r
/usr/local/share/stratego/time.r
/usr/local/share/stratego/file.r
/usr/local/share/stratego/list-lookup.r
/usr/local/share/stratego/parse-options.r
/usr/local/share/stratego/tuple.r
/usr/local/share/stratego/fixpoint-traversal.r
/usr/local/share/stratego/list-misc.r
/usr/local/share/stratego/rename.r
/usr/local/share/stratego/unification.r
/usr/local/share/stratego/Stratego.Make
/usr/local/bin/backend
/usr/local/bin/frontend
/usr/local/bin/extract
/usr/local/bin/inline
/usr/local/bin/matching-tree
/usr/local/bin/optimizer
/usr/local/bin/postprocess
/usr/local/bin/pp-instructions
/usr/local/bin/proto-sc
/usr/local/bin/parse-stratego
/usr/local/bin/parse-mod
/usr/local/bin/pack-stratego

%changelog
* Sat Jun 17 2000 marco <marco@wildape.com>
- First release
