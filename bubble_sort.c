/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate "bubble" sort
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
	int arr[] = { 23, 56, 45, 123, 67, 22 };
	const int size = 6;
	int inner, outer, temp, i;

	for(outer = 0; outer < size-1; outer++)
	{
		for(inner = outer + 1; inner < size; inner++)
		{
			if(arr[outer] > arr[inner])
			{
				temp = arr[outer];
				arr[outer] = arr[inner];
				arr[inner] = temp;
			}
		}
	}

	for(i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return(0);
}
