//Program to print message after BIFF filterering it

#include <stdio.h>
#include <ctype.h>

int main()
{
    char cha, certain_char[6] = {'A', 'B', 'E', 'I', 'O', 'S'}, message[500], biff[6] = {'4', '8', '3', '1', '0', '5'};
    int i = 0, j = 0,k =0;

    printf("Enter a message: ");

    while (1)
    {
        scanf("%c", &cha);
        cha = toupper(cha);
        k=0;
        while (k<6)
        {
            if (cha == certain_char[k])
            {
                cha = biff[k];
            }
            k++;
        }
        
        message[i] = cha;
        if (cha == '\n')
        {
            break;
        }
        i++;
    }

    i = 0;

    for (;;)
    {

       printf("%c",message[j]);
        j++;
        if (message[j] == '\n')
        {
            printf("!!!!!!!!");
            break;
        }
    }

    return 0;
}
