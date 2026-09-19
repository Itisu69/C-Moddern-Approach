// Writing a program that evaluates an expression
// 
// Enter an expression: 1+2.5+3
// Value of expression: 10.5
//
// Operands are float
// Operators are evaluated from left to right (There is no precedence between them)

#include <stdio.h>

int main() {
    float result, operand;
    char operator;

    printf("Enter an expression: ");
    scanf("%f", &result);

    while((operator = getchar()) != '\n'){

        scanf("%f", &operand);

        switch(operator) {
            case '+' : result += operand; break;
            case '-' : result -= operand; break;
            case '*' : result *= operand; break;
            case '/' : result /= operand; break;
        }
    }

    printf("Value of Expression: %.2f", result);

    return 0;
}
