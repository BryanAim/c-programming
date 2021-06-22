#include "holberton.h"

/**
 * print_alphabet - Function that prints alphabet in lowercase
 *
 * Return: Void
 */

void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');

}