#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: no return
 */

void print_triangle(int size)
{
	int i;
	int j;
	char c;

	c = '#';
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((j + i) < size)
				_putchar(' ');
			if ((n + 1) >= size)
				_putchar(c);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
