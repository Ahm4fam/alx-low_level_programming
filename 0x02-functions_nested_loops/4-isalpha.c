#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - checks the character whether it is alphabet or not
 * @ch: character to be check
 *
 * Description: return if character is lower 1 else 0
 *
 * Return: 0 always (success)
 */


int _isalpha(char ch)
{
	if (isalpha(ch))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
