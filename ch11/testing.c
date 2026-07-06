// This programme is written just so i can understand some concepts i have doubt about
// by testing different cases that are not or are in book but i didn't get it

//  <-------- 1 -------->
// #include <stdio.h>
// int main() {

//     // int i, *p;
//     // p = &i;

//     // printf("Enter: ");
//     // scanf("%d", p);

//     // printf("%d\n", *p); // prints the value entered
//     // printf("%d\n",p); // prints the memory address of i
//     // printf("%d",i); // prints the value of i cause p is a pointer to i

//     return 0;
// }

//  <-------- 2 -------->
#include <stdio.h>

int *max(int *a, int *b)
{
    if (*a > *b)
        return a;
    else
        return b;
}
int main()
{
    // Pointer as return values
    int *p, i = 7, j = 9;

    p = max(&i, &j);
    printf("%d", p);    // adress of max value
    printf("\n%d", *p); // max value
    return 0;
}
