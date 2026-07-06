#include <stdio.h>

int main()
{
    char c, first_initial;

    printf("Enter a first and last name: ");
    scanf(" %c", &c);
    first_initial = c;
    while (c != ' ')
    {
        scanf("%c", &c);
    }
    /* Skip the rest of the first name
    Also using if inside while loop solves the issue of unwanted newlines in output,
    which happens if while(ch != '\n') is used */

    while (1)
    {
        scanf("%c", &c);
        if (c == '\n')
        {
            break;
        }
        printf("%c", c);
    }
    printf(", %c.\n", first_initial);
    return 0;
}