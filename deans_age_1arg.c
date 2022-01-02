/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate one argument passed into a function
 * Copyright 2022
 */

#include <stdio.h>

int deans_age(int season); // function prototype

int main()
{
    int season, age;
    season = 7;
    age = deans_age(season);
    printf("Dean is %d in season %d!\n", age, season);
}

int deans_age(int season)
{
    int initial_age, result;
    initial_age = 26;
    result = initial_age + season;
    return result;
}
