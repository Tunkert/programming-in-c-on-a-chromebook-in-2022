/*
 * Author: Timothy Unkert
 * Purpose: Demo pow() operator in C.
 * Copyright 2022
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float earnings, base, months, total;
    printf("What are your earnings this month? ");
    scanf("%f", &earnings);
    printf("What is your average increase per month (as a multiple)? ");
    scanf("%f", &base);
    printf("Enter months: ");
    scanf("%f", &months);
    total = pow(base, months);
    printf("In %.0f months, you could be earning %f dollars!\n", months, total);
    return(0);
}
