/**
 * C program to use dereference operator
 */

#include <stdio.h>

int main()
{
  int num = 10;
  printf ("Value of num = %d\n", num);

  /* &num gets the address of num */
  printf("Address of num = %d\n", &num);

  /*
     * &num gets the address of num
     * and (*(&num)) gets value pointed by (&num)
     */

  printf("Value of num = %d", *(&num));
  
  return 0;

}