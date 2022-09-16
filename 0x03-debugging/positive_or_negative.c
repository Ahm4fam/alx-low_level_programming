#include <stdio.h>

/*
 * This is for project 0x03. C - Debugging Task 0
 *
 * By Ahmed S. Endrie
 *
 */

/**
 * positive_or_negative - printspositive negativ zero
 * @num: number argument
 *
 * Return: Always 0 (Success)
 */

void positive_or_negative(int num)
{
	if (num > 0)
	{
		printf("%i is positive\n", num);
	}
	else if (num == 0)
	{
		printf("%i is zero\n", num);
	}
	else if (num < 0)
	{
		printf("%i is negative\n", num);
	}
}
