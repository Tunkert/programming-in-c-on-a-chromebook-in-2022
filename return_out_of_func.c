/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate exiting function with return
 * Copyright 2022
 */

#include <stdio.h>

void deans_age(int age);  // function prototype

int main()
{
    int age;
    printf("How old is Dean at the start of Supernatural? ");
    scanf("%d", &age);
    deans_age(age);
    return(0);
}

void deans_age(int age)
{
    if (age == 26) {
	puts("You are correct!");
	return;
    } else {
	puts("You are incorrect!");
    }
}
