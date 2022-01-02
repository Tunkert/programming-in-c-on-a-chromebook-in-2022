/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate while loop doesn't need to increment by 10
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    float i;
    i = 0;
    while (i < 10)
    {
        printf("%.1f\n", i);
        i = i + 0.1; // remember this or else the infinite loop comes!
    }
    return(0);
}
