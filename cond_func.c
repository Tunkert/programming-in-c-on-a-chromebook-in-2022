/*
 * Author: Timothy Unkert
 * Purpose: Demo conditional in function
 * Copyright 2022
 */

#include <stdio.h>

void deans_age(int season);  // function prototype

int main()
{
    int season;
    printf("Enter a season of Supernatural: ");
    scanf("%d", &season);
    deans_age(season);
    return(0);
}

void deans_age(int season)
{
    if( season < 16 )
    {
        printf("Dean's age in season %d is %d.\n", season, 25 + season);
    } else
    {
        printf("You entered an invalid season!\n");
    }
}
