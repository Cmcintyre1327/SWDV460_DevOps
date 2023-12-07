CC=gcc
CFLAGS=-I.
DEPS = Source.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

Source: Source.o
	$(CC) -o Source Source.o
