#include "holberton.h"
/**
 * rev_string - Reverse letters of a string.
 *@s: Given string.
 */
void rev_string(char *s)
{
  int count = 0;

  char *c = s, buffer[500];

  while (*s != '\0')
  {
    buffer[count] = *s;
    s++;
    count++;
  }
  count = 0;

  while (s > c)
  {
    s--;
    *s = buffer[count];
    count++;
  }
  
  
}