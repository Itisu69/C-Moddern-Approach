//Example that shows how TEST macro might work

#include <stdio.h>

#define TEST(condition, ...) ((condition)? \
    printf("Passed Test: %s\n", #condition): \
    printf(__VA_ARGS__)) 

int main() {
    int voltage = 20, max_voltage = 120;

    TEST(voltage <= max_voltage,
        "Voltage %d exceeds %d\n",voltage, max_voltage);
         
    voltage = 125;
    TEST(voltage <= max_voltage,
        "Voltage %d exceeds %d\n",voltage, max_voltage);
    return 0;
}