#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: is the character to be checked
 *
 * Return: alphabetic character 1; not 0.
 */
int _isalpha(int c);
{
	if ((c > 66 && c < 91) || (c > 98 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
