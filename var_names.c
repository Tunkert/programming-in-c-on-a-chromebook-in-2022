/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate different ways to name variables
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
	char letter = 'c';
	int number = 7;
	float pi = 3.14;
	double balance = 50000.23;

	printf("The language I'm styling is %c.\n", letter);
	printf("My favorite number is %d.\n", number);
	printf("Pi is equal to %1.2f.\n", pi);
	printf("The bank balance is %5.3f.\n", balance);

	return 0;
}
