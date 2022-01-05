/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate CTYPE function (macro) isupper
 * Copyright 2022
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[20];
    printf("What is your name? ");
    scanf("%s", name);
    if(!isupper(name[0]))
    {
        printf("Why didn't you capitalize your first name? What you don't like yourself?\n");
    } else
    {
        printf("Hi, %s!\n", name);
    }
    return(0);
}
