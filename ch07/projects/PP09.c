#include <stdio.h>
#include <ctype.h>

int main() {
    int h, m;
    char c;
    printf("Enter a 12-hour time (hh:mm am/pm): ");
    scanf("%d:%d %c", &h, &m, &c);
    c = tolower(c);

    if (c == 'p' && h != 12) {
        h = h + 12;
    } else if (c == 'a' && h == 12) {
        h = 0;
    }
    printf("You entered the time %02d:%02d in 24-hour format.\n", h, m);
    
    return 0;
}