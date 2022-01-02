/*
 * Author: Timothy Unkert
 * Purpose: Allow user to input season & interact w/ function
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
    printf("Dean is %d years old in season %d of Supernatural!\n", age, season);
    return(0);
}

int deans_age(int season)
{
    int result, initial_age;
    initial_age = 25;
    result = initial_age + season;
    return result;
}
