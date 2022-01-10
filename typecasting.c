/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate typecasting and reason for typecasting
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int numerator, denominator;
    float c;
    printf("This program rewrites a fraction as a decimal.\n");
    printf("Enter the numerator (top part) of the fraction: ");
    scanf("%d", &numerator);
    printf("Enter the denominator (bottom part) of the fraction: ");
    scanf("%d", &denominator);
    c = (float)numerator / (float)denominator;
    printf("The fraction as a decimal is equal to: %.2f.\n", c);
    return(0);
}
