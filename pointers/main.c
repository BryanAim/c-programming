/**
 * C program to get memory address of a variable
 */

#include <stdio.h>

int main()
{
  int num = 10;
  printf ("Value of num = %d\n", num);

  /* &num gets the address of num */
  printf("Address of num = %d\n", &num);
  printf("Address of num in hexadecimal = %x", &num);
  
  return 0;

}