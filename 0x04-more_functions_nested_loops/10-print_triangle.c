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

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for ((j = size - 1); j > 0; j--)
			{
				putchar(' ');
			}

			for (j = 0; j < i; j++)
			{
				putchar('#');
			}
			
			if (i == size)
			{
				continue;
			}
		
			putchar('\n');
		}
	}
	putchar('\n');
}
