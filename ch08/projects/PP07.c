#include <stdio.h>

int main()
{
    int table[5][5], row_total[5] = {0}, col_total[5] = {0}, i, j = 0; // in 5 by 5 array j is row

    printf("Enter five numbers in each row.\nAnd hit 'enter' after entering five numbers.\n\n");
    printf("Enter row 1: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &table[j][i]);
    }
    j++;

    printf("Enter row 2: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &table[j][i]);
    }
    j++;

    printf("Enter row 3: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &table[j][i]);
    }
    j++;

    printf("Enter row 4: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &table[j][i]);
    }
    j++;

    printf("Enter row 5: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &table[j][i]);
    }
    printf("\n");

    // This loop calculates the total of rows
    j = 0;
    for (int k = 0; k < 5; k++, j++)
    {
        for (i = 0; i < 5; i++)
        {
            row_total[k] += table[j][i];
        }
    }

    // This loop calculates the total of columns
    i = 0;
    for (int k = 0; k < 5; k++, i++)
    {
        for (j = 0; j < 5; j++)
        {
            col_total[k] += table[j][i];
        }
    }

    printf("Row total is: ");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", row_total[i]);
    }
    printf("\n");

    printf("Column total is:");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", col_total[i]);
    }
    printf("\n");

    return 0;
}