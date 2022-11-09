#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @*n: pointer to the number
 * @index: given poistion
 *
 * Return: 1 if success or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	/*bitwise NOT and AND 1 at index*/
	*n &= ~(1 << index);
	return (1);
}
