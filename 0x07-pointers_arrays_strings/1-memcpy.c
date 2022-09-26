#include "main.h"

/**
 * _memcpy - copies 'n' bytes from memory area 'src' to memory area 'dest'
 * @n: n bytes to be copied from 'src' to 'dest'
 * @src: source memory area
 * @dest: destination memory area
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
