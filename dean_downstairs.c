/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate incrementing by number other than one
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int months_downstairs, years_downstairs;
    printf("How long, in months, did Dean spend downstairs? ");
    scanf("%d", &months_downstairs);
    years_downstairs = 0;
    years_downstairs += (10 * months_downstairs);
    printf("It felt like %d years!\n", years_downstairs);
    return(0);
}
