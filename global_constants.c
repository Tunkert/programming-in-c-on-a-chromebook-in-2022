/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate global constants
 * Copyright 2022
 */

#include <stdio.h>

#define AGE 25

/* prototypes */
void deans_age(int season);
void sams_age(int season);

int main()
{
    int season;
    printf("What season of Supernatural are you interested in? ");
    scanf("%d", &season);
    deans_age(season);
    sams_age(season);
    return(0);
}

void deans_age(int season)
{
    printf("Dean is %d years old in season %d!\n", AGE + season, season);
}

void sams_age(int season)
{
    printf("Sam is %d years old in season %d!\n", AGE - 4 + season, season);
}
