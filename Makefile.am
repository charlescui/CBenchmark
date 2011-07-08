AUTOMAKE_OPTIONS=foreign
INCLUDES= -I include
include_HEADERS=include/cbenchmark.h \
				include/cbutils.h \
				include/paramutil.h \
				include/main.h \
				include/list.h

bin_PROGRAMS=cbenchmark
cbenchmark_SOURCES=source/main.c \
				   source/cbenchmark.c\
				   source/cbutils.c\
				   source/middleware.c\
				   source/analyse.c\
				   source/transaction.c\
				   source/paramutil.c
cbenchmark_LDFLAGS = -rdynamic -lpthread -ldl -lrt
cbenchmark_DEPENDENCIES = -lpthread -ldl -lrt
