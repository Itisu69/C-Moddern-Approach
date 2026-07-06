#include <stdio.h>
#include <ctype.h>

#define MSG_LENGTH 80

int main() {
    char em[MSG_LENGTH],mtbe[MSG_LENGTH];
    int shift_amount = 0;

    printf("Enter message to be encrypted: ");
    for (int i = 0; i < MSG_LENGTH; i++)
    {
        scanf("%c", &mtbe[i]);
        if (mtbe[i] == '\n')
        {
            break;
        }
        
    }
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    for (int i = 0; i < MSG_LENGTH; i++)
    {
        if (mtbe[i] >= 'A' && mtbe[i] <= 'Z')
        {
            em[i] = ((mtbe[i] - 'A') + shift_amount) % 26 + 'A';
        }
        else if (mtbe[i] >= 'a' && mtbe[i] <= 'z')
        {
            em[i] = ((mtbe[i] - 'a') + shift_amount) % 26 + 'a';
        }
        else em[i] = mtbe[i];
    }
    
    printf("Encrypted message: ");
    for (int i = 0; i < MSG_LENGTH && em[i] != '\n'; i++)
    {
        printf("%c",em[i]);
    }
   
    return 0;
}