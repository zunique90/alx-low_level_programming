#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: string we are to print
 *
 * Return: nothing
 */

void _puts(char *str)
{

	while (*str)
		_putchar(*str++);


	_putchar('\n');
}
