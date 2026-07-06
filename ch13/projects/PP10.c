#include <stdio.h>
#include <string.h>

void reverse_name(char *name);

int main()
{
    char name[30];

    printf("Enter a first and last name: ");
    scanf("%[^\n]", name);

    reverse_name(name);
    return 0;
}

void reverse_name(char *name)
{
    char *p = name, initial;
    while (*p && *p == ' ')
        p++;
    initial = *p++;

    while (*p && *p++ != ' ')
        ;

    while (*p && *p != '\n')
        putchar(*p++);
    printf(", %c", initial);
}