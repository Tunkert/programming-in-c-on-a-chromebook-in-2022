/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate use of static variables in functions
 * Copyright 2022
 */

#include <stdio.h>

// function prototype

void counting_function(void);

int main()
{
    int season;
    for (season = 1; season < 16; season++)
    {
	printf("In season %d Dean is ", season);
	counting_function();
	printf("\n");
    }
    return(0);
}

void counting_function(void)
{
    static int age;  // static variables initialized to 0 unless specified otherwise
    age++;
    printf("%d years old.", age + 25);
}
