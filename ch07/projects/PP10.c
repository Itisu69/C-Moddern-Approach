#include <stdio.h>
#include <ctype.h>

int main() {
    int i = 0;
    char c;
    printf("Enter a sentence: ");
    scanf(" %c", &c);
    c = tolower(c);
    while (c != '\n') {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            i++;
        }
        scanf("%c", &c);
        c = tolower(c);
    }

    printf("Number of vowels: %d\n", i);
    return 0;
}