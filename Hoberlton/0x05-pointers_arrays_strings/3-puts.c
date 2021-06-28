#include "holberton.h"
/**
 * _puts - Prints each character of a given string.
 *@str: Given string.
 */
void _puts(char *str)
{
  int i = 0;
  while (str[i] != '\0')
  {
    _putchar(str[i]);
    i++;
  }
  _putchar('\n');
  
}