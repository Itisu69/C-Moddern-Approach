#include <stdio.h>

int main(void)
{
    signed int n,x,y;

    printf("Enter any number: ");
    scanf("%d",&n);

    printf("The reverse is :");
    do {
        x = n%10;
        printf("%d",x);
        n/=10;
    }while(n!=0);
    
    
        return 0;
}