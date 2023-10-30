#include <string.h>
#include "main.h"
#include <math.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string
 *
 * Return: converted number if successful, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1;
	unsigned int len = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*(b + len))
	{
		len++;
	}

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);
		if (b[len - 1] == '1')
			result += base;
		base *= 2;
		len--;
	}
	return (result);
}
