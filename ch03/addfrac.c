#include <stdio.h>

// Adds two fractions

int main()
{

    int num1, denom1, num2, denom2, result_num, result_denom;

    //here made some changes according to exercise 6 by simply putting space before / and after /

    printf("Enter first fraction:");
    scanf("%d / %d", &num1, &denom1);

    printf("Enter second fraction:");
    scanf("%d / %d", &num2, &denom2);

    result_num = num1*denom2 + num2*denom1;
    result_denom = denom1*denom2;

    printf("The sum is: %d/%d", result_num, result_denom);

    return 0;
}
