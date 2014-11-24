# $Id: Makefile.in,v 1.4 2006/08/19 09:12:14 dtucker Exp $

sysconfdir=/home/hisisdk/histb/autelan/release/etc/ssh
piddir=/var/run
srcdir=.
top_srcdir=../..


CC=arm-hisiv200-linux-gcc
LD=arm-hisiv200-linux-gcc
CFLAGS= 		-O2 		-I/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/usr/include 		-I/home/hisisdk/histb/autelan/fakerelease/usr/include -I/home/hisisdk/histb/autelan/fakerelease/usr/local/include 		 -Wall -Wpointer-arith -Wuninitialized -Wsign-compare -Wformat-security -Wno-pointer-sign -fno-strict-aliasing -D_FORTIFY_SOURCE=2 -ftrapv -fno-builtin-memset -fstack-protector-all -fPIE 
CPPFLAGS=-I. -I.. -I$(srcdir) -I$(srcdir)/.. -I/home/hisisdk/histb/autelan/fakerelease/usr/local/ssl/include  -DHAVE_CONFIG_H
EXEEXT=
LIBCOMPAT=../libopenbsd-compat.a
LIBS=-lcrypto -lrt -ldl -lutil -lz -lnsl  -lcrypt -lresolv
LDFLAGS=-L/home/hisisdk/histb/autelan/fakerelease/usr/local/ssl/lib  		-L/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/lib -L/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/usr/lib 		-L/home/hisisdk/histb/autelan/release/lib -L/home/hisisdk/histb/autelan/release/usr/lib -L/home/hisisdk/histb/autelan/release/usr/local/lib 		 -Wl,-z,relro -Wl,-z,now -Wl,-z,noexecstack -fstack-protector-all -pie $(LIBCOMPAT)

TESTPROGS=closefromtest$(EXEEXT) snprintftest$(EXEEXT) strduptest$(EXEEXT) \
	strtonumtest$(EXEEXT)

all:	t-exec ${OTHERTESTS}

%$(EXEEXT):	%.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $< $(LIBCOMPAT) $(LIBS)

t-exec:	$(TESTPROGS)
	@echo running compat regress tests
	@for TEST in ""$?; do \
		echo "run test $${TEST}" ... 1>&2; \
		./$${TEST}$(EXEEXT) || exit $$? ; \
	done
	@echo finished compat regress tests

clean:
	rm -f *.o *.a core $(TESTPROGS) valid.out

distclean: clean
	rm -f Makefile *~
