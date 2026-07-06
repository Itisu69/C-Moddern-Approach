#include <stdio.h>

int main() {
    int grade;

    printf("Enter numerical grade: ");
    scanf("%3d", &grade);

    int first_digit = grade / 10;

    printf("Letter grade: ");
    switch (first_digit){
        case 9: case 10: printf("A\n"); break;
        case 8: printf("B\n"); break;
        case 7: printf("C\n"); break;
        case 6: printf("D\n"); break;
        default:
            printf("F");
    }
    return 0;
}