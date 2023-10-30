#include "main.h"


/**
 * flip_bits - returns the number of bits after flip
 * @n: the first bit
 * @m: the second bit
 *
 * Return: the number of bits after flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned int result;

	result = n ^ m;
	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
		
