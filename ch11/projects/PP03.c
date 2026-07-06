#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
int main()
{
    int n, d, reduced_n, reduced_d;

    printf("Etner a fraction: ");
    scanf("%d/%d", &n, &d);

    reduce(n, d, &reduced_n, &reduced_d);
    printf("In lowest terms: %d/%d", reduced_n, reduced_d);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
     int temp, m = numerator, n = denominator;

    while (n != 0) {
       temp = m % n;
       m = n;
       n = temp;
    }

    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;
}