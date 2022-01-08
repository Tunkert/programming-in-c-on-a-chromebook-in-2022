/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate an alternative way of initializing a structure in C.
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
    } dean = {
        "Dean",
        "Winchester",
        41
    };

    printf("The coolest character on Supernatural is %s %s who is %d years old.\n",
            dean.f_name, dean.l_name, dean.age);
    return(0);
}
