#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all the alphabets in lower case except q and e
 *
 * Return: (0) Success
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
			putchar(a);
	}
	putchar('\n');

	return (0);
}
