#include <stdio.h>
#include "main.h"

/*
 * This is the solutin for project '0x06. C- More pointers, arrays and strings'
 * task 7
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
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
