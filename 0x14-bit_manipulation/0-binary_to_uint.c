#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number
 * or 0 if b is null, or there is one or more chars in b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i;

	if (b == NULL)
		return (0);

	n = 0;
	for (i = 0; *(b + i); i++)
	{
		n = n << 1;
		if (*(b + i) == '1')
			n = n | 1;
		else if (*(b + i) != '0')
			return (0);
	}
	return (n);
}
