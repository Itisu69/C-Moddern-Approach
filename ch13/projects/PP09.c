#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SENTENCE_LEN 100
int compute_vowel_counts(const char *sentence);

int main()
{
    char sentence[SENTENCE_LEN];
    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence); // Read until newline
    printf("Number of vowels: %d\n", compute_vowel_counts(sentence));
    return 0;
}

int compute_vowel_counts(const char *sentence)
{
    const char *p = sentence;
    int vowel_count = 0;
    while (*p)
    {
        switch (toupper(*p++))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            vowel_count++;
            break;
        }
    }
    return vowel_count;
}
