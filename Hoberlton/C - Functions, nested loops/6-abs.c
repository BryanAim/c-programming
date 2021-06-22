#include "holberton.h"
/**
 * _abs - Pulls the absolute value of a number.
 *@c: Is the given number.
 * Return: Always 0.
 */
int _abs(int c)
{

	if (c < 0)
		c *= -1;
	return (c);
}