#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * This is the solutin for task 2. print_alphabet
 *
 *  By Ahmed S Endrie
 */

/**
 *  main - Entry point
 *
 * Description: using the main function it prints all English alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
