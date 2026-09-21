#include <stdio.h>

int main(void)
{
    float x, value;
    printf("This program calculates the value of this polynomial: 3x^5 +2x^4-5x^3-x^2+7x-6\n");
    printf("Give the value of X:");
    scanf("%f", &x);

    value =  (3*x*x*x*x*x)+(2*x*x*x*x)-(5*x*x*x)-(x*x)+7*x-6;// or (((3*x+2)*x-5)*x-1)*x+7))*x-6

    printf("The answer is %.1f", value);

    return 0;
}
