#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the character to be checked
 *
 * Return: 1 if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	return (1);

	else
	return (0);
}
