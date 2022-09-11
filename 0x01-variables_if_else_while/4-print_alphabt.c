#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * This is the solutin for task 4. Print all the letters except q and e
 *
 * By Ahmed S Endrie
 */

/**
 * main - Entry point
 *
 * Description: It will prints all alphabet except q and e
 *
 * Return: Always 0 (Success
 *
 */
int main(void)
{
	char alp;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp);
		}
	}
	putchar('\n');
	return (0);
}
