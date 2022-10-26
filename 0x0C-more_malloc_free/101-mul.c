#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point of the program
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	long int mul;
	int i, j;

	mul = 0;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", mul);
	return (0);
}
