#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * This is for project 0x01. C - Variables, if, else, while
 *
 * By Ahmed S. Endrie
 *
 */

/**
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));

	/* Generate random integer */
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
