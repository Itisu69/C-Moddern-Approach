#include <stdio.h>

int main(void)

{
    int amount,twenties, tens, fives, ones;

    printf("This program calculates the smallest amount of bill to pay.\nEnter the amount:$ ");
    scanf("%d", &amount);

   twenties = amount / 20;
   amount = amount % 20;

   tens = amount / 10;
   amount = amount % 10;

    fives = amount / 5;
    amount = amount % 5;

    ones = amount;

    printf("$20 bill: %d\n", twenties);
    printf("$10 bill: %d\n", tens);
    printf(" $5 bill: %d\n", fives);
    printf(" $1 bill: %d\n", ones);

    return 0;
}


