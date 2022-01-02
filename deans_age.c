/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate function that returns something.
 * Copyright 2022
 */

#include <stdio.h>

int deans_age(int age, int season); // prototype

int main()
{
    int age, season, result;
    age = 26;
    season = 6;
    result = deans_age(age, season);
    printf("Dean's age is %d years old in season %d!\n", result, season);
    return(0);
}

int deans_age(int age, int season)
{
    int result;
    result = age + season;
    return result;
}
