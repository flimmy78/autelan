## -*- text -*- ####################################################
#								   #
# Makefile for termcap replacement libbrary.			   #
#								   #
####################################################################

# Copyright (C) 1996-2009 Free Software Foundation, Inc.

#   This program is free software: you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.

#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.

#   You should have received a copy of the GNU General Public License
#   along with this program.  If not, see <http://www.gnu.org/licenses/>.

srcdir = .
VPATH = .
topdir = ../..
BUILD_DIR = /home/hisisdk/histb/autelan/rootfs/bash-4.3

libdir = /home/hisisdk/histb/autelan/release/lib

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644

CC = arm-hisiv200-linux-gcc
RANLIB = arm-hisiv200-linux-ranlib
AR = arm-hisiv200-linux-ar
ARFLAGS = cr
RM = rm -f
CP = cp
MV = mv

SHELL = /bin/sh

CFLAGS =  		-O2 		-I/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/usr/include 		-I/home/hisisdk/histb/autelan/fakerelease/usr/include -I/home/hisisdk/histb/autelan/fakerelease/usr/local/include 		
CPPFLAGS = 
LDFLAGS =  		-L/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/lib -L/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/usr/lib 		-L/home/hisisdk/histb/autelan/release/lib -L/home/hisisdk/histb/autelan/release/usr/lib -L/home/hisisdk/histb/autelan/release/usr/local/lib 		 -L./lib/termcap

DEFS = -DHAVE_CONFIG_H

INCLUDES = -I. -I../.. -I$(topdir) -I$(topdir)/lib -I$(srcdir)

CCFLAGS = $(CFLAGS) $(DEFS) $(CPPFLAGS) ${INCLUDES}

# Here is a rule for making .o files from .c files that doesn't force
# the type of the machine (like -sun3) into the flags.
.c.o:
	$(CC) -c $(CCFLAGS) $<

SOURCES = termcap.c tparam.c
OBJECTS = termcap.o tparam.o

DOCUMENTATION = termcap.texinfo

THINGS_TO_TAR = $(SOURCES) $(DOCUMENTATION)

##########################################################################

all: libtermcap.a

libtermcap.a:	$(OBJECTS)
	$(RM) -f $@
	$(AR) $(ARFLAGS) $@ $(OBJECTS)
	-test -n "$(RANLIB)" && $(RANLIB) $@

install:	

clean:
	$(RM) *.o *.a *.log *.cp *.tp *.vr *.fn *.aux *.pg *.toc

mostlyclean: clean

distclean maintainer-clean: clean
	$(RM) Makefile

$(DESTDIR)$(libdir)/libtermcap.a: libtermcap.a
	${INSTALL_DATA} -c -m 644 libtermcap.a $@
	-test -n "$(RANLIB)" && $(RANLIB) -t $@

termcap.o: $(BUILD_DIR)/config.h
tparam.o: $(BUILD_DIR)/config.h
version.o: $(BUILD_DIR)/config.h
