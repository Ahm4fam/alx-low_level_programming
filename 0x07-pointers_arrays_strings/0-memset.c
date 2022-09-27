#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @str: memory space
 * @b: byte to fill
 * @n: number of spaces
 *
 * Return: pointer to memory area str
 */

char *_memset(char *str, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(str + i) = b;
	}
	return (str);
}
