#include <stdio.h>

// while loop exp

int main(void)
{
    int n,sum=0;
    
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%d",&n);
    while (n!=0){
        sum+=n;
        scanf("%d",&n); // This is a great example of how scanf can be used inside the loop
    }

    printf("The sum is: %d\n",sum);

    return 0;
}

