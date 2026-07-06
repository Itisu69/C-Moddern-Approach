#include <stdio.h>

// (a) the cube of X
#define CUBE(x) (x*x*x)

// (b) the remainder when n is devided by 4
#define REMSAINDER_OF_4(n) (n%4)

// (c) 1 if product of x and y is less than 100, 0 otherwise
#define PRODUCT(x, y) ((x*y) <= 100 ? 1 : 0)

int main() {
    int x = 5, y = 35, z = 12;
    
    printf("Cube of x: %d\n", CUBE(x));
    printf("Remainder of y when it's devided by 4: %d\n", REMSAINDER_OF_4(y));
    printf("Product of x and y: %d\n", PRODUCT(x,y));
    return 0;
}