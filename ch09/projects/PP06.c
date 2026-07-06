#include <stdio.h>

void value_of_polynomial(float x);

int main() {
    float x;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    value_of_polynomial(x);
    return 0;
}

void value_of_polynomial(float x)
{
    printf("Value of polynomial: %.2f",(3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*x - 6));
}