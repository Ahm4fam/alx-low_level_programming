#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checks the character whether it is lower or not
 * @ch: character to be check
 *
 * Description: return if character is lower 1 else 0
 *
 * Return: 0 always (success)
 */


int _islower(char ch)
{
	if (islower(ch))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
