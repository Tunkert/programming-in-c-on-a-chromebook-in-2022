/*
 * Author: Timothy Unkert
 * Copyright 2021
 * Purpose: demonstrate operators
 */

#include <stdio.h>

int main()
{
    int value, result, result2, result3, result4;
    value = 9;
    result = value + 3;
    result2 = value - 3;
    result3 = value * 3;
    result4 = value / 2;
    printf("%d\n", result);  // will print 12
    printf("%d\n", result2);  // will print 6
    printf("%d\n", result3);  // will print 27
    printf("%d\n", result4);  // will print 4 ...
    return 0;
}
