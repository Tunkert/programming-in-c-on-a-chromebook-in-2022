/*
 * Author: Timothy Unkert
 * Purpose: Demo use of void type function in C and function prototype.
 * Copyright 2022
 */

#include <stdio.h>

void dean(); // function prototype

int main()
{
    int i;
    for( i = 0; i < 5; i++ )
    {
        dean();
    }
    return(0);
}

void dean(void)
{
    printf("Dean is the coolest character on Supernatural!\n");
}
