#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;

	if ((i >> 31) & 1)
		return (0);
	else
		return (1);
}
