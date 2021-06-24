#include "holberton.h"
/**
 * _isdigit - Checks if c is a digit.
 *@c: Is the given character.
 * Return: 1 if c is a digit, 0 if it is not.
 */
int _isdigit(int c)
{
  if (c >= '0' && c <= '9')
  {
    return (1);
  }
  else
    return (0);
}