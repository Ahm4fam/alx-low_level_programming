#include "main.h"

/**
 * sqrt_find - find the square root of x
 * @y: square root number
 * @x: number to find sqrt of
 *
 * Return: -1 or sqrt of x
 */

int sqrt_find(int y, int x)
{
	if (y * y == x)
		return (y);
	if (y * y > x)
		return (-1);
	return (sqrt_find(y + 1, x));
}

/**
 * _sqrt_recursion - function that returns the natural root of a number
 * @n: square rooted number
 *
 * Return: natural root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_find(1, n));
}
