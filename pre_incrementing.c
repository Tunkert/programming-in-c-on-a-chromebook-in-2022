/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate pre-incrementing of variables.
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int i, j, k, l;
    j = 10;
    l = 10;
    // pre-incrementing
    i = --j;
    // post-incrementing
    k = l--;
    printf("%d\n", i);
    printf("%d\n", k);
    return(0);
}
