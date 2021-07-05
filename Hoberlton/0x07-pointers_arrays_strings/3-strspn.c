#include "holberton.h"
/**
 * _strspn - calculates the length of the initial s.
 *@s: Given string.
 *@accept: Bytes.
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{

	int i;
	unsigned int j;

	j = 0;
	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			if (accept[i + 1] == '\0')
			{
				return (j);
			}
		}
		s++;
	}
return (j);
}