#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints the string
 * @str: given string
 *
 * Description: print the str
 *
 * Return: 0 always (success)
 */

void puts_half(char *str)
{
	int i, j;
	char c;

	c = *str;
	i = 0;
	while (c)
	{
		i++;
		c = *(str + i);
	}
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
