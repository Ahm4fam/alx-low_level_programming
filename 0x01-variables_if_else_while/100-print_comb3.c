#include <stdlib.h>
#include <stdio.h>

/*
 * This is the solutin for task 10. prints all possible different combinations
 * of two digits.
 *
 * Auth: Ahmed S Endrie
 *
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
