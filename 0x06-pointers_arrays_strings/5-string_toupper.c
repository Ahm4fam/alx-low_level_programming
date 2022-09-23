#include "main.h"

/**
 * string_toupper - change all lowercase character of a string to uppercase
 * @str: paramter
 * Return: str to uppercase
 */

char *string_toupper(char *str)
{
	int i;
	char ch;

	i = 0;
	ch = *str;
	while (ch)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			*(str + i) -= 32;
		}
		i++;
		ch = *(str + i);
	}
	return (str);
}
