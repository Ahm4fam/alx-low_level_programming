#include "main.h"

/**
 * _isdigit - functions that check for digit character
 * @n: the character to check whether it is digit or not
 *
 * Return: 1 if n is digit overwise 0
 */

int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	return (0);
}
