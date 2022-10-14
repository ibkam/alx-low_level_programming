#include "function_pointers.h"

/**
 * int_index -search for an interger in an array
 * @size:  is the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * @array: array to be searched
 *
 * Return: index of the first element found,
 *                                         -1 if no element found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
