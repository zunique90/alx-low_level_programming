#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all single digit numbers of base 10 from 0 using putchar
 *
 * Return: (0) Success
 */

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
		putchar(d + '0');

	putchar('\n');

	return (0);
