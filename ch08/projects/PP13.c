#include <stdio.h>

int main() {
    char first_name,last_name[20],ch;
    int name_length=0;

    printf("Enter a first and last name: ");
    scanf(" %c", &first_name);

    while ((ch=getchar())!=' ')
    {
        ;
    }

    for (int i = 0; i < 20 && (ch=getchar())!='\n'; i++)
    {
        last_name[i] = ch;
        name_length++;
    }

    printf("You entered the name: ");

    for (int i = 0; i < name_length && last_name[i]!='\n'; i++)
    {
        printf("%c",last_name[i]);
    }
    
    printf(", %c",first_name);
    
    return 0;
}