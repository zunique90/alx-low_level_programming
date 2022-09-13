#include "main.h"
/**
 * main - prints the alphabets in lower case followed by a new line
 *
 * Return: (0) Success
 */

void print_alphabet(void)
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
	{
		_putchar(r);
	}
	_putchar('\n');
}
