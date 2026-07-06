#include <stdio.h>

size_t my_strlen(const char *s);

int main()
{ 
    char string[] = "So this is an example of how this function works";

    int len_of_string = my_strlen(string);
    printf("%d", len_of_string);
    return 0;
}

size_t my_strlen(const char *s)
{
    // size_t n;

    // for (n = 0; *s != '\0'; s++)
    //     n++;

    // to condense this function
    // size_t n = 0;
    // for ( ; *s != '\0'; s++)
    //     n++;
    
    // further 
    // *s != '\0' is same as *s != 0 bcz int value of the null char is 0
    // but *s != 0 is the same as testing *s; both are true if *s is not equal
    // to 0
    // size_t n = 0;
    // for ( ; *s; s++)
    //     n++;
    // return n;

    // here, it's possible to increment s and *s in the same expression
    // and replacing for with while loop
    // size_t n = 0;
    // while (*s++)
    //     n++;
    // return n;

    // now making this consised version run faster
    const char *p = s;
    while (*s)
        s++;
    return s - p;

    /* This version of strlen computes the length of the string by locating the 
    the position of the null char, then subtracting from it the position of the 
    first char in the string*/

    /* The improvement in speed comes from not having to increment n inside the 
    while loop*/

    /* Note the appearence of word const in the declaration of p, btw; without 
    it, the compiler would notice that assigning s to p places string that s 
    pointst to at risk*/

}
