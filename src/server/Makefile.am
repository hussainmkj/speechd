## Process this file with automake to produce Makefile.in

inc_local = -I$(top_srcdir)/include/
lib_common = $(top_builddir)/src/common/libcommon.la

bin_PROGRAMS = speech-dispatcher
speech_dispatcher_SOURCES = speechd.c speechd.h server.c server.h \
	history.c history.h module.c module.h configuration.c configuration.h \
	parse.c parse.h set.c set.h msg.h alloc.c alloc.h \
	compare.c compare.h speaking.c speaking.h options.c options.h \
	output.c output.h sem_functions.c sem_functions.h \
	index_marking.c index_marking.h
speech_dispatcher_CFLAGS = $(ERROR_CFLAGS)
speech_dispatcher_CPPFLAGS = $(inc_local) $(DOTCONF_CFLAGS) $(GLIB_CFLAGS) \
	$(GMODULE_CFLAGS) $(GTHREAD_CFLAGS) -DSYS_CONF=\"$(spdconfdir)\" \
	-DSND_DATA=\"$(snddatadir)\" -DMODULEBINDIR=\"$(modulebindir)\" \
	-D_GNU_SOURCE -DDEFAULT_AUDIO_METHOD=\"$(default_audio_method)\"
speech_dispatcher_LDFLAGS = $(RDYNAMIC)
speech_dispatcher_LDADD = $(lib_common) $(DOTCONF_LIBS) $(GLIB_LIBS) \
	$(GMODULE_LIBS) $(GTHREAD_LIBS) $(EXTRA_SOCKET_LIBS)
