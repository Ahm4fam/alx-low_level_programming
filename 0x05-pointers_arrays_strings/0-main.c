#include <stdio.h>
#include "main.h"

/*
 * This is the solutin for project '0x05. C - Pointers, arrays and strings'
 * task 0
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
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
