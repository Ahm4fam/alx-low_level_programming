#include "main.h"

/**
 * _puts_recursion - function that print a string following by a new line
 * @str: string to print
 *
 * Return: void
 */

void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}
}
