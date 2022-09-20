#include <stdio.h>
#include "main.h"

/*
 * This is the solutin for project '0x05. C - Pointers, arrays and strings'
 * task 9
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
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
