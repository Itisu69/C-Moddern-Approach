#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define NUM_ROWS 10
#define NUM_COLS 10
#define EMPTY_CELL '.'

#define NUM_MOVES 4
#define LEFT 0
#define DOWN 1
#define UP 2
#define RIGHT 3

int main() {
    char grid[NUM_ROWS][NUM_COLS],letter;
    bool pot_move[NUM_MOVES];
    int i,row,col,pot_move_count,gen_move;

    srand((unsigned) time (NULL));

    //Filling the grid with '.'
    for ( row = 0; row < NUM_ROWS; row++)
    {
        for ( col = 0; col < NUM_COLS; col++)
        {
            grid[row][col] = '.';
        }
        
    }
    
    row = 0; col=0;
    for ( letter = 'A'; letter <= 'Z'; letter++)
    {
        grid[row][col]=letter;
        
        for ( i = 0; i < NUM_MOVES; pot_move[i]=false,i++)
        {
            ; 
        }
        pot_move_count=0;

        if (col-1 >= 0 && grid[row][col-1] == EMPTY_CELL) {
            pot_move[LEFT] = true;
            pot_move_count++;
        }
        if (row+1 < NUM_ROWS && grid[row+1][col] == EMPTY_CELL) {
            pot_move[DOWN] = true;
            pot_move_count++;
        }
        if (row-1 >= 0 && grid[row-1][col] == EMPTY_CELL) {
            pot_move[UP] = true;
            pot_move_count++;
        }
        if (col+1 < NUM_COLS && grid[row][col+1] == EMPTY_CELL) {
            pot_move[RIGHT] = true;
            pot_move_count++;
        }

        /* Break if no moves are possible from current cell */
        if (pot_move_count == 0)
            break;

        /* Generate random moves until one matches a potential move, then perform 
         * move */
        while (true) {
            gen_move = rand() % NUM_MOVES;

            if (pot_move[gen_move] == true) {
                switch(gen_move) {
                    case LEFT:  col--;
                                break;
                    case DOWN:  row++;
                                break;
                    case UP:    row--;
                                break;
                    case RIGHT: col++;
                                break;
                }
                break;    /* generated move performed, break */
            } else {
                continue; /* generated move not possible, continue */
            }
        }
    }
             
    /* Print the final grid state */
    for (row = 0; row < 10; row++) {
        for (col = 0; col < 10; col++) {
            printf("%2c", grid[row][col]);
        }
        printf("\n");
    }

    return 0;
}