/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate /= operator
 * How long to divide earth's population to less than 1
 */

#include <stdio.h>

int main()
{
    float earths_pop;
    int n;
    earths_pop = 7530000000;
    n = 0;
    while (earths_pop > 1)
    {
	earths_pop /= 2;
	n++;
    }
    printf("It took %d halving cycles to get earth's population to less than 1!\n", n);
    return(0);
}
