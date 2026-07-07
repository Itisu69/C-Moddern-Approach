// fprintf(stderr, "Range error: index = %d\n", index);

// Write a macro named ERROR that generates the call of fprintf shown above when given a format strijng and the items
// must be displayed


#include <stdio.h>

#define ERROR(str, arg) (fprintf(stderr, (str), (arg)))

int main(void) {
    int index = 100;

    ERROR("Range error: index = %d\n", index);
}