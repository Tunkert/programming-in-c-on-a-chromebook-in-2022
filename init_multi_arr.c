/*
 * Author: Timothy Unkert
 * Purpose: Demo initialize of two dimensional array
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int arr[2][3] = {
        1, 2, 3,
        4, 5, 6
    };

    int i, j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return(0);
}

