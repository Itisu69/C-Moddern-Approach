#include <stdio.h>

int main()
{
    int gsi,idfs,pcode,inum,cdigit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &idfs,&pcode,&inum,&cdigit);

    printf("GSI prefix: %d\n",gsi);
    printf("Group identifier: %d\n",idfs);
    printf("Publisher code: %d\n",pcode);
    printf("Item number: %d\n",inum);
    printf("Check digit: %d\n",cdigit);

    return 0;
}
