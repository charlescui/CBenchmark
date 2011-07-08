#  Copyright (C) 2003 Timo Benk t_benk@web.de
#
#  This library is free software; you can redistribute it and/or
#  modify it under the terms of the GNU Lesser General Public
#  License as published by the Free Software Foundation; either
#  version 2.1 of the License, or (at your option) any later version.
#
#  This library is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
#  Lesser General Public License for more details.
#
#  You should have received a copy of the GNU Lesser General Public
#  License along with this library; if not, write to the
#  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
#  Boston, MA  02111-1307 USA

mandir      = ${prefix}/man
sharedir    = ${prefix}/share

prefix      = /usr/local/libsmtp---0.1.0
exec_prefix = ${prefix}
bindir      = $(exec_prefix)/bin
libdir      = $(exec_prefix)/lib
includedir  = $(exec_prefix)/include

LIBNAM      = libsmtp--
LIBVER      = 0.1.0
LIBEXT      = so
LIBCOMPAT   = 0.1
CC          = gcc
#CFLAGS      = -g -O2 -pedantic -fno-builtin-log -fPIC -Os -Wall -DPLUGINDIR=\"$(libdir)/libsmtp--/plugins\" -DLOCALEDIR=\"$(sharedir)/locale\" -DTEXTDOMAIN=\"libsmtp--\" -D__USE_SSL_ 
CFLAGS      = -g -O0 -fno-builtin-log -fPIC -Wall -DPLUGINDIR=\"$(libdir)/libsmtp--/plugins\" -DLOCALEDIR=\"$(sharedir)/locale\" -DTEXTDOMAIN=\"libsmtp--\" -D__USE_SSL_ 
#LDFLAGS     = -s -shared -nostartfiles -Wl,-hlibsmtp--.so.$(LIBVER)
LDFLAGS     = -shared -nostartfiles -Wl,-hlibsmtp--.so.$(LIBVER)
LIBS        = -ldl  -lssl
INSTALL     = /usr/bin/install -c

NO_SSL_OBJS=alloc.o error.o i18n.o inetsocket.o init.o log.o plugin.o smtp.o string.o
SSL_OBJS=algorithm.o sslsocket.o

OBJS = $(SSL_OBJS) $(NO_SSL_OBJS) 
HDRS = includes/ssl/*.h

all: libsmtp.so
	(cd plugins; make all)

clean:
	rm -f *.o
	rm -f *.so*
	rm -f *.a
	rm -f *.dylib
	(cd plugins; make clean)

libsmtp.so: $(OBJS)
	$(CC) $(LIBS) $(CFLAGS) $(LDFLAGS) -o $(LIBNAM).$(LIBEXT).$(LIBVER) $(OBJS)
	rm -f $(LIBNAM).$(LIBEXT)
	rm -f $(LIBNAM).$(LIBEXT).$(LIBCOMPAT)
	ln -s $(LIBNAM).$(LIBEXT).$(LIBVER) $(LIBNAM).$(LIBEXT)
	ln -s $(LIBNAM).$(LIBEXT).$(LIBVER) $(LIBNAM).$(LIBEXT).$(LIBCOMPAT)
	ar -rc $(LIBNAM).a $(OBJS)
	ranlib $(LIBNAM).a
#	strip --remove-section=.note --remove-section=.comment $(LIBNAM).$(LIBEXT).$(LIBCOMPAT)

algorithm.o:
	$(CC) $(CFLAGS) -c algorithm.c    -o algorithm.o

alloc.o:
	$(CC) $(CFLAGS) -c alloc.c        -o alloc.o

error.o:
	$(CC) $(CFLAGS) -c error.c        -o error.o

i18n.o:
	$(CC) $(CFLAGS) -c i18n.c         -o i18n.o

inetsocket.o:
	$(CC) $(CFLAGS) -c inetsocket.c   -o inetsocket.o

init.o:
	$(CC) $(CFLAGS) -c init.c         -o init.o

log.o:
	$(CC) $(CFLAGS) -c log.c          -o log.o

plugin.o:
	$(CC) $(CFLAGS) -c plugin.c       -o plugin.o

smtp.o:
	$(CC) $(CFLAGS) -c smtp.c         -o smtp.o

string.o:
	$(CC) $(CFLAGS) -c string.c       -o string.o

dlfcn.o:
	$(CC) $(CFLAGS) -c dlfcn.c -o dlfcn.o

install: all
	(cd plugins && make install)
	$(INSTALL) -m 0755 -d $(libdir)
	$(INSTALL) -m 0755 -d $(includedir)/libsmtp--
	$(INSTALL) -m 0755 -d $(sharedir)/locale/de/LC_MESSAGES
	$(INSTALL) -m 0755 -d $(sharedir)/locale/ru/LC_MESSAGES
	$(INSTALL) -m 0755 -d $(sharedir)/locale/es/LC_MESSAGES
	$(INSTALL) -m 0644 $(LIBNAM).$(LIBEXT).$(LIBVER) $(libdir)
	$(INSTALL) -m 0644 $(LIBNAM).a $(libdir)
	$(INSTALL) -m 0644 $(HDRS) $(includedir)/libsmtp--
	$(INSTALL) -m 0644 ../lang/de/libsmtp--.mo $(sharedir)/locale/de/LC_MESSAGES
	$(INSTALL) -m 0644 ../lang/ru/libsmtp--.mo $(sharedir)/locale/ru/LC_MESSAGES
	$(INSTALL) -m 0644 ../lang/es/libsmtp--.mo $(sharedir)/locale/es/LC_MESSAGES
	rm -rf $(libdir)/$(LIBNAM).$(LIBEXT).$(LIBCOMPAT)
	ln -s $(LIBNAM).$(LIBEXT).$(LIBVER) $(libdir)/$(LIBNAM).$(LIBEXT).$(LIBCOMPAT)
	rm -rf $(libdir)/$(LIBNAM).$(LIBEXT)
	ln -s $(LIBNAM).$(LIBEXT).$(LIBVER) $(libdir)/$(LIBNAM).$(LIBEXT)
	(cd ..; ./ldconfig.wrapper $(libdir))

