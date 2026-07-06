#include <stdio.h>
#include <math.h>
int main() {
    int x;
    double y=1,z,avg=0;
    printf("Enter a positive number: ");
    scanf("%d", &x);
    while (1) {
        z= (double) x/y;
        avg = (y+z)/2;
        y = avg;
        if (fabs(y - z) < 0.0001) {
            break;
        }
    }
    printf("Square root of %d is %.5f\n", x, avg);
    return 0;
}