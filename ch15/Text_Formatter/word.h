#ifndef WORD_H
#define WORD_H

/*
 *
 * read_word: Reads the next word from the input and stroes it in word. Makes
 * word empty if no word could be read because of end-of-file. Truncates the
 * word if its length exceeds len.
 *
 * */

void read_word(char *word, int len);

#endif // !WORD_H

/*
 *
 * The WORD_H macro protects word.h from being included more than once. Although
 * word.h doesn't really need it, it's a good practice to protect all header
 * files in this way.
 *
 */
