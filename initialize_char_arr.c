/*
 * Author: Timothy Unkert
 * Purpose: Initialize char arrays
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
	char name[] = { 'D', 'e', 'a', 'n' };
	int i;
	for(i = 0; i < 5; i++)
	{
		putchar(name[i]);
	}
	putchar('\n');
	return(0);
}
