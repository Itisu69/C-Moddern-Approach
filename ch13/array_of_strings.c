#include <stdio.h>

int main() {

    // this is how a ragged-array is created
    // the secret is to create an array whose elements are pointers to strings
    char *planets[] = {"Mercury","Venus","Earth",
                        "Mars","Jupiter","Saturn",
                        "Uranus","Neptune","Pluto",};
    // each element of planets is a pointer to a null-terminated string. There 
    // are no wasted chars in the strings

    /* To access one of the planet names, all we need to do is subscript the 
    planets array. Because of the relationship between pointers and arrays
    accessing a char in a planet name is done in the same way as accessing an 
    element of 2D array*/

    /* for example, to search the planets array for strings begining with the 
    letter 'M'*/
    for (int i = 0; i < 9; i++)
    {
        if (planets[i][0] == 'M')
            printf("%s begins with M\n", planets[i]);
    }
    
    return 0;
}