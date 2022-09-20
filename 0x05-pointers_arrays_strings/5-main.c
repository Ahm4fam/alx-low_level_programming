#include <stdio.h>
#include "main.h"

/*
 * This is the solutin for project '0x05. C - Pointers, arrays and strings'
 * task 5
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
	char s[10] = "My School";
	
	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
