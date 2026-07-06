#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 // Maximum number of reminders
#define MSG_LEN 60    // max length of reminder msg
#define DAY_LEN 2
#define TIME_LEN 6

int read_line(char a[], int n);

int main()
{
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[DAY_LEN + TIME_LEN + 1], msg_str[MSG_LEN + 1];
    int day, i, j, num_remind = 0, hour, minutes;

    for (;;)
    {
        if (num_remind == MAX_REMIND)
        {
            printf("---No space left ---\n");
            break;
        }

        printf("Enter day, time of day and reminder: ");
        scanf("%2d", &day);

        if (day == 0)
            break;
        else if (day < 0 || day > 31)
        {
            printf("Day out of bound of the month!!!\n");
            while (getchar() != '\n')
                ; // Flush buffer
            continue;
        }
        scanf(" %d: %d", &hour, &minutes);
        read_line(msg_str, MSG_LEN);
        sprintf(day_str, "%2d %2.2d:%.2d", day, hour, minutes);

        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j - 1]);

        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);
    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
    {
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}

// input sample
// 5 09:30 Meeting with team
// 12 14:00 Doctor appointment
// 1 08:00 Morning workout
// 25 18:45 Dinner with friends
// 3 11:15 Project discussion

// 10 18:00 Evening walk
// 10 09:00 Morning meeting
// 10 12:30 Lunch
// 0