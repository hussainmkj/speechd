## Process this file with automake to produce Makefile.in

spdinclude_HEADERS = libspeechd.h
inc_local = -I$(top_srcdir)/include/

lib_LTLIBRARIES = libspeechd.la
libspeechd_la_SOURCES = libspeechd.c
libspeechd_la_CFLAGS = $(ERROR_CFLAGS)
libspeechd_la_CPPFLAGS = $(inc_local) -D_GNU_SOURCE $(GLIB_CFLAGS) -DSPD_SPAWN_CMD=\""$(prefix)/bin/speech-dispatcher"\"
libspeechd_la_LDFLAGS = -version-info $(LIB_SPD_CURRENT):$(LIB_SPD_REVISION):$(LIB_SPD_AGE)
libspeechd_la_LIBADD = $(GLIB_LIBS)
