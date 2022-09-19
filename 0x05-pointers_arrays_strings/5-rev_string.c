#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int b;

	while (*(s + i) != 0)
	{
		i++;
	}
	if ((i % 2) == 0)
	{
		b = (i / 2);
	}
	else
	{
		b = (i / 2) + 1;
	}

	i--;
	while (i >= b)
	{
		char c = *(s + j);

		*(s + j) = *(s + i);
		*(s + i) = c;
		j++;
		i--;
	}
}
