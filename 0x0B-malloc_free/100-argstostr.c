#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: arguments
 * Return: if ac || av = 0, or if it fails - NULL
 * Otherwise return pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, a, b;
	int c = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			c++;
	}

	s = malloc(sizeof(char) * c + 1);

	if (s == NULL)
		return (NULL);

	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			s[i++] = av[a][b];

		s[i++] = '\n';
	}

	s[c] = '\0';

	return (s);
}
