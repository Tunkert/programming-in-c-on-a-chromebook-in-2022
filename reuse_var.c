/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate re-using variables
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
	int age;
	age = 41;
	printf("Dean is %d years old at the end of Supernatural.\n", age);
	age = 400000000;
	printf("Castiel is %d years old at the end of Supernatural.\n", age);
	age = 80;
	printf("Sam is %d years old at the end of Supernatural.\n", age);
	return(0);
}
