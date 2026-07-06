#include <stdio.h>

int main() {
    int letters=0,words=0;
    char c;
    printf("Enter a sentence: ");
    

    while ((c=getchar())  !='\n') {
       if (c == ' ') {
           words++;
       } else {
        letters++;
       }
    }
    words++;

    printf("Average words length: %.2f",(float) letters/words);
    return 0;
}