// ---------1---------
#include <stdio.h>
#define N 10

int main() {
    int a[N] = {45, 32, 6, 91, 23, 19, 83, 90, 12, 73}, sum = 0, *p;
    
    // for (p = &a[0]; p < &a[N]; p++) // Using &a[N] is completely legal, eventhough it doesnt exist
    // {
    //     sum += *p;
    // }

    p = &a[0];N
    while (p < &a[N])
    {
        sum += *p++;
    }
    
    printf("%d",sum);
    
    return 0;
}