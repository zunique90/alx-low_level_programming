#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: is the size of the square
 *
 */

void print_square(int size)
{
	int i;
	int j;
	char k;

	k = 35;
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
