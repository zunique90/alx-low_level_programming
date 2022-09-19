#include "main.h"
/**
 * _strcat - concatenates string in *src to the string in *dest
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int l1 = 0;
	int l2 = 0;
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		l1++;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		l2++;
		i++;
	}

	for (i = 0; i <= l2; i++)
	{
		dest[l1 + i] = src[i];
	}
	return (*&dest);
}
