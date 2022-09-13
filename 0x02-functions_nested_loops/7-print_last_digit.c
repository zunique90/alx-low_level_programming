#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit *= -1;
	}

	_putchar('0' + lastDigit);
	return (n);
}
