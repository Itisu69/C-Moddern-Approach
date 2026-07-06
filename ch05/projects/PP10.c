#include <stdio.h>

int main() {
    int num;

    printf("Enter two digit number: ");
    scanf("%2d", &num);

    int last_digit = num % 10;
    num/=10;
    int first_digit = num % 10;

    switch (first_digit){
        case 1:
            switch (last_digit){
                case 0: printf("Ten"); return 0;
                case 1: printf("Eleven"); return 0;
                case 2: printf("Twelve"); return 0;
                case 3: printf("Thirteen"); return 0;
                case 4: printf("Fourteen"); return 0;
                case 5: printf("Fifteen"); return 0;
                case 6: printf("Sixteen"); return 0;
                case 7: printf("Seventeen"); return 0;
                case 8: printf("Eighteen"); return 0;
                case 9: printf("Nineteen"); return 0;
            }
        case 2: printf("Twenty-"); break;
        case 3: printf("Thirty-"); break;
        case 4: printf("Forty-"); break;
        case 5: printf("Fifty-"); break;
        case 6: printf("Sixty-"); break;
        case 7: printf("Seventy-"); break;
        case 8: printf("Eighty-"); break;
        case 9: printf("Ninety-"); break;
    }

    switch (last_digit){
        case 1: printf("One\n"); break;
        case 2: printf("Two\n"); break;
        case 3: printf("Three\n"); break;
        case 4: printf("Four\n"); break;
        case 5: printf("Five\n"); break;
        case 6: printf("Six\n"); break;
        case 7: printf("Seven\n"); break;
        case 8: printf("Eight\n"); break;
        case 9: printf("Nine\n"); break;
    }
    return 0;
}