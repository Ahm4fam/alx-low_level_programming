#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints the string in the reverse order
 * @s: given string
 *
 * Description: print the str
 *
 * Return: 0 always (success)
 */


void print_rev(char *s)
{
	int i, j;
	char c;

	i = 0;
	while (*(s + i))
	{
		i++;
	}
	c = *(s + i - 1);
	j = 1;
	while (c)
	{
		_putchar(c);
		j++;
		c = *(s + i - j);
	}
	_putchar('\n');
}
