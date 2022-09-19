#include "main.h"
/**
 * _strcpy - copies a string, including the null byte, to a buffer
 * @dest: A buffer to copy the string to
 * @src: The source string to copy
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
