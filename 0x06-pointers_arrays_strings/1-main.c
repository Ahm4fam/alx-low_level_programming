#include <stdio.h>
#include "main.h"

/*
 * This is the solutin for project '0x06. C- More pointers, arrays and strings'
 * task 1
 *
 * Auth: Ahmed S Endrie
 *
 */

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success
 *
 */

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
