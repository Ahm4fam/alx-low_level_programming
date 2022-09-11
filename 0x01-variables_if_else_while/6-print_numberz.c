#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * This is the solutin for task 6. prints all single digit numbers of base 10
 * starting from 0
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
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
