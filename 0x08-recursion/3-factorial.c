#include "main.h"

/**
 * factorial - function that return the factorial of a number
 * @num: the number
 *
 * Return: factorial of num
 */

int factorial(int num)
{
	if (num < 0)
		return (-1);
	else if (num == 0)
		return (1);
	else
		return (num * factorial(num - 1));
}
