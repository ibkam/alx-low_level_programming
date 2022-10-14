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
	size i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (-1);
	}
	return (-1);
}
