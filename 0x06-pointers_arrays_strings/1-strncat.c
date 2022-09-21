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
	int fs, ss;

	ss = _strlen(dest);
	fs = _strlen(src)-1;
	if (n < fs)
		fs = n;

	while (fs >= 0)
	{
		*(dest + ss + fs) = *(src + fs);
		fs--;
	}
	*(dest + _strlen(dest)) = '\0';
	return (dest);
}
