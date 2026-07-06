#include <stdio.h>

// Reversing the two digit number

int main()
{
    int i,j,k;

    printf("Enter a two digit number:");
    scanf("%d",&i);

    // if n is an int n%10 is the last digit in n and n/10 is n with last digit removed

    j =  i%10;
    k = i/10;

    printf("Reverse of that number is %d%d",j,k);

    return 0;
}
