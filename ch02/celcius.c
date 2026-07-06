#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0F/9.0F)

int main(void)
{
    float fahrenhit, celcius;

    printf("Enter Fahrenhit temprature: ");
    scanf("%f", &fahrenhit);

    celcius = (fahrenhit-FREEZING_PT)*SCALE_FACTOR;
    printf("Celcius equivalent: %.2f\n",celcius);

    return 0;

}
