/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate user input for character arrays
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
	char char_name[20];
	printf("Who is the coolest character on Supernatural? ");
	fgets(char_name, 20, stdin);
	printf("That is correct, %s, is the coolest character on Supernatural!\n", char_name);
	return(0);
}
