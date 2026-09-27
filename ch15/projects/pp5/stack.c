#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE], top = 0;

int stack_overflow(void) {
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

int stack_underflow(void) {
    printf("Not enough oprands in expression\n");
    exit(EXIT_FAILURE);
}

void make_empty(void) { top = 0; }

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE; }

void push(char i) {
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void) {
    if (is_empty())
        stack_underflow();
    return contents[--top];
}
