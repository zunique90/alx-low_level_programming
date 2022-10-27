#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: the index of the bit to get value from
 * Return: value of the bit at the given index, or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (n != 0)
		return ((n & (1 << index)) >> index);
	else
		return (-1);
}
