#include <stdio.h>
#include <string.h>

#define MAX_SENTENCE_LENGTH 150

double compute_avg_word_length(char *sentence);

int main()
{
    char sentence[MAX_SENTENCE_LENGTH];

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);

    printf("Average length of the words in the sentence: %g\n",
           compute_avg_word_length(sentence));
    return 0;
}
double compute_avg_word_length(char *sentence)
{
    char *p = sentence;
    int num_of_words = 0, num_of_chars = 0;

    while (*p)
    {
        if (*p != ' ')
        {
            num_of_chars++;

            if (*(p + 1) == ' ' || *(p + 1) == '\0')
            {
                num_of_words++;
            }
        }
        p++;
    }

    printf("Char count: %d\n", num_of_chars);
    printf("Words count: %d\n", num_of_words);

    return num_of_words != 0 ? ((double)num_of_chars) / num_of_words : 0;
}