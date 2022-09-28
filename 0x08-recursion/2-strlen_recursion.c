#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be returned
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l = l + _strlen_recursion(s + 1);
	}

	return (l);
}
