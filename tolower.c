/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate tolower CYTPE function
 * Copyright 2022
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[20];
    int i;
    i = 0;
    printf("Who is the brother of Dean on Supernatural? ");
    scanf("%s", name);
    printf("That's right, ");
    while(name[i] != '\0')
    {
        printf("%c", tolower(name[i]));
        i++;
    }
    printf(", is the brother of Dean on Supernatural!\n");
    return(0);
}
