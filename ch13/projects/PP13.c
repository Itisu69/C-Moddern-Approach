#include <stdio.h>
#include <ctype.h>

#define MSG_LENGTH 80 + 1

void encrypt(char *message, int shift);

int main()
{
    char mtbe[MSG_LENGTH];
    int shift_amount = 0;

    printf("Enter message to be encrypted: ");
    scanf("%[^\n]", mtbe);

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    encrypt(mtbe, shift_amount);

    return 0;
}

void encrypt(char *message, int shift)
{
    char *p = message;
    shift = shift % 26;

    printf("Encrypted message: ");
    for (; *p; p++)
    {
        if (*p >= 'A' && *p <= 'Z')
        {
            printf("%c", (*p - 'A' + shift + 26) % 26 + 'A');
        }
        else if (*p >= 'a' && *p <= 'z')
        {
            printf("%c", (*p - 'a' + shift + 26) % 26 + 'a');
        }
        else
            printf("%c", *p);
    }
}