#include <stdio.h>

int main()
{

    float tax,income;

    printf("Enter your income here: $");
    scanf("%f",&income);

    if (income>=0 && income<750.00f)
        printf("Your tax is $%.2f\n",tax=.01f*income);
    else if (income>=750.00f && income<2250.00f)
         printf("Your tax is $%.2f\n",tax =.02f*income + 7.50f);
    else if (income>=2250.00f && income<3750.00f)
            printf("Your tax is $%.2f\n",tax =.03f*income + 37.50f);
    else if (income>=3750.00f && income<5250.00f)
        printf("Your tax is $%.2f\n",tax =.04f*income + 82.50f);
    else if (income>=5250 && income<7000)
        printf("Your tax is $%.2f\n",tax =.05f*income + 142.50f);
    else if (income>=7000)
        printf("Your tax is $%.2f\n",tax =.06f*income + 230.50f);
    else printf("Entered income is invalid.\n");

    return 0;
}
