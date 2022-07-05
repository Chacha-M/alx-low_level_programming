#include "main.h"
/**
 * print_alphabet-prints alphabets
 * Return: always 0 is success
 */
void print_alphabet(void)
{
	char letter = 'a';

	do {
		putchar(letter);
		letter++;
	} while (letter <= 'z');
	putchar('\n');
}
