/*
 * Author: Timothy Unkert
 * Purpose: Introduce integer arrays
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int ages[5];
    ages[0] = 41;
    ages[1] = 37;
    ages[2] = 357;
    ages[3] = 4000000;
    ages[4] = 61;
    printf("Dean is %d years old.\n", ages[0]);
    printf("Sam is %d years old.\n", ages[1]);
    printf("Crowley is %d years old.\n", ages[2]);
    printf("Castiel is %d years old.\n", ages[3]);
    printf("Bobby is %d years old.\n", ages[4]);
    return(0);
}
