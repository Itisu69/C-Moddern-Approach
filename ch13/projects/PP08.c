#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word);

const int scrabble_values[26] = {
    /*   A  B  C  D   E  F  G  H  I  J  K  L  M   */
    1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
    /*   N  O  P  Q   R  S  T  U  V  W  X  Y  Z   */
    1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    char word[50];

    printf("Enter a word: ");
    scanf("%s", word);

    printf("Scrabble value: %d\n", compute_scrabble_value(word));

    return 0;
}

int compute_scrabble_value(const char *word)
{
    int total = 0;
    const char *p = word;

    while (*p)
    {
        total += scrabble_values[toupper(*p++) - 'A'];
    }

    return total;
}