#include <stdio.h>

// This program asks user to provide numners from 1 to 16 in any order.
// Then it displays those numbers in 4 by 4 arrangement, followed by the sum of the rows, columns and diagnonals.

int main()
{
     int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16;


    printf("Enter numbers from 1 to 16 in any order : ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12,&n13,&n14,&n15,&n16);

    printf("%3d %3d %3d %3d\n",n1,n2,n3,n4);
    printf("%3d %3d %3d %3d\n",n5,n6,n7,n8);
    printf("%3d %3d %3d %3d\n",n9,n10,n11,n12);
    printf("%3d %3d %3d %3d\n",n13,n14,n15,n16);

    int row_sums = n1+n2+n3+n4;
    int row_sums2 = n5+n6+n7+n8;
    int row_sums3= n9+n10+n11+n12;
    int row_sums4 = n13+n14+n15+n16;

    int column_sums = n1+n5+n9+n13;
    int column_sums2 = n2+n6+n10+n14;
    int column_sums3 = n3+n7+n11+n15;
    int column_sums4 = n4+n8+n12+n16;

    int dig_sum = n1+n6+n11+n16;
    int dig_sum2 = n4+n7+n10+n13;


    printf("Row sums: %d %d %d %d\n",row_sums,row_sums2,row_sums3,row_sums4);
    printf("Column sums: %d %d %d %d\n",column_sums,column_sums2,column_sums3,column_sums4);
    printf("Diagonal sums: %d %d\n",dig_sum,dig_sum2);
    return 0;
}
