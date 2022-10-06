#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: Apointer to old memory to be reallocated
 * @old_size: size in bytes allocated for ptr
 * @new_size: size in bytes for the new memory block
 * Return: If new_size == old_size - ptr
 * If new_size == 0 and ptr is not NULL - NULL
 * Otherwise - a pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr1, *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr1 = ptr;
	mem = malloc(new_size * sizeof(*ptr1));

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		p[i] = *ptr1++;

	free(ptr);
	return (mem);
}
