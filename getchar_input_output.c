/*
 * Timothy Unkert
 * Purpose: Have a little fun with getchar
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
    char char_one, char_two, char_three, char_four;
    printf("Enter 4 characters, then press enter: ");
    char_one = getchar();
    char_two = getchar();
    char_three = getchar();
    char_four = getchar();
    printf("You wrote %c%c%c%c!\n", char_one, char_two, char_three, char_four);
    return(0);
}
