#include <stdio.h>

float power(float x, int n);

int main()
{
    float x;
    int n;

    printf("Enrer the value of x: ");
    scanf("%f", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("%.2f to the power of %d is: %.2f\n", x, n, power(x, n));
    return 0;
}

float power(float x, int n)
{
    if (n==0)
    {
        return 1.0f;
    }
    else if (n%2 == 0)
    {
        return (power(x, n/2) * power(x,n/2));
    }
    else{
        return x * power(x, n-1);
    }
    
}