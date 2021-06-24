#include "holberton.h"
/**
 * _isupper - Prints if c is an uppercase character.
 *@c: Given character
 * Return: 1 is uppercase, 0 if not.
 */
int _isupper(int c)
{
  if (c >= 'A' && c <= 'Z')
  {
    return (1);
  }
  else
    return (0);
}