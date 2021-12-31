/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate fgets() function
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
    char supname[5];
    printf("Who is the coolest character on supernatural? ");
    fgets(supname,5,stdin);
    printf("You are correct, %s is the coolest character on Supernatural.\n", supname);
    return(0);
}
