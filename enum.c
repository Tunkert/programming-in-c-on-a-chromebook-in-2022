/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate use of enum in C.
 * Copyright 2022
 */

#include <stdio.h>
#include <string.h>

int print_ans(char *name);

int main()
{
    int response;
    char name[20];
    printf("What is the name of the best character on Supernatural? ");
    fgets(name, 20, stdin);
    response = print_ans(name);
    if(response == 1)
    {
	printf("You are correct!\n");
    }
    return(0);
}

int print_ans(char *name)
{
    enum{ false, true };
    char check_name[20] = "Dean";
    if(strcmp(name, check_name))
	return true;
    return false;
}
