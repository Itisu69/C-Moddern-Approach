// Checks planet names

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define NUM_PLANETS 9

bool str_equal_ignore(const char *s1, const char *s2);
int main(int argc, char *argv[])
{
    char *planets[] = {
        "Mercury",
        "Venus",
        "Earth",
        "Mars",
        "Jupiter",
        "Saturn",
        "Uranus",
        "Neptune",
        "Pluto",
    };
    int i, j;
    
    for (i = 1; i < argc; i++)
    {
        for (j = 0; j < NUM_PLANETS; j++)
        if (str_equal_ignore(argv[i], planets[j])) // Means strings are equal
        {
            printf("%s is planet %d\n", argv[i], j + 1);
            break;
        }
        if (j == NUM_PLANETS)
        printf("%s is not a planet\n", argv[i]);
    }
    return 0;
}


bool str_equal_ignore(const char *s1, const char *s2){
    for(; toupper(*s1) == toupper(*s2); s1++, s2++){
        if(!*s1)
            return true;
    }
    return false;
}
// ./planet Earth Mars Moon
// to run the program use command above in terminal