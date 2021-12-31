/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate use of scanf
 * Copyright 2021
 * scanf is insecure for input - jusf for practice
 */

#include <stdio.h>

int main()
{
    char supname[20];
    printf("Enter the name of the coolest character on Supernatural: ");
    scanf("%s", supname);
    printf("You are correct, %s is the coolest \
character on Supernatural!\n", supname);
    return(0);
}
