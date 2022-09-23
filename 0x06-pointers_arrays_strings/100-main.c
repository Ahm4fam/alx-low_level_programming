#include <stdio.h>
#include "main.h"

/*
 * This is the solutin for project '0x06. C- More pointers, arrays and strings'
 * task 8
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
	char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
	char *p;

	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	return (0);
}
