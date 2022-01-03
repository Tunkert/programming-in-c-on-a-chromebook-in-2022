/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate modulo operator used in different method
 * This method is a little odd but it's good for a demonstration
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    int deans_age, sams_age, age_diff;
    printf("How old is Dean at the end of Supernatural? ");
    scanf("%d", &deans_age);
    printf("How old is Sam at the end of Supernatural? ");
    scanf("%d", &sams_age);
    deans_age %= sams_age;
    age_diff = deans_age;
    printf("The age difference between Dean and Sam is %d years.\n", age_diff);
    return(0);
}
