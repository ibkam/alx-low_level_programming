#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: character to be checked
 *
 * Return: 0 if success
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	return (1);

	else
	return (0);
}
