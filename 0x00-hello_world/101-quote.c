/*
 *File: 101-quote.c
 *Auth: Ahmed Seid
 */

#include <stdio.h>
#include <unistd.h>

 /**
  *  main - Prints
  *
  * Description: 'Write on on the file'
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (0);

}
