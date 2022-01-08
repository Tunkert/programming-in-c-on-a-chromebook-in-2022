/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate a structure array in C.
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    struct character
    {
        char f_name[20];
        char l_name[20];
        int age;
    };

    struct character sup_char[3];

    int x;

    for(x = 0; x < 3; x++)
    {
        printf("Enter the first name of a character on Supernatural: ");
        scanf("%s", sup_char[x].f_name);
        printf("Enter the last name of the same character on Supernatural: ");
        scanf("%s", sup_char[x].l_name);
        printf("Enter the age of this character: ");
        scanf("%d", &sup_char[x].age);
    }

    for(x = 0; x < 3; x++)
    {
        printf("%s %s is a character on Supernatural who is %d years old!\n",
                sup_char[x].f_name, sup_char[x].l_name, sup_char[x].age);
    }
    return(0);
}
