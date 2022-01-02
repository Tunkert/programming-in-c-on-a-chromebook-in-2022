/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate while loop in C.
 * Be careful not to get an infinite loop
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int i;
    i = 0;
    while (i < 10)
    {
        printf("%d\n", i);
        i++; // remember to put this or you'll get an infinite loop
    }
    return(0);
}
