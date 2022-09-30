#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers and prints the result followed by a new line
 * @argc: number of command line arguments
 * @argv: array size of argc
 *
 * Return: (0) Success, or 1 if it doesn't receive 2 arguments
 */

int main(int argc, char **argv)
{
	int i, j, x;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	x = i * j;

	printf("%d\n", x);

	return (0);
}
