/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate use of constants in code
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
	/* once assigned you can't change constants
	only valid in function where it's assigned (scope) */
	const float pi = 3.1415;
	printf("2pi equals %.2f\n", 2 * pi);
	printf("pi/2 equals %.4f\n", pi / 2);
	printf("pi + 1 equals %.2f\n", pi + 1);
	return(0);
}
