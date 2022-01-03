/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate returning out of int function
 * Copyright 2022
 */

#include <stdio.h>

int deans_age(int age);  // function prototype

int main()
{
    int age;
    printf("What is Dean's age at the start of Supernatural? ");
    scanf("%d", &age);
    deans_age(age);
    return(0);
}

int deans_age(int age)
{
    if (age == 26)
    {
	printf("You are correct!\n");
	return(0);
    } else
    {
	printf("You are incorrect!\n");
	return(0);
    }
}
