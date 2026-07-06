#include <stdio.h>

int main()
{
    int n,i,j,k,l,m,a,b,c,d,e;

    printf("Enter a number between 0 to 32757:");
    scanf("%d",&n);

    a = n/8; i = n%8;
    b = a/8; j = a%8;
    c = b/8; k = b%8;
    d = c/8; l = c%8;
    e = d/8; m = d%8;

    printf("In octal, your number is %d%d%d%d%d",m,l,k,j,i);

    return 0;
}
