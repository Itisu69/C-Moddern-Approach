#include <stdio.h>

int main()
{
    int number, tens, ones;
    char *ones_str[] = {"one.", "two.", "three.", "four.", "five.", "six.",
                        "seven.", "eight.", "nine."};
    char *tens_str[] = {"twenty", "thirty", "forty", "fifty",
                        "sixty", "seventy", "eighty", "ninety"};
    char *teens_str[] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
                         "fifteen", "sixteen", "seventeen", "eighteen",
                         "nineteen"};

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    if (number < 1 || number > 99)
    {
        printf("Number out of range.\n");
        return 1;
    }

    tens = number / 10;
    ones = number % 10;

    printf("Your entered number: ");
    if (tens == 0) //ones
        printf("%s", ones_str[ones-1]);
    else if (tens == 1) //teens
        printf("%s", teens_str[ones]);
    else
        printf("%s-%s", tens_str[tens-2], ones_str[ones-1]);
}