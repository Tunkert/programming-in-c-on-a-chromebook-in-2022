#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age of a character on Supernatural: ");
    scanf("%d", &age);
    switch (age)
    {
    case 41:
        printf("That is Dean's age at the end of the show!\n");
        break;
    case 26:
        printf("That is Dean's age at the start of the show!\n");
        break;
    case 22:
        printf("That is Sam's age at the start of the show!\n");
        break;
    case 37:
        printf("That is Sam's age at the end of the show!\n");
        break;
    default:
        printf("Watch more Supernatural!\n");
        break;
    }
    return(0);
}