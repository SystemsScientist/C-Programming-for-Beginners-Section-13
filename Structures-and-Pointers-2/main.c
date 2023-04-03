/*
    Author: Matt Johnson
    Subject: pointers
    Purpose: program prints date mm/dd/yyyy
    Date: 04/03/2023
*/

#include <stdio.h>
#include <stdlib.h>

struct int_ptrs {

    int *p1;
    int *p2;
};

int main(void){

    struct int_ptrs pointers;

    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);

    return 0;
}
