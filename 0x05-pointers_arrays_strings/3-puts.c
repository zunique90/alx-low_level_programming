#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: pointer to string we are to print
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str + 1 != '\0')
	{
		_putchar(str + i);
		i++;
	}
	_putchar('\n');
}
