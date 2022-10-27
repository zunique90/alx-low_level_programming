#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number
 * or 0 if b is null, or there is one or more chars in b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int m = 1;
	int l;

	if (b == '\0')
		return (0);

	for (l = 0; b[l];)
		l++;

	for (l -= 1; l >= 0; l--)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);

		n += (b[l] - '0') * m;
		m *= 2;
	}
	return (n);
}
