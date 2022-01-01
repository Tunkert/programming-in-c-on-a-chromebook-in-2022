/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate multiple conditionals
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
    const int deans_age = 41;
    int age;
    printf("How old is Dean in the last season of Supernatural? ");
    scanf("%d", &age);
    if (age == deans_age)
    {
        printf("You are correct!\n");
    } else if (age > deans_age)
    {
        printf("You guessed too high!\n");
    } else
    {
        printf("You guessed too low!\n");
    }
}