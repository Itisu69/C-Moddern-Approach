#include <stdio.h>

int main()
{

    float n,largest;

    printf("This program finds the largest in a series of numbers entered by the user.\nEnter 0 to terminate/end the program.\n");

   for (largest=0;;){
    printf("Enter a number: ");
    scanf("%f",&n);

    if (n <= 0)
        break;

    if (n>largest)
        largest=n;

    }

      printf("The largest number entered was %.2f",largest);

    return 0;
}
