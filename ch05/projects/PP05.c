#include <stdio.h>

//Cecks UPC code and prints is it valid or invalid


int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,first_sum,second_sum,checkdigit1,checkdigit2,total;

    printf("Enter 12 digit UPC code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10,&a11,&checkdigit1,&checkdigit2);

    first_sum = a1+a3+a5+a7+a9+a11;
    second_sum = a2+a4+a6+a8+a10;
    total = first_sum*3 + second_sum;

    checkdigit2  = 9 - (total-1)%10;

    if (checkdigit2>checkdigit1 || checkdigit2<checkdigit1)
        printf("UPC IS INVALID.");
    else printf("UPC IS VALID.\n");

    return 0;

}

