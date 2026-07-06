#include <stdio.h>

float tax_due(float amount);

int main()
{

    float income;

    printf("Enter your income here: $");
    scanf("%f", &income);

    printf("Your tax is $%.2f\n", tax_due(income));
    return 0;
}

float tax_due(float amount)
{
    float tax;
    if (amount >= 0 && amount < 750.00f)
        return tax = .01f * amount;
    else if (amount >= 750.00f && amount < 2250.00f)
        return tax = .02f * amount + 7.50f;
    else if (amount >= 2250.00f && amount < 3750.00f)
        return tax = .03f * amount + 37.50f;
    else if (amount >= 3750.00f && amount < 5250.00f)
        return tax = .04f * amount + 82.50f;
    else if (amount >= 5250 && amount < 7000)
        return tax = .05f * amount + 142.50f;
    else if (amount >= 7000)
        return tax = .06f * amount + 230.50f;
}