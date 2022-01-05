/*
 * Author: Timothy Unkert
 * Purpose: demonstrate how you can "count words" in a long char array by using isspace in C.
 * Copyright 2022
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char paragraph[] = "Once upon a time I was young. Now I'm middle age and pudgy.";

    int i, space;

    i = 0;
    space = 0;

    while(paragraph[i])
    {
        if(isspace(paragraph[i]))
            space++;
        i++;
    }

    printf("There are %d words in the character array.\n", space + 1);
    return(0);
}
