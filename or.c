/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate or operator
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
    const int deans_age = 41;
    int age;
    printf("How old was Dean in the last season of Supernatural? ");
    scanf("%d", &age);
    if (age == 41 || age == 40 || age == 42)
    {
        printf("Close enough!\n");
    } else
    {
        printf("Someone needs to watch more Supernatural!\n");
    }
    return(0);
}