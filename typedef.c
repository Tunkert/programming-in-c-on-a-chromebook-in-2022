/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate typedef in C
 * Copyright 2022
 */

#include <stdio.h>

typedef int billy;

billy main()
{
    billy num_1, num_2, num_ret;
    num_1 = 3;
    num_2 = 7;
    num_ret = 0;
    printf("%d + %d equals %d.\n", num_1, num_2, num_1 + num_2);
    return(num_ret);
}
