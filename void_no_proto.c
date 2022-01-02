/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate Void Function w/o prototype
 * Copyright 2022
 */

#include <stdio.h>

void dean(void)
{
    printf("Dean is the coolest character on Supernatural!\n");
}

int main()
{
    int i;
    for( i = 0; i < 5; i++ )
    {
        dean();
    }
    return(0);
}
