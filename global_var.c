/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate the use of global variables in C.
 * Copyright 2022
 */

#include <stdio.h>

void season_age(int season);

int initial_age = 25;
int sams_initial_age = 21;

int main()
{
    int season;
    printf("What season of Supernatural are you interested in? ");
    scanf("%d", &season);
    season_age(season);
    return(0);
}

void season_age(int season)
{
    printf("Dean is %d years old in season %d.\n", season + initial_age, season);
    printf("Sam is %d years old in season %d.\n", season + sams_initial_age, season);    
}
