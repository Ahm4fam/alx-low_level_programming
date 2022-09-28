#include "main.h"

/**
 * _strlen_recursion - function that return the length of a string
 * @str: the string
 *
 * Return: length of str
 */

int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(str + 1));
}
