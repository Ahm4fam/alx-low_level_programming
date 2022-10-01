#include "main.h"

/**
 * _strlen - get and return the size of string
 * @s: given string
 * Return: length of s
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

/**
 * _strncat - function appends the src string to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest, and then adds
 * a terminating null byte
 *
 * @dest: destination string
 * @src: source string
 * @n: byte value of string
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int lsrc, ldst;

	ldst = _strlen(dest);
	lsrc = _strlen(src) - 1;
	if (n < lsrc)
		lsrc = n - 1;
	while (lsrc >= 0)
	{
		*(dest + ldst + lsrc) = *(src + lsrc);
		lsrc--;
	}
	*(dest + _strlen(dest)) = '\0';
	return (dest);
}
