#include "main.h"

/**
 * _isupper - functions that check for uppercase character
 * @ch: the character
 *
 * Return: 1 if c is uppecase overwise 0
 */

int _isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return (1);
	}
	return (0);
}
