
// /* Recursively sorts an array using the selection sort algorithm.
//  * Sorts largest element each recursive call, rather than smallest.
//  * Uses tail recursion. */
// void selection_sort(int a[], int n)
// {
//     if (n == 0) return;

//     int i, index_largest = 0;

//     for (i = 1; i < n; i++) {
//         if (a[i] > a[index_largest])
//             index_largest = i;
//     }

//     int largest = a[index_largest];
//     a[index_largest] = a[n-1];
//     a[n-1] = largest;

//     selection_sort(a, n - 1);
// }

#include <stdio.h>

#define SIZE 30

void selection_sort(int arr[], int size);

int main()
{
    int nums[SIZE];
    printf("Enter %d integers: ",SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &nums[i]);
    }

    selection_sort(nums, SIZE);
    printf("Sorted array: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}

void selection_sort(int arr[], int size)
{
    if (size == 0){
        return;
    }
    int max_pos = 0, temp;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[max_pos])
        {
            max_pos = i;
        }
    }
    temp = arr[size - 1];
    arr[size - 1] = arr[max_pos];
    arr[max_pos] = temp;
    selection_sort(arr, size - 1);
}

// 12 -5 34 -18 7 -42 29 -1 56 -23 9 -37 44 -8 16 -50 3 -14 27 -31 6 -2 41 -19 24 -46 11 -33 38 -7
//  19 -25 48 -4 15 -39 22 -10 31 -28 5 -17 40 -21
