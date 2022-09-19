#include "main.h"
/**
 * _strncat - concatenates two strings up to the nth byte from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to be appended to dest.
 *
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l1 = 0;
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		l1++;
		i++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[l1 + i] = src[i];
	}
	return (*&dest);
}
