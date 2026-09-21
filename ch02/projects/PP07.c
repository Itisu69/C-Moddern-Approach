#include <stdio.h>

int main(void)
{
    float loan, interest,monthly_rate,balance,payment;

    printf("Enter the amount of loan:");
    scanf("%f", &loan);
    balance = loan;

    printf("Enter the interest rate:");
    scanf("%f", &interest);
    monthly_rate = (interest / 100.0f)/12;

    printf("Enter the monthly payment:");
    scanf("%f", &payment);

    balance = (balance-payment) + (balance*monthly_rate);
    printf("Balance after first payment:$%.2f\n", balance);


    balance = (balance-payment) + (balance*monthly_rate);
    printf("Balance after second payment:$%.2f\n", balance);


    balance = (balance-payment) + (balance*monthly_rate);
    printf("Balance after third payment:$%.2f\n", balance);

    return 0;
}
