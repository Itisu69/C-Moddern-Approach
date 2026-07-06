#include <stdio.h>

// macro that counts the elements of a one dimentional array
#define NELEMS(array) sizeof(a) / sizeof(a[0])

int main() {
    int a[20] = {0};
    
    printf("Number of elements in the array is: %d\n", NELEMS(a));
    return 0;
}