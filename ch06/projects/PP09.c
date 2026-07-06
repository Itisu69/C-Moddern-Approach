#include <stdio.h>

int main(void)
{
    float loan, interest,monthly_rate,balance,payment;
    int n_payment,i,temp=1;

    printf("Enter the amount of loan:");
    scanf("%f", &loan);
    balance = loan;

    printf("Enter the interest rate:");
    scanf("%f", &interest);
    monthly_rate = (interest / 100.0f)/12;

    printf("Enter the monthly payment:");
    scanf("%f", &payment);

    printf("Enter the number of payments: ");
    scanf("%d",&n_payment);

    for (i = 1;i<=n_payment;i++){
    balance = (balance-payment) + (balance*monthly_rate);
    printf("Balance after %d payment:$%.2f\n",temp, balance);
    temp++;
    }

    return 0;
}
