// Modifying PP16.c of chap 8 so that it includes the following:
// void read_word(int counnts[26])
// bool equal_arraay (int counts1[26], int counts2[26])

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define N_LETTERS 26

void read_word(int connts[N_LETTERS]);
bool equal_arraay(int counts1[N_LETTERS], int counts2[N_LETTERS]);

int main(void) {

    int counts1[N_LETTERS] = {0}, counts2[N_LETTERS] = {0};

    read_word(counts1);
    read_word(counts2);

    if (equal_arraay(counts1, counts2)) {
        printf("The words are anagrams\n");
    } else {

        printf("The words are not anagrams.\n");
    }
    return 0;
}

void read_word(int counts[N_LETTERS]) {
    char c;

    printf("Enter Word: ");
    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            c = tolower(c);
            counts[c - 'a']++;
        }
    }
}

bool equal_arraay(int counts1[N_LETTERS], int counts2[N_LETTERS]) {
    bool equal = true;

    for (int i = 0; i < N_LETTERS; i++) {
        if (counts1[i] != counts2[i]) {
            equal = false;
            break;
        }
    }
    return equal;
}
