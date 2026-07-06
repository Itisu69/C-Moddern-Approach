#include <stdio.h>

// Calender

int main(void){

    int days,week,i,j;

    printf("Enter number of days in month: ");
    scanf("%d",&days);

    printf("Enter starting day of the week (1=Sunday, 7=Saturday): ");
    scanf("%d",&week);
    
    printf("\n");

    //prints the number of blank days
    
    for(j=1;j<week;j++){
        printf("   ");
    }

    for(i=1;i<=days;j++,i++){
        
        printf("%3d",i);

        if (j%7==0){
            printf("\n");
        }

    }
    return 0;
}