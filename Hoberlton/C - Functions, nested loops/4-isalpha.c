#include "holberton.h"
/**
 * _isalpha - Shows is c is a letter.
 *@c: The caracter that is being checked.
 * Return: 1 if letter 0 if it is not a letter.
 */
int _isalpha(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}