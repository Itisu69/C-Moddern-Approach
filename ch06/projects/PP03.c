#include <stdio.h>

int main()
{
    int d,n,temp,temp1,remainder;

    printf("Etner a fraction: ");
    scanf("%d/%d",&n,&d);

        temp=n; temp1=d;

    while (temp1!=0){
        remainder=temp%temp1;
        temp=temp1;
        temp1=remainder;
        //GCD is temp
    }

    printf("In lowest terms: %d/%d",n/temp,d/temp);

    return 0;
}
