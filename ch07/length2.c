// even sorter version of length.c 

#include <stdio.h>

int main() {
    int len = 0;

    printf("Enter a message: ");
    while (getchar() != '\n') {
        len++;
    }
    printf("Length is %d",len);
    return 0;
}