# Makefile for sfc functions

NAME	= art_sfc
SOURCES = art_sfc.c
VERSION = 1.0

CC	= gcc
CFLAGS	= -O3 -Wall
LIBS	=

# Rules

sfc:	$(SOURCES:.c=.o) $(SOURCES:.c=.h) Makefile
	ar rcs lib$(NAME).a $(SOURCES:.c=.o) $(LIBS)

clean:
	-rm -f *~ *.o *.a

install:
	cd ../include; ln -sf ../$(NAME)/$(NAME).h .
	cd ../lib; ln -sf ../$(NAME)/lib$(NAME).a .

tar:
	cd ..; tar cvf - $(NAME)/*.c $(NAME)/*.h $(NAME)/Makefile > $(NAME)-$(VERSION).tar
