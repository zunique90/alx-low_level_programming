#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: the string to be printed
 */
void puts2(char *str)
{
	int o = 0;
	int p = 0;

	while (*(str + o) != '\0')
	{
		o++;
	}

	while (p < o)
	{
		if (p % 2 == 0)
		{
			_putchar(str[p]);
		}
		p++
	}
	_putchar('\n');
}
