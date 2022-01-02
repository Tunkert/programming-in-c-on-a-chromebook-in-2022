/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate infinite for loop w break
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int i;
    for(;;)
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
