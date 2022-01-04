/*
 * Author: Timothy Unkert
 * Purpose fill integer array with user input
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
	int ages[5];
	int i;
	for(i = 0; i < 5; i++)
	{
		printf("Enter the age of a character on Supernatural: ");
		scanf("%d", &ages[i]);
	}
	printf("The ages you entered are: \n");
	for(i = 0; i < 5; i++)
	{
		printf("%d ", ages[i]);
	}
	printf("\n");
	return(0);
}
