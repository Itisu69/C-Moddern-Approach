// To print multiple digits' occurance rather than of a single number

#include <stdio.h>

int main()
{
    long n = 1;
    int digit, occur = 0;

    printf("This program prints the occurances of the numbers entered by user"
            " until they enter number less than 0\n");

    while (1) {

        int indx_digit[10] = {0};
        printf("\nEnter a number (0 or less to stop): ");
        scanf("%ld", &n);

        if (n <= 0) {
            break;
        }

        printf("Digit:\t   0 1 2 3 4 5 6 7 8 9 ");
        printf("\nOccurance:");

        while (n > 0)
        {
            digit = n % 10;
            indx_digit[digit]++;
            n /= 10;
        }

        for (int i = 0; i < 10; i++)
        {
            printf(" %d", indx_digit[i]);
        }

        printf("\n");

        long n = 1;
        int digit, occur = 0;

    }

    return 0;
}
