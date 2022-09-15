#include <stdio.h>

/**
 * main - entry point
 * program print numbers 1 to 100, but prints "Fizz" in place of multiples of 3
 * "Buzz" in place of multiples of 5,
 *  and "FizzBuzz" in place of multiples of 5 and 3
 *
 *  Return: (0) Success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
