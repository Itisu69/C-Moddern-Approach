// Slight changes made in project 1

#include <stdio.h>

#define SIZE 80

int read_msg(char a[], int n);
void print_msg(char a[], int n);
void print_msg_reverse_subscript(char a[], int n);
void print_msg_reverse_pointer(char a[], char *a_last);

int main()
{
    char msg[SIZE];

    int msg_length = read_msg(msg, SIZE);
    print_msg(msg, msg_length);
    print_msg_reverse_subscript(msg, msg_length);
    print_msg_reverse_pointer(msg, &msg[msg_length - 1]);
    return 0;
}

int read_msg(char a[], int n)
{
    char ch;
    int i;

    printf("Enter a message: ");
    for (i = 0; (ch = getchar()) != EOF && ch != '\n'; i++)
        a[i] = ch;

    return i;
}

void print_msg(char a[], int n)
{
    char *p;
    printf("Message: ");
    for (p = a; p < a + n; p++)
        printf("%c", *p);
    printf("\n");
}

void print_msg_reverse_subscript(char a[], int n)
{
    printf("Message in reverse using array subscripting: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
    printf("\n");
}

void print_msg_reverse_pointer(char a[], char *a_last)
{
    // the change is using *a_last directly without declaring a pointer pointing to it 
    printf("Message in reverese using pointer to array element: ");
    while (a_last >= a)
        printf("%c", *a_last--);
    printf("\n");
}