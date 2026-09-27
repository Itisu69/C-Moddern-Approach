#include "word.h"
#include <stdio.h>

/*
 * read_char: Reads a single character,and using it instead of getchar() to
 * process \n and tab as spaces
 */

int read_char(void) {

    /* getchar() returns int value, not char. Also EOF is returned by getchar()
     * as it is type int */
    int ch = getchar();
    if (ch == '\n' || ch == '\t') {
        return ' ';
    }
    return ch;
}

void read_word(char *word, int len) {
    int ch, position = 0;

    /* Skipping over spaces */
    while ((ch = read_char()) == ' ')
        ;

    /* reading until space or EOF */
    while (ch != ' ' && ch != EOF) {
        if (position < len) {
            word[position++] = ch;
        }
        ch = read_char();
    }
    word[position] = '\0';
}
