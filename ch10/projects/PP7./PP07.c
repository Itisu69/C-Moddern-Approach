#include <ctype.h>
#include <stdio.h>

#define MAX_DIGITS 10

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

/* external variables */
/* 7-segment representations for digits 0-9:
 *
 *    _0_
 * 5 |   | 1
 *   |_6_|
 * 4 |   | 2
 *   |_3_|
 */
const int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0}, // 0
    {0, 1, 1, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 1}, // 2
    {1, 1, 1, 1, 0, 0, 1}, // 3
    {0, 1, 1, 0, 0, 1, 1}, // 4
    {1, 0, 1, 1, 0, 1, 1}, // 5
    {1, 0, 1, 1, 1, 1, 1}, // 6
    {1, 1, 1, 0, 0, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1}, // 8
    {1, 1, 1, 1, 0, 1, 1}, // 9
};

char digits[4][MAX_DIGITS * 4];

// Translating 7-segment display to 7 x 2 grid
/*
 *  012
 * 0 _
 * 1|_|
 * 2|_|
 *
 * */
const int segments_grid[7][2] = {{0, 1}, {1, 2}, {2, 2}, {2, 1},
                                 {2, 0}, {1, 0}, {1, 1}};

int main(void) {
    int position = 0;
    char c;

    clear_digits_array();

    printf("Enter a number: ");
    while ((c = getchar()) != '\n') {
        if (isdigit(c)) {
            process_digit(c - '0', position);
            position += 4;
        }
    }

    print_digits_array();

    return 0;
}

// Clears digits array with empty spaces
void clear_digits_array(void) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_DIGITS * 4; j++) {
            digits[i][j] = ' ';
        }
    }
}

// Processing every digit entered by the user
void process_digit(int digit, int position) {
    int row, col;

    for (int i = 0; i < 7; i++) {
        if (segments[digit][i]) {
            row = segments_grid[i][0];
            col = segments_grid[i][1] + position;
            digits[row][col] = i % 3 == 0 ? '_' : '|';
        }
    }
}

// Printing digits array that is created
void print_digits_array(void) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_DIGITS * 4; j++) {
            putchar(digits[i][j]);
        }
        printf("\n");
    }
}
