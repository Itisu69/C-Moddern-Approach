#include <stdio.h>

int main() {
    float x = 1;
    int i = 1;

   while ( x *= i) {
       i++;
       if (x<0) {
           printf("Overflow will occur at %d\n",i);
           break;
       }
    }
    printf("Factorial is %.1f\n",x);
    return 0;
}