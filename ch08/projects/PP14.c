#include <stdio.h>

int main() {
    char sentence[100];
    char ch, terminator = ' '; // Initialize with a space just in case
    int i = 0, j, word_end;

    printf("Enter a sentence: ");

    // Step 1: Read characters one by one
    while (i < 100) {
        ch = getchar();
        
        // Stop if the user presses Enter or hits a terminating punctuation
        if (ch == '\n') {
            break;
        }
        if (ch == '.' || ch == '?' || ch == '!') {
            terminator = ch;
            break;
        }
        
        sentence[i] = ch;
        i++;
    }

    printf("Reversal of sentence: ");

    // Step 2: Search backward through the array
    j = i - 1; 
    while (j >= 0) {
        // Skip any trailing spaces if the user typed them before the terminator
        while (j >= 0 && sentence[j] == ' ') {
            j--;
        }
        
        word_end = j;
        
        // Find the beginning of the current word
        while (j >= 0 && sentence[j] != ' ') {
            j--;
        }

        // Print the word found
        for (int k = j + 1; k <= word_end; k++) {
            putchar(sentence[k]);
        }

        // Add a space between words, but only if there are more words to come
        if (j >= 0) {
            putchar(' ');
        }
    }

    // Step 3: Print the terminating character
    if (terminator != ' ') {
        putchar(terminator);
    }
    printf("\n");

    return 0;
}