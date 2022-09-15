#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle using the character '#'
 * @size: is the size of the triangle
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
			{
				putchar(' ');
			}
			if ((n + i) >= size)
			{
				putchar('#');
			}
		}
		putchar('\n');
	}

	if (size <= 0)
	{
		putchar('\n');
	}
}
