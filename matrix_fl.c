/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate matrix formation from nested for loop
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int i, j;
    char alphabet = 'A';
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c%d,%d ", alphabet, i + 1, j + 1);
        }
        putchar('\n');
    }
    return(0);
}
