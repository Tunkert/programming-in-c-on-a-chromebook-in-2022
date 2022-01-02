/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate the for loop with line counting.
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int i, n;
    n = 1; 
    for (i = 0; i < 6; i++)
    {
        printf("%d. I really like Supernatural!\n", n);
        n++;
    }
    return(0);
}
