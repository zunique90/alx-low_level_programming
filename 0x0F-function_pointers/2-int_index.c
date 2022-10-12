#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: function pointer
 * Return: If no element matches or size <= 0 - -1
 * otherwise the index of the first element for which cmp doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, c;

	c = 0;
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				c++;
				return (i);
			}
		}
	}
	if (size <= 0 || c == 0)
		return (-1);
	else
		return (0);
}
