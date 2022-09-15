#include "main.h"

/**
 * print_triangle - prints a triangle using the character '#'
 * @size: is the size of the triangle
 *
 */

void print_triangle(int size)
{
	int i;
	int j;
	char c;

	c = 35;
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((j + i) < size)
				_putchar(' ');
			if ((n + i) >= size)
				_putchar(c);
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
