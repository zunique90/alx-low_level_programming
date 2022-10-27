#include "main.h"
/**
 * flip_bits - returns the number of bits to be flipped,
 * to get from one number to another.
 * @n: the number to be flipped
 * @m: the number to flip n to
 * Return: number of bits to be flipped to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, b;

	b = 0;
	for (i = 0; i < 64; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			b++;
	}
	return (b);
}
