/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate the absolute value function in C.
 * Copyright 2022
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user_number, abs_value;
    printf("Enter an integer: ");
    scanf("%d", &user_number);
    abs_value = abs(user_number);
    printf("The absolute value of the integer you entered is %d.\n", abs_value);
    return(0);
}
