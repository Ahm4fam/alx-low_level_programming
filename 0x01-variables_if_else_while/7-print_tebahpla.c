#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * This is the solutin for task 7. prints the lowercase alphabet in reverse
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
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
