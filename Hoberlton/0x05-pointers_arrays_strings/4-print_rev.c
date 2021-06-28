#include "holberton.h"
/**
 * print_rev - Prints a given string of characters in reverse.
 *@s: Pointer storing the address of a string literal.
 * Return: Always 0.
 */
void print_rev(char *s)
{
  int i = 0;

  while (s[i] !='\0')
  {
    i++;
  }
    while (i > 0)
    {
      i--;
      _putchar(s[i]);
    }
  _putchar('\n');
}