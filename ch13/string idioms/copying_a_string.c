#include <stdio.h>

char *my_strcat1(char *s1, const char *s2);
char *my_strcat2(char *s1, const char *s2);

int main()
{
    // 1. Basic Concatenation
    printf("---- Test 1: Basic Concatenation ----\n");
    char t1_a[50] = "Hello ";
    char t1_b[] = "World";
    my_strcat1(t1_a, t1_b);
    printf("v1: %s\n", t1_a);

    char t1_c[50] = "Hello ";
    my_strcat2(t1_c, t1_b);
    printf("v2: %s\n\n", t1_c);


    // 2. Concatenating Empty String
    printf("---- Test 2: Empty s2 ----\n");
    char t2_a[50] = "Hello";
    char t2_b[] = "";
    my_strcat1(t2_a, t2_b);
    printf("v1: %s\n", t2_a);

    char t2_c[50] = "Hello";
    my_strcat2(t2_c, t2_b);
    printf("v2: %s\n\n", t2_c);


    // 3. First String Empty
    printf("---- Test 3: Empty s1 ----\n");
    char t3_a[50] = "";
    char t3_b[] = "Start";
    my_strcat1(t3_a, t3_b);
    printf("v1: %s\n", t3_a);

    char t3_c[50] = "";
    my_strcat2(t3_c, t3_b);
    printf("v2: %s\n\n", t3_c);


    // 4. Multiple Concatenations
    printf("---- Test 4: Multiple Concatenations ----\n");
    char t4_a[100] = "C ";
    my_strcat1(t4_a, "is ");
    my_strcat1(t4_a, "fun");
    printf("v1: %s\n", t4_a);

    char t4_b[100] = "C ";
    my_strcat2(t4_b, "is ");
    my_strcat2(t4_b, "fun");
    printf("v2: %s\n\n", t4_b);


    // 5. Special Characters
    printf("---- Test 5: Special Characters ----\n");
    char t5_a[50] = "Line1\n";
    char t5_b[] = "Line2\tTabbed";
    my_strcat1(t5_a, t5_b);
    printf("v1:\n%s\n", t5_a);

    char t5_c[50] = "Line1\n";
    my_strcat2(t5_c, t5_b);
    printf("v2:\n%s\n\n", t5_c);


    // 6. Buffer Size Edge Case (Unsafe)
    printf("---- Test 6: Buffer Overflow Risk ----\n");
    char t6_a[10] = "Hello";
    char t6_b[] = "World";
    my_strcat1(t6_a, t6_b); // Undefined behavior if overflow occurs
    printf("Result (unsafe): %s\n", t6_a);

    return 0;
}

// first version of strcat, lengthy one
char *my_strcat1(char *s1, const char *s2)
{
    char *p = s1;

    while (*p != '\0')
        p++;

    while (*s2 != '\0')
    {
        *p = *s2;
        p++;
        s2++;
    }
    *p = '\0';
    return s1;
}

// condensing the function written above
char *my_strcat2(char *s1, const char *s2)
{
    char *p = s1;

    while (*p)
        p++;
    
    while (*p++ = *s2++) // Idiom
        ;

    /*This expression copies a char from where s2 points to where p points, after
    thar both are incremented*/

    /*what causes loop to terminate: Since the primary operator inside the () is 
    assignment, the while tests the value of the assignment - the char that was 
    copied. All chars except '\0' test true, so the loop won't terminate until
    it has been copied*/

    /*And since the loop terminates after the assignment, we dont need a separate
    statement to put a '\0' at the end of the new string*/
    return s1;
}