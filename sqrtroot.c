/*
 * Written by Timothy Unkert
 * Copyright 2021
 * Purpose: to show sqrt function
 */

 #include <stdio.h>
 #include <math.h>

 int main()
 {
     // declare variables as integers
     int value, result;
     // set value integer to 9
     value = 9;
     // result is square root of 9
     result = sqrt(value);
     printf("%d\n", result); // prints 3, newline
     return 0;
 }
