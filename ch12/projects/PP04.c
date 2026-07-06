// No changes need to be made as program already satisfies the condition

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 50

int read_msg(char a[], int n);
bool is_pallindrome_subscript(char a[], int n);
bool is_pallindrome_pointer(char a[], int n);

int main()
{
    char msg[SIZE];

    int msg_length = read_msg(msg, SIZE);

    if (is_pallindrome_subscript(msg, msg_length))
        printf("Pallindrome\n");
    else
        printf("Not Pallindrome\n");

    if (is_pallindrome_pointer(msg, msg_length))
        printf("Pallindrome\n");
    else
        printf("Not Pallindrome\n");
    return 0;
}

int read_msg(char a[], int n)
{
    int i = 0;
    char ch;

    printf("Enter a message: ");
    while ((ch = getchar()) != EOF && ch != '\n')
    {
        if (tolower(ch) >= 'a' && tolower(ch) <= 'z')
        {
            a[i] = tolower(ch);
            i++;
        }
    }
    return i;
}

bool is_pallindrome_subscript(char a[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (a[start++] != a[end--])
        {
            return false;
        }
    }
    return true;
}

bool is_pallindrome_pointer(char a[], int n)
{

    char *ptr_start = a, *ptr_end = a + n - 1;

    while (ptr_start < ptr_end)
    {
        if (*ptr_start++ != *ptr_end--)
        {
            return false;
        }
    }

    return true;
}