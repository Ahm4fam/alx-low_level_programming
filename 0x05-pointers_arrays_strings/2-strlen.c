#include <stdio.h>
#include <string.h>

/**
 * _strlen - it returns length of the string
 * @s: given string
 *
 * Description: get the length of str
 *
 * Return: 0 always (success)
 */


int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
