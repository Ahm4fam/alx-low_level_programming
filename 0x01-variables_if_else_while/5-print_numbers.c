#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * This is the solutin for task 5. prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Auth: Ahmed S Endrie
 */

/**
 * main - Entry point
 *
 * Description: It prints all single digit numbers
 *
 * Return: Always 0 (Success
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	printf("\n");
	return (0);
}
