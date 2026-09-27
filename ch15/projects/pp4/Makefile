
CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=C99

remind: remind.o readline.o
	$(CC) -o remind remind.o readline.o $(CCFLAGS)

remind.o: remind.c readline.h
	$(CC) -c remind.c $(CCFLAGS)

readline.o: readline.h readline.c
	$(CC) -c readline.c $(CCFLAGS)
