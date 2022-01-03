/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate Use of Modulo Operator
 * Complete fizzbuzz challenge
 * Fizzbuzz challenge - print numbers 1 through 100, if divisible by 3 print buzz, if divisible by 5 print fizz
 * if divisible y 3 and 5 print fizzbuzz
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i < 101; i++)
    {
	if (i % 3 == 0 && i % 5 == 0)
	{
	    printf("Fizzbuzz.\n");
	} else if (i % 3 == 0)
	{
	    printf("Fizz.\n");
	} else if (i % 5 == 0)
	{
	    printf("Buzz.\n");
	} else
	{
	    printf("%d\n", i);
	}
    }
    return(0);
}
