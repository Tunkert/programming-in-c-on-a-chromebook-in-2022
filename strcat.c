/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate string cat and copy functions in C.
 * Copyright 2022
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char phrase[] = " is the coolest character on Supernatural!";
    strcpy(name, "Dean");
    strcat(name, phrase);
    printf("%s\n", name);
    return(0);
}
