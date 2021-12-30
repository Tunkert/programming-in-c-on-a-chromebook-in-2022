/*
 * Author: Timothy Unkert
 * Copyright 2021
 * Purpose: show you can pass variables into printf to do calculations
 */

#include <stdio.h>

int main()
{
  int value1, value2;
  value1 = 3;
  value2 = 7;
  printf("%d + %d is %d\n", value1, value2, value1 + value2);
  printf("%d x %d is %d\n", value1, value2, value1 * value2);
  printf("%d - %d is %d\n", value1, value2, value1 - value2);
  printf("%d / %d is %d\n", value2, value1, value2 / value1);
  return 0;
}
