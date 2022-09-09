#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the lower case alphabets in reverse
 *
 * Result: (0) Success
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
