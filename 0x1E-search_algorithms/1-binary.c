#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in `array`
 * @value: the value to search for
 * Return: the index where `value` is located
 * OR -1, if `array` is NULL or `value` is not in `array`
 */

int binary_search(int *array, size_t size, int value)
{
	size_t idx, l, r;

	if (!array)
		return (-1);

	for (l = 0; r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (idx = l; idx < r; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);

		idx = l + (r - l) / 2;
		if (array[idx] == value)
			return (idx);
		if (array[idx] > value)
			r = idx - 1;
		else
			l = idx + 1;
	}
	return (-1)
}
