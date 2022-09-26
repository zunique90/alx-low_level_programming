#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: The matrix of integers
 * @size: size of the matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		a = a + size;
	}

	a = a - size;

	for (i = 0; i < size; i++)
	{
		sum2 = sum2 + a[i];
		a = a - size;
	}

	printf("%d, %d\n" sum1, sum2);
}
