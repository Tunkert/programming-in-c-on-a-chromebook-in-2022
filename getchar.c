/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate pausing program with getchar
 * Copyright 2021
 */

#include <stdio.h>

int main()
{
    char keyboard_chararcter;
    printf("Dean is the coolest character on Supernatural.\n");
    printf("Press any character to learn more.\n");
    keyboard_chararcter = getchar();
    printf("Thank you for pressing the %c character.\n", keyboard_chararcter);
    printf("Dean is very cool because he gets possessed by Michael and kills\
 Cain!\n");
    return(0);
}
