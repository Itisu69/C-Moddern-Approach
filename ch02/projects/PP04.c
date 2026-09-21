#include <stdio.h>

int main(void)
{
    float amount, with_tax;
    printf("Enter an amount: ");
    scanf("%f", &amount);

    with_tax = amount * 1.05;//here tax = amount * (amount+0.05)= amount * (1+.05)

    printf("With added tax:$%.2f\n",with_tax);
}
