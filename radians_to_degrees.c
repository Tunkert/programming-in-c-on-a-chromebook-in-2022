/*
 * Author: Timothy Unkert
 * Purpose: Convert Radians to Degrees
 * Copyright 2022
 */

#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
    float radians, degrees;
    printf("Enter the radians you want to convert to degrees: ");
    scanf("%f", &radians);
    degrees = radians * 180 / PI;
    printf("The value you entered is equal to %.2f degrees!\n", degrees);
    return(0);
}
