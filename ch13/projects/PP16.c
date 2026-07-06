// Reversing Message Using pointer

#include <stdio.h>

#define MAX_LEN 150 + 1

void reverse(char *message);
int main()
{
    char message[MAX_LEN];

    printf("Enter a message: ");
    scanf("%[^\n]", message);

    reverse(message);
    printf("Reversed message: %s\n", message);
    return 0;
}
void reverse(char *message)
{
    char temp, *left = message;

    while (*message)
    {
        message++;
    }

    char *right = --message;
    for (; left < right; left++, right--)
    {
        temp = *left;
        *left = *right;
        *right = temp;
    }
}