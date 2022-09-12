#include <stdlib.h>
#include <stdio.h>

/*
 * This is the solutin for task 11. prints all possible different combinations
 * of three digits.
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
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
