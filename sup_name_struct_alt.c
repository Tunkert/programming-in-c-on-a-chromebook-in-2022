/*
 * Author: Timothy Unkert
 * Purpose: Define alternative way of creating a structure
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    struct character
    {
        char name[20];
        int age;
    } sup_char;

    printf("Enter the first name of the coolest character on Supernatural: ");
    scanf("%s", sup_char.name);
    printf("Enter the age of this character: ");
    scanf("%d", &sup_char.age);
    printf("You entered %s who is %d years old!\n", sup_char.name, sup_char.age);
}
