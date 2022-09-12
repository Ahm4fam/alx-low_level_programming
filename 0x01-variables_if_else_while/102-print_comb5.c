#include <stdlib.h>
#include <stdio.h>

/*
 * This is the solutin for task 12. prints all possible combinations
 * of two two-digit numbers.
 *
 * Auth: Ahmed S Endrie
 *
 */

/**
 * main - Entry point
 *
 * * Return: Always 0 (Success
 *
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l = 48;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++, l = j + 1)
		{
			for (k = i; k <= 57; k++, l = 48)
			{
				for (; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 58)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
