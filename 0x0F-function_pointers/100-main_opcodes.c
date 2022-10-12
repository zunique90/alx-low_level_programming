#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes of the main function
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: list of opcodes
 */
int main(int argc, char *argv[])
{
	unsigned int i;
	unsigned char bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (argv[1] < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; atoi(argv[1]) > i; i++)
	{
		printf("%x ", *((unsigned char *)(&main + 1)));
	}
}
