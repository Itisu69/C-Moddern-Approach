#include <stdio.h>



int main()
{

    int num1, denom1, num2, denom2, result_num, result_denom;
    char c;

    printf("Enter two fractions (space in between): ");
    scanf("%d/%d %d/%d", &num1, &denom1,&num2,&denom2);

    printf("Enter the operation (+,-,*,/): ");
    scanf(" %c", &c);
    if (c == '+')
         result_num = num1*denom2 + num2*denom1, result_denom = denom1*denom2;
    else if (c == '-')
         result_num = num1*denom2 - num2*denom1, result_denom = denom1*denom2;
    else if (c == '*')
         result_num = num1*num2, result_denom = denom1*denom2;
    else if (c == '/')
         result_num = num1*denom2, result_denom = denom1*num2;
    else {
        printf("Invalid operation");
    }
    printf("The result is: %d/%d", result_num, result_denom);
    return 0;
}
