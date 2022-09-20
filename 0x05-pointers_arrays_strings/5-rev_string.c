#include <stdio.h>
#include "main.h"

/**
 * swap - swap two char
 * @a: first char
 * @b: second char
 * Return: void
 */
void swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * rev_string - prints the string in the reverse order
 * @s: given string
 *
 * Description: print the str
 *
 * Return: 0 always (success)
 */

void rev_string(char *s)
{
	int i, j;

	i = 0;
	while (*(s + i))
	{
		i++;
	}
	i--;
	j = 0;
	while (i > j)
	{
		swap(s + i, s + j);
		j++;
		i--;
	}
}
