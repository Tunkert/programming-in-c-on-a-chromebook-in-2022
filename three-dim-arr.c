/*
 * Author: Timothy Unkert
 * Purpose: Demo 3-d array
 * Copyright 2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[3][3][3];
    int i, j, k, random_num;
    srand((unsigned)time(NULL));
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 3; k++)
            {
                random_num = rand() % 25 + 1;
                arr[i][j][k] = random_num;
            }
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 3; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\t");
        }
        printf("\n");
    }
    return(0);
}
