/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate long int data type
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
	// values from -2,147,483,648 to 2,147,483,647
	long int planet_age = 2147483647;
	printf("Planet Q's age is %ld\n", planet_age);
	return 0;
}
