#include <stdio.h>
#include <stdbool.h> // bool,true, false are defined in this library

int main() {
    bool digit_seen[10] = {false}; // Bool data type is used to assign "false" to array
                //other remaining elements of the array are 0, which are "false" (as 1 is true) which we'll see later
    int digit;
    long n;

    printf("Enter a digit: ");
    scanf("%ld", &n); // %ld is used for long int data type

    while (n>0) {
        digit = n%10; // last digit of n is assigned to digit
        
        if (digit_seen[digit]) 
        {
            break;
        }
        digit_seen[digit] = true;
        n/=10;
    }

    if (n>0)
    {
        printf("Repeated number.");
    }
    else printf("No repeated number.");
    
        
    return 0;
}