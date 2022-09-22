#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: given number
 *
 * Return: factorial of 'n' OR -1 to indicate an error if 'n' is less than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
