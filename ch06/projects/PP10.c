#include <stdio.h>

int main()
{
    printf("This program calculates which date comes the earliest in the calendar.\nEnter dates in form of MM/DD/YY format and\nenter 0/0/0 to stop adding dates.\n");
    
    int m,y,d,ey,em,ed,m1,d1,y1;
    
        printf("Enter date(mm/dd/yy): ");
        scanf("%d/%d/%d",&m,&d,&y);
        ey = y;
        em = m;
        ed = d;
    for (;;){
        printf("Enter date(mm/dd/yy): ");
        scanf("%d/%d/%d",&m1,&d1,&y1);

        if (m1 == 0 && y1 == 0 && d1==0)
            break;

        if (y1<y){
            ey = y1;
            em = m1;
            ed = d1;
        }
        if (m1<m){
            ey = y1;
            em = m1;
            ed = d1;
        }
        if (d1<d){
            ey = y1;
            em = m1;
            ed = d1;
        }
    }
    printf("Earliest date is %d/%d/%.2d",em,ed,ey);
}