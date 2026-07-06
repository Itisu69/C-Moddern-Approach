#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define WORD_LEN 20

bool are_anagrams(const char *word1, const char *word2);

int main()
{
    char word1[WORD_LEN], word2[WORD_LEN];

    printf("This program checks if two words are anagrams or not\n");

    printf("Enter first word: ");
    scanf(" %[^\n]", word1);
    printf("Enter second word: ");
    scanf(" %[^\n]", word2);

    if (are_anagrams(word1, word2))
        printf("Words are anagrams\n");
    else
        printf("Words are not anagrams\n");
    return 0;
}
bool are_anagrams(const char *word1, const char *word2)
{
    int letters_count[26] = {0};
    char ch;

    while (*word1)
    {
        ch = tolower(*word1);
        if (ch >= 'a' && ch <= 'z')
            letters_count[ch - 'a']++;
        word1++;
    }

    while (*word2)
    {
        ch = tolower(*word2);
        if (ch >= 'a' && ch <= 'z')
            letters_count[ch - 'a']--;
        word2++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (letters_count[i] != 0)
            return false;
    }
    return true;
}