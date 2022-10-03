#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of str.
 * @str: string to be duplicated
 *
 * Return: pointer to duplicate string on success
 * NULL if str = NULL, or if insufficient memory
 */

char *_strdup(char *str)
{
	char *str1;
	int i;
	int size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		size++;

	str1 = malloc((size + 1) * sizeof(char));

	if (str1 == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		str1[i] = str[i];

	return (str1);
}
