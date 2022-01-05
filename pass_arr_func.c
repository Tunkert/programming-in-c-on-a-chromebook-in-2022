/*
 * Author: Timothy Unkert
 * Purpose: Demo passing an array into a function in C.
 * Copyright 2022
 */

#include <stdio.h>

#define AGES_LENGTH 5

/* function prototype */
void the_ages(int ages[]);  

int main()
{
    int ages[] = { 41, 37, 357, 4000000, 61 };
    the_ages(ages);
    return(0);
}

void the_ages(int ages[])
{
    int i;
    printf("The ages of characters in Supernatural are: ");
    for(i = 0; i < AGES_LENGTH; i++)
    {
        if(i < AGES_LENGTH - 1)
        {
            printf("%d, ", ages[i]);
        } else
        {
            printf("%d.", ages[i]);
        }
    }
    printf("\n");
}
