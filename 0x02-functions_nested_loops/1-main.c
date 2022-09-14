#include <stdio.h>

/**
 * print_alphabet - prints small alphabets
 *
 * Description: Prints alphabet
 *
 * Return: 0 always (success)
 */

int print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
