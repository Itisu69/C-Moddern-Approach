#include <stdio.h>

int main()
{

    int min1,max1,min2,max2,min,max,n1,n2,n3,n4;

    printf("Enter four integers(with space in between): ");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

    min1=n1;
    max1=n2;
    min2=n3;
    max2=n4;
    min=min1;
    max=max1;

    if (n2<n1){
        min1=n2;
        max1=n1;
    }
    if(n4<n3){
        min2=n4;
        max2=n3;
    }
    if(min2<min1){
        min=min2;
    }
    if(max2>max1){
        max=max2;
    }

    printf("Largest: %d\n",max);
    printf("Smallest: %d\n",min);

    return 0;
}
