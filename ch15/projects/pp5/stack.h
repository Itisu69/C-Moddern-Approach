#include <stdbool.h>
#ifndef STACK
#define STACK
/* Checks for stack overflow */
int stack_overflow(void);

/* Checks for underflow */
int stack_underflow(void);

/* Makes stack empty */
void make_empty(void);

bool is_empty(void);

bool is_full(void);

void push(char i);

int pop(void);

#endif // !STACK
