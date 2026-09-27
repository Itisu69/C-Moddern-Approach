CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=C99

rpn_calc: rpn_calc.o stack.o
	$(CC) -o rpn_calc rpn_calc.o stack.o $(CCFLAGS)

rpn_calc.o: rpn_calc.c stack.h
	$(CC) -c rpn_calc.c $(CCFLAGS)

stack.o: stack.c stack.h
	$(CC) -c stack.c $(CCFLAGS)
