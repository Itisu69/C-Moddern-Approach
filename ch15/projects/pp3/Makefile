CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=C99

qsort: qsort.o quicksort.o
	$(CC) -o qsort qsort.o quicksort.o $(CCFLAGS)

qsort.o: qsort.c quicksort.h
	$(CC) -c qsort.c $(CCFLAGS)

quicksort.o: quicksort.c quicksort.h
	$(CC) -c quicksort.c $(CCFLAGS)
