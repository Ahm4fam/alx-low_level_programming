#include <stdio.h>

/**
 * swap_int - it swaps the variable argument
 * @a: pointer variable one
 * @b: pointer variable two
 *
 * Description: swap a to b & vice versa
 *
 * Return: 0 always (success)
 */


void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
