#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

// The explanation of the game is provided below before declaring functions.

int main(void) {
    // Seeding the random number generator
    srand((unsigned int)time(NULL));
    int wins = 0, loses = 0, games = 0;
    char player_choice;

    printf("\n==========Welcome========\n");
    printf("This is the game of Craps, please enter your choice if you wanna "
           "play the game(Y/N): ");
    scanf("%c", &player_choice);

    if (player_choice == 'y' || player_choice == 'Y') {
        printf("ALRIGHTYYYYYYYYYY!!! THE GAME BEGINS NOW (GOOD LUCK!)\n");

        player_choice = ' ';

        // Loop will continue till player chooses not to play anymore
        while (true) {
            // Calling play_game() function and storing its result in result
            // variable
            bool result = play_game();

            games++;
            if (result) {
                wins++;
            } else {
                loses++;
            }
            printf("\nPlay again (y/n)? ");
            scanf(" %c", &player_choice);
            if (player_choice == 'n' || player_choice == 'N') {
                break;
            }
        }

        // Showinig the final score
        printf("\n===========Final Score===========\n");
        printf("Games played: %d\n", games);
        printf("Wins: %d\tLoses: %d\n", wins, loses);

    } else {
        printf("Ehhhhh Okkayyyy, It's fineeeeeeeeee if you don't wanna play "
               "(I'm gonna kill you!!) \n");
    }
    return 0;
}

/* ===================== EXPLANATION OF THE GAME OF CRAPS  =====================
 *
 * Craps is played with two dice. On the first roll, the player wins if the sum
 * of the dice is 7 or 11. The player loses if the sum is 2, 3 or 12, Any other
 * roll is called "points", and the game continues. On each subsequent roll,
 * the player wins if he/she rolls the points again, but if they roll 7 they
 * lose
 *
 * */

// The explanation above is enough to understand these two functions :)

int roll_dice(void) {
    int random_roll = (rand() % 6) + 1;
    return random_roll;
}

bool play_game(void) {
    int first_roll = roll_dice() + roll_dice();
    printf("\nYou rolled: %d\n", first_roll);

    if (first_roll == 7 || first_roll == 11) {
        printf("You Win!\n");
        return true;
    } else if (first_roll == 12 || first_roll == 2 || first_roll == 3) {
        printf("You Lose!\n");
        return false;
    }

    int points = first_roll;
    printf("Your points: %d\n", points);
    while (true) {
        int rolled = roll_dice() + roll_dice();
        printf("You rolled: %d\n", rolled);

        if (rolled == points) {
            printf("You Win!\n");
            return true;
        } else if (rolled == 7) {
            printf("You lose!\n");
            return false;
        }
    }
}
