/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate sorting a structure array in C.
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

    struct character sup_char[3];
    struct character temp_sup_char = {
        "",
        "",
        0
    };

    int x, i, j, age_1, age_2;

    char f_name_temp[20];
    char l_name_temp[20];

    for(x = 0; x < 3; x++)
    {
        printf("Enter the first name of a character on Supernatural: ");
        scanf("%s", sup_char[x].f_name);
        printf("Enter the last name of the same character on Supernatural: ");
        scanf("%s", sup_char[x].l_name);
        printf("Enter the age of this character: ");
        scanf("%d", &sup_char[x].age);
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            age_2 = sup_char[j].age;
            age_1 = sup_char[i].age;
            if(age_1 > age_2) 
            {
                temp_sup_char = sup_char[i];
                sup_char[i] = sup_char[j];
                sup_char[j] = temp_sup_char;
            }
        }
    }

    for(x = 0; x < 3; x++)
    {
        printf("%s %s is a character on Supernatural who is %d years old!\n",
                sup_char[x].f_name, sup_char[x].l_name, sup_char[x].age);
    }

    return(0);
}
