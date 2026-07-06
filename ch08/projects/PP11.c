#include <stdio.h>
#include <ctype.h>

int main() {
    char ch,phone_number[15] = {0};
    int num_lenght = 0;

    printf("Enter phone number: ");

    for (int i = 0; (ch=getchar())!='\n' && i<15; i++)
    {
       switch (tolower(ch))
       {
            case 'a': case 'b': case 'c': phone_number[i] = '2'; break;
            case 'd': case 'e': case 'f': phone_number[i] = '3'; break;
            case 'g': case 'h': case 'i': phone_number[i] = '4'; break;
            case 'j': case 'k': case 'l': phone_number[i] = '5'; break;
            case 'm': case 'n': case 'o': phone_number[i] = '6'; break;
            case 'p': case 'q': case 'r': case 's': phone_number[i] = '7'; break;
            case 't': case 'u': case 'v': phone_number[i] = '8'; break;
            case 'w': case 'x': case 'y': case 'z': phone_number[i] = '9'; break;
            default: phone_number[i] = ch;
       }
       num_lenght++;
    }

    for (int i = 0; i < num_lenght; i++)
    {
        printf("%c",phone_number[i]);
    }
    
    
    return 0;
}