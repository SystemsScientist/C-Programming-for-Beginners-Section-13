/*
    Author: Matt Johnson
    Subject: structures (struct)
    Purpose: display data from a structure
    Date: 03/31/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    struct date {

        int month;
        int day;
        int year;
    };

    struct date today;

    today.month = 3;
    today.day = 31;
    today.year = 2023;

    printf("Today's date is: %i/%i/%.2i.\n", today.month, today.day, today.year);

    return 0;
}
