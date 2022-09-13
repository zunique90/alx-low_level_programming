#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 lowercase; 0 not.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
