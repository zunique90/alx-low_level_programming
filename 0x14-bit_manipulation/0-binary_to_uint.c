#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number
 * or 0 if b is NULL, or there is one or more char in b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int l, bin;

	if (!b)
		return (0);

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, bin = 1; l >= 0; l--, bin *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);

		if (b[l] & 1)
			dec += bin;
	}
	return (dec);
}
