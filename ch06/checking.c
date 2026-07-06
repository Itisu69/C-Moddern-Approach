#include <stdio.h>

int main()
{
    int cmd;
    float balance = 0.0f,credit, debit;

    printf("***ACME checkbook-balancing program***\n");
    printf("Commands: 0 to clear,1 to credit,2 to debit,3 to check balance and 4 to exit\n\n");

    for(;;){
        printf("Enter Command:");
        scanf("%d",&cmd);

        switch (cmd) {
        case 0:
                balance = 0.0f; break;
            case 1:
                printf("Etner amount of credit: ");
                scanf("%f",&credit);

                balance+=credit;break;
            case 2:
                printf("Enter amount of debit: ");
                scanf("%f",&debit);
                balance-=debit;break;
            case 3:
                printf("Current Balance: %.2f\n",balance);
                break;
            case 4:
                return 0;
            default :
                    printf("Commands: 0 to clear,1 to credit,2 to debit,3 to check balance and 4 to exit\n\n");
                    break;

        }
    }
  
}
