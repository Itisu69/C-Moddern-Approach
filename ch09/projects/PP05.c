// Modifying PP17 of chap 8 so that it includes:
// void create_magic_square(int n, char magic_square[n][n])
// void print_magic_square(int n, char magic_square[n][n])

#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void) {
    int n;

start:
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic squares: \n");
    scanf("%d", &n);

    // Checking if entered size is odd or not
    if (n % 2 == 0) {
        printf("Please enter an odd  size for magic square\n");
        goto start;
    }
    char magic_square[n][n];

    create_magic_square(n, magic_square);
    print_magic_square(n, magic_square);

    return 0;
}

void create_magic_square(int n, char magic_square[n][n]) {

    // Initializing matrix with zero
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magic_square[i][j] = 0;
        }
    }

    int row = 0, col = n / 2;
    for (int number = 1; number <= n * n; number++) {
        magic_square[row][col] = number;

        // calculating next row and column (up and to the right)
        int next_row = (row - 1 < 0) ? n - 1 : row - 1;
        int next_col = (col + 1 == n) ? 0 : col + 1;

        // Checking if tha targeted cell in the matrix is already occupied or
        // not
        // if yes, then move one step down instead of moving up
        if (magic_square[next_row][next_col] != 0) {
            row = (row + 1 == n) ? 0 : row + 1;
        } else {
            row = next_row;
            col = next_col;
        }
    }
}

void print_magic_square(int n, char magic_square[n][n]) {

    // Printing the magic square
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("\t%d", magic_square[i][j]);
        }
        printf("\n");
    }
}
