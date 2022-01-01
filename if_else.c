/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate less than or equal to
 */

#include <stdio.h>

int main()
{
    const int deans_age = 41;
    int age;
    printf("What is Dean's age in the last season of Supernatural? ");
    scanf("%d", &age);
    if (age == deans_age)
    {
        printf("You got Dean's age correct!\n");
    } else
    {
        printf("You are incorrect! Watch more Supernatural, it's on Netflix!\n");
    }
    return(0);
}