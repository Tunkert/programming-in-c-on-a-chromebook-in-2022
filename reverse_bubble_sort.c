/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate reverse bubble sort
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
	const int size = 10;
	int arr[] = { 22, 20, 1, 45, 65, 121, 199, 86, 44, 12 };
	int i, inner, outer, temp;
	for(outer = 0; outer < size -1; outer++)
	{
		for(inner = outer+1; inner < size; inner++)
		{
			if(arr[outer] < arr[inner])
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
