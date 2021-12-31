/*
 * Author: Timothy Unkert
 * Purpose: Use putchar to display text
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
    int letter;
    printf("Press enter or else! ");
    getchar();
    letter = 'D';
    putchar(letter);
    letter = 'e';
    putchar(letter);
    letter = 'a';
    putchar(letter);
    letter = 'n';
    putchar(letter);
    printf("\n");
    return(0);
}
