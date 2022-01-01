/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate greater than or equal to operator
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
    const int deans_age = 41;
    int age;
    printf("How old is Dean in the last season of Supernatural? ");
    scanf("%d", &age);
    if (age >= deans_age)
    {
        printf("Your age was not lower than Dean's age!\n");
    }
    return(0);
}