#include <stdio.h>

int main()
{

    int n;


    printf("Enter a number(Maximum four digits): ");
    scanf("%d",&n);

    if (n<=9 && n>0)
    {
        printf("Your number is a one digit number.\n");
    }
    else if (n>=10 && n<100)
    {
        printf("Your number is a two digit number.\n");
    }
    else if (n>=100 && n<1000)
    {
        printf("Your number is a three digit number.\n");
    }
    else if (n>=1000 && n<=9999)
    {
        printf("Your number is a four digit number.\n");

    }
    else printf("Your entered number contains more than four digits.\n");

    return 0;
}
