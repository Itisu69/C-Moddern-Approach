#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time,
                         int *arrival_time);

int d1 = 480, a1 = 616, d2 = 583, a2 = 712, d3 = 679, a3 = 811, d4 = 767,
    a4 = 900, d5 = 840, a5 = 968, d6 = 945, a6 = 1075, d7 = 1140, a7 = 1280,
    d8 = 1305, a8 = 1438;

int main(void) {
    int desired_time;
    int departure_time;
    int arrival_time;
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    desired_time = hour * 60 + minute;

    find_closest_flight(desired_time, &departure_time, &arrival_time);
    printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d\n",
           departure_time / 60, departure_time % 60, arrival_time / 60,
           arrival_time % 60);
    return 0;
}

void find_closest_flight(int desired_time, int *departure_time,
                         int *arrival_time) {
    int min_delta;
    if (desired_time > d1) {
        min_delta = desired_time - d1;
    } else {
        min_delta = d1 - desired_time;
    }

    if (desired_time > d2) {
        if (desired_time - d2 < min_delta) {
            min_delta = desired_time - d2;
            *arrival_time = a2;
            *departure_time = d2;
        }
    } else if (d2 - desired_time < min_delta) {
        min_delta = d2 - desired_time;
        *arrival_time = a2;
        *departure_time = d2;
    }

    if (desired_time > d3) {
        if (desired_time - d3 < min_delta) {
            min_delta = desired_time - d3;
            *arrival_time = a3;
            *departure_time = d3;
        }
    } else if (d3 - desired_time < min_delta) {
        min_delta = d3 - desired_time;
        *arrival_time = a3;
        *departure_time = d3;
    }

    if (desired_time > d4) {
        if (desired_time - d4 < min_delta) {
            min_delta = desired_time - d4;
            *arrival_time = a4;
            *departure_time = d4;
        }
    } else if (d4 - desired_time < min_delta) {
        min_delta = d4 - desired_time;
        *arrival_time = a4;
        *departure_time = d4;
    }

    if (desired_time > d5) {
        if (desired_time - d5 < min_delta) {
            min_delta = desired_time - d5;
            *arrival_time = a5;
            *departure_time = d5;
        }
    } else if (d5 - desired_time < min_delta) {
        min_delta = d5 - desired_time;
        *arrival_time = a5;
        *departure_time = d5;
    }

    if (desired_time > d6) {
        if (desired_time - d6 < min_delta) {
            min_delta = desired_time - d6;
            *arrival_time = a6;
            *departure_time = d6;
        }
    } else if (d6 - desired_time < min_delta) {
        min_delta = d6 - desired_time;
        *arrival_time = a6;
        *departure_time = d6;
    }

    if (desired_time > d7) {
        if (desired_time - d7 < min_delta) {
            min_delta = desired_time - d7;
            *arrival_time = a7;
            *departure_time = d7;
        }
    } else if (d7 - desired_time < min_delta) {
        min_delta = d7 - desired_time;
        *arrival_time = a7;
        *departure_time = d7;
    }

    if (desired_time > d8) {
        if (desired_time - d8 < min_delta) {
            min_delta = desired_time - d8;
            *arrival_time = a8;
            *departure_time = d8;
        }
    } else if (d8 - desired_time < min_delta) {
        min_delta = d8 - desired_time;
        *arrival_time = a8;
        *departure_time = d8;
    }
}
