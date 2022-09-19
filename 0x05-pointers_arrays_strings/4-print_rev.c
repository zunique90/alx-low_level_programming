#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string we are to print
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + 1) != '\0')
	{
		i++
	}

	while (i > 0)
	{
		_putchar(*(s + i) - 1);
		i++;
	}
	_putchar('\n');
}
