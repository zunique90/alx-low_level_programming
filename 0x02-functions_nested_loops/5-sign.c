#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: is the number to be checked
 *
 * Return: greater than zero 1
 * equals zero 0
 * less than zero -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
