/**
 * C program to demonstrate use of pointers
 */

#include <stdio.h>

int main()
{
  int num = 1;
  int *ptr = &num;

  printf("Value of num = %d\n", num);
  printf("Address of num = %x\n\n", &num);


  printf("Value of ptr = %x \n", ptr);
  printf("Address of ptr = %x \n", &ptr);
  printf("Value pointed by ptr = %d \n\n", *ptr);


  // Change the value of num directly
  num=10;
  printf("After changing value of num directly. \n");
  printf("Value of num = %d \n", num);
  printf("Value pointed by ptr = %d \n\n", *ptr);


  // Assigns 100 at the address pointed by ptr 
  *ptr=100;
  printf("After changing value pointed by ptr. \n");
  printf("Value of num = %d \n", num);
  printf("Value pointed by ptr = %d \n\n", *ptr);

  return 0; 
}

// int *ptr = &num; declares an integer pointer that points at num.

// The first two printf() in line 12 and 13 are straightforward. First prints value of num and other prints memory address of num.

// printf("Value of ptr = %x \n", ptr); prints the value stored at ptr i.e. memory address of num. Hence, the statement prints memory address of num.

// printf("Address of ptr = %x \n", &ptr); prints the address of ptr.
// Don't confuse with address of ptr and address pointed by ptr. First ptr is a variable so it will have a memory address which is retrieved using &ptr. And since it is a pointer variable hence it stores memory address which is retrieved using ptr.

// printf("Value pointed by ptr = %d \n\n", *ptr);, here * dereferences value pointed by ptr and prints the value at memory location pointed by ptr.

// Next, we made some changes to num i.e. num=10. After changes printf("Value of num = %d \n", num); prints 10.

// Since we made changes to our original variable num, hence changes are reflected back to pointer that points to the num. *ptr in line 23, dereferences value pointed by ptr i.e. 10.

// *ptr = 100; says assign 100 to memory location pointed by ptr. Which means, assign 100 to num indirectly.

// Since, we again modified the value of num using *ptr = 100. Hence, num and *ptr in line 28 and 29 will evaluate to 100.