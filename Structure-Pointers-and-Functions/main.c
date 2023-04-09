/*
    Author: Matt Johnson
    Subject: pointers
    Purpose: program declares and initializes a structure
    Date: 04/03/2023

    Instructions:

    write a program that creates a structure pointer and
    passes it to a function

        1. create a structure named item with the following
           members

            - item_name - pointer
            - quantity - int
            - price - float
            - amount - float (stores quantity * price)

        2. create a function named read_item that takes
           a structure pointer of type item as a parameter

           - this function should read in (from the user)
             a product name, price, and quantity
           - the contents read in should be stored in the
             passed in structure to the function

        3. create a function named print item that takes
           as a parameter a structure pointer of type item

           - function prints the contents of the parameter

        4. the main function should declare an item and a
           pointer to the item

           - you will need to allocate memory for the
             item_name pointer
           - the item pointer should be passed into both
             the read and print item functions
*/

#include <stdio.h>
#include <stdlib.h>

struct item {

    char *item_name;
    int quantity;
    float price;
    float amount;
};

void read_item(struct item *i);
void print_item(struct item *i);

int main(void) {

    struct item itm;
    struct item *pitem;

    pitem = &itm;

    pitem -> item_name = (char *) malloc(30 * sizeof(char));

    if(pitem == NULL)
        exit(-1);

    // read item
    read_item(pitem);

    // print item
    print_item(pitem);

    free(pitem -> item_name);

    return 0;
}

void read_item(struct item *i) {

    printf("Enter product name: ");
    scanf("%s", i -> item_name);

    printf("Enter price: ");
    scanf("%f", &i -> price);

    printf("Enter quantity: ");
    scanf("%d", &i -> quantity);

    i -> amount = (float)i -> quantity * i -> price;
}

void print_item(struct item *i) {

    // print item details
    printf("\nName: %s", i -> item_name);
    printf("\nPrice: $%.2f", i -> price);
    printf("\nQuantity: %d", i -> quantity);
    printf("\nTotal Amount: $%.2f\n", i -> amount);
}
