/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate way of initializing a struture in C.
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    struct character
    {
        char f_name[20];
        char l_name[20];
        int age;
    };

    struct character dean = {
        "Dean",
        "Winchester",
        41
    };

    printf("The coolest character on Supernatural is %s %s who is age %d.\n",
            dean.f_name, dean.l_name, dean.age);
    return(0);
}
