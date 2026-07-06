#include <stdio.h>

int main(void)
{
    int height,length, width, volume, weight;

    printf("Enter height of the box: ");
    scanf("%d",&height);
    printf("Enter length of the box: ");
    scanf("%d",&length);
    printf("Enter width of the box: ");
    scanf("%d",&width);
    volume = height * length * width;
    weight = (volume+165) / 166;

    printf("Volume (cubic inches): %d\n",volume);
    printf("Demential weight (pounds): %d\n",weight);

    return 0;
}
