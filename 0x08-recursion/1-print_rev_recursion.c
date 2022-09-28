#include "main.h"

/**
 * _print_rev_recursion - function that print a string in reverse
 * @str: string to print
 *
 * Return: void
 */

void _print_rev_recursion(char *str)
{
	if (*str != '\0')
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
