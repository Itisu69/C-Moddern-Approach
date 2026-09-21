// Check if enterd parantheses and/or braces are nested properly

#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 100

void read_and_check(void);

int main() {
    printf("Enter parentheses/braces: ");
    read_and_check();
    return 0;
}

void read_and_check(void) {
    char stack[STACK_SIZE];
    int top = 0; // Stack pointer / number of elements currently in stack
    char ch;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch == '{' || ch == '(' || ch == '[') {
            if (top >= STACK_SIZE) {
                printf("Stack overflow\n");
                return;
            }
            stack[top++] = ch; // Push to stack and increment top
        } else if (ch == '}' || ch == ')' || ch == ']') {
            if (top == 0) {
                printf("Stack Underflow (Unmatched closing bracket)\n");
                return;
            }

            // Pop the top element and check for a match
            char open_bracket = stack[--top];
            if ((ch == '}' && open_bracket != '{') ||
                (ch == ')' && open_bracket != '(') ||
                (ch == ']' && open_bracket != '[')) {
                printf("Not nested properly\n");
                return;
            }
        }
        // Ignore other characters or spaces, or handle as needed
    }

    if (top == 0) {
        printf("Nested Properly\n");
    } else {
        printf("Not nested properly (Unmatched opening bracket)\n");
    }
}
