#include <stdio.h>

int main()
{
    float speed;

    printf("Enter wind speed(in knots): ");
    scanf("%f",&speed);

    if (speed<1)
        printf("Discription: Calm");
    else if (speed>0 && speed<4)
        printf("Discription: Light air");
    else if (speed>3 && speed<28)
        printf("Discription: Breeze");
    else if (speed>27 && speed<48)
        printf("Discription: Gale");
    else if (speed>47 && speed<64)
        printf("Discription: Storm");
    else printf("Hurricane");

    return 0;

}
