/*
    Author: Matt Johnson
    Subject: pointers
    Purpose: program prints date mm/dd/yyyy
    Date: 04/03/2023
*/

#include <stdio.h>
#include <stdlib.h>

struct date {

    int month;
    int day;
    int year;
};

int main(void) {

    struct date today, *date_ptr;

    date_ptr = &today;

    date_ptr -> month = 4;
    date_ptr -> day = 3;
    date_ptr -> year = 2023;

    printf("Today's date is %i/%i/%.2i.\n",
        date_ptr -> month, date_ptr -> day, date_ptr -> year);

    return 0;
}
