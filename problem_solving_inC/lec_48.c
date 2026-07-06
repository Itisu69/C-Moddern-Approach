// #include <stdio.h>

// int main() {
//     int i;
//     char ch_array[3][10] = {"spike", "tom", "jerry"};
//     for(i = 0; i < 3; i++){
//     printf("\nString: %s\t adress = %u", ch_array+i, ch_array+i);
// }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <strings.h>

int factorial(int n);

int main(void)
{
    int n, found = 0;
    char master_list[5][20] = {"himanshu", "kartik", "megh"};
    char name[20];

    printf("Enter username: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 0;
    }
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < 5; i++)
    {
        if (strcasecmp(name, master_list[i]) == 0)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("\nWelcome %s", name);
        printf("\nEnter the number you want to calculate the factorial: ");
        scanf("%d", &n);

        printf("Factoral of %d is %d", n, factorial(n));
    }
    else
    {
        printf("You are not allowed");
    }
    return 0;
}

int factorial(int n)
{
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
