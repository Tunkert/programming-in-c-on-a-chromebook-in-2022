/*
 * Author: Timothy Unkert
 * Purpose: print out 1 through 100, if divisible by 3 print fizz, if divisible by 5 print buzz
 * if divisibe by 3 and 5 print fizzbuzz, then go back 100 through 1
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int i;
    for(i = 1; i < 100; i++)
    {
	if (i % 3 == 0 && i % 5 == 0)
	{
	    printf("fizzbuzz!\n");
	} else if (i % 3 == 0)
	{
	    printf("fizz\n");
	} else if (i % 5 == 0)
	{
	    printf("buzz\n");
	} else
	{
	    printf("%d\n", i);
	}
    }
    for (; i > 0; i--)
    {
	if (i % 3 == 0 && i % 5 == 0)
	{
	    printf("fizzbuzz\n");
	} else if (i % 3 == 0)
	{
	    printf("fizz\n");
	} else if (i % 5 == 0)
	{
	    printf("buzz\n");
	} else
	{
	    printf("%d\n", i);
	}
    }
    return(0);
}
