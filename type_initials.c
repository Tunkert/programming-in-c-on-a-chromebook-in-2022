/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate using getchar without getting \n character entered into stream
 * Copyright 2022
 */

#include <stdio.h>

/* function prototype */
int get_initial(void);

int main()
{
    int f_initial, l_initial;
    printf("Enter the first initial of the coolest character on Supernatural: ");
    f_initial = get_initial();
    printf("Enter the last initial of the coolest character on Supernatural: ");
    l_initial = get_initial();
    printf("The initials of the coolest character on Supernatural are %c and %c!\n", f_initial, l_initial);
    return(0);
}

int get_initial(void)
{
    int initial;
    initial = getchar();
    while(getchar()!='\n')
        ;
    return(initial);
}
