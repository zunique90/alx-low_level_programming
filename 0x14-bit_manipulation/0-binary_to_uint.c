#include "main.h"
/**
 * _pow - raise to power num
 * @num: number
 * @n: number of times
 * Return: power to number
 */
unsigned int _pow(unsigned int num, unsigned int n)
{
	unsigned int sum, i;

	sum = 1;
	for (i = 0; i < n; i++)
	{
		sum = sum * num;

	}
	return (sum);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number
 * or 0 if b is NULL, or there is one or more char in b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int dec, i, k;

	if (b == NULL)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (((b[k]) != '0') && ((b[k]) != '1') && ((b[k]) != '\0'))
			return (0);
	}
	k = k - 1;
	dec = 0;
	i = 0;
	while (b[i] != '\0')
	{
		if ((b[k - i]) == '1')
		{
			if (i == 0)
				dec += 1;
			else
				dec += _pow(2, i);
		}
		i++;
	}
	return (dec);
}
