/*
 * Author: Timothy Unkert
 * Copyright 2021
 * Purpose: Introduce char data type
 * Char data types 1 byte in memory
 * -128 to 127 or 0 to 255 ASCII values
 */

#include <stdio.h>

int main()
{
  char age, age2;
  age = '2';  // considered an integer value even though letters can be stored
  age2 = ')';
  printf("Jack is %c years old in Supernatural\n", age);
  printf("Jack is actually %d years old in Supernatural\n", age);
  printf("Dean is %d years old in Supernatural\n", age2);
  return 0;
}
