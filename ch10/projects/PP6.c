#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

void process_char(char i);

// External vatiables
char ch;
int contents[STACK_SIZE], top = 0;

int stack_overflow(void)
{
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

int stack_underflow(void)
{
    printf("Not enough oprands in expression\n");
    exit(EXIT_FAILURE);
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

int main()
{

    while (true)
    {
        printf("Enter an RPN expression: ");

        while ((ch = getchar()) != EOF && ch != '\n')
        {
            process_char(ch);
        }
    }
    return 0;
}

void process_char(char i)
{
    int operand1, operand2;

    switch (i)
    {
    case '0':
        push(0);
        break;
    case '1':
        push(1);
        break;
    case '2':
        push(2);
        break;
    case '3':
        push(3);
        break;
    case '4':
        push(4);
        break;
    case '5':
        push(5);
        break;
    case '6':
        push(6);
        break;
    case '7':
        push(7);
        break;
    case '8':
        push(8);
        break;
    case '9':
        push(9);
        break;

    case '+':
        push(pop() + pop());
        break;

    case '-':
        operand2 = pop();
        operand1 = pop();
        push(operand1 - operand2);
        break;

    case '*':
        push(pop() * pop());
        break;

    case '/':
        operand2 = pop();
        operand1 = pop();
        push(operand1 / operand2);
        break;

    case '=':
        printf("Value of expression: %d\n", pop());
        break;

    case ' ':
        break;

    default:
        exit(EXIT_FAILURE);
    }
}