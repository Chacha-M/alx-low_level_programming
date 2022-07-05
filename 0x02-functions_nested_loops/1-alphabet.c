#include <stdio.h>
#include "main.h"

/**
 * print alphabet - in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

}
 
