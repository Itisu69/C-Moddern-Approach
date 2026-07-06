#include <stdio.h>

int main(void){
    int num,even_squares;
    
    printf("Enter a non-negative integer: ");
    scanf("%d",&num);

    for(even_squares=2; even_squares*even_squares <= num;even_squares+=2){
        printf("%d\n",even_squares*even_squares);
    }

    return 0;
}