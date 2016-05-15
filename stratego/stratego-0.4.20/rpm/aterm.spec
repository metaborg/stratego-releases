# 	$Id: aterm.spec,v 1.1 2000/06/20 00:11:59 visser Exp $

%define name        aterm
%define version     0.24
%define release     ev

Summary: ATerm library
Name: aterm
Version: %{version}
Release: %{release}
Copyright: ev
Group: Programming/Statego
Source0: aterm-%{version}.tar.gz		
		
%description
Summary: ATerm library

%prep
%setup -q 
rm -f config.cache
rm -f acconfig.h
aclocal
autoconf
#autoheader
automake -a
./configure --prefix=/usr/local --with-dbg		

%build
make

%install
make install

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root)
/usr/local/lib/libATerm.a
/usr/local/lib/libATerm-dbg.a
/usr/local/lib/libATB.a
/usr/local/lib/libATB-dbg.a
/usr/local/bin/termsize
/usr/local/bin/baffle
/usr/local/bin/baf2trm
/usr/local/bin/trm2baf
/usr/local/bin/trmcat
/usr/local/bin/tifstoc
/usr/local/include/abool.h
/usr/local/include/aterm1.h
/usr/local/include/aterm2.h
/usr/local/include/deprecated.h
/usr/local/include/encoding.h
/usr/local/include/afun.h
/usr/local/include/atb-tool.h

%changelog
* Sat Jun 17 2000 marco <marco@wildape.com>
- First release
