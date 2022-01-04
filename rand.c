/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate rand() function in C.
 * Copyright 2022
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rand_num, i;
    for(i = 0; i < 10; i++){
	rand_num = rand() % 25 + 1;
	printf("%d ", rand_num);
    }
    printf("\n");
    return(0);
}
