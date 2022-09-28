#include "main.h"
/**
 * chk_div - checks if n is divisible or not
 * @n: number to be checked
 * @d: divisor
 *
 * Return: 0 if n is divisible, otherwise 1
 */
int chk_div(int n, int d)
{
	if ((n % d) == 0)
	{
		return (0);
	}
	if ((n / 2) == d)
	{
		return (1);
	}
	return (chk_div(n, d + 1));
}
/**
 * is_prime_number - returns 1 if n is a prime number, else returns 0
 * @n: given number
 *
 * Return: 1 if n is a prime number, else 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (chk_div(n, i));
}
