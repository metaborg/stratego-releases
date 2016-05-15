Summary: The Stratego/XT tools for constructing program transformation systems
Name: strategoxt
Version: 0.17
Release: 1
License: LGPL
Group: Development/Languages/Stratego
URL: http://www.strategoxt.org
Source: strategoxt-0.17.tar.gz
BuildRoot: %{_tmppath}/%{name}-0.17-buildroot
Requires: aterm >= 2.5
Requires: sdf2-bundle >= 2.4
Provides:  %{name} = %{version}

%description

%prep
%setup -q

%build
CFLAGS="-D__NO_CTYPE" ./configure --prefix=%{_prefix} --libdir=%{_libdir} --with-aterm=%{_prefix} --with-sdf=%{_prefix}
make

%install
rm -rf $RPM_BUILD_ROOT
make DESTDIR=$RPM_BUILD_ROOT install

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root,-)
%{_bindir}
%{_prefix}/libexec
# %{_libexecdir}
%{_includedir}
%{_libdir}
%{_datadir}
%doc

%changelog
* Sun Apr 13 2008 Martin Bravenboer
- Pass libdir to configure to handle systems with a lib64 subdir.
- Override libexecdir, because OpenSUSE does not use libexec and we
  cannot live without yet (STR-749, STR-750)

* Thu Jan  2 2003 Eelco Visser <visser@cs.uu.nl> 0.9beta9-1
- Initial build.
