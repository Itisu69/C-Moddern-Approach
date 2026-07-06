#include <stdio.h>

// while loop exp

int main(void)
{
    double n,sum=0;

    printf("This program sums a series of double values.\n");
    printf("Enter double values (0 to terminate): ");

    scanf("%lf",&n);
    while (n!=0){
        sum+=n;
        scanf("%lf",&n); // This is a great example of how scanf can be used inside the loop
    }

    printf("The sum is: %lf\n",sum);

    return 0;
}

