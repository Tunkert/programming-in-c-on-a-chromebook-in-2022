/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate char array input from user with scanf
 * Copyright 2022
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[20];
	printf("Who is the coolest character on Supernatural? ");
	scanf("%19s", name);
	printf("That's right, %s is the coolest character on Supernatural!\n", name);
	return(0);
}
