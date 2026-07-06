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

void print_array(char walk[10][10]);
// void generate_random_walk(char walk[10][10]);

int main()
{
    // char grid[NUM_ROWS][NUM_COLS];
    char grid[NUM_ROWS][NUM_COLS],letter;
    bool pot_move[NUM_MOVES];
    int i,row,col,pot_move_count,gen_move;

    srand((unsigned)time(NULL));

    // Filling the grid with '.'
    for (int row = 0; row < NUM_ROWS; row++)
    {
        for (int col = 0; col < NUM_COLS; col++)
        {
            grid[row][col] = '.';
        }
    }

    // generate_random_walk(grid);
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
    print_array(grid);

    return 0;
}

// void generate_random_walk(char walk[10][10])
// {
    //     int i, row = 0, col = 0, pot_move_count, gen_move;
    //     bool pot_move[NUM_MOVES];
    //     char letter;
    
    //     for (letter = 'A'; letter <= 'Z'; letter++)
//     {
//         walk[row][col] = letter;

//         for (i = 0; i < NUM_MOVES; pot_move[i] = false, i++)
//         {
//             ;
//         }
//         pot_move_count = 0;

//         if (col - 1 >= 0 && walk[row][col - 1] == EMPTY_CELL)
//         {
//             pot_move[LEFT] = true;
//             pot_move_count++;
//         }
//         if (row + 1 < NUM_ROWS && walk[row + 1][col] == EMPTY_CELL)
//         {
//             pot_move[DOWN] = true;
//             pot_move_count++;
//         }
//         if (row - 1 >= 0 && walk[row - 1][col] == EMPTY_CELL)
//         {
//             pot_move[UP] = true;
//             pot_move_count++;
//         }
//         if (col + 1 < NUM_COLS && walk[row][col + 1] == EMPTY_CELL)
//         {
//             pot_move[RIGHT] = true;
//             pot_move_count++;
//         }

//         /* Break if no moves are possible from current cell */
//         if (pot_move_count == 0)
//             break;

//         /* Generate random moves until one matches a potential move, then perform
//          * move */
//         while (true)
//         {
//             gen_move = rand() % NUM_MOVES;

//             if (pot_move[gen_move] == true)
//             {
//                 switch (gen_move)
//                 {
//                 case LEFT:
//                     col--;
//                     break;
//                 case DOWN:
//                     row++;
//                     break;
//                 case UP:
//                     row--;
//                     break;
//                 case RIGHT:
//                     col++;
//                     break;
//                 }
//                 break; /* generated move performed, break */
//             }
//             else
//             {
//                 continue; /* generated move not possible, continue */
//             }
//         }
//     }
// }

void print_array(char walk[10][10])
{
    /* Print the final grid state */
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            printf("%2c", walk[row][col]);
        }
        printf("\n");
    }
}