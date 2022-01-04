/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate initialization of arrays
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int ages[] = { 41, 37, 357, 4000000, 61 };
    int i;
    printf("The ages array contains the following ages: ");
    for( i = 0; i < 5; i++)
    {
	printf("%d ", ages[i]);
    }
    printf("\n");
    return(0);
}
