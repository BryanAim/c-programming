#include "holberton.h"
/**
 * print_numbers - Prints numbers from 0 to 9.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
  int num = '0';

  while (num <= '9')
  {
    _putchar(num);
    num++;
  }
  _putchar('\n');
}