ATERM_VERSION=0.24
VERSION=@VERSION@

aterm:=aterm-$(ATERM_VERSION)

stratego:=stratego-$(VERSION)
stratego_rpm:=$(stratego)-ev.`arch`.rpm

EXTRA_DIST = aterm.spec stratego.spec

all: aterm.rpm stratego.rpm

/usr/src/RPM/SOURCES/%.tar.gz: ../%.tar.gz
	cp $< $@

aterm.rpm: aterm.spec /usr/src/RPM/SOURCES/$(aterm).tar.gz
	rpm -ba aterm.spec
	cp /usr/src/RPM/RPMS/`arch`/aterm*.rpm .

stratego.rpm: stratego.spec /usr/src/RPM/SOURCES/$(stratego).tar.gz
	rpm -ba stratego.spec
	cp /usr/src/RPM/RPMS/`arch`/stratego*.rpm .

