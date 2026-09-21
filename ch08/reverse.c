#include <stdio.h>

#define N 10

int main() {
    int a[N], i;
    printf("Enter %d integers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    printf("In Reverse order: ");
    for (int i = N - 1; i >= 0; i--) {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}
