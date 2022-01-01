/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate less than operator
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
    const int deans_age = 41;
    int age;
    printf("How old is Dean in the last season of Supernatural? ");
    scanf("%d", &age);
    if (age < deans_age)
    {
        printf("Dean is older than you think!\n");
    }
    return(0);
}