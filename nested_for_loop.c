/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate nested for loop
 * This is a time complexity of O(N^2)
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Big loop %d, small loop %d!\n", i, j);
        }
    }
    return(0);
}
