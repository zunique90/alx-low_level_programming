#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string we are to print
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int length;
	int i;

	length = 0;

	while (s[i++])
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
