//Reads length of a message including spaces and punctuation
//not the \n 

#include <stdio.h>

int main() {
    int len = 0;
    char ch;

    printf("Enter a message: ");
    ch = getchar();
    while (ch != '\n') {
        len++;
        ch = getchar();
    }

    printf("Your message has %d character(s)\n",len);

    return 0;
}