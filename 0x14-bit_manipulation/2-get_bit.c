#include "main.h"
#include <stdio.h>

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: the binary number
 * @index: given position
 *
 * Return: the value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
