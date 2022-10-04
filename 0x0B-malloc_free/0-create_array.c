#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of the array
 * @c: the character to be inserted
 *
 * Return:Null if size is 0 or null if if fails and a pointer if normal
 *
 */
char *create_array(unsigned int size, char c)
{
	char array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(size of(char) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
