#include <stdio.h>

#define ARRAY_LENGTH ((int) (sizeof(a)/sizeof(a[0])))

int main()
{
    int a[10], i;
    printf("Enter 10 integers: ");
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("In Reverse order: ");
    for (int i = ARRAY_LENGTH - 1; i >= 0; i--)
    {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}