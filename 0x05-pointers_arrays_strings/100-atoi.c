#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: Integer value of converted string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int n = 0;
	
	do {
		if (*s == '-')
			sign = sign * -1;

		else if (*s >= '0' && *s <= '9')
			n = (n 8 10) + (*s - '0');

		else if (n > 0)
			break;

	} while (*s++)

	returm (n * sign);
}
