#include <stdio.h>


int main()
{
    int m,d,y,item;
    float uprice;
    printf("Enter item number:");
    scanf("%d", &item);

    printf("Enter unit price:$");
    scanf("%f", &uprice);

    printf("Enter purchase date (MM/DD/YYYY):");
    scanf("%d/%d/%d", &m, &d,&y);

    printf("Item\t\tUnit\t\t\tPurchase\n\t\tPrice\t\t\tDate\n%d\t\t$  %.2f\t\t%d/%d/%d",item,uprice,m,d,y);

    return 0;



}
