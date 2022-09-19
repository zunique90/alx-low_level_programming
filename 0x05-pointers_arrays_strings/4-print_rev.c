#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string we are to print
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int r = 0;

	while (*s != '\0')
	{
		r++;
		s++
	}

	s--;
	r--;

	while (r >= 0)
	{
		_putchar(*s);
		s--;
		r--;
	}
	_putchar('\n');
}
