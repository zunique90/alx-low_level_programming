#include "main.h"
/**
 * _strncpy - Copies a string from src to dest
 * @dest: destination string
 * @src: source string
 * @n: max number of bytes to be copied from src to dest
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (*&dest);
}
