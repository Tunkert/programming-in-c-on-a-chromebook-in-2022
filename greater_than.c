/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate greater than operator
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
    const int age = 41;
    int deans_age;
    printf("How old is Dean in the last season of Supernatural? ");
    scanf("%d", &deans_age);
    if (deans_age > age)
    {
        printf("Dean was younger than you think.\n");
    }
    return(0);
}