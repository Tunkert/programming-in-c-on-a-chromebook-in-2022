/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate and
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
    const int deans_age = 41;
    int age;
    printf("How old was Dean in the last season of Supernatural? ");
    scanf("%d", &age);
    if ( age >= 37 && age <= 45 )
    {
        printf("You are in the ballpark!\n");
    } else
    {
        printf("Not even close!\n");
    }
    return(0);
}