#include <stdio.h>

int main()
{
    char sentence[100];
    char ch, terminator = ' ';
    char *p = sentence; // Pointer to track input and current position
    char *word_end, *q; // Pointers to help identify and print words

    printf("Enter a sentence: ");

    // Step 1: Read characters one by one using pointer p
    while (p < sentence + 100)
    {
        ch = getchar();

        if (ch == '\n')
        {
            break;
        }
        if (ch == '.' || ch == '?' || ch == '!')
        {
            terminator = ch;
            break;
        }

        *p = ch; // Store character at current pointer address
        p++;     // Move pointer to next memory location
    }

    printf("Reversal of sentence: ");

    // Step 2: Search backward through the array
    p--; // Move p back to the last character stored

    while (p >= sentence)
    {
        // Skip any trailing spaces
        while (p >= sentence && *p == ' ')
        {
            p--;
        }

        word_end = p;

        // Find the beginning of the current word
        while (p >= sentence && *p != ' ')
        {
            p--;
        }

        // Print the word found using a helper pointer q
        for (q = p + 1; q <= word_end; q++)
        {
            putchar(*q);
        }

        // Add a space between words
        if (p >= sentence)
        {
            putchar(' ');
        }
    }

    // Step 3: Print the terminating character
    if (terminator != ' ')
    {
        putchar(terminator);
    }
    printf("\n");

    return 0;
}