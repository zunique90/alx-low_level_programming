#include "main.h"

/**
 * _memset - fills the first 'n' bytes of memory area
 * pointed to be 's' with a constant byte 'b'
 * @n: n bytes we want to fill
 * @s: pointer to memory area to be filled
 * @b: constant to fill the memory area with
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
