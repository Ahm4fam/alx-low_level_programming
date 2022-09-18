#include <stdio.h>

/**
 * print_alphabet_x10 - prints small alphabets
 *
 * Description: Prints alphabet
 *
 * Return: 0 always (success)
 */


void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
