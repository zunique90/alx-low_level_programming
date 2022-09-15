#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle using the character '#'
 * @size: is the size of the triangle
 *
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int i;
	int j;
	char;


	c = '#';
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j > size; j++)
		{
			if ((j + i) < size)
			{
				putchar(' ');
			}
			if ((j + i) >= size)
			{
				putchar('#');
			}
		}
		putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
