/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate toupper CTYPE function in C.
 * Copyright 2022
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[20];
    printf("Enter the name of your favorite character on Supernatural: ");
    scanf("%s", name);
    int i = 0;
    printf("Your favorite character on Supernatural is ");
    while(name[i] != '\0')
    {
        printf("%c", toupper(name[i]));
        i++;
    }
    printf("!\n");
    return(0);
}
