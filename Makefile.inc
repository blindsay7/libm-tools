CFLAGS+=-g -Wall -DOPER=${PROG}
LDADD+=-lm
SRCS=op.c
NOMAN=yes
.PATH: ${.CURDIR}/..
