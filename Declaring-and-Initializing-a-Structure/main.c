/*
    Author: Matt Johnson
    Subject: pointers
    Purpose: program declares and initializes a structure
    Date: 04/03/2023

    Instructions:

    write a program that declares a structure and prints out
    its content

        1. create an employee structure with 3 members

            - name (character array)
            - hire_date (int)
            - salary (float)

        2. declare and initialize an instance of an employee
           type

        3. read in a second employee from the console and
           store it in a structure of type employee

        4. print out the contents of each employee
*/

#include <stdio.h>
#include <stdlib.h>

struct employee {

    char name[30];
    char hire_date[15];
    float salary;
};

int main(void) {

    // declare and initialize structure variable
    struct employee emp = {"Mike", "07/16/15", 76909.00f};

    printf("\nName:   %s", emp.name);
    printf("\nDate:   %s", emp.hire_date);
    printf("\nSalary: $%.2f\n", emp.salary);

    printf("\nEnter employee information: \n");
    printf("\nName: ");
    scanf("%s", emp.name);

    printf("Hire Date: ");
    scanf("%s", emp.hire_date);

    printf("Salary: ");
    scanf("%f", &emp.salary);

    printf("\nName:   %s", emp.name);
    printf("\nDate:   %s", emp.hire_date);
    printf("\nSalary: $%.2f\n", emp.salary);

    return 0;
}
