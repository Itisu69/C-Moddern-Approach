#include <stdio.h>
#include <ctype.h>

int main()
{
    char f_word[20] = {0}, s_word[20] = {0};
    char letters[26] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
        'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
        'u', 'v', 'w', 'x', 'y', 'z'};

    int letters_seen[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                            0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                            0, 0, 0, 0, 0, 0};

    printf("Enter first word: ");
    for (int i = 0; i < 20; i++)
    {
        scanf("%c", &f_word[i]);

        f_word[i] = tolower(f_word[i]);
        if (f_word[i] == '\n')
        {
            break;
        }
    }

    printf("Enter second word: ");
    for (int i = 0; i < 20; i++)
    {
        scanf("%c", &s_word[i]);
        s_word[i] = tolower(s_word[i]);
        if (s_word[i] == '\n')
        {
            break;
        }
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 26; j++)
        {

            if (f_word[i] == letters[j])
            {
                if (f_word[i] >= 'a' && f_word[i] <= 'z')
                {

                    letters_seen[j] += 1;
                }
                else continue;
            }
            if (s_word[i] == letters[j])
            {
                if (s_word[i] >= 'a' && s_word[i] <= 'z')
                {

                    letters_seen[j] -= 1;
                }
                else continue;
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (letters_seen[i] > 0)
        {
            printf("The word is not anagram");
            break;
        }
        else
            printf("The word is anagram");
            break;
    }

    return 0;
}
