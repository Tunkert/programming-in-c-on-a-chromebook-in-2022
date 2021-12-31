/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate use of scanf to read numbers
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
    float number1;
    int number2;
    printf("Enter a number with a decimal: ");
    scanf("%f", &number1);
    printf("Enter an integer: ");
    scanf("%d", &number2);
    printf("You entered %.2f.\n", number1);
    printf("You entered %d.\n", number2);
    return(0);
}
