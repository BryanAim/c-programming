#include "holberton.h"
/**
 * puts2 - Prints every second character of a string.
 *@str: Given string.
 */
void puts2(char *str)
{
  int i;
  char c;

  for ( i = 0; str[i] != '\0'; i++)
  {
    if (i % 2 == 0)
    {
      c = str[i];
      _putchar(c);
    }
    
  }
  _putchar('\n');
  
}