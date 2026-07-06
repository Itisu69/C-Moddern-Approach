#include <stdio.h>

//Calculating volume of 10 meter radius sphere

#define TILL_PIE (4.0f/3.0f)*3.14

int main(void)
{
    int radius = 10;
    float volume = radius*radius*radius*TILL_PIE;

    printf("Volume of the sphere is %.2fmeter cube\n", volume);
}
