#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * This is the solutin for task 8. prints all the numbers of base 16
 * in lowercase
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
	char hex;

	for (hex = '0'; hex <= '9'; hex++)
	{
		putchar(hex);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
