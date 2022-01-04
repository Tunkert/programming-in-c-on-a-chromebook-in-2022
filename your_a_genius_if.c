/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate that order of operations is used in C
 * (as with other programming languages)
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int a, b, c;
    a = (2 + 3) * 4 - 6;
    b = 2 + 3 * (4 - 6);
    c = 2 + 3 * 4 - 6;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return(0);
}
