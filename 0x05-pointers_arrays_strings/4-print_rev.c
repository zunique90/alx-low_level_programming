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
	int c = 0;

	while (*s(c) != '\0')
	{
		c++;
		r++;
	}

	c--;
	r--;

	while (r >= 0)
	{
		_putchar(*s(c));
		c--;
		r--;
	}
	_putchar('\n');
}
