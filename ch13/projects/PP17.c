#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define LEN 100 + 1

bool is_palindrome(const char *message);

int main(void)
{
    char message[LEN];

    printf("This program checks if the entered message is palindrome or not\n");

    printf("\nEnter a message: ");
    scanf(" %[^\n]", message);

    printf("Entered message is ");
    is_palindrome(message) ? printf("palindrome\n") : printf("not palindrome");
    return 0;
}
bool is_palindrome(const char *message)
{
    const char *left = message;

    while (*message)
        message++;

    const char *right = --message;
    for (; left < right; left++, right--)
    {
        if (*left == ' ' || *right == ' ')
            continue;
        if (tolower(*left) != tolower(*right))
            return false;
    }
    return true;
}
