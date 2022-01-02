/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate infinite while loop w/ break
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int i;
    while(1)
    {
        printf("%d ", i);
        i++;
        if (i > 1000)
        {
            break;
        }
    }
    putchar('\n');
    return(0);
}
