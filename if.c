/*
 * Author: Timothy Unkert
 * Purpose: introduce if conditional
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
    int age1, age2;
    printf("Enter your age: ");
    scanf("%d", &age1);
    printf("Enter Dean's age: ");
    scanf("%d", &age2);
    if (age1 > age2)
    {
        printf("You are older than Dean.\n");
    }
    return(0);
}