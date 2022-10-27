#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be printed in binary representation
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	int i, bin, l;

	l = 0;
	if (n == 0)
		_putchar('0');
	for  (i = 63; i >= 0; i--)
	{
		bin = (n >> i);
		if (bin != 0)
			l = 1;
		if (l != 0)
		{
			if (bin & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
