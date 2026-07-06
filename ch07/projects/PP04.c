#include <stdio.h>

int main() {
    char ch;

    printf("Enter phone number: ");
    scanf("% c", &ch);

    for (;ch != '\n';) {
        scanf("%c", &ch);
        if (ch == 'A' || ch == 'B' || ch == 'C') {
            putchar('2');
        } 
        if (ch == 'D' || ch == 'E' || ch == 'F') {
            putchar('3');
        }
        if (ch == 'G' || ch == 'H' || ch == 'I') {
            putchar('4');
        }
        if (ch == 'J' || ch == 'K' || ch == 'L') {
            putchar('5');
        }
        if (ch == 'M' || ch == 'N' || ch == 'O') {
            putchar('6');
        }
        if (ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S') {
            putchar('7');
        }
        if (ch == 'T' || ch == 'U' || ch == 'V') {
            putchar('8');
        }
        if (ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z') {
            putchar('9');
        }
       if (ch >= '0' && ch <= '9') {
            putchar(ch);
        }
        if (ch == '-') {
            putchar(ch);
        }
}
    return 0;
}