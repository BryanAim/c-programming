#include "holberton.h"
/**
 * swap_int - Swaps the values of a and b.
 *@a: Being the first provided value.
 *@b: Beign the second provided value.
 */
void swap_int(int *a, int *b)
{

	int var;

	var = *a;
	*a = *b;
	*b = var;
}