#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the alphabets in lower case followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a'

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
