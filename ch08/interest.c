// Prints a table of compound interest

#include <stdio.h>

#define NUM_RATES ((int)(sizeof (value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

#include <stdio.h>

int main()
{
    double value[5];
    int low_rate, i, num_years, year;

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);

    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (int i = 0; i < NUM_RATES; i++) // this loop assigns $100 to every interest rate for intializing
    {
        printf(" %6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (int year = 1; year <= num_years; year++)
    {
        printf("%3d     ", year);
        for (int i = 0; i < NUM_RATES; i++)
        {
            value[i] = value[i] + ((low_rate + i) / 100.0) * value[i];
            printf(" %7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}
