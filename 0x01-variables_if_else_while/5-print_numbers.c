#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all single digit numbers in base 10
 *
 * Return: (0) Success
 */

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
		printf("%i", d);
	putchar('\n');

	return (0);
}
