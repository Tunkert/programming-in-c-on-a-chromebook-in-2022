/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate use of strcmp in C.
 * Copyright 2022
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char cool_char[] = "Dean";
    char user_char[20];

    printf("Who is the coolest character on Supernatural? ");
    scanf("%s", user_char);

    if(strcmp(cool_char, user_char) == 0)
        printf("You are correct!\n");
    else
        printf("NOOOOOOO!!!! Dean is the coolest character!\n");
    return(0);
}
