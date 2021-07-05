#include "holberton.h"
/**
 * _memset - fills first bytes of memory with constant byte.
 *@s: Given string.
 *@b: Constant byte.
 *@n: Size.
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}