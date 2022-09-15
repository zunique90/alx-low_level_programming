#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: number of times to print "_"
 *
 */

void print_line(int n)
{
	int i;
	char c;

	c = 95;
	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar(c);
	}
	_putchar('\n');
}
