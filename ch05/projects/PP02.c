#include <stdio.h>

//Asking user to enter time in 24 hour format and presenting it in 12 hour format.

int main()
{
    int twelve_hour, twentyfour_hour, minutes;

    printf("Enter a 24-hour time(Hours:Minutes): ");
    scanf("%d:%d",&twentyfour_hour,&minutes);

    printf("Equivalent 12-hour time: ");

    switch (twentyfour_hour) {

    case 12: printf(" 12:%d PM",minutes); break;
    case 0 : printf(" 12:%d AM",minutes); break;
    case 1:  printf(" 1:%d PM",minutes); break;
    case 13: printf(" 1:%d AM",minutes); break;
    case 14:  printf(" 2:%d PM",minutes); break;
    case 2: printf(" 2:%d AM",minutes); break;
    case 15: printf(" 3:%d PM",minutes); break;
    case 3:printf(" 3:%d AM",minutes); break;
    case 16: printf(" 4:%d PM",minutes); break;
    case 4: printf(" 4:%d AM",minutes); break;
    case 17: printf(" 5:%d PM",minutes); break;
    case 5:printf(" 5:%d AM",minutes); break;
    case 18: printf(" 6:%d PM",minutes); break;
    case 6: printf(" 6:%d AM",minutes); break;
    case 19: printf(" 7:%d PM",minutes); break;
    case 7: printf(" 7:%d AM",minutes); break;
    case 20: printf(" 8:%d PM",minutes); break;
    case 8: printf(" 8:%d AM",minutes); break;
    case 21: printf(" 9:%d PM",minutes); break;
    case 9:printf(" 9:%d AM",minutes); break;
    case 22:printf(" 10:%d PM",minutes); break;
    case 10: printf(" 10:%d AM",minutes); break;
    case 23: printf(" 11:%d PM",minutes); break;
    case 11:printf(" 11:%d AM",minutes); break;

    }



    return 0;
    }

