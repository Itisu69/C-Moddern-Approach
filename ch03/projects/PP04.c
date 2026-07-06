#include <stdio.h>

int main()
{
    int f3,s3,l4;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d",&f3,&s3,&l4);

    printf("You entered %d.%d.%d",f3,s3,l4);

    return 0;
}
