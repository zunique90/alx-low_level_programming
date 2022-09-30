#include <stdio.h>

/**
 * main - prints all arguments it receives followed by a new line
 * @argc: number of command line arguments
 * @argv: array size of argc
 *
 * Return: (0) Success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
