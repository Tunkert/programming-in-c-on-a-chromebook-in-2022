/*
 * Author: Timothy Unkert
 * Purpose: demonstrate ternary operator in C.
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int dean, sam, younger;
    dean = 41;
    sam = 37;
    younger = (dean > sam) ? 37 : 41;
    if (younger < 40)
    {
        printf("Sam is younger than Dean!\n");
    } else
    {
        printf("Dean is younger than Sam!\n");
    }
}
