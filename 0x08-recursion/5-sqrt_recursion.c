#include "main.h"
/**
 * get_sqrt - finds square root of a given number
 * @n: given number
 * @y: root to be tested
 *
 * Return: natural square root of n OR -1 if n doesn't have natural square root
 */
int get_sqrt(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if ((y * y) > n)
	{
		return (-1);
	}
	return (get_sqrt(n, y + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: given number
 *
 * Return: natural square root of n OR -1 if n doesn't have natural square root
 */

int _sqrt_recursion(int n)
{
	return (get_sqrt(n, 1));
}
