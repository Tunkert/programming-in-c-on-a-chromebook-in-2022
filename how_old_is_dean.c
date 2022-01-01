/*
 * Author: Timothy Unkert
 * Purpose: create value for Dean's age, compare to your thoughts
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
    int deans_age = 41;
    int how_old;
    printf("How old is Dean in the last season of Supernatural? ");
    scanf("%d", &how_old);
    if(how_old == deans_age)
    {
        printf("You are correct!\n");
    }
    return(0);
}