#include <stdio.h>

// Accepts input as mm/dd/yy displays it as yy/mm/dd

int main()
{
    int m,d,y;

    printf("Enter a date(MM/DD/YYYY):");
    scanf("%d/%d/%d", &m, &d,&y);

    printf("You Entered the date %d/%d/%d", y,m,d);
    return 0;
}
