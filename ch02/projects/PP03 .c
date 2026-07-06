#include <stdio.h>

//Calculating volume user inputted radius's sphere

#define TILL_PIE (4.0f/3.0f)*3.14

int main(void)
{
    float radius;
    printf("Enter radius of the sphere: ");
    scanf("%f", &radius);

    float volume = radius*radius*radius*TILL_PIE;

    printf("Volume of the sphere is %.2fmeter cube\n", volume);
}

