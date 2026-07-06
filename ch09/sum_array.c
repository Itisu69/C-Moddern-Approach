#include <stdio.h>

#define LEN 100

int sum_array(int a[], int n);

int main()
{
    int arr[LEN], total;

    for (int i = 0; i < LEN ; i++)
    {
        printf("Enter a number (0 to terminate): ");
        scanf("%d", &arr[i]);

        if (arr[i] == 0)
        {
            break;
        }
        
    }

    total = sum_array(arr,5);

    printf("Total is: %d",total);
    return 0;
}

int sum_array(int a[], int n)
{
    int sum;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}