/*
 * Author: Timothy Unkert
 * Purpose demonstrate ceil and floor functions in C.
 * Copyright 2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float user_number;
    printf("Enter a number with a decimal: ");
    scanf("%f", &user_number);
    printf("The number rounded up is %.1f.\n", ceil(user_number));
    printf("The number rounded down is %.1f.\n", floor(user_number));
    return(0);
}
