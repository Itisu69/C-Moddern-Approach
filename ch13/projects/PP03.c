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
    const char *rank_code[] = {"Two of", "Three of", "Four of", "Five of", "Six of",
                               "Seven of", "Eight of", "Nine of", "Ten of", "Jack of",
                               "Queen of", "King of", "Ace of"};
    const char *suit_code[] = {" Clubs", " Diamonds", " Hearts", " Spades"};

    srand((unsigned)time(NULL));

    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand:\n");
    while (num_cards > 0)
    {
        suit = rand() % NUM_SUITS; // Picks a random suit
        rank = rand() % NUM_RANKS; // picks a random rank

        if (!in_hand[suit][rank]) // equivalent to if(in_hand[suit][rank] == false)
        {
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %s%s\n", rank_code[rank], suit_code[suit]);
        }
    }
    printf("\n");

    return 0;
}