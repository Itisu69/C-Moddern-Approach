// this program is not complete but it shows how stacks work

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
// external variable
int contents[STACK_SIZE];
int top = 0;

void stack_overflow(void);
void stack_underflow(void);

void make_empty(void){
    top = 0;
}

bool is_empty(void){
    return top == 0;
}

bool is_full(void){
    return top == STACK_SIZE;
}

void stack_overflow(void){
    fprintf(stderr, "Stack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void){
    fprintf(stderr, "Stack underflow\n");
    exit(EXIT_FAILURE);
}

void push(int i){
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void){
    if (is_empty()) {
        stack_underflow();
    } else {
        return contents[--top];
    }

    return 0;
}