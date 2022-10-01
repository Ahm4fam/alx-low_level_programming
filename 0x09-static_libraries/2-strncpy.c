#include "main.h"

/**
 * _strncpy - function that copies the string pointed by src, included the
 * teminate null byte (\0), to the buffer pointed to by dest
 * @dest: the first parameter
 * @src: second prameter
 * @n: bytes from src that the function will use
 * Return: the pointer to dest
 *
 */



char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
