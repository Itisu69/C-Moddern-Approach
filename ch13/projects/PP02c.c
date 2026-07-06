#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 // Maximum number of reminders
#define MSG_LEN 60    // max length of reminder msg
#define DAY_LEN 2
#define MONTH_LEN 5
#define TIME_LEN 6

int read_line(char a[], int n);

int main()
{
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[MONTH_LEN + DAY_LEN + TIME_LEN + 1], msg_str[MSG_LEN + 1];
    int day, month, i, j, num_remind = 0, hour, minutes;

    for (;;)
    {
        if (num_remind == MAX_REMIND)
        {
            printf("---No space left ---\n");
            break;
        }

        printf("Enter day(in month/day format), time of day and reminder: ");
        scanf("%2d/%2d", &month, &day);

        if (day == 0 || month == 0)
            break;
        else if (day < 0 || day > 31 || month > 12 || month < 1)
        {
            printf("Error: Invalid date. Month must be 1-12 and day must be 1-31.\n");
            while (getchar() != '\n')
                ; // Flush buffer
            continue;
        }
        scanf(" %d: %d", &hour, &minutes);
        read_line(msg_str, MSG_LEN);
        sprintf(day_str, "%2d/%2d %2.2d:%.2d", month, day, hour, minutes);

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

// input sample (MM/DD HH:MM Reminder message)
// 03/15 09:30 Morning meeting
// 01/01 00:00 New year celebration
// 12/25 10:00 Christmas event
// 02/14 18:45 Valentine's dinner
// 03/10 08:15 Gym workout
// 0/0
