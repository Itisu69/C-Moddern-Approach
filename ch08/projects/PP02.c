#include <stdio.h>

int main()
{
    int indx_digit[10] = {0};
    long n;
    int digit, occur = 0;

    printf("Enter a digit: ");
    scanf("%ld", &n);

    printf("Digit:\t   0 1 2 3 4 5 6 7 8 9 ");
    printf("\nOccurance:");

    while (n > 0)
    {
        digit = n % 10;
        indx_digit[digit]++;
        n /= 10;
    }

    for (n = 0; n < 10; n++)
    {
        printf(" %d", indx_digit[n]);
    }

    return 0;
}