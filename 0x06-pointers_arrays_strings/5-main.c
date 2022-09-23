#include <stdio.h>
#include "main.h"

/*
 * This is the solutin for project '0x06. C- More pointers, arrays and strings'
 * task 3
 *
 * Auth: Ahmed S Endrie
 *
 */

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
