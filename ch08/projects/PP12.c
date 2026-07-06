#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch, alph[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                         'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
                         'u', 'v', 'w', 'x', 'y', 'z'};
    int score = 0, points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8,
                                 5, 1, 3, 1, 1, 3, 10, 1, 1, 1,
                                 1, 4, 4, 8, 4, 10};

    printf("Etner a word: ");

    for (int i = 0; (ch = getchar()) != '\n' && i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (tolower(ch) == alph[j])
            {
                score += points[j];
            }
        }
    }

    printf("Your score is: %d",score);

    return 0;
}