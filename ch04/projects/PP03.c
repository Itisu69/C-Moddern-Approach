#include <stdio.h>

//Improving pp2 so that we don't have to use any arithmetic
int main()
{
    int i,j,k;

    printf("Enter a three digit number:");
    scanf("%1d%1d%1d",&i,&j,&k); // here adding 1 before d is very important because scanf will read this as one space and in that "one" space one digit of the three digit number will be stored, allowing us to read all the numbers separately without asking the user to enter space between each digit

    printf("Reverse of that digit is %d%d%d",k,j,i);

    return 0;
}
