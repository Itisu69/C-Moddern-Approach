#include <stdio.h>

// do...while statement exp

int main()
{
    int n, digits=0;

    printf("Enter a non-nagative integer: ");
    scanf("%d",&n);

    do {
        n/=10;
        digits++;
    } while (n>0);

    printf("The number is %d digit(s).\n",digits);

    return 0;
}
