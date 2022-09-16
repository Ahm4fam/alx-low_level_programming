#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i; /* variable declaration */

	printf("Infinite loop incoming :(\n");

	i = 0; /* variable initialization */

	while (i < 10) /*while loop */
	{
		putchar(i);i++; /* i increament missing goes to infinite*/
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
