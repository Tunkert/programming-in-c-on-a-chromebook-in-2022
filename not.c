/*
 * Author: Timothy Unkert
 * Purpose: demo not operator
 * Copyright 2021
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    _Bool dean_older_sam = false;
    if (!dean_older_sam)
    {
        printf("What?\n");
    } else
    {
        printf("Dean is older than Sam, that is correct!");
    }
}