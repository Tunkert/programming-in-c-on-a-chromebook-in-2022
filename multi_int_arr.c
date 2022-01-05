/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate multi-dimensional array and create 3 x 3 matrix
 * Copyright 2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_num, i, j;
    int matrix[3][3];
    srand((unsigned)time(NULL));
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            random_num = rand() % 25 + 1;
            matrix[i][j] = random_num;
        }
    } 

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return(0);
}
