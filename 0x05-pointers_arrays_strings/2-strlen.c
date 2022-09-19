#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be counted
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
}
