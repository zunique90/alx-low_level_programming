#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((j + i) < size)
				_putchar(32);
			if ((n + 1) >= size)
				_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
