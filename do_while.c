/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate Do While Loop
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int root, perfect_square;
    root = 1;

    do
    {
        perfect_square = root * root;
        printf("%d\n", perfect_square);
        root++;
    } while (perfect_square < 501);
    return(0);
}
