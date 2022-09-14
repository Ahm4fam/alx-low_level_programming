#include <stdio.h>
#include "main.h"

/*
 * This is the solutin for task 1. from project Functions, nested loops
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
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		print_alphabet(ch);
	}
	print_alphabet('\n');
	return (0);
}
