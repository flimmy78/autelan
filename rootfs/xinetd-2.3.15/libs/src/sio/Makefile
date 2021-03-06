# (c) Copyright 1992, 1993 by Panagiotis Tsirigotis
# All rights reserved.  The file named COPYRIGHT specifies the terms 
# and conditions for redistribution.

#
# $Id: Makefile.in,v 1.1.1.1 2003-02-19 17:29:27 bbraun Exp $
#
# Based on Library makefile template: *Revision: 1.15 *
#

NAME			= sio

SRCDIR			= .

HEADERS			= sio.h impl.h sioconf.h
SOURCES			= sprint.c sio.c siosup.c
OBJECTS			= sprint.o sio.o siosup.o

MANFILES		= $(SRCDIR)/sio.3 $(SRCDIR)/Sprint.3
INCLUDEFILES		= $(SRCDIR)/sio.h

# The following variables are used by the 'install' entry and
# should be customized:
#     LIBDIR:     where the library will be placed
#     INCUDEDIR:  where the include files will be placed
#     MANDIR:     where the man pages will be placed
LIBDIR			= ../../lib
MANDIR			= ../../man
INCLUDEDIR		= ../../include

DEBUG		= -g			# -g or -O

CPP_DEFS	= 

#
# The following variables shouldn't need to be changed
#
CPP_FLAGS		= $(CPP_DEFS)
CC_FLAGS		= $(DEBUG)
CFLAGS			=  		-O2 		-I/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/usr/include 		-I/home/hisisdk/histb/source/rootfs/usr/include -I/home/hisisdk/histb/source/rootfs/usr/local/include 		-I/home/hisisdk/histb/autelan/fakerelease/usr/include -I/home/hisisdk/histb/autelan/fakerelease/usr/local/include 		 $(CPP_FLAGS) $(CC_FLAGS) -I$(INCLUDEDIR)

INSTALL			= /usr/bin/install -c
FMODE			= -m 640			# used by install
RANLIB			= arm-hisiv200-linux-ranlib

LIBNAME			= lib$(NAME).a

lib: $(LIBNAME)

libopt: clean
	make DEBUG=-O lib
	$(INSTALL) $(FMODE) $(LIBNAME) $(LIBDIR)/optimized

$(LIBNAME): $(OBJECTS)
	ar r $@ $?
	$(RANLIB) $@

install: $(LIBNAME)
	@if test "$(LIBDIR)" -a "$(INCLUDEDIR)" -a "$(MANDIR)" ;\
	then \
		$(INSTALL) $(FMODE) $(LIBNAME) $(LIBDIR) ;\
		$(RANLIB) $(LIBDIR)/$(LIBNAME) ;\
		echo "Installed $(LIBNAME) to $(LIBDIR)" ;\
		for i in $(INCLUDEFILES); do $(INSTALL) $(FMODE) $$i $(INCLUDEDIR) ; done ;\
		echo Installed $(INCLUDEFILES) to $(INCLUDEDIR) ;\
		for i in $(MANFILES) ; do $(INSTALL) $(FMODE) $$i $(MANDIR) ; done ;\
		echo Installed $(MANFILES) to $(MANDIR) ;\
	else \
		echo "You forgot to set one of the following variables: LIBDIR,INCLUDEDIR,MANDIR" ;\
	fi

uninstall:
	a=`pwd` ; cd $(INCLUDEDIR) ;\
	if test $$a != `pwd` ; then rm -f $(INCLUDEFILES) ; fi
	a=`pwd` ; cd $(LIBDIR) ;\
	if test $$a != `pwd` ; then rm -f $(LIBNAME) ; fi
	a=`pwd` ; cd $(MANDIR) ;\
	if test $$a != `pwd` ; then rm -f $(MANFILES) ; fi

clean:
	rm -f $(OBJECTS) $(LIBNAME) core
	rm -f *.swp
	rm -f *.?~ 

spotless: clean uninstall

distclean: clean
	rm -f Makefile

#
# PUT HERE THE RULES TO MAKE THE OBJECT FILES
#
sprint.o:   sio.h impl.h sioconf.h
sio.o:      sio.h impl.h sioconf.h 
siosup.o:   sio.h impl.h sioconf.h 

