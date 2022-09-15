#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of times to print '\'
 *
 */

void print_diagonal(int n)
{
	int i;
	char c;

	c = 92;
	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar(c);
	}
	_putchar('\n');
}
