#include "holberton.h"
/**
 * _strlen - Pulls the length of a string.
 *@s: Being the string.
 * Return: Always 0.
 */
int _strlen(char *s)
{
  int i = 0;

  while (s[i] != '\0')
  {
    i++;
  }
  return i;
}