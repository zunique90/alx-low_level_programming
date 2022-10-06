#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of element in the array
 * @size: byte size of each array element
 *
 * Return: On success - a pointer to the allocated memory
 * if function fails, or if nmemb = 0, or size = 0 - NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;
	char *d;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(size * nmemb);

	if (c == NULL)
		return (NULL);

	d = c;

	for (i = 0; i < (size * nmemb); i++)
		d[i] = '\0';

	return (c);
}
