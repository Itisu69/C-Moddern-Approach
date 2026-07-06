// Check if enterd parantheses and/or braces are nested properly

#include <stdio.h>

#define STACK_SIZE 4

char parantheses[STACK_SIZE];

void read_and_check(void);

int main()
{
    printf("Enter parantheses: ");
    read_and_check();
    return 0;
}

void read_and_check(void)
{
    char ch;

    for (int i = 0; i < STACK_SIZE && (ch = getchar()) != '\n'; i++)
    {
        if (ch == '{' || ch == '(' || ch == '[')
        {
            if (i == STACK_SIZE)
            {
                printf("Stack overflow\n");
                return;
            }
            else
                parantheses[i] = ch;
        }
        else if (ch == '}' || ch == ')' || ch == ']')
        {
            if (i == 0)
            {
                printf("Stack Underflow\n");
                return;
            }
            else if ((ch == '}' && parantheses[i - 1] != '{') || (ch == ')' && parantheses[i - 1] != '(') ||
                     (ch == ']' && parantheses[i - 1] != '['))
            {
                printf("Not nested properly\n");
                return;
            }
        }
        else
            i--;
    }
    printf("Nested Properly\n");
}
