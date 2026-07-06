#include <stdio.h>

void swap(int *p, int *q);

int main()
{
    int i = 45, j = 31;
    swap(&i, &j);
    printf("i = %d j = %d", i, j);
    return 0;
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}