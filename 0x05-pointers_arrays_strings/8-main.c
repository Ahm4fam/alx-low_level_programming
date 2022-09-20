#include <stdio.h>
#include "main.h"

/*
 * This is the solutin for project '0x05. C - Pointers, arrays and strings'
 * task 8
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
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	return (0);
}
