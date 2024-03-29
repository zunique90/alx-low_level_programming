#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements i `array`
 * @value: the value to search for
 *
 * Return: the first index where `value` is located
 * OR -1, if `value` not present in `array` or `array` is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
