/*
 * Author: Timothy Unkert
 * Purpose: demonstrate unsigned short int
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
	// values from 0 to 65,535
	unsigned short int big_sum = 50000;
	printf("I won %u!\n", big_sum);
	return 0;
}
