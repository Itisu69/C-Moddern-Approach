#include <stdio.h>

// for loop exp

int main()
{
    int i,n;

    printf("This program prints a table of squares.\n");
   

    start:
    for (i = 1;i<=24;i++){
        printf("%10d%10d\n",i,i*i);
    }
    printf("Press enter to continue....");
    getchar();

    
    goto start;
    return 0;
}
