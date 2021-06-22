#include "holberton.h"
/**
*print_last_digit - Returns the value of the last digit of a number.
*@n: Is the input number.
* Return: lastdigit.
**/

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = (n % 10) * -1;
	}
	else
	{
		ld = n % 10;
	}
	_putchar (ld + '0');
	return (ld);
}