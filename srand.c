/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate srand function in C.
 * Copyright 2022
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned seed;
    int i, rand_num;
    printf("Enter the seed for your numbers: ");
    scanf("%u", &seed);
    srand(seed);
    for(i = 0; i < 10; i++)
    {
	rand_num = rand() % 25 + 1;
	printf("%d ", rand_num);
    }
    printf("\n");
    return(0);
}
