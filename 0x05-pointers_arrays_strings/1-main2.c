#include <stdio.h>
#include "main.h"

/*
 * This is the solutin for project '0x05. C - Pointers, arrays and strings'
 * task 2
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
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
