/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate unsigned long int data type
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
	// values from 0 to 4,294,967,295
	unsigned long int other_planet_age;
	other_planet_age = 4294967295;
	printf("Planet Z's age is %lu.\n", other_planet_age);
	return 0;
}
