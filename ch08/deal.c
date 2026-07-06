#include <stdbool.h>
#include <stdio.h>
#include <time.h>   // It has 'time' keyword
#include <stdlib.h> // It has 'rand' and 'srand' keyword

#define NUM_SUITS 4
#define NUM_RANKS 13

int main()
{
    bool in_hand[NUM_SUITS][NUM_SUITS] = {false};
    int num_cards, rank, suit;
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
    const char suit_code[] = {'c', 'd', 'h', 's'};

    srand((unsigned)time(NULL));

    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand: ");
    while (num_cards > 0)
    {
        suit = rand() % NUM_SUITS; // Picks a random suit
        rank = rand() % NUM_RANKS; // picks a random rank

        if (!in_hand[suit][rank]) // equivalent to if(in_hand[suit][rank] == false)
        {
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c", rank_code[rank], suit_code[suit]);
        }
    }
    printf("\n");

    return 0;
}