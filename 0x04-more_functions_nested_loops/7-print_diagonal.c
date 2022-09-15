#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of times to print '\'
 *
 */

void print_diagonal(int n)
{
	int i;
	int j;
	char k;
	char s;

	k = '\\';
	s = ' ';
	for (i = 0; i < n; i++)
	{
		if (n > 1)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(s);
			}
			_putchar(k);
			_putchar('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
