#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter of each element of array
 *@array: array
 *@size: size of the array
 *@action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
