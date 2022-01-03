/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate *= operator
 * How fast can you reach one million while doubling?
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int i, n;
    i = 1;
    n = 0;
    while (i < 1000000)
    {
	i *= 2;
	n++;
    }
    printf("It took %d cycles for 1 doubling to reach 1,000,000!\n", n);
    return(0);
}
