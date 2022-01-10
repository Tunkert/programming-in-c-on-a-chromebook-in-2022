/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate use of a structure within a structure
 * Copyright 2022
 */

#include <stdio.h>

int main()
{
    struct about
    {
	char personality[20];
	int height;
	int age;
    };
    
    struct character
    {
	char name[20];
	struct about description;
    };

    struct character sup_char;

    printf("What is the character's name? ");
    scanf("%s", sup_char.name);
    printf("What is the character's personality? ");
    scanf("%s", sup_char.description.personality);
    printf("What is the character's height in inches? ");
    scanf("%d", &sup_char.description.height);
    printf("What is the character's age? ");
    scanf("%d", &sup_char.description.age);

    printf("%s is a character with a %s personality who is %d inches tall and %d years old.\n",
	   sup_char.name, sup_char.description.personality, sup_char.description.height,
	   sup_char.description.age);

    return(0);
}
