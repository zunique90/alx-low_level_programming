#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: array row size
 * @height: array column size
 * Return: pointer to the 2D array of integers on success,
 * If width or height is <= 0 or function fails - NULL
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int h;
	int w;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		p[h] = malloc(width * sizeof(int));

		if (p[h] == NULL)
		{
			for ( ; h >= 0; h--)
				free(p[h]);

			free(p);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			p[h][w] = 0;
	}
	return (p);
}
