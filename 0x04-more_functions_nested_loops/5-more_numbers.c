#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 *
 */

void more_numbers(void)
{
	char c;
	int i;
	int j;
	int k;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			j = i / 10;
			k = i % 10;
			if (i >= 10)
				_putchar(j + '0');
			if (i == 10)
				k = 0;
			_putchar(k + '0');
		}
	}
}
