#include <stdio.h>


//Improving the program of pp1 for three digit numerics

int main()
{
    int i,j,k,m,n;

    printf("Enter the three digit number:");
    scanf("%d",&i);

    j = i%10;
    k = i/10;

    // Here j will hold the last digit of the three digit so there is no problem with that.
    // However, k/10 will provide the first two digit of that three digit number thus repeating the same process for k and reversing it to get the reverese of the 3 digit number at the end

    n = k%10;
    m = k/10;

    printf("Reverse of the number is %d%d%d",j,n,m);

    return 0;
}
