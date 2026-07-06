#include <stdio.h>

// write a program to print smallest value of n such that n*n exceeds the range of int

int main()
{
    unsigned short n = 1;

    while (n * n > 0) {
        n++;
    }

    printf("%hu", n);
    return 0;
}
