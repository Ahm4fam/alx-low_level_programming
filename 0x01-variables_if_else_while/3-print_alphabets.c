#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * This is the solutin for task 3. alphABET
 *
 * By Ahmed S Endrie
 *
 */

/**
 * main - Entry point
 *
 * Description: this main function prints all english alphabet
 * both smalls and caps
 *
 * Return: Always 0 (Success
 */
int main(void)
{
	char alp;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		putchar(alp);
	}
	for (alp = 'A' ; alp <= 'Z' ; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);

}
