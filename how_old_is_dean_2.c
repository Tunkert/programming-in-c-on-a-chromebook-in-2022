/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate not equal to operator
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
    const int deans_age = 41;
    int how_old;
    printf("How old is Dean at the end of the last season of Supernatural? ");
    scanf("%d", &how_old);
    if(how_old != deans_age)
    {
        printf("You were incorrect!\n");
    }
    return(0);
}