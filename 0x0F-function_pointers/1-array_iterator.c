#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function on each element of array
 * @array: ointer to an array
 * @size : size of an array
 * @action: callback function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
