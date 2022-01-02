/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate nicer return in function
 * Copyright 2022
 */

#include <stdio.h>

int deans_age(int season);  // function prototype

int main()
{
    int season, age;
    printf("Enter the season of Supernatural: ");
    scanf("%d", &season);
    age = deans_age(season);
    printf("Dean is %d in season %d of Supernatural!\n", age, season);
    return(0);
}

int deans_age(int season)
{
    return 25 + season;
}
