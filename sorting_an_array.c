/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate sorting an array in C.
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

    struct character sup_char[3], temp;
    int i, j;
    for(i = 0; i < 3; i++)
    {
	printf("What is the character's first name? ");
	scanf("%s", sup_char[i].f_name);
	printf("What is the character's last name? ");
	scanf("%s", sup_char[i].l_name);
	printf("What is the character's age? ");
	scanf("%d", &sup_char[i].age);
    }
    for(i = 0; i < 2; i++)
    {
	for(j = 1; j < 3; j++)
	{
	    if(sup_char[i].age > sup_char[j].age)
	    {
		temp = sup_char[i];
		sup_char[i] = sup_char[j];
		sup_char[j] = temp;
	    }
	}
    }
    for(i = 0; i < 3; i++)
    {
	printf("%s %s is %d years old.\n",
	       sup_char[i].f_name, sup_char[i].l_name, sup_char[i].age);
    }
    return(0);
}
