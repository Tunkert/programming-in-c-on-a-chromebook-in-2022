/*
 * Author: Timothy Unkert
 * Purpose: Convert Degrees to Radians
 * Copyright 2022
 */

#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
    int degrees;
    float radians;
    printf("Enter the number of degrees you want to convert to radians: ");
    scanf("%d", &degrees);
    radians = PI * degrees / 180;
    printf("That is equal to %.4f radians!\n", radians);
    return(0);
}
